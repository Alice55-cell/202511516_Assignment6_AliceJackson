#include <iostream>
#include "LibraryBook.h"
#include "Functions.h"
#include "Windows.h"

int main(){
	char choice;
	system("color 30");
	//creating a temporary book to test your code
	LibraryBook(101, "Object-Oriented programming", "Aya");
	LibraryBook(102, "Data Structures", "Alice");
	LibraryBook(103, "Algorithm", "William");
	
	do{
		int i;
	
		//Displaying the book details using your class funsction
	std::cout <<"=======LIBRARY MANEGEMENT SYSTEM=====" <<std::endl;
	std::cout <<"1. Display All Books\n";
	std::cout <<"2. Return a Book Menu\n";
	std::cout <<"3. Calculat Total Fines\n";
	std::cout <<"4. Exit\n";
	std::cout <<"Enter your choice from 1-4:";
	std::cin >>choice;
	
	//Switch case system
	switch (choice){
		case 1:
			std::cout <<"\n---Displaying all books---";
			break;
			case 2:
				std::cout<<"Return a book Menu\n";
				break;
				case 3:
					std::cout<<"calculate Total Fines\n";
					
		
					break;
					case 4:
						std::cout <<"Exiting system.Goodbye!\n";
						break;
						default:
							std::cout <<"Invalid choice! please run again and select 1-4\n";
							break;
							
							
						
			
	
}
}
	while(choice != 4);
	
	return 0;
}
