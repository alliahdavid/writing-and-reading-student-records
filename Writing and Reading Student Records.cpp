//Writing and Reading Student Records

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream outFile("grade.txt");
	string name;
	int grade;
	for (iint i =1; i <= 3; i++){
		cout << "Enter name of  student " << i <<  ":";
		cin >> name;
		cout << "Enter grade";
		cin >> grade;
		outFile << name << " " << grade <<endl;
	}
	outFile.close();
	cout << "\nSaved successfully . Displaying file content:\n";
	ifstresm inFile("grades.txt");
	while(inFile >>name>>grade){
		cout << name << "- " << grade << endl;
	}
	inFile.close();
	return 0;
}
