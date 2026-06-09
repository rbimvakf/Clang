#include <stdio.h>
#include <math.h>
int main()
{
	float a[2][2] = { {1,2},{3,4}};
	float* b[2] = { a, a + 1 };
	float coef, det=0;
	int d,sign;
	for (int j = 0; j < 2; j++)
		{
			if ( j % 2 == 0)
				sign = 1;
			else
				sign = -1;
			if(j==0)
			    coef = *(b[1] + 1);
			else
				coef = *(b[1] + 0);
			det=det+ sign* *(b[0] + j)*coef;
			
	}
	printf("a행렬의 determinant는 %4.1f입니다\n", det);
	d = sqrt(sizeof(a) / sizeof(float));
	printf("a행렬의 크기는 %d by %d 입니다\n", d,d);


}
