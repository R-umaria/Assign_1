#include "pch.h"
#include "CppUnitTest.h"
#include "../Assign_3/rps_game.h"

extern "C" char* determine_rps_winner(const char, const char);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(RockPaperScissorsTests)
	{
	public:

		TEST_METHOD(Player1WinsWithRock)
		{
			char* result = determine_rps_winner("rock", "scissors");
			Assert::AreEqual("Player 1 wins!", result);
		}

		TEST_METHOD(Player2WinsWithScissors)
		{
			char* result = determine_rps_winner("paper", "scissors");
			Assert::AreEqual("Player 2 wins!", result);
		}

		TEST_METHOD(TieWithRockVsRock)
		{
			char* result = determine_rps_winner("rock", "rock");
			Assert::AreEqual("It's a tie!", result);
		}
	};
}
