#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_43a(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_481(u8* __restrict R,Cpu& c);
u32 body_486(u8* __restrict R,Cpu& c);
u32 body_491(u8* __restrict R,Cpu& c);
u32 body_492(u8* __restrict R,Cpu& c);
u32 body_4a4(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_4f4(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_572(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_585(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_589(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58e(u8* __restrict R,Cpu& c);
u32 body_59e(u8* __restrict R,Cpu& c);
u32 body_5a9(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e5(u8* __restrict R,Cpu& c);
u32 body_5e8(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f5(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_5f9(u8* __restrict R,Cpu& c);
u32 body_5fb(u8* __restrict R,Cpu& c);
u32 body_5fc(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_5ff(u8* __restrict R,Cpu& c);
u32 body_600(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_602(u8* __restrict R,Cpu& c);
u32 body_604(u8* __restrict R,Cpu& c);
u32 body_605(u8* __restrict R,Cpu& c);
u32 body_606(u8* __restrict R,Cpu& c);
u32 body_607(u8* __restrict R,Cpu& c);
u32 body_608(u8* __restrict R,Cpu& c);
u32 body_609(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_638(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x60a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x60a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_60a(u8* __restrict R,Cpu& c);
u32 page_60a(Cpu& c){return body_60a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_60a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x60a001:goto L60a001;
case 0x60a003:c.instructions+=1;goto B60a003;
case 0x60a005:goto L60a005;
case 0x60a008:c.instructions+=3;goto B60a008;
case 0x60a00a:c.instructions+=2;goto B60a00a;
case 0x60a00c:c.instructions+=1;goto B60a00c;
case 0x60a00e:goto L60a00e;
case 0x60a011:goto L60a011;
case 0x60a014:c.instructions+=3;goto B60a014;
case 0x60a015:c.instructions+=2;goto B60a015;
case 0x60a017:c.instructions+=1;goto B60a017;
case 0x60a01c:goto L60a01c;
case 0x60a01f:c.instructions+=4;goto B60a01f;
case 0x60a020:c.instructions+=3;goto B60a020;
case 0x60a023:c.instructions+=2;goto B60a023;
case 0x60a025:c.instructions+=1;goto B60a025;
case 0x60a027:goto L60a027;
case 0x60a02c:goto L60a02c;
case 0x60a02f:c.instructions+=3;goto B60a02f;
case 0x60a030:c.instructions+=2;goto B60a030;
case 0x60a032:c.instructions+=1;goto B60a032;
case 0x60a037:goto L60a037;
case 0x60a03a:c.instructions+=3;goto B60a03a;
case 0x60a03c:c.instructions+=2;goto B60a03c;
case 0x60a03e:c.instructions+=1;goto B60a03e;
case 0x60a040:goto L60a040;
case 0x60a043:goto L60a043;
case 0x60a045:c.instructions+=1;goto B60a045;
case 0x60a04a:goto L60a04a;
case 0x60a04d:c.instructions+=4;goto B60a04d;
case 0x60a04e:c.instructions+=3;goto B60a04e;
case 0x60a051:c.instructions+=2;goto B60a051;
case 0x60a053:c.instructions+=1;goto B60a053;
case 0x60a055:goto L60a055;
case 0x60a058:c.instructions+=3;goto B60a058;
case 0x60a059:c.instructions+=2;goto B60a059;
case 0x60a05b:c.instructions+=1;goto B60a05b;
case 0x60a060:goto L60a060;
case 0x60a063:c.instructions+=3;goto B60a063;
case 0x60a065:c.instructions+=2;goto B60a065;
case 0x60a067:c.instructions+=1;goto B60a067;
case 0x60a069:goto L60a069;
case 0x60a06c:c.instructions+=1;goto B60a06c;
case 0x60a070:goto L60a070;
case 0x60a073:c.instructions+=3;goto B60a073;
case 0x60a074:c.instructions+=2;goto B60a074;
case 0x60a076:c.instructions+=1;goto B60a076;
case 0x60a07b:goto L60a07b;
case 0x60a07e:c.instructions+=4;goto B60a07e;
case 0x60a07f:c.instructions+=3;goto B60a07f;
case 0x60a082:c.instructions+=2;goto B60a082;
case 0x60a084:c.instructions+=1;goto B60a084;
case 0x60a086:goto L60a086;
case 0x60a089:c.instructions+=3;goto B60a089;
case 0x60a08b:c.instructions+=2;goto B60a08b;
case 0x60a08d:c.instructions+=1;goto B60a08d;
case 0x60a08f:goto L60a08f;
case 0x60a092:goto L60a092;
case 0x60a094:c.instructions+=1;goto B60a094;
case 0x60a099:goto L60a099;
case 0x60a09c:c.instructions+=4;goto B60a09c;
case 0x60a09d:c.instructions+=3;goto B60a09d;
case 0x60a0a0:c.instructions+=2;goto B60a0a0;
case 0x60a0a2:c.instructions+=1;goto B60a0a2;
case 0x60a0a4:goto L60a0a4;
case 0x60a0aa:c.instructions+=3;goto B60a0aa;
case 0x60a0b4:c.instructions+=2;goto B60a0b4;
case 0x60a0b6:c.instructions+=1;goto B60a0b6;
case 0x60a0bb:goto L60a0bb;
case 0x60a0bd:c.instructions+=1;goto B60a0bd;
case 0x60a0bf:goto L60a0bf;
case 0x60a0c2:goto L60a0c2;
case 0x60a0c6:c.instructions+=1;goto B60a0c6;
case 0x60a0c8:goto L60a0c8;
case 0x60a0ca:c.instructions+=2;goto B60a0ca;
case 0x60a0cc:c.instructions+=1;goto B60a0cc;
case 0x60a0ce:goto L60a0ce;
case 0x60a0d1:c.instructions+=3;goto B60a0d1;
case 0x60a0d3:c.instructions+=2;goto B60a0d3;
case 0x60a0d5:c.instructions+=1;goto B60a0d5;
case 0x60a0d7:goto L60a0d7;
case 0x60a0da:c.instructions+=1;goto B60a0da;
case 0x60a0e0:goto L60a0e0;
case 0x60a0e2:c.instructions+=5;goto B60a0e2;
case 0x60a0e5:c.instructions+=4;goto B60a0e5;
case 0x60a0e8:c.instructions+=3;goto B60a0e8;
case 0x60a0e9:c.instructions+=2;goto B60a0e9;
case 0x60a0eb:c.instructions+=1;goto B60a0eb;
case 0x60a0f0:goto L60a0f0;
case 0x60a0f6:c.instructions+=3;goto B60a0f6;
case 0x60a0f8:c.instructions+=2;goto B60a0f8;
case 0x60a0fb:c.instructions+=1;goto B60a0fb;
case 0x60a0fd:goto L60a0fd;
case 0x60a100:c.instructions+=1;goto B60a100;
case 0x60a105:goto L60a105;
case 0x60a108:c.instructions+=4;goto B60a108;
case 0x60a109:c.instructions+=3;goto B60a109;
case 0x60a10c:c.instructions+=2;goto B60a10c;
case 0x60a10e:c.instructions+=1;goto B60a10e;
case 0x60a110:goto L60a110;
case 0x60a116:c.instructions+=2;goto B60a116;
case 0x60a119:c.instructions+=1;goto B60a119;
case 0x60a11b:goto L60a11b;
case 0x60a11e:c.instructions+=3;goto B60a11e;
case 0x60a120:c.instructions+=2;goto B60a120;
case 0x60a127:c.instructions+=1;goto B60a127;
case 0x60a129:goto L60a129;
case 0x60a12c:c.instructions+=1;goto B60a12c;
case 0x60a130:goto L60a130;
case 0x60a132:c.instructions+=3;goto B60a132;
case 0x60a135:c.instructions+=2;goto B60a135;
case 0x60a137:c.instructions+=1;goto B60a137;
case 0x60a139:goto L60a139;
case 0x60a13c:c.instructions+=4;goto B60a13c;
case 0x60a142:c.instructions+=3;goto B60a142;
case 0x60a143:c.instructions+=2;goto B60a143;
case 0x60a144:c.instructions+=1;goto B60a144;
case 0x60a149:goto L60a149;
case 0x60a14c:goto L60a14c;
case 0x60a151:c.instructions+=2;goto B60a151;
case 0x60a154:c.instructions+=1;goto B60a154;
case 0x60a156:goto L60a156;
case 0x60a158:c.instructions+=1;goto B60a158;
case 0x60a15d:goto L60a15d;
case 0x60a160:c.instructions+=6;goto B60a160;
case 0x60a163:c.instructions+=5;goto B60a163;
case 0x60a164:c.instructions+=4;goto B60a164;
case 0x60a167:c.instructions+=3;goto B60a167;
case 0x60a169:c.instructions+=2;goto B60a169;
case 0x60a16c:c.instructions+=1;goto B60a16c;
case 0x60a16e:goto L60a16e;
case 0x60a173:c.instructions+=1;goto B60a173;
case 0x60a178:goto L60a178;
case 0x60a17b:c.instructions+=3;goto B60a17b;
case 0x60a17c:c.instructions+=2;goto B60a17c;
case 0x60a181:c.instructions+=1;goto B60a181;
case 0x60a186:goto L60a186;
case 0x60a189:c.instructions+=3;goto B60a189;
case 0x60a18b:c.instructions+=2;goto B60a18b;
case 0x60a192:c.instructions+=1;goto B60a192;
case 0x60a198:goto L60a198;
case 0x60a19b:c.instructions+=2;goto B60a19b;
case 0x60a19e:c.instructions+=1;goto B60a19e;
case 0x60a1a0:goto L60a1a0;
case 0x60a1a3:c.instructions+=5;goto B60a1a3;
case 0x60a1a5:c.instructions+=4;goto B60a1a5;
case 0x60a1a8:c.instructions+=3;goto B60a1a8;
case 0x60a1a9:c.instructions+=2;goto B60a1a9;
case 0x60a1ab:c.instructions+=1;goto B60a1ab;
case 0x60a1b0:goto L60a1b0;
case 0x60a1b3:c.instructions+=3;goto B60a1b3;
case 0x60a1b4:c.instructions+=2;goto B60a1b4;
case 0x60a1b6:c.instructions+=1;goto B60a1b6;
case 0x60a1bb:goto L60a1bb;
case 0x60a1c1:c.instructions+=3;goto B60a1c1;
case 0x60a1c3:c.instructions+=2;goto B60a1c3;
case 0x60a1c6:c.instructions+=1;goto B60a1c6;
case 0x60a1c8:goto L60a1c8;
case 0x60a1cb:c.instructions+=2;goto B60a1cb;
case 0x60a1cf:c.instructions+=1;goto B60a1cf;
case 0x60a1d1:goto L60a1d1;
case 0x60a1d7:c.instructions+=2;goto B60a1d7;
case 0x60a1d9:c.instructions+=1;goto B60a1d9;
case 0x60a1db:goto L60a1db;
case 0x60a1e1:c.instructions+=2;goto B60a1e1;
case 0x60a1e3:c.instructions+=1;goto B60a1e3;
case 0x60a1e5:goto L60a1e5;
case 0x60a1eb:c.instructions+=2;goto B60a1eb;
case 0x60a1ed:c.instructions+=1;goto B60a1ed;
case 0x60a1ef:goto L60a1ef;
case 0x60a1f2:c.instructions+=3;goto B60a1f2;
case 0x60a1f3:c.instructions+=2;goto B60a1f3;
case 0x60a1f5:c.instructions+=1;goto B60a1f5;
case 0x60a1fa:goto L60a1fa;
case 0x60a1fd:c.instructions+=8;goto B60a1fd;
case 0x60a200:c.instructions+=7;goto B60a200;
case 0x60a203:c.instructions+=6;goto B60a203;
case 0x60a204:c.instructions+=5;goto B60a204;
case 0x60a207:c.instructions+=4;goto B60a207;
case 0x60a209:c.instructions+=3;goto B60a209;
case 0x60a20c:c.instructions+=2;goto B60a20c;
case 0x60a20f:c.instructions+=1;goto B60a20f;
case 0x60a211:goto L60a211;
case 0x60a216:goto L60a216;
case 0x60a21b:goto L60a21b;
case 0x60a220:goto L60a220;
case 0x60a225:c.instructions+=2;goto B60a225;
case 0x60a227:c.instructions+=1;goto B60a227;
case 0x60a22c:goto L60a22c;
case 0x60a231:c.instructions+=3;goto B60a231;
case 0x60a233:c.instructions+=2;goto B60a233;
case 0x60a235:c.instructions+=1;goto B60a235;
case 0x60a237:goto L60a237;
case 0x60a240:goto L60a240;
case 0x60a247:c.instructions+=1;goto B60a247;
case 0x60a24c:goto L60a24c;
case 0x60a251:c.instructions+=3;goto B60a251;
case 0x60a252:c.instructions+=2;goto B60a252;
case 0x60a254:c.instructions+=1;goto B60a254;
case 0x60a256:goto L60a256;
case 0x60a259:c.instructions+=3;goto B60a259;
case 0x60a25a:c.instructions+=2;goto B60a25a;
case 0x60a25f:c.instructions+=1;goto B60a25f;
case 0x60a264:goto L60a264;
case 0x60a269:goto L60a269;
case 0x60a26e:goto L60a26e;
case 0x60a273:goto L60a273;
case 0x60a278:goto L60a278;
case 0x60a27d:c.instructions+=1;goto B60a27d;
case 0x60a282:goto L60a282;
case 0x60a288:c.instructions+=5;goto B60a288;
case 0x60a28a:c.instructions+=4;goto B60a28a;
case 0x60a28b:c.instructions+=3;goto B60a28b;
case 0x60a28c:c.instructions+=2;goto B60a28c;
case 0x60a28d:c.instructions+=1;goto B60a28d;
case 0x60a28f:goto L60a28f;
case 0x60a294:goto L60a294;
case 0x60a296:c.instructions+=2;goto B60a296;
case 0x60a297:c.instructions+=1;goto B60a297;
case 0x60a2a0:goto L60a2a0;
case 0x60a2a1:c.instructions+=9;goto B60a2a1;
case 0x60a2a2:c.instructions+=8;goto B60a2a2;
case 0x60a2a3:c.instructions+=7;goto B60a2a3;
case 0x60a2a7:c.instructions+=6;goto B60a2a7;
case 0x60a2a8:c.instructions+=5;goto B60a2a8;
case 0x60a2ad:c.instructions+=4;goto B60a2ad;
case 0x60a2af:c.instructions+=3;goto B60a2af;
case 0x60a2b1:c.instructions+=2;goto B60a2b1;
case 0x60a2b3:c.instructions+=1;goto B60a2b3;
case 0x60a2b8:goto L60a2b8;
case 0x60a2bd:c.instructions+=4;goto B60a2bd;
case 0x60a2bf:c.instructions+=3;goto B60a2bf;
case 0x60a2c1:c.instructions+=2;goto B60a2c1;
case 0x60a2c4:c.instructions+=1;goto B60a2c4;
case 0x60a2c9:goto L60a2c9;
case 0x60a2ca:c.instructions+=2;goto B60a2ca;
case 0x60a2cc:c.instructions+=1;goto B60a2cc;
case 0x60a2d1:goto L60a2d1;
case 0x60a2d3:c.instructions+=6;goto B60a2d3;
case 0x60a2d5:c.instructions+=5;goto B60a2d5;
case 0x60a2d7:c.instructions+=4;goto B60a2d7;
case 0x60a2da:c.instructions+=3;goto B60a2da;
case 0x60a2db:c.instructions+=2;goto B60a2db;
case 0x60a2dd:c.instructions+=1;goto B60a2dd;
case 0x60a2e2:goto L60a2e2;
case 0x60a2e5:c.instructions+=3;goto B60a2e5;
case 0x60a2e6:c.instructions+=2;goto B60a2e6;
case 0x60a2e8:c.instructions+=1;goto B60a2e8;
case 0x60a2ed:goto L60a2ed;
case 0x60a2ef:c.instructions+=1;goto B60a2ef;
case 0x60a2f4:goto L60a2f4;
case 0x60a2f7:c.instructions+=3;goto B60a2f7;
case 0x60a2f8:c.instructions+=2;goto B60a2f8;
case 0x60a2fa:c.instructions+=1;goto B60a2fa;
case 0x60a2ff:goto L60a2ff;
case 0x60a301:c.instructions+=6;goto B60a301;
case 0x60a303:c.instructions+=5;goto B60a303;
case 0x60a305:c.instructions+=4;goto B60a305;
case 0x60a308:c.instructions+=3;goto B60a308;
case 0x60a309:c.instructions+=2;goto B60a309;
case 0x60a30b:c.instructions+=1;goto B60a30b;
case 0x60a310:goto L60a310;
case 0x60a312:c.instructions+=6;goto B60a312;
case 0x60a314:c.instructions+=5;goto B60a314;
case 0x60a316:c.instructions+=4;goto B60a316;
case 0x60a319:c.instructions+=3;goto B60a319;
case 0x60a31a:c.instructions+=2;goto B60a31a;
case 0x60a31c:c.instructions+=1;goto B60a31c;
case 0x60a321:goto L60a321;
case 0x60a323:c.instructions+=6;goto B60a323;
case 0x60a325:c.instructions+=5;goto B60a325;
case 0x60a327:c.instructions+=4;goto B60a327;
case 0x60a32a:c.instructions+=3;goto B60a32a;
case 0x60a32b:c.instructions+=2;goto B60a32b;
case 0x60a32d:c.instructions+=1;goto B60a32d;
case 0x60a332:goto L60a332;
case 0x60a334:c.instructions+=6;goto B60a334;
case 0x60a336:c.instructions+=5;goto B60a336;
case 0x60a338:c.instructions+=4;goto B60a338;
case 0x60a33b:c.instructions+=3;goto B60a33b;
case 0x60a33c:c.instructions+=2;goto B60a33c;
case 0x60a33e:c.instructions+=1;goto B60a33e;
case 0x60a343:goto L60a343;
case 0x60a345:c.instructions+=6;goto B60a345;
case 0x60a347:c.instructions+=5;goto B60a347;
case 0x60a349:c.instructions+=4;goto B60a349;
case 0x60a34f:c.instructions+=3;goto B60a34f;
case 0x60a350:c.instructions+=2;goto B60a350;
case 0x60a352:c.instructions+=1;goto B60a352;
case 0x60a357:goto L60a357;
case 0x60a35d:c.instructions+=4;goto B60a35d;
case 0x60a360:c.instructions+=3;goto B60a360;
case 0x60a361:c.instructions+=2;goto B60a361;
case 0x60a362:c.instructions+=1;goto B60a362;
case 0x60a367:goto L60a367;
case 0x60a36d:c.instructions+=3;goto B60a36d;
case 0x60a36e:c.instructions+=2;goto B60a36e;
case 0x60a370:c.instructions+=1;goto B60a370;
case 0x60a375:goto L60a375;
case 0x60a37b:c.instructions+=3;goto B60a37b;
case 0x60a37c:c.instructions+=2;goto B60a37c;
case 0x60a37e:c.instructions+=1;goto B60a37e;
case 0x60a383:goto L60a383;
case 0x60a389:c.instructions+=3;goto B60a389;
case 0x60a38a:c.instructions+=2;goto B60a38a;
case 0x60a38c:c.instructions+=1;goto B60a38c;
case 0x60a391:goto L60a391;
case 0x60a397:c.instructions+=3;goto B60a397;
case 0x60a398:c.instructions+=2;goto B60a398;
case 0x60a39a:c.instructions+=1;goto B60a39a;
case 0x60a39f:goto L60a39f;
case 0x60a3a5:c.instructions+=3;goto B60a3a5;
case 0x60a3a6:c.instructions+=2;goto B60a3a6;
case 0x60a3a8:c.instructions+=1;goto B60a3a8;
case 0x60a3ad:goto L60a3ad;
case 0x60a3b3:c.instructions+=3;goto B60a3b3;
case 0x60a3b4:c.instructions+=2;goto B60a3b4;
case 0x60a3b6:c.instructions+=1;goto B60a3b6;
case 0x60a3bb:goto L60a3bb;
case 0x60a3c1:c.instructions+=2;goto B60a3c1;
case 0x60a3c2:c.instructions+=1;goto B60a3c2;
case 0x60a3c7:goto L60a3c7;
case 0x60a3c9:c.instructions+=6;goto B60a3c9;
case 0x60a3cb:c.instructions+=5;goto B60a3cb;
case 0x60a3cd:c.instructions+=4;goto B60a3cd;
case 0x60a3d3:c.instructions+=3;goto B60a3d3;
case 0x60a3d4:c.instructions+=2;goto B60a3d4;
case 0x60a3d6:c.instructions+=1;goto B60a3d6;
case 0x60a3db:goto L60a3db;
case 0x60a3e1:c.instructions+=3;goto B60a3e1;
case 0x60a3e7:c.instructions+=2;goto B60a3e7;
case 0x60a3ef:c.instructions+=1;goto B60a3ef;
case 0x60a3f0:goto L60a3f0;
case 0x60a3f2:c.instructions+=5;goto B60a3f2;
case 0x60a3f4:c.instructions+=4;goto B60a3f4;
case 0x60a3f6:c.instructions+=3;goto B60a3f6;
case 0x60a3f7:c.instructions+=2;goto B60a3f7;
case 0x60a3f9:c.instructions+=1;goto B60a3f9;
case 0x60a3fe:goto L60a3fe;
case 0x60a3ff:c.instructions+=2;goto B60a3ff;
case 0x60a401:c.instructions+=1;goto B60a401;
case 0x60a406:goto L60a406;
case 0x60a40a:c.instructions+=5;goto B60a40a;
case 0x60a40d:c.instructions+=4;goto B60a40d;
case 0x60a410:c.instructions+=3;goto B60a410;
case 0x60a411:c.instructions+=2;goto B60a411;
case 0x60a415:c.instructions+=1;goto B60a415;
case 0x60a417:goto L60a417;
case 0x60a419:c.instructions+=6;goto B60a419;
case 0x60a41b:c.instructions+=5;goto B60a41b;
case 0x60a41d:c.instructions+=4;goto B60a41d;
case 0x60a423:c.instructions+=3;goto B60a423;
case 0x60a424:c.instructions+=2;goto B60a424;
case 0x60a426:c.instructions+=1;goto B60a426;
case 0x60a42b:goto L60a42b;
case 0x60a42d:c.instructions+=6;goto B60a42d;
case 0x60a42f:c.instructions+=5;goto B60a42f;
case 0x60a431:c.instructions+=4;goto B60a431;
case 0x60a437:c.instructions+=3;goto B60a437;
case 0x60a438:c.instructions+=2;goto B60a438;
case 0x60a43a:c.instructions+=1;goto B60a43a;
case 0x60a43f:goto L60a43f;
case 0x60a441:c.instructions+=6;goto B60a441;
case 0x60a443:c.instructions+=5;goto B60a443;
case 0x60a445:c.instructions+=4;goto B60a445;
case 0x60a44b:c.instructions+=3;goto B60a44b;
case 0x60a44c:c.instructions+=2;goto B60a44c;
case 0x60a44e:c.instructions+=1;goto B60a44e;
case 0x60a453:goto L60a453;
case 0x60a455:c.instructions+=6;goto B60a455;
case 0x60a457:c.instructions+=5;goto B60a457;
case 0x60a459:c.instructions+=4;goto B60a459;
case 0x60a45f:c.instructions+=3;goto B60a45f;
case 0x60a460:c.instructions+=2;goto B60a460;
case 0x60a462:c.instructions+=1;goto B60a462;
case 0x60a467:goto L60a467;
case 0x60a469:c.instructions+=6;goto B60a469;
case 0x60a46b:c.instructions+=5;goto B60a46b;
case 0x60a46d:c.instructions+=4;goto B60a46d;
case 0x60a473:c.instructions+=3;goto B60a473;
case 0x60a474:c.instructions+=2;goto B60a474;
case 0x60a476:c.instructions+=1;goto B60a476;
case 0x60a47b:goto L60a47b;
case 0x60a47d:c.instructions+=6;goto B60a47d;
case 0x60a47f:c.instructions+=5;goto B60a47f;
case 0x60a481:c.instructions+=4;goto B60a481;
case 0x60a487:c.instructions+=3;goto B60a487;
case 0x60a488:c.instructions+=2;goto B60a488;
case 0x60a48a:c.instructions+=1;goto B60a48a;
case 0x60a48f:goto L60a48f;
case 0x60a491:c.instructions+=6;goto B60a491;
case 0x60a493:c.instructions+=5;goto B60a493;
case 0x60a495:c.instructions+=4;goto B60a495;
case 0x60a49b:c.instructions+=3;goto B60a49b;
case 0x60a49c:c.instructions+=2;goto B60a49c;
case 0x60a49e:c.instructions+=1;goto B60a49e;
case 0x60a4a3:goto L60a4a3;
case 0x60a4a9:c.instructions+=6;goto B60a4a9;
case 0x60a4ab:c.instructions+=5;goto B60a4ab;
case 0x60a4ad:c.instructions+=4;goto B60a4ad;
case 0x60a4b2:c.instructions+=3;goto B60a4b2;
case 0x60a4b3:c.instructions+=2;goto B60a4b3;
case 0x60a4b5:c.instructions+=1;goto B60a4b5;
case 0x60a4ba:goto L60a4ba;
case 0x60a4c0:c.instructions+=6;goto B60a4c0;
case 0x60a4c2:c.instructions+=5;goto B60a4c2;
case 0x60a4c4:c.instructions+=4;goto B60a4c4;
case 0x60a4c9:c.instructions+=3;goto B60a4c9;
case 0x60a4ca:c.instructions+=2;goto B60a4ca;
case 0x60a4cc:c.instructions+=1;goto B60a4cc;
case 0x60a4d1:goto L60a4d1;
case 0x60a4d7:c.instructions+=4;goto B60a4d7;
case 0x60a4d9:c.instructions+=3;goto B60a4d9;
case 0x60a4df:c.instructions+=2;goto B60a4df;
case 0x60a4e7:c.instructions+=1;goto B60a4e7;
case 0x60a4e9:goto L60a4e9;
case 0x60a4ed:c.instructions+=1;goto B60a4ed;
case 0x60a4f1:goto L60a4f1;
case 0x60a4f3:c.instructions+=6;goto B60a4f3;
case 0x60a4f5:c.instructions+=5;goto B60a4f5;
case 0x60a4f7:c.instructions+=4;goto B60a4f7;
case 0x60a4fb:c.instructions+=3;goto B60a4fb;
case 0x60a4fc:c.instructions+=2;goto B60a4fc;
case 0x60a4fe:c.instructions+=1;goto B60a4fe;
case 0x60a503:goto L60a503;
case 0x60a506:c.instructions+=2;goto B60a506;
case 0x60a508:c.instructions+=1;goto B60a508;
case 0x60a50a:goto L60a50a;
case 0x60a50e:c.instructions+=2;goto B60a50e;
case 0x60a510:c.instructions+=1;goto B60a510;
case 0x60a512:goto L60a512;
case 0x60a515:c.instructions+=2;goto B60a515;
case 0x60a517:c.instructions+=1;goto B60a517;
case 0x60a51c:goto L60a51c;
case 0x60a51e:c.instructions+=1;goto B60a51e;
case 0x60a520:goto L60a520;
case 0x60a524:c.instructions+=2;goto B60a524;
case 0x60a528:c.instructions+=1;goto B60a528;
case 0x60a52a:goto L60a52a;
case 0x60a52c:c.instructions+=2;goto B60a52c;
case 0x60a52e:c.instructions+=1;goto B60a52e;
case 0x60a530:goto L60a530;
case 0x60a532:goto L60a532;
case 0x60a538:c.instructions+=1;goto B60a538;
case 0x60a53a:goto L60a53a;
case 0x60a544:goto L60a544;
case 0x60a547:c.instructions+=2;goto B60a547;
case 0x60a549:c.instructions+=1;goto B60a549;
case 0x60a54b:goto L60a54b;
case 0x60a54d:c.instructions+=2;goto B60a54d;
case 0x60a54f:c.instructions+=1;goto B60a54f;
case 0x60a554:goto L60a554;
case 0x60a556:c.instructions+=6;goto B60a556;
case 0x60a558:c.instructions+=5;goto B60a558;
case 0x60a55a:c.instructions+=4;goto B60a55a;
case 0x60a560:c.instructions+=3;goto B60a560;
case 0x60a561:c.instructions+=2;goto B60a561;
case 0x60a563:c.instructions+=1;goto B60a563;
case 0x60a568:goto L60a568;
case 0x60a56e:c.instructions+=3;goto B60a56e;
case 0x60a56f:c.instructions+=2;goto B60a56f;
case 0x60a571:c.instructions+=1;goto B60a571;
case 0x60a576:goto L60a576;
case 0x60a57c:c.instructions+=4;goto B60a57c;
case 0x60a57e:c.instructions+=3;goto B60a57e;
case 0x60a584:c.instructions+=2;goto B60a584;
case 0x60a58c:c.instructions+=1;goto B60a58c;
case 0x60a58e:goto L60a58e;
case 0x60a592:c.instructions+=1;goto B60a592;
case 0x60a596:goto L60a596;
case 0x60a598:c.instructions+=6;goto B60a598;
case 0x60a59a:c.instructions+=5;goto B60a59a;
case 0x60a59c:c.instructions+=4;goto B60a59c;
case 0x60a5a0:c.instructions+=3;goto B60a5a0;
case 0x60a5a1:c.instructions+=2;goto B60a5a1;
case 0x60a5a3:c.instructions+=1;goto B60a5a3;
case 0x60a5a8:goto L60a5a8;
case 0x60a5ab:c.instructions+=2;goto B60a5ab;
case 0x60a5ad:c.instructions+=1;goto B60a5ad;
case 0x60a5af:goto L60a5af;
case 0x60a5b3:c.instructions+=2;goto B60a5b3;
case 0x60a5b5:c.instructions+=1;goto B60a5b5;
case 0x60a5b7:goto L60a5b7;
case 0x60a5ba:c.instructions+=2;goto B60a5ba;
case 0x60a5bc:c.instructions+=1;goto B60a5bc;
case 0x60a5c1:goto L60a5c1;
case 0x60a5c3:c.instructions+=1;goto B60a5c3;
case 0x60a5c5:goto L60a5c5;
case 0x60a5c9:c.instructions+=2;goto B60a5c9;
case 0x60a5cd:c.instructions+=1;goto B60a5cd;
case 0x60a5cf:goto L60a5cf;
case 0x60a5d1:c.instructions+=2;goto B60a5d1;
case 0x60a5d3:c.instructions+=1;goto B60a5d3;
case 0x60a5d5:goto L60a5d5;
case 0x60a5d7:goto L60a5d7;
case 0x60a5d9:c.instructions+=2;goto B60a5d9;
case 0x60a5df:c.instructions+=1;goto B60a5df;
case 0x60a5e4:goto L60a5e4;
case 0x60a5e5:c.instructions+=4;goto B60a5e5;
case 0x60a5e6:c.instructions+=3;goto B60a5e6;
case 0x60a5e7:c.instructions+=2;goto B60a5e7;
case 0x60a5e8:c.instructions+=1;goto B60a5e8;
case 0x60a5eb:goto L60a5eb;
case 0x60a5f5:goto L60a5f5;
case 0x60a5f7:c.instructions+=1;goto B60a5f7;
case 0x60a5fc:goto L60a5fc;
case 0x60a5fd:c.instructions+=4;goto B60a5fd;
case 0x60a5fe:c.instructions+=3;goto B60a5fe;
case 0x60a5ff:c.instructions+=2;goto B60a5ff;
case 0x60a600:c.instructions+=1;goto B60a600;
case 0x60a610:goto L60a610;
case 0x60a611:c.instructions+=6;goto B60a611;
case 0x60a615:c.instructions+=5;goto B60a615;
case 0x60a616:c.instructions+=4;goto B60a616;
case 0x60a61b:c.instructions+=3;goto B60a61b;
case 0x60a61d:c.instructions+=2;goto B60a61d;
case 0x60a61f:c.instructions+=1;goto B60a61f;
case 0x60a624:goto L60a624;
case 0x60a625:c.instructions+=2;goto B60a625;
case 0x60a62a:c.instructions+=1;goto B60a62a;
case 0x60a62f:goto L60a62f;
case 0x60a635:c.instructions+=2;goto B60a635;
case 0x60a636:c.instructions+=1;goto B60a636;
case 0x60a63b:goto L60a63b;
case 0x60a641:c.instructions+=2;goto B60a641;
case 0x60a642:c.instructions+=1;goto B60a642;
case 0x60a647:goto L60a647;
case 0x60a64c:c.instructions+=3;goto B60a64c;
case 0x60a64e:c.instructions+=2;goto B60a64e;
case 0x60a650:c.instructions+=1;goto B60a650;
case 0x60a652:goto L60a652;
case 0x60a659:c.instructions+=2;goto B60a659;
case 0x60a65a:c.instructions+=1;goto B60a65a;
case 0x60a65f:goto L60a65f;
case 0x60a664:c.instructions+=3;goto B60a664;
case 0x60a665:c.instructions+=2;goto B60a665;
case 0x60a667:c.instructions+=1;goto B60a667;
case 0x60a669:goto L60a669;
case 0x60a66b:c.instructions+=1;goto B60a66b;
case 0x60a670:goto L60a670;
case 0x60a671:c.instructions+=2;goto B60a671;
case 0x60a672:c.instructions+=1;goto B60a672;
case 0x60a680:goto L60a680;
case 0x60a682:c.instructions+=11;goto B60a682;
case 0x60a687:c.instructions+=10;goto B60a687;
case 0x60a68d:c.instructions+=9;goto B60a68d;
case 0x60a68e:c.instructions+=8;goto B60a68e;
case 0x60a695:c.instructions+=7;goto B60a695;
case 0x60a696:c.instructions+=6;goto B60a696;
case 0x60a69b:c.instructions+=5;goto B60a69b;
case 0x60a69c:c.instructions+=4;goto B60a69c;
case 0x60a69d:c.instructions+=3;goto B60a69d;
case 0x60a69e:c.instructions+=2;goto B60a69e;
case 0x60a6a0:c.instructions+=1;goto B60a6a0;
case 0x60a6a5:goto L60a6a5;
case 0x60a6aa:c.instructions+=1;goto B60a6aa;
case 0x60a6af:goto L60a6af;
case 0x60a6b2:c.instructions+=4;goto B60a6b2;
case 0x60a6b6:c.instructions+=3;goto B60a6b6;
case 0x60a6b8:c.instructions+=2;goto B60a6b8;
case 0x60a6c0:c.instructions+=1;goto B60a6c0;
case 0x60a6c2:goto L60a6c2;
case 0x60a6c4:c.instructions+=1;goto B60a6c4;
case 0x60a6c9:goto L60a6c9;
case 0x60a6cb:goto L60a6cb;
case 0x60a6cd:goto L60a6cd;
case 0x60a6d0:c.instructions+=3;goto B60a6d0;
case 0x60a6d4:c.instructions+=2;goto B60a6d4;
case 0x60a6d9:c.instructions+=1;goto B60a6d9;
case 0x60a6de:goto L60a6de;
case 0x60a6e3:c.instructions+=1;goto B60a6e3;
case 0x60a6e8:goto L60a6e8;
case 0x60a6eb:c.instructions+=4;goto B60a6eb;
case 0x60a6ef:c.instructions+=3;goto B60a6ef;
case 0x60a6f1:c.instructions+=2;goto B60a6f1;
case 0x60a6f9:c.instructions+=1;goto B60a6f9;
case 0x60a6fb:goto L60a6fb;
case 0x60a6fd:c.instructions+=1;goto B60a6fd;
case 0x60a702:goto L60a702;
case 0x60a704:goto L60a704;
case 0x60a706:goto L60a706;
case 0x60a70a:c.instructions+=2;goto B60a70a;
case 0x60a70f:c.instructions+=1;goto B60a70f;
case 0x60a714:goto L60a714;
case 0x60a719:c.instructions+=1;goto B60a719;
case 0x60a71e:goto L60a71e;
case 0x60a721:c.instructions+=4;goto B60a721;
case 0x60a725:c.instructions+=3;goto B60a725;
case 0x60a727:c.instructions+=2;goto B60a727;
case 0x60a72f:c.instructions+=1;goto B60a72f;
case 0x60a731:goto L60a731;
case 0x60a733:c.instructions+=1;goto B60a733;
case 0x60a738:goto L60a738;
case 0x60a73c:c.instructions+=1;goto B60a73c;
case 0x60a741:goto L60a741;
case 0x60a746:c.instructions+=2;goto B60a746;
case 0x60a748:c.instructions+=1;goto B60a748;
case 0x60a74a:goto L60a74a;
case 0x60a74f:c.instructions+=2;goto B60a74f;
case 0x60a751:c.instructions+=1;goto B60a751;
case 0x60a753:goto L60a753;
case 0x60a758:c.instructions+=1;goto B60a758;
case 0x60a75d:goto L60a75d;
case 0x60a763:c.instructions+=1;goto B60a763;
case 0x60a768:goto L60a768;
case 0x60a76d:goto L60a76d;
case 0x60a772:goto L60a772;
case 0x60a774:c.instructions+=1;goto B60a774;
case 0x60a779:goto L60a779;
case 0x60a77e:c.instructions+=1;goto B60a77e;
case 0x60a783:goto L60a783;
case 0x60a785:c.instructions+=1;goto B60a785;
case 0x60a787:goto L60a787;
case 0x60a78c:c.instructions+=1;goto B60a78c;
case 0x60a791:goto L60a791;
case 0x60a796:goto L60a796;
case 0x60a798:c.instructions+=1;goto B60a798;
case 0x60a79d:goto L60a79d;
case 0x60a7a3:c.instructions+=1;goto B60a7a3;
case 0x60a7a8:goto L60a7a8;
case 0x60a7ae:c.instructions+=1;goto B60a7ae;
case 0x60a7b3:goto L60a7b3;
case 0x60a7b6:c.instructions+=4;goto B60a7b6;
case 0x60a7b8:c.instructions+=3;goto B60a7b8;
case 0x60a7bc:c.instructions+=2;goto B60a7bc;
case 0x60a7c0:c.instructions+=1;goto B60a7c0;
case 0x60a7c2:goto L60a7c2;
case 0x60a7c7:c.instructions+=5;goto B60a7c7;
case 0x60a7ca:c.instructions+=4;goto B60a7ca;
case 0x60a7cc:c.instructions+=3;goto B60a7cc;
case 0x60a7ce:c.instructions+=2;goto B60a7ce;
case 0x60a7d1:c.instructions+=1;goto B60a7d1;
case 0x60a7d4:goto L60a7d4;
case 0x60a7d9:c.instructions+=3;goto B60a7d9;
case 0x60a7de:c.instructions+=2;goto B60a7de;
case 0x60a7e1:c.instructions+=1;goto B60a7e1;
case 0x60a7e6:goto L60a7e6;
case 0x60a7e8:c.instructions+=1;goto B60a7e8;
case 0x60a7ea:goto L60a7ea;
case 0x60a7ef:c.instructions+=3;goto B60a7ef;
case 0x60a7f4:c.instructions+=2;goto B60a7f4;
case 0x60a7f6:c.instructions+=1;goto B60a7f6;
case 0x60a7f8:goto L60a7f8;
case 0x60a7ff:c.instructions+=1;goto B60a7ff;
case 0x60a801:goto L60a801;
case 0x60a806:c.instructions+=1;goto B60a806;
case 0x60a80b:goto L60a80b;
case 0x60a80d:c.instructions+=1;goto B60a80d;
case 0x60a80f:goto L60a80f;
case 0x60a814:c.instructions+=1;goto B60a814;
case 0x60a816:goto L60a816;
case 0x60a81b:c.instructions+=2;goto B60a81b;
case 0x60a81d:c.instructions+=1;goto B60a81d;
case 0x60a81f:goto L60a81f;
case 0x60a829:c.instructions+=1;goto B60a829;
case 0x60a82b:goto L60a82b;
case 0x60a830:c.instructions+=2;goto B60a830;
case 0x60a832:c.instructions+=1;goto B60a832;
case 0x60a834:goto L60a834;
case 0x60a837:c.instructions+=2;goto B60a837;
case 0x60a839:c.instructions+=1;goto B60a839;
case 0x60a83b:goto L60a83b;
case 0x60a840:c.instructions+=1;goto B60a840;
case 0x60a845:goto L60a845;
case 0x60a847:c.instructions+=1;goto B60a847;
case 0x60a849:goto L60a849;
case 0x60a84e:goto L60a84e;
case 0x60a850:c.instructions+=1;goto B60a850;
case 0x60a852:goto L60a852;
case 0x60a857:c.instructions+=2;goto B60a857;
case 0x60a85c:c.instructions+=1;goto B60a85c;
case 0x60a85e:goto L60a85e;
case 0x60a863:c.instructions+=1;goto B60a863;
case 0x60a868:goto L60a868;
case 0x60a86c:c.instructions+=4;goto B60a86c;
case 0x60a86f:c.instructions+=3;goto B60a86f;
case 0x60a875:c.instructions+=2;goto B60a875;
case 0x60a877:c.instructions+=1;goto B60a877;
case 0x60a87c:goto L60a87c;
case 0x60a881:goto L60a881;
case 0x60a887:c.instructions+=2;goto B60a887;
case 0x60a888:c.instructions+=1;goto B60a888;
case 0x60a88d:goto L60a88d;
case 0x60a893:c.instructions+=5;goto B60a893;
case 0x60a89a:c.instructions+=4;goto B60a89a;
case 0x60a89e:c.instructions+=3;goto B60a89e;
case 0x60a8a3:c.instructions+=2;goto B60a8a3;
case 0x60a8a5:c.instructions+=1;goto B60a8a5;
case 0x60a8ab:goto L60a8ab;
case 0x60a8b1:c.instructions+=1;goto B60a8b1;
case 0x60a8b6:goto L60a8b6;
case 0x60a8bb:goto L60a8bb;
case 0x60a8c1:c.instructions+=3;goto B60a8c1;
case 0x60a8c3:c.instructions+=2;goto B60a8c3;
case 0x60a8c4:c.instructions+=1;goto B60a8c4;
case 0x60a8c9:goto L60a8c9;
case 0x60a8cc:c.instructions+=2;goto B60a8cc;
case 0x60a8ce:c.instructions+=1;goto B60a8ce;
case 0x60a8d0:goto L60a8d0;
case 0x60a8d7:c.instructions+=2;goto B60a8d7;
case 0x60a8da:c.instructions+=1;goto B60a8da;
case 0x60a8dc:goto L60a8dc;
case 0x60a8de:goto L60a8de;
case 0x60a8e1:c.instructions+=8;goto B60a8e1;
case 0x60a8e4:c.instructions+=7;goto B60a8e4;
case 0x60a8e6:c.instructions+=6;goto B60a8e6;
case 0x60a8e9:c.instructions+=5;goto B60a8e9;
case 0x60a8ec:c.instructions+=4;goto B60a8ec;
case 0x60a8ee:c.instructions+=3;goto B60a8ee;
case 0x60a8f1:c.instructions+=2;goto B60a8f1;
case 0x60a8f3:c.instructions+=1;goto B60a8f3;
case 0x60a8f5:goto L60a8f5;
case 0x60a8f7:c.instructions+=1;goto B60a8f7;
case 0x60a8fc:goto L60a8fc;
case 0x60a902:c.instructions+=2;goto B60a902;
case 0x60a903:c.instructions+=1;goto B60a903;
case 0x60a908:goto L60a908;
case 0x60a90b:c.instructions+=2;goto B60a90b;
case 0x60a90d:c.instructions+=1;goto B60a90d;
case 0x60a90f:goto L60a90f;
case 0x60a916:c.instructions+=2;goto B60a916;
case 0x60a91d:c.instructions+=1;goto B60a91d;
case 0x60a91f:goto L60a91f;
case 0x60a921:goto L60a921;
case 0x60a924:c.instructions+=7;goto B60a924;
case 0x60a926:c.instructions+=6;goto B60a926;
case 0x60a929:c.instructions+=5;goto B60a929;
case 0x60a92c:c.instructions+=4;goto B60a92c;
case 0x60a92e:c.instructions+=3;goto B60a92e;
case 0x60a931:c.instructions+=2;goto B60a931;
case 0x60a933:c.instructions+=1;goto B60a933;
case 0x60a935:goto L60a935;
case 0x60a937:c.instructions+=1;goto B60a937;
case 0x60a93c:goto L60a93c;
case 0x60a941:c.instructions+=2;goto B60a941;
case 0x60a942:c.instructions+=1;goto B60a942;
case 0x60a947:goto L60a947;
case 0x60a94a:c.instructions+=2;goto B60a94a;
case 0x60a94c:c.instructions+=1;goto B60a94c;
case 0x60a94e:goto L60a94e;
case 0x60a955:c.instructions+=2;goto B60a955;
case 0x60a95c:c.instructions+=1;goto B60a95c;
case 0x60a95e:goto L60a95e;
case 0x60a960:goto L60a960;
case 0x60a963:c.instructions+=7;goto B60a963;
case 0x60a965:c.instructions+=6;goto B60a965;
case 0x60a968:c.instructions+=5;goto B60a968;
case 0x60a96b:c.instructions+=4;goto B60a96b;
case 0x60a96d:c.instructions+=3;goto B60a96d;
case 0x60a970:c.instructions+=2;goto B60a970;
case 0x60a972:c.instructions+=1;goto B60a972;
case 0x60a974:goto L60a974;
case 0x60a976:c.instructions+=1;goto B60a976;
case 0x60a97b:goto L60a97b;
case 0x60a97c:c.instructions+=5;goto B60a97c;
case 0x60a97d:c.instructions+=4;goto B60a97d;
case 0x60a981:c.instructions+=3;goto B60a981;
case 0x60a988:c.instructions+=2;goto B60a988;
case 0x60a98b:c.instructions+=1;goto B60a98b;
case 0x60a98c:goto L60a98c;
case 0x60a98f:goto L60a98f;
case 0x60a993:c.instructions+=5;goto B60a993;
case 0x60a994:c.instructions+=4;goto B60a994;
case 0x60a995:c.instructions+=3;goto B60a995;
case 0x60a99c:c.instructions+=2;goto B60a99c;
case 0x60a99f:c.instructions+=1;goto B60a99f;
case 0x60a9a0:goto L60a9a0;
case 0x60a9a1:c.instructions+=5;goto B60a9a1;
case 0x60a9a2:c.instructions+=4;goto B60a9a2;
case 0x60a9a3:c.instructions+=3;goto B60a9a3;
case 0x60a9a5:c.instructions+=2;goto B60a9a5;
case 0x60a9aa:c.instructions+=1;goto B60a9aa;
case 0x60a9af:goto L60a9af;
case 0x60a9b4:c.instructions+=1;goto B60a9b4;
case 0x60a9b9:goto L60a9b9;
case 0x60a9be:c.instructions+=1;goto B60a9be;
case 0x60a9c3:goto L60a9c3;
case 0x60a9c8:c.instructions+=4;goto B60a9c8;
case 0x60a9ca:c.instructions+=3;goto B60a9ca;
case 0x60a9cc:c.instructions+=2;goto B60a9cc;
case 0x60a9ce:c.instructions+=1;goto B60a9ce;
case 0x60a9d0:goto L60a9d0;
case 0x60a9d7:c.instructions+=1;goto B60a9d7;
case 0x60a9dc:goto L60a9dc;
case 0x60a9e1:c.instructions+=3;goto B60a9e1;
case 0x60a9e2:c.instructions+=2;goto B60a9e2;
case 0x60a9e4:c.instructions+=1;goto B60a9e4;
case 0x60a9e6:goto L60a9e6;
case 0x60a9eb:c.instructions+=1;goto B60a9eb;
case 0x60a9f0:goto L60a9f0;
case 0x60a9f6:c.instructions+=3;goto B60a9f6;
case 0x60a9f8:c.instructions+=2;goto B60a9f8;
case 0x60a9fa:c.instructions+=1;goto B60a9fa;
case 0x60a9fc:goto L60a9fc;
case 0x60aa01:goto L60aa01;
case 0x60aa02:c.instructions+=1;goto B60aa02;
case 0x60aa07:goto L60aa07;
case 0x60aa0a:goto L60aa0a;
case 0x60aa10:c.instructions+=4;goto B60aa10;
case 0x60aa12:c.instructions+=3;goto B60aa12;
case 0x60aa18:c.instructions+=2;goto B60aa18;
case 0x60aa1a:c.instructions+=1;goto B60aa1a;
case 0x60aa1c:goto L60aa1c;
case 0x60aa21:goto L60aa21;
case 0x60aa22:c.instructions+=1;goto B60aa22;
case 0x60aa27:goto L60aa27;
case 0x60aa2a:goto L60aa2a;
case 0x60aa30:c.instructions+=4;goto B60aa30;
case 0x60aa32:c.instructions+=3;goto B60aa32;
case 0x60aa38:c.instructions+=2;goto B60aa38;
case 0x60aa3a:c.instructions+=1;goto B60aa3a;
case 0x60aa3c:goto L60aa3c;
case 0x60aa41:goto L60aa41;
case 0x60aa42:c.instructions+=1;goto B60aa42;
case 0x60aa47:goto L60aa47;
case 0x60aa4a:goto L60aa4a;
case 0x60aa50:c.instructions+=3;goto B60aa50;
case 0x60aa53:c.instructions+=2;goto B60aa53;
case 0x60aa55:c.instructions+=1;goto B60aa55;
case 0x60aa57:goto L60aa57;
case 0x60aa59:c.instructions+=1;goto B60aa59;
case 0x60aa5e:goto L60aa5e;
case 0x60aa5f:c.instructions+=1;goto B60aa5f;
case 0x60aa64:goto L60aa64;
case 0x60aa67:goto L60aa67;
case 0x60aa6a:c.instructions+=3;goto B60aa6a;
case 0x60aa6f:c.instructions+=2;goto B60aa6f;
case 0x60aa71:c.instructions+=1;goto B60aa71;
case 0x60aa73:goto L60aa73;
case 0x60aa7a:c.instructions+=2;goto B60aa7a;
case 0x60aa7c:c.instructions+=1;goto B60aa7c;
case 0x60aa7e:goto L60aa7e;
case 0x60aa80:c.instructions+=1;goto B60aa80;
case 0x60aa85:goto L60aa85;
case 0x60aa86:c.instructions+=1;goto B60aa86;
case 0x60aa8b:goto L60aa8b;
case 0x60aa90:c.instructions+=1;goto B60aa90;
case 0x60aa93:goto L60aa93;
case 0x60aa95:c.instructions+=1;goto B60aa95;
case 0x60aa97:goto L60aa97;
case 0x60aa98:c.instructions+=3;goto B60aa98;
case 0x60aa99:c.instructions+=2;goto B60aa99;
case 0x60aa9a:c.instructions+=1;goto B60aa9a;
case 0x60aaa0:goto L60aaa0;
case 0x60aaa2:c.instructions+=12;goto B60aaa2;
case 0x60aaa7:c.instructions+=11;goto B60aaa7;
case 0x60aaad:c.instructions+=10;goto B60aaad;
case 0x60aaae:c.instructions+=9;goto B60aaae;
case 0x60aab5:c.instructions+=8;goto B60aab5;
case 0x60aab6:c.instructions+=7;goto B60aab6;
case 0x60aab7:c.instructions+=6;goto B60aab7;
case 0x60aab8:c.instructions+=5;goto B60aab8;
case 0x60aab9:c.instructions+=4;goto B60aab9;
case 0x60aabb:c.instructions+=3;goto B60aabb;
case 0x60aabc:c.instructions+=2;goto B60aabc;
case 0x60aac1:c.instructions+=1;goto B60aac1;
case 0x60aac6:goto L60aac6;
case 0x60aac9:c.instructions+=4;goto B60aac9;
case 0x60aacf:c.instructions+=3;goto B60aacf;
case 0x60aad1:c.instructions+=2;goto B60aad1;
case 0x60aad3:c.instructions+=1;goto B60aad3;
case 0x60aad5:goto L60aad5;
case 0x60aad6:c.instructions+=1;goto B60aad6;
case 0x60aadb:goto L60aadb;
case 0x60aade:goto L60aade;
case 0x60aae3:c.instructions+=1;goto B60aae3;
case 0x60aae8:goto L60aae8;
case 0x60aaeb:c.instructions+=4;goto B60aaeb;
case 0x60aaef:c.instructions+=3;goto B60aaef;
case 0x60aaf1:c.instructions+=2;goto B60aaf1;
case 0x60aaf5:c.instructions+=1;goto B60aaf5;
case 0x60aaf7:goto L60aaf7;
case 0x60aafa:c.instructions+=6;goto B60aafa;
case 0x60aafd:c.instructions+=5;goto B60aafd;
case 0x60aafe:c.instructions+=4;goto B60aafe;
case 0x60ab04:c.instructions+=3;goto B60ab04;
case 0x60ab05:c.instructions+=2;goto B60ab05;
case 0x60ab07:c.instructions+=1;goto B60ab07;
case 0x60ab0c:goto L60ab0c;
case 0x60ab0e:goto L60ab0e;
case 0x60ab10:goto L60ab10;
case 0x60ab13:c.instructions+=4;goto B60ab13;
case 0x60ab16:c.instructions+=3;goto B60ab16;
case 0x60ab19:c.instructions+=2;goto B60ab19;
case 0x60ab1b:c.instructions+=1;goto B60ab1b;
case 0x60ab20:goto L60ab20;
case 0x60ab22:goto L60ab22;
case 0x60ab27:c.instructions+=4;goto B60ab27;
case 0x60ab29:c.instructions+=3;goto B60ab29;
case 0x60ab2b:c.instructions+=2;goto B60ab2b;
case 0x60ab33:c.instructions+=1;goto B60ab33;
case 0x60ab35:goto L60ab35;
case 0x60ab40:goto L60ab40;
case 0x60ab47:c.instructions+=2;goto B60ab47;
case 0x60ab49:c.instructions+=1;goto B60ab49;
case 0x60ab4e:goto L60ab4e;
case 0x60ab53:c.instructions+=3;goto B60ab53;
case 0x60ab54:c.instructions+=2;goto B60ab54;
case 0x60ab56:c.instructions+=1;goto B60ab56;
case 0x60ab58:goto L60ab58;
case 0x60ab5e:c.instructions+=1;goto B60ab5e;
case 0x60ab63:goto L60ab63;
case 0x60ab69:c.instructions+=1;goto B60ab69;
case 0x60ab6e:goto L60ab6e;
case 0x60ab73:c.instructions+=6;goto B60ab73;
case 0x60ab76:c.instructions+=5;goto B60ab76;
case 0x60ab79:c.instructions+=4;goto B60ab79;
case 0x60ab7e:c.instructions+=3;goto B60ab7e;
case 0x60ab7f:c.instructions+=2;goto B60ab7f;
case 0x60ab84:c.instructions+=1;goto B60ab84;
case 0x60ab89:goto L60ab89;
case 0x60ab8e:c.instructions+=3;goto B60ab8e;
case 0x60ab90:c.instructions+=2;goto B60ab90;
case 0x60ab92:c.instructions+=1;goto B60ab92;
case 0x60ab94:goto L60ab94;
case 0x60ab99:c.instructions+=2;goto B60ab99;
case 0x60ab9b:c.instructions+=1;goto B60ab9b;
case 0x60ab9d:goto L60ab9d;
case 0x60aba2:c.instructions+=2;goto B60aba2;
case 0x60aba4:c.instructions+=1;goto B60aba4;
case 0x60abaa:goto L60abaa;
case 0x60abaf:c.instructions+=2;goto B60abaf;
case 0x60abb1:c.instructions+=1;goto B60abb1;
case 0x60abb3:goto L60abb3;
case 0x60abb8:c.instructions+=3;goto B60abb8;
case 0x60abba:c.instructions+=2;goto B60abba;
case 0x60abbc:c.instructions+=1;goto B60abbc;
case 0x60abbe:goto L60abbe;
case 0x60abc4:c.instructions+=2;goto B60abc4;
case 0x60abc6:c.instructions+=1;goto B60abc6;
case 0x60abc8:goto L60abc8;
case 0x60abca:c.instructions+=1;goto B60abca;
case 0x60abcf:goto L60abcf;
case 0x60abd1:c.instructions+=1;goto B60abd1;
case 0x60abd3:goto L60abd3;
case 0x60abd9:c.instructions+=2;goto B60abd9;
case 0x60abde:c.instructions+=1;goto B60abde;
case 0x60abe0:goto L60abe0;
case 0x60abe4:c.instructions+=1;goto B60abe4;
case 0x60abe6:goto L60abe6;
case 0x60abe8:c.instructions+=2;goto B60abe8;
case 0x60abea:c.instructions+=1;goto B60abea;
case 0x60abec:goto L60abec;
case 0x60abee:goto L60abee;
case 0x60abf0:c.instructions+=1;goto B60abf0;
case 0x60abf2:goto L60abf2;
case 0x60abf5:goto L60abf5;
case 0x60abfa:c.instructions+=1;goto B60abfa;
case 0x60abfc:goto L60abfc;
case 0x60ac01:c.instructions+=2;goto B60ac01;
case 0x60ac09:c.instructions+=1;goto B60ac09;
case 0x60ac0f:goto L60ac0f;
case 0x60ac11:c.instructions+=2;goto B60ac11;
case 0x60ac16:c.instructions+=1;goto B60ac16;
case 0x60ac1b:goto L60ac1b;
case 0x60ac1c:c.instructions+=1;goto B60ac1c;
case 0x60ac21:goto L60ac21;
case 0x60ac27:c.instructions+=3;goto B60ac27;
case 0x60ac2a:c.instructions+=2;goto B60ac2a;
case 0x60ac2b:c.instructions+=1;goto B60ac2b;
case 0x60ac30:goto L60ac30;
case 0x60ac32:c.instructions+=3;goto B60ac32;
case 0x60ac35:c.instructions+=2;goto B60ac35;
case 0x60ac37:c.instructions+=1;goto B60ac37;
case 0x60ac39:goto L60ac39;
case 0x60ac40:c.instructions+=2;goto B60ac40;
case 0x60ac43:c.instructions+=1;goto B60ac43;
case 0x60ac45:goto L60ac45;
case 0x60ac47:goto L60ac47;
case 0x60ac4a:c.instructions+=7;goto B60ac4a;
case 0x60ac4d:c.instructions+=6;goto B60ac4d;
case 0x60ac4f:c.instructions+=5;goto B60ac4f;
case 0x60ac52:c.instructions+=4;goto B60ac52;
case 0x60ac55:c.instructions+=3;goto B60ac55;
case 0x60ac57:c.instructions+=2;goto B60ac57;
case 0x60ac5a:c.instructions+=1;goto B60ac5a;
case 0x60ac5c:goto L60ac5c;
case 0x60ac5e:c.instructions+=1;goto B60ac5e;
case 0x60ac63:goto L60ac63;
case 0x60ac69:c.instructions+=2;goto B60ac69;
case 0x60ac6a:c.instructions+=1;goto B60ac6a;
case 0x60ac6f:goto L60ac6f;
case 0x60ac72:c.instructions+=2;goto B60ac72;
case 0x60ac74:c.instructions+=1;goto B60ac74;
case 0x60ac76:goto L60ac76;
case 0x60ac7d:c.instructions+=2;goto B60ac7d;
case 0x60ac80:c.instructions+=1;goto B60ac80;
case 0x60ac82:goto L60ac82;
case 0x60ac84:goto L60ac84;
case 0x60ac87:c.instructions+=6;goto B60ac87;
case 0x60ac89:c.instructions+=5;goto B60ac89;
case 0x60ac8c:c.instructions+=4;goto B60ac8c;
case 0x60ac8f:c.instructions+=3;goto B60ac8f;
case 0x60ac91:c.instructions+=2;goto B60ac91;
case 0x60ac94:c.instructions+=1;goto B60ac94;
case 0x60ac96:goto L60ac96;
case 0x60ac98:c.instructions+=1;goto B60ac98;
case 0x60ac9d:goto L60ac9d;
case 0x60aca2:c.instructions+=2;goto B60aca2;
case 0x60aca3:c.instructions+=1;goto B60aca3;
case 0x60aca8:goto L60aca8;
case 0x60acab:c.instructions+=2;goto B60acab;
case 0x60acad:c.instructions+=1;goto B60acad;
case 0x60acaf:goto L60acaf;
case 0x60acb6:c.instructions+=2;goto B60acb6;
case 0x60acb9:c.instructions+=1;goto B60acb9;
case 0x60acbb:goto L60acbb;
case 0x60acbd:goto L60acbd;
case 0x60acc0:c.instructions+=6;goto B60acc0;
case 0x60acc2:c.instructions+=5;goto B60acc2;
case 0x60acc5:c.instructions+=4;goto B60acc5;
case 0x60acc8:c.instructions+=3;goto B60acc8;
case 0x60acca:c.instructions+=2;goto B60acca;
case 0x60accd:c.instructions+=1;goto B60accd;
case 0x60accf:goto L60accf;
case 0x60acd1:c.instructions+=1;goto B60acd1;
case 0x60acd6:goto L60acd6;
case 0x60acdc:c.instructions+=2;goto B60acdc;
case 0x60acdd:c.instructions+=1;goto B60acdd;
case 0x60ace2:goto L60ace2;
case 0x60ace5:c.instructions+=2;goto B60ace5;
case 0x60ace7:c.instructions+=1;goto B60ace7;
case 0x60ace9:goto L60ace9;
case 0x60acf0:c.instructions+=2;goto B60acf0;
case 0x60acf3:c.instructions+=1;goto B60acf3;
case 0x60acf5:goto L60acf5;
case 0x60acf7:goto L60acf7;
case 0x60acfa:c.instructions+=6;goto B60acfa;
case 0x60acfc:c.instructions+=5;goto B60acfc;
case 0x60acff:c.instructions+=4;goto B60acff;
case 0x60ad02:c.instructions+=3;goto B60ad02;
case 0x60ad04:c.instructions+=2;goto B60ad04;
case 0x60ad07:c.instructions+=1;goto B60ad07;
case 0x60ad09:goto L60ad09;
case 0x60ad0b:c.instructions+=1;goto B60ad0b;
case 0x60ad10:goto L60ad10;
case 0x60ad12:goto L60ad12;
case 0x60ad17:c.instructions+=3;goto B60ad17;
case 0x60ad1c:c.instructions+=2;goto B60ad1c;
case 0x60ad1e:c.instructions+=1;goto B60ad1e;
case 0x60ad20:goto L60ad20;
case 0x60ad27:c.instructions+=1;goto B60ad27;
case 0x60ad2d:goto L60ad2d;
case 0x60ad32:c.instructions+=2;goto B60ad32;
case 0x60ad34:c.instructions+=1;goto B60ad34;
case 0x60ad3a:goto L60ad3a;
case 0x60ad3f:c.instructions+=2;goto B60ad3f;
case 0x60ad41:c.instructions+=1;goto B60ad41;
case 0x60ad47:goto L60ad47;
case 0x60ad4c:c.instructions+=2;goto B60ad4c;
case 0x60ad4e:c.instructions+=1;goto B60ad4e;
case 0x60ad54:goto L60ad54;
case 0x60ad5a:c.instructions+=1;goto B60ad5a;
case 0x60ad5f:goto L60ad5f;
case 0x60ad61:goto L60ad61;
case 0x60ad68:c.instructions+=1;goto B60ad68;
case 0x60ad6e:goto L60ad6e;
case 0x60ad74:c.instructions+=3;goto B60ad74;
case 0x60ad77:c.instructions+=2;goto B60ad77;
case 0x60ad78:c.instructions+=1;goto B60ad78;
case 0x60ad7d:goto L60ad7d;
case 0x60ad80:c.instructions+=2;goto B60ad80;
case 0x60ad82:c.instructions+=1;goto B60ad82;
case 0x60ad84:goto L60ad84;
case 0x60ad8b:c.instructions+=2;goto B60ad8b;
case 0x60ad8e:c.instructions+=1;goto B60ad8e;
case 0x60ad90:goto L60ad90;
case 0x60ad92:goto L60ad92;
case 0x60ad95:c.instructions+=8;goto B60ad95;
case 0x60ad98:c.instructions+=7;goto B60ad98;
case 0x60ad9a:c.instructions+=6;goto B60ad9a;
case 0x60ad9d:c.instructions+=5;goto B60ad9d;
case 0x60ada0:c.instructions+=4;goto B60ada0;
case 0x60ada2:c.instructions+=3;goto B60ada2;
case 0x60ada5:c.instructions+=2;goto B60ada5;
case 0x60ada7:c.instructions+=1;goto B60ada7;
case 0x60ada9:goto L60ada9;
case 0x60adab:c.instructions+=1;goto B60adab;
case 0x60adb0:goto L60adb0;
case 0x60adb5:c.instructions+=2;goto B60adb5;
case 0x60adb6:c.instructions+=1;goto B60adb6;
case 0x60adbb:goto L60adbb;
case 0x60adbe:c.instructions+=2;goto B60adbe;
case 0x60adc0:c.instructions+=1;goto B60adc0;
case 0x60adc2:goto L60adc2;
case 0x60adc9:c.instructions+=2;goto B60adc9;
case 0x60adcc:c.instructions+=1;goto B60adcc;
case 0x60adce:goto L60adce;
case 0x60add0:goto L60add0;
case 0x60add3:c.instructions+=7;goto B60add3;
case 0x60add5:c.instructions+=6;goto B60add5;
case 0x60add8:c.instructions+=5;goto B60add8;
case 0x60adda:c.instructions+=4;goto B60adda;
case 0x60addd:c.instructions+=3;goto B60addd;
case 0x60ade0:c.instructions+=2;goto B60ade0;
case 0x60ade2:c.instructions+=1;goto B60ade2;
case 0x60ade4:goto L60ade4;
case 0x60ade6:c.instructions+=1;goto B60ade6;
case 0x60adeb:goto L60adeb;
case 0x60adf1:c.instructions+=2;goto B60adf1;
case 0x60adf2:c.instructions+=1;goto B60adf2;
case 0x60adf7:goto L60adf7;
case 0x60adfa:c.instructions+=2;goto B60adfa;
case 0x60adfc:c.instructions+=1;goto B60adfc;
case 0x60ae02:goto L60ae02;
case 0x60ae09:c.instructions+=2;goto B60ae09;
case 0x60ae10:c.instructions+=1;goto B60ae10;
case 0x60ae15:goto L60ae15;
case 0x60ae17:c.instructions+=1;goto B60ae17;
case 0x60ae1d:goto L60ae1d;
case 0x60ae22:c.instructions+=2;goto B60ae22;
case 0x60ae23:c.instructions+=1;goto B60ae23;
case 0x60ae28:goto L60ae28;
case 0x60ae2b:c.instructions+=4;goto B60ae2b;
case 0x60ae2f:c.instructions+=3;goto B60ae2f;
case 0x60ae31:c.instructions+=2;goto B60ae31;
case 0x60ae35:c.instructions+=1;goto B60ae35;
case 0x60ae37:goto L60ae37;
case 0x60ae39:c.instructions+=1;goto B60ae39;
case 0x60ae3e:goto L60ae3e;
case 0x60ae40:goto L60ae40;
case 0x60ae42:goto L60ae42;
case 0x60ae45:c.instructions+=5;goto B60ae45;
case 0x60ae48:c.instructions+=4;goto B60ae48;
case 0x60ae4e:c.instructions+=3;goto B60ae4e;
case 0x60ae4f:c.instructions+=2;goto B60ae4f;
case 0x60ae57:c.instructions+=1;goto B60ae57;
case 0x60ae5c:goto L60ae5c;
case 0x60ae5f:c.instructions+=2;goto B60ae5f;
case 0x60ae61:c.instructions+=1;goto B60ae61;
case 0x60ae63:goto L60ae63;
case 0x60ae6a:c.instructions+=2;goto B60ae6a;
case 0x60ae6d:c.instructions+=1;goto B60ae6d;
case 0x60ae6f:goto L60ae6f;
case 0x60ae71:goto L60ae71;
case 0x60ae74:c.instructions+=8;goto B60ae74;
case 0x60ae77:c.instructions+=7;goto B60ae77;
case 0x60ae79:c.instructions+=6;goto B60ae79;
case 0x60ae7c:c.instructions+=5;goto B60ae7c;
case 0x60ae7f:c.instructions+=4;goto B60ae7f;
case 0x60ae81:c.instructions+=3;goto B60ae81;
case 0x60ae84:c.instructions+=2;goto B60ae84;
case 0x60ae86:c.instructions+=1;goto B60ae86;
case 0x60ae88:goto L60ae88;
case 0x60ae8a:c.instructions+=1;goto B60ae8a;
case 0x60ae8f:goto L60ae8f;
case 0x60ae94:c.instructions+=2;goto B60ae94;
case 0x60ae95:c.instructions+=1;goto B60ae95;
case 0x60ae9a:goto L60ae9a;
case 0x60ae9d:c.instructions+=2;goto B60ae9d;
case 0x60ae9f:c.instructions+=1;goto B60ae9f;
case 0x60aea5:goto L60aea5;
case 0x60aea8:c.instructions+=2;goto B60aea8;
case 0x60aeab:c.instructions+=1;goto B60aeab;
case 0x60aeb0:goto L60aeb0;
case 0x60aeb2:goto L60aeb2;
case 0x60aeb5:c.instructions+=7;goto B60aeb5;
case 0x60aeb7:c.instructions+=6;goto B60aeb7;
case 0x60aeba:c.instructions+=5;goto B60aeba;
case 0x60aebc:c.instructions+=4;goto B60aebc;
case 0x60aebf:c.instructions+=3;goto B60aebf;
case 0x60aec2:c.instructions+=2;goto B60aec2;
case 0x60aec4:c.instructions+=1;goto B60aec4;
case 0x60aec6:goto L60aec6;
case 0x60aec8:c.instructions+=1;goto B60aec8;
case 0x60aecd:goto L60aecd;
case 0x60aed1:c.instructions+=7;goto B60aed1;
case 0x60aed2:c.instructions+=6;goto B60aed2;
case 0x60aed3:c.instructions+=5;goto B60aed3;
case 0x60aed4:c.instructions+=4;goto B60aed4;
case 0x60aed5:c.instructions+=3;goto B60aed5;
case 0x60aedc:c.instructions+=2;goto B60aedc;
case 0x60aedf:c.instructions+=1;goto B60aedf;
case 0x60aee0:goto L60aee0;
case 0x60aee3:c.instructions+=5;goto B60aee3;
case 0x60aee4:c.instructions+=4;goto B60aee4;
case 0x60aee5:c.instructions+=3;goto B60aee5;
case 0x60aee6:c.instructions+=2;goto B60aee6;
case 0x60aee8:c.instructions+=1;goto B60aee8;
case 0x60aeed:goto L60aeed;
case 0x60aeef:c.instructions+=3;goto B60aeef;
case 0x60aef0:c.instructions+=2;goto B60aef0;
case 0x60aef3:c.instructions+=1;goto B60aef3;
case 0x60aef9:goto L60aef9;
case 0x60aefa:c.instructions+=1;goto B60aefa;
case 0x60af01:goto L60af01;
case 0x60af06:c.instructions+=2;goto B60af06;
case 0x60af08:c.instructions+=1;goto B60af08;
case 0x60af0a:goto L60af0a;
case 0x60af0f:c.instructions+=2;goto B60af0f;
case 0x60af11:c.instructions+=1;goto B60af11;
case 0x60af17:goto L60af17;
case 0x60af1c:goto L60af1c;
case 0x60af1e:c.instructions+=2;goto B60af1e;
case 0x60af25:c.instructions+=1;goto B60af25;
case 0x60af2a:goto L60af2a;
case 0x60af2f:goto L60af2f;
case 0x60af34:goto L60af34;
case 0x60af36:c.instructions+=1;goto B60af36;
case 0x60af3b:goto L60af3b;
case 0x60af40:goto L60af40;
case 0x60af43:c.instructions+=3;goto B60af43;
case 0x60af45:c.instructions+=2;goto B60af45;
case 0x60af47:c.instructions+=1;goto B60af47;
case 0x60af4d:goto L60af4d;
case 0x60af52:c.instructions+=1;goto B60af52;
case 0x60af54:goto L60af54;
case 0x60af57:c.instructions+=4;goto B60af57;
case 0x60af5d:c.instructions+=3;goto B60af5d;
case 0x60af5f:c.instructions+=2;goto B60af5f;
case 0x60af62:c.instructions+=1;goto B60af62;
case 0x60af64:goto L60af64;
case 0x60af66:c.instructions+=1;goto B60af66;
case 0x60af6b:goto L60af6b;
case 0x60af6d:c.instructions+=1;goto B60af6d;
case 0x60af6f:goto L60af6f;
case 0x60af75:c.instructions+=1;goto B60af75;
case 0x60af77:goto L60af77;
case 0x60af7c:c.instructions+=8;goto B60af7c;
case 0x60af7f:c.instructions+=7;goto B60af7f;
case 0x60af83:c.instructions+=6;goto B60af83;
case 0x60af87:c.instructions+=5;goto B60af87;
case 0x60af8d:c.instructions+=4;goto B60af8d;
case 0x60af93:c.instructions+=3;goto B60af93;
case 0x60af95:c.instructions+=2;goto B60af95;
case 0x60af98:c.instructions+=1;goto B60af98;
case 0x60af9a:goto L60af9a;
case 0x60af9d:c.instructions+=1;goto B60af9d;
case 0x60afa2:goto L60afa2;
case 0x60afa4:goto L60afa4;
case 0x60afa7:c.instructions+=9;goto B60afa7;
case 0x60afad:c.instructions+=8;goto B60afad;
case 0x60afaf:c.instructions+=7;goto B60afaf;
case 0x60afb3:c.instructions+=6;goto B60afb3;
case 0x60afb7:c.instructions+=5;goto B60afb7;
case 0x60afbd:c.instructions+=4;goto B60afbd;
case 0x60afc3:c.instructions+=3;goto B60afc3;
case 0x60afc5:c.instructions+=2;goto B60afc5;
case 0x60afc8:c.instructions+=1;goto B60afc8;
case 0x60afca:goto L60afca;
case 0x60afcd:c.instructions+=1;goto B60afcd;
case 0x60afd2:goto L60afd2;
case 0x60afd5:c.instructions+=4;goto B60afd5;
case 0x60afdb:c.instructions+=3;goto B60afdb;
case 0x60afdd:c.instructions+=2;goto B60afdd;
case 0x60afe0:c.instructions+=1;goto B60afe0;
case 0x60afe6:goto L60afe6;
case 0x60afec:c.instructions+=5;goto B60afec;
case 0x60aff2:c.instructions+=4;goto B60aff2;
case 0x60aff5:c.instructions+=3;goto B60aff5;
case 0x60aff7:c.instructions+=2;goto B60aff7;
case 0x60affa:c.instructions+=1;goto B60affa;
default:missing_instruction(c.pc);}
B60a001:L60a001:{c.instructions+=2;NFSU2_TR(0x60a001);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60a003:{NFSU2_TR(0x60a003);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x609ff3u,609);}
}
B60a005:L60a005:{c.instructions+=4;NFSU2_TR(0x60a005);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a008:{NFSU2_TR(0x60a008);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B60a00a:{NFSU2_TR(0x60a00a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a00c:{NFSU2_TR(0x60a00c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60a027;}}
}
B60a00e:L60a00e:{c.instructions+=1;NFSU2_TR(0x60a00e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+12),(U+0),4);
}
B60a011:L60a011:{c.instructions+=4;NFSU2_TR(0x60a011);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60a014:{NFSU2_TR(0x60a014);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a015:{NFSU2_TR(0x60a015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60a017:{NFSU2_TR(0x60a017);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a01cull));
TAIL_STATIC(0x5fbbe0u,5fb);
}
B60a01c:L60a01c:{c.instructions+=5;NFSU2_TR(0x60a01c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a01f:{NFSU2_TR(0x60a01f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B60a020:{NFSU2_TR(0x60a020);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B60a023:{NFSU2_TR(0x60a023);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60a025:{NFSU2_TR(0x60a025);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60a011u);}goto L60a011;}}
}
B60a027:L60a027:{c.instructions+=1;NFSU2_TR(0x60a027);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a02cull));
TAIL_STATIC(0x59e350u,59e);
}
B60a02c:L60a02c:{c.instructions+=4;NFSU2_TR(0x60a02c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60a02f:{NFSU2_TR(0x60a02f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a030:{NFSU2_TR(0x60a030);
__builtin_memmove((R+4),(R+24),4);
}
B60a032:{NFSU2_TR(0x60a032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a037ull));
TAIL_STATIC(0x5f0f00u,5f0);
}
B60a037:L60a037:{c.instructions+=4;NFSU2_TR(0x60a037);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a03a:{NFSU2_TR(0x60a03a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B60a03c:{NFSU2_TR(0x60a03c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a03e:{NFSU2_TR(0x60a03e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60a055;}}
}
B60a040:L60a040:{c.instructions+=1;NFSU2_TR(0x60a040);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+12),(U+0),4);
}
B60a043:L60a043:{c.instructions+=2;NFSU2_TR(0x60a043);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60a045:{NFSU2_TR(0x60a045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a04aull));
TAIL_STATIC(0x5f6cd0u,5f6);
}
B60a04a:L60a04a:{c.instructions+=5;NFSU2_TR(0x60a04a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a04d:{NFSU2_TR(0x60a04d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B60a04e:{NFSU2_TR(0x60a04e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B60a051:{NFSU2_TR(0x60a051);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60a053:{NFSU2_TR(0x60a053);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60a043u);}goto L60a043;}}
}
B60a055:L60a055:{c.instructions+=4;NFSU2_TR(0x60a055);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a058:{NFSU2_TR(0x60a058);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a059:{NFSU2_TR(0x60a059);
__builtin_memmove((R+4),(R+24),4);
}
B60a05b:{NFSU2_TR(0x60a05b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a060ull));
TAIL_STATIC(0x5ffa50u,5ff);
}
B60a060:L60a060:{c.instructions+=4;NFSU2_TR(0x60a060);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a063:{NFSU2_TR(0x60a063);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B60a065:{NFSU2_TR(0x60a065);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a067:{NFSU2_TR(0x60a067);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60a086;}}
}
B60a069:L60a069:{c.instructions+=2;NFSU2_TR(0x60a069);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+12),(U+0),4);
}
B60a06c:{NFSU2_TR(0x60a06c);
__builtin_memmove((R+16),(R+16),4);
}
B60a070:L60a070:{c.instructions+=4;NFSU2_TR(0x60a070);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60a073:{NFSU2_TR(0x60a073);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a074:{NFSU2_TR(0x60a074);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60a076:{NFSU2_TR(0x60a076);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a07bull));
TAIL_STATIC(0x604740u,604);
}
B60a07b:L60a07b:{c.instructions+=5;NFSU2_TR(0x60a07b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a07e:{NFSU2_TR(0x60a07e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B60a07f:{NFSU2_TR(0x60a07f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B60a082:{NFSU2_TR(0x60a082);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60a084:{NFSU2_TR(0x60a084);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60a070u);}goto L60a070;}}
}
B60a086:L60a086:{c.instructions+=4;NFSU2_TR(0x60a086);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a089:{NFSU2_TR(0x60a089);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B60a08b:{NFSU2_TR(0x60a08b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60a08d:{NFSU2_TR(0x60a08d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60a0a4;}}
}
B60a08f:L60a08f:{c.instructions+=1;NFSU2_TR(0x60a08f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+12),(U+0),4);
}
B60a092:L60a092:{c.instructions+=2;NFSU2_TR(0x60a092);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60a094:{NFSU2_TR(0x60a094);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a099ull));
TAIL_STATIC(0x5f6cd0u,5f6);
}
B60a099:L60a099:{c.instructions+=5;NFSU2_TR(0x60a099);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a09c:{NFSU2_TR(0x60a09c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B60a09d:{NFSU2_TR(0x60a09d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B60a0a0:{NFSU2_TR(0x60a0a0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60a0a2:{NFSU2_TR(0x60a0a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60a092u);}goto L60a092;}}
}
B60a0a4:L60a0a4:{c.instructions+=4;NFSU2_TR(0x60a0a4);
__builtin_memmove((R+4),gp(0x890080),4);
}
B60a0aa:{NFSU2_TR(0x60a0aa);
s4(0x7fc800,u32(0x0ull));
}
B60a0b4:{NFSU2_TR(0x60a0b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B60a0b6:{NFSU2_TR(0x60a0b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a0bbull));
TAIL_STATIC(0x502fd0u,502);
}
B60a0bb:L60a0bb:{c.instructions+=2;NFSU2_TR(0x60a0bb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60a0bd:{NFSU2_TR(0x60a0bd);
if(r1(R+518)){{goto L60a0ce;}}
}
B60a0bf:L60a0bf:{c.instructions+=1;NFSU2_TR(0x60a0bf);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B60a0c2:L60a0c2:{c.instructions+=2;NFSU2_TR(0x60a0c2);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B60a0c6:{NFSU2_TR(0x60a0c6);
if(r1(R+518)){{goto L60a0ce;}}
}
B60a0c8:L60a0c8:{c.instructions+=3;NFSU2_TR(0x60a0c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B60a0ca:{NFSU2_TR(0x60a0ca);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60a0cc:{NFSU2_TR(0x60a0cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60a0c2u);}goto L60a0c2;}}
}
B60a0ce:L60a0ce:{c.instructions+=4;NFSU2_TR(0x60a0ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a0d1:{NFSU2_TR(0x60a0d1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B60a0d3:{NFSU2_TR(0x60a0d3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a0d5:{NFSU2_TR(0x60a0d5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60a110;}}
}
B60a0d7:L60a0d7:{c.instructions+=2;NFSU2_TR(0x60a0d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B60a0da:{NFSU2_TR(0x60a0da);
__builtin_memmove((R+12),(R+12),4);
}
B60a0e0:L60a0e0:{c.instructions+=6;NFSU2_TR(0x60a0e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60a0e2:{NFSU2_TR(0x60a0e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a0e5:{NFSU2_TR(0x60a0e5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B60a0e8:{NFSU2_TR(0x60a0e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a0e9:{NFSU2_TR(0x60a0e9);
__builtin_memmove((R+4),(R+24),4);
}
B60a0eb:{NFSU2_TR(0x60a0eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a0f0ull));
TAIL_STATIC(0x5f1160u,5f1);
}
B60a0f0:L60a0f0:{c.instructions+=4;NFSU2_TR(0x60a0f0);
{u32 ea_=u32(u32(8017036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60a0f6:{NFSU2_TR(0x60a0f6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60a0f8:{NFSU2_TR(0x60a0f8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60a0fb:{NFSU2_TR(0x60a0fb);
if(r1(R+514)){{goto L60a105;}}
}
B60a0fd:L60a0fd:{c.instructions+=2;NFSU2_TR(0x60a0fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60a100:{NFSU2_TR(0x60a100);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a105ull));
TAIL_STATIC(0x5f5580u,5f5);
}
B60a105:L60a105:{c.instructions+=5;NFSU2_TR(0x60a105);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a108:{NFSU2_TR(0x60a108);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B60a109:{NFSU2_TR(0x60a109);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B60a10c:{NFSU2_TR(0x60a10c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60a10e:{NFSU2_TR(0x60a10e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60a0e0u);}goto L60a0e0;}}
}
B60a110:L60a110:{c.instructions+=3;NFSU2_TR(0x60a110);
__builtin_memmove((R+8),gp(0x8900d8),4);
}
B60a116:{NFSU2_TR(0x60a116);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x5ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B60a119:{NFSU2_TR(0x60a119);
if(r1(R+518)){{goto L60a16e;}}
}
B60a11b:L60a11b:{c.instructions+=4;NFSU2_TR(0x60a11b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a11e:{NFSU2_TR(0x60a11e);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60a120:{NFSU2_TR(0x60a120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60a127:{NFSU2_TR(0x60a127);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60a16e;}}
}
B60a129:L60a129:{c.instructions+=2;NFSU2_TR(0x60a129);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+12),(U+0),4);
}
B60a12c:{NFSU2_TR(0x60a12c);
__builtin_memmove((R+16),(R+16),4);
}
B60a130:L60a130:{c.instructions+=4;NFSU2_TR(0x60a130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B60a132:{NFSU2_TR(0x60a132);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a135:{NFSU2_TR(0x60a135);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a137:{NFSU2_TR(0x60a137);
if(r1(R+518)){{goto L60a14c;}}
}
B60a139:L60a139:{c.instructions+=5;NFSU2_TR(0x60a139);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60a13c:{NFSU2_TR(0x60a13c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60a142:{NFSU2_TR(0x60a142);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a143:{NFSU2_TR(0x60a143);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a144:{NFSU2_TR(0x60a144);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a149ull));
TAIL_STATIC(0x572e50u,572);
}
B60a149:L60a149:{c.instructions+=1;NFSU2_TR(0x60a149);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B60a14c:L60a14c:{c.instructions+=3;NFSU2_TR(0x60a14c);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B60a151:{NFSU2_TR(0x60a151);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B60a154:{NFSU2_TR(0x60a154);
if(r1(R+518)){{goto L60a15d;}}
}
B60a156:L60a156:{c.instructions+=2;NFSU2_TR(0x60a156);
__builtin_memmove((R+4),(R+28),4);
}
B60a158:{NFSU2_TR(0x60a158);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a15dull));
TAIL_STATIC(0x5f6350u,5f6);
}
B60a15d:L60a15d:{c.instructions+=7;NFSU2_TR(0x60a15d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a160:{NFSU2_TR(0x60a160);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60a163:{NFSU2_TR(0x60a163);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B60a164:{NFSU2_TR(0x60a164);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B60a167:{NFSU2_TR(0x60a167);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+6)));
w4(U+10,u32(u32(r4(R+0))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60a169:{NFSU2_TR(0x60a169);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a16c:{NFSU2_TR(0x60a16c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60a130u);}goto L60a130;}}
}
B60a16e:L60a16e:{c.instructions+=2;NFSU2_TR(0x60a16e);
w4(R+4,u32(0x8357e0ull));
}
B60a173:{NFSU2_TR(0x60a173);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a178ull));
TAIL_STATIC(0x4022c0u,402);
}
B60a178:L60a178:{c.instructions+=4;NFSU2_TR(0x60a178);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60a17b:{NFSU2_TR(0x60a17b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a17c:{NFSU2_TR(0x60a17c);
w4(R+4,u32(0x8357e0ull));
}
B60a181:{NFSU2_TR(0x60a181);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a186ull));
TAIL_STATIC(0x492e10u,492);
}
B60a186:L60a186:{c.instructions+=4;NFSU2_TR(0x60a186);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a189:{NFSU2_TR(0x60a189);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a18b:{NFSU2_TR(0x60a18b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60a192:{NFSU2_TR(0x60a192);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60a211;}}
}
B60a198:L60a198:{c.instructions+=3;NFSU2_TR(0x60a198);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+8),(U+0),4);
}
B60a19b:{NFSU2_TR(0x60a19b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a19e:{NFSU2_TR(0x60a19e);
__builtin_memmove((R+28),(R+28),4);
}
B60a1a0:L60a1a0:{c.instructions+=6;NFSU2_TR(0x60a1a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a1a3:{NFSU2_TR(0x60a1a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B60a1a5:{NFSU2_TR(0x60a1a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60a1a8:{NFSU2_TR(0x60a1a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a1a9:{NFSU2_TR(0x60a1a9);
__builtin_memmove((R+4),(R+24),4);
}
B60a1ab:{NFSU2_TR(0x60a1ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a1b0ull));
TAIL_STATIC(0x5f1160u,5f1);
}
B60a1b0:L60a1b0:{c.instructions+=4;NFSU2_TR(0x60a1b0);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60a1b3:{NFSU2_TR(0x60a1b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a1b4:{NFSU2_TR(0x60a1b4);
__builtin_memmove((R+4),(R+24),4);
}
B60a1b6:{NFSU2_TR(0x60a1b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a1bbull));
TAIL_STATIC(0x5f1160u,5f1);
}
B60a1bb:L60a1bb:{c.instructions+=4;NFSU2_TR(0x60a1bb);
{u32 ea_=u32(u32(8017040u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60a1c1:{NFSU2_TR(0x60a1c1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60a1c3:{NFSU2_TR(0x60a1c3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60a1c6:{NFSU2_TR(0x60a1c6);
if(r1(R+514)){{goto L60a1fa;}}
}
B60a1c8:L60a1c8:{c.instructions+=3;NFSU2_TR(0x60a1c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60a1cb:{NFSU2_TR(0x60a1cb);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60a1cf:{NFSU2_TR(0x60a1cf);
if(r1(R+518)){{goto L60a1fa;}}
}
B60a1d1:L60a1d1:{c.instructions+=3;NFSU2_TR(0x60a1d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x998ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60a1d7:{NFSU2_TR(0x60a1d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60a1d9:{NFSU2_TR(0x60a1d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60a1fa;}}
}
B60a1db:L60a1db:{c.instructions+=3;NFSU2_TR(0x60a1db);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60a1e1:{NFSU2_TR(0x60a1e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60a1e3:{NFSU2_TR(0x60a1e3);
if(r1(R+518)){{goto L60a1fa;}}
}
B60a1e5:L60a1e5:{c.instructions+=3;NFSU2_TR(0x60a1e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a1eb:{NFSU2_TR(0x60a1eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a1ed:{NFSU2_TR(0x60a1ed);
if(r1(R+518)){{goto L60a1fa;}}
}
B60a1ef:L60a1ef:{c.instructions+=4;NFSU2_TR(0x60a1ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60a1f2:{NFSU2_TR(0x60a1f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a1f3:{NFSU2_TR(0x60a1f3);
__builtin_memmove((R+4),(R+12),4);
}
B60a1f5:{NFSU2_TR(0x60a1f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a1faull));
TAIL_STATIC(0x5f5730u,5f5);
}
B60a1fa:L60a1fa:{c.instructions+=9;NFSU2_TR(0x60a1fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a1fd:{NFSU2_TR(0x60a1fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60a200:{NFSU2_TR(0x60a200);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60a203:{NFSU2_TR(0x60a203);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B60a204:{NFSU2_TR(0x60a204);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B60a207:{NFSU2_TR(0x60a207);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60a209:{NFSU2_TR(0x60a209);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a20c:{NFSU2_TR(0x60a20c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a20f:{NFSU2_TR(0x60a20f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60a1a0u);}goto L60a1a0;}}
}
B60a211:L60a211:{c.instructions+=1;NFSU2_TR(0x60a211);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a216ull));
TAIL_STATIC(0x605780u,605);
}
B60a216:L60a216:{c.instructions+=1;NFSU2_TR(0x60a216);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a21bull));
TAIL_STATIC(0x5e0a00u,5e0);
}
B60a21b:L60a21b:{c.instructions+=1;NFSU2_TR(0x60a21b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a220ull));
TAIL_STATIC(0x5e5430u,5e5);
}
B60a220:L60a220:{c.instructions+=3;NFSU2_TR(0x60a220);
u8 U[4];
w4(U+0,u32(0x5ea240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a225:{NFSU2_TR(0x60a225);
__builtin_memmove((R+4),(R+24),4);
}
B60a227:{NFSU2_TR(0x60a227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a22cull));
TAIL_STATIC(0x43e650u,43e);
}
B60a22c:L60a22c:{c.instructions+=4;NFSU2_TR(0x60a22c);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B60a231:{NFSU2_TR(0x60a231);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B60a233:{NFSU2_TR(0x60a233);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a235:{NFSU2_TR(0x60a235);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60a256;}}
}
B60a237:L60a237:{c.instructions+=1;NFSU2_TR(0x60a237);
{goto L60a240;}
}
B60a240:L60a240:{c.instructions+=2;NFSU2_TR(0x60a240);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B60a247:{NFSU2_TR(0x60a247);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a24cull));
TAIL_STATIC(0x602650u,602);
}
B60a24c:L60a24c:{c.instructions+=4;NFSU2_TR(0x60a24c);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B60a251:{NFSU2_TR(0x60a251);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B60a252:{NFSU2_TR(0x60a252);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60a254:{NFSU2_TR(0x60a254);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60a240u);}goto L60a240;}}
}
B60a256:L60a256:{c.instructions+=4;NFSU2_TR(0x60a256);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a259:{NFSU2_TR(0x60a259);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a25a:{NFSU2_TR(0x60a25a);
w4(R+4,u32(0x827b88ull));
}
B60a25f:{NFSU2_TR(0x60a25f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a264ull));
TAIL_STATIC(0x43af20u,43a);
}
B60a264:L60a264:{c.instructions+=1;NFSU2_TR(0x60a264);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a269ull));
TAIL_STATIC(0x4022c0u,402);
}
B60a269:L60a269:{c.instructions+=1;NFSU2_TR(0x60a269);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a26eull));
TAIL_STATIC(0x4022c0u,402);
}
B60a26e:L60a26e:{c.instructions+=1;NFSU2_TR(0x60a26e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a273ull));
TAIL_STATIC(0x4022c0u,402);
}
B60a273:L60a273:{c.instructions+=1;NFSU2_TR(0x60a273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a278ull));
TAIL_STATIC(0x638070u,638);
}
B60a278:L60a278:{c.instructions+=2;NFSU2_TR(0x60a278);
w4(R+4,u32(0x88eb00ull));
}
B60a27d:{NFSU2_TR(0x60a27d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a282ull));
TAIL_STATIC(0x5e86e0u,5e8);
}
B60a282:L60a282:{c.instructions+=6;NFSU2_TR(0x60a282);
__builtin_memmove((R+4),gp(0x890118),4);
}
B60a288:{NFSU2_TR(0x60a288);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60a28a:{NFSU2_TR(0x60a28a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60a28b:{NFSU2_TR(0x60a28b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60a28c:{NFSU2_TR(0x60a28c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60a28d:{NFSU2_TR(0x60a28d);
if(r1(R+518)){{goto L60a294;}}
}
B60a28f:L60a28f:{c.instructions+=1;NFSU2_TR(0x60a28f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a294ull));
TAIL_STATIC(0x6076d0u,607);
}
B60a294:L60a294:{c.instructions+=3;NFSU2_TR(0x60a294);
__builtin_memmove((R+16),(R+20),4);
}
B60a296:{NFSU2_TR(0x60a296);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60a297:{NFSU2_TR(0x60a297);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60a2a0:L60a2a0:{c.instructions+=10;NFSU2_TR(0x60a2a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a2a1:{NFSU2_TR(0x60a2a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a2a2:{NFSU2_TR(0x60a2a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a2a3:{NFSU2_TR(0x60a2a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60a2a7:{NFSU2_TR(0x60a2a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a2a8:{NFSU2_TR(0x60a2a8);
u8 U[4];
w4(U+0,u32(0x7a6588ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a2ad:{NFSU2_TR(0x60a2ad);
__builtin_memmove((R+28),(R+4),4);
}
B60a2af:{NFSU2_TR(0x60a2af);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a2b1:{NFSU2_TR(0x60a2b1);
__builtin_memmove((R+4),(R+24),4);
}
B60a2b3:{NFSU2_TR(0x60a2b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a2b8ull));
TAIL_STATIC(0x578ce0u,578);
}
B60a2b8:L60a2b8:{c.instructions+=5;NFSU2_TR(0x60a2b8);
u8 U[4];
w4(U+0,u32(0x7a5d48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a2bd:{NFSU2_TR(0x60a2bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a2bf:{NFSU2_TR(0x60a2bf);
__builtin_memmove((R+4),(R+24),4);
}
B60a2c1:{NFSU2_TR(0x60a2c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60a2c4:{NFSU2_TR(0x60a2c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a2c9ull));
TAIL_STATIC(0x578ce0u,578);
}
B60a2c9:L60a2c9:{c.instructions+=3;NFSU2_TR(0x60a2c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a2ca:{NFSU2_TR(0x60a2ca);
__builtin_memmove((R+4),(R+24),4);
}
B60a2cc:{NFSU2_TR(0x60a2cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a2d1ull));
TAIL_STATIC(0x5716c0u,571);
}
B60a2d1:L60a2d1:{c.instructions+=7;NFSU2_TR(0x60a2d1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a2d3:{NFSU2_TR(0x60a2d3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a2d5:{NFSU2_TR(0x60a2d5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a2d7:{NFSU2_TR(0x60a2d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B60a2da:{NFSU2_TR(0x60a2da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a2db:{NFSU2_TR(0x60a2db);
__builtin_memmove((R+4),(R+24),4);
}
B60a2dd:{NFSU2_TR(0x60a2dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a2e2ull));
TAIL_STATIC(0x571640u,571);
}
B60a2e2:L60a2e2:{c.instructions+=4;NFSU2_TR(0x60a2e2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B60a2e5:{NFSU2_TR(0x60a2e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a2e6:{NFSU2_TR(0x60a2e6);
__builtin_memmove((R+4),(R+24),4);
}
B60a2e8:{NFSU2_TR(0x60a2e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a2edull));
TAIL_STATIC(0x571770u,571);
}
B60a2ed:L60a2ed:{c.instructions+=2;NFSU2_TR(0x60a2ed);
__builtin_memmove((R+4),(R+24),4);
}
B60a2ef:{NFSU2_TR(0x60a2ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a2f4ull));
TAIL_STATIC(0x578d90u,578);
}
B60a2f4:L60a2f4:{c.instructions+=4;NFSU2_TR(0x60a2f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60a2f7:{NFSU2_TR(0x60a2f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a2f8:{NFSU2_TR(0x60a2f8);
__builtin_memmove((R+4),(R+24),4);
}
B60a2fa:{NFSU2_TR(0x60a2fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a2ffull));
TAIL_STATIC(0x571770u,571);
}
B60a2ff:L60a2ff:{c.instructions+=7;NFSU2_TR(0x60a2ff);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a301:{NFSU2_TR(0x60a301);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a303:{NFSU2_TR(0x60a303);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a305:{NFSU2_TR(0x60a305);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+8),(U+0),4);
}
B60a308:{NFSU2_TR(0x60a308);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a309:{NFSU2_TR(0x60a309);
__builtin_memmove((R+4),(R+24),4);
}
B60a30b:{NFSU2_TR(0x60a30b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a310ull));
TAIL_STATIC(0x571640u,571);
}
B60a310:L60a310:{c.instructions+=7;NFSU2_TR(0x60a310);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a312:{NFSU2_TR(0x60a312);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a314:{NFSU2_TR(0x60a314);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a316:{NFSU2_TR(0x60a316);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B60a319:{NFSU2_TR(0x60a319);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a31a:{NFSU2_TR(0x60a31a);
__builtin_memmove((R+4),(R+24),4);
}
B60a31c:{NFSU2_TR(0x60a31c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a321ull));
TAIL_STATIC(0x571640u,571);
}
B60a321:L60a321:{c.instructions+=7;NFSU2_TR(0x60a321);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a323:{NFSU2_TR(0x60a323);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a325:{NFSU2_TR(0x60a325);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a327:{NFSU2_TR(0x60a327);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60a32a:{NFSU2_TR(0x60a32a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a32b:{NFSU2_TR(0x60a32b);
__builtin_memmove((R+4),(R+24),4);
}
B60a32d:{NFSU2_TR(0x60a32d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a332ull));
TAIL_STATIC(0x571640u,571);
}
B60a332:L60a332:{c.instructions+=7;NFSU2_TR(0x60a332);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a334:{NFSU2_TR(0x60a334);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a336:{NFSU2_TR(0x60a336);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a338:{NFSU2_TR(0x60a338);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((R+8),(U+0),4);
}
B60a33b:{NFSU2_TR(0x60a33b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a33c:{NFSU2_TR(0x60a33c);
__builtin_memmove((R+4),(R+24),4);
}
B60a33e:{NFSU2_TR(0x60a33e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a343ull));
TAIL_STATIC(0x571640u,571);
}
B60a343:L60a343:{c.instructions+=7;NFSU2_TR(0x60a343);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a345:{NFSU2_TR(0x60a345);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a347:{NFSU2_TR(0x60a347);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a349:{NFSU2_TR(0x60a349);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x228ull))));
__builtin_memmove((R+0),(U+0),4);
}
B60a34f:{NFSU2_TR(0x60a34f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a350:{NFSU2_TR(0x60a350);
__builtin_memmove((R+4),(R+24),4);
}
B60a352:{NFSU2_TR(0x60a352);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a357ull));
TAIL_STATIC(0x571640u,571);
}
B60a357:L60a357:{c.instructions+=5;NFSU2_TR(0x60a357);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60a35d:{NFSU2_TR(0x60a35d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60a360:{NFSU2_TR(0x60a360);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a361:{NFSU2_TR(0x60a361);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a362:{NFSU2_TR(0x60a362);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a367ull));
TAIL_STATIC(0x57b980u,57b);
}
B60a367:L60a367:{c.instructions+=4;NFSU2_TR(0x60a367);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B60a36d:{NFSU2_TR(0x60a36d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a36e:{NFSU2_TR(0x60a36e);
__builtin_memmove((R+4),(R+24),4);
}
B60a370:{NFSU2_TR(0x60a370);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a375ull));
TAIL_STATIC(0x571770u,571);
}
B60a375:L60a375:{c.instructions+=4;NFSU2_TR(0x60a375);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60a37b:{NFSU2_TR(0x60a37b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a37c:{NFSU2_TR(0x60a37c);
__builtin_memmove((R+4),(R+24),4);
}
B60a37e:{NFSU2_TR(0x60a37e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a383ull));
TAIL_STATIC(0x571770u,571);
}
B60a383:L60a383:{c.instructions+=4;NFSU2_TR(0x60a383);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xacull))));
__builtin_memmove((R+8),(U+0),4);
}
B60a389:{NFSU2_TR(0x60a389);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a38a:{NFSU2_TR(0x60a38a);
__builtin_memmove((R+4),(R+24),4);
}
B60a38c:{NFSU2_TR(0x60a38c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a391ull));
TAIL_STATIC(0x571770u,571);
}
B60a391:L60a391:{c.instructions+=4;NFSU2_TR(0x60a391);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B60a397:{NFSU2_TR(0x60a397);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a398:{NFSU2_TR(0x60a398);
__builtin_memmove((R+4),(R+24),4);
}
B60a39a:{NFSU2_TR(0x60a39a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a39full));
TAIL_STATIC(0x571770u,571);
}
B60a39f:L60a39f:{c.instructions+=4;NFSU2_TR(0x60a39f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60a3a5:{NFSU2_TR(0x60a3a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a3a6:{NFSU2_TR(0x60a3a6);
__builtin_memmove((R+4),(R+24),4);
}
B60a3a8:{NFSU2_TR(0x60a3a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a3adull));
TAIL_STATIC(0x571770u,571);
}
B60a3ad:L60a3ad:{c.instructions+=4;NFSU2_TR(0x60a3ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B60a3b3:{NFSU2_TR(0x60a3b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a3b4:{NFSU2_TR(0x60a3b4);
__builtin_memmove((R+4),(R+24),4);
}
B60a3b6:{NFSU2_TR(0x60a3b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a3bbull));
TAIL_STATIC(0x571770u,571);
}
B60a3bb:L60a3bb:{c.instructions+=3;NFSU2_TR(0x60a3bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60a3c1:{NFSU2_TR(0x60a3c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a3c2:{NFSU2_TR(0x60a3c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a3c7ull));
TAIL_STATIC(0x5eb210u,5eb);
}
B60a3c7:L60a3c7:{c.instructions+=7;NFSU2_TR(0x60a3c7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a3c9:{NFSU2_TR(0x60a3c9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a3cb:{NFSU2_TR(0x60a3cb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a3cd:{NFSU2_TR(0x60a3cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B60a3d3:{NFSU2_TR(0x60a3d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a3d4:{NFSU2_TR(0x60a3d4);
__builtin_memmove((R+4),(R+24),4);
}
B60a3d6:{NFSU2_TR(0x60a3d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a3dbull));
TAIL_STATIC(0x571640u,571);
}
B60a3db:L60a3db:{c.instructions+=4;NFSU2_TR(0x60a3db);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60a3e1:{NFSU2_TR(0x60a3e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60a3e7:{NFSU2_TR(0x60a3e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60a3ef:{NFSU2_TR(0x60a3ef);
}
B60a3f0:L60a3f0:{c.instructions+=6;NFSU2_TR(0x60a3f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a3f2:{NFSU2_TR(0x60a3f2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a3f4:{NFSU2_TR(0x60a3f4);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a3f6:{NFSU2_TR(0x60a3f6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a3f7:{NFSU2_TR(0x60a3f7);
__builtin_memmove((R+4),(R+24),4);
}
B60a3f9:{NFSU2_TR(0x60a3f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a3feull));
TAIL_STATIC(0x571640u,571);
}
B60a3fe:L60a3fe:{c.instructions+=3;NFSU2_TR(0x60a3fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a3ff:{NFSU2_TR(0x60a3ff);
__builtin_memmove((R+4),(R+24),4);
}
B60a401:{NFSU2_TR(0x60a401);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a406ull));
TAIL_STATIC(0x571710u,571);
}
B60a406:L60a406:{c.instructions+=6;NFSU2_TR(0x60a406);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a40a:{NFSU2_TR(0x60a40a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B60a40d:{NFSU2_TR(0x60a40d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B60a410:{NFSU2_TR(0x60a410);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B60a411:{NFSU2_TR(0x60a411);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a415:{NFSU2_TR(0x60a415);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60a3f0u);}goto L60a3f0;}}
}
B60a417:L60a417:{c.instructions+=7;NFSU2_TR(0x60a417);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a419:{NFSU2_TR(0x60a419);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a41b:{NFSU2_TR(0x60a41b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a41d:{NFSU2_TR(0x60a41d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x160ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60a423:{NFSU2_TR(0x60a423);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a424:{NFSU2_TR(0x60a424);
__builtin_memmove((R+4),(R+24),4);
}
B60a426:{NFSU2_TR(0x60a426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a42bull));
TAIL_STATIC(0x571640u,571);
}
B60a42b:L60a42b:{c.instructions+=7;NFSU2_TR(0x60a42b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a42d:{NFSU2_TR(0x60a42d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a42f:{NFSU2_TR(0x60a42f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a431:{NFSU2_TR(0x60a431);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x248ull))));
__builtin_memmove((R+8),(U+0),4);
}
B60a437:{NFSU2_TR(0x60a437);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a438:{NFSU2_TR(0x60a438);
__builtin_memmove((R+4),(R+24),4);
}
B60a43a:{NFSU2_TR(0x60a43a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a43full));
TAIL_STATIC(0x571640u,571);
}
B60a43f:L60a43f:{c.instructions+=7;NFSU2_TR(0x60a43f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a441:{NFSU2_TR(0x60a441);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a443:{NFSU2_TR(0x60a443);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a445:{NFSU2_TR(0x60a445);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x249ull))));
__builtin_memmove((R+0),(U+0),4);
}
B60a44b:{NFSU2_TR(0x60a44b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a44c:{NFSU2_TR(0x60a44c);
__builtin_memmove((R+4),(R+24),4);
}
B60a44e:{NFSU2_TR(0x60a44e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a453ull));
TAIL_STATIC(0x571640u,571);
}
B60a453:L60a453:{c.instructions+=7;NFSU2_TR(0x60a453);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a455:{NFSU2_TR(0x60a455);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a457:{NFSU2_TR(0x60a457);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a459:{NFSU2_TR(0x60a459);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60a45f:{NFSU2_TR(0x60a45f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a460:{NFSU2_TR(0x60a460);
__builtin_memmove((R+4),(R+24),4);
}
B60a462:{NFSU2_TR(0x60a462);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a467ull));
TAIL_STATIC(0x571640u,571);
}
B60a467:L60a467:{c.instructions+=7;NFSU2_TR(0x60a467);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a469:{NFSU2_TR(0x60a469);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a46b:{NFSU2_TR(0x60a46b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a46d:{NFSU2_TR(0x60a46d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x164ull))));
__builtin_memmove((R+8),(U+0),4);
}
B60a473:{NFSU2_TR(0x60a473);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a474:{NFSU2_TR(0x60a474);
__builtin_memmove((R+4),(R+24),4);
}
B60a476:{NFSU2_TR(0x60a476);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a47bull));
TAIL_STATIC(0x571640u,571);
}
B60a47b:L60a47b:{c.instructions+=7;NFSU2_TR(0x60a47b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a47d:{NFSU2_TR(0x60a47d);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a47f:{NFSU2_TR(0x60a47f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a481:{NFSU2_TR(0x60a481);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x16cull))));
__builtin_memmove((R+0),(U+0),4);
}
B60a487:{NFSU2_TR(0x60a487);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a488:{NFSU2_TR(0x60a488);
__builtin_memmove((R+4),(R+24),4);
}
B60a48a:{NFSU2_TR(0x60a48a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a48full));
TAIL_STATIC(0x571640u,571);
}
B60a48f:L60a48f:{c.instructions+=7;NFSU2_TR(0x60a48f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a491:{NFSU2_TR(0x60a491);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a493:{NFSU2_TR(0x60a493);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a495:{NFSU2_TR(0x60a495);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x174ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60a49b:{NFSU2_TR(0x60a49b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a49c:{NFSU2_TR(0x60a49c);
__builtin_memmove((R+4),(R+24),4);
}
B60a49e:{NFSU2_TR(0x60a49e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a4a3ull));
TAIL_STATIC(0x571640u,571);
}
B60a4a3:L60a4a3:{c.instructions+=7;NFSU2_TR(0x60a4a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60a4a9:{NFSU2_TR(0x60a4a9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a4ab:{NFSU2_TR(0x60a4ab);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a4ad:{NFSU2_TR(0x60a4ad);
u8 U[4];
w4(U+0,u32(0x90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a4b2:{NFSU2_TR(0x60a4b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a4b3:{NFSU2_TR(0x60a4b3);
__builtin_memmove((R+4),(R+24),4);
}
B60a4b5:{NFSU2_TR(0x60a4b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a4baull));
TAIL_STATIC(0x571640u,571);
}
B60a4ba:L60a4ba:{c.instructions+=7;NFSU2_TR(0x60a4ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a4c0:{NFSU2_TR(0x60a4c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a4c2:{NFSU2_TR(0x60a4c2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a4c4:{NFSU2_TR(0x60a4c4);
u8 U[4];
w4(U+0,u32(0x90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a4c9:{NFSU2_TR(0x60a4c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a4ca:{NFSU2_TR(0x60a4ca);
__builtin_memmove((R+4),(R+24),4);
}
B60a4cc:{NFSU2_TR(0x60a4cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a4d1ull));
TAIL_STATIC(0x571640u,571);
}
B60a4d1:L60a4d1:{c.instructions+=5;NFSU2_TR(0x60a4d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a4d7:{NFSU2_TR(0x60a4d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a4d9:{NFSU2_TR(0x60a4d9);
__builtin_memmove((R+20),gp(0x890080),4);
}
B60a4df:{NFSU2_TR(0x60a4df);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B60a4e7:{NFSU2_TR(0x60a4e7);
if(r1(R+518)){{goto L60a4f1;}}
}
B60a4e9:L60a4e9:{c.instructions+=2;NFSU2_TR(0x60a4e9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B60a4ed:{NFSU2_TR(0x60a4ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a4f1:L60a4f1:{c.instructions+=7;NFSU2_TR(0x60a4f1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a4f3:{NFSU2_TR(0x60a4f3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a4f5:{NFSU2_TR(0x60a4f5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a4f7:{NFSU2_TR(0x60a4f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B60a4fb:{NFSU2_TR(0x60a4fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a4fc:{NFSU2_TR(0x60a4fc);
__builtin_memmove((R+4),(R+24),4);
}
B60a4fe:{NFSU2_TR(0x60a4fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a503ull));
TAIL_STATIC(0x571640u,571);
}
B60a503:L60a503:{c.instructions+=3;NFSU2_TR(0x60a503);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60a506:{NFSU2_TR(0x60a506);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60a508:{NFSU2_TR(0x60a508);
if(r1(R+518)){{goto L60a554;}}
}
B60a50a:L60a50a:{c.instructions+=3;NFSU2_TR(0x60a50a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a50e:{NFSU2_TR(0x60a50e);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60a510:{NFSU2_TR(0x60a510);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L60a53a;}}
}
B60a512:L60a512:{c.instructions+=3;NFSU2_TR(0x60a512);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+12),(U+0),4);
}
B60a515:{NFSU2_TR(0x60a515);
__builtin_memmove((R+4),(R+20),4);
}
B60a517:{NFSU2_TR(0x60a517);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a51cull));
TAIL_STATIC(0x502fd0u,502);
}
B60a51c:L60a51c:{c.instructions+=2;NFSU2_TR(0x60a51c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60a51e:{NFSU2_TR(0x60a51e);
if(r1(R+518)){{goto L60a530;}}
}
B60a520:L60a520:{c.instructions+=3;NFSU2_TR(0x60a520);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B60a524:{NFSU2_TR(0x60a524);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60a528:{NFSU2_TR(0x60a528);
if(r1(R+518)){{goto L60a532;}}
}
B60a52a:L60a52a:{c.instructions+=3;NFSU2_TR(0x60a52a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B60a52c:{NFSU2_TR(0x60a52c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60a52e:{NFSU2_TR(0x60a52e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60a520u);}goto L60a520;}}
}
B60a530:L60a530:{c.instructions+=1;NFSU2_TR(0x60a530);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B60a532:L60a532:{c.instructions+=2;NFSU2_TR(0x60a532);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a538:{NFSU2_TR(0x60a538);
{goto L60a544;}
}
B60a53a:L60a53a:{c.instructions+=1;NFSU2_TR(0x60a53a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60a544:L60a544:{c.instructions+=3;NFSU2_TR(0x60a544);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60a547:{NFSU2_TR(0x60a547);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60a549:{NFSU2_TR(0x60a549);
if(r1(R+518)){{goto L60a554;}}
}
B60a54b:L60a54b:{c.instructions+=3;NFSU2_TR(0x60a54b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a54d:{NFSU2_TR(0x60a54d);
__builtin_memmove((R+4),(R+28),4);
}
B60a54f:{NFSU2_TR(0x60a54f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a554ull));
TAIL_STATIC(0x605c70u,605);
}
B60a554:L60a554:{c.instructions+=7;NFSU2_TR(0x60a554);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a556:{NFSU2_TR(0x60a556);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a558:{NFSU2_TR(0x60a558);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a55a:{NFSU2_TR(0x60a55a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x230ull))));
__builtin_memmove((R+8),(U+0),4);
}
B60a560:{NFSU2_TR(0x60a560);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a561:{NFSU2_TR(0x60a561);
__builtin_memmove((R+4),(R+24),4);
}
B60a563:{NFSU2_TR(0x60a563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a568ull));
TAIL_STATIC(0x571640u,571);
}
B60a568:L60a568:{c.instructions+=4;NFSU2_TR(0x60a568);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B60a56e:{NFSU2_TR(0x60a56e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a56f:{NFSU2_TR(0x60a56f);
__builtin_memmove((R+4),(R+24),4);
}
B60a571:{NFSU2_TR(0x60a571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a576ull));
TAIL_STATIC(0x571770u,571);
}
B60a576:L60a576:{c.instructions+=5;NFSU2_TR(0x60a576);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x250ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a57c:{NFSU2_TR(0x60a57c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a57e:{NFSU2_TR(0x60a57e);
__builtin_memmove((R+20),gp(0x890080),4);
}
B60a584:{NFSU2_TR(0x60a584);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B60a58c:{NFSU2_TR(0x60a58c);
if(r1(R+518)){{goto L60a596;}}
}
B60a58e:L60a58e:{c.instructions+=2;NFSU2_TR(0x60a58e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B60a592:{NFSU2_TR(0x60a592);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a596:L60a596:{c.instructions+=7;NFSU2_TR(0x60a596);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a598:{NFSU2_TR(0x60a598);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a59a:{NFSU2_TR(0x60a59a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a59c:{NFSU2_TR(0x60a59c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B60a5a0:{NFSU2_TR(0x60a5a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a5a1:{NFSU2_TR(0x60a5a1);
__builtin_memmove((R+4),(R+24),4);
}
B60a5a3:{NFSU2_TR(0x60a5a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a5a8ull));
TAIL_STATIC(0x571640u,571);
}
B60a5a8:L60a5a8:{c.instructions+=3;NFSU2_TR(0x60a5a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60a5ab:{NFSU2_TR(0x60a5ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60a5ad:{NFSU2_TR(0x60a5ad);
if(r1(R+518)){{goto L60a5f5;}}
}
B60a5af:L60a5af:{c.instructions+=3;NFSU2_TR(0x60a5af);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a5b3:{NFSU2_TR(0x60a5b3);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60a5b5:{NFSU2_TR(0x60a5b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L60a5eb;}}
}
B60a5b7:L60a5b7:{c.instructions+=3;NFSU2_TR(0x60a5b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+12),(U+0),4);
}
B60a5ba:{NFSU2_TR(0x60a5ba);
__builtin_memmove((R+4),(R+20),4);
}
B60a5bc:{NFSU2_TR(0x60a5bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a5c1ull));
TAIL_STATIC(0x502fd0u,502);
}
B60a5c1:L60a5c1:{c.instructions+=2;NFSU2_TR(0x60a5c1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60a5c3:{NFSU2_TR(0x60a5c3);
if(r1(R+518)){{goto L60a5d5;}}
}
B60a5c5:L60a5c5:{c.instructions+=3;NFSU2_TR(0x60a5c5);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B60a5c9:{NFSU2_TR(0x60a5c9);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60a5cd:{NFSU2_TR(0x60a5cd);
if(r1(R+518)){{goto L60a5d7;}}
}
B60a5cf:L60a5cf:{c.instructions+=3;NFSU2_TR(0x60a5cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B60a5d1:{NFSU2_TR(0x60a5d1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60a5d3:{NFSU2_TR(0x60a5d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60a5c5u);}goto L60a5c5;}}
}
B60a5d5:L60a5d5:{c.instructions+=1;NFSU2_TR(0x60a5d5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B60a5d7:L60a5d7:{c.instructions+=3;NFSU2_TR(0x60a5d7);
__builtin_memmove((R+4),(R+24),4);
}
B60a5d9:{NFSU2_TR(0x60a5d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x250ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a5df:{NFSU2_TR(0x60a5df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a5e4ull));
TAIL_STATIC(0x578d90u,578);
}
B60a5e4:L60a5e4:{c.instructions+=5;NFSU2_TR(0x60a5e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60a5e5:{NFSU2_TR(0x60a5e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60a5e6:{NFSU2_TR(0x60a5e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60a5e7:{NFSU2_TR(0x60a5e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60a5e8:{NFSU2_TR(0x60a5e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60a5eb:L60a5eb:{c.instructions+=1;NFSU2_TR(0x60a5eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x250ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60a5f5:L60a5f5:{c.instructions+=2;NFSU2_TR(0x60a5f5);
__builtin_memmove((R+4),(R+24),4);
}
B60a5f7:{NFSU2_TR(0x60a5f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a5fcull));
TAIL_STATIC(0x578d90u,578);
}
B60a5fc:L60a5fc:{c.instructions+=5;NFSU2_TR(0x60a5fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60a5fd:{NFSU2_TR(0x60a5fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60a5fe:{NFSU2_TR(0x60a5fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60a5ff:{NFSU2_TR(0x60a5ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60a600:{NFSU2_TR(0x60a600);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60a610:L60a610:{c.instructions+=7;NFSU2_TR(0x60a610);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a611:{NFSU2_TR(0x60a611);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60a615:{NFSU2_TR(0x60a615);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a616:{NFSU2_TR(0x60a616);
u8 U[4];
w4(U+0,u32(0x7a0ae8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a61b:{NFSU2_TR(0x60a61b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a61d:{NFSU2_TR(0x60a61d);
__builtin_memmove((R+4),(R+24),4);
}
B60a61f:{NFSU2_TR(0x60a61f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a624ull));
TAIL_STATIC(0x578ce0u,578);
}
B60a624:L60a624:{c.instructions+=3;NFSU2_TR(0x60a624);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a625:{NFSU2_TR(0x60a625);
w4(R+4,u32(0x88eb00ull));
}
B60a62a:{NFSU2_TR(0x60a62a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a62full));
TAIL_STATIC(0x5e82e0u,5e8);
}
B60a62f:L60a62f:{c.instructions+=3;NFSU2_TR(0x60a62f);
__builtin_memmove((R+4),gp(0x890080),4);
}
B60a635:{NFSU2_TR(0x60a635);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a636:{NFSU2_TR(0x60a636);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a63bull));
TAIL_STATIC(0x5ff890u,5ff);
}
B60a63b:L60a63b:{c.instructions+=3;NFSU2_TR(0x60a63b);
__builtin_memmove((R+4),gp(0x890118),4);
}
B60a641:{NFSU2_TR(0x60a641);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a642:{NFSU2_TR(0x60a642);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a647ull));
TAIL_STATIC(0x5ee3b0u,5ee);
}
B60a647:L60a647:{c.instructions+=4;NFSU2_TR(0x60a647);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B60a64c:{NFSU2_TR(0x60a64c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B60a64e:{NFSU2_TR(0x60a64e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a650:{NFSU2_TR(0x60a650);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60a669;}}
}
B60a652:L60a652:{c.instructions+=3;NFSU2_TR(0x60a652);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B60a659:{NFSU2_TR(0x60a659);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a65a:{NFSU2_TR(0x60a65a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a65full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60a2a0u);}goto L60a2a0;}
}
B60a65f:L60a65f:{c.instructions+=4;NFSU2_TR(0x60a65f);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B60a664:{NFSU2_TR(0x60a664);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B60a665:{NFSU2_TR(0x60a665);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60a667:{NFSU2_TR(0x60a667);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60a652u);}goto L60a652;}}
}
B60a669:L60a669:{c.instructions+=2;NFSU2_TR(0x60a669);
__builtin_memmove((R+4),(R+24),4);
}
B60a66b:{NFSU2_TR(0x60a66b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a670ull));
TAIL_STATIC(0x578d90u,578);
}
B60a670:L60a670:{c.instructions+=3;NFSU2_TR(0x60a670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60a671:{NFSU2_TR(0x60a671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60a672:{NFSU2_TR(0x60a672);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60a680:L60a680:{c.instructions+=12;NFSU2_TR(0x60a680);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a682:{NFSU2_TR(0x60a682);
u8 U[4];
w4(U+0,u32(0x77a0ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a687:{NFSU2_TR(0x60a687);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a68d:{NFSU2_TR(0x60a68d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a68e:{NFSU2_TR(0x60a68e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a695:{NFSU2_TR(0x60a695);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a696:{NFSU2_TR(0x60a696);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B60a69b:{NFSU2_TR(0x60a69b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a69c:{NFSU2_TR(0x60a69c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a69d:{NFSU2_TR(0x60a69d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a69e:{NFSU2_TR(0x60a69e);
__builtin_memmove((R+28),(R+4),4);
}
B60a6a0:{NFSU2_TR(0x60a6a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a6a5ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B60a6a5:L60a6a5:{c.instructions+=2;NFSU2_TR(0x60a6a5);
u8 U[4];
w4(U+0,u32(0x50f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a6aa:{NFSU2_TR(0x60a6aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a6afull));
TAIL_STATIC(0x575620u,575);
}
B60a6af:L60a6af:{c.instructions+=5;NFSU2_TR(0x60a6af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B60a6b2:{NFSU2_TR(0x60a6b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a6b6:{NFSU2_TR(0x60a6b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a6b8:{NFSU2_TR(0x60a6b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60a6c0:{NFSU2_TR(0x60a6c0);
if(r1(R+518)){{goto L60a6cb;}}
}
B60a6c2:L60a6c2:{c.instructions+=2;NFSU2_TR(0x60a6c2);
__builtin_memmove((R+4),(R+0),4);
}
B60a6c4:{NFSU2_TR(0x60a6c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a6c9ull));
TAIL_STATIC(0x57a860u,57a);
}
B60a6c9:L60a6c9:{c.instructions+=1;NFSU2_TR(0x60a6c9);
{goto L60a6cd;}
}
B60a6cb:L60a6cb:{c.instructions+=1;NFSU2_TR(0x60a6cb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60a6cd:L60a6cd:{c.instructions+=4;NFSU2_TR(0x60a6cd);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B60a6d0:{NFSU2_TR(0x60a6d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a6d4:{NFSU2_TR(0x60a6d4);
__builtin_memmove(gp(0x8650b8),(R+0),4);
}
B60a6d9:{NFSU2_TR(0x60a6d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a6deull));
TAIL_STATIC(0x5809c0u,580);
}
B60a6de:L60a6de:{c.instructions+=2;NFSU2_TR(0x60a6de);
u8 U[4];
w4(U+0,u32(0x2780ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a6e3:{NFSU2_TR(0x60a6e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a6e8ull));
TAIL_STATIC(0x575620u,575);
}
B60a6e8:L60a6e8:{c.instructions+=5;NFSU2_TR(0x60a6e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60a6eb:{NFSU2_TR(0x60a6eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a6ef:{NFSU2_TR(0x60a6ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a6f1:{NFSU2_TR(0x60a6f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60a6f9:{NFSU2_TR(0x60a6f9);
if(r1(R+518)){{goto L60a704;}}
}
B60a6fb:L60a6fb:{c.instructions+=2;NFSU2_TR(0x60a6fb);
__builtin_memmove((R+4),(R+0),4);
}
B60a6fd:{NFSU2_TR(0x60a6fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a702ull));
TAIL_STATIC(0x5fc730u,5fc);
}
B60a702:L60a702:{c.instructions+=1;NFSU2_TR(0x60a702);
{goto L60a706;}
}
B60a704:L60a704:{c.instructions+=1;NFSU2_TR(0x60a704);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60a706:L60a706:{c.instructions+=3;NFSU2_TR(0x60a706);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a70a:{NFSU2_TR(0x60a70a);
__builtin_memmove(gp(0x890118),(R+0),4);
}
B60a70f:{NFSU2_TR(0x60a70f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a714ull));
TAIL_STATIC(0x5809c0u,580);
}
B60a714:L60a714:{c.instructions+=2;NFSU2_TR(0x60a714);
u8 U[4];
w4(U+0,u32(0x1600ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a719:{NFSU2_TR(0x60a719);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a71eull));
TAIL_STATIC(0x575620u,575);
}
B60a71e:L60a71e:{c.instructions+=5;NFSU2_TR(0x60a71e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60a721:{NFSU2_TR(0x60a721);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a725:{NFSU2_TR(0x60a725);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a727:{NFSU2_TR(0x60a727);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60a72f:{NFSU2_TR(0x60a72f);
if(r1(R+518)){{goto L60a738;}}
}
B60a731:L60a731:{c.instructions+=2;NFSU2_TR(0x60a731);
__builtin_memmove((R+4),(R+0),4);
}
B60a733:{NFSU2_TR(0x60a733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a738ull));
TAIL_STATIC(0x5ff490u,5ff);
}
B60a738:L60a738:{c.instructions+=2;NFSU2_TR(0x60a738);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a73c:{NFSU2_TR(0x60a73c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a741ull));
TAIL_STATIC(0x5809c0u,580);
}
B60a741:L60a741:{c.instructions+=3;NFSU2_TR(0x60a741);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B60a746:{NFSU2_TR(0x60a746);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a748:{NFSU2_TR(0x60a748);
if(r1(R+518)){{goto L60a75d;}}
}
B60a74a:L60a74a:{c.instructions+=3;NFSU2_TR(0x60a74a);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B60a74f:{NFSU2_TR(0x60a74f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60a751:{NFSU2_TR(0x60a751);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60a75d;}}
}
B60a753:L60a753:{c.instructions+=2;NFSU2_TR(0x60a753);
w4(R+4,u32(0x83a9d0ull));
}
B60a758:{NFSU2_TR(0x60a758);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a75dull));
TAIL_STATIC(0x541a50u,541);
}
B60a75d:L60a75d:{c.instructions+=2;NFSU2_TR(0x60a75d);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B60a763:{NFSU2_TR(0x60a763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a768ull));
TAIL_STATIC(0x486db0u,486);
}
B60a768:L60a768:{c.instructions+=1;NFSU2_TR(0x60a768);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a76dull));
TAIL_STATIC(0x4ac6d0u,4ac);
}
B60a76d:L60a76d:{c.instructions+=1;NFSU2_TR(0x60a76d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a772ull));
TAIL_STATIC(0x5809c0u,580);
}
B60a772:L60a772:{c.instructions+=2;NFSU2_TR(0x60a772);
__builtin_memmove((R+4),(R+28),4);
}
B60a774:{NFSU2_TR(0x60a774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a779ull));
TAIL_STATIC(0x6065b0u,606);
}
B60a779:L60a779:{c.instructions+=2;NFSU2_TR(0x60a779);
w4(R+4,u32(0x85ad40ull));
}
B60a77e:{NFSU2_TR(0x60a77e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a783ull));
TAIL_STATIC(0x500b60u,500);
}
B60a783:L60a783:{c.instructions+=2;NFSU2_TR(0x60a783);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60a785:{NFSU2_TR(0x60a785);
if(r1(R+518)){{goto L60a791;}}
}
B60a787:L60a787:{c.instructions+=2;NFSU2_TR(0x60a787);
w4(R+4,u32(0x85ad40ull));
}
B60a78c:{NFSU2_TR(0x60a78c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a791ull));
TAIL_STATIC(0x5412d0u,541);
}
B60a791:L60a791:{c.instructions+=1;NFSU2_TR(0x60a791);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a796ull));
TAIL_STATIC(0x5809c0u,580);
}
B60a796:L60a796:{c.instructions+=2;NFSU2_TR(0x60a796);
__builtin_memmove((R+4),(R+28),4);
}
B60a798:{NFSU2_TR(0x60a798);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a79dull));
TAIL_STATIC(0x5f4250u,5f4);
}
B60a79d:L60a79d:{c.instructions+=2;NFSU2_TR(0x60a79d);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B60a7a3:{NFSU2_TR(0x60a7a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a7a8ull));
TAIL_STATIC(0x458850u,458);
}
B60a7a8:L60a7a8:{c.instructions+=2;NFSU2_TR(0x60a7a8);
__builtin_memmove((R+4),gp(0x890118),4);
}
B60a7ae:{NFSU2_TR(0x60a7ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a7b3ull));
TAIL_STATIC(0x5ef090u,5ef);
}
B60a7b3:L60a7b3:{c.instructions+=5;NFSU2_TR(0x60a7b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a7b6:{NFSU2_TR(0x60a7b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a7b8:{NFSU2_TR(0x60a7b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60a7bc:{NFSU2_TR(0x60a7bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x29ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60a7c0:{NFSU2_TR(0x60a7c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60a7d4;}}
}
B60a7c2:L60a7c2:{c.instructions+=6;NFSU2_TR(0x60a7c2);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B60a7c7:{NFSU2_TR(0x60a7c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60a7ca:{NFSU2_TR(0x60a7ca);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B60a7cc:{NFSU2_TR(0x60a7cc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60a7ce:{NFSU2_TR(0x60a7ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B60a7d1:{NFSU2_TR(0x60a7d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a7d4:L60a7d4:{c.instructions+=4;NFSU2_TR(0x60a7d4);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B60a7d9:{NFSU2_TR(0x60a7d9);
w4(R+4,u32(0x85ad40ull));
}
B60a7de:{NFSU2_TR(0x60a7de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a7e1:{NFSU2_TR(0x60a7e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a7e6ull));
TAIL_STATIC(0x500b60u,500);
}
B60a7e6:L60a7e6:{c.instructions+=2;NFSU2_TR(0x60a7e6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60a7e8:{NFSU2_TR(0x60a7e8);
if(r1(R+518)){{goto L60a816;}}
}
B60a7ea:L60a7ea:{c.instructions+=4;NFSU2_TR(0x60a7ea);
__builtin_memmove((R+0),gp(0x850078),4);
}
B60a7ef:{NFSU2_TR(0x60a7ef);
w4(R+24,u32(0x4ull));
}
B60a7f4:{NFSU2_TR(0x60a7f4);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+6)));
w4(U+10,u32(u32(r4(R+0))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60a7f6:{NFSU2_TR(0x60a7f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60a801;}}
}
B60a7f8:L60a7f8:{c.instructions+=2;NFSU2_TR(0x60a7f8);
u8 U[14];
__builtin_memmove((U+6),gp(0x83aab4),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60a7ff:{NFSU2_TR(0x60a7ff);
if(r1(R+518)){{goto L60a816;}}
}
B60a801:L60a801:{c.instructions+=2;NFSU2_TR(0x60a801);
w4(R+4,u32(0x827e88ull));
}
B60a806:{NFSU2_TR(0x60a806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a80bull));
TAIL_STATIC(0x4305b0u,430);
}
B60a80b:L60a80b:{c.instructions+=2;NFSU2_TR(0x60a80b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60a80d:{NFSU2_TR(0x60a80d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60a85e;}}
}
B60a80f:L60a80f:{c.instructions+=2;NFSU2_TR(0x60a80f);
w4(R+0,u32(0x4ull));
}
B60a814:{NFSU2_TR(0x60a814);
{goto L60a868;}
}
B60a816:L60a816:{c.instructions+=3;NFSU2_TR(0x60a816);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B60a81b:{NFSU2_TR(0x60a81b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a81d:{NFSU2_TR(0x60a81d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60a85e;}}
}
B60a81f:L60a81f:{c.instructions+=2;NFSU2_TR(0x60a81f);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7a0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7d0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60a829:{NFSU2_TR(0x60a829);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60a834;}}
}
B60a82b:L60a82b:{c.instructions+=3;NFSU2_TR(0x60a82b);
w4(R+24,u32(0x4ull));
}
B60a830:{NFSU2_TR(0x60a830);
__builtin_memmove((R+0),(R+24),4);
}
B60a832:{NFSU2_TR(0x60a832);
{goto L60a868;}
}
B60a834:L60a834:{c.instructions+=3;NFSU2_TR(0x60a834);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a837:{NFSU2_TR(0x60a837);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a839:{NFSU2_TR(0x60a839);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60a85e;}}
}
B60a83b:L60a83b:{c.instructions+=2;NFSU2_TR(0x60a83b);
w4(R+4,u32(0x89cf48ull));
}
B60a840:{NFSU2_TR(0x60a840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a845ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B60a845:L60a845:{c.instructions+=2;NFSU2_TR(0x60a845);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60a847:{NFSU2_TR(0x60a847);
if(r1(R+518)){{goto L60a852;}}
}
B60a849:L60a849:{c.instructions+=1;NFSU2_TR(0x60a849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a84eull));
TAIL_STATIC(0x5fe4c0u,5fe);
}
B60a84e:L60a84e:{c.instructions+=2;NFSU2_TR(0x60a84e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60a850:{NFSU2_TR(0x60a850);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60a85e;}}
}
B60a852:L60a852:{c.instructions+=3;NFSU2_TR(0x60a852);
w4(R+24,u32(0x4ull));
}
B60a857:{NFSU2_TR(0x60a857);
w4(R+0,u32(0x3ull));
}
B60a85c:{NFSU2_TR(0x60a85c);
{goto L60a868;}
}
B60a85e:L60a85e:{c.instructions+=2;NFSU2_TR(0x60a85e);
w4(R+24,u32(0x2ull));
}
B60a863:{NFSU2_TR(0x60a863);
w4(R+0,u32(0x1ull));
}
B60a868:L60a868:{c.instructions+=5;NFSU2_TR(0x60a868);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60a86c:{NFSU2_TR(0x60a86c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a86f:{NFSU2_TR(0x60a86f);
__builtin_memmove((R+4),gp(0x890118),4);
}
B60a875:{NFSU2_TR(0x60a875);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a877:{NFSU2_TR(0x60a877);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a87cull));
TAIL_STATIC(0x605250u,605);
}
B60a87c:L60a87c:{c.instructions+=1;NFSU2_TR(0x60a87c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a881ull));
TAIL_STATIC(0x403c20u,403);
}
B60a881:L60a881:{c.instructions+=3;NFSU2_TR(0x60a881);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B60a887:{NFSU2_TR(0x60a887);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a888:{NFSU2_TR(0x60a888);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a88dull));
TAIL_STATIC(0x481440u,481);
}
B60a88d:L60a88d:{c.instructions+=6;NFSU2_TR(0x60a88d);
__builtin_memmove(gp(0x8900d8),(R+28),4);
}
B60a893:{NFSU2_TR(0x60a893);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60a89a:{NFSU2_TR(0x60a89a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60a89e:{NFSU2_TR(0x60a89e);
__builtin_memmove((R+0),gp(0x89e7ad),1);
}
B60a8a3:{NFSU2_TR(0x60a8a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60a8a5:{NFSU2_TR(0x60a8a5);
if(r1(R+518)){{goto L60a98c;}}
}
B60a8ab:L60a8ab:{c.instructions+=2;NFSU2_TR(0x60a8ab);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B60a8b1:{NFSU2_TR(0x60a8b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a8b6ull));
TAIL_STATIC(0x57d190u,57d);
}
B60a8b6:L60a8b6:{c.instructions+=1;NFSU2_TR(0x60a8b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a8bbull));
TAIL_STATIC(0x5eb830u,5eb);
}
B60a8bb:L60a8bb:{c.instructions+=4;NFSU2_TR(0x60a8bb);
__builtin_memmove((R+4),gp(0x8900dc),4);
}
B60a8c1:{NFSU2_TR(0x60a8c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B60a8c3:{NFSU2_TR(0x60a8c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a8c4:{NFSU2_TR(0x60a8c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a8c9ull));
TAIL_STATIC(0x440e50u,440);
}
B60a8c9:L60a8c9:{c.instructions+=3;NFSU2_TR(0x60a8c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60a8cc:{NFSU2_TR(0x60a8cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a8ce:{NFSU2_TR(0x60a8ce);
if(r1(R+518)){{goto L60a8dc;}}
}
B60a8d0:L60a8d0:{c.instructions+=3;NFSU2_TR(0x60a8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60a8d7:{NFSU2_TR(0x60a8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a8da:{NFSU2_TR(0x60a8da);
{goto L60a8de;}
}
B60a8dc:L60a8dc:{c.instructions+=1;NFSU2_TR(0x60a8dc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60a8de:L60a8de:{c.instructions+=9;NFSU2_TR(0x60a8de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60a8e1:{NFSU2_TR(0x60a8e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B60a8e4:{NFSU2_TR(0x60a8e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60a8e6:{NFSU2_TR(0x60a8e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a8e9:{NFSU2_TR(0x60a8e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a8ec:{NFSU2_TR(0x60a8ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B60a8ee:{NFSU2_TR(0x60a8ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a8f1:{NFSU2_TR(0x60a8f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a8f3:{NFSU2_TR(0x60a8f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60a8fc;}}
}
B60a8f5:L60a8f5:{c.instructions+=2;NFSU2_TR(0x60a8f5);
__builtin_memmove((R+4),(R+28),4);
}
B60a8f7:{NFSU2_TR(0x60a8f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a8fcull));
TAIL_STATIC(0x600fa0u,600);
}
B60a8fc:L60a8fc:{c.instructions+=3;NFSU2_TR(0x60a8fc);
__builtin_memmove((R+8),gp(0x8900dc),4);
}
B60a902:{NFSU2_TR(0x60a902);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a903:{NFSU2_TR(0x60a903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a908ull));
TAIL_STATIC(0x440e50u,440);
}
B60a908:L60a908:{c.instructions+=3;NFSU2_TR(0x60a908);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60a90b:{NFSU2_TR(0x60a90b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a90d:{NFSU2_TR(0x60a90d);
if(r1(R+518)){{goto L60a91f;}}
}
B60a90f:L60a90f:{c.instructions+=3;NFSU2_TR(0x60a90f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60a916:{NFSU2_TR(0x60a916);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60a91d:{NFSU2_TR(0x60a91d);
{goto L60a921;}
}
B60a91f:L60a91f:{c.instructions+=1;NFSU2_TR(0x60a91f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60a921:L60a921:{c.instructions+=8;NFSU2_TR(0x60a921);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60a924:{NFSU2_TR(0x60a924);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60a926:{NFSU2_TR(0x60a926);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a929:{NFSU2_TR(0x60a929);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a92c:{NFSU2_TR(0x60a92c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B60a92e:{NFSU2_TR(0x60a92e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a931:{NFSU2_TR(0x60a931);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a933:{NFSU2_TR(0x60a933);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60a93c;}}
}
B60a935:L60a935:{c.instructions+=2;NFSU2_TR(0x60a935);
__builtin_memmove((R+4),(R+28),4);
}
B60a937:{NFSU2_TR(0x60a937);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a93cull));
TAIL_STATIC(0x600fa0u,600);
}
B60a93c:L60a93c:{c.instructions+=3;NFSU2_TR(0x60a93c);
__builtin_memmove((R+0),gp(0x8900dc),4);
}
B60a941:{NFSU2_TR(0x60a941);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a942:{NFSU2_TR(0x60a942);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a947ull));
TAIL_STATIC(0x440e50u,440);
}
B60a947:L60a947:{c.instructions+=3;NFSU2_TR(0x60a947);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60a94a:{NFSU2_TR(0x60a94a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a94c:{NFSU2_TR(0x60a94c);
if(r1(R+518)){{goto L60a95e;}}
}
B60a94e:L60a94e:{c.instructions+=3;NFSU2_TR(0x60a94e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60a955:{NFSU2_TR(0x60a955);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60a95c:{NFSU2_TR(0x60a95c);
{goto L60a960;}
}
B60a95e:L60a95e:{c.instructions+=1;NFSU2_TR(0x60a95e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60a960:L60a960:{c.instructions+=8;NFSU2_TR(0x60a960);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60a963:{NFSU2_TR(0x60a963);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60a965:{NFSU2_TR(0x60a965);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a968:{NFSU2_TR(0x60a968);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a96b:{NFSU2_TR(0x60a96b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B60a96d:{NFSU2_TR(0x60a96d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60a970:{NFSU2_TR(0x60a970);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60a972:{NFSU2_TR(0x60a972);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60a98f;}}
}
B60a974:L60a974:{c.instructions+=2;NFSU2_TR(0x60a974);
__builtin_memmove((R+4),(R+28),4);
}
B60a976:{NFSU2_TR(0x60a976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a97bull));
TAIL_STATIC(0x600fa0u,600);
}
B60a97b:L60a97b:{c.instructions+=6;NFSU2_TR(0x60a97b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60a97c:{NFSU2_TR(0x60a97c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60a97d:{NFSU2_TR(0x60a97d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60a981:{NFSU2_TR(0x60a981);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a988:{NFSU2_TR(0x60a988);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60a98b:{NFSU2_TR(0x60a98b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60a98c:L60a98c:{c.instructions+=1;NFSU2_TR(0x60a98c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a98f:L60a98f:{c.instructions+=6;NFSU2_TR(0x60a98f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60a993:{NFSU2_TR(0x60a993);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60a994:{NFSU2_TR(0x60a994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60a995:{NFSU2_TR(0x60a995);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60a99c:{NFSU2_TR(0x60a99c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60a99f:{NFSU2_TR(0x60a99f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60a9a0:L60a9a0:{c.instructions+=6;NFSU2_TR(0x60a9a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a9a1:{NFSU2_TR(0x60a9a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a9a2:{NFSU2_TR(0x60a9a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60a9a3:{NFSU2_TR(0x60a9a3);
__builtin_memmove((R+28),(R+4),4);
}
B60a9a5:{NFSU2_TR(0x60a9a5);
w4(R+4,u32(0x827e88ull));
}
B60a9aa:{NFSU2_TR(0x60a9aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a9afull));
TAIL_STATIC(0x43b570u,43b);
}
B60a9af:L60a9af:{c.instructions+=2;NFSU2_TR(0x60a9af);
w4(R+4,u32(0x827e88ull));
}
B60a9b4:{NFSU2_TR(0x60a9b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a9b9ull));
TAIL_STATIC(0x43b640u,43b);
}
B60a9b9:L60a9b9:{c.instructions+=2;NFSU2_TR(0x60a9b9);
w4(R+4,u32(0x81cbc0ull));
}
B60a9be:{NFSU2_TR(0x60a9be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a9c3ull));
TAIL_STATIC(0x4131f0u,413);
}
B60a9c3:L60a9c3:{c.instructions+=5;NFSU2_TR(0x60a9c3);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B60a9c8:{NFSU2_TR(0x60a9c8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B60a9ca:{NFSU2_TR(0x60a9ca);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B60a9cc:{NFSU2_TR(0x60a9cc);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+6)));
w4(U+10,u32(u32(r4(R+0))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60a9ce:{NFSU2_TR(0x60a9ce);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60a9e6;}}
}
B60a9d0:L60a9d0:{c.instructions+=2;NFSU2_TR(0x60a9d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B60a9d7:{NFSU2_TR(0x60a9d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a9dcull));
TAIL_STATIC(0x6063b0u,606);
}
B60a9dc:L60a9dc:{c.instructions+=4;NFSU2_TR(0x60a9dc);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B60a9e1:{NFSU2_TR(0x60a9e1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B60a9e2:{NFSU2_TR(0x60a9e2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60a9e4:{NFSU2_TR(0x60a9e4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60a9d0u);}goto L60a9d0;}}
}
B60a9e6:L60a9e6:{c.instructions+=2;NFSU2_TR(0x60a9e6);
w4(R+4,u32(0x8357e0ull));
}
B60a9eb:{NFSU2_TR(0x60a9eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60a9f0ull));
TAIL_STATIC(0x491e10u,491);
}
B60a9f0:L60a9f0:{c.instructions+=4;NFSU2_TR(0x60a9f0);
__builtin_memmove((R+4),gp(0x890118),4);
}
B60a9f6:{NFSU2_TR(0x60a9f6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60a9f8:{NFSU2_TR(0x60a9f8);
__builtin_memmove((R+24),(R+4),4);
}
B60a9fa:{NFSU2_TR(0x60a9fa);
if(r1(R+518)){{goto L60aa0a;}}
}
B60a9fc:L60a9fc:{c.instructions+=1;NFSU2_TR(0x60a9fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60aa01ull));
TAIL_STATIC(0x5fc850u,5fc);
}
B60aa01:L60aa01:{c.instructions+=2;NFSU2_TR(0x60aa01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aa02:{NFSU2_TR(0x60aa02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60aa07ull));
TAIL_STATIC(0x575630u,575);
}
B60aa07:L60aa07:{c.instructions+=1;NFSU2_TR(0x60aa07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60aa0a:L60aa0a:{c.instructions+=5;NFSU2_TR(0x60aa0a);
__builtin_memmove((R+4),gp(0x890080),4);
}
B60aa10:{NFSU2_TR(0x60aa10);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60aa12:{NFSU2_TR(0x60aa12);
__builtin_memmove(gp(0x890118),(R+12),4);
}
B60aa18:{NFSU2_TR(0x60aa18);
__builtin_memmove((R+24),(R+4),4);
}
B60aa1a:{NFSU2_TR(0x60aa1a);
if(r1(R+518)){{goto L60aa2a;}}
}
B60aa1c:L60aa1c:{c.instructions+=1;NFSU2_TR(0x60aa1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60aa21ull));
TAIL_STATIC(0x5ff6f0u,5ff);
}
B60aa21:L60aa21:{c.instructions+=2;NFSU2_TR(0x60aa21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aa22:{NFSU2_TR(0x60aa22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60aa27ull));
TAIL_STATIC(0x575630u,575);
}
B60aa27:L60aa27:{c.instructions+=1;NFSU2_TR(0x60aa27);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60aa2a:L60aa2a:{c.instructions+=5;NFSU2_TR(0x60aa2a);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B60aa30:{NFSU2_TR(0x60aa30);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60aa32:{NFSU2_TR(0x60aa32);
__builtin_memmove(gp(0x890080),(R+12),4);
}
B60aa38:{NFSU2_TR(0x60aa38);
__builtin_memmove((R+24),(R+4),4);
}
B60aa3a:{NFSU2_TR(0x60aa3a);
if(r1(R+518)){{goto L60aa4a;}}
}
B60aa3c:L60aa3c:{c.instructions+=1;NFSU2_TR(0x60aa3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60aa41ull));
TAIL_STATIC(0x57a9c0u,57a);
}
B60aa41:L60aa41:{c.instructions+=2;NFSU2_TR(0x60aa41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aa42:{NFSU2_TR(0x60aa42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60aa47ull));
TAIL_STATIC(0x575630u,575);
}
B60aa47:L60aa47:{c.instructions+=1;NFSU2_TR(0x60aa47);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60aa4a:L60aa4a:{c.instructions+=4;NFSU2_TR(0x60aa4a);
__builtin_memmove(gp(0x8650b8),(R+12),4);
}
B60aa50:{NFSU2_TR(0x60aa50);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60aa53:{NFSU2_TR(0x60aa53);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60aa55:{NFSU2_TR(0x60aa55);
if(r1(R+518)){{goto L60aa67;}}
}
B60aa57:L60aa57:{c.instructions+=2;NFSU2_TR(0x60aa57);
__builtin_memmove((R+4),(R+24),4);
}
B60aa59:{NFSU2_TR(0x60aa59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60aa5eull));
TAIL_STATIC(0x4a4690u,4a4);
}
B60aa5e:L60aa5e:{c.instructions+=2;NFSU2_TR(0x60aa5e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aa5f:{NFSU2_TR(0x60aa5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60aa64ull));
TAIL_STATIC(0x575630u,575);
}
B60aa64:L60aa64:{c.instructions+=1;NFSU2_TR(0x60aa64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60aa67:L60aa67:{c.instructions+=4;NFSU2_TR(0x60aa67);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60aa6a:{NFSU2_TR(0x60aa6a);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B60aa6f:{NFSU2_TR(0x60aa6f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60aa71:{NFSU2_TR(0x60aa71);
if(r1(R+518)){{goto L60aa97;}}
}
B60aa73:L60aa73:{c.instructions+=3;NFSU2_TR(0x60aa73);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B60aa7a:{NFSU2_TR(0x60aa7a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60aa7c:{NFSU2_TR(0x60aa7c);
if(r1(R+518)){{goto L60aa93;}}
}
B60aa7e:L60aa7e:{c.instructions+=2;NFSU2_TR(0x60aa7e);
__builtin_memmove((R+4),(R+24),4);
}
B60aa80:{NFSU2_TR(0x60aa80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60aa85ull));
TAIL_STATIC(0x5f1cc0u,5f1);
}
B60aa85:L60aa85:{c.instructions+=2;NFSU2_TR(0x60aa85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aa86:{NFSU2_TR(0x60aa86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60aa8bull));
TAIL_STATIC(0x575630u,575);
}
B60aa8b:L60aa8b:{c.instructions+=2;NFSU2_TR(0x60aa8b);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B60aa90:{NFSU2_TR(0x60aa90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60aa93:L60aa93:{c.instructions+=2;NFSU2_TR(0x60aa93);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60aa95:{NFSU2_TR(0x60aa95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60aa73u);}goto L60aa73;}}
}
B60aa97:L60aa97:{c.instructions+=4;NFSU2_TR(0x60aa97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60aa98:{NFSU2_TR(0x60aa98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60aa99:{NFSU2_TR(0x60aa99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60aa9a:{NFSU2_TR(0x60aa9a);
TAIL_STATIC(0x4ac700u,4ac);
}
B60aaa0:L60aaa0:{c.instructions+=13;NFSU2_TR(0x60aaa0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aaa2:{NFSU2_TR(0x60aaa2);
u8 U[4];
w4(U+0,u32(0x77a11full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aaa7:{NFSU2_TR(0x60aaa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60aaad:{NFSU2_TR(0x60aaad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aaae:{NFSU2_TR(0x60aaae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60aab5:{NFSU2_TR(0x60aab5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aab6:{NFSU2_TR(0x60aab6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aab7:{NFSU2_TR(0x60aab7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aab8:{NFSU2_TR(0x60aab8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aab9:{NFSU2_TR(0x60aab9);
__builtin_memmove((R+20),(R+4),4);
}
B60aabb:{NFSU2_TR(0x60aabb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aabc:{NFSU2_TR(0x60aabc);
w4(R+4,u32(0x827e88ull));
}
B60aac1:{NFSU2_TR(0x60aac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60aac6ull));
TAIL_STATIC(0x43b570u,43b);
}
B60aac6:L60aac6:{c.instructions+=5;NFSU2_TR(0x60aac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60aac9:{NFSU2_TR(0x60aac9);
__builtin_memmove((R+24),gp(0x8900b4),4);
}
B60aacf:{NFSU2_TR(0x60aacf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B60aad1:{NFSU2_TR(0x60aad1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60aad3:{NFSU2_TR(0x60aad3);
if(r1(R+518)){{goto L60aade;}}
}
B60aad5:L60aad5:{c.instructions+=2;NFSU2_TR(0x60aad5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aad6:{NFSU2_TR(0x60aad6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60aadbull));
TAIL_STATIC(0x575630u,575);
}
B60aadb:L60aadb:{c.instructions+=1;NFSU2_TR(0x60aadb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60aade:L60aade:{c.instructions+=2;NFSU2_TR(0x60aade);
u8 U[4];
w4(U+0,u32(0x490ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aae3:{NFSU2_TR(0x60aae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60aae8ull));
TAIL_STATIC(0x575620u,575);
}
B60aae8:L60aae8:{c.instructions+=5;NFSU2_TR(0x60aae8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60aaeb:{NFSU2_TR(0x60aaeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60aaef:{NFSU2_TR(0x60aaef);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60aaf1:{NFSU2_TR(0x60aaf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60aaf5:{NFSU2_TR(0x60aaf5);
if(r1(R+518)){{goto L60ab0e;}}
}
B60aaf7:L60aaf7:{c.instructions+=7;NFSU2_TR(0x60aaf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60aafa:{NFSU2_TR(0x60aafa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60aafd:{NFSU2_TR(0x60aafd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aafe:{NFSU2_TR(0x60aafe);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x5c4ull))));
}
B60ab04:{NFSU2_TR(0x60ab04);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ab05:{NFSU2_TR(0x60ab05);
__builtin_memmove((R+4),(R+0),4);
}
B60ab07:{NFSU2_TR(0x60ab07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ab0cull));
TAIL_STATIC(0x5a93a0u,5a9);
}
B60ab0c:L60ab0c:{c.instructions+=1;NFSU2_TR(0x60ab0c);
{goto L60ab10;}
}
B60ab0e:L60ab0e:{c.instructions+=1;NFSU2_TR(0x60ab0e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60ab10:L60ab10:{c.instructions+=5;NFSU2_TR(0x60ab10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ab13:{NFSU2_TR(0x60ab13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60ab16:{NFSU2_TR(0x60ab16);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60ab19:{NFSU2_TR(0x60ab19);
__builtin_memmove((R+28),(R+0),4);
}
B60ab1b:{NFSU2_TR(0x60ab1b);
w4(R+4,u32(0x124ull));
}
B60ab20:L60ab20:{c.instructions+=1;NFSU2_TR(0x60ab20);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L60ab22;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60ab20u);}goto L60ab20;}
}
B60ab22:L60ab22:{c.instructions+=5;NFSU2_TR(0x60ab22);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B60ab27:{NFSU2_TR(0x60ab27);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B60ab29:{NFSU2_TR(0x60ab29);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60ab2b:{NFSU2_TR(0x60ab2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ab33:{NFSU2_TR(0x60ab33);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60ab58;}}
}
B60ab35:L60ab35:{c.instructions+=1;NFSU2_TR(0x60ab35);
{goto L60ab40;}
}
B60ab40:L60ab40:{c.instructions+=3;NFSU2_TR(0x60ab40);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B60ab47:{NFSU2_TR(0x60ab47);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ab49:{NFSU2_TR(0x60ab49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ab4eull));
TAIL_STATIC(0x5ffe70u,5ff);
}
B60ab4e:L60ab4e:{c.instructions+=4;NFSU2_TR(0x60ab4e);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B60ab53:{NFSU2_TR(0x60ab53);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B60ab54:{NFSU2_TR(0x60ab54);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60ab56:{NFSU2_TR(0x60ab56);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60ab40u);}goto L60ab40;}}
}
B60ab58:L60ab58:{c.instructions+=2;NFSU2_TR(0x60ab58);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B60ab5e:{NFSU2_TR(0x60ab5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ab63ull));
TAIL_STATIC(0x571830u,571);
}
B60ab63:L60ab63:{c.instructions+=2;NFSU2_TR(0x60ab63);
__builtin_memmove((R+4),gp(0x890118),4);
}
B60ab69:{NFSU2_TR(0x60ab69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ab6eull));
TAIL_STATIC(0x608ca0u,608);
}
B60ab6e:L60ab6e:{c.instructions+=7;NFSU2_TR(0x60ab6e);
__builtin_memmove((R+0),gp(0x890118),4);
}
B60ab73:{NFSU2_TR(0x60ab73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ab76:{NFSU2_TR(0x60ab76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ab79:{NFSU2_TR(0x60ab79);
__builtin_memmove((R+0),gp(0x890118),4);
}
B60ab7e:{NFSU2_TR(0x60ab7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ab7f:{NFSU2_TR(0x60ab7f);
w4(R+4,u32(0x83a9d0ull));
}
B60ab84:{NFSU2_TR(0x60ab84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ab89ull));
TAIL_STATIC(0x551430u,551);
}
B60ab89:L60ab89:{c.instructions+=4;NFSU2_TR(0x60ab89);
__builtin_memmove((R+0),gp(0x89cf69),1);
}
B60ab8e:{NFSU2_TR(0x60ab8e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60ab90:{NFSU2_TR(0x60ab90);
w1(R+12,u8(0x1ull));
}
B60ab92:{NFSU2_TR(0x60ab92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60abaa;}}
}
B60ab94:L60ab94:{c.instructions+=3;NFSU2_TR(0x60ab94);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B60ab99:{NFSU2_TR(0x60ab99);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60ab9b:{NFSU2_TR(0x60ab9b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L60abaa;}}
}
B60ab9d:L60ab9d:{c.instructions+=3;NFSU2_TR(0x60ab9d);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B60aba2:{NFSU2_TR(0x60aba2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60aba4:{NFSU2_TR(0x60aba4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60ad12;}}
}
B60abaa:L60abaa:{c.instructions+=3;NFSU2_TR(0x60abaa);
__builtin_memmove((R+0),gp(0x850098),1);
}
B60abaf:{NFSU2_TR(0x60abaf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60abb1:{NFSU2_TR(0x60abb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60abfc;}}
}
B60abb3:L60abb3:{c.instructions+=4;NFSU2_TR(0x60abb3);
__builtin_memmove((R+0),gp(0x890118),4);
}
B60abb8:{NFSU2_TR(0x60abb8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B60abba:{NFSU2_TR(0x60abba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60abbc:{NFSU2_TR(0x60abbc);
if(r1(R+518)){{goto L60abf5;}}
}
B60abbe:L60abbe:{c.instructions+=3;NFSU2_TR(0x60abbe);
__builtin_memmove((R+4),gp(0x890080),4);
}
B60abc4:{NFSU2_TR(0x60abc4);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60abc6:{NFSU2_TR(0x60abc6);
if(r1(R+518)){{goto L60abf5;}}
}
B60abc8:L60abc8:{c.instructions+=2;NFSU2_TR(0x60abc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B60abca:{NFSU2_TR(0x60abca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60abcfull));
TAIL_STATIC(0x502fd0u,502);
}
B60abcf:L60abcf:{c.instructions+=2;NFSU2_TR(0x60abcf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60abd1:{NFSU2_TR(0x60abd1);
if(r1(R+518)){{goto L60abf5;}}
}
B60abd3:L60abd3:{c.instructions+=3;NFSU2_TR(0x60abd3);
__builtin_memmove((R+4),gp(0x89cf4c),4);
}
B60abd9:{NFSU2_TR(0x60abd9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+4,u16(s16(s8(r1(U+4)))));
}
B60abde:{NFSU2_TR(0x60abde);
__builtin_memmove((R+28),(R+28),4);
}
B60abe0:L60abe0:{c.instructions+=2;NFSU2_TR(0x60abe0);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B60abe4:{NFSU2_TR(0x60abe4);
if(r1(R+518)){{goto L60abee;}}
}
B60abe6:L60abe6:{c.instructions+=3;NFSU2_TR(0x60abe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B60abe8:{NFSU2_TR(0x60abe8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60abea:{NFSU2_TR(0x60abea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60abe0u);}goto L60abe0;}}
}
B60abec:L60abec:{c.instructions+=1;NFSU2_TR(0x60abec);
{goto L60abf5;}
}
B60abee:L60abee:{c.instructions+=2;NFSU2_TR(0x60abee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60abf0:{NFSU2_TR(0x60abf0);
if(r1(R+518)){{goto L60abf5;}}
}
B60abf2:L60abf2:{c.instructions+=1;NFSU2_TR(0x60abf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60abf5:L60abf5:{c.instructions+=2;NFSU2_TR(0x60abf5);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xcull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B60abfa:{NFSU2_TR(0x60abfa);
if(r1(R+518)){{goto L60ac0f;}}
}
B60abfc:L60abfc:{c.instructions+=3;NFSU2_TR(0x60abfc);
__builtin_memmove((R+0),gp(0x89cf4c),4);
}
B60ac01:{NFSU2_TR(0x60ac01);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x250ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B60ac09:{NFSU2_TR(0x60ac09);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L60ad12;}}
}
B60ac0f:L60ac0f:{c.instructions+=3;NFSU2_TR(0x60ac0f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ac11:{NFSU2_TR(0x60ac11);
w4(R+4,u32(0x83a9d0ull));
}
B60ac16:{NFSU2_TR(0x60ac16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ac1bull));
TAIL_STATIC(0x502ff0u,502);
}
B60ac1b:L60ac1b:{c.instructions+=2;NFSU2_TR(0x60ac1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ac1c:{NFSU2_TR(0x60ac1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ac21ull));
TAIL_STATIC(0x50c8d0u,50c);
}
B60ac21:L60ac21:{c.instructions+=4;NFSU2_TR(0x60ac21);
__builtin_memmove((R+4),gp(0x8900dc),4);
}
B60ac27:{NFSU2_TR(0x60ac27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B60ac2a:{NFSU2_TR(0x60ac2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ac2b:{NFSU2_TR(0x60ac2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ac30ull));
TAIL_STATIC(0x440e50u,440);
}
B60ac30:L60ac30:{c.instructions+=4;NFSU2_TR(0x60ac30);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B60ac32:{NFSU2_TR(0x60ac32);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B60ac35:{NFSU2_TR(0x60ac35);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60ac37:{NFSU2_TR(0x60ac37);
if(r1(R+518)){{goto L60ac45;}}
}
B60ac39:L60ac39:{c.instructions+=3;NFSU2_TR(0x60ac39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ac40:{NFSU2_TR(0x60ac40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ac43:{NFSU2_TR(0x60ac43);
{goto L60ac47;}
}
B60ac45:L60ac45:{c.instructions+=1;NFSU2_TR(0x60ac45);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60ac47:L60ac47:{c.instructions+=8;NFSU2_TR(0x60ac47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60ac4a:{NFSU2_TR(0x60ac4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B60ac4d:{NFSU2_TR(0x60ac4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60ac4f:{NFSU2_TR(0x60ac4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ac52:{NFSU2_TR(0x60ac52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ac55:{NFSU2_TR(0x60ac55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B60ac57:{NFSU2_TR(0x60ac57);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60ac5a:{NFSU2_TR(0x60ac5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60ac63;}}
}
B60ac5c:L60ac5c:{c.instructions+=2;NFSU2_TR(0x60ac5c);
__builtin_memmove((R+4),(R+20),4);
}
B60ac5e:{NFSU2_TR(0x60ac5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ac63ull));
TAIL_STATIC(0x600fa0u,600);
}
B60ac63:L60ac63:{c.instructions+=3;NFSU2_TR(0x60ac63);
__builtin_memmove((R+8),gp(0x8900dc),4);
}
B60ac69:{NFSU2_TR(0x60ac69);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ac6a:{NFSU2_TR(0x60ac6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ac6full));
TAIL_STATIC(0x440e50u,440);
}
B60ac6f:L60ac6f:{c.instructions+=3;NFSU2_TR(0x60ac6f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60ac72:{NFSU2_TR(0x60ac72);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60ac74:{NFSU2_TR(0x60ac74);
if(r1(R+518)){{goto L60ac82;}}
}
B60ac76:L60ac76:{c.instructions+=3;NFSU2_TR(0x60ac76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ac7d:{NFSU2_TR(0x60ac7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ac80:{NFSU2_TR(0x60ac80);
{goto L60ac84;}
}
B60ac82:L60ac82:{c.instructions+=1;NFSU2_TR(0x60ac82);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60ac84:L60ac84:{c.instructions+=7;NFSU2_TR(0x60ac84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60ac87:{NFSU2_TR(0x60ac87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60ac89:{NFSU2_TR(0x60ac89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ac8c:{NFSU2_TR(0x60ac8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ac8f:{NFSU2_TR(0x60ac8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B60ac91:{NFSU2_TR(0x60ac91);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60ac94:{NFSU2_TR(0x60ac94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60ac9d;}}
}
B60ac96:L60ac96:{c.instructions+=2;NFSU2_TR(0x60ac96);
__builtin_memmove((R+4),(R+20),4);
}
B60ac98:{NFSU2_TR(0x60ac98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ac9dull));
TAIL_STATIC(0x600fa0u,600);
}
B60ac9d:L60ac9d:{c.instructions+=3;NFSU2_TR(0x60ac9d);
__builtin_memmove((R+0),gp(0x8900dc),4);
}
B60aca2:{NFSU2_TR(0x60aca2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aca3:{NFSU2_TR(0x60aca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60aca8ull));
TAIL_STATIC(0x440e50u,440);
}
B60aca8:L60aca8:{c.instructions+=3;NFSU2_TR(0x60aca8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60acab:{NFSU2_TR(0x60acab);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60acad:{NFSU2_TR(0x60acad);
if(r1(R+518)){{goto L60acbb;}}
}
B60acaf:L60acaf:{c.instructions+=3;NFSU2_TR(0x60acaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60acb6:{NFSU2_TR(0x60acb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60acb9:{NFSU2_TR(0x60acb9);
{goto L60acbd;}
}
B60acbb:L60acbb:{c.instructions+=1;NFSU2_TR(0x60acbb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60acbd:L60acbd:{c.instructions+=7;NFSU2_TR(0x60acbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60acc0:{NFSU2_TR(0x60acc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60acc2:{NFSU2_TR(0x60acc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60acc5:{NFSU2_TR(0x60acc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60acc8:{NFSU2_TR(0x60acc8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B60acca:{NFSU2_TR(0x60acca);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60accd:{NFSU2_TR(0x60accd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60acd6;}}
}
B60accf:L60accf:{c.instructions+=2;NFSU2_TR(0x60accf);
__builtin_memmove((R+4),(R+20),4);
}
B60acd1:{NFSU2_TR(0x60acd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60acd6ull));
TAIL_STATIC(0x600fa0u,600);
}
B60acd6:L60acd6:{c.instructions+=3;NFSU2_TR(0x60acd6);
__builtin_memmove((R+4),gp(0x8900dc),4);
}
B60acdc:{NFSU2_TR(0x60acdc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60acdd:{NFSU2_TR(0x60acdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ace2ull));
TAIL_STATIC(0x440e50u,440);
}
B60ace2:L60ace2:{c.instructions+=3;NFSU2_TR(0x60ace2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60ace5:{NFSU2_TR(0x60ace5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60ace7:{NFSU2_TR(0x60ace7);
if(r1(R+518)){{goto L60acf5;}}
}
B60ace9:L60ace9:{c.instructions+=3;NFSU2_TR(0x60ace9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B60acf0:{NFSU2_TR(0x60acf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60acf3:{NFSU2_TR(0x60acf3);
{goto L60acf7;}
}
B60acf5:L60acf5:{c.instructions+=1;NFSU2_TR(0x60acf5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60acf7:L60acf7:{c.instructions+=7;NFSU2_TR(0x60acf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60acfa:{NFSU2_TR(0x60acfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60acfc:{NFSU2_TR(0x60acfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60acff:{NFSU2_TR(0x60acff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ad02:{NFSU2_TR(0x60ad02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B60ad04:{NFSU2_TR(0x60ad04);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60ad07:{NFSU2_TR(0x60ad07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60ad10;}}
}
B60ad09:L60ad09:{c.instructions+=2;NFSU2_TR(0x60ad09);
__builtin_memmove((R+4),(R+20),4);
}
B60ad0b:{NFSU2_TR(0x60ad0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ad10ull));
TAIL_STATIC(0x600fa0u,600);
}
B60ad10:L60ad10:{c.instructions+=1;NFSU2_TR(0x60ad10);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B60ad12:L60ad12:{c.instructions+=4;NFSU2_TR(0x60ad12);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B60ad17:{NFSU2_TR(0x60ad17);
w4(R+28,u32(0x7ull));
}
B60ad1c:{NFSU2_TR(0x60ad1c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60ad1e:{NFSU2_TR(0x60ad1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60ad61;}}
}
B60ad20:L60ad20:{c.instructions+=2;NFSU2_TR(0x60ad20);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60ad27:{NFSU2_TR(0x60ad27);
if(r1(R+518)){{goto L60ae15;}}
}
B60ad2d:L60ad2d:{c.instructions+=3;NFSU2_TR(0x60ad2d);
__builtin_memmove((R+0),gp(0x89cf69),1);
}
B60ad32:{NFSU2_TR(0x60ad32);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60ad34:{NFSU2_TR(0x60ad34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60ae15;}}
}
B60ad3a:L60ad3a:{c.instructions+=3;NFSU2_TR(0x60ad3a);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B60ad3f:{NFSU2_TR(0x60ad3f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60ad41:{NFSU2_TR(0x60ad41);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L60ae15;}}
}
B60ad47:L60ad47:{c.instructions+=3;NFSU2_TR(0x60ad47);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B60ad4c:{NFSU2_TR(0x60ad4c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60ad4e:{NFSU2_TR(0x60ad4e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L60ae15;}}
}
B60ad54:L60ad54:{c.instructions+=2;NFSU2_TR(0x60ad54);
__builtin_memmove((R+4),gp(0x890118),4);
}
B60ad5a:{NFSU2_TR(0x60ad5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ad5full));
TAIL_STATIC(0x5f8490u,5f8);
}
B60ad5f:L60ad5f:{c.instructions+=1;NFSU2_TR(0x60ad5f);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B60ad61:L60ad61:{c.instructions+=2;NFSU2_TR(0x60ad61);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60ad68:{NFSU2_TR(0x60ad68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60ae15;}}
}
B60ad6e:L60ad6e:{c.instructions+=4;NFSU2_TR(0x60ad6e);
__builtin_memmove((R+8),gp(0x8900dc),4);
}
B60ad74:{NFSU2_TR(0x60ad74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B60ad77:{NFSU2_TR(0x60ad77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ad78:{NFSU2_TR(0x60ad78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ad7dull));
TAIL_STATIC(0x440e50u,440);
}
B60ad7d:L60ad7d:{c.instructions+=3;NFSU2_TR(0x60ad7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60ad80:{NFSU2_TR(0x60ad80);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60ad82:{NFSU2_TR(0x60ad82);
if(r1(R+518)){{goto L60ad90;}}
}
B60ad84:L60ad84:{c.instructions+=3;NFSU2_TR(0x60ad84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ad8b:{NFSU2_TR(0x60ad8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ad8e:{NFSU2_TR(0x60ad8e);
{goto L60ad92;}
}
B60ad90:L60ad90:{c.instructions+=1;NFSU2_TR(0x60ad90);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60ad92:L60ad92:{c.instructions+=9;NFSU2_TR(0x60ad92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60ad95:{NFSU2_TR(0x60ad95);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B60ad98:{NFSU2_TR(0x60ad98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60ad9a:{NFSU2_TR(0x60ad9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ad9d:{NFSU2_TR(0x60ad9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ada0:{NFSU2_TR(0x60ada0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B60ada2:{NFSU2_TR(0x60ada2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60ada5:{NFSU2_TR(0x60ada5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60ada7:{NFSU2_TR(0x60ada7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60adb0;}}
}
B60ada9:L60ada9:{c.instructions+=2;NFSU2_TR(0x60ada9);
__builtin_memmove((R+4),(R+20),4);
}
B60adab:{NFSU2_TR(0x60adab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60adb0ull));
TAIL_STATIC(0x600fa0u,600);
}
B60adb0:L60adb0:{c.instructions+=3;NFSU2_TR(0x60adb0);
__builtin_memmove((R+0),gp(0x8900dc),4);
}
B60adb5:{NFSU2_TR(0x60adb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60adb6:{NFSU2_TR(0x60adb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60adbbull));
TAIL_STATIC(0x440e50u,440);
}
B60adbb:L60adbb:{c.instructions+=3;NFSU2_TR(0x60adbb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60adbe:{NFSU2_TR(0x60adbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60adc0:{NFSU2_TR(0x60adc0);
if(r1(R+518)){{goto L60adce;}}
}
B60adc2:L60adc2:{c.instructions+=3;NFSU2_TR(0x60adc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60adc9:{NFSU2_TR(0x60adc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60adcc:{NFSU2_TR(0x60adcc);
{goto L60add0;}
}
B60adce:L60adce:{c.instructions+=1;NFSU2_TR(0x60adce);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60add0:L60add0:{c.instructions+=8;NFSU2_TR(0x60add0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60add3:{NFSU2_TR(0x60add3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60add5:{NFSU2_TR(0x60add5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60add8:{NFSU2_TR(0x60add8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B60adda:{NFSU2_TR(0x60adda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60addd:{NFSU2_TR(0x60addd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60ade0:{NFSU2_TR(0x60ade0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60ade2:{NFSU2_TR(0x60ade2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60adeb;}}
}
B60ade4:L60ade4:{c.instructions+=2;NFSU2_TR(0x60ade4);
__builtin_memmove((R+4),(R+20),4);
}
B60ade6:{NFSU2_TR(0x60ade6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60adebull));
TAIL_STATIC(0x600fa0u,600);
}
B60adeb:L60adeb:{c.instructions+=3;NFSU2_TR(0x60adeb);
__builtin_memmove((R+4),gp(0x8900dc),4);
}
B60adf1:{NFSU2_TR(0x60adf1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60adf2:{NFSU2_TR(0x60adf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60adf7ull));
TAIL_STATIC(0x440e50u,440);
}
B60adf7:L60adf7:{c.instructions+=3;NFSU2_TR(0x60adf7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60adfa:{NFSU2_TR(0x60adfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60adfc:{NFSU2_TR(0x60adfc);
if(r1(R+518)){{goto L60aeb0;}}
}
B60ae02:L60ae02:{c.instructions+=3;NFSU2_TR(0x60ae02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ae09:{NFSU2_TR(0x60ae09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ae10:{NFSU2_TR(0x60ae10);
{goto L60aeb2;}
}
B60ae15:L60ae15:{c.instructions+=2;NFSU2_TR(0x60ae15);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60ae17:{NFSU2_TR(0x60ae17);
if(r1(R+518)){{goto L60aecd;}}
}
B60ae1d:L60ae1d:{c.instructions+=3;NFSU2_TR(0x60ae1d);
w4(R+12,u32(0x1ull));
}
B60ae22:{NFSU2_TR(0x60ae22);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ae23:{NFSU2_TR(0x60ae23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ae28ull));
TAIL_STATIC(0x575620u,575);
}
B60ae28:L60ae28:{c.instructions+=5;NFSU2_TR(0x60ae28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60ae2b:{NFSU2_TR(0x60ae2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ae2f:{NFSU2_TR(0x60ae2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60ae31:{NFSU2_TR(0x60ae31);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ae35:{NFSU2_TR(0x60ae35);
if(r1(R+518)){{goto L60ae40;}}
}
B60ae37:L60ae37:{c.instructions+=2;NFSU2_TR(0x60ae37);
__builtin_memmove((R+4),(R+0),4);
}
B60ae39:{NFSU2_TR(0x60ae39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ae3eull));
TAIL_STATIC(0x4f4190u,4f4);
}
B60ae3e:L60ae3e:{c.instructions+=1;NFSU2_TR(0x60ae3e);
{goto L60ae42;}
}
B60ae40:L60ae40:{c.instructions+=1;NFSU2_TR(0x60ae40);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60ae42:L60ae42:{c.instructions+=6;NFSU2_TR(0x60ae42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B60ae45:{NFSU2_TR(0x60ae45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ae48:{NFSU2_TR(0x60ae48);
__builtin_memmove((R+8),gp(0x8900dc),4);
}
B60ae4e:{NFSU2_TR(0x60ae4e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ae4f:{NFSU2_TR(0x60ae4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ae57:{NFSU2_TR(0x60ae57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ae5cull));
TAIL_STATIC(0x440e50u,440);
}
B60ae5c:L60ae5c:{c.instructions+=3;NFSU2_TR(0x60ae5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60ae5f:{NFSU2_TR(0x60ae5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60ae61:{NFSU2_TR(0x60ae61);
if(r1(R+518)){{goto L60ae6f;}}
}
B60ae63:L60ae63:{c.instructions+=3;NFSU2_TR(0x60ae63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60ae6a:{NFSU2_TR(0x60ae6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ae6d:{NFSU2_TR(0x60ae6d);
{goto L60ae71;}
}
B60ae6f:L60ae6f:{c.instructions+=1;NFSU2_TR(0x60ae6f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60ae71:L60ae71:{c.instructions+=9;NFSU2_TR(0x60ae71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60ae74:{NFSU2_TR(0x60ae74);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B60ae77:{NFSU2_TR(0x60ae77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60ae79:{NFSU2_TR(0x60ae79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ae7c:{NFSU2_TR(0x60ae7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ae7f:{NFSU2_TR(0x60ae7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B60ae81:{NFSU2_TR(0x60ae81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60ae84:{NFSU2_TR(0x60ae84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60ae86:{NFSU2_TR(0x60ae86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60ae8f;}}
}
B60ae88:L60ae88:{c.instructions+=2;NFSU2_TR(0x60ae88);
__builtin_memmove((R+4),(R+20),4);
}
B60ae8a:{NFSU2_TR(0x60ae8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ae8full));
TAIL_STATIC(0x600fa0u,600);
}
B60ae8f:L60ae8f:{c.instructions+=3;NFSU2_TR(0x60ae8f);
__builtin_memmove((R+0),gp(0x8900dc),4);
}
B60ae94:{NFSU2_TR(0x60ae94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ae95:{NFSU2_TR(0x60ae95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ae9aull));
TAIL_STATIC(0x440e50u,440);
}
B60ae9a:L60ae9a:{c.instructions+=3;NFSU2_TR(0x60ae9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60ae9d:{NFSU2_TR(0x60ae9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60ae9f:{NFSU2_TR(0x60ae9f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60adceu);}goto L60adce;}}
}
B60aea5:L60aea5:{c.instructions+=3;NFSU2_TR(0x60aea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60aea8:{NFSU2_TR(0x60aea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60aeab:{NFSU2_TR(0x60aeab);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60add0u);}goto L60add0;}
}
B60aeb0:L60aeb0:{c.instructions+=1;NFSU2_TR(0x60aeb0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60aeb2:L60aeb2:{c.instructions+=8;NFSU2_TR(0x60aeb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60aeb5:{NFSU2_TR(0x60aeb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60aeb7:{NFSU2_TR(0x60aeb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60aeba:{NFSU2_TR(0x60aeba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B60aebc:{NFSU2_TR(0x60aebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60aebf:{NFSU2_TR(0x60aebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60aec2:{NFSU2_TR(0x60aec2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60aec4:{NFSU2_TR(0x60aec4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60aecd;}}
}
B60aec6:L60aec6:{c.instructions+=2;NFSU2_TR(0x60aec6);
__builtin_memmove((R+4),(R+20),4);
}
B60aec8:{NFSU2_TR(0x60aec8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60aecdull));
TAIL_STATIC(0x600fa0u,600);
}
B60aecd:L60aecd:{c.instructions+=8;NFSU2_TR(0x60aecd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60aed1:{NFSU2_TR(0x60aed1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60aed2:{NFSU2_TR(0x60aed2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60aed3:{NFSU2_TR(0x60aed3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60aed4:{NFSU2_TR(0x60aed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60aed5:{NFSU2_TR(0x60aed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60aedc:{NFSU2_TR(0x60aedc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60aedf:{NFSU2_TR(0x60aedf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60aee0:L60aee0:{c.instructions+=6;NFSU2_TR(0x60aee0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60aee3:{NFSU2_TR(0x60aee3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aee4:{NFSU2_TR(0x60aee4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aee5:{NFSU2_TR(0x60aee5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aee6:{NFSU2_TR(0x60aee6);
__builtin_memmove((R+28),(R+4),4);
}
B60aee8:{NFSU2_TR(0x60aee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60aeedull));
TAIL_STATIC(0x4022c0u,402);
}
B60aeed:L60aeed:{c.instructions+=4;NFSU2_TR(0x60aeed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60aeef:{NFSU2_TR(0x60aeef);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B60aef0:{NFSU2_TR(0x60aef0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60aef3:{NFSU2_TR(0x60aef3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x60b2a5u,60b);}
}
B60aef9:L60aef9:{c.instructions+=2;NFSU2_TR(0x60aef9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60aefa:{NFSU2_TR(0x60aefa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x60b2d4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B60af01:L60af01:{c.instructions+=3;NFSU2_TR(0x60af01);
__builtin_memmove((R+0),gp(0x7fbe08),4);
}
B60af06:{NFSU2_TR(0x60af06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60af08:{NFSU2_TR(0x60af08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60af2f;}}
}
B60af0a:L60af0a:{c.instructions+=3;NFSU2_TR(0x60af0a);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B60af0f:{NFSU2_TR(0x60af0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60af11:{NFSU2_TR(0x60af11);
if(r1(R+518)){TAIL_STATIC(0x60b2a4u,60b);}
}
B60af17:L60af17:{c.instructions+=1;NFSU2_TR(0x60af17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60af1cull));
TAIL_STATIC(0x585640u,585);
}
B60af1c:L60af1c:{c.instructions+=3;NFSU2_TR(0x60af1c);
__builtin_memmove((R+4),(R+28),4);
}
B60af1e:{NFSU2_TR(0x60af1e);
s1(0x850098,u8(0x0ull));
}
B60af25:{NFSU2_TR(0x60af25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60af2aull));
TAIL_STATIC(0x601c80u,601);
}
B60af2a:L60af2a:{c.instructions+=1;NFSU2_TR(0x60af2a);
TAIL_STATIC(0x60b2a4u,60b);
}
B60af2f:L60af2f:{c.instructions+=1;NFSU2_TR(0x60af2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60af34ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B60af34:L60af34:{c.instructions+=2;NFSU2_TR(0x60af34);
__builtin_memmove((R+4),(R+0),4);
}
B60af36:{NFSU2_TR(0x60af36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60af3bull));
TAIL_STATIC(0x586760u,586);
}
B60af3b:L60af3b:{c.instructions+=1;NFSU2_TR(0x60af3b);
TAIL_STATIC(0x60b2a4u,60b);
}
B60af40:L60af40:{c.instructions+=4;NFSU2_TR(0x60af40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60af43:{NFSU2_TR(0x60af43);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B60af45:{NFSU2_TR(0x60af45);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60af47:{NFSU2_TR(0x60af47);
if(r1(R+518)){{goto L60afd2;}}
}
B60af4d:L60af4d:{c.instructions+=2;NFSU2_TR(0x60af4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60af52:{NFSU2_TR(0x60af52);
if(r1(R+518)){{goto L60afd2;}}
}
B60af54:L60af54:{c.instructions+=5;NFSU2_TR(0x60af54);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60af57:{NFSU2_TR(0x60af57);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60af5d:{NFSU2_TR(0x60af5d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60af5f:{NFSU2_TR(0x60af5f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60af62:{NFSU2_TR(0x60af62);
if(r1(R+514)){{goto L60afd2;}}
}
B60af64:L60af64:{c.instructions+=2;NFSU2_TR(0x60af64);
__builtin_memmove((R+4),(R+28),4);
}
B60af66:{NFSU2_TR(0x60af66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60af6bull));
TAIL_STATIC(0x5f9790u,5f9);
}
B60af6b:L60af6b:{c.instructions+=2;NFSU2_TR(0x60af6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60af6d:{NFSU2_TR(0x60af6d);
if(r1(R+518)){{goto L60afd2;}}
}
B60af6f:L60af6f:{c.instructions+=2;NFSU2_TR(0x60af6f);
u8 U[8];
__builtin_memmove((U+0),gp(0x86676c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60af75:{NFSU2_TR(0x60af75);
if(r1(R+518)){{goto L60afa4;}}
}
B60af77:L60af77:{c.instructions+=9;NFSU2_TR(0x60af77);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B60af7c:{NFSU2_TR(0x60af7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B60af7f:{NFSU2_TR(0x60af7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60af83:{NFSU2_TR(0x60af83);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B60af87:{NFSU2_TR(0x60af87);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60af8d:{NFSU2_TR(0x60af8d);
{u32 ea_=u32(u32(8021424u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60af93:{NFSU2_TR(0x60af93);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60af95:{NFSU2_TR(0x60af95);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60af98:{NFSU2_TR(0x60af98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60afd2;}}
}
B60af9a:L60af9a:{c.instructions+=2;NFSU2_TR(0x60af9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60af9d:{NFSU2_TR(0x60af9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60afa2ull));
TAIL_STATIC(0x58ef90u,58e);
}
B60afa2:L60afa2:{c.instructions+=1;NFSU2_TR(0x60afa2);
{goto L60afd2;}
}
B60afa4:L60afa4:{c.instructions+=10;NFSU2_TR(0x60afa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60afa7:{NFSU2_TR(0x60afa7);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B60afad:{NFSU2_TR(0x60afad);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B60afaf:{NFSU2_TR(0x60afaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60afb3:{NFSU2_TR(0x60afb3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B60afb7:{NFSU2_TR(0x60afb7);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60afbd:{NFSU2_TR(0x60afbd);
{u32 ea_=u32(u32(8021420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60afc3:{NFSU2_TR(0x60afc3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60afc5:{NFSU2_TR(0x60afc5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60afc8:{NFSU2_TR(0x60afc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60afd2;}}
}
B60afca:L60afca:{c.instructions+=2;NFSU2_TR(0x60afca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60afcd:{NFSU2_TR(0x60afcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60afd2ull));
TAIL_STATIC(0x5890c0u,589);
}
B60afd2:L60afd2:{c.instructions+=5;NFSU2_TR(0x60afd2);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60afd5:{NFSU2_TR(0x60afd5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60afdb:{NFSU2_TR(0x60afdb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60afdd:{NFSU2_TR(0x60afdd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60afe0:{NFSU2_TR(0x60afe0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60b2a4u,60b);}
}
B60afe6:L60afe6:{c.instructions+=6;NFSU2_TR(0x60afe6);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B60afec:{NFSU2_TR(0x60afec);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60aff2:{NFSU2_TR(0x60aff2);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60aff5:{NFSU2_TR(0x60aff5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60aff7:{NFSU2_TR(0x60aff7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60affa:{NFSU2_TR(0x60affa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x60b2a4u,60b);}
TAIL_STATIC(0x60b000u,60b);
}
XIT:NFSU2_TR_EXIT(0x60a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
