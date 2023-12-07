#include <stdio.h>

int main() {
    int n;
    int i;
    int count=0;
    scanf("%d", &n);
    int str[100];
    for(i=0;i<n;i++)
    {
        scanf("%d", &str[i]);
    }
     for(i=0;i<n;i++)
    {
        if(str[i]=2)
        {
            count++;
        }
        if (count==3)
        {
            printf("%d", i+1);
        }
    }
    return 0;
}