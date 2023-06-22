#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector<Course>CourseList;
vector<string>prerequisites; 
class Course {

		void printCourseList() {};
		void printCourse(string courseName) {};
		Course(string classNumber, string className, vector<string>prerequisites);
		//public functions
private:
	string classNumber;
	string className;
	vector<string>prerequisistes;
	//private variables to store information for class
public:

	//constructor to create course object

	void printCourse(string className) {
		__if_exists(className) {
			cout << "Class: " << classNumber << " || " << className;
			__if_exists (prerequisistes) {
				for (unsigned int i = 0; i < prerequisites.size(); i++) {
					cout << prerequisistes[i] << " ";
				}
				cout << endl;
			}
		}
	}
	//print course by key after sorting list
	// if exists used to help aide for looping and printing information

	void printCourseList() {
		for (unsigned int i = 0; i < CourseList.size(); i++) {
			cout << CourseList[i].Course.classNumber << " || " << CourseList[i].Course.className << " || ";
			for (unsigned int j = 0; j < CourseList[i].Course.courseList[j]; j++) {
				cout << CourseList[i].Course.courseList[j] << " ";
			}
			cout << endl;
		}
	}
};
/*Course class containing vector to store prerequisistes
//public methods to print all courses and print specific course
contructor built in
*/
void printMenu() {
	cout << "Menu\n";
	cout << "1. Load Data Structure\n";
	cout << "2. Print Course List\n";
	cout << "3. Print Course\n";
	cout << "4. Print Course\n";
	cout << "Exit program.\n";
}
//print menu options in function to easily call 
void readFile() {
	string infile;
	cout << "enter file name\n";
	cin >> infile;
	ifstream inputFile(infile);
	string line;
	inputFile.open(infile);
	while (inputFile.is_open()) {
		getline(inputFile,line, ",");
		string classNumber = line[0];
		string className = line[1];
		string prerequisite = line[2];
	}
	inputFile.close();
	cout << "file read";
}
// readfile, parse into strings to build object and append to vector
main() {
	bool fileRead = false;
	bool over = false;
	string infile;
	while (over = false) {
		printMenu();
		int decision;
		cin >> decision;
		switch (decision) {

		case 1:
		{
			readFile();
			if (ferror) {
				cout << "error please try again";
			}
			break;
		}
		//calls file to be read and objects created and stored

		case 2:
		{
			Course::printCourseList();
			break;
		}
		//print all courses in vector

		case 3:
		{
			string className;
			cout << "What className would you like to search for?";
			cin >> className;
			Course::printCourse(className);
			break;
		}
		//search for classname and print coures and prerequesites

		case 4:
		{
			cout << "exiting program";
			exit(0);
		}
		// exit program
		default:
		{
			cout << "Error please try again";
			//catch statement 
		}
		}
	}
}
