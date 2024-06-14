#include <string>
using namespace std;
#include <iostream>

class Node {
public:
	string info;
	Node *leftchild;
	Node* rightchild;

	Node(string i, Node* l, Node* r) {
		info = i;
		leftchild = l;

	}
};
