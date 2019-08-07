ElementType Find( List L, int m )
{
    int a[100000];
    int cnt = 0;
    while(L)
    {
        a[cnt] = L->Data;
        cnt++;
        L = L->Next;
    }
    if(m > cnt)
        return ERROR;
    else
        return a[cnt - m];
}