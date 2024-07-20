#include <stdio.h>
#include <math.h>
#include <string.h>

 // storing  tbales ✔️
 // sum of natural numbers ✔️
 // factorial ✔️
 // fib numbers ✔️
 // salting // questions of structure  ✔️

 void tables (int n);
 int fact (int n);
 int sum (int n); 
 int fib (int n );
 void salting (char pass[]);

int main(){
// tables(3);
// printf("sum of n numbers %d\n", sum(6));
// printf("factorial of n numbers %d\n", fact(5));
// printf("series of fibonacci numbers %d\n", fib(9));
salting("hello");

    return 0 ;
}
void salting (char pass[]){
    char code[] = "2330"; 
    char newArr [100]; 
    strcpy(newArr, pass); 
    strcat (newArr,code); 
    puts(newArr);
}
int fib(int n){
    if (n==0)
    {
        return 0;
    }else if (n==1 )
    {
        return 1;
    }else{
        int fib1 = fib(n-1);
        int fib2 = fib(n-2);
        int final = fib1+fib2; 
        return final;
    }
    
    
}
int fact (int n){
    if (n==1)
    {
        return 1; 
    }else{
        int first = fact(n-1);
        int final = first*n;
        return final ; 
    }
    
}
int sum(int n ){
    if(n == 1){
        return 1; 
    }
    int first = sum (n-1);
    int final = first + n ; 
   return final;
}
void tables (int n){
    int re ;
    for(int i=1 ; i<= 10 ; i++){
        re = i*n;
    printf("tables of %d\t",re);
    }
}