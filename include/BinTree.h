#ifndef BINTREE_H
#define BINTREE_H

#include <iostream>
#include "Node.h"

template<typename T>
class BinTree{

    private:
        Node<T>* root;

        // private recursive methods

        // recursive search method, accepts T parameter and node parameter
        T* searchRecursive(T key, Node<T>* cur){
            if(cur){
                if(*(cur->data) == key) return cur->data;
                else if(key < *(cur->data)) return searchRecursive(key, cur->left);
                else return searchRecursive(key, cur->right);
            }else{
                return nullptr;
            }
        }

        // private helper search for remove method
        Node<T>* searchNode(T key, Node<T>* cur){
            if(cur){
                if(*(cur->data) == key) return cur;
                else if(key < *(cur->data)) return searchNode(key, cur->left);
                else return searchNode(key, cur->right);
            }else{
                return nullptr;
            }
        }

        // private parent node finder, helper for remove method
        Node<T>* getParent(Node<T>* subtreeRoot, Node<T>* node){
            if(!subtreeRoot) return nullptr;
            if(subtreeRoot->left == node || subtreeRoot->right == node) return subtreeRoot;
            if(*(node->data) < *(subtreeRoot->data)) return getParent(subtreeRoot->left, node);
            return getParent(subtreeRoot->right, node);
        }

        // main, private, recursive remove method
        bool removeNodeRecursive(Node<T>* parent, Node<T>* node){
            if(node == nullptr) return false;

            // internal node w/ two children
            if(node->left != nullptr && node->right != nullptr){
                // find successor/parent
                Node<T>* suc = node->right;
                Node<T>* sucParent = node;
                while(suc->left != nullptr){
                    sucParent = suc;
                    suc = suc->left;
                }

                // copy value from suc node
                delete node->data;
                node->data = new T(*(suc->data));

                // recursively remove suc
                removeNodeRecursive(sucParent, suc); 
            }

            // case 2, root node
            else if(node == root){
                if(node->left != nullptr) root = node->left;
                else root = node->right;
                delete node;
            }

            // case 3, internal node w/ left child
            else if(node->left != nullptr){
                // replace node w/ left child
                if(parent->left == node) parent->left = node->left;
                else parent->right = node->left;
                delete node;
            }

            // case 4, internal node w/ right child or leaf
            else{
                // replace node w/ right child or leaf
                if(parent->left == node) parent->left = node->right;
                else parent->right = node->right;
                delete node;
            }

            return true;
        }

        // main recursive display function
        int displayRecursive(Node<T>* node){
            if(node == nullptr) return 0;
            if(node->left) displayRecursive(node->left);
            std::cout << (*node) << std::endl;
            if(node->right) displayRecursive(node->right);
            return 0;
        }

        // main recursive insert function, accepts T* parameter and Node<T> parameter
        void insertRecursive(T* item, Node<T>* cur){
            if ((*item) < *(cur->data)){
                if (cur->left) insertRecursive(item, cur->left);
                else{
                    cur->left = new Node<T>(item);
                }
            }else{
                if (cur->right) insertRecursive(item, cur->right);
                else{
                    cur->right = new Node<T>(item);
                }
            }
        }

        // private helper to destructor, deletes data through a post order traversal
        void destroy(Node<T>* node){
            if(node->left) destroy(node->left);
            if(node->right) destroy(node->right);
            delete node;
        }
    
    public:
        // default constructor
        BinTree(){this->root = nullptr;}

        // destructor
        ~BinTree(){
            if(root) destroy(root);
        }
        
        // insert method
        void insert(T* item){
            if (!root) root = new Node<T>(item);
            else{
                insertRecursive(item, root);
            }
        }

        // search by key, driver for search Recursive
        T* search(T key){
            return searchRecursive(key, root);
        }

        // base delete method
        void removeNode(T* item){
            Node<T>* node = searchNode((*item), root);
            Node<T>* parent = getParent(root, node);
            removeNodeRecursive(parent, node);
        }
        
        // display driver
        void display(){
            displayRecursive(root);
        }

};

#endif