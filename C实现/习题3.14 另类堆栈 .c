bool IsFull(Stack S)
{
    return (S->Top == S->MaxSize);
}

bool Push( Stack S, ElementType X )
{
    if(IsFull(S))
    {
        printf("Stack Full\n");
        return false;
    }        
    else
    {
        S->Data[(S->Top++)] = X;
        return true;
    }
}

bool IsEmpty(Stack S)
{
    return (S->Top == 0);
}

ElementType Pop( Stack S )
{
    if(IsEmpty(S))
    {
        printf("Stack Empty\n");
        return ERROR;
    }
    else
    {
        return (S->Data[--(S->Top)]);
    }

}