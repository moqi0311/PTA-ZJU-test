//����������������������ӡ������������һ����ȫ���մ�С���е�����
bool IsBST ( BinTree T )
{
    if(!T || (!T->Left && !T->Right))
        return true;
    ElementType PreData, NowData;
    int m;
    int i = 0;
    BinTree Q[100];
    int tail;
    tail = -1;
    PreData = NowData = 0;
    
    while(T || tail >= 0)
    {
        while(T)
        {
            Q[++tail] = T;
            T = T->Left;
        } 
        T = Q[tail];
        NowData = T->Data;
        if(PreData <= NowData)
            PreData = NowData;
        else
            return false;
        tail--;
        T = T->Right;       
    }
    
    return true;    
}

//�����ò��������������������������ұ�������������������ܴ�С�����㡣
bool IsBST ( BinTree T )
{
if(!T)
return true;
int LeftCount, RightCount;
BinTree Q[100];
int head, tail;
head = tail = LeftCount = RightCount = 0;
Q[head] = T;
tail++;

while(head < tail)
{
T = Q[head];
head++;
if(T->Left)
{
Q[tail] = T->Left;
if(T->Data <= Q[tail]->Data)
return false;
tail++;
}
if(T->Right)
{
Q[tail] = T->Right;
if(T->Data >= Q[tail]->Data)
return false;
tail++;
}
}
return true;
}