/*
Suppose 7 names are stored in an array of pointers names[] as shown below:
 char *name[]={
        "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"
          }
  Write a program to arrange these names in alphabetical order.

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Strsort(const void *p1, const void *p2)
{
    char *s1=(char*)p1;
    char *s2=(char*)p2;
    return strcmp(s1,s2);
}
int main()
{
    char name[7][100]={"Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"};
    qsort(name,7,sizeof(name[0]),Strsort);

    for(int i=0;i<7;i++)
    {
        printf(" \"%s\" ",name[i]);
    }

}
