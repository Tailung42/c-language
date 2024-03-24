#include <stdio.h>
struct student{
    char* name;
    int class, rollno;
};
void main()
{
    struct student s1 = {"Bipin thapa", 11, 2};
    s1.name = "bipin karki";
    printf("%s\n", s1.name);
    printf("%i\n", s1.class);
    printf("%i\n", s1.rollno);
    
}