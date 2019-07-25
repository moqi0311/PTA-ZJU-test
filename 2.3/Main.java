import java.util.Scanner;

public class Main
{
	private static final int MAXSIZE = 100001;
	
	public static void main(String[] args)
	{
		Main test = new Main();
		test.go();
	}
	
	public void go()
	{
		int A, N, sum;
		int[] OutSum = new int[MAXSIZE];
		Scanner in = new Scanner(System.in);
		A = in.nextInt();
		N = in.nextInt();

		sum = MatrixSum(A, N, OutSum);
		
		for(;sum >= 0; sum--)
		System.out.printf("%d", OutSum[sum]);
		
	}
	
	int MatrixSum(int baseNum, int cntNum, int[] matrix)
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
		if(tmp > 0)
			matrix[i] = tmp;
		else
			i--;
		return i;
	}
}