#include<stdio.h>
int n,i,j;
int arr[10];
void LeftShift(int *A)
{
    int k=A[0];
    for(j=0;j<n-1;j++)
        A[j]=A[j+1];
    A[n-1]=k;
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
    printf("\n");  
}
void RightShift(int *A)
{
    
    int k=A[n-1];
    for(j=n-1;j>=0;j--)
        A[j]=A[j-1];
    A[0]=k;
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
    printf("\n");    
}
void main()
{   
    printf("Please enter number of the elements\n");
    scanf("%d",&n);
    arr[n];
    printf("Please enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    while(1)
    {
        printf("Enter the Choice:\n1)for left shift\n2)for right shift\n3)for exit\n");
        scanf("%d",&i);
        switch(i)
        {
            case 1:LeftShift(arr);
            break;
            case 2:RightShift(arr);
            break;
            case 3:return;
            default:printf("No proper input\n");
        }      
    }
}