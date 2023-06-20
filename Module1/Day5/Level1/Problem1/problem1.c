/*
Use structures to find the volume and the total surface area of the box. 
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.

Volume of a box:
Volume = length * width * height

Total Surface Area of a box:
Surface Area = 2 * (length * width + length * height + width * height)
*/

#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double volumeOfBox(struct Box *ptr);
double totalSurfaceOfBox(struct Box *ptr);

int main() {
    struct Box b;
    
    printf("Enter the Length: ");
    scanf("%lf", &b.length);
    
    printf("Enter the Width: ");
    scanf("%lf", &b.width);
    
    printf("Enter the Height: ");
    scanf("%lf", &b.height);
    printf("----------------Result------------------\n");
    printf("Volume Of Box: %.2f\n", volumeOfBox(&b));
    printf("Total Surface Of Box: %.2f\n", totalSurfaceOfBox(&b));
    printf("----------------------------------------");
    
    return 0;
}

double volumeOfBox(struct Box *ptr) {
    return (ptr->length) * (ptr->width) * (ptr->height);
}

double totalSurfaceOfBox(struct Box *ptr) {
    return 2 * ((ptr->length * ptr->width) + (ptr->length * ptr->height) + (ptr->width * ptr->height));
}
