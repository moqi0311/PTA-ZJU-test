//非递归
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

//递归，跳出递归的局限，补全式子，然后利用其它的调用消去多余的项
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