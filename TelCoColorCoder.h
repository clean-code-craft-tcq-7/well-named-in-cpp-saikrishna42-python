#ifndef TELCOCOLORCODER_H
#define TELCOCOLORCODER_H

#include <iostream>

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
            MajorColor getMajor() {
                return majorColor;
            }
            MinorColor getMinor() {
                return minorColor;
            }
        
            
            std::string ToString();
    };

  extern  ColorPair GetColorFromPairNumber(int pairNumber) ;
  extern int GetPairNumberFromColor(MajorColor major, MinorColor minor) ;
  extern void Display_PairNumber_Major_minorColor();
}

#endif
