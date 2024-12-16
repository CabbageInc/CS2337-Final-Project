#ifndef NODE_H
#define NODE_H

#include <iostream>

template<typename T>
class Node{

    private:
        Node* left;
        Node* right;
        T* data;
    public:
        // constructors
        Node(){this->left = nullptr; this->right = nullptr; this->data = nullptr;}
        Node(T* data){this->left = nullptr; this->right = nullptr; this->data = data;}

        // destructor
        ~Node(){
            delete this->data;
        }

        // overloaded operators
        friend std::ostream& operator<<(std::ostream& os, Node& node){
            os << *(node.data);
            return os;
        }

        // friend class declaration
        template<typename t>
        friend class BinTree;

};

#endif