import java.util.Scanner;

public class Main
{
	private int n, head, tail, maxHead, maxTail;
	private int[] a = new int[100003];
	
	public static void main(String[] args)
	{
		Main test = new Main();
		test.go();
	}
	
	public void go()
	{
		Scanner in = new Scanner(System.in);
		n = in.nextInt();
		for(int i = 0; i < n; i++)
		{
			a[i] = in.nextInt();
		}
		
		MaxContiousList list = new MaxContiousList(n, a);
		list.maxContiousList();
		
		System.out.print(a[list.getMaxHead()]);
		for(int i = list.getMaxHead() + 1; i <= list.getMaxTail(); i++)
		{
			System.out.printf(" %d", a[i]);        
		}
	}	
}

class MaxContiousList
{
	private int maxHead, maxTail, maxCnt;
	private int[] a = new int[100003];
	
	public MaxContiousList(int maxCnt, int[] a)
	{
		maxHead = maxTail = 0;
		this.maxCnt = maxCnt;
		this.a = a;
	}
	
	public int getMaxHead()
	{
		return maxHead;
	}
	
	public int getMaxTail()
	{
		return maxTail;
	}
	
	public void maxContiousList()
	{
		int head = 0;
		int tail = 0;
		int i = 0;
		
		while(i < maxCnt)
		{
			if(a[i] < a[i + 1])
			{
				tail++;
				i++;
			}
			else
			{
				if((tail - head) > (maxTail - maxHead))
				{
					maxHead = head;
					maxTail = tail;
				}
				head = tail = ++i;
			}
		}
		if((tail - head) > (maxTail - maxHead))
		{
			maxHead = head;
			maxTail = tail;
		}
	}
}

