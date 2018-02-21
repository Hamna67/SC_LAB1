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
	int ** MatrixLib::Class1::MatrixAdd(int ** A, int ** B, int r, int c)
	{
		return MatrixAdd(A, B, r, c);
	}

	int ** MatrixLib::Class1::MatrixSub(int ** A, int ** B, int r, int c)
	{
		return MatrixSub(A, B, r, c);
	}

}
