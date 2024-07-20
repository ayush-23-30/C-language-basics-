#include <stdio.h>
#include <string.h>

void rectangle(int l, int b){ // this  fncs take 2 inputs l and B 
    printf("perimeter of rectangle %d\n", 2*(l+b)); //this will print the output using a formula of perimeter 
}
int cube(int n){ // n is a argument 
    int cubing = n*n*n; // this is doing the cube of n 
    return cubing; //  this is returning the output after doing cube 
}


int plaindrome(char str[]){ // nitin
    int left = 0; // first indexx
    int rigth = strlen(str)-1; // finding the last index of str (end of string)

    while(left<rigth){ // loop run until the left is become less than rigth 
    if (str[left] != str[rigth]) // checking the characters are equal or not 
    {
       return 0; // this is a plaindrome 
    }
    left ++; // increasing the index of left 
    rigth --; // decreasing the index of rigth to move towards the center of string 

    }
    return 1; 

}



int isplaindrome(char str[]){
    char reversed[100]; 
    int len = strlen(str); 

    for (int i = 0; i < len; i++)
    {
        reversed[i] = str[len-1-i];
    }
    
reversed[len] =  '\0'; 
if (strcmp(str,reversed) ==0)
{
    return 1; 
}else{
    return 0; 
}

}




int main(){
    // int len = 10; 
    // int bre = 15; 

    // rectangle(len, bre); 
    // int cub = 5; 
    // printf("cube of num : %d\n", cube(cub));

    char word[100]; 
    printf("enter any word : "); 
    scanf("%s",&word); 

    // this is by using revsered string 

    if (isplaindrome(word))
    {
        printf("this is a plaindrome %s\n", word);
    }else{
        printf("this is not a plaindrome \n",word); 
    }
// this is first plaindrome 
    // if (plaindrome(word))
    // {
    //     printf("this is a plaindrome %s\n", word);
    // }else{
    //     printf("this is not a plaindrome \n",word); 
    // }
    




    return 0; 
}