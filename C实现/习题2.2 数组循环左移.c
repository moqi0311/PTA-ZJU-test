#include <stdio.h>


void LeftMoveMatrix(int matrix[], int cnt, int num);

int main()
{
  int i;
  int n,m;
  int a[250];
  scanf("%d %d",&n, &m);
  for(i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  
  LeftMoveMatrix(a, n, m%n);
  
  for(i = m%n; i < n + m%n; i++)
  {
    if( i < n + m%n - 1)
      printf("%d ", a[i]);
    else
      printf("%d", a[i]);
  }

  return 0;
}

void LeftMoveMatrix(int matrix[], int cnt, int num)
{
  int i;
  for(i = 0; i < num; i++)
  {
    matrix[cnt++] = matrix[i];
  }
  return ;
}