/*
    We can perform a basic type of encryption by simply
  adjusting the value of a character up or down by a
  known amount.
*/

#include <stdio.h>

void EncryptInternal(char* text, const char* password, char modifier)
{
  int text_pos = 0;
  int pass_pos = 0;
  while(text[text_pos] != '\0')
  {
    text[text_pos] += password[pass_pos] * modifier;
    
    ++text_pos;
    ++pass_pos;
    
    if(password[pass_pos] == '\0')
      pass_pos = 0;
  }
}

void Encrypt(char* text, const char* password)
{
  EncryptInternal(text, password, 1);
}

void Decrypt(char* text, const char* password)
{
  EncryptInternal(text, password, -1);
}

int main(int argc, char** argv)
{
  // as we haven't covered input yet, I'm afraid
  // this will not look good
  char text[] = {'H', 'e', 'l', 'l', 'o', ' ', 'E', 'n', 'c', 'r', 'y', 'p', 't', 'i', 'o', 'n', '\0'};
  const char* password = "password";
  
  printf("Input Text: %s\nInput Password: %s\n", text, password);
  
  Encrypt(text, password);
  printf("Encrypted text: %s\n", text);
  
  Decrypt(text, password);
  printf("Decrypted text: %s\n", text);
  
  return 0;
}

/*
  NOTE:   All we do here is add and subtract to/from the character code
        by some amount. If the amount is the same for the addition and
        the subtraction, then the original message will be recovered.
*/