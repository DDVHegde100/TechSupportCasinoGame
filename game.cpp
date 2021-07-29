#include <iostream>
#include <string> 
#include <cstdlib>
#include <ctime>

using namespace stdl
void rules();

int main(){
	string playerName;
   int amount;
   int bet;
   int guess;
   int dice; 
   char choice;
   srand(time(0)); 
   cout << "\n\t\t========Welcome to Dhruv's Tech Support Casino=======\n\n";
   cout << "\n\nWhat's your Name : ";
   getline(cin, playerName);
   cout << "\n\nEnter the starting balance to play game : $";
   cin >> balance;
   do{
	system("cls")
	rules();
cout << "\n\n You current balance is $ " << amount << "\n"
do{
	cout << "Hey, " << playerName<<", enter amount to bet : $";
            cin >> bet;
            if(bet > balance)
                cout << "Betting balance can't be more than current balance!\n"
                       <<"\nRe-enter balance\n ";
        }while(bettingAmount > balance);
				do
        {
            cout << "Guess any betting number between 1 & 10 :";
            cin >> guess;
            if(guess <= 0 || guess > 10)
                cout << "\nPlease enter a number that is between 1 and 10!\n"
                    <<"Re-enter number:\n ";
        }while(guess <= 0 || guess > 10);
        dice = rand()%10 + 1;
        if(dice == guess)
        {
            cout << "\n\nWow! You got lucky and won!" << bettingAmount * 10;
            balance = balance + bettingAmount * 10;
        }
        else
        {
            cout << "Sadly, you lost this round."<< bettingAmount <<"\n";
            balance = balance - bettingAmount;
        }
        cout << "\nThe winning number was : " << dice <<"\n";
        cout << "\n"<<playerName<<", You have balance of $ " << balance << "\n";
        if(balance == 0)
        {
            cout << "You lost all your money! You balance is 0.";
            break;
        }
        cout << "\n\n-->Do you want to play again (Y/N)? ";
        cin >> choice;
    }while(choice =='Y'|| choice=='y');
    cout << "\n\n\n";
    cout << "\n\nThanks for playing the game. Your balance is now $ " << balance << "\n\n";
    return 0;
}
void rules()
{
    system("cls");
    cout << "\t\t======CASINO NUMBER GUESSING RULES!======\n";
    cout << "\t1. Choose a number between 1 to 10\n";
    cout << "\t2. Winner gets 10 times of the money bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
}
