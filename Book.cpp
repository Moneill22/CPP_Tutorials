#include<iostream>

using namespace std;

class Book{

	private:
		string title;
		string author;
		int pages;

	public:
		Book(string title, string author, int pages){
			this->title = title;
			this->author = author;
			this->pages = pages;
		}

		string getTitle(){
			return title;
		}
		string getAuthor(){
			return author;
		}
		int getPageCount(){
			return pages;
		}
		void setAuthor(string newAuthor){
			author = newAuthor;
		}
};


int main(){

	Book prideAndPrejudice = Book("Pride and Prejudice","Jane Aestin",365);
	cout << prideAndPrejudice.getAuthor() << "\n";
	prideAndPrejudice.setAuthor("Jane Austin");
	cout << prideAndPrejudice.getAuthor();

	return 0;
}