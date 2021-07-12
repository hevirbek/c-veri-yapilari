#include <stdio.h>

#define ARRAYSIZE(a) (sizeof(a) / sizeof((a)[0]))

int get_index(int length, int arr[], int n);
int get_count(int length, int arr[], int n);
int get_sum(int length, int arr[]);
int get_max(int length, int arr[]);
int get_min(int length, int arr[]);
void print_all(int length, int arr[]);

int main()
{
    int arr[] = {5, 10, 15, 20, 25,
                 30, 35, 40, 45, 50,
                 55, 60, 65, 70, 75,
                 80, 85, 40, 45, 40};

    printf("Array eleman sayisi: %d\n\n", ARRAYSIZE(arr));

    printf("%d\n", get_index(ARRAYSIZE(arr), arr, 20));
    printf("%d\n\n", get_index(ARRAYSIZE(arr), arr, 21));

    printf("%d\n", get_count(ARRAYSIZE(arr), arr, 20));
    printf("%d\n", get_count(ARRAYSIZE(arr), arr, 45));
    printf("%d\n", get_count(ARRAYSIZE(arr), arr, 40));
    printf("%d\n\n", get_count(ARRAYSIZE(arr), arr, 21));

    printf("%d\n\n", get_sum(ARRAYSIZE(arr), arr));

    printf("%d\n", get_max(ARRAYSIZE(arr), arr));
    printf("%d\n\n", get_min(ARRAYSIZE(arr), arr));

    print_all(ARRAYSIZE(arr), arr);
}

int get_index(int length, int arr[], int n)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == n)
        {
            return i;
        }
    }
    return -1;
}

int get_count(int length, int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == n)
        {
            count++;
        }
    }
    return count;
}

int get_sum(int length, int arr[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int get_max(int length, int arr[])
{
    int max = arr[0];
    for (int i = 1; i < length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int get_min(int length, int arr[])
{
    int min = arr[0];
    for (int i = 1; i < length; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

void print_all(int length, int arr[])
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}
