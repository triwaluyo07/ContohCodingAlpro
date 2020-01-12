#include <stdio.h>
int SelectionSort(int ar[], int jml);
long int factorial(int N);
int main()
{
    int n, i, j, x;

    printf("input jumlah array = ");scanf("%d",&n);

    x=factorial(n);
    printf("%d \n", x);

    int ar[n];

    for(i=0;i<n;i++)
    {
        printf("Input nilai array ke %d = ",i);
        scanf("%d",&ar[i]);
    }
    puts("");
    for(i=0;i<n;i++)
    {
        printf("Output nilai array ke %d = %d  \n",i, ar[i]);
    }

    SelectionSort(ar,n);

    return 0;
}

int SelectionSort(int ar[], int jml)
{
    int x, y, temp, z;

    for(x=0;x<jml-1;x++)
    {
        for(y=x+1;y<jml;y++)
        {
            if(ar[x]>ar[y])
            {
                temp=ar[y];
                ar[y]=ar[x];
                ar[x]=temp;
            }

            for(z=0;z<jml;z++)
            {
                printf("%d  ",ar[z]);
            }
            printf("\n");
        }



    }
}

long int factorial(int N){ //definisi fungsi
	if(N==0)
	return(2);
	else
	return(N*factorial(N-1)); //memanggil diri sendiri
}













