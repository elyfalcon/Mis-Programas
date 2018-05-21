#include <stdio.h>
#include <stdlib.h>
#include "ingresos.h"


void HardcodeIngresos(eIngresos lista_ingresos[])
{
    int i;
    int id[]= {1,2,3,4,5,6,7,8,9,10};
    int marca[]= {1,3,3,2,2,3,3,4,3,1};
    char patente[][20]= {"AAA","CCC","DDD","BBB","ZZZ","III","HHH","EEE","FFF","GGG"};
    int propietario[]= {2,1,2,1,3,3,4,1,4,3};


  for(i=0;i<10;i++)
  {
    lista_ingresos[i].id=id[i];
    lista_ingresos[i].estado=1;
    lista_ingresos[i].marca= marca[i];
    lista_ingresos[i].propietario=propietario[i];
    strcpy(lista_ingresos[i].patente,patente[i]);

  }
}

  void Inicializa_Autos(eIngresos lista_ingresos[],int limite)
  {
      int i;
      if(limite>0 && lista_ingresos!=NULL)
      {
      for(i=0;i<limite;i++)
      {
        lista_ingresos[i].id=0;
        lista_ingresos[i].estado=0;
       // lista_ingresos[i].importe=0;
       // lista_ingresos[i].deltaT=0;
        lista_ingresos[i].marca=0;
        lista_ingresos[i].propietario=0;
      }
      }
  }




