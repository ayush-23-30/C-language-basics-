#include <stdio.h>

int aarprint (int arr[],int n) ; 
int findOdd (int arr[], int n);
int resevse (int arr[], int n);
int main(){

//   int price = 100; 
//   int *ptr  = &price;  
//   printf("location of price %p \n", ptr); 
//   ptr++;
// ye value ko increse nahi karta ye location ko increase karta hai =======
//     printf(" location of after ++ %p \n", ptr); 
//     ptr--; 
//       printf("location of after -- %p\n", ptr); 

// int past = 20;
// int *ptr = &past; 
// int presnet = 20; 
// int *prr = &presnet; // 
// printf (" subtract %d\n" , ptr - prr); // ye location compare karta hai or data type m output deta hai  
// printf (" subtract %d\n" , ptr == prr); // ye compare karrta hai or true ya false (1,0)
// printf (" subtract %d\n" , *ptr - *prr);  // ye * kii wjah se value ko minus karra hai 
  
// int hum []= {1,2,3,4,5,6,7}; 
// aarprint(hum,7); // pehla argument arr ko chlta hai or dusra btta hai kii kha tak chlna hai  ========
// char hum2[]= {"ayush", "anuj", "vishal", "sahu" , "aniket"}; 
// aarprint(hum2,5); // ye isko print nahi karr payega kyuki ye data type char hai orr fncs bss int lega ==

// ================== 2D ARRAY ========================

// int arr[][];
// arr[0][0] = 1;
// arr[0][1] = 2;
// arr[0][2] = 3;
// arr[0][3] = 4;

// hell[1][0] = 5;
// hell[1][1] = 6;
// arr[1][2] = 7;

// printf("printing 2d array %d \t", arr[0][1]);
// printf("printing 2d array %d \t", arr[0][2]);
// printf("printing 2d array %d \t", arr[0][3]);
// printf("printing 2d array %d \t", arr[1][0]);
// printf("printing 2d array %d \t", arr[1][1]);
// printf("printing 2d array %d \t", arr[1][2]);
// printf("printing 2d array %d \t", arr[1][3]);


int odd[] = {1,2,3,4,5,6,7};
printf("number of odd number : %d\n" ,findOdd(odd,7));
resevse(odd,7); 
 aarprint(odd,7);




    return 0; 
}
int resevse (int arr[], int n){
    for (int i = 0; i <n/2; i++)
    {
       int first = arr[i];
       int secValue = arr[n-i-1];
       arr[i] = secValue; 
       arr[n-i-1] = first; 
    }
    
}
// void resevse(int arr[], int n) {
//     for (int i = 0; i < n / 2; i++) {
//         int first = arr[i];
//         int secValue = arr[n - i - 1];
//         arr[i] = secValue;
//         arr[n - i - 1] = first;
//     }
// // }
int findOdd (int arr[], int n){
    int count =0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] %2 != 0){
            count++;
        }
    }
    return count; 

    
}

int aarprint (int arr[] , int n){
    for (int i = 0; i <n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    
}