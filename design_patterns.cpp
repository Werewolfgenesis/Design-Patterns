#include <iostream>

//singleton 
template <class T>
class Singleton
{
private:
    static Singleton* instance;
    T data;

    //default constructor is private so no objects of type Singleton can be created
    Singleton()
    {
        this->data = 0;
    }
public:
    static Singleton* getInstance()
    {
        if (!(this->instance))
        {
            this->instance = new Singleton;
        }
        return this->instance;
    }
    const T& get_data()
    {
        return this->data;
    }
    void set_data(const T& update)
    {
        this->data = update;
    }
};

int main()
{
    return 0;
}
