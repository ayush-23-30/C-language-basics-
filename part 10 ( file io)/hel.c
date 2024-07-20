#include <stdio.h>

int main ()
{
     FILE *Fptr; 

    Fptr = fopen("naya.txt", "a"); 
    char name [100]; 
    int roll; 
    int address ; 

    printf ("enter your name : ");
    scanf("%s",&name);

    printf ("enter your gali no : ");
    scanf("%d",&roll);

    printf ("enter your house no : ");
    scanf("%d",&address);
    
    fprintf(Fptr,"%s\t",name); 
    fprintf(Fptr,"%d\t",roll); 
    fprintf(Fptr,"%d\n",address); 

     


    // if (Fptr == NULL){
    //     printf (" file does not exist");
    // }
    //   int n; 
    //   fscanf (Fptr,"%d", &n); 
    //   printf(" number %d\t" , n);
    //   fscanf (Fptr,"%d", &n); 
    //   printf(" number %d\t" , n);
    //   fscanf (Fptr,"%d", &n); 
    //   printf(" number %d\t" , n);
    //   fscanf (Fptr,"%d", &n); 
    //   printf(" number %d\t" , n);
    //   fscanf (Fptr,"%d", &n); 
    //   printf(" number %d\t" , n);

    //  char ch; 
    //  ch = fgetc(Fptr); 
    //  while (ch!= EOF)
    //  {
    //     printf("%c",ch); 
    //     ch = fgetc(Fptr);
    //  }
     
    //  printf("%c\n", ch);

    //  fputc('a', Fptr);
    //  fputc('n', Fptr);
    //  fputc('s', Fptr);
    //  fputc('h', Fptr);
    //  fputc('i', Fptr);
    //  fputc('k', Fptr);
    //  fputc('a', Fptr);




    // Fptr = fopen("naya.txt", "r"); 
    // if (Fptr == NULL){
    //     printf (" file does not exist");
    // }
    //  printf("%c\n", fgetc(Fptr));
    //  printf("%c\n", fgetc(Fptr));
    //  printf("%c\n", fgetc(Fptr));
    //  printf("%c\n", fgetc(Fptr));
    //  printf("%c\n", fgetc(Fptr));



        // fscanf(Fptr, "%c", &ch); 
        // printf("%c\n",ch);
       
        // fscanf(Fptr, "%c", &ch); 
        // printf("%c\n",ch);
       
        // fscanf(Fptr, "%c", &ch); 
        // printf("%c\n",ch);
       
        // fscanf(Fptr, "%c", &ch); 
        // printf("%c\n",ch);
       
        // fscanf(Fptr, "%c", &ch); 
        // printf("%c\n",ch);
    
    
    // Fptr = fopen ("naya.txt","w"); 
    // fprintf(Fptr,"%c", 'a');
    // fprintf(Fptr,"%c", 'y');
    // fprintf(Fptr,"%c", 'u');
    // fprintf(Fptr,"%c", 's');
    // fprintf(Fptr,"%c", 'h');

    // fclose(Fptr); 


    return 0; 

}