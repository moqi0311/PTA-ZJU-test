import java.util.Scanner;

public class Main {
	private int N;
	private int[] a = new int[10];
	private boolean[] Flag = new boolean[10];
	
	public Main()
	{
		N = 0;
		for(int i = 0; i < 10; i++)
		{
			a[i] = 0;
			Flag[i] = false;
		}
	}
	
    public static void main(String[] args) {
       Main test = new Main();
	   test.go();
    }
	
	public void go()
	{					
		Scanner in = new Scanner(System.in);
		N = in.nextInt();
		
		dfs(1);		
	}
	
	public void dfs(int step)
	{
		int i;
		if(step == N + 1)
		{
			for(i = 1; i <= N; i++)
			{
				System.out.print(a[i]);
			}
			System.out.println();
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
}