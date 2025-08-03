#include <iostream>
#include <string>
using namespace std;
double caclFees(int NumberOfModules, int FeesPerModule) {
int Total = 0;
Total = NumberOfModules * FeesPerModule;
return Total;
}
double caclFees(int NumberOfModules,int NumberOfRepeatedModules, int FeesForModule, int
FeesRepeatedModules) {
int TotalNewModules = 0;
int TotalForRepeatModules = 0;
int TTotal = 0;
TotalForRepeatModules = NumberOfRepeatedModules * FeesRepeatedModules;
TotalNewModules = NumberOfModules * FeesForModule;
TTotal = TotalForRepeatModules + TotalNewModules;
return TTotal;
}
int main()
{
int NumberOfModules = 0;
int NumberOfModuleRepeat = 0;
int NumberofModuleFees = 0;
int NumberOfModuleRepeatFees = 0;
bool Repeat = false;
bool Contunie = false;
string Answer;
cout << "Hello Welcome to Jander University Module Sign up Page!\n";
cout << "\n------------------------\n";
cout << "With the Registration will you be repeating modules? (Y/N)";
cin >> Answer;
while (Contunie = false) {
if (Answer == "Y") {
Contunie = true;
cout << "\nHow many new modules will you be taking : ";
cin >> NumberOfModules;
cout << "\nWhat is the price per new Module? R";
cin >> NumberofModuleFees;
cout << "\nHow many new modules will you be taking : ";
cin >> NumberOfModuleRepeat;
cout << "\n What is the price per Old Module? R";
cin >> NumberOfModuleRepeatFees;
double TotalFees = caclFees(NumberOfModules, NumberOfModuleRepeat,
NumberofModuleFees, NumberOfModuleRepeatFees);
cout << "\n\n Please note that you will be paying R" << TotalFees;
}
else if (Answer == "N") {
Contunie = true;
cout << "\nHow many new modules will you be taking : ";
cin >> NumberOfModules;
cout << "\nWhat is the price per new Module? R";
cin >> NumberofModuleFees;
double TotalFees = caclFees(NumberOfModules, NumberofModuleFees);
cout << "\n\n Please note that you will be paying R" << TotalFees;
}
else {
Contunie = false;
cout << "Please enter appripiate value";
}
}
return 0;
}
