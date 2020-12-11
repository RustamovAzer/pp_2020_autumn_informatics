// Copyright 2020 Rustamov Azer
#ifndef MODULES_TASK_2_RUSTAMOV_A_GAUSS_VERTICAL_GAUSS_VERTICAL_H_
#define MODULES_TASK_2_RUSTAMOV_A_GAUSS_VERTICAL_GAUSS_VERTICAL_H_
#include <vector>

using Matrix = std::vector<double>;

void printMatrix(const Matrix& vec, int rows, int cols);
Matrix RandomMatrix(int rows, int cols);
Matrix SequentialGauss(const Matrix& matrix, int rows, int cols,
                        const Matrix& vec, int vector_size);
Matrix ParallelGauss(const Matrix& matrix, int rows, int cols,
                        const Matrix& vec, int vector_size);

#endif  // MODULES_TASK_2_RUSTAMOV_A_GAUSS_VERTICAL_GAUSS_VERTICAL_H_
