#include <stdio.h>
#include<stdlib.h>
void input(int *p, int k)
{
    int i;
    for(i=0;i<k;i++)
        scanf("%d",&p[i]);
}
int fun(int *x, int *y, int n, int m)
{
    int i,j, start;
    int f=0;
    for(i=0;i<n;i++)
    {
        if(x[i]==y[f])
        {
            start=i;
            break;
        }
    }
    
    for(i=start+1;i<n;i++)
    {
        f++;
        if(x[i]!=y[f]) return 0;
        return 1;
    }
}
int main() {
    int n, m;
    int i,j;
    int *p1, *p2;
    int sw;
    scanf("%d %d", &n, &m);
    p1=(int *)malloc(sizeof(int)*n);
    p2=(int *)malloc(sizeof(int)*n);
    input(p1, n);
    input(p2, m);
    fun(p1, p2, n, m);
    if (sw==1)
    {
        printf("Yes\n");
    }
    if (sw==0)
    {
        printf("No\n");
    }

    return 0;
}