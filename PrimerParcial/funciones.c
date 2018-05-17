#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
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

void MostrarPropietarioConSusAutos(ePropietario lista_prop[],int cant_prop,eIngresos lista_ingre[],int cant_ingr)
{
    int i;
    if(lista_prop!=NULL)
    {

    for(i=0;i<cant_prop;i++)
    {
       printf("\nId: %d  Nombre: %s",lista_prop[i].idPropietario,lista_prop[i].nombre_prop);
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
    system("pause");
}
void MostrarPropietariosAutosAudi(ePropietario lista_prop[],int cant_prop,eIngresos lista_ingre[],int cant_ingr)
{
    int i;
    if(lista_prop!=NULL)
    {

    for(i=0;i<cant_prop;i++)
    {
       printf("\nId: %d  Nombre: %s",lista_prop[i].idPropietario,lista_prop[i].nombre_prop);
        int j;
        if(lista_ingre!=NULL)
        {
            for(j=0;j<cant_ingr;j++)
            {
                if(lista_prop[i].idPropietario==lista_ingre[j].propietario && lista_ingre[j].marca==3)
                {
                printf("\n Patente: %s   Marca: %d",lista_ingre[j].patente,lista_ingre[j].marca);
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
                printf("La persona buscada es:");
                printf("\n%d %s %s %s\n",lista_propietario[i].idPropietario,lista_propietario[i].nombre_prop,lista_propietario[i].direccion,lista_propietario[i].tarjeta);
                system("pause");
                flag=i;
                break;
            }
            else
                {
            printf("\nNo se encontro el propietario: ");
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
            else
                {
            printf("\nNo tiene autos ingresados: ");
                }
        }

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

void BajaPropietario(ePropietario lista_prop[],int idProp,int cant_prop,eIngresos list_ingre[],int cant_ingre,eEgreso lista_egreso[],int cant_egreso)
{
    int i;
    int indice;
    int cuenta=0;
    int cant_marca;
    for(i=0;i<cant_prop;i++)
    {
       indice=buscarPorId(lista_prop,idProp,20);

       if(indice!=-1)
       {
           printf("\nId: %d  Nombre: %s",lista_prop[indice].idPropietario,lista_prop[indice].nombre_prop);
        int j;
        for(j=0;j<cant_ingre;j++)
        {
            if(lista_prop[i].idPropietario==list_ingre[j].propietario)
            {
                printf("\n Patente: %s   Marca: %d",list_ingre[j].patente,list_ingre[j].marca);
                cant_marca=cant_marca+1;
            for(j=0;j<cant_egreso;j++)
            {
                if(list_ingre[j].marca==lista_egreso[i].marca_auto)
                    cuenta=cant_marca*(lista_egreso[j].importe);
            }
            }
        }
       }
    }
    system("pause");
}



void IngresoAuto(eIngresos lista_ingresos[])
{
   int indice;
   int idProp;
   int marca;
   int SiExiste=0;

        idProp=PedirEntero("Ingrese el Id del Propietario: "); //llama a la funcion Pedir entero para el ingreso
        SiExiste=buscarPorIdIngresos(lista_ingresos,idProp,20);

    if((SiExiste=-1))
        {
       indice=obtenerEspacioLibre(lista_ingresos,20);

            if(indice>0)
            {
            printf("Ingrese el nombre: ");
            fflush(stdin);
            scanf("%d",&lista_ingresos[indice].propietario);
            printf("\nIngrese la marca del auto ");
            fflush(stdin);
            scanf("%d",&lista_ingresos[indice].marca);
            lista_ingresos[indice].marca=marca;
            lista_ingresos[indice].id=indice;
        }
        }
        else
        {
            printf("\nEl Dni ya esta ingresado: \n");
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
