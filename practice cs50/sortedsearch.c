#include <stdio.h>
void selection(int arr[],int size);
int binarysearch(int arr[],int size, int target);
int main()
{
    int n;
    printf(" no of elements u want? : \n");
    scanf("%d",&n);
    int numbers[n];
    for (int i = 0; i < n;i++)
    {
        scanf("%d",&numbers[i]);
    }
    selection(numbers,n);
    for (int i = 0; i < n;i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("no you want to search: \n");
    int x;
    scanf("%d",&x);
    int answer = binarysearch(numbers,n,x);
    if (answer == -1)
    {
        printf("Not found");
    }
    else
    {
        printf("Found at index %d", answer);
    }

   
}
void selection(int arr[],int size)
{
    for (int i =0 ;i < size - 1;i++)
    {
        int min_index = i;
        for (int j = i + 1;j < size ; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }

        }
        int temp;
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;


    }
}
int binarysearch(int arr[],int size, int target)
{
    int left;
    int right;
    int mid ;
    left = 0;
    right = size - 1;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if ( arr[mid] == target)
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
        
    
}