#include "matops.h"

void multiply (float** a, float** b, float** c, int n)
{
  int i,j,k;
  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      c[i][j] = 0;

  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      for(k=0; k<n; k++)
	c[i][j] = a[i][k] * b[k][j];
}

//----------------------------------------------------------

void print_matrix(float** a, int n, char* mat_name)
{
  printf("Matrix %s:\n", mat_name);
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++)
      printf("%g ", a[i][j]);
    printf("\n");
  }
  printf("\n");
}
