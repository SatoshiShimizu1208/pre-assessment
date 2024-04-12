#include <iostream>
#include <iomanip>

class Board
{
private:
public:
    void print_multiple()
    {
        for (int i = 1; i <= 12; i++)
        {
            for (int j = 1; j <= 12; j++)
            {
                std::cout << std::setw(4) << i * j;
            }
            std::cout << std::endl;
        }
    }
};

int main(void)
{
    Board board;
    board.print_multiple();
    return 0;
}