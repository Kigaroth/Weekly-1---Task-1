// Weekly 1 - Task 1.cpp: //

#include <iostream>
#include <string>


std::string full_name = "";
std::string Initial ="";
std::string date_of_birth = "";
std::string age = "";
std::string phone_number = "";

int main() {
	std::cout << " Hello!\n\n";
	
	//Full name//
	std::cout << " Please enter your full name: ";
	std::getline(std::cin, full_name);
	std::cout << " Thank you. \n\n";

	//Initial letter//
	std::cout << " Please enter the initial of your name: ";
	std::getline(std::cin, Initial);
	std::cout << " Thank you. \n\n";

	//Age//
	std::cout << " Please enter your age: ";
	std::getline(std::cin, age);
	std::cout << " Thank you. \n\n";

	//Phone number//
	std::cout << " Please enter your phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << " Thank you. \n\n";
	
	//Date of birth//
	std::cout << " Please enter your date of birth (example 26/10/1985): ";
	std::getline(std::cin, date_of_birth);
	std::cout << " Thank you. \n\n";
	
	//Final info//
	system("cls");
	std::cout << " Here is the information you have submitted: \n\n" "\t Name| " << full_name;
	std::cout << "\n\t Initial| " << Initial;
	std::cout << "\n\t Age| " << age;
	std::cout << "\n\t Phone number| " << phone_number;
	std::cout << "\n\t Birthday| " << date_of_birth;
}
