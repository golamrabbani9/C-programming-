/*সি প্রোগ্রামিং এ রেফারেন্স অপারেটর ভালভাবে বুঝার জন্য এই প্রোগ্রাম। */
#include <stdio.h>
int main(){
  int count=5;
  printf("Value: %d\n",count);
  printf("Address: %u",&count);  // লক্ষ্য করলে দেখবেন যে, count ভ্যারিয়েবলের পূর্বে ampersand(&) ব্যবহার করা হয়েছে।
  return 0;
}

