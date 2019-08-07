#include<stdio.h>

int main()
{
  int a,b;
  char c;
  scanf("%d",&a);
  while(scanf("%c",&c))
  {
    switch(c)
    {
      case '+': scanf("%d", &b); a += b; break;
      case '-': scanf("%d", &b); a -= b; break;
      case '*': scanf("%d", &b); a *= b; break;
      case '/': scanf("%d", &b);
      if(b != 0)
        {a /= b; break;}
      else
        {printf("ERROR\n"); return 0;}
      case '=': printf("%d\n", a); return 0;
      default: printf("ERROR\n"); return 0;
    }
  }
  return 0;
}

#include <stdio.h>
//#include <stdbool.h>

#define true 1
#define false 0

int main()
{
    int n, tmp;
    char ch;
    int flag;
    
    flag = true;
    scanf("%d", &n);
    while((ch = getchar()) != '=')
    {
//        printf("%c\n", ch); // for debug
        scanf("%d", &tmp);
//        printf("%d\n", tmp); // for debug
        if(tmp == 0 && ch == '/')
            flag = false;
        else
        {
            switch(ch)
            {
                case '+':
                    n += tmp;
                    break;
                case '-':
                    n -= tmp;
                    break;
                case '*':
                    n *= tmp;
                    break;
                case '/':
                    n /= tmp;
                    break;
                default:
                    flag = false;
            }
        }
        
        if(!flag)
            break;
    } 
    
    if(flag)
        printf("%d\n", n);
    else
        printf("ERROR\n");
        
    return 0;
}