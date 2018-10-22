#ifndef INTPP_H
#define INTPP_H
#include <string>

#define MAX_STR_SIZE 100

class Integer
{
private:
	int val;
public:
	Integer(int);
	~Integer();
	std::string to_str();
	friend Integer operator+(Integer &a, Integer &b);
	friend Integer operator-(Integer &a, Integer &b);
	friend Integer operator*(Integer &a, Integer &b);
	friend Integer operator/(Integer &a, Integer &b);
	friend Integer operator&(Integer &a, Integer &b);
	friend Integer operator|(Integer &a, Integer &b);
	friend Integer operator~(Integer &a);
	friend Integer operator^(Integer &a, Integer &b);
	friend Integer operator>>(Integer &a, Integer &b);
	friend Integer operator<<(Integer &a, Integer &b);
};

Integer operator+(Integer &a, Integer &b);
Integer operator-(Integer &a, Integer &b);
Integer operator*(Integer &a, Integer &b);
Integer operator/(Integer &a, Integer &b);
Integer operator&(Integer &a, Integer &b);
Integer operator|(Integer &a, Integer &b);
Integer operator~(Integer &a);
Integer operator^(Integer &a, Integer &b);
Integer operator>>(Integer &a, Integer &b);
Integer operator<<(Integer &a, Integer &b);

#endif
