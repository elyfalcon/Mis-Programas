
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "propietario.h"



void ValidaMenu(int opcion,int limite_inferior,int limite_superior)
{
     if(opcion <limite_inferior || opcion >limite_superior)
    {
        printf("Debe elegir una opcion entre %d y %d: \n",limite_inferior,limite_superior);
    }
}
int Inicializa_Propietario(ePropietario lista_propietario[],int limite)
{
   int i;
   int retorno=-1;
   if(limite >0 && lista_propietario !=NULL)
   {
       for(i=0;i<limite;i++)
       {
           retorno=0;
           lista_propietario[i].idPropietario=0;
        }
   }
    return retorno;
}

int obtenerEspacioLibre(ePropietario lista_propietario[],int cantidad)
{
int i;
int posicion=-1;

if(cantidad>0 && lista_propietario !=NULL)
{
    for(i=0;i<cantidad;i++)
    {
        if(lista_propietario[i].idPropietario==0)
        {
            posicion=i;
            break;
        }
    }
}
 return posicion;
}
int PedirEntero(char mensaje[])
{
    int auxiliar;

    do
    {
    printf("%s",mensaje);
    fflush(stdin);
    }while(scanf("%d",&auxiliar)==0);
    return auxiliar;
}
void AltaUnaxxxx(ePropietario lista_propietario[])

{
   int indice;
   int flag=-3;
   int estado=-1;
   int cantidad=50;
   indice=obtenerEspacioLibre(lista_propietario,cantidad);

        if(indice!=-1)
        {
        printf("Ingrese el nombre del propietario: ");
        fflush(stdin);
        gets(lista_propietario[indice].nombre_prop);
        printf("Ingrese el apellido del propietario: ");
        fflush(stdin);
        gets(lista_propietario[indice].ape_prop);
        do{
        printf("\nIngrese id del propietario: ");
        fflush(stdin);
       }while (scanf("%d",&lista_propietario[indice].idPropietario)==0);
        printf("\nIngrese el numero de tarjeta:");
        fflush(stdin);
        gets(lista_propietario[indice].tarjeta);

     //    lista[indice].estado=OCUPADO;
        }
}
void MostrarUnaPersona(ePropietario propietario)
{
    printf("\nNombre: %s  ID: %d direccion: %s tarjeta: %s \n",propietario.nombre_prop,propietario.idPropietario,propietario.direccion,propietario.tarjeta);
}
void ListarPropietarios(ePropietario lista_propietario[],int cantidad)
{
    int i;

  //  if(lista_propietario !=NULL)
 //   {
        for(i=0;i<cantidad;i++)
        {
            if(lista_propietario[i].idPropietario!=0)
            {
               MostrarUnaPersona(lista_propietario[i]);
            }

        }
  //  }
        system("pause");
}
int buscarPorId(ePropietario lista_propietario[], int id,int cantidad)
{
    int i;
    int flag=-1;
    if(lista_propietario!=NULL)
  {
        for(i=0;i<cantidad;i++)
        {
            if(id==lista_propietario[i].idPropietario)
            {
                printf("La persona buscada es:");
                printf("\n%d %s %d\n",lista_propietario[i].idPropietario,lista_propietario[i].nombre_prop,lista_propietario[i].direccion,lista_propietario[i].tarjeta);
                system("pause");
                flag=i;
                break;
            }
        }
  }
  return flag;
}
void ModificarUnaPersona(ePropietario lista_propietario[],int cantidad)
{
  int i;
  int index;

  i=PedirEntero("Ingrese el id del propietario");
  index= buscarPorId(lista_propietario,i,cantidad);
  if(index!=-1)
    {
        lista_propietario[index].idPropietario = index+1;
        fflush(stdin);
        printf("\nIngrese Numero de tarjeta: ");
        gets(lista_propietario[index].tarjeta);
        fflush(stdin);

    }
    else
    {
        printf("Usuario no encontrado!!!");
    }
}
void BorrarUnaPersona(ePropietario lista[],int indice,int cantidad)
{
int i;
  int index;

  i=PedirEntero("Ingrese el id del propietario");
  index= buscarPorId(lista,i,cantidad);
  if(index!=-1){
                            lista[index].idPropietario=0;

                        }else{
                            printf("Propietario no encontrado!!!");

                        }
}

void IngresoAuto(eIngresos autos)
{
  printf("\n ID: %d direccion: %s patente: marca: %d  \n",propietario.nombre_prop,propietario.idPropietario,propietario.direccion,propietario.tarjeta);
}

