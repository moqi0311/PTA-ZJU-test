/*
�˴���ԭ��ʽչ�����õ�10^n*a1*1 + 10^(n - 1)*a1*2 + ���� + 10^(1)*a1*(n-1) + 10^0*a1*n;
��˿�������һ������ֱ���ʮ��ǧ������Ȼ���ٴӸ�λ����λ���δ�ӡ�������ɣ����ԭ����
��������N��Ȼ��ȡ����������λ������õ���ΪӦ���������
*/

#include <stdio.h>
#define MAXSIZE 100001

int MatrixSum(int baseNum, int cntNum, int matrix[]);

int main()
{
  int A, N, sum;
  int OutSum[MAXSIZE];
  scanf("%u %u", &A, &N);
  //if(A < 1 || A > 9 || N < 0 || N > 100000)
    //return 0;
  sum = MatrixSum(A, N, OutSum);
  
  for(;sum >= 0; sum--)
    printf("%u", OutSum[sum]);
  return 0;
}

int MatrixSum(int baseNum, int cntNum, int matrix[])
{
  int i = 0, tmp = 0;
  
  if(cntNum == 0)
  {
    matrix[0] = 0;
    return i;
  }

  for(; i < cntNum; i++)
  {
    matrix[i] = (baseNum * (cntNum - i) + tmp) % 10;
    tmp = (baseNum * (cntNum - i) + tmp) / 10;
  }
  if(tmp)
    matrix[i] = tmp;
  else
    i--;
  return i;
}