#include <iostream>
#include <cctype>
#include <cstring>
#include "Mystring.h"

//no args constructor
Mystring::Mystring()
    :str{nullptr}{
    str = new char[1];
    *str = '\0';
}

//overloaded constructor
Mystring::Mystring(const char *s)
:str{nullptr}{
    if (s == nullptr){
        str = new char[1];
        *str = '\0';
    }else{
        str = new char [std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

//copy constructor
Mystring::Mystring(const Mystring &source)
:str{nullptr}{
    str = new char [std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
    std::cout << "copy constructor is used" << std::endl;
}

//Move constructor
Mystring::Mystring(Mystring &&source)
:str{source.str}{
    source.str = nullptr;
    std::cout << "Move construcotr is used " << std::endl;
}

//desturctor
Mystring::~Mystring(){
        delete [] str;
}

//copy assignment
Mystring &Mystring ::operator=(const Mystring &rhs){
        if (this == &rhs)
            return *this;
        delete [] str;
        str = new char [ std::strlen(rhs.str) + 1];
        std::strcpy(str, rhs.str);
        return *this;
}

//Move assignment
Mystring &Mystring::operator=(Mystring &&rhs){
    if(this == &rhs)
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

//stream insert operator
std::ostream &operator<<(std::ostream &os, const Mystring &obj){
    os << obj.str;
    return os;
}
//stream extract operator
std::istream &operator>>(std::istream &is, Mystring &obj){
    char *buff = new char [1000];
    is >> buff;
    obj = Mystring {buff};
    delete [] buff;
    return is;

}

//equality operator
bool Mystring::operator==(const Mystring &rhs) const{
return(std::strcmp(str,rhs.str) == 0);
}

//not equal operator
bool Mystring::operator!=(const Mystring &rhs) const{
    return !(std::strcmp(str, rhs.str) == 0);
}

//less than operator
bool Mystring::operator<(const Mystring &rhs) const{
    return (std::strcmp(str, rhs.str) < 0 );
}

//greater than operator
bool Mystring::operator>(const Mystring &rhs) const{
    return(std::strcmp(str, rhs.str) > 0);
}

//lower case operator
Mystring Mystring::operator-() const{
    char *buff = new char [std::strlen(str) + 1];
    std::strcpy(buff, str);
    for(size_t i = 0; i < std::strlen(buff) ; i++)
        buff[i] = std::tolower(buff[i]);
    Mystring temp = {buff};
    delete [] buff;
    return temp;
}

//concatenate operator
Mystring Mystring::operator+(const Mystring &rhs) const{
    char *buff = new char [ std::strlen(str) + std::strlen(rhs.str) + 1 ];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp = {buff};
    delete [] buff;
    return temp;
}

//concatenate two strings operator
Mystring &Mystring::operator+=(const Mystring &rhs){
    *this = *this + rhs;
    return *this;
}

//repeat operator
Mystring Mystring::operator*(int n)const{
    size_t buff_size = std::strlen(str) * n + 1;
    char * buff = new char [buff_size];
    std::strcpy(buff, "");
    for(size_t i = 0; i < n; i++)
         std::strcpy(buff, str);
    Mystring temp = {buff};
    delete [] buff;
    return temp;
}

//repeat one string operator
Mystring &Mystring::operator*=(int n){
    *this = *this * n;
    return *this;
}

//upercase Pre operator
Mystring &Mystring::operator++(){
    for(size_t i = 0; i < std::strlen(str) ; i++)
        str[i] = std::toupper(str[i]);
    return *this;
}

//upercase Post operator
Mystring Mystring::operator++(int){
    Mystring temp (*this);
    operator++ ();
    return temp;
}

// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
int Mystring::get_length() const { return std::strlen(str); }

// string getter
const char *Mystring::get_str() const { return str; }

