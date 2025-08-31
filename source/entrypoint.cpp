// Name: [SJC] Simple Junk Code | Github: U5H5 | File: entrypoint.cpp
#include "junk.h"

auto __fastcall main() -> int32_t
{
    SetConsoleTitleA("Simple Junk Code");

    SIMPLE_JUNK_CODE(0);

    std::cout << "[+] press enter to exit ..." << std::endl;

    std::cin.get();
}