#include "GameObject.h"

GameObject::GameObject()
{

}

GameObject::GameObject(const string&)
{
    ++count;
}


GameObject::~GameObject()
{
    --count;
}
