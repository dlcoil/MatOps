#include "matops.h"

//------------------------------------------------------

int main(int argc, char*argv[])
{
  int i,j,k;
  int n=4;
  float** a, **b, **c;

  //allocate memory
  a = malloc(n* sizeof(float*));
  b = malloc(n* sizeof(float*));
  c = malloc(n* sizeof(float*));

  for(i=0; i<n; i++){
    a[i] = malloc(n*sizeof(float));
    b[i] = malloc(n*sizeof(float));
    c[i] = malloc(n*sizeof(float));

    for(j=0; j<n; j++){
      a[i][j] = i*j;
      b[i][j] = i+j;
      c[i][j] = 0;
    }
  }

  multiply(a,b,c,n);
  printf("Simple Matrix Multiplication!\n\n");
  print_matrix(a, n, "A");
  print_matrix(b, n, "B");
  print_matrix(c, n, "C=A*B");
  return 0;
}


//------------------------------------------------------
