#include "prototipos.h"

void cargar_vector(int **ppvec, int ce)
{
    int *fin;
    int *v;

    *ppvec = (int *)malloc(sizeof(int)*ce);

     v = *ppvec;


    int i=0;
    fin= v+ce;

    while(v<fin)
    {
        *v=i++;
        v++;
    }
    v=fin-ce;
}
