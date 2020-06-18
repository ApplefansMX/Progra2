#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int opc;
    
    printf("Bienvenido Arbol Genealogico\n");
    

    while (opc!=5){
        printf("Selecciona que parte del Arbol Genealogico quieres saber\n");
        printf("1.Bisabuelos\n2.Abuelos\n3.Padres\n4.Hermanos\n");
        
        scanf ("%d",&opc);
        
        
        if (opc==1){
            system("clear");
            printf("Tus bisabuelos son:\n");
        }
        if (opc==2){
            system("clear");
            printf("Tus abuelos son:\n");
        }
        if (opc==3){
            system("clear");
            printf("Tus padres son:\n");
        }
        if (opc==4){
            system("clear");
            printf("Tus hermanos son\n");
        }
        if (opc > 5 || opc <1){
            system("clear");
            printf("Error Opción invalida\n");
        }
    
    }
    
    
    return 0;
}