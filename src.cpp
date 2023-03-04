#include <iostream>
#include <sstream> //to use stringstream
#include <fstream> //to open the file
#include <string>
using namespace std;


struct ORDER{
	int Time, orderValue, penaltyTime, orderId, preptime;
	string customerType;
};


void Prepare(int orderId, int Time) {
	cout << "TIME: " << Time << ", Order number: " << orderId << " is being prepared.\n";
}


int Shipping(int Time, int preptime){
	return Time + preptime;
}


int main(int argc, char* argv[]) {

	return 0;
}