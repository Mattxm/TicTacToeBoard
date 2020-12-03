I couldn't get the last rescursive function working, but tested without its implementation. 

Here are the results. 

Lines executed:95.83% of 24

Branches executed:100.00% of 24

Taken at least once:70.83% of 24

No calls

Creating 'TicTacToeBoard.cpp.gcov'

File 'TicTacToeBoardTest.cpp'


Lines executed:100.00% of 32

Branches executed:69.23% of 182

Taken at least once:34.62% of 182

Calls executed:56.46% of 271

Creating 'TicTacToeBoardTest.cpp.gcov'



Lines executed:98.21% of 56





# Getting Started

Build the Unit Testing CPP ("gtest") container if you have not already:

`docker build -t gtest .`

Then run the container, with bound access to your repository:

`docker run --mount type=bind,source="$(pwd)",target=/usr/src -it gtest`

This should automatically re-build the project and run the tests

# TicTacToeBoard

## Associated Enumerated Types
`Piece` has four possible values: `X`,`O`,`Invalid`, and `Blank`

## Member Variables
`Piece board[BOARDSIZE][BOARDSIZE]`

**board** represents the 2D playing board, where BOARDSIZE is 3,
___
`Piece turn`

**turn** represents whose turn it is to place a piece (defaults to X)

## Public Functions
`TicTacToeBoard()`

*Constructor sets an empty board and specifies it is X's turn first*
___

`Piece toggleTurn()`

*Switches turn member variable to represent whether it's X's or O's turn
and returns whose turn it is*
___


`Piece placePiece(int row, int column)`

*Places the piece of the current turn on the board, returns what
piece is placed, and toggles which Piece's turn it is. placePiece does
NOT allow to place a piece in a location where there is already a piece.
In that case, placePiece just returns what is already at that location.
Out of bounds coordinates return the Piece Invalid value. When the game
is over, no more pieces can be placed so attempting to place a piece
should neither change the board nor change whose turn it is.*
___

`Piece getPiece(int row, int column)`

*Returns what piece is at the provided coordinates, or Blank if there
are no pieces there, or Invalid if the coordinates are out of bounds*
___

`Piece getWinner()`

*Returns which Piece has won, if there is a winner, Invalid if the game
is not over, or Blank if the board is filled and no one has won.*
