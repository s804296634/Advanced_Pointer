#include "stdio.h"
#include "stdlib.h"

typedef struct 
{
    /* data */
    int key;
    char set;
}record_t;

int my_compare(const void * item0, const void *item1){
    const record_t * p1 = ( const record_t *)item0;
    const record_t * p2 = ( const record_t *)item1;
    return ( p1->key > p2->key ? 1:0);

}
int  main() {


    record_t array[4] = {0};
    for (int i = 3; i >=  0 ; i--)
    {
        /* code */
        array[i].key = i;
        array[i].set = 'a' + i;
        printf(" array[%d].set = %c \n",i, array[i].set);
    }
   qsort(array,sizeof(array)/sizeof(record_t),sizeof(record_t),my_compare);

     printf("sort finished \n");
     for(int j = 0  ; j < 4 ; j++){     
      printf(" array[%d].set = %c \n",j, array[j].set);
    }

    return 0;
}

