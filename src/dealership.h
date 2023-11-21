#include "sales.h"
#include <vector>
#include <fstream>
#pragma once

class Dealership {
    vector<Customer*> vecCustomers;
    vector<Vehicle*> vecVehicles;
	vector<Sales*> vecSales;
// File stream variables
	ifstream inputFile;
	ofstream outputFile;
	string line;
	string customersFilename = "txtfiles/customers.txt";
	string vehiclesFilename = "txtfiles/vehicles.txt";
	string salesFilename = "txtfiles/sales.txt";
public:
// Constructors and Destrcutor
    Dealership();
    ~Dealership();

// Customer Class Stuff
    void AddCustomer(const string& name, const string& phoneNumber, const string& emailAddress, bool interested, bool bought, const string& interestedVehicle, const string& interestedModel);
	void AddCustomer(Customer* obj);

	Customer* FindCustomer(const string& nameToFind) const;
    int FindCustomerIndex(const string& nameToFind) const;

    void PrintCustomerInfo() const;
    void PrintCustomerInfo(Customer* obj) const;


// Vehicle Class Stuff
    void AddVehicle(const int& yearAdd, const string& makeAdd, const string& modelAdd, const string& colorAdd, const int& daysOnLotAdd, const double& priceAdd, const string& vinAdd);
	void AddVehicle(Vehicle* obj);
    void PrintVehicleInfo() const;
	void PrintVehicleInfo(Vehicle* obj) const;
    int FindVehicleIndex(const string& vehicleToFind) const;
    Vehicle* FindVehicle(const string& vehicleToFind) const;


// Sales Class Stuff
	void PrintSalesInfo() const;
	void AddSale(Vehicle* vehicle, Customer* customer, const string& sn, const double& sp, const double& sbd, const double& sbw, const double& sbm);
	void AddSale(Sales* obj);

// File Stuff
	void SaveToFile();

// TMP METHODS
	int BuyCar();

// Methods To Write / FIXME
    void FindInterestedCustomer() const;
	void OpenFile();
	void ReadSalesData(ifstream& file);
};
