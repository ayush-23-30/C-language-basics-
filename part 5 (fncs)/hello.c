#include <stdio.h>
#include <math.h>
//  void print(int count);
// int sum ( int n);
// int fact ( int n);
float convert (float c);
int number (int sc, int maths, int sans);
int fib (int n ); 
int lop(int n);


int main()
{

    // printf("sum of n numbers : %d \n", sum(10));
    // printf("factorial  of n numbers : %d \n", fact(5));
    // printf("now the value come is in fehrenheit : %f \n", convert(40));
    // printf("percentage of 3 subjects  : %d \n", number(89,88,86));
    // printf("fibanci number : %d \n", fib(7));
  

  int value = 14 % 3;
  printf("%d", value);

return 0;
}
int lop(int n){
   if(n==0 || n==1){
        if(n==0){return 0;}
        if(n==1){return 1;}
    }
    for (int i = 2; i < n; i++){
      int new =  i-1 +i-2;
      return new;
    }
 
}
int fib(int n){
    if(n==0 || n==1){
        if(n==0){return 0;}
        if(n==1){return 1;}
    }
    int fib1 = fib(n-1); 
    int fib2 = fib(n-2); 
    int fibFinal = fib1 + fib2; 
    return fibFinal;
}
int number(int sc,int maths, int sans){
  int total = sc+maths+sans;
  int avg = total/3; 
  int per = avg*100/100;
  return per;
}
float convert (float c ){
    float f = c*(9.0/5.0)+32;
    return f;
}

// int sum  ( int n){
//     if( n == 1){
//         return 1; 
//     }
//     int sumNum1 = sum(n-1); //sum of 1 to n 
//     int sumN = sumNum1 + n;
//     return sumN;
// }
//    int fact (int n){
//     if(n==0){
//         return 1; 
//     }
//     int factNum = fact(n-1);
//     int factN = factNum * n ;
//     return factN;
   
// void print(int court){
//     if (court == 0){
//         return ; 
//     }
//     printf("say hello to recurrsion \n");
//     print(court -1);
// }

