#include <stdio.h>

int hasil(int hrg, int jml);

main()
{
    int harga, jumlah, total;

    printf("Inputkan Harga = ");scanf("%d",&harga);
    printf("Inputkan Jumlah = ");scanf("%d",&jumlah);

    total=hasil(harga,jumlah);

    printf("Total = %d",total);

    return 0;
}

int hasil(int hrg, int jml)
{
    int total, diskon;
    total=hrg*jml;

    if(total>=1000000)
    {
        diskon=total*0.1;
        total=total-diskon;
    }
    else if(total>=500000 && total<1000000)
    {
        diskon=total*0.05;
        total=total-diskon;
    }
    else
    {
        return total;
    }

    return total;

}
