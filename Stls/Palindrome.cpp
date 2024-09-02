#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <iomanip>
#include <deque>

using namespace std;

bool is_palindrome(const string &s){
    deque<char> d;
    for (char c: s) {
        if (isalpha(c))
            d.push_back(toupper(c));
    }
    char c1{}, c2{};
    while(d.size() > 1){
        c1 = d.front();
        c2 = d.back();
        d.pop_front();
        d.pop_back();
        if(c1 == c2)
            return true;
    }
    return false;

}

int main(){
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
                                           "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
                                           "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };

    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
