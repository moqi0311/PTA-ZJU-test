#include <stdio.h>

int N;
int a[10];
bool Flag[10];

void dfs(int step);

   int main() 
   {
       N = 0;
	for(int i = 0; i < 10; i++)
	{
		a[i] = 0;
		Flag[i] = false;
	}

       scanf("%d", &N);		
	dfs(1);	

       return 0;	
   }


void dfs(int step)
{
	int i;
	if(step == N + 1)
	{
		for(i = 1; i <= N; i++)
		{
			printf("%d", a[i]);
		}
		printf("\n");
		return;
	}
	
	for(i = 1; i <= N; i++)
	{
		if(!Flag[i])
		{
			a[step] = i;
			Flag[i] = true;
			dfs(step + 1);
			Flag[i] = false;
		}			
	}
	return;
}