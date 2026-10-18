#include <bit>
#include <xmmintrin.h>
#include <cstdio>
using V=unsigned _BitInt(128);
int main(){V v=(V(1)<<127)|3;auto m=std::bit_cast<__m128>(v);auto z=std::bit_cast<V>(m);printf("%u\n",unsigned(z>>127));}
