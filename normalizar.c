#define esBlanco(x) ((x) == ' ' || (x) == '\t')
#define aMayusc(x) ((x)>='a' && (x)<='z'?(x)-32:(x))
#define aMinusc(x) ((x)>='A' && (x)<='Z'?(x)+32:(x))
#include "prototipos.h"


char *normalizar(char *s)
{
    char *ori = s;
    char *des = s;

    while(*ori)
    {
        while(esBlanco(*ori))
            ori++;
        if(*ori)
        {
            *des = aMayusc(*ori);
            des++;
            ori++;
            while(!esBlanco(*ori) && *ori)
            {
                *des=aMinusc(*ori);
                des++;
                ori++;
            }
            if(esBlanco(*ori))
            {
                *des=aMinusc(*ori);
                des++;
                ori++;
            }
        }
    }
    if(des > s && *(des-1) == ' ')
        des--;
    *des = '\0';
    return s;
}
