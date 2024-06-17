#include <iostream>
#include <string>

using namespace std;

class Link {
public:
  Link(string name, Link* next) {
    this->name = name;
    this->next = next;
  }

  string getName() {
    return name;
  }

  Link* getNext() {
    return next;
  }

private:
  string name;
  Link* next;
};

int main() {
  Link* head = new Link("head", nullptr);
  Link* second = new Link("second", head);
  Link* third = new Link("third", second);

  cout << "The first link is: " << head->getName() << endl;
  cout << "The second link is: " << second->getName() << endl;
  cout << "The third link is: " << third->getName() << endl;

  return 0;
}