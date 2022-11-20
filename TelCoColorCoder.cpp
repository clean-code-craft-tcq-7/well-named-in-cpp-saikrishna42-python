#include "TelCoColorCoder.hpp"

using namespace TelCoColorCoder;

const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    
 const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    }; ;
    
int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);


ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    };

    void Display_PairNumber_Major_minorColor()
    {
        
        int pairNumber=1;
        for(;pairNumber<25;pairNumber++)
        {
          TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
             std::cout << pairNumber<<"     "<< colorPair.ToString() << std::endl;
        }
    }

    std::string ColorPair::ToString() {
                std::string colorPairStr = MajorColorNames[majorColor];
                colorPairStr += "        ";
                colorPairStr += MinorColorNames[minorColor];
                return colorPairStr;
            }
