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


int main (){
    int A[5] = {2,4,6,8,10};

    int *p;

    // p = &A[0];
 p=(int *)malloc(5*sizeof(int));
    

p[0] = 10; p[1]=20; p[2]=30 ; p[3]=40; p[4]=50;
    printf("%d",p);

    for(int i = 0 ; i < 5;i++){
        printf("%d",A[i]);
        printf("\n");
        printf("%d",p[i]);
    }
}
