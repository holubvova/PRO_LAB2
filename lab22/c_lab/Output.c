//
// Created by holubvova on 02.04.20.
//

#include "Output.h"
//#include "debug.h"


void Output_Array(int n ,int m ,int **array){
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++)
            printf("%3d",array[i][j]);
        printf("\n");
    }
    printf("\n");
}
void Output_Array_d(int n ,int m ,int **array){
    FILE* file = fopen("debug.txt", "a+");
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++) {

            printf("%3d", array[i][j]);
            fprintf(file,"%3d", array[i][j]);
        }
        fprintf(file,"\n");
        printf("\n");
    }
    printf("\n");
    fprintf(file,"\n");
    fclose(file);
}