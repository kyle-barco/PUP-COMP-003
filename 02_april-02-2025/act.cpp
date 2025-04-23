#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

string date, patientName, addr, medDesc, bodyParts, paymentDesc;
double price;
int modeOfPayment;
int medCode;  

void getMedCode() {
  if (medCode == 1) {
    medDesc = "CT Scan";
    bodyParts = "Head";
    price = 10000;
  } else if (medCode == 2) {
    medDesc = "X-Ray";
    bodyParts = "Chest";
    price = 2000;
  } else if (medCode == 3) {
    medDesc = "Ultra Sound";
    bodyParts = "Body";
    price = 4500;
  } else if (medCode == 4) {
    medDesc = "Mammogram";
    bodyParts = "Chest";
    price = 4500;
  } else if (medCode == 5) {
    medDesc = "Blood Chem";
    bodyParts = "Body";
    price = 2500;
  } else {
    medDesc = "None Of the Choices";
    bodyParts = "N/A";  
    price = 0;
  }
}

void getInfo() {
  cout << "\t Date\t: ";
  cin >> date;
  getline(cin, date);

  cout << "\t Patient Name\t: ";
  getline(cin, patientName);

  cout << "\t Address\t: ";
  getline(cin, addr);

  cout << "\t Medical Exam Code\t: ";
  cin >> medCode;

  getMedCode();
}

void getModePay() {
  char paymentInput;
  cout << "\t Mode of Payment (C/D/R/H)\t: ";
  cin >> paymentInput;

  switch (paymentInput) {
  case 'C':
  case 'c':
    paymentDesc = "Cash";
    break;
  case 'D':
  case 'd':
    paymentDesc = "Debit";
    break;
  case 'R':
  case 'r':
    paymentDesc = "Credit";
    break;
  case 'H':
  case 'h':
    paymentDesc = "HMO Card";
    break;
  default:
    paymentDesc = "None of the options";
  }
}

void displayRes() {
  cout << "\n\t Date\t\t: " << date;
  cout << "\n\t Patient Name\t: " << patientName;
  cout << "\n\t Address\t: " << addr;
  cout << "\n\t Medical Exam Code\t: " << medCode;
  cout << "\n\t Medical Exam Description: " << medDesc;
  cout << "\n\t Body Parts\t: " << bodyParts;
  cout << "\n\t Sales\t\t: " << fixed << setprecision(2) << price;
  cout << "\n\t Mode of Payment\t: " << paymentDesc;
  cout << "\n\t Programmer's Name\t: Kyle Barco\n";
}

int main() {
  cout << "\tSt. Lukes Hospital\n";
  cout << "\tTaguig City\n\n";

  getInfo();
  getModePay();  
  displayRes();

  return 0;
}
