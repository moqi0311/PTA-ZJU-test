import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
       Main test = new Main();
	   test.go();
    }

    public void go()
    {
         int a = 0;
        int b = 0;
        Scanner input = new Scanner(System.in);
        char c = 0;
        String s = new String();
		s = input.nextLine();
        for(int i = 0; i < s.length(); i++)
        {
             if(s.charAt(i) >= '0' && s.charAt(i) <= '9')
            {
                b = s.charAt(i) - '0';
                while(s.charAt(i+1) >= '0' && s.charAt(i+1) <= '9')
                {
                 i++;
                  b *= 10;
                 b += s.charAt(i) - '0';
                }
				//System.out.println("b = " + b + "a = "+ a);
            
				if(c == 0)a = b;
				else
				{
					//System.out.println("c = " + c);
					switch(c)
					{
						case '+': a += b; break;
						case '-': a -= b; break;
						case '*': a *= b; break;
						case '/': 
						if(b == 0)
						{
							System.out.print("ERROR");
							return;
						}
						else
						a /= b;
						break;
						default: System.out.print("ERROR"); return;
					}
                
				}
			}
			else
			{
				if(s.charAt(i) == '=') 
				{
					System.out.print(a);
					return;
				}
				else
				{
					c = s.charAt(i);
				}
			}
		}
    }
}