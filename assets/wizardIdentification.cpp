/*==========================================================
Wizard Identification using Classes
April Scales
< 03/29 /2022 >
 ==========================================================
*/
#include <iostream>
using namespace std;

class Wizard {
public:
int wizardAge;
string wizardFirstName;
string wizardLastName;
int wizard_ID;
void set_wizardAge(int age){
    wizardAge = age;
}
void set_wizardFirstName(string FirstName){
    wizardFirstName=FirstName;
}
void set_wizardLastName(string LastName){
    wizardLastName=LastName;
}
void set_wizard_ID(int ID){
    wizard_ID = ID;
}
int get_wizardAge(){
    return wizardAge;
}
string get_wizardFirstName(){
    return wizardFirstName;
}
string get_wizardLastName(){
    return wizardLastName;
}
int get_wizard_ID(){
return wizard_ID;
}
};
int main() {

    int wizardAge, wizard_ID;
    string wizardFirstName, wizardLastName;
    cin >> wizardAge >> wizardFirstName >> wizardLastName >> wizard_ID;
    Wizard wiz;
    wiz.set_wizardAge(wizardAge);
    wiz.set_wizard_ID(wizard_ID);
wiz.set_wizardFirstName(wizardFirstName);
    wiz.set_wizardLastName(wizardLastName);
    cout << wiz.get_wizardAge() << "\n";
    cout << wiz.get_wizardLastName() << ", " << wiz.get_wizardFirstName() << "\n";
    cout << wiz.get_wizard_ID();
return 0; }