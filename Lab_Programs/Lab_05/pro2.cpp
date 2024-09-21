/*Define a class batsman with the following specifications:
Private members:
bcode 4 digits code number
bname 20 characters
innings, notout, runs integer type

batavg it is calculated according to the formula batavg =runs/(innings-
notout)

calcAvg() Function to compute batavg
Public members:
readData()  Function to accept value from bcode, name, innings, notout and invoke the
function calcAvg()
displayData()  Function to display the data members on the screen.
Write a main function to create objects of class batsman and invoke all the public
member functions.*/

#include <iostream>
using namespace std;
class Batsman{
    private:
        int bcode;
        char bname[20];
        int innings,notout,runs,batavg;
        void calcavg()
          {
          if (innings - notout != 0)
            batavg = runs/(innings - notout);
        else
            batavg = 0;
          }   
public:
void readData()
{
        cout<<"Enter the batsman code:";
        cin>>bcode;
        cout<<"Enter the name:";
        cin>>bname;
        cout<<"Enter the innings:";
        cin>>innings;
        cout<<"Enter the notout:";
        cin>>notout;
        cout << "Enter runs: ";
        cin >>runs;
        calcavg();

}
void displayData()
{
        cout<<endl;
        cout<<"The bcode is:"<<bcode<<endl;
        cout<<"The name of the batsman:"<<bname<<endl;
        cout<<"The innings is :"<<innings<<endl;
        cout<<"The notout run is:"<<notout<<endl;
        cout<<"The runs is :"<<runs<<endl;
        cout<<"The bataverage is:"<<batavg<<endl;
}
};
int main() {
    Batsman batsman1, batsman2;

    cout << "\nEnter details for Batsman 1:\n";
    batsman1.readData();

    cout << "\nEnter details for Batsman 2:\n";
    batsman2.readData();

    cout << "\nBatsman 1 Details:\n";
     batsman1.displayData();

    cout << "\nBatsman 2 Details:\n";
    batsman2.displayData();
    return 0;
}