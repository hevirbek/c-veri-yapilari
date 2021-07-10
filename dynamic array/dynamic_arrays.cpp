#include <stdio.h>
#include <stdlib.h> // malloc(), realloc(), free()

int main()
{
    // Array boyutunu tutacak değişken
    int sz = 2;

    // sz boyutunda dinamik array
    int *arr = (int *)malloc(sizeof(int) * sz);
    printf("Array new size: %d\n", sz);

    // 0'dan 99'a kadar olan sayıların 2 katını arraye ekleme
    for (int i = 0; i < 100; i++)
    {
        // Array dolduğunda boyutu iki katına çıkarma
        if (i == sz)
        {
            sz *= 2;
            arr = (int *)realloc(arr, sizeof(int) * sz);
            printf("Array new size: %d\n", sz);
        }
        arr[i] = i * 2;
    }

    // Array elemanlarını yazdırma
    for (int i = 0; i < 100; i++)
    {
        printf("%d\n", arr[i]);
    }

    // Hafızadan alınan yeri temizleme
    free(arr);
}
