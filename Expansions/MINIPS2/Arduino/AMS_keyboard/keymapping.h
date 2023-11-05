
typedef struct {
  uint8_t noshift_1[AMS_KEYMAP_SIZE];
  uint8_t shift_1[AMS_KEYMAP_SIZE];
  uint8_t noshift_2[AMS_KEYMAP_SIZE];
  uint8_t shift_2[AMS_KEYMAP_SIZE];
} AMSKeymap_t;

/* Maps are positional in relation to keyboard ASCII codes.

Each map has a normal (without shift) and shifted (with shift) array.

In situations where there is a shift difference, add 80 to the Amstrad key byte. 
This is when a key is shifted on keyboard, but not shifted on the Amstrad or vise-versa.

Unused ASCII codes need to have the IGNORE_KEYCODE value in place.(Default 170)

*/

#if defined(CPC464)

// CPC464

const PROGMEM AMSKeymap_t AMSKeymap_main = {
  // map 1 without shift
   {170,170,170,  3,170,170, 29, 29,// ASCII Codes 0x00 - 0x07
     31, 31,170,170, 60,170,170,170,// ASCII Codes 0x08 - 0x0F
    170,170,170,170,170, 56, 68, 64,// ASCII Codes 0x10 - 0x17
     66,170,170,  2, 79,  1, 26, 55,// ASCII Codes 0x18 - 0x1F
     63, 61, 59, 69, 25, 57, 65, 58,// ASCII Codes 0x20 - 0x27
     62, 70, 71, 67,170,170,170,170,// ASCII Codes 0x28 - 0x2F
      8,  0,  4, 36, 32, 20, 16, 52,// ASCII Codes 0x30 - 0x37
     48, 12, 41, 15, 44, 47, 43,170,// ASCII Codes 0x38 - 0x3F
     24,  5, 19, 35, 37, 34, 21, 17,// ASCII Codes 0x40 - 0x47
     49, 14, 53, 13,  9, 11, 51, 10,// ASCII Codes 0x48 - 0x4F
     46,  6, 18, 33, 22, 50, 23, 38,// ASCII Codes 0x50 - 0x57
     39, 54,  7, 45, 30, 42, 28, 40,// ASCII Codes 0x58 - 0x5F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x60 - 0x67
    170,170,170,170,170,170,170,170,// ASCII Codes 0x68 - 0x6F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x70 - 0x77
    170,170,170,170,170,170,170,170,// ASCII Codes 0x78 - 0x7F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x80 - 0x87
    170,170,170, 27,170,170,170,170},// ASCII Codes 0x88 - 0x8F
    
  // map 1 with shift
   {170,170,170,  3,170,170, 29, 29,// ASCII Codes 0x00 - 0x07
     31, 31,170,170, 60,170,170,170,// ASCII Codes 0x08 - 0x0F
    170,170,170,170,170, 56, 68, 64,// ASCII Codes 0x10 - 0x17
     66,170,170,  2, 79,  1, 26, 55,// ASCII Codes 0x18 - 0x1F
     63, 61, 59, 69, 25, 57, 65, 58,// ASCII Codes 0x20 - 0x27
     62, 70, 71, 67,170,170,170,170,// ASCII Codes 0x28 - 0x2F
      8,  0,  4, 36, 32, 20, 16, 52,// ASCII Codes 0x30 - 0x37
     48, 12, 41, 15, 44, 47, 43,170,// ASCII Codes 0x38 - 0x3F
     24,  5, 19, 35, 37, 34, 21, 17,// ASCII Codes 0x40 - 0x47
     49, 14, 53, 13,  9, 11, 51, 10,// ASCII Codes 0x48 - 0x4F
     46,  6, 18, 33, 22, 50, 23, 38,// ASCII Codes 0x50 - 0x57
     39, 54,  7, 45, 30, 42, 28, 40,// ASCII Codes 0x58 - 0x5F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x60 - 0x67
    170,170,170,170,170,170,170,170,// ASCII Codes 0x68 - 0x6F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x70 - 0x77
    170,170,170,170,170,170,170,170,// ASCII Codes 0x78 - 0x7F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x80 - 0x87
    170,170,170, 27,170,170,170,170},// ASCII Codes 0x88 - 0x8F
  
  // Same for now....
  // map 2 without shift
   {170,170,170,170,170,170,170,170,// ASCII Codes 0x00 - 0x07
    170,170,170,170,170,170,170,170,// ASCII Codes 0x08 - 0x0F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x10 - 0x17
    170,170,170,170,170,170,170,170,// ASCII Codes 0x18 - 0x1F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x20 - 0x27
    170,170,170,170,170,170,170,170,// ASCII Codes 0x28 - 0x2F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x30 - 0x37
    170,170,170,170,170,170,170,170,// ASCII Codes 0x38 - 0x3F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x40 - 0x47
    170,170,170,170,170,170,170,170,// ASCII Codes 0x48 - 0x4F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x50 - 0x57
    170,170,170,170,170,170,170,170,// ASCII Codes 0x58 - 0x5F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x60 - 0x67
    170,170,170,170,170,170,170,170,// ASCII Codes 0x68 - 0x6F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x70 - 0x77
    170,170,170,170,170,170,170,170,// ASCII Codes 0x78 - 0x7F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x80 - 0x87
    170,170,170,170,170,170,170,170},// ASCII Codes 0x88 - 0x8F
    
  // map 2 with shift
   {170,170,170,170,170,170,170,170,// ASCII Codes 0x00 - 0x07
    170,170,170,170,170,170,170,170,// ASCII Codes 0x08 - 0x0F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x10 - 0x17
    170,170,170,170,170,170,170,170,// ASCII Codes 0x18 - 0x1F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x20 - 0x27
    170,170,170,170,170,170,170,170,// ASCII Codes 0x28 - 0x2F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x30 - 0x37
    170,170,170,170,170,170,170,170,// ASCII Codes 0x38 - 0x3F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x40 - 0x47
    170,170,170,170,170,170,170,170,// ASCII Codes 0x48 - 0x4F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x50 - 0x57
    170,170,170,170,170,170,170,170,// ASCII Codes 0x58 - 0x5F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x60 - 0x67
    170,170,170,170,170,170,170,170,// ASCII Codes 0x68 - 0x6F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x70 - 0x77
    170,170,170,170,170,170,170,170,// ASCII Codes 0x78 - 0x7F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x80 - 0x87
    170,170,170,170,170,170,170,170}// ASCII Codes 0x88 - 0x8F
    
};

