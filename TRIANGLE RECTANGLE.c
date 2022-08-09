#include <stdio.h>
#include <stdlib.h>
int main (){
int i,j,n ;
printf ("donner le nombre des lines :");
scanf("%d",&n);
for(i=0;i<n;i++){
    for (j=0;j<n-i;j++){
        printf("*");
        }
    printf("\n");
}
return 0;
}
