

void ValidaMenu(int opcion,int limite_inferior,int limite_superior)
{
    if(opcion <limite_inferior || opcion >limite_superior)
    {
        printf("Debe elegir una opcion entre %d y %d: \n",limite_inferior,limite_superior);
    }
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
void AltaUnaxxxx(pProgramador lista[])
{

   int indice;
   int flag=-3;
   int estado=-1;
   int cantidad=50;
    pCategoria lista_categoria[3];

       indice=obtenerEspacioLibre(lista,cantidad);

        if(indice>0)
        {
        printf("Ingrese el nombre del programador: ");
        fflush(stdin);
        gets(lista[indice].NomProgramador);
        printf("Ingrese el apellido del programador: ");
        fflush(stdin);
        gets(lista[indice].ApeProgramador);
        do{
        printf("\nIngrese id del programador: ");
        fflush(stdin);
       }while (scanf("%d",&lista[indice].IdProgramador)==0);
        do{
        printf("\n Ingrese La categoria: ");
        fflush(stdin);
        for(int j=0;j<3;j++){
        printf("Categorias id: %d, Descrip: %s",lista_categoria[j].idCategoria,lista_categoria[j].descripcion);}
        }while(scanf("%d",&lista[indice].IdCategoria)==0);
         lista[indice].estado=OCUPADO;
        }
}
int obtenerEspacioLibre(pProgramador lista[],int cantidad)
{
int i;
int posicion=-1;

if(cantidad>0 && lista !=NULL)
{
    for(i=0;i<cantidad;i++)
    {
        if(lista[i].IdProgramador==0)
        {
            posicion=i;
            break;
        }
    }
}
 return posicion;
}
void MostrarUnProgramador(pProgramador programador)
{
    printf("\nId: %d  IdCategoria %d   Nombre: %s   Apellido: %s\n",programador.IdProgramador,programador.IdCategoria,programador.NomProgramador,programador.ApeProgramador);
}
void ListarProgramadores(pProgramador lista[],int cantidad)
{
    int i;
    pAsignar lista_asignar[50];
    pCategoria lista_categoria[3];
    if(lista !=NULL)
    {
        for(i=0;i<cantidad;i++)
        {
            if(lista[i].estado==OCUPADO)
            {
               MostrarUnProgramador(lista[i]);
               MostrarProyectos(lista[i].IdProgramador,lista_asignar,lista_categoria,cantidad);
                           }

        }
    }

}
int buscarPorID(pProgramador lista[], int id,int cantidad)
{
    int i;
    int flag=-1;


    if(lista!=NULL)
  {
        for(i=0;i<cantidad;i++)
        {
            if(id==lista[i].IdProgramador)
            {
                printf("La persona buscada es:");
                printf("\n%d %d %s %s\n",lista[i].IdProgramador,lista[i].IdCategoria,lista[i].NomProgramador,lista[i].ApeProgramador);
                flag=i;
                break;
            }
        }
  }
  return flag;
}

void ModificarUnaPersona(pProgramador lista[],int cantidad)
{


  int i;
  int index;

  i=PedirEntero("Ingrese el id del programador");
   index= buscarPorID(lista,i,cantidad);
  if(index!=-1)
    {
        lista[index].IdProgramador = index+1;
        fflush(stdin);
        printf("\nIngrese Nombre del Programador: ");
        gets(lista[index].NomProgramador);
        fflush(stdin);
        printf("\nIngrese apellido: ");
        gets(lista[index].ApeProgramador);
        printf("\nIngrese el Id Categoria");
        fflush(stdin);
        scanf("%d",&lista[index].IdCategoria);
        lista[index].estado = 1;


    }
    else
    {
        printf("Usuario no encontrado!!!");

    }
}

void BorrarUnaPersona(pProgramador lista[],int indice,int cantidad)
{
   int index=-1;
    index=buscarPorID(lista,indice,cantidad);
                        if(index!=-1){
                            lista[index].IdProgramador=0;
                            lista[index].estado=FREE;
                        }else{
                            printf("Programador no encontrado!!!");

                        }
}
void ListarProyectos(pProyecto lista_proyecto[],int cantidad)
{
    int i;
    if(lista_proyecto !=NULL)
    {
        for(i=0;i<cantidad;i++)
        {
            if(lista_proyecto[i].IdProyecto!=0)
            {
                printf("\n idProyecto: %d   NombreProyecto:    %s",lista_proyecto[i].IdProyecto,lista_proyecto[i].Nombre_Proyecto);
            }
        }
    }
}
void AsignarProgramador(pProgramador lista[],pProyecto lista_proyecto[],pAsignar lista_asignar[])
{
    int id,idproyecto,horas,cant;
    ListarProgramadores(lista,50);
    ListarProyectos(lista_proyecto,100);
    printf("\nCuantas asignaciones quiere hacer");
    fflush(stdin);
    scanf("%d",&cant);
    for(int i=0;i<cant;i++){
    printf("\nSeleccione un Id de Programador:");
    fflush(stdin);
    scanf("%d",&id);
    lista_asignar[i].idProgramador=id;
    printf("\nSeleccione un Proyecto");
    fflush(stdin);
    scanf("%d",&idproyecto);

    lista_asignar[i].idProyecto=idproyecto;
    printf("\nIngrese la cantidad de horas;");
    scanf("%d",&horas);
    lista_asignar[i].horas=horas;}
}
void MostrarProyectos(pProgramador lista[],pAsignar lista_asignar[],pCategoria lista_categoria[],int cantidad)
{
    int total_horas=0;
    int i;

    for(i=0;i<cantidad;i++)
    {
        while(lista[i].IdProgramador==lista_asignar[i].idProgramador)
        {
            printf("Proyectos Asignados: %d",lista_asignar[i].idProyecto);
            total_horas=lista_asignar[i].horas*lista_categoria[i].pagoxhora;
        }

    }
}


