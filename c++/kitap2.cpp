#include <iostream>
#include <string>
using namespace std;

class Publication {
protected:
    string title;
    float price;
public:
    void getData() {
        cout << "Enter title: "<<endl;
        cin>>title;
        cout << "Enter price: ";
        cin >> price;
    }
    void putData() const {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Book : public Publication {
private:
    int pageCount;
public:
    void getData() {
        Publication::getData();
        cout << "Enter page count: ";
        cin >> pageCount;
    }
    void putData() const {
        Publication::putData();
        cout << "Page count: " << pageCount << endl;
    }
};

class Tape : public Publication {
private:
    float playTime;
public:
    void getData() {
        Publication::getData();
        cout << "Enter play time: ";
        cin >> playTime;
    }
    void putData() const {
        Publication::putData();
        cout << "Play time: " << playTime << endl;
    }
};
int main() {
    Book book;
    Tape tape;

    cout << "Enter data for a book" << endl;
    book.getData();
    cout << "\nEnter data for a tape" << endl;
    tape.getData();

    cout << "\nData for book:" << endl;
    book.putData();
    cout << "\nData for tape:" << endl;
    tape.putData();

    return 0;
}

