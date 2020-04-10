
#include "Array.h"
#include "Struk.h"
#include "release.h"
#include "debug.h"

int n;
int m;
int **array;
int mod;

int main(int argc, char *argv[]) {

    int opt = 0;
    int long_index = 0;
    opt  = getopt_long(argc,argv,"d:r:",long_option,&long_index);

    while (opt!=-1){
        switch(opt){
            case 'r':{
                mod = 0;
                break;
            }
            case 'd':{
                mod = 1;
                break;
            }
            default:
                abort ();
        }
        if (argc == 4){
            n = atoi(argv[2]);
            m = atoi(argv[3]);
            if(n <1 || m < 1){
                printf("error size\n");
                break;
            }else{
                if (mod == 0 ){
                  // Array(n, m  ,array);
                    int i , j ;
                    array=(int **)malloc(sizeof(int *)*n);
                    for (i=0; i<m; i++)
                        array[i]=(int *)malloc(sizeof(int)*m);
                    release(n , m , array);
                    /*for (int i = 0; i < m; i++)
                        if (array[i])
                            free(array[i]);
                        free(array);*/

                    break;
                } else if (mod == 1){
                    int i , j ;
                    array=(int **)malloc(sizeof(int *)*n);
                    for (i=0; i<m; i++)
                        array[i]=(int *)malloc(sizeof(int)*m);
                    debug(n , m , array,mod);
                    /*for (int i = 0; i < m; i++)
                        if (array[i])
                            free(array[i]);
                        free(array);*/
                    break;
                }
            }
        }
        else{
            printf("error arguments\n");
            break;
        }
    }


    return 0;
}
