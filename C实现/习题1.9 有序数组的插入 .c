//第一种解法
bool Insert( List L, ElementType X )
{
  Position i, j;
  
  if(L->Last == MAXSIZE - 1)
    return false;
  else
  {
     if(X < L->Data[L->Last])
     {
        L->Last++;
        L->Data[L->Last] = X;
        return true;
     }
     for(i = 0; i <= L->Last; i++)
     {  
         if(L->Data[i] == X)
           return false;
         else if(L->Data[i] < X)
         {
           for(j = L->Last; j >= i; j--)
           {
             L->Data[j + 1] = L->Data[j];
           }
           L->Data[i] = X;
           L->Last++;
           return true;
         }
      }
  }
}

//第二种解法，结合书上的，先找到位置，然后再移位插入，前面的速度快一些
bool Insert( List L, ElementType X )
{
  Position i, j;
  
  if(L->Last == MAXSIZE - 1)
    return false;
    
  //find the position  
  for(i = 0; i <= L->Last; i++)
  {
     if(X < L->Data[L->Last])
     {
       i = L->Last + 1;
       break;
     }
     if(L->Data[i] == X)
           return false;
      else if(L->Data[i] < X)
        break;
  }
  
  //insert the value
  for(j = L->Last; j >= i; j--)
  {
     L->Data[j + 1] = L->Data[j];
  }
  L->Data[i] = X;
  L->Last++;
  return true;
}

