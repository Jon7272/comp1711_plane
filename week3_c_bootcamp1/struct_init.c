#include <stdio.h>

struct student{
    char name[20];
    char student_id[11];
    unsigned mark;
};

int main(){
    
    struct student new_student = {"Jon Owens", "28932123", 35};
    printf("Name: %s\n", new_student.name);
    printf("ID: %s\n", new_student.student_id);
    printf("Mark: %u\n", new_student.mark);

}