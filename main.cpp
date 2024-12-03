/*
* Name: Nate O'Brien
* Date: 12/3/24
* Program Name: Math Lab
*/

#include <iostream>
#include <cmath>

using namespace std;
int main(){
    // prints first problem
    cout << "\n#1. Pranav has a collection of 44 books he needs to put away. He has shelves to put them in, but they only hold three books per shelf, and he wants to know how many books will be in the last shelf." << endl << "Enter the number of books he has: ";
    //prints the remainder for the last shelf using fmod
    cout << "There will be " << fmod(44, 3) << " books on the last shelf.";

    //prints second problem
    cout << "\n\n#2. Bryce is running late to practice, and decides to cut through a field instead of staying on the path. The usual path has him going 100 feet up and 50 feet to the right. \nIf he runs at a speed of 10 feet per second, how long will it take to run his shortcut?" << endl;
    //prints out len of hypot, and divides by 10 to get the time it takes to cross the field.
    cout << "It will take " << hypot(100, 50)/10 << " seconds." << endl;

    //prints last problem
    cout << "\n\n#3. Jake had a really good baseball game, and wants to post his stats online. He hit three home runs, at 185.6, 200.2, and 192.6 feet respectively. \nRounded up to the nearest whole number, what is the average length of his home run?" << endl;
    //gets the average, and rounds up before printing
    cout << "On average, Jake's homeruns were " << ceil((185.6 + 200.2 + 192.6)/3) << " feet." << endl;
    
    return 0;
}