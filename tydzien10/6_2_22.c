void pom (unsigned int n, unsigned int j, int tab[][n])
{
    int p;
    for(int i=0;i<n/2;i++)
    {
        p=tab[j][i];
        tab[j][i]=tab[j][n-1-i];
        tab[j][n-1-i]=p;
    }
}
void odwroc(unsigned int n, unsigned int m, int t[][m])
{
    unsigned int i,j;
    for(i=0;i<n;i++)
    {
        pom(n,i,t);
    }
}
