#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

#our code 
int t;
cin>>t;
double d2;
cin>>d2;
string s2;
cin.ignore();  #to ignore the new line  
getline(cin, s2);


cout<<i+t<<endl;
cout.precision(1); #to print decimal digits as well 
cout<<fixed<<d+d2<<endl;
cout<<s.append(s2)<<endl;
    
