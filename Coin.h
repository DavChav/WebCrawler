#ifndef COIN
#define COIN

#include "Query.h"

typedef struct ledgerEntry
{
	bool boughtSold; // true for bought, false for sold
	double price;
	string date;
}LedgerEntry;

class Coin : public Query
{
public:
	Coin();
	~Coin();
	//setters
	void setCoinName();
	void setTickerSymbol();
	void loadLedger();
	void addToLedger();
	//getters


	void webQueryOut(); // 
	Data* queryResultIn();


private:
	string coinName;
	string tickerSymbol;
	vector<LedgerEntry> ledger; // an instance of a concrete
};
#endif // !COIN


