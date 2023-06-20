/*
Write a C program that uses functions to perform the following operations: 
     i) Reading a complex number 
     ii) Writing a complex number 
     iii) Addition of two complex numbers 
     iv) Multiplication of two complex numbers 
  (Note: represent complex number using a structure).
*/

#include<stdio.h>

struct complexNumber
{
    double real;
    double imaginary;
};

void readComplexNumber(struct complexNumber *ptr)
{
    printf("Enter the Real Number : ");
    scanf("%lf",&(ptr->real));

    printf("Enter the Imaginary Number : ");
    scanf("%lf",&(ptr->imaginary));
}

void writeComplexNumber(struct complexNumber c)
{
    printf("%.2f + %.2f i\n",c.real,c.imaginary);
}

void AdditionOfComplexNo(struct complexNumber c1,struct complexNumber c2)
{
    printf("\nThe Addition of Two complex Number is %.2f + %.2f i: \n",c1.real+c2.real,c1.imaginary+c2.imaginary);
}

void MultiplicationOfComplexNo(struct complexNumber c1,struct complexNumber c2)
{
    double resultReal = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
    double resultImaginary = (c1.real * c2.imaginary) + (c1.imaginary * c2.real);
    printf("\nThe Multiplication of Two Complex Number is  %.2f + %.2fi: ",resultReal,resultImaginary);
}


int main()
{
    struct complexNumber c1,c2;

    printf("Enter the First Complex Number \n");
    readComplexNumber(&c1);

    printf("Enter the Second Complex Number \n");
    readComplexNumber(&c2);


    printf("--------------------------Result---------------------------\n");
    printf("\nThe First Complex Number : ");
    writeComplexNumber(c1);

    printf("\nThe Second Complex Number : ");
    writeComplexNumber(c2);

    AdditionOfComplexNo(c1,c2);
    MultiplicationOfComplexNo(c1,c2);

    printf("\n-----------------------------------------------------------\n");


}