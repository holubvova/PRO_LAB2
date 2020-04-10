//
// Created by holubvova on 02.04.20.
//

#include "debug.h"
 void debug(int n , int m , int **array , int mod){
     FILE* file = fopen("debug.txt", "w");
     fprintf( file, "Testing random array\n");
     printf("Testing sort array\n");
     Random_Array(n, m  ,array);
     Output_Array_d(n, m  ,array);
     Func(n, m, array, mod);


     fprintf(file,"Testing sort array\n");
     printf("Testing sort array\n");
     Sort_Array(n, m  ,array);
     Output_Array_d(n, m  ,array);
     Func(n, m  ,array,mod);

     printf("Testing enter array\n");
     fprintf(file,"Testing enter array\n");
     Enter_Array(n, m  ,array);
     Output_Array_d(n, m  ,array);
     Func(n, m  ,array,mod);
     fclose(file);
}