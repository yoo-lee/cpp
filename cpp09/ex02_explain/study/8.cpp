#include <iostream>


class LinkedList
{
	private:
	Node head;

	public:
	
}
// リストのノードを表す構造体
struct Node {
    int data;       // ノードのデータ
    Node* next;     // 次のノードへのポインタ

    Node(int value) : data(value), next(nullptr) {}
};

// リストのクラス
class LinkedList {
private:
    Node* head;     // 先頭ノードへのポインタ

public:
    LinkedList() : head(nullptr) {}

    // リストの末尾に要素を追加
    void append(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // リストの要素を表示
    void display() {
        Node* current = head;
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList list;

    // 要素の追加
    list.append(10);
    list.append(20);
    list.append(30);

    // 要素の表示
    list.display();

    return 0;
}
