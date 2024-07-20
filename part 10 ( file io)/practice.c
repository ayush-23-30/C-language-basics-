#include <stdio.h>

int main(){

FILE *fptr;
fptr = fopen("std.txt", "a"); 
// char name[100]; 
// int age; 
// float cgpa; 

// printf("enter your name ");
// scanf("%s",name); 
//  printf("enter your age "); 
//  scanf("%d",&age);
//  printf("enter your cgpa "); 
//  scanf("%f", &cgpa); 

//  fprintf(fptr,"%s\t",name); 
//  fprintf(fptr,"%d\t",age); 
//  fprintf(fptr,"%f",cgpa); 

fclose(fptr); 

fptr = fopen("std.txt", "w"); 
fprintf(fptr, "%c", 'a');
// int n;

// if (fptr == NULL)
// {
//     printf("file does not exist"); 
// }
// ch = fgetc(fptr); 
// while (ch != EOF)
// {
//     printf("%c",ch); 
//     ch = fgetc(fptr);
// }
//  int n;
//  fscanf(fptr,"%d", &n);
//  printf("%d",n);
//  fscanf(fptr,"%d", &n);
//  printf("%d",n);
//  fscanf(fptr,"%d", &n);
//  printf("%d",n);
//  fscanf(fptr,"%d", &n);
//  printf("%d",n);
//  fscanf(fptr,"%d", &n);
//  printf("%d",n);




// // fscanf(fptr, "%c", &ch); // input lena , c type ka or &ch m dal do 
// // printf("characters = %c\n", ch); 
// // fscanf(fptr, "%c", &ch); 
// // printf("characters = %c\n", ch); 
// // fscanf(fptr, "%c", &ch); 
// // printf("characters = %c\n", ch); 
// // fscanf(fptr, "%c", &ch); 
// // printf("characters = %c\n", ch); 
// // fscanf(fptr, "%c", &ch); 
// // printf("characters = %c\n", ch);

// // fscanf(fptr,"%d",&n);
// // printf("phone number %d\n", n);
// //  // ab lena hai
// // fptr = fopen("std.txt", "w"); 
// // fprintf(fptr, "%c", 'a'); 
// // fprintf(fptr, "%c", 'n'); 
// // // fprintf(fptr, "%c", 'k'); 
// // fprintf(fptr, "%c", 's'); 
// // fprintf(fptr, "%c", 'h'); 
// // fprintf(fptr, "%c", 'i'); 
// // fprintf(fptr, "%c", 'k'); 
// // fprintf(fptr, "%c", 'a'); 

// printf("%c",fgetc(fptr));
// printf("%c",fgetc(fptr));
// printf("%c",fgetc(fptr));
// printf("%c",fgetc(fptr));
// printf("%c",fgetc(fptr));
// printf("%c",fgetc(fptr));
// printf("%c \n",fgetc(fptr));

// printf("%d",fgetc(fptr));

// fputc('a',fptr);
// fputc('y',fptr);
// fputc('u',fptr);
// fputc('h',fptr);
// fputc('s',fptr);



fclose(fptr); 

    return 0; 
}