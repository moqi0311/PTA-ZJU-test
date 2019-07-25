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
		int n,k, i = 0;
		int[] a = new int[200];
		Scanner in = new Scanner(System.in);
		n = in.nextInt();
		k = in.nextInt();
		while(in.hasNextInt())
		{
			a[i] = in.nextInt();
			i++;
		}
		
		k=k%n;
		System.out.printf("%d",a[k]);
        for( i=k+1;i<n;i++) System.out.printf(" %d",a[i]);
        for( i=0;i<=k-1;i++) System.out.printf(" %d",a[i]);
        System.out.println();
	}
}