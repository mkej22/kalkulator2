
#include <stdio.h>


int main(int argc, char *argv[]) {
    float first_number=0.0f;
    float second_number=0.0f;
    float Addition=0.0f;
    float Subtraction=0.0f;
    float Multiplication= 0.0f;
    float Division=0.0f;
    int choice=0;

    printf("Enter the first number:");
    scanf("%f",&first_number);  //& - refelencja, przekazuje funkcje
    printf("Enter the second number:");
    scanf("%f" ,&second_number);
    printf("Select what action you want to perform:\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Chosen Action:\n");
    scanf("%d",&choice);
    switch(choice) {

        case 1:
            Addition = first_number + second_number;
            printf("The sum of %f and %f is%f\n", first_number,second_number, Addition);
        break;
        case 2:
            Subtraction = first_number - second_number;
            printf("The result of subtracting %f and %f is=%f\n", first_number, second_number, Subtraction);
        break;
        case 3:
            Multiplication = first_number * second_number;
            printf("The result of multiplying the numbers %f and %f is=%f\n", first_number, second_number, Multiplication);
        break;
        case 4:
            if(second_number == 0) {
                printf("Error: Division by zero!\n");
            }  else {
                Division = first_number / second_number;
                printf("The result of dividing %f by %f is=%f\n", first_number, second_number, Division);
            }
        break;
    }
    return 0;
}







