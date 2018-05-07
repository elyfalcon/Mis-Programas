#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "propietario.h"
#include "ingresos.h"
#include "egresos.h"
#define tam_ingresos 20

int main()
{
    char seguir='s';
    int opcion;
    ePropietario lista_propietario[30];
    ePropietario propietario;
    int idPropietario;
    eIngresos lista_ingresos[tam_ingresos];
    eIngresos autos;
    eEgreso lista_egreso[30];
    Inicializa_Propietario(lista_propietario,30);
    HardcodePersona(lista_propietario);
    ValidaMenu(opcion, 1,11);

     while(seguir=='s')
    {
        system("cls");
        printf("1- Agregar Propietario\n");
        printf("2- Modificar Propietario\n");
        printf("3- Baja del Propietario\n");
        printf("4- Ingreso del automovil\n");
        printf("5- Egreso del automovil\n");
        printf("6- Recaudacion Total estacionamiento\n");
        printf("7- Recaudacion total por marca\n");
        printf("8- Listar Propietario\n");
        printf("9- Listar Propietario con auto marca Audi\n");
        printf("10- Listar Autos con sus propietarios\n\n");
        printf("11- Salir\n\n");

        scanf("%d",&opcion);
        ValidaMenu(opcion,0,11);
        switch(opcion)
        {
            case 1:
                 AltaUnaxxxx(lista_propietario);
                break;
            case 2:
                ModificarUnaPersona(lista_propietario,30);
                break;
            case 3:
                PedirEntero("Ingrese el id del Propietario a borrar");
                fflush(stdin);
                scanf("%d",&idPropietario);
                BorrarUnaPersona(lista_propietario,idPropietario,30);
                break;
            case 4:

                break;
            case 8:
                ListarPropietarios(lista_propietario,30);
                break;
            case 11:
                seguir = 'n';
                break;
            default:
                printf("Ingrese una opcion valida");
                break;
        }


}
return 0;

}

