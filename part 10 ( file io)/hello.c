#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("student.txt", "a"); 
    char name [100]; 
    int age ; 
    float cgpa ; 


    printf("enter name : "); 
    scanf("%s",name);
    printf("enter age : "); 
    scanf("%d", &age); 
    printf(" enter cgpa : ");
    scanf("%f",&cgpa); 

    fprintf(fptr ,"%s\t", name);
    fprintf(fptr ,"%d\t", age);
    fprintf(fptr ,"%f\n", cgpa);
     
     

//     fptr = fopen("text.txt", "r");
//    int n; 
//   fscanf(fptr, "%d",&n);
//   printf("numbers = %d\n", n);
//   fscanf(fptr, "%d",&n);
//   printf("numbers = %d\n", n);
//   fscanf(fptr, "%d",&n);
//   printf("numbers = %d\n", n);
//   fscanf(fptr, "%d",&n);
//   printf("numbers = %d\n", n);
//   fscanf(fptr, "%d",&n);
//   printf("numbers = %d\n", n);

  fclose(fptr);

    //  char ch; 
    //  ch = fgetc (fptr); 
    //  while (ch != EOF)
    //  {
    //     printf("%c", ch); 
    //     ch = fgetc(fptr); 
    //  }
    //  printf("\n");

    // printf(" %c \n", fgetc(fptr)); 
    // printf(" %c \n", fgetc(fptr)); 
    // printf(" %c \n", fgetc(fptr)); 
    // printf(" %c \n", fgetc(fptr)); 
    // printf(" %c \n", fgetc(fptr)); 

    // fprintf(fptr, "%c", 'm');
    // fprintf(fptr, "%c", 'a');
    // fprintf(fptr, "%c", 'n');
    // fprintf(fptr, "%c", 'g');
    // fprintf(fptr, "%c", 'o');

    fclose(fptr);


    return 0;
}