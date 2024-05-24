
#include <stdio.h>


int main(int argc, char *argv[]) {
    float first_number=0.0f;
    float second_number=0.0f;
    float result=0.0f;
    int choice=0;
    int continue_calculating = 1;
    int use_result_as_first_number = 0;

    while(continue_calculating) {
        if(!use_result_as_first_number)
            {  printf("Enter the first number:");
        scanf("%f",&first_number);  //& - refelencja, przekazuje funkcje
    } else {
        first_number = result;
        use_result_as_first_number = 0;
    }
        printf("Enter the second number:");
        scanf("%f" ,&second_number);
        printf("Select what action you want to perform:\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exiting The Calulcator\n");
        printf("Chosen Action:\n");
        scanf("%d",&choice);
        switch(choice) {

            case 1:
                result = first_number + second_number;
            printf("The sum of %f and %f is%f\n", first_number,second_number, result);
            break;
            case 2:
                result = first_number - second_number;
            printf("The result of subtracting %f and %f is=%f\n", first_number, second_number, result);
            break;
            case 3:
                result = first_number * second_number;
            printf("The result of multiplying the numbers %f and %f is=%f\n", first_number, second_number, result);
            break;
            case 4:
                if(second_number == 0) {
                    printf("Error: Division by zero!\n");
                }  else {
                    result = first_number / second_number;
                    printf("The result of dividing %f by %f is=%f\n", first_number, second_number, result);
                }
            break;
            case 5:
                continue_calculating = 0;
            printf("Exiting the calculator.\n");
            break;
            default:
                printf("Invaild choise. Please choose a valid operation.\n");
        }
        if(continue_calculating) {
            printf("Do you want to use the result (%f) as the first number for the next operation? (1 for Yes, 0 for No): ", result);
            scanf("%d", &use_result_as_first_number);
        }
    }
    return 0;
}







