/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 20.02.2021
*/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Student{
	private:
		int studentID;
		string studentName;
		double English, informationTechnology, mathematics;
	public:
/*Get and set functions to access data in private block of the class*/	
		void setStudentID(int studentID_1){
			studentID = studentID_1;
		}
		int getStudentID(){
			return studentID;
		}
		void setStudentName(string studentName_1){
			studentName = studentName_1;
		}
		string getStudentName(){
			return studentName;
		}
		void setEnglish(double English_1){
			English = English_1;
		}
		double getEnglish(){
			return English;
		}
		void setMathematics(double mathematics_1){
			mathematics = mathematics_1;
		}
		double getMathematics(){
			return mathematics;
		}
		void setInformationTechnology(double informationTechnology_1){
			informationTechnology = informationTechnology_1;
		}
		double getInformationTechnology(){
			return informationTechnology;
		}
/*Get function to calculate total score*/		
		double getTotal(){
			return ((English + mathematics + informationTechnology) / 300) * 100;
		}
/*Some conditions to output the correct grade*/		
		string getGrade(){
			if(getTotal() >= 90 && getTotal() <= 100){
				return "A+";
			}else if(getTotal() < 90 && getTotal() >= 80){
				return "A0";
			}else if(getTotal() < 80 && getTotal() >= 70){
				return "B+";
			}else if(getTotal() < 70 && getTotal() >= 60){
				return "B0";
			}else if(getTotal() < 60 && getTotal() >= 50){
				return "C+";
			}else if(getTotal() < 50 && getTotal() >= 40){
				return "C0";
			}else if(getTotal() < 40 && getTotal() >= 30){
				return "D+";
			}else if(getTotal() < 30 && getTotal() >= 20){
				return "D0";
			}else if(getTotal() < 20 && getTotal() >= 0){
				return "F";
			}else{
				return "Not correct input!";
			}
		}
};


int main(){
	int studentID_1;
	string studentName_1;
	double English_1, informationTechnology_1, mathematics_1; 
/*Input functions to take name, id and scores from user*/	
	cout << setfill('-') << setw(45) << "\n";
	cout << "\t\t Name and ID\n";
	cout << setfill('-') << setw(45) << "\n\n";
	cout << "Please enter your name: ";
	getline(cin, studentName_1);
	cout << "Please enter your ID: ";
	cin >> studentID_1;
	cout << "\n";
	cout << setfill('-') << setw(45) << "\n";
	cout << "\t\t Input Scores\n";
	cout << setfill('-') << setw(45) << "\n\n";
	cout << "Please enter your score from English: ";
	cin >> English_1;
	cout << "Please enter your score from IT: ";
	cin >> informationTechnology_1;
	cout << "Please enter your score from Math: ";
	cin >> mathematics_1;
	cout << "\n";
/*Output functions to show collected data*/	
	cout << setfill('-') << setw(45) << "\n";
	cout << "\t\t Data\n";
	cout << setfill('-') << setw(45) << "\n\n";
	Student myObj;
	myObj.setStudentName(studentName_1);
	cout << "Name: " << myObj.getStudentName() << endl;
	myObj.setStudentID(studentID_1);
	cout << "ID: " << myObj.getStudentID() << endl;
	myObj.setEnglish(English_1);
	cout << "English score: " << myObj.getEnglish() << endl;
	myObj.setInformationTechnology(informationTechnology_1);
	cout << "IT score: " << myObj.getInformationTechnology() << endl;
	myObj.setMathematics(mathematics_1);
	cout << "Math score: " << myObj.getMathematics() << "\n\n";
	cout << setfill('-') << setw(45) << "\n\n";
	cout << "Total score: " << myObj.getTotal() << "\n\n";
	cout << setfill('-') << setw(45) << "\n\n";
	cout << "Grade: " << myObj.getGrade() << "\n\n";
	cout << setfill('-') << setw(45) << "\n\n";
	system("pause");
	return 0;
}
