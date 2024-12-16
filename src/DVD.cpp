#include "DVD.h"
#include <string>

// static member initialization
int DVD::maxEntryLength = 0;

// constructors
DVD::DVD(){
    this->title = "";
    this->available = 0;
    this->rented = 0;
}

DVD::DVD(DVD &old){
    this->title = old.title;
    this->available = old.available;
    this->rented = old.rented;
}

DVD::DVD(std::string title){
    this->title = title;
    this->available = 0;
    this->rented = 0;
}

DVD::DVD(std::string title, int available){
    this->title = title;
    this->available = available;
    this->rented = 0;
}

DVD::DVD(std::string title, int available, int rented){
    this->title = title;
    this->available = available;
    this->rented = rented;
    if((int)title.size() > maxEntryLength) this->maxEntryLength = (int)title.size();
}

// mutators
void DVD::setTitle(std::string title){
    this->title = title;
    if((int)title.size() > maxEntryLength) this->maxEntryLength = (int)title.size();
}

void DVD::addAvailable(int copies){
    this->available += copies;
}

void DVD::removeAvailable(int copies){
    this->available -= copies;
    if(available < 0) this->available = 0;
}

void DVD::rentCopy(){
    if(available > 0){
        available--;
        rented++;
    }
}

void DVD::returnCopy(){
    if(rented > 0){
        rented--;
        available++;
    }
}

void DVD::setMax(int max){
    this->maxEntryLength = max;
}

// overloaded operators
std::ostream& operator<<(std::ostream& os, DVD& dvd){
    std::string output = "";
    output += dvd.title;
    while((int)output.size() < dvd.getMax() + 1){
        output += " ";
    }
    output += std::to_string(dvd.getAvailable());
    output += "  ";
    output += std::to_string(dvd.getRented());
    os << output;
    return os;
}

bool operator<(std::string title, DVD &dvd){
    if(title < dvd.title) return true;
    return false;
}

bool operator>(std::string title, DVD &dvd){
    if(title > dvd.title) return true;
    return false;
}

bool DVD::operator<(DVD& dvd){
    if(this->getTitle() < dvd.getTitle()) return true;
    return false;
}

bool DVD::operator>(DVD& dvd){
    if(this->getTitle() > dvd.getTitle()) return true;
    return false;
}

bool DVD::operator==(DVD &dvd){
    if(this->title == dvd.title) return true;
    return false;
}
