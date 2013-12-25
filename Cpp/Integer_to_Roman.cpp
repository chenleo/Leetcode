class Solution {
public:
    string intToRoman(int num) {
         struct romandata_t { int value; char const* numeral; };
  static romandata_t const romandata[] =
     { 1000, "M",
        900, "CM",
        500, "D",
        400, "CD",
        100, "C",
         90, "XC",
         50, "L",
         40, "XL",
         10, "X",
          9, "IX",
          5, "V",
          4, "IV",
          1, "I",
          0, NULL }; // end marker
 
  std::string result;
  for (romandata_t const* current = romandata; current->value > 0; ++current)
  {
    while (num >= current->value)
    {
      result += current->numeral;
      num  -= current->value;
    }
  }
  return result;
    }
};
