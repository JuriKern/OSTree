#pragma once

#include <list>
#include <string>
#include "scanner.h"

class Node;

typedef std::list<Node* > NodeList;

class Node {
public:
    ~Node();
    virtual void Add(Node*);
    virtual Node* GetNode() const;
    
    NodeList::const_iterator Begin() const;
    NodeList::const_iterator End() const;
    
    std::string GetName() const;
    void SetName(std::string);
    
    virtual void Accept(const Scanner&);
private:
    std::string _name;
    NodeList _nodes;
};

class Directory final : public Node {
public:
    void Accept(const Scanner&);
};

class File final : public Node {
public:
    void Accept(const Scanner&);
};