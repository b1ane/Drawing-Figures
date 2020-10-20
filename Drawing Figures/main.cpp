//
//  main.cpp
//  Drawing Figures
//
//  Created by Blane Zewdie on 10/19/20.
//

#include <iostream>
using namespace std;


int main() {
    int enter;
    char letter;
    
    int sLength;
    
    int height;
    int width;
    
    cout << "Hello, welcome to Drawing Figures!" << endl;
    
    do {
        // display menu of option for user to choose from
        cout << "Select a figure from the menu (or quit) " << endl;
        cout << "1 - Square" << endl;
        cout << "2 - Triangle" << endl;
        cout << "3 - Rectangle" << endl;
        cout << "9 - Quit" << endl;
        
        // user enters menu choice
        cin >> enter;
        
        // user chooses SQUARE
        if ( enter == 1) {
            cout << "Enter a character: " << endl;
            // user enters character to be used to draw the figure chosen
            cin >> letter;
            // user enters length of square
            cout << "Enter side length: " << endl;
            cin >> sLength;
            
            
            for (int i = 1; i <= sLength; i++) {
                for (int j = 1; j <= sLength; j++) {
                    cout << letter;
                }
                cout << endl;
            }
            cout << endl;
        }
        
        // user chooses TRIANGLE
        else if ( enter == 2 ) {
            cout << "Enter a character: " << endl;
            cin >> letter;
            cout << "Enter height: " << endl;
            cin >> height;
            
            for (int i = 1; i <= height; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << letter;
                }
                cout << endl;
            }
            cout << endl;
        }
        
        // user chooses RECTANGLE
        else if ( enter == 3) {
            cout << "Enter a character: " << endl;
            cin >> letter;
            cout << "Enter height: " << endl;
            cin >> height;
            cout << "Enter width: " << endl;
            cin >> width;
            
            for (int i = 1; i <= height; i++) {
                for (int j = 1; j <= width; j++) {
                    cout << letter;
                }
                cout << endl;
            }
            cout << endl;
        }
        
        else if ( enter == 9 ) {
            cout << "Bye Bye!";
            cout << endl;
        }
        
        else {
            cout << "Invalid option. Try again." << endl;
            cout << endl;
        }
        
        
    
        // loop executes as long as user does not enter 9
    } while (enter != 9);
    
    cout << endl;
    
    return 0;
}
