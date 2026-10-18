#include <cstdint>
#include <cstdio>
using V=unsigned _BitInt(128);
V add(V a,V b){return a+b;}
V shift(V a,unsigned b){return a<<b;}
int main(){V a=V(0x123456789abcdef0ull)<<64;V b=add(a,7);printf("%zu %llx %llx\n",sizeof(V),uint64_t(b>>64),uint64_t(shift(b,4)));}
