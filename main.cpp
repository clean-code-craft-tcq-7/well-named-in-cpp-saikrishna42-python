#include "TelCoColorCoder.h"
#include "TestCase_TelCoColorCoder.h"

using namespace TelCoColorCoder;


int main() {
    //Displying the color coding
    Display_PairNumber_Major_minorColor();

    std::cout<<std::endl;
   
   //Testing the color coding
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
    return 0;
}
