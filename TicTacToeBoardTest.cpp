/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"

class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(TicTacToeBoardTest, placeTest1)
{
  TicTacToeBoard a;
  Piece test =  a.placePiece(-1,3);
	ASSERT_TRUE(test == Invalid);
}

TEST(TicTacToeBoardTest, placeTest2)
{
  TicTacToeBoard b;
  Piece test =  b.placePiece(2,2);
	ASSERT_TRUE(test == X);
}

TEST(TicTacToeBoardTest, getPiece1)
{
  TicTacToeBoard c;
  c.placePiece(1,1);
  Piece test =  c.getPiece(1,2);
	ASSERT_TRUE(test == Blank);
}

TEST(TicTacToeBoardTest, getPiece2)
{
  TicTacToeBoard d;
  d.placePiece(2,2);
  Piece test = d.placePiece(2,2);
	ASSERT_TRUE(test == Invalid);
}

TEST(TicTacToeBoardTest, getPiece3)
{
  TicTacToeBoard e;
  e.placePiece(2,2);
  Piece test =  e.getPiece(2,1);
	ASSERT_TRUE(test == Blank);
}

TEST(TicTacToeBoardTest, swapturn1)
{
  TicTacToeBoard f;
  f.toggleTurn();
  f.toggleTurn();
	ASSERT_TRUE(f.toggleTurn() == O);
}

TEST(TicTacToeBoardTest, win1)
{
  TicTacToeBoard g;
  ASSERT_TRUE(g.getWinner() == Invalid);
}
