//��һ�ֽⷨ
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

//�ڶ��ֽⷨ��������ϵģ����ҵ�λ�ã�Ȼ������λ���룬ǰ����ٶȿ�һЩ
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

