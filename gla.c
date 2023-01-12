
// // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // int main()
// // // // // // // // // // // {
// // // // // // // // // // //     printf("hello world");
// // // // // // // // // // //     return 0;

// // // // // // // // // // // }

// // // // // // // // // // // arithmetic operations

// // // // // // // // // // #include <stdio.h>
// // // // // // // // // // int main()
// // // // // // // // // // {
// // // // // // // // // //     int a,b;
// // // // // // // // // //     printf("enter the first no.");
// // // // // // // // // //     scanf("%d",&a);
// // // // // // // // // //     printf("enter the second no.");
// // // // // // // // // //     scanf("%d",&b);
// // // // // // // // // //     int sum=a+b;
// // // // // // // // // //     printf("sum of the no. is %d",sum);
// // // // // // // // // //     return 0;
// // // // // // // // // // }

// // // // // // // // // #include <stdio.h>
// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //     float a;
// // // // // // // // //     printf("enter the area of circle");
// // // // // // // // //     scanf("%f",&a);
// // // // // // // // //     float area=a*a*3.14;
// // // // // // // // //     printf("area of circle is : %f",area);
// // // // // // // // //     return 0;

// // // // // // // // // }
// // // // // // // // #include <stdio.h>
// // // // // // // // int main(){
// // // // // // // // float base,height;
// // // // // // // // printf("enter the base no.");
// // // // // // // // scanf("%f",&base);
// // // // // // // // printf("enter the height");
// // // // // // // // scanf("%f",&height);
// // // // // // // // float area= (base*height)/2;
// // // // // // // // printf("area of triangle is : %f",area);
// // // // // // // // return 0;
// // // // // // // // }

// // // // // // // #include <stdio.h>
// // // // // // // int main()
// // // // // // // {
// // // // // // //     int a[100];
// // // // // // //     int n,p;
// // // // // // //     scanf("%d",&n);
// // // // // // //     for(int i=0;i<n;i++)
// // // // // // //     scanf("%d",&a[i]);
// // // // // // //     scanf("%d",&p);
// // // // // // //     p=p-1;
// // // // // // //     for(int i=p;i<n;i++)
// // // // // // //     a[i]=a[i+i];
// // // // // // //     a[n-1]=0;
// // // // // // //     for(int i=0;i<n-1;i++)
// // // // // // //     printf("%d",a[i]);
// // // // // // //     return 0;
    
// // // // // // // }


// // // // //     printf("%d",16%10);
// // // // // //     return 0;
// // // // // // }
// // // // // #include <stdio.h>
// // // // // int main(){
// // // // // int a = (int) 1.999999;
// // // // // printf("%d \n", a);

// // // // // return 0;
// // // // // }
// // // //     // #include <stdio.h>
// // // //     // int main()
// // // //     // {
// // // //     //     int x;
// // // //     //     printf("enter number : ");
// // // //     //     scanf("%d",&x);
// // // //     //     printf("%d \n",x>9 && x<100);
// // // //     //     return 0;
// // // //     // }
// // // // #include<stdio.h>
// // // // int main()
// // // // {
// // //   //   int age;
// // //     printf("enter a age :");
// // // //     scanf("%d \n",&age);
// // // //     if (age>18){
// // // //         printf("adult \n");
// // // //         printf("they can drive \n");
// // // //         printf("they can vote \n");
// // // //     }
// // // //  else {
// // // //     printf("they are not adult \n");
// // // //  }    
// // // // return 0;
// // //  }


// // // #include<stdio.h>
// // // int main()
// // // {
// // //     int age;
// // //     printf("enter a age :");
// // //     scanf("%d" ,&age);
// // //     if(age>=18){
// // //     printf("they are adult \n");
// // //     printf("they can vote \n");
// // //     printf("they can drive \n");
// // //  }
// // //     else if("age>13 && age<18"){
// // //         printf("they are teenager \n");
// // //     }

// // // return 0;

