#ifndef DVD_H
#define DVD_H

#include <iostream>

class DVD{

    private:
        static int maxEntryLength;
        std::string title;
        int available;
        int rented;
    
    public:
        // constructors
        DVD();
        DVD(DVD& old);
        DVD(std::string title);
        DVD(std::string title, int available);
        DVD(std::string title, int available, int rented);

        // destructor (shell function)
        //~DVD(){}
        
        // mutators
        void setTitle(std::string title);
        void addAvailable(int copies);
        void removeAvailable(int copies);
        void rentCopy();
        void returnCopy();
        void setMax(int max);

        // accessors
        int getMax() const {return maxEntryLength;}
        std::string getTitle() const {return title;}
        int getAvailable() const {return available;}
        int getRented() const {return rented;}

        // overloaded operators
        friend std::ostream& operator<<(std::ostream& os, DVD& dvd);
        bool operator<(DVD& dvd);
        friend bool operator<(std::string title, DVD& dvd);
        bool operator>(DVD& dvd);
        friend bool operator>(std::string title, DVD& dvd);
        bool operator==(DVD& dvd);

};

#endif