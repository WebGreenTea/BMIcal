#include <iostream>
using namespace std;

int main()
{
	float weight,heightCM,heightM,BMI;
	cout << "Enter your weight : ";
	cin >> weight;
	cout << "Enter your height : ";
	cin >> heightCM;
	heightM = heightCM/100;
	BMI = weight/(heightM*heightM);
	cout << "Your BMI is "<< BMI <<endl;
	cout << "================================\n";
	if (BMI <= 18.50){
		cout << "\tYou thin\n";
		cout <<"\tYou are slimmer than normal\n";
	}
	else if (BMI > 18.50 && BMI < 23 ){
		cout << "\tYou normal\n";
		cout << "\tYou as usual\n";
	}
	else if (BMI >= 23 && BMI < 25){
		cout << "\tYou fat level 1\n";
		cout << "\tDanger level 1\n";
	}
	else if (BMI >= 25 && BMI < 29){
		cout << "\tYou fat level 2\n";
		cout << "\tDanger level 2\n";
	}
	else{
		cout <<"\tYou fat level 3\n";
		cout <<"\tDanger level 3\n";
	}
	return(0);
}