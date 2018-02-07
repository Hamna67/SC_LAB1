#include "stdafx.h"

#include "MatrixLib.h"
#include "MatrixMultiplication.cpp"

namespace MatrixLib {

	int** MatrixLib::Class1::MatrixMultiply(int ** A, int r1, int c1, int ** B, int r2, int c2)
	{
		if (c1 == r2)
		{

			return Multiply(A, r1, c1, B, r2, c2);
		}
	}
}
