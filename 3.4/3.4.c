#include <stdio.h>
#define MAXSIZE 100003   //暂时不懂为什么大3就能通过，边界应该没有问题

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
	 if((p1->tail - p1->head) > (p2->tail - p2->head))
            {
				p2->head = p1->head;
				p2->tail = p1->tail;
            }
	//printf("%d\n", i);
	free(p1);
    return p2;
}