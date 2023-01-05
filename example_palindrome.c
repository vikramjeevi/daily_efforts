#include <stdio.h>
int array(int n)
{
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i]%2;
        c[n-1-i]=b[i];
    }
    int count=0;
    for(int j=0;j<n;j++)
    {
       if(b[j]!=c[j])
            count++;
    }
    if(count==0)
        return 1;
    else
        return 0;

}
int main(){
	int num;
	scanf("%d", &num);
    int arr[num];
	for(int i=0;i<num;i++)
    {
        int n=0;
        scanf("%d",&n);
        arr[i]=array(n);
    }
    for(int i=0;i<num;i++)
    {
        printf("%d\n",arr[i]);
    }
}
