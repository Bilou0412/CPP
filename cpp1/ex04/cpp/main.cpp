#include <string>
#include <iostream>
#include <fstream>

std::string replaceAll(std::string str, const std::string &s1, const std::string &s2)
{
    size_t pos = 0;
    while ((pos = str.find(s1, pos)) != std::string::npos)
    {
        str = str.substr(0, pos) + s2 + str.substr(pos + s1.length());
        pos += s2.length();
    }
    return str;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
        return (std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl, 1);
    std::ifstream inputFile(argv[1]);
    if (!inputFile)
        return (std::cerr << "Error" << argv[1] << std::endl, 1);
    std::string content;
    char ch;
    while (inputFile.get(ch))
        content += ch;
    std::string replacedContent = replaceAll(content, argv[2], argv[3]);
    std::string outfileName = std::string(argv[1]) + ".replace";
    std::ofstream outputFile(outfileName.c_str());
    if (!outputFile)
        return (std::cerr << "Error " << argv[1] << ".replace" << std::endl,1);
    outputFile << replacedContent;
    return 0;
}
