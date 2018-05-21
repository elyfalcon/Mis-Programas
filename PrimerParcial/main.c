#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "funciones.h"
#include "propietario.h"
#include "ingresos.h"
#include "egresos.h"
#define tam_ingresos 20
#define cant_propietarios 20
#define ALPHA_ROMEO 1
#define FERRARI 2
#define AUDI 3
#define OTRO 4

int main()
{
    char seguir='s';
    int opcion;
    int i;
    ePropietario lista_propietario[cant_propietarios];
    ePropietario propietario;
    int idPropietario;
    eIngresos lista_ingresos[tam_ingresos];
    eIngresos autos;
    eEgreso lista_egreso[30];
    Inicializa_Propietario(lista_propietario,cant_propietarios);
    Inicializa_Autos(lista_ingresos,tam_ingresos);
    Inicializa_Egreso(lista_egreso,tam_ingresos);
    HardcodePersona(lista_propietario);
    HardcodeIngresos(lista_ingresos);
    HardcodeEgreso(lista_egreso);
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
                 AltaUnaxxxx(lista_propietario,cant_propietarios);
                break;
            case 2:
                ModificarUnaPersona(lista_propietario,cant_propietarios);
                break;
            case 3:
                BajaPropietario(lista_propietario,i,10,lista_ingresos,tam_ingresos,lista_egreso,tam_ingresos);
                break;
            case 4:
                IngresoAuto(lista_ingresos,tam_ingresos,lista_propietario,tam_ingresos);
                break;
            case 5:
                EgresoAutos(lista_ingresos,tam_ingresos,lista_egreso,20,lista_propietario,tam_ingresos);
                break;
            case 6:
                RecaudacionTotal(lista_egreso,tam_ingresos);
                break;
            case 7:
                RecaudacionPorMarca(lista_egreso,tam_ingresos);
                break;
            case 8:
                ListarPropietarioYAuto(lista_propietario,lista_ingresos,20,tam_ingresos);
                break;
            case 9:
                MostrarPropietariosAutosAudi(lista_propietario,tam_ingresos,lista_ingresos,tam_ingresos);
                break;
            case 10:
                ListarAutosYPropietarios(lista_ingresos,tam_ingresos,lista_propietario,20);
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

