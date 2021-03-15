#include <stdio.h>

void main(){

    // Variable Student
    char std_name[30][20];
    char std_surname[30][20];
    char std_id[30][10];
    char std_class[30][10];
    int std_income[30];

    // Variable Teacher
    char teacher_name[15][20];
    char teacher_surname[15][20];
    char teacher_id[15][10];
    char teacher_department[15][10];
    int teacher_salary[15];

    // Variable Staff
    char staff_name[20][20];
    char staff_surname[20][20];
    char staff_id[20][10];
    char staff_department[20][10];
    int staff_salary[20];

    // Structure Student
    struct student
    {
        char name[20];
        char surname[20];
        char id[10];
        char class[10];
        int  income;
    };

    // Structure Teacher
    struct teacher
    {
        char name[20];
        char surname[20];
        char id[10];
        char department[10];
        int  salary;
    };

    // Structure Staff
    struct staff
    {    
        char name[20];
        char surname[20];
        char id[10];
        char department[10];
        int  salary;
    };
    
}