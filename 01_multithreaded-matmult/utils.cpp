#include <vector>
#include <iostream>
#include <random>

inline std::mt19937 &generator() {
  static thread_local std::mt19937 gen(std::random_device{}());
  return gen;
}

float random_float(float min, float max) {
  std::uniform_real_distribution<float> dist(min, max);
  return dist(generator());
}

void print_matrix(std::vector<std::vector<double>> m) {
  for (auto &rows: m) {
    for (auto &elem: rows) {
      std::cout << elem << " ";
    }
    std::cout << "\n";
  }
}

std::vector<std::vector<double>> generate_matrix(int rows, int cols) {
  std::vector<std::vector<double>> result;
  for (int i = 0; i < rows; i++) {
    std::vector<double> subarray;
    subarray.reserve(cols);
    for (int j = 0; j < cols; j++) {
      subarray.push_back(random_float(1, 50));
    }
    result.push_back(subarray);
  }
  return result;
}