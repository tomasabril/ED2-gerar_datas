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
//____________1.000.000
    for(i=0; i<1000000; i++) {
        ano = rand()%200 + 1800;    /* generate number between 1800 and 2000: */
        mes = rand()%12 + 1;
        dia = rand()%30 + 1;
        data = ano*10000 + mes*100 + dia;

        fprintf(f, "%d\n", data);
    }

    fclose(f);
}
