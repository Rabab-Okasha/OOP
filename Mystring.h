//
// Created by rabab on 6/19/2024.
//
#ifndef OOPPROJECTS_MYSTRING_H
#define OOPPROJECTS_MYSTRING_H

class Mystring {
    //stream insert operator
    friend std::ostream &operator<<(std::ostream &os, const Mystring &obj);
    //stream extract operator
    friend std::istream &operator>>(std::istream &is, Mystring &obj);
private:
    char *str;
public:
    //no args constructor
    Mystring();
    //overloaded constructor
    Mystring(const char *s);
    //move constructor
    Mystring(Mystring && source);
    //copy constructor
    Mystring(const Mystring &source);
    //desturctor
    ~Mystring();
    //copy assignment
    Mystring &operator=(const Mystring &rhs);
    //move assignment
    Mystring &operator=(Mystring &&rhs);
    //equality operator
    bool operator==(const Mystring &rhs) const;
    //lower case operator
    Mystring operator-() const;
    //concatenate operator
    Mystring operator+(const Mystring &rhs) const;
    //repeat operator
    Mystring operator*(int n)const;
    //repeat one string operator
    Mystring &operator*=(int n);
    //less than operator
    bool operator<(const Mystring &rhs) const;
    //greater than operator
    bool operator>(const Mystring &rhs) const;
    //not equal operator
    bool operator!=(const Mystring &rhs) const;
    //concatenate two strings operator
    Mystring &operator+=(const Mystring &rhs);
    //upercase Pre operator
    Mystring &operator++();
    //upercase Post operator
    Mystring operator++(int);
    //display method
    void display () const;
    // getters
    int get_length() const;
    const char *get_str() const;
};
#endif

