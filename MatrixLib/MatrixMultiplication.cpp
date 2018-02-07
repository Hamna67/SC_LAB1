#include "stdafx.h"
#include "MatrixLib.h"



int** Multiply(int ** A, int r1, int c1, int ** B, int r2, int c2)
{
	int** Matrix = new int*[r1];
	for (int i = 0; i < r1; ++i)
		Matrix[i] = new int[c2];
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c1; j++) {
			int sum = 0;
			for (int k = 0; k < r2; k++) {
				sum = sum + (A[i][k] * B[k][j]);
			}
			Matrix[i][j] = sum;
		}
	}
	return Matrix;
}
