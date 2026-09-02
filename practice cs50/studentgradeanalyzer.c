#include <stdio.h>
int highest(int arr[], int size);
int main()
{
    int x;
    printf("how many students\n" );
    scanf("%d", &x);
    printf("no of students are %d\n", x);
    int marks[x];
    for ( int i = 0;i < x; i++)
    {
       printf("enter marks of student\n");
        scanf("%d",&marks[i] );
    }
    for(int i = 0; i < x; i++)
    {
        printf("marks  of student %d = %d \n", i+1,marks[i] );
    }
    int max = highest(marks , x);
    printf("highest marks = %d\n", max);

}
    int highest(int arr[], int size)
    {
       int max = arr[0];
        for  (int i = 1 ;i < size ;i++ )
        { 
             if (arr[i] > max)
             {
                  max = arr[i];
             }       
        }
        return max;
    }