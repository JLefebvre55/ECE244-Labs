//
//  GameState.cpp
//  TicTacToe
//
//  Created by Tarek Abdelrahman on 2019-06-07.
//  Modified by Tarek Abdelrahman on 2020-09-17.
//  Copyright © 2019-2020 Tarek Abdelrahman. All rights reserved.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.
//

#include "globals.h"
#include "GameState.h"

// ECE244 Student: add you code below

GameState::GameState(){
    this->selectedRow = 0;
    this->selectedColumn = 0;
    this->moveValid = true;
    this->gameOver = false;
    this->winCode = 0;
    this->turn = true;
    for(int row = 0; row < boardSize; row++){
        for(int col = 0; col < boardSize; col++){
            this->gameBoard[row][col] = Empty;
        }
    }
}

int GameState::get_selectedRow(){
    return this->selectedRow;
}

int GameState::get_selectedColumn(){
    return this->selectedColumn;
}

void GameState::set_selectedRow(int value){
    if(value >= 0 && value < boardSize){
        this->selectedRow = value;
    }
}

void GameState::set_selectedColumn(int value){
    if(value >= 0 && value < boardSize){
        this->selectedColumn = value;
    }
}

bool GameState::get_moveValid(){
    return this->moveValid;
}

void GameState::set_moveValid(bool value){
    this->moveValid = value;
}

bool GameState::get_gameOver(){
    return this->gameOver;
}

void GameState::set_gameOver(bool value){
    this->gameOver = value;
}

int GameState::get_winCode(){
    return this->winCode;
}

void GameState::set_winCode(int value){
    this->winCode = value;
}

bool GameState::get_turn(){
    return this->turn;
}

void GameState::set_turn(bool value){
    this->turn = value;
}

int GameState::get_gameBoard(int row, int col){
    return this->gameBoard[row][col];
}

void GameState::set_gameBoard(int row, int col, int value){
    if(value == Empty || value == X || value == O){
        this->gameBoard[row][col] = value;
    }
}