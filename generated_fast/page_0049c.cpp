#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_49d(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_556(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_5c1(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x49c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x49c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_49c(u8* __restrict R,Cpu& c);
u32 page_49c(Cpu& c){return body_49c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_49c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x49c000:goto L49c000;
case 0x49c001:c.instructions+=5;goto B49c001;
case 0x49c003:c.instructions+=4;goto B49c003;
case 0x49c006:c.instructions+=3;goto B49c006;
case 0x49c00b:c.instructions+=2;goto B49c00b;
case 0x49c00c:c.instructions+=1;goto B49c00c;
case 0x49c011:goto L49c011;
case 0x49c017:c.instructions+=8;goto B49c017;
case 0x49c01a:c.instructions+=7;goto B49c01a;
case 0x49c01c:c.instructions+=6;goto B49c01c;
case 0x49c01e:c.instructions+=5;goto B49c01e;
case 0x49c024:c.instructions+=4;goto B49c024;
case 0x49c02a:c.instructions+=3;goto B49c02a;
case 0x49c02b:c.instructions+=2;goto B49c02b;
case 0x49c02c:c.instructions+=1;goto B49c02c;
case 0x49c031:goto L49c031;
case 0x49c034:c.instructions+=2;goto B49c034;
case 0x49c035:c.instructions+=1;goto B49c035;
case 0x49c040:goto L49c040;
case 0x49c044:c.instructions+=4;goto B49c044;
case 0x49c049:c.instructions+=3;goto B49c049;
case 0x49c04a:c.instructions+=2;goto B49c04a;
case 0x49c04c:c.instructions+=1;goto B49c04c;
case 0x49c04e:goto L49c04e;
case 0x49c053:c.instructions+=1;goto B49c053;
case 0x49c055:goto L49c055;
case 0x49c05a:c.instructions+=1;goto B49c05a;
case 0x49c05c:goto L49c05c;
case 0x49c05e:c.instructions+=3;goto B49c05e;
case 0x49c05f:c.instructions+=2;goto B49c05f;
case 0x49c061:c.instructions+=1;goto B49c061;
case 0x49c064:goto L49c064;
case 0x49c069:c.instructions+=2;goto B49c069;
case 0x49c06b:c.instructions+=1;goto B49c06b;
case 0x49c06d:goto L49c06d;
case 0x49c073:c.instructions+=4;goto B49c073;
case 0x49c078:c.instructions+=3;goto B49c078;
case 0x49c07a:c.instructions+=2;goto B49c07a;
case 0x49c080:c.instructions+=1;goto B49c080;
case 0x49c085:goto L49c085;
case 0x49c087:c.instructions+=2;goto B49c087;
case 0x49c089:c.instructions+=1;goto B49c089;
case 0x49c08c:goto L49c08c;
case 0x49c08d:c.instructions+=1;goto B49c08d;
case 0x49c090:goto L49c090;
case 0x49c091:c.instructions+=5;goto B49c091;
case 0x49c093:c.instructions+=4;goto B49c093;
case 0x49c096:c.instructions+=3;goto B49c096;
case 0x49c09b:c.instructions+=2;goto B49c09b;
case 0x49c09c:c.instructions+=1;goto B49c09c;
case 0x49c0a1:goto L49c0a1;
case 0x49c0a7:c.instructions+=8;goto B49c0a7;
case 0x49c0aa:c.instructions+=7;goto B49c0aa;
case 0x49c0ac:c.instructions+=6;goto B49c0ac;
case 0x49c0ae:c.instructions+=5;goto B49c0ae;
case 0x49c0b4:c.instructions+=4;goto B49c0b4;
case 0x49c0ba:c.instructions+=3;goto B49c0ba;
case 0x49c0bb:c.instructions+=2;goto B49c0bb;
case 0x49c0bc:c.instructions+=1;goto B49c0bc;
case 0x49c0c1:goto L49c0c1;
case 0x49c0c4:c.instructions+=2;goto B49c0c4;
case 0x49c0c5:c.instructions+=1;goto B49c0c5;
case 0x49c0d0:goto L49c0d0;
case 0x49c0d4:c.instructions+=4;goto B49c0d4;
case 0x49c0d9:c.instructions+=3;goto B49c0d9;
case 0x49c0da:c.instructions+=2;goto B49c0da;
case 0x49c0dc:c.instructions+=1;goto B49c0dc;
case 0x49c0de:goto L49c0de;
case 0x49c0e3:c.instructions+=1;goto B49c0e3;
case 0x49c0e5:goto L49c0e5;
case 0x49c0ea:c.instructions+=1;goto B49c0ea;
case 0x49c0ec:goto L49c0ec;
case 0x49c0ee:c.instructions+=3;goto B49c0ee;
case 0x49c0ef:c.instructions+=2;goto B49c0ef;
case 0x49c0f1:c.instructions+=1;goto B49c0f1;
case 0x49c0f4:goto L49c0f4;
case 0x49c0f9:c.instructions+=2;goto B49c0f9;
case 0x49c0fb:c.instructions+=1;goto B49c0fb;
case 0x49c0fd:goto L49c0fd;
case 0x49c104:goto L49c104;
case 0x49c106:c.instructions+=2;goto B49c106;
case 0x49c108:c.instructions+=1;goto B49c108;
case 0x49c10b:goto L49c10b;
case 0x49c10c:c.instructions+=1;goto B49c10c;
case 0x49c110:goto L49c110;
case 0x49c111:c.instructions+=5;goto B49c111;
case 0x49c113:c.instructions+=4;goto B49c113;
case 0x49c116:c.instructions+=3;goto B49c116;
case 0x49c11b:c.instructions+=2;goto B49c11b;
case 0x49c11c:c.instructions+=1;goto B49c11c;
case 0x49c121:goto L49c121;
case 0x49c126:c.instructions+=3;goto B49c126;
case 0x49c129:c.instructions+=2;goto B49c129;
case 0x49c12b:c.instructions+=1;goto B49c12b;
case 0x49c12d:goto L49c12d;
case 0x49c130:c.instructions+=3;goto B49c130;
case 0x49c135:c.instructions+=2;goto B49c135;
case 0x49c136:c.instructions+=1;goto B49c136;
case 0x49c13b:goto L49c13b;
case 0x49c13e:c.instructions+=2;goto B49c13e;
case 0x49c13f:c.instructions+=1;goto B49c13f;
case 0x49c140:goto L49c140;
case 0x49c143:c.instructions+=3;goto B49c143;
case 0x49c148:c.instructions+=2;goto B49c148;
case 0x49c149:c.instructions+=1;goto B49c149;
case 0x49c14e:goto L49c14e;
case 0x49c151:c.instructions+=2;goto B49c151;
case 0x49c152:c.instructions+=1;goto B49c152;
case 0x49c160:goto L49c160;
case 0x49c161:c.instructions+=7;goto B49c161;
case 0x49c162:c.instructions+=6;goto B49c162;
case 0x49c166:c.instructions+=5;goto B49c166;
case 0x49c168:c.instructions+=4;goto B49c168;
case 0x49c16b:c.instructions+=3;goto B49c16b;
case 0x49c16e:c.instructions+=2;goto B49c16e;
case 0x49c16f:c.instructions+=1;goto B49c16f;
case 0x49c172:goto L49c172;
case 0x49c174:c.instructions+=1;goto B49c174;
case 0x49c176:goto L49c176;
case 0x49c178:c.instructions+=3;goto B49c178;
case 0x49c179:c.instructions+=2;goto B49c179;
case 0x49c17b:c.instructions+=1;goto B49c17b;
case 0x49c17e:goto L49c17e;
case 0x49c180:c.instructions+=2;goto B49c180;
case 0x49c182:c.instructions+=1;goto B49c182;
case 0x49c185:goto L49c185;
case 0x49c18a:goto L49c18a;
case 0x49c18f:c.instructions+=4;goto B49c18f;
case 0x49c196:c.instructions+=3;goto B49c196;
case 0x49c198:c.instructions+=2;goto B49c198;
case 0x49c19a:c.instructions+=1;goto B49c19a;
case 0x49c19d:goto L49c19d;
case 0x49c19e:c.instructions+=2;goto B49c19e;
case 0x49c19f:c.instructions+=1;goto B49c19f;
case 0x49c1b0:goto L49c1b0;
case 0x49c1b3:c.instructions+=3;goto B49c1b3;
case 0x49c1b8:c.instructions+=2;goto B49c1b8;
case 0x49c1b9:c.instructions+=1;goto B49c1b9;
case 0x49c1be:goto L49c1be;
case 0x49c1c1:c.instructions+=1;goto B49c1c1;
case 0x49c1d0:goto L49c1d0;
case 0x49c1d1:c.instructions+=10;goto B49c1d1;
case 0x49c1d7:c.instructions+=9;goto B49c1d7;
case 0x49c1da:c.instructions+=8;goto B49c1da;
case 0x49c1de:c.instructions+=7;goto B49c1de;
case 0x49c1e4:c.instructions+=6;goto B49c1e4;
case 0x49c1e8:c.instructions+=5;goto B49c1e8;
case 0x49c1ef:c.instructions+=4;goto B49c1ef;
case 0x49c1f6:c.instructions+=3;goto B49c1f6;
case 0x49c1f9:c.instructions+=2;goto B49c1f9;
case 0x49c1fa:c.instructions+=1;goto B49c1fa;
case 0x49c1ff:goto L49c1ff;
case 0x49c200:c.instructions+=1;goto B49c200;
case 0x49c210:goto L49c210;
case 0x49c214:c.instructions+=4;goto B49c214;
case 0x49c219:c.instructions+=3;goto B49c219;
case 0x49c21a:c.instructions+=2;goto B49c21a;
case 0x49c21c:c.instructions+=1;goto B49c21c;
case 0x49c21e:goto L49c21e;
case 0x49c223:c.instructions+=1;goto B49c223;
case 0x49c225:goto L49c225;
case 0x49c22a:c.instructions+=1;goto B49c22a;
case 0x49c22c:goto L49c22c;
case 0x49c22e:c.instructions+=3;goto B49c22e;
case 0x49c22f:c.instructions+=2;goto B49c22f;
case 0x49c231:c.instructions+=1;goto B49c231;
case 0x49c234:goto L49c234;
case 0x49c239:c.instructions+=2;goto B49c239;
case 0x49c23b:c.instructions+=1;goto B49c23b;
case 0x49c23d:goto L49c23d;
case 0x49c243:c.instructions+=4;goto B49c243;
case 0x49c248:c.instructions+=3;goto B49c248;
case 0x49c24a:c.instructions+=2;goto B49c24a;
case 0x49c250:c.instructions+=1;goto B49c250;
case 0x49c255:goto L49c255;
case 0x49c257:c.instructions+=2;goto B49c257;
case 0x49c259:c.instructions+=1;goto B49c259;
case 0x49c25c:goto L49c25c;
case 0x49c25d:c.instructions+=1;goto B49c25d;
case 0x49c260:goto L49c260;
case 0x49c261:c.instructions+=5;goto B49c261;
case 0x49c263:c.instructions+=4;goto B49c263;
case 0x49c266:c.instructions+=3;goto B49c266;
case 0x49c26b:c.instructions+=2;goto B49c26b;
case 0x49c26c:c.instructions+=1;goto B49c26c;
case 0x49c271:goto L49c271;
case 0x49c277:c.instructions+=8;goto B49c277;
case 0x49c27a:c.instructions+=7;goto B49c27a;
case 0x49c27c:c.instructions+=6;goto B49c27c;
case 0x49c27e:c.instructions+=5;goto B49c27e;
case 0x49c284:c.instructions+=4;goto B49c284;
case 0x49c28a:c.instructions+=3;goto B49c28a;
case 0x49c28b:c.instructions+=2;goto B49c28b;
case 0x49c28c:c.instructions+=1;goto B49c28c;
case 0x49c291:goto L49c291;
case 0x49c294:c.instructions+=2;goto B49c294;
case 0x49c295:c.instructions+=1;goto B49c295;
case 0x49c2a0:goto L49c2a0;
case 0x49c2a4:c.instructions+=4;goto B49c2a4;
case 0x49c2a9:c.instructions+=3;goto B49c2a9;
case 0x49c2aa:c.instructions+=2;goto B49c2aa;
case 0x49c2ac:c.instructions+=1;goto B49c2ac;
case 0x49c2ae:goto L49c2ae;
case 0x49c2b3:c.instructions+=1;goto B49c2b3;
case 0x49c2b5:goto L49c2b5;
case 0x49c2ba:c.instructions+=1;goto B49c2ba;
case 0x49c2bc:goto L49c2bc;
case 0x49c2be:c.instructions+=3;goto B49c2be;
case 0x49c2bf:c.instructions+=2;goto B49c2bf;
case 0x49c2c1:c.instructions+=1;goto B49c2c1;
case 0x49c2c4:goto L49c2c4;
case 0x49c2c9:c.instructions+=2;goto B49c2c9;
case 0x49c2cb:c.instructions+=1;goto B49c2cb;
case 0x49c2cd:goto L49c2cd;
case 0x49c2d4:goto L49c2d4;
case 0x49c2d6:c.instructions+=2;goto B49c2d6;
case 0x49c2d8:c.instructions+=1;goto B49c2d8;
case 0x49c2db:goto L49c2db;
case 0x49c2dc:c.instructions+=1;goto B49c2dc;
case 0x49c2e0:goto L49c2e0;
case 0x49c2e1:c.instructions+=5;goto B49c2e1;
case 0x49c2e3:c.instructions+=4;goto B49c2e3;
case 0x49c2e6:c.instructions+=3;goto B49c2e6;
case 0x49c2eb:c.instructions+=2;goto B49c2eb;
case 0x49c2ec:c.instructions+=1;goto B49c2ec;
case 0x49c2f1:goto L49c2f1;
case 0x49c2f7:c.instructions+=8;goto B49c2f7;
case 0x49c2fa:c.instructions+=7;goto B49c2fa;
case 0x49c2fc:c.instructions+=6;goto B49c2fc;
case 0x49c2fe:c.instructions+=5;goto B49c2fe;
case 0x49c304:c.instructions+=4;goto B49c304;
case 0x49c30a:c.instructions+=3;goto B49c30a;
case 0x49c30b:c.instructions+=2;goto B49c30b;
case 0x49c30c:c.instructions+=1;goto B49c30c;
case 0x49c311:goto L49c311;
case 0x49c314:c.instructions+=2;goto B49c314;
case 0x49c315:c.instructions+=1;goto B49c315;
case 0x49c320:goto L49c320;
case 0x49c324:c.instructions+=4;goto B49c324;
case 0x49c329:c.instructions+=3;goto B49c329;
case 0x49c32a:c.instructions+=2;goto B49c32a;
case 0x49c32c:c.instructions+=1;goto B49c32c;
case 0x49c32e:goto L49c32e;
case 0x49c333:c.instructions+=1;goto B49c333;
case 0x49c335:goto L49c335;
case 0x49c33a:c.instructions+=1;goto B49c33a;
case 0x49c33c:goto L49c33c;
case 0x49c33e:c.instructions+=3;goto B49c33e;
case 0x49c33f:c.instructions+=2;goto B49c33f;
case 0x49c341:c.instructions+=1;goto B49c341;
case 0x49c344:goto L49c344;
case 0x49c349:c.instructions+=2;goto B49c349;
case 0x49c34b:c.instructions+=1;goto B49c34b;
case 0x49c34d:goto L49c34d;
case 0x49c354:goto L49c354;
case 0x49c356:c.instructions+=2;goto B49c356;
case 0x49c358:c.instructions+=1;goto B49c358;
case 0x49c35b:goto L49c35b;
case 0x49c35c:c.instructions+=1;goto B49c35c;
case 0x49c360:goto L49c360;
case 0x49c361:c.instructions+=5;goto B49c361;
case 0x49c363:c.instructions+=4;goto B49c363;
case 0x49c366:c.instructions+=3;goto B49c366;
case 0x49c36b:c.instructions+=2;goto B49c36b;
case 0x49c36c:c.instructions+=1;goto B49c36c;
case 0x49c371:goto L49c371;
case 0x49c377:c.instructions+=8;goto B49c377;
case 0x49c37a:c.instructions+=7;goto B49c37a;
case 0x49c37c:c.instructions+=6;goto B49c37c;
case 0x49c37e:c.instructions+=5;goto B49c37e;
case 0x49c384:c.instructions+=4;goto B49c384;
case 0x49c38a:c.instructions+=3;goto B49c38a;
case 0x49c38b:c.instructions+=2;goto B49c38b;
case 0x49c38c:c.instructions+=1;goto B49c38c;
case 0x49c391:goto L49c391;
case 0x49c394:c.instructions+=2;goto B49c394;
case 0x49c395:c.instructions+=1;goto B49c395;
case 0x49c3a0:goto L49c3a0;
case 0x49c3a4:c.instructions+=4;goto B49c3a4;
case 0x49c3a9:c.instructions+=3;goto B49c3a9;
case 0x49c3aa:c.instructions+=2;goto B49c3aa;
case 0x49c3ac:c.instructions+=1;goto B49c3ac;
case 0x49c3ae:goto L49c3ae;
case 0x49c3b3:c.instructions+=1;goto B49c3b3;
case 0x49c3b5:goto L49c3b5;
case 0x49c3ba:c.instructions+=1;goto B49c3ba;
case 0x49c3bc:goto L49c3bc;
case 0x49c3be:c.instructions+=3;goto B49c3be;
case 0x49c3bf:c.instructions+=2;goto B49c3bf;
case 0x49c3c1:c.instructions+=1;goto B49c3c1;
case 0x49c3c4:goto L49c3c4;
case 0x49c3c9:c.instructions+=2;goto B49c3c9;
case 0x49c3cb:c.instructions+=1;goto B49c3cb;
case 0x49c3cd:goto L49c3cd;
case 0x49c3d3:c.instructions+=4;goto B49c3d3;
case 0x49c3d8:c.instructions+=3;goto B49c3d8;
case 0x49c3da:c.instructions+=2;goto B49c3da;
case 0x49c3e0:c.instructions+=1;goto B49c3e0;
case 0x49c3e5:goto L49c3e5;
case 0x49c3e7:c.instructions+=2;goto B49c3e7;
case 0x49c3e9:c.instructions+=1;goto B49c3e9;
case 0x49c3ec:goto L49c3ec;
case 0x49c3ed:c.instructions+=1;goto B49c3ed;
case 0x49c3f0:goto L49c3f0;
case 0x49c3f1:c.instructions+=5;goto B49c3f1;
case 0x49c3f3:c.instructions+=4;goto B49c3f3;
case 0x49c3f6:c.instructions+=3;goto B49c3f6;
case 0x49c3fb:c.instructions+=2;goto B49c3fb;
case 0x49c3fc:c.instructions+=1;goto B49c3fc;
case 0x49c401:goto L49c401;
case 0x49c407:c.instructions+=8;goto B49c407;
case 0x49c40a:c.instructions+=7;goto B49c40a;
case 0x49c40c:c.instructions+=6;goto B49c40c;
case 0x49c40e:c.instructions+=5;goto B49c40e;
case 0x49c414:c.instructions+=4;goto B49c414;
case 0x49c41a:c.instructions+=3;goto B49c41a;
case 0x49c41b:c.instructions+=2;goto B49c41b;
case 0x49c41c:c.instructions+=1;goto B49c41c;
case 0x49c421:goto L49c421;
case 0x49c424:c.instructions+=2;goto B49c424;
case 0x49c425:c.instructions+=1;goto B49c425;
case 0x49c430:goto L49c430;
case 0x49c434:c.instructions+=4;goto B49c434;
case 0x49c439:c.instructions+=3;goto B49c439;
case 0x49c43a:c.instructions+=2;goto B49c43a;
case 0x49c43c:c.instructions+=1;goto B49c43c;
case 0x49c43e:goto L49c43e;
case 0x49c443:c.instructions+=1;goto B49c443;
case 0x49c445:goto L49c445;
case 0x49c44a:c.instructions+=1;goto B49c44a;
case 0x49c44c:goto L49c44c;
case 0x49c44e:c.instructions+=3;goto B49c44e;
case 0x49c44f:c.instructions+=2;goto B49c44f;
case 0x49c451:c.instructions+=1;goto B49c451;
case 0x49c454:goto L49c454;
case 0x49c459:c.instructions+=2;goto B49c459;
case 0x49c45b:c.instructions+=1;goto B49c45b;
case 0x49c45d:goto L49c45d;
case 0x49c463:c.instructions+=4;goto B49c463;
case 0x49c468:c.instructions+=3;goto B49c468;
case 0x49c46a:c.instructions+=2;goto B49c46a;
case 0x49c470:c.instructions+=1;goto B49c470;
case 0x49c475:goto L49c475;
case 0x49c477:c.instructions+=2;goto B49c477;
case 0x49c479:c.instructions+=1;goto B49c479;
case 0x49c47c:goto L49c47c;
case 0x49c47d:c.instructions+=1;goto B49c47d;
case 0x49c480:goto L49c480;
case 0x49c481:c.instructions+=5;goto B49c481;
case 0x49c483:c.instructions+=4;goto B49c483;
case 0x49c486:c.instructions+=3;goto B49c486;
case 0x49c48b:c.instructions+=2;goto B49c48b;
case 0x49c48c:c.instructions+=1;goto B49c48c;
case 0x49c491:goto L49c491;
case 0x49c497:c.instructions+=8;goto B49c497;
case 0x49c49a:c.instructions+=7;goto B49c49a;
case 0x49c49c:c.instructions+=6;goto B49c49c;
case 0x49c49e:c.instructions+=5;goto B49c49e;
case 0x49c4a4:c.instructions+=4;goto B49c4a4;
case 0x49c4aa:c.instructions+=3;goto B49c4aa;
case 0x49c4ab:c.instructions+=2;goto B49c4ab;
case 0x49c4ac:c.instructions+=1;goto B49c4ac;
case 0x49c4b1:goto L49c4b1;
case 0x49c4b4:c.instructions+=2;goto B49c4b4;
case 0x49c4b5:c.instructions+=1;goto B49c4b5;
case 0x49c4c0:goto L49c4c0;
case 0x49c4c4:c.instructions+=2;goto B49c4c4;
case 0x49c4c9:c.instructions+=1;goto B49c4c9;
case 0x49c4cb:goto L49c4cb;
case 0x49c4d0:c.instructions+=1;goto B49c4d0;
case 0x49c4d2:goto L49c4d2;
case 0x49c4d7:c.instructions+=1;goto B49c4d7;
case 0x49c4d9:goto L49c4d9;
case 0x49c4de:c.instructions+=2;goto B49c4de;
case 0x49c4e0:c.instructions+=1;goto B49c4e0;
case 0x49c4e2:goto L49c4e2;
case 0x49c4e9:goto L49c4e9;
case 0x49c4eb:c.instructions+=1;goto B49c4eb;
case 0x49c4ee:goto L49c4ee;
case 0x49c500:goto L49c500;
case 0x49c501:c.instructions+=5;goto B49c501;
case 0x49c503:c.instructions+=4;goto B49c503;
case 0x49c506:c.instructions+=3;goto B49c506;
case 0x49c50b:c.instructions+=2;goto B49c50b;
case 0x49c50c:c.instructions+=1;goto B49c50c;
case 0x49c511:goto L49c511;
case 0x49c517:c.instructions+=8;goto B49c517;
case 0x49c51a:c.instructions+=7;goto B49c51a;
case 0x49c51c:c.instructions+=6;goto B49c51c;
case 0x49c51e:c.instructions+=5;goto B49c51e;
case 0x49c524:c.instructions+=4;goto B49c524;
case 0x49c52a:c.instructions+=3;goto B49c52a;
case 0x49c52b:c.instructions+=2;goto B49c52b;
case 0x49c52c:c.instructions+=1;goto B49c52c;
case 0x49c531:goto L49c531;
case 0x49c534:c.instructions+=2;goto B49c534;
case 0x49c535:c.instructions+=1;goto B49c535;
case 0x49c540:goto L49c540;
case 0x49c544:c.instructions+=12;goto B49c544;
case 0x49c548:c.instructions+=11;goto B49c548;
case 0x49c549:c.instructions+=10;goto B49c549;
case 0x49c54a:c.instructions+=9;goto B49c54a;
case 0x49c54e:c.instructions+=8;goto B49c54e;
case 0x49c550:c.instructions+=7;goto B49c550;
case 0x49c554:c.instructions+=6;goto B49c554;
case 0x49c555:c.instructions+=5;goto B49c555;
case 0x49c556:c.instructions+=4;goto B49c556;
case 0x49c557:c.instructions+=3;goto B49c557;
case 0x49c558:c.instructions+=2;goto B49c558;
case 0x49c55a:c.instructions+=1;goto B49c55a;
case 0x49c55f:goto L49c55f;
case 0x49c565:c.instructions+=1;goto B49c565;
case 0x49c567:goto L49c567;
case 0x49c56d:c.instructions+=1;goto B49c56d;
case 0x49c56f:goto L49c56f;
case 0x49c579:c.instructions+=1;goto B49c579;
case 0x49c57b:goto L49c57b;
case 0x49c580:c.instructions+=2;goto B49c580;
case 0x49c582:c.instructions+=1;goto B49c582;
case 0x49c584:goto L49c584;
case 0x49c587:c.instructions+=1;goto B49c587;
case 0x49c589:goto L49c589;
case 0x49c58c:c.instructions+=4;goto B49c58c;
case 0x49c58e:c.instructions+=3;goto B49c58e;
case 0x49c593:c.instructions+=2;goto B49c593;
case 0x49c594:c.instructions+=1;goto B49c594;
case 0x49c599:goto L49c599;
case 0x49c59c:c.instructions+=3;goto B49c59c;
case 0x49c59d:c.instructions+=2;goto B49c59d;
case 0x49c59e:c.instructions+=1;goto B49c59e;
case 0x49c5a1:goto L49c5a1;
case 0x49c5a4:c.instructions+=4;goto B49c5a4;
case 0x49c5a6:c.instructions+=3;goto B49c5a6;
case 0x49c5ab:c.instructions+=2;goto B49c5ab;
case 0x49c5ac:c.instructions+=1;goto B49c5ac;
case 0x49c5b1:goto L49c5b1;
case 0x49c5b4:c.instructions+=3;goto B49c5b4;
case 0x49c5b5:c.instructions+=2;goto B49c5b5;
case 0x49c5b6:c.instructions+=1;goto B49c5b6;
case 0x49c5b9:goto L49c5b9;
case 0x49c5bc:c.instructions+=4;goto B49c5bc;
case 0x49c5c1:c.instructions+=3;goto B49c5c1;
case 0x49c5c6:c.instructions+=2;goto B49c5c6;
case 0x49c5c7:c.instructions+=1;goto B49c5c7;
case 0x49c5cc:goto L49c5cc;
case 0x49c5cf:c.instructions+=2;goto B49c5cf;
case 0x49c5d1:c.instructions+=1;goto B49c5d1;
case 0x49c5d3:goto L49c5d3;
case 0x49c5d6:c.instructions+=5;goto B49c5d6;
case 0x49c5d8:c.instructions+=4;goto B49c5d8;
case 0x49c5dd:c.instructions+=3;goto B49c5dd;
case 0x49c5e2:c.instructions+=2;goto B49c5e2;
case 0x49c5e3:c.instructions+=1;goto B49c5e3;
case 0x49c5e8:goto L49c5e8;
case 0x49c5eb:goto L49c5eb;
case 0x49c5ec:c.instructions+=2;goto B49c5ec;
case 0x49c5ed:c.instructions+=1;goto B49c5ed;
case 0x49c5f0:goto L49c5f0;
case 0x49c5f4:c.instructions+=2;goto B49c5f4;
case 0x49c5f9:c.instructions+=1;goto B49c5f9;
case 0x49c600:goto L49c600;
case 0x49c607:c.instructions+=3;goto B49c607;
case 0x49c608:c.instructions+=2;goto B49c608;
case 0x49c60a:c.instructions+=1;goto B49c60a;
case 0x49c60c:goto L49c60c;
case 0x49c612:c.instructions+=3;goto B49c612;
case 0x49c613:c.instructions+=2;goto B49c613;
case 0x49c614:c.instructions+=1;goto B49c614;
case 0x49c619:goto L49c619;
case 0x49c61f:c.instructions+=4;goto B49c61f;
case 0x49c621:c.instructions+=3;goto B49c621;
case 0x49c628:c.instructions+=2;goto B49c628;
case 0x49c629:c.instructions+=1;goto B49c629;
case 0x49c62e:goto L49c62e;
case 0x49c631:c.instructions+=3;goto B49c631;
case 0x49c633:c.instructions+=2;goto B49c633;
case 0x49c636:c.instructions+=1;goto B49c636;
case 0x49c638:goto L49c638;
case 0x49c63a:c.instructions+=1;goto B49c63a;
case 0x49c63c:goto L49c63c;
case 0x49c63e:c.instructions+=2;goto B49c63e;
case 0x49c640:c.instructions+=1;goto B49c640;
case 0x49c643:goto L49c643;
case 0x49c646:c.instructions+=1;goto B49c646;
case 0x49c648:goto L49c648;
case 0x49c64b:c.instructions+=4;goto B49c64b;
case 0x49c64d:c.instructions+=3;goto B49c64d;
case 0x49c64e:c.instructions+=2;goto B49c64e;
case 0x49c650:c.instructions+=1;goto B49c650;
case 0x49c653:goto L49c653;
case 0x49c655:c.instructions+=4;goto B49c655;
case 0x49c657:c.instructions+=3;goto B49c657;
case 0x49c658:c.instructions+=2;goto B49c658;
case 0x49c659:c.instructions+=1;goto B49c659;
case 0x49c65c:goto L49c65c;
case 0x49c65e:c.instructions+=1;goto B49c65e;
case 0x49c660:goto L49c660;
case 0x49c663:c.instructions+=1;goto B49c663;
case 0x49c665:goto L49c665;
case 0x49c668:c.instructions+=3;goto B49c668;
case 0x49c669:c.instructions+=2;goto B49c669;
case 0x49c66e:c.instructions+=1;goto B49c66e;
case 0x49c673:goto L49c673;
case 0x49c676:goto L49c676;
case 0x49c678:c.instructions+=2;goto B49c678;
case 0x49c67a:c.instructions+=1;goto B49c67a;
case 0x49c67d:goto L49c67d;
case 0x49c67f:c.instructions+=4;goto B49c67f;
case 0x49c681:c.instructions+=3;goto B49c681;
case 0x49c682:c.instructions+=2;goto B49c682;
case 0x49c683:c.instructions+=1;goto B49c683;
case 0x49c686:goto L49c686;
case 0x49c687:goto L49c687;
case 0x49c688:c.instructions+=1;goto B49c688;
case 0x49c690:goto L49c690;
case 0x49c691:c.instructions+=7;goto B49c691;
case 0x49c692:c.instructions+=6;goto B49c692;
case 0x49c694:c.instructions+=5;goto B49c694;
case 0x49c69a:c.instructions+=4;goto B49c69a;
case 0x49c69c:c.instructions+=3;goto B49c69c;
case 0x49c69d:c.instructions+=2;goto B49c69d;
case 0x49c6a1:c.instructions+=1;goto B49c6a1;
case 0x49c6a3:goto L49c6a3;
case 0x49c6a7:c.instructions+=8;goto B49c6a7;
case 0x49c6ab:c.instructions+=7;goto B49c6ab;
case 0x49c6af:c.instructions+=6;goto B49c6af;
case 0x49c6b0:c.instructions+=5;goto B49c6b0;
case 0x49c6b1:c.instructions+=4;goto B49c6b1;
case 0x49c6b2:c.instructions+=3;goto B49c6b2;
case 0x49c6b3:c.instructions+=2;goto B49c6b3;
case 0x49c6b5:c.instructions+=1;goto B49c6b5;
case 0x49c6ba:goto L49c6ba;
case 0x49c6c0:c.instructions+=1;goto B49c6c0;
case 0x49c6c6:goto L49c6c6;
case 0x49c6cc:goto L49c6cc;
case 0x49c6d2:c.instructions+=1;goto B49c6d2;
case 0x49c6d8:goto L49c6d8;
case 0x49c6de:goto L49c6de;
case 0x49c6e4:c.instructions+=1;goto B49c6e4;
case 0x49c6e6:goto L49c6e6;
case 0x49c6ec:c.instructions+=1;goto B49c6ec;
case 0x49c6f2:goto L49c6f2;
case 0x49c6f5:c.instructions+=4;goto B49c6f5;
case 0x49c6f7:c.instructions+=3;goto B49c6f7;
case 0x49c6fc:c.instructions+=2;goto B49c6fc;
case 0x49c6fd:c.instructions+=1;goto B49c6fd;
case 0x49c702:goto L49c702;
case 0x49c705:c.instructions+=4;goto B49c705;
case 0x49c706:c.instructions+=3;goto B49c706;
case 0x49c707:c.instructions+=2;goto B49c707;
case 0x49c708:c.instructions+=1;goto B49c708;
case 0x49c70b:goto L49c70b;
case 0x49c712:c.instructions+=1;goto B49c712;
case 0x49c718:goto L49c718;
case 0x49c71b:c.instructions+=6;goto B49c71b;
case 0x49c720:c.instructions+=5;goto B49c720;
case 0x49c725:c.instructions+=4;goto B49c725;
case 0x49c72a:c.instructions+=3;goto B49c72a;
case 0x49c72b:c.instructions+=2;goto B49c72b;
case 0x49c731:c.instructions+=1;goto B49c731;
case 0x49c736:goto L49c736;
case 0x49c739:c.instructions+=2;goto B49c739;
case 0x49c73b:c.instructions+=1;goto B49c73b;
case 0x49c741:goto L49c741;
case 0x49c744:c.instructions+=6;goto B49c744;
case 0x49c745:c.instructions+=5;goto B49c745;
case 0x49c74a:c.instructions+=4;goto B49c74a;
case 0x49c74f:c.instructions+=3;goto B49c74f;
case 0x49c750:c.instructions+=2;goto B49c750;
case 0x49c75a:c.instructions+=1;goto B49c75a;
case 0x49c75f:goto L49c75f;
case 0x49c762:c.instructions+=4;goto B49c762;
case 0x49c763:c.instructions+=3;goto B49c763;
case 0x49c764:c.instructions+=2;goto B49c764;
case 0x49c765:c.instructions+=1;goto B49c765;
case 0x49c768:goto L49c768;
case 0x49c76b:c.instructions+=6;goto B49c76b;
case 0x49c76d:c.instructions+=5;goto B49c76d;
case 0x49c772:c.instructions+=4;goto B49c772;
case 0x49c777:c.instructions+=3;goto B49c777;
case 0x49c778:c.instructions+=2;goto B49c778;
case 0x49c77f:c.instructions+=1;goto B49c77f;
case 0x49c784:goto L49c784;
case 0x49c787:c.instructions+=4;goto B49c787;
case 0x49c788:c.instructions+=3;goto B49c788;
case 0x49c789:c.instructions+=2;goto B49c789;
case 0x49c78a:c.instructions+=1;goto B49c78a;
case 0x49c78d:goto L49c78d;
case 0x49c793:c.instructions+=1;goto B49c793;
case 0x49c799:goto L49c799;
case 0x49c79f:c.instructions+=3;goto B49c79f;
case 0x49c7a0:c.instructions+=2;goto B49c7a0;
case 0x49c7a2:c.instructions+=1;goto B49c7a2;
case 0x49c7a7:goto L49c7a7;
case 0x49c7a9:c.instructions+=4;goto B49c7a9;
case 0x49c7af:c.instructions+=3;goto B49c7af;
case 0x49c7b0:c.instructions+=2;goto B49c7b0;
case 0x49c7b2:c.instructions+=1;goto B49c7b2;
case 0x49c7b7:goto L49c7b7;
case 0x49c7b9:c.instructions+=2;goto B49c7b9;
case 0x49c7bb:c.instructions+=1;goto B49c7bb;
case 0x49c7bd:goto L49c7bd;
case 0x49c7c0:c.instructions+=2;goto B49c7c0;
case 0x49c7c2:c.instructions+=1;goto B49c7c2;
case 0x49c7c4:goto L49c7c4;
case 0x49c7c6:c.instructions+=2;goto B49c7c6;
case 0x49c7c8:c.instructions+=1;goto B49c7c8;
case 0x49c7cb:goto L49c7cb;
case 0x49c7cd:c.instructions+=1;goto B49c7cd;
case 0x49c7d3:goto L49c7d3;
case 0x49c7d6:c.instructions+=2;goto B49c7d6;
case 0x49c7d8:c.instructions+=1;goto B49c7d8;
case 0x49c7de:goto L49c7de;
case 0x49c7e0:c.instructions+=2;goto B49c7e0;
case 0x49c7e2:c.instructions+=1;goto B49c7e2;
case 0x49c7e5:goto L49c7e5;
case 0x49c7e6:c.instructions+=3;goto B49c7e6;
case 0x49c7e7:c.instructions+=2;goto B49c7e7;
case 0x49c7e8:c.instructions+=1;goto B49c7e8;
case 0x49c7eb:goto L49c7eb;
case 0x49c7ee:c.instructions+=3;goto B49c7ee;
case 0x49c7ef:c.instructions+=2;goto B49c7ef;
case 0x49c7f4:c.instructions+=1;goto B49c7f4;
case 0x49c7f9:goto L49c7f9;
case 0x49c7fc:c.instructions+=5;goto B49c7fc;
case 0x49c7ff:c.instructions+=4;goto B49c7ff;
case 0x49c801:c.instructions+=3;goto B49c801;
case 0x49c804:c.instructions+=2;goto B49c804;
case 0x49c805:c.instructions+=1;goto B49c805;
case 0x49c808:goto L49c808;
case 0x49c809:c.instructions+=3;goto B49c809;
case 0x49c80a:c.instructions+=2;goto B49c80a;
case 0x49c80b:c.instructions+=1;goto B49c80b;
case 0x49c80e:goto L49c80e;
case 0x49c814:c.instructions+=1;goto B49c814;
case 0x49c816:goto L49c816;
case 0x49c818:goto L49c818;
case 0x49c81e:c.instructions+=1;goto B49c81e;
case 0x49c824:goto L49c824;
case 0x49c82a:c.instructions+=1;goto B49c82a;
case 0x49c830:goto L49c830;
case 0x49c832:c.instructions+=1;goto B49c832;
case 0x49c837:goto L49c837;
case 0x49c838:c.instructions+=3;goto B49c838;
case 0x49c839:c.instructions+=2;goto B49c839;
case 0x49c83a:c.instructions+=1;goto B49c83a;
case 0x49c83d:goto L49c83d;
case 0x49c842:c.instructions+=3;goto B49c842;
case 0x49c847:c.instructions+=2;goto B49c847;
case 0x49c849:c.instructions+=1;goto B49c849;
case 0x49c84f:goto L49c84f;
case 0x49c854:goto L49c854;
case 0x49c85a:c.instructions+=4;goto B49c85a;
case 0x49c85d:c.instructions+=3;goto B49c85d;
case 0x49c85e:c.instructions+=2;goto B49c85e;
case 0x49c863:c.instructions+=1;goto B49c863;
case 0x49c868:goto L49c868;
case 0x49c86b:c.instructions+=4;goto B49c86b;
case 0x49c86c:c.instructions+=3;goto B49c86c;
case 0x49c86d:c.instructions+=2;goto B49c86d;
case 0x49c86e:c.instructions+=1;goto B49c86e;
case 0x49c871:goto L49c871;
case 0x49c877:c.instructions+=1;goto B49c877;
case 0x49c87d:goto L49c87d;
case 0x49c883:c.instructions+=2;goto B49c883;
case 0x49c888:c.instructions+=1;goto B49c888;
case 0x49c88e:goto L49c88e;
case 0x49c893:c.instructions+=3;goto B49c893;
case 0x49c898:c.instructions+=2;goto B49c898;
case 0x49c89a:c.instructions+=1;goto B49c89a;
case 0x49c89c:goto L49c89c;
case 0x49c8a1:goto L49c8a1;
case 0x49c8a8:c.instructions+=1;goto B49c8a8;
case 0x49c8ae:goto L49c8ae;
case 0x49c8b3:c.instructions+=2;goto B49c8b3;
case 0x49c8b5:c.instructions+=1;goto B49c8b5;
case 0x49c8b7:goto L49c8b7;
case 0x49c8bd:c.instructions+=1;goto B49c8bd;
case 0x49c8bf:goto L49c8bf;
case 0x49c8c2:c.instructions+=10;goto B49c8c2;
case 0x49c8c7:c.instructions+=9;goto B49c8c7;
case 0x49c8c8:c.instructions+=8;goto B49c8c8;
case 0x49c8cd:c.instructions+=7;goto B49c8cd;
case 0x49c8d2:c.instructions+=6;goto B49c8d2;
case 0x49c8d7:c.instructions+=5;goto B49c8d7;
case 0x49c8dc:c.instructions+=4;goto B49c8dc;
case 0x49c8e1:c.instructions+=3;goto B49c8e1;
case 0x49c8e6:c.instructions+=2;goto B49c8e6;
case 0x49c8e7:c.instructions+=1;goto B49c8e7;
case 0x49c8ec:goto L49c8ec;
case 0x49c8ef:c.instructions+=4;goto B49c8ef;
case 0x49c8f0:c.instructions+=3;goto B49c8f0;
case 0x49c8f1:c.instructions+=2;goto B49c8f1;
case 0x49c8f2:c.instructions+=1;goto B49c8f2;
case 0x49c8f5:goto L49c8f5;
case 0x49c8fb:c.instructions+=1;goto B49c8fb;
case 0x49c8fd:goto L49c8fd;
case 0x49c903:c.instructions+=2;goto B49c903;
case 0x49c905:c.instructions+=1;goto B49c905;
case 0x49c907:goto L49c907;
case 0x49c90a:c.instructions+=10;goto B49c90a;
case 0x49c90f:c.instructions+=9;goto B49c90f;
case 0x49c910:c.instructions+=8;goto B49c910;
case 0x49c915:c.instructions+=7;goto B49c915;
case 0x49c91a:c.instructions+=6;goto B49c91a;
case 0x49c91f:c.instructions+=5;goto B49c91f;
case 0x49c924:c.instructions+=4;goto B49c924;
case 0x49c929:c.instructions+=3;goto B49c929;
case 0x49c92e:c.instructions+=2;goto B49c92e;
case 0x49c92f:c.instructions+=1;goto B49c92f;
case 0x49c934:goto L49c934;
case 0x49c937:c.instructions+=4;goto B49c937;
case 0x49c938:c.instructions+=3;goto B49c938;
case 0x49c939:c.instructions+=2;goto B49c939;
case 0x49c93a:c.instructions+=1;goto B49c93a;
case 0x49c93d:goto L49c93d;
case 0x49c940:c.instructions+=4;goto B49c940;
case 0x49c942:c.instructions+=3;goto B49c942;
case 0x49c947:c.instructions+=2;goto B49c947;
case 0x49c948:c.instructions+=1;goto B49c948;
case 0x49c94d:goto L49c94d;
case 0x49c950:c.instructions+=4;goto B49c950;
case 0x49c951:c.instructions+=3;goto B49c951;
case 0x49c952:c.instructions+=2;goto B49c952;
case 0x49c953:c.instructions+=1;goto B49c953;
case 0x49c956:goto L49c956;
case 0x49c95b:c.instructions+=1;goto B49c95b;
case 0x49c95d:goto L49c95d;
case 0x49c962:c.instructions+=2;goto B49c962;
case 0x49c965:c.instructions+=1;goto B49c965;
case 0x49c967:goto L49c967;
case 0x49c96a:c.instructions+=4;goto B49c96a;
case 0x49c96c:c.instructions+=3;goto B49c96c;
case 0x49c971:c.instructions+=2;goto B49c971;
case 0x49c972:c.instructions+=1;goto B49c972;
case 0x49c977:goto L49c977;
case 0x49c97a:c.instructions+=4;goto B49c97a;
case 0x49c97b:c.instructions+=3;goto B49c97b;
case 0x49c97c:c.instructions+=2;goto B49c97c;
case 0x49c97d:c.instructions+=1;goto B49c97d;
case 0x49c980:goto L49c980;
case 0x49c983:c.instructions+=1;goto B49c983;
case 0x49c985:goto L49c985;
case 0x49c988:c.instructions+=4;goto B49c988;
case 0x49c98a:c.instructions+=3;goto B49c98a;
case 0x49c98f:c.instructions+=2;goto B49c98f;
case 0x49c990:c.instructions+=1;goto B49c990;
case 0x49c995:goto L49c995;
case 0x49c998:c.instructions+=4;goto B49c998;
case 0x49c999:c.instructions+=3;goto B49c999;
case 0x49c99a:c.instructions+=2;goto B49c99a;
case 0x49c99b:c.instructions+=1;goto B49c99b;
case 0x49c99e:goto L49c99e;
case 0x49c9a1:c.instructions+=1;goto B49c9a1;
case 0x49c9a3:goto L49c9a3;
case 0x49c9a6:c.instructions+=4;goto B49c9a6;
case 0x49c9a8:c.instructions+=3;goto B49c9a8;
case 0x49c9ad:c.instructions+=2;goto B49c9ad;
case 0x49c9ae:c.instructions+=1;goto B49c9ae;
case 0x49c9b3:goto L49c9b3;
case 0x49c9b6:goto L49c9b6;
case 0x49c9b7:c.instructions+=3;goto B49c9b7;
case 0x49c9b8:c.instructions+=2;goto B49c9b8;
case 0x49c9b9:c.instructions+=1;goto B49c9b9;
case 0x49c9c0:goto L49c9c0;
case 0x49c9c4:c.instructions+=2;goto B49c9c4;
case 0x49c9c9:c.instructions+=1;goto B49c9c9;
case 0x49c9cb:goto L49c9cb;
case 0x49c9d0:c.instructions+=1;goto B49c9d0;
case 0x49c9d2:goto L49c9d2;
case 0x49c9d5:c.instructions+=4;goto B49c9d5;
case 0x49c9d7:c.instructions+=3;goto B49c9d7;
case 0x49c9dc:c.instructions+=2;goto B49c9dc;
case 0x49c9dd:c.instructions+=1;goto B49c9dd;
case 0x49c9e2:goto L49c9e2;
case 0x49c9e5:goto L49c9e5;
case 0x49c9f0:goto L49c9f0;
case 0x49c9f2:c.instructions+=11;goto B49c9f2;
case 0x49c9f7:c.instructions+=10;goto B49c9f7;
case 0x49c9fd:c.instructions+=9;goto B49c9fd;
case 0x49c9fe:c.instructions+=8;goto B49c9fe;
case 0x49ca05:c.instructions+=7;goto B49ca05;
case 0x49ca06:c.instructions+=6;goto B49ca06;
case 0x49ca0a:c.instructions+=5;goto B49ca0a;
case 0x49ca0b:c.instructions+=4;goto B49ca0b;
case 0x49ca0d:c.instructions+=3;goto B49ca0d;
case 0x49ca0e:c.instructions+=2;goto B49ca0e;
case 0x49ca12:c.instructions+=1;goto B49ca12;
case 0x49ca17:goto L49ca17;
case 0x49ca19:c.instructions+=7;goto B49ca19;
case 0x49ca1c:c.instructions+=6;goto B49ca1c;
case 0x49ca20:c.instructions+=5;goto B49ca20;
case 0x49ca26:c.instructions+=4;goto B49ca26;
case 0x49ca29:c.instructions+=3;goto B49ca29;
case 0x49ca2c:c.instructions+=2;goto B49ca2c;
case 0x49ca2f:c.instructions+=1;goto B49ca2f;
case 0x49ca34:goto L49ca34;
case 0x49ca38:c.instructions+=5;goto B49ca38;
case 0x49ca3a:c.instructions+=4;goto B49ca3a;
case 0x49ca3b:c.instructions+=3;goto B49ca3b;
case 0x49ca42:c.instructions+=2;goto B49ca42;
case 0x49ca45:c.instructions+=1;goto B49ca45;
case 0x49ca50:goto L49ca50;
case 0x49ca54:c.instructions+=4;goto B49ca54;
case 0x49ca58:c.instructions+=3;goto B49ca58;
case 0x49ca59:c.instructions+=2;goto B49ca59;
case 0x49ca5a:c.instructions+=1;goto B49ca5a;
case 0x49ca5f:goto L49ca5f;
case 0x49ca62:c.instructions+=1;goto B49ca62;
case 0x49ca70:goto L49ca70;
case 0x49ca72:c.instructions+=12;goto B49ca72;
case 0x49ca77:c.instructions+=11;goto B49ca77;
case 0x49ca7d:c.instructions+=10;goto B49ca7d;
case 0x49ca7e:c.instructions+=9;goto B49ca7e;
case 0x49ca85:c.instructions+=8;goto B49ca85;
case 0x49ca86:c.instructions+=7;goto B49ca86;
case 0x49ca87:c.instructions+=6;goto B49ca87;
case 0x49ca89:c.instructions+=5;goto B49ca89;
case 0x49ca8d:c.instructions+=4;goto B49ca8d;
case 0x49ca93:c.instructions+=3;goto B49ca93;
case 0x49ca96:c.instructions+=2;goto B49ca96;
case 0x49ca9e:c.instructions+=1;goto B49ca9e;
case 0x49caa3:goto L49caa3;
case 0x49caa5:c.instructions+=2;goto B49caa5;
case 0x49caad:c.instructions+=1;goto B49caad;
case 0x49cab2:goto L49cab2;
case 0x49cab6:c.instructions+=4;goto B49cab6;
case 0x49cab7:c.instructions+=3;goto B49cab7;
case 0x49cabe:c.instructions+=2;goto B49cabe;
case 0x49cac1:c.instructions+=1;goto B49cac1;
case 0x49cad0:goto L49cad0;
case 0x49cad1:c.instructions+=5;goto B49cad1;
case 0x49cad2:c.instructions+=4;goto B49cad2;
case 0x49cad6:c.instructions+=3;goto B49cad6;
case 0x49cad7:c.instructions+=2;goto B49cad7;
case 0x49cad9:c.instructions+=1;goto B49cad9;
case 0x49cade:goto L49cade;
case 0x49cae1:c.instructions+=29;goto B49cae1;
case 0x49cae4:c.instructions+=28;goto B49cae4;
case 0x49cae7:c.instructions+=27;goto B49cae7;
case 0x49caea:c.instructions+=26;goto B49caea;
case 0x49caed:c.instructions+=25;goto B49caed;
case 0x49caf0:c.instructions+=24;goto B49caf0;
case 0x49caf3:c.instructions+=23;goto B49caf3;
case 0x49caf6:c.instructions+=22;goto B49caf6;
case 0x49caf9:c.instructions+=21;goto B49caf9;
case 0x49cafc:c.instructions+=20;goto B49cafc;
case 0x49caff:c.instructions+=19;goto B49caff;
case 0x49cb02:c.instructions+=18;goto B49cb02;
case 0x49cb05:c.instructions+=17;goto B49cb05;
case 0x49cb08:c.instructions+=16;goto B49cb08;
case 0x49cb0b:c.instructions+=15;goto B49cb0b;
case 0x49cb0e:c.instructions+=14;goto B49cb0e;
case 0x49cb11:c.instructions+=13;goto B49cb11;
case 0x49cb14:c.instructions+=12;goto B49cb14;
case 0x49cb17:c.instructions+=11;goto B49cb17;
case 0x49cb1a:c.instructions+=10;goto B49cb1a;
case 0x49cb1d:c.instructions+=9;goto B49cb1d;
case 0x49cb20:c.instructions+=8;goto B49cb20;
case 0x49cb23:c.instructions+=7;goto B49cb23;
case 0x49cb26:c.instructions+=6;goto B49cb26;
case 0x49cb29:c.instructions+=5;goto B49cb29;
case 0x49cb2c:c.instructions+=4;goto B49cb2c;
case 0x49cb2d:c.instructions+=3;goto B49cb2d;
case 0x49cb2f:c.instructions+=2;goto B49cb2f;
case 0x49cb30:c.instructions+=1;goto B49cb30;
case 0x49cb40:goto L49cb40;
case 0x49cb44:c.instructions+=5;goto B49cb44;
case 0x49cb48:c.instructions+=4;goto B49cb48;
case 0x49cb4a:c.instructions+=3;goto B49cb4a;
case 0x49cb4b:c.instructions+=2;goto B49cb4b;
case 0x49cb4c:c.instructions+=1;goto B49cb4c;
case 0x49cb51:goto L49cb51;
case 0x49cb54:c.instructions+=1;goto B49cb54;
case 0x49cb60:goto L49cb60;
case 0x49cb61:c.instructions+=2;goto B49cb61;
case 0x49cb63:c.instructions+=1;goto B49cb63;
case 0x49cb68:goto L49cb68;
case 0x49cb6d:c.instructions+=1;goto B49cb6d;
case 0x49cb6f:goto L49cb6f;
case 0x49cb70:c.instructions+=1;goto B49cb70;
case 0x49cb75:goto L49cb75;
case 0x49cb78:goto L49cb78;
case 0x49cb7a:c.instructions+=2;goto B49cb7a;
case 0x49cb7b:c.instructions+=1;goto B49cb7b;
case 0x49cb80:goto L49cb80;
case 0x49cb86:c.instructions+=1;goto B49cb86;
case 0x49cb90:goto L49cb90;
case 0x49cb98:c.instructions+=1;goto B49cb98;
case 0x49cb9a:goto L49cb9a;
case 0x49cb9d:c.instructions+=4;goto B49cb9d;
case 0x49cb9f:c.instructions+=3;goto B49cb9f;
case 0x49cba4:c.instructions+=2;goto B49cba4;
case 0x49cba5:c.instructions+=1;goto B49cba5;
case 0x49cbaa:goto L49cbaa;
case 0x49cbad:goto L49cbad;
case 0x49cbb0:goto L49cbb0;
case 0x49cbb4:c.instructions+=12;goto B49cbb4;
case 0x49cbb8:c.instructions+=11;goto B49cbb8;
case 0x49cbb9:c.instructions+=10;goto B49cbb9;
case 0x49cbba:c.instructions+=9;goto B49cbba;
case 0x49cbbe:c.instructions+=8;goto B49cbbe;
case 0x49cbc0:c.instructions+=7;goto B49cbc0;
case 0x49cbc4:c.instructions+=6;goto B49cbc4;
case 0x49cbc5:c.instructions+=5;goto B49cbc5;
case 0x49cbc6:c.instructions+=4;goto B49cbc6;
case 0x49cbc7:c.instructions+=3;goto B49cbc7;
case 0x49cbc8:c.instructions+=2;goto B49cbc8;
case 0x49cbca:c.instructions+=1;goto B49cbca;
case 0x49cbcf:goto L49cbcf;
case 0x49cbd5:c.instructions+=1;goto B49cbd5;
case 0x49cbd7:goto L49cbd7;
case 0x49cbdd:c.instructions+=1;goto B49cbdd;
case 0x49cbdf:goto L49cbdf;
case 0x49cbe9:c.instructions+=1;goto B49cbe9;
case 0x49cbeb:goto L49cbeb;
case 0x49cbee:c.instructions+=4;goto B49cbee;
case 0x49cbf0:c.instructions+=3;goto B49cbf0;
case 0x49cbf5:c.instructions+=2;goto B49cbf5;
case 0x49cbf6:c.instructions+=1;goto B49cbf6;
case 0x49cbfb:goto L49cbfb;
case 0x49cbfe:c.instructions+=3;goto B49cbfe;
case 0x49cbff:c.instructions+=2;goto B49cbff;
case 0x49cc00:c.instructions+=1;goto B49cc00;
case 0x49cc03:goto L49cc03;
case 0x49cc06:c.instructions+=4;goto B49cc06;
case 0x49cc0b:c.instructions+=3;goto B49cc0b;
case 0x49cc10:c.instructions+=2;goto B49cc10;
case 0x49cc11:c.instructions+=1;goto B49cc11;
case 0x49cc16:goto L49cc16;
case 0x49cc19:c.instructions+=2;goto B49cc19;
case 0x49cc1b:c.instructions+=1;goto B49cc1b;
case 0x49cc1d:goto L49cc1d;
case 0x49cc20:c.instructions+=6;goto B49cc20;
case 0x49cc22:c.instructions+=5;goto B49cc22;
case 0x49cc27:c.instructions+=4;goto B49cc27;
case 0x49cc2c:c.instructions+=3;goto B49cc2c;
case 0x49cc2d:c.instructions+=2;goto B49cc2d;
case 0x49cc37:c.instructions+=1;goto B49cc37;
case 0x49cc3c:goto L49cc3c;
case 0x49cc3f:goto L49cc3f;
case 0x49cc40:c.instructions+=2;goto B49cc40;
case 0x49cc41:c.instructions+=1;goto B49cc41;
case 0x49cc50:goto L49cc50;
case 0x49cc54:c.instructions+=2;goto B49cc54;
case 0x49cc56:c.instructions+=1;goto B49cc56;
case 0x49cc58:goto L49cc58;
case 0x49cc5b:c.instructions+=1;goto B49cc5b;
case 0x49cc5d:goto L49cc5d;
case 0x49cc61:c.instructions+=1;goto B49cc61;
case 0x49cc63:goto L49cc63;
case 0x49cc64:c.instructions+=1;goto B49cc64;
case 0x49cc69:goto L49cc69;
case 0x49cc6d:c.instructions+=3;goto B49cc6d;
case 0x49cc70:c.instructions+=2;goto B49cc70;
case 0x49cc72:c.instructions+=1;goto B49cc72;
case 0x49cc74:goto L49cc74;
case 0x49cc77:goto L49cc77;
case 0x49cc78:c.instructions+=1;goto B49cc78;
case 0x49cc7d:goto L49cc7d;
case 0x49cc80:c.instructions+=1;goto B49cc80;
case 0x49cc83:goto L49cc83;
case 0x49cc87:c.instructions+=2;goto B49cc87;
case 0x49cc89:c.instructions+=1;goto B49cc89;
case 0x49cc8b:goto L49cc8b;
case 0x49cc8e:goto L49cc8e;
case 0x49cca0:goto L49cca0;
case 0x49ccb0:goto L49ccb0;
case 0x49ccb2:c.instructions+=13;goto B49ccb2;
case 0x49ccb7:c.instructions+=12;goto B49ccb7;
case 0x49ccbd:c.instructions+=11;goto B49ccbd;
case 0x49ccbe:c.instructions+=10;goto B49ccbe;
case 0x49ccc5:c.instructions+=9;goto B49ccc5;
case 0x49ccc8:c.instructions+=8;goto B49ccc8;
case 0x49cccc:c.instructions+=7;goto B49cccc;
case 0x49cccd:c.instructions+=6;goto B49cccd;
case 0x49ccce:c.instructions+=5;goto B49ccce;
case 0x49cccf:c.instructions+=4;goto B49cccf;
case 0x49ccd1:c.instructions+=3;goto B49ccd1;
case 0x49ccd2:c.instructions+=2;goto B49ccd2;
case 0x49ccd6:c.instructions+=1;goto B49ccd6;
case 0x49ccdb:goto L49ccdb;
case 0x49ccde:c.instructions+=5;goto B49ccde;
case 0x49cce0:c.instructions+=4;goto B49cce0;
case 0x49cce2:c.instructions+=3;goto B49cce2;
case 0x49cce6:c.instructions+=2;goto B49cce6;
case 0x49ccec:c.instructions+=1;goto B49ccec;
case 0x49ccf1:goto L49ccf1;
case 0x49ccf7:c.instructions+=9;goto B49ccf7;
case 0x49cd01:c.instructions+=8;goto B49cd01;
case 0x49cd07:c.instructions+=7;goto B49cd07;
case 0x49cd0d:c.instructions+=6;goto B49cd0d;
case 0x49cd12:c.instructions+=5;goto B49cd12;
case 0x49cd14:c.instructions+=4;goto B49cd14;
case 0x49cd19:c.instructions+=3;goto B49cd19;
case 0x49cd1f:c.instructions+=2;goto B49cd1f;
case 0x49cd25:c.instructions+=1;goto B49cd25;
case 0x49cd2a:goto L49cd2a;
case 0x49cd2f:c.instructions+=1;goto B49cd2f;
case 0x49cd34:goto L49cd34;
case 0x49cd38:c.instructions+=1;goto B49cd38;
case 0x49cd3d:goto L49cd3d;
case 0x49cd41:c.instructions+=1;goto B49cd41;
case 0x49cd46:goto L49cd46;
case 0x49cd4a:c.instructions+=1;goto B49cd4a;
case 0x49cd4f:goto L49cd4f;
case 0x49cd53:c.instructions+=1;goto B49cd53;
case 0x49cd58:goto L49cd58;
case 0x49cd5c:c.instructions+=1;goto B49cd5c;
case 0x49cd61:goto L49cd61;
case 0x49cd65:c.instructions+=6;goto B49cd65;
case 0x49cd66:c.instructions+=5;goto B49cd66;
case 0x49cd68:c.instructions+=4;goto B49cd68;
case 0x49cd6c:c.instructions+=3;goto B49cd6c;
case 0x49cd74:c.instructions+=2;goto B49cd74;
case 0x49cd7c:c.instructions+=1;goto B49cd7c;
case 0x49cd81:goto L49cd81;
case 0x49cd87:c.instructions+=6;goto B49cd87;
case 0x49cd8d:c.instructions+=5;goto B49cd8d;
case 0x49cd90:c.instructions+=4;goto B49cd90;
case 0x49cd93:c.instructions+=3;goto B49cd93;
case 0x49cd94:c.instructions+=2;goto B49cd94;
case 0x49cd95:c.instructions+=1;goto B49cd95;
case 0x49cd9a:goto L49cd9a;
case 0x49cd9e:c.instructions+=7;goto B49cd9e;
case 0x49cd9f:c.instructions+=6;goto B49cd9f;
case 0x49cda1:c.instructions+=5;goto B49cda1;
case 0x49cda2:c.instructions+=4;goto B49cda2;
case 0x49cda3:c.instructions+=3;goto B49cda3;
case 0x49cdaa:c.instructions+=2;goto B49cdaa;
case 0x49cdad:c.instructions+=1;goto B49cdad;
case 0x49cdb0:goto L49cdb0;
case 0x49cdb3:c.instructions+=5;goto B49cdb3;
case 0x49cdb4:c.instructions+=4;goto B49cdb4;
case 0x49cdb8:c.instructions+=3;goto B49cdb8;
case 0x49cdba:c.instructions+=2;goto B49cdba;
case 0x49cdbd:c.instructions+=1;goto B49cdbd;
case 0x49cdc0:goto L49cdc0;
case 0x49cdc2:c.instructions+=3;goto B49cdc2;
case 0x49cdc3:c.instructions+=2;goto B49cdc3;
case 0x49cdc5:c.instructions+=1;goto B49cdc5;
case 0x49cdc7:goto L49cdc7;
case 0x49cdc9:c.instructions+=2;goto B49cdc9;
case 0x49cdcd:c.instructions+=1;goto B49cdcd;
case 0x49cdcf:goto L49cdcf;
case 0x49cdd4:c.instructions+=8;goto B49cdd4;
case 0x49cdda:c.instructions+=7;goto B49cdda;
case 0x49cde0:c.instructions+=6;goto B49cde0;
case 0x49cde4:c.instructions+=5;goto B49cde4;
case 0x49cdea:c.instructions+=4;goto B49cdea;
case 0x49cdee:c.instructions+=3;goto B49cdee;
case 0x49cdf2:c.instructions+=2;goto B49cdf2;
case 0x49cdf7:c.instructions+=1;goto B49cdf7;
case 0x49cdfb:goto L49cdfb;
case 0x49ce00:c.instructions+=1;goto B49ce00;
case 0x49ce03:goto L49ce03;
case 0x49ce05:c.instructions+=3;goto B49ce05;
case 0x49ce06:c.instructions+=2;goto B49ce06;
case 0x49ce08:c.instructions+=1;goto B49ce08;
case 0x49ce0a:goto L49ce0a;
case 0x49ce0c:c.instructions+=3;goto B49ce0c;
case 0x49ce0f:c.instructions+=2;goto B49ce0f;
case 0x49ce14:c.instructions+=1;goto B49ce14;
case 0x49ce16:goto L49ce16;
case 0x49ce1a:c.instructions+=13;goto B49ce1a;
case 0x49ce1e:c.instructions+=12;goto B49ce1e;
case 0x49ce22:c.instructions+=11;goto B49ce22;
case 0x49ce24:c.instructions+=10;goto B49ce24;
case 0x49ce25:c.instructions+=9;goto B49ce25;
case 0x49ce29:c.instructions+=8;goto B49ce29;
case 0x49ce2a:c.instructions+=7;goto B49ce2a;
case 0x49ce2b:c.instructions+=6;goto B49ce2b;
case 0x49ce2c:c.instructions+=5;goto B49ce2c;
case 0x49ce2d:c.instructions+=4;goto B49ce2d;
case 0x49ce2f:c.instructions+=3;goto B49ce2f;
case 0x49ce34:c.instructions+=2;goto B49ce34;
case 0x49ce39:c.instructions+=1;goto B49ce39;
case 0x49ce3e:goto L49ce3e;
case 0x49ce41:goto L49ce41;
case 0x49ce42:c.instructions+=2;goto B49ce42;
case 0x49ce45:c.instructions+=1;goto B49ce45;
case 0x49ce50:goto L49ce50;
case 0x49ce52:c.instructions+=11;goto B49ce52;
case 0x49ce57:c.instructions+=10;goto B49ce57;
case 0x49ce5d:c.instructions+=9;goto B49ce5d;
case 0x49ce5e:c.instructions+=8;goto B49ce5e;
case 0x49ce65:c.instructions+=7;goto B49ce65;
case 0x49ce66:c.instructions+=6;goto B49ce66;
case 0x49ce67:c.instructions+=5;goto B49ce67;
case 0x49ce69:c.instructions+=4;goto B49ce69;
case 0x49ce6d:c.instructions+=3;goto B49ce6d;
case 0x49ce70:c.instructions+=2;goto B49ce70;
case 0x49ce78:c.instructions+=1;goto B49ce78;
case 0x49ce7d:goto L49ce7d;
case 0x49ce7f:c.instructions+=2;goto B49ce7f;
case 0x49ce87:c.instructions+=1;goto B49ce87;
case 0x49ce8c:goto L49ce8c;
case 0x49ce90:c.instructions+=4;goto B49ce90;
case 0x49ce91:c.instructions+=3;goto B49ce91;
case 0x49ce98:c.instructions+=2;goto B49ce98;
case 0x49ce9b:c.instructions+=1;goto B49ce9b;
case 0x49cea0:goto L49cea0;
case 0x49cea6:c.instructions+=1;goto B49cea6;
case 0x49ceab:goto L49ceab;
case 0x49cead:c.instructions+=1;goto B49cead;
case 0x49ceb2:goto L49ceb2;
case 0x49ceb4:c.instructions+=2;goto B49ceb4;
case 0x49ceb9:c.instructions+=1;goto B49ceb9;
case 0x49cebb:goto L49cebb;
case 0x49cec0:c.instructions+=6;goto B49cec0;
case 0x49cec5:c.instructions+=5;goto B49cec5;
case 0x49cec9:c.instructions+=4;goto B49cec9;
case 0x49ceca:c.instructions+=3;goto B49ceca;
case 0x49cecf:c.instructions+=2;goto B49cecf;
case 0x49ced0:c.instructions+=1;goto B49ced0;
case 0x49ced5:goto L49ced5;
case 0x49ced8:c.instructions+=2;goto B49ced8;
case 0x49ced9:c.instructions+=1;goto B49ced9;
case 0x49cede:goto L49cede;
case 0x49cee1:goto L49cee1;
case 0x49cee6:c.instructions+=6;goto B49cee6;
case 0x49ceeb:c.instructions+=5;goto B49ceeb;
case 0x49ceed:c.instructions+=4;goto B49ceed;
case 0x49cef1:c.instructions+=3;goto B49cef1;
case 0x49cef6:c.instructions+=2;goto B49cef6;
case 0x49cef7:c.instructions+=1;goto B49cef7;
case 0x49cefc:goto L49cefc;
case 0x49cf02:c.instructions+=1;goto B49cf02;
case 0x49cf10:goto L49cf10;
case 0x49cf14:c.instructions+=10;goto B49cf14;
case 0x49cf17:c.instructions+=9;goto B49cf17;
case 0x49cf18:c.instructions+=8;goto B49cf18;
case 0x49cf19:c.instructions+=7;goto B49cf19;
case 0x49cf1a:c.instructions+=6;goto B49cf1a;
case 0x49cf1c:c.instructions+=5;goto B49cf1c;
case 0x49cf20:c.instructions+=4;goto B49cf20;
case 0x49cf22:c.instructions+=3;goto B49cf22;
case 0x49cf23:c.instructions+=2;goto B49cf23;
case 0x49cf26:c.instructions+=1;goto B49cf26;
case 0x49cf28:goto L49cf28;
case 0x49cf29:c.instructions+=1;goto B49cf29;
case 0x49cf2d:goto L49cf2d;
case 0x49cf32:c.instructions+=2;goto B49cf32;
case 0x49cf37:c.instructions+=1;goto B49cf37;
case 0x49cf40:goto L49cf40;
case 0x49cf41:c.instructions+=4;goto B49cf41;
case 0x49cf45:c.instructions+=3;goto B49cf45;
case 0x49cf4a:c.instructions+=2;goto B49cf4a;
case 0x49cf4b:c.instructions+=1;goto B49cf4b;
case 0x49cf50:goto L49cf50;
case 0x49cf53:c.instructions+=3;goto B49cf53;
case 0x49cf57:c.instructions+=2;goto B49cf57;
case 0x49cf58:c.instructions+=1;goto B49cf58;
case 0x49cf5d:goto L49cf5d;
case 0x49cf5e:c.instructions+=2;goto B49cf5e;
case 0x49cf5f:c.instructions+=1;goto B49cf5f;
case 0x49cf64:goto L49cf64;
case 0x49cf66:c.instructions+=2;goto B49cf66;
case 0x49cf67:c.instructions+=1;goto B49cf67;
case 0x49cf6c:goto L49cf6c;
case 0x49cf6f:c.instructions+=5;goto B49cf6f;
case 0x49cf72:c.instructions+=4;goto B49cf72;
case 0x49cf74:c.instructions+=3;goto B49cf74;
case 0x49cf75:c.instructions+=2;goto B49cf75;
case 0x49cf76:c.instructions+=1;goto B49cf76;
case 0x49cf7b:goto L49cf7b;
case 0x49cf7c:c.instructions+=4;goto B49cf7c;
case 0x49cf80:c.instructions+=3;goto B49cf80;
case 0x49cf85:c.instructions+=2;goto B49cf85;
case 0x49cf86:c.instructions+=1;goto B49cf86;
case 0x49cf8b:goto L49cf8b;
case 0x49cf8e:c.instructions+=3;goto B49cf8e;
case 0x49cf92:c.instructions+=2;goto B49cf92;
case 0x49cf93:c.instructions+=1;goto B49cf93;
case 0x49cf98:goto L49cf98;
case 0x49cf99:c.instructions+=2;goto B49cf99;
case 0x49cf9a:c.instructions+=1;goto B49cf9a;
case 0x49cf9f:goto L49cf9f;
case 0x49cfa2:c.instructions+=2;goto B49cfa2;
case 0x49cfa3:c.instructions+=1;goto B49cfa3;
case 0x49cfa8:goto L49cfa8;
case 0x49cfab:c.instructions+=3;goto B49cfab;
case 0x49cfac:c.instructions+=2;goto B49cfac;
case 0x49cfad:c.instructions+=1;goto B49cfad;
case 0x49cfaf:goto L49cfaf;
case 0x49cfb3:c.instructions+=2;goto B49cfb3;
case 0x49cfb6:c.instructions+=1;goto B49cfb6;
case 0x49cfbc:goto L49cfbc;
case 0x49cfbe:c.instructions+=5;goto B49cfbe;
case 0x49cfc1:c.instructions+=4;goto B49cfc1;
case 0x49cfc5:c.instructions+=3;goto B49cfc5;
case 0x49cfca:c.instructions+=2;goto B49cfca;
case 0x49cfcb:c.instructions+=1;goto B49cfcb;
case 0x49cfd0:goto L49cfd0;
case 0x49cfd4:c.instructions+=2;goto B49cfd4;
case 0x49cfd5:c.instructions+=1;goto B49cfd5;
case 0x49cfda:goto L49cfda;
case 0x49cfdd:c.instructions+=4;goto B49cfdd;
case 0x49cfde:c.instructions+=3;goto B49cfde;
case 0x49cfdf:c.instructions+=2;goto B49cfdf;
case 0x49cfe2:c.instructions+=1;goto B49cfe2;
case 0x49cfe7:goto L49cfe7;
case 0x49cfea:c.instructions+=5;goto B49cfea;
case 0x49cfec:c.instructions+=4;goto B49cfec;
case 0x49cfef:c.instructions+=3;goto B49cfef;
case 0x49cff0:c.instructions+=2;goto B49cff0;
case 0x49cff1:c.instructions+=1;goto B49cff1;
case 0x49cff6:goto L49cff6;
case 0x49cff8:c.instructions+=3;goto B49cff8;
case 0x49cffc:c.instructions+=2;goto B49cffc;
case 0x49cffe:c.instructions+=1;goto B49cffe;
default:missing_instruction(c.pc);}
B49c000:L49c000:{c.instructions+=6;NFSU2_TR(0x49c000);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c001:{NFSU2_TR(0x49c001);
__builtin_memmove((R+24),(R+4),4);
}
B49c003:{NFSU2_TR(0x49c003);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c006:{NFSU2_TR(0x49c006);
u8 U[4];
w4(U+0,u32(0x2522a4e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c00b:{NFSU2_TR(0x49c00b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c00c:{NFSU2_TR(0x49c00c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c011ull));
TAIL_STATIC(0x50c900u,50c);
}
B49c011:L49c011:{c.instructions+=9;NFSU2_TR(0x49c011);
__builtin_memmove((R+4),gp(0x870cec),4);
}
B49c017:{NFSU2_TR(0x49c017);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49c01a:{NFSU2_TR(0x49c01a);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B49c01c:{NFSU2_TR(0x49c01c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49c01e:{NFSU2_TR(0x49c01e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff3942ull))));
}
B49c024:{NFSU2_TR(0x49c024);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xccfaull))));
}
B49c02a:{NFSU2_TR(0x49c02a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c02b:{NFSU2_TR(0x49c02b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c02c:{NFSU2_TR(0x49c02c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c031ull));
TAIL_STATIC(0x50c900u,50c);
}
B49c031:L49c031:{c.instructions+=3;NFSU2_TR(0x49c031);
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
B49c034:{NFSU2_TR(0x49c034);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c035:{NFSU2_TR(0x49c035);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c040:L49c040:{c.instructions+=5;NFSU2_TR(0x49c040);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c044:{NFSU2_TR(0x49c044);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c049:{NFSU2_TR(0x49c049);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c04a:{NFSU2_TR(0x49c04a);
__builtin_memmove((R+24),(R+4),4);
}
B49c04c:{NFSU2_TR(0x49c04c);
if(r1(R+518)){{goto L49c05c;}}
}
B49c04e:L49c04e:{c.instructions+=2;NFSU2_TR(0x49c04e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c053:{NFSU2_TR(0x49c053);
if(r1(R+518)){{goto L49c05c;}}
}
B49c055:L49c055:{c.instructions+=2;NFSU2_TR(0x49c055);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c05a:{NFSU2_TR(0x49c05a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c085;}}
}
B49c05c:L49c05c:{c.instructions+=4;NFSU2_TR(0x49c05c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49c05e:{NFSU2_TR(0x49c05e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c05f:{NFSU2_TR(0x49c05f);
__builtin_memmove((R+4),(R+24),4);
}
B49c061:{NFSU2_TR(0x49c061);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c064ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c064:L49c064:{c.instructions+=3;NFSU2_TR(0x49c064);
__builtin_memmove((R+0),gp(0x8764f4),4);
}
B49c069:{NFSU2_TR(0x49c069);
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
B49c06b:{NFSU2_TR(0x49c06b);
if(r1(R+518)){{goto L49c085;}}
}
B49c06d:L49c06d:{c.instructions+=5;NFSU2_TR(0x49c06d);
__builtin_memmove((R+4),gp(0x870cdc),4);
}
B49c073:{NFSU2_TR(0x49c073);
w4(R+0,u32(0x1ull));
}
B49c078:{NFSU2_TR(0x49c078);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c07a:{NFSU2_TR(0x49c07a);
__builtin_memmove(gp(0x870cdc),(R+4),4);
}
B49c080:{NFSU2_TR(0x49c080);
__builtin_memmove(gp(0x8709d1),(R+0),1);
}
B49c085:L49c085:{c.instructions+=3;NFSU2_TR(0x49c085);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49c087:{NFSU2_TR(0x49c087);
__builtin_memmove((R+4),(R+24),4);
}
B49c089:{NFSU2_TR(0x49c089);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c08cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c08c:L49c08c:{c.instructions+=2;NFSU2_TR(0x49c08c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c08d:{NFSU2_TR(0x49c08d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c090:L49c090:{c.instructions+=6;NFSU2_TR(0x49c090);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c091:{NFSU2_TR(0x49c091);
__builtin_memmove((R+24),(R+4),4);
}
B49c093:{NFSU2_TR(0x49c093);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c096:{NFSU2_TR(0x49c096);
u8 U[4];
w4(U+0,u32(0x822e4e9bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c09b:{NFSU2_TR(0x49c09b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c09c:{NFSU2_TR(0x49c09c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c0a1ull));
TAIL_STATIC(0x50c900u,50c);
}
B49c0a1:L49c0a1:{c.instructions+=9;NFSU2_TR(0x49c0a1);
__builtin_memmove((R+4),gp(0x870cdc),4);
}
B49c0a7:{NFSU2_TR(0x49c0a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49c0aa:{NFSU2_TR(0x49c0aa);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B49c0ac:{NFSU2_TR(0x49c0ac);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49c0ae:{NFSU2_TR(0x49c0ae);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff3942ull))));
}
B49c0b4:{NFSU2_TR(0x49c0b4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xccfaull))));
}
B49c0ba:{NFSU2_TR(0x49c0ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c0bb:{NFSU2_TR(0x49c0bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c0bc:{NFSU2_TR(0x49c0bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c0c1ull));
TAIL_STATIC(0x50c900u,50c);
}
B49c0c1:L49c0c1:{c.instructions+=3;NFSU2_TR(0x49c0c1);
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
B49c0c4:{NFSU2_TR(0x49c0c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c0c5:{NFSU2_TR(0x49c0c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c0d0:L49c0d0:{c.instructions+=5;NFSU2_TR(0x49c0d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c0d4:{NFSU2_TR(0x49c0d4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c0d9:{NFSU2_TR(0x49c0d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c0da:{NFSU2_TR(0x49c0da);
__builtin_memmove((R+24),(R+4),4);
}
B49c0dc:{NFSU2_TR(0x49c0dc);
if(r1(R+518)){{goto L49c0ec;}}
}
B49c0de:L49c0de:{c.instructions+=2;NFSU2_TR(0x49c0de);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c0e3:{NFSU2_TR(0x49c0e3);
if(r1(R+518)){{goto L49c0ec;}}
}
B49c0e5:L49c0e5:{c.instructions+=2;NFSU2_TR(0x49c0e5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c0ea:{NFSU2_TR(0x49c0ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c104;}}
}
B49c0ec:L49c0ec:{c.instructions+=4;NFSU2_TR(0x49c0ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49c0ee:{NFSU2_TR(0x49c0ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c0ef:{NFSU2_TR(0x49c0ef);
__builtin_memmove((R+4),(R+24),4);
}
B49c0f1:{NFSU2_TR(0x49c0f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c0f4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c0f4:L49c0f4:{c.instructions+=3;NFSU2_TR(0x49c0f4);
__builtin_memmove((R+0),gp(0x8764f0),4);
}
B49c0f9:{NFSU2_TR(0x49c0f9);
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
B49c0fb:{NFSU2_TR(0x49c0fb);
if(r1(R+518)){{goto L49c104;}}
}
B49c0fd:L49c0fd:{c.instructions+=1;NFSU2_TR(0x49c0fd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x870cd8,u32(u32(m4(0x870cd8))^u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x870cd8))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x870cd8))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x870cd8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c104:L49c104:{c.instructions+=3;NFSU2_TR(0x49c104);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49c106:{NFSU2_TR(0x49c106);
__builtin_memmove((R+4),(R+24),4);
}
B49c108:{NFSU2_TR(0x49c108);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c10bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c10b:L49c10b:{c.instructions+=2;NFSU2_TR(0x49c10b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c10c:{NFSU2_TR(0x49c10c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c110:L49c110:{c.instructions+=6;NFSU2_TR(0x49c110);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c111:{NFSU2_TR(0x49c111);
__builtin_memmove((R+24),(R+4),4);
}
B49c113:{NFSU2_TR(0x49c113);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c116:{NFSU2_TR(0x49c116);
u8 U[4];
w4(U+0,u32(0x95b8f38dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c11b:{NFSU2_TR(0x49c11b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c11c:{NFSU2_TR(0x49c11c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c121ull));
TAIL_STATIC(0x50c900u,50c);
}
B49c121:L49c121:{c.instructions+=4;NFSU2_TR(0x49c121);
__builtin_memmove((R+0),gp(0x870cd8),4);
}
B49c126:{NFSU2_TR(0x49c126);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49c129:{NFSU2_TR(0x49c129);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49c12b:{NFSU2_TR(0x49c12b);
if(r1(R+518)){{goto L49c140;}}
}
B49c12d:L49c12d:{c.instructions+=4;NFSU2_TR(0x49c12d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49c130:{NFSU2_TR(0x49c130);
u8 U[4];
w4(U+0,u32(0x63cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c135:{NFSU2_TR(0x49c135);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c136:{NFSU2_TR(0x49c136);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c13bull));
TAIL_STATIC(0x50c900u,50c);
}
B49c13b:L49c13b:{c.instructions+=3;NFSU2_TR(0x49c13b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c13e:{NFSU2_TR(0x49c13e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c13f:{NFSU2_TR(0x49c13f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c140:L49c140:{c.instructions+=4;NFSU2_TR(0x49c140);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49c143:{NFSU2_TR(0x49c143);
u8 U[4];
w4(U+0,u32(0xccfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c148:{NFSU2_TR(0x49c148);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c149:{NFSU2_TR(0x49c149);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c14eull));
TAIL_STATIC(0x50c900u,50c);
}
B49c14e:L49c14e:{c.instructions+=3;NFSU2_TR(0x49c14e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c151:{NFSU2_TR(0x49c151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c152:{NFSU2_TR(0x49c152);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c160:L49c160:{c.instructions+=8;NFSU2_TR(0x49c160);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c161:{NFSU2_TR(0x49c161);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c162:{NFSU2_TR(0x49c162);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49c166:{NFSU2_TR(0x49c166);
__builtin_memmove((R+24),(R+4),4);
}
B49c168:{NFSU2_TR(0x49c168);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c16b:{NFSU2_TR(0x49c16b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49c16e:{NFSU2_TR(0x49c16e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c16f:{NFSU2_TR(0x49c16f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c172ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c172:L49c172:{c.instructions+=2;NFSU2_TR(0x49c172);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49c174:{NFSU2_TR(0x49c174);
if(r1(R+518)){{goto L49c19d;}}
}
B49c176:L49c176:{c.instructions+=4;NFSU2_TR(0x49c176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49c178:{NFSU2_TR(0x49c178);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c179:{NFSU2_TR(0x49c179);
__builtin_memmove((R+4),(R+24),4);
}
B49c17b:{NFSU2_TR(0x49c17b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c17eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c17e:L49c17e:{c.instructions+=3;NFSU2_TR(0x49c17e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49c180:{NFSU2_TR(0x49c180);
__builtin_memmove((R+4),(R+24),4);
}
B49c182:{NFSU2_TR(0x49c182);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c185ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c185:L49c185:{c.instructions+=1;NFSU2_TR(0x49c185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c18aull));
TAIL_STATIC(0x75bed4u,75b);
}
B49c18a:L49c18a:{c.instructions+=5;NFSU2_TR(0x49c18a);
__builtin_memmove(gp(0x870d08),(R+0),4);
}
B49c18f:{NFSU2_TR(0x49c18f);
s1(0x8709d1,u8(0x1ull));
}
B49c196:{NFSU2_TR(0x49c196);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49c198:{NFSU2_TR(0x49c198);
__builtin_memmove((R+4),(R+24),4);
}
B49c19a:{NFSU2_TR(0x49c19a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c19dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c19d:L49c19d:{c.instructions+=3;NFSU2_TR(0x49c19d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c19e:{NFSU2_TR(0x49c19e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c19f:{NFSU2_TR(0x49c19f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c1b0:L49c1b0:{c.instructions+=4;NFSU2_TR(0x49c1b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c1b3:{NFSU2_TR(0x49c1b3);
u8 U[4];
w4(U+0,u32(0x4cd775acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c1b8:{NFSU2_TR(0x49c1b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c1b9:{NFSU2_TR(0x49c1b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c1beull));
TAIL_STATIC(0x50c900u,50c);
}
B49c1be:L49c1be:{c.instructions+=2;NFSU2_TR(0x49c1be);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c1c1:{NFSU2_TR(0x49c1c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c1d0:L49c1d0:{c.instructions+=11;NFSU2_TR(0x49c1d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c1d1:{NFSU2_TR(0x49c1d1);
{u32 ea_=u32(u32(8850696u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B49c1d7:{NFSU2_TR(0x49c1d7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B49c1da:{NFSU2_TR(0x49c1da);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49c1de:{NFSU2_TR(0x49c1de);
{u32 ea_=u32(u32(8873248u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B49c1e4:{NFSU2_TR(0x49c1e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49c1e8:{NFSU2_TR(0x49c1e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49c1ef:{NFSU2_TR(0x49c1ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49c1f6:{NFSU2_TR(0x49c1f6);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49c1f9:{NFSU2_TR(0x49c1f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c1fa:{NFSU2_TR(0x49c1fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c1ffull));
TAIL_STATIC(0x4ff550u,4ff);
}
B49c1ff:L49c1ff:{c.instructions+=2;NFSU2_TR(0x49c1ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49c200:{NFSU2_TR(0x49c200);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c210:L49c210:{c.instructions+=5;NFSU2_TR(0x49c210);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c214:{NFSU2_TR(0x49c214);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c219:{NFSU2_TR(0x49c219);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c21a:{NFSU2_TR(0x49c21a);
__builtin_memmove((R+24),(R+4),4);
}
B49c21c:{NFSU2_TR(0x49c21c);
if(r1(R+518)){{goto L49c22c;}}
}
B49c21e:L49c21e:{c.instructions+=2;NFSU2_TR(0x49c21e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c223:{NFSU2_TR(0x49c223);
if(r1(R+518)){{goto L49c22c;}}
}
B49c225:L49c225:{c.instructions+=2;NFSU2_TR(0x49c225);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c22a:{NFSU2_TR(0x49c22a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c255;}}
}
B49c22c:L49c22c:{c.instructions+=4;NFSU2_TR(0x49c22c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49c22e:{NFSU2_TR(0x49c22e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c22f:{NFSU2_TR(0x49c22f);
__builtin_memmove((R+4),(R+24),4);
}
B49c231:{NFSU2_TR(0x49c231);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c234ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c234:L49c234:{c.instructions+=3;NFSU2_TR(0x49c234);
__builtin_memmove((R+0),gp(0x876508),4);
}
B49c239:{NFSU2_TR(0x49c239);
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
B49c23b:{NFSU2_TR(0x49c23b);
if(r1(R+518)){{goto L49c255;}}
}
B49c23d:L49c23d:{c.instructions+=5;NFSU2_TR(0x49c23d);
__builtin_memmove((R+4),gp(0x870cf0),4);
}
B49c243:{NFSU2_TR(0x49c243);
w4(R+0,u32(0x1ull));
}
B49c248:{NFSU2_TR(0x49c248);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c24a:{NFSU2_TR(0x49c24a);
__builtin_memmove(gp(0x870cf0),(R+4),4);
}
B49c250:{NFSU2_TR(0x49c250);
__builtin_memmove(gp(0x8709d1),(R+0),1);
}
B49c255:L49c255:{c.instructions+=3;NFSU2_TR(0x49c255);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49c257:{NFSU2_TR(0x49c257);
__builtin_memmove((R+4),(R+24),4);
}
B49c259:{NFSU2_TR(0x49c259);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c25cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c25c:L49c25c:{c.instructions+=2;NFSU2_TR(0x49c25c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c25d:{NFSU2_TR(0x49c25d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c260:L49c260:{c.instructions+=6;NFSU2_TR(0x49c260);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c261:{NFSU2_TR(0x49c261);
__builtin_memmove((R+24),(R+4),4);
}
B49c263:{NFSU2_TR(0x49c263);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c266:{NFSU2_TR(0x49c266);
u8 U[4];
w4(U+0,u32(0xa9c27dfdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c26b:{NFSU2_TR(0x49c26b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c26c:{NFSU2_TR(0x49c26c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c271ull));
TAIL_STATIC(0x50c900u,50c);
}
B49c271:L49c271:{c.instructions+=9;NFSU2_TR(0x49c271);
__builtin_memmove((R+4),gp(0x870cf0),4);
}
B49c277:{NFSU2_TR(0x49c277);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49c27a:{NFSU2_TR(0x49c27a);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B49c27c:{NFSU2_TR(0x49c27c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49c27e:{NFSU2_TR(0x49c27e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff3942ull))));
}
B49c284:{NFSU2_TR(0x49c284);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xccfaull))));
}
B49c28a:{NFSU2_TR(0x49c28a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c28b:{NFSU2_TR(0x49c28b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c28c:{NFSU2_TR(0x49c28c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c291ull));
TAIL_STATIC(0x50c900u,50c);
}
B49c291:L49c291:{c.instructions+=3;NFSU2_TR(0x49c291);
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
B49c294:{NFSU2_TR(0x49c294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c295:{NFSU2_TR(0x49c295);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c2a0:L49c2a0:{c.instructions+=5;NFSU2_TR(0x49c2a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c2a4:{NFSU2_TR(0x49c2a4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c2a9:{NFSU2_TR(0x49c2a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c2aa:{NFSU2_TR(0x49c2aa);
__builtin_memmove((R+24),(R+4),4);
}
B49c2ac:{NFSU2_TR(0x49c2ac);
if(r1(R+518)){{goto L49c2bc;}}
}
B49c2ae:L49c2ae:{c.instructions+=2;NFSU2_TR(0x49c2ae);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c2b3:{NFSU2_TR(0x49c2b3);
if(r1(R+518)){{goto L49c2bc;}}
}
B49c2b5:L49c2b5:{c.instructions+=2;NFSU2_TR(0x49c2b5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c2ba:{NFSU2_TR(0x49c2ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c2d4;}}
}
B49c2bc:L49c2bc:{c.instructions+=4;NFSU2_TR(0x49c2bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49c2be:{NFSU2_TR(0x49c2be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c2bf:{NFSU2_TR(0x49c2bf);
__builtin_memmove((R+4),(R+24),4);
}
B49c2c1:{NFSU2_TR(0x49c2c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c2c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c2c4:L49c2c4:{c.instructions+=3;NFSU2_TR(0x49c2c4);
__builtin_memmove((R+0),gp(0x87651c),4);
}
B49c2c9:{NFSU2_TR(0x49c2c9);
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
B49c2cb:{NFSU2_TR(0x49c2cb);
if(r1(R+518)){{goto L49c2d4;}}
}
B49c2cd:L49c2cd:{c.instructions+=1;NFSU2_TR(0x49c2cd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x870d04,u32(u32(m4(0x870d04))^u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x870d04))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x870d04))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x870d04))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c2d4:L49c2d4:{c.instructions+=3;NFSU2_TR(0x49c2d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49c2d6:{NFSU2_TR(0x49c2d6);
__builtin_memmove((R+4),(R+24),4);
}
B49c2d8:{NFSU2_TR(0x49c2d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c2dbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c2db:L49c2db:{c.instructions+=2;NFSU2_TR(0x49c2db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c2dc:{NFSU2_TR(0x49c2dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c2e0:L49c2e0:{c.instructions+=6;NFSU2_TR(0x49c2e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c2e1:{NFSU2_TR(0x49c2e1);
__builtin_memmove((R+24),(R+4),4);
}
B49c2e3:{NFSU2_TR(0x49c2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c2e6:{NFSU2_TR(0x49c2e6);
u8 U[4];
w4(U+0,u32(0x11504d0eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c2eb:{NFSU2_TR(0x49c2eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c2ec:{NFSU2_TR(0x49c2ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c2f1ull));
TAIL_STATIC(0x50c900u,50c);
}
B49c2f1:L49c2f1:{c.instructions+=9;NFSU2_TR(0x49c2f1);
__builtin_memmove((R+4),gp(0x870d04),4);
}
B49c2f7:{NFSU2_TR(0x49c2f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49c2fa:{NFSU2_TR(0x49c2fa);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B49c2fc:{NFSU2_TR(0x49c2fc);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49c2fe:{NFSU2_TR(0x49c2fe);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff3942ull))));
}
B49c304:{NFSU2_TR(0x49c304);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xccfaull))));
}
B49c30a:{NFSU2_TR(0x49c30a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c30b:{NFSU2_TR(0x49c30b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c30c:{NFSU2_TR(0x49c30c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c311ull));
TAIL_STATIC(0x50c900u,50c);
}
B49c311:L49c311:{c.instructions+=3;NFSU2_TR(0x49c311);
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
B49c314:{NFSU2_TR(0x49c314);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c315:{NFSU2_TR(0x49c315);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c320:L49c320:{c.instructions+=5;NFSU2_TR(0x49c320);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c324:{NFSU2_TR(0x49c324);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c329:{NFSU2_TR(0x49c329);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c32a:{NFSU2_TR(0x49c32a);
__builtin_memmove((R+24),(R+4),4);
}
B49c32c:{NFSU2_TR(0x49c32c);
if(r1(R+518)){{goto L49c33c;}}
}
B49c32e:L49c32e:{c.instructions+=2;NFSU2_TR(0x49c32e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c333:{NFSU2_TR(0x49c333);
if(r1(R+518)){{goto L49c33c;}}
}
B49c335:L49c335:{c.instructions+=2;NFSU2_TR(0x49c335);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c33a:{NFSU2_TR(0x49c33a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c354;}}
}
B49c33c:L49c33c:{c.instructions+=4;NFSU2_TR(0x49c33c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49c33e:{NFSU2_TR(0x49c33e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c33f:{NFSU2_TR(0x49c33f);
__builtin_memmove((R+4),(R+24),4);
}
B49c341:{NFSU2_TR(0x49c341);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c344ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c344:L49c344:{c.instructions+=3;NFSU2_TR(0x49c344);
__builtin_memmove((R+0),gp(0x876524),4);
}
B49c349:{NFSU2_TR(0x49c349);
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
B49c34b:{NFSU2_TR(0x49c34b);
if(r1(R+518)){{goto L49c354;}}
}
B49c34d:L49c34d:{c.instructions+=1;NFSU2_TR(0x49c34d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x870d0c,u32(u32(m4(0x870d0c))^u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x870d0c))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x870d0c))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x870d0c))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c354:L49c354:{c.instructions+=3;NFSU2_TR(0x49c354);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49c356:{NFSU2_TR(0x49c356);
__builtin_memmove((R+4),(R+24),4);
}
B49c358:{NFSU2_TR(0x49c358);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c35bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c35b:L49c35b:{c.instructions+=2;NFSU2_TR(0x49c35b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c35c:{NFSU2_TR(0x49c35c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c360:L49c360:{c.instructions+=6;NFSU2_TR(0x49c360);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c361:{NFSU2_TR(0x49c361);
__builtin_memmove((R+24),(R+4),4);
}
B49c363:{NFSU2_TR(0x49c363);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c366:{NFSU2_TR(0x49c366);
u8 U[4];
w4(U+0,u32(0x4e57d355ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c36b:{NFSU2_TR(0x49c36b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c36c:{NFSU2_TR(0x49c36c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c371ull));
TAIL_STATIC(0x50c900u,50c);
}
B49c371:L49c371:{c.instructions+=9;NFSU2_TR(0x49c371);
__builtin_memmove((R+4),gp(0x870d0c),4);
}
B49c377:{NFSU2_TR(0x49c377);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49c37a:{NFSU2_TR(0x49c37a);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B49c37c:{NFSU2_TR(0x49c37c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49c37e:{NFSU2_TR(0x49c37e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff3942ull))));
}
B49c384:{NFSU2_TR(0x49c384);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xccfaull))));
}
B49c38a:{NFSU2_TR(0x49c38a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c38b:{NFSU2_TR(0x49c38b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c38c:{NFSU2_TR(0x49c38c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c391ull));
TAIL_STATIC(0x50c900u,50c);
}
B49c391:L49c391:{c.instructions+=3;NFSU2_TR(0x49c391);
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
B49c394:{NFSU2_TR(0x49c394);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c395:{NFSU2_TR(0x49c395);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c3a0:L49c3a0:{c.instructions+=5;NFSU2_TR(0x49c3a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c3a4:{NFSU2_TR(0x49c3a4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c3a9:{NFSU2_TR(0x49c3a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c3aa:{NFSU2_TR(0x49c3aa);
__builtin_memmove((R+24),(R+4),4);
}
B49c3ac:{NFSU2_TR(0x49c3ac);
if(r1(R+518)){{goto L49c3bc;}}
}
B49c3ae:L49c3ae:{c.instructions+=2;NFSU2_TR(0x49c3ae);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c3b3:{NFSU2_TR(0x49c3b3);
if(r1(R+518)){{goto L49c3bc;}}
}
B49c3b5:L49c3b5:{c.instructions+=2;NFSU2_TR(0x49c3b5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c3ba:{NFSU2_TR(0x49c3ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c3e5;}}
}
B49c3bc:L49c3bc:{c.instructions+=4;NFSU2_TR(0x49c3bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49c3be:{NFSU2_TR(0x49c3be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c3bf:{NFSU2_TR(0x49c3bf);
__builtin_memmove((R+4),(R+24),4);
}
B49c3c1:{NFSU2_TR(0x49c3c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c3c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c3c4:L49c3c4:{c.instructions+=3;NFSU2_TR(0x49c3c4);
__builtin_memmove((R+0),gp(0x876514),4);
}
B49c3c9:{NFSU2_TR(0x49c3c9);
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
B49c3cb:{NFSU2_TR(0x49c3cb);
if(r1(R+518)){{goto L49c3e5;}}
}
B49c3cd:L49c3cd:{c.instructions+=5;NFSU2_TR(0x49c3cd);
__builtin_memmove((R+4),gp(0x870cfc),4);
}
B49c3d3:{NFSU2_TR(0x49c3d3);
w4(R+0,u32(0x1ull));
}
B49c3d8:{NFSU2_TR(0x49c3d8);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c3da:{NFSU2_TR(0x49c3da);
__builtin_memmove(gp(0x870cfc),(R+4),4);
}
B49c3e0:{NFSU2_TR(0x49c3e0);
__builtin_memmove(gp(0x8709d1),(R+0),1);
}
B49c3e5:L49c3e5:{c.instructions+=3;NFSU2_TR(0x49c3e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49c3e7:{NFSU2_TR(0x49c3e7);
__builtin_memmove((R+4),(R+24),4);
}
B49c3e9:{NFSU2_TR(0x49c3e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c3ecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c3ec:L49c3ec:{c.instructions+=2;NFSU2_TR(0x49c3ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c3ed:{NFSU2_TR(0x49c3ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c3f0:L49c3f0:{c.instructions+=6;NFSU2_TR(0x49c3f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c3f1:{NFSU2_TR(0x49c3f1);
__builtin_memmove((R+24),(R+4),4);
}
B49c3f3:{NFSU2_TR(0x49c3f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c3f6:{NFSU2_TR(0x49c3f6);
u8 U[4];
w4(U+0,u32(0xd6f5f38cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c3fb:{NFSU2_TR(0x49c3fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c3fc:{NFSU2_TR(0x49c3fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c401ull));
TAIL_STATIC(0x50c900u,50c);
}
B49c401:L49c401:{c.instructions+=9;NFSU2_TR(0x49c401);
__builtin_memmove((R+4),gp(0x870cfc),4);
}
B49c407:{NFSU2_TR(0x49c407);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49c40a:{NFSU2_TR(0x49c40a);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B49c40c:{NFSU2_TR(0x49c40c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49c40e:{NFSU2_TR(0x49c40e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff3942ull))));
}
B49c414:{NFSU2_TR(0x49c414);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xccfaull))));
}
B49c41a:{NFSU2_TR(0x49c41a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c41b:{NFSU2_TR(0x49c41b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c41c:{NFSU2_TR(0x49c41c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c421ull));
TAIL_STATIC(0x50c900u,50c);
}
B49c421:L49c421:{c.instructions+=3;NFSU2_TR(0x49c421);
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
B49c424:{NFSU2_TR(0x49c424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c425:{NFSU2_TR(0x49c425);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c430:L49c430:{c.instructions+=5;NFSU2_TR(0x49c430);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c434:{NFSU2_TR(0x49c434);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c439:{NFSU2_TR(0x49c439);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c43a:{NFSU2_TR(0x49c43a);
__builtin_memmove((R+24),(R+4),4);
}
B49c43c:{NFSU2_TR(0x49c43c);
if(r1(R+518)){{goto L49c44c;}}
}
B49c43e:L49c43e:{c.instructions+=2;NFSU2_TR(0x49c43e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c443:{NFSU2_TR(0x49c443);
if(r1(R+518)){{goto L49c44c;}}
}
B49c445:L49c445:{c.instructions+=2;NFSU2_TR(0x49c445);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c44a:{NFSU2_TR(0x49c44a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c475;}}
}
B49c44c:L49c44c:{c.instructions+=4;NFSU2_TR(0x49c44c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49c44e:{NFSU2_TR(0x49c44e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c44f:{NFSU2_TR(0x49c44f);
__builtin_memmove((R+4),(R+24),4);
}
B49c451:{NFSU2_TR(0x49c451);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c454ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c454:L49c454:{c.instructions+=3;NFSU2_TR(0x49c454);
__builtin_memmove((R+0),gp(0x876518),4);
}
B49c459:{NFSU2_TR(0x49c459);
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
B49c45b:{NFSU2_TR(0x49c45b);
if(r1(R+518)){{goto L49c475;}}
}
B49c45d:L49c45d:{c.instructions+=5;NFSU2_TR(0x49c45d);
__builtin_memmove((R+4),gp(0x870d00),4);
}
B49c463:{NFSU2_TR(0x49c463);
w4(R+0,u32(0x1ull));
}
B49c468:{NFSU2_TR(0x49c468);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c46a:{NFSU2_TR(0x49c46a);
__builtin_memmove(gp(0x870d00),(R+4),4);
}
B49c470:{NFSU2_TR(0x49c470);
__builtin_memmove(gp(0x8709d1),(R+0),1);
}
B49c475:L49c475:{c.instructions+=3;NFSU2_TR(0x49c475);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49c477:{NFSU2_TR(0x49c477);
__builtin_memmove((R+4),(R+24),4);
}
B49c479:{NFSU2_TR(0x49c479);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c47cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c47c:L49c47c:{c.instructions+=2;NFSU2_TR(0x49c47c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c47d:{NFSU2_TR(0x49c47d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c480:L49c480:{c.instructions+=6;NFSU2_TR(0x49c480);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c481:{NFSU2_TR(0x49c481);
__builtin_memmove((R+24),(R+4),4);
}
B49c483:{NFSU2_TR(0x49c483);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c486:{NFSU2_TR(0x49c486);
u8 U[4];
w4(U+0,u32(0x571f6c00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c48b:{NFSU2_TR(0x49c48b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c48c:{NFSU2_TR(0x49c48c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c491ull));
TAIL_STATIC(0x50c900u,50c);
}
B49c491:L49c491:{c.instructions+=9;NFSU2_TR(0x49c491);
__builtin_memmove((R+4),gp(0x870d00),4);
}
B49c497:{NFSU2_TR(0x49c497);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49c49a:{NFSU2_TR(0x49c49a);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B49c49c:{NFSU2_TR(0x49c49c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49c49e:{NFSU2_TR(0x49c49e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff3942ull))));
}
B49c4a4:{NFSU2_TR(0x49c4a4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xccfaull))));
}
B49c4aa:{NFSU2_TR(0x49c4aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c4ab:{NFSU2_TR(0x49c4ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c4ac:{NFSU2_TR(0x49c4ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c4b1ull));
TAIL_STATIC(0x50c900u,50c);
}
B49c4b1:L49c4b1:{c.instructions+=3;NFSU2_TR(0x49c4b1);
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
B49c4b4:{NFSU2_TR(0x49c4b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c4b5:{NFSU2_TR(0x49c4b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c4c0:L49c4c0:{c.instructions+=3;NFSU2_TR(0x49c4c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c4c4:{NFSU2_TR(0x49c4c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49c4c9:{NFSU2_TR(0x49c4c9);
if(r1(R+518)){{goto L49c4d9;}}
}
B49c4cb:L49c4cb:{c.instructions+=2;NFSU2_TR(0x49c4cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49c4d0:{NFSU2_TR(0x49c4d0);
if(r1(R+518)){{goto L49c4d9;}}
}
B49c4d2:L49c4d2:{c.instructions+=2;NFSU2_TR(0x49c4d2);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c4d7:{NFSU2_TR(0x49c4d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c4e9;}}
}
B49c4d9:L49c4d9:{c.instructions+=3;NFSU2_TR(0x49c4d9);
__builtin_memmove((R+0),gp(0x876528),4);
}
B49c4de:{NFSU2_TR(0x49c4de);
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
B49c4e0:{NFSU2_TR(0x49c4e0);
if(r1(R+518)){{goto L49c4e9;}}
}
B49c4e2:L49c4e2:{c.instructions+=1;NFSU2_TR(0x49c4e2);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x870d10,u32(u32(m4(0x870d10))^u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x870d10))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x870d10))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x870d10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c4e9:L49c4e9:{c.instructions+=2;NFSU2_TR(0x49c4e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49c4eb:{NFSU2_TR(0x49c4eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c4eeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c4ee:L49c4ee:{c.instructions+=1;NFSU2_TR(0x49c4ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c500:L49c500:{c.instructions+=6;NFSU2_TR(0x49c500);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c501:{NFSU2_TR(0x49c501);
__builtin_memmove((R+24),(R+4),4);
}
B49c503:{NFSU2_TR(0x49c503);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c506:{NFSU2_TR(0x49c506);
u8 U[4];
w4(U+0,u32(0x4cddbebbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c50b:{NFSU2_TR(0x49c50b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c50c:{NFSU2_TR(0x49c50c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c511ull));
TAIL_STATIC(0x50c900u,50c);
}
B49c511:L49c511:{c.instructions+=9;NFSU2_TR(0x49c511);
__builtin_memmove((R+4),gp(0x870d10),4);
}
B49c517:{NFSU2_TR(0x49c517);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49c51a:{NFSU2_TR(0x49c51a);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B49c51c:{NFSU2_TR(0x49c51c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49c51e:{NFSU2_TR(0x49c51e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff3942ull))));
}
B49c524:{NFSU2_TR(0x49c524);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xccfaull))));
}
B49c52a:{NFSU2_TR(0x49c52a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c52b:{NFSU2_TR(0x49c52b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c52c:{NFSU2_TR(0x49c52c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c531ull));
TAIL_STATIC(0x50c900u,50c);
}
B49c531:L49c531:{c.instructions+=3;NFSU2_TR(0x49c531);
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
B49c534:{NFSU2_TR(0x49c534);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c535:{NFSU2_TR(0x49c535);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c540:L49c540:{c.instructions+=13;NFSU2_TR(0x49c540);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c544:{NFSU2_TR(0x49c544);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49c548:{NFSU2_TR(0x49c548);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c549:{NFSU2_TR(0x49c549);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c54a:{NFSU2_TR(0x49c54a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49c54e:{NFSU2_TR(0x49c54e);
__builtin_memmove((R+24),(R+4),4);
}
B49c550:{NFSU2_TR(0x49c550);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49c554:{NFSU2_TR(0x49c554);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c555:{NFSU2_TR(0x49c555);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c556:{NFSU2_TR(0x49c556);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c557:{NFSU2_TR(0x49c557);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c558:{NFSU2_TR(0x49c558);
__builtin_memmove((R+4),(R+24),4);
}
B49c55a:{NFSU2_TR(0x49c55a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c55full));
TAIL_STATIC(0x556020u,556);
}
B49c55f:L49c55f:{c.instructions+=2;NFSU2_TR(0x49c55f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49c565:{NFSU2_TR(0x49c565);
if(r1(R+518)){{goto L49c5b9;}}
}
B49c567:L49c567:{c.instructions+=2;NFSU2_TR(0x49c567);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c56d:{NFSU2_TR(0x49c56d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c5eb;}}
}
B49c56f:L49c56f:{c.instructions+=2;NFSU2_TR(0x49c56f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x911ab364ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B49c579:{NFSU2_TR(0x49c579);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c5eb;}}
}
B49c57b:L49c57b:{c.instructions+=3;NFSU2_TR(0x49c57b);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B49c580:{NFSU2_TR(0x49c580);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49c582:{NFSU2_TR(0x49c582);
if(r1(R+518)){{goto L49c5a1;}}
}
B49c584:L49c584:{c.instructions+=2;NFSU2_TR(0x49c584);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B49c587:{NFSU2_TR(0x49c587);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c5a1;}}
}
B49c589:L49c589:{c.instructions+=5;NFSU2_TR(0x49c589);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c58c:{NFSU2_TR(0x49c58c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c58e:{NFSU2_TR(0x49c58e);
u8 U[4];
w4(U+0,u32(0x78fa60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c593:{NFSU2_TR(0x49c593);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c594:{NFSU2_TR(0x49c594);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c599ull));
TAIL_STATIC(0x537980u,537);
}
B49c599:L49c599:{c.instructions+=4;NFSU2_TR(0x49c599);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c59c:{NFSU2_TR(0x49c59c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c59d:{NFSU2_TR(0x49c59d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c59e:{NFSU2_TR(0x49c59e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c5a1:L49c5a1:{c.instructions+=5;NFSU2_TR(0x49c5a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49c5a4:{NFSU2_TR(0x49c5a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c5a6:{NFSU2_TR(0x49c5a6);
u8 U[4];
w4(U+0,u32(0x78fa50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c5ab:{NFSU2_TR(0x49c5ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c5ac:{NFSU2_TR(0x49c5ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c5b1ull));
TAIL_STATIC(0x537980u,537);
}
B49c5b1:L49c5b1:{c.instructions+=4;NFSU2_TR(0x49c5b1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c5b4:{NFSU2_TR(0x49c5b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c5b5:{NFSU2_TR(0x49c5b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c5b6:{NFSU2_TR(0x49c5b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c5b9:L49c5b9:{c.instructions+=5;NFSU2_TR(0x49c5b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c5bc:{NFSU2_TR(0x49c5bc);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c5c1:{NFSU2_TR(0x49c5c1);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c5c6:{NFSU2_TR(0x49c5c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c5c7:{NFSU2_TR(0x49c5c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c5ccull));
TAIL_STATIC(0x537d40u,537);
}
B49c5cc:L49c5cc:{c.instructions+=3;NFSU2_TR(0x49c5cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49c5cf:{NFSU2_TR(0x49c5cf);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49c5d1:{NFSU2_TR(0x49c5d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c5eb;}}
}
B49c5d3:L49c5d3:{c.instructions+=6;NFSU2_TR(0x49c5d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49c5d6:{NFSU2_TR(0x49c5d6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c5d8:{NFSU2_TR(0x49c5d8);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c5dd:{NFSU2_TR(0x49c5dd);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c5e2:{NFSU2_TR(0x49c5e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c5e3:{NFSU2_TR(0x49c5e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c5e8ull));
TAIL_STATIC(0x537c60u,537);
}
B49c5e8:L49c5e8:{c.instructions+=1;NFSU2_TR(0x49c5e8);
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
B49c5eb:L49c5eb:{c.instructions+=3;NFSU2_TR(0x49c5eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c5ec:{NFSU2_TR(0x49c5ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c5ed:{NFSU2_TR(0x49c5ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c5f0:L49c5f0:{c.instructions+=3;NFSU2_TR(0x49c5f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c5f4:{NFSU2_TR(0x49c5f4);
__builtin_memmove(gp(0x836364),(R+0),4);
}
B49c5f9:{NFSU2_TR(0x49c5f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c600:L49c600:{c.instructions+=4;NFSU2_TR(0x49c600);
u8 U[14];
__builtin_memmove((U+6),gp(0x83aa04),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c607:{NFSU2_TR(0x49c607);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c608:{NFSU2_TR(0x49c608);
__builtin_memmove((R+28),(R+4),4);
}
B49c60a:{NFSU2_TR(0x49c60a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c687;}}
}
B49c60c:L49c60c:{c.instructions+=4;NFSU2_TR(0x49c60c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c612:{NFSU2_TR(0x49c612);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c613:{NFSU2_TR(0x49c613);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c614:{NFSU2_TR(0x49c614);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c619ull));
TAIL_STATIC(0x51fe70u,51f);
}
B49c619:L49c619:{c.instructions+=5;NFSU2_TR(0x49c619);
__builtin_memmove((R+4),gp(0x836364),4);
}
B49c61f:{NFSU2_TR(0x49c61f);
__builtin_memmove((R+24),(R+0),4);
}
B49c621:{NFSU2_TR(0x49c621);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B49c628:{NFSU2_TR(0x49c628);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c629:{NFSU2_TR(0x49c629);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c62eull));
TAIL_STATIC(0x5c1000u,5c1);
}
B49c62e:L49c62e:{c.instructions+=4;NFSU2_TR(0x49c62e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49c631:{NFSU2_TR(0x49c631);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49c633:{NFSU2_TR(0x49c633);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49c636:{NFSU2_TR(0x49c636);
if(r1(R+518)){{goto L49c65c;}}
}
B49c638:L49c638:{c.instructions+=2;NFSU2_TR(0x49c638);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49c63a:{NFSU2_TR(0x49c63a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c686;}}
}
B49c63c:L49c63c:{c.instructions+=3;NFSU2_TR(0x49c63c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49c63e:{NFSU2_TR(0x49c63e);
__builtin_memmove((R+4),(R+24),4);
}
B49c640:{NFSU2_TR(0x49c640);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c643ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c643:L49c643:{c.instructions+=2;NFSU2_TR(0x49c643);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B49c646:{NFSU2_TR(0x49c646);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c653;}}
}
B49c648:L49c648:{c.instructions+=5;NFSU2_TR(0x49c648);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49c64b:{NFSU2_TR(0x49c64b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49c64d:{NFSU2_TR(0x49c64d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c64e:{NFSU2_TR(0x49c64e);
__builtin_memmove((R+4),(R+24),4);
}
B49c650:{NFSU2_TR(0x49c650);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c653ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c653:L49c653:{c.instructions+=5;NFSU2_TR(0x49c653);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49c655:{NFSU2_TR(0x49c655);
__builtin_memmove((R+4),(R+24),4);
}
B49c657:{NFSU2_TR(0x49c657);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c658:{NFSU2_TR(0x49c658);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c659:{NFSU2_TR(0x49c659);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B49c65c:L49c65c:{c.instructions+=2;NFSU2_TR(0x49c65c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49c65e:{NFSU2_TR(0x49c65e);
if(r1(R+518)){{goto L49c686;}}
}
B49c660:L49c660:{c.instructions+=2;NFSU2_TR(0x49c660);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B49c663:{NFSU2_TR(0x49c663);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c676;}}
}
B49c665:L49c665:{c.instructions+=4;NFSU2_TR(0x49c665);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c668:{NFSU2_TR(0x49c668);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c669:{NFSU2_TR(0x49c669);
u8 U[4];
w4(U+0,u32(0x911c0a4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c66e:{NFSU2_TR(0x49c66e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c673ull));
TAIL_STATIC(0x55dda0u,55d);
}
B49c673:L49c673:{c.instructions+=1;NFSU2_TR(0x49c673);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c676:L49c676:{c.instructions+=3;NFSU2_TR(0x49c676);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49c678:{NFSU2_TR(0x49c678);
__builtin_memmove((R+4),(R+24),4);
}
B49c67a:{NFSU2_TR(0x49c67a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c67dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c67d:L49c67d:{c.instructions+=5;NFSU2_TR(0x49c67d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49c67f:{NFSU2_TR(0x49c67f);
__builtin_memmove((R+4),(R+24),4);
}
B49c681:{NFSU2_TR(0x49c681);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c682:{NFSU2_TR(0x49c682);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c683:{NFSU2_TR(0x49c683);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B49c686:L49c686:{c.instructions+=1;NFSU2_TR(0x49c686);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c687:L49c687:{c.instructions+=2;NFSU2_TR(0x49c687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c688:{NFSU2_TR(0x49c688);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c690:L49c690:{c.instructions+=8;NFSU2_TR(0x49c690);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c691:{NFSU2_TR(0x49c691);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c692:{NFSU2_TR(0x49c692);
__builtin_memmove((R+24),(R+4),4);
}
B49c694:{NFSU2_TR(0x49c694);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49c69a:{NFSU2_TR(0x49c69a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49c69c:{NFSU2_TR(0x49c69c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c69d:{NFSU2_TR(0x49c69d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49c6a1:{NFSU2_TR(0x49c6a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c6ba;}}
}
B49c6a3:L49c6a3:{c.instructions+=9;NFSU2_TR(0x49c6a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c6a7:{NFSU2_TR(0x49c6a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49c6ab:{NFSU2_TR(0x49c6ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49c6af:{NFSU2_TR(0x49c6af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c6b0:{NFSU2_TR(0x49c6b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c6b1:{NFSU2_TR(0x49c6b1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c6b2:{NFSU2_TR(0x49c6b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c6b3:{NFSU2_TR(0x49c6b3);
__builtin_memmove((R+4),(R+24),4);
}
B49c6b5:{NFSU2_TR(0x49c6b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c6baull));
TAIL_STATIC(0x556020u,556);
}
B49c6ba:L49c6ba:{c.instructions+=2;NFSU2_TR(0x49c6ba);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x5d1a570full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5d1a570full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49c6c0:{NFSU2_TR(0x49c6c0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L49c80e;}}
}
B49c6c6:L49c6c6:{c.instructions+=1;NFSU2_TR(0x49c6c6);
if(r1(R+518)){{goto L49c7eb;}}
}
B49c6cc:L49c6cc:{c.instructions+=2;NFSU2_TR(0x49c6cc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x22222222ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x22222222ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49c6d2:{NFSU2_TR(0x49c6d2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L49c78d;}}
}
B49c6d8:L49c6d8:{c.instructions+=1;NFSU2_TR(0x49c6d8);
if(r1(R+518)){{goto L49c768;}}
}
B49c6de:L49c6de:{c.instructions+=2;NFSU2_TR(0x49c6de);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49c6e4:{NFSU2_TR(0x49c6e4);
if(r1(R+518)){{goto L49c70b;}}
}
B49c6e6:L49c6e6:{c.instructions+=2;NFSU2_TR(0x49c6e6);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x11111111ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x11111111ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x11111111ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c6ec:{NFSU2_TR(0x49c6ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c9b6;}}
}
B49c6f2:L49c6f2:{c.instructions+=5;NFSU2_TR(0x49c6f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c6f5:{NFSU2_TR(0x49c6f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c6f7:{NFSU2_TR(0x49c6f7);
u8 U[4];
w4(U+0,u32(0x78fa3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c6fc:{NFSU2_TR(0x49c6fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c6fd:{NFSU2_TR(0x49c6fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c702ull));
TAIL_STATIC(0x537980u,537);
}
B49c702:L49c702:{c.instructions+=5;NFSU2_TR(0x49c702);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c705:{NFSU2_TR(0x49c705);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c706:{NFSU2_TR(0x49c706);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c707:{NFSU2_TR(0x49c707);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49c708:{NFSU2_TR(0x49c708);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c70b:L49c70b:{c.instructions+=2;NFSU2_TR(0x49c70b);
u8 U[14];
__builtin_memmove((U+6),gp(0x83aa04),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c712:{NFSU2_TR(0x49c712);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c9b6;}}
}
B49c718:L49c718:{c.instructions+=7;NFSU2_TR(0x49c718);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c71b:{NFSU2_TR(0x49c71b);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c720:{NFSU2_TR(0x49c720);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c725:{NFSU2_TR(0x49c725);
w4(R+12,u32(0x1ull));
}
B49c72a:{NFSU2_TR(0x49c72a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c72b:{NFSU2_TR(0x49c72b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B49c731:{NFSU2_TR(0x49c731);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c736ull));
TAIL_STATIC(0x537d40u,537);
}
B49c736:L49c736:{c.instructions+=3;NFSU2_TR(0x49c736);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49c739:{NFSU2_TR(0x49c739);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49c73b:{NFSU2_TR(0x49c73b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c9b6;}}
}
B49c741:L49c741:{c.instructions+=7;NFSU2_TR(0x49c741);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49c744:{NFSU2_TR(0x49c744);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c745:{NFSU2_TR(0x49c745);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c74a:{NFSU2_TR(0x49c74a);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c74f:{NFSU2_TR(0x49c74f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c750:{NFSU2_TR(0x49c750);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
w4(U+4,u32(0x911ab364ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49c75a:{NFSU2_TR(0x49c75a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c75full));
TAIL_STATIC(0x537c60u,537);
}
B49c75f:L49c75f:{c.instructions+=5;NFSU2_TR(0x49c75f);
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
B49c762:{NFSU2_TR(0x49c762);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c763:{NFSU2_TR(0x49c763);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c764:{NFSU2_TR(0x49c764);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49c765:{NFSU2_TR(0x49c765);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c768:L49c768:{c.instructions+=7;NFSU2_TR(0x49c768);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49c76b:{NFSU2_TR(0x49c76b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c76d:{NFSU2_TR(0x49c76d);
u8 U[4];
w4(U+0,u32(0x78fab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c772:{NFSU2_TR(0x49c772);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c777:{NFSU2_TR(0x49c777);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c778:{NFSU2_TR(0x49c778);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49c77f:{NFSU2_TR(0x49c77f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c784ull));
TAIL_STATIC(0x537c00u,537);
}
B49c784:L49c784:{c.instructions+=5;NFSU2_TR(0x49c784);
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
B49c787:{NFSU2_TR(0x49c787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c788:{NFSU2_TR(0x49c788);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c789:{NFSU2_TR(0x49c789);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49c78a:{NFSU2_TR(0x49c78a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c78d:L49c78d:{c.instructions+=2;NFSU2_TR(0x49c78d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x35f8620bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c793:{NFSU2_TR(0x49c793);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c9b6;}}
}
B49c799:L49c799:{c.instructions+=4;NFSU2_TR(0x49c799);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49c79f:{NFSU2_TR(0x49c79f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c7a0:{NFSU2_TR(0x49c7a0);
__builtin_memmove((R+4),(R+24),4);
}
B49c7a2:{NFSU2_TR(0x49c7a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c7a7ull));
TAIL_STATIC(0x51fe70u,51f);
}
B49c7a7:L49c7a7:{c.instructions+=5;NFSU2_TR(0x49c7a7);
__builtin_memmove((R+28),(R+0),4);
}
B49c7a9:{NFSU2_TR(0x49c7a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c7af:{NFSU2_TR(0x49c7af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c7b0:{NFSU2_TR(0x49c7b0);
__builtin_memmove((R+4),(R+24),4);
}
B49c7b2:{NFSU2_TR(0x49c7b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c7b7ull));
TAIL_STATIC(0x51fe70u,51f);
}
B49c7b7:L49c7b7:{c.instructions+=3;NFSU2_TR(0x49c7b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49c7b9:{NFSU2_TR(0x49c7b9);
__builtin_memmove((R+24),(R+0),4);
}
B49c7bb:{NFSU2_TR(0x49c7bb);
if(r1(R+518)){{goto L49c7cb;}}
}
B49c7bd:L49c7bd:{c.instructions+=3;NFSU2_TR(0x49c7bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49c7c0:{NFSU2_TR(0x49c7c0);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49c7c2:{NFSU2_TR(0x49c7c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c7cb;}}
}
B49c7c4:L49c7c4:{c.instructions+=3;NFSU2_TR(0x49c7c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49c7c6:{NFSU2_TR(0x49c7c6);
__builtin_memmove((R+4),(R+28),4);
}
B49c7c8:{NFSU2_TR(0x49c7c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c7cbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c7cb:L49c7cb:{c.instructions+=2;NFSU2_TR(0x49c7cb);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c7cd:{NFSU2_TR(0x49c7cd);
if(r1(R+518)){{goto L49c9b6;}}
}
B49c7d3:L49c7d3:{c.instructions+=3;NFSU2_TR(0x49c7d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49c7d6:{NFSU2_TR(0x49c7d6);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49c7d8:{NFSU2_TR(0x49c7d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c9b6;}}
}
B49c7de:L49c7de:{c.instructions+=3;NFSU2_TR(0x49c7de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49c7e0:{NFSU2_TR(0x49c7e0);
__builtin_memmove((R+4),(R+24),4);
}
B49c7e2:{NFSU2_TR(0x49c7e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c7e5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c7e5:L49c7e5:{c.instructions+=4;NFSU2_TR(0x49c7e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c7e6:{NFSU2_TR(0x49c7e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c7e7:{NFSU2_TR(0x49c7e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49c7e8:{NFSU2_TR(0x49c7e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c7eb:L49c7eb:{c.instructions+=4;NFSU2_TR(0x49c7eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49c7ee:{NFSU2_TR(0x49c7ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c7ef:{NFSU2_TR(0x49c7ef);
u8 U[4];
w4(U+0,u32(0x92b703b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c7f4:{NFSU2_TR(0x49c7f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c7f9ull));
TAIL_STATIC(0x55dda0u,55d);
}
B49c7f9:L49c7f9:{c.instructions+=6;NFSU2_TR(0x49c7f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49c7fc:{NFSU2_TR(0x49c7fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c7ff:{NFSU2_TR(0x49c7ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49c801:{NFSU2_TR(0x49c801);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c804:{NFSU2_TR(0x49c804);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c805:{NFSU2_TR(0x49c805);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c808ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49c808:L49c808:{c.instructions+=4;NFSU2_TR(0x49c808);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c809:{NFSU2_TR(0x49c809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c80a:{NFSU2_TR(0x49c80a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49c80b:{NFSU2_TR(0x49c80b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c80e:L49c80e:{c.instructions+=2;NFSU2_TR(0x49c80e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xd05fc3a3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd05fc3a3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49c814:{NFSU2_TR(0x49c814);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L49c871;}}
}
B49c816:L49c816:{c.instructions+=1;NFSU2_TR(0x49c816);
if(r1(R+518)){{goto L49c83d;}}
}
B49c818:L49c818:{c.instructions+=2;NFSU2_TR(0x49c818);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49c81e:{NFSU2_TR(0x49c81e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49c718u);}goto L49c718;}}
}
B49c824:L49c824:{c.instructions+=2;NFSU2_TR(0x49c824);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc98356baull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c82a:{NFSU2_TR(0x49c82a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c9b6;}}
}
B49c830:L49c830:{c.instructions+=2;NFSU2_TR(0x49c830);
__builtin_memmove((R+4),(R+24),4);
}
B49c832:{NFSU2_TR(0x49c832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c837ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49c600u);}goto L49c600;}
}
B49c837:L49c837:{c.instructions+=4;NFSU2_TR(0x49c837);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c838:{NFSU2_TR(0x49c838);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c839:{NFSU2_TR(0x49c839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49c83a:{NFSU2_TR(0x49c83a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c83d:L49c83d:{c.instructions+=4;NFSU2_TR(0x49c83d);
__builtin_memmove((R+0),gp(0x83aa04),4);
}
B49c842:{NFSU2_TR(0x49c842);
w4(R+12,u32(0x1ull));
}
B49c847:{NFSU2_TR(0x49c847);
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
B49c849:{NFSU2_TR(0x49c849);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c9b6;}}
}
B49c84f:L49c84f:{c.instructions+=1;NFSU2_TR(0x49c84f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c854ull));
TAIL_STATIC(0x5cec90u,5ce);
}
B49c854:L49c854:{c.instructions+=5;NFSU2_TR(0x49c854);
__builtin_memmove(gp(0x8709d1),(R+12),1);
}
B49c85a:{NFSU2_TR(0x49c85a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49c85d:{NFSU2_TR(0x49c85d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c85e:{NFSU2_TR(0x49c85e);
u8 U[4];
w4(U+0,u32(0xaf0bbd92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c863:{NFSU2_TR(0x49c863);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c868ull));
TAIL_STATIC(0x55dda0u,55d);
}
B49c868:L49c868:{c.instructions+=5;NFSU2_TR(0x49c868);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c86b:{NFSU2_TR(0x49c86b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c86c:{NFSU2_TR(0x49c86c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c86d:{NFSU2_TR(0x49c86d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49c86e:{NFSU2_TR(0x49c86e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c871:L49c871:{c.instructions+=2;NFSU2_TR(0x49c871);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c877:{NFSU2_TR(0x49c877);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c9b6;}}
}
B49c87d:L49c87d:{c.instructions+=3;NFSU2_TR(0x49c87d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c883:{NFSU2_TR(0x49c883);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49c888:{NFSU2_TR(0x49c888);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c956;}}
}
B49c88e:L49c88e:{c.instructions+=4;NFSU2_TR(0x49c88e);
__builtin_memmove((R+0),gp(0x83aa04),4);
}
B49c893:{NFSU2_TR(0x49c893);
w4(R+12,u32(0x1ull));
}
B49c898:{NFSU2_TR(0x49c898);
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
B49c89a:{NFSU2_TR(0x49c89a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c8a1;}}
}
B49c89c:L49c89c:{c.instructions+=1;NFSU2_TR(0x49c89c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c8a1ull));
TAIL_STATIC(0x5beea0u,5be);
}
B49c8a1:L49c8a1:{c.instructions+=2;NFSU2_TR(0x49c8a1);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aa04),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49c8a8:{NFSU2_TR(0x49c8a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c93d;}}
}
B49c8ae:L49c8ae:{c.instructions+=3;NFSU2_TR(0x49c8ae);
__builtin_memmove((R+0),gp(0x844ad8),1);
}
B49c8b3:{NFSU2_TR(0x49c8b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49c8b5:{NFSU2_TR(0x49c8b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c8f5;}}
}
B49c8b7:L49c8b7:{c.instructions+=2;NFSU2_TR(0x49c8b7);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B49c8bd:{NFSU2_TR(0x49c8bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c8f5;}}
}
B49c8bf:L49c8bf:{c.instructions+=11;NFSU2_TR(0x49c8bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c8c2:{NFSU2_TR(0x49c8c2);
u8 U[4];
w4(U+0,u32(0x22bc94afull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c8c7:{NFSU2_TR(0x49c8c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c8c8:{NFSU2_TR(0x49c8c8);
u8 U[4];
w4(U+0,u32(0x22222222ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c8cd:{NFSU2_TR(0x49c8cd);
u8 U[4];
w4(U+0,u32(0x22222222ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c8d2:{NFSU2_TR(0x49c8d2);
u8 U[4];
w4(U+0,u32(0x11111111ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c8d7:{NFSU2_TR(0x49c8d7);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c8dc:{NFSU2_TR(0x49c8dc);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c8e1:{NFSU2_TR(0x49c8e1);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c8e6:{NFSU2_TR(0x49c8e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c8e7:{NFSU2_TR(0x49c8e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c8ecull));
TAIL_STATIC(0x558790u,558);
}
B49c8ec:L49c8ec:{c.instructions+=5;NFSU2_TR(0x49c8ec);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c8ef:{NFSU2_TR(0x49c8ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c8f0:{NFSU2_TR(0x49c8f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c8f1:{NFSU2_TR(0x49c8f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49c8f2:{NFSU2_TR(0x49c8f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c8f5:L49c8f5:{c.instructions+=2;NFSU2_TR(0x49c8f5);
u8 U[2];
__builtin_memmove((U+0),gp(0x844ad9),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B49c8fb:{NFSU2_TR(0x49c8fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c93d;}}
}
B49c8fd:L49c8fd:{c.instructions+=3;NFSU2_TR(0x49c8fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49c903:{NFSU2_TR(0x49c903);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49c905:{NFSU2_TR(0x49c905);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c93d;}}
}
B49c907:L49c907:{c.instructions+=11;NFSU2_TR(0x49c907);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49c90a:{NFSU2_TR(0x49c90a);
u8 U[4];
w4(U+0,u32(0xf3568b86ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c90f:{NFSU2_TR(0x49c90f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c910:{NFSU2_TR(0x49c910);
u8 U[4];
w4(U+0,u32(0x22222222ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c915:{NFSU2_TR(0x49c915);
u8 U[4];
w4(U+0,u32(0x22222222ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c91a:{NFSU2_TR(0x49c91a);
u8 U[4];
w4(U+0,u32(0x11111111ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c91f:{NFSU2_TR(0x49c91f);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c924:{NFSU2_TR(0x49c924);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c929:{NFSU2_TR(0x49c929);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c92e:{NFSU2_TR(0x49c92e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c92f:{NFSU2_TR(0x49c92f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c934ull));
TAIL_STATIC(0x558790u,558);
}
B49c934:L49c934:{c.instructions+=5;NFSU2_TR(0x49c934);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c937:{NFSU2_TR(0x49c937);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c938:{NFSU2_TR(0x49c938);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c939:{NFSU2_TR(0x49c939);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49c93a:{NFSU2_TR(0x49c93a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c93d:L49c93d:{c.instructions+=5;NFSU2_TR(0x49c93d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49c940:{NFSU2_TR(0x49c940);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c942:{NFSU2_TR(0x49c942);
u8 U[4];
w4(U+0,u32(0x78fa3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c947:{NFSU2_TR(0x49c947);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c948:{NFSU2_TR(0x49c948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c94dull));
TAIL_STATIC(0x537980u,537);
}
B49c94d:L49c94d:{c.instructions+=5;NFSU2_TR(0x49c94d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c950:{NFSU2_TR(0x49c950);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c951:{NFSU2_TR(0x49c951);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c952:{NFSU2_TR(0x49c952);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49c953:{NFSU2_TR(0x49c953);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c956:L49c956:{c.instructions+=2;NFSU2_TR(0x49c956);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c95b:{NFSU2_TR(0x49c95b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c9b6;}}
}
B49c95d:L49c95d:{c.instructions+=3;NFSU2_TR(0x49c95d);
__builtin_memmove((R+0),gp(0x83aa04),4);
}
B49c962:{NFSU2_TR(0x49c962);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49c965:{NFSU2_TR(0x49c965);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c980;}}
}
B49c967:L49c967:{c.instructions+=5;NFSU2_TR(0x49c967);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c96a:{NFSU2_TR(0x49c96a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c96c:{NFSU2_TR(0x49c96c);
u8 U[4];
w4(U+0,u32(0x78faa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c971:{NFSU2_TR(0x49c971);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c972:{NFSU2_TR(0x49c972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c977ull));
TAIL_STATIC(0x537980u,537);
}
B49c977:L49c977:{c.instructions+=5;NFSU2_TR(0x49c977);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c97a:{NFSU2_TR(0x49c97a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c97b:{NFSU2_TR(0x49c97b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c97c:{NFSU2_TR(0x49c97c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49c97d:{NFSU2_TR(0x49c97d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c980:L49c980:{c.instructions+=2;NFSU2_TR(0x49c980);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49c983:{NFSU2_TR(0x49c983);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c99e;}}
}
B49c985:L49c985:{c.instructions+=5;NFSU2_TR(0x49c985);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49c988:{NFSU2_TR(0x49c988);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c98a:{NFSU2_TR(0x49c98a);
u8 U[4];
w4(U+0,u32(0x78fa8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c98f:{NFSU2_TR(0x49c98f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c990:{NFSU2_TR(0x49c990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c995ull));
TAIL_STATIC(0x537980u,537);
}
B49c995:L49c995:{c.instructions+=5;NFSU2_TR(0x49c995);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c998:{NFSU2_TR(0x49c998);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c999:{NFSU2_TR(0x49c999);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c99a:{NFSU2_TR(0x49c99a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49c99b:{NFSU2_TR(0x49c99b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c99e:L49c99e:{c.instructions+=2;NFSU2_TR(0x49c99e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c9a1:{NFSU2_TR(0x49c9a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c9b6;}}
}
B49c9a3:L49c9a3:{c.instructions+=5;NFSU2_TR(0x49c9a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49c9a6:{NFSU2_TR(0x49c9a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c9a8:{NFSU2_TR(0x49c9a8);
u8 U[4];
w4(U+0,u32(0x78fa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c9ad:{NFSU2_TR(0x49c9ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c9ae:{NFSU2_TR(0x49c9ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c9b3ull));
TAIL_STATIC(0x537980u,537);
}
B49c9b3:L49c9b3:{c.instructions+=1;NFSU2_TR(0x49c9b3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c9b6:L49c9b6:{c.instructions+=4;NFSU2_TR(0x49c9b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49c9b7:{NFSU2_TR(0x49c9b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49c9b8:{NFSU2_TR(0x49c9b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49c9b9:{NFSU2_TR(0x49c9b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c9c0:L49c9c0:{c.instructions+=3;NFSU2_TR(0x49c9c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c9c4:{NFSU2_TR(0x49c9c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49c9c9:{NFSU2_TR(0x49c9c9);
if(r1(R+518)){{goto L49c9d2;}}
}
B49c9cb:L49c9cb:{c.instructions+=2;NFSU2_TR(0x49c9cb);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc3960eb9ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc3960eb9ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc3960eb9ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c9d0:{NFSU2_TR(0x49c9d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49c9e5;}}
}
B49c9d2:L49c9d2:{c.instructions+=5;NFSU2_TR(0x49c9d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c9d5:{NFSU2_TR(0x49c9d5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c9d7:{NFSU2_TR(0x49c9d7);
u8 U[4];
w4(U+0,u32(0x78fa50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c9dc:{NFSU2_TR(0x49c9dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c9dd:{NFSU2_TR(0x49c9dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49c9e2ull));
TAIL_STATIC(0x537980u,537);
}
B49c9e2:L49c9e2:{c.instructions+=1;NFSU2_TR(0x49c9e2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49c9e5:L49c9e5:{c.instructions+=1;NFSU2_TR(0x49c9e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49c9f0:L49c9f0:{c.instructions+=12;NFSU2_TR(0x49c9f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c9f2:{NFSU2_TR(0x49c9f2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c9f7:{NFSU2_TR(0x49c9f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49c9fd:{NFSU2_TR(0x49c9fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49c9fe:{NFSU2_TR(0x49c9fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ca05:{NFSU2_TR(0x49ca05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ca06:{NFSU2_TR(0x49ca06);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ca0a:{NFSU2_TR(0x49ca0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ca0b:{NFSU2_TR(0x49ca0b);
__builtin_memmove((R+24),(R+4),4);
}
B49ca0d:{NFSU2_TR(0x49ca0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ca0e:{NFSU2_TR(0x49ca0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ca12:{NFSU2_TR(0x49ca12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ca17ull));
TAIL_STATIC(0x551de0u,551);
}
B49ca17:L49ca17:{c.instructions+=8;NFSU2_TR(0x49ca17);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49ca19:{NFSU2_TR(0x49ca19);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B49ca1c:{NFSU2_TR(0x49ca1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ca20:{NFSU2_TR(0x49ca20);
u8 U[4];
w4(U+0,u32(0x78fac0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B49ca26:{NFSU2_TR(0x49ca26);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B49ca29:{NFSU2_TR(0x49ca29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ca2c:{NFSU2_TR(0x49ca2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ca2f:{NFSU2_TR(0x49ca2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ca34ull));
TAIL_STATIC(0x4fe910u,4fe);
}
B49ca34:L49ca34:{c.instructions+=6;NFSU2_TR(0x49ca34);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49ca38:{NFSU2_TR(0x49ca38);
__builtin_memmove((R+0),(R+24),4);
}
B49ca3a:{NFSU2_TR(0x49ca3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ca3b:{NFSU2_TR(0x49ca3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ca42:{NFSU2_TR(0x49ca42);
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
B49ca45:{NFSU2_TR(0x49ca45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ca50:L49ca50:{c.instructions+=5;NFSU2_TR(0x49ca50);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ca54:{NFSU2_TR(0x49ca54);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49ca58:{NFSU2_TR(0x49ca58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ca59:{NFSU2_TR(0x49ca59);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ca5a:{NFSU2_TR(0x49ca5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ca5full));
TAIL_STATIC(0x50d1f0u,50d);
}
B49ca5f:L49ca5f:{c.instructions+=2;NFSU2_TR(0x49ca5f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49ca62:{NFSU2_TR(0x49ca62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ca70:L49ca70:{c.instructions+=13;NFSU2_TR(0x49ca70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ca72:{NFSU2_TR(0x49ca72);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ca77:{NFSU2_TR(0x49ca77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ca7d:{NFSU2_TR(0x49ca7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ca7e:{NFSU2_TR(0x49ca7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ca85:{NFSU2_TR(0x49ca85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ca86:{NFSU2_TR(0x49ca86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ca87:{NFSU2_TR(0x49ca87);
__builtin_memmove((R+24),(R+4),4);
}
B49ca89:{NFSU2_TR(0x49ca89);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ca8d:{NFSU2_TR(0x49ca8d);
u8 U[4];
w4(U+0,u32(0x78fac0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B49ca93:{NFSU2_TR(0x49ca93);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B49ca96:{NFSU2_TR(0x49ca96);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49ca9e:{NFSU2_TR(0x49ca9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49caa3ull));
TAIL_STATIC(0x511320u,511);
}
B49caa3:L49caa3:{c.instructions+=3;NFSU2_TR(0x49caa3);
__builtin_memmove((R+4),(R+24),4);
}
B49caa5:{NFSU2_TR(0x49caa5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B49caad:{NFSU2_TR(0x49caad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cab2ull));
TAIL_STATIC(0x510d40u,510);
}
B49cab2:L49cab2:{c.instructions+=5;NFSU2_TR(0x49cab2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49cab6:{NFSU2_TR(0x49cab6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49cab7:{NFSU2_TR(0x49cab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cabe:{NFSU2_TR(0x49cabe);
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
B49cac1:{NFSU2_TR(0x49cac1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49cad0:L49cad0:{c.instructions+=6;NFSU2_TR(0x49cad0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cad1:{NFSU2_TR(0x49cad1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cad2:{NFSU2_TR(0x49cad2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49cad6:{NFSU2_TR(0x49cad6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cad7:{NFSU2_TR(0x49cad7);
__builtin_memmove((R+24),(R+4),4);
}
B49cad9:{NFSU2_TR(0x49cad9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cadeull));
TAIL_STATIC(0x505560u,505);
}
B49cade:L49cade:{c.instructions+=30;NFSU2_TR(0x49cade);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49cae1:{NFSU2_TR(0x49cae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cae4:{NFSU2_TR(0x49cae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49cae7:{NFSU2_TR(0x49cae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49caea:{NFSU2_TR(0x49caea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49caed:{NFSU2_TR(0x49caed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49caf0:{NFSU2_TR(0x49caf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49caf3:{NFSU2_TR(0x49caf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49caf6:{NFSU2_TR(0x49caf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49caf9:{NFSU2_TR(0x49caf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cafc:{NFSU2_TR(0x49cafc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49caff:{NFSU2_TR(0x49caff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cb02:{NFSU2_TR(0x49cb02);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49cb05:{NFSU2_TR(0x49cb05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cb08:{NFSU2_TR(0x49cb08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49cb0b:{NFSU2_TR(0x49cb0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cb0e:{NFSU2_TR(0x49cb0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49cb11:{NFSU2_TR(0x49cb11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cb14:{NFSU2_TR(0x49cb14);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49cb17:{NFSU2_TR(0x49cb17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cb1a:{NFSU2_TR(0x49cb1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49cb1d:{NFSU2_TR(0x49cb1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cb20:{NFSU2_TR(0x49cb20);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49cb23:{NFSU2_TR(0x49cb23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cb26:{NFSU2_TR(0x49cb26);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49cb29:{NFSU2_TR(0x49cb29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cb2c:{NFSU2_TR(0x49cb2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49cb2d:{NFSU2_TR(0x49cb2d);
__builtin_memmove((R+0),(R+24),4);
}
B49cb2f:{NFSU2_TR(0x49cb2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49cb30:{NFSU2_TR(0x49cb30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49cb40:L49cb40:{c.instructions+=6;NFSU2_TR(0x49cb40);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49cb44:{NFSU2_TR(0x49cb44);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49cb48:{NFSU2_TR(0x49cb48);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cb4a:{NFSU2_TR(0x49cb4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cb4b:{NFSU2_TR(0x49cb4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cb4c:{NFSU2_TR(0x49cb4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cb51ull));
TAIL_STATIC(0x50d1a0u,50d);
}
B49cb51:L49cb51:{c.instructions+=2;NFSU2_TR(0x49cb51);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49cb54:{NFSU2_TR(0x49cb54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49cb60:L49cb60:{c.instructions+=3;NFSU2_TR(0x49cb60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cb61:{NFSU2_TR(0x49cb61);
__builtin_memmove((R+24),(R+4),4);
}
B49cb63:{NFSU2_TR(0x49cb63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cb68ull));
{goto L49cb80;}
}
B49cb68:L49cb68:{c.instructions+=2;NFSU2_TR(0x49cb68);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B49cb6d:{NFSU2_TR(0x49cb6d);
if(r1(R+518)){{goto L49cb78;}}
}
B49cb6f:L49cb6f:{c.instructions+=2;NFSU2_TR(0x49cb6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cb70:{NFSU2_TR(0x49cb70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cb75ull));
TAIL_STATIC(0x575630u,575);
}
B49cb75:L49cb75:{c.instructions+=1;NFSU2_TR(0x49cb75);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49cb78:L49cb78:{c.instructions+=3;NFSU2_TR(0x49cb78);
__builtin_memmove((R+0),(R+24),4);
}
B49cb7a:{NFSU2_TR(0x49cb7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49cb7b:{NFSU2_TR(0x49cb7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49cb80:L49cb80:{c.instructions+=2;NFSU2_TR(0x49cb80);
u8 U[4];
w4(U+0,u32(0x78fad0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B49cb86:{NFSU2_TR(0x49cb86);
TAIL_STATIC(0x510d40u,510);
}
B49cb90:L49cb90:{c.instructions+=2;NFSU2_TR(0x49cb90);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x911ab364ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B49cb98:{NFSU2_TR(0x49cb98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49cbad;}}
}
B49cb9a:L49cb9a:{c.instructions+=5;NFSU2_TR(0x49cb9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49cb9d:{NFSU2_TR(0x49cb9d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cb9f:{NFSU2_TR(0x49cb9f);
u8 U[4];
w4(U+0,u32(0x78fa3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cba4:{NFSU2_TR(0x49cba4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cba5:{NFSU2_TR(0x49cba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cbaaull));
TAIL_STATIC(0x537980u,537);
}
B49cbaa:L49cbaa:{c.instructions+=1;NFSU2_TR(0x49cbaa);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49cbad:L49cbad:{c.instructions+=1;NFSU2_TR(0x49cbad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49cbb0:L49cbb0:{c.instructions+=13;NFSU2_TR(0x49cbb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49cbb4:{NFSU2_TR(0x49cbb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49cbb8:{NFSU2_TR(0x49cbb8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cbb9:{NFSU2_TR(0x49cbb9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cbba:{NFSU2_TR(0x49cbba);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49cbbe:{NFSU2_TR(0x49cbbe);
__builtin_memmove((R+24),(R+4),4);
}
B49cbc0:{NFSU2_TR(0x49cbc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49cbc4:{NFSU2_TR(0x49cbc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cbc5:{NFSU2_TR(0x49cbc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cbc6:{NFSU2_TR(0x49cbc6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cbc7:{NFSU2_TR(0x49cbc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cbc8:{NFSU2_TR(0x49cbc8);
__builtin_memmove((R+4),(R+24),4);
}
B49cbca:{NFSU2_TR(0x49cbca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cbcfull));
TAIL_STATIC(0x556020u,556);
}
B49cbcf:L49cbcf:{c.instructions+=2;NFSU2_TR(0x49cbcf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49cbd5:{NFSU2_TR(0x49cbd5);
if(r1(R+518)){{goto L49cc03;}}
}
B49cbd7:L49cbd7:{c.instructions+=2;NFSU2_TR(0x49cbd7);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49cbdd:{NFSU2_TR(0x49cbdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49cc3f;}}
}
B49cbdf:L49cbdf:{c.instructions+=2;NFSU2_TR(0x49cbdf);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x911ab364ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B49cbe9:{NFSU2_TR(0x49cbe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49cc3f;}}
}
B49cbeb:L49cbeb:{c.instructions+=5;NFSU2_TR(0x49cbeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49cbee:{NFSU2_TR(0x49cbee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cbf0:{NFSU2_TR(0x49cbf0);
u8 U[4];
w4(U+0,u32(0x78fa50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cbf5:{NFSU2_TR(0x49cbf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cbf6:{NFSU2_TR(0x49cbf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cbfbull));
TAIL_STATIC(0x537980u,537);
}
B49cbfb:L49cbfb:{c.instructions+=4;NFSU2_TR(0x49cbfb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49cbfe:{NFSU2_TR(0x49cbfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49cbff:{NFSU2_TR(0x49cbff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49cc00:{NFSU2_TR(0x49cc00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49cc03:L49cc03:{c.instructions+=5;NFSU2_TR(0x49cc03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49cc06:{NFSU2_TR(0x49cc06);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cc0b:{NFSU2_TR(0x49cc0b);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cc10:{NFSU2_TR(0x49cc10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cc11:{NFSU2_TR(0x49cc11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cc16ull));
TAIL_STATIC(0x537d40u,537);
}
B49cc16:L49cc16:{c.instructions+=3;NFSU2_TR(0x49cc16);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49cc19:{NFSU2_TR(0x49cc19);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49cc1b:{NFSU2_TR(0x49cc1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49cc3f;}}
}
B49cc1d:L49cc1d:{c.instructions+=7;NFSU2_TR(0x49cc1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49cc20:{NFSU2_TR(0x49cc20);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cc22:{NFSU2_TR(0x49cc22);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cc27:{NFSU2_TR(0x49cc27);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cc2c:{NFSU2_TR(0x49cc2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cc2d:{NFSU2_TR(0x49cc2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
w4(U+4,u32(0x911ab364ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49cc37:{NFSU2_TR(0x49cc37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cc3cull));
TAIL_STATIC(0x537c60u,537);
}
B49cc3c:L49cc3c:{c.instructions+=1;NFSU2_TR(0x49cc3c);
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
B49cc3f:L49cc3f:{c.instructions+=3;NFSU2_TR(0x49cc3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49cc40:{NFSU2_TR(0x49cc40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49cc41:{NFSU2_TR(0x49cc41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49cc50:L49cc50:{c.instructions+=3;NFSU2_TR(0x49cc50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49cc54:{NFSU2_TR(0x49cc54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49cc56:{NFSU2_TR(0x49cc56);
if(r1(R+518)){{goto L49cc83;}}
}
B49cc58:L49cc58:{c.instructions+=2;NFSU2_TR(0x49cc58);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x30ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B49cc5b:{NFSU2_TR(0x49cc5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49cc83;}}
}
B49cc5d:L49cc5d:{c.instructions+=2;NFSU2_TR(0x49cc5d);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x78ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B49cc61:{NFSU2_TR(0x49cc61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49cc83;}}
}
B49cc63:L49cc63:{c.instructions+=2;NFSU2_TR(0x49cc63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cc64:{NFSU2_TR(0x49cc64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cc69ull));
TAIL_STATIC(0x43de50u,43d);
}
B49cc69:L49cc69:{c.instructions+=4;NFSU2_TR(0x49cc69);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49cc6d:{NFSU2_TR(0x49cc6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49cc70:{NFSU2_TR(0x49cc70);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49cc72:{NFSU2_TR(0x49cc72);
if(r1(R+518)){{goto L49cc77;}}
}
B49cc74:L49cc74:{c.instructions+=1;NFSU2_TR(0x49cc74);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+4)),r1(U+0));
}
B49cc77:L49cc77:{c.instructions+=2;NFSU2_TR(0x49cc77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cc78:{NFSU2_TR(0x49cc78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cc7dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49cc7d:L49cc7d:{c.instructions+=2;NFSU2_TR(0x49cc7d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49cc80:{NFSU2_TR(0x49cc80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49cc83:L49cc83:{c.instructions+=3;NFSU2_TR(0x49cc83);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49cc87:{NFSU2_TR(0x49cc87);
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
B49cc89:{NFSU2_TR(0x49cc89);
if(r1(R+518)){{goto L49cc8e;}}
}
B49cc8b:L49cc8b:{c.instructions+=1;NFSU2_TR(0x49cc8b);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+4)),r1(U+0));
}
B49cc8e:L49cc8e:{c.instructions+=1;NFSU2_TR(0x49cc8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49cca0:L49cca0:{c.instructions+=1;NFSU2_TR(0x49cca0);
TAIL_STATIC(0x5864f0u,586);
}
B49ccb0:L49ccb0:{c.instructions+=14;NFSU2_TR(0x49ccb0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ccb2:{NFSU2_TR(0x49ccb2);
u8 U[4];
w4(U+0,u32(0x772933ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ccb7:{NFSU2_TR(0x49ccb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ccbd:{NFSU2_TR(0x49ccbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ccbe:{NFSU2_TR(0x49ccbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ccc5:{NFSU2_TR(0x49ccc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B49ccc8:{NFSU2_TR(0x49ccc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49cccc:{NFSU2_TR(0x49cccc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cccd:{NFSU2_TR(0x49cccd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ccce:{NFSU2_TR(0x49ccce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cccf:{NFSU2_TR(0x49cccf);
__builtin_memmove((R+24),(R+4),4);
}
B49ccd1:{NFSU2_TR(0x49ccd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ccd2:{NFSU2_TR(0x49ccd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ccd6:{NFSU2_TR(0x49ccd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ccdbull));
TAIL_STATIC(0x551de0u,551);
}
B49ccdb:L49ccdb:{c.instructions+=6;NFSU2_TR(0x49ccdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B49ccde:{NFSU2_TR(0x49ccde);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B49cce0:{NFSU2_TR(0x49cce0);
__builtin_memmove((R+4),(R+28),4);
}
B49cce2:{NFSU2_TR(0x49cce2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cce6:{NFSU2_TR(0x49cce6);
u8 U[4];
w4(U+0,u32(0x78fb2cull));
s4(u32(r4(R+24)),r4(U+0));
}
B49ccec:{NFSU2_TR(0x49ccec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ccf1ull));
TAIL_STATIC(0x583af0u,583);
}
B49ccf1:L49ccf1:{c.instructions+=10;NFSU2_TR(0x49ccf1);
u8 U[4];
w4(U+0,u32(0x78fae0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B49ccf7:{NFSU2_TR(0x49ccf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ccull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49cd01:{NFSU2_TR(0x49cd01);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4d0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cd07:{NFSU2_TR(0x49cd07);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4d4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cd0d:{NFSU2_TR(0x49cd0d);
u8 U[4];
w4(U+0,u32(0x40000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cd12:{NFSU2_TR(0x49cd12);
__builtin_memmove((R+4),(R+28),4);
}
B49cd14:{NFSU2_TR(0x49cd14);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49cd19:{NFSU2_TR(0x49cd19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cd1f:{NFSU2_TR(0x49cd1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x520ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cd25:{NFSU2_TR(0x49cd25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cd2aull));
TAIL_STATIC(0x583b10u,583);
}
B49cd2a:L49cd2a:{c.instructions+=2;NFSU2_TR(0x49cd2a);
w4(R+4,u32(0x850080ull));
}
B49cd2f:{NFSU2_TR(0x49cd2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cd34ull));
TAIL_STATIC(0x5031f0u,503);
}
B49cd34:L49cd34:{c.instructions+=2;NFSU2_TR(0x49cd34);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cd38:{NFSU2_TR(0x49cd38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cd3dull));
TAIL_STATIC(0x582170u,582);
}
B49cd3d:L49cd3d:{c.instructions+=2;NFSU2_TR(0x49cd3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cd41:{NFSU2_TR(0x49cd41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cd46ull));
TAIL_STATIC(0x582180u,582);
}
B49cd46:L49cd46:{c.instructions+=2;NFSU2_TR(0x49cd46);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cd4a:{NFSU2_TR(0x49cd4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cd4full));
TAIL_STATIC(0x5712a0u,571);
}
B49cd4f:L49cd4f:{c.instructions+=2;NFSU2_TR(0x49cd4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cd53:{NFSU2_TR(0x49cd53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cd58ull));
TAIL_STATIC(0x571380u,571);
}
B49cd58:L49cd58:{c.instructions+=2;NFSU2_TR(0x49cd58);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cd5c:{NFSU2_TR(0x49cd5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cd61ull));
TAIL_STATIC(0x582280u,582);
}
B49cd61:L49cd61:{c.instructions+=7;NFSU2_TR(0x49cd61);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49cd65:{NFSU2_TR(0x49cd65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cd66:{NFSU2_TR(0x49cd66);
__builtin_memmove((R+4),(R+28),4);
}
B49cd68:{NFSU2_TR(0x49cd68);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cd6c:{NFSU2_TR(0x49cd6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x783fe5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49cd74:{NFSU2_TR(0x49cd74);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x835980ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49cd7c:{NFSU2_TR(0x49cd7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cd81ull));
TAIL_STATIC(0x583b50u,583);
}
B49cd81:L49cd81:{c.instructions+=7;NFSU2_TR(0x49cd81);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B49cd87:{NFSU2_TR(0x49cd87);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B49cd8d:{NFSU2_TR(0x49cd8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49cd90:{NFSU2_TR(0x49cd90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49cd93:{NFSU2_TR(0x49cd93);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cd94:{NFSU2_TR(0x49cd94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cd95:{NFSU2_TR(0x49cd95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cd9aull));
TAIL_STATIC(0x54e6e0u,54e);
}
B49cd9a:L49cd9a:{c.instructions+=8;NFSU2_TR(0x49cd9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49cd9e:{NFSU2_TR(0x49cd9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49cd9f:{NFSU2_TR(0x49cd9f);
__builtin_memmove((R+0),(R+24),4);
}
B49cda1:{NFSU2_TR(0x49cda1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49cda2:{NFSU2_TR(0x49cda2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49cda3:{NFSU2_TR(0x49cda3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cdaa:{NFSU2_TR(0x49cdaa);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49cdad:{NFSU2_TR(0x49cdad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49cdb0:L49cdb0:{c.instructions+=6;NFSU2_TR(0x49cdb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B49cdb3:{NFSU2_TR(0x49cdb3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cdb4:{NFSU2_TR(0x49cdb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49cdb8:{NFSU2_TR(0x49cdb8);
__builtin_memmove((R+0),(R+24),4);
}
B49cdba:{NFSU2_TR(0x49cdba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B49cdbd:{NFSU2_TR(0x49cdbd);
__builtin_memmove((R+4),(R+4),4);
}
B49cdc0:L49cdc0:{c.instructions+=4;NFSU2_TR(0x49cdc0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B49cdc2:{NFSU2_TR(0x49cdc2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B49cdc3:{NFSU2_TR(0x49cdc3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49cdc5:{NFSU2_TR(0x49cdc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49cdc0u);}goto L49cdc0;}}
}
B49cdc7:L49cdc7:{c.instructions+=3;NFSU2_TR(0x49cdc7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B49cdc9:{NFSU2_TR(0x49cdc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cdcd:{NFSU2_TR(0x49cdcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49cdfb;}}
}
B49cdcf:L49cdcf:{c.instructions+=9;NFSU2_TR(0x49cdcf);
__builtin_memmove((R+0),gp(0x78fbe0),4);
}
B49cdd4:{NFSU2_TR(0x49cdd4);
__builtin_memmove((R+4),gp(0x78fbe4),4);
}
B49cdda:{NFSU2_TR(0x49cdda);
__builtin_memmove((R+8),gp(0x78fbe8),4);
}
B49cde0:{NFSU2_TR(0x49cde0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cde4:{NFSU2_TR(0x49cde4);
__builtin_memmove((R+0),gp(0x78fbec),2);
}
B49cdea:{NFSU2_TR(0x49cdea);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cdee:{NFSU2_TR(0x49cdee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cdf2:{NFSU2_TR(0x49cdf2);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B49cdf7:{NFSU2_TR(0x49cdf7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B49cdfb:L49cdfb:{c.instructions+=2;NFSU2_TR(0x49cdfb);
w4(R+0,u32(0x78fb40ull));
}
B49ce00:{NFSU2_TR(0x49ce00);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B49ce03:L49ce03:{c.instructions+=4;NFSU2_TR(0x49ce03);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B49ce05:{NFSU2_TR(0x49ce05);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B49ce06:{NFSU2_TR(0x49ce06);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49ce08:{NFSU2_TR(0x49ce08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49ce03u);}goto L49ce03;}}
}
B49ce0a:L49ce0a:{c.instructions+=4;NFSU2_TR(0x49ce0a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B49ce0c:{NFSU2_TR(0x49ce0c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B49ce0f:{NFSU2_TR(0x49ce0f);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x200ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B49ce14:{NFSU2_TR(0x49ce14);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L49ce41;}}
}
B49ce16:L49ce16:{c.instructions+=14;NFSU2_TR(0x49ce16);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49ce1a:{NFSU2_TR(0x49ce1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49ce1e:{NFSU2_TR(0x49ce1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ce22:{NFSU2_TR(0x49ce22);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ce24:{NFSU2_TR(0x49ce24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ce25:{NFSU2_TR(0x49ce25);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49ce29:{NFSU2_TR(0x49ce29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ce2a:{NFSU2_TR(0x49ce2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ce2b:{NFSU2_TR(0x49ce2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ce2c:{NFSU2_TR(0x49ce2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ce2d:{NFSU2_TR(0x49ce2d);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ce2f:{NFSU2_TR(0x49ce2f);
u8 U[4];
w4(U+0,u32(0x78fb40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ce34:{NFSU2_TR(0x49ce34);
u8 U[4];
w4(U+0,u32(0x835980ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ce39:{NFSU2_TR(0x49ce39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ce3eull));
TAIL_STATIC(0x4400d0u,440);
}
B49ce3e:L49ce3e:{c.instructions+=1;NFSU2_TR(0x49ce3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B49ce41:L49ce41:{c.instructions+=3;NFSU2_TR(0x49ce41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ce42:{NFSU2_TR(0x49ce42);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49ce45:{NFSU2_TR(0x49ce45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ce50:L49ce50:{c.instructions+=12;NFSU2_TR(0x49ce50);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ce52:{NFSU2_TR(0x49ce52);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ce57:{NFSU2_TR(0x49ce57);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ce5d:{NFSU2_TR(0x49ce5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ce5e:{NFSU2_TR(0x49ce5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ce65:{NFSU2_TR(0x49ce65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ce66:{NFSU2_TR(0x49ce66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ce67:{NFSU2_TR(0x49ce67);
__builtin_memmove((R+24),(R+4),4);
}
B49ce69:{NFSU2_TR(0x49ce69);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ce6d:{NFSU2_TR(0x49ce6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B49ce70:{NFSU2_TR(0x49ce70);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49ce78:{NFSU2_TR(0x49ce78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ce7dull));
TAIL_STATIC(0x5864f0u,586);
}
B49ce7d:L49ce7d:{c.instructions+=3;NFSU2_TR(0x49ce7d);
__builtin_memmove((R+4),(R+24),4);
}
B49ce7f:{NFSU2_TR(0x49ce7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B49ce87:{NFSU2_TR(0x49ce87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ce8cull));
TAIL_STATIC(0x510d40u,510);
}
B49ce8c:L49ce8c:{c.instructions+=5;NFSU2_TR(0x49ce8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49ce90:{NFSU2_TR(0x49ce90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ce91:{NFSU2_TR(0x49ce91);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ce98:{NFSU2_TR(0x49ce98);
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
B49ce9b:{NFSU2_TR(0x49ce9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49cea0:L49cea0:{c.instructions+=2;NFSU2_TR(0x49cea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B49cea6:{NFSU2_TR(0x49cea6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ceabull));
TAIL_STATIC(0x58a0e0u,58a);
}
B49ceab:L49ceab:{c.instructions+=2;NFSU2_TR(0x49ceab);
__builtin_memmove((R+4),(R+0),4);
}
B49cead:{NFSU2_TR(0x49cead);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ceb2ull));
TAIL_STATIC(0x582380u,582);
}
B49ceb2:L49ceb2:{c.instructions+=3;NFSU2_TR(0x49ceb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49ceb4:{NFSU2_TR(0x49ceb4);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+16)),r1(U+0));
}
B49ceb9:{NFSU2_TR(0x49ceb9);
if(r1(R+518)){{goto L49cee1;}}
}
B49cebb:L49cebb:{c.instructions+=7;NFSU2_TR(0x49cebb);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cec0:{NFSU2_TR(0x49cec0);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cec5:{NFSU2_TR(0x49cec5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49cec9:{NFSU2_TR(0x49cec9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ceca:{NFSU2_TR(0x49ceca);
u8 U[4];
w4(U+0,u32(0x78fbf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cecf:{NFSU2_TR(0x49cecf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ced0:{NFSU2_TR(0x49ced0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ced5ull));
TAIL_STATIC(0x7414a0u,741);
}
B49ced5:L49ced5:{c.instructions+=3;NFSU2_TR(0x49ced5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49ced8:{NFSU2_TR(0x49ced8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ced9:{NFSU2_TR(0x49ced9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cedeull));
TAIL_STATIC(0x742360u,742);
}
B49cede:L49cede:{c.instructions+=1;NFSU2_TR(0x49cede);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49cee1:L49cee1:{c.instructions+=7;NFSU2_TR(0x49cee1);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cee6:{NFSU2_TR(0x49cee6);
u8 U[4];
w4(U+0,u32(0x9016a670ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ceeb:{NFSU2_TR(0x49ceeb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ceed:{NFSU2_TR(0x49ceed);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B49cef1:{NFSU2_TR(0x49cef1);
u8 U[4];
w4(U+0,u32(0x780207caull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cef6:{NFSU2_TR(0x49cef6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cef7:{NFSU2_TR(0x49cef7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cefcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49cdb0u);}goto L49cdb0;}
}
B49cefc:L49cefc:{c.instructions+=2;NFSU2_TR(0x49cefc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x114ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x114ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x114ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49cf02:{NFSU2_TR(0x49cf02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49cf10:L49cf10:{c.instructions+=11;NFSU2_TR(0x49cf10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49cf14:{NFSU2_TR(0x49cf14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B49cf17:{NFSU2_TR(0x49cf17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf18:{NFSU2_TR(0x49cf18);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf19:{NFSU2_TR(0x49cf19);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf1a:{NFSU2_TR(0x49cf1a);
__builtin_memmove((R+24),(R+4),4);
}
B49cf1c:{NFSU2_TR(0x49cf1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49cf20:{NFSU2_TR(0x49cf20);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B49cf22:{NFSU2_TR(0x49cf22);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf23:{NFSU2_TR(0x49cf23);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B49cf26:{NFSU2_TR(0x49cf26);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L49cf2d;}}
}
B49cf28:L49cf28:{c.instructions+=2;NFSU2_TR(0x49cf28);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B49cf29:{NFSU2_TR(0x49cf29);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cf2d:L49cf2d:{c.instructions+=3;NFSU2_TR(0x49cf2d);
w4(R+28,u32(0x1ull));
}
B49cf32:{NFSU2_TR(0x49cf32);
w4(R+12,u32(0x3ull));
}
B49cf37:{NFSU2_TR(0x49cf37);
{goto L49cf40;}
}
B49cf40:L49cf40:{c.instructions+=5;NFSU2_TR(0x49cf40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf41:{NFSU2_TR(0x49cf41);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49cf45:{NFSU2_TR(0x49cf45);
u8 U[4];
w4(U+0,u32(0x78fc10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf4a:{NFSU2_TR(0x49cf4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf4b:{NFSU2_TR(0x49cf4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cf50ull));
TAIL_STATIC(0x4400d0u,440);
}
B49cf50:L49cf50:{c.instructions+=4;NFSU2_TR(0x49cf50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B49cf53:{NFSU2_TR(0x49cf53);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49cf57:{NFSU2_TR(0x49cf57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf58:{NFSU2_TR(0x49cf58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cf5dull));
TAIL_STATIC(0x505450u,505);
}
B49cf5d:L49cf5d:{c.instructions+=3;NFSU2_TR(0x49cf5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf5e:{NFSU2_TR(0x49cf5e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf5f:{NFSU2_TR(0x49cf5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cf64ull));
TAIL_STATIC(0x5379c0u,537);
}
B49cf64:L49cf64:{c.instructions+=3;NFSU2_TR(0x49cf64);
__builtin_memmove((R+20),(R+0),4);
}
B49cf66:{NFSU2_TR(0x49cf66);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf67:{NFSU2_TR(0x49cf67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cf6cull));
TAIL_STATIC(0x50ca00u,50c);
}
B49cf6c:L49cf6c:{c.instructions+=6;NFSU2_TR(0x49cf6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49cf6f:{NFSU2_TR(0x49cf6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49cf72:{NFSU2_TR(0x49cf72);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf74:{NFSU2_TR(0x49cf74);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf75:{NFSU2_TR(0x49cf75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf76:{NFSU2_TR(0x49cf76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cf7bull));
TAIL_STATIC(0x51cda0u,51c);
}
B49cf7b:L49cf7b:{c.instructions+=5;NFSU2_TR(0x49cf7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf7c:{NFSU2_TR(0x49cf7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49cf80:{NFSU2_TR(0x49cf80);
u8 U[4];
w4(U+0,u32(0x78fbf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf85:{NFSU2_TR(0x49cf85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf86:{NFSU2_TR(0x49cf86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cf8bull));
TAIL_STATIC(0x4400d0u,440);
}
B49cf8b:L49cf8b:{c.instructions+=4;NFSU2_TR(0x49cf8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B49cf8e:{NFSU2_TR(0x49cf8e);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B49cf92:{NFSU2_TR(0x49cf92);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf93:{NFSU2_TR(0x49cf93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cf98ull));
TAIL_STATIC(0x505450u,505);
}
B49cf98:L49cf98:{c.instructions+=3;NFSU2_TR(0x49cf98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf99:{NFSU2_TR(0x49cf99);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cf9a:{NFSU2_TR(0x49cf9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cf9full));
TAIL_STATIC(0x5379c0u,537);
}
B49cf9f:L49cf9f:{c.instructions+=3;NFSU2_TR(0x49cf9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B49cfa2:{NFSU2_TR(0x49cfa2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cfa3:{NFSU2_TR(0x49cfa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cfa8ull));
TAIL_STATIC(0x50ca00u,50c);
}
B49cfa8:L49cfa8:{c.instructions+=4;NFSU2_TR(0x49cfa8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49cfab:{NFSU2_TR(0x49cfab);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B49cfac:{NFSU2_TR(0x49cfac);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B49cfad:{NFSU2_TR(0x49cfad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49cf40u);}goto L49cf40;}}
}
B49cfaf:L49cfaf:{c.instructions+=3;NFSU2_TR(0x49cfaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49cfb3:{NFSU2_TR(0x49cfb3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49cfb6:{NFSU2_TR(0x49cfb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x49d08fu,49d);}
}
B49cfbc:L49cfbc:{c.instructions+=6;NFSU2_TR(0x49cfbc);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cfbe:{NFSU2_TR(0x49cfbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cfc1:{NFSU2_TR(0x49cfc1);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49cfc5:{NFSU2_TR(0x49cfc5);
u8 U[4];
w4(U+0,u32(0x78fc10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cfca:{NFSU2_TR(0x49cfca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cfcb:{NFSU2_TR(0x49cfcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cfd0ull));
TAIL_STATIC(0x4400d0u,440);
}
B49cfd0:L49cfd0:{c.instructions+=3;NFSU2_TR(0x49cfd0);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49cfd4:{NFSU2_TR(0x49cfd4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cfd5:{NFSU2_TR(0x49cfd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cfdaull));
TAIL_STATIC(0x505450u,505);
}
B49cfda:L49cfda:{c.instructions+=5;NFSU2_TR(0x49cfda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49cfdd:{NFSU2_TR(0x49cfdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cfde:{NFSU2_TR(0x49cfde);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cfdf:{NFSU2_TR(0x49cfdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49cfe2:{NFSU2_TR(0x49cfe2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cfe7ull));
TAIL_STATIC(0x537a10u,537);
}
B49cfe7:L49cfe7:{c.instructions+=6;NFSU2_TR(0x49cfe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49cfea:{NFSU2_TR(0x49cfea);
__builtin_memmove((R+28),(R+0),4);
}
B49cfec:{NFSU2_TR(0x49cfec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49cfef:{NFSU2_TR(0x49cfef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cff0:{NFSU2_TR(0x49cff0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49cff1:{NFSU2_TR(0x49cff1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49cff6ull));
TAIL_STATIC(0x5379c0u,537);
}
B49cff6:L49cff6:{c.instructions+=4;NFSU2_TR(0x49cff6);
__builtin_memmove((R+12),(R+0),4);
}
B49cff8:{NFSU2_TR(0x49cff8);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49cffc:{NFSU2_TR(0x49cffc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B49cffe:{NFSU2_TR(0x49cffe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
TAIL_STATIC(0x49d001u,49d);
}
XIT:NFSU2_TR_EXIT(0x49c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
