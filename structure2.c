#include<stdio.h>

struct Demo
{
     int i;
     float f;
     char ch;
     float d;
};


int main()
{ 
    struct Demo dobj;

    printf("size of the structure is : %d\n",sizeof(dobj));

    return 0;
}
