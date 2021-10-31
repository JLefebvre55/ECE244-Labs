//
//  ShapeList.cpp
//  Lab4
//
//  Created by Tarek Abdelrahman on 2020-10-25.
//  Copyright © 2020 Tarek Abdelrahman.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.

//  ECE244 Student:
//  Write the implementation (and only the implementation) of the ShapeList class below

#include "ShapeList.h"

ShapeList::ShapeList(){
    head = nullptr;
}

ShapeList::~ShapeList(){
    delete head;
}

ShapeNode* ShapeList::getHead() const {
    return head;
}

void ShapeList::setHead(ShapeNode* ptr){
    head = ptr;
}

ShapeNode* ShapeList::find(string name) const {
    for(ShapeNode* ptr = head; ptr != nullptr; ptr = ptr->getNext()){
        if(ptr->getShape()->getName() == name){
            return ptr;
        }
    }
    return nullptr;
}

void ShapeList::insert(ShapeNode* s){
    ShapeNode* tail;
    while(tail->getNext() != nullptr){
        tail = tail->getNext();
    }
    tail->setNext(s);
}

ShapeNode* ShapeList::remove(string name){
    // Edge case: head removal
    if(head->getShape()->getName() == name){
        ShapeNode* temp = head;
        head = head->getNext();
        return temp;
    }
    for(ShapeNode* ptr = head; ptr->getNext() != nullptr; ptr = ptr->getNext()){
        if(ptr->getNext()->getShape()->getName() == name){
            ShapeNode* temp = ptr->getNext();
            ptr->setNext(ptr->getNext()->getNext());
            return temp;
        }
    }
    return nullptr;
}

void ShapeList::print() const {
    for(ShapeNode* ptr = head; ptr != nullptr; ptr = ptr->getNext()){
        ptr->print();
    }
}