int f(int x)
{
    int t;
    while(x)
    {
        if(x%10==0) return 0;
        x/=10;
    }
    return 1;
}
int* getNoZeroIntegers(int n, int* returnSize)
{
    int i,j;
    int *s=(int *)malloc(sizeof(int)*2);
    * returnSize=2;
    for(i=1;i<n;i++)
    {
        j=n-i;
        if(f(i)&&f(j))
        {
            s[0]=i;
            s[1]=j;
            return s;
        }
    }
    s[0]=-1;
    s[1]=-1;
    return s;
}
