#ifndef TELCOCOLORCODER_H
#define TELCOCOLORCODER_H

#include <iostream>
#define Max_PairColor 26;

namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor):
                majorColor(major), minorColor(minor)
                {}
            MajorColor getMajor();
            MinorColor getMinor();
            std::string ToString();
           
    };

  extern  ColorPair GetColorFromPairNumber(int pairNumber) ;
  extern int GetPairNumberFromColor(MajorColor major, MinorColor minor) ;
  extern void Display_PairNumber_Major_minorColor();
}

#endif
