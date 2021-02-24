#ifndef PIECE_H
#define PIECE_H

enum Set {Black = 0, White = 1};
enum Type {Queen, King, Knight, Bishop, Rook, Pawn};

class Piece {

private:

    Piece();
    Piece(Type t, Set s);
    ~Piece();

public:

    Set set;
    Type type;

    void moveTo(char f, char r);


};

#endif