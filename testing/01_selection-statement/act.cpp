// Sales = Quantity * Unit Price
// Commission = Sales * %

#include <iomanip>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

int salesmanNo, quantity;
string salesmanName, remark;
double unitPrice, sales, commission;
char remarkCode;

void getInfo() {
  cout << "\t Salesman No\t: ";
  cin >> salesmanNo;
  cin.ignore();

  cout << "\t Salesman Name\t: ";
  getline(cin, salesmanName);

  cout << "\t Unit price\t: ";
  cin >> unitPrice;

  cout << "\t Quantity\t: ";
  cin >> quantity;

  cout << "\t Remark Code\t: ";
  cin >> remarkCode;
}

void getsalescom() {
  sales = quantity * unitprice;

  if (sales >= 10000 && sales <= 15000) {
    commission = sales * 0.01;
  } else if (sales >= 15001 && sales <= 20000) {
    commission = sales * 0.02;
  } else if (sales >= 20001 && sales <= 25000) {
    commission = sales * 0.03;
  } else if (sales >= 25001 && sales <= 30000) {
    commission = sales * 0.04;
  } else if (sales >= 30001) {
    commission = sales * 0.05;
  }
}

void getRemarks() {
  switch (remarkCode) {
  case 'F':
  case 'f':
    remark = "Fully paid";
    break;
  case 'I':
  case 'i':
    remark = "First installment Payment";
    break;
  case 'S':
  case 's':
    remark = "second installment Payment";
    break;
  default:
    remark = "no assigned remark";
  }
}

void displayRes() {
  cout << "\n\t Salesman No\t: " << salesmanNo;
  cout << "\n\t Salesman Name\t: " << salesmanName;
  cout << "\n\t Sales\t\t: " << fixed << setprecision(2) << sales;
  cout << "\n\t Commission\t: " << fixed << setprecision(2) << commission;
  cout << "\n\t Remark\t\t: " << fixed << setprecision(2) << remark << "\n\n";
  cout << "\tProgrammer's Name\t: Kyle Barco\n";
}

int main() { cout << "\tABC Department solution\n";
  cout << "\tMakati\n\n";

  getInfo();
  getSalesCom();
  getRemarks();
  displayRes();
}
