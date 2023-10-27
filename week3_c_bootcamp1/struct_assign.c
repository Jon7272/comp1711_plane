#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
    char name[20];
    char student_id[11];
    unsigned mark;
};

int main(){

    struct student new_student;
    strcpy(new_student.name, "Jon Owens");
    strcpy(new_student.student_id, "13902178");

    int mark;
    printf("Enter mark for %s: ", new_student.name);
    scanf("%d", &mark);

    new_student.mark = mark;

    printf("Name: %s\n", new_student.name);
    printf("ID: %s\n", new_student.student_id);
    printf("Mark: %u\n", new_student.mark);

}
