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

//universal//
void Welcome();
void Names();
void response();
void CheckingSystem();

string Hotels[6] = {
    Hotels[1] = "Hotel 1", Hotels[2] = "Hotel 2", Hotels[3] = "Hotel 3", Hotels[4] = "Hotel 4"
};
string Date[5] = {
    Date[1] = "April 2", Date[2] = "April 2", Date[3] = "April 2", Date[4] = "April 2",
};

string Capacity [5] = {
    Capacity[1] = "copacity: 5", Capacity[2] = "copacity: 5", Capacity[3]= "copacity: 5",Capacity[4] = "copacity: 5"
};

int main(){
    Welcome();
}
//structure // instructions//
struct Items{
    public:
    //lodges
string Hotel; 
string Availability;
string ammount;

};

//intro 
void Welcome(){
   system("Color 0B");
    cout<< " ----------------------------------"<<endl;
    cout<< "|    Welcome to Student Lodging    |"<<endl;
    cout<< " ----------------------------------"<<endl;
    cout<< "BY Aman & Vaanya"<<endl<<endl;
    Names();
}

//prints lists of lodging
void Names(){
string next;
cout << "Please choose a lodging below: " << endl;
for(int i = 0; i<=3; ++i){
    cout<<Hotels[i]<<" | ";
}
cout<<endl<<"type next for booking page -->"<<endl;
cin>> next;
if(next == "next"){
  response();  
 }
}

//response to lodging//
void response(){
Items Lodges;
    cout<< " ----------------------------------"<<endl;
    cout<< "|    Welcome to Booking system     |"<<endl;
    cout<< " ----------------------------------"<<endl<<endl;
    cout<< "which Lodging would you like to check for availability"<<endl;
    cout<< "Lodging Name: ";
    cin>>Lodges.Hotel;
    cout<< "week availability: ";
    cin >> Lodges.Availability;
    cout<< "ammount of people/copacity: ";
    cin>> Lodges.ammount;

}

/*void CheckingSystem(){


}*/

/*void checkingSystem(){
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
}*/



