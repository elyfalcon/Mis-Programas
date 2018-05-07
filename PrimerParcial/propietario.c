#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "propietario.h"

void HardcodePersona(ePropietario lista_propietario[])
{



    int id[]= {1,2,3,4};
    strcpy(lista_propietario[1].nombre_prop,"Juan");
    lista_propietario[1].idPropietario=1;
    strcpy(lista_propietario[1].direccion,"mitre");
    strcpy(lista_propietario[1].tarjeta,"111-111");
    strcpy(lista_propietario[2].nombre_prop,"Luis");
    lista_propietario[2].idPropietario=2;
    strcpy(lista_propietario[2].direccion,"urquiza");
    strcpy(lista_propietario[2].tarjeta,"222-222");
    strcpy(lista_propietario[3].nombre_prop,"Maria");
    lista_propietario[3].idPropietario=3;
    strcpy(lista_propietario[3].direccion,"belgrano");
    strcpy(lista_propietario[3].tarjeta,"333-333");
    strcpy(lista_propietario[4].nombre_prop,"Jose");
    lista_propietario[3].idPropietario=4;
    strcpy(lista_propietario[4].direccion,"alsina");
    strcpy(lista_propietario[4].tarjeta,"222-222");



}
