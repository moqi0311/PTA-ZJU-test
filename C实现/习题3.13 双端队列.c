//目前没有运行成功
bool IsFull(Deque D)
{
    return ((D->Rear + 1) % D->MaxSize == D->Front);
}

bool IsEmpty(Deque D)
{
    return (D->Rear == D->Front);
}

bool Push( ElementType X, Deque D )
{
    if(IsFull(D))
    {
        return false;
    }
    else
    {       
        D->Data[D->Front] = X;     
        D->Front = ((D->Front + D->MaxSize) - 1) % D->MaxSize;    
        return true;
    }
}

ElementType Pop( Deque D )
{
    if(IsEmpty(D))
        return ERROR;
    else
    {
        D->Front = (D->Front + 1) % D->MaxSize;
        return D->Data[D->Front];
    }
}

bool Inject( ElementType X, Deque D )
{
    if(IsFull(D))
        return false;
    else
    {
        D->Rear = (D->Rear + 1) % D->MaxSize;
        D->Data[D->Rear] = X;
        return true;
    }
}

ElementType Eject( Deque D )
{
    if(IsEmpty(D))
        return ERROR;
    else
    {
        ElementType tmp;
        tmp = D->Data[D->Rear];
        D->Rear = ((D->Rear + D->MaxSize) - 1) % D->MaxSize;
        return tmp;
    }
}


//把头部变成实的，尾部变成空的就好了。原因未知
bool IsFull(Deque D)
{
    return ((D->Rear + 1) % D->MaxSize == D->Front);
}

bool IsEmpty(Deque D)
{
    return (D->Rear == D->Front);
}

bool Push( ElementType X, Deque D )
{
    if(IsFull(D))
    {
        return false;
    }
    else
    {      
        D->Front = ((D->Front + D->MaxSize) - 1) % D->MaxSize; 
        D->Data[D->Front] = X;                
        return true;
    }
}

ElementType Pop( Deque D )
{
    if(IsEmpty(D))
        return ERROR;
    else
    {
        ElementType tmp =  D->Data[D->Front];
        D->Front = (D->Front + 1) % D->MaxSize;
        return tmp;
    }
}

bool Inject( ElementType X, Deque D )
{
    if(IsFull(D))
        return false;
    else
    {
         D->Data[D->Rear] = X;
        D->Rear = (D->Rear + 1) % D->MaxSize;
        return true;
    }
}

ElementType Eject( Deque D )
{
    if(IsEmpty(D))
        return ERROR;
    else
    {        
        D->Rear = ((D->Rear + D->MaxSize) - 1) % D->MaxSize;
        return  D->Data[D->Rear];
    }
}