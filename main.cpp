#include"book.h"

int main() {
	Book b1(1, "ABC", "CC", 11, 1);
	b1.acceptBook();
	b1.getPrice();
	b1.calculateTotalValue();
	cout << "Book Details : " << endl;
	b1.display();
	return 0;
}
