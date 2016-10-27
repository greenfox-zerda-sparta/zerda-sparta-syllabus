#include <iostream>

using namespace std;

void draw_characters(int count, char c) {
  for (int i = 0; i < count; ++i) {
    cout << c;
  }
}

void christmas_tree(char main_character, int times) {
  for (int row = 1; row <= times; ++row) {
    draw_characters(times - row, ' ');
    draw_characters(row * 2 - 1, main_character);
    cout << endl;
  }
}

int main() {
  christmas_tree('#', 8);

  return 0;
}

