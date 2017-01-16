#include <algorithm>
#include <locale>
#include "decrypt.hpp"

std::string caesar_cypher(std::string original, int shift) {
  std::string output = "";
  return std::accumulate(original.begin(),
                         original.end(),
                         output,
                         [&](std::string output, char current) {
    return output + decrypt_one_letter(current, shift);
  });
}

char decrypt_one_letter(char original, int shift) {
  std::locale loc;
  return std::isalpha(original, loc) ? 
    cypher_one_letter(original, shift) :
    original;
}

char cypher_one_letter(char original, int shift) {
  const int START_ORDER = get_start_order(original);
  int order_of_original_char = original - START_ORDER;
  return START_ORDER + (order_of_original_char + shift) % ALPHABET_LENGTH;
}

int get_start_order(char original) {
  std::locale loc;
  return std::isupper(original, loc) ?
    UPPER_CASE_START_ORDER :
    LOWER_CASE_START_ORDER;
}
