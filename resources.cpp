#include <iostream>
#include <string.h>

/* ######    CPP00    ######  */
//https://42-cursus.gitbook.io/guide/rank-04/cpp-00-04-doing/cpp00


 STR AT [i]
	str.at[i]

 STRLEN
int main()
{
	std::string str = "Hello World!";
	std::cout << "Length of the string is: " << str.length() << std::endl;
}
 STRCAT
std::string fname = "Jano";
std::string lname = "Mrkvicka";
std::string together = fname + " " + lname;
std::cout << "Both together: " << together << std::endl;


STRNSTR 
std::string str = "Hello world!";
size_t found = str.find("world");
if (found != std::string::npos) {
    std::cout << "'world' found at index: " << found << std::endl;
}

 SUBSTR
std::string str = "Hello world!";
std::string subStr = str.substr(6, 5);  // Extracts "world"
std::cout << "Substring: " << subStr << std::endl;




/* ######    CPP01    ######  */
/* https://42-cursus.gitbook.io/guide/rank-04/cpp-00-04-doing/cpp01 */
 C : 
int main(void)
{
    int *ptr; // declare the pointer
    
    ptr = malloc(sizeof(int)); // allocate the memory
    *ptr = 45; // assign a value
    printf("ptr value: %d\n", *ptr); // print the value
    free(ptr); // deallocate the memory
    return (0);
}
C++ :

int main(void)
{
    int *ptr; // declare the pointer
    
    ptr = new int; // allocate memory
    *ptr = 45 // assign a value
    std::cout << "ptr value: " << *ptr << std::endl; // print the value
    delete ptr; // deallocate memory
    return (0);
}

/*  Now Dynamically allocated array */
C: 
int main(void)
{
    int *ptr;
    
    ptr = malloc (10 * sizeof(int));
    free(ptr);
    return (0);
}
CPP:
int main(void)
{
    int *ptr;
    
    ptr = new int[10];
    delete [] ptr;
    return (0);
}