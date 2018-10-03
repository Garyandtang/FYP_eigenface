/*
Author: jiaweit
Use to make a csv file for storing the path of image
before use this script, type on dir /b/s *.bmp > at.txt on command prompt
*/
#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
#include <sstream>

using namespace std;



//string path = "C:/Users/75069/Documents/polyu/year4_sem1/FYP/source code/ORL_finish/ORL_finish/";

void add_label(string path)
{
	string filename = path + "at.txt";
	ifstream filestream(filename.c_str());
	string line;
	string label;
	string line_label;
	string output_filename = path + "at_.txt";
	ofstream saveFile(output_filename, ios::app);
	while (getline(filestream, line))
	{
		cout << line << endl;
		label = line.substr(77,2);
		stringstream geek(label);
		int x = 0;
		geek >> x;
		x = x - 1;
		stringstream ss;
		ss << x;
		string str = ss.str();

		line_label = line+";"+ str;
		cout << label << endl;
		//ofstream outfile("at_.txt", ios::app);
		saveFile << line_label << endl;

	}
	saveFile.close();
	filestream.close();
	
}


