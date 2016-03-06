#include "node.h"

using std::string;

Node::~Node() {
    for (NodeList::iterator it = _nodes.begin(); it != _nodes.end(); it++) {
        delete *it;
    }
    _nodes.clear();
}

Node* Node::GetNode() const {
    return nullptr;
}

string Node::GetName() const {
    return _name;
}

void Node::SetName(string name) {
    _name = name;
}

void Node::Add(Node* node) {
    _nodes.push_back(node);
}

NodeList::const_iterator Node::Begin() const {
    return _nodes.begin();
}

NodeList::const_iterator Node::End() const {
    return _nodes.end();
}

void Node::Accept(const Scanner& scanner) { }

void Directory::Accept(const Scanner& scanner) {
    scanner.VisitDirectory(this);
}

void File::Accept(const Scanner& scanner) {
    scanner.VisitFile(this);
}
