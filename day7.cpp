#include <iostream>
#include <vector>

int main() {

        std::vector<int> row{16,1,2,0,4,2,7,1,2,14};
        int moves = 10;

        int fule;
        for(int i = 0; i <= moves; i++){
                for(int l = 0; l < row.size(); l++){
                        fule += abs(row[l]-i);
                }
                std::cout << "moves: " << i << " fule: " << fule << "\n";
                fule = 0;
        }

        return 0;
}
