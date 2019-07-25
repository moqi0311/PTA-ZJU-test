import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Main test = new Main();
		test.go();
	}
	
	public void go()
	{
		int K, i, MaxSum;
        Scanner in = new Scanner(System.in);
		int[] List = new int[100000];
		K = in.nextInt();
		for(i = 0; i < K; i++)
		{
			List[i] = in.nextInt();
		}	
	
	
		MaxSum = maxSubseqSum4(List, K);
		
		System.out.printf("%d", MaxSum);
    }
	

    public int maxSubseqSum4(int[] List, int N)
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
}