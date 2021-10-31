//
//  GroupList.cpp
//  Lab4
//
//  Created by Tarek Abdelrahman on 2020-10-25.
//  Copyright © 2020 Tarek Abdelrahman.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.

//  ECE244 Student:
//  Write the implementation (and only the implementation) of the GroupList class below

#include "GroupList.h"

GroupList::GroupList() {
    head = nullptr;
}

GroupList::~GroupList() {
    delete head;
}

GroupNode* GroupList::getHead() const {
    return head;
}

void GroupList::setHead(GroupNode* ptr) {
    delete head;
    head = ptr;
}

void GroupList::insert(GroupNode* s) {
    GroupNode* tail;
    while(tail->getNext() != nullptr){
        tail = tail->getNext();
    }
    tail->setNext(s);
}

GroupNode* GroupList::remove(string name) {
    // Edge case: head removal
    if(head->getName() == name){
        GroupNode* temp = head;
        head = head->getNext();
        return temp;
    }
    for(GroupNode* ptr = head; ptr->getNext() != nullptr; ptr = ptr->getNext()){
        if(ptr->getNext()->getName() == name){
            GroupNode* temp = ptr->getNext();
            ptr->setNext(ptr->getNext()->getNext());
            return temp;
        }
    }
    return nullptr;
}
void GroupList::print() const {
    for(GroupNode* ptr = head; ptr != nullptr; ptr = ptr->getNext()){
        ptr->print();
    }
}