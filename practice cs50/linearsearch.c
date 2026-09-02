#include <stdio.h>
int search(int arr[],int size,int target);
int main()
{
    int n;
    printf("how many  numbers\n");
    scanf("%d", &n);
    printf("total no of numbers are = %d \n", n);
    int numbers[n];
    for ( int i = 0; i < n;i++)
    {
        printf("the numbers are ");
        scanf("%d", &numbers[n]);
    }
    int target;
    printf("the numbers are %d \n",numbers[n]);
    printf("which no you want to search\n");
    scanf("%d" ,&target);
}
int search(int arr[],int size,int target)
{
    

}