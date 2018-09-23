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
        std::cin >> _input;
        _input=_fresh(_input);
        _output = _Differ(_input,2);
        std::cout<< _output;
}
std::string _Differ(std::string _subInput,int _flag)
{
    int _length=_subInput.length();
    std::string _subOutput('');
    int _startpoint=0;
    int _bracketCount = 0;
    if (_flag==2) 
    {
        for (int i=0;i<_length;i++)
        {
            if ( _subInput[i] == '(' ) _bracketCount++;
            if ( _subInput[i] == ')' ) _bracketCount--;
            if ( _subInput[i] == '+' && _bracketCount == 0)
            {
                flag=1;
                std::string _temporary(_subInput.begin()+_startpoint,_subInput.begin()+i);
                _subOutput+=_Differ(_temporary,2)+'+';
                _startpoint=i+1;
            }
            if ( _subInput[i] == '+' && _bracketCount == 0)
            {
                flag=1;
                std::string _temporary(_subInput.begin()+_startpoint,_subInput.begin()+i);
                _subOutput+=_Differ(_temporary,2)+'-';
                _startpoint=i+1;
            }
        }
        if (_flag==1)
        {
            std::string _temporary(_subInput.begin()+_startpoint,_subInput.end());
            _subOutput+=_Differ(_temporary,2);
            return _subOutput;
        }
        else
            return _Differ(_subInput,1);
        
    }
    int _base=1;
    int _underBase=1;
    int _ifQuot=0;
    if (_flag==1)
    {
        int _tempNum=0;
        int _ifnum=0;
        for (int i=0;i<_length;i++)
        {
            if ('0' <= _subInput[i] and _subInput[i] <= '9')
            {
                
            }
        }
    }

    
}