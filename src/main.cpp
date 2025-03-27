#include <iostream>

bool hasArguments(int count);

int main(int argc, char* argv[])
{
    if(!hasArguments(argc)) {
        std::cerr << "Error: no project path provided." << std::endl;
        std::cerr << "\tUsage: glow <projectpath>" << std::endl;
        return 1;
    } 

    return 0;
}

bool hasArguments(int count)
{
    return(count > 1);
}
