template <typename T>
struct Node{
    T data;
    Node* next;
    explicit Node(const T& val) : data(val), next(nullptr){}
};