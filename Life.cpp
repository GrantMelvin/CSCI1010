// Life simulation

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include <string>
using namespace std;

const int MAXWORLDROWS = 25;
const int MAXWORLDCOLS = 80;
const int MAXROWS = MAXWORLDROWS + 2;
const int MAXCOLS = MAXWORLDCOLS + 2;
const int FILENAMESIZE = 255;

// ASCII characters to use for display
// https://theasciicode.com.ar/extended-ascii-code/block-graphic-character-ascii-code-219.html
// for interesting effect use code 219 and 176 instead of the asterisk and space
const unsigned char CELL = '*';  // 219;
const unsigned char EMPTY = ' '; // 176;

enum class State { dead = 0, alive = 1 };

/*
* initWorld is used to initialize all positions in the world
* array to the 'dead' state
*/
void initWorld(State world[][MAXCOLS]);

/*
* display is used to draw the 'world' onto the screen
* for each 'alive' cell, the value CELL is displayed
* for each 'dead' cell, the value EMPTY is displayed
* does NOT display any items in:
*   row 0, row MAXROWS-1, column 0, or column MAXCOLS-1
* since these rows and columns are used as a "border"
* around the world grid
*/
void display(State world[][MAXCOLS]);

/*
* getFile will get a filename from the user. It then attmpts
* to open the file, read its contents, and update the world
* based on the contents of the file. The file should contain
* only spaces and asterisks. A space represents a 'dead' cell
* and an asterisk represents an 'alive' cell.
* The function stops reading and exits the program if > MAXWORLDCOLS
* characters are found on one row, or if > MAXWORLDROWS rows are
* found in the file.
*/
void getFile(State world[][MAXCOLS]);

/*
* calcNewWorld is used to calculate the new state of the world
* (i.e. a new generation) based upon analyzing the current world state
*/
void calcNewWorld(State world[][MAXCOLS]);

/*
* neighborCount is used to count the number of 'alive' cells in
* the 8 neighboring positions which are surrounding position
* [row][col] in world
*/
int neighborCount(State world[][MAXCOLS], int row, int col);

//initializing variables
int main()
{
	State world[MAXROWS][MAXCOLS];

	int generation = 0;
	bool stop = false;

	initWorld(world);
	getFile(world);
	int i = 0;

	// TODO: set up and initialize the 'world' array


	cin.ignore();
	do
	{
		// system("cls") clears the screen; only works on Windows machines
		// You will probably need to comment this out if working on
		// a non-Windows machine
		system("cls");

		display(world);
		generation++;
		cout << "Generation: " << generation << "\t";
		cout << "<ENTER> to continue / <Q + ENTER> to quit: ";

		// TODO: get input from user and decide whether to quit the loop
		// and whether to compute a new generation

		char enter[2];

		cin.getline(enter, 2);


		//tests whether Q is being entered, else it continues the program/loop
		if (toupper(enter[0]) == 'Q') {
			stop = true;
		}
		else
		{
			calcNewWorld(world);

		}



	} while (!stop);



	return 0;

}

int neighborCount(State world[][MAXCOLS], int row, int col)

{
	// This code checks to make sure you aren't trying to count neighbors for any
	// position on row #0, or on row #MAXWORLDROWS+1,
	// or in column 0, or in columnn MAXWORLDCOLUMNS+1
	// because if you are, you are going to run into array out-of-bounds problems
	if (row < 1 || row > MAXWORLDROWS)
	{
		cerr << "ERROR: invalid row parameter " << row << " in neighborCount\n";
		exit(1);
	}
	else if (col < 1 || col > MAXWORLDCOLS)
	{
		cerr << "ERROR: invalid col parameter " << col << " in neighborCount\n";
		exit(1);
	}

	int i = 0;

	// TODO: write neighborCount code

	//counts amount of alive neighbors for each spot in the array

	int neighbor = 0;
	if (world[row - 1][col] == State::alive)
		neighbor++;
	if (world[row + 1][col] == State::alive)
		neighbor++;
	if (world[row - 1][col - 1] == State::alive)
		neighbor++;
	if (world[row - 1][col + 1] == State::alive)
		neighbor++;
	if (world[row + 1][col - 1] == State::alive)
		neighbor++;
	if (world[row + 1][col + 1] == State::alive)
		neighbor++;
	if (world[row][col + 1] == State::alive)
		neighbor++;
	if (world[row][col - 1] == State::alive)
		neighbor++;



	return neighbor;
}


