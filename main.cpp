#include "Cash.h"
#include "ICCard.h"
#include "Barcode.h"

int main() {

	Cash cash;
	ICCard icCard;
	Barcode barcode;

	cash.Pay();
	icCard.Pay();
	barcode.Pay();

	return 0;
}