#ifndef TESTAPP
#define TESTAPP

#include "Query.h"

class TestApp
{
public:
	TestApp();
	~TestApp();
	void run();

	void menu();
	void addPriceWatcher();
	void loadPriceDataFromFile();
	void loadLedgerFile();
	void priceAlert();
	void printPriceGraph();
	void printMyLedger();

private:
	fstream ledger; // ledger.txt
	fstream priceHistory; // HistoricData.txt
};


#endif // !TESTAPP
