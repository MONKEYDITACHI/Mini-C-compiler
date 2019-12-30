#include<stdio.h>

int main()
{
	Matrix m[2][2];
	//initialization
	m[0][0]=2;
	m[0][1]=3;
	m[1][0]=4;
	m[1][1]=5;
	
	printf("%f",m[0][1]);
	/*
	Matrix n[2][2];
	n = m;
	m = m+n;
	m = m*n;
	m = m-n*n;*/ 
}
