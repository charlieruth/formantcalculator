#include <iostream>
#include <cmath>

using namespace std;

double x;
double y;
int z;

int main() {

    char choice; 

    do {
    cout << "\n";    
    cout << "--program to find integer multiples above base frequency--" << "\n\n";
   // cout << "\n";
    cout << " base frequency?" << "\n\n";
    
    cin >> x;
    cout << "\n";
    cout << "how many formants?" << "\n\n";
    
    cin >> z;
    cout << "\n";
    cout << "frequency: " << x << " formants: " << z << "\n\n";
    
    cout << "option: semitones above base frequency? 0 for none: " << "\n\n";
    
    cin >> y;
    cout << "\n";

   for (int i = 1.0; i <= z; ++i) {

    std::cout << (i * (x * pow(2.0, y/12.0))) << "\n";
   }

   /*  cout << (x * pow(2.0, y/12.0)) << "\n"; */
    cout << "\n";
    cout << "another calculation? y for yes, q to quit" << "\n\n";
    
    cin >> choice;
    cout << "\n";

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    } while (choice != 'q' && choice != 'Q' && choice == 'y');
    cout << "\n";
    cout << "--program ended--" << "\n\n";

    return 0;
}