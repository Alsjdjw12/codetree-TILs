#include <stdio.h>
#include <string.h>
void swap(char *x, char *y);
void sort(char a[], int len);
int main() {
    char arr[100];
    int m,n;
    scanf("%s", arr);
    n=strlen(arr);
    sort(arr, n);
	printf("%s", arr);

    
    return 0;
}
void swap(char* x, char *y)
{
	char tamp;
	tamp=*x;
	*x=*y;
	*y=tamp;
}
void sort(char a[], int len)
{

	int i,j;
	for(i=0;i<len-1;i++)
	{
		for(j=i+1;j<len;j++)
		{
		if (a[i]>a[j])
			{
			swap(&a[i], &a[j]);
			}
		}
	}
}