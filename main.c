#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3

void printMatrix(int a[][COLS])
{
    int i,j;
    
    for(i=0;i<ROWS;i++){
	
     for(j=0;j<COLS;j++){
	  printf("%i ",a[i][j]);}
	 printf("\n"); 
    }
}

void addMatrix(int a[][COLS],int b[][COLS],int c[][COLS]){
	 int i,j;
    
    for(i=0;i<ROWS;i++)
     for(j=0;j<COLS;j++)
	  c[i][j]=a[i][j]+b[i][j];
}

int main(int argc, char *argv[]) {
	
	int a [ROWS][COLS]={
	 {2,3,0},
	 {8,9,1},
	 {7,0,5}};
	int b [ROWS][COLS]={
	 {1,0,0},
	 {0,1,0},
	 {0,0,1}};
	int c [ROWS][COLS];
	
	addMatrix(a,b,c);
	printMatrix(c);
	
	return 0;
}
