///////////////         sf huang     //////////////
///////////////         17 automation//////////////
///////////////////////////////////////////////////
///////////////////////////////////////////////////
///////////////////////////////////////////////////
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main()
{
	int ln=0;//the number of lines
	int cn=0;//the number of characters
	int sn=0;//the number of sentences
	int wn=0;//the number of words
	string str;

	ifstream infile;
	infile.open("test.txt");//open the test file
	ifstream in;
	ofstream outfile2;
	outfile2.open("characters.txt");
	ofstream outfile3;
	outfile3.open("sentences.txt");
    ofstream outfile4;
	outfile4.open("words.txt");
	char c;
	while(infile>>c)        //read a character
	{
		cn++;
		outfile2<<cn<<"\n";
		if(c=='.'||c=='!'||c=='?'||c==',') //read the sentence
		{
           sn++;
		   outfile3<<sn<<"\n";
		}
   
	    if(c==' '||c=='.'||c=='!'||c=='?'||c==',')  //read the word
		{
           wn++;
		   outfile4<<wn<<"\n";
		}
	}
	ifstream infile1;            //open the file again
	infile1.open("test.txt");  
    ofstream outfile1;
	outfile1.open("lines.txt");      //creat files
	while(getline(infile1,str))   
	{
		ln++;
		outfile1<<ln<<"\n";     //write it in the output file
	}
	outfile1<<"\n";
	outfile2<<"\n";
	outfile3<<"\n";
	outfile4<<"\n";
	infile.close();
	outfile1.close();
	infile1.close();
	outfile2.close();
	outfile3.close();
	outfile4.close();

	cout<<ln<<" lines\n"<<cn<<" chars\n"<<sn<<" sentences\n"<<wn<<" words\n";
}