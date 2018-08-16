#include <iostream>
int main() {
	// Declaring an int as my age.
	int age = 19;
	std::cout << "I am " << age << " years old." << std::endl;
	std::cout << "I am going to be " << age + 1 << " years old next year!" << std::endl;
	std::cout << "Whats your age?" << std::endl;
	std::cin >> age;
	std::cout << "Wow! you're " << age << " years old!" << std::endl;



	system("pause");
	return 0;
}