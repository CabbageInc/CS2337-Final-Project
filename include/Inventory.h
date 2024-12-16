#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include "BinTree.h"
#include "DVD.h"
#include <vector>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

class Inventory{
    private:
        BinTree<DVD> bst;

        // private helper functions
        void buildBST();
        DVD* loadInventory(string line);
        vector<string> tokenizeInventory(string line);
        vector<string> tokenizeTransactions(string line);
        void addCopies(int number, DVD* item);
        void addDVD(string title, int copies);
        void removeCopies(int number, DVD* item);
        void rent(DVD* item);
        void returnCopies(DVD* item);
        string removeParenthesis(string token);
        
    public:
        // public operation functions
        Inventory();
        void processTransactions();
        void report();
};

#endif