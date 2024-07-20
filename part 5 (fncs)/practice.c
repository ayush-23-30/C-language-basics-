#include <stdio.h>
#include <stdbool.h>

bool isPrime (int num){
  if (num <= 1)
  {
    return false; 
  } 
  for (int i = 2; i*i <= num; i++)
  {
   if (num % i == 0) 
   {
    return false;
   }
   
  }
  return true;
  
  
}
// program to find percentage of 4 number

int avg (int a, int b, int c,int d){
  int sum = a+b+c+d;
  int avg = sum/4; 
  int per = avg*100/100; 
  return per; 
}

// covert temperatture from celcius to ferinate 

float convert (float c ){
    float f = c*(9.0/5.0)+32;
    return f;
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

int main(){
  // int number;  
  // printf("enter any number: ");
  // scanf("%d",&number);

  // if (isPrime (number))
  // {
  //   printf("this is a prime number");
  // }else{
  //   printf("this is not a prime number");
  // }
  
// int start, end;

//     printf("Enter the starting number of the range: ");
//     scanf("%d", &start);

//     printf("Enter the ending number of the range: ");
//     scanf("%d", &end);

//     printf("Prime numbers in the range %d to %d are:\n", start, end);

//     for (int i = start; i <= end; i++) {
//         if (isPrime(i)) {
//             printf("%d\n", i);
//         }
//     }

// percentage 
// int a = 88; int b = 87; int c = 76; int d = 95;
//  int per = avg (a,b,c,d); 
//  printf("percentage of top 4 %d\n ", per); 


printf("your temp  : %f\n",convert(40)); 
printf("loop of infinity : %d\n", lop(5)); 

  return 0;
}