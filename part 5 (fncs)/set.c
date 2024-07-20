#include <stdio.h>
#include <math.h>

// function for sum 

int sum (int n ){
  if (n == 1)
  {
    return 1;
  }
  int first = sum(n-1); 
  int final = first + n; 
  return final;  
}

int root(int n ){
 
  int sq = pow(n,2); 
  return sq;
}
int under(int n ){
  if (n<=0)
  {
    return 0;
  }
  
  int sq = sqrt(n); 
  return sq;
}

double mySqrt (double num){
  if (num<=0)
  {
    return -1.0; 
  }
  double guess = num/2.0; 

  for (int i = 0; i < 10; ++i)
  {
    guess = 0.5 * (guess + num /guess);
  }
  return guess; 
  

}



int main(){

  // int n;  
  // printf("enter a num : ");
  // scanf("%d", &n); 
  // int un = sum(n); 
  // int ro = root (n);
  // int go = under (n);
  // printf("sum of : %d\n",un);
  // printf("root of : %d\n",ro);
  // printf("under of : %d\n",go);

  int n ; 
  printf("enter your num : "); 
  scanf("%d", &n);

  int guess = mySqrt(n); 
  printf("%d",guess);


// int user; 
// printf("enter your area temperature: ");
// scanf("%d",&user); 

// if (user <= 18 && user>1) 
// {
//   printf("your area is cold now");
// }else if (user<=0)
// {
//   printf("your area is at coldest level"); 
// }else if(user>18 && user <=39){
//   printf("your area is hotter");
// }
// else if (user>40)
// {
//   printf("your area is heated up");
// }





  return 0; 

}