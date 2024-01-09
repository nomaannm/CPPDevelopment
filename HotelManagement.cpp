// Beginner level CLI based project
#include<iostream>

//Hotel Management

int main() {
	int quant, choice;

	int qRooms = 0, qPasta = 0, qBagette = 0, qNoodles = 0, qChampagne = 0, qMaltWhiskey = 0;
	int sRooms = 0, sPasta = 0, sBagette = 0, sNoodles = 0, sChampagne = 0, sMaltWhiskey = 0;
	int priceRoom = 0, pricePasta = 0, priceBagette = 0, priceNoodles = 0, priceChampagne = 0, priceMaltWhiskey = 0;

	std::cout << "\n\t Quantity of items we have : ";
	std::cout << "\nQuantity of rooms available : ";
	std::cin >> qRooms;
	std::cout << "Quantity of pasta available : ";
	std::cin >> qPasta;
	std::cout << "Quantity of Bagettes available : ";
	std::cin >> qBagette;
	std::cout << "Quantity of Noodles available : ";
	std::cin >> qNoodles;
	std::cout << "Quantity of Champagnes available : ";
	std::cin >> qChampagne;
	std::cout << "Quantity of Malt Whiskeys available : ";
	std::cin >> qMaltWhiskey;

	m: //labelled this menu as m 
	std::cout << "\n\t\t\t Please select options from the menu below ";
	std::cout << "\n\n1) Rooms ";
	std::cout << "\n2) Pasta ";
	std::cout << "\n3) Bagettes ";
	std::cout << "\n4) Noodles ";
	std::cout << "\n5) Champagne ";
	std::cout << "\n6) Malt Whiskey ";
	std::cout << "\n7) Information regarding sales and collection "; //Used by owner
	std::cout << "\n8) Exit ";

	std::cout << "\n\n Please enter your choice : ";
	std::cin >> choice;

	switch (choice) {
		case 1 :
			std::cout << "Enter the quantity of rooms you want : ";
			std::cin >> quant;
			if (qRooms - sRooms >= quant) {
				sRooms += quant;
				priceRoom = priceRoom + quant * 1200;
				std::cout << quant << " rooms are alotted to you ! \n";
				break;
			}
			else {
				std::cout << "\n\tOnly " << qRooms - sRooms << " are available.";
				break;
			}
		case 2:
			std::cout << "Enter the quantity of pastas you want : ";
			std::cin >> quant;
			if (qPasta - sPasta >= quant) {
				sPasta += quant;
				pricePasta = pricePasta + quant * 120;
				std::cout << "You ordered " << quant << " pasta !";
				break;
 			}
			else {
				std::cout << qPasta - sPasta << " remaining in total.";
				break;
			}
		case 3:
			std::cout << "Enter the quantity of bagettes you want : ";
			std::cin >> quant;
			if (qBagette - sBagette >= quant) {
				sBagette += quant;
				priceBagette = priceBagette + quant * 100;
				std::cout << "You ordered " << quant << " bagettes !";
				break;
			}
			else {
				std::cout << qBagette - sBagette << " remaining in total.";
				break;
			}
		case 4:
			std::cout << "Enter the quantity of noodles you want : ";
			std::cin >> quant;
			if (qNoodles - sNoodles >= quant) {
				sNoodles += quant;
				priceNoodles = priceNoodles + quant * 170;
				std::cout << "You ordered " << quant << " noodles !";
				break;
			}
			else {
				std::cout << qNoodles - sNoodles << " remaining in total.";
				break;
			}
		case 5:
			std::cout << "Enter the quantity of champagnes you want : ";
			std::cin >> quant;
			if (qChampagne - qChampagne >= quant) {
				sChampagne += quant;
				priceChampagne = priceChampagne + quant * 2300;
				std::cout << "You ordered " << quant << " champagnes !";
				break;
			}
			else {
				std::cout << qChampagne - sChampagne << " remaining in total.";
				break;
			}
		case 6:
			std::cout << "Enter the quantity of whiskeys you want : ";
			std::cin >> quant;
			if (qMaltWhiskey - sMaltWhiskey >= quant) {
				sMaltWhiskey += quant;
				priceMaltWhiskey = priceMaltWhiskey + quant * 1800;
				std::cout << "You ordered " << quant << " whiskeys !";
				break;
			}
			else {
				std::cout << qMaltWhiskey - sMaltWhiskey << " remaining in total.";
				break;
			}
		case 7:
			std::cout << "\n\n\tDetails of sales and collection. -------";

			std::cout << "\nNumber of rooms we had : " << qRooms;
			std::cout << "\nNumber of rooms we gave : " << sRooms;
			std::cout << "\nRemaining rooms : " << qRooms - sRooms;
			std::cout << "\nTotal collection from rooms : " << priceRoom;
			
			std::cout << "\nNumber of pasta we had : " << qPasta;
			std::cout << "\nNumber of pasta we sold : " << sPasta;
			std::cout << "\nRemaining pasta : " << qPasta - sPasta;
			std::cout << "\nTotal collection from pasta : " << pricePasta;
			
			std::cout << "\nNumber of bagettes we had : " << qBagette;
			std::cout << "\nNumber of bagettes we sold : " << sBagette;
			std::cout << "\nRemaining bagettes : " << qBagette - sBagette;
			std::cout << "\nTotal collection from bagettes : " << priceBagette;
			
			std::cout << "\nNumber of noodles we had : " << qNoodles;
			std::cout << "\nNumber of noodles we sold : " << sNoodles;
			std::cout << "\nRemaining noodles : " << qNoodles - sNoodles;
			std::cout << "\nTotal collection from noodles : " << priceNoodles;
			
			std::cout << "\nNumber of champagnes we had : " << qChampagne;
			std::cout << "\nNumber of champagnes we sold : " << sChampagne;
			std::cout << "\nRemaining champagnes : " << qChampagne - sChampagne;
			std::cout << "\nTotal collection from champagnes : " << priceChampagne;
 			
			std::cout << "\nNumber of whiskeys we had : " << qMaltWhiskey;
			std::cout << "\nNumber of whiskeys we sold : " << sMaltWhiskey;
			std::cout << "\nRemaining whiskeys : " << qMaltWhiskey - sMaltWhiskey;
			std::cout << "\nTotal collection from whiskeys : " << priceMaltWhiskey;

			break;

		
		case 8:
			exit(0);

		default:
			std::cout << "\nWrong choice !";
			break;
	}
	goto m;




}
