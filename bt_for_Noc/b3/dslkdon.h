#pragma once
#include <stdexcept>
using namespace std;

template <typename T>
class SinglyLinkedList{
private:
    Node* head;
    Node* tail;
    int size;

public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    SinglyLinkedList(const SinglyLinkedList&) = delete;
    SinglyLinkedList& operator=(const SinglyLinkedList&) = delete;
    void pushBack(const T& val);   // Thêm vào cuối
    bool popFront();               // Gỡ phần tử đầu
    bool remove(const T& val);     // Gỡ phần tử đầu tiên có giá trị == val
    bool contains(const T& val) const;
    T getHead() const;             // Xem phần tử đầu
    T get(int index) const;        // Lấy phần tử thứ index (từ 0)
    void set(int index, const T& val); // Gán phần tử thứ index
    int getSize() const;
    bool isEmpty() const;
    void clear();
};

template <typename T>
SinglyLinkedList<T>::SinglyLinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
    this->size = 0;
}

template <typename T>
SinglyLinkedList<T>::~SinglyLinkedList() {
    this->clear();
}

template <typename T>
void SinglyLinkedList<T>::pushBack(const T& val) {
    Node* newNode = new Node(val);
    if (this->head == nullptr) {
        this->head = newNode;
        this->tail = newNode;
    } else {
        this->tail->next = newNode;
        this->tail = newNode;
    }
    this->size++;
}

template <typename T>
bool SinglyLinkedList<T>::popFront() {
    if (this->head == nullptr) return false;
    Node* temp = this->head;
    this->head = this->head->next;
    if (this->head == nullptr) this->tail = nullptr; // danh sách vừa rỗng
    delete temp;
    this->size--;
    return true;
}

template <typename T>
bool SinglyLinkedList<T>::remove(const T& val) {
    Node* prev = nullptr;
    Node* curr = this->head;
    while (curr != nullptr && !(curr->data == val)) {
        prev = curr;
        curr = curr->next;
    }
    if (curr == nullptr) return false; // không tìm thấy

    if (prev == nullptr) this->head = curr->next; // xóa đầu
    else prev->next = curr->next;
    if (curr == this->tail) this->tail = prev;    // xóa cuối

    delete curr;
    this->size--;
    return true;
}

template <typename T>
bool SinglyLinkedList<T>::contains(const T& val) const {
    Node* curr = this->head;
    while (curr != nullptr) {
        if (curr->data == val) return true;
        curr = curr->next;
    }
    return false;
}

template <typename T>
T SinglyLinkedList<T>::getHead() const {
    if (this->head == nullptr) throw std::runtime_error("Danh sach rong");
    return this->head->data;
}

template <typename T>
T SinglyLinkedList<T>::get(int index) const {
    if (index < 0 || index >= this->size) throw std::out_of_range("Sai vi tri");
    Node* curr = this->head;
    for (int i = 0; i < index; i++) curr = curr->next;
    return curr->data;
}

template <typename T>
void SinglyLinkedList<T>::set(int index, const T& val) {
    if (index < 0 || index >= this->size) throw std::out_of_range("Sai vi tri");
    Node* curr = this->head;
    for (int i = 0; i < index; i++) curr = curr->next;
    curr->data = val;
}

template <typename T>
int SinglyLinkedList<T>::getSize() const {
    return this->size;
}

template <typename T>
bool SinglyLinkedList<T>::isEmpty() const {
    return this->size == 0;
}

template <typename T>
void SinglyLinkedList<T>::clear() {
    while (this->head != nullptr) this->popFront();
}