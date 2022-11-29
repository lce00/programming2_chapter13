#include <stdio.h>

struct student{
int number;
char name[10];
int grade;
};

void inc_grade(struct student *p){
p->grade += 1;
}

int main()
{
struct student a={1, "Jack",99};
inc_grade(&a);
printf("student number : %d\n", a.number);
printf("student name : %s\n", a.name);
printf("student grade : %d\n", a.grade);
return 0;
}