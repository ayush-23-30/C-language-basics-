#include <stdio.h>
#include <string.h>

    struct  student 
    {
      int roll; 
      float cgpa; 
      char name[100]; 
    };
    typedef struct policeModernSchool
    {
        char name[100];
        int rollNo;
        float percentage; 
    } pms;
    struct address
    {
        int houseNo ; 
        int block; 
        char city[100]; 
        char state[100];
       
    };
    struct  victor
    {
        int x;
        int y; 
    };
    
    
    

    int sum (int n);

    void printInfo (struct student s1);
    void printadd (struct address a1);
    void calSum (struct victor v1 , struct victor v2 , struct victor sum); 
int main()
 {
//     struct student s1 ; 
//     s1.roll = 9999; 
//     s1.cgpa = 9.4; 
//     // s1.name = "ayush kumar "; ye error dega kyuki hum arr [] ko rewtire nahi karr sakte isliye cpy fncs use karna hoga 
//     strcpy(s1.name , "ayush kuamr "); 


//     struct student s2; 
//     s2.roll  =  10000; 
//     s2.cgpa = 8.9; 
//     strcpy(s2.name, "anshikha kumari "); 
     

//     struct student s3; 
//     s3.roll  =  10001; 
//     s3.cgpa = 7.8; 
//     strcpy(s3.name, "vishal saini  "); 
    
//     // printf("roll number of first student  : %d\t", s1.roll); 
//     // printf("marks   of first student  : %f\t", s1.cgpa); 
//     // printf("name of first student   : %s\n", s1.name); 
     
//     // printf("roll number of 2nd student : %d\t", s2.roll); 
//     // printf("marks of 2nd student : %f\t", s2.cgpa); 
//     // printf("name of 2nd student   : %s\n", s2.name); 

//     // printf("roll number of 3rd student  : %d\t", s3.roll); 
//     // printf("marks of 3rd student  : %f\t", s3.cgpa); 
//     // printf("name of 3rd student   : %s\n", s3.name); 
    
//     struct student ece[100]; 
//     ece[0].roll = 1; 
//     ece[0].cgpa = 7.6; 
//     strcpy(ece[0].name,"sahu"); 

//     ece[1].roll = 2; 
//     ece[1].cgpa = 6.3; 
//     strcpy(ece[1].name,"anuj"); 

//     struct student it[100]; 
//     it[2].roll = 1; 
//     it[2].cgpa = 7.7; 
//     strcpy(it[2].name, "saksham"); 

//     it[0].roll= 5;
//     it[0].cgpa = 6.4;
//     strcpy(it[0].name, "sumit "); 


    // printf("Ece roll number %d\t",ece[0].roll);
    // printf("Ece name  %s\t",ece[0].name);
    // printf("Ece CGPA %f\n",ece[0].cgpa);

    // printf("Ece roll number %d\t",ece[1].roll);
    // printf("Ece name  %s\t",ece[1].name);
    // printf("Ece CGPA %f\n",ece[1].cgpa);

    // printf("it roll number %d\t",it[0].roll);
    // printf("it name  %s\t",it[0].name);
    // printf("it CGPA %f\n",it[0].cgpa);

    // printf("it roll number %d\t",it[2].roll);
    // printf("it name  %s\t",it[2].name);
    // printf("it CGPA %f\n",it[2].cgpa);

// order roll number cgpa name 

    // struct student s4 = {9,7.3,"ayush kumar "};
    // struct student it [4] = {10, 9.3, "anshikha kuamri "};

    // struct student *ptr =&s4; 
    // printf("student data : %s\n",(*ptr).name);
    // printf("student data : %s\n", ptr->name);
    // printf("student data : %d\n", ptr->roll);
    // printf("student data : %f\n", ptr->cgpa);
    // printf("student data : %d\n", ptr);
    // printf("%d\n", sum(1));

    // struct student s1 = {1993, 8.3,"ayushkuamr"};
    // struct student s2 = {2000, 5.3,"sahu"};
    // printInfo(s1);
    // printInfo(s2);
    // pms p1;
    // strcpy(p1.name , "anshikha");
    // p1.rollNo = 1002;
    // p1.percentage = 99.2;
    // printf("pms student1 %s\n", p1.name);
    // printf("pms student1 %d\n", p1.rollNo);
    // printf("pms student1 %f\n", p1.percentage);

    struct address a1 = {558, 3, "indrapuram", "uttar pradesh "};
    struct address a2 = {342, 5, "vaishali", "uttar pradesh "};
    struct address a3 = {133, 23, "bhapur", "uttar pradesh "};
    struct address a4 = {834, 1, "khora", "uttar pradesh "};
    struct address a5 = {321, 91, "indrapuram", "uttar pradesh "};
    // printadd(a1);
    // printadd(a2);
    // printadd(a3);
    // printadd(a4);
    // printadd(a5);


    struct victor v1 = {5,10};
    struct victor v2 = {3,7};

    struct victor sum = {0};
    calSum(v1, v2, sum);
    return 0 ; 



}
    void calSum (struct victor v1 , struct victor v2 , struct victor sum){
        sum.x = v1.x + v2.x;
        sum.y = v1.y + v2.y;

        printf("sum of x is %d \n", sum.x);
        printf("sum of y is %d \n", sum.y);
    }
void printadd (struct address a1){
    printf("address of person");
    printf("house number %d\n", a1.houseNo);
    printf("house number %d\n", a1.block);
    printf("house number %s\n", a1.city);
    printf("house number %s\n", a1.state);
    printf("\n");
}
void printInfo (struct student s1){
    printf("information of students \n");
    printf("name of students  %c\n", s1.name);
    printf("roll number  of students %d\n", s1.roll);
    printf("cgpa of students %f\n", s1.cgpa);
}
int sum (int n){
    if (n == 1){
        return 1; 
    } else{
        int num = sum(n-1); 
        int num2 = num*n; 
        return num2; 
    }
    printf("\n");
    
}