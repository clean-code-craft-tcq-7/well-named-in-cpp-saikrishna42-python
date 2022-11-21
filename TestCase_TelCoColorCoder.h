
#include "TelCoColorCoder.h"
#include <assert.h>

using namespace TelCoColorCoder;

//This function check based on given number correct major and minor color is choosen or not
void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor)
{
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

//This function check based on given major and minor color the correct pair number is choosen or not
void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    int get_pairNr_based_major_minor_clr = TelCoColorCoder::GetPairNumberFromColor(major, minor); //Getting the pair number
    std::cout << "Got pair number " << get_pairNr_based_major_minor_clr << std::endl;
    assert(get_pairNr_based_major_minor_clr == expectedPairNumber);
}

