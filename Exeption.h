#include <exception>
#include <string>
using namespace std;
class Exeptions : public exception
{
protected:
 string text;
public:
 virtual string what() = 0;
};
class NotFoundNodeExeption : public Exeptions
{ 
public:
 NotFoundNodeExeption()
 {
 text = "Node isn't exict";
 }
 NotFoundNodeExeption(string text) { this->text = text; }
 string what() { return text; }
};