// // //  }
// // #include<stdio.h>
// // int main()
// // {
// //     int age;
// //     printf("enter age :");
// //     scanf("%d",&age);
// //     if(age>18){
// //         printf("ther are adult \n");
// //         printf("they can vote \n");
// //         printf("they can drive\n");
// // }
// // else {
// //     printf("not adult \n");
// // }
// // return 0;
// // }

    
// // #include<stdio.h>
// //     int main()
// //     {
// //         int day;
// //         printf("enter a day");
// //         scanf("%d",&day);
// //         if(day==1)
// //         printf("its a monday\n");
// //         else if(day==2)
// //         printf("its a tuesday\n");
// //         else if(day==3)
// //         printf("its a wednesday\n");
// //         else if(day==4)
// //         printf("its a thursday\n");
// //         else if(day==5)
// //         printf("its a friday\n");
// //         return 0;}


// //   #include<stdio.h>
// //   int main()
// //   {
// //     int age;
// //     printf("enter a age :");
// //     scanf("%d",&age);
// //     if(age>=18){
// //         printf("adult \n");
// //     }
// //     else if(age>13 && age<18){
// //         printf("they are teenager \n");

// //     }
// //     else if(age<13){
// //         printf("they are child \n");
// //     }
// //     return 0;
// //   }
 
// //  #include<stdio.h>
// //  int main()
// //  {
// //     int age;
// //     printf("enter a age :");
// //     scanf("%d",&age);
// //     age>=18? printf("they are adult \n"):printf("not adult \n");
// // return 0;1
// // 15

// //  }
// //  #include<stdio.h>
// //  int main(){
// //     int number;
// //     printf("enter a number");
// //     scanf("%d",&number);
// //     if(number>=0){
// //         printf("positve \n");
// //         if(number %2==0){
// //             printf("even \n");
// //         } else{
// //             printf("odd \n");
// //         }
// //     }
// //     else{
// //         printf("negative \n");
// //     }
// //     return 0;
// //  }

// // #include<stdio.h>
// // int main()
// // {
// //     int number;
// //     printf("enter a number:");
// //     scanf("%d",&number);
// //     if(number>30){
// //         printf("student is pass \n");
// //         if(number>90){
// //             printf("student is sharpminded");
// //         }
// //     }
// //     else if(number<30){
// //         printf("student is fail \n");
// //     }
    
// //     return 0;
// // }
// // #include<stdio.h>
// // int main()
// // {
// //     int marks;
// //     printf("enter a marks:");
// //     scanf("%d",&marks);
// //     if(marks<30){
// //         printf("grade c \n");
// //         printf("he is FAIL");
// //     }
// //     else if(marks>30 && marks<70){
// //         printf("grade B \n");
// //     }
// //     else if(marks>70 && marks<90){
// //         printf("grade A \n");
// //     }
// //     else if(marks>90 && marks<100){
// //         printf("grade A+ \n");
// //     }
// //     return 0;
// // }

// #include<stdio.h>
// int main()
// {
//     char ch;
//     printf("enter a character:");
//     scanf("%c",&ch);
//     if(ch>='A' && ch<='Z'){
//     printf("this number is uppercase");
//     }
//     else if(ch>='a' &&ch<='z'){
//         printf("this number is lower case");
//     }
//     else{
//         printf("not a english word");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){

//     for(char i='A'; i<='Z'; i++){
//         printf("%c \n",i);
        
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     for(float i=1.0; i<=10.0;i++)
//      printf("%f \n",i);
//     for(char i='1'; i<='z';i++)
//     printf("%c \n",i);
// return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
    
//     int i=0;
//     while(i <=n){
//         printf("%d\n",i);
//         i++;
//     }


// return 0;
// }



// #include<stdio.h>
// int main()
// {
//     for( int i=56;i>=1;i=i-1){
//         printf("%d \n",i);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//  for(int i=0; i<=10; i= i+1){
//  printf("%d \n",i);
//  }
//  return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number:");
//     scanf("%d", &n);
//    for(int i=1; i<=10; i++){
//     printf("%d \n", n*i);
//    }
//    return 0;

// }