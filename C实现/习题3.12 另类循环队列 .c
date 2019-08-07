bool IsFull(Queue Q)
{
    return (Q->Count == Q->MaxSize);
}

bool IsEmpty(Queue Q)
{
    return (Q->Count == 0);
}

bool AddQ( Queue Q, ElementType X )
{
    if(IsFull(Q))
    {
        printf("Queue Full\n");
        return false;
    }
    else
    {        
        Q->Data[(Q->Front + Q->Count) % Q->MaxSize] = X;
        Q->Count++;
        return true;
    }
}

ElementType DeleteQ( Queue Q )
{
    int tmp;
    if(IsEmpty(Q))
    {
        printf("Queue Empty\n");
        return ERROR;
    }
    else
    {
        Q->Count--;
        tmp = Q->Data[Q->Front];
        Q->Front = (Q->Front + 1) % Q->MaxSize;
        return tmp;
    }
}