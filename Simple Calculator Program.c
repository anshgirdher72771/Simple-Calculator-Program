#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float perform_addition(float Num1, float Num2);
float perform_Substraction(float Num1, float Num2);
float perform_Mul(float Num1, float Num2);
float perform_Divide(float Num1, float Num2);

int main() {
     printf("                                                                Welcome To Our Student Database Management System                                    ");
    printf("                                                                                                 Made By Ansh Girdher                                              \n");

    do {
        float *Num1 = (float*)malloc(sizeof(float));
        float *Num2 = (float*)malloc(sizeof(float));
start:
        printf("Enter a Number: ");
        scanf("%f", Num1);

        char operator;
        printf("Choice Your Operator (+, -, *, /): ");
        fflush(stdin);
        scanf(" %c", &operator);

        printf("Enter a Number: ");
        scanf("%f", Num2);

        switch (operator) {
            case '+':
                printf("The Result is: %.5f\n", perform_addition(*Num1, *Num2));
                break;
            case '-':
                printf("The Result is: %.5f\n", perform_Substraction(*Num1, *Num2));
                break;
            case '*':
                printf("The Result is: %.5f\n", perform_Mul(*Num1, *Num2));
                break;
            case '/':
                if (*Num2 != 0) {
                    printf("The Result is: %.5f\n", perform_Divide(*Num1, *Num2));
                } else {
                    printf("Cannot divide by zero.\n");
                }
                break;
            default:
                printf("Invalid Operator! Please Try Again.\n");
                break;
        }
        int start_end;
    printf("\nIf you want to exit, type '0'or to start, type '1' : ");
    scanf("%d",&start_end);
    if (start_end==0)
    {
        goto exit;
        
    }
    else if (start_end==1)
    {
       goto start;
    }

        free(Num1);
        free(Num2);
         exit:
    printf("\n");
    printf("                                                                          Great!Thanks for using our Program                                           ");


    } while (0);
getch();
    return 0;
}

float perform_addition(float Num1, float Num2) {
    return Num1 + Num2;
}

float perform_Substraction(float Num1, float Num2) {
    return Num1 - Num2;
}

float perform_Mul(float Num1, float Num2) {
    return Num1 * Num2;
}

float perform_Divide(float Num1, float Num2) {
    return Num1 / Num2;
}
