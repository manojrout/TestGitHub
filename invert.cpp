/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>


class inverter
{
    public:
    inverter();
    ~inverter();

    char * invert(char *str, int len){
    int i = 0, j = len -1;
    char temp;
    for(; i<j; i++,j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    retrun str;
}
};


int main()
{
    
    inverter obj;
    obj = inverter();
    char *str = "abc";
    int len = strlen(str);
    char * rev = obj.invert(str, len);

    return 0;
}
