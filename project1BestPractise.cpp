#include <iostream>
#include <cstdlib>
using namespace std;

enum enGameChoise
{
   stone = 1,
   paper = 2,
   scissor = 3
};

enum enWinner
{
   player = 1,
   computer = 2,
   draw = 3
};

struct stRoundInfo
{
   short roundNumber = 0;
   enGameChoise playerChoice;
   enGameChoise computerChoice;
   enWinner winner;
   string winnerName;
};

struct stGameResult
{
   short gameRound = 0;
   short playerWinTimes = 0;
   short computerWinTimes = 0;
   short drawTimes = 0;
   enWinner gameWinner;
   string winnerName = "";
};

int ReadPositiveNumber(string message)
{
   int Number = 0;

   do
   {
       cout << message << endl;
       cin >> Number;
   } while (Number <= 0);
   return Number;
}

int randomNumber(int From, int To)
{
   int randNum = rand() % (To - From + 1) + From;
   return randNum;
}

short readHowManyRounds()
{
   short gameRounds = 1;
   do
   {
       cout << "How many Rounds 1 to 10 \n";
       cin >> gameRounds;
   } while (gameRounds < 1 || gameRounds > 10);

   return gameRounds;
}
void showGameOverScreen()
{
}

void showGamefinalResult(stGameResult gameResult)
{
}

void resetScreen()
{
}

enGameChoise readPlayerCoice()
{
   short choise = 1;
   do
   {
       cout << "\n Your choise : [1] stone, [2] paper, [3] scissor ?";
       cin >> choise;
   } while (choise < 1 || choise > 3);

   return (enGameChoise)choise;
}

enGameChoise getComputerChoice()
{
   return (enGameChoise)randomNumber(1, 3);
}

string winnerName(enWinner winner)
{
   string arrWinnerName[3] = {"player", "Computer", "No Winnder"};
   return arrWinnerName[winner - 1];
}
string choiceName(enGameChoise choice)
{
   string arrGameChoice[3] = {"Stone", "Paper", "Scissors"};
   return arrGameChoice[choice - 1];
}

enWinner whoWonTheRound(stRoundInfo roundInfo)
{
   if (roundInfo.playerChoice == roundInfo.computerChoice)
   {
       return enWinner::draw;
   }
   switch (roundInfo.playerChoice)
   {
   case enGameChoise::stone:
       if (roundInfo.computerChoice == enGameChoise::paper)
       {
           return enWinner::computer;
       }
       break;
   case enGameChoise::paper:
       if (roundInfo.computerChoice == enGameChoise::scissor)
       {
           return enWinner::computer;
       }
       break;
   case enGameChoise::scissor:
       if (roundInfo.computerChoice == enGameChoise::stone)
       {
           return enWinner::computer;
       }
       break;
   }
   return enWinner::player;
}

void printRoundRuselt(stRoundInfo RoundInfo)
{
   cout << "\n____________Round [" << RoundInfo.roundNumber << "] ____________\n\n";
   cout << "Player1  Choice: " << choiceName(RoundInfo.playerChoice) << endl;
   cout << "Computer Choice: " << choiceName(RoundInfo.computerChoice) << endl;
   cout << "Round Winner   : [" << RoundInfo.winner << "] \n";
   cout << "__________________________________\n"
        << endl;
   // SetWinnerScreenColor(RoundInfo.Winner);
}

enWinner whoWonTheGame(short Player1WinTimes, short ComputerWinTimes)
{
   if (Player1WinTimes > ComputerWinTimes)
       return enWinner::player;
   else if (ComputerWinTimes > Player1WinTimes)
       return enWinner::computer;
   else
       return enWinner::draw;
}

stGameResult fillGameResults(int GameRounds, short Player1WinTimes, short ComputerWinTimes, short DrawTimes)
{
   stGameResult GameResults;
   GameResults.gameRound = GameRounds;
   GameResults.playerWinTimes = Player1WinTimes;
   GameResults.computerWinTimes = ComputerWinTimes;
   GameResults.drawTimes = DrawTimes;
   GameResults.gameRound = whoWonTheGame(Player1WinTimes, ComputerWinTimes);
   GameResults.winnerName = winnerName(GameResults.gameWinner);
   return GameResults;
}

stGameResult playGame(short howManyRounds)
{
   stRoundInfo roundInfo;
   short playerWinTimes = 0, computerWinTimes = 0, drawWinTimes = 0;

   for (int gameRound = 0; gameRound <= howManyRounds; gameRound++)
   {

       cout << "\n Round [" << gameRound << "] begins:\n";
       roundInfo.roundNumber = gameRound;
       roundInfo.playerChoice = readPlayerCoice();
       roundInfo.computerChoice = getComputerChoice();
       roundInfo.winner = whoWonTheRound(roundInfo);
       roundInfo.winnerName = winnerName(roundInfo.winner);

       if (roundInfo.winner == enWinner::player)
       {
           playerWinTimes++;
       }
       else if (roundInfo.winner == enWinner::computer)
       {
           computerWinTimes++;
       }
       else
       {
           drawWinTimes++;
       }
       printRoundRuselt(roundInfo);
   }
   return fillGameResults(howManyRounds, playerWinTimes, computerWinTimes, drawWinTimes);
}

void ShowGameOverScreen()
{
   cout << tabs(2) << "__________________________________________________________\n\n";
   cout << tabs(2) << "                 +++ G a m e  O v e r +++\n";
   cout << tabs(2) << "__________________________________________________________\n\n";
}
void ShowFinalGameResults(stGameResult GameResults)
{
   cout << tabs(2) << "_____________________ [Game Results ]_____________________\n\n";
   cout << tabs(2) << "Game Rounds        : " << GameResults.gameRound << endl;
   cout << tabs(2) << "Player1 won times  : " << GameResults.playerWinTimes << endl;
   cout << tabs(2) << "Computer won times : " << GameResults.computerWinTimes << endl;
   cout << tabs(2) << "Draw times         : " << GameResults.drawTimes << endl;
   cout << tabs(2) << "Final Winner       : " << GameResults.winnerName << endl;
   cout << tabs(2) << "___________________________________________________________\n";
   // SetWinnerScreenColor(GameResults.GameWinner);
}
short ReadHowManyRounds()
{
   short GameRounds = 1;
   do
   {
       cout << "How Many Rounds 1 to 10 ? \n";
       cin >> GameRounds;
   } while (GameRounds < 1 || GameRounds > 10);
   return GameRounds;
}

string tabs(short NumberOfTabs)
{
   string t = "";
   for (int i = 1; i < NumberOfTabs; i++)
   {
       t = t + "\t";
       cout << t;
   }
   return t;
}

void startGame()
{

   char playAgain = 'Y';
   do
   {
       resetScreen();
       stGameResult gameResult = playGame(readHowManyRounds());

       showGameOverScreen();

       showGamefinalResult(gameResult);

       cout << endl
            << tabs(3) << "Do you want play again? Y/N " << endl;

       cin >> playAgain;

   } while (playAgain == 'y' || playAgain == 'Y');
}

int main()
{
   srand((unsigned)time(NULL));

   startGame();

   return 0;
}