#ifndef PIECE_H
#define PIECE_H

#include <mysql/mysql.h>

typedef unsigned int Position;

enum Alliance { WHITE, BLACK };

enum PieceType { 
    ROOK, 
    KNIGHT,
    BISHOP,
    QUEEN,
    KING,
    PAWN
};

enum PieceValue
{
    PAWN_VALUE =    100,
    KNIGHT_VALUE =  320,
    BISHOP_VALUE =  350,
    ROOK_VALUE =    500,
    QUEEN_VALUE =   900,
    KING_VALUE =    20000
};

class Piece
{
public:
    explicit Piece(Position position, Alliance alliance, PieceType type);
    virtual ~Piece();

protected:
    Position            m_piecePosition;
    Alliance			m_pieceAlliance;
    PieceType           m_pieceType;
};

#endif // PIECE_H
