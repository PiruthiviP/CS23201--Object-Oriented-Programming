/*Define a class Play in C++ with the following specifications:
Private members of class Play
 Playcode integer
 PlayTitle 25 character
 Duration float
 Noofscenes integer
Public member function of class Play
 A constructor function to initialize Duration as 45 and Noofscenes as 5.
 Newplay() function to accept values for Playcode and PlayTitle.
 Moreinfo() function to assign the values of Duration and Noofscenes with the
help of corresponding values passed as parameters to this function.
 Showplay() function to display all the data members on the screen.*/

#include <iostream>
using namespace std;
class play{
    int playcode;
    char playtitle[25];
    float duration;
    int noofscences;
public:
 play ()
 {
     duration=45;
      noofscences=5;
 }
 void newplay()
 {
     cout<<"Enter the value for playcode:";
     cin>>playcode;
     cout<<"Enter the playtitle:";
     cin>>playtitle;
     
 }
 void moreinfo(int duration,int noofscences)
 {
     this->duration=duration;
     this-> noofscences=noofscences;
 }
    
  void showplay()
  {
      cout<<"The playtitle is :"<<playtitle<<endl;
      cout<<"The playcode is :"<<playcode<<endl;
      cout<<"The no of scences is:"<<noofscences<<endl;
      cout<<"The duration is :"<<duration<<endl;
      
  }
 };

int main() {
    play p1;
    p1.newplay();
    p1.showplay();
    cout<<"After updating information:"<<endl;
    p1.moreinfo(5,7);
     p1.showplay();
    
    return 0;
}