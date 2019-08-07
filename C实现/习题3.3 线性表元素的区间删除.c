List Delete( List L, ElementType minD, ElementType maxD )
{
    int i;
    List L1;
    L1 = (List)malloc(sizeof(struct LNode));
    L1->Last = -1;
    for(i = 0; i <= L->Last;i++)
    {
        if(L->Data[i] <= minD || L->Data[i] >= maxD)
        {
            L1->Last++;
            L1->Data[L1->Last] = L->Data[i];            
        }
    }

    for(i = 0; i <= L1->Last; i++)
    {
        L->Data[i] = L1->Data[i];
    }
    L->Last = L1->Last;
    free(L1);

    return L;
}