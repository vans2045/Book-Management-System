#include"book.h"


// Constructor
Book::Book() {
	bookId = 0;
	bookTitle = "NA";
	authorName = "NA";
	price = 0.0f;
	quantity = 0;
	TotalValue = 0.0f;
}
Book::Book(int bookId, string bookTitle, string authorName, float price, int quantity) {
	this->bookId = bookId;
	this->bookTitle = bookTitle;
	this->authorName = authorName;
	this->price = price;
	this->quantity = quantity;
	this->TotalValue = 0.0f; 
}

//accept function
void Book::acceptBook() {
	cout << "Enter Book ID : " << endl;
	cin >> bookId;
	cout << "Enter Book Title : " << endl;
	cin.ignore();
	getline(cin, bookTitle);
	cout << "Enter Book Author : " << endl;
	getline(cin, authorName);
	cout << "price : " << endl;
	cin >> price;
	cout << "Quantity :" << endl;
	cin >> quantity;
}



// Display Function
void Book::display()
{
	cout << "Following are the book details : " << endl;
	cout << "BookId : " << bookId << endl;
	cout << "booktitle : " << bookTitle << endl;
	cout << "author Name : " << authorName << endl;
	cout << "price : " << price << endl;
	cout << "quantity : " << quantity << endl;
}

//Getter functions
int Book::getbookId()
{
	return bookId;
}
string Book::getTitle()
{
	return bookTitle;
}
string Book::getAuthor()
{
	return authorName;
}
float Book::getPrice()
{
	return price;
}

int Book::getQuantity() {
	return quantity;
}



//setter functions 
int Book::setBookId(int bookId) {
	this->bookId = bookId;
	return this->bookId;
}
string Book::setTitle(string bookTitle) {
	this->bookTitle = bookTitle;
	return this->bookTitle;
}
string Book::setAuthor(string authorName)
{
	this->authorName = authorName;
	return this->authorName;
}
float Book::setPrice(float price)
{
	this->price = price;
	return this->price;
}
int Book::setQuantity(int quantity)
{
	this->quantity = quantity;
	return this->quantity;
}


//Extra Function
float Book::calculateTotalValue() {
	TotalValue = price * quantity;
	return TotalValue;
}
