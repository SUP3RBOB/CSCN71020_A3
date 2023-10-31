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

		TEST_METHOD(CheckWinRock) {
			char expected[] = "Player2";
			char* output = RockPaperScissors("Rock", "Paper");
			
			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(CheckWinPaper) {
			char expected[] = "Player1";
			char* output = RockPaperScissors("Paper", "Rock");

			Assert::AreEqual(expected, output);
		}

		TEST_METHOD(CheckWinScissors) {
			char expected[] = "Player1";
			char* output = RockPaperScissors("Scissors", "Paper");

			Assert::AreEqual(expected, output);
		}
	};
}
