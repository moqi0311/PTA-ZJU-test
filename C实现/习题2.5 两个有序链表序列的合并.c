int Compare(ElementType a, ElementType b)
{
    if(a > b) return 1;
    else if(a == b) return 0;
    else return -1;
}

void attach(ElementType data, List L)
{
    List tmp;
    tmp = (List)malloc(sizeof(struct Node));
    tmp->Data = data;
    L->Next = tmp;
    L = tmp;//it's my mistake ,it need to notice
}

List Merge( List L1, List L2 )
{
    List front, rear;
    rear = (List)malloc(sizeof(struct Node));
    front = rear;
    //tmp1 = L1; tmp2 = L2;
    if(L1 && L2)
    {
        L1 = L1->Next;
        L2 = L2->Next;
    }

    while(L1 && L2)
    {
        switch(Compare(L1->Data, L2->Data))
        {
            case 1: attach(L2->Data, rear); L2 = L2->Next; break;
            case 0: attach(L1->Data, rear); attach(L2->Data, rear); L2 = L2->Next; L1 = L1->Next; break;
            case -1: attach(L1->Data, rear); L1 = L1->Next; break;
        }
    }

    for(; L1 ; L1 = L1->Next) attach(L1->Data, rear);
    for(; L2 ; L2 = L2->Next) attach(L2->Data, rear);

    rear->Next = NULL;
    //free(tmp1); free(tmp2);
    return front;
}