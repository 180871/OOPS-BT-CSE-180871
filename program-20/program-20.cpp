#include<iostream>
#include<fstream>
#include<dir.h>
using namespace std;
class fileHandling
{
	private:
		string fileName="StdudentDetails.txt";
		public:
			bool write(string name,int rollNumber,string path="./fileHandling")
			{
				ofstream fout;
				fileName=path+"/"+fileName;
				fout.open(fileName.c_str());
				if(fout.fail())
				{
					createDirectory(path);
				}
				fout.open(fileName.c_str());
				fout<<"Name:\t"<<name<<"\n"<<"Roll No.:\t"<<rollNumber<<endl;
				fout.close();
					
			}
			private:
				void createDirectory(string path)
				{
					mkdir(path.c_str());
				}
			public:
				void read()
				{
					ifstream fin;
					fin.open(fileName.c_str());
					string line;
					while(fin)
					{
						getline(fin,line);
						cout<<line<<endl;
					}
					fin.close();
			}
};
int main()
{
	fileHandling f;
	int roll;
	string name;
	printf("Enter your name followed by Roll number:\n");
	getline(cin,name);
	scanf("%d",&roll);
	f.write(name,roll);
	f.read();
	return 0;
}
