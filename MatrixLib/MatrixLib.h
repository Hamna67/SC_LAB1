// MatrixLib.h

#pragma once

using namespace System;

namespace MatrixLib {

	public ref class Class1
	{
		int** MatrixAdd(int **A, int **B, int r, int c);
		int** MatrixSub(int **A, int **B, int r, int c);
		// TODO: Add your methods for this class here.
		int ** MatrixMultiply(int ** A, int r1, int c1, int ** B, int r2, int c2);
	};
}
