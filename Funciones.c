#include "Funciones.h"
#include <stdlib.h>
#include <stdio.h>

int funcMenu()
{
    int i;

    puts("\n\n1. Para cargar los numeros en la Lista en orden. \n");
    puts("2. Para cargar los numeros de forma desordenada. \n");
    puts("3. Para ingresar un numero al inicio. \n");
    puts("4. Para cargar un numero al final. \n");
    puts("5. Para ordenar los numeros de la lista. \n");
    puts("6. Para Mostrar la lista. \n");
    puts("0. Para terminar. \n");
    puts("Ingrese una opcion: ");
    scanf("%d",&i);

    return i;
}

void crearLista(Lista* pl)
{
    pl->ce=0;
    pl->cap=CAP;
}

int listaInsertarEnOrden(Lista *pl, int el)
{
    int* i=pl->vec;
    int* ult=pl->vec + pl->ce-1;

    if(pl->ce==pl->cap)
        return SIN_MEM;

    while(i <= ult && el > *i)
    {
        i++;
    }

    if(i <= ult && el == *i)
        return DUPLICADO;

    for(int* j = ult; j >= i; j--)
    {
        *(j+1) = *j;
    }

    *i = el;
    pl->ce++;

    return TODO_OK;
}

int ingresarEnteroPositivo()
{
    int entero=1;
    do{
        if(entero<=0)
            puts("No es un ingreso valido.");
        puts("Ingrese un entero Positivo: ");
        scanf("%d",&entero);
    }while(entero<0);

    return entero;
}

bool listaEliminarOrd(Lista* pl, int el)
{
    if(pl->ce == 0)
        return false;

    int* i= pl->vec;
    int* ult = pl->vec + pl->ce-1;

    while (i<=ult && el> *i)
    {
        i++;
    }
    if(i > ult || el != *i )
        return false;

    for(int* j = i; j < ult; j++)
    {
        *j = *(j+1);
    }
    pl->ce--;

    return true;
}

void mostrarLista(const Lista *l)
{
    puts("\n\nLISTA CONFORMADA POR:");
            for(int p=0;p<CAP;p++)
                printf("%d\t",l->vec[p]);
    puts("\n\n");
}

void checkeoIngreso(int res)
{
    switch(res)
    {
        case 1:
            puts("Lista sin capacidad de insersion");
            break;
        case 2:
            puts("Ya se encontro el elemento en la lista");
            break;
        case 0:
            puts("Se ingreso correctamente");
    }
}
