//
// Created by holubvova on 02.04.20.
//

#include "Input.h"


void Random_Array(int n ,int m ,int **array){
    int i,j;
    srand(time(0));
    for (i=0; i<n; i++)
        for(j=0; j<m; j++)
            array[i][j]=rand()%20-10;
}

void Sort_Array(int n ,int m ,int **array){
    int i,j;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            array[i][j]=i*n+j-10;
}

void Enter_Array(int n ,int m ,int **array){
    int i,j;
    printf("Enter %d",n*m);
    printf(" elements in array\n");
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d",&(array[i][j]));
}
void Array(int n ,int m, int **array){
    int i , j ;
    array=(int **)malloc(sizeof(int *)*n);
    for (i=0; i<m; i++)
        array[i]=(int *)malloc(sizeof(int)*m);
}
void fillArray(int n ,int m, int **array){
    for (int i = 0; i < m; i++)
        if (array[i])
            free(array[i]);
    free(array);
}
