#include <iostream>
#include "Foo.h"

using namespace std;

int main()
{

    int index =0;
    while(index<5)
    {
        cout << "Hello "<<index<< endl;
        index++;
    }

    char *ch="wangsy";

    cout<<getPersion(ch).name<<endl;
    cout<<add(10,20)<<endl;
    return 0;
}
