Position Fun ( List L, ElementType X, int left, int right )
{
  int center;
  if(left > right)
    return NotFound;
  center = left + （right - left)/2;  //直接平均可能會溢位，所以用此算法
 
  if(L->Data[center] > X)
    return Fun(L, X, left, center - 1);
  else if(L->Data[center] < X)
    return Fun(L, X, center + 1, right);
  else
    return center;  //最後檢測相等是因為多數搜尋狀況不是大於要不就小於
}

Position BinarySearch( List L, ElementType X )
{
  return Fun(L, X, 0, L->Last);
}