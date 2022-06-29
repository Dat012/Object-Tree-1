#ifndef BASE_H
#define BASE_H
#include <string>
#include <vector>
using namespace std;
class Base
{
private:
    string name;
    Base* parent;
    vector <Base*> heirs;
public:
    Base(Base* parent = nullptr, string name = "kal");
    void set_name(string name);
    string get_name();
    void print_tree();
    void set_parent(Base* parent);
    Base* get_parent();
    //~Base();
};
#endif