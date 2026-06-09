#include <stdio.h>//#include <stdlib.h>
#define N 10
float* input_nByn(float (*)[N], int , char *);
void print_nBy1(float*, int, char*);
float* input_nBy1(float*, int, char*);
void print_nByn(float (*)[N], int, char *);
float* co(float (*)[N], float (*)[N] , int);
float* adj_f(float (*)[N], float (*)[N], int);
float   det(float (*)[N], float (*)[N], int);
float   det(float (*a)[N], float (*c)[N], int d)

{
	float deter = 0;
	int j;
	for (j = 0; j < d; j++)
	{
		deter = deter + a[j][1] * c[j][1];
	}
	return deter;
}


float* adj_f(float (*adj)[N], float (*c)[N], int d)
{
	int i, j;
	for (i = 0; i < d; i++)
	{
		for (j = 0; j < d; j++)
		{
			adj[i][j]= c[j][i];
		}
		printf("\n");
	}
	return adj;
}


float* co(float (*a)[N], float (*c)[N], int d)
{
	float c_[2][2];
	int i, j,m=0,n=0,k=0,l=0,sign;
	for (i = 0; i < d; i++)
	{
		for (j = 0; j < d; j++)
		{
			if ((i + j) % 2 == 0)
				sign = 1;
			else
				sign = -1;
			k = 0; l = 0;
			for (m = 0; m < d; m++)
			{
				for (n = 0; n < d; n++)
				{
					if (i != m && j != n)
					{
						c_[k][l] = a[m][n];
						if (l < d - 1)
							l++;
						if (l >= d - 1)
							k++; l = 0;
					}
				}
			}
			//char * s = "A의 소인수값 은: ";
			//print_nByn(c_, d-1, s);
			c[i][j] = sign * (c_[0][0] * c_[1][1] - c_[0][1] * c_[1][0]);
		}
	}
	return c;
}

float* input_nBy1(float *y , int d, char* s)
{
	int j;
	for (j = 0; j < d; j++)
	{
		printf("%d행(열)의 %s \n",j, s);
		scanf_s("%f", &y[j]);
	}
	return y;
}
void print_nBy1(float* a, int d, char* s)
{
	int i;
	printf("%s\n", s);
	for (i = 0; i < d; i++)
		printf("%6.1f", a[i]);
	printf("\n");
}
void print_nByn(float (*a)[N], int e, char* s)
{
	int i, j;
	printf("%s\n", s);
	for (i = 0; i < e; i++)
	{
		for (j = 0; j < e; j++)
		{
			printf("%6.1f", a[i][j]);
		}
		printf("\n");
	}
}

float* input_nByn(float (*a)[N], int d, char *s)
{
	int i, j;
	for (i = 0; i < d; i++)
	{
		for (j = 0; j < d; j++)
		{
			printf("%d행의 %d열의 %s \n", i, j, s);
			scanf_s("%f", &a[i][j]);//scanf_s("%f", *(a[i] + j));
		}
	}
	return a;
}

int main()
{
	float a_[N][N];//A상태값
	float (*a)[N]=a_; //배열 포인터
	float y_[N];//Y결과값
	float *y = y_; //포인터
	float c_[N][N];//A상태값
	float (*c)[N] = c_; //배열 포인터
	float adj_[N][N];//Adj값
	float (*adj)[N] = adj_; //배열 포인터
	float deter;

	//float *a[3]={a_, a_+1, a_+2};//포인터 배열
	int i, j , d; //n By n의 크기
	char* s;
	printf(" 상태값 a의 n By n 크기를 입력하세요\n");
	scanf_s("%d", &d);
	s = "A의 원소값을 입력하세요: ";
	a=input_nByn(a , d, s);
	s = "A의 원소값 은: ";
	print_nByn(a, d, s);
	s = "Y의 결과값을 입력하세요: ";
	y = input_nBy1(y, d, s);
	s = "Y의 결과값 은: ";
	print_nBy1(y, d, s);	//system("pause");
	c=co(a, c, d);
	s = "A의 cofactor값 은: ";
	print_nByn(c, d, s);
	adj = adj_f(adj, c, d);
	
	s = "A의 ADEJ값 은: ";
	print_nByn(adj, d, s);
	deter = det(a, c, d);
	printf("A의 determinant : %6.1f \n", deter);
	return 0;
}
