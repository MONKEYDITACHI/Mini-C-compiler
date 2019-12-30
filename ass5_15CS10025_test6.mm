

int printd( float a);

Matrix** addMatrix(Matrix a[][2], Matrix b[][2])
{
	Matrix **c;
	c = a;
	c[0][0]=a[0][0] + b[0][0];
	return c;
}

int main()
{
	Matrix a[2][2] = {1.0,2.0,3.0,4.0};
	Matrix b[2][2] = {2.0,3.0,4.0,5.0};
	Matrix **c;
	c = addMatrix(a,b);
	
	printd(c[0][0]);
	
}
