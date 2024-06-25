#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main(){

    vector <int> list{} ;
    char choice{};
    do{
        // display menu
        cout<<"\nP-Print numbers";
        cout<<"\nA-Add a number";
        cout<<"\nM-Display mean of the numbers";
        cout<<"\nS-Diaplay the smallest number";
        cout<<"\nL-Display the largest naumber";
        cout<<"\nQ-Quit";
        cout<<"\nEnter your choice : " << endl;
        cin >> choice;

        if (choice == 'P' || choice == 'p') {
            if (list.size() != 0) {
                cout << "[ ";
                for (auto num: list)
                    cout << num << ' ';
                cout << "]" << endl;
            }else
                cout<<"[]-The list is empty" <<endl;

        } else if(choice =='A'|| choice== 'a') {
            int num{};
            cout << "Enter an integer to add to the list :";
            cin >> num;
            list.push_back(num);
            cout << num << " added" << endl;
        } else if (choice == 'M' || choice == 'm'){
            int total{};
            double mean {};
            if (list.size() == 0){
                cout<<"Unable to calculate the mean - no data " << endl;
            }else{
                for (auto num : list){
                    total += num ;
                    mean = static_cast <double> (total) / list.size() ;
                    cout <<fixed << setprecision(1) ;
                    cout << "The mean is :" << mean <<endl;
                }
            }
        } else if (choice == 'S' || choice == 's') {
            if (list.size() == 0 ){
                cout<<"Unable to determine the smallest number - the list is empty" <<endl;
            }else{
                int smallest = list.at(0);
                for (auto num : list) {
                    if (num < smallest)
                        smallest = num;
                }
                cout<<"The smallest number is :" << smallest << endl;

            }
        } else if (choice == 'L' || choice == 'l'){
            if (list.size() == 0){
                cout<<"Unable to determine the largest - the list is empty"<<endl;
            }else{
                int largest = list.at(0);
                for (auto num : list) {
                    if (num > largest)
                        largest = num;
                }
                cout<<"The largest number is :"<< largest<< endl;
            }
        }else if (choice == 'Q' || choice == 'q'){
            cout<<"Goodbye"<<endl;
        } else {
            cout<<"Unkown selection, please try again " <<endl;
        }
    }while (choice!='q'&& choice != 'Q');

    return 0;
}