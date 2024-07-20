#include <stdio.h>
#include <string.h>
struct schl
{
    char name[100]; 
    int roll; 
    float cgpa;
};
// typedef struct policemodernschool 
// {
//     char name [100];
//     int rollNumber;
//     float marks;
// }pms;


typedef struct policemodernschool 
{
    char name[100];
    int rollNumber;
    float marks;
    // chatgpt
} pms;

void school( struct policemodernschool a1);
void passing( struct schl s1);

int main(){

    // struct schl s1; 
    // strcpy(s1.name, "ayush kumar");
    // s1.roll = 10;
    // s1.cgpa = 7.6;

    // printf(" name of student :%s\n", s1.name);
    // printf(" roll number : %d\n", s1.roll);
    // printf(" cgpa : %f\n", s1.cgpa);
    // printf("\n");

    // struct schl s2 = {"anshika kumari", 11 , 9.3};
    

    // // strcpy(s2.name, "anshikha kumari");
    // // s2.roll = 11; 
    // // s2.cgpa = 9.8;

    //  printf(" name of student :%s\n", s2.name);
    // printf(" roll number : %d\n", s2.roll);
    // printf(" cgpa : %f\n", s2.cgpa);
    // printf("\n");

//      struct schl s4 = {"anshika kumari", 11 , 9.3};

// struct schl *ptr = &s4;
// printf("student data %s\t", (*ptr).name); 
// printf("student data %d\t", (*ptr).roll); 
// printf("student data %f\n", (*ptr).cgpa); 

// struct schl s5 = {"ayush kuamr ", 10, 9.4};
// struct schl *point = &s5;
// printf("student data : %s\t", point->name);
// printf("student data : %d\t", point->roll);
// printf("student data : %f\n", point->cgpa);
// printf("student data : %p\n", point);
// // printf("student data : %d\n", (point).name);

struct schl s1 = { "ayush",8, 9.2};
struct schl s2 = { "anshikha",7,10};
struct schl s3 = { "mahi",9, 1.2};
passing(s1);
passing(s2);
passing(s3);

// struct pms ss1 = {"anuj",6,7.2};
// struct pms ss2 = {"aniket",7,4.2};
// struct pms ss3 = {"sahu",8,9.2};

struct pms s1 = {"anuj", 6, 7.2};
struct pms s2 = {"aniket", 7, 4.2};
struct pms s3 = {"sahu", 8, 9.2};
school(s1);
school(s2);








    return 0; 
}
void passing( struct schl s1){
    printf("name : %s\t",s1.name);
    printf("roll number : %d\t",s1.roll);
    printf("cgpa : %f\t",s1.cgpa);
    printf("\n");
}
void school( struct policemodernschool a1){
    printf("name : %s\t",a1.name);
    printf("roll number : %d\t",a1.rollNumber);
    printf("cgpa : %f\t",a1.marks);
    printf("\n");
}