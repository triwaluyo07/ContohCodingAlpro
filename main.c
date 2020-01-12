#include <stdio.h>
#include <stdlib.h>

int nilaiMhs(float uts, float uas, float tgs);

main()
{
    float uts, uas, tgs;
    char hasil;

    printf("Input Nilai UTS = ");scanf("%f",&uts);
    printf("Input Nilai UAS = ");scanf("%f",&uas);
    printf("Input Nilai TGS = ");scanf("%f",&tgs);

    hasil=nilaiMhs(uts,uas,tgs);
    printf("Nilai Huruf yaitu %c",hasil);

    return 0;
}

int nilaiMhs(float uts, float uas, float tgs)
{
    float NilaiAkhir;
    char NilaiHuruf;

    NilaiAkhir=uts*0.3+uas*0.3+tgs*0.4;

    printf("Nilai Angka = %.2f\n",NilaiAkhir);

    if(NilaiAkhir>=85 && NilaiAkhir<=100)
    {
        NilaiHuruf='A';
    }
    else if(NilaiAkhir>=70 && NilaiAkhir<85)
    {
        NilaiHuruf='B';
    }
    else if(NilaiAkhir>=0 && NilaiAkhir<70)
    {
        NilaiHuruf='C';
    }

    return NilaiHuruf;


}







