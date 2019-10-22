# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <stdbool.h>
# define N 10
void printboard(int board[N][N]){
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if(board[i][j]==1)
				printf("Q  ");
			else
				printf("-  ");
		}
		printf("\n");
		printf("\n");
	}
}
bool isSafe(int board[N][N],int row,int col){
	int i=0,j=0;
	// to check on the left side 
	for (int i = 0; i < col; ++i)
	{
		if(board[row][i])
			return false;
	}
	//for the left diagonal
	for(i=row,j=col;i>=0 && j>=0;--i,--j){
		if(board[i][j])
			return false;
	}
	//for the right diagonal 
	for(i=row,j=col;i >= 0 && i < N;++i,--j){
		if(board[i][j])
			return false;
	}
	return true;

}
bool nQueen(int board[N][N],int col){
	// if all queens are placed
        int i=0; 
	if(col >= N)
		return true;
	for(i=0;i<N;++i){
		// to check if the queen can be placed at board[i][col]
		if(isSafe(board,i,col)){
			// place the queen
			board[i][col]=1;
			// to recur all the queens 
			if(nQueen(board,col + 1))
				return true;
			// in case we get no sol for that case we have to backtrack
			board[i][col]=0;
		}
	}
	return false;
}
int main(int argc, char const *argv[])
{
	int board[N][N];
	int i=0,j=0;
	for(i=0;i<N;++i){
		for(j=0;j<N;++j){
			board[i][j]=0;
		}
	}
	if(nQueen(board,0) == false){
		printf("solution does not exists\n");
	}
	printboard(board);	
	return 0;
}
