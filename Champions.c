#include <stdio.h>

int main()
{
    int opc; 
    printf("Llaves de la Champions\n");
    
    while(opc != 5){
    printf("\nQue llave quieres ver?\n");
    printf("1.Octavos\n2.Cuartos\n3.Semifinales\n4.Final\n");
    scanf ("%d",&opc);
    
    if (opc==1){
        printf("\nShakhtar Donetsk Vs. Roma\n");
        printf("\nBayern Vs. Besiktas\n");
        printf("\nReal Madrid Vs. Paris\n");
        printf("\nBasel Vs. Man. City\n");
        printf("\nJuventus Vs. Tottenham\n");
        printf("\nPorto Vs. Liverpool\n");
        printf("\nChelsea Vs. Barcelona\n");
        printf("\nSevilla Vs. Man. United\n");
    }
    
    if (opc==2){
        printf("\nLiverpool Vs. Man. City\n");
        printf("\nRoma Vs. Barcelona\n");
        printf("\nReal Madrid Vs. Juventus\n");
        printf("\nBayern Vs. Sevilla\n");
    }
    
    if (opc==3){
        printf("\nRoma Vs. Liverpool\n");
        printf("\nReal Madrid Vs. Bayern\n");
        
    }
    
    if (opc==4)printf("\nReal Madrid Vs. Liverpool\n");
    

    }
    return 0;
}
