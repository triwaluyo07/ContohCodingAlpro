#include <stdio.h>

main()
{
    int arr[5]={5, 7, 9, 4, 3};
    int temp, i, j, k,maks=0;

    for(i=0;i<5;i++)
    {
        if(maks<arr[i])
        {
            maks=arr[i];

            printf("Nilai maks = %d\n",maks);
        }
    }
    //printf("Nilai maks = %d\n",maks);



    for(i=0;i<5;i++)
    {


        for(j=0;j<5-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

            for(k=0;k<5;k++)
            {
                printf("%d ",arr[k]);
            }
            printf("\n");
        }
        printf("\n");
        //printf("%d ",arr[i]);
    }

    printf("\n");

    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;

}
