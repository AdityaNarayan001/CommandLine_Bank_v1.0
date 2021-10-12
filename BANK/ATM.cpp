#include <iostream>
using namespace std;

string name = "";
int accNum, password;
float inpBalance , mainBalance = 0;

void CreateAcc(){
    
    cout <<"\n";
    cout << "Welcome , Your Choice and Presence Delighted Us." <<endl;
    cout << "Enter Your Name : ";
    getline(cin, name);
    cout << "Please enter a desired Numeric Account Number : ";
    cin >> accNum;
    cout << "Please make a PIN for your Account : ";
    cin >> password;
    cout << "\n";
    cout << "***********CREDENTIALS*************** \n";
    cout << "Thank You - Mr./Mrs. " << name <<endl;
    cout << "Your Account Number is :- " << accNum << endl;
    cout << "Your PIN is :- " << password << endl;
    cout << "************************************* \n";
}

void Deposit(){
    cout << "\n";
    cout << "Welcome " << name << " Your Account Balance is Rs. " << mainBalance << endl;
    cout << "Please Credit Your Account !! \n";
    cout << "Enter Amount Rs. ";
    cout << "\n";
    cin >> inpBalance;
    mainBalance =mainBalance + inpBalance;
    cout << "************************************* \n";
    cout << "Thank you for Crediting. Your Account Net Balance is Rs. "<< mainBalance << endl;
}

void ATM(){
    cout <<"Welcome to XYZ Bank ATM \n";
    cout << "\n";

    int chckAcc , chckPIN;
    cout << "Enter Your Account Number :- ";
    cin >> chckAcc;
    cout << "Enter Your PIN :- ";
    cin >> chckPIN;

    if (chckPIN == password and chckAcc == accNum){
        bool loop = true;
        while (loop){
            cout << "----------------------------------------------------------------" << endl;
            cout << "Please Choose the INDEX Number to use the corresponding Service \n";
            cout << "----------------------------------------------------------------" << endl;
            cout << "\n";
            cout << "1. Withdraw Money. \n";
            cout << "2. Credit Money \n";
            cout << "3. Check Balance \n";
            cout << "4. To leave the ATM \n";
            cout << "\n";
            cout << "Your Choice (Index Number) :- ";
            int option;
            cin >> option;

            if (option == 1) {
                cout << "Enter the Amount you wish to Withdraw : \n";
                int witAmount;
                cin >> witAmount;
                mainBalance = mainBalance - witAmount;
                cout << "Withdrawal of Rs." << witAmount << " is Successfull. \n";
            }
            else if (option == 2) {
                cout << "Enter the Amount you wish to Deposit : \n";
                int atmDeposit;
                cin >> atmDeposit;
                mainBalance = atmDeposit + mainBalance;
                cout << "Deposition of Rs." << atmDeposit << " is successfull. \n";
            }
            else if (option == 3){
                cout << "Your Net Balance is : " << mainBalance << "/- \n";
            }
            else if (option == 4){
                cout << "Thank you for the visit :) \n";
                loop = false;
            }
        }
    }
    else {
        cout << "===================================================================\n";
        cout << "### Entered Credential is WRONG or You have no account in XYZ Bank \n";
        cout << "===================================================================\n";
    }

}

int main()
{
    cout << "\n";
    cout << "Welcome to XYZ Bank \n";

    bool loop = true;
    while(loop){

        cout << "\n";
        cout << "----------------------------------------------------------------" << endl;
        cout << "Please Choose the INDEX Number to use the corresponding Service \n";
        cout << "----------------------------------------------------------------" << endl;
        cout<< "\n";

        cout << "1. Make New Account. " << endl;
        cout << "2. Make Deposit to Your Account." << endl;
        cout << "3. Visit ATM." << endl;
        cout << "4. Time to Go Home." << endl;

        cout << "" << endl;
        cout << "Your Choice (Index Number) :- ";
        int option;
        cin >> option;
        cin.get();
        cout << "\n";

        if (option == 1){
            CreateAcc();
        }
        else if (option == 2){
            if (name == "" ){
                cout << "### You need to have Account in our Bank to deposit money !!";
            } 
            else { Deposit(); }
        }
        else if (option == 3){
            ATM();
        }
        else if (option == 4){
            cout << "Bye Bye !!" << endl;
            loop = false;
        }

    }

    return 0;
}