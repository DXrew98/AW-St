
#include "string.h"
#include <iostream>
#include <cstring>


// A few freebies to get past the first couple of tests.
// These may need to be modified!

//Set defaults
sfw::string::string(void) { m_data = new char[m_size = 1]{ '\0' }; } //g
//set deconstrutor 
sfw::string::~string() { delete[]m_data; } //g

//Call length
size_t sfw::string::length() const { return strlen(m_data); } //g
//call size
size_t sfw::string::size() const { return m_size; } //g

//create empty string
sfw::string::string(size_t size)
{
	// TODO:
	m_size = size;
	if (m_size <= 0) { m_size = 1; }
	m_data = new char[m_size];
	m_data[0] = '\0';
}
//Duplicate data, set size
sfw::string::string(const char * a, size_t size)
{
	// TODO:
	m_size = size;
	if (m_size <= 0) { m_size = 1; }
	m_data = new char[m_size];
	m_data[0] = '\0';
	strcpy_s(m_data, m_size - 1, a);
}


//Contructors\\
//duplicate char array
sfw::string::string(const char * a)
{
	if (a != nullptr)
	{
		m_size = strlen(a) + 1;
		m_data = new char[m_size];
		m_data[0] = '\0';
		strcpy_s(m_data, m_size, a);
	}
	else
	{
		*this = sfw::string();
	}
}
//duplicate string
sfw::string::string(const string & a)
{
	// TODO:
	m_size = a.m_size;
	m_data = new char[m_size];
	m_data[0] = '\0';
	strcpy_s(m_data, m_size, a.m_data);
}
//steal DM from string
sfw::string::string(string && a)
{
	// TODO:
	m_size = a.m_size;
	m_data = a.m_data;
	a = sfw::string();
}


// = Assignment Operators \\
//duplicate char array
sfw::string & sfw::string::operator=(const char * a)
{
	// TODO:
	if (a != nullptr)
	{
		m_size = strlen(a) + 1;
		m_data = new char[m_size];
		m_data[0] = '\0';
		strcpy_s(m_data, m_size, a);
	}
	{
		*this = sfw::string();
	}
	return *this;
}
//duplicate string
sfw::string & sfw::string::operator=(const string & a)
{
	// TODO:
	if (this != &a) {
		if (m_size < strlen(a.m_data) + 1){
		//resize the array
			delete m_data;
			m_size = strlen(a.m_data) + 1;
			m_data = new char[m_size];
			m_data[0] = '\0';
		}
		strcpy_s(m_data, m_size, a.m_data);
	}
	return *this;
}
//steal DM from string
sfw::string & sfw::string::operator=(string && a)
{
	// TODO:
	if (this != &a)
	{
		delete m_data;
		m_size = a.m_size;
		m_data = a.m_data;
		a = sfw::string();
	}
	return *this;
}


// += Assignment Operators \\
//add char array
sfw::string & sfw::string::operator+=(const char * a)
{
	// TODO:
	return *this;
}
//add string
sfw::string & sfw::string::operator+=(const string & a)
{
	// TODO:


	return *this;
}
//add char
sfw::string & sfw::string::operator+=(char a)
{
	// TODO:
	return *this;
}


// Array Indexing \\
//access index char
char & sfw::string::operator[](size_t index)
{
	// TODO: Is this finished?
	return this->m_data[0];
}
//read-only index char
const char & sfw::string::operator[](size_t index) const
{
	// TODO: Is this finished?
	return this->m_data[0];
}

//creat new array, copy old, clear old
void sfw::string::resize(size_t size)
{
	// TODO:
}
//ste first char to '\0'
void sfw::string::clear()
{
	// TODO:
}
//T/F if fisrt char is '\0'
bool sfw::string::empty() const
{
	// TODO:
	return false;
}

//const access to m_data
const char * sfw::string::cstring() const
{
	// TODO:
	return nullptr;
}


// Operator Overloads \\
// true if < alphabetical-ascending \\
//string | string
bool sfw::operator<(const string & a, const string & b)
{
	// TODO:
	return false;
}
//string | char array
bool sfw::operator<(const string & a, const char * b)
{
	// TODO:
	return false;
}
//char array | string
bool sfw::operator<(const char * a, const string & b)
{
	// TODO:
	return false;
}

//true if <= alphabetical-ascending
//string | string
bool sfw::operator<=(const string & a, const string & b)
{
	// TODO:
	return false;
}
//string | char array
bool sfw::operator<=(const string & a, const char * b)
{
	// TODO:
	return false;
}
bool sfw::operator<=(const char * a, const string & b)
{
	// TODO:
	return false;
}

//true if > alphabetical-descending \\
//string | string
bool sfw::operator>(const string & a, const string & b)
{
	// TODO:
	return false;
}
//string | char array
bool sfw::operator>(const string & a, const char * b)
{
	// TODO:
	return false;
}
//char array | string
bool sfw::operator>(const char * a, const string & b)
{
	// TODO:
	return false;
}

//true if >= alphabetical-ascending \\
//string | string
bool sfw::operator>=(const string & a, const string & b)
{
	// TODO:
	return false;
}
//string | char array
bool sfw::operator>=(const string & a, const char * b)
{
	// TODO:
	return false;
}
//char array | string
bool sfw::operator>=(const char * a, const string & b)
{
	// TODO:
	return false;
}

//true if != equal \\
//string | string
bool sfw::operator!=(const string & a, const string & b)
{
	// TODO:
	return false;
}
//string | char array
bool sfw::operator!=(const string & a, const char * b)
{
	// TODO:
	return false;
}
//char array | string
bool sfw::operator!=(const char * a, const string & b)
{
	// TODO:
	return false;
}

//true if equal \\
//string | string
bool sfw::operator==(const string & a, const string & b)
{
	// TODO:
	return false;
}
//string | char array
bool sfw::operator==(const string & a, const char * b)
{
	// TODO:
	return false;
}
//char array | string
bool sfw::operator==(const char * a, const string & b)
{
	// TODO:
	return false;
}


// Concatenation Operators \\
//add two strings
sfw::string sfw::operator+(const string & a, const string & b)
{
	// TODO:
	return string();
}
//add a string and a char array
sfw::string sfw::operator+(const string & a, const char * b)
{
	// TODO:
	return string();
}
//add a char array and a string
sfw::string sfw::operator+(const char * a, const string & b)
{
	// TODO:
	return string();
}

//add a string and a char
sfw::string sfw::operator+(const string & a, char b)
{
	// TODO:
	return string();
}
//add a char and a string
sfw::string sfw::operator+(char a, const string & b)
{
	// TODO:
	return string();
}


// in / out streaming \\
//outream console
std::ostream & sfw::operator<<(std::ostream & os, const string & p)
{
	// TODO:
	return os;
}
//instream console
std::istream & sfw::operator>>(std::istream & is, string & p)
{
	// TODO:
	return is;
}

const sfw::string sfw::literals::operator""_sfw(const char * a, size_t len)
{
	// TODO:
	return string();
}
