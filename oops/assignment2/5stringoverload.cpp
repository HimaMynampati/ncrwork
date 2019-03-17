#include<iostream>
using namespace std;
#include<string.h>
class String_overload
{

	char *string_ptr;
	int length;

public:

	String_overload()
	{
		string_ptr = NULL;
		length = 0;
	}

	String_overload(const char *s)
	{
		string_ptr = new char[strlen(s) + 1];
		strcpy(string_ptr, s);
		length = strlen(s);
	}

	String_overload(const String_overload &s)
	{

		string_ptr = new char[s.length + 1];
		strcpy(string_ptr, s.string_ptr);
		length = s.length;
	}

	void print_String()
	{
		cout << endl<<string_ptr ;
	}
	void scan_String()
	{
		string_ptr = new char[10];
		cin >> string_ptr;
	}


	~String_overload()
	{
		if (string_ptr != NULL)
			delete[]string_ptr;
	}

	String_overload operator=(String_overload c)
	{
		delete[]string_ptr;
		string_ptr = new char[strlen(c.string_ptr) + 1];
		strcpy(string_ptr, c.string_ptr);
		length = c.length;
		return (*this);
	}


	String_overload operator+(String_overload &c)
	{

		String_overload temp;
		temp.length = length + c.length;
		temp.string_ptr = new char[temp.length + 1];
		strcpy(temp.string_ptr, string_ptr);
	//	cout<<endl;
	//	cout<<temp.string_ptr;
		
		strcat(temp.string_ptr, c.string_ptr);
	//	cout<<temp.string_ptr;
		return temp.string_ptr;
	}
	char  operator[](int index)
	{
		if (index >= length)
			cout << "\n invalid arguments";
		//return (string_ptr[index]);
	}
	friend ostream& operator<<(ostream &cout, const String_overload &c);
	friend istream& operator>>(istream &cin, String_overload &c);
};


ostream& operator<<(ostream &cout, const String_overload &c)
{
	cout << c.string_ptr;
	return cout;
}
istream& operator>>(istream &cin, String_overload &c)
{
	char buffer[100];
	cin >> buffer;
	c.string_ptr = new char[strlen(buffer) + 1];
	c.length = strlen(buffer);
	strcpy(c.string_ptr, buffer);
	//cin>>c.string_ptr;
	return cin;
}
int main()
{
	String_overload def_str, para_str("Hello"), copy_str(para_str), deep_str, concat_str;
	cout << "Enter the string:";
	def_str.scan_String();
	cout<<"Entered string is :";
	cout << def_str;
	cout<<endl<<"Parameterised constructer string contains :";
	para_str.print_String();
	cout<<endl<<"copy constructor string has :";
    copy_str.print_String();
	deep_str=def_str;  //deep copying
	cout<<endl<<"deep copied string has :";
	deep_str.print_String();
	concat_str = copy_str + deep_str;
	cout<<endl<<"After concatinating copy and deep string :";
	cout << concat_str<<endl;	
	cout<<concat[9];//working of [] operator
	return 0;
}

