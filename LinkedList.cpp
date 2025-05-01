#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() {head = nullptr;}

LinkedList::LinkedList(int* array, int len) {
    head = nullptr;
    for (int i = len - 1; i >= 0; i--) {
        Node* newNode = new Node(array[i]);
        newNode->setLink(head);
        head = newNode;
    }
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->getLink();
        delete temp;
    }
}

void LinkedList::insertPosition(int pos, int newNum) {
    Node* newNode = new Node(newNum);

    if (pos <= 1 || head == nullptr) {
        newNode->setLink(head);
        head = newNode;
        return;
    }

    Node* current = head;
    for (int i = 1; i < pos - 1 && current->getLink() != nullptr; i++) {
        current = current->getLink();
    }

    newNode->setLink(current->getLink());
    current->setLink(newNode);
}

bool LinkedList::deletePosition(int pos) {
    if (pos < 1 || head == nullptr) {
        return false;
    }

    if (pos == 1) {
        Node* temp = head;
        head = head->getLink();
        delete temp;
        return true;
    }

    Node* current = head;
    for (int i = 1; i < pos - 1 && current->getLink() != nullptr; i++) {
        current = current->getLink();
    }

    Node* target = current->getLink();
    if (target == nullptr) return false;

    current->setLink(target->getLink());
    delete target;
    return true;
}

int LinkedList::get(int pos) {
    if (pos < 1) return std::numeric_limits<int>::max();

    Node* current = head;
    for (int i = 1; i < pos && current != nullptr; i++) {
        current = current->getLink();
    }

    if (current == nullptr) return std::numeric_limits<int>::max();
    return current->getData();
}

int LinkedList::search(int target) {
    Node* current = head;
    int index = 1;

    while (current != nullptr) {
        if (current->getData() == target) return index;
        current = current->getLink();
        index++;
    }

    return -1;
}

void LinkedList::printList() {
    if (head == nullptr) return;

    std::cout << "[";
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->getData();
        if (current->getLink() != nullptr) std::cout << " ";
        current = current->getLink();
    }
    std::cout << "]" << std::endl;
}
