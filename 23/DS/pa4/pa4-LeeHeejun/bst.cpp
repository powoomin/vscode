#include <cstdlib>
#include <iostream>
#include <queue>
#include <string>
#include "bst.h"

using namespace std ;

typedef int Key ;
typedef char * Value ;


Node::Node (Key k, Value v) 
{
	this->k = k ;
	this->v = v ;
	this->parent = NULL ;
	this->left = NULL ;
	this->right = NULL ;
}

bool Node::addLeft (Node * n) 
{
	if (this->left != NULL)
		return false ;

	n->parent = this ;
	this->left = n ;
	return true ;
}

bool Node::addRight (Node * n) 
{
	if (this->right != NULL)
		return false ;

	n->parent = this ;
	this->right = n ;
	return true ;
}

bool Node::isInternal () 
{	
	if (this->left != NULL && this->right != NULL)
		return true ;
	return false;
}

void Node::print (int indent)
{
	if (this->left == NULL && this->right == NULL)
		return ;

	int i ;
	for (i = 0 ; i < indent ; i++) 
		cout << "    " ; 
	cout << "(" << this->k << ", " << this->v << ") {" << endl ;

	this->left->print(indent + 1) ;
	this->right->print(indent + 1) ;

	for (i = 0 ; i < indent ; i++) 
		cout << "    " ;
	cout << "}" << endl ;
}

BST::~BST () 
{
	queue<Node *> nodes ;

	nodes.push(this->root) ;

	while (nodes.size() > 0) {
		Node * n = nodes.front() ;
		nodes.pop() ;

		if (n->left)
			nodes.push(n->left) ;
		if (n->right)
			nodes.push(n->right) ;

		delete n ;
	}
}

Value BST::find (Key k) 
{
	Node * i = this->root ;

	while (i->isInternal()) {
		if (i->k == k) {
			return i->v ;
			
		}
		if (k < i->k) {
			i = i->left ;
		}
		else {
			i = i->right ;
		}
	}
	return NULL ;
}

bool BST::erase(Key k)
{
    Node* cur = this->root;
    Node* parent = NULL;

    while (cur->isInternal()) {
        if (cur->k == k) {
            break;
        }
        parent = cur;
        if (k < cur->k) {
            cur = cur->left;
        } else {
            cur = cur->right;
        }
    }

    if (!cur->isInternal() || cur->k != k) {
        return false;
    }

    if (!cur->left->isInternal() && !cur->right->isInternal()) {
        delete cur;
    }

    else if (!cur->left->isInternal() || !cur->right->isInternal()) {
        Node* child = NULL;
        if (cur->left->isInternal()) {
            child = cur->left;
        } else {
            child = cur->right;
        }
		
        if (parent != NULL) {
            if (parent->left == cur) {
                parent->left = child;
            } else {
                parent->right = child;
            }
        }
        delete cur;
    }
    else {
        Node* change = cur->right;
        parent = cur;
        while (change->left->isInternal()) {
            parent = change;
            change = change->left;
        }
        cur->k = change->k;
        cur->v = change->v;
        if (parent->left == change) {
            parent->left = change->right;
        } else {
            parent->right = change->right;
        }
        delete change;
    }

    this->nNodes--;

    return true;
}


bool BST::insert (Key k, const Value v)
{
	if (this->root == NULL) {
		this->root = new Node(k, v) ;
		this->root->addLeft(new Node()) ;
		this->root->addRight(new Node()) ;
		this->nNodes = 3 ;
	}
	else {
		Node * i = this->root ;

		while (i->isInternal()) {
			if (i->k == k)
				return false ;
			if (k < i->k) 
				i = i->left ;
			else 
				i = i->right ;
		}

		i->k = k ;
		i->v = v ;
		i->addLeft(new Node()) ;
		i->addRight(new Node()) ;
		this->nNodes += 2 ;
	}

	this->nNodes++ ;

	return true ;
}

void BST::print ()
{
	if (this->root != NULL) 
		this->root->print(0) ;
}
