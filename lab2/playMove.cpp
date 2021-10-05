//
//  playMove.cpp
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
//  ECE244 Student: write your code for playMove in this file

#include "globals.h"
#include "GameState.h"

void playMove(GameState& game_state) {
    game_state.set_moveValid(game_state.get_gameBoard(game_state.get_selectedRow(), game_state.get_selectedColumn()) == Empty);
    if(game_state.get_moveValid() && !game_state.get_gameOver()){
        game_state.set_gameBoard(game_state.get_selectedRow(), game_state.get_selectedColumn(), game_state.get_turn() ? X : O);

        if(game_state.get_gameBoard(0, 0) == X && game_state.get_gameBoard(0, 1) == X && game_state.get_gameBoard(0, 2) == X){
            game_state.set_winCode(1);
            game_state.set_gameOver(true);
        } else if(game_state.get_gameBoard(1, 0) == X && game_state.get_gameBoard(1, 1) == X && game_state.get_gameBoard(1, 2) == X){
            game_state.set_winCode(2);
            game_state.set_gameOver(true);
        } else if(game_state.get_gameBoard(2, 0) == X && game_state.get_gameBoard(2, 1) == X && game_state.get_gameBoard(2, 2) == X){
            game_state.set_winCode(3);
            game_state.set_gameOver(true);
        } else if(game_state.get_gameBoard(0, 0) == X && game_state.get_gameBoard(1, 0) == X && game_state.get_gameBoard(2, 0) == X){
            game_state.set_winCode(4);
            game_state.set_gameOver(true);
        } else if(game_state.get_gameBoard(0, 1) == X && game_state.get_gameBoard(1, 1) == X && game_state.get_gameBoard(2, 1) == X){
            game_state.set_winCode(5);
            game_state.set_gameOver(true);
        } else if(game_state.get_gameBoard(0, 2) == X && game_state.get_gameBoard(1, 2) == X && game_state.get_gameBoard(2, 2) == X){
            game_state.set_winCode(6);
            game_state.set_gameOver(true);
        } else if(game_state.get_gameBoard(0, 0) == X && game_state.get_gameBoard(1, 1) == X && game_state.get_gameBoard(2, 2) == X){
            game_state.set_winCode(7);
            game_state.set_gameOver(true);
        } else if(game_state.get_gameBoard(0, 2) == X && game_state.get_gameBoard(1, 1) == X && game_state.get_gameBoard(2, 0) == X){
            game_state.set_winCode(8);
            game_state.set_gameOver(true);
        } else if(game_state.get_gameBoard(0, 0) == O && game_state.get_gameBoard(0, 1) == O && game_state.get_gameBoard(0, 2) == O){
            game_state.set_winCode(1);
            game_state.set_gameOver(true);
        } else if(game_state.get_gameBoard(1, 0) == O && game_state.get_gameBoard(1, 1) == O && game_state.get_gameBoard(1, 2) == O){
            game_state.set_winCode(2);
            game_state.set_gameOver(true);
        } else if(game_state.get_gameBoard(2, 0) == O && game_state.get_gameBoard(2, 1) == O && game_state.get_gameBoard(2, 2) == O){
            game_state.set_winCode(3);
            game_state.set_gameOver(true);
        } else if(game_state.get_gameBoard(0, 0) == O && game_state.get_gameBoard(1, 0) == O && game_state.get_gameBoard(2, 0) == O){
            game_state.set_winCode(4);
            game_state.set_gameOver(true);
        } else if(game_state.get_gameBoard(0, 1) == O && game_state.get_gameBoard(1, 1) == O && game_state.get_gameBoard(2, 1) == O){
            game_state.set_winCode(5);
            game_state.set_gameOver(true);
        } else if(game_state.get_gameBoard(0, 2) == O && game_state.get_gameBoard(1, 2) == O && game_state.get_gameBoard(2, 2) == O){
            game_state.set_winCode(6);
            game_state.set_gameOver(true);
        } else if(game_state.get_gameBoard(0, 0) == O && game_state.get_gameBoard(1, 1) == O && game_state.get_gameBoard(2, 2) == O){
            game_state.set_winCode(7);
            game_state.set_gameOver(true);
        } else if(game_state.get_gameBoard(0, 2) == O && game_state.get_gameBoard(1, 1) == O && game_state.get_gameBoard(2, 0) == O){
            game_state.set_winCode(8);
            game_state.set_gameOver(true);
        } else {
            game_state.set_winCode(0);
            game_state.set_turn(!game_state.get_turn());
        }
    }
}

/*
// Topleft-Bottomright diagonal
bool diag1 = true;
for(int i = 0; i < boardSize; i++){
    diag1 &= game_state.get_gameBoard(i, i);
}

// Topright-Bottomleft diagonal
bool diag2 = true;
for(int i = 0; i < boardSize; i++){
    diag2 &= game_state.get_gameBoard(i, boardSize-i);
}

for(int x = 0; x < boardSize; x++){

    // Vertical win - column x
    bool vert = true;
    for(int y = 0; y < boardSize; y++){
        vert &= game_state.get_gameBoard(y, x);
    }

    // Horizontal win - row x
    bool horiz = true;
    for(int y = 0; y < boardSize; y++){
        horiz &= game_state.get_gameBoard(x, y);
    }

    gameOver |= vert || horiz || diag1 || diag2;
}
*/