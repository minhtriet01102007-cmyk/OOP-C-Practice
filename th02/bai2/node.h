#pragma once

class Node{
    private:
        static int count; //Đếm số lượng node đc tạo ra
    public:
        int item;
        Node* next;
        int id;
        Node (int value);
        Node (const Node& other);
        void print() const;
};
