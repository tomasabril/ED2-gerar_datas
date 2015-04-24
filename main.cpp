/// Tomas Abril
/// Helena Arins
/// Andre Badenas

/// escreve 1 milhao de datas em um arquivo no formato ano-mes-dia

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

using namespace std;

int main()
{
    int data;
    char dataS[8];
    int ano, mes, dia;
    int i;
    FILE *f = fopen("datas.txt", "w");
    srand (time(NULL));             /* initialize random seed: */

    for(i=0; i<100000; i++) {
        ano = rand()%115 + 1900;    /* generate number between 1900 and 2015: */
        mes = rand()%12 + 1;
        dia = rand()%30 + 1;
        data = ano*10000 + mes*100 + dia;

        fprintf(f, "%d\n", data);
    }

    fclose(f);
}
