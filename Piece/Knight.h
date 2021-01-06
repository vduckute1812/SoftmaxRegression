#include "Piece.h"

class Knight: public Piece
{
private:
    /* data */
    public:
        Knight(Position position, Alliance alliance, PieceType type);
        virtual ~Knight();
};

