#include <vector>
#include "utils.h"

typedef std::vector<std::vector<double>> matrix;

int main() {
  matrix m1 = generate_matrix(10, 5);
  print_matrix(m1);
  return 0;
}
