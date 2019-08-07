#include <stdio.h>

int MaxSubseqSum4(int List[], int N);

void main()
{
	int K, i, MaxSum;
	int List[100000];
	scanf("%d", &K);
	for(i = 0; i < K; i++)
	{
		scanf("%d",&List[i]);
	}	


	MaxSum = MaxSubseqSum4(List, K);
	
	printf("%d", MaxSum);
	
	return;
}

int MaxSubseqSum4(int List[], int N)
{
	int i; 
	int ThisSum, MaxSum;
	
	ThisSum = MaxSum = 0;

	for(i = 0; i < N; i++)
	{
		ThisSum += List[i];
		if(ThisSum > MaxSum)
		{
			MaxSum = ThisSum;

		}
		else if(ThisSum < 0)
			ThisSum = 0;
	}

	return MaxSum;
}