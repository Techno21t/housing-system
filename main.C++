#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <locale>
#include <map>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

//universl//
void lodging();
void response();
void checkingSystem();
string Hotel; 
string Availability;
string ammount;

void Welcome()
{
    system("Color 0B");
    cout<< " ----------------------------------"<<endl;
    cout<< "|    Welcome to Student Lodging    |"<<endl;
    cout<< " ----------------------------------"<<endl;
    cout<< "BY Aman & Vaanya"<<endl<<endl;
    lodging();
}
//prints lists of lodging
void lodging(){
cout << "Please choose a lodging below: " << endl;
//opening fstream//
fstream lodging ("lodging.txt");
if(lodging.is_open()){
    cout<<lodging.rdbuf();
    }
string next; 
cout<<endl<<"type next for booking page -->"<<endl;
cin>> next;
if(next == "next"){
  response();  
}

}
//response to lodging//
void response(){
    cout<< " ----------------------------------"<<endl;
    cout<< "|    Welcome to Booking system     |"<<endl;
    cout<< " ----------------------------------"<<endl<<endl;
    cout<< "which Lodging would you like to check for availability"<<endl;
    cout<< "Lodging Name: ";
    cin>> Hotel;
    cout<< "week availability: ";
    cin.ignore();
    getline(cin, Availability);
    cout<< "ammount of people/copacity: ";
    cin>> ammount;

    checkingSystem();
}

void checkingSystem(){
    string line;
    int offset;
    fstream lodging;
    lodging.open("lodging.txt");
    if(lodging.is_open()){
        while (!lodging.eof()){
            getline(lodging, line);
            if((offset = line.find(Hotel)) != string::npos){
                cout << "found Hotel";
                if((offset = line.find(Availability)) != string::npos){
                cout << "found hotel availability";
                if((offset = line.find(ammount)) != string::npos){
                cout << "found hotel copacity";
            }
            
        }
    }
}
}
}



int main(){
    Welcome();
}