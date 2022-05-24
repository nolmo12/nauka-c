double max_sred(int **t, unsigned int n, unsigned int m)
{
    int sum;
    double wart;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=t[i][j];
        }
        if(((double)sum/m>wart)||(i==0))
        {
            max=i;
            wart=(double)sum/m;
        }
    }
    return max;
}
