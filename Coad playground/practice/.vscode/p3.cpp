#include <iostream>
#include <cstring>
using namespace std;
class Book
{
private:
    char *author;
    char *tital;
    float price;
    int stok_position;
    char *publisher;

public:
    Book(const char *author, const char *tital, const char *publisher, const float price, const int stok_position)
    {
        this->author = new char[strlen(author) + 1];
        strcpy(this->author, author);
        this->tital = new char[strlen(tital) + 1];
        strcpy(this->tital, tital);
        this->publisher = new char[strlen(publisher) + 1];
        strcpy(this->publisher, publisher);
    }
    ~Book()
    {
        delete[] author;
        delete[] tital;
        delete[] publisher;
    }
    // Member function to display book details
    void displayDetails() const
    {
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Stock Position: " << stok_position << endl;
    }
    void sellbooks(int numcopies)
    {
        if (numcopies <= stok_position)
        {
            float totalcost =price*numcopies;
            cout<<"you have to pay the total amount of for this books"<<totalcost<<endl;

        }

     else if (numcopies>=stok_position)
     {
        cout<<"Required copies out of stoke"<<endl;
     }
    
        
    }
    bool serchiteam(const char *searchtile,const char *searchauthor)const {
        return (strcmp(tital, searchtile) == 0 && strcmp(author, searchauthor) == 0);
    }
};


int main()
{
    // Creating a book object with initial details
    Book book1("John Doe", "Sample Book", 19.99, "ABC Publishers", 10);

    // Displaying book details
    std::cout << "Book Details:" << std::endl;
    book1.displayDetails();

    // Searching the inventory
    const char *searchTitle = "Sample Book";
    const char *searchAuthor = "John Doe";
    if (book1.serchiteam(searchTitle, searchAuthor)) {
        std::cout << "\nBook found in the inventory." << std::endl;

        // Handling book sale
        int numCopiesToBuy = 5;
        book1.sellBook(numCopiesToBuy);
    } else {
        std::cout << "\nBook not found in the inventory." << std::endl;
    }

    return 0;
}