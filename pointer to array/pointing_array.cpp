#include <stdio.h>

int main()
{
    // Rastgele bir array oluşturalım.
    int arr[5] = {5, 10, 15, 20, 25};

    // Pointer oluşturalım ve arr değişkenini atayalım.
    int *p = arr;

    // p hakkında verileri yazdıralım.
    printf("%d\n", p);  // 6356748
    printf("%d\n", *p); // 5
    printf("%d\n", &p); // 6356744

    // Array elemanlarının adresleri üzerinde analiz yapalım.
    printf("%d\n", &arr[0]); // 6356748 +4 -> int size = 4 -> address+1
    printf("%d\n", &arr[1]); // 6356752 +4
    printf("%d\n", &arr[2]); // 6356756 +4
    printf("%d\n", &arr[3]); // 6356760 +4
    printf("%d\n", &arr[4]); // 6356764

    // Pointer kullanarak array elemanlarını yazdırma.
    int k = 0;
    while (k < 5)
    {
        printf("%d ", *p);
        p++;
        k++;
    }

    printf("\n");

    // Pointer index kullanarak array elemanlarını yazdırma.
    int *p2 = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", p2[i]);
    }
}
