#include <iostream>
#include <string.h>

/* ######    CPP00    ######  */
//https://42-cursus.gitbook.io/guide/rank-04/cpp-00-04-doing/cpp00


/* STR AT [i]
	str.at[i]
*/
/* STRLEN
int main()
{
	std::string str = "Hello World!";
	std::cout << "Length of the string is: " << str.length() << std::endl;
}*/
/* STRCAT
std::string fname = "Jano";
std::string lname = "Mrkvicka";
std::string together = fname + " " + lname;
std::cout << "Both together: " << together << std::endl;
*/

/* STRNSTR 
std::string str = "Hello world!";
size_t found = str.find("world");
if (found != std::string::npos) {
    std::cout << "'world' found at index: " << found << std::endl;
}
*/
/* SUBSTR
std::string str = "Hello world!";
std::string subStr = str.substr(6, 5);  // Extracts "world"
std::cout << "Substring: " << subStr << std::endl;
*/