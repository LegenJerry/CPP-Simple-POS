/*
 
    Serendipity Booksellers
    mainmenu.cpp
    Simple POS - Main Menu

    Created by Jerry Coe on 10/7/17.
    Copyright © 2017 Jerry Coe. All rights reserved.

*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void centerHeading(string s1,string s2){
    
    int diff, cl;
    string tabbing = "\t\t\t\t";
    
    diff = (int) (s1.length() - s2.length());

    if( diff > 1 ){
        
        cl = (int) ( ( s1.length()-s2.length() ) / 2 + s2.length() );
        cout
            << tabbing
            << s1
            << endl;
        cout
            << tabbing
            << setw(cl)
            << s2
            << endl;
        
    }
    else
    {
        cl = (int) ( ( s2.length()-s1.length() ) / 2 + s1.length() );
        
        cout
            << tabbing
            << setw(cl)
            << s1
            << endl;
        cout
            << tabbing
            << s2
            << endl;
    }

}

int main() {

    const string TITLE = "Serendipity Booksellers";
    string module = "Main Menu";
    
    centerHeading(TITLE, module);
    
    return 0;
}
