#include <iostream>
#include <string>
using namespace std;

int main() {
  int unitNum;
  std::string unitOwn;
  float md, eb, wb, ib, tmp;

  cout << "AMAIA Residences\n";
  cout << "Sta. Mesa Manila\n";
  cout << "Montly Billings\n\n";

  cout << "Unit Number: ";
  cin >> unitNum;

  cout << "\nUnit Owner: ";
  cin >> unitOwn;

  cout << "\nMonthly Dues: ";
  cin >> md;

  cout << "\nElectric Bill: ";
  cin >> eb;

  cout << "\nWater Bill: ";
  cin >> wb;

  cout << "\nInternet Bill: ";
  cin >> ib;

  tmp = md + eb + wb + ib;

  std::string total = "\nTotal Monthly Payment: " + std::to_string(tmp);
  std::cout << total;

  cout << "\n\nPrepared by: Kyle Barco\n";
}
