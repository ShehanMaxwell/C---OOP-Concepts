#include <fstream>

int main() {
    std::ofstream file("abc.txt", std::ios::binary);
    file.seekp(10);
    file << "Hello, world!";
    return 0;
}