// Name: Bill
// This program calculates the tax and tip on a restaurant bill.
#include <iostream>

int main()
{
  //Declaring my variables
  double initial_bill, total_bill, tax_and_bill, tip_and_bill;
  float tax, tip;

  //Defining some nonchanging variables
  tax = 0.0775;
  tip = 0.2;

  //Getting the inital cost of the meal
  std::cout <<"How much was your meal originally? $",
  std::cin >> initial_bill;

  //Determining both the tax and tip on the meal
  tax_and_bill = initial_bill*tax;
  tip_and_bill = initial_bill*tip;

  //Displays the tax and tip
  std::cout << "Tax = " << '\t' << '\t'<< "$" <<tax_and_bill << '\n';
  std::cout << "Tip = " << '\t' << '\t'<< "$" <<tip_and_bill << '\n';

  //Calculating the total amount owed
  total_bill = initial_bill+tax_and_bill+tip_and_bill;

  //Display total
  std::cout <<"Total bill = " << '\t' << "$" << total_bill << '\n';

  return 0;
}
