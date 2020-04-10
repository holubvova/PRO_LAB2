//
// Created by holubvova on 02.04.20.
//

#include "release.h"


void release(int n , int m , int **array){
    printf("Testing random array\n");

    Random_Array(n, m  ,array);
    Output_Array(n, m  ,array);
    Func(n, m, array , 0);


    printf("Testing sort array\n");
    Sort_Array(n, m  ,array);
    Output_Array(n, m  ,array);
    Func(n, m  ,array ,0 );


    printf("Testing enter array\n");
    Enter_Array(n, m  ,array);
    Output_Array(n, m  ,array);
    Func(n, m  ,array, 0);

}