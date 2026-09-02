#include <stdio.h>
void bubbles(int arr[],int size);
int main(void)
{
    int n;
    printf("enter the numbers\n");
    scanf("%d",&n);
    printf("the numbers are %d",n);
    int numbers[n];
    for (int i = 0;i < n;i++)
    {
        scanf("%d",&numbers[i]);
    }
    bubbles(numbers,n);
    for (int i = 0 ;i < n;i++ )
        {
        printf(" %d",numbers[i]);
        }
}
void bubbles(int arr[],int size)
{
    for(int i = 0;i < size - 1;i++)
    {
        for (int j =0;j < size - 1;j++)
        {
            if (arr[j]>arr[j+1])
                {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
                }        
        } 
    }
    
}