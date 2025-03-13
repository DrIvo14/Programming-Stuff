#include <bits/stdc++.h>
#include <thread>
#include <chrono>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(0));
    this_thread::sleep_for(chrono::seconds(2));
    system("Color 05");
    cout << "Welcome to the Luck Game!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Now Guess a Number Between 1 and 5: ";
    int n;
    cin >> n;
    int real = rand() % 5;
    if(n == real){
        cout << "Congrats! U earned 10 Billion Dollars.";
    }
    else{
        this_thread::sleep_for(chrono::seconds(2));
        system("cls");
        system("mkdir LOSER");
        system("Color 04");
        cout << "Dumbass." << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "I Dare You Look at Your Desktop.";
        this_thread::sleep_for(chrono::seconds(2));

    }
}
