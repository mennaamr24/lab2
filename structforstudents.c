#include <stdio.h>
#include <stdlib.h>
struct person
{
    char name;
    int age;
    char grade;
};
int main()
{
    struct person p1;
    p1.name= "menna";
    p1.age=22;
    p1.grade=4;
    struct person *ptr=&p1;
    printf("name: %c \n age: %d \n grade: %d",ptr->name,ptr->age,ptr->grade);
    return 0;

}
