#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int* p = (int*)malloc(4*sizeof(int));
    // // *p = 1;
    // // printf("%d",*p);
    // for(int i = 0 ;i < 4 ; i++)
    // {
    //     scanf("%d",&p[i]);
    // }
    // for(int i = 0 ;i < 4 ; i++)
    // {
    //     printf("%d ->>\n",p[i]);
    // }
    // free(p);


    int* p = (int*)calloc(4,sizeof(int));
    // *p = 1;
    // printf("%d",*p);
    // for(int i = 0 ;i < 4 ; i++)
    // {
    //     scanf("%d",&p[i]);
    // }
    // for(int i = 0 ;i < 4 ; i++)
    // {
    //     printf("%d ->>\n",p[i]);
    // }
    // free(p);


    p = (int*)realloc(p,10*sizeof(int));
    // *p = 1;
    // printf("%d",*p);
    for(int i = 0 ;i < 4 ; i++)
    {
        scanf("%d",&p[i]);
    }
    for(int i = 0 ;i < 10 ; i++)
    {
        printf("%d ->>\n",p[i]);
    }
    free(p);
    return 0;
}