#include <stdio.h>
#include <string.h>

void String(char arr[]);
int length (char arr[]);
void salting (char str[]);
int countVowels (char str[]);
int checking(char str[] , char ch);
int main()
{
    //    char one[] = { 'a', 'y','u','s','h','\0'};
    //  char two[]= "ayush kumar ";
    // String(two);
    //  String(one);
    // char enter[100];
    // fgets(enter,150,stdin);
    //   puts(enter);

    // char *ptr = "asyuh"; 
    // char noptr [] = "aysuh";
    // String(noptr);
    // ptr = "ayush";
    // String(ptr);

// find the length of a string ===================

    // char name[]= "hello ayush"; 
    //  printf("%d\n",length(name));

//     char str[]= "ayush"; 
//     int len2 = strlen(str);
//     // printf("%d\n",len2); 

//     // transfroming data from one string to the two string    ================== 
//      char addOne[] = "i am one "; 
//      char addTwo[] = "i am two"; 
//      strcpy(addOne,addTwo);
//      puts(addOne);

// // adding string in one another ===========

// char one[20]= "i am ";
// char two[] = "aayush kumar" ; 
// strcat(one,two); 
// puts(one);

// // comparing two strings 

// char apple[]= "Apple";
// char banna[] = "Apple";
// printf("%d\n", strcmp(apple,banna));

// // fncs to use %c to runn a sentnce of string 

// char str2 [100];
// char ch; 
// int i = 0;

// while(ch!='\n'){
//     // printf("type any thing : "); ye harr word k bad khud ko print karega 
// scanf("%c",&ch);
// str2[i] = ch;
// i++; 
// }

// str2[i]='\0';
// puts(str2);

// salting functions ==============

// char pass[]= "pawar";
// salting(pass);

// checking numbers of vowels ==========

// char vowl[]= "hello bhai merr you are great";
// printf("%d\n", countVowels(vowl));

// checking the avaiablity =============

char some[] = "hello bhai ji"; 
char ch = 'o'; 

checking(some,ch);

    return 0;
}
int checking(char str[] , char ch){
    for (int i = 0;str[i]!= '\0'; i++)
    {
        if (str[i] == ch)
        {
          printf("yahi hu m ");
          return;
        }
        }
            printf("this is not avaiable");
    }
        
    


int countVowels (char str[]){
    int count = 0; 
    for (int i = 0; str[i] != '\0';i++)
    {
    
    if (str[i]=='a' || str[i] == 'e' || str[i] == 'i' || str[i]== 'o' || str[i] == 'u' )
    {
      count++;
    }

    }
    return count;
    
}

void salting (char str[]){
    char salt[]= "2330"; 
    char newArr[200];

    strcpy(newArr,str);
    strcat(newArr,salt); 

    puts(newArr);
    
}


int length (char arr[]){
    int count = 0;
    for (int i = 0; arr[i] !='\0'; i++){
        count++;
    }
    return count-1;
    
}

void String(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}
