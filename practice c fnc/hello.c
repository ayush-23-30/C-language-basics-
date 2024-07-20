#include <stdio.h>
#include <math.h>

// void ind();
// void frn();
// int table(int t);
// int adding (int a , int b );
// float power (float value );
// int square (int a);
// float radius (float r);
// int recatangle (int l, int b ); 
// void printing (int count);
// int sum (int n);
// int fact (int f);
int Nsum ( int s);
double root (double n);
int square (int sq);
// int temp(int t);
int fact (int f);
void cold();
void hot();


int main(){
//    char user ;
//    printf("enter your nationaltiy :");
// scanf(" %c",&user );
// if(user == 'I'){
//     ind();
// }else if (user == 'F'){
//     frn();
// }else {
//     printf("you are not a human ");
// }
// table(3);
// int a,b; 
// printf("enter value of A :");
// scanf("%d",&a);
// printf("enter value of B :");
// scanf("%d",&b);
// int ans = adding(a,b);
// printf("answer after using functoin %d \n" , ans);
// int sq = power(a);
// printf("square  of any  number : %d \n", sq);
    //  square (5);
    //  radius (5.3);
    //  recatangle(4,5);
// printing(10);
// int a; 
// printf("enter a number :");
// scanf("%d",&a);
// int s = fact(a);
// printf("%d \n", s);
     printf("enter a to find its sum %d\n", Nsum(6)); // 21
     printf("check the square of this number  %d\n", square(9)); // 81
     printf("enter your factorial number %d \n", fact(5)); // 120

     int ch; 
     printf ("enter your area temp : ");
     scanf ("%d",&ch); 

    if(ch<=20){
        cold();
    }else if(ch>20){
        hot();
    }
     printf("check the square root of this number  %f\n", root(9)); //3






    return 0;

}
void cold(){
    printf("the weather is cold");
}
void hot(){
    printf("the weather is hot");
}
int fact(int f ){
    if(f==0 || f==1 ){
        return 1;
    }
    int factfor = fact(f-1);
    int factfin = factfor*f;
    return factfin;
}

int square (int sq){
    int ss = pow(sq,2);
    return ss;
}
double root( double n){
    return sqrt(n);
}

int Nsum ( int s){
    if (s<=0)
    {
        printf("enter another number");
    }else if (s==1){
        return 1;
    }
    int sumFormula = Nsum(s-1); 
    int final = sumFormula+s; 
    return final; 
    
}
// int fact (int f ){
//     if( f==0){
//         return 1;

//     }
//     int faction = fact(f-1);
//     int into = faction*f;
//     return into;

// }

// int sum (int n){
//     if (n == 1)
//     {
//        return 1; 
//     }
//     else if ( n ==0 && n<0){
//        return  printf("error");
//     }
//     int sumNo = sum(n-1);// 5-1 = 4 , 4-1=3 , 3-1 = 2, 2-1 =1 
//     int summing = sumNo+n; // 4+5 = 9 , 9+3 =12 , 12+2= 14 , 14+1 =15;
//     return summing;
    
// }
// void printing (int count){
//     if(count ==0){
//         return ; 
//     }
//     printf("  hello ayush\n"); 
//     printing(count-1);

// }
// int square (int a)
// float power (float value ){
//    return pow(value, 2);

// }
// int adding (int a , int b) {
//     return a+b;
// }
// int table(int t) {
//     for(int i= 1; i<=10;i++){
//          int make = i*t; 
//          printf("%d \n", make);
//         //  return make;
//     }

// }

// void ind (){
//     printf("namsete");

// }
// void frn(){
//     printf("bonojur");
// }



