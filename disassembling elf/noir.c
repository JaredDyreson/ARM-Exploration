#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <errno.h>

struct ELF{
  char EI_MAG0; // Starting number
  char EI_MAG3[3]; // Spells ELF
  int EI_CLASS; // 1 == 32 bit && 2 == 64 bit
  int EI_DATA; // 1 == little endian && 2 == big endian
  char EI_VERSION;
};

void elfHeader(FILE** pFile, struct ELF *binary);
void bitness(FILE** pFile, struct ELF *binary);
void endianess(FILE** pFile, struct ELF *binary);

int main(int argc, char const* argv[]){
  if(argc < 2){
    printf("Usage: noir [ELF Binary]\n");
    exit(1);
  }
  FILE *pFile = fopen(argv[1], "r");
  if(!pFile){
    if(errno == ENOENT){
      printf("%s does not exist", argv[1]);
      exit(1);
    }
  }
  struct ELF binary;
  elfHeader(&pFile, &binary);
  printf("%02hhx\n", binary.EI_MAG0);
  for(int i = 1; i < 4; i++){
    printf("%c", binary.EI_MAG3[i]);
  }
  printf("\n");
  //bitness(&pFile, &binary);
  //fseek(pFile, 0, SEEK_SET);
  //endianess(&pFile, &binary);
  printf("%d\n", binary.EI_DATA);
}

void elfHeader(FILE** pFile, struct ELF *binary){
  unsigned char ch[4];
  fread(ch, 4, 1, *pFile);
  binary->EI_MAG0 = ch[0];
  for(int i = 1; i < 4; i++){
     binary->EI_MAG3[i] = ch[i];
  }
  rewind(*pFile);
}

void bitness(FILE** pFile, struct ELF *binary){
  unsigned char bit[1];
  fread(bit, 5, 1, *pFile);
  binary->EI_CLASS = bit[0];
  rewind(*pFile);
}

void endianess(FILE** pFile, struct ELF *binary){
  unsigned char bit[1];
  fread(bit, 5, 1, *pFile);
  binary->EI_DATA = bit[0];
  rewind(*pFile);
}
