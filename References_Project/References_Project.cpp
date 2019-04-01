// Swap
// Demonstrates passing references to alter argument variables

#include <iostream>

using namespace std;


//This is your function prototypes. You declare a function without implementing it yet.
void normalTransaction(int x, int y);
void hackedTransaction(int& x, int& y);

//When creating these functions, you have to make sure that their parameters match!

int main()
{
	//These few lines are good. Totally fine!
	int myScore = 150;
	int yourScore = 1000;
	cout << "Original values\n";
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n\n";

	//These lines are good as well
	cout << "Calling hackedTransaction()\n";
	hackedTransaction(myScore, yourScore);
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n\n";

	//And so is this
	cout << "Calling normalTransaction()\n";
	normalTransaction(myScore, yourScore);
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n";
	
	system("pause"); //This is what stops your program from exiting out.
	//You are aware of this, but I also want to show you something too.
												       
	return 0;										       			
}    												       	
												       	
												       																       
//Remember when I said to make sure that your functions are the same when having them prototypes...    
//This is where your problem is...								   
//void hackedTransaction(int x, int y) 
//{
	//int temp = x;
	//x = y;
	//y = temp;
//}
//Your function actually should of been...
void hackedTransaction(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

//The same goes for this function here
//void normalTransaction(int& x, int& y)
//{
	//int temp = x;
	//x = y;
	//y = temp;
//}
//This function should of been
void normalTransaction(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

//When making prototype functions, make sure you check that their name is the same, as well as their parameters.
//Otherwise, you're program will get an error.
