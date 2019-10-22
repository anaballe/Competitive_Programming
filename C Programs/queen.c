/*******************************************
Program to place 8 Queens in the grid of 8*8
*******************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define GRID_SIZE 8

//Function to check if Queen can be placed at the given position
int canCome(int arr[][GRID_SIZE], int row, int col) {
    int i,j;
    //Checking the row and the column
    for(i=0; i < GRID_SIZE; i++)
        if( arr[i][col] == 1 || arr[row][i] == 1 )
            return 0;
    //Checking the diagonals
    for(i=0; i < GRID_SIZE; i++)
        for(j=0; j < GRID_SIZE; j++)
            //For diagonal
            if(abs(row-i) == abs(col-j) && arr[i][j] == 1)
                return 0;
    return 1;
}

//Function for printing the grid
void printGrid(int arr[][GRID_SIZE]){
    int i,j;
    for(i=0; i < GRID_SIZE; i++){
        for(j=0; j < GRID_SIZE; j++)
            printf("%3c", (arr[i][j] == 1 ? 'Q':'-'));
        printf("\n");
    }
}

//Function for filling the Queens on the grid
int placeQueen(int arr[][GRID_SIZE], int col){
    static int count = 0;
    int row, status;
    int option;
    //Base Condition
    if( col == GRID_SIZE ){
        printGrid(arr);
        printf("Total no. of recursion from previous state: %d\n", count);
        count = 0;
	printf("Want more solutions(1 = yes, 0 = no): ");
        scanf("%d", &option);
        if( option == 1 )
            return 0;
        else
            return 1;
    }
    else{
        for( row=0; row < GRID_SIZE; row++){
            if(canCome(arr, row, col)){
                arr[row][col] = 1;
                count ++;
                if( placeQueen(arr, col+1) )
                    return 1;
                else
                    arr[row][col] = 0;
            }
        }
        return 0;
    }
}

//Main function
int main(){
    int i,j;
    int arr[GRID_SIZE][GRID_SIZE];
    for(i=0; i < GRID_SIZE; i++)
        for(j=0; j < GRID_SIZE; j++)
            arr[i][j] = 0;
    i = placeQueen(arr, 0);
    if( i==0 )
       printf("No more solutions possible\n");
    return 0;
}
