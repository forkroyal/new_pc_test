#include<stdio.h>

int main() {

    int a = 5;
    int *aPtr = &a; //the reference operator (&) is used to assign the adress of the variable to the pointer

    printf("%p\n", aPtr); //using %p and no dereference operator (*) prints the adress of the first byte
    printf("%i\n", *aPtr);//using %i and a dereference operator (*) prints the value
    

    *aPtr = 6; 
    /*using the dereference operator (*) you can asign a new value to the adress of the pointer
    this also changes the value in the variable (a) itself*/
    printf("%i\n", a);


}