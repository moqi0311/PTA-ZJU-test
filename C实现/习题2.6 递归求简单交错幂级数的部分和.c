//�ǵݹ�
double fn( double x, int n )
{
    int i; 
    double p = 1;
    for(i = n; i > 0; i--)
    {
        if(i != 1)
            p = 1 - p*x;
        else
            p *= x;
    }
    return p;
}

//�����⣬����û�в����
double fn( double x, int n )
{
    int sum, accum, i;
    if(n == 0)
        return 0;
    sum = fn(x, n - 1);//it's to accept the former data and join calculating
    accum = -1;
    for(i = 0; i < n; i++)
        accum *= -x;

    return (sum + accum);
}

//�ݹ龫���
double fn( double x, int n )
{
   int sum, accum, i;
    if(n == 0)
        return 0;
            
    return -1*pow(-x, n) + fn(x, n - 1);
}

//���˵ĵݹ�
double fn( double x, int n ){
	int k;
 
	if(n%2==0)
		k=-1;
	else
		k=1;
 
	if(n==0)
		return 0;
 
	return k*pow(x, n)+fn(x, n-1);
}

