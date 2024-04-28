#include <iostream>
using namespace std;

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

enum enStone
{
   stone = 1,
   paper = 2,
   scissor = 3,
};

void game(int user, int pc)
{
   cout << user << endl
        << pc << endl;
   if (user == pc)
   {
       cout << "equation" << endl;
   }
   else if ((user == enStone::stone && pc == enStone::paper) || (user == enStone::paper && pc == enStone::scissor) || (user == enStone::scissor && pc == enStone::stone))
   {
       cout << "pc win" << endl;
   }
   else if ((pc == enStone::stone && user == enStone::paper) || (pc == enStone::paper && user == enStone::scissor) || (pc == enStone::scissor && user == enStone::stone))
   {
       cout << "user win" << endl;
   }
   else
   {
       cout << " someting wrong" << endl;
   }
}

void playWithComputer(int timesOFGame)
{

   for (int i = 0; i < timesOFGame; i++)
   {

       game(ReadPositiveNumber("stone: 1, paper: 2,scissor: 3"), randomNumber(1, 3));
   }
}

void playAgain()
{
   bool playAgain = false;
   int howManyGame;
   do
   {
       howManyGame = ReadPositiveNumber("how Many Game");

       playWithComputer(howManyGame);

       cout << "if you want play again press [1] if not press [0]" << endl;
       cin >> playAgain;

   } while (playAgain);
}

int main()
{

   srand((unsigned)time(NULL));
   playAgain();
}







