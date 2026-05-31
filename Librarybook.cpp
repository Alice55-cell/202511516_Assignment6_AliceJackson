#include "LibraryBook.h"
#include <iostream>
#include <iomanip>
	
//Default constructor
    LibraryBook::LibraryBook(){
	bookID = 0;
	title = "";
	author = "";
	borrowerName = "";
	daysBorrowed = 0;
	isBorrowed = false;
}
//Parameterized Constructor
LibraryBook::LibraryBook(int id, std::string t, std::string auth){
	bookID = id;
	title = t;
	author = auth;
	borrowerName = "";
	daysBorrowed = 0;
	isBorrowed = false;
}
//Destructor with required message
LibraryBook::~LibraryBook(){
	if(bookID != 0){
		std::cout <<"[Destructor]: Book ID" <<bookID << " (\"" <<title <<"\") object destroyed.\n";
	}
	}
	//Getters
	int LibraryBook::getBookID() const { return bookID;}
	std::string LibraryBook::getTitle() const {return title;}
		std::string LibraryBook::getAuthor() const {return author;}
			bool LibraryBook::getBorrowStatus() const {return isBorrowed;}
			
			//Setters
			void LibraryBook::setBookID(int id) { bookID = id; }
				void LibraryBook::setTitle(std::string t) { title =  t; }
					void LibraryBook::setAuthor(std::string auth) { author = auth; }
						void LibraryBook::setBorrowerName(std::string name) { borrowerName = name; }
							void LibraryBook::setDaysBorrowed(int days) { daysBorrowed = days; }
								void LibraryBook::setBorrowStatus(bool status) { isBorrowed = status; }
								
								//Borrow Transaction
								void LibraryBook::borrowBook(std::string borrower, int days){
									borrowerName = borrower;
									daysBorrowed = days;
									isBorrowed = true;
									
								}
								//Return Transaction
								void LibraryBook::returnBook(){
									borrowerName = "";
									daysBorrowed = 0;
									isBorrowed = false;
								}
								//check if book is overdue (limit: 7 days)
								bool LibraryBook::isOverdue() const {
								return (isBorrowed && daysBorrowed > 7);
							}
							//calculate fines (500 RWF per overdue day)
							double LibraryBook::calculateFine() const {
								if(isOverdue()){
									return (daysBorrowed - 7) * 500.0;
								}
								return 0.0;
							}
							//print formatted details of a single book
							void LibraryBook::displayBookDetails() const {
								std::cout << std::left << std::setw(8) << bookID;
								std::cout << std::setw(25) << title;
								std::cout << std::setw(20) << author;
						        std::cout << std::setw(15) << (isBorrowed ? "Borrowed": "Available");
					         	std::cout << std::setw(18) << (isBorrowed ? borrowerName : "-");
					         	std::cout << std::setw(10) << calculateFine() <<"\n";
					
						
						}
						
					
