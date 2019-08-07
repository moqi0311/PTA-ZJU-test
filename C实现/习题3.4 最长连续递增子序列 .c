//暂时有点问题，最后一项无法通过测试，尝试了返回结构体。
#include <stdio.h>
#define MAXSIZE 100001

typedef struct HeadTail *PtrToPosition;
struct HeadTail{
    int head;
    int tail;    
};
typedef PtrToPosition Position;

Position MaxContiousList(int List[], int cnt);

int main()
{
    int i, n;
    int a[MAXSIZE];
    Position b;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    b = MaxContiousList(a, n);

    for(i = b->head; i < b->tail; i++)          
        printf("%d ", a[i]);        
    printf("%d", a[b->tail]);
    
	free(b);
	getchar();getchar();
	return 0;
}

Position MaxContiousList(int List[], int cnt)
{
    int i = 0;
    Position p1,p2;
	p1 = (Position)malloc(sizeof(struct HeadTail));
	p2 = (Position)malloc(sizeof(struct HeadTail));
    p1->head = p1->tail = p2->head = p2->tail = 0;
    while(i < cnt)
    {

		if(List[i] < List[i + 1])
		{
            p1->tail++;
			i++;
		}
        else
        {
            if((p1->tail - p1->head) > (p2->tail - p2->head))
            {
				p2->head = p1->head;
				p2->tail = p1->tail;
            }
            p1->head = p1->tail = ++i;
        }
    }
	free(p1);
    return p2;
}