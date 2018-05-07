#include <stdio.h>
#include <stdlib.h>
#include "ingresos.h"


void HardcodeIngresos(eIngresos lista_ingresos[])
{
    int i;
  for(i=0;i<10;i++)
  {

    lista_ingresos[1].id= 1;
    lista_ingresos[1].marca=1;
    strcpy(lista_ingresos[1].patente,"AAA");
    lista_ingresos[1].propietario=2;
    lista_ingresos[2].id= 2;
    lista_ingresos[2].marca=3;
    strcpy(lista_ingresos[2].patente,"CCC");
    lista_ingresos[2].propietario=1;
    lista_ingresos[3].id= 3;
    strcpy(lista_ingresos[3].patente,"DDD");
    lista_ingresos[3].marca=3;
    lista_ingresos[3].propietario=2;
    lista_ingresos[4].id= 4;
    strcpy(lista_ingresos[4].patente,"BBB");
    lista_ingresos[4].marca=2;
    lista_ingresos[4].propietario=1;
    lista_ingresos[5].id= 5;
    strcpy(lista_ingresos[5].patente,"ZZZ");
     lista_ingresos[5].marca=2;
     lista_ingresos[5].propietario=1;
    lista_ingresos[6].id= 6;
    strcpy(lista_ingresos[6].patente,"III");
     lista_ingresos[6].marca=3;
     lista_ingresos[6].propietario=3;
    lista_ingresos[7].id= 7;
    strcpy(lista_ingresos[7].patente,"HHH");
    lista_ingresos[7].propietario=3;
    lista_ingresos[8].id= 8;
    lista_ingresos[8].marca=4;
    lista_ingresos[8].propietario=4;
    strcpy(lista_ingresos[8].patente,"EEE");
    lista_ingresos[9].id= 9;
    lista_ingresos[9].marca=3;
    strcpy(lista_ingresos[9].patente,"FFF");
    lista_ingresos[9].propietario=1;
    lista_ingresos[10].id= 10;
     lista_ingresos[10].marca=3;
    strcpy(lista_ingresos[10].patente,"GGG");
    lista_ingresos[10].propietario=3;
     lista_ingresos[1].propietario=2;


  }


}

