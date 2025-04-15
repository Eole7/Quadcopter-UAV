# include "helpers.h"
#include<stdio.h>



void mat_transpose(const float *A, int rows, int cols, float *A_T){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            A_T[j*cols +i] = A[i*rows+j];
        }
    }
 }

 void print_mat(float *A, int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%f",A[cols*i+j]);
        }
    }
 }

 

 int main(){
    const float A[]={1,2,3,4};
    int cols=2;
    int rows=2;
    float B[4];
    mat_transpose(A,rows,cols,B);
    print_mat(B,cols,rows);
    return 0;
 }
