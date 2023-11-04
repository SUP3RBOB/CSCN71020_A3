#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" char* RockPaperScissors(char playerOne[], char playerTwo[]);

namespace Assignment3UnitTesting {
	TEST_CLASS(Assignment3UnitTesting) {
		public:
		
		TEST_METHOD(CompareString) {
			char expected[] = "Rock";
			char playerOne[] = "Rock";

			Assert::AreEqual(expected, playerOne);
		}

		TEST_METHOD(CompareStringWithMethod) {
			char expected[] = "Rock";
			char playerOne[] = "Rock";
			int expectedReturn = 0;

			Assert::AreEqual(expectedReturn, strcmp(expected, playerOne));
		}

		TEST_METHOD(CheckCasing) {
			char expected[] = "Rock";
			char playerOne[] = "rock";

			Assert::AreNotEqual(expected, playerOne);
		}

		TEST_METHOD(CheckCasingWithMethod) {
			char expected[] = "Paper";
			char playerOne[] = "paper";
			int expectedReturn = 0;

			Assert::AreNotEqual(expectedReturn, strcmp(expected, playerOne));
		}

		TEST_METHOD(CheckWinPlayer1Rock) {
			char expected[] = "Player1";
			char* output = RockPaperScissors("Rock", "Scissors");
			
			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(CheckWinPlayer1Paper) {
			char expected[] = "Player1";
			char* output = RockPaperScissors("Paper", "Rock");

			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(CheckWinPlayer1Scissors) {
			char expected[] = "Player1";
			char* output = RockPaperScissors("Scissors", "Paper");

			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(CheckWinPlayer2Rock) {
			char expected[] = "Player2";
			char* output = RockPaperScissors("Scissors", "Rock");

			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(CheckWinPlayer2Paper) {
			char expected[] = "Player2";
			char* output = RockPaperScissors("Rock", "Paper");

			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(CheckWinPlayer2Scissors) {
			char expected[] = "Player2";
			char* output = RockPaperScissors("Paper", "Scissors");

			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(CheckTieRock) {
			char expected[] = "Draw";
			char* output = RockPaperScissors("Rock", "Rock");

			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(CheckTiePaper) {
			char expected[] = "Draw";
			char* output = RockPaperScissors("Paper", "Paper");

			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(CheckTieScissors) {
			char expected[] = "Draw";
			char* output = RockPaperScissors("Scissors", "Scissors");

			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(CheckInvalidPlayer1) {
			char expected[] = "Invalid";
			char* output = RockPaperScissors("NotRock", "Scissors");

			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(CheckInvalidPlayer2) {
			char expected[] = "Invalid";
			char* output = RockPaperScissors("Scissors", "NotPaper");

			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(CheckInvalidBothPlayers) {
			char expected[] = "Invalid";
			char* output = RockPaperScissors("NotRock", "NotPaper");

			Assert::AreEqual(expected, output);
		}
	};
}
