#include <iostream>
#include <fstream>
#include "kolaborasi/library/input.h"
#include "kolaborasi/proses.h"
#include "kolaborasi/library/output.h"

using namespace std;

int main() {
  Input input;
  input.cetak();
  input.tofile();

  Proses proses;
  proses.getData();
  proses.tofile();

  Output output;
  output.getData();
  output.cetak();
  
  return 0;
}