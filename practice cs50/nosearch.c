#include <stdio.h>
int search(int arr[], int size,int target);
int main()
{
    int n;
    printf("how many no do you want:\n");
    scanf("%d",&n);
    printf("total numbers are %d\n", n);
    int numbers[n];
    for ( int i = 0; i < n;i++)
    {
        printf("enter no:\n");
        scanf("%d", &numbers[i]);
    }
    int target;
    printf("which no do you want:\n");
    scanf("%d", &target);
    int correct = search(numbers,n,target);
    printf("no found at index is: %d \n", correct + 1);
    if (correct == -1)
    {
        printf("no not found\n");

    }
    else
    {
    printf("no found at position %d", correct + 1);
    }
}
int search(int arr[], int size,int target)
{
    for (int i = 0; i < size;i++)
    {
        if (arr[i] == target)
        {
            return i;
        }

    }
    return -1;
}