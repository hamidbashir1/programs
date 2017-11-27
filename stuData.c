#include <stdio.h>

struct StudentData{
    char *stu_name;
    int stu_id;
    int stu_age;
};
int main()
{
   
     struct StudentData student;

     student.stu_name = "Talib Bhat";
     student.stu_id = 1234;
     student.stu_age = 25;

     printf("\nStudent Name is: %s\n", student.stu_name);
     printf("\nStudent Id is: %d\n", student.stu_id);
     printf("\nStudent Age is: %d\n\n", student.stu_age);
     return 0;
}