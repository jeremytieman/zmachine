#include <file.h>
#include <iostream>
#include <stack>
#include <vector>

using namespace machina::zmachine;
using namespace std;

int main(int argc, char* argv[])
{
    if (2 != argc)
    {
        cout << "usage: " << argv[0] << " path_to_story_file" << endl;
        return 0;
    }

    auto buffer = readBinaryFile(argv[1]);
    // std::stack<?> zStack;
    unsigned int pc;

    return 0;
}