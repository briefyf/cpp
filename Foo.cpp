#include "Foo.h"

persion getPersion(char *name)
{
    persion p;
    p.name=name;
    return p;
}

int add(int a ,int b)
{
    return a+b;

}

int findMax(int *arr)
{

    int index=0;
    int _max=arr[0];

    while(index<arr.size)
    {
        if(arr[index]>_max)
        {
            _max=arr[index];
        }

        index++;
    }

}
