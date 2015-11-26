#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>
using std::string;

class GameObject
{
private:
    const string name;
protected:
    static int count;
public:
    GameObject();
    GameObject(const string&);
    ~GameObject();
    string getName( void );
    //virtual int getCount() = 0;
};

#endif //GAMEOBJECT_H
