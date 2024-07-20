#include <stdio.h>

// void tables (int n){
//    for (int i = 1; i <= 10; i++) 
//    {
//       int tab = i*n; 
//     printf("%d\n",tab);
//    }
   
// }
void tables(int n) {
    for (int i = 1; i <= 10; i++) {
        int tab = i * n;
        printf("%d\n", tab);
    }
}
int main()
{
   
   // char user; 
   // printf("enter 'I' if for India and 'US' for america : "); 
   // scanf("%c", &user); 

   // if (user == 'I')
   // {
   //    printf("namaste"); 
   // }else{
   //    printf("Hello ");
   // }

   int n; 
   printf("enter the table number : "); 
   scanf("%d",&n); 
   tables(n); 
   

return 0;

}