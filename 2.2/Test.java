public class Test
{
	public static void main(String[] args)
	{
		int[] a = new int[100];
		for(int i = 0; i < 10; i++)
		{
			a[i] = i;
		}
		
		for(int i = 0; i < 10; i++)
		{
			System.out.printf("%d ", a[i]);
		}
	}
}