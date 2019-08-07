//�ǵݹ�
double dist( double h, double p )
{
    double H;
    H = h;
    h *= p;
    while(h > TOL)
    {        
        H += 2*h;
        h *= p;
    }
    
    return H;
}

//�ݹ飬�����ݹ�ľ��ޣ���ȫʽ�ӣ�Ȼ�����������ĵ�����ȥ�������
double dist1( double h, double p )
{
    if(h < TOL)
        return 0;
    return h*2 + dist1(h * p, p);
}

double dist( double h, double p )
{
    if(h < TOL)
        return h;
    else
        return dist1(h, p) - h;
}