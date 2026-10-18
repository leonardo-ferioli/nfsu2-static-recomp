#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_71f(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_725(u8* __restrict R,Cpu& c);
u32 body_727(u8* __restrict R,Cpu& c);
u32 body_72a(u8* __restrict R,Cpu& c);
u32 body_72b(u8* __restrict R,Cpu& c);
u32 body_72d(u8* __restrict R,Cpu& c);
u32 body_72e(u8* __restrict R,Cpu& c);
u32 body_72f(u8* __restrict R,Cpu& c);
u32 body_730(u8* __restrict R,Cpu& c);
u32 body_732(u8* __restrict R,Cpu& c);
u32 body_733(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x72c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x72c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_72c(u8* __restrict R,Cpu& c);
u32 page_72c(Cpu& c){return body_72c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_72c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x72c003:goto L72c003;
case 0x72c006:c.instructions+=1;goto B72c006;
case 0x72c00b:goto L72c00b;
case 0x72c012:c.instructions+=4;goto B72c012;
case 0x72c013:c.instructions+=3;goto B72c013;
case 0x72c014:c.instructions+=2;goto B72c014;
case 0x72c017:c.instructions+=1;goto B72c017;
case 0x72c019:goto L72c019;
case 0x72c01e:goto L72c01e;
case 0x72c01f:c.instructions+=3;goto B72c01f;
case 0x72c020:c.instructions+=2;goto B72c020;
case 0x72c027:c.instructions+=1;goto B72c027;
case 0x72c02c:goto L72c02c;
case 0x72c02d:c.instructions+=4;goto B72c02d;
case 0x72c030:c.instructions+=3;goto B72c030;
case 0x72c032:c.instructions+=2;goto B72c032;
case 0x72c034:c.instructions+=1;goto B72c034;
case 0x72c039:goto L72c039;
case 0x72c03c:c.instructions+=3;goto B72c03c;
case 0x72c03e:c.instructions+=2;goto B72c03e;
case 0x72c041:c.instructions+=1;goto B72c041;
case 0x72c043:goto L72c043;
case 0x72c045:goto L72c045;
case 0x72c04a:goto L72c04a;
case 0x72c04b:c.instructions+=3;goto B72c04b;
case 0x72c04c:c.instructions+=2;goto B72c04c;
case 0x72c053:c.instructions+=1;goto B72c053;
case 0x72c058:goto L72c058;
case 0x72c059:c.instructions+=4;goto B72c059;
case 0x72c05c:c.instructions+=3;goto B72c05c;
case 0x72c05e:c.instructions+=2;goto B72c05e;
case 0x72c060:c.instructions+=1;goto B72c060;
case 0x72c065:goto L72c065;
case 0x72c068:c.instructions+=3;goto B72c068;
case 0x72c06b:c.instructions+=2;goto B72c06b;
case 0x72c06e:c.instructions+=1;goto B72c06e;
case 0x72c070:goto L72c070;
case 0x72c072:goto L72c072;
case 0x72c075:c.instructions+=3;goto B72c075;
case 0x72c077:c.instructions+=2;goto B72c077;
case 0x72c07a:c.instructions+=1;goto B72c07a;
case 0x72c07c:goto L72c07c;
case 0x72c07e:c.instructions+=5;goto B72c07e;
case 0x72c07f:c.instructions+=4;goto B72c07f;
case 0x72c081:c.instructions+=3;goto B72c081;
case 0x72c082:c.instructions+=2;goto B72c082;
case 0x72c084:c.instructions+=1;goto B72c084;
case 0x72c089:goto L72c089;
case 0x72c08c:c.instructions+=11;goto B72c08c;
case 0x72c08f:c.instructions+=10;goto B72c08f;
case 0x72c090:c.instructions+=9;goto B72c090;
case 0x72c093:c.instructions+=8;goto B72c093;
case 0x72c096:c.instructions+=7;goto B72c096;
case 0x72c099:c.instructions+=6;goto B72c099;
case 0x72c09c:c.instructions+=5;goto B72c09c;
case 0x72c09d:c.instructions+=4;goto B72c09d;
case 0x72c09f:c.instructions+=3;goto B72c09f;
case 0x72c0a0:c.instructions+=2;goto B72c0a0;
case 0x72c0a1:c.instructions+=1;goto B72c0a1;
case 0x72c0a4:goto L72c0a4;
case 0x72c0a5:c.instructions+=3;goto B72c0a5;
case 0x72c0a7:c.instructions+=2;goto B72c0a7;
case 0x72c0ac:c.instructions+=1;goto B72c0ac;
case 0x72c0b1:goto L72c0b1;
case 0x72c0b2:c.instructions+=13;goto B72c0b2;
case 0x72c0b3:c.instructions+=12;goto B72c0b3;
case 0x72c0b5:c.instructions+=11;goto B72c0b5;
case 0x72c0b8:c.instructions+=10;goto B72c0b8;
case 0x72c0bb:c.instructions+=9;goto B72c0bb;
case 0x72c0c1:c.instructions+=8;goto B72c0c1;
case 0x72c0c4:c.instructions+=7;goto B72c0c4;
case 0x72c0ca:c.instructions+=6;goto B72c0ca;
case 0x72c0cb:c.instructions+=5;goto B72c0cb;
case 0x72c0ce:c.instructions+=4;goto B72c0ce;
case 0x72c0d4:c.instructions+=3;goto B72c0d4;
case 0x72c0d6:c.instructions+=2;goto B72c0d6;
case 0x72c0d9:c.instructions+=1;goto B72c0d9;
case 0x72c0de:goto L72c0de;
case 0x72c0e0:c.instructions+=4;goto B72c0e0;
case 0x72c0e1:c.instructions+=3;goto B72c0e1;
case 0x72c0e3:c.instructions+=2;goto B72c0e3;
case 0x72c0e6:c.instructions+=1;goto B72c0e6;
case 0x72c0eb:goto L72c0eb;
case 0x72c0ed:c.instructions+=2;goto B72c0ed;
case 0x72c0f0:c.instructions+=1;goto B72c0f0;
case 0x72c0f2:goto L72c0f2;
case 0x72c0f5:c.instructions+=9;goto B72c0f5;
case 0x72c0f8:c.instructions+=8;goto B72c0f8;
case 0x72c0f9:c.instructions+=7;goto B72c0f9;
case 0x72c0fc:c.instructions+=6;goto B72c0fc;
case 0x72c0ff:c.instructions+=5;goto B72c0ff;
case 0x72c103:c.instructions+=4;goto B72c103;
case 0x72c106:c.instructions+=3;goto B72c106;
case 0x72c108:c.instructions+=2;goto B72c108;
case 0x72c109:c.instructions+=1;goto B72c109;
case 0x72c10b:goto L72c10b;
case 0x72c110:goto L72c110;
case 0x72c112:goto L72c112;
case 0x72c117:goto L72c117;
case 0x72c11a:c.instructions+=6;goto B72c11a;
case 0x72c11e:c.instructions+=5;goto B72c11e;
case 0x72c11f:c.instructions+=4;goto B72c11f;
case 0x72c120:c.instructions+=3;goto B72c120;
case 0x72c121:c.instructions+=2;goto B72c121;
case 0x72c123:c.instructions+=1;goto B72c123;
case 0x72c128:goto L72c128;
case 0x72c12c:c.instructions+=4;goto B72c12c;
case 0x72c12e:c.instructions+=3;goto B72c12e;
case 0x72c12f:c.instructions+=2;goto B72c12f;
case 0x72c130:c.instructions+=1;goto B72c130;
case 0x72c135:goto L72c135;
case 0x72c139:c.instructions+=3;goto B72c139;
case 0x72c13a:c.instructions+=2;goto B72c13a;
case 0x72c13c:c.instructions+=1;goto B72c13c;
case 0x72c13e:goto L72c13e;
case 0x72c144:c.instructions+=4;goto B72c144;
case 0x72c145:c.instructions+=3;goto B72c145;
case 0x72c146:c.instructions+=2;goto B72c146;
case 0x72c148:c.instructions+=1;goto B72c148;
case 0x72c14d:goto L72c14d;
case 0x72c14f:c.instructions+=2;goto B72c14f;
case 0x72c152:c.instructions+=1;goto B72c152;
case 0x72c158:goto L72c158;
case 0x72c15c:c.instructions+=3;goto B72c15c;
case 0x72c15f:c.instructions+=2;goto B72c15f;
case 0x72c162:c.instructions+=1;goto B72c162;
case 0x72c164:goto L72c164;
case 0x72c167:goto L72c167;
case 0x72c16b:c.instructions+=1;goto B72c16b;
case 0x72c16d:goto L72c16d;
case 0x72c170:c.instructions+=1;goto B72c170;
case 0x72c172:goto L72c172;
case 0x72c175:c.instructions+=6;goto B72c175;
case 0x72c179:c.instructions+=5;goto B72c179;
case 0x72c17b:c.instructions+=4;goto B72c17b;
case 0x72c17d:c.instructions+=3;goto B72c17d;
case 0x72c180:c.instructions+=2;goto B72c180;
case 0x72c181:c.instructions+=1;goto B72c181;
case 0x72c186:goto L72c186;
case 0x72c188:goto L72c188;
case 0x72c18b:c.instructions+=4;goto B72c18b;
case 0x72c18f:c.instructions+=3;goto B72c18f;
case 0x72c191:c.instructions+=2;goto B72c191;
case 0x72c193:c.instructions+=1;goto B72c193;
case 0x72c196:goto L72c196;
case 0x72c199:c.instructions+=4;goto B72c199;
case 0x72c19b:c.instructions+=3;goto B72c19b;
case 0x72c19e:c.instructions+=2;goto B72c19e;
case 0x72c19f:c.instructions+=1;goto B72c19f;
case 0x72c1a4:goto L72c1a4;
case 0x72c1a6:c.instructions+=3;goto B72c1a6;
case 0x72c1a7:c.instructions+=2;goto B72c1a7;
case 0x72c1aa:c.instructions+=1;goto B72c1aa;
case 0x72c1af:goto L72c1af;
case 0x72c1b0:c.instructions+=6;goto B72c1b0;
case 0x72c1b1:c.instructions+=5;goto B72c1b1;
case 0x72c1b2:c.instructions+=4;goto B72c1b2;
case 0x72c1b5:c.instructions+=3;goto B72c1b5;
case 0x72c1b7:c.instructions+=2;goto B72c1b7;
case 0x72c1b8:c.instructions+=1;goto B72c1b8;
case 0x72c1bd:goto L72c1bd;
case 0x72c1be:c.instructions+=1;goto B72c1be;
case 0x72c1c3:goto L72c1c3;
case 0x72c1ca:c.instructions+=4;goto B72c1ca;
case 0x72c1cb:c.instructions+=3;goto B72c1cb;
case 0x72c1ce:c.instructions+=2;goto B72c1ce;
case 0x72c1cf:c.instructions+=1;goto B72c1cf;
case 0x72c1d1:goto L72c1d1;
case 0x72c1d6:goto L72c1d6;
case 0x72c1d9:c.instructions+=3;goto B72c1d9;
case 0x72c1da:c.instructions+=2;goto B72c1da;
case 0x72c1db:c.instructions+=1;goto B72c1db;
case 0x72c1e2:goto L72c1e2;
case 0x72c1e3:c.instructions+=4;goto B72c1e3;
case 0x72c1e6:c.instructions+=3;goto B72c1e6;
case 0x72c1e8:c.instructions+=2;goto B72c1e8;
case 0x72c1e9:c.instructions+=1;goto B72c1e9;
case 0x72c1ee:goto L72c1ee;
case 0x72c1f3:c.instructions+=4;goto B72c1f3;
case 0x72c1f6:c.instructions+=3;goto B72c1f6;
case 0x72c1f8:c.instructions+=2;goto B72c1f8;
case 0x72c1fb:c.instructions+=1;goto B72c1fb;
case 0x72c1fd:goto L72c1fd;
case 0x72c1ff:goto L72c1ff;
case 0x72c204:goto L72c204;
case 0x72c207:c.instructions+=3;goto B72c207;
case 0x72c208:c.instructions+=2;goto B72c208;
case 0x72c209:c.instructions+=1;goto B72c209;
case 0x72c210:goto L72c210;
case 0x72c211:c.instructions+=4;goto B72c211;
case 0x72c214:c.instructions+=3;goto B72c214;
case 0x72c216:c.instructions+=2;goto B72c216;
case 0x72c217:c.instructions+=1;goto B72c217;
case 0x72c21c:goto L72c21c;
case 0x72c223:c.instructions+=3;goto B72c223;
case 0x72c226:c.instructions+=2;goto B72c226;
case 0x72c229:c.instructions+=1;goto B72c229;
case 0x72c22b:goto L72c22b;
case 0x72c22d:goto L72c22d;
case 0x72c231:c.instructions+=4;goto B72c231;
case 0x72c235:c.instructions+=3;goto B72c235;
case 0x72c236:c.instructions+=2;goto B72c236;
case 0x72c238:c.instructions+=1;goto B72c238;
case 0x72c23e:goto L72c23e;
case 0x72c241:c.instructions+=3;goto B72c241;
case 0x72c243:c.instructions+=2;goto B72c243;
case 0x72c246:c.instructions+=1;goto B72c246;
case 0x72c248:goto L72c248;
case 0x72c24a:c.instructions+=5;goto B72c24a;
case 0x72c24b:c.instructions+=4;goto B72c24b;
case 0x72c24d:c.instructions+=3;goto B72c24d;
case 0x72c24e:c.instructions+=2;goto B72c24e;
case 0x72c250:c.instructions+=1;goto B72c250;
case 0x72c255:goto L72c255;
case 0x72c258:c.instructions+=11;goto B72c258;
case 0x72c25b:c.instructions+=10;goto B72c25b;
case 0x72c25c:c.instructions+=9;goto B72c25c;
case 0x72c25f:c.instructions+=8;goto B72c25f;
case 0x72c262:c.instructions+=7;goto B72c262;
case 0x72c265:c.instructions+=6;goto B72c265;
case 0x72c268:c.instructions+=5;goto B72c268;
case 0x72c269:c.instructions+=4;goto B72c269;
case 0x72c26b:c.instructions+=3;goto B72c26b;
case 0x72c26c:c.instructions+=2;goto B72c26c;
case 0x72c26d:c.instructions+=1;goto B72c26d;
case 0x72c270:goto L72c270;
case 0x72c271:c.instructions+=7;goto B72c271;
case 0x72c273:c.instructions+=6;goto B72c273;
case 0x72c276:c.instructions+=5;goto B72c276;
case 0x72c277:c.instructions+=4;goto B72c277;
case 0x72c279:c.instructions+=3;goto B72c279;
case 0x72c27b:c.instructions+=2;goto B72c27b;
case 0x72c27e:c.instructions+=1;goto B72c27e;
case 0x72c283:goto L72c283;
case 0x72c284:c.instructions+=2;goto B72c284;
case 0x72c286:c.instructions+=1;goto B72c286;
case 0x72c289:goto L72c289;
case 0x72c28d:c.instructions+=3;goto B72c28d;
case 0x72c293:c.instructions+=2;goto B72c293;
case 0x72c295:c.instructions+=1;goto B72c295;
case 0x72c297:goto L72c297;
case 0x72c29c:goto L72c29c;
case 0x72c29e:goto L72c29e;
case 0x72c2a3:goto L72c2a3;
case 0x72c2a4:c.instructions+=2;goto B72c2a4;
case 0x72c2a5:c.instructions+=1;goto B72c2a5;
case 0x72c2a6:goto L72c2a6;
case 0x72c2a7:c.instructions+=2;goto B72c2a7;
case 0x72c2a9:c.instructions+=1;goto B72c2a9;
case 0x72c2ae:goto L72c2ae;
case 0x72c2b3:c.instructions+=1;goto B72c2b3;
case 0x72c2b5:goto L72c2b5;
case 0x72c2b6:c.instructions+=1;goto B72c2b6;
case 0x72c2bb:goto L72c2bb;
case 0x72c2bc:goto L72c2bc;
case 0x72c2be:c.instructions+=2;goto B72c2be;
case 0x72c2bf:c.instructions+=1;goto B72c2bf;
case 0x72c2c2:goto L72c2c2;
case 0x72c2c3:c.instructions+=7;goto B72c2c3;
case 0x72c2c5:c.instructions+=6;goto B72c2c5;
case 0x72c2c8:c.instructions+=5;goto B72c2c8;
case 0x72c2cb:c.instructions+=4;goto B72c2cb;
case 0x72c2cc:c.instructions+=3;goto B72c2cc;
case 0x72c2ce:c.instructions+=2;goto B72c2ce;
case 0x72c2d0:c.instructions+=1;goto B72c2d0;
case 0x72c2d2:goto L72c2d2;
case 0x72c2d4:c.instructions+=1;goto B72c2d4;
case 0x72c2d6:goto L72c2d6;
case 0x72c2d8:c.instructions+=1;goto B72c2d8;
case 0x72c2da:goto L72c2da;
case 0x72c2dc:goto L72c2dc;
case 0x72c2de:c.instructions+=2;goto B72c2de;
case 0x72c2e0:c.instructions+=1;goto B72c2e0;
case 0x72c2e2:goto L72c2e2;
case 0x72c2e4:goto L72c2e4;
case 0x72c2e6:c.instructions+=7;goto B72c2e6;
case 0x72c2ea:c.instructions+=6;goto B72c2ea;
case 0x72c2eb:c.instructions+=5;goto B72c2eb;
case 0x72c2ee:c.instructions+=4;goto B72c2ee;
case 0x72c2ef:c.instructions+=3;goto B72c2ef;
case 0x72c2f1:c.instructions+=2;goto B72c2f1;
case 0x72c2f2:c.instructions+=1;goto B72c2f2;
case 0x72c2f7:goto L72c2f7;
case 0x72c2f9:c.instructions+=3;goto B72c2f9;
case 0x72c2fa:c.instructions+=2;goto B72c2fa;
case 0x72c2fd:c.instructions+=1;goto B72c2fd;
case 0x72c2ff:goto L72c2ff;
case 0x72c303:c.instructions+=4;goto B72c303;
case 0x72c304:c.instructions+=3;goto B72c304;
case 0x72c305:c.instructions+=2;goto B72c305;
case 0x72c306:c.instructions+=1;goto B72c306;
case 0x72c30b:goto L72c30b;
case 0x72c30c:c.instructions+=1;goto B72c30c;
case 0x72c311:goto L72c311;
case 0x72c314:goto L72c314;
case 0x72c317:c.instructions+=3;goto B72c317;
case 0x72c318:c.instructions+=2;goto B72c318;
case 0x72c31a:c.instructions+=1;goto B72c31a;
case 0x72c31b:goto L72c31b;
case 0x72c31c:c.instructions+=2;goto B72c31c;
case 0x72c31d:c.instructions+=1;goto B72c31d;
case 0x72c31e:goto L72c31e;
case 0x72c31f:c.instructions+=3;goto B72c31f;
case 0x72c321:c.instructions+=2;goto B72c321;
case 0x72c328:c.instructions+=1;goto B72c328;
case 0x72c32a:goto L72c32a;
case 0x72c331:c.instructions+=2;goto B72c331;
case 0x72c333:c.instructions+=1;goto B72c333;
case 0x72c335:goto L72c335;
case 0x72c337:c.instructions+=1;goto B72c337;
case 0x72c33c:goto L72c33c;
case 0x72c340:c.instructions+=2;goto B72c340;
case 0x72c341:c.instructions+=1;goto B72c341;
case 0x72c343:goto L72c343;
case 0x72c34a:c.instructions+=3;goto B72c34a;
case 0x72c34b:c.instructions+=2;goto B72c34b;
case 0x72c34d:c.instructions+=1;goto B72c34d;
case 0x72c34f:goto L72c34f;
case 0x72c352:c.instructions+=2;goto B72c352;
case 0x72c353:c.instructions+=1;goto B72c353;
case 0x72c354:goto L72c354;
case 0x72c356:c.instructions+=2;goto B72c356;
case 0x72c357:c.instructions+=1;goto B72c357;
case 0x72c360:goto L72c360;
case 0x72c361:c.instructions+=8;goto B72c361;
case 0x72c363:c.instructions+=7;goto B72c363;
case 0x72c364:c.instructions+=6;goto B72c364;
case 0x72c365:c.instructions+=5;goto B72c365;
case 0x72c366:c.instructions+=4;goto B72c366;
case 0x72c369:c.instructions+=3;goto B72c369;
case 0x72c36c:c.instructions+=2;goto B72c36c;
case 0x72c36f:c.instructions+=1;goto B72c36f;
case 0x72c372:goto L72c372;
case 0x72c378:c.instructions+=1;goto B72c378;
case 0x72c37a:goto L72c37a;
case 0x72c37e:c.instructions+=5;goto B72c37e;
case 0x72c380:c.instructions+=4;goto B72c380;
case 0x72c384:c.instructions+=3;goto B72c384;
case 0x72c388:c.instructions+=2;goto B72c388;
case 0x72c38b:c.instructions+=1;goto B72c38b;
case 0x72c38d:goto L72c38d;
case 0x72c38f:goto L72c38f;
case 0x72c393:c.instructions+=22;goto B72c393;
case 0x72c395:c.instructions+=21;goto B72c395;
case 0x72c399:c.instructions+=20;goto B72c399;
case 0x72c39b:c.instructions+=19;goto B72c39b;
case 0x72c39f:c.instructions+=18;goto B72c39f;
case 0x72c3a1:c.instructions+=17;goto B72c3a1;
case 0x72c3a5:c.instructions+=16;goto B72c3a5;
case 0x72c3a7:c.instructions+=15;goto B72c3a7;
case 0x72c3a9:c.instructions+=14;goto B72c3a9;
case 0x72c3ad:c.instructions+=13;goto B72c3ad;
case 0x72c3af:c.instructions+=12;goto B72c3af;
case 0x72c3b3:c.instructions+=11;goto B72c3b3;
case 0x72c3b5:c.instructions+=10;goto B72c3b5;
case 0x72c3b9:c.instructions+=9;goto B72c3b9;
case 0x72c3bb:c.instructions+=8;goto B72c3bb;
case 0x72c3bf:c.instructions+=7;goto B72c3bf;
case 0x72c3c1:c.instructions+=6;goto B72c3c1;
case 0x72c3c5:c.instructions+=5;goto B72c3c5;
case 0x72c3c9:c.instructions+=4;goto B72c3c9;
case 0x72c3cd:c.instructions+=3;goto B72c3cd;
case 0x72c3d1:c.instructions+=2;goto B72c3d1;
case 0x72c3d4:c.instructions+=1;goto B72c3d4;
case 0x72c3d6:goto L72c3d6;
case 0x72c3d8:c.instructions+=5;goto B72c3d8;
case 0x72c3d9:c.instructions+=4;goto B72c3d9;
case 0x72c3da:c.instructions+=3;goto B72c3da;
case 0x72c3db:c.instructions+=2;goto B72c3db;
case 0x72c3dc:c.instructions+=1;goto B72c3dc;
case 0x72c3e0:goto L72c3e0;
case 0x72c3e1:c.instructions+=9;goto B72c3e1;
case 0x72c3e3:c.instructions+=8;goto B72c3e3;
case 0x72c3e4:c.instructions+=7;goto B72c3e4;
case 0x72c3e5:c.instructions+=6;goto B72c3e5;
case 0x72c3e6:c.instructions+=5;goto B72c3e6;
case 0x72c3e9:c.instructions+=4;goto B72c3e9;
case 0x72c3ec:c.instructions+=3;goto B72c3ec;
case 0x72c3ef:c.instructions+=2;goto B72c3ef;
case 0x72c3f4:c.instructions+=1;goto B72c3f4;
case 0x72c3f8:goto L72c3f8;
case 0x72c3fe:c.instructions+=1;goto B72c3fe;
case 0x72c400:goto L72c400;
case 0x72c406:c.instructions+=5;goto B72c406;
case 0x72c40a:c.instructions+=4;goto B72c40a;
case 0x72c410:c.instructions+=3;goto B72c410;
case 0x72c416:c.instructions+=2;goto B72c416;
case 0x72c419:c.instructions+=1;goto B72c419;
case 0x72c41b:goto L72c41b;
case 0x72c41d:goto L72c41d;
case 0x72c423:c.instructions+=1;goto B72c423;
case 0x72c425:goto L72c425;
case 0x72c42b:c.instructions+=1;goto B72c42b;
case 0x72c42d:goto L72c42d;
case 0x72c432:c.instructions+=17;goto B72c432;
case 0x72c437:c.instructions+=16;goto B72c437;
case 0x72c43c:c.instructions+=15;goto B72c43c;
case 0x72c441:c.instructions+=14;goto B72c441;
case 0x72c444:c.instructions+=13;goto B72c444;
case 0x72c447:c.instructions+=12;goto B72c447;
case 0x72c44a:c.instructions+=11;goto B72c44a;
case 0x72c44d:c.instructions+=10;goto B72c44d;
case 0x72c452:c.instructions+=9;goto B72c452;
case 0x72c457:c.instructions+=8;goto B72c457;
case 0x72c45c:c.instructions+=7;goto B72c45c;
case 0x72c461:c.instructions+=6;goto B72c461;
case 0x72c466:c.instructions+=5;goto B72c466;
case 0x72c46b:c.instructions+=4;goto B72c46b;
case 0x72c470:c.instructions+=3;goto B72c470;
case 0x72c475:c.instructions+=2;goto B72c475;
case 0x72c478:c.instructions+=1;goto B72c478;
case 0x72c47a:goto L72c47a;
case 0x72c47b:c.instructions+=4;goto B72c47b;
case 0x72c47c:c.instructions+=3;goto B72c47c;
case 0x72c47d:c.instructions+=2;goto B72c47d;
case 0x72c47e:c.instructions+=1;goto B72c47e;
case 0x72c480:goto L72c480;
case 0x72c481:c.instructions+=7;goto B72c481;
case 0x72c483:c.instructions+=6;goto B72c483;
case 0x72c484:c.instructions+=5;goto B72c484;
case 0x72c485:c.instructions+=4;goto B72c485;
case 0x72c486:c.instructions+=3;goto B72c486;
case 0x72c489:c.instructions+=2;goto B72c489;
case 0x72c48c:c.instructions+=1;goto B72c48c;
case 0x72c48f:goto L72c48f;
case 0x72c495:c.instructions+=1;goto B72c495;
case 0x72c497:goto L72c497;
case 0x72c49b:c.instructions+=3;goto B72c49b;
case 0x72c49f:c.instructions+=2;goto B72c49f;
case 0x72c4a2:c.instructions+=1;goto B72c4a2;
case 0x72c4a4:goto L72c4a4;
case 0x72c4a6:goto L72c4a6;
case 0x72c4aa:c.instructions+=18;goto B72c4aa;
case 0x72c4ae:c.instructions+=17;goto B72c4ae;
case 0x72c4b2:c.instructions+=16;goto B72c4b2;
case 0x72c4b6:c.instructions+=15;goto B72c4b6;
case 0x72c4ba:c.instructions+=14;goto B72c4ba;
case 0x72c4be:c.instructions+=13;goto B72c4be;
case 0x72c4c2:c.instructions+=12;goto B72c4c2;
case 0x72c4c6:c.instructions+=11;goto B72c4c6;
case 0x72c4c8:c.instructions+=10;goto B72c4c8;
case 0x72c4cc:c.instructions+=9;goto B72c4cc;
case 0x72c4d0:c.instructions+=8;goto B72c4d0;
case 0x72c4d4:c.instructions+=7;goto B72c4d4;
case 0x72c4d8:c.instructions+=6;goto B72c4d8;
case 0x72c4dc:c.instructions+=5;goto B72c4dc;
case 0x72c4e0:c.instructions+=4;goto B72c4e0;
case 0x72c4e4:c.instructions+=3;goto B72c4e4;
case 0x72c4e8:c.instructions+=2;goto B72c4e8;
case 0x72c4eb:c.instructions+=1;goto B72c4eb;
case 0x72c4ed:goto L72c4ed;
case 0x72c4ee:c.instructions+=4;goto B72c4ee;
case 0x72c4ef:c.instructions+=3;goto B72c4ef;
case 0x72c4f0:c.instructions+=2;goto B72c4f0;
case 0x72c4f1:c.instructions+=1;goto B72c4f1;
case 0x72c4f2:goto L72c4f2;
case 0x72c4f3:c.instructions+=6;goto B72c4f3;
case 0x72c4f5:c.instructions+=5;goto B72c4f5;
case 0x72c4f7:c.instructions+=4;goto B72c4f7;
case 0x72c4fa:c.instructions+=3;goto B72c4fa;
case 0x72c4fb:c.instructions+=2;goto B72c4fb;
case 0x72c4fc:c.instructions+=1;goto B72c4fc;
case 0x72c4fe:goto L72c4fe;
case 0x72c500:c.instructions+=3;goto B72c500;
case 0x72c503:c.instructions+=2;goto B72c503;
case 0x72c509:c.instructions+=1;goto B72c509;
case 0x72c50b:goto L72c50b;
case 0x72c50d:c.instructions+=3;goto B72c50d;
case 0x72c50f:c.instructions+=2;goto B72c50f;
case 0x72c512:c.instructions+=1;goto B72c512;
case 0x72c518:goto L72c518;
case 0x72c51a:c.instructions+=3;goto B72c51a;
case 0x72c51c:c.instructions+=2;goto B72c51c;
case 0x72c51e:c.instructions+=1;goto B72c51e;
case 0x72c520:goto L72c520;
case 0x72c523:c.instructions+=3;goto B72c523;
case 0x72c526:c.instructions+=2;goto B72c526;
case 0x72c528:c.instructions+=1;goto B72c528;
case 0x72c529:goto L72c529;
case 0x72c52c:c.instructions+=13;goto B72c52c;
case 0x72c52e:c.instructions+=12;goto B72c52e;
case 0x72c530:c.instructions+=11;goto B72c530;
case 0x72c533:c.instructions+=10;goto B72c533;
case 0x72c535:c.instructions+=9;goto B72c535;
case 0x72c538:c.instructions+=8;goto B72c538;
case 0x72c539:c.instructions+=7;goto B72c539;
case 0x72c53b:c.instructions+=6;goto B72c53b;
case 0x72c53d:c.instructions+=5;goto B72c53d;
case 0x72c540:c.instructions+=4;goto B72c540;
case 0x72c542:c.instructions+=3;goto B72c542;
case 0x72c544:c.instructions+=2;goto B72c544;
case 0x72c546:c.instructions+=1;goto B72c546;
case 0x72c548:goto L72c548;
case 0x72c549:goto L72c549;
case 0x72c54b:c.instructions+=2;goto B72c54b;
case 0x72c54d:c.instructions+=1;goto B72c54d;
case 0x72c54f:goto L72c54f;
case 0x72c552:c.instructions+=4;goto B72c552;
case 0x72c555:c.instructions+=3;goto B72c555;
case 0x72c557:c.instructions+=2;goto B72c557;
case 0x72c55a:c.instructions+=1;goto B72c55a;
case 0x72c55c:goto L72c55c;
case 0x72c55f:c.instructions+=13;goto B72c55f;
case 0x72c561:c.instructions+=12;goto B72c561;
case 0x72c563:c.instructions+=11;goto B72c563;
case 0x72c566:c.instructions+=10;goto B72c566;
case 0x72c568:c.instructions+=9;goto B72c568;
case 0x72c56b:c.instructions+=8;goto B72c56b;
case 0x72c56c:c.instructions+=7;goto B72c56c;
case 0x72c56e:c.instructions+=6;goto B72c56e;
case 0x72c570:c.instructions+=5;goto B72c570;
case 0x72c573:c.instructions+=4;goto B72c573;
case 0x72c575:c.instructions+=3;goto B72c575;
case 0x72c577:c.instructions+=2;goto B72c577;
case 0x72c579:c.instructions+=1;goto B72c579;
case 0x72c57b:goto L72c57b;
case 0x72c57d:c.instructions+=5;goto B72c57d;
case 0x72c57e:c.instructions+=4;goto B72c57e;
case 0x72c580:c.instructions+=3;goto B72c580;
case 0x72c581:c.instructions+=2;goto B72c581;
case 0x72c582:c.instructions+=1;goto B72c582;
case 0x72c583:goto L72c583;
case 0x72c584:c.instructions+=20;goto B72c584;
case 0x72c586:c.instructions+=19;goto B72c586;
case 0x72c589:c.instructions+=18;goto B72c589;
case 0x72c58a:c.instructions+=17;goto B72c58a;
case 0x72c58d:c.instructions+=16;goto B72c58d;
case 0x72c593:c.instructions+=15;goto B72c593;
case 0x72c596:c.instructions+=14;goto B72c596;
case 0x72c598:c.instructions+=13;goto B72c598;
case 0x72c59b:c.instructions+=12;goto B72c59b;
case 0x72c59c:c.instructions+=11;goto B72c59c;
case 0x72c59e:c.instructions+=10;goto B72c59e;
case 0x72c59f:c.instructions+=9;goto B72c59f;
case 0x72c5a1:c.instructions+=8;goto B72c5a1;
case 0x72c5a3:c.instructions+=7;goto B72c5a3;
case 0x72c5a5:c.instructions+=6;goto B72c5a5;
case 0x72c5a8:c.instructions+=5;goto B72c5a8;
case 0x72c5aa:c.instructions+=4;goto B72c5aa;
case 0x72c5ac:c.instructions+=3;goto B72c5ac;
case 0x72c5ae:c.instructions+=2;goto B72c5ae;
case 0x72c5b1:c.instructions+=1;goto B72c5b1;
case 0x72c5b3:goto L72c5b3;
case 0x72c5b6:c.instructions+=16;goto B72c5b6;
case 0x72c5b9:c.instructions+=15;goto B72c5b9;
case 0x72c5bb:c.instructions+=14;goto B72c5bb;
case 0x72c5bd:c.instructions+=13;goto B72c5bd;
case 0x72c5c0:c.instructions+=12;goto B72c5c0;
case 0x72c5c3:c.instructions+=11;goto B72c5c3;
case 0x72c5c6:c.instructions+=10;goto B72c5c6;
case 0x72c5c8:c.instructions+=9;goto B72c5c8;
case 0x72c5cb:c.instructions+=8;goto B72c5cb;
case 0x72c5cd:c.instructions+=7;goto B72c5cd;
case 0x72c5cf:c.instructions+=6;goto B72c5cf;
case 0x72c5d2:c.instructions+=5;goto B72c5d2;
case 0x72c5d8:c.instructions+=4;goto B72c5d8;
case 0x72c5da:c.instructions+=3;goto B72c5da;
case 0x72c5dc:c.instructions+=2;goto B72c5dc;
case 0x72c5df:c.instructions+=1;goto B72c5df;
case 0x72c5e1:goto L72c5e1;
case 0x72c5e3:goto L72c5e3;
case 0x72c5e6:c.instructions+=4;goto B72c5e6;
case 0x72c5ec:c.instructions+=3;goto B72c5ec;
case 0x72c5ee:c.instructions+=2;goto B72c5ee;
case 0x72c5f1:c.instructions+=1;goto B72c5f1;
case 0x72c5f3:goto L72c5f3;
case 0x72c5f5:goto L72c5f5;
case 0x72c5f7:c.instructions+=5;goto B72c5f7;
case 0x72c5f9:c.instructions+=4;goto B72c5f9;
case 0x72c5fb:c.instructions+=3;goto B72c5fb;
case 0x72c5fd:c.instructions+=2;goto B72c5fd;
case 0x72c600:c.instructions+=1;goto B72c600;
case 0x72c602:goto L72c602;
case 0x72c603:c.instructions+=1;goto B72c603;
case 0x72c605:goto L72c605;
case 0x72c607:c.instructions+=2;goto B72c607;
case 0x72c609:c.instructions+=1;goto B72c609;
case 0x72c60b:goto L72c60b;
case 0x72c60e:c.instructions+=6;goto B72c60e;
case 0x72c611:c.instructions+=5;goto B72c611;
case 0x72c613:c.instructions+=4;goto B72c613;
case 0x72c615:c.instructions+=3;goto B72c615;
case 0x72c617:c.instructions+=2;goto B72c617;
case 0x72c619:c.instructions+=1;goto B72c619;
case 0x72c61b:goto L72c61b;
case 0x72c61e:c.instructions+=16;goto B72c61e;
case 0x72c621:c.instructions+=15;goto B72c621;
case 0x72c623:c.instructions+=14;goto B72c623;
case 0x72c626:c.instructions+=13;goto B72c626;
case 0x72c628:c.instructions+=12;goto B72c628;
case 0x72c62a:c.instructions+=11;goto B72c62a;
case 0x72c62c:c.instructions+=10;goto B72c62c;
case 0x72c62e:c.instructions+=9;goto B72c62e;
case 0x72c631:c.instructions+=8;goto B72c631;
case 0x72c633:c.instructions+=7;goto B72c633;
case 0x72c636:c.instructions+=6;goto B72c636;
case 0x72c639:c.instructions+=5;goto B72c639;
case 0x72c63f:c.instructions+=4;goto B72c63f;
case 0x72c641:c.instructions+=3;goto B72c641;
case 0x72c643:c.instructions+=2;goto B72c643;
case 0x72c646:c.instructions+=1;goto B72c646;
case 0x72c648:goto L72c648;
case 0x72c64a:goto L72c64a;
case 0x72c64d:c.instructions+=4;goto B72c64d;
case 0x72c653:c.instructions+=3;goto B72c653;
case 0x72c655:c.instructions+=2;goto B72c655;
case 0x72c658:c.instructions+=1;goto B72c658;
case 0x72c65a:goto L72c65a;
case 0x72c65c:goto L72c65c;
case 0x72c65e:c.instructions+=7;goto B72c65e;
case 0x72c65f:c.instructions+=6;goto B72c65f;
case 0x72c661:c.instructions+=5;goto B72c661;
case 0x72c663:c.instructions+=4;goto B72c663;
case 0x72c665:c.instructions+=3;goto B72c665;
case 0x72c667:c.instructions+=2;goto B72c667;
case 0x72c66a:c.instructions+=1;goto B72c66a;
case 0x72c66c:goto L72c66c;
case 0x72c66f:c.instructions+=2;goto B72c66f;
case 0x72c671:c.instructions+=1;goto B72c671;
case 0x72c673:goto L72c673;
case 0x72c675:goto L72c675;
case 0x72c676:c.instructions+=3;goto B72c676;
case 0x72c677:c.instructions+=2;goto B72c677;
case 0x72c678:c.instructions+=1;goto B72c678;
case 0x72c679:goto L72c679;
case 0x72c67a:c.instructions+=5;goto B72c67a;
case 0x72c67c:c.instructions+=4;goto B72c67c;
case 0x72c67d:c.instructions+=3;goto B72c67d;
case 0x72c681:c.instructions+=2;goto B72c681;
case 0x72c682:c.instructions+=1;goto B72c682;
case 0x72c684:goto L72c684;
case 0x72c687:c.instructions+=4;goto B72c687;
case 0x72c68a:c.instructions+=3;goto B72c68a;
case 0x72c68d:c.instructions+=2;goto B72c68d;
case 0x72c68f:c.instructions+=1;goto B72c68f;
case 0x72c691:goto L72c691;
case 0x72c694:c.instructions+=4;goto B72c694;
case 0x72c696:c.instructions+=3;goto B72c696;
case 0x72c699:c.instructions+=2;goto B72c699;
case 0x72c69c:c.instructions+=1;goto B72c69c;
case 0x72c69f:goto L72c69f;
case 0x72c6a1:c.instructions+=1;goto B72c6a1;
case 0x72c6a3:goto L72c6a3;
case 0x72c6a6:c.instructions+=6;goto B72c6a6;
case 0x72c6a9:c.instructions+=5;goto B72c6a9;
case 0x72c6aa:c.instructions+=4;goto B72c6aa;
case 0x72c6ad:c.instructions+=3;goto B72c6ad;
case 0x72c6b3:c.instructions+=2;goto B72c6b3;
case 0x72c6b4:c.instructions+=1;goto B72c6b4;
case 0x72c6b9:goto L72c6b9;
case 0x72c6bc:c.instructions+=2;goto B72c6bc;
case 0x72c6bf:c.instructions+=1;goto B72c6bf;
case 0x72c6c2:goto L72c6c2;
case 0x72c6c5:c.instructions+=3;goto B72c6c5;
case 0x72c6c8:c.instructions+=2;goto B72c6c8;
case 0x72c6ca:c.instructions+=1;goto B72c6ca;
case 0x72c6cf:goto L72c6cf;
case 0x72c6d1:goto L72c6d1;
case 0x72c6d3:c.instructions+=6;goto B72c6d3;
case 0x72c6d6:c.instructions+=5;goto B72c6d6;
case 0x72c6d7:c.instructions+=4;goto B72c6d7;
case 0x72c6da:c.instructions+=3;goto B72c6da;
case 0x72c6e0:c.instructions+=2;goto B72c6e0;
case 0x72c6e1:c.instructions+=1;goto B72c6e1;
case 0x72c6e6:goto L72c6e6;
case 0x72c6e9:c.instructions+=6;goto B72c6e9;
case 0x72c6f0:c.instructions+=5;goto B72c6f0;
case 0x72c6f1:c.instructions+=4;goto B72c6f1;
case 0x72c6f2:c.instructions+=3;goto B72c6f2;
case 0x72c6f5:c.instructions+=2;goto B72c6f5;
case 0x72c6f7:c.instructions+=1;goto B72c6f7;
case 0x72c6fc:goto L72c6fc;
case 0x72c6ff:c.instructions+=4;goto B72c6ff;
case 0x72c702:c.instructions+=3;goto B72c702;
case 0x72c705:c.instructions+=2;goto B72c705;
case 0x72c707:c.instructions+=1;goto B72c707;
case 0x72c709:goto L72c709;
case 0x72c70c:c.instructions+=6;goto B72c70c;
case 0x72c712:c.instructions+=5;goto B72c712;
case 0x72c713:c.instructions+=4;goto B72c713;
case 0x72c714:c.instructions+=3;goto B72c714;
case 0x72c717:c.instructions+=2;goto B72c717;
case 0x72c719:c.instructions+=1;goto B72c719;
case 0x72c71e:goto L72c71e;
case 0x72c721:c.instructions+=11;goto B72c721;
case 0x72c724:c.instructions+=10;goto B72c724;
case 0x72c727:c.instructions+=9;goto B72c727;
case 0x72c728:c.instructions+=8;goto B72c728;
case 0x72c72a:c.instructions+=7;goto B72c72a;
case 0x72c72d:c.instructions+=6;goto B72c72d;
case 0x72c72f:c.instructions+=5;goto B72c72f;
case 0x72c731:c.instructions+=4;goto B72c731;
case 0x72c732:c.instructions+=3;goto B72c732;
case 0x72c739:c.instructions+=2;goto B72c739;
case 0x72c73a:c.instructions+=1;goto B72c73a;
case 0x72c73f:goto L72c73f;
case 0x72c742:c.instructions+=8;goto B72c742;
case 0x72c745:c.instructions+=7;goto B72c745;
case 0x72c748:c.instructions+=6;goto B72c748;
case 0x72c74b:c.instructions+=5;goto B72c74b;
case 0x72c74d:c.instructions+=4;goto B72c74d;
case 0x72c750:c.instructions+=3;goto B72c750;
case 0x72c753:c.instructions+=2;goto B72c753;
case 0x72c756:c.instructions+=1;goto B72c756;
case 0x72c758:goto L72c758;
case 0x72c75c:c.instructions+=4;goto B72c75c;
case 0x72c760:c.instructions+=3;goto B72c760;
case 0x72c761:c.instructions+=2;goto B72c761;
case 0x72c762:c.instructions+=1;goto B72c762;
case 0x72c763:goto L72c763;
case 0x72c766:c.instructions+=8;goto B72c766;
case 0x72c768:c.instructions+=7;goto B72c768;
case 0x72c76f:c.instructions+=6;goto B72c76f;
case 0x72c773:c.instructions+=5;goto B72c773;
case 0x72c775:c.instructions+=4;goto B72c775;
case 0x72c776:c.instructions+=3;goto B72c776;
case 0x72c779:c.instructions+=2;goto B72c779;
case 0x72c77b:c.instructions+=1;goto B72c77b;
case 0x72c77d:goto L72c77d;
case 0x72c77f:goto L72c77f;
case 0x72c781:c.instructions+=5;goto B72c781;
case 0x72c784:c.instructions+=4;goto B72c784;
case 0x72c785:c.instructions+=3;goto B72c785;
case 0x72c786:c.instructions+=2;goto B72c786;
case 0x72c787:c.instructions+=1;goto B72c787;
case 0x72c78c:goto L72c78c;
case 0x72c78f:c.instructions+=10;goto B72c78f;
case 0x72c792:c.instructions+=9;goto B72c792;
case 0x72c796:c.instructions+=8;goto B72c796;
case 0x72c798:c.instructions+=7;goto B72c798;
case 0x72c79a:c.instructions+=6;goto B72c79a;
case 0x72c79d:c.instructions+=5;goto B72c79d;
case 0x72c79f:c.instructions+=4;goto B72c79f;
case 0x72c7a2:c.instructions+=3;goto B72c7a2;
case 0x72c7a4:c.instructions+=2;goto B72c7a4;
case 0x72c7a5:c.instructions+=1;goto B72c7a5;
case 0x72c7a6:goto L72c7a6;
case 0x72c7a7:c.instructions+=10;goto B72c7a7;
case 0x72c7a9:c.instructions+=9;goto B72c7a9;
case 0x72c7aa:c.instructions+=8;goto B72c7aa;
case 0x72c7ab:c.instructions+=7;goto B72c7ab;
case 0x72c7ac:c.instructions+=6;goto B72c7ac;
case 0x72c7af:c.instructions+=5;goto B72c7af;
case 0x72c7b0:c.instructions+=4;goto B72c7b0;
case 0x72c7b3:c.instructions+=3;goto B72c7b3;
case 0x72c7b6:c.instructions+=2;goto B72c7b6;
case 0x72c7b8:c.instructions+=1;goto B72c7b8;
case 0x72c7ba:goto L72c7ba;
case 0x72c7bc:c.instructions+=1;goto B72c7bc;
case 0x72c7c1:goto L72c7c1;
case 0x72c7c3:c.instructions+=11;goto B72c7c3;
case 0x72c7c6:c.instructions+=10;goto B72c7c6;
case 0x72c7c9:c.instructions+=9;goto B72c7c9;
case 0x72c7cc:c.instructions+=8;goto B72c7cc;
case 0x72c7cf:c.instructions+=7;goto B72c7cf;
case 0x72c7d2:c.instructions+=6;goto B72c7d2;
case 0x72c7d4:c.instructions+=5;goto B72c7d4;
case 0x72c7d7:c.instructions+=4;goto B72c7d7;
case 0x72c7d9:c.instructions+=3;goto B72c7d9;
case 0x72c7db:c.instructions+=2;goto B72c7db;
case 0x72c7de:c.instructions+=1;goto B72c7de;
case 0x72c7e0:goto L72c7e0;
case 0x72c7e1:goto L72c7e1;
case 0x72c7e4:c.instructions+=2;goto B72c7e4;
case 0x72c7e7:c.instructions+=1;goto B72c7e7;
case 0x72c7e9:goto L72c7e9;
case 0x72c7ec:c.instructions+=2;goto B72c7ec;
case 0x72c7ef:c.instructions+=1;goto B72c7ef;
case 0x72c7f1:goto L72c7f1;
case 0x72c7f3:c.instructions+=1;goto B72c7f3;
case 0x72c7f5:goto L72c7f5;
case 0x72c7f8:c.instructions+=6;goto B72c7f8;
case 0x72c7f9:c.instructions+=5;goto B72c7f9;
case 0x72c7fc:c.instructions+=4;goto B72c7fc;
case 0x72c7fd:c.instructions+=3;goto B72c7fd;
case 0x72c800:c.instructions+=2;goto B72c800;
case 0x72c803:c.instructions+=1;goto B72c803;
case 0x72c808:goto L72c808;
case 0x72c80b:c.instructions+=2;goto B72c80b;
case 0x72c80d:c.instructions+=1;goto B72c80d;
case 0x72c80f:goto L72c80f;
case 0x72c812:c.instructions+=1;goto B72c812;
case 0x72c814:goto L72c814;
case 0x72c817:c.instructions+=1;goto B72c817;
case 0x72c819:goto L72c819;
case 0x72c81c:c.instructions+=4;goto B72c81c;
case 0x72c81f:c.instructions+=3;goto B72c81f;
case 0x72c822:c.instructions+=2;goto B72c822;
case 0x72c824:c.instructions+=1;goto B72c824;
case 0x72c826:goto L72c826;
case 0x72c828:c.instructions+=2;goto B72c828;
case 0x72c82a:c.instructions+=1;goto B72c82a;
case 0x72c82c:goto L72c82c;
case 0x72c82e:goto L72c82e;
case 0x72c830:goto L72c830;
case 0x72c832:c.instructions+=3;goto B72c832;
case 0x72c835:c.instructions+=2;goto B72c835;
case 0x72c836:c.instructions+=1;goto B72c836;
case 0x72c838:goto L72c838;
case 0x72c83b:goto L72c83b;
case 0x72c83d:c.instructions+=1;goto B72c83d;
case 0x72c83f:goto L72c83f;
case 0x72c842:c.instructions+=1;goto B72c842;
case 0x72c844:goto L72c844;
case 0x72c847:c.instructions+=1;goto B72c847;
case 0x72c849:goto L72c849;
case 0x72c84b:goto L72c84b;
case 0x72c84e:c.instructions+=2;goto B72c84e;
case 0x72c850:c.instructions+=1;goto B72c850;
case 0x72c856:goto L72c856;
case 0x72c858:c.instructions+=1;goto B72c858;
case 0x72c85a:goto L72c85a;
case 0x72c85b:c.instructions+=3;goto B72c85b;
case 0x72c85c:c.instructions+=2;goto B72c85c;
case 0x72c85d:c.instructions+=1;goto B72c85d;
case 0x72c85e:goto L72c85e;
case 0x72c85f:c.instructions+=9;goto B72c85f;
case 0x72c861:c.instructions+=8;goto B72c861;
case 0x72c862:c.instructions+=7;goto B72c862;
case 0x72c863:c.instructions+=6;goto B72c863;
case 0x72c866:c.instructions+=5;goto B72c866;
case 0x72c869:c.instructions+=4;goto B72c869;
case 0x72c86a:c.instructions+=3;goto B72c86a;
case 0x72c86b:c.instructions+=2;goto B72c86b;
case 0x72c86e:c.instructions+=1;goto B72c86e;
case 0x72c873:goto L72c873;
case 0x72c875:c.instructions+=4;goto B72c875;
case 0x72c878:c.instructions+=3;goto B72c878;
case 0x72c879:c.instructions+=2;goto B72c879;
case 0x72c87c:c.instructions+=1;goto B72c87c;
case 0x72c882:goto L72c882;
case 0x72c888:goto L72c888;
case 0x72c88b:c.instructions+=3;goto B72c88b;
case 0x72c88e:c.instructions+=2;goto B72c88e;
case 0x72c890:c.instructions+=1;goto B72c890;
case 0x72c892:goto L72c892;
case 0x72c895:c.instructions+=2;goto B72c895;
case 0x72c897:c.instructions+=1;goto B72c897;
case 0x72c899:goto L72c899;
case 0x72c89b:c.instructions+=1;goto B72c89b;
case 0x72c89d:goto L72c89d;
case 0x72c8a0:c.instructions+=6;goto B72c8a0;
case 0x72c8a3:c.instructions+=5;goto B72c8a3;
case 0x72c8a4:c.instructions+=4;goto B72c8a4;
case 0x72c8a7:c.instructions+=3;goto B72c8a7;
case 0x72c8aa:c.instructions+=2;goto B72c8aa;
case 0x72c8ab:c.instructions+=1;goto B72c8ab;
case 0x72c8b0:goto L72c8b0;
case 0x72c8b3:c.instructions+=1;goto B72c8b3;
case 0x72c8b5:goto L72c8b5;
case 0x72c8b8:c.instructions+=2;goto B72c8b8;
case 0x72c8b9:c.instructions+=1;goto B72c8b9;
case 0x72c8be:goto L72c8be;
case 0x72c8c1:c.instructions+=3;goto B72c8c1;
case 0x72c8c2:c.instructions+=2;goto B72c8c2;
case 0x72c8c5:c.instructions+=1;goto B72c8c5;
case 0x72c8ca:goto L72c8ca;
case 0x72c8cd:c.instructions+=4;goto B72c8cd;
case 0x72c8d1:c.instructions+=3;goto B72c8d1;
case 0x72c8d2:c.instructions+=2;goto B72c8d2;
case 0x72c8d3:c.instructions+=1;goto B72c8d3;
case 0x72c8d5:goto L72c8d5;
case 0x72c8d7:c.instructions+=1;goto B72c8d7;
case 0x72c8d9:goto L72c8d9;
case 0x72c8dc:c.instructions+=7;goto B72c8dc;
case 0x72c8df:c.instructions+=6;goto B72c8df;
case 0x72c8e2:c.instructions+=5;goto B72c8e2;
case 0x72c8e3:c.instructions+=4;goto B72c8e3;
case 0x72c8e6:c.instructions+=3;goto B72c8e6;
case 0x72c8e7:c.instructions+=2;goto B72c8e7;
case 0x72c8e8:c.instructions+=1;goto B72c8e8;
case 0x72c8ed:goto L72c8ed;
case 0x72c8f0:c.instructions+=4;goto B72c8f0;
case 0x72c8f3:c.instructions+=3;goto B72c8f3;
case 0x72c8f6:c.instructions+=2;goto B72c8f6;
case 0x72c8f9:c.instructions+=1;goto B72c8f9;
case 0x72c8fb:goto L72c8fb;
case 0x72c8fe:goto L72c8fe;
case 0x72c902:c.instructions+=1;goto B72c902;
case 0x72c904:goto L72c904;
case 0x72c907:c.instructions+=2;goto B72c907;
case 0x72c90a:c.instructions+=1;goto B72c90a;
case 0x72c90c:goto L72c90c;
case 0x72c90f:goto L72c90f;
case 0x72c911:c.instructions+=5;goto B72c911;
case 0x72c914:c.instructions+=4;goto B72c914;
case 0x72c915:c.instructions+=3;goto B72c915;
case 0x72c916:c.instructions+=2;goto B72c916;
case 0x72c919:c.instructions+=1;goto B72c919;
case 0x72c91e:goto L72c91e;
case 0x72c921:c.instructions+=2;goto B72c921;
case 0x72c924:c.instructions+=1;goto B72c924;
case 0x72c927:goto L72c927;
case 0x72c92a:goto L72c92a;
case 0x72c92b:c.instructions+=4;goto B72c92b;
case 0x72c92c:c.instructions+=3;goto B72c92c;
case 0x72c92d:c.instructions+=2;goto B72c92d;
case 0x72c92e:c.instructions+=1;goto B72c92e;
case 0x72c92f:goto L72c92f;
case 0x72c933:c.instructions+=4;goto B72c933;
case 0x72c937:c.instructions+=3;goto B72c937;
case 0x72c93d:c.instructions+=2;goto B72c93d;
case 0x72c940:c.instructions+=1;goto B72c940;
case 0x72c941:goto L72c941;
case 0x72c942:c.instructions+=7;goto B72c942;
case 0x72c944:c.instructions+=6;goto B72c944;
case 0x72c945:c.instructions+=5;goto B72c945;
case 0x72c948:c.instructions+=4;goto B72c948;
case 0x72c94c:c.instructions+=3;goto B72c94c;
case 0x72c94d:c.instructions+=2;goto B72c94d;
case 0x72c950:c.instructions+=1;goto B72c950;
case 0x72c952:goto L72c952;
case 0x72c956:c.instructions+=7;goto B72c956;
case 0x72c959:c.instructions+=6;goto B72c959;
case 0x72c95a:c.instructions+=5;goto B72c95a;
case 0x72c95b:c.instructions+=4;goto B72c95b;
case 0x72c95e:c.instructions+=3;goto B72c95e;
case 0x72c963:c.instructions+=2;goto B72c963;
case 0x72c964:c.instructions+=1;goto B72c964;
case 0x72c966:goto L72c966;
case 0x72c969:c.instructions+=1;goto B72c969;
case 0x72c96e:goto L72c96e;
case 0x72c96f:c.instructions+=3;goto B72c96f;
case 0x72c972:c.instructions+=2;goto B72c972;
case 0x72c973:c.instructions+=1;goto B72c973;
case 0x72c978:goto L72c978;
case 0x72c97a:c.instructions+=5;goto B72c97a;
case 0x72c97d:c.instructions+=4;goto B72c97d;
case 0x72c97f:c.instructions+=3;goto B72c97f;
case 0x72c980:c.instructions+=2;goto B72c980;
case 0x72c981:c.instructions+=1;goto B72c981;
case 0x72c983:goto L72c983;
case 0x72c984:c.instructions+=1;goto B72c984;
case 0x72c989:goto L72c989;
case 0x72c98b:c.instructions+=2;goto B72c98b;
case 0x72c98c:c.instructions+=1;goto B72c98c;
case 0x72c98e:goto L72c98e;
case 0x72c990:c.instructions+=1;goto B72c990;
case 0x72c995:goto L72c995;
case 0x72c997:c.instructions+=1;goto B72c997;
case 0x72c999:goto L72c999;
case 0x72c99b:c.instructions+=3;goto B72c99b;
case 0x72c99e:c.instructions+=2;goto B72c99e;
case 0x72c9a4:c.instructions+=1;goto B72c9a4;
case 0x72c9a6:goto L72c9a6;
case 0x72c9a8:c.instructions+=5;goto B72c9a8;
case 0x72c9ab:c.instructions+=4;goto B72c9ab;
case 0x72c9ae:c.instructions+=3;goto B72c9ae;
case 0x72c9b4:c.instructions+=2;goto B72c9b4;
case 0x72c9b6:c.instructions+=1;goto B72c9b6;
case 0x72c9b8:goto L72c9b8;
case 0x72c9ba:c.instructions+=5;goto B72c9ba;
case 0x72c9bb:c.instructions+=4;goto B72c9bb;
case 0x72c9bc:c.instructions+=3;goto B72c9bc;
case 0x72c9c2:c.instructions+=2;goto B72c9c2;
case 0x72c9c3:c.instructions+=1;goto B72c9c3;
case 0x72c9c8:goto L72c9c8;
case 0x72c9cb:goto L72c9cb;
case 0x72c9d1:c.instructions+=1;goto B72c9d1;
case 0x72c9d4:goto L72c9d4;
case 0x72c9d8:c.instructions+=7;goto B72c9d8;
case 0x72c9db:c.instructions+=6;goto B72c9db;
case 0x72c9dc:c.instructions+=5;goto B72c9dc;
case 0x72c9dd:c.instructions+=4;goto B72c9dd;
case 0x72c9e0:c.instructions+=3;goto B72c9e0;
case 0x72c9e1:c.instructions+=2;goto B72c9e1;
case 0x72c9e2:c.instructions+=1;goto B72c9e2;
case 0x72c9e4:goto L72c9e4;
case 0x72c9e7:c.instructions+=2;goto B72c9e7;
case 0x72c9e9:c.instructions+=1;goto B72c9e9;
case 0x72c9eb:goto L72c9eb;
case 0x72c9ee:c.instructions+=6;goto B72c9ee;
case 0x72c9ef:c.instructions+=5;goto B72c9ef;
case 0x72c9f0:c.instructions+=4;goto B72c9f0;
case 0x72c9f3:c.instructions+=3;goto B72c9f3;
case 0x72c9f4:c.instructions+=2;goto B72c9f4;
case 0x72c9f5:c.instructions+=1;goto B72c9f5;
case 0x72c9fa:goto L72c9fa;
case 0x72c9fd:c.instructions+=2;goto B72c9fd;
case 0x72c9ff:c.instructions+=1;goto B72c9ff;
case 0x72ca01:goto L72ca01;
case 0x72ca03:c.instructions+=6;goto B72ca03;
case 0x72ca05:c.instructions+=5;goto B72ca05;
case 0x72ca08:c.instructions+=4;goto B72ca08;
case 0x72ca09:c.instructions+=3;goto B72ca09;
case 0x72ca0c:c.instructions+=2;goto B72ca0c;
case 0x72ca0d:c.instructions+=1;goto B72ca0d;
case 0x72ca12:goto L72ca12;
case 0x72ca13:c.instructions+=1;goto B72ca13;
case 0x72ca14:goto L72ca14;
case 0x72ca16:goto L72ca16;
case 0x72ca17:goto L72ca17;
case 0x72ca18:c.instructions+=3;goto B72ca18;
case 0x72ca19:c.instructions+=2;goto B72ca19;
case 0x72ca1a:c.instructions+=1;goto B72ca1a;
case 0x72ca1b:goto L72ca1b;
case 0x72ca1c:c.instructions+=6;goto B72ca1c;
case 0x72ca1d:c.instructions+=5;goto B72ca1d;
case 0x72ca21:c.instructions+=4;goto B72ca21;
case 0x72ca27:c.instructions+=3;goto B72ca27;
case 0x72ca29:c.instructions+=2;goto B72ca29;
case 0x72ca2b:c.instructions+=1;goto B72ca2b;
case 0x72ca2d:goto L72ca2d;
case 0x72ca2e:c.instructions+=1;goto B72ca2e;
case 0x72ca33:goto L72ca33;
case 0x72ca36:c.instructions+=2;goto B72ca36;
case 0x72ca3d:c.instructions+=1;goto B72ca3d;
case 0x72ca3e:goto L72ca3e;
case 0x72ca3f:c.instructions+=2;goto B72ca3f;
case 0x72ca40:c.instructions+=1;goto B72ca40;
case 0x72ca41:goto L72ca41;
case 0x72ca42:c.instructions+=7;goto B72ca42;
case 0x72ca46:c.instructions+=6;goto B72ca46;
case 0x72ca47:c.instructions+=5;goto B72ca47;
case 0x72ca49:c.instructions+=4;goto B72ca49;
case 0x72ca4d:c.instructions+=3;goto B72ca4d;
case 0x72ca53:c.instructions+=2;goto B72ca53;
case 0x72ca5a:c.instructions+=1;goto B72ca5a;
case 0x72ca5c:goto L72ca5c;
case 0x72ca60:c.instructions+=1;goto B72ca60;
case 0x72ca65:goto L72ca65;
case 0x72ca66:c.instructions+=1;goto B72ca66;
case 0x72ca6b:goto L72ca6b;
case 0x72ca6c:c.instructions+=3;goto B72ca6c;
case 0x72ca6d:c.instructions+=2;goto B72ca6d;
case 0x72ca70:c.instructions+=1;goto B72ca70;
case 0x72ca72:goto L72ca72;
case 0x72ca76:goto L72ca76;
case 0x72ca7a:c.instructions+=13;goto B72ca7a;
case 0x72ca7c:c.instructions+=12;goto B72ca7c;
case 0x72ca7f:c.instructions+=11;goto B72ca7f;
case 0x72ca82:c.instructions+=10;goto B72ca82;
case 0x72ca84:c.instructions+=9;goto B72ca84;
case 0x72ca87:c.instructions+=8;goto B72ca87;
case 0x72ca8a:c.instructions+=7;goto B72ca8a;
case 0x72ca8d:c.instructions+=6;goto B72ca8d;
case 0x72ca8f:c.instructions+=5;goto B72ca8f;
case 0x72ca93:c.instructions+=4;goto B72ca93;
case 0x72ca95:c.instructions+=3;goto B72ca95;
case 0x72ca96:c.instructions+=2;goto B72ca96;
case 0x72ca99:c.instructions+=1;goto B72ca99;
case 0x72ca9e:goto L72ca9e;
case 0x72ca9f:c.instructions+=12;goto B72ca9f;
case 0x72caa0:c.instructions+=11;goto B72caa0;
case 0x72caa3:c.instructions+=10;goto B72caa3;
case 0x72caa6:c.instructions+=9;goto B72caa6;
case 0x72caa9:c.instructions+=8;goto B72caa9;
case 0x72caaf:c.instructions+=7;goto B72caaf;
case 0x72cab5:c.instructions+=6;goto B72cab5;
case 0x72cab8:c.instructions+=5;goto B72cab8;
case 0x72cab9:c.instructions+=4;goto B72cab9;
case 0x72cac3:c.instructions+=3;goto B72cac3;
case 0x72cac5:c.instructions+=2;goto B72cac5;
case 0x72cac6:c.instructions+=1;goto B72cac6;
case 0x72cac7:goto L72cac7;
case 0x72cacb:c.instructions+=8;goto B72cacb;
case 0x72cacf:c.instructions+=7;goto B72cacf;
case 0x72cad0:c.instructions+=6;goto B72cad0;
case 0x72cad4:c.instructions+=5;goto B72cad4;
case 0x72cad5:c.instructions+=4;goto B72cad5;
case 0x72cad9:c.instructions+=3;goto B72cad9;
case 0x72cada:c.instructions+=2;goto B72cada;
case 0x72cade:c.instructions+=1;goto B72cade;
case 0x72cae0:goto L72cae0;
case 0x72cae3:c.instructions+=7;goto B72cae3;
case 0x72cae7:c.instructions+=6;goto B72cae7;
case 0x72cae8:c.instructions+=5;goto B72cae8;
case 0x72cae9:c.instructions+=4;goto B72cae9;
case 0x72caea:c.instructions+=3;goto B72caea;
case 0x72caeb:c.instructions+=2;goto B72caeb;
case 0x72caec:c.instructions+=1;goto B72caec;
case 0x72caee:goto L72caee;
case 0x72caf1:c.instructions+=2;goto B72caf1;
case 0x72caf3:c.instructions+=1;goto B72caf3;
case 0x72caf5:goto L72caf5;
case 0x72caf8:c.instructions+=1;goto B72caf8;
case 0x72cafa:goto L72cafa;
case 0x72cafc:c.instructions+=7;goto B72cafc;
case 0x72cb02:c.instructions+=6;goto B72cb02;
case 0x72cb04:c.instructions+=5;goto B72cb04;
case 0x72cb06:c.instructions+=4;goto B72cb06;
case 0x72cb0b:c.instructions+=3;goto B72cb0b;
case 0x72cb0e:c.instructions+=2;goto B72cb0e;
case 0x72cb13:c.instructions+=1;goto B72cb13;
case 0x72cb15:goto L72cb15;
case 0x72cb1a:c.instructions+=1;goto B72cb1a;
case 0x72cb1c:goto L72cb1c;
case 0x72cb21:c.instructions+=3;goto B72cb21;
case 0x72cb23:c.instructions+=2;goto B72cb23;
case 0x72cb28:c.instructions+=1;goto B72cb28;
case 0x72cb2d:goto L72cb2d;
case 0x72cb30:c.instructions+=2;goto B72cb30;
case 0x72cb31:c.instructions+=1;goto B72cb31;
case 0x72cb32:goto L72cb32;
case 0x72cb34:c.instructions+=1;goto B72cb34;
case 0x72cb36:goto L72cb36;
case 0x72cb38:goto L72cb38;
case 0x72cb39:c.instructions+=3;goto B72cb39;
case 0x72cb3a:c.instructions+=2;goto B72cb3a;
case 0x72cb3b:c.instructions+=1;goto B72cb3b;
case 0x72cb3c:goto L72cb3c;
case 0x72cb40:c.instructions+=3;goto B72cb40;
case 0x72cb44:c.instructions+=2;goto B72cb44;
case 0x72cb4a:c.instructions+=1;goto B72cb4a;
case 0x72cb4b:goto L72cb4b;
case 0x72cb4c:c.instructions+=27;goto B72cb4c;
case 0x72cb4d:c.instructions+=26;goto B72cb4d;
case 0x72cb4e:c.instructions+=25;goto B72cb4e;
case 0x72cb50:c.instructions+=24;goto B72cb50;
case 0x72cb51:c.instructions+=23;goto B72cb51;
case 0x72cb53:c.instructions+=22;goto B72cb53;
case 0x72cb54:c.instructions+=21;goto B72cb54;
case 0x72cb56:c.instructions+=20;goto B72cb56;
case 0x72cb57:c.instructions+=19;goto B72cb57;
case 0x72cb5d:c.instructions+=18;goto B72cb5d;
case 0x72cb63:c.instructions+=17;goto B72cb63;
case 0x72cb64:c.instructions+=16;goto B72cb64;
case 0x72cb69:c.instructions+=15;goto B72cb69;
case 0x72cb6e:c.instructions+=14;goto B72cb6e;
case 0x72cb73:c.instructions+=13;goto B72cb73;
case 0x72cb79:c.instructions+=12;goto B72cb79;
case 0x72cb7f:c.instructions+=11;goto B72cb7f;
case 0x72cb80:c.instructions+=10;goto B72cb80;
case 0x72cb86:c.instructions+=9;goto B72cb86;
case 0x72cb8c:c.instructions+=8;goto B72cb8c;
case 0x72cb92:c.instructions+=7;goto B72cb92;
case 0x72cb98:c.instructions+=6;goto B72cb98;
case 0x72cb9d:c.instructions+=5;goto B72cb9d;
case 0x72cba3:c.instructions+=4;goto B72cba3;
case 0x72cba9:c.instructions+=3;goto B72cba9;
case 0x72cbae:c.instructions+=2;goto B72cbae;
case 0x72cbaf:c.instructions+=1;goto B72cbaf;
case 0x72cbb0:goto L72cbb0;
case 0x72cbba:c.instructions+=6;goto B72cbba;
case 0x72cbc4:c.instructions+=5;goto B72cbc4;
case 0x72cbce:c.instructions+=4;goto B72cbce;
case 0x72cbd8:c.instructions+=3;goto B72cbd8;
case 0x72cbe2:c.instructions+=2;goto B72cbe2;
case 0x72cbec:c.instructions+=1;goto B72cbec;
case 0x72cbed:goto L72cbed;
case 0x72cbf7:c.instructions+=6;goto B72cbf7;
case 0x72cc01:c.instructions+=5;goto B72cc01;
case 0x72cc0b:c.instructions+=4;goto B72cc0b;
case 0x72cc15:c.instructions+=3;goto B72cc15;
case 0x72cc1f:c.instructions+=2;goto B72cc1f;
case 0x72cc29:c.instructions+=1;goto B72cc29;
case 0x72cc2a:goto L72cc2a;
case 0x72cc2f:goto L72cc2f;
case 0x72cc39:c.instructions+=6;goto B72cc39;
case 0x72cc43:c.instructions+=5;goto B72cc43;
case 0x72cc4d:c.instructions+=4;goto B72cc4d;
case 0x72cc57:c.instructions+=3;goto B72cc57;
case 0x72cc61:c.instructions+=2;goto B72cc61;
case 0x72cc6b:c.instructions+=1;goto B72cc6b;
case 0x72cc6c:goto L72cc6c;
case 0x72cc70:c.instructions+=3;goto B72cc70;
case 0x72cc75:c.instructions+=2;goto B72cc75;
case 0x72cc77:c.instructions+=1;goto B72cc77;
case 0x72cc78:goto L72cc78;
case 0x72cc7c:c.instructions+=2;goto B72cc7c;
case 0x72cc81:c.instructions+=1;goto B72cc81;
case 0x72cc82:goto L72cc82;
case 0x72cc86:c.instructions+=2;goto B72cc86;
case 0x72cc8b:c.instructions+=1;goto B72cc8b;
case 0x72cc8c:goto L72cc8c;
case 0x72cc8d:c.instructions+=26;goto B72cc8d;
case 0x72cc8f:c.instructions+=25;goto B72cc8f;
case 0x72cc90:c.instructions+=24;goto B72cc90;
case 0x72cc91:c.instructions+=23;goto B72cc91;
case 0x72cc92:c.instructions+=22;goto B72cc92;
case 0x72cc93:c.instructions+=21;goto B72cc93;
case 0x72cc94:c.instructions+=20;goto B72cc94;
case 0x72cc96:c.instructions+=19;goto B72cc96;
case 0x72cc99:c.instructions+=18;goto B72cc99;
case 0x72cc9a:c.instructions+=17;goto B72cc9a;
case 0x72cc9b:c.instructions+=16;goto B72cc9b;
case 0x72cc9d:c.instructions+=15;goto B72cc9d;
case 0x72cca2:c.instructions+=14;goto B72cca2;
case 0x72cca3:c.instructions+=13;goto B72cca3;
case 0x72cca4:c.instructions+=12;goto B72cca4;
case 0x72cca5:c.instructions+=11;goto B72cca5;
case 0x72cca6:c.instructions+=10;goto B72cca6;
case 0x72cca8:c.instructions+=9;goto B72cca8;
case 0x72ccab:c.instructions+=8;goto B72ccab;
case 0x72ccad:c.instructions+=7;goto B72ccad;
case 0x72ccae:c.instructions+=6;goto B72ccae;
case 0x72ccaf:c.instructions+=5;goto B72ccaf;
case 0x72ccb0:c.instructions+=4;goto B72ccb0;
case 0x72ccb3:c.instructions+=3;goto B72ccb3;
case 0x72ccb4:c.instructions+=2;goto B72ccb4;
case 0x72ccb5:c.instructions+=1;goto B72ccb5;
case 0x72ccb6:goto L72ccb6;
case 0x72ccb7:c.instructions+=25;goto B72ccb7;
case 0x72ccb8:c.instructions+=24;goto B72ccb8;
case 0x72ccb9:c.instructions+=23;goto B72ccb9;
case 0x72ccba:c.instructions+=22;goto B72ccba;
case 0x72ccbb:c.instructions+=21;goto B72ccbb;
case 0x72ccbc:c.instructions+=20;goto B72ccbc;
case 0x72ccbd:c.instructions+=19;goto B72ccbd;
case 0x72ccbe:c.instructions+=18;goto B72ccbe;
case 0x72ccbf:c.instructions+=17;goto B72ccbf;
case 0x72ccc3:c.instructions+=16;goto B72ccc3;
case 0x72ccc5:c.instructions+=15;goto B72ccc5;
case 0x72ccc9:c.instructions+=14;goto B72ccc9;
case 0x72cccb:c.instructions+=13;goto B72cccb;
case 0x72ccce:c.instructions+=12;goto B72ccce;
case 0x72ccd1:c.instructions+=11;goto B72ccd1;
case 0x72ccd4:c.instructions+=10;goto B72ccd4;
case 0x72ccd5:c.instructions+=9;goto B72ccd5;
case 0x72ccd6:c.instructions+=8;goto B72ccd6;
case 0x72ccd7:c.instructions+=7;goto B72ccd7;
case 0x72ccd8:c.instructions+=6;goto B72ccd8;
case 0x72ccd9:c.instructions+=5;goto B72ccd9;
case 0x72ccda:c.instructions+=4;goto B72ccda;
case 0x72ccdb:c.instructions+=3;goto B72ccdb;
case 0x72ccdc:c.instructions+=2;goto B72ccdc;
case 0x72ccdd:c.instructions+=1;goto B72ccdd;
case 0x72ccde:goto L72ccde;
case 0x72ccdf:c.instructions+=9;goto B72ccdf;
case 0x72cce1:c.instructions+=8;goto B72cce1;
case 0x72cce7:c.instructions+=7;goto B72cce7;
case 0x72cce8:c.instructions+=6;goto B72cce8;
case 0x72cce9:c.instructions+=5;goto B72cce9;
case 0x72ccef:c.instructions+=4;goto B72ccef;
case 0x72ccf0:c.instructions+=3;goto B72ccf0;
case 0x72ccf2:c.instructions+=2;goto B72ccf2;
case 0x72ccfc:c.instructions+=1;goto B72ccfc;
case 0x72cd02:goto L72cd02;
case 0x72cd04:c.instructions+=3;goto B72cd04;
case 0x72cd05:c.instructions+=2;goto B72cd05;
case 0x72cd0b:c.instructions+=1;goto B72cd0b;
case 0x72cd0d:goto L72cd0d;
case 0x72cd13:c.instructions+=1;goto B72cd13;
case 0x72cd15:goto L72cd15;
case 0x72cd17:goto L72cd17;
case 0x72cd1c:goto L72cd1c;
case 0x72cd1e:c.instructions+=1;goto B72cd1e;
case 0x72cd20:goto L72cd20;
case 0x72cd23:c.instructions+=3;goto B72cd23;
case 0x72cd25:c.instructions+=2;goto B72cd25;
case 0x72cd26:c.instructions+=1;goto B72cd26;
case 0x72cd2b:goto L72cd2b;
case 0x72cd2e:c.instructions+=3;goto B72cd2e;
case 0x72cd2f:c.instructions+=2;goto B72cd2f;
case 0x72cd30:c.instructions+=1;goto B72cd30;
case 0x72cd32:goto L72cd32;
case 0x72cd35:c.instructions+=3;goto B72cd35;
case 0x72cd36:c.instructions+=2;goto B72cd36;
case 0x72cd37:c.instructions+=1;goto B72cd37;
case 0x72cd3c:goto L72cd3c;
case 0x72cd40:c.instructions+=3;goto B72cd40;
case 0x72cd41:c.instructions+=2;goto B72cd41;
case 0x72cd42:c.instructions+=1;goto B72cd42;
case 0x72cd44:goto L72cd44;
case 0x72cd46:c.instructions+=1;goto B72cd46;
case 0x72cd48:goto L72cd48;
case 0x72cd4a:c.instructions+=1;goto B72cd4a;
case 0x72cd4b:goto L72cd4b;
case 0x72cd4e:c.instructions+=3;goto B72cd4e;
case 0x72cd53:c.instructions+=2;goto B72cd53;
case 0x72cd54:c.instructions+=1;goto B72cd54;
case 0x72cd59:goto L72cd59;
case 0x72cd5d:c.instructions+=3;goto B72cd5d;
case 0x72cd5e:c.instructions+=2;goto B72cd5e;
case 0x72cd5f:c.instructions+=1;goto B72cd5f;
case 0x72cd61:goto L72cd61;
case 0x72cd64:goto L72cd64;
case 0x72cd65:c.instructions+=4;goto B72cd65;
case 0x72cd67:c.instructions+=3;goto B72cd67;
case 0x72cd68:c.instructions+=2;goto B72cd68;
case 0x72cd69:c.instructions+=1;goto B72cd69;
case 0x72cd6a:goto L72cd6a;
case 0x72cd6b:c.instructions+=7;goto B72cd6b;
case 0x72cd6d:c.instructions+=6;goto B72cd6d;
case 0x72cd70:c.instructions+=5;goto B72cd70;
case 0x72cd74:c.instructions+=4;goto B72cd74;
case 0x72cd75:c.instructions+=3;goto B72cd75;
case 0x72cd76:c.instructions+=2;goto B72cd76;
case 0x72cd77:c.instructions+=1;goto B72cd77;
case 0x72cd79:goto L72cd79;
case 0x72cd7a:c.instructions+=16;goto B72cd7a;
case 0x72cd7b:c.instructions+=15;goto B72cd7b;
case 0x72cd7e:c.instructions+=14;goto B72cd7e;
case 0x72cd80:c.instructions+=13;goto B72cd80;
case 0x72cd83:c.instructions+=12;goto B72cd83;
case 0x72cd86:c.instructions+=11;goto B72cd86;
case 0x72cd88:c.instructions+=10;goto B72cd88;
case 0x72cd8a:c.instructions+=9;goto B72cd8a;
case 0x72cd8c:c.instructions+=8;goto B72cd8c;
case 0x72cd8e:c.instructions+=7;goto B72cd8e;
case 0x72cd90:c.instructions+=6;goto B72cd90;
case 0x72cd92:c.instructions+=5;goto B72cd92;
case 0x72cd95:c.instructions+=4;goto B72cd95;
case 0x72cd97:c.instructions+=3;goto B72cd97;
case 0x72cd99:c.instructions+=2;goto B72cd99;
case 0x72cd9b:c.instructions+=1;goto B72cd9b;
case 0x72cd9e:goto L72cd9e;
case 0x72cda2:c.instructions+=8;goto B72cda2;
case 0x72cda6:c.instructions+=7;goto B72cda6;
case 0x72cda9:c.instructions+=6;goto B72cda9;
case 0x72cdab:c.instructions+=5;goto B72cdab;
case 0x72cdae:c.instructions+=4;goto B72cdae;
case 0x72cdb2:c.instructions+=3;goto B72cdb2;
case 0x72cdb6:c.instructions+=2;goto B72cdb6;
case 0x72cdb9:c.instructions+=1;goto B72cdb9;
case 0x72cdbb:goto L72cdbb;
case 0x72cdbc:c.instructions+=2;goto B72cdbc;
case 0x72cdbd:c.instructions+=1;goto B72cdbd;
case 0x72cdc2:goto L72cdc2;
case 0x72cdc6:c.instructions+=1;goto B72cdc6;
case 0x72cdc8:goto L72cdc8;
case 0x72cdcb:c.instructions+=17;goto B72cdcb;
case 0x72cdce:c.instructions+=16;goto B72cdce;
case 0x72cdd1:c.instructions+=15;goto B72cdd1;
case 0x72cdd4:c.instructions+=14;goto B72cdd4;
case 0x72cdd7:c.instructions+=13;goto B72cdd7;
case 0x72cddb:c.instructions+=12;goto B72cddb;
case 0x72cdde:c.instructions+=11;goto B72cdde;
case 0x72cde1:c.instructions+=10;goto B72cde1;
case 0x72cde5:c.instructions+=9;goto B72cde5;
case 0x72cde9:c.instructions+=8;goto B72cde9;
case 0x72cdec:c.instructions+=7;goto B72cdec;
case 0x72cdef:c.instructions+=6;goto B72cdef;
case 0x72cdf1:c.instructions+=5;goto B72cdf1;
case 0x72cdf4:c.instructions+=4;goto B72cdf4;
case 0x72cdf7:c.instructions+=3;goto B72cdf7;
case 0x72cdfa:c.instructions+=2;goto B72cdfa;
case 0x72cdfd:c.instructions+=1;goto B72cdfd;
case 0x72ce03:goto L72ce03;
case 0x72ce06:c.instructions+=7;goto B72ce06;
case 0x72ce08:c.instructions+=6;goto B72ce08;
case 0x72ce0a:c.instructions+=5;goto B72ce0a;
case 0x72ce0d:c.instructions+=4;goto B72ce0d;
case 0x72ce0f:c.instructions+=3;goto B72ce0f;
case 0x72ce11:c.instructions+=2;goto B72ce11;
case 0x72ce13:c.instructions+=1;goto B72ce13;
case 0x72ce16:goto L72ce16;
case 0x72ce1a:c.instructions+=19;goto B72ce1a;
case 0x72ce1d:c.instructions+=18;goto B72ce1d;
case 0x72ce20:c.instructions+=17;goto B72ce20;
case 0x72ce21:c.instructions+=16;goto B72ce21;
case 0x72ce22:c.instructions+=15;goto B72ce22;
case 0x72ce25:c.instructions+=14;goto B72ce25;
case 0x72ce29:c.instructions+=13;goto B72ce29;
case 0x72ce2a:c.instructions+=12;goto B72ce2a;
case 0x72ce2b:c.instructions+=11;goto B72ce2b;
case 0x72ce2e:c.instructions+=10;goto B72ce2e;
case 0x72ce32:c.instructions+=9;goto B72ce32;
case 0x72ce33:c.instructions+=8;goto B72ce33;
case 0x72ce34:c.instructions+=7;goto B72ce34;
case 0x72ce37:c.instructions+=6;goto B72ce37;
case 0x72ce38:c.instructions+=5;goto B72ce38;
case 0x72ce39:c.instructions+=4;goto B72ce39;
case 0x72ce3a:c.instructions+=3;goto B72ce3a;
case 0x72ce3b:c.instructions+=2;goto B72ce3b;
case 0x72ce3e:c.instructions+=1;goto B72ce3e;
case 0x72ce40:goto L72ce40;
case 0x72ce45:goto L72ce45;
case 0x72ce49:c.instructions+=1;goto B72ce49;
case 0x72ce4f:goto L72ce4f;
case 0x72ce52:c.instructions+=27;goto B72ce52;
case 0x72ce55:c.instructions+=26;goto B72ce55;
case 0x72ce58:c.instructions+=25;goto B72ce58;
case 0x72ce5b:c.instructions+=24;goto B72ce5b;
case 0x72ce5e:c.instructions+=23;goto B72ce5e;
case 0x72ce62:c.instructions+=22;goto B72ce62;
case 0x72ce65:c.instructions+=21;goto B72ce65;
case 0x72ce68:c.instructions+=20;goto B72ce68;
case 0x72ce6b:c.instructions+=19;goto B72ce6b;
case 0x72ce6f:c.instructions+=18;goto B72ce6f;
case 0x72ce72:c.instructions+=17;goto B72ce72;
case 0x72ce75:c.instructions+=16;goto B72ce75;
case 0x72ce78:c.instructions+=15;goto B72ce78;
case 0x72ce7c:c.instructions+=14;goto B72ce7c;
case 0x72ce7f:c.instructions+=13;goto B72ce7f;
case 0x72ce82:c.instructions+=12;goto B72ce82;
case 0x72ce86:c.instructions+=11;goto B72ce86;
case 0x72ce8a:c.instructions+=10;goto B72ce8a;
case 0x72ce8d:c.instructions+=9;goto B72ce8d;
case 0x72ce90:c.instructions+=8;goto B72ce90;
case 0x72ce92:c.instructions+=7;goto B72ce92;
case 0x72ce95:c.instructions+=6;goto B72ce95;
case 0x72ce98:c.instructions+=5;goto B72ce98;
case 0x72ce9b:c.instructions+=4;goto B72ce9b;
case 0x72ce9e:c.instructions+=3;goto B72ce9e;
case 0x72cea1:c.instructions+=2;goto B72cea1;
case 0x72cea4:c.instructions+=1;goto B72cea4;
case 0x72ceaa:goto L72ceaa;
case 0x72cead:c.instructions+=106;goto B72cead;
case 0x72ceaf:c.instructions+=105;goto B72ceaf;
case 0x72ceb2:c.instructions+=104;goto B72ceb2;
case 0x72ceb5:c.instructions+=103;goto B72ceb5;
case 0x72ceb7:c.instructions+=102;goto B72ceb7;
case 0x72ceba:c.instructions+=101;goto B72ceba;
case 0x72cebd:c.instructions+=100;goto B72cebd;
case 0x72cec0:c.instructions+=99;goto B72cec0;
case 0x72cec2:c.instructions+=98;goto B72cec2;
case 0x72cec5:c.instructions+=97;goto B72cec5;
case 0x72cec8:c.instructions+=96;goto B72cec8;
case 0x72ceca:c.instructions+=95;goto B72ceca;
case 0x72cecd:c.instructions+=94;goto B72cecd;
case 0x72ced0:c.instructions+=93;goto B72ced0;
case 0x72ced2:c.instructions+=92;goto B72ced2;
case 0x72ced5:c.instructions+=91;goto B72ced5;
case 0x72ced8:c.instructions+=90;goto B72ced8;
case 0x72cedb:c.instructions+=89;goto B72cedb;
case 0x72cedd:c.instructions+=88;goto B72cedd;
case 0x72cee0:c.instructions+=87;goto B72cee0;
case 0x72cee3:c.instructions+=86;goto B72cee3;
case 0x72cee5:c.instructions+=85;goto B72cee5;
case 0x72cee8:c.instructions+=84;goto B72cee8;
case 0x72ceeb:c.instructions+=83;goto B72ceeb;
case 0x72ceed:c.instructions+=82;goto B72ceed;
case 0x72cef0:c.instructions+=81;goto B72cef0;
case 0x72cef3:c.instructions+=80;goto B72cef3;
case 0x72cef5:c.instructions+=79;goto B72cef5;
case 0x72cef8:c.instructions+=78;goto B72cef8;
case 0x72cefb:c.instructions+=77;goto B72cefb;
case 0x72cefe:c.instructions+=76;goto B72cefe;
case 0x72cf01:c.instructions+=75;goto B72cf01;
case 0x72cf04:c.instructions+=74;goto B72cf04;
case 0x72cf07:c.instructions+=73;goto B72cf07;
case 0x72cf0a:c.instructions+=72;goto B72cf0a;
case 0x72cf0d:c.instructions+=71;goto B72cf0d;
case 0x72cf10:c.instructions+=70;goto B72cf10;
case 0x72cf13:c.instructions+=69;goto B72cf13;
case 0x72cf16:c.instructions+=68;goto B72cf16;
case 0x72cf19:c.instructions+=67;goto B72cf19;
case 0x72cf1c:c.instructions+=66;goto B72cf1c;
case 0x72cf1f:c.instructions+=65;goto B72cf1f;
case 0x72cf22:c.instructions+=64;goto B72cf22;
case 0x72cf25:c.instructions+=63;goto B72cf25;
case 0x72cf28:c.instructions+=62;goto B72cf28;
case 0x72cf2b:c.instructions+=61;goto B72cf2b;
case 0x72cf2e:c.instructions+=60;goto B72cf2e;
case 0x72cf31:c.instructions+=59;goto B72cf31;
case 0x72cf34:c.instructions+=58;goto B72cf34;
case 0x72cf37:c.instructions+=57;goto B72cf37;
case 0x72cf3a:c.instructions+=56;goto B72cf3a;
case 0x72cf3b:c.instructions+=55;goto B72cf3b;
case 0x72cf3e:c.instructions+=54;goto B72cf3e;
case 0x72cf3f:c.instructions+=53;goto B72cf3f;
case 0x72cf42:c.instructions+=52;goto B72cf42;
case 0x72cf45:c.instructions+=51;goto B72cf45;
case 0x72cf48:c.instructions+=50;goto B72cf48;
case 0x72cf4c:c.instructions+=49;goto B72cf4c;
case 0x72cf50:c.instructions+=48;goto B72cf50;
case 0x72cf54:c.instructions+=47;goto B72cf54;
case 0x72cf58:c.instructions+=46;goto B72cf58;
case 0x72cf5c:c.instructions+=45;goto B72cf5c;
case 0x72cf5f:c.instructions+=44;goto B72cf5f;
case 0x72cf63:c.instructions+=43;goto B72cf63;
case 0x72cf67:c.instructions+=42;goto B72cf67;
case 0x72cf6a:c.instructions+=41;goto B72cf6a;
case 0x72cf6e:c.instructions+=40;goto B72cf6e;
case 0x72cf71:c.instructions+=39;goto B72cf71;
case 0x72cf75:c.instructions+=38;goto B72cf75;
case 0x72cf79:c.instructions+=37;goto B72cf79;
case 0x72cf7c:c.instructions+=36;goto B72cf7c;
case 0x72cf80:c.instructions+=35;goto B72cf80;
case 0x72cf84:c.instructions+=34;goto B72cf84;
case 0x72cf87:c.instructions+=33;goto B72cf87;
case 0x72cf8b:c.instructions+=32;goto B72cf8b;
case 0x72cf8e:c.instructions+=31;goto B72cf8e;
case 0x72cf92:c.instructions+=30;goto B72cf92;
case 0x72cf96:c.instructions+=29;goto B72cf96;
case 0x72cf99:c.instructions+=28;goto B72cf99;
case 0x72cf9d:c.instructions+=27;goto B72cf9d;
case 0x72cfa1:c.instructions+=26;goto B72cfa1;
case 0x72cfa4:c.instructions+=25;goto B72cfa4;
case 0x72cfa8:c.instructions+=24;goto B72cfa8;
case 0x72cfac:c.instructions+=23;goto B72cfac;
case 0x72cfaf:c.instructions+=22;goto B72cfaf;
case 0x72cfb3:c.instructions+=21;goto B72cfb3;
case 0x72cfb7:c.instructions+=20;goto B72cfb7;
case 0x72cfba:c.instructions+=19;goto B72cfba;
case 0x72cfbe:c.instructions+=18;goto B72cfbe;
case 0x72cfc2:c.instructions+=17;goto B72cfc2;
case 0x72cfc6:c.instructions+=16;goto B72cfc6;
case 0x72cfca:c.instructions+=15;goto B72cfca;
case 0x72cfcd:c.instructions+=14;goto B72cfcd;
case 0x72cfd1:c.instructions+=13;goto B72cfd1;
case 0x72cfd4:c.instructions+=12;goto B72cfd4;
case 0x72cfd8:c.instructions+=11;goto B72cfd8;
case 0x72cfdc:c.instructions+=10;goto B72cfdc;
case 0x72cfdf:c.instructions+=9;goto B72cfdf;
case 0x72cfe3:c.instructions+=8;goto B72cfe3;
case 0x72cfe7:c.instructions+=7;goto B72cfe7;
case 0x72cfea:c.instructions+=6;goto B72cfea;
case 0x72cfee:c.instructions+=5;goto B72cfee;
case 0x72cff2:c.instructions+=4;goto B72cff2;
case 0x72cff5:c.instructions+=3;goto B72cff5;
case 0x72cff9:c.instructions+=2;goto B72cff9;
case 0x72cffd:c.instructions+=1;goto B72cffd;
default:missing_instruction(c.pc);}
B72c003:L72c003:{c.instructions+=2;NFSU2_TR(0x72c003);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c006:{NFSU2_TR(0x72c006);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c00bull));
TAIL_STATIC(0x72fca9u,72f);
}
B72c00b:L72c00b:{c.instructions+=5;NFSU2_TR(0x72c00b);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b4a2c),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72c012:{NFSU2_TR(0x72c012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c013:{NFSU2_TR(0x72c013);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c014:{NFSU2_TR(0x72c014);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c017:{NFSU2_TR(0x72c017);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72c045;}}
}
B72c019:L72c019:{c.instructions+=1;NFSU2_TR(0x72c019);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c01eull));
TAIL_STATIC(0x730127u,730);
}
B72c01e:L72c01e:{c.instructions+=4;NFSU2_TR(0x72c01e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c01f:{NFSU2_TR(0x72c01f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c020:{NFSU2_TR(0x72c020);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72c027:{NFSU2_TR(0x72c027);
w4(R+28,u32(0x80ull));
}
B72c02c:L72c02c:{c.instructions+=5;NFSU2_TR(0x72c02c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c02d:{NFSU2_TR(0x72c02d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c030:{NFSU2_TR(0x72c030);
__builtin_memmove((R+4),(R+24),4);
}
B72c032:{NFSU2_TR(0x72c032);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c034:{NFSU2_TR(0x72c034);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c039ull));
TAIL_STATIC(0x732689u,732);
}
B72c039:L72c039:{c.instructions+=4;NFSU2_TR(0x72c039);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B72c03c:{NFSU2_TR(0x72c03c);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B72c03e:{NFSU2_TR(0x72c03e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72c041:{NFSU2_TR(0x72c041);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c02cu);}goto L72c02c;}}
}
B72c043:L72c043:{c.instructions+=1;NFSU2_TR(0x72c043);
{goto L72c072;}
}
B72c045:L72c045:{c.instructions+=1;NFSU2_TR(0x72c045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c04aull));
TAIL_STATIC(0x72fd95u,72f);
}
B72c04a:L72c04a:{c.instructions+=4;NFSU2_TR(0x72c04a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c04b:{NFSU2_TR(0x72c04b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c04c:{NFSU2_TR(0x72c04c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72c053:{NFSU2_TR(0x72c053);
w4(R+28,u32(0x80ull));
}
B72c058:L72c058:{c.instructions+=5;NFSU2_TR(0x72c058);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c059:{NFSU2_TR(0x72c059);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c05c:{NFSU2_TR(0x72c05c);
__builtin_memmove((R+4),(R+24),4);
}
B72c05e:{NFSU2_TR(0x72c05e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c060:{NFSU2_TR(0x72c060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c065ull));
TAIL_STATIC(0x730c66u,730);
}
B72c065:L72c065:{c.instructions+=4;NFSU2_TR(0x72c065);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B72c068:{NFSU2_TR(0x72c068);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B72c06b:{NFSU2_TR(0x72c06b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72c06e:{NFSU2_TR(0x72c06e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c058u);}goto L72c058;}}
}
B72c070:L72c070:{c.instructions+=1;NFSU2_TR(0x72c070);
w2(R+4260,u16(0xffffull));
}
B72c072:L72c072:{c.instructions+=4;NFSU2_TR(0x72c072);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c075:{NFSU2_TR(0x72c075);
w4(R+0,u32(0-u32(r4(R+0))));
}
B72c077:{NFSU2_TR(0x72c077);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B72c07a:{NFSU2_TR(0x72c07a);
if(r1(R+518)){{goto L72c089;}}
}
B72c07c:L72c07c:{c.instructions+=6;NFSU2_TR(0x72c07c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c07e:{NFSU2_TR(0x72c07e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c07f:{NFSU2_TR(0x72c07f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B72c081:{NFSU2_TR(0x72c081);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c082:{NFSU2_TR(0x72c082);
__builtin_memmove((R+4),(R+24),4);
}
B72c084:{NFSU2_TR(0x72c084);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c089ull));
TAIL_STATIC(0x72b030u,72b);
}
B72c089:L72c089:{c.instructions+=12;NFSU2_TR(0x72c089);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c08c:{NFSU2_TR(0x72c08c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B72c08f:{NFSU2_TR(0x72c08f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72c090:{NFSU2_TR(0x72c090);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72c093:{NFSU2_TR(0x72c093);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B72c096:{NFSU2_TR(0x72c096);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72c099:{NFSU2_TR(0x72c099);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c09c:{NFSU2_TR(0x72c09c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72c09d:{NFSU2_TR(0x72c09d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72c09f:{NFSU2_TR(0x72c09f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72c0a0:{NFSU2_TR(0x72c0a0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72c0a1:{NFSU2_TR(0x72c0a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72c0a4:L72c0a4:{c.instructions+=4;NFSU2_TR(0x72c0a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c0a5:{NFSU2_TR(0x72c0a5);
__builtin_memmove((R+20),(R+16),4);
}
B72c0a7:{NFSU2_TR(0x72c0a7);
w4(R+0,u32(0x1b24ull));
}
B72c0ac:{NFSU2_TR(0x72c0ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c0b1ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B72c0b1:L72c0b1:{c.instructions+=14;NFSU2_TR(0x72c0b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c0b2:{NFSU2_TR(0x72c0b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c0b3:{NFSU2_TR(0x72c0b3);
__builtin_memmove((R+24),(R+4),4);
}
B72c0b5:{NFSU2_TR(0x72c0b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B72c0b8:{NFSU2_TR(0x72c0b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c0bb:{NFSU2_TR(0x72c0bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffe4dcull))));
__builtin_memmove((R+0),(U+0),4);
}
B72c0c1:{NFSU2_TR(0x72c0c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c0c4:{NFSU2_TR(0x72c0c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffeddcull))));
__builtin_memmove((R+0),(U+0),4);
}
B72c0ca:{NFSU2_TR(0x72c0ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c0cb:{NFSU2_TR(0x72c0cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c0ce:{NFSU2_TR(0x72c0ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6dcull))));
__builtin_memmove((R+0),(U+0),4);
}
B72c0d4:{NFSU2_TR(0x72c0d4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c0d6:{NFSU2_TR(0x72c0d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c0d9:{NFSU2_TR(0x72c0d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c0deull));
TAIL_STATIC(0x72b030u,72b);
}
B72c0de:L72c0de:{c.instructions+=5;NFSU2_TR(0x72c0de);
__builtin_memmove((R+28),(R+0),4);
}
B72c0e0:{NFSU2_TR(0x72c0e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c0e1:{NFSU2_TR(0x72c0e1);
__builtin_memmove((R+4),(R+24),4);
}
B72c0e3:{NFSU2_TR(0x72c0e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c0e6:{NFSU2_TR(0x72c0e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c0ebull));
TAIL_STATIC(0x72b0f9u,72b);
}
B72c0eb:L72c0eb:{c.instructions+=3;NFSU2_TR(0x72c0eb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72c0ed:{NFSU2_TR(0x72c0ed);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+12))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72c0f0:{NFSU2_TR(0x72c0f0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72c13e;}}
}
B72c0f2:L72c0f2:{c.instructions+=10;NFSU2_TR(0x72c0f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c0f5:{NFSU2_TR(0x72c0f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B72c0f8:{NFSU2_TR(0x72c0f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c0f9:{NFSU2_TR(0x72c0f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72c0fc:{NFSU2_TR(0x72c0fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B72c0ff:{NFSU2_TR(0x72c0ff);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72c103:{NFSU2_TR(0x72c103);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c106:{NFSU2_TR(0x72c106);
__builtin_memmove((R+4),(R+24),4);
}
B72c108:{NFSU2_TR(0x72c108);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c109:{NFSU2_TR(0x72c109);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72c112;}}
}
B72c10b:L72c10b:{c.instructions+=1;NFSU2_TR(0x72c10b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c110ull));
TAIL_STATIC(0x72b3e4u,72b);
}
B72c110:L72c110:{c.instructions+=1;NFSU2_TR(0x72c110);
{goto L72c117;}
}
B72c112:L72c112:{c.instructions+=1;NFSU2_TR(0x72c112);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c117ull));
TAIL_STATIC(0x72b9bbu,72b);
}
B72c117:L72c117:{c.instructions+=7;NFSU2_TR(0x72c117);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c11a:{NFSU2_TR(0x72c11a);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B72c11e:{NFSU2_TR(0x72c11e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c11f:{NFSU2_TR(0x72c11f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c120:{NFSU2_TR(0x72c120);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c121:{NFSU2_TR(0x72c121);
__builtin_memmove((R+4),(R+24),4);
}
B72c123:{NFSU2_TR(0x72c123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c128ull));
TAIL_STATIC(0x72baadu,72b);
}
B72c128:L72c128:{c.instructions+=5;NFSU2_TR(0x72c128);
u8 U[20];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B72c12c:{NFSU2_TR(0x72c12c);
__builtin_memmove((R+4),(R+24),4);
}
B72c12e:{NFSU2_TR(0x72c12e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c12f:{NFSU2_TR(0x72c12f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c130:{NFSU2_TR(0x72c130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c135ull));
TAIL_STATIC(0x72ddd2u,72d);
}
B72c135:L72c135:{c.instructions+=4;NFSU2_TR(0x72c135);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72c139:{NFSU2_TR(0x72c139);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B72c13a:{NFSU2_TR(0x72c13a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B72c13c:{NFSU2_TR(0x72c13c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c0f2u);}goto L72c0f2;}}
}
B72c13e:L72c13e:{c.instructions+=5;NFSU2_TR(0x72c13e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffe4dcull))));
__builtin_memmove((R+0),(U+0),4);
}
B72c144:{NFSU2_TR(0x72c144);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c145:{NFSU2_TR(0x72c145);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c146:{NFSU2_TR(0x72c146);
__builtin_memmove((R+4),(R+24),4);
}
B72c148:{NFSU2_TR(0x72c148);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c14dull));
TAIL_STATIC(0x72e0bau,72e);
}
B72c14d:L72c14d:{c.instructions+=3;NFSU2_TR(0x72c14d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72c14f:{NFSU2_TR(0x72c14f);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(r1(R+12))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72c152:{NFSU2_TR(0x72c152);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72c23e;}}
}
B72c158:L72c158:{c.instructions+=4;NFSU2_TR(0x72c158);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72c15c:{NFSU2_TR(0x72c15c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72c15f:{NFSU2_TR(0x72c15f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c162:{NFSU2_TR(0x72c162);
{goto L72c167;}
}
B72c164:L72c164:{c.instructions+=1;NFSU2_TR(0x72c164);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c167:L72c167:{c.instructions+=2;NFSU2_TR(0x72c167);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72c16b:{NFSU2_TR(0x72c16b);
if(r1(R+518)){{goto L72c188;}}
}
B72c16d:L72c16d:{c.instructions+=2;NFSU2_TR(0x72c16d);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B72c170:{NFSU2_TR(0x72c170);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72c188;}}
}
B72c172:L72c172:{c.instructions+=7;NFSU2_TR(0x72c172);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c175:{NFSU2_TR(0x72c175);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B72c179:{NFSU2_TR(0x72c179);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B72c17b:{NFSU2_TR(0x72c17b);
__builtin_memmove((R+4),(R+24),4);
}
B72c17d:{NFSU2_TR(0x72c17d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c180:{NFSU2_TR(0x72c180);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c181:{NFSU2_TR(0x72c181);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c186ull));
TAIL_STATIC(0x72e851u,72e);
}
B72c186:L72c186:{c.instructions+=1;NFSU2_TR(0x72c186);
{goto L72c196;}
}
B72c188:L72c188:{c.instructions+=5;NFSU2_TR(0x72c188);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72c18b:{NFSU2_TR(0x72c18b);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B72c18f:{NFSU2_TR(0x72c18f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72c191:{NFSU2_TR(0x72c191);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B72c193:{NFSU2_TR(0x72c193);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c196:L72c196:{c.instructions+=5;NFSU2_TR(0x72c196);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c199:{NFSU2_TR(0x72c199);
__builtin_memmove((R+4),(R+24),4);
}
B72c19b:{NFSU2_TR(0x72c19b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c19e:{NFSU2_TR(0x72c19e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c19f:{NFSU2_TR(0x72c19f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c1a4ull));
TAIL_STATIC(0x72ea66u,72e);
}
B72c1a4:L72c1a4:{c.instructions+=4;NFSU2_TR(0x72c1a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B72c1a6:{NFSU2_TR(0x72c1a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c1a7:{NFSU2_TR(0x72c1a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c1aa:{NFSU2_TR(0x72c1aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c1afull));
TAIL_STATIC(0x72ec64u,72e);
}
B72c1af:L72c1af:{c.instructions+=7;NFSU2_TR(0x72c1af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c1b0:{NFSU2_TR(0x72c1b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c1b1:{NFSU2_TR(0x72c1b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c1b2:{NFSU2_TR(0x72c1b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c1b5:{NFSU2_TR(0x72c1b5);
__builtin_memmove((R+4),(R+24),4);
}
B72c1b7:{NFSU2_TR(0x72c1b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c1b8:{NFSU2_TR(0x72c1b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c1bdull));
TAIL_STATIC(0x72faceu,72f);
}
B72c1bd:L72c1bd:{c.instructions+=2;NFSU2_TR(0x72c1bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c1be:{NFSU2_TR(0x72c1be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c1c3ull));
TAIL_STATIC(0x72fca9u,72f);
}
B72c1c3:L72c1c3:{c.instructions+=5;NFSU2_TR(0x72c1c3);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b4a2c),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72c1ca:{NFSU2_TR(0x72c1ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c1cb:{NFSU2_TR(0x72c1cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c1ce:{NFSU2_TR(0x72c1ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c1cf:{NFSU2_TR(0x72c1cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72c1ff;}}
}
B72c1d1:L72c1d1:{c.instructions+=1;NFSU2_TR(0x72c1d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c1d6ull));
TAIL_STATIC(0x730127u,730);
}
B72c1d6:L72c1d6:{c.instructions+=4;NFSU2_TR(0x72c1d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72c1d9:{NFSU2_TR(0x72c1d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c1da:{NFSU2_TR(0x72c1da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c1db:{NFSU2_TR(0x72c1db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72c1e2:L72c1e2:{c.instructions+=5;NFSU2_TR(0x72c1e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c1e3:{NFSU2_TR(0x72c1e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c1e6:{NFSU2_TR(0x72c1e6);
__builtin_memmove((R+4),(R+24),4);
}
B72c1e8:{NFSU2_TR(0x72c1e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c1e9:{NFSU2_TR(0x72c1e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c1eeull));
TAIL_STATIC(0x732689u,732);
}
B72c1ee:L72c1ee:{c.instructions+=5;NFSU2_TR(0x72c1ee);
w4(R+0,u32(0x80ull));
}
B72c1f3:{NFSU2_TR(0x72c1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B72c1f6:{NFSU2_TR(0x72c1f6);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B72c1f8:{NFSU2_TR(0x72c1f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72c1fb:{NFSU2_TR(0x72c1fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c1e2u);}goto L72c1e2;}}
}
B72c1fd:L72c1fd:{c.instructions+=1;NFSU2_TR(0x72c1fd);
{goto L72c22d;}
}
B72c1ff:L72c1ff:{c.instructions+=1;NFSU2_TR(0x72c1ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c204ull));
TAIL_STATIC(0x72fd95u,72f);
}
B72c204:L72c204:{c.instructions+=4;NFSU2_TR(0x72c204);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72c207:{NFSU2_TR(0x72c207);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c208:{NFSU2_TR(0x72c208);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c209:{NFSU2_TR(0x72c209);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72c210:L72c210:{c.instructions+=5;NFSU2_TR(0x72c210);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c211:{NFSU2_TR(0x72c211);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c214:{NFSU2_TR(0x72c214);
__builtin_memmove((R+4),(R+24),4);
}
B72c216:{NFSU2_TR(0x72c216);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c217:{NFSU2_TR(0x72c217);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c21cull));
TAIL_STATIC(0x730c66u,730);
}
B72c21c:L72c21c:{c.instructions+=4;NFSU2_TR(0x72c21c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x80ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72c223:{NFSU2_TR(0x72c223);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B72c226:{NFSU2_TR(0x72c226);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72c229:{NFSU2_TR(0x72c229);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c210u);}goto L72c210;}}
}
B72c22b:L72c22b:{c.instructions+=1;NFSU2_TR(0x72c22b);
w2(R+4260,u16(0xffffull));
}
B72c22d:L72c22d:{c.instructions+=5;NFSU2_TR(0x72c22d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72c231:{NFSU2_TR(0x72c231);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x30ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72c235:{NFSU2_TR(0x72c235);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B72c236:{NFSU2_TR(0x72c236);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B72c238:{NFSU2_TR(0x72c238);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c164u);}goto L72c164;}}
}
B72c23e:L72c23e:{c.instructions+=4;NFSU2_TR(0x72c23e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c241:{NFSU2_TR(0x72c241);
w4(R+0,u32(0-u32(r4(R+0))));
}
B72c243:{NFSU2_TR(0x72c243);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B72c246:{NFSU2_TR(0x72c246);
if(r1(R+518)){{goto L72c255;}}
}
B72c248:L72c248:{c.instructions+=6;NFSU2_TR(0x72c248);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c24a:{NFSU2_TR(0x72c24a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c24b:{NFSU2_TR(0x72c24b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B72c24d:{NFSU2_TR(0x72c24d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c24e:{NFSU2_TR(0x72c24e);
__builtin_memmove((R+4),(R+24),4);
}
B72c250:{NFSU2_TR(0x72c250);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c255ull));
TAIL_STATIC(0x72b030u,72b);
}
B72c255:L72c255:{c.instructions+=12;NFSU2_TR(0x72c255);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c258:{NFSU2_TR(0x72c258);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B72c25b:{NFSU2_TR(0x72c25b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72c25c:{NFSU2_TR(0x72c25c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72c25f:{NFSU2_TR(0x72c25f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B72c262:{NFSU2_TR(0x72c262);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B72c265:{NFSU2_TR(0x72c265);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c268:{NFSU2_TR(0x72c268);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72c269:{NFSU2_TR(0x72c269);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72c26b:{NFSU2_TR(0x72c26b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72c26c:{NFSU2_TR(0x72c26c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72c26d:{NFSU2_TR(0x72c26d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72c270:L72c270:{c.instructions+=8;NFSU2_TR(0x72c270);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c271:{NFSU2_TR(0x72c271);
__builtin_memmove((R+24),(R+4),4);
}
B72c273:{NFSU2_TR(0x72c273);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c276:{NFSU2_TR(0x72c276);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c277:{NFSU2_TR(0x72c277);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B72c279:{NFSU2_TR(0x72c279);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c27b:{NFSU2_TR(0x72c27b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c27e:{NFSU2_TR(0x72c27e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c283ull));
TAIL_STATIC(0x72b030u,72b);
}
B72c283:L72c283:{c.instructions+=3;NFSU2_TR(0x72c283);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c284:{NFSU2_TR(0x72c284);
__builtin_memmove((R+4),(R+24),4);
}
B72c286:{NFSU2_TR(0x72c286);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c289ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B72c289:L72c289:{c.instructions+=4;NFSU2_TR(0x72c289);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B72c28d:{NFSU2_TR(0x72c28d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c293:{NFSU2_TR(0x72c293);
__builtin_memmove((R+4),(R+24),4);
}
B72c295:{NFSU2_TR(0x72c295);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72c29e;}}
}
B72c297:L72c297:{c.instructions+=1;NFSU2_TR(0x72c297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c29cull));
TAIL_STATIC(0x72bf23u,72b);
}
B72c29c:L72c29c:{c.instructions+=1;NFSU2_TR(0x72c29c);
{goto L72c2a3;}
}
B72c29e:L72c29e:{c.instructions+=1;NFSU2_TR(0x72c29e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c2a3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c0a4u);}goto L72c0a4;}
}
B72c2a3:L72c2a3:{c.instructions+=3;NFSU2_TR(0x72c2a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72c2a4:{NFSU2_TR(0x72c2a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72c2a5:{NFSU2_TR(0x72c2a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72c2a6:L72c2a6:{c.instructions+=3;NFSU2_TR(0x72c2a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c2a7:{NFSU2_TR(0x72c2a7);
__builtin_memmove((R+24),(R+4),4);
}
B72c2a9:{NFSU2_TR(0x72c2a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c2aeull));
TAIL_STATIC(0x72b0d6u,72b);
}
B72c2ae:L72c2ae:{c.instructions+=2;NFSU2_TR(0x72c2ae);
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
B72c2b3:{NFSU2_TR(0x72c2b3);
if(r1(R+518)){{goto L72c2bc;}}
}
B72c2b5:L72c2b5:{c.instructions+=2;NFSU2_TR(0x72c2b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c2b6:{NFSU2_TR(0x72c2b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c2bbull));
TAIL_STATIC(0x575630u,575);
}
B72c2bb:L72c2bb:{c.instructions+=1;NFSU2_TR(0x72c2bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c2bc:L72c2bc:{c.instructions+=3;NFSU2_TR(0x72c2bc);
__builtin_memmove((R+0),(R+24),4);
}
B72c2be:{NFSU2_TR(0x72c2be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72c2bf:{NFSU2_TR(0x72c2bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72c2c2:L72c2c2:{c.instructions+=8;NFSU2_TR(0x72c2c2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c2c3:{NFSU2_TR(0x72c2c3);
__builtin_memmove((R+20),(R+16),4);
}
B72c2c5:{NFSU2_TR(0x72c2c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c2c8:{NFSU2_TR(0x72c2c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72c2cb:{NFSU2_TR(0x72c2cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c2cc:{NFSU2_TR(0x72c2cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B72c2ce:{NFSU2_TR(0x72c2ce);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B72c2d0:{NFSU2_TR(0x72c2d0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72c31b;}}
}
B72c2d2:L72c2d2:{c.instructions+=2;NFSU2_TR(0x72c2d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72c2d4:{NFSU2_TR(0x72c2d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72c2da;}}
}
B72c2d6:L72c2d6:{c.instructions+=2;NFSU2_TR(0x72c2d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B72c2d8:{NFSU2_TR(0x72c2d8);
{goto L72c2e4;}
}
B72c2da:L72c2da:{c.instructions+=1;NFSU2_TR(0x72c2da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B72c2dc:L72c2dc:{c.instructions+=3;NFSU2_TR(0x72c2dc);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B72c2de:{NFSU2_TR(0x72c2de);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72c2e0:{NFSU2_TR(0x72c2e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c2dcu);}goto L72c2dc;}}
}
B72c2e2:L72c2e2:{c.instructions+=1;NFSU2_TR(0x72c2e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B72c2e4:L72c2e4:{c.instructions+=8;NFSU2_TR(0x72c2e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72c2e6:{NFSU2_TR(0x72c2e6);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B72c2ea:{NFSU2_TR(0x72c2ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c2eb:{NFSU2_TR(0x72c2eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72c2ee:{NFSU2_TR(0x72c2ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c2ef:{NFSU2_TR(0x72c2ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B72c2f1:{NFSU2_TR(0x72c2f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c2f2:{NFSU2_TR(0x72c2f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c2f7ull));
TAIL_STATIC(0x724792u,724);
}
B72c2f7:L72c2f7:{c.instructions+=4;NFSU2_TR(0x72c2f7);
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
B72c2f9:{NFSU2_TR(0x72c2f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c2fa:{NFSU2_TR(0x72c2fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c2fd:{NFSU2_TR(0x72c2fd);
if(r1(R+518)){{goto L72c314;}}
}
B72c2ff:L72c2ff:{c.instructions+=5;NFSU2_TR(0x72c2ff);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B72c303:{NFSU2_TR(0x72c303);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c304:{NFSU2_TR(0x72c304);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c305:{NFSU2_TR(0x72c305);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c306:{NFSU2_TR(0x72c306);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c30bull));
TAIL_STATIC(0x71feccu,71f);
}
B72c30b:L72c30b:{c.instructions+=2;NFSU2_TR(0x72c30b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c30c:{NFSU2_TR(0x72c30c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c311ull));
TAIL_STATIC(0x724894u,724);
}
B72c311:L72c311:{c.instructions+=1;NFSU2_TR(0x72c311);
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
B72c314:L72c314:{c.instructions+=4;NFSU2_TR(0x72c314);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c317:{NFSU2_TR(0x72c317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72c318:{NFSU2_TR(0x72c318);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B72c31a:{NFSU2_TR(0x72c31a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72c31b:L72c31b:{c.instructions+=3;NFSU2_TR(0x72c31b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72c31c:{NFSU2_TR(0x72c31c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72c31d:{NFSU2_TR(0x72c31d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72c31e:L72c31e:{c.instructions+=4;NFSU2_TR(0x72c31e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c31f:{NFSU2_TR(0x72c31f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B72c321:{NFSU2_TR(0x72c321);
u8 U[2];
__builtin_memmove((U+0),gp(0x8b44de),1);
w1(R+512,u8((r1(U+0))<(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B72c328:{NFSU2_TR(0x72c328);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72c34f;}}
}
B72c32a:L72c32a:{c.instructions+=3;NFSU2_TR(0x72c32a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b43ecull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B72c331:{NFSU2_TR(0x72c331);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72c333:{NFSU2_TR(0x72c333);
if(r1(R+518)){{goto L72c343;}}
}
B72c335:L72c335:{c.instructions+=2;NFSU2_TR(0x72c335);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B72c337:{NFSU2_TR(0x72c337);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c33cull));
TAIL_STATIC(0x725480u,725);
}
B72c33c:L72c33c:{c.instructions+=3;NFSU2_TR(0x72c33c);
u8 U[22];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72c340:{NFSU2_TR(0x72c340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c341:{NFSU2_TR(0x72c341);
if(r1(R+518)){{goto L72c354;}}
}
B72c343:L72c343:{c.instructions+=4;NFSU2_TR(0x72c343);
w4(R+0,u32(m1(0x8b44de)));
}
B72c34a:{NFSU2_TR(0x72c34a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B72c34b:{NFSU2_TR(0x72c34b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72c34d:{NFSU2_TR(0x72c34d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c32au);}goto L72c32a;}}
}
B72c34f:L72c34f:{c.instructions+=3;NFSU2_TR(0x72c34f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72c352:{NFSU2_TR(0x72c352);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72c353:{NFSU2_TR(0x72c353);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72c354:L72c354:{c.instructions+=3;NFSU2_TR(0x72c354);
__builtin_memmove((R+0),(R+24),4);
}
B72c356:{NFSU2_TR(0x72c356);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72c357:{NFSU2_TR(0x72c357);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72c360:L72c360:{c.instructions+=9;NFSU2_TR(0x72c360);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c361:{NFSU2_TR(0x72c361);
__builtin_memmove((R+20),(R+16),4);
}
B72c363:{NFSU2_TR(0x72c363);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c364:{NFSU2_TR(0x72c364);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c365:{NFSU2_TR(0x72c365);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c366:{NFSU2_TR(0x72c366);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72c369:{NFSU2_TR(0x72c369);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72c36c:{NFSU2_TR(0x72c36c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72c36f:{NFSU2_TR(0x72c36f);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72c372:L72c372:{c.instructions+=2;NFSU2_TR(0x72c372);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72c378:{NFSU2_TR(0x72c378);
if(r1(R+518)){{goto L72c38f;}}
}
B72c37a:L72c37a:{c.instructions+=6;NFSU2_TR(0x72c37a);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72c37e:{NFSU2_TR(0x72c37e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72c380:{NFSU2_TR(0x72c380);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72c384:{NFSU2_TR(0x72c384);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c388:{NFSU2_TR(0x72c388);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72c38b:{NFSU2_TR(0x72c38b);
if(r1(R+518)){{goto L72c3d6;}}
}
B72c38d:L72c38d:{c.instructions+=1;NFSU2_TR(0x72c38d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c372u);}goto L72c372;}
}
B72c38f:L72c38f:{c.instructions+=23;NFSU2_TR(0x72c38f);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72c393:{NFSU2_TR(0x72c393);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72c395:{NFSU2_TR(0x72c395);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72c399:{NFSU2_TR(0x72c399);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B72c39b:{NFSU2_TR(0x72c39b);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72c39f:{NFSU2_TR(0x72c39f);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B72c3a1:{NFSU2_TR(0x72c3a1);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72c3a5:{NFSU2_TR(0x72c3a5);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B72c3a7:{NFSU2_TR(0x72c3a7);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B72c3a9:{NFSU2_TR(0x72c3a9);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72c3ad:{NFSU2_TR(0x72c3ad);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B72c3af:{NFSU2_TR(0x72c3af);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72c3b3:{NFSU2_TR(0x72c3b3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B72c3b5:{NFSU2_TR(0x72c3b5);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72c3b9:{NFSU2_TR(0x72c3b9);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B72c3bb:{NFSU2_TR(0x72c3bb);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72c3bf:{NFSU2_TR(0x72c3bf);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B72c3c1:{NFSU2_TR(0x72c3c1);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c3c5:{NFSU2_TR(0x72c3c5);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c3c9:{NFSU2_TR(0x72c3c9);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c3cd:{NFSU2_TR(0x72c3cd);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c3d1:{NFSU2_TR(0x72c3d1);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72c3d4:{NFSU2_TR(0x72c3d4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c38fu);}goto L72c38f;}}
}
B72c3d6:L72c3d6:{c.instructions+=6;NFSU2_TR(0x72c3d6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72c3d8:{NFSU2_TR(0x72c3d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72c3d9:{NFSU2_TR(0x72c3d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72c3da:{NFSU2_TR(0x72c3da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c3db:{NFSU2_TR(0x72c3db);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72c3dc:{NFSU2_TR(0x72c3dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72c3e0:L72c3e0:{c.instructions+=10;NFSU2_TR(0x72c3e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c3e1:{NFSU2_TR(0x72c3e1);
__builtin_memmove((R+20),(R+16),4);
}
B72c3e3:{NFSU2_TR(0x72c3e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c3e4:{NFSU2_TR(0x72c3e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c3e5:{NFSU2_TR(0x72c3e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c3e6:{NFSU2_TR(0x72c3e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72c3e9:{NFSU2_TR(0x72c3e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72c3ec:{NFSU2_TR(0x72c3ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72c3ef:{NFSU2_TR(0x72c3ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B72c3f4:{NFSU2_TR(0x72c3f4);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B72c3f8:L72c3f8:{c.instructions+=2;NFSU2_TR(0x72c3f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xfull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72c3fe:{NFSU2_TR(0x72c3fe);
if(r1(R+518)){{goto L72c41d;}}
}
B72c400:L72c400:{c.instructions+=6;NFSU2_TR(0x72c400);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B72c406:{NFSU2_TR(0x72c406);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4608))));
}
B72c40a:{NFSU2_TR(0x72c40a);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(U+12))));
}
B72c410:{NFSU2_TR(0x72c410);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4672),4);
s4(u32(r4(U+8)),r4(U+12));
}
B72c416:{NFSU2_TR(0x72c416);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72c419:{NFSU2_TR(0x72c419);
if(r1(R+518)){{goto L72c47a;}}
}
B72c41b:L72c41b:{c.instructions+=1;NFSU2_TR(0x72c41b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c3f8u);}goto L72c3f8;}
}
B72c41d:L72c41d:{c.instructions+=2;NFSU2_TR(0x72c41d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xfull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72c423:{NFSU2_TR(0x72c423);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c400u);}goto L72c400;}}
}
B72c425:L72c425:{c.instructions+=2;NFSU2_TR(0x72c425);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xfull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72c42b:{NFSU2_TR(0x72c42b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c400u);}goto L72c400;}}
}
B72c42d:L72c42d:{c.instructions+=18;NFSU2_TR(0x72c42d);
u8 U[44];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),16);
__builtin_memmove((U+28),(U+12),16);
__builtin_memmove((R+4672),(U+28),4);
__builtin_memmove((R+4676),(U+32),4);
__builtin_memmove((R+4680),(U+36),4);
__builtin_memmove((R+4684),(U+40),4);
}
B72c432:{NFSU2_TR(0x72c432);
u8 U[44];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),16);
__builtin_memmove((U+28),(U+12),16);
__builtin_memmove((R+4736),(U+28),4);
__builtin_memmove((R+4740),(U+32),4);
__builtin_memmove((R+4744),(U+36),4);
__builtin_memmove((R+4748),(U+40),4);
}
B72c437:{NFSU2_TR(0x72c437);
u8 U[44];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),16);
__builtin_memmove((U+28),(U+12),16);
__builtin_memmove((R+4800),(U+28),4);
__builtin_memmove((R+4804),(U+32),4);
__builtin_memmove((R+4808),(U+36),4);
__builtin_memmove((R+4812),(U+40),4);
}
B72c43c:{NFSU2_TR(0x72c43c);
u8 U[44];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),16);
__builtin_memmove((U+28),(U+12),16);
__builtin_memmove((R+4864),(U+28),4);
__builtin_memmove((R+4868),(U+32),4);
__builtin_memmove((R+4872),(U+36),4);
__builtin_memmove((R+4876),(U+40),4);
}
B72c441:{NFSU2_TR(0x72c441);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4608))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4612))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4616))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4620))));
}
B72c444:{NFSU2_TR(0x72c444);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4608))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4612))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4616))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4620))));
}
B72c447:{NFSU2_TR(0x72c447);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4608))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4612))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4616))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4620))));
}
B72c44a:{NFSU2_TR(0x72c44a);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4608))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+4612))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+4616))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+4620))));
}
B72c44d:{NFSU2_TR(0x72c44d);
u8 U[44];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),16);
__builtin_memmove((U+28),(U+12),16);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(U+28))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(U+32))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(U+36))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(U+40))));
}
B72c452:{NFSU2_TR(0x72c452);
u8 U[44];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),16);
__builtin_memmove((U+28),(U+12),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+28))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+32))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+36))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+40))));
}
B72c457:{NFSU2_TR(0x72c457);
u8 U[44];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),16);
__builtin_memmove((U+28),(U+12),16);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(U+28))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(U+32))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(U+36))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(U+40))));
}
B72c45c:{NFSU2_TR(0x72c45c);
u8 U[44];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),16);
__builtin_memmove((U+28),(U+12),16);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(U+28))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(U+32))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(U+36))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(U+40))));
}
B72c461:{NFSU2_TR(0x72c461);
u8 U[28];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+8))),(U+12),16);
}
B72c466:{NFSU2_TR(0x72c466);
u8 U[28];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+8))),(U+12),16);
}
B72c46b:{NFSU2_TR(0x72c46b);
u8 U[28];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+8))),(U+12),16);
}
B72c470:{NFSU2_TR(0x72c470);
u8 U[28];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+8))),(U+12),16);
}
B72c475:{NFSU2_TR(0x72c475);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x10ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72c478:{NFSU2_TR(0x72c478);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c42du);}goto L72c42d;}}
}
B72c47a:L72c47a:{c.instructions+=5;NFSU2_TR(0x72c47a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72c47b:{NFSU2_TR(0x72c47b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72c47c:{NFSU2_TR(0x72c47c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c47d:{NFSU2_TR(0x72c47d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72c47e:{NFSU2_TR(0x72c47e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72c480:L72c480:{c.instructions+=8;NFSU2_TR(0x72c480);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c481:{NFSU2_TR(0x72c481);
__builtin_memmove((R+20),(R+16),4);
}
B72c483:{NFSU2_TR(0x72c483);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c484:{NFSU2_TR(0x72c484);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c485:{NFSU2_TR(0x72c485);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c486:{NFSU2_TR(0x72c486);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72c489:{NFSU2_TR(0x72c489);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72c48c:{NFSU2_TR(0x72c48c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72c48f:L72c48f:{c.instructions+=2;NFSU2_TR(0x72c48f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x7ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72c495:{NFSU2_TR(0x72c495);
if(r1(R+518)){{goto L72c4a6;}}
}
B72c497:L72c497:{c.instructions+=4;NFSU2_TR(0x72c497);
{u32 ea_=u32((r4(R+4)*2u)+r4(R+24)+u32(4294967294u));__asm__ volatile(".byte 0xdf,0x00"::"a"(ea_):"memory");}
}
B72c49b:{NFSU2_TR(0x72c49b);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c49f:{NFSU2_TR(0x72c49f);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72c4a2:{NFSU2_TR(0x72c4a2);
if(r1(R+518)){{goto L72c4ed;}}
}
B72c4a4:L72c4a4:{c.instructions+=1;NFSU2_TR(0x72c4a4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c48fu);}goto L72c48f;}
}
B72c4a6:L72c4a6:{c.instructions+=19;NFSU2_TR(0x72c4a6);
{u32 ea_=u32((r4(R+4)*2u)+r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xdf,0x00"::"a"(ea_):"memory");}
}
B72c4aa:{NFSU2_TR(0x72c4aa);
{u32 ea_=u32((r4(R+4)*2u)+r4(R+24)+u32(4294967282u));__asm__ volatile(".byte 0xdf,0x00"::"a"(ea_):"memory");}
}
B72c4ae:{NFSU2_TR(0x72c4ae);
{u32 ea_=u32((r4(R+4)*2u)+r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xdf,0x00"::"a"(ea_):"memory");}
}
B72c4b2:{NFSU2_TR(0x72c4b2);
{u32 ea_=u32((r4(R+4)*2u)+r4(R+24)+u32(4294967286u));__asm__ volatile(".byte 0xdf,0x00"::"a"(ea_):"memory");}
}
B72c4b6:{NFSU2_TR(0x72c4b6);
{u32 ea_=u32((r4(R+4)*2u)+r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xdf,0x00"::"a"(ea_):"memory");}
}
B72c4ba:{NFSU2_TR(0x72c4ba);
{u32 ea_=u32((r4(R+4)*2u)+r4(R+24)+u32(4294967290u));__asm__ volatile(".byte 0xdf,0x00"::"a"(ea_):"memory");}
}
B72c4be:{NFSU2_TR(0x72c4be);
{u32 ea_=u32((r4(R+4)*2u)+r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xdf,0x00"::"a"(ea_):"memory");}
}
B72c4c2:{NFSU2_TR(0x72c4c2);
{u32 ea_=u32((r4(R+4)*2u)+r4(R+24)+u32(4294967294u));__asm__ volatile(".byte 0xdf,0x00"::"a"(ea_):"memory");}
}
B72c4c6:{NFSU2_TR(0x72c4c6);
__asm__ volatile(".byte 0xd9,0xcf":::"memory");
}
B72c4c8:{NFSU2_TR(0x72c4c8);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c4cc:{NFSU2_TR(0x72c4cc);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c4d0:{NFSU2_TR(0x72c4d0);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c4d4:{NFSU2_TR(0x72c4d4);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c4d8:{NFSU2_TR(0x72c4d8);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c4dc:{NFSU2_TR(0x72c4dc);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c4e0:{NFSU2_TR(0x72c4e0);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c4e4:{NFSU2_TR(0x72c4e4);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c4e8:{NFSU2_TR(0x72c4e8);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x8ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72c4eb:{NFSU2_TR(0x72c4eb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c4a6u);}goto L72c4a6;}}
}
B72c4ed:L72c4ed:{c.instructions+=5;NFSU2_TR(0x72c4ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72c4ee:{NFSU2_TR(0x72c4ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72c4ef:{NFSU2_TR(0x72c4ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c4f0:{NFSU2_TR(0x72c4f0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72c4f1:{NFSU2_TR(0x72c4f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72c4f2:L72c4f2:{c.instructions+=7;NFSU2_TR(0x72c4f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c4f3:{NFSU2_TR(0x72c4f3);
__builtin_memmove((R+20),(R+16),4);
}
B72c4f5:{NFSU2_TR(0x72c4f5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72c4f7:{NFSU2_TR(0x72c4f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c4fa:{NFSU2_TR(0x72c4fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c4fb:{NFSU2_TR(0x72c4fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c4fc:{NFSU2_TR(0x72c4fc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72c50b;}}
}
B72c4fe:L72c4fe:{c.instructions+=4;NFSU2_TR(0x72c4fe);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B72c500:{NFSU2_TR(0x72c500);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72c503:{NFSU2_TR(0x72c503);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B72c509:{NFSU2_TR(0x72c509);
{goto L72c518;}
}
B72c50b:L72c50b:{c.instructions+=4;NFSU2_TR(0x72c50b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72c50d:{NFSU2_TR(0x72c50d);
w4(R+4,u32(0-u32(r4(R+4))));
}
B72c50f:{NFSU2_TR(0x72c50f);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72c512:{NFSU2_TR(0x72c512);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B72c518:L72c518:{c.instructions+=4;NFSU2_TR(0x72c518);
__builtin_memmove((R+28),(R+4),4);
}
B72c51a:{NFSU2_TR(0x72c51a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72c51c:{NFSU2_TR(0x72c51c);
__builtin_memmove((R+8),(R+28),4);
}
B72c51e:{NFSU2_TR(0x72c51e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72c549;}}
}
B72c520:L72c520:{c.instructions+=4;NFSU2_TR(0x72c520);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72c523:{NFSU2_TR(0x72c523);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72c526:{NFSU2_TR(0x72c526);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B72c528:{NFSU2_TR(0x72c528);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c529:L72c529:{c.instructions+=14;NFSU2_TR(0x72c529);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72c52c:{NFSU2_TR(0x72c52c);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B72c52e:{NFSU2_TR(0x72c52e);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B72c530:{NFSU2_TR(0x72c530);
{u32 ea_=u32(r4(R+4)+r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72c533:{NFSU2_TR(0x72c533);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B72c535:{NFSU2_TR(0x72c535);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72c538:{NFSU2_TR(0x72c538);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B72c539:{NFSU2_TR(0x72c539);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72c53b:{NFSU2_TR(0x72c53b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c53d:{NFSU2_TR(0x72c53d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B72c540:{NFSU2_TR(0x72c540);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72c542:{NFSU2_TR(0x72c542);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72c544:{NFSU2_TR(0x72c544);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B72c546:{NFSU2_TR(0x72c546);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c529u);}goto L72c529;}}
}
B72c548:L72c548:{c.instructions+=1;NFSU2_TR(0x72c548);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72c549:L72c549:{c.instructions+=3;NFSU2_TR(0x72c549);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B72c54b:{NFSU2_TR(0x72c54b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72c54d:{NFSU2_TR(0x72c54d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72c57b;}}
}
B72c54f:L72c54f:{c.instructions+=5;NFSU2_TR(0x72c54f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72c552:{NFSU2_TR(0x72c552);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72c555:{NFSU2_TR(0x72c555);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B72c557:{NFSU2_TR(0x72c557);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72c55a:{NFSU2_TR(0x72c55a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B72c55c:L72c55c:{c.instructions+=14;NFSU2_TR(0x72c55c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72c55f:{NFSU2_TR(0x72c55f);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B72c561:{NFSU2_TR(0x72c561);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B72c563:{NFSU2_TR(0x72c563);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72c566:{NFSU2_TR(0x72c566);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B72c568:{NFSU2_TR(0x72c568);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72c56b:{NFSU2_TR(0x72c56b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B72c56c:{NFSU2_TR(0x72c56c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B72c56e:{NFSU2_TR(0x72c56e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c570:{NFSU2_TR(0x72c570);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B72c573:{NFSU2_TR(0x72c573);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72c575:{NFSU2_TR(0x72c575);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72c577:{NFSU2_TR(0x72c577);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B72c579:{NFSU2_TR(0x72c579);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c55cu);}goto L72c55c;}}
}
B72c57b:L72c57b:{c.instructions+=6;NFSU2_TR(0x72c57b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72c57d:{NFSU2_TR(0x72c57d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72c57e:{NFSU2_TR(0x72c57e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72c580:{NFSU2_TR(0x72c580);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72c581:{NFSU2_TR(0x72c581);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72c582:{NFSU2_TR(0x72c582);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72c583:L72c583:{c.instructions+=21;NFSU2_TR(0x72c583);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c584:{NFSU2_TR(0x72c584);
__builtin_memmove((R+20),(R+16),4);
}
B72c586:{NFSU2_TR(0x72c586);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72c589:{NFSU2_TR(0x72c589);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c58a:{NFSU2_TR(0x72c58a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72c58d:{NFSU2_TR(0x72c58d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B72c593:{NFSU2_TR(0x72c593);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72c596:{NFSU2_TR(0x72c596);
__builtin_memmove((R+0),(R+12),4);
}
B72c598:{NFSU2_TR(0x72c598);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72c59b:{NFSU2_TR(0x72c59b);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B72c59c:{NFSU2_TR(0x72c59c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B72c59e:{NFSU2_TR(0x72c59e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c59f:{NFSU2_TR(0x72c59f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B72c5a1:{NFSU2_TR(0x72c5a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B72c5a3:{NFSU2_TR(0x72c5a3);
__builtin_memmove((R+8),(R+0),4);
}
B72c5a5:{NFSU2_TR(0x72c5a5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B72c5a8:{NFSU2_TR(0x72c5a8);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B72c5aa:{NFSU2_TR(0x72c5aa);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B72c5ac:{NFSU2_TR(0x72c5ac);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72c5ae:{NFSU2_TR(0x72c5ae);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72c5b1:{NFSU2_TR(0x72c5b1);
if(r1(R+514)){{goto L72c61b;}}
}
B72c5b3:L72c5b3:{c.instructions+=17;NFSU2_TR(0x72c5b3);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c5b6:{NFSU2_TR(0x72c5b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72c5b9:{NFSU2_TR(0x72c5b9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B72c5bb:{NFSU2_TR(0x72c5bb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72c5bd:{NFSU2_TR(0x72c5bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c5c0:{NFSU2_TR(0x72c5c0);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72c5c3:{NFSU2_TR(0x72c5c3);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72c5c6:{NFSU2_TR(0x72c5c6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72c5c8:{NFSU2_TR(0x72c5c8);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72c5cb:{NFSU2_TR(0x72c5cb);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B72c5cd:{NFSU2_TR(0x72c5cd);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B72c5cf:{NFSU2_TR(0x72c5cf);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c5d2:{NFSU2_TR(0x72c5d2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B72c5d8:{NFSU2_TR(0x72c5d8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72c5da:{NFSU2_TR(0x72c5da);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72c5dc:{NFSU2_TR(0x72c5dc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72c5df:{NFSU2_TR(0x72c5df);
if(r1(R+514)){{goto L72c5e3;}}
}
B72c5e1:L72c5e1:{c.instructions+=1;NFSU2_TR(0x72c5e1);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B72c5e3:L72c5e3:{c.instructions+=5;NFSU2_TR(0x72c5e3);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72c5e6:{NFSU2_TR(0x72c5e6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B72c5ec:{NFSU2_TR(0x72c5ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72c5ee:{NFSU2_TR(0x72c5ee);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72c5f1:{NFSU2_TR(0x72c5f1);
if(r1(R+514)){{goto L72c5f5;}}
}
B72c5f3:L72c5f3:{c.instructions+=1;NFSU2_TR(0x72c5f3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B72c5f5:L72c5f5:{c.instructions+=6;NFSU2_TR(0x72c5f5);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72c5f7:{NFSU2_TR(0x72c5f7);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B72c5f9:{NFSU2_TR(0x72c5f9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72c5fb:{NFSU2_TR(0x72c5fb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72c5fd:{NFSU2_TR(0x72c5fd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72c600:{NFSU2_TR(0x72c600);
if(r1(R+514)){{goto L72c60b;}}
}
B72c602:L72c602:{c.instructions+=2;NFSU2_TR(0x72c602);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B72c603:{NFSU2_TR(0x72c603);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B72c605:L72c605:{c.instructions+=3;NFSU2_TR(0x72c605);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c607:{NFSU2_TR(0x72c607);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72c609:{NFSU2_TR(0x72c609);
{goto L72c675;}
}
B72c60b:L72c60b:{c.instructions+=7;NFSU2_TR(0x72c60b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c60e:{NFSU2_TR(0x72c60e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B72c611:{NFSU2_TR(0x72c611);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B72c613:{NFSU2_TR(0x72c613);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B72c615:{NFSU2_TR(0x72c615);
__builtin_memmove((R+0),(R+8),4);
}
B72c617:{NFSU2_TR(0x72c617);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72c619:{NFSU2_TR(0x72c619);
{goto L72c673;}
}
B72c61b:L72c61b:{c.instructions+=17;NFSU2_TR(0x72c61b);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B72c61e:{NFSU2_TR(0x72c61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72c621:{NFSU2_TR(0x72c621);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72c623:{NFSU2_TR(0x72c623);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c626:{NFSU2_TR(0x72c626);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72c628:{NFSU2_TR(0x72c628);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B72c62a:{NFSU2_TR(0x72c62a);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B72c62c:{NFSU2_TR(0x72c62c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72c62e:{NFSU2_TR(0x72c62e);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72c631:{NFSU2_TR(0x72c631);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72c633:{NFSU2_TR(0x72c633);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B72c636:{NFSU2_TR(0x72c636);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c639:{NFSU2_TR(0x72c639);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B72c63f:{NFSU2_TR(0x72c63f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B72c641:{NFSU2_TR(0x72c641);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72c643:{NFSU2_TR(0x72c643);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72c646:{NFSU2_TR(0x72c646);
if(r1(R+514)){{goto L72c64a;}}
}
B72c648:L72c648:{c.instructions+=1;NFSU2_TR(0x72c648);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B72c64a:L72c64a:{c.instructions+=5;NFSU2_TR(0x72c64a);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72c64d:{NFSU2_TR(0x72c64d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B72c653:{NFSU2_TR(0x72c653);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72c655:{NFSU2_TR(0x72c655);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72c658:{NFSU2_TR(0x72c658);
if(r1(R+514)){{goto L72c65c;}}
}
B72c65a:L72c65a:{c.instructions+=1;NFSU2_TR(0x72c65a);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B72c65c:L72c65c:{c.instructions+=8;NFSU2_TR(0x72c65c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B72c65e:{NFSU2_TR(0x72c65e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B72c65f:{NFSU2_TR(0x72c65f);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B72c661:{NFSU2_TR(0x72c661);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B72c663:{NFSU2_TR(0x72c663);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B72c665:{NFSU2_TR(0x72c665);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72c667:{NFSU2_TR(0x72c667);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B72c66a:{NFSU2_TR(0x72c66a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c605u);}goto L72c605;}}
}
B72c66c:L72c66c:{c.instructions+=3;NFSU2_TR(0x72c66c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c66f:{NFSU2_TR(0x72c66f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B72c671:{NFSU2_TR(0x72c671);
__builtin_memmove((R+0),(R+8),4);
}
B72c673:L72c673:{c.instructions+=1;NFSU2_TR(0x72c673);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B72c675:L72c675:{c.instructions+=4;NFSU2_TR(0x72c675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72c676:{NFSU2_TR(0x72c676);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72c677:{NFSU2_TR(0x72c677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72c678:{NFSU2_TR(0x72c678);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72c679:L72c679:{c.instructions+=6;NFSU2_TR(0x72c679);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c67a:{NFSU2_TR(0x72c67a);
__builtin_memmove((R+20),(R+16),4);
}
B72c67c:{NFSU2_TR(0x72c67c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c67d:{NFSU2_TR(0x72c67d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72c681:{NFSU2_TR(0x72c681);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c682:{NFSU2_TR(0x72c682);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72c691;}}
}
B72c684:L72c684:{c.instructions+=5;NFSU2_TR(0x72c684);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72c687:{NFSU2_TR(0x72c687);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c68a:{NFSU2_TR(0x72c68a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c68d:{NFSU2_TR(0x72c68d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B72c68f:{NFSU2_TR(0x72c68f);
{goto L72c69f;}
}
B72c691:L72c691:{c.instructions+=5;NFSU2_TR(0x72c691);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c694:{NFSU2_TR(0x72c694);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B72c696:{NFSU2_TR(0x72c696);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c699:{NFSU2_TR(0x72c699);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c69c:{NFSU2_TR(0x72c69c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B72c69f:L72c69f:{c.instructions+=2;NFSU2_TR(0x72c69f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72c6a1:{NFSU2_TR(0x72c6a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72c6cf;}}
}
B72c6a3:L72c6a3:{c.instructions+=7;NFSU2_TR(0x72c6a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c6a6:{NFSU2_TR(0x72c6a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72c6a9:{NFSU2_TR(0x72c6a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c6aa:{NFSU2_TR(0x72c6aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c6ad:{NFSU2_TR(0x72c6ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x838ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72c6b3:{NFSU2_TR(0x72c6b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c6b4:{NFSU2_TR(0x72c6b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c6b9ull));
TAIL_STATIC(0x71feccu,71f);
}
B72c6b9:L72c6b9:{c.instructions+=3;NFSU2_TR(0x72c6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c6bc:{NFSU2_TR(0x72c6bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B72c6bf:{NFSU2_TR(0x72c6bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B72c6c2:L72c6c2:{c.instructions+=4;NFSU2_TR(0x72c6c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c6c5:{NFSU2_TR(0x72c6c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c6c8:{NFSU2_TR(0x72c6c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B72c6ca:{NFSU2_TR(0x72c6ca);
{goto L72c758;}
}
B72c6cf:L72c6cf:{c.instructions+=1;NFSU2_TR(0x72c6cf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72c709;}}
}
B72c6d1:L72c6d1:{c.instructions+=7;NFSU2_TR(0x72c6d1);
__builtin_memmove((R+0),(R+28),4);
}
B72c6d3:{NFSU2_TR(0x72c6d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72c6d6:{NFSU2_TR(0x72c6d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c6d7:{NFSU2_TR(0x72c6d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c6da:{NFSU2_TR(0x72c6da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x838ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72c6e0:{NFSU2_TR(0x72c6e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c6e1:{NFSU2_TR(0x72c6e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c6e6ull));
TAIL_STATIC(0x71feccu,71f);
}
B72c6e6:L72c6e6:{c.instructions+=7;NFSU2_TR(0x72c6e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c6e9:{NFSU2_TR(0x72c6e9);
u8 U[12];
w4(U+0,u32(u32(u32(0x838ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72c6f0:{NFSU2_TR(0x72c6f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c6f1:{NFSU2_TR(0x72c6f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c6f2:{NFSU2_TR(0x72c6f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c6f5:{NFSU2_TR(0x72c6f5);
__builtin_memmove((R+4),(R+28),4);
}
B72c6f7:{NFSU2_TR(0x72c6f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c6fcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c4f2u);}goto L72c4f2;}
}
B72c6fc:L72c6fc:{c.instructions+=5;NFSU2_TR(0x72c6fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c6ff:{NFSU2_TR(0x72c6ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B72c702:{NFSU2_TR(0x72c702);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B72c705:{NFSU2_TR(0x72c705);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B72c707:{NFSU2_TR(0x72c707);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c6c2u);}goto L72c6c2;}
}
B72c709:L72c709:{c.instructions+=7;NFSU2_TR(0x72c709);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c70c:{NFSU2_TR(0x72c70c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x838ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72c712:{NFSU2_TR(0x72c712);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c713:{NFSU2_TR(0x72c713);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c714:{NFSU2_TR(0x72c714);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c717:{NFSU2_TR(0x72c717);
__builtin_memmove((R+4),(R+28),4);
}
B72c719:{NFSU2_TR(0x72c719);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c71eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c4f2u);}goto L72c4f2;}
}
B72c71e:L72c71e:{c.instructions+=12;NFSU2_TR(0x72c71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c721:{NFSU2_TR(0x72c721);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B72c724:{NFSU2_TR(0x72c724);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B72c727:{NFSU2_TR(0x72c727);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c728:{NFSU2_TR(0x72c728);
__builtin_memmove((R+4),(R+28),4);
}
B72c72a:{NFSU2_TR(0x72c72a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B72c72d:{NFSU2_TR(0x72c72d);
__builtin_memmove((R+8),(R+12),4);
}
B72c72f:{NFSU2_TR(0x72c72f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B72c731:{NFSU2_TR(0x72c731);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c732:{NFSU2_TR(0x72c732);
u8 U[12];
w4(U+0,u32(u32(u32(0x838ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B72c739:{NFSU2_TR(0x72c739);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c73a:{NFSU2_TR(0x72c73a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c73full));
TAIL_STATIC(0x71feccu,71f);
}
B72c73f:L72c73f:{c.instructions+=9;NFSU2_TR(0x72c73f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c742:{NFSU2_TR(0x72c742);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B72c745:{NFSU2_TR(0x72c745);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B72c748:{NFSU2_TR(0x72c748);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B72c74b:{NFSU2_TR(0x72c74b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B72c74d:{NFSU2_TR(0x72c74d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c750:{NFSU2_TR(0x72c750);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72c753:{NFSU2_TR(0x72c753);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72c756:{NFSU2_TR(0x72c756);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B72c758:L72c758:{c.instructions+=5;NFSU2_TR(0x72c758);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72c75c:{NFSU2_TR(0x72c75c);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72c760:{NFSU2_TR(0x72c760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72c761:{NFSU2_TR(0x72c761);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72c762:{NFSU2_TR(0x72c762);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72c763:L72c763:{c.instructions+=9;NFSU2_TR(0x72c763);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c766:{NFSU2_TR(0x72c766);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B72c768:{NFSU2_TR(0x72c768);
u8 U[12];
w4(U+0,u32(u32(u32(0x838ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B72c76f:{NFSU2_TR(0x72c76f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c773:{NFSU2_TR(0x72c773);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72c775:{NFSU2_TR(0x72c775);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c776:{NFSU2_TR(0x72c776);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72c779:{NFSU2_TR(0x72c779);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72c77b:{NFSU2_TR(0x72c77b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L72c77f;}}
}
B72c77d:L72c77d:{c.instructions+=1;NFSU2_TR(0x72c77d);
__builtin_memmove((R+28),(R+0),4);
}
B72c77f:L72c77f:{c.instructions+=6;NFSU2_TR(0x72c77f);
__builtin_memmove((R+0),(R+28),4);
}
B72c781:{NFSU2_TR(0x72c781);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72c784:{NFSU2_TR(0x72c784);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c785:{NFSU2_TR(0x72c785);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c786:{NFSU2_TR(0x72c786);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c787:{NFSU2_TR(0x72c787);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c78cull));
TAIL_STATIC(0x71feccu,71f);
}
B72c78c:L72c78c:{c.instructions+=11;NFSU2_TR(0x72c78c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B72c78f:{NFSU2_TR(0x72c78f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B72c792:{NFSU2_TR(0x72c792);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c796:{NFSU2_TR(0x72c796);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))-u32(r4(R+28))));
s4(u32(r4(R+0)),r4(U+0));
}
B72c798:{NFSU2_TR(0x72c798);
__builtin_memmove((R+0),(R+28),4);
}
B72c79a:{NFSU2_TR(0x72c79a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72c79d:{NFSU2_TR(0x72c79d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+12)),r4(U+0));
}
B72c79f:{NFSU2_TR(0x72c79f);
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
B72c7a2:{NFSU2_TR(0x72c7a2);
__builtin_memmove((R+0),(R+28),4);
}
B72c7a4:{NFSU2_TR(0x72c7a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72c7a5:{NFSU2_TR(0x72c7a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72c7a6:L72c7a6:{c.instructions+=11;NFSU2_TR(0x72c7a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c7a7:{NFSU2_TR(0x72c7a7);
__builtin_memmove((R+20),(R+16),4);
}
B72c7a9:{NFSU2_TR(0x72c7a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c7aa:{NFSU2_TR(0x72c7aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c7ab:{NFSU2_TR(0x72c7ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c7ac:{NFSU2_TR(0x72c7ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72c7af:{NFSU2_TR(0x72c7af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c7b0:{NFSU2_TR(0x72c7b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72c7b3:{NFSU2_TR(0x72c7b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c7b6:{NFSU2_TR(0x72c7b6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72c7b8:{NFSU2_TR(0x72c7b8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L72c7c1;}}
}
B72c7ba:L72c7ba:{c.instructions+=2;NFSU2_TR(0x72c7ba);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72c7bc:{NFSU2_TR(0x72c7bc);
{goto L72c85a;}
}
B72c7c1:L72c7c1:{c.instructions+=12;NFSU2_TR(0x72c7c1);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B72c7c3:{NFSU2_TR(0x72c7c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c7c6:{NFSU2_TR(0x72c7c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c7c9:{NFSU2_TR(0x72c7c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c7cc:{NFSU2_TR(0x72c7cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c7cf:{NFSU2_TR(0x72c7cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c7d2:{NFSU2_TR(0x72c7d2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B72c7d4:{NFSU2_TR(0x72c7d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c7d7:{NFSU2_TR(0x72c7d7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72c7d9:{NFSU2_TR(0x72c7d9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72c7db:{NFSU2_TR(0x72c7db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c7de:{NFSU2_TR(0x72c7de);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72c84b;}}
}
B72c7e0:L72c7e0:{c.instructions+=1;NFSU2_TR(0x72c7e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c7e1:L72c7e1:{c.instructions+=3;NFSU2_TR(0x72c7e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72c7e4:{NFSU2_TR(0x72c7e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72c7e7:{NFSU2_TR(0x72c7e7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72c830;}}
}
B72c7e9:L72c7e9:{c.instructions+=3;NFSU2_TR(0x72c7e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72c7ec:{NFSU2_TR(0x72c7ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72c7ef:{NFSU2_TR(0x72c7ef);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72c7f5;}}
}
B72c7f1:L72c7f1:{c.instructions+=2;NFSU2_TR(0x72c7f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72c7f3:{NFSU2_TR(0x72c7f3);
{goto L72c80f;}
}
B72c7f5:L72c7f5:{c.instructions+=7;NFSU2_TR(0x72c7f5);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72c7f8:{NFSU2_TR(0x72c7f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c7f9:{NFSU2_TR(0x72c7f9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c7fc:{NFSU2_TR(0x72c7fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c7fd:{NFSU2_TR(0x72c7fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c800:{NFSU2_TR(0x72c800);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72c803:{NFSU2_TR(0x72c803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c808ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c583u);}goto L72c583;}
}
B72c808:L72c808:{c.instructions+=3;NFSU2_TR(0x72c808);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B72c80b:{NFSU2_TR(0x72c80b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B72c80d:{NFSU2_TR(0x72c80d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72c814;}}
}
B72c80f:L72c80f:{c.instructions+=2;NFSU2_TR(0x72c80f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72c812:{NFSU2_TR(0x72c812);
{goto L72c819;}
}
B72c814:L72c814:{c.instructions+=2;NFSU2_TR(0x72c814);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72c817:{NFSU2_TR(0x72c817);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B72c819:L72c819:{c.instructions+=5;NFSU2_TR(0x72c819);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B72c81c:{NFSU2_TR(0x72c81c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B72c81f:{NFSU2_TR(0x72c81f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72c822:{NFSU2_TR(0x72c822);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72c824:{NFSU2_TR(0x72c824);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72c82e;}}
}
B72c826:L72c826:{c.instructions+=3;NFSU2_TR(0x72c826);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B72c828:{NFSU2_TR(0x72c828);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72c82a:{NFSU2_TR(0x72c82a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c7e1u);}goto L72c7e1;}}
}
B72c82c:L72c82c:{c.instructions+=1;NFSU2_TR(0x72c82c);
{goto L72c830;}
}
B72c82e:L72c82e:{c.instructions+=1;NFSU2_TR(0x72c82e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B72c830:L72c830:{c.instructions+=4;NFSU2_TR(0x72c830);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72c832:{NFSU2_TR(0x72c832);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72c835:{NFSU2_TR(0x72c835);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72c836:{NFSU2_TR(0x72c836);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72c83b;}}
}
B72c838:L72c838:{c.instructions+=1;NFSU2_TR(0x72c838);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B72c83b:L72c83b:{c.instructions+=2;NFSU2_TR(0x72c83b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72c83d:{NFSU2_TR(0x72c83d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72c84b;}}
}
B72c83f:L72c83f:{c.instructions+=2;NFSU2_TR(0x72c83f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72c842:{NFSU2_TR(0x72c842);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72c849;}}
}
B72c844:L72c844:{c.instructions+=2;NFSU2_TR(0x72c844);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B72c847:{NFSU2_TR(0x72c847);
{goto L72c84b;}
}
B72c849:L72c849:{c.instructions+=1;NFSU2_TR(0x72c849);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B72c84b:L72c84b:{c.instructions+=3;NFSU2_TR(0x72c84b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72c84e:{NFSU2_TR(0x72c84e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72c850:{NFSU2_TR(0x72c850);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c7bau);}goto L72c7ba;}}
}
B72c856:L72c856:{c.instructions+=2;NFSU2_TR(0x72c856);
__builtin_memmove((R+0),(R+4),4);
}
B72c858:{NFSU2_TR(0x72c858);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72c85a:L72c85a:{c.instructions+=4;NFSU2_TR(0x72c85a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72c85b:{NFSU2_TR(0x72c85b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72c85c:{NFSU2_TR(0x72c85c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72c85d:{NFSU2_TR(0x72c85d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72c85e:L72c85e:{c.instructions+=10;NFSU2_TR(0x72c85e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c85f:{NFSU2_TR(0x72c85f);
__builtin_memmove((R+20),(R+16),4);
}
B72c861:{NFSU2_TR(0x72c861);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c862:{NFSU2_TR(0x72c862);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c863:{NFSU2_TR(0x72c863);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72c866:{NFSU2_TR(0x72c866);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B72c869:{NFSU2_TR(0x72c869);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c86a:{NFSU2_TR(0x72c86a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c86b:{NFSU2_TR(0x72c86b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72c86e:{NFSU2_TR(0x72c86e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c873ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c763u);}goto L72c763;}
}
B72c873:L72c873:{c.instructions+=5;NFSU2_TR(0x72c873);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B72c875:{NFSU2_TR(0x72c875);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72c878:{NFSU2_TR(0x72c878);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c879:{NFSU2_TR(0x72c879);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c87c:{NFSU2_TR(0x72c87c);
if(r1(R+518)){{goto L72c92a;}}
}
B72c882:L72c882:{c.instructions+=1;NFSU2_TR(0x72c882);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72c927;}}
}
B72c888:L72c888:{c.instructions+=4;NFSU2_TR(0x72c888);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72c88b:{NFSU2_TR(0x72c88b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c88e:{NFSU2_TR(0x72c88e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72c890:{NFSU2_TR(0x72c890);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72c8d5;}}
}
B72c892:L72c892:{c.instructions+=3;NFSU2_TR(0x72c892);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72c895:{NFSU2_TR(0x72c895);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B72c897:{NFSU2_TR(0x72c897);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72c89d;}}
}
B72c899:L72c899:{c.instructions+=2;NFSU2_TR(0x72c899);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B72c89b:{NFSU2_TR(0x72c89b);
{goto L72c8b5;}
}
B72c89d:L72c89d:{c.instructions+=7;NFSU2_TR(0x72c89d);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72c8a0:{NFSU2_TR(0x72c8a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c8a3:{NFSU2_TR(0x72c8a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c8a4:{NFSU2_TR(0x72c8a4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c8a7:{NFSU2_TR(0x72c8a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B72c8aa:{NFSU2_TR(0x72c8aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c8ab:{NFSU2_TR(0x72c8ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c8b0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c583u);}goto L72c583;}
}
B72c8b0:L72c8b0:{c.instructions+=2;NFSU2_TR(0x72c8b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B72c8b3:{NFSU2_TR(0x72c8b3);
__builtin_memmove((R+28),(R+0),4);
}
B72c8b5:L72c8b5:{c.instructions+=3;NFSU2_TR(0x72c8b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72c8b8:{NFSU2_TR(0x72c8b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c8b9:{NFSU2_TR(0x72c8b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c8beull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c679u);}goto L72c679;}
}
B72c8be:L72c8be:{c.instructions+=4;NFSU2_TR(0x72c8be);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B72c8c1:{NFSU2_TR(0x72c8c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c8c2:{NFSU2_TR(0x72c8c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72c8c5:{NFSU2_TR(0x72c8c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c8caull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c763u);}goto L72c763;}
}
B72c8ca:L72c8ca:{c.instructions+=5;NFSU2_TR(0x72c8ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B72c8cd:{NFSU2_TR(0x72c8cd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72c8d1:{NFSU2_TR(0x72c8d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c8d2:{NFSU2_TR(0x72c8d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c8d3:{NFSU2_TR(0x72c8d3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c888u);}goto L72c888;}}
}
B72c8d5:L72c8d5:{c.instructions+=2;NFSU2_TR(0x72c8d5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72c8d7:{NFSU2_TR(0x72c8d7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72c8fb;}}
}
B72c8d9:L72c8d9:{c.instructions+=8;NFSU2_TR(0x72c8d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c8dc:{NFSU2_TR(0x72c8dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72c8df:{NFSU2_TR(0x72c8df);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72c8e2:{NFSU2_TR(0x72c8e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c8e3:{NFSU2_TR(0x72c8e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72c8e6:{NFSU2_TR(0x72c8e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c8e7:{NFSU2_TR(0x72c8e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c8e8:{NFSU2_TR(0x72c8e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c8edull));
TAIL_STATIC(0x71feccu,71f);
}
B72c8ed:L72c8ed:{c.instructions+=5;NFSU2_TR(0x72c8ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c8f0:{NFSU2_TR(0x72c8f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72c8f3:{NFSU2_TR(0x72c8f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B72c8f6:{NFSU2_TR(0x72c8f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72c8f9:{NFSU2_TR(0x72c8f9);
{goto L72c8fe;}
}
B72c8fb:L72c8fb:{c.instructions+=1;NFSU2_TR(0x72c8fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c8fe:L72c8fe:{c.instructions+=2;NFSU2_TR(0x72c8fe);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72c902:{NFSU2_TR(0x72c902);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72c927;}}
}
B72c904:L72c904:{c.instructions+=3;NFSU2_TR(0x72c904);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72c907:{NFSU2_TR(0x72c907);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72c90a:{NFSU2_TR(0x72c90a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L72c90f;}}
}
B72c90c:L72c90c:{c.instructions+=1;NFSU2_TR(0x72c90c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72c90f:L72c90f:{c.instructions+=6;NFSU2_TR(0x72c90f);
__builtin_memmove((R+4),(R+28),4);
}
B72c911:{NFSU2_TR(0x72c911);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B72c914:{NFSU2_TR(0x72c914);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c915:{NFSU2_TR(0x72c915);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c916:{NFSU2_TR(0x72c916);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c919:{NFSU2_TR(0x72c919);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c91eull));
TAIL_STATIC(0x71feccu,71f);
}
B72c91e:L72c91e:{c.instructions+=3;NFSU2_TR(0x72c91e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B72c921:{NFSU2_TR(0x72c921);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B72c924:{NFSU2_TR(0x72c924);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+28)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+28)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72c927:L72c927:{c.instructions+=1;NFSU2_TR(0x72c927);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c92a:L72c92a:{c.instructions+=5;NFSU2_TR(0x72c92a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72c92b:{NFSU2_TR(0x72c92b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72c92c:{NFSU2_TR(0x72c92c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72c92d:{NFSU2_TR(0x72c92d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72c92e:{NFSU2_TR(0x72c92e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72c92f:L72c92f:{c.instructions+=5;NFSU2_TR(0x72c92f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B72c933:{NFSU2_TR(0x72c933);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c937:{NFSU2_TR(0x72c937);
{u32 ea_=u32(u32(7904964u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B72c93d:{NFSU2_TR(0x72c93d);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72c940:{NFSU2_TR(0x72c940);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72c941:L72c941:{c.instructions+=8;NFSU2_TR(0x72c941);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c942:{NFSU2_TR(0x72c942);
__builtin_memmove((R+20),(R+16),4);
}
B72c944:{NFSU2_TR(0x72c944);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c945:{NFSU2_TR(0x72c945);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72c948:{NFSU2_TR(0x72c948);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72c94c:{NFSU2_TR(0x72c94c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c94d:{NFSU2_TR(0x72c94d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72c950:{NFSU2_TR(0x72c950);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72c96e;}}
}
B72c952:L72c952:{c.instructions+=8;NFSU2_TR(0x72c952);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72c956:{NFSU2_TR(0x72c956);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c959:{NFSU2_TR(0x72c959);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c95a:{NFSU2_TR(0x72c95a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c95b:{NFSU2_TR(0x72c95b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c95e:{NFSU2_TR(0x72c95e);
u8 U[4];
w4(U+0,u32(0xc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c963:{NFSU2_TR(0x72c963);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c964:{NFSU2_TR(0x72c964);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c966ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B72c966:L72c966:{c.instructions+=2;NFSU2_TR(0x72c966);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72c969:{NFSU2_TR(0x72c969);
{goto L72ca17;}
}
B72c96e:L72c96e:{c.instructions+=4;NFSU2_TR(0x72c96e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c96f:{NFSU2_TR(0x72c96f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c972:{NFSU2_TR(0x72c972);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c973:{NFSU2_TR(0x72c973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c978ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c7a6u);}goto L72c7a6;}
}
B72c978:L72c978:{c.instructions+=6;NFSU2_TR(0x72c978);
__builtin_memmove((R+12),(R+0),4);
}
B72c97a:{NFSU2_TR(0x72c97a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c97d:{NFSU2_TR(0x72c97d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B72c97f:{NFSU2_TR(0x72c97f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c980:{NFSU2_TR(0x72c980);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c981:{NFSU2_TR(0x72c981);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72c995;}}
}
B72c983:L72c983:{c.instructions+=2;NFSU2_TR(0x72c983);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c984:{NFSU2_TR(0x72c984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c989ull));
TAIL_STATIC(0x723649u,723);
}
B72c989:L72c989:{c.instructions+=3;NFSU2_TR(0x72c989);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B72c98b:{NFSU2_TR(0x72c98b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c98c:{NFSU2_TR(0x72c98c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72c995;}}
}
B72c98e:L72c98e:{c.instructions+=2;NFSU2_TR(0x72c98e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72c990:{NFSU2_TR(0x72c990);
{goto L72ca16;}
}
B72c995:L72c995:{c.instructions+=2;NFSU2_TR(0x72c995);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72c997:{NFSU2_TR(0x72c997);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72c9eb;}}
}
B72c999:L72c999:{c.instructions+=4;NFSU2_TR(0x72c999);
__builtin_memmove((R+0),(R+12),4);
}
B72c99b:{NFSU2_TR(0x72c99b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B72c99e:{NFSU2_TR(0x72c99e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1830ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72c9a4:{NFSU2_TR(0x72c9a4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72c9d4;}}
}
B72c9a6:L72c9a6:{c.instructions+=6;NFSU2_TR(0x72c9a6);
__builtin_memmove((R+0),(R+12),4);
}
B72c9a8:{NFSU2_TR(0x72c9a8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffc0ull))));
}
B72c9ab:{NFSU2_TR(0x72c9ab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B72c9ae:{NFSU2_TR(0x72c9ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x182cull))));
__builtin_memmove((R+4),(U+0),4);
}
B72c9b4:{NFSU2_TR(0x72c9b4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),r4(R+0)));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B72c9b6:{NFSU2_TR(0x72c9b6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72c9cb;}}
}
B72c9b8:L72c9b8:{c.instructions+=6;NFSU2_TR(0x72c9b8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c9ba:{NFSU2_TR(0x72c9ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c9bb:{NFSU2_TR(0x72c9bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c9bc:{NFSU2_TR(0x72c9bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1828ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72c9c2:{NFSU2_TR(0x72c9c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c9c3:{NFSU2_TR(0x72c9c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c9c8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c2c2u);}goto L72c2c2;}
}
B72c9c8:L72c9c8:{c.instructions+=1;NFSU2_TR(0x72c9c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B72c9cb:L72c9cb:{c.instructions+=2;NFSU2_TR(0x72c9cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1828ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72c9d1:{NFSU2_TR(0x72c9d1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x8ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72c9d4:L72c9d4:{c.instructions+=8;NFSU2_TR(0x72c9d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72c9d8:{NFSU2_TR(0x72c9d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72c9db:{NFSU2_TR(0x72c9db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c9dc:{NFSU2_TR(0x72c9dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c9dd:{NFSU2_TR(0x72c9dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72c9e0:{NFSU2_TR(0x72c9e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c9e1:{NFSU2_TR(0x72c9e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c9e2:{NFSU2_TR(0x72c9e2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c9e4ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B72c9e4:L72c9e4:{c.instructions+=3;NFSU2_TR(0x72c9e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B72c9e7:{NFSU2_TR(0x72c9e7);
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
B72c9e9:{NFSU2_TR(0x72c9e9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72ca16;}}
}
B72c9eb:L72c9eb:{c.instructions+=7;NFSU2_TR(0x72c9eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72c9ee:{NFSU2_TR(0x72c9ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c9ef:{NFSU2_TR(0x72c9ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c9f0:{NFSU2_TR(0x72c9f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72c9f3:{NFSU2_TR(0x72c9f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c9f4:{NFSU2_TR(0x72c9f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72c9f5:{NFSU2_TR(0x72c9f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72c9faull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c85eu);}goto L72c85e;}
}
B72c9fa:L72c9fa:{c.instructions+=3;NFSU2_TR(0x72c9fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B72c9fd:{NFSU2_TR(0x72c9fd);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B72c9ff:{NFSU2_TR(0x72c9ff);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L72ca14;}}
}
B72ca01:L72ca01:{c.instructions+=7;NFSU2_TR(0x72ca01);
__builtin_memmove((R+4),(R+28),4);
}
B72ca03:{NFSU2_TR(0x72ca03);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B72ca05:{NFSU2_TR(0x72ca05);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B72ca08:{NFSU2_TR(0x72ca08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ca09:{NFSU2_TR(0x72ca09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72ca0c:{NFSU2_TR(0x72ca0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ca0d:{NFSU2_TR(0x72ca0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72ca12ull));
TAIL_STATIC(0x727030u,727);
}
B72ca12:L72ca12:{c.instructions+=2;NFSU2_TR(0x72ca12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ca13:{NFSU2_TR(0x72ca13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ca14:L72ca14:{c.instructions+=1;NFSU2_TR(0x72ca14);
__builtin_memmove((R+0),(R+28),4);
}
B72ca16:L72ca16:{c.instructions+=1;NFSU2_TR(0x72ca16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72ca17:L72ca17:{c.instructions+=4;NFSU2_TR(0x72ca17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72ca18:{NFSU2_TR(0x72ca18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72ca19:{NFSU2_TR(0x72ca19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B72ca1a:{NFSU2_TR(0x72ca1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72ca1b:L72ca1b:{c.instructions+=7;NFSU2_TR(0x72ca1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ca1c:{NFSU2_TR(0x72ca1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ca1d:{NFSU2_TR(0x72ca1d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72ca21:{NFSU2_TR(0x72ca21);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1828ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72ca27:{NFSU2_TR(0x72ca27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72ca29:{NFSU2_TR(0x72ca29);
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
B72ca2b:{NFSU2_TR(0x72ca2b);
if(r1(R+518)){{goto L72ca3e;}}
}
B72ca2d:L72ca2d:{c.instructions+=2;NFSU2_TR(0x72ca2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ca2e:{NFSU2_TR(0x72ca2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72ca33ull));
TAIL_STATIC(0x724894u,724);
}
B72ca33:L72ca33:{c.instructions+=3;NFSU2_TR(0x72ca33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B72ca36:{NFSU2_TR(0x72ca36);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x182cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72ca3d:{NFSU2_TR(0x72ca3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ca3e:L72ca3e:{c.instructions+=3;NFSU2_TR(0x72ca3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72ca3f:{NFSU2_TR(0x72ca3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72ca40:{NFSU2_TR(0x72ca40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72ca41:L72ca41:{c.instructions+=8;NFSU2_TR(0x72ca41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ca42:{NFSU2_TR(0x72ca42);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ca46:{NFSU2_TR(0x72ca46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ca47:{NFSU2_TR(0x72ca47);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B72ca49:{NFSU2_TR(0x72ca49);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B72ca4d:{NFSU2_TR(0x72ca4d);
u8 U[4];
w4(U+0,u32(0x72c941ull));
s4(u32(r4(R+24)),r4(U+0));
}
B72ca53:{NFSU2_TR(0x72ca53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x72ca1bull));
s4(u32(r4(U+0)),r4(U+4));
}
B72ca5a:{NFSU2_TR(0x72ca5a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L72ca72;}}
}
B72ca5c:L72ca5c:{c.instructions+=2;NFSU2_TR(0x72ca5c);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B72ca60:{NFSU2_TR(0x72ca60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72ca65ull));
TAIL_STATIC(0x727e0cu,727);
}
B72ca65:L72ca65:{c.instructions+=2;NFSU2_TR(0x72ca65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ca66:{NFSU2_TR(0x72ca66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72ca6bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72c31eu);}goto L72c31e;}
}
B72ca6b:L72ca6b:{c.instructions+=4;NFSU2_TR(0x72ca6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ca6c:{NFSU2_TR(0x72ca6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ca6d:{NFSU2_TR(0x72ca6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ca70:{NFSU2_TR(0x72ca70);
{goto L72ca76;}
}
B72ca72:L72ca72:{c.instructions+=1;NFSU2_TR(0x72ca72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B72ca76:L72ca76:{c.instructions+=14;NFSU2_TR(0x72ca76);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72ca7a:{NFSU2_TR(0x72ca7a);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B72ca7c:{NFSU2_TR(0x72ca7c);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ca7f:{NFSU2_TR(0x72ca7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ca82:{NFSU2_TR(0x72ca82);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B72ca84:{NFSU2_TR(0x72ca84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ca87:{NFSU2_TR(0x72ca87);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72ca8a:{NFSU2_TR(0x72ca8a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B72ca8d:{NFSU2_TR(0x72ca8d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ca8f:{NFSU2_TR(0x72ca8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72ca93:{NFSU2_TR(0x72ca93);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B72ca95:{NFSU2_TR(0x72ca95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ca96:{NFSU2_TR(0x72ca96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ca99:{NFSU2_TR(0x72ca99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72ca9eull));
TAIL_STATIC(0x72a195u,72a);
}
B72ca9e:L72ca9e:{c.instructions+=13;NFSU2_TR(0x72ca9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ca9f:{NFSU2_TR(0x72ca9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72caa0:{NFSU2_TR(0x72caa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72caa3:{NFSU2_TR(0x72caa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72caa6:{NFSU2_TR(0x72caa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72caa9:{NFSU2_TR(0x72caa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1828ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72caaf:{NFSU2_TR(0x72caaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x182cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cab5:{NFSU2_TR(0x72cab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cab8:{NFSU2_TR(0x72cab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72cab9:{NFSU2_TR(0x72cab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1830ull))));
w4(U+4,u32(0x10bcull));
s4(u32(r4(U+0)),r4(U+4));
}
B72cac3:{NFSU2_TR(0x72cac3);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72cac5:{NFSU2_TR(0x72cac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72cac6:{NFSU2_TR(0x72cac6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72cac7:L72cac7:{c.instructions+=9;NFSU2_TR(0x72cac7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72cacb:{NFSU2_TR(0x72cacb);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72cacf:{NFSU2_TR(0x72cacf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cad0:{NFSU2_TR(0x72cad0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72cad4:{NFSU2_TR(0x72cad4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cad5:{NFSU2_TR(0x72cad5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72cad9:{NFSU2_TR(0x72cad9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cada:{NFSU2_TR(0x72cada);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72cade:{NFSU2_TR(0x72cade);
if(r1(R+518)){{goto L72caf5;}}
}
B72cae0:L72cae0:{c.instructions+=8;NFSU2_TR(0x72cae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72cae3:{NFSU2_TR(0x72cae3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72cae7:{NFSU2_TR(0x72cae7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cae8:{NFSU2_TR(0x72cae8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cae9:{NFSU2_TR(0x72cae9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72caea:{NFSU2_TR(0x72caea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72caeb:{NFSU2_TR(0x72caeb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72caec:{NFSU2_TR(0x72caec);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72caeeull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B72caee:L72caee:{c.instructions+=3;NFSU2_TR(0x72caee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B72caf1:{NFSU2_TR(0x72caf1);
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
B72caf3:{NFSU2_TR(0x72caf3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L72cb38;}}
}
B72caf5:L72caf5:{c.instructions+=2;NFSU2_TR(0x72caf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B72caf8:{NFSU2_TR(0x72caf8);
{goto L72cb32;}
}
B72cafa:L72cafa:{c.instructions+=8;NFSU2_TR(0x72cafa);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B72cafc:{NFSU2_TR(0x72cafc);
{u32 ea_=u32(u32(8153704u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B72cb02:{NFSU2_TR(0x72cb02);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B72cb04:{NFSU2_TR(0x72cb04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B72cb06:{NFSU2_TR(0x72cb06);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B72cb0b:{NFSU2_TR(0x72cb0b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B72cb0e:{NFSU2_TR(0x72cb0e);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x7fffull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B72cb13:{NFSU2_TR(0x72cb13);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L72cb2d;}}
}
B72cb15:L72cb15:{c.instructions+=2;NFSU2_TR(0x72cb15);
w1(R+512,u8((r4(R+0))<(u32(0xf8000ull))));
}
B72cb1a:{NFSU2_TR(0x72cb1a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L72cb2d;}}
}
B72cb1c:L72cb1c:{c.instructions+=4;NFSU2_TR(0x72cb1c);
w1(R+512,u8((r4(R+0))<(u32(0x80000ull))));
}
B72cb21:{NFSU2_TR(0x72cb21);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B72cb23:{NFSU2_TR(0x72cb23);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B72cb28:{NFSU2_TR(0x72cb28);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffff8000ull))));
}
B72cb2d:L72cb2d:{c.instructions+=3;NFSU2_TR(0x72cb2d);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+28)),r2(U+0));
}
B72cb30:{NFSU2_TR(0x72cb30);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B72cb31:{NFSU2_TR(0x72cb31);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B72cb32:L72cb32:{c.instructions+=2;NFSU2_TR(0x72cb32);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B72cb34:{NFSU2_TR(0x72cb34);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72cafau);}goto L72cafa;}}
}
B72cb36:L72cb36:{c.instructions+=1;NFSU2_TR(0x72cb36);
__builtin_memmove((R+0),(R+12),4);
}
B72cb38:L72cb38:{c.instructions+=4;NFSU2_TR(0x72cb38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72cb39:{NFSU2_TR(0x72cb39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72cb3a:{NFSU2_TR(0x72cb3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72cb3b:{NFSU2_TR(0x72cb3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72cb3c:L72cb3c:{c.instructions+=4;NFSU2_TR(0x72cb3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72cb40:{NFSU2_TR(0x72cb40);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72cb44:{NFSU2_TR(0x72cb44);
u8 U[4];
w4(U+0,u32(0x72cac7ull));
s4(u32(r4(R+0)),r4(U+0));
}
B72cb4a:{NFSU2_TR(0x72cb4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72cb4b:L72cb4b:{c.instructions+=28;NFSU2_TR(0x72cb4b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cb4c:{NFSU2_TR(0x72cb4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cb4d:{NFSU2_TR(0x72cb4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cb4e:{NFSU2_TR(0x72cb4e);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cb50:{NFSU2_TR(0x72cb50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72cb51:{NFSU2_TR(0x72cb51);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cb53:{NFSU2_TR(0x72cb53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72cb54:{NFSU2_TR(0x72cb54);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cb56:{NFSU2_TR(0x72cb56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72cb57:{NFSU2_TR(0x72cb57);
__builtin_memmove(gp(0x8b4894),(R+28),4);
}
B72cb5d:{NFSU2_TR(0x72cb5d);
__builtin_memmove(gp(0x8b48a0),(R+28),4);
}
B72cb63:{NFSU2_TR(0x72cb63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72cb64:{NFSU2_TR(0x72cb64);
w4(R+8,u32(0x732be1ull));
}
B72cb69:{NFSU2_TR(0x72cb69);
w4(R+4,u32(0x732b10ull));
}
B72cb6e:{NFSU2_TR(0x72cb6e);
w4(R+0,u32(0x7328e8ull));
}
B72cb73:{NFSU2_TR(0x72cb73);
__builtin_memmove(gp(0x8b4890),(R+24),4);
}
B72cb79:{NFSU2_TR(0x72cb79);
__builtin_memmove(gp(0x8b489c),(R+24),4);
}
B72cb7f:{NFSU2_TR(0x72cb7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72cb80:{NFSU2_TR(0x72cb80);
__builtin_memmove(gp(0x8b488c),(R+12),4);
}
B72cb86:{NFSU2_TR(0x72cb86);
__builtin_memmove(gp(0x8b4898),(R+12),4);
}
B72cb8c:{NFSU2_TR(0x72cb8c);
__builtin_memmove(gp(0x8b482c),(R+8),4);
}
B72cb92:{NFSU2_TR(0x72cb92);
__builtin_memmove(gp(0x8b4834),(R+4),4);
}
B72cb98:{NFSU2_TR(0x72cb98);
__builtin_memmove(gp(0x8b4830),(R+0),4);
}
B72cb9d:{NFSU2_TR(0x72cb9d);
__builtin_memmove(gp(0x8b4838),(R+8),4);
}
B72cba3:{NFSU2_TR(0x72cba3);
__builtin_memmove(gp(0x8b4840),(R+4),4);
}
B72cba9:{NFSU2_TR(0x72cba9);
__builtin_memmove(gp(0x8b483c),(R+0),4);
}
B72cbae:{NFSU2_TR(0x72cbae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72cbaf:{NFSU2_TR(0x72cbaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72cbb0:L72cbb0:{c.instructions+=7;NFSU2_TR(0x72cbb0);
s4(0x8b4820,u32(0x733095ull));
}
B72cbba:{NFSU2_TR(0x72cbba);
s4(0x8b4880,u32(0x2cull));
}
B72cbc4:{NFSU2_TR(0x72cbc4);
s4(0x8b4884,u32(0x54ull));
}
B72cbce:{NFSU2_TR(0x72cbce);
s4(0x8b4824,u32(0x732f90ull));
}
B72cbd8:{NFSU2_TR(0x72cbd8);
s4(0x8b4828,u32(0x732d8eull));
}
B72cbe2:{NFSU2_TR(0x72cbe2);
s4(0x8b4888,u32(0x3cull));
}
B72cbec:{NFSU2_TR(0x72cbec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72cbed:L72cbed:{c.instructions+=7;NFSU2_TR(0x72cbed);
s4(0x8b4814,u32(0x73332full));
}
B72cbf7:{NFSU2_TR(0x72cbf7);
s4(0x8b4874,u32(0x2cull));
}
B72cc01:{NFSU2_TR(0x72cc01);
s4(0x8b4818,u32(0x73326aull));
}
B72cc0b:{NFSU2_TR(0x72cc0b);
s4(0x8b4878,u32(0x30ull));
}
B72cc15:{NFSU2_TR(0x72cc15);
s4(0x8b481c,u32(0x7331b8ull));
}
B72cc1f:{NFSU2_TR(0x72cc1f);
s4(0x8b487c,u32(0x34ull));
}
B72cc29:{NFSU2_TR(0x72cc29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72cc2a:L72cc2a:{c.instructions+=1;NFSU2_TR(0x72cc2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72cc2full));
TAIL_STATIC(0x73335eu,733);
}
B72cc2f:L72cc2f:{c.instructions+=7;NFSU2_TR(0x72cc2f);
s4(0x8b4808,u32(0x73332full));
}
B72cc39:{NFSU2_TR(0x72cc39);
s4(0x8b4868,u32(0x2cull));
}
B72cc43:{NFSU2_TR(0x72cc43);
s4(0x8b480c,u32(0x73326aull));
}
B72cc4d:{NFSU2_TR(0x72cc4d);
s4(0x8b486c,u32(0x30ull));
}
B72cc57:{NFSU2_TR(0x72cc57);
s4(0x8b4810,u32(0x7331b8ull));
}
B72cc61:{NFSU2_TR(0x72cc61);
s4(0x8b4870,u32(0x34ull));
}
B72cc6b:{NFSU2_TR(0x72cc6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72cc6c:L72cc6c:{c.instructions+=4;NFSU2_TR(0x72cc6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72cc70:{NFSU2_TR(0x72cc70);
__builtin_memmove(gp(0x818ba0),(R+0),4);
}
B72cc75:{NFSU2_TR(0x72cc75);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72cc77:{NFSU2_TR(0x72cc77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72cc78:L72cc78:{c.instructions+=3;NFSU2_TR(0x72cc78);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72cc7c:{NFSU2_TR(0x72cc7c);
__builtin_memmove(gp(0x8b4a1c),(R+0),4);
}
B72cc81:{NFSU2_TR(0x72cc81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72cc82:L72cc82:{c.instructions+=3;NFSU2_TR(0x72cc82);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72cc86:{NFSU2_TR(0x72cc86);
__builtin_memmove(gp(0x8b4a24),(R+0),4);
}
B72cc8b:{NFSU2_TR(0x72cc8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72cc8c:L72cc8c:{c.instructions+=27;NFSU2_TR(0x72cc8c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cc8d:{NFSU2_TR(0x72cc8d);
__builtin_memmove((R+20),(R+16),4);
}
B72cc8f:{NFSU2_TR(0x72cc8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cc90:{NFSU2_TR(0x72cc90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cc91:{NFSU2_TR(0x72cc91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cc92:{NFSU2_TR(0x72cc92);
u8 U[170];
w1(U+0,u8(u32(r1(R+525))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(R+523))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(R+522))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(R+521))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(R+520))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(R+519))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(R+518))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(R+516))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(R+514))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(R+512))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(R+532))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(R+531))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(R+530))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(R+529))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(R+640));
}
B72cc93:{NFSU2_TR(0x72cc93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cc94:{NFSU2_TR(0x72cc94);
__builtin_memmove((R+12),(R+16),4);
}
B72cc96:{NFSU2_TR(0x72cc96);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72cc99:{NFSU2_TR(0x72cc99);
u8 U[170];
w1(U+0,u8(u32(r1(R+525))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(R+523))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(R+522))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(R+521))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(R+520))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(R+519))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(R+518))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(R+516))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(R+514))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(R+512))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(R+532))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(R+531))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(R+530))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(R+529))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(R+640));
}
B72cc9a:{NFSU2_TR(0x72cc9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72cc9b:{NFSU2_TR(0x72cc9b);
__builtin_memmove((R+4),(R+0),4);
}
B72cc9d:{NFSU2_TR(0x72cc9d);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0x200000ull))));
}
B72cca2:{NFSU2_TR(0x72cca2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cca3:{NFSU2_TR(0x72cca3);
u8 U[48];
__builtin_memmove((R+640),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(U+0,u32(u32(r4(R+640))&u32(u32(0x4000ull))));
w1(R+525,u8((r4(U+0))!=(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+640))&u32(u32(0x800ull))));
w1(R+523,u8((r4(U+4))!=(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+640))&u32(u32(0x400ull))));
w1(R+522,u8((r4(U+8))!=(u32(0x0ull))));
w4(U+12,u32(u32(r4(R+640))&u32(u32(0x200ull))));
w1(R+521,u8((r4(U+12))!=(u32(0x0ull))));
w4(U+16,u32(u32(r4(R+640))&u32(u32(0x100ull))));
w1(R+520,u8((r4(U+16))!=(u32(0x0ull))));
w4(U+20,u32(u32(r4(R+640))&u32(u32(0x80ull))));
w1(R+519,u8((r4(U+20))!=(u32(0x0ull))));
w4(U+24,u32(u32(r4(R+640))&u32(u32(0x40ull))));
w1(R+518,u8((r4(U+24))!=(u32(0x0ull))));
w4(U+28,u32(u32(r4(R+640))&u32(u32(0x10ull))));
w1(R+516,u8((r4(U+28))!=(u32(0x0ull))));
w4(U+32,u32(u32(r4(R+640))&u32(u32(0x4ull))));
w1(R+514,u8((r4(U+32))!=(u32(0x0ull))));
w4(U+36,u32(u32(r4(R+640))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+36))!=(u32(0x0ull))));
w4(U+40,u32(u32(r4(R+640))&u32(u32(0x200000ull))));
w1(R+532,u8((r4(U+40))!=(u32(0x0ull))));
w4(U+44,u32(u32(r4(R+640))&u32(u32(0x40000ull))));
w1(R+529,u8((r4(U+44))!=(u32(0x0ull))));
w1(R+531,u8(0x0ull));
w1(R+530,u8(0x0ull));
}
B72cca4:{NFSU2_TR(0x72cca4);
u8 U[170];
w1(U+0,u8(u32(r1(R+525))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(R+523))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(R+522))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(R+521))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(R+520))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(R+519))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(R+518))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(R+516))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(R+514))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(R+512))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(R+532))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(R+531))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(R+530))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(R+529))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(R+640));
}
B72cca5:{NFSU2_TR(0x72cca5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72cca6:{NFSU2_TR(0x72cca6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B72cca8:{NFSU2_TR(0x72cca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ccab:{NFSU2_TR(0x72ccab);
__builtin_memmove((R+16),(R+12),4);
}
B72ccad:{NFSU2_TR(0x72ccad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72ccae:{NFSU2_TR(0x72ccae);
u8 U[48];
__builtin_memmove((R+640),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(U+0,u32(u32(r4(R+640))&u32(u32(0x4000ull))));
w1(R+525,u8((r4(U+0))!=(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+640))&u32(u32(0x800ull))));
w1(R+523,u8((r4(U+4))!=(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+640))&u32(u32(0x400ull))));
w1(R+522,u8((r4(U+8))!=(u32(0x0ull))));
w4(U+12,u32(u32(r4(R+640))&u32(u32(0x200ull))));
w1(R+521,u8((r4(U+12))!=(u32(0x0ull))));
w4(U+16,u32(u32(r4(R+640))&u32(u32(0x100ull))));
w1(R+520,u8((r4(U+16))!=(u32(0x0ull))));
w4(U+20,u32(u32(r4(R+640))&u32(u32(0x80ull))));
w1(R+519,u8((r4(U+20))!=(u32(0x0ull))));
w4(U+24,u32(u32(r4(R+640))&u32(u32(0x40ull))));
w1(R+518,u8((r4(U+24))!=(u32(0x0ull))));
w4(U+28,u32(u32(r4(R+640))&u32(u32(0x10ull))));
w1(R+516,u8((r4(U+28))!=(u32(0x0ull))));
w4(U+32,u32(u32(r4(R+640))&u32(u32(0x4ull))));
w1(R+514,u8((r4(U+32))!=(u32(0x0ull))));
w4(U+36,u32(u32(r4(R+640))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+36))!=(u32(0x0ull))));
w4(U+40,u32(u32(r4(R+640))&u32(u32(0x200000ull))));
w1(R+532,u8((r4(U+40))!=(u32(0x0ull))));
w4(U+44,u32(u32(r4(R+640))&u32(u32(0x40000ull))));
w1(R+529,u8((r4(U+44))!=(u32(0x0ull))));
w1(R+531,u8(0x0ull));
w1(R+530,u8(0x0ull));
}
B72ccaf:{NFSU2_TR(0x72ccaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ccb0:{NFSU2_TR(0x72ccb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72ccb3:{NFSU2_TR(0x72ccb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72ccb4:{NFSU2_TR(0x72ccb4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72ccb5:{NFSU2_TR(0x72ccb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72ccb6:L72ccb6:{c.instructions+=26;NFSU2_TR(0x72ccb6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ccb7:{NFSU2_TR(0x72ccb7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ccb8:{NFSU2_TR(0x72ccb8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ccb9:{NFSU2_TR(0x72ccb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ccba:{NFSU2_TR(0x72ccba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ccbb:{NFSU2_TR(0x72ccbb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ccbc:{NFSU2_TR(0x72ccbc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ccbd:{NFSU2_TR(0x72ccbd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ccbe:{NFSU2_TR(0x72ccbe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ccbf:{NFSU2_TR(0x72ccbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72ccc3:{NFSU2_TR(0x72ccc3);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L72ccc3_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L72ccc3_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L72ccc3_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L72ccc3_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L72ccc3_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L72ccc3_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L72ccc3_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L72ccc3_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L72ccc3_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L72ccc3_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L72ccc3_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L72ccc3_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L72ccc3_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L72ccc3_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L72ccc3_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L72ccc3_65;}
{SPILL();c.pc=0x72ccc3u;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72ccc3_67;
L72ccc3_35:;
{SPILL();c.pc=0x72ccc3u;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72ccc3_67;
L72ccc3_37:;
{SPILL();c.pc=0x72ccc3u;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72ccc3_67;
L72ccc3_39:;
{SPILL();c.pc=0x72ccc3u;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72ccc3_67;
L72ccc3_41:;
{SPILL();c.pc=0x72ccc3u;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72ccc3_67;
L72ccc3_43:;
{SPILL();c.pc=0x72ccc3u;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72ccc3_67;
L72ccc3_45:;
{SPILL();c.pc=0x72ccc3u;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72ccc3_67;
L72ccc3_47:;
{SPILL();c.pc=0x72ccc3u;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72ccc3_67;
L72ccc3_49:;
{SPILL();c.pc=0x72ccc3u;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72ccc3_67;
L72ccc3_51:;
{SPILL();c.pc=0x72ccc3u;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72ccc3_67;
L72ccc3_53:;
{SPILL();c.pc=0x72ccc3u;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72ccc3_67;
L72ccc3_55:;
{SPILL();c.pc=0x72ccc3u;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72ccc3_67;
L72ccc3_57:;
{SPILL();c.pc=0x72ccc3u;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72ccc3_67;
L72ccc3_59:;
{SPILL();c.pc=0x72ccc3u;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72ccc3_67;
L72ccc3_61:;
{SPILL();c.pc=0x72ccc3u;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72ccc3_67;
L72ccc3_63:;
{SPILL();c.pc=0x72ccc3u;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72ccc3_67;
L72ccc3_65:;
{SPILL();c.pc=0x72ccc3u;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L72ccc3_67;
L72ccc3_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B72ccc5:{NFSU2_TR(0x72ccc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72ccc9:{NFSU2_TR(0x72ccc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B72cccb:{NFSU2_TR(0x72cccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ccce:{NFSU2_TR(0x72ccce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ccd1:{NFSU2_TR(0x72ccd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ccd4:{NFSU2_TR(0x72ccd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72ccd5:{NFSU2_TR(0x72ccd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72ccd6:{NFSU2_TR(0x72ccd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B72ccd7:{NFSU2_TR(0x72ccd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ccd8:{NFSU2_TR(0x72ccd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72ccd9:{NFSU2_TR(0x72ccd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72ccda:{NFSU2_TR(0x72ccda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72ccdb:{NFSU2_TR(0x72ccdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72ccdc:{NFSU2_TR(0x72ccdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B72ccdd:{NFSU2_TR(0x72ccdd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72ccde:L72ccde:{c.instructions+=10;NFSU2_TR(0x72ccde);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ccdf:{NFSU2_TR(0x72ccdf);
__builtin_memmove((R+20),(R+16),4);
}
B72cce1:{NFSU2_TR(0x72cce1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa4ull))));
}
B72cce7:{NFSU2_TR(0x72cce7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cce8:{NFSU2_TR(0x72cce8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cce9:{NFSU2_TR(0x72cce9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((R+0),(U+0),4);
}
B72ccef:{NFSU2_TR(0x72ccef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72ccf0:{NFSU2_TR(0x72ccf0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72ccf2:{NFSU2_TR(0x72ccf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
w4(U+4,u32(0x94ull));
s4(u32(r4(U+0)),r4(U+4));
}
B72ccfc:{NFSU2_TR(0x72ccfc);
u8 U[4];
__builtin_memmove((U+0),gp(0x783168),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72cd02ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B72cd02:L72cd02:{c.instructions+=4;NFSU2_TR(0x72cd02);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B72cd04:{NFSU2_TR(0x72cd04);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B72cd05:{NFSU2_TR(0x72cd05);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
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
B72cd0b:{NFSU2_TR(0x72cd0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72cd17;}}
}
B72cd0d:L72cd0d:{c.instructions+=2;NFSU2_TR(0x72cd0d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72cd13:{NFSU2_TR(0x72cd13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72cd17;}}
}
B72cd15:L72cd15:{c.instructions+=1;NFSU2_TR(0x72cd15);
__builtin_memmove((R+28),(R+24),4);
}
B72cd17:L72cd17:{c.instructions+=1;NFSU2_TR(0x72cd17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72cd1cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72cc8cu);}goto L72cc8c;}
}
B72cd1c:L72cd1c:{c.instructions+=2;NFSU2_TR(0x72cd1c);
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
B72cd1e:{NFSU2_TR(0x72cd1e);
if(r1(R+518)){{goto L72cd64;}}
}
B72cd20:L72cd20:{c.instructions+=4;NFSU2_TR(0x72cd20);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72cd23:{NFSU2_TR(0x72cd23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cd25:{NFSU2_TR(0x72cd25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cd26:{NFSU2_TR(0x72cd26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72cd2bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ccb6u);}goto L72ccb6;}
}
B72cd2b:L72cd2b:{c.instructions+=4;NFSU2_TR(0x72cd2b);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
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
B72cd2e:{NFSU2_TR(0x72cd2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72cd2f:{NFSU2_TR(0x72cd2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72cd30:{NFSU2_TR(0x72cd30);
if(r1(R+512)){{goto L72cd64;}}
}
B72cd32:L72cd32:{c.instructions+=4;NFSU2_TR(0x72cd32);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72cd35:{NFSU2_TR(0x72cd35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cd36:{NFSU2_TR(0x72cd36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cd37:{NFSU2_TR(0x72cd37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72cd3cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ccb6u);}goto L72ccb6;}
}
B72cd3c:L72cd3c:{c.instructions+=4;NFSU2_TR(0x72cd3c);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B72cd40:{NFSU2_TR(0x72cd40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72cd41:{NFSU2_TR(0x72cd41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72cd42:{NFSU2_TR(0x72cd42);
if(r1(R+518)){{goto L72cd4b;}}
}
B72cd44:L72cd44:{c.instructions+=2;NFSU2_TR(0x72cd44);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72cd46:{NFSU2_TR(0x72cd46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72cd4b;}}
}
B72cd48:L72cd48:{c.instructions+=2;NFSU2_TR(0x72cd48);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cd4a:{NFSU2_TR(0x72cd4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72cd4b:L72cd4b:{c.instructions+=4;NFSU2_TR(0x72cd4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B72cd4e:{NFSU2_TR(0x72cd4e);
u8 U[4];
w4(U+0,u32(0x80000001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cd53:{NFSU2_TR(0x72cd53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cd54:{NFSU2_TR(0x72cd54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x72cd59ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ccb6u);}goto L72ccb6;}
}
B72cd59:L72cd59:{c.instructions+=4;NFSU2_TR(0x72cd59);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B72cd5d:{NFSU2_TR(0x72cd5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72cd5e:{NFSU2_TR(0x72cd5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72cd5f:{NFSU2_TR(0x72cd5f);
if(r1(R+518)){{goto L72cd64;}}
}
B72cd61:L72cd61:{c.instructions+=1;NFSU2_TR(0x72cd61);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72cd64:L72cd64:{c.instructions+=5;NFSU2_TR(0x72cd64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B72cd65:{NFSU2_TR(0x72cd65);
__builtin_memmove((R+0),(R+24),4);
}
B72cd67:{NFSU2_TR(0x72cd67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B72cd68:{NFSU2_TR(0x72cd68);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72cd69:{NFSU2_TR(0x72cd69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B72cd6a:L72cd6a:{c.instructions+=8;NFSU2_TR(0x72cd6a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cd6b:{NFSU2_TR(0x72cd6b);
__builtin_memmove((R+20),(R+16),4);
}
B72cd6d:{NFSU2_TR(0x72cd6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B72cd70:{NFSU2_TR(0x72cd70);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72cd74:{NFSU2_TR(0x72cd74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cd75:{NFSU2_TR(0x72cd75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cd76:{NFSU2_TR(0x72cd76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cd77:{NFSU2_TR(0x72cd77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72cdc2;}}
}
B72cd79:L72cd79:{c.instructions+=17;NFSU2_TR(0x72cd79);
u8 U[8];
__builtin_memmove((U+4),(R+16),4);
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B72cd7a:{NFSU2_TR(0x72cd7a);
u8 U[170];
w1(U+0,u8(u32(r1(R+525))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(R+523))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(R+522))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(R+521))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(R+520))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(R+519))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(R+518))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(R+516))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(R+514))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(R+512))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(R+532))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(R+531))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(R+530))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(R+529))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(R+640));
}
B72cd7b:{NFSU2_TR(0x72cd7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72cd7e:{NFSU2_TR(0x72cd7e);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B72cd80:{NFSU2_TR(0x72cd80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72cd83:{NFSU2_TR(0x72cd83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72cd86:{NFSU2_TR(0x72cd86);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72cd88:{NFSU2_TR(0x72cd88);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B72cd8a:{NFSU2_TR(0x72cd8a);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B72cd8c:{NFSU2_TR(0x72cd8c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B72cd8e:{NFSU2_TR(0x72cd8e);
__builtin_memmove((R+24),(R+0),4);
}
B72cd90:{NFSU2_TR(0x72cd90);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B72cd92:{NFSU2_TR(0x72cd92);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B72cd95:{NFSU2_TR(0x72cd95);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B72cd97:{NFSU2_TR(0x72cd97);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B72cd99:{NFSU2_TR(0x72cd99);
__builtin_memmove((R+12),(R+0),4);
}
B72cd9b:{NFSU2_TR(0x72cd9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72cd9e:L72cd9e:{c.instructions+=9;NFSU2_TR(0x72cd9e);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B72cda2:{NFSU2_TR(0x72cda2);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B72cda6:{NFSU2_TR(0x72cda6);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(U+4,shl<u32>(r4(R+8),u64(r4(U+0))));
w4(U+8,u32(u32(u32(0x20ull))-u32(r4(U+0))));
w4(U+12,shr<u32>(r4(R+8),u64(r4(U+8))));
w4(R+8,u32(u32(r4(U+4))|u32(r4(U+12))));
}
B72cda9:{NFSU2_TR(0x72cda9);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
__builtin_memmove((R+0),(R+8),2);
__builtin_memmove((R+8),(U+0),2);
}
B72cdab:{NFSU2_TR(0x72cdab);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(U+4,shl<u32>(r4(R+8),u64(r4(U+0))));
w4(U+8,u32(u32(u32(0x20ull))-u32(r4(U+0))));
w4(U+12,shr<u32>(r4(R+8),u64(r4(U+8))));
w4(R+8,u32(u32(r4(U+4))|u32(r4(U+12))));
}
B72cdae:{NFSU2_TR(0x72cdae);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B72cdb2:{NFSU2_TR(0x72cdb2);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B72cdb6:{NFSU2_TR(0x72cdb6);
w1(R+523,sborrow<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B72cdb9:{NFSU2_TR(0x72cdb9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72cd9eu);}goto L72cd9e;}}
}
B72cdbb:L72cdbb:{c.instructions+=3;NFSU2_TR(0x72cdbb);
u8 U[48];
__builtin_memmove((R+640),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(U+0,u32(u32(r4(R+640))&u32(u32(0x4000ull))));
w1(R+525,u8((r4(U+0))!=(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+640))&u32(u32(0x800ull))));
w1(R+523,u8((r4(U+4))!=(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+640))&u32(u32(0x400ull))));
w1(R+522,u8((r4(U+8))!=(u32(0x0ull))));
w4(U+12,u32(u32(r4(R+640))&u32(u32(0x200ull))));
w1(R+521,u8((r4(U+12))!=(u32(0x0ull))));
w4(U+16,u32(u32(r4(R+640))&u32(u32(0x100ull))));
w1(R+520,u8((r4(U+16))!=(u32(0x0ull))));
w4(U+20,u32(u32(r4(R+640))&u32(u32(0x80ull))));
w1(R+519,u8((r4(U+20))!=(u32(0x0ull))));
w4(U+24,u32(u32(r4(R+640))&u32(u32(0x40ull))));
w1(R+518,u8((r4(U+24))!=(u32(0x0ull))));
w4(U+28,u32(u32(r4(R+640))&u32(u32(0x10ull))));
w1(R+516,u8((r4(U+28))!=(u32(0x0ull))));
w4(U+32,u32(u32(r4(R+640))&u32(u32(0x4ull))));
w1(R+514,u8((r4(U+32))!=(u32(0x0ull))));
w4(U+36,u32(u32(r4(R+640))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+36))!=(u32(0x0ull))));
w4(U+40,u32(u32(r4(R+640))&u32(u32(0x200000ull))));
w1(R+532,u8((r4(U+40))!=(u32(0x0ull))));
w4(U+44,u32(u32(r4(R+640))&u32(u32(0x40000ull))));
w1(R+529,u8((r4(U+44))!=(u32(0x0ull))));
w1(R+531,u8(0x0ull));
w1(R+530,u8(0x0ull));
}
B72cdbc:{NFSU2_TR(0x72cdbc);
__builtin_memmove((R+28),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B72cdbd:{NFSU2_TR(0x72cdbd);
TAIL_STATIC(0x72d041u,72d);
}
B72cdc2:L72cdc2:{c.instructions+=2;NFSU2_TR(0x72cdc2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B72cdc6:{NFSU2_TR(0x72cdc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L72ce45;}}
}
B72cdc8:L72cdc8:{c.instructions+=18;NFSU2_TR(0x72cdc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72cdcb:{NFSU2_TR(0x72cdcb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B72cdce:{NFSU2_TR(0x72cdce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72cdd1:{NFSU2_TR(0x72cdd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B72cdd4:{NFSU2_TR(0x72cdd4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B72cdd7:{NFSU2_TR(0x72cdd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B72cddb:{NFSU2_TR(0x72cddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B72cdde:{NFSU2_TR(0x72cdde);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B72cde1:{NFSU2_TR(0x72cde1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B72cde5:{NFSU2_TR(0x72cde5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72cde9:{NFSU2_TR(0x72cde9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B72cdec:{NFSU2_TR(0x72cdec);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72cdef:{NFSU2_TR(0x72cdef);
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
B72cdf1:{NFSU2_TR(0x72cdf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72cdf4:{NFSU2_TR(0x72cdf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B72cdf7:{NFSU2_TR(0x72cdf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B72cdfa:{NFSU2_TR(0x72cdfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cdfd:{NFSU2_TR(0x72cdfd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x72d041u,72d);}
}
B72ce03:L72ce03:{c.instructions+=8;NFSU2_TR(0x72ce03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72ce06:{NFSU2_TR(0x72ce06);
__builtin_memmove((R+8),(R+28),4);
}
B72ce08:{NFSU2_TR(0x72ce08);
__builtin_memmove((R+28),(R+12),4);
}
B72ce0a:{NFSU2_TR(0x72ce0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72ce0d:{NFSU2_TR(0x72ce0d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B72ce0f:{NFSU2_TR(0x72ce0f);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B72ce11:{NFSU2_TR(0x72ce11);
w1(R+512,u8((r4(R+12))<(r4(R+4))));
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B72ce13:{NFSU2_TR(0x72ce13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ce16:L72ce16:{c.instructions+=20;NFSU2_TR(0x72ce16);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+24),(U+8),2);
}
B72ce1a:{NFSU2_TR(0x72ce1a);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B72ce1d:{NFSU2_TR(0x72ce1d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+24),(U+0),2);
}
B72ce20:{NFSU2_TR(0x72ce20);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72ce21:{NFSU2_TR(0x72ce21);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72ce22:{NFSU2_TR(0x72ce22);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B72ce25:{NFSU2_TR(0x72ce25);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+24),(U+8),2);
}
B72ce29:{NFSU2_TR(0x72ce29);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72ce2a:{NFSU2_TR(0x72ce2a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72ce2b:{NFSU2_TR(0x72ce2b);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B72ce2e:{NFSU2_TR(0x72ce2e);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+24),(U+8),2);
}
B72ce32:{NFSU2_TR(0x72ce32);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72ce33:{NFSU2_TR(0x72ce33);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72ce34:{NFSU2_TR(0x72ce34);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B72ce37:{NFSU2_TR(0x72ce37);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72ce38:{NFSU2_TR(0x72ce38);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B72ce39:{NFSU2_TR(0x72ce39);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72ce3a:{NFSU2_TR(0x72ce3a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B72ce3b:{NFSU2_TR(0x72ce3b);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72ce3e:{NFSU2_TR(0x72ce3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x72ce16u);}goto L72ce16;}}
}
B72ce40:L72ce40:{c.instructions+=1;NFSU2_TR(0x72ce40);
TAIL_STATIC(0x72d041u,72d);
}
B72ce45:L72ce45:{c.instructions+=2;NFSU2_TR(0x72ce45);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x6ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B72ce49:{NFSU2_TR(0x72ce49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x72d041u,72d);}
}
B72ce4f:L72ce4f:{c.instructions+=28;NFSU2_TR(0x72ce4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72ce52:{NFSU2_TR(0x72ce52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72ce55:{NFSU2_TR(0x72ce55);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B72ce58:{NFSU2_TR(0x72ce58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B72ce5b:{NFSU2_TR(0x72ce5b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B72ce5e:{NFSU2_TR(0x72ce5e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B72ce62:{NFSU2_TR(0x72ce62);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72ce65:{NFSU2_TR(0x72ce65);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B72ce68:{NFSU2_TR(0x72ce68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ce6b:{NFSU2_TR(0x72ce6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B72ce6f:{NFSU2_TR(0x72ce6f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B72ce72:{NFSU2_TR(0x72ce72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B72ce75:{NFSU2_TR(0x72ce75);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B72ce78:{NFSU2_TR(0x72ce78);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B72ce7c:{NFSU2_TR(0x72ce7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ce7f:{NFSU2_TR(0x72ce7f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B72ce82:{NFSU2_TR(0x72ce82);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B72ce86:{NFSU2_TR(0x72ce86);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B72ce8a:{NFSU2_TR(0x72ce8a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B72ce8d:{NFSU2_TR(0x72ce8d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B72ce90:{NFSU2_TR(0x72ce90);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B72ce92:{NFSU2_TR(0x72ce92);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B72ce95:{NFSU2_TR(0x72ce95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B72ce98:{NFSU2_TR(0x72ce98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B72ce9b:{NFSU2_TR(0x72ce9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ce9e:{NFSU2_TR(0x72ce9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cea1:{NFSU2_TR(0x72cea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cea4:{NFSU2_TR(0x72cea4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x72d041u,72d);}
}
B72ceaa:L72ceaa:{c.instructions+=107;NFSU2_TR(0x72ceaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72cead:{NFSU2_TR(0x72cead);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B72ceaf:{NFSU2_TR(0x72ceaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ceb2:{NFSU2_TR(0x72ceb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72ceb5:{NFSU2_TR(0x72ceb5);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B72ceb7:{NFSU2_TR(0x72ceb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B72ceba:{NFSU2_TR(0x72ceba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cebd:{NFSU2_TR(0x72cebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72cec0:{NFSU2_TR(0x72cec0);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B72cec2:{NFSU2_TR(0x72cec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cec5:{NFSU2_TR(0x72cec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72cec8:{NFSU2_TR(0x72cec8);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B72ceca:{NFSU2_TR(0x72ceca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cecd:{NFSU2_TR(0x72cecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72ced0:{NFSU2_TR(0x72ced0);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B72ced2:{NFSU2_TR(0x72ced2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72ced5:{NFSU2_TR(0x72ced5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72ced8:{NFSU2_TR(0x72ced8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72cedb:{NFSU2_TR(0x72cedb);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B72cedd:{NFSU2_TR(0x72cedd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cee0:{NFSU2_TR(0x72cee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72cee3:{NFSU2_TR(0x72cee3);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B72cee5:{NFSU2_TR(0x72cee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cee8:{NFSU2_TR(0x72cee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72ceeb:{NFSU2_TR(0x72ceeb);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B72ceed:{NFSU2_TR(0x72ceed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cef0:{NFSU2_TR(0x72cef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72cef3:{NFSU2_TR(0x72cef3);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B72cef5:{NFSU2_TR(0x72cef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cef8:{NFSU2_TR(0x72cef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72cefb:{NFSU2_TR(0x72cefb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B72cefe:{NFSU2_TR(0x72cefe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B72cf01:{NFSU2_TR(0x72cf01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cf04:{NFSU2_TR(0x72cf04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72cf07:{NFSU2_TR(0x72cf07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B72cf0a:{NFSU2_TR(0x72cf0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cf0d:{NFSU2_TR(0x72cf0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B72cf10:{NFSU2_TR(0x72cf10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cf13:{NFSU2_TR(0x72cf13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72cf16:{NFSU2_TR(0x72cf16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B72cf19:{NFSU2_TR(0x72cf19);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6ull))));
}
B72cf1c:{NFSU2_TR(0x72cf1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cf1f:{NFSU2_TR(0x72cf1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72cf22:{NFSU2_TR(0x72cf22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B72cf25:{NFSU2_TR(0x72cf25);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B72cf28:{NFSU2_TR(0x72cf28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cf2b:{NFSU2_TR(0x72cf2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72cf2e:{NFSU2_TR(0x72cf2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B72cf31:{NFSU2_TR(0x72cf31);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B72cf34:{NFSU2_TR(0x72cf34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cf37:{NFSU2_TR(0x72cf37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72cf3a:{NFSU2_TR(0x72cf3a);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B72cf3b:{NFSU2_TR(0x72cf3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B72cf3e:{NFSU2_TR(0x72cf3e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B72cf3f:{NFSU2_TR(0x72cf3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B72cf42:{NFSU2_TR(0x72cf42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B72cf45:{NFSU2_TR(0x72cf45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72cf48:{NFSU2_TR(0x72cf48);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B72cf4c:{NFSU2_TR(0x72cf4c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72cf50:{NFSU2_TR(0x72cf50);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B72cf54:{NFSU2_TR(0x72cf54);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72cf58:{NFSU2_TR(0x72cf58);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B72cf5c:{NFSU2_TR(0x72cf5c);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B72cf5f:{NFSU2_TR(0x72cf5f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B72cf63:{NFSU2_TR(0x72cf63);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72cf67:{NFSU2_TR(0x72cf67);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((R+12),(U+0),2);
}
B72cf6a:{NFSU2_TR(0x72cf6a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72cf6e:{NFSU2_TR(0x72cf6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72cf71:{NFSU2_TR(0x72cf71);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B72cf75:{NFSU2_TR(0x72cf75);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72cf79:{NFSU2_TR(0x72cf79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72cf7c:{NFSU2_TR(0x72cf7c);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B72cf80:{NFSU2_TR(0x72cf80);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72cf84:{NFSU2_TR(0x72cf84);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+12),(U+0),2);
}
B72cf87:{NFSU2_TR(0x72cf87);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72cf8b:{NFSU2_TR(0x72cf8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72cf8e:{NFSU2_TR(0x72cf8e);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B72cf92:{NFSU2_TR(0x72cf92);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72cf96:{NFSU2_TR(0x72cf96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72cf99:{NFSU2_TR(0x72cf99);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B72cf9d:{NFSU2_TR(0x72cf9d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72cfa1:{NFSU2_TR(0x72cfa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72cfa4:{NFSU2_TR(0x72cfa4);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B72cfa8:{NFSU2_TR(0x72cfa8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72cfac:{NFSU2_TR(0x72cfac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72cfaf:{NFSU2_TR(0x72cfaf);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B72cfb3:{NFSU2_TR(0x72cfb3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72cfb7:{NFSU2_TR(0x72cfb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72cfba:{NFSU2_TR(0x72cfba);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B72cfbe:{NFSU2_TR(0x72cfbe);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72cfc2:{NFSU2_TR(0x72cfc2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B72cfc6:{NFSU2_TR(0x72cfc6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72cfca:{NFSU2_TR(0x72cfca);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+12),(U+0),2);
}
B72cfcd:{NFSU2_TR(0x72cfcd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72cfd1:{NFSU2_TR(0x72cfd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72cfd4:{NFSU2_TR(0x72cfd4);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B72cfd8:{NFSU2_TR(0x72cfd8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72cfdc:{NFSU2_TR(0x72cfdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72cfdf:{NFSU2_TR(0x72cfdf);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B72cfe3:{NFSU2_TR(0x72cfe3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72cfe7:{NFSU2_TR(0x72cfe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72cfea:{NFSU2_TR(0x72cfea);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B72cfee:{NFSU2_TR(0x72cfee);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72cff2:{NFSU2_TR(0x72cff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B72cff5:{NFSU2_TR(0x72cff5);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B72cff9:{NFSU2_TR(0x72cff9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B72cffd:{NFSU2_TR(0x72cffd);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
TAIL_STATIC(0x72d001u,72d);
}
XIT:NFSU2_TR_EXIT(0x72c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
