#include <iostream> // I/O operations
#include <fstream> // file stream
#include <ostream> // writing to files
#include <string> // to make printing strings easier
#include <libgen.h>
#include <stdlib.h>
#include <limits.h>

using namespace std; // cleaner code

// exit code legend
// 0 -> No errors
// 1 -> incorrect usage
// 2 -> File not found
// 3 -> Destination unavailable

int main(int argc, char* argv[]){ // parameters inside main will allow us to have command line arguments
  if(argc < 2){
    cerr << "Usage: cp_clone [FILE] [DESTINATION]" << endl;
    exit(1);
  }
  ifstream stream(argv[1]);
  if(!stream.is_open()){
    wcerr << argv[1] << " : file does not exist" << endl;
    exit(1);
  }
  char* path = realpath(argv[2], NULL);
  char* dir = dirname(path);
  if(!dir){
    wcerr << argv[2] << " : destination does not exist" << endl;
    exit(3);
  }
  cout << dir << endl;
  return 0;
}
