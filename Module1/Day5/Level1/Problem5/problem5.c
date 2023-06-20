/*
Write a program to demonstrate the swapping the fields of two structures using pointers
*/

#include<stdio.h>
#include<string.h>

typedef struct MainField
{
    int field1;
    char field2;
    float field3;
    char field4[30];
}Mfield;

void SwapField(Mfield* ptr1,Mfield* ptr2)
{
    int temp1 = ptr1->field1;
    ptr1->field1=ptr2->field1;
    ptr2->field1=temp1;


    char temp2 = ptr1->field2;
    ptr1->field2=ptr2->field2;
    ptr2->field2=temp2;

    float temp3 = ptr1->field3;
    ptr1->field3=ptr2->field3;
    ptr2->field3=temp3;

    char temp4[30];
    strcpy(temp4, ptr1->field4);
    strcpy(ptr1->field4, ptr2->field4);
    strcpy(ptr2->field4, temp4);

}

int main()
{
    Mfield f1 = {100,'H',36.0,"Harsha"};
    Mfield f2 = {200,'S',27.0,"Sasi"};

    printf("Before Swapping Fields: \n");

    printf("Mainfield 1 : field1 : %d field2 : %c field3 : %f field4 : %s \n",f1.field1,f1.field2,f1.field3,f1.field4);
    printf("Mainfield 2 : field1 : %d field2 : %c field3 : %f field4 : %s \n",f2.field1,f2.field2,f2.field3,f2.field4);

    printf("--------------------------------------------------------------------------------------------------------\n");

    SwapField(&f1,&f2);

    printf("After Swapping Fields: \n");

     printf("Mainfield 1 : field1 : %d field2 : %c field3 : %f field4 : %s \n",f1.field1,f1.field2,f1.field3,f1.field4);
    printf("Mainfield 2 : field1 : %d field2 : %c field3 : %f field4 : %s \n",f2.field1,f2.field2,f2.field3,f2.field4);
    

    printf("--------------------------------------------------------------------------------------------------------");

    
}

