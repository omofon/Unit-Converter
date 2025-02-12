#include <stdio.h>

int main()
{
    // user inputs and variables
    char category;

    int tempChoice;
    int currencyChoice;
    int massChoice;

    int userinputF;
    int userinputC;

    int userinputUSDtoEuro;
    int userinputUSDtoCAD;
    int userinputUSDtoNGN;

    int userinputOunce;
    int userinputGram;

    int fahrenheitToCelcius;
    int celciusToFahrenheit;

    float USDtoEURO;
    float USDtoCAD;
    float USDtoNGN;

    float ounceToPounds;
    float gramsToPounds;

    // Welcome Section
    printf("\n\t\t\t\t ------------------------------------------ \n");
    printf("\n\t\t\t\tWelcome to Unit Converter! \n");
    printf("\n\t\t\t\tHere is a list of conservation to choose from: \n");
    printf("\n\t\t\t\tTemprature(T), Currency(C), Mass(M) \n");
    printf("\n\t\t\t\tPlease enter the letter you want to convert.\n");
    scanf("%c", &category);

    /* Temperature Category*/
    if (category == 'T') {
        printf("\n\t\t\t\t ------------------------------------------ \n");
        printf("Welcome to Temperature Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for Fahrenheit to Celsius. \n");
        printf("Enter 2 for Celsius to Fahrenheit. \n");
        scanf("%d",&tempChoice);
       
        if(tempChoice == 1)
        {
            printf("Please enter the Fahrenheit degree: \n");
            scanf("%d", &userinputF);
            fahrenheitToCelcius = ((userinputF - 32) * (5.0/9.0));
            printf("Celcius: %d\n", fahrenheitToCelcius);
        }
        else if (tempChoice == 2)
        {
           printf("Please enter the Celcius degree: \n");
           scanf("%d", &userinputC);
           celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
           printf("Fahrenheit: %d\n", celciusToFahrenheit);
        }
        else
        {
            printf("Please enter the correct choice. \n");
        }   
    }
    // Currency Category
    else if (category == 'C') {
        printf("\n\t\t\t\t------------------------------------------- \n");
        printf("Welcome to Currency Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for USD to Euro. \n");
        printf("Enter 2 for USD to CAD. \n");
        printf("Enter 3 for USD to NGN. \n");
        scanf("%d",&currencyChoice);

        if(currencyChoice == 1){
            printf("Please enter the USD amount: \n$");
            scanf("%d",&userinputUSDtoEuro);
            USDtoEURO = userinputUSDtoEuro * 0.87;
            printf("Euro: %.2f\n",USDtoEURO);
        }
        else if(currencyChoice == 2){
            printf("Please enter the USD amount: \n$");
            scanf("%d",&userinputUSDtoCAD);
            USDtoCAD = userinputUSDtoCAD * 1.19;
            printf("CAD: %.2f\n",USDtoCAD);
        }
        else if(currencyChoice == 3) {
            printf("Please enter the USD amount: \n$");
            scanf("%d",&userinputUSDtoNGN);
            USDtoNGN = userinputUSDtoNGN * 1500;
            printf("NGN: %.2f\n",USDtoNGN);
        }
        else
            printf("Please enter correct choice. \n");
    }
    // Mass CAtegory
    else if (category = 'M') {
        printf("\n\t\t\t\t ------------------------------------------ \n");
        printf("Welcome to Mass Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for ounces to pounds. \n");
        printf("Enter 2 for gram to pounds. \n");
        scanf("%d",&massChoice);

        if(massChoice == 1){
            printf("Please enter the ounce amount: \n");
            scanf("%d",&userinputOunce);
            ounceToPounds = userinputOunce * 0.0625;
            printf("Pounds: %.2f\n",ounceToPounds);
        }
        else if(massChoice == 2) {
            printf("Please enter the gram amount: \n");
            scanf("%d",&userinputGram);
            gramsToPounds = userinputGram * 0.00220462;
            printf("Pounds: %.2f\n",gramsToPounds);
        }
        else 
          printf("Please enter the correct choice. \n");
    }
    else
    {
        printf("Nu;;!\n");
        return 1;
    }
    return 0;    
}