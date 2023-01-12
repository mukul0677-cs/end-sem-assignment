// #include<stdio.h>
// int main()
// {
//     int marks[3];
//         printf("enter a physics marks :");
//         scanf("%d",&marks[0]);
//         printf("enter a chemistry marks :");
//         scanf("%d",&marks[1]);
//         printf("enter a maths marks :");
//         scanf("%d",&marks[2]);
//         printf("physics=%d, chemistry=%d, maths=%d", marks[0], marks[1], marks[2]);

//         return 0;


// }

// #include<stdio.h>
// int main()
// {
//     float price[3];
//     printf("enter 3 prices:");
//     scanf("%f",&price[0]);
//     scanf("%f",&price[1]);
//     scanf("%f",&price[2]);

//     printf("total price 1: %f\n",price[0]+(0.18*price[0]));
//     printf("total price 2: %f\n",price[1]+(0.18*price[1]));
//     printf("total price 3: %f\n",price[2]+(0.18*price[2]));
// return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int age= 22;
//     int *ptr=&age;
//     printf("ptr= %u\n", ptr);
//     ptr++;
//     printf("ptr= %u\n", ptr);
//     ptr--;
//     printf("ptr=%u\n", ptr);
//     ptr++;
//     return 0;
// }
    //    #include<stdio.h>
    //    int main(){
    //     float price= 100.00;
    //     float *ptr= &price;
    //     printf("ptr= %u\n", ptr);
    //     ptr++;
    //     printf("ptr= %u\n",ptr);
    //     ptr--;
    //     printf("ptr= %u\n", ptr);
    //     ptr++;
    //     return 0;
    //    }



    #include<stdio.h>
    int main()
    {
        int marks[4];
        for(int i=0; i<4; i++)
        {
        printf("enter the value of %d element of array\n",i);
        scanf("%d",&marks [i]);
        }
        for(int i=0; i<4; i++)
        {
            printf("the value of %d element of array is %d\n", i,marks[i]);
            return 0;
        }

    }        
