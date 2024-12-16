#include "Inventory.h"

using namespace std;

int main(){

    // declare inventory
    Inventory inventory;

    // iterate through transactions file
    inventory.processTransactions();

    // print the final state of the bst
    inventory.report();

    return 0;
}