#ifndef SALESP_H
#define SALESP_H

class SalesPerson {
	
	public:
		SalesPerson();
		void getSalesFromUser();
		void setSales(int, double);
		void printAnnualSales();
	
	private:
		double totalAnnulSales();
		double sales[ 12 ];
			
};

#endif
