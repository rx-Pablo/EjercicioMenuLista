#include "Funciones.h"

int main()
{
    Lista l;
    int opcionI=10,entero,Resultado;

    do
    {
        opcionI = funcMenu();

        if(opcionI!=0)
        {
            switch (opcionI)
            {
                case 1: //Ingreso en orden.
                    for(int j=0; j<CAP; j++)
                    {
                        entero = ingresarEnteroPositivo();
                        Resultado = listaInsertarEnOrden(&l, entero);
                        checkeoIngreso(Resultado);
                    }
                    break;
                case 2: //Ingreso desordenado.

                    break;
                case 3: //Ingreso numero al principio.

                    break;
                case 4: //Ingreso numero al final.

                    break;
                case 5: //Orden si estan desordenados.

                    break;
                case 6: //Muestro lista.
                    mostrarLista(&l);
                    break;
            }
        }

    } while (opcionI!=0);

}
