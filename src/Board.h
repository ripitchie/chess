#include "Piece.h"

#include <vector>

#ifndef BOARD_H
#define BOARD_H

using namespace std;


class Board {

private:

    /** @brief Dynamic array containing the Pieces present on the Board */
    vector<Piece> pieces;

    /** @brief 1D Array representing the Board */
    void * board;

    /**
     * @brief Constructor : allocates the board array on the heap
     */
    Board();
    /**
     * @brief Constructor : sets board to given array
     */
    // Board(void * _board);
    /**
     * @brief Destructor
     */
    ~Board();



    /** 
     * @brief Returns a Piece from its position on the Board
     * @param [in] file : a-h for standard board
     * @param [in] rank : 0-8 for standard board
     * @return The Piece located at file f and rank r
     */
    Piece & getPiece(char file, char rank);
    /**
     * @brief Sets the specified Piece at file f and rank r
     * @param [in] file : a-h for standard board
     * @param [in] rank : 0-8 for standard board
     * @param [in] piece : pointer to the Piece, in pieces array
     * return none
     */
    void setPiece(char file, char rank, Piece * piece);

    /**
     * @brief Returns a Board with 32 standard Pieces randomly placed
     * @param none
     */
    Board randomBoard();

    /**
     * @brief Create 32 standard Pieces in pieces array
     * @return none
     */
    void generatePieces();

    /**
     * @brief Initialize the Board to a standard chess placement
     * @param none
     * @return none
     */
    void initBoard();

















};

#endif