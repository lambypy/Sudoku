#include <iostream>

using namespace std;

#define N 9

// print function
void print(int arr[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

// Checks if possible to assign num to the row, rol
bool isSafe(int grid[N][N], int row,
					int col, int num)
{
	
	// Check to find num in same row
	for (int x = 0; x <= 8; x++)
		if (grid[row][x] == num)
			return false;

	// Check to find num in same col
	for (int x = 0; x <= 8; x++)
		if (grid[x][col] == num)
			return false;

	// Check to find num in the same 3*3 matrix
	int startRow = row - row % 3,
			startCol = col - col % 3;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (grid[i + startRow][j +
							startCol] == num)
				return false;

	// otherwise return true
	return true;
}

// solver which attempts to assign values to unassigned locations in the
// partially filled grid
bool solveSuduko(int grid[N][N], int row, int col)
{
	// check we have reached the 8th row and 9th column to avoid
	// further backtracking
	if (row == N - 1 && col == N)
		return true;

	// check if col value is 9, then we move to next row
	if (col == N) {
		row++;
		col = 0;
	}

	// check if the current position of the grid already contains value > 0
    // iterate for next col
	if (grid[row][col] > 0)
		return solveSuduko(grid, row, col + 1);

	for (int num = 1; num <= N; num++)
	{
		
		//check if it is safe to place num in given row, col
		if (isSafe(grid, row, col, num))
		{
			// Assigning num in current row, col
			grid[row][col] = num;
		
			// Checking for next possibility with next col
			if (solveSuduko(grid, row, col + 1))
				return true;
		}
	
		// removing assigned num, and go with different num value 
		grid[row][col] = 0;
	}
	return false;
}

// Driver Code
int main()
{
	// Sudoku grid of numbers to test if valid
	int grid[N][N] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
					{ 5, 2, 0, 0, 0, 0, 0, 0, 0 },
					{ 0, 8, 7, 0, 0, 0, 0, 3, 1 },
					{ 0, 0, 3, 0, 1, 0, 0, 8, 0 },
					{ 9, 0, 0, 8, 6, 3, 0, 0, 5 },
					{ 0, 5, 0, 0, 9, 0, 6, 0, 0 },
					{ 1, 3, 0, 0, 0, 0, 2, 5, 0 },
					{ 0, 0, 0, 0, 0, 0, 0, 7, 4 },
					{ 0, 0, 5, 2, 0, 6, 7, 0, 0 } };

	if (solveSuduko(grid, 0, 0))
		print(grid);
	else
		cout << "A solution does not exist " << endl;

	return 0;
}