#ifndef FOO_H_INCLUDED
#define FOO_H_INCLUDED
#include <string.h>

struct persion
{
    char  *name;
    int age;
};



persion getPersion(char *str);

int add(int a, int b);

#endif // FOO_H_INCLUDED
