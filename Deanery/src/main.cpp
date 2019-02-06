 
#include "lab5.h"

int main()
{
	
	Deanery IMIKN("students.txt");
	IMIKN.printStatics();
	string name = "Perkins Steven";
	string title = "PI";
	IMIKN.transfer(name, IMIKN.searchGroup(title));
	IMIKN.checkProgress(2.5);
	IMIKN.reelection();
	IMIKN.updateData("studentsUpdate.txt");
	IMIKN.printStatics();
	system("pause");
}