// void calcNewWorld copies neighborCount into world2
void calcNewWorld(State world[][MAXCOLS])
{
	//runs the neighborCount function for all spots in the 2d array
	int world2[MAXROWS][MAXCOLS];
	for (int x = 1; x < MAXROWS - 1; x++) {

		for (int y = 1; y < MAXCOLS - 1; y++) {
			{
				world2[x][y] = neighborCount(world, x, y);
			}

		}

	}
	//calculates if the spot in the array will be a dead or alive cell in next generation
	//this is following the rules defined in the assignment
	for (int x = 1; x < MAXROWS - 1; x++) {
		for (int y = 1; y < MAXCOLS - 1; y++) {
			if (world2[x][y] == 0 || world2[x][y] == 1)
			{
				world[x][y] = State::dead;

			}
			else if (world2[x][y] == 3) {
				world[x][y] = State::alive;
			}
			else if (world2[x][y] == 2)
			{
				world[x][y] = world[x][y];
			}
			else {
				world[x][y] = State::dead;
			}


		}
	}
}

void getFile(State world[][MAXCOLS])
{
	ifstream inFile;
	int row = 1;
	int i;
	char buffer[MAXWORLDCOLS + 1];
	// TODO: Write getFile code
	// Make sure row is incremented each time you read a line from the file
	//Reads file

	char file[FILENAMESIZE];


	cout << "Enter the filename containing the inital structure: ";
	cin >> file;


	inFile.open(file);



	if (!inFile) {
		cerr << "ERROR: Input file cannot be opened.\n";
		exit(1);
	}

	// reads file line by line until it reaches the end of the file
	while (row <= MAXWORLDROWS) {
		inFile.getline(buffer, MAXWORLDCOLS + 1);
		int extra = 0;
		for (i = 0; buffer[i] != '\0'; i++) {
			if (buffer[i] == '*') {
				world[row][i + 1] = State::alive;
			}
			else {
				world[row][i + 1] = State::dead;
			}
		}
		row++;

	}






	// After file reading is finished, this code checks to see if the reading stopped
	// because of too many characters on a line in the file, or too many rows in the file
	// It is possible that you might have to change the conditions here depending on
	// exactly how you choose to read the file
	if (!inFile.eof())
	{
		if (row <= MAXWORLDROWS)
		{
			cerr << "\nERROR: Line " << row << " in input file contains more than " << MAXWORLDCOLS << " chars\n";
		}
		else
		{
			cerr << "\nERROR: There are more than " << MAXWORLDROWS << " lines in the file\n";
		}
		inFile.close();
		exit(1);
	}

	inFile.close();
}

//prints State world to the screen

void display(State world[][MAXCOLS])
{
	// TODO: write the display code
	//test each position in the world array and display them based on their state.
	for (int x = 1; x < MAXROWS; x++)
	{
		for (int y = 1; y < MAXCOLS; y++)
		{
			if (world[x][y] == State::alive)
			{
				cout << '*';
			}
			else {
				cout << ' ';
			}

		}
		cout << endl;
	}




}

// Sets the foundation for the world by setting all states to dead

void initWorld(State world[][MAXCOLS])
{
	// TODO: write initWorld code

	for (int r = 0; r < MAXWORLDROWS; r++) {
		for (int c = 0; c < MAXWORLDCOLS; c++) {
			world[r][c] = State::dead;
		}
	}
}