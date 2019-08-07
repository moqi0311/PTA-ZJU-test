//利用中序遍历，中序遍历打印出来的数组是一个完全按照大小排列的数组
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

//考虑用层序遍历，但是最后卡在左树的最右边数和右树最左边数可能大小不满足。
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