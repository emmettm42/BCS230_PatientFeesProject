#include "PatientAccount.h"
#include "Pharmacy.h"
#include "Surgery.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  // Variables to keep track of user input
  int surgeryLevel, pharmacyLevel, days;
  // Title
  cout << "======================\nPatient Fee Calculator\n======================\n" << endl;
  
  // Surgery 
	cout << "Select Procedure:" << endl;
	cout << "1 = Cesarean Section" << endl;
	cout << "2 = Appendectomy" << endl;
	cout << "3 = Biopsy" << endl;
	cout << "4 = Heart Transplant" << endl;
	cout << "5 = Brain Surgery" << endl;
  // Receive user input and use it to create a surgery object
  cin >> surgeryLevel;
  Surgery surgery(surgeryLevel);
  
  // Pharmacy
	cout << "\nSelect Prescribed Medication" << endl;
	cout << "1 = Claforan(cefotaxime)" << endl;
	cout << "2 = Crestor(rosuvastatin)" << endl;
	cout << "3 = Ventolin HFA(albuterol)" << endl;
	cout << "4 = Nexium(esomeprazole)" << endl;
	cout << "5 = Advair Diskus(fluticasone)" << endl;
  // Receive user input and use it to create a pharmacy object
  cin >> pharmacyLevel;
  Pharmacy pharmacy(pharmacyLevel);

  /* 
  Receive input for length of stay. Use it to create PatientAccount object
  which automatically adds the housing cost to the total bill by use of 
  the overloaded constructor
  */
  cout << "\nEnter Total Length of Stay in Days: ";
  cin >> days;
  PatientAccount patient(days);
  
  /*
  Add the price values for surgery and medication to the total bill
  NOTE: We were unable to come up with a solution in which we 
  called instances of the 'Surgery' and 'Pharmacy' class
  in the patient object.
  */
  patient.updateTotal(surgery.getPrice());
  patient.updateTotal(pharmacy.getPrice());

  // Display final bill
  cout << "\n=============\n Final Bill: \n============" << endl;
  cout << "Cost of Surgery: $" << surgery.getPrice() << endl;
  cout << "Cost of Medication: $" << pharmacy.getPrice() << endl;
  cout << "Cost of Housing: $" << patient.getHousingCost() << endl;
  cout << "\n\tTotal: $" << patient.getTotal() << endl;
  // Return 0 to compiler, end program
  return 0;
}