#include "Map.h"

template <class T, class U, template<class V> class K> // K<V>
Map<T, U, K>::Map() : list1(11, T()), list2(6, U()){ // cách ni thì gọi vô hàm dựng có tham số luôn
    // goi ham dung khac: Vector<T>(int, T);
    // cách này sẽ gọi hàm dựng khởi tạo mặc định nữa -> không nên
    // list1 = K<T>(10, T()); 
    // list2 = K<U>(5, U());
    cout << "map" << endl;
}

template <class T, class U, template<class V> class K> // K<V>
Map<T, U, K>::~Map(){ 
}