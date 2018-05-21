#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "propietario.h"
#include "ingresos.h"
#include "egresos.h"
#define ALPHA_ROMEO 1




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
           lista_propietario[i].estado=0;
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
int obtenerLibreIngreso(eIngresos lista_ingresos[],int cantidad)
{
int i;
int posicion=-1;

if(cantidad>0 && lista_ingresos !=NULL)
{
    for(i=0;i<cantidad;i++)
    {
        if(lista_ingresos[i].id==0)
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
void AltaUnaxxxx(ePropietario propietario[],int cantidad)

{
   int indice;
   int flag=-1;
   char resp='S';

        while(resp=='S')
        {
            indice=obtenerEspacioLibre(propietario,cantidad);
            if(indice!=-1)
            {
            printf("\n-----------ALTA DE PROPIETARIOS-------\n");
            propietario[indice].idPropietario=indice+1;
            printf("Ingrese el nombre del propietario: ");
            fflush(stdin);
            gets(propietario[indice].nombre_prop);
            printf("Ingrese el apellido del propietario: ");
            fflush(stdin);
            gets(propietario[indice].ape_prop);
            printf("Ingrese la direccion: ");
            gets(propietario[indice].direccion);
           /* do{
                printf("\nIngrese id del propietario: ");
                fflush(stdin);
                }while (scanf("%d",&propietario[indice].idPropietario)==0);*/
            printf("\nIngrese el numero de tarjeta:");
            fflush(stdin);
            gets(propietario[indice].tarjeta);
            propietario[indice].estado=1;
            flag=1;
            resp=Responder("\nContinua ingresando otro propietario?: (S/N)");
        }
        else
        {
            printf("\n--------No hay mas lugar, no se pudo ingresar:");
        }
        }

}



void AltaEgreso(eEgreso lista_egreso[],int marca,int importe,int limite)
{
    int indice;
    indice=BuscarLibreEgreso(lista_egreso,limite);
    if(indice>=0)
    {
        lista_egreso[indice].marca_auto=marca;
        lista_egreso[indice].importe=importe;
        lista_egreso[indice].estado=1;
    }
    else
    {
        printf("\nNo hay lugar para dar de alta el egreso:");
    }

}

void MarcaAutoaNombre(int num_marca,char marca[])
{
    switch (num_marca)
    {
    case 1:
        strcpy(marca,"ALPHA_ROMEO");
        break;
    case 2:
        strcpy(marca,"FERRARI");
        break;
    case 3:
        strcpy(marca,"AUDI");
        break;
    default:
       strcpy(marca,"OTRAS_MARCAS");
        break;

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
            int j;
            for(j=0;j<cant_ingr;j++)
            {
                if(lista_prop[i].idPropietario==lista_ingre[j].propietario)
                muestra_datos_Propietario_Autos(lista_prop[i],lista_ingre[j]);
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
int BuscarLibreEgreso(eEgreso lista_egreso[],int limite)
{

   int index=-1;
   int i;

        for(i=0;i<limite;i++)
        {
            if(lista_egreso[i].marca_auto==0)
                index=i;
        }
    return index;
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
            if(lista_ingresos[i].propietario==id)
            {
             //   printf("\nEl prop tiene los siguientes autos :");
               // printf("\n%d %d %d %s \n",lista_ingresos[i].id,lista_ingresos[i].propietario,lista_ingresos[i].marca,lista_ingresos[i].patente);

                //system("pause");
                flag=i;
                break;
            }
        }
        if((flag=-1))
        printf("\El propietario no tiene autos ingresados:");
  }
  return flag;
}

void ModificarUnaPersona(ePropietario lista_propietario[],int cantidad)
{
  int i;
  int index;
  char resp='N';
  ePropietario aux[10];

  MostrarPropietarios(lista_propietario,cantidad);
  i=PedirEntero("Ingrese el id del propietario");
  index= buscarPorId(lista_propietario,i,cantidad);
  if(index!=-1)
    {
        lista_propietario[index].idPropietario = index+1;
        fflush(stdin);
        aux[index]=lista_propietario[index];
        printf("\nIngrese el nuevo Numero de tarjeta:  ");
        fflush(stdin);
        gets(lista_propietario[index].tarjeta);
        resp=Responder("\nConfirma la modificion?(S/N)");
        if(resp=='S')
        {
            printf("\nPropietario modificado:");
        }
        else
        {
            printf("\nModificacion cancelada:");
            lista_propietario[index]=aux[index];
        }




    }
    else
    {
        printf("Usuario no encontrado!!!");
    }
}
float Liquidacion(eIngresos vec[],eEgreso egreso[],int id,int tam)
{
    float importe=0;
    float Tot;
    int estadia;
    int i;
    int primeravez=0;


    for(i=0;i<tam;i++)
    {
        if(vec[i].propietario==id)
        {
             estadia=devolverHorasEstadia();

                    switch (vec[i].marca)
                        {
                    case 1:
                        Tot=estadia*150;
                        break;
                    case 2:
                        Tot=estadia *100;
                        break;
                    case 3:
                        Tot=estadia*200;
                        break;
                    case 4:
                        Tot=estadia*140;
                        break;
                        }//fin switch

            importe+=Tot;

        }

        }
return importe;
    }




void BajaPropietario(ePropietario lista_prop[],int indice,int cant_prop,eIngresos list_ingre[],int cant_ingre,eEgreso lista_egreso[],int cant_egreso)
{
    int j,i;
    int cuenta=0;
    float marca1;
    float Total_pagar;
    char resp='N';
    int estadia=0;
    int PropAux;
    int primeravez=0;
    int id;


    MostrarPropietarios(lista_prop,cant_prop);
    id=PedirEntero("\nIngrese el id a dar de baja: ");
    indice=buscarPorId(lista_prop,id,cant_prop);

        if(indice!=-1)
        {
            resp=Responder("\nEsta seguro que desea dar de baja al propietario?: S/N ");
            if(resp=='S')
                {
                    lista_prop[indice].estado=-1;
                   Total_pagar=Liquidacion(list_ingre,lista_egreso,indice,cant_ingre);
                   if(Total_pagar!=0)
                    printf("\nEl total a pagar: %2.f\n",Total_pagar);
                   else
                    printf("\nEl propietario no tiene deuda\n");


                }
                 else{
                        printf("\nBaja Cancelada");}
}

            else
            printf("\nNo existe el propietario ingresado: \n");

       system("pause");

    }



void ListarPropietarios(ePropietario lista[],int limite)
{
    int i;
    if(lista!=NULL)
        for(i=0;i<limite;i++)
    {
        if(lista[i].estado==1)
        {
            printf("\nIdPropietario: %d\t\tNombre: %s\tApellido: %s\tTarjeta: %s",lista[i].idPropietario,lista[i].nombre_prop,lista[i].ape_prop,lista[i].tarjeta);
        }
    }
}

void IngresoAuto(eIngresos lista_ingresos[],int cant_autos,ePropietario lista_propietarios[],int cant_prop)
{
   int indice,i,j;
   int idProp;
   int PosI;
   int marca;
   int flaglugar=0;
   int flagExiste=0;

  for(j=0;j<cant_autos;j++)
  {

   if(lista_ingresos!=NULL && lista_propietarios!=NULL )
   {
   // flaglugar=1;
    PosI=obtenerLibreIngreso(lista_ingresos,20); //busca un lugar libre en Ingreso
    if(PosI>=0)
    {
        flaglugar=1;
        MostrarPropietarios(lista_propietarios,cant_prop);
        indice=PedirEntero("\nIngrese el id del Propietario");

        for(i=0;i<cant_prop;i++)
        {
            if(lista_propietarios[indice].idPropietario==lista_propietarios[i].idPropietario)
            {
                 //el prop existe
                 flagExiste=1;
                 lista_ingresos[i].id=indice;
                 lista_ingresos[i].propietario=lista_propietarios[indice].idPropietario;
                 ListarPropietarios(lista_propietarios,cant_prop);
                 printf("\nIngrese la patente:");
                 fflush(stdin);
                 gets(lista_ingresos[i].patente);
                 printf("\nIngrese la marca:");
                 do
                 {
                     printf("\n1- ALPHA_ROMEO");
                     printf("\n2- FERRARI");
                     printf("\n3- AUDI");
                     printf("\n4- OTRAS MARCAS\t");
                     scanf("%d",&marca);
                     switch (marca)
                     {
                     case 1:
                        lista_ingresos[i].marca='ALPHA_ROMEO';
                        break;
                     case 2:
                        lista_ingresos[i].marca='FERRARI';
                        break;
                     case 3:
                        lista_ingresos[i].marca='AUDI';
                        break;
                     case 4:
                        lista_ingresos[i].marca='OTRAS MARCAS';
                        break;

                     default:
                        printf("Ingrese una opcion correcta");
                        marca==-1;
                        break;
                     }
                    }while(marca==-1);
                        break;

            }//fin if


        }//fin for
        if(flagExiste=0)
            printf("\n----El propietario no existe");
        break;

    }//fin if PosId
   }
   }//fin primer if
if(flaglugar==0)
     printf("NO hay lugar");

else if (flagExiste==1)
printf("\n\n=========== AUTO INGRESADO ==============");


}
void ListarPropietarioYAuto(ePropietario lista[],eIngresos ingreso[],int cant_prop,int cant_ingre)
{
    int i;
    int id;
    int indice;
    char marca[10];
    system("cls");
    id=PedirEntero("\nIngrese el Id del propietario: ");
    indice=buscarPorId(lista,id,cant_prop);

    if(indice!=-1)
    {
        for(i=0;i<cant_ingre;i++)
        {
            if(lista[indice].idPropietario==ingreso[i].propietario && ingreso[i].estado==1)
            {
            printf("\nId: %d\t\tPatente: %s\t\t",ingreso[i].propietario,ingreso[i].patente);
            MarcaAutoaNombre(ingreso[i].marca,marca);
            printf("\tMarca: %s",marca);
            }

        }
    }
}
void MostrarIngresoAuto(eIngresos autos)
{
  char marca[20];
  char aux;
  MarcaAutoaNombre(autos.marca,marca);
    printf("\nIdAuto: %d\t IdPropietario: %d\t Patente: %s\t Marca: %s\n",autos.id,autos.propietario,autos.patente,marca);
}
void MostrarIngresoPorid(eIngresos autos[],int id)
{
    char marca[10];
    MarcaAutoaNombre(autos[id].marca,marca);
    printf("\nIdAuto: %d\t IdPropietario: %d\t Patente: %s\t Marca: %s\n",autos[id].id,autos[id].propietario,autos[id].patente,marca);
}


void ListarIngresoAuto(eIngresos lista_ingreso[],int limite)
{
  int i;

  if(limite >0 && lista_ingreso !=NULL)
  {
      for(i=0;i<limite;i++)
      {
        if(lista_ingreso[i].id>0)
        MostrarIngresoAuto(lista_ingreso[i]);
      }
      system("pause");
  }

}

void EgresoAutos(eIngresos lista_ingresos[],int cant_ingreso,eEgreso lista_egreso[],int cant_egreso,ePropietario lista[],int cant_prop)
{
    int i,j;
    int estadia;
    int id;
    int indice=0;
    int Total_pagar;
    int PropAux;
    int flagIngreso=0;
    int primeravez=0;
    char resp='N';

    if(lista_ingresos!=NULL && lista !=NULL && lista!=NULL)
    {
        ListarIngresoAuto(lista_ingresos,cant_ingreso);
        id=PedirEntero("\nIngrese el Id del auto que deja el estacionamiento:");
        for(j=0;j<cant_ingreso;j++)
        {
            if(lista_ingresos[j].propietario==id)
                indice=j;
        }
     //   indice=buscarPorIdIngresos(lista_ingresos,id,20); revisar por que corchos no funciona

        if(indice>0)
        {
        for(i=0;i<cant_prop;i++)
        {
            flagIngreso=1;
            if(lista_ingresos[indice].propietario==lista[i].idPropietario && lista[i].estado>0)
            {
               estadia=devolverHorasEstadia();
               PropAux=lista[i].idPropietario;

                switch (lista_ingresos[i].marca)
                {
                case 1:
                 Total_pagar=estadia*150;
                 break;
                case 2:
                    Total_pagar=estadia *100;
                    break;
                case 3:
                    Total_pagar=estadia*200;
                    break;
                case 4:
                Total_pagar=estadia*50;
                break;
                }//fin switch

                   MostrarIngresoAuto(lista_ingresos[indice]);
                   if(primeravez==0)
                   {
                       system("cls");
                       printf("----------- TICKET ESTACIONAMIENTO----------- ");
                       printf("\nEl propietario: %d",PropAux);
                       primeravez=1;
                   }
                   printf("\n----------------------------------------------");
                   printf("\n Tiempo de Estadia: %d",estadia);
                   printf("\tTotal a abonar: %2.f\n",Total_pagar);
                    system("pause");
                }//fin for
            }//fin if lista

        }//fin for
        resp=Responder("Confirma la baja?: S/N");
        if(resp='S')
        {
            lista_ingresos[i].estado=0;
            AltaEgreso(lista_egreso,lista_ingresos[i].marca,Total_pagar,cant_egreso);
            ListarEgresos(lista_egreso,cant_egreso);
            printf("\n-----EGRESO REALIZADO------------\n");
        }
        if(flagIngreso==0)
            printf("\nNo se encuentra ingresado el propietario");
            system("pause");

    }//fin if distinto de Null
}
void ListarUnEgreso(eEgreso autos)
{
    char marca[20];
    printf("\nImporte: %f",autos.importe);
    MarcaAutoaNombre(autos.marca_auto,marca);
    printf("\tMarca: %s\n",marca);

}
void ListarEgresos(eEgreso vector[],int limite)
{
    int i;

    for(i=0;i<limite;i++)
    {
        if(vector[i].estado==1)
        ListarUnEgreso(vector[i]);
    }
}


int devolverHorasEstadia()
{
    int horas;

    srand(time(NULL));

    horas = (rand()%24)+1;

    return horas ;

}
void RecaudacionTotal(eEgreso lista[],int limite)
{
    int i;
    int cantidad=0;
    float total=0;


        system("cls");
        printf("----------------------------------------------\n");
        printf("-------RECAUDACION TOTAL------------------------\n");
        for(i=0;i<limite;i++)
        {
            if(lista[i].importe>0)
            {
            total+=lista[i].importe;
            char marca[10];
            cantidad++;
            MarcaAutoaNombre(lista[i].marca_auto,marca);
            printf("\n\t Marca: %s\t\t Importe: $ %2.f",marca,lista[i].importe);
           //total+=lista[i].importe;

            }
        }
        printf("\n\t\t--Cantidad de Autos: %d\t\tImporte total: $ %2.f\n",cantidad,total);
        system("pause");

}
void RecaudacionPorMarca(eEgreso lista[],int limite)
{
    int i;
    float importe[4]={0};
    float total=0;

    system("cls");
        printf("\n--------------------------------------------------------\n");
        printf("-------RECAUDACION TOTAL POR MARCA------------------------\n");
        printf("---------------------------------------------------------\n");

        for(i=0;i<limite;i++)
        {
            if(lista[i].importe>0)
                total+=lista[i].importe;
            {
                switch(lista[i].marca_auto)
                {
                case 1:
                    importe[0]+=lista[i].importe;
                    break;
                case 2:
                    importe[1]+=lista[i].importe;
                    break;
                case 3:
                    importe[2]+=lista[i].importe;
                    break;
                case 4:
                    importe[3]+=lista[i].importe;
                    break;
                }//fin switch

            }//fin if

        }

        printf("\n--El total recaudado de ALPHA_ROMEO: %2.f\t\t",importe[0]);
        printf("\n--El total recaudado de FERRARI: %2.f\t\t",importe[1]);
        printf("\n--El total recaudado de AUDI: %2.f\t\t",importe[2]);
        printf("\n--El total recaudado de OTRAS MARCAS: %2.f\t\t",importe[3]);
        printf("\n--El Total recaudado es: %2.f\n",total);
        system("pause");

    }
void ListarAutosYPropietarios(eIngresos lista[],int cant_ingr,ePropietario vec[],int cant_prop)
{
int i,j;
eIngresos auxiliar;

for(i=0;i<cant_ingr-1;i++) //ordeno
{
    for(j=i+1;j<cant_ingr;j++)
    {
        if(strcmp(lista[i].patente,lista[j].patente)>0)
        {
            auxiliar=lista[i];
            lista[i]=lista[j];
            lista[j]=auxiliar;
        }
    }

}//fin for
system("cls");
printf("\n\t\t\tLISTADO DE PATENTES Y SUS PROPIETARIOS");
for(i=0;i<cant_ingr;i++)
{
    if(lista[i].estado==1)
    {

    printf("\nPatente: %s\t\t",lista[i].patente);
    for(j=0;j<cant_prop;j++)
    {
        if(lista[i].propietario==vec[j].idPropietario && vec[j].estado==1)
        {
            MostrarUnaPersona(vec[j]);
           // printf("\n");
            printf("\n----------------------------------------------------");
        }
    }
    }

}
system("pause");



}
void ListarPropActivos(ePropietario lista[],int limite)
{
    int i;
    for(i=0;i<limite;i++)
    {
        if(lista[i].estado==1)
        {
            MostrarUnaPersona(lista[i]);
        }
    }
    system("pause");
}

void ListarPropBajas(ePropietario lista[],int limite)
{
     int i;
    for(i=0;i<limite;i++)
    {
        if(lista[i].estado==-1)
        {
            MostrarUnaPersona(lista[i]);
        }
    }
    system("pause");
}


