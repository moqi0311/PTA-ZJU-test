Position Fun ( List L, ElementType X, int left, int right )
{
  int center;
  if(left > right)
    return NotFound;
  center = left + ��right - left)/2;  //ֱ��ƽ�����ܕ���λ�������ô��㷨
 
  if(L->Data[center] > X)
    return Fun(L, X, left, center - 1);
  else if(L->Data[center] < X)
    return Fun(L, X, center + 1, right);
  else
    return center;  //����z�y������������ь���r���Ǵ��Ҫ����С�
}

Position BinarySearch( List L, ElementType X )
{
  return Fun(L, X, 0, L->Last);
}