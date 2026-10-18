#include <cstdint>
int main(){ unsigned __int128 a=1; a=(a<<100); return int(a>>100)-1; }
