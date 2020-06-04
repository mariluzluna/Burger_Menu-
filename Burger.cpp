#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



int main() {
	
	
	
double total = 0;
double total2 = 0;
double total3;
double tax_rate = 0.08;
double final_price ;
char again = 'y';
    while(again == 'y'){
                
    char  eat;
    char drink;
   

    cout << "\t\tWelcome to Burger King please place your order" << endl;
    cout << "\nPlease input only the number next to the order you want" << endl;
    cout << "\n";
    cout << "\t\tBURGERS" << endl;
    cout << "1. Burger - $2.00" << endl;
    cout << "2. Bacon Burger - $2.50" << endl;
    cout << "3. Cheese Burger - $2.50" << endl;
    cin >> eat;
    switch (eat)
	{
		case '1' : cout <<  "You chose Burger ($2.00)\n";
    	           break;
    	case '2' : cout << "You chose Bacon Burger($2.50)\n";
    		       break;
    	case '3' : cout << "You chose Cheese Burger(2.50)\n";
    	           break;
    	default : cout << "You did not chose 1,2 or 3!\n";
		
	}
	
    if(eat == '1')
    {
        total += 2.00;
    }
    if(eat == '2')
    {
        total +=2.50;
    }
    if(eat == '3')
    {
        total +=2.50;
    }

    cout << "\n";
    cout << "What would you like to drink?" << endl;
    cout << "\t\tDRINKS" << endl;
    cout << "4. Diet Coke - $1.00" << endl;
    cout << "5. Mountain Dew - $1.00" << endl;
    cout << "6. Beer - $2.00" << endl;
    cin >> drink;
    switch (drink)
      {
    	case '4' : cout << "You chose Diet Coke ($1.00)\n";
    	           break;
    	case '5' : cout << "You chose Mountain Dew ($1.00)\n";
    	           break;
    	case '6' : cout << "You chose Beer($2.00)\n";
    			   break;
    	default :  cout << "You did not chose 4, 5 or 6!\n";
	}
  

    if(drink == '4')
    {
        total2 += 1.00;
    }
    if(drink == '5')
    {
        total2 += 1.00;
    }
    if(drink == '6')
    {
        total2 += 2.00;
    }


cout << fixed << setw << setprecision(2)<< endl;
total3 = (total + total2);
cout <<"Your price without taxe :"<< total3 << endl;


final_price = (total3 * tax_rate) + total3;
cout << "Your total comes to $ :" << final_price << endl;
    
    cout << "\n Next customer? (Yes/No)" << endl;
    cin >> again;
}
cout << "Thank you" << endl;

system ("pause");
return 0;
 }
