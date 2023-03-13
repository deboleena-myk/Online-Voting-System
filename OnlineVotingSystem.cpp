#include<iostream>
using namespace std;
int main()
{
	int x = 0;
    int y = 0;
    int z = 0;
    double total = 0.0;
    int option = 10;
    double x_percentage = 0.0;
    double y_percentage = 0.0;
    double z_percentage = 0.0;
	
	cout << "\n Welcome to Voting System \n";
	cout << "\nList of Political parties:\n\nParty X (To vote for the party, press 1)\nParty Y (To vote for the party, press 2)\nParty Z (To vote for the party, press 3)\n\nTo exit from voting, press 0\n";

    while (option != 0) {

        
        abc:

        cout << "Vote here: ";
        cin >> option;

        

        if (option == 1) {
        x += 1;
        total += 1.0;
        cout << ("\nThank You for giving your vote\n");
        } else if (option == 2) {
        y += 1;
        total += 1.0;
        cout << ("\nThank You for giving your vote\n");
        } else if (option == 3) {
        z += 1;
        total += 1.0;
        cout << ("\nThank You for giving your vote\n");
        } else if (option == 0) {
            option = 0;
        } else {
        cout << ("\n\nError: Invalid Key!!!!!!!!!!!! \n\n");
        }
    }
	system("cls");
	
	  
	  

    if (x == 0 && y == 0 && z == 0) {
        x_percentage = 0;
        y_percentage = 0;
        z_percentage = 0;
    } else {
        x_percentage = (x / total) * 100.0;
        y_percentage = (y / total) * 100.0;
        z_percentage = (z / total) * 100.0;
    }

    

   
	cout<<"\n If you want to check the result of this election, then Press R. \n Otherwise Press any key to continue \n";
	
	char ch;
	cin>>ch;
	if(ch=='R')
	{
	cout<<"\n Enter administrative username = ";
	string username;
	cin>>username;
	cout<<"\n Enter administrative password = ";
	int password;
	cin>>password;
	
	if(username=="Admin" && password==1234)
	{
	
	qrs:

    cout << "\nParty X has: " << x << " votes and " << x_percentage << "%.\n";
    cout << "\nParty Y has: " << y << " votes and " << y_percentage << "%.\n";
    cout << "\nParty Z has: " << z << " votes and " << z_percentage << "%.\n";
	
	if (x > y && x > z) 
	{
        cout << "\nParty X has the maximum votes\n";
    } 
	else if (y > x && y > z) 
	{
        cout << "\nParty Y has the maximum votes\n";
    } 
	else if (z > x && z > y) 
	{
        cout << "\nParty Z has the maximum votes\n";
    }
	else
	{
	cout<<"\n Votes are tied in this election";
    }
    }
    

    else
    {
    	cout<<"Your username and password is incorrect";
    	goto qrs;
	}
	
	
    }
    
    else
    {
    goto abc;
    }
    
}
