#include <iostream>
#include <string>
std::string _fresh(_std::string _subInput)
{
    std::string _subOutput(_subInput);
    while (_subOutput.find(' ') != std::string::npos)
    _subOutput.erase(_subOutput.begin()+_subOutput.find(' '));
    return _subOutput;
}
std::string _input;
std::string _output;
std::string _Differ(std::string _subInput,int _flag);
std::string _ProductRule(std::string _subInput);
std::string _ChainRule(std::string _subInput);
std::string _SinRule(std::string _subInput);
std::string _CosRule(std::string _subInput);
std::string _PowerRule(std::string _subInput);
std::string _QuontientRule(std::string _subInput);
int main()
{
}