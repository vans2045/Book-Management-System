#pragma once
#include<iostream>
using namespace std;

class Book
{
private:
	int bookId;
	string bookTitle;
	string authorName;
	float price = 0;
	int quantity;
	float TotalValue = 0.0;

public:
	Book();
	Book(int bookId, string bookTitle, string authorName, float price, int quantity);
	void acceptBook();
	void display();

	//getter functions
	int getbookId();
	string getTitle();
	string getAuthor();
	float getPrice();
	int getQuantity();

	//setter functions
	int setBookId(int id);
	string setTitle(string title);
	string setAuthor(string author);
	float setPrice(float price);
	int setQuantity(int qty);


	//Additional functions
	float calculateTotalValue();

};
