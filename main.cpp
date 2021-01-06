#include "Piece/Piece.h"
#include "db_utils/db_utils.cpp"

int main() {
    Piece piece = Piece(1, Alliance::WHITE,PieceType::ROOK);
    show_tables();
    return 0;
}