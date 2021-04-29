#ifndef QUERY
#define QUERY

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

typedef struct data
{
	string date;
	double price;	
}Data;

class Query
{
public:
	Query();
	~Query();
	// pure virtual functions
	virtual void webQuery() = 0;
	virtual Data* queryResult() = 0;
	// setters
	void setURL(string urlSiteName);
	void loadHistoricData();

private:
	string url; // all web queries will be associated with a web site
	vector<Data> historicData;

};

#endif // !QUERY

