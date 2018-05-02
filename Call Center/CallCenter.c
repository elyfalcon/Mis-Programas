#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CallCenter.h"

void MostrarMenu(void)
{

char seguir='s';
    int opcion=0;


    while(seguir=='s')
    {
        printf("1- Agregar Abonado\n");
        printf("2- Modificar datos del Abonado\n");
        printf("3- Baja del abonado\n");
        printf("4- Nueva llamada\n");
        printf("5- Fin llamada\n");
        printf("6- Informar\n");
        printf("7- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                seguir = 'n';
                break;
        }
    }
}
void MostrarUnAbonado(eAbonado abonado)
{
    printf("Id: %d Numero de abonado: %d  Nombre: %s Apellido: %s \n",abonado.id_abonado,abonado.numero,abonado.nombre,abonado.apellido);
}
void AltaDeUnAbonado(eAbonado abonado)

