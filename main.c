#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

int main()
{

    ///vector usando puntero cargado por funcion
    int *vector;
    cargar_vector(&vector, 3);

    for(int i=0;i<3; i++)
    {
        printf("%d",*vector);
        vector++;
    }

    free(vector);
    ///vector usando puntero cargado por funcion

    return 0;
}
