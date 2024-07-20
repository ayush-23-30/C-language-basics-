#include <stdio.h>
#include <math.h>

void tables(int n) {
    for (int i = 1; i <= 10; i++) {
        int tab = i * n;
        printf("%d\t", tab);
    }
}

float square (float p){

  return pow(p,2);
}

int sum (int n){
  if (n==1){
    return 1; 
}
int sumNum = sum(n-1); // n= 5, sum n-1 = 4 , 4-1 , 3-1 , 2-1 =1... 1 =1 
int summing = sumNum + n;  // 4+ 5 =9, 3+9 = 12,  12+2 = 14 , 14+1 = 15 
return summing; 
}

int fact (int n){ 
  // n = 5*4*3*2*1 =  1 * 2 * 6 * 24 =  120 
  if (n == 1)
  {
   return 1; 
  }
  int factNum = fact(n-1); // n = 5 ; 4 ; 3 ; 2 ; 1
  int facting = factNum * n; // 4*5 = 20 ; 3*20 =60 ; 60 *2 =120 ; 
  return facting; 
  
}

// int fab (int n ){
//   if (n == 1)
//   {
//     return 1; 
//   }else if (n==0){
//     return 0 ; 
//   } 
//   int fab1 = fab(n-1); 
//   int fab2 = fab(n-2); 
//   int final = fab1 + fab2; 
//   return final; 
 
// }
int fab(int n) {
    // Base cases
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    // Recursive cases
    int fab1 = fab(n - 1);
    int fab2 = fab(n - 2);
    int final = fab1 + fab2;

    return final;
}

int main(){

   int n;
   printf("enter a table number : "); 
   scanf("%d",&n); 
  //  tables(n); 
  //  printf("\n");
  //  printf("%f",square(n)); 
  printf("sum of numbers %d\n", sum(n));
  printf("factorial of numbers %d\n", fact(n));
  printf("fab of numbers %d\n", fab(n));


  return 0;
}