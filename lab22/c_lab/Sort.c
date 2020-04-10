//
// Created by holubvova on 02.04.20.
//

#include "Sort.h"

void Func(int n ,int m ,int **array , int mod ){

    FILE* file = fopen("debug.txt", "a+");

    int i_index = -1 , j_index =-1, i = 0 , j = 0 , tmp = 0;
    for (j = 0 ; j < m; j ++){
        tmp = array[0][j];
        i_index = 0;
        j_index = j;
        for(i = 1 ; i < n; i ++) {
            if (tmp <= array[i][j]) {
                tmp = array[i][j];
                i_index = i;
                j_index = j;
            }
        }
        printf("in %d max number = %d  i: %d j: %d\n",j_index ,tmp,i_index,j_index);
       if (mod ==1){ fprintf(file ,"in %d max number = %d  i: %d j: %d\n",j_index ,tmp,i_index,j_index);
    }
    }
    printf("\n");
    fprintf(file,"\n");
    fclose(file);
}