#include <stdio.h>
int binarysearch(int arr[],int size,int target);
int main()
{
    int n;
    printf("how many no do you want : \n");
    scanf("%d",&n);
    int  numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    int x ;
    printf("what no do want to search: \n");
    scanf("%d",&x);
    
    int correct = binarysearch(numbers,n,x);
    if (x == -1)
    {
        printf("not found");
    }
    else
    {
        printf("%d",x );
    }
    
    
}
int binarysearch(int arr[],int size,int target)
{
    int left;
    int right;
    int mid ;
    left = 0;
    right = size - 1;
    while (left <= right)
    {
        int mid = (left + right)/2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid +1;
        }
        else
        {
            right = mid -1 ;
        }
    }
    return -1;

}