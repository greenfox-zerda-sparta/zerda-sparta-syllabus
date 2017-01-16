#ifndef DECRYPT_H
#define DECRYPT_H

#include <string>

const int ALPHABET_LENGTH = 26;
const int LOWER_CASE_START_ORDER = 'a';
const int UPPER_CASE_START_ORDER = 'A';

std::string caesar_cypher(std::string original, int shift);
char decrypt_one_letter(char original, int shift);
char cypher_one_letter(char original, int shift);
int get_start_order(char original);

#endif
