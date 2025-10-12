#include<stdio.h>
int main()
{
    int arr[10],key,n,i;
    printf("Enter the no. of elements in a array");
    scanf("%d",&n);
    printf("ENter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key element");
    scanf("%d",&key);
    for (i=0;i<n;i++)
     {
      if(arr[i]==key)
      {
        printf("Elements at %d position",i);
        break;
      }
    }
    if(key!=arr[i])
    {
        printf("Key element not found in the list");
    }
    
}
