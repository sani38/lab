#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    // Эта запись конструктора идентична предыдущей
    ListNode() {
        val = 0;
        next = nullptr;
    }
    // Конструктор с параметром данных
    ListNode(int x) : val(x), next(nullptr) {}
    // Конструктор с параметром данных и указателем на следующий элемент списка
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class MyLinkedList {
public:
    MyLinkedList();
    size_t get_size();	// Получить размер списка
    void add_at_tail(int val);	// Добавить элемент в конец списка
    void add_at_index(size_t index, int val); // Добавить элемент по индексу
    void delete_at_index(size_t index);	// Удалить элемент по индексу
    void addAtHead(int val);
    void print();
    void reverse();
private:
    ListNode* head;
    size_t size;
};

MyLinkedList::MyLinkedList() : head(nullptr), size(0) {}

size_t MyLinkedList::get_size() { return size; }

void MyLinkedList::add_at_tail(int val) {
    ++size;
    // Создать новый экземляр ListNode или новый элемент списка
    ListNode* newNode = new ListNode(val, nullptr);

    if (head == nullptr) {
        head = newNode;
        return;
    }
    // Двигаем указатель it до достижения последнего элемента списка
    ListNode* it = head;
    while (it->next != nullptr)
        it = it->next;

    // Присваиеваем указателю на следующий элемент (next) текущего последнего элемента
    // адрес нового последнего элемента
    it->next = newNode;
}

void MyLinkedList::delete_at_index(size_t index) {
    if (index < 0 || index >= size) {
        std::cerr << "Index is out of bounds of the list. "
            "Current size: " << size << "\n";
        return;
    }
    --size;

    ListNode* prev = head;

    if (index == 0) {
        head = head->next;
        delete prev;
    }

    ListNode* curr = head->next;
    size_t pos = 0;

    while (prev != nullptr && pos < index - 1) {
        prev = prev->next;
        curr = curr->next;
        ++pos;
    }
    prev->next = curr->next;
    delete curr;
}
    
void MyLinkedList::add_at_index(size_t index, int val) {
    if (index < 0 || index >= size) {
        std::cerr << "Index is out of bounds of the list. "
            "Current size: " << size << "\n";
        return;
    }
    ++size;

    ListNode* prev = head;
    ListNode* curr = head->next;
    size_t pos = 0;

    while (prev != nullptr && pos < index - 1) {
        prev = prev->next;
        curr = curr->next;
        ++pos;
    }
    ListNode* newNode = new ListNode(val, curr);
    prev->next = newNode;
}

void MyLinkedList::addAtHead(int val) {
    ++size;
    ListNode* newNode = new ListNode(val, head);
    head = newNode;
}

void MyLinkedList::print() {
    ListNode* curr = head;

    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->next;
    }

    cout << endl;
}

void MyLinkedList::reverse() {
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
}

int main() {
    int arr[5] = { 1, 2, 3, 4, 5 };
    MyLinkedList* obj = new MyLinkedList();

    for (int val : arr) {
        obj->add_at_tail(val);
    }

    obj->reverse();

    // Отобразить элементы в обратном порядке
    ListNode* curr = obj->head;
    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->next;
    }

    delete obj;

    return 0;
}
