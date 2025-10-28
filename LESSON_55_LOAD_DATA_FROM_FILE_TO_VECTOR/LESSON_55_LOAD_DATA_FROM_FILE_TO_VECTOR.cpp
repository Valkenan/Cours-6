#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
void loadDataFromFileToVector(string FileName,vector<string>& vFileContent)
{
	fstream Myfile;
	Myfile.open(FileName, ios::in);
	if (Myfile.is_open())
	{
		string Line;
		while (getline(Myfile, Line)) {
			vFileContent.push_back(Line);
		}
		Myfile.close();
	}
}
int main() {
	vector<string> vFileContent;
	loadDataFromFileToVector("MyFile.txt", vFileContent);
	for (string& Line : vFileContent)
	{
		cout << Line << endl;
	}
}