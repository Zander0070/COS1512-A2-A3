#include <iostream>
#include <string>
using namespace std;
int main()
{
int number = 0;
cout << "Please enter the size of the array : ";
cin >> number;
int* arr = new int[number];
cout << "\nThe array is now able to take " << number << " test scores. \nPlease enter the
test scores out of 100 marks\n";
cout << "--------------------\n";
int Average = 0, TotalMarks = 0;
int Testscore;
for (int i = 0; i < number; i++) {
cout << "Please enter mark number " << i + 1 << " : ";
cin >> Testscore;
if (Testscore < 0 || Testscore > 100) {
cout << "Invalid score. Please enter a number between 0 and 100.\n";
i--; // re-do this iteration
continue;
}
arr[i] = Testscore;
}
for (int I = 0; I < number; I++) {
TotalMarks = TotalMarks + arr[I];
}
cout << "The average test score is " << TotalMarks / number << "%, rounded";
delete[] arr;
return 0;
}
