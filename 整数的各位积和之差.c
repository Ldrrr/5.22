int f1(x)
{
    int t,a=1;
    while(x)
    {
        t=x%10;
        a*=t;
        x/=10;
    }
    return a;
}
int f2(x)
{
    int t,s=0;
    while(x)
    {
        t=x%10;
        s+=t;
        x/=10;
    }
    return s;
}
int subtractProductAndSum(int n)
{
    int a,b;
    a=f1(n);
    b=f2(n);
    return a-b;
}
