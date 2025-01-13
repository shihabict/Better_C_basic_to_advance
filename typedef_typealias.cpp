#include <iostream>
#include<vector>

//assign new identifier to a custom datatype, enhance code readbility and reduce typos

// typedef std::vector<std::pair<std::string,int>> pairlist_t;

using parlist_t = std::vector<std::pair<std::string,int>>;

// typedef std::string text_t;
using text_t = std::string;

// typedef int number_t;
using number_t = int;


int main(){
    text_t a = "Hello typedef";
    number_t num = 101;

    std::cout << a << " " << num << "!" << "\n";
    

    return 0;
}