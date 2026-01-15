#include <stdio.h>
#include <stdlib.h>
// #include<iostream>/
// using namespace std;

// struct Reactangle
// {
// int length;
// int breadth;
// char x;
// };


// int main() {

// struct Reactangle r1 = {10,5};
// printf("%d",sizeof(r1));
// return 0;
// }

// int main () {
//     int a = 10;

//     int *p;

//     p=&a;

//     printf("using pointer %d %d",p,&a);
//     // cout<<a<<
//     return 0; 
// }


// int main (){
//     int A[5] = {2,4,6,8,10};

//     int *p;

//     // p = &A[0];
//  p=(int *)malloc(5*sizeof(int));
    

// p[0] = 10; p[1]=20; p[2]=30 ; p[3]=40; p[4]=50;
//     printf("%d",p);

//     for(int i = 0 ; i < 5;i++){
//         printf("%d",A[i]);
//         printf("\n");
//         printf("%d",p[i]);
//     }
// }


// void fun1(int n){
//     if(n > 0){
//         printf("%d",n);
//         fun1(n-1);
//     }
// }

// int main (){
//     int x = 3;
//     fun1(x);
// }


// int fib (int n){
// return fib(n-1) + fib(n);
// }

// int main (){
//     int x = 3;
//     printf("%d",fib(x));

//     return 0;
// }

// int fib(int n){
// if(n <= 1){
//  return 1;
// }
// return fib(n-1) + fib(n-2);
// }

// int main (){
//     int x = 3;
//     printf("%d", fib(x));
// return 0;
// }


int fib(int n) {
    static int x = 0;
if(n < 0){
    x++;
return fib(n-1) + x;
}
}

int main () {
    int x = 3;
    printf("%d" , fib(x));
    return 0;
}

