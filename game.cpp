#include <iostream>
#include <string> 
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
   int amount;
   int bet;
   int guess;
   int dice; 
   char choice;
   srand(time(0)); 
   cout << "\n\t\t========Welcome to Dhruv's Tech Support Casino=======\n\n";
   cout << "\n\nEnter the starting balance to play game : $";
   cin >> amount;
   do{
	
cout << "\n\n You current balance is $ " << amount << "\n";
do{
	cout << "Hey, enter amount to bet : $";
            cin >> bet;
            if(bet > amount)
                cout << "Betting balance can't be more than current balance!\n"
                       <<"\nRe-enter balance\n ";
        }while(bet > amount);
				do
        {
            cout << "Guess any betting number between 1 & 5 :";
            cin >> guess;
            if(guess <= 0 || guess > 5)
                cout << "\nPlease enter a number that is between 1 and 10!\n"
                    <<"Re-enter number:\n ";
        }while(guess <= 0 || guess > 5);
        dice = rand()%5 + 1;
        if(dice == guess)
        {
            cout << "\n\nWow! You got lucky and won!" << bet * 10;
            amount = amount + bet * 10;
        }
        else
        {
            cout << "Sadly, you lost this round."<< bet <<"\n";
            amount = amount - bet;
        }
        cout << "\nThe winning number was : " << dice <<"\n";
        cout << "\nYou have balance of $" << amount << "\n";
        if(amount == 0)
        {
            cout << "Imagine going bankrupt LOL. You lost all your money! You balance is 0.";
            break;
        }
        cout << "\n\n-->Do you want to play again (Y/N)? ";
        cin >> choice;
    }while(choice =='Y'|| choice=='y');
	
    cout << "\n\n\n";
    cout << "\n\nThanks for playing the game. Your balance is now $ " << amount << "\n\n";
    return 0;
}
