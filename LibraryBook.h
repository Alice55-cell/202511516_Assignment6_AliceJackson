#ifndef LIBRARYBOOK_H
#define LIBRARYBOOK_H
#include <iostream>
#include <string>

class LibraryBook{
	private:
		int bookID;
		std::string title;
	    std::string author;
	    std::string borrowerName;
	    int daysBorrowed;
	    bool isBorrowed;
	    
	    public:
	    	//contructor and destructor
	    	LibraryBook();
	    	~LibraryBook();
	    	LibraryBook(int ID, std::string title, std::string author);
	    
	    	
	    	//Getters
	    	int getBookID() const;
	    	std::string getTitle() const;
	    	std::string getAuthor() const;
	    	int getDaysBorrowedName() const;
	    	bool getBorrowStatus() const;
	    	
	    	//setters
	    	void setBookID(int ID);
	    	void setTitle(std::string title);
	    	void setAuthor(std::string auther);
	    	void setBorrowerName(std::string name);
	    	void setDaysBorrowed(int days);
	    	void setBorrowStatus(bool status);
	    	
	    	//core Business Logic methods
	    	void borrowBook(std::string borrower, int days);
	    	void returnBook();
	    	bool isOverdue() const;
	    	double calculateFine() const;
	    	void displayBookDetails() const;	    	
};

#endif
