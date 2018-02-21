#include"Stdafx.h"
#include<iostream>

using namespace std;

int** MatrixAdd(int **A, int **B, int r, int c) {
    int **Add = A;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            Add[i][j] = A[i][j] + B[i][j];
        }
    }
    return Add;
}

int** MatrixSub(int **A, int **B, int r, int c) {
    int **Sub = A;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            Sub[i][j] = A[i][j] - B[i][j];
        }
    }
    return Sub;
}