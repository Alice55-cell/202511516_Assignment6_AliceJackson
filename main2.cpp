#include <iostream>
#include "LibraryBook.h"
#include "Functions.h"
#include "Windows.h"

int main(){
	system("color 30");
	//creating a temporary book to test your code
	LibraryBook myBook(101, "Object-Oriented programming", "Aya");
	
	std::cout <<"====Testing Library System===="<<std::endl;
	
	//Displaying the book details using your class funsction
	myBook.displayBookDetails();
	
	return 0;
}