#else

// 6128
const PROGMEM AMSKeymap_t AMSKeymap_main = {
  // map 1 without shift
   {170,170,170,170,170,170,170,170,// ASCII Codes 0x00 - 0x07
     63,170,170,170,68,170,170,170,// ASCII Codes 0x08 - 0x0F
    170,170,170,170,170,64,76,72,// ASCII Codes 0x10 - 0x17
     74,170,170,34,7,35,58,15,// ASCII Codes 0x18 - 0x1F
    71,69,67,77,57,65,73,66,// ASCII Codes 0x20 - 0x27
    70,78,79,75,170,170,170,170,// ASCII Codes 0x28 - 0x2F
     40,32,36,20,16,52,48,12,// ASCII Codes 0x30 - 0x37
     8,44,25,47,28,31,27,59,// ASCII Codes 0x38 - 0x3F
     170,37,51,19,21,18,53,49,// ASCII Codes 0x40 - 0x47
     9,46,13,45,41,43,11,42,// ASCII Codes 0x48 - 0x4F
     30,38,50,17,54,10,55,22,// ASCII Codes 0x50 - 0x57
    23,14,39,29,62,26,60,24,// ASCII Codes 0x58 - 0x5F
    170,69,67,77,57,65,73,66,// ASCII Codes 0x60 - 0x67
     70,78,71,170,170,170,170,170,// ASCII Codes 0x68 - 0x6F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x70 - 0x77
    170,170,170,170,170,170,170,170,// ASCII Codes 0x78 - 0x7F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x80 - 0x87
    170,170,170,59,170,170,170,170},// ASCII Codes 0x88 - 0x8F
    
  // map 1 with shift
   {170,170,170,170,170,170,170,170,// ASCII Codes 0x00 - 0x07
     63,170,170,170,68,170,170,170,// ASCII Codes 0x08 - 0x0F
    170,170,170,170,170,64,76,72,// ASCII Codes 0x10 - 0x17
     74,170,170,34,7,33,58,15,// ASCII Codes 0x18 - 0x1F
    71,69,67,77,57,65,73,66,// ASCII Codes 0x20 - 0x27
    70,78,79,75,170,170,170,170,// ASCII Codes 0x28 - 0x2F
     120,112,116,100,96,132,128,92,// ASCII Codes 0x30 - 0x37
     88,124,105,127,108,111,107,59,// ASCII Codes 0x38 - 0x3F
     170,117,131,99,101,98,133,129,// ASCII Codes 0x40 - 0x47
     89,126,93,125,121,123,91,122,// ASCII Codes 0x48 - 0x4F
     110,118,130,97,134,90,135,102,// ASCII Codes 0x50 - 0x57
     103,94,119,109,142,106,140,104,// ASCII Codes 0x58 - 0x5F
    170,69,67,77,57,65,73,66,// ASCII Codes 0x60 - 0x67
     70,78,71,170,170,170,170,170,// ASCII Codes 0x68 - 0x6F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x70 - 0x77
    170,170,170,170,170,170,170,170,// ASCII Codes 0x78 - 0x7F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x78 - 0x7F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x80 - 0x87      //erm.
    170,170,170,139,170,170,170,170},// ASCII Codes 0x88 - 0x8F
  
  // Same for now....
  // map 2 without shift
   {170,170,170,170,170,170,170,170,// ASCII Codes 0x00 - 0x07
     63,170,170,170,68,170,170,170,// ASCII Codes 0x08 - 0x0F
    170,170,170,170,170,64,76,72,// ASCII Codes 0x10 - 0x17
     74,170,170,34,7,35,58,15,// ASCII Codes 0x18 - 0x1F
    71,69,67,77,57,65,73,66,// ASCII Codes 0x20 - 0x27
    70,78,79,75,170,170,170,170,// ASCII Codes 0x28 - 0x2F
     40,32,36,20,16,52,48,12,// ASCII Codes 0x30 - 0x37
     8,44,25,47,28,31,27,59,// ASCII Codes 0x38 - 0x3F
     170,37,51,19,21,18,53,49,// ASCII Codes 0x40 - 0x47
     9,46,13,45,41,43,11,42,// ASCII Codes 0x48 - 0x4F
     30,38,50,17,54,10,55,22,// ASCII Codes 0x50 - 0x57
    23,14,39,29,62,26,60,24,// ASCII Codes 0x58 - 0x5F
    170,69,67,77,57,65,73,66,// ASCII Codes 0x60 - 0x67
     70,78,71,170,170,170,170,170,// ASCII Codes 0x68 - 0x6F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x70 - 0x77
    170,170,170,170,170,170,170,170,// ASCII Codes 0x78 - 0x7F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x80 - 0x87
    170,170,170,59,170,170,170,170},// ASCII Codes 0x88 - 0x8F
    
  // map 2 with shift
   {170,170,170,170,170,170,170,170,// ASCII Codes 0x00 - 0x07
     63,170,170,170,68,170,170,170,// ASCII Codes 0x08 - 0x0F
    170,170,170,170,170,64,76,72,// ASCII Codes 0x10 - 0x17
     74,170,170,34,7,33,58,15,// ASCII Codes 0x18 - 0x1F
    71,69,67,77,57,65,73,66,// ASCII Codes 0x20 - 0x27
    70,78,79,75,170,170,170,170,// ASCII Codes 0x28 - 0x2F
     120,112,116,100,96,132,128,92,// ASCII Codes 0x30 - 0x37
     88,124,105,127,108,111,107,59,// ASCII Codes 0x38 - 0x3F
     170,117,131,99,101,98,133,129,// ASCII Codes 0x40 - 0x47
     89,126,93,125,121,123,91,122,// ASCII Codes 0x48 - 0x4F
     110,118,130,97,134,90,135,102,// ASCII Codes 0x50 - 0x57
     103,94,119,109,142,106,140,104,// ASCII Codes 0x58 - 0x5F
    170,69,67,77,57,65,73,66,// ASCII Codes 0x60 - 0x67
     70,78,71,170,170,170,170,170,// ASCII Codes 0x68 - 0x6F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x70 - 0x77
    170,170,170,170,170,170,170,170,// ASCII Codes 0x78 - 0x7F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x78 - 0x7F
    170,170,170,170,170,170,170,170,// ASCII Codes 0x80 - 0x87      //erm.
    170,170,170,139,170,170,170,170},// ASCII Codes 0x88 - 0x8F 
    
}; 
#endif
