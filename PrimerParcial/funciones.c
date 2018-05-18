#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "propietario.h"
#include "ingresos.h"
#include "egresos.h"
#define ALPHA_ROMEO 1
#define FERRARI 2
#define AUDI 3
#define OTRO 4



void ValidaMenu(int opcion,int limite_inferior,int limite_superior)
{
     if(opcion <limite_inferior || opcion >limite_superior)
        printf("Debe elegir una opcion entre %d y %d: \n",limite_inferior,limite_superior);
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
char Responder(char mensaje[])
{
    char resp;
    //int flag=-1;

    printf("%s",mensaje);
    fflush(stdin);
    scanf("%s",&resp);
    resp=toupper(resp);
    while(resp!='S'&& resp!='N')
    {
      printf("\nDebe ingresar S(si) N(no)\n");
      scanf("%s",&resp);
      resp=toupper(resp);
    }

    return resp;
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
        printf("Ingrese el apellido: ");
        gets(lista_propietario[indice].direccion);
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

void MostrarPropietarioConSusAutos(ePropietario lista_prop[],int cant_prop,eIngresos lista_ingre[],int cant_ingr)
{
    int i;
    if(lista_prop!=NULL)
    {

    for(i=0;i<cant_prop;i++)
    {
        if(lista_prop[i].idPropietario!=0)
        {
            printf("\nId: %d  Nombre: %s\n",lista_prop[i].idPropietario,lista_prop[i].nombre_prop);
            int j;
            for(j=0;j<cant_ingr;j++)
            {
                if(lista_prop[i].idPropietario==lista_ingre[j].propietario)
            {
                printf("\n Patente: %s   Marca: %d",lista_ingre[j].patente,lista_ingre[j].marca);
            }
            }


            }
    }
}
    system("pause");
}
void MostrarPropietariosAutosAudi(ePropietario lista_prop[],int cant_prop,eIngresos lista_ingre[],int cant_ingr)
{
    int i;
    if(lista_prop!=NULL)
    {
    for(i=0;i<cant_prop;i++)
    {
       if(lista_prop[i].idPropietario!=0)
       printf("\nId: %d  Nombre: %s",lista_prop[i].idPropietario,lista_prop[i].nombre_prop);
       int j;
        if(lista_ingre!=NULL)
        {
               for(j=0;j<cant_ingr;j++)
            {
                if(lista_prop[i].idPropietario==lista_ingre[j].propietario && lista_ingre[j].marca==3)
                {
                printf("\n Patente: %s   Marca: AUDI",lista_ingre[j].patente);
                }
            }
        }
    }
}
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
                printf("La persona buscada es:\n");
                printf("\nID:%d Nombre: %s Direccion: %s Nro Tarjeta: %s\n",lista_propietario[i].idPropietario,lista_propietario[i].nombre_prop,lista_propietario[i].direccion,lista_propietario[i].tarjeta);
               // system("pause");
                flag=i;
                break;
            }
        }
  }
  return flag;
}

int buscarPorIdIngresos(eIngresos lista_ingresos[], int id,int cantidad)//cantidad de autos
{
    int i;
    int flag=-1;

    if(lista_ingresos!=NULL)
  {
        for(i=0;i<cantidad;i++)
        {
            if(id==lista_ingresos[i].propietario)
            {
                printf("El prop tiene los siguientes autos :");
                printf("\n%d %d %s \n",lista_ingresos[i].propietario,lista_ingresos[i].marca,lista_ingresos[i].patente);

                system("pause");
                flag=i;
                break;
            }
          /*  else
                {
            printf("\nNo tiene autos ingresados: ");
                }*/
        }
        printf("\El propietario no tiene autos ingresados:");
  }
  return flag;
}

/*int BuscarPorMarca(eEgreso lista_egreso[],int id)
{
    int i;
    int flag=-1;
    int cant_autos=0;

    if(lista_egreso !=NULL)
    {
        while(lista_egreso.marca_auto==lista_egreso[id].marca_auto)
        {
            cant_autos=cant_autos+1;
        }
    }

    return cant_autos;
}

*/

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
        printf("\nIngrese el nuevo Numero de tarjeta:  ");
        gets(lista_propietario[index].tarjeta);
        fflush(stdin);

    }
    else
    {
        printf("Usuario no encontrado!!!");
    }
}

void BajaPropietario(ePropietario lista_prop[],int indice,int cant_prop,eIngresos list_ingre[],int cant_ingre,eEgreso lista_egreso[],int cant_egreso)
{
    int j;

    int cuenta=0;
    float marca1;
    float cant_marca;
    char resp='N';

     if(indice!=-1)
    {
            for(j=0;j<cant_ingre;j++)
            {
                if(lista_prop[indice].idPropietario==list_ingre[j].propietario)
                {
                printf("\n Patente: %s   Marca: %d\n",list_ingre[indice].patente,list_ingre[indice].marca);
                resp=Responder("\nEsta seguro que desea dar de baja al propietario?: S/N ");
                if(resp=='S')
                {
                     printf("hoa");
                     for(j=0;j<cant_egreso;j++)
                    {
                  //  if(list_ingre[indice].marca==lista_egreso[indice].marca_auto)

                    }
                }
            }
    //   }//llave del segundo for
                }


    }
        else
      printf("\nNo existe el propietario ingresado: \n");

       system("pause");
}

void IngresoAuto(eIngresos lista_ingresos[])
{
   int indice;
   int idProp;
   int marca;
   int SiExiste;

        idProp=PedirEntero("Ingrese el Id del Propietario: "); //llama a la funcion Pedir entero para el ingreso
        SiExiste=buscarPorIdIngresos(lista_ingresos,idProp,20);
        printf("Valor de SiExiste: %d", SiExiste);
        system("pause");

    if((SiExiste!=1))
        {
       indice=obtenerEspacioLibre(lista_ingresos,20);
       printf("%d",indice);
       system("pause");

            if(indice>0)
            {
                printf("entre al if");
                system("pause");
            lista_ingresos[indice].propietario=idProp;
            printf("\nIngrese la marca del auto ");
            fflush(stdin);
            scanf("%d",&lista_ingresos[indice].marca);
            lista_ingresos[indice].marca=marca;
            printf("\nIngrese la patente: ");
            gets(lista_ingresos[indice].patente);
            lista_ingresos[indice].id=indice;
            }
        }
        else
        {
            printf("\nEl Propietario ya esta ingresado: \n");
            system("pause");
        }
}

int devolverHorasEstadia()
{
    int horas;

    srand(time(NULL));

    horas = (rand()%24)+1;

    return horas ;

}
