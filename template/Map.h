#include "Vector.h"

template<typename K, typename V, template<typename T> class U> // U<T>
class Map
{
private:
    U<K> key;   // U<T>
    U<V> value;
public:
    Map(const int&, const int&);
    ~Map();
    void Show();
    //<<
};

template<typename K, typename V, template<typename T> class U> // U<T>
Map<K, V, U>::Map(const int& m, const int& n) : key(m), value(n)
{
}

template<typename K, typename V, template<typename T> class U> // U<T>
Map<K, V, U>::~Map()
{
}

template<typename K, typename V, template<typename T> class U> // U<T>
void Map<K, V, U>::Show()
{
    cout << this->key << endl << this->value << endl;
}

template class Map<int, double, Vector>;