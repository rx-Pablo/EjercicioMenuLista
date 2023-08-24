#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIN_MEM 1
#define CAP 5
#define DUPLICADO 2
#define TODO_OK 0


typedef struct
{
    int vec[CAP];
    int ce;
    int cap;
}
Lista;

void checkeoIngreso(int);
void mostrarLista(const Lista*);
void crearLista(Lista*);
int funcMenu();
int ingresarEnteroPositivo();
int listaInsertarEnOrden(Lista*, int);

#endif // FUNCIONES_H_INCLUDED
