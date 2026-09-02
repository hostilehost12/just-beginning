#include <stdio.h>
void selectionsort(int arr[],int size);
int main()
{
    int n;
    printf("how many no do you want : \n");
    scanf("%d",&n);
    int numbers[n];
    for (int i = 0; i < n;i++)
    {
        scanf("%d",&numbers[i]);

    }
    selectionsort(numbers,n);
    for (int i =0;i < n;i++)
    {
        printf("%d ", numbers[i]);
    }

}
void selectionsort(int arr[],int size)
{
    for (int i=0;i < size - 1;i++)
    {
        int min_index = i;
        for (int j = i + 1;j < size;j++)
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