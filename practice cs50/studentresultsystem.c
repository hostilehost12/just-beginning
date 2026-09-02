#include <stdio.h>

int highest(int arr[], int size);
float average(int arr[], int size);
int failed(int arr[], int size);

int main()
{
    int n;

    printf("How many students?\n");
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter marks of student %d:\n", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Marks of student %d = %d\n", i + 1, numbers[i]);
    }

    int topper = highest(numbers, n);
    float medium = average(numbers, n);
    int nabkar = failed(numbers, n);

    printf("\nHighest marks = %d\n", topper);
    printf("Average marks = %.2f\n", medium);
    printf("Failed students = %d\n", nabkar);
}

int highest(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

float average(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return (float) sum / size;
}

int failed(int arr[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 40)
        {
            count++;
        }
    }

    return count;
}