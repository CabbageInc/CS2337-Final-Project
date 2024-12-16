#include "Inventory.h"

Inventory::Inventory(){
    buildBST();
}

void Inventory::buildBST(){
    string filename;
    string line;

    filename = "../data/examples/sample_inventory.dat";
    //filename = "../data/inventory.dat";
    //cout << "Enter inventory filename: " << endl;
    //cin >> filename;
    ifstream fhand(filename);

    while(getline(fhand, line)){
        if(line == "") continue;
        DVD* newDVD = loadInventory(line);
        bst.insert(newDVD);
    }

}

void Inventory::processTransactions(){
    string filename;
    vector<string> tokens;
    string line;

    filename = "../data/examples/sample_transaction.log";
    //filename = "../data/transaction.log";
    //cout << "Enter inventory filename: " << endl;
    //cin >> filename;
    ifstream fhand(filename);

    while(getline(fhand, line)){
        if(line == "") continue;
        
        tokens = tokenizeTransactions(line);

        DVD target(tokens[1]);
        DVD* item = bst.search(target);

        if(tokens[0] == "add"){
            if(item) addCopies(stoi(tokens[2]), item);
            else addDVD(tokens[1], stoi(tokens[2]));
        }

        else if(tokens[0] == "remove"){
            if(item) removeCopies(stoi(tokens[2]), item);
        }

        else if(tokens[0] == "rent"){
            if(item) rent(item);
        }

        else if(tokens[0] == "return"){
            if(item) returnCopies(item);
        }
        
    }
}

void Inventory::report(){
    bst.display();
}

DVD* Inventory::loadInventory(string line){
    vector<string> tokens;
    tokens = tokenizeInventory(line);
    DVD* newDVD = new DVD(tokens[0], stoi(tokens[1]), stoi(tokens[2]));
    return newDVD;
}

vector<string> Inventory::tokenizeInventory(string line){
    vector<string> tokens;
    string token;
    istringstream linestream(line);

    while(std::getline(linestream, token, ',')){
        token = removeParenthesis(token);
        tokens.push_back(token);
    }

    getline(linestream, token);
    tokens.push_back(token);

    return tokens;
}

vector<string> Inventory::tokenizeTransactions(string line){
    vector<string> tokens;
    string token;
    istringstream linestream(line);

    std::getline(linestream, token, ' ');
    tokens.push_back(token);

    if(line.find(',') != string::npos){
        std::getline(linestream, token, ',');
        token = removeParenthesis(token);
        tokens.push_back(token);
    }

    getline(linestream, token);
    token = removeParenthesis(token);
    tokens.push_back(token);

    return tokens;
}

void Inventory::addCopies(int number, DVD * item){
    item->addAvailable(number);
}

void Inventory::addDVD(string title, int copies){
    DVD* newDVD = new DVD(title, copies);
    bst.insert(newDVD);
}

void Inventory::removeCopies(int number, DVD * item){
    item->removeAvailable(number);
    // remove if zero
    if(item->getAvailable() == 0 && item->getRented() == 0){
        bst.removeNode(item);
    }
}

void Inventory::rent(DVD * item){
    item->rentCopy();
}

void Inventory::returnCopies(DVD * item){
    item->returnCopy();
}

string Inventory::removeParenthesis(string token){
    
    for(int i = 0; i<(int)token.size(); i++){
        if(token[i] == '"'){
            token.erase(i, i+1);
        }
    }
    
    return token;
}