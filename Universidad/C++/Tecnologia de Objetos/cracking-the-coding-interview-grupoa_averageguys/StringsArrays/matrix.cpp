#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Matrix::Matrix(int rows, int cols) {
    this->rows = rows;
    this->cols = cols;
    this->matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        this->matrix[i] = (int*)malloc(cols * sizeof(int));
    }
};
Matrix::~Matrix() {
    for (int i = 0; i < rows; i++) {
        free(this->matrix[i]);
    }
    free(this->matrix);
};
void Matrix::set(int row, int col, int value) {
    this->matrix[row][col] = value;
};
int Matrix::get(int row, int col) {
    return this->matrix[row][col];
};
void Matrix::printM() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", this->matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
};
int Matrix::getRows() {
    return this->rows;
};
int Matrix::getCols() {
    return this->cols;
};
void Matrix::setCols(int cols) {
    this->cols = cols;
};
void Matrix::setRows(int rows) {
    this->rows = rows;
};
void Matrix::changeCols(int* vector, int col) {
    for (int i = 0; i < this->rows; i++) {
        this->matrix[i][col] = vector[i];
    }
};
void Matrix::changeRows(int* vector, int row) {
    for (int i = 0; i < this->cols; i++) {
        this->matrix[row][i] = vector[i];
    }
};
void Matrix::detectZeros(){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if(this->matrix[i][j] == 0){
                for (int k = 0; k < rows; k++) {
                    for (int l = 0; l < cols; l++) {
                        if(k == i || l == j){
                            set(k, l, -1);
                        }
                    }
                }
            }
        }
    }
    for (int k = 0; k < rows; k++) {
        for (int l = 0; l < cols; l++) {
            if(this->matrix[k][l] == -1){
                set(k, l, 0);
            }
        }
    }
}