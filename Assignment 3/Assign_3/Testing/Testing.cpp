#include "pch.h"
#include "CppUnitTest.h"


extern "C"	{	//using steve's method for linking
	#include "../Assign_3/rps_game.h"
	}


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(RockPaperScissorsTests)
		{
		public:

		TEST_METHOD(Player1WinsWithRock)
		{
			char* result = determine_rps_winner("rock", "scissors");
			Assert::AreEqual("Player1", result);
		}

		TEST_METHOD(Player2WinsWithScissors)
		{
			char* result = determine_rps_winner("paper", "scissors");
			Assert::AreEqual("Player2", result);
		}

		TEST_METHOD(TieWithRockVsRock)
		{
			const char* result = determine_rps_winner("rock", "rock");
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(Player1WinsWithPaper)
		{
			char* result = determine_rps_winner("paper", "rock");
			Assert::AreEqual("Player1", result);
		}

		TEST_METHOD(Player2WinsWithRock)
		{
			char* result = determine_rps_winner("scissors", "rock");
			Assert::AreEqual("Player2", result);
		}

		TEST_METHOD(TieWithPaperVsPaper)
		{
			const char* result = determine_rps_winner("paper", "paper");
			Assert::AreEqual("Draw", result);
		}

		TEST_METHOD(TieWithScissorsVsScissors)
		{
			const char* result = determine_rps_winner("scissors", "scissors");
			Assert::AreEqual("Draw", result);
		}

		TEST_METHOD(Player1WinsWithScissors)
		{
			char* result = determine_rps_winner("scissors", "paper");
			Assert::AreEqual("Player1", result);
		}

		TEST_METHOD(Player2WinsWithPaper)
		{
			char* result = determine_rps_winner("rock", "paper");
			Assert::AreEqual("Player2", result);
		}

		TEST_METHOD(InvalidInputPlayer1)
		{
			char* result = determine_rps_winner("lizard", "rock");
			Assert::AreEqual("Invalid", result);
		}

		TEST_METHOD(InvalidInputPlayer2)
		{
			char* result = determine_rps_winner("rock", "lizard");
			Assert::AreEqual("Invalid", result);
		}

		TEST_METHOD(InvalidInputBothPlayers)
		{
			char* result = determine_rps_winner("lizard", "spock");
			Assert::AreEqual("Invalid", result);
		}

	};
}
