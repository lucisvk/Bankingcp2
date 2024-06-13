#include <iostream> 
#include <vector>
#include <string>
#include <vector>

#include "acc_server.cpp"

using namespace std; 


int main () {

    cout << "Hello Welcome ApBanking Please chosse one of the following options." << endl; 
    cout << "Deposit funds: 1" << endl;
    cout << "Withdraw funds: 2" << endl;
    cout << "check balance: 3" << endl; 
    cout << "Create account: 4" << endl; 
    
    int usrintput; 
    cin >> usrintput; 

    if ( usrintput == 1) 
    {
        depositfunds(usrintput);
    }


    return 0;
}
