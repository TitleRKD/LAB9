#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan;
	double interest;
	double payperyear;
	double total;
	double payment;
	double newbalance;
	double prevbalance;
	int year = 1;
	cout << "Enter initial loan: ";
	cin >> loan;
	newbalance = loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> payperyear;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	while(newbalance > 0){
	    cout << fixed << setprecision(2);
	    cout << setw(13) << left << year;
	    if(year == 1){ prevbalance = loan; }
	    cout << setw(13) << left << prevbalance;
	    cout << setw(13) << left << prevbalance*(interest/100);
	    total = prevbalance+(prevbalance*(interest/100));
	    cout << setw(13) << left << total;
	    if(payperyear < total){
	        cout << setw(13) << left << payperyear;
	        payment = payperyear;
	    }else{cout << setw(13) << left << total;
	          payment = total;}
	    cout << setw(13) << left << total-payment;
	    newbalance = total-payperyear;
        prevbalance = newbalance;
	    cout << "\n";
	    year++;
	}
	return 0;
}
