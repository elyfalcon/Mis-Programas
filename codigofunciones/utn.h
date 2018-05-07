#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED


void ValidaMenu(int opcion,int limite_inferior,int limite_superior);
int Inicializa_Persona(EPersona lista[],int limite);
void HardcodePersona(EPersona lista[]);
void AltaUnaxxxx(EPersona lista[]);
void AltaXxxxxxs(EPersona lista[],int cantidad);
int buscarPorDni(EPersona lista[], int dni);
void BorrarUnaPersona(EPersona lista[],int indice);
void MostrarUnaXXXXX(EPersona persona);
void ListarPersonas(EPersona lista[],int cantidad);
void OrdenarListado(EPersona lista[],int cantidad);
int obtenerEspacioLibre(pProgramador lista[],int cantidad);
int PedirEntero(char mensaje[]);
void AsignarProgramador(pProgramador lista[],pProyecto lista_proyecto[],pAsignar lista_asignar[]);
void ListarProyectos(pProyecto lista_proyecto[],int cantidad);
/*De miscelanea*/
//alta
/*index=buscarLibre(lista,TAM);
                        if(index!=-1){
                            lista[index].idSerie = index+1;
                            fflush(stdin);
                            printf("\nIngrese Nombre: ");
                            gets(lista[index].nombre);
                            fflush(stdin);
                            printf("\nIngrese Cantidad de Temporadas: ");
                            scanf("%d",&lista[index].canttemporadas);
                            fflush(stdin);
                            printf("\nIngrese Año de Lanzamiento: ");
                            scanf("%d",&lista[index].aniolanzamiento);
                            lista[index].estado = 1;


*/
//Baja

/*printf("ID Serie: ");
                        scanf("%d",&numserie);
                        fflush(stdin);
                        index=buscarSerie(lista,TAM,numserie);
                        if(index!=-1){
                            lista[index].idSerie=0;
                        }else{
                            printf("Serie no encontrada!!!");

                        }
                        break;*/
//funciones
/*int buscarLibre(eSerie vec[],int tam)
{
    int index = -1;

    for(int i=0;i<tam;i++){
        if(vec[i].idSerie==0){
            index=i;
            break;
        }
    }

     return index;
}




int buscarSerie(eSerie vec[],int tam,int id){

    int retorno= -1;
    for(int i=0;i<tam;i++){
        if(vec[i].idSerie==id){
            retorno = i;
        }
    }
    return retorno;
}

*/

//Menu
/* char seguir='s';
    int opcion;
    ValidaMenu(opcion, 1,9);
     while(seguir=='s')
    {
        system("cls");
        printf("1- Agregar Programdor\n");
        printf("2- Modificar Programador\n");
        printf("3- Baja del Programador\n");
        printf("4- Asignar Programador a Proyecto\n");
        printf("5- Listado de Programadores\n");
        printf("6- Listado de todos los proyectos\n");
        printf("7- Listar proyectos de Programador\n");
        printf("8- Proyecto demandante\n\n");
        printf("9- Salir\n\n");

        scanf("%d",&opcion);
        ValidaMenu(opcion,0,9);
        switch(opcion)
        {
            case 1:
                 AltaUnaxxxx(lista);
                break;
            case 2:

               ModificarUnaPersona(lista,TAMANIO);
                break;
            case 3:
                printf("ID Programador: ");
                scanf("%d",&id);
                fflush(stdin);
                BorrarUnaPersona(lista,id,TAMANIO);
                break;
            case 4:
                AsignarProgramador(lista,lista_proyecto,lista_asignar);
                break;
            case 5:
                ListarProgramadores(lista,TAMANIO);
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                seguir='n';
                break;
            default:
                printf("\nNO ES UNA OPCION VALIDA!!!\n\n");
                system("pause");
                break;
        }
                system("pause");
                system("cls");*/


#endif // UTN_H_INCLUDED
