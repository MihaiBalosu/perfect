#include <stdio.h>
#include <stdlib.h>
int perfect(nr);
int main()
{
    int nr, i;
    for(nr=2; nr<=1000; nr++){
        if(perfect(nr)){
            printf(" numarul %d este egal cu 1 ", nr);
            for(i=2; i<=nr/2; i++){
                if(nr%i==0)
                    printf("+ %d ", i);

            }
            printf("\n");
        }
    }

    return 0;
}
int perfect(nr){
    int sum=1;
    int i;
    for(i=2; i<=nr/2; i++){
        if(nr%i==0)
            sum=sum+i;
    }

    return(sum==nr);


}
