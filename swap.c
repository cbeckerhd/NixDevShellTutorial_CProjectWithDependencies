#include <stdio.h>
#include <cblas.h>

void print2x2(double *M);

void main()
{
  double A[4] = {
    1, 2,
    3, 4
  };

  double B[4] = {
    0, 1,
    1, 0
  };

  double C[4];

  cblas_dgemm(
    CblasRowMajor, CblasNoTrans, CblasNoTrans,
    2, 2, 2,
    1, A, 2, B, 2,
    0, C, 2
  );

  printf("A\n");
  print2x2(A);

  printf("B\n");
  print2x2(B);

  printf("C\n");
  print2x2(C);
}

void print2x2(double *M)
{
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%1.0f ", M[2 * i + j]);
    }
    printf("\n");
  }
  printf("\n");
}
