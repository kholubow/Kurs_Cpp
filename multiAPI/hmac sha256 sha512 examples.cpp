/*
std::string get_hmac(
	std::string key, 
	const std::string &msg, 
	const TypeHash type, 
	const bool is_hex = true, 
	const bool is_upper = false);
*/


/*
#include <iostream>
#include <hmac.hpp>

int main() {
	std::string input("grape");
	std::string key("12345");
	

    std::string output1 = hmac::get_hmac(key, input, hmac::TypeHash::SHA256);
    std::cout << "get_hmac('"<< key << "','" << input << "',SHA256): " << output1 << std::endl;
    std::cout << "The answer should be: "
        "7632ac2e8ddedaf4b3e7ab195fefd17571c37c970e02e169195a158ef59e53ca"
        << std::endl << std::endl;


    std::string output2 = hmac::get_hmac(key, input, hmac::TypeHash::SHA512);
    std::cout << "get_hmac('"<< key << "','" << input << "',SHA512): " << output2 << std::endl;
    std::cout << "The answer should be: "
        "c54ddf9647a949d0df925a1c1f8ba1c9d721a671c396fde1062a71f9f7ffae5dc10f6be15be63bb0363d051365e23f890368c54828497b9aef2eb2fc65b633e6"
        << std::endl << std::endl;
	return 0;
}
*/
