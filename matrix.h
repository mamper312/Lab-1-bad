#ifndef __MATRIX_H__
#define __MAREIX_H__
#include<time.h>
#include<windows.h>
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<locale.h>
struct Col
{
	double* column;
};
typedef struct Col col;
struct satrix
{
	struct Col* string;
};
typedef struct satrix Satrix;
struct Column
{
	double* column;
};
typedef struct Column column;
struct catrix
{
	struct Column* string;
};
typedef struct catrix Matrix;
void OutputMatrix(Matrix matrix, int n);
void FreeAll(Matrix matrix, int n);
void Determinant(Matrix matrix, int n);
<<<<<<< Updated upstream
void MatrixFromFile(FILE *input,Matrix matrix, int n);
void RandomMatrix(Matrix matrix, int n);
=======
void MatrixFromFile(FILE *input,Satrix matrix, int n);
void RandomMatrix(Satrix matrix, int n);
>>>>>>> Stashed changes
int MatrixDet(Matrix matrix, int n);
#endif // __MATRIX_H__
