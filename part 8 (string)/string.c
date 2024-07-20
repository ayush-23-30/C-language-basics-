#include <stdio.h>
#include <string.h>
#include <math.h>

void slice(char str[], int n,int m);
void printString( char arr[]);
int countLength (char arr[]);
void salting (char password[]);
int countVowels(char str[]);
int main (){
//  char nam []= {'a','y','u','s','h' , ' ', 'k','u','m','a','r','\0'}; 
//  char full []= {"ayush kumar"}; 
 
//  printf("%s\n",nam);
//  printf("%s\n",full); // %s use to print string 


    // int mark[] = {12, 32, 43, 12, 3, 2};
    
    // // Loop through the array and print each element
    // for (int i = 0; i < sizeof(mark) / sizeof(mark[0]); i++) {
    //     printf("%d \t", mark[i]);
    // }
//  printString(nam);
//   printString(full);
// char firstName [123];
// scanf("%s", firstName);
// printf(" enter your first name %s", firstName); 

// char str[233]; 
// // gets(str);
// fgets(str,20,stdin);
// puts(str);

// char *str = "hello world"; 
// puts(str); 
// str = "hello ayush"; 
// puts(str);
// // puts(*str);

// char str1[] = "hello world"; 
// puts(str1); 

// char name[100]; 
// fgets(name,100,stdin);
// printf("count of length :%d", countLength(name));

// char str[] = "ayush"; 
// int length = strlen(str); 
// printf("%d\n", length);

// char oldStr[] = "old"; 
// char newStr[]= "newOne";

// strcpy(newStr, oldStr);
// puts(newStr);

// char firstStr[]= "hello "; 
// char secStr [] = "world"; 
// strcat(firstStr,secStr);
// puts(firstStr);

// char App[] = "aaaa";
// char ban[] = "aaaa";

// printf("%d\n", strcmp(App,ban)); // kyuki ye integer value return karta hai == -1 // kyuki 65 - 66 = -1 a<b
// printf("%d\n", strcmp(ban,App)); // kyuki ye integer value return karta hai == -1 // kyuki 65 - 66 = -1 a<b

// char sr [100]; 
// char ch;  // isme input lege 
// int i = 0;

// while (ch != '\n')
// {
//     scanf("%c",&ch); 
//     sr[i] = ch;
//     i++; 
// }
// sr[i] = '\0';
// puts(sr);

// char password [100]; 
// scanf("%s",password);
// salting(password); 

// char str[] = "ayushkumar"; 
// slice(str,3,6);
char vowel[] = "ayush kumar is good men" ; 
printf(" number of vowels in this sentence %d\n",countVowels(vowel));

 return 0; 


}
int countVowels(char str[]){
    int count = 0; 
    for (int i = 0;str[i] != '\0'; i++)
    {
       if (str[i]== 'a' || str[i]=='e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
       {
        count++; 
       }
              
    }
    return count;
    
}

void slice(char str[] , int n , int m ){
char newStr [100]; 
int j =0; 
for(int i=n; i<=m ; i++,j++){
    newStr[j]= str[i];
}
newStr[j] ='\0'; 
puts(newStr);
}
void salting (char password[]){
    char salt[] = "2330"; 
    char newPass [200]; 

    strcpy(newPass, password);  // newpass k ander password ko kii 1 parameter hai hamera vo copy ho jae ga 
    strcat(newPass, salt); //abb new pass k ander salt ko add kardo 
    puts(newPass);

}
int countLength (char arr[]){
     int count = 0;
     for (int i = 0; arr[i]!= '\0'; i++)
     {
        count++; 
        // printf("%d\t",arr[i]);
     }
     return count-1;
     
}
void printString( char arr[]){
    for (int i =0 ; arr[i] != '\0'; i++)
    {
        printf("%c",arr[i]);

    }
    printf("\n");  
}