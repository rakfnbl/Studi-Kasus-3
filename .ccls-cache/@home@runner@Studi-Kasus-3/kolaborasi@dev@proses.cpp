#include <fstream>
#include <iostream>
#include "kolaborasi/library/proses.h"
using namespace std;
int main() {
  Proses proses;
  proses.getData();
  proses.toFile();
  return 0;
}