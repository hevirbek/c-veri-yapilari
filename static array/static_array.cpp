#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Bu şekilde birçok değişken tanımlamak istemeyiz.
    int a1 = 5;
    int a2 = 10;
    int a3 = 15;
    int a4 = 20;
    int a5 = 25;

    int a[] = {5, 10, 15, 20, 25};
    // index:  0   1   2   3   4

    printf("%d\n", a[0]); // İlk eleman
    printf("%d\n", a[2]);
    printf("%d\n", a[4]); // Son eleman

    // Arrayin bir değerini güncelleme
    a[2] = 50;

    printf("%d\n", a[2]);

    // Arrayin verilerini sonradan da atayabilirsiniz.
    int b[10];

    b[0] = 5;
    b[1] = 10;

    b[5] = 100;
    b[9] = 120; // Son eleman

    // Boyutu ve boyutundan büyük indexleri kullanmayın!
    // b[10] = 150;
    // b[15] = 200;

    // Bazen size sorun yokmuş gibi gelebilir ama her zaman vardır...
    printf("%d\n", b[15]);

    // Örneğin;
    int c[5];

    for (int i = 0; i < 40; i++)
    {
        c[i] = i * i;
    }

    for (int i = 0; i < 40; i++)
    {
        printf("%d ", c[i]);
    }

    printf("\n");

    /*
    Önceki örnekte problem yokmuş gibi gelmiş olabilir.
    Çünkü array boyutu kadar veri ataması yapmamıştık.
    Yukardaki örneğimizde ise problemi göreceğiz.
    */

    // Float array örneği
    float d[5];

    for (int i = 0; i < 5; i++)
    {
        d[i] = i * 1.5;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", d[i]);
    }

    // Char arrayler;
    char isim[10] = "ahmet";

    printf("%s\n", isim);

    for (int i = 0; i < 10; i++)
    {
        printf("%c\n", isim[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (isim[i] == '\0')
        {
            printf("%d\n", i);
        }
    }
}

