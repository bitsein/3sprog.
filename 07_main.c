/*
入力例
5
7
3
5
9
1
出力例
1
3
5
7
9
*/
#include<stdio.h>
#include<stdlib.h>
#include "7_heap.h"

int main(){
    int i,j,k,l;
    int* A;
    heap H;
    scanf("%d",&i);
    A = malloc(sizeof(int) * (i+1));
    for(j=1; j<i+1; j++){
        scanf("%d",&A[j]);
    }
    H = heap_build(i,A,i);

    for(k=1; k<i+1; k++){
        extract_max(H);
    }
    for(l=1; l<i+1; l++){
        printf("%d\n",A[l]);
    }
}
