#include <stdio.h>
#include <string.h>
int mass();
int temp();

int main()
{
    char mType[50];
    double mass_val;
    double temp_val;
    double vol_val;
    double len_val;
    printf("What are you trying to measure?  \n");
    scanf("%s", mType);
    if(strcmp(mType,"Mass") == 0){
        printf("Please Enter\n K for Kilogram\n H for Hectogram\n D for Decagram\n X for Gram\n P for Decigram\n C for Centigram\n M for Miligram\n");
        mass_val = mass();
        printf("Conversion Complete! %lf", mass_val);
    }else if(strcmp(mType,"Length") == 0){
        printf("Please Enter\n K for Kilometer\n H for Hectometer\n D for Decameter\n X for Meter\n P for Decimeter\n C for Centimeter\n M for Milimeter\n");
        len_val = mass();
        printf("Conversion Complete! %lf", len_val);
    }else if(strcmp(mType,"Volume") == 0){
        printf("Please Enter\n K for Kilolitre\n H for Hectolitre\n D for Decalitre\n X for Litre\n P for Decilitre\n C for Centilitre\n M for Mililitre\n");
        vol_val = mass();
        printf("Conversion Complete! %lf", vol_val);
    }else if(strcmp(mType,"Temperature") == 0){
        printf("Please Enter\n K for Kelvin\n C for Celcium\n F for Fahrenheit\n");
        temp_val = temp();
        printf("Conversion Complete! %lf", temp_val);
    }else{
        printf("Sorry, This Convertor does not support this Measurement Type \n");
    }
    
    
    
    return 0;
}

int temp(){
    //K, F, C 
    char tUnit1;
    char tUnit2;
    double tVal;
    double finalValT;
    printf("Enter Current Unit Symbol: \n");
    scanf(" %c", &tUnit1);
    printf("Enter Desired Unit Symbol: \n");
    scanf(" %c", &tUnit2);
    printf("Enter Value: \n");
    scanf("%lf", &tVal);
    
    if(tUnit1 == 'K'){
        switch(tUnit2){
            case 'F':
                finalValT = (tVal - 273.15)*(9/5) + 32;
            break;
            
            case 'C':
                finalValT = tVal - 273.15;
            break;
            
            default:
                printf("Invalid!\n");
        }
    }
    
     if(tUnit1 == 'F'){
        switch(tUnit2){
            case 'C':
                finalValT = (tVal - 32) * (5/9);
            break;
            
            case 'K':
                finalValT = (tVal - 32) * (5/9) + 273.15;
            break;
            
            default:
                printf("Invalid!\n");
        }
    }
    
     if(tUnit1 == 'C'){
        switch(tUnit2){
            case 'F':
                finalValT = (tVal * (9/5)) + 32;
            break;
            
            case 'K':
                finalValT = tVal + 273.15;
            break;
            
            default:
                printf("Invalid!\n");
        }
    }
    
    return finalValT;
}

int mass(){
    char mUnit1;
    char mUnit2;
    double mVal;
    double finalVal;
    printf("Enter Current Unit Symbol: \n");
    scanf(" %c", &mUnit1);
    printf("Enter Desired Unit Symbol: \n");
    scanf(" %c", &mUnit2);
    printf("Enter Value: \n");
    scanf("%lf", &mVal);
    //K H D X P C M
    if(mUnit1 == 'K'){
        //H, D, X, P, C, M
        switch(mUnit2){
            case 'H':
                finalVal = mVal*10;
            break;
            
            case 'D':
                finalVal = mVal*100;
            break;
            
            case 'X':
                finalVal = mVal*1000;
            break;
            
            case 'P':
                finalVal = mVal*10000;
            break;
            
            case 'C':
                finalVal = mVal*100000;
            break;
            
            case 'M':
                finalVal = mVal*1000000;
            break;
            
            default:
                printf("Invalid!");
        }
    }
    
    if(mUnit1 == 'H'){
        //K, D, X, P, C, M
        switch(mUnit2){
            case 'K':
                finalVal = mVal*0.1;
            break;
            
            case 'D':
                finalVal = mVal*10;
            break;
            
            case 'X':
                finalVal = mVal*100;
            break;
            
            case 'P':
                finalVal = mVal*1000;
            break;
            
            case 'C':
                finalVal = mVal*10000;
            break;
            
            case 'M':
                finalVal = mVal*100000;
            break;
            
            default:
                printf("Invalid!");
        }
    }
    
    if(mUnit1 == 'D'){
        //H, K, X, P, C, M
        switch(mUnit2){
            case 'H':
                finalVal = mVal*0.1;
            break;
            
            case 'K':
                finalVal = mVal*0.01;
            break;
            
            case 'X':
                finalVal = mVal*10;
            break;
            
            case 'P':
                finalVal = mVal*100;
            break;
            
            case 'C':
                finalVal = mVal*1000;
            break;
            
            case 'M':
                finalVal = mVal*10000;
            break;
            
            default:
                printf("Invalid!");
        }
    }
    
    if(mUnit1 == 'X'){
        //H, D, K, P, C, M
        switch(mUnit2){
            case 'H':
                finalVal = mVal*0.01;
            break;
            
            case 'D':
                finalVal = mVal*0.1;
            break;
            
            case 'K':
                finalVal = mVal*0.001;
            break;
            
            case 'P':
                finalVal = mVal*10;
            break;
            
            case 'C':
                finalVal = mVal*100;
            break;
            
            case 'M':
                finalVal = mVal*1000;
            break;
            
            default:
                printf("Invalid!");
        }
    }
    
    if(mUnit1 == 'P'){
        //H, D, X, K, C, M
        switch(mUnit2){
            case 'H':
                finalVal = mVal*0.001;
            break;
            
            case 'D':
                finalVal = mVal*0.01;
            break;
            
            case 'X':
                finalVal = mVal*0.1;
            break;
            
            case 'K':
                finalVal = mVal*0.0001;
            break;
            
            case 'C':
                finalVal = mVal*10;
            break;
            
            case 'M':
                finalVal = mVal*100;
            break;
            
            default:
                printf("Invalid!");
        }
    }
    
    if(mUnit1 == 'C'){
        //H, D, X, P, K, M
        switch(mUnit2){
            case 'H':
                finalVal = mVal*0.0001;
            break;
            
            case 'D':
                finalVal = mVal*0.001;
            break;
            
            case 'X':
                finalVal = mVal*0.01;
            break;
            
            case 'P':
                finalVal = mVal*0.1;
            break;
            
            case 'K':
                finalVal = mVal*0.00001;
            break;
            
            case 'M':
                finalVal = mVal*10;
            break;
            
            default:
                printf("Invalid!");
        }
    }
    
    if(mUnit1 == 'M'){
        //H, D, X, P, C, K
        switch(mUnit2){
            case 'H':
                finalVal = mVal*0.00001;
            break;
            
            case 'D':
                finalVal = mVal*0.0001;
            break;
            
            case 'X':
                finalVal = mVal*0.001;
            break;
            
            case 'P':
                finalVal = mVal*0.01;
            break;
            
            case 'C':
                finalVal = mVal*0.1;
            break;
            
            case 'K':
                finalVal = mVal*0.000001;
            break;
            
            default:
                printf("Invalid!");
        }
    }
    
    return finalVal;
}

