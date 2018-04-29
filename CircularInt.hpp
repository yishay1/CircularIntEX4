#include<iostream>

using namespace std;

class CircularInt
{
	public:
		int min;
		int max;
		int range;
		int num;
	
		CircularInt(int min, int max);
		CircularInt();
		void norm();
		friend CircularInt operator+(CircularInt& first, CircularInt& sec);
		friend CircularInt operator -(const CircularInt&,const CircularInt&);
		friend CircularInt operator -(int,const CircularInt&);
		friend CircularInt operator -(const CircularInt&,int);
		friend CircularInt operator -(const CircularInt&);
		//CircularInt operator -();
		friend CircularInt operator +(const CircularInt&,int);
		friend CircularInt operator +(int,const CircularInt&);
		//friend CircularInt operator *(int,const CircularInt&);
		friend CircularInt operator *(const CircularInt&,int);
		friend CircularInt operator*(CircularInt& first, CircularInt& sec);
		CircularInt& operator--(int);
		CircularInt& operator++(int);
		CircularInt& operator--();
		CircularInt& operator++();
		friend CircularInt operator/(const CircularInt&, int);
		friend CircularInt operator/(int,const CircularInt&);
		CircularInt& operator/=(int);
		CircularInt& operator*=(int);
		CircularInt& operator*=(const CircularInt&);	
		CircularInt& operator+=(int);
		void operator=(int);
		CircularInt& operator+=(const CircularInt&);
		CircularInt& operator-=(int);
		CircularInt& operator-=(const CircularInt&);
		void operator=(const CircularInt&);
		friend ostream& operator<< (ostream& os, const CircularInt& c);
		friend istream& operator>> (istream& is, CircularInt& c);
		CircularInt& operator>> (const CircularInt&);
		bool operator ==(const CircularInt&);
		bool operator ==(int);
		friend bool operator==(int i, CircularInt& c);
		bool operator !=(const CircularInt&);
		friend bool operator!=(int i, CircularInt& c);
		friend bool operator!=(CircularInt& c,int i);
		bool operator >(int);
		friend bool operator>(int, CircularInt&);
		bool operator >(const CircularInt&);
		bool operator >=(int);	
		bool operator >=(const CircularInt&);
		friend bool operator>=(int, CircularInt&);
		bool operator <(int);	
		bool operator <(const CircularInt&);
		friend bool operator<(int, CircularInt&);
		bool operator <=(int);
		bool operator <=(const CircularInt&);
		friend bool operator<=(int, CircularInt&);
};
