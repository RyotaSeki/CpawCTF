#include <stdio.h>
int main(void)

{
  int in_GS_OFFSET;
  unsigned2 local_4b;
  unsigned local_49;
  int local_48;
  int local_44;
  int local_40 [4];
  unsigned4 local_30;
  unsigned4 local_2c;
  unsigned4 local_28;
  unsigned4 local_24;
  unsigned4 local_20;
  unsigned4 local_1a;
  unsigned2 local_16;
  int local_14;
  
  local_14 = *(int *)(in_GS_OFFSET + 0x14);
  local_1a = 0x77617063;
  local_16 = 0x7b;
  local_40[0] = 0x79;
  local_40[1] = 0x61;
  local_40[2] = 0x6b;
  local_40[3] = 0x69;
  local_30 = 0x6e;
  local_2c = 0x69;
  local_28 = 0x6b;
  local_24 = 0x75;
  local_20 = 0x21;
  local_4b = 0xa7d;
  local_49 = 0;
  local_44 = 5;
  printf("%s",&local_1a);
  if (local_44 != 5) {
    for (local_48 = 0; local_48 < 9; local_48 = local_48 + 1) {
      putchar(local_40[local_48]);
    }
  }
  printf("%s",&local_4b);
  if (local_14 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}