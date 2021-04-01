#ifndef MULTITHREADED_MATMULT_UTILS_H
#define MULTITHREADED_MATMULT_UTILS_H

#include <random>
#include <vector>

inline std::mt19937 &generator();

float random_float(float min, float max);

void print_matrix(std::vector<std::vector<double>> m);

std::vector<std::vector<double>> generate_matrix(int rows, int cols);

#endif //MULTITHREADED_MATMULT_UTILS_H
