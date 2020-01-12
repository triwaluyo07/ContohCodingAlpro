#include <stdio.h>

void Tembak();
void Reload();
int peluru=3;

main()
{
    printf("Peluru Awal = %d\n",peluru);

    Tembak();
    Tembak();
    Tembak();
    Tembak();
    Reload();

    return 0;
}


void Tembak()
{
    if(peluru==0)
    {
        printf("Peluru Habis, Silahkan Reload\n");
    }
    else
    {
        peluru=peluru-1;
        printf("Sisa Peluru saat ini = %d\n",peluru);
    }


}

void Reload()
{
    peluru=3;
    printf("Peluru saat ini = %d\n",peluru);
}
