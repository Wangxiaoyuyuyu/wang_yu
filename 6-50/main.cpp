#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum Status ( WON,LOST,CONTINUE );

int rollDice( void );
Status craps( void );
void chatter( void );

int main()
{
    Status result;
    int wager = 0;
    int bankBalance = 1000;
    char playAgain;

    srand( time( 0 ) );

    do
    {
        cout << "You have $" << bankBalance
          << " in the bank .\nPlace your wager:";
          cin >> wager;

          while ( wager <= 0 || wager > bankBalance )

          {
              cout << "Please bet a valid amount. \n";
              cin >> wager;
          }

          result = craps();

          if( result == LOST )
          {
              bankBalance -= wager;
          }
    }


}

