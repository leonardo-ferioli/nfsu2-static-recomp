#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_65b(u8* __restrict R,Cpu& c);
u32 body_65d(u8* __restrict R,Cpu& c);
u32 body_66b(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x65c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x65c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_65c(u8* __restrict R,Cpu& c);
u32 page_65c(Cpu& c){return body_65c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_65c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x65c000:goto L65c000;
case 0x65c002:goto L65c002;
case 0x65c003:c.instructions+=1;goto B65c003;
case 0x65c005:goto L65c005;
case 0x65c006:c.instructions+=1;goto B65c006;
case 0x65c008:goto L65c008;
case 0x65c00a:c.instructions+=2;goto B65c00a;
case 0x65c00c:c.instructions+=1;goto B65c00c;
case 0x65c00e:goto L65c00e;
case 0x65c010:c.instructions+=3;goto B65c010;
case 0x65c011:c.instructions+=2;goto B65c011;
case 0x65c012:c.instructions+=1;goto B65c012;
case 0x65c013:goto L65c013;
case 0x65c016:c.instructions+=8;goto B65c016;
case 0x65c019:c.instructions+=7;goto B65c019;
case 0x65c01c:c.instructions+=6;goto B65c01c;
case 0x65c01e:c.instructions+=5;goto B65c01e;
case 0x65c021:c.instructions+=4;goto B65c021;
case 0x65c024:c.instructions+=3;goto B65c024;
case 0x65c026:c.instructions+=2;goto B65c026;
case 0x65c029:c.instructions+=1;goto B65c029;
case 0x65c02b:goto L65c02b;
case 0x65c02d:goto L65c02d;
case 0x65c02e:c.instructions+=3;goto B65c02e;
case 0x65c02f:c.instructions+=2;goto B65c02f;
case 0x65c030:c.instructions+=1;goto B65c030;
case 0x65c033:goto L65c033;
case 0x65c035:c.instructions+=16;goto B65c035;
case 0x65c036:c.instructions+=15;goto B65c036;
case 0x65c038:c.instructions+=14;goto B65c038;
case 0x65c039:c.instructions+=13;goto B65c039;
case 0x65c03a:c.instructions+=12;goto B65c03a;
case 0x65c03d:c.instructions+=11;goto B65c03d;
case 0x65c03e:c.instructions+=10;goto B65c03e;
case 0x65c03f:c.instructions+=9;goto B65c03f;
case 0x65c042:c.instructions+=8;goto B65c042;
case 0x65c044:c.instructions+=7;goto B65c044;
case 0x65c047:c.instructions+=6;goto B65c047;
case 0x65c04a:c.instructions+=5;goto B65c04a;
case 0x65c04d:c.instructions+=4;goto B65c04d;
case 0x65c04f:c.instructions+=3;goto B65c04f;
case 0x65c052:c.instructions+=2;goto B65c052;
case 0x65c053:c.instructions+=1;goto B65c053;
case 0x65c055:goto L65c055;
case 0x65c056:goto L65c056;
case 0x65c058:c.instructions+=1;goto B65c058;
case 0x65c05e:goto L65c05e;
case 0x65c061:c.instructions+=1;goto B65c061;
case 0x65c063:goto L65c063;
case 0x65c066:c.instructions+=1;goto B65c066;
case 0x65c068:goto L65c068;
case 0x65c06b:c.instructions+=1;goto B65c06b;
case 0x65c071:goto L65c071;
case 0x65c074:c.instructions+=8;goto B65c074;
case 0x65c077:c.instructions+=7;goto B65c077;
case 0x65c07b:c.instructions+=6;goto B65c07b;
case 0x65c07e:c.instructions+=5;goto B65c07e;
case 0x65c080:c.instructions+=4;goto B65c080;
case 0x65c082:c.instructions+=3;goto B65c082;
case 0x65c084:c.instructions+=2;goto B65c084;
case 0x65c087:c.instructions+=1;goto B65c087;
case 0x65c089:goto L65c089;
case 0x65c08c:goto L65c08c;
case 0x65c08f:c.instructions+=4;goto B65c08f;
case 0x65c090:c.instructions+=3;goto B65c090;
case 0x65c091:c.instructions+=2;goto B65c091;
case 0x65c094:c.instructions+=1;goto B65c094;
case 0x65c099:goto L65c099;
case 0x65c09c:c.instructions+=2;goto B65c09c;
case 0x65c09f:c.instructions+=1;goto B65c09f;
case 0x65c0a1:goto L65c0a1;
case 0x65c0a3:c.instructions+=7;goto B65c0a3;
case 0x65c0a5:c.instructions+=6;goto B65c0a5;
case 0x65c0a8:c.instructions+=5;goto B65c0a8;
case 0x65c0ab:c.instructions+=4;goto B65c0ab;
case 0x65c0ae:c.instructions+=3;goto B65c0ae;
case 0x65c0b0:c.instructions+=2;goto B65c0b0;
case 0x65c0b3:c.instructions+=1;goto B65c0b3;
case 0x65c0b5:goto L65c0b5;
case 0x65c0b8:c.instructions+=1;goto B65c0b8;
case 0x65c0ba:goto L65c0ba;
case 0x65c0bc:c.instructions+=2;goto B65c0bc;
case 0x65c0bf:c.instructions+=1;goto B65c0bf;
case 0x65c0c1:goto L65c0c1;
case 0x65c0c4:c.instructions+=1;goto B65c0c4;
case 0x65c0c6:goto L65c0c6;
case 0x65c0c8:c.instructions+=1;goto B65c0c8;
case 0x65c0ca:goto L65c0ca;
case 0x65c0cc:c.instructions+=1;goto B65c0cc;
case 0x65c0cd:goto L65c0cd;
case 0x65c0d0:c.instructions+=6;goto B65c0d0;
case 0x65c0d3:c.instructions+=5;goto B65c0d3;
case 0x65c0d5:c.instructions+=4;goto B65c0d5;
case 0x65c0d7:c.instructions+=3;goto B65c0d7;
case 0x65c0da:c.instructions+=2;goto B65c0da;
case 0x65c0dc:c.instructions+=1;goto B65c0dc;
case 0x65c0de:goto L65c0de;
case 0x65c0e1:c.instructions+=5;goto B65c0e1;
case 0x65c0e4:c.instructions+=4;goto B65c0e4;
case 0x65c0e7:c.instructions+=3;goto B65c0e7;
case 0x65c0e9:c.instructions+=2;goto B65c0e9;
case 0x65c0ea:c.instructions+=1;goto B65c0ea;
case 0x65c0ec:goto L65c0ec;
case 0x65c0ed:c.instructions+=1;goto B65c0ed;
case 0x65c0ef:goto L65c0ef;
case 0x65c0f0:c.instructions+=1;goto B65c0f0;
case 0x65c0f2:goto L65c0f2;
case 0x65c0f4:c.instructions+=2;goto B65c0f4;
case 0x65c0f6:c.instructions+=1;goto B65c0f6;
case 0x65c0f8:goto L65c0f8;
case 0x65c0fa:c.instructions+=3;goto B65c0fa;
case 0x65c0fb:c.instructions+=2;goto B65c0fb;
case 0x65c0fc:c.instructions+=1;goto B65c0fc;
case 0x65c0fd:goto L65c0fd;
case 0x65c100:c.instructions+=9;goto B65c100;
case 0x65c104:c.instructions+=8;goto B65c104;
case 0x65c108:c.instructions+=7;goto B65c108;
case 0x65c10b:c.instructions+=6;goto B65c10b;
case 0x65c10e:c.instructions+=5;goto B65c10e;
case 0x65c110:c.instructions+=4;goto B65c110;
case 0x65c113:c.instructions+=3;goto B65c113;
case 0x65c115:c.instructions+=2;goto B65c115;
case 0x65c118:c.instructions+=1;goto B65c118;
case 0x65c11a:goto L65c11a;
case 0x65c11c:goto L65c11c;
case 0x65c11d:c.instructions+=4;goto B65c11d;
case 0x65c11e:c.instructions+=3;goto B65c11e;
case 0x65c11f:c.instructions+=2;goto B65c11f;
case 0x65c120:c.instructions+=1;goto B65c120;
case 0x65c123:goto L65c123;
case 0x65c125:c.instructions+=10;goto B65c125;
case 0x65c126:c.instructions+=9;goto B65c126;
case 0x65c128:c.instructions+=8;goto B65c128;
case 0x65c12b:c.instructions+=7;goto B65c12b;
case 0x65c12c:c.instructions+=6;goto B65c12c;
case 0x65c12d:c.instructions+=5;goto B65c12d;
case 0x65c12e:c.instructions+=4;goto B65c12e;
case 0x65c131:c.instructions+=3;goto B65c131;
case 0x65c133:c.instructions+=2;goto B65c133;
case 0x65c135:c.instructions+=1;goto B65c135;
case 0x65c13b:goto L65c13b;
case 0x65c13d:goto L65c13d;
case 0x65c13f:c.instructions+=1;goto B65c13f;
case 0x65c141:goto L65c141;
case 0x65c143:c.instructions+=4;goto B65c143;
case 0x65c146:c.instructions+=3;goto B65c146;
case 0x65c148:c.instructions+=2;goto B65c148;
case 0x65c149:c.instructions+=1;goto B65c149;
case 0x65c14e:goto L65c14e;
case 0x65c150:c.instructions+=2;goto B65c150;
case 0x65c152:c.instructions+=1;goto B65c152;
case 0x65c158:goto L65c158;
case 0x65c15c:c.instructions+=4;goto B65c15c;
case 0x65c15f:c.instructions+=3;goto B65c15f;
case 0x65c162:c.instructions+=2;goto B65c162;
case 0x65c165:c.instructions+=1;goto B65c165;
case 0x65c16b:goto L65c16b;
case 0x65c16d:c.instructions+=1;goto B65c16d;
case 0x65c173:goto L65c173;
case 0x65c176:c.instructions+=2;goto B65c176;
case 0x65c178:c.instructions+=1;goto B65c178;
case 0x65c17e:goto L65c17e;
case 0x65c181:c.instructions+=3;goto B65c181;
case 0x65c185:c.instructions+=2;goto B65c185;
case 0x65c187:c.instructions+=1;goto B65c187;
case 0x65c189:goto L65c189;
case 0x65c18c:c.instructions+=1;goto B65c18c;
case 0x65c18e:goto L65c18e;
case 0x65c191:c.instructions+=3;goto B65c191;
case 0x65c194:c.instructions+=2;goto B65c194;
case 0x65c196:c.instructions+=1;goto B65c196;
case 0x65c198:goto L65c198;
case 0x65c19a:c.instructions+=1;goto B65c19a;
case 0x65c19c:goto L65c19c;
case 0x65c19f:c.instructions+=1;goto B65c19f;
case 0x65c1a5:goto L65c1a5;
case 0x65c1a7:c.instructions+=1;goto B65c1a7;
case 0x65c1ac:goto L65c1ac;
case 0x65c1ae:c.instructions+=3;goto B65c1ae;
case 0x65c1b0:c.instructions+=2;goto B65c1b0;
case 0x65c1b1:c.instructions+=1;goto B65c1b1;
case 0x65c1b3:goto L65c1b3;
case 0x65c1b7:c.instructions+=6;goto B65c1b7;
case 0x65c1ba:c.instructions+=5;goto B65c1ba;
case 0x65c1bd:c.instructions+=4;goto B65c1bd;
case 0x65c1bf:c.instructions+=3;goto B65c1bf;
case 0x65c1c2:c.instructions+=2;goto B65c1c2;
case 0x65c1c4:c.instructions+=1;goto B65c1c4;
case 0x65c1c6:goto L65c1c6;
case 0x65c1c8:goto L65c1c8;
case 0x65c1ca:c.instructions+=1;goto B65c1ca;
case 0x65c1d0:goto L65c1d0;
case 0x65c1d6:c.instructions+=15;goto B65c1d6;
case 0x65c1d9:c.instructions+=14;goto B65c1d9;
case 0x65c1dc:c.instructions+=13;goto B65c1dc;
case 0x65c1de:c.instructions+=12;goto B65c1de;
case 0x65c1e1:c.instructions+=11;goto B65c1e1;
case 0x65c1e4:c.instructions+=10;goto B65c1e4;
case 0x65c1e7:c.instructions+=9;goto B65c1e7;
case 0x65c1ea:c.instructions+=8;goto B65c1ea;
case 0x65c1ec:c.instructions+=7;goto B65c1ec;
case 0x65c1ef:c.instructions+=6;goto B65c1ef;
case 0x65c1f2:c.instructions+=5;goto B65c1f2;
case 0x65c1f5:c.instructions+=4;goto B65c1f5;
case 0x65c1f8:c.instructions+=3;goto B65c1f8;
case 0x65c1fa:c.instructions+=2;goto B65c1fa;
case 0x65c1fd:c.instructions+=1;goto B65c1fd;
case 0x65c1ff:goto L65c1ff;
case 0x65c202:c.instructions+=1;goto B65c202;
case 0x65c204:goto L65c204;
case 0x65c207:c.instructions+=1;goto B65c207;
case 0x65c20a:goto L65c20a;
case 0x65c20d:c.instructions+=6;goto B65c20d;
case 0x65c20e:c.instructions+=5;goto B65c20e;
case 0x65c211:c.instructions+=4;goto B65c211;
case 0x65c212:c.instructions+=3;goto B65c212;
case 0x65c213:c.instructions+=2;goto B65c213;
case 0x65c215:c.instructions+=1;goto B65c215;
case 0x65c21a:goto L65c21a;
case 0x65c220:c.instructions+=5;goto B65c220;
case 0x65c223:c.instructions+=4;goto B65c223;
case 0x65c226:c.instructions+=3;goto B65c226;
case 0x65c229:c.instructions+=2;goto B65c229;
case 0x65c22d:c.instructions+=1;goto B65c22d;
case 0x65c22f:goto L65c22f;
case 0x65c232:c.instructions+=1;goto B65c232;
case 0x65c234:goto L65c234;
case 0x65c237:c.instructions+=1;goto B65c237;
case 0x65c23a:goto L65c23a;
case 0x65c23d:c.instructions+=5;goto B65c23d;
case 0x65c23e:c.instructions+=4;goto B65c23e;
case 0x65c241:c.instructions+=3;goto B65c241;
case 0x65c242:c.instructions+=2;goto B65c242;
case 0x65c243:c.instructions+=1;goto B65c243;
case 0x65c248:goto L65c248;
case 0x65c24f:c.instructions+=30;goto B65c24f;
case 0x65c252:c.instructions+=29;goto B65c252;
case 0x65c255:c.instructions+=28;goto B65c255;
case 0x65c258:c.instructions+=27;goto B65c258;
case 0x65c25b:c.instructions+=26;goto B65c25b;
case 0x65c25e:c.instructions+=25;goto B65c25e;
case 0x65c264:c.instructions+=24;goto B65c264;
case 0x65c267:c.instructions+=23;goto B65c267;
case 0x65c26a:c.instructions+=22;goto B65c26a;
case 0x65c26d:c.instructions+=21;goto B65c26d;
case 0x65c270:c.instructions+=20;goto B65c270;
case 0x65c272:c.instructions+=19;goto B65c272;
case 0x65c274:c.instructions+=18;goto B65c274;
case 0x65c277:c.instructions+=17;goto B65c277;
case 0x65c279:c.instructions+=16;goto B65c279;
case 0x65c27d:c.instructions+=15;goto B65c27d;
case 0x65c27f:c.instructions+=14;goto B65c27f;
case 0x65c282:c.instructions+=13;goto B65c282;
case 0x65c285:c.instructions+=12;goto B65c285;
case 0x65c288:c.instructions+=11;goto B65c288;
case 0x65c28b:c.instructions+=10;goto B65c28b;
case 0x65c28e:c.instructions+=9;goto B65c28e;
case 0x65c291:c.instructions+=8;goto B65c291;
case 0x65c294:c.instructions+=7;goto B65c294;
case 0x65c297:c.instructions+=6;goto B65c297;
case 0x65c29a:c.instructions+=5;goto B65c29a;
case 0x65c2a0:c.instructions+=4;goto B65c2a0;
case 0x65c2a3:c.instructions+=3;goto B65c2a3;
case 0x65c2a6:c.instructions+=2;goto B65c2a6;
case 0x65c2aa:c.instructions+=1;goto B65c2aa;
case 0x65c2ac:goto L65c2ac;
case 0x65c2af:c.instructions+=1;goto B65c2af;
case 0x65c2b1:goto L65c2b1;
case 0x65c2b4:c.instructions+=1;goto B65c2b4;
case 0x65c2b7:goto L65c2b7;
case 0x65c2bd:c.instructions+=8;goto B65c2bd;
case 0x65c2c0:c.instructions+=7;goto B65c2c0;
case 0x65c2c3:c.instructions+=6;goto B65c2c3;
case 0x65c2c5:c.instructions+=5;goto B65c2c5;
case 0x65c2c8:c.instructions+=4;goto B65c2c8;
case 0x65c2ca:c.instructions+=3;goto B65c2ca;
case 0x65c2cd:c.instructions+=2;goto B65c2cd;
case 0x65c2cf:c.instructions+=1;goto B65c2cf;
case 0x65c2d1:goto L65c2d1;
case 0x65c2d4:c.instructions+=3;goto B65c2d4;
case 0x65c2d7:c.instructions+=2;goto B65c2d7;
case 0x65c2da:c.instructions+=1;goto B65c2da;
case 0x65c2dc:goto L65c2dc;
case 0x65c2df:c.instructions+=2;goto B65c2df;
case 0x65c2e2:c.instructions+=1;goto B65c2e2;
case 0x65c2e5:goto L65c2e5;
case 0x65c2e7:c.instructions+=2;goto B65c2e7;
case 0x65c2e9:c.instructions+=1;goto B65c2e9;
case 0x65c2eb:goto L65c2eb;
case 0x65c2ed:goto L65c2ed;
case 0x65c2ee:c.instructions+=4;goto B65c2ee;
case 0x65c2ef:c.instructions+=3;goto B65c2ef;
case 0x65c2f0:c.instructions+=2;goto B65c2f0;
case 0x65c2f1:c.instructions+=1;goto B65c2f1;
case 0x65c2f4:goto L65c2f4;
case 0x65c2f6:c.instructions+=9;goto B65c2f6;
case 0x65c2f7:c.instructions+=8;goto B65c2f7;
case 0x65c2f9:c.instructions+=7;goto B65c2f9;
case 0x65c2fc:c.instructions+=6;goto B65c2fc;
case 0x65c300:c.instructions+=5;goto B65c300;
case 0x65c306:c.instructions+=4;goto B65c306;
case 0x65c30c:c.instructions+=3;goto B65c30c;
case 0x65c30e:c.instructions+=2;goto B65c30e;
case 0x65c30f:c.instructions+=1;goto B65c30f;
case 0x65c312:goto L65c312;
case 0x65c314:c.instructions+=19;goto B65c314;
case 0x65c315:c.instructions+=18;goto B65c315;
case 0x65c317:c.instructions+=17;goto B65c317;
case 0x65c31a:c.instructions+=16;goto B65c31a;
case 0x65c31d:c.instructions+=15;goto B65c31d;
case 0x65c320:c.instructions+=14;goto B65c320;
case 0x65c323:c.instructions+=13;goto B65c323;
case 0x65c329:c.instructions+=12;goto B65c329;
case 0x65c32f:c.instructions+=11;goto B65c32f;
case 0x65c332:c.instructions+=10;goto B65c332;
case 0x65c335:c.instructions+=9;goto B65c335;
case 0x65c336:c.instructions+=8;goto B65c336;
case 0x65c337:c.instructions+=7;goto B65c337;
case 0x65c338:c.instructions+=6;goto B65c338;
case 0x65c33a:c.instructions+=5;goto B65c33a;
case 0x65c33c:c.instructions+=4;goto B65c33c;
case 0x65c33e:c.instructions+=3;goto B65c33e;
case 0x65c340:c.instructions+=2;goto B65c340;
case 0x65c343:c.instructions+=1;goto B65c343;
case 0x65c345:goto L65c345;
case 0x65c348:c.instructions+=1;goto B65c348;
case 0x65c34a:goto L65c34a;
case 0x65c34d:c.instructions+=1;goto B65c34d;
case 0x65c350:goto L65c350;
case 0x65c353:c.instructions+=7;goto B65c353;
case 0x65c355:c.instructions+=6;goto B65c355;
case 0x65c358:c.instructions+=5;goto B65c358;
case 0x65c35b:c.instructions+=4;goto B65c35b;
case 0x65c35e:c.instructions+=3;goto B65c35e;
case 0x65c361:c.instructions+=2;goto B65c361;
case 0x65c364:c.instructions+=1;goto B65c364;
case 0x65c36a:goto L65c36a;
case 0x65c36d:c.instructions+=1;goto B65c36d;
case 0x65c373:goto L65c373;
case 0x65c376:c.instructions+=1;goto B65c376;
case 0x65c379:goto L65c379;
case 0x65c37b:c.instructions+=3;goto B65c37b;
case 0x65c37c:c.instructions+=2;goto B65c37c;
case 0x65c37e:c.instructions+=1;goto B65c37e;
case 0x65c380:goto L65c380;
case 0x65c382:c.instructions+=3;goto B65c382;
case 0x65c384:c.instructions+=2;goto B65c384;
case 0x65c387:c.instructions+=1;goto B65c387;
case 0x65c38a:goto L65c38a;
case 0x65c38c:c.instructions+=3;goto B65c38c;
case 0x65c38d:c.instructions+=2;goto B65c38d;
case 0x65c38f:c.instructions+=1;goto B65c38f;
case 0x65c391:goto L65c391;
case 0x65c393:c.instructions+=3;goto B65c393;
case 0x65c397:c.instructions+=2;goto B65c397;
case 0x65c398:c.instructions+=1;goto B65c398;
case 0x65c39d:goto L65c39d;
case 0x65c39f:c.instructions+=3;goto B65c39f;
case 0x65c3a1:c.instructions+=2;goto B65c3a1;
case 0x65c3a2:c.instructions+=1;goto B65c3a2;
case 0x65c3a4:goto L65c3a4;
case 0x65c3a9:c.instructions+=1;goto B65c3a9;
case 0x65c3ae:goto L65c3ae;
case 0x65c3b1:c.instructions+=2;goto B65c3b1;
case 0x65c3b4:c.instructions+=1;goto B65c3b4;
case 0x65c3b6:goto L65c3b6;
case 0x65c3b8:c.instructions+=3;goto B65c3b8;
case 0x65c3b9:c.instructions+=2;goto B65c3b9;
case 0x65c3bb:c.instructions+=1;goto B65c3bb;
case 0x65c3bd:goto L65c3bd;
case 0x65c3bf:c.instructions+=4;goto B65c3bf;
case 0x65c3c1:c.instructions+=3;goto B65c3c1;
case 0x65c3c2:c.instructions+=2;goto B65c3c2;
case 0x65c3c4:c.instructions+=1;goto B65c3c4;
case 0x65c3c7:goto L65c3c7;
case 0x65c3ca:c.instructions+=3;goto B65c3ca;
case 0x65c3cb:c.instructions+=2;goto B65c3cb;
case 0x65c3cd:c.instructions+=1;goto B65c3cd;
case 0x65c3cf:goto L65c3cf;
case 0x65c3d1:c.instructions+=1;goto B65c3d1;
case 0x65c3d4:goto L65c3d4;
case 0x65c3d6:goto L65c3d6;
case 0x65c3d8:c.instructions+=2;goto B65c3d8;
case 0x65c3db:c.instructions+=1;goto B65c3db;
case 0x65c3dc:goto L65c3dc;
case 0x65c3de:goto L65c3de;
case 0x65c3e1:goto L65c3e1;
case 0x65c3e4:c.instructions+=3;goto B65c3e4;
case 0x65c3e5:c.instructions+=2;goto B65c3e5;
case 0x65c3e7:c.instructions+=1;goto B65c3e7;
case 0x65c3e9:goto L65c3e9;
case 0x65c3ec:c.instructions+=4;goto B65c3ec;
case 0x65c3ee:c.instructions+=3;goto B65c3ee;
case 0x65c3f3:c.instructions+=2;goto B65c3f3;
case 0x65c3f5:c.instructions+=1;goto B65c3f5;
case 0x65c3f7:goto L65c3f7;
case 0x65c3f9:c.instructions+=3;goto B65c3f9;
case 0x65c3fa:c.instructions+=2;goto B65c3fa;
case 0x65c3fc:c.instructions+=1;goto B65c3fc;
case 0x65c3fe:goto L65c3fe;
case 0x65c400:c.instructions+=1;goto B65c400;
case 0x65c401:goto L65c401;
case 0x65c404:c.instructions+=3;goto B65c404;
case 0x65c405:c.instructions+=2;goto B65c405;
case 0x65c407:c.instructions+=1;goto B65c407;
case 0x65c409:goto L65c409;
case 0x65c40b:c.instructions+=2;goto B65c40b;
case 0x65c40d:c.instructions+=1;goto B65c40d;
case 0x65c410:goto L65c410;
case 0x65c412:goto L65c412;
case 0x65c414:c.instructions+=1;goto B65c414;
case 0x65c417:goto L65c417;
case 0x65c419:goto L65c419;
case 0x65c41c:c.instructions+=2;goto B65c41c;
case 0x65c41e:c.instructions+=1;goto B65c41e;
case 0x65c420:goto L65c420;
case 0x65c423:c.instructions+=2;goto B65c423;
case 0x65c424:c.instructions+=1;goto B65c424;
case 0x65c429:goto L65c429;
case 0x65c42b:c.instructions+=4;goto B65c42b;
case 0x65c42d:c.instructions+=3;goto B65c42d;
case 0x65c42e:c.instructions+=2;goto B65c42e;
case 0x65c431:c.instructions+=1;goto B65c431;
case 0x65c433:goto L65c433;
case 0x65c438:c.instructions+=1;goto B65c438;
case 0x65c43d:goto L65c43d;
case 0x65c43f:c.instructions+=3;goto B65c43f;
case 0x65c442:c.instructions+=2;goto B65c442;
case 0x65c444:c.instructions+=1;goto B65c444;
case 0x65c446:goto L65c446;
case 0x65c448:goto L65c448;
case 0x65c44a:c.instructions+=2;goto B65c44a;
case 0x65c44d:c.instructions+=1;goto B65c44d;
case 0x65c450:goto L65c450;
case 0x65c452:goto L65c452;
case 0x65c454:goto L65c454;
case 0x65c457:goto L65c457;
case 0x65c45a:c.instructions+=2;goto B65c45a;
case 0x65c45b:c.instructions+=1;goto B65c45b;
case 0x65c461:goto L65c461;
case 0x65c462:c.instructions+=1;goto B65c462;
case 0x65c468:goto L65c468;
case 0x65c469:c.instructions+=1;goto B65c469;
case 0x65c46b:goto L65c46b;
case 0x65c46c:c.instructions+=1;goto B65c46c;
case 0x65c472:goto L65c472;
case 0x65c474:c.instructions+=1;goto B65c474;
case 0x65c47a:goto L65c47a;
case 0x65c47d:c.instructions+=5;goto B65c47d;
case 0x65c47f:c.instructions+=4;goto B65c47f;
case 0x65c481:c.instructions+=3;goto B65c481;
case 0x65c482:c.instructions+=2;goto B65c482;
case 0x65c483:c.instructions+=1;goto B65c483;
case 0x65c489:goto L65c489;
case 0x65c48e:goto L65c48e;
case 0x65c491:c.instructions+=2;goto B65c491;
case 0x65c494:c.instructions+=1;goto B65c494;
case 0x65c49a:goto L65c49a;
case 0x65c49b:c.instructions+=1;goto B65c49b;
case 0x65c4a1:goto L65c4a1;
case 0x65c4a2:c.instructions+=1;goto B65c4a2;
case 0x65c4a8:goto L65c4a8;
case 0x65c4aa:c.instructions+=1;goto B65c4aa;
case 0x65c4ac:goto L65c4ac;
case 0x65c4ae:c.instructions+=38;goto B65c4ae;
case 0x65c4b1:c.instructions+=37;goto B65c4b1;
case 0x65c4b4:c.instructions+=36;goto B65c4b4;
case 0x65c4b6:c.instructions+=35;goto B65c4b6;
case 0x65c4b8:c.instructions+=34;goto B65c4b8;
case 0x65c4bb:c.instructions+=33;goto B65c4bb;
case 0x65c4be:c.instructions+=32;goto B65c4be;
case 0x65c4bf:c.instructions+=31;goto B65c4bf;
case 0x65c4c1:c.instructions+=30;goto B65c4c1;
case 0x65c4c2:c.instructions+=29;goto B65c4c2;
case 0x65c4c3:c.instructions+=28;goto B65c4c3;
case 0x65c4c6:c.instructions+=27;goto B65c4c6;
case 0x65c4c8:c.instructions+=26;goto B65c4c8;
case 0x65c4cb:c.instructions+=25;goto B65c4cb;
case 0x65c4cd:c.instructions+=24;goto B65c4cd;
case 0x65c4d0:c.instructions+=23;goto B65c4d0;
case 0x65c4d2:c.instructions+=22;goto B65c4d2;
case 0x65c4d5:c.instructions+=21;goto B65c4d5;
case 0x65c4d7:c.instructions+=20;goto B65c4d7;
case 0x65c4da:c.instructions+=19;goto B65c4da;
case 0x65c4dc:c.instructions+=18;goto B65c4dc;
case 0x65c4df:c.instructions+=17;goto B65c4df;
case 0x65c4e1:c.instructions+=16;goto B65c4e1;
case 0x65c4e4:c.instructions+=15;goto B65c4e4;
case 0x65c4e6:c.instructions+=14;goto B65c4e6;
case 0x65c4e9:c.instructions+=13;goto B65c4e9;
case 0x65c4eb:c.instructions+=12;goto B65c4eb;
case 0x65c4ee:c.instructions+=11;goto B65c4ee;
case 0x65c4f0:c.instructions+=10;goto B65c4f0;
case 0x65c4f3:c.instructions+=9;goto B65c4f3;
case 0x65c4f5:c.instructions+=8;goto B65c4f5;
case 0x65c4f8:c.instructions+=7;goto B65c4f8;
case 0x65c4fa:c.instructions+=6;goto B65c4fa;
case 0x65c4fd:c.instructions+=5;goto B65c4fd;
case 0x65c4ff:c.instructions+=4;goto B65c4ff;
case 0x65c502:c.instructions+=3;goto B65c502;
case 0x65c504:c.instructions+=2;goto B65c504;
case 0x65c507:c.instructions+=1;goto B65c507;
case 0x65c50d:goto L65c50d;
case 0x65c512:goto L65c512;
case 0x65c515:c.instructions+=6;goto B65c515;
case 0x65c517:c.instructions+=5;goto B65c517;
case 0x65c518:c.instructions+=4;goto B65c518;
case 0x65c519:c.instructions+=3;goto B65c519;
case 0x65c51a:c.instructions+=2;goto B65c51a;
case 0x65c51b:c.instructions+=1;goto B65c51b;
case 0x65c521:goto L65c521;
case 0x65c526:goto L65c526;
case 0x65c528:c.instructions+=3;goto B65c528;
case 0x65c52b:c.instructions+=2;goto B65c52b;
case 0x65c52d:c.instructions+=1;goto B65c52d;
case 0x65c52f:goto L65c52f;
case 0x65c531:c.instructions+=12;goto B65c531;
case 0x65c534:c.instructions+=11;goto B65c534;
case 0x65c537:c.instructions+=10;goto B65c537;
case 0x65c538:c.instructions+=9;goto B65c538;
case 0x65c53a:c.instructions+=8;goto B65c53a;
case 0x65c53b:c.instructions+=7;goto B65c53b;
case 0x65c53e:c.instructions+=6;goto B65c53e;
case 0x65c53f:c.instructions+=5;goto B65c53f;
case 0x65c541:c.instructions+=4;goto B65c541;
case 0x65c544:c.instructions+=3;goto B65c544;
case 0x65c546:c.instructions+=2;goto B65c546;
case 0x65c549:c.instructions+=1;goto B65c549;
case 0x65c54f:goto L65c54f;
case 0x65c551:goto L65c551;
case 0x65c552:c.instructions+=4;goto B65c552;
case 0x65c553:c.instructions+=3;goto B65c553;
case 0x65c554:c.instructions+=2;goto B65c554;
case 0x65c555:c.instructions+=1;goto B65c555;
case 0x65c55b:goto L65c55b;
case 0x65c55d:goto L65c55d;
case 0x65c55f:c.instructions+=3;goto B65c55f;
case 0x65c562:c.instructions+=2;goto B65c562;
case 0x65c564:c.instructions+=1;goto B65c564;
case 0x65c566:goto L65c566;
case 0x65c567:c.instructions+=5;goto B65c567;
case 0x65c569:c.instructions+=4;goto B65c569;
case 0x65c56c:c.instructions+=3;goto B65c56c;
case 0x65c56d:c.instructions+=2;goto B65c56d;
case 0x65c56e:c.instructions+=1;goto B65c56e;
case 0x65c571:goto L65c571;
case 0x65c573:goto L65c573;
case 0x65c574:c.instructions+=4;goto B65c574;
case 0x65c575:c.instructions+=3;goto B65c575;
case 0x65c576:c.instructions+=2;goto B65c576;
case 0x65c577:c.instructions+=1;goto B65c577;
case 0x65c57d:goto L65c57d;
case 0x65c57f:goto L65c57f;
case 0x65c581:c.instructions+=3;goto B65c581;
case 0x65c584:c.instructions+=2;goto B65c584;
case 0x65c586:c.instructions+=1;goto B65c586;
case 0x65c588:goto L65c588;
case 0x65c589:c.instructions+=3;goto B65c589;
case 0x65c58a:c.instructions+=2;goto B65c58a;
case 0x65c58b:c.instructions+=1;goto B65c58b;
case 0x65c58e:goto L65c58e;
case 0x65c590:goto L65c590;
case 0x65c591:c.instructions+=4;goto B65c591;
case 0x65c592:c.instructions+=3;goto B65c592;
case 0x65c593:c.instructions+=2;goto B65c593;
case 0x65c594:c.instructions+=1;goto B65c594;
case 0x65c597:goto L65c597;
case 0x65c599:goto L65c599;
case 0x65c59b:c.instructions+=3;goto B65c59b;
case 0x65c59e:c.instructions+=2;goto B65c59e;
case 0x65c5a0:c.instructions+=1;goto B65c5a0;
case 0x65c5a2:goto L65c5a2;
case 0x65c5a3:c.instructions+=3;goto B65c5a3;
case 0x65c5a4:c.instructions+=2;goto B65c5a4;
case 0x65c5a5:c.instructions+=1;goto B65c5a5;
case 0x65c5a8:goto L65c5a8;
case 0x65c5aa:c.instructions+=1;goto B65c5aa;
case 0x65c5ac:goto L65c5ac;
case 0x65c5ad:c.instructions+=4;goto B65c5ad;
case 0x65c5ae:c.instructions+=3;goto B65c5ae;
case 0x65c5af:c.instructions+=2;goto B65c5af;
case 0x65c5b0:c.instructions+=1;goto B65c5b0;
case 0x65c5b3:goto L65c5b3;
case 0x65c5b5:goto L65c5b5;
case 0x65c5ba:goto L65c5ba;
case 0x65c5bc:c.instructions+=2;goto B65c5bc;
case 0x65c5bf:c.instructions+=1;goto B65c5bf;
case 0x65c5c1:goto L65c5c1;
case 0x65c5c4:c.instructions+=1;goto B65c5c4;
case 0x65c5c9:goto L65c5c9;
case 0x65c5ca:goto L65c5ca;
case 0x65c5cc:c.instructions+=1;goto B65c5cc;
case 0x65c5ce:goto L65c5ce;
case 0x65c5cf:c.instructions+=1;goto B65c5cf;
case 0x65c5d4:goto L65c5d4;
case 0x65c5d5:goto L65c5d5;
case 0x65c5d6:c.instructions+=5;goto B65c5d6;
case 0x65c5d8:c.instructions+=4;goto B65c5d8;
case 0x65c5d9:c.instructions+=3;goto B65c5d9;
case 0x65c5da:c.instructions+=2;goto B65c5da;
case 0x65c5db:c.instructions+=1;goto B65c5db;
case 0x65c5de:goto L65c5de;
case 0x65c5e0:c.instructions+=6;goto B65c5e0;
case 0x65c5e1:c.instructions+=5;goto B65c5e1;
case 0x65c5e3:c.instructions+=4;goto B65c5e3;
case 0x65c5e6:c.instructions+=3;goto B65c5e6;
case 0x65c5e8:c.instructions+=2;goto B65c5e8;
case 0x65c5ec:c.instructions+=1;goto B65c5ec;
case 0x65c5ee:goto L65c5ee;
case 0x65c5f2:c.instructions+=2;goto B65c5f2;
case 0x65c5f8:c.instructions+=1;goto B65c5f8;
case 0x65c5fa:goto L65c5fa;
case 0x65c600:c.instructions+=5;goto B65c600;
case 0x65c606:c.instructions+=4;goto B65c606;
case 0x65c608:c.instructions+=3;goto B65c608;
case 0x65c60c:c.instructions+=2;goto B65c60c;
case 0x65c60f:c.instructions+=1;goto B65c60f;
case 0x65c611:goto L65c611;
case 0x65c614:c.instructions+=2;goto B65c614;
case 0x65c617:c.instructions+=1;goto B65c617;
case 0x65c619:goto L65c619;
case 0x65c61b:goto L65c61b;
case 0x65c61c:c.instructions+=1;goto B65c61c;
case 0x65c61f:goto L65c61f;
case 0x65c621:c.instructions+=8;goto B65c621;
case 0x65c622:c.instructions+=7;goto B65c622;
case 0x65c624:c.instructions+=6;goto B65c624;
case 0x65c625:c.instructions+=5;goto B65c625;
case 0x65c628:c.instructions+=4;goto B65c628;
case 0x65c62a:c.instructions+=3;goto B65c62a;
case 0x65c630:c.instructions+=2;goto B65c630;
case 0x65c632:c.instructions+=1;goto B65c632;
case 0x65c638:goto L65c638;
case 0x65c63a:c.instructions+=1;goto B65c63a;
case 0x65c640:goto L65c640;
case 0x65c644:c.instructions+=2;goto B65c644;
case 0x65c64b:c.instructions+=1;goto B65c64b;
case 0x65c64d:goto L65c64d;
case 0x65c64e:c.instructions+=4;goto B65c64e;
case 0x65c654:c.instructions+=3;goto B65c654;
case 0x65c655:c.instructions+=2;goto B65c655;
case 0x65c658:c.instructions+=1;goto B65c658;
case 0x65c659:goto L65c659;
case 0x65c65b:c.instructions+=4;goto B65c65b;
case 0x65c65e:c.instructions+=3;goto B65c65e;
case 0x65c660:c.instructions+=2;goto B65c660;
case 0x65c663:c.instructions+=1;goto B65c663;
case 0x65c665:goto L65c665;
case 0x65c668:c.instructions+=1;goto B65c668;
case 0x65c66a:goto L65c66a;
case 0x65c66c:c.instructions+=1;goto B65c66c;
case 0x65c66e:goto L65c66e;
case 0x65c670:goto L65c670;
case 0x65c672:c.instructions+=3;goto B65c672;
case 0x65c674:c.instructions+=2;goto B65c674;
case 0x65c676:c.instructions+=1;goto B65c676;
case 0x65c678:goto L65c678;
case 0x65c67a:c.instructions+=1;goto B65c67a;
case 0x65c67c:goto L65c67c;
case 0x65c67f:c.instructions+=3;goto B65c67f;
case 0x65c681:c.instructions+=2;goto B65c681;
case 0x65c684:c.instructions+=1;goto B65c684;
case 0x65c686:goto L65c686;
case 0x65c687:c.instructions+=5;goto B65c687;
case 0x65c688:c.instructions+=4;goto B65c688;
case 0x65c689:c.instructions+=3;goto B65c689;
case 0x65c68a:c.instructions+=2;goto B65c68a;
case 0x65c68c:c.instructions+=1;goto B65c68c;
case 0x65c68e:goto L65c68e;
case 0x65c690:c.instructions+=1;goto B65c690;
case 0x65c692:goto L65c692;
case 0x65c694:c.instructions+=1;goto B65c694;
case 0x65c697:goto L65c697;
case 0x65c699:c.instructions+=1;goto B65c699;
case 0x65c69b:goto L65c69b;
case 0x65c69e:c.instructions+=1;goto B65c69e;
case 0x65c6a0:goto L65c6a0;
case 0x65c6a2:c.instructions+=1;goto B65c6a2;
case 0x65c6a4:goto L65c6a4;
case 0x65c6a7:c.instructions+=4;goto B65c6a7;
case 0x65c6aa:c.instructions+=3;goto B65c6aa;
case 0x65c6b0:c.instructions+=2;goto B65c6b0;
case 0x65c6b6:c.instructions+=1;goto B65c6b6;
case 0x65c6b8:goto L65c6b8;
case 0x65c6b9:c.instructions+=2;goto B65c6b9;
case 0x65c6ba:c.instructions+=1;goto B65c6ba;
case 0x65c6bb:goto L65c6bb;
case 0x65c6be:c.instructions+=2;goto B65c6be;
case 0x65c6c4:c.instructions+=1;goto B65c6c4;
case 0x65c6c6:goto L65c6c6;
case 0x65c6cc:c.instructions+=2;goto B65c6cc;
case 0x65c6d2:c.instructions+=1;goto B65c6d2;
case 0x65c6d4:goto L65c6d4;
case 0x65c6d6:c.instructions+=2;goto B65c6d6;
case 0x65c6da:c.instructions+=1;goto B65c6da;
case 0x65c6dc:goto L65c6dc;
case 0x65c6e0:c.instructions+=2;goto B65c6e0;
case 0x65c6e6:c.instructions+=1;goto B65c6e6;
case 0x65c6e8:goto L65c6e8;
case 0x65c6ea:goto L65c6ea;
case 0x65c6eb:c.instructions+=1;goto B65c6eb;
case 0x65c6ee:goto L65c6ee;
case 0x65c6f0:c.instructions+=6;goto B65c6f0;
case 0x65c6f1:c.instructions+=5;goto B65c6f1;
case 0x65c6f3:c.instructions+=4;goto B65c6f3;
case 0x65c6f6:c.instructions+=3;goto B65c6f6;
case 0x65c6f9:c.instructions+=2;goto B65c6f9;
case 0x65c6ff:c.instructions+=1;goto B65c6ff;
case 0x65c701:goto L65c701;
case 0x65c703:c.instructions+=1;goto B65c703;
case 0x65c705:goto L65c705;
case 0x65c70b:c.instructions+=2;goto B65c70b;
case 0x65c711:c.instructions+=1;goto B65c711;
case 0x65c713:goto L65c713;
case 0x65c714:c.instructions+=1;goto B65c714;
case 0x65c717:goto L65c717;
case 0x65c719:c.instructions+=8;goto B65c719;
case 0x65c71a:c.instructions+=7;goto B65c71a;
case 0x65c71c:c.instructions+=6;goto B65c71c;
case 0x65c71d:c.instructions+=5;goto B65c71d;
case 0x65c721:c.instructions+=4;goto B65c721;
case 0x65c722:c.instructions+=3;goto B65c722;
case 0x65c725:c.instructions+=2;goto B65c725;
case 0x65c72c:c.instructions+=1;goto B65c72c;
case 0x65c72e:goto L65c72e;
case 0x65c72f:c.instructions+=3;goto B65c72f;
case 0x65c735:c.instructions+=2;goto B65c735;
case 0x65c738:c.instructions+=1;goto B65c738;
case 0x65c739:goto L65c739;
case 0x65c73b:c.instructions+=4;goto B65c73b;
case 0x65c73e:c.instructions+=3;goto B65c73e;
case 0x65c740:c.instructions+=2;goto B65c740;
case 0x65c743:c.instructions+=1;goto B65c743;
case 0x65c745:goto L65c745;
case 0x65c748:c.instructions+=1;goto B65c748;
case 0x65c74a:goto L65c74a;
case 0x65c74d:c.instructions+=2;goto B65c74d;
case 0x65c74f:c.instructions+=1;goto B65c74f;
case 0x65c751:goto L65c751;
case 0x65c753:c.instructions+=3;goto B65c753;
case 0x65c755:c.instructions+=2;goto B65c755;
case 0x65c757:c.instructions+=1;goto B65c757;
case 0x65c759:goto L65c759;
case 0x65c75b:c.instructions+=1;goto B65c75b;
case 0x65c75d:goto L65c75d;
case 0x65c760:c.instructions+=3;goto B65c760;
case 0x65c762:c.instructions+=2;goto B65c762;
case 0x65c765:c.instructions+=1;goto B65c765;
case 0x65c767:goto L65c767;
case 0x65c768:c.instructions+=5;goto B65c768;
case 0x65c769:c.instructions+=4;goto B65c769;
case 0x65c76a:c.instructions+=3;goto B65c76a;
case 0x65c76b:c.instructions+=2;goto B65c76b;
case 0x65c76d:c.instructions+=1;goto B65c76d;
case 0x65c76f:goto L65c76f;
case 0x65c771:c.instructions+=1;goto B65c771;
case 0x65c773:goto L65c773;
case 0x65c775:c.instructions+=1;goto B65c775;
case 0x65c778:goto L65c778;
case 0x65c77a:c.instructions+=1;goto B65c77a;
case 0x65c77c:goto L65c77c;
case 0x65c780:goto L65c780;
case 0x65c782:goto L65c782;
case 0x65c785:c.instructions+=4;goto B65c785;
case 0x65c788:c.instructions+=3;goto B65c788;
case 0x65c78e:c.instructions+=2;goto B65c78e;
case 0x65c794:c.instructions+=1;goto B65c794;
case 0x65c796:goto L65c796;
case 0x65c797:c.instructions+=1;goto B65c797;
case 0x65c798:goto L65c798;
case 0x65c79b:c.instructions+=2;goto B65c79b;
case 0x65c7a1:c.instructions+=1;goto B65c7a1;
case 0x65c7a3:goto L65c7a3;
case 0x65c7a5:c.instructions+=1;goto B65c7a5;
case 0x65c7a7:goto L65c7a7;
case 0x65c7ad:c.instructions+=2;goto B65c7ad;
case 0x65c7b3:c.instructions+=1;goto B65c7b3;
case 0x65c7b5:goto L65c7b5;
case 0x65c7b6:c.instructions+=2;goto B65c7b6;
case 0x65c7b7:c.instructions+=1;goto B65c7b7;
case 0x65c7ba:goto L65c7ba;
case 0x65c7bc:c.instructions+=6;goto B65c7bc;
case 0x65c7bd:c.instructions+=5;goto B65c7bd;
case 0x65c7bf:c.instructions+=4;goto B65c7bf;
case 0x65c7c2:c.instructions+=3;goto B65c7c2;
case 0x65c7c4:c.instructions+=2;goto B65c7c4;
case 0x65c7c7:c.instructions+=1;goto B65c7c7;
case 0x65c7cc:goto L65c7cc;
case 0x65c7ce:c.instructions+=1;goto B65c7ce;
case 0x65c7d0:goto L65c7d0;
case 0x65c7d3:c.instructions+=2;goto B65c7d3;
case 0x65c7d6:c.instructions+=1;goto B65c7d6;
case 0x65c7d8:goto L65c7d8;
case 0x65c7da:c.instructions+=1;goto B65c7da;
case 0x65c7dc:goto L65c7dc;
case 0x65c7df:c.instructions+=3;goto B65c7df;
case 0x65c7e2:c.instructions+=2;goto B65c7e2;
case 0x65c7e4:c.instructions+=1;goto B65c7e4;
case 0x65c7e6:goto L65c7e6;
case 0x65c7e7:c.instructions+=1;goto B65c7e7;
case 0x65c7ea:goto L65c7ea;
case 0x65c7ec:c.instructions+=7;goto B65c7ec;
case 0x65c7ed:c.instructions+=6;goto B65c7ed;
case 0x65c7ef:c.instructions+=5;goto B65c7ef;
case 0x65c7f2:c.instructions+=4;goto B65c7f2;
case 0x65c7f3:c.instructions+=3;goto B65c7f3;
case 0x65c7f5:c.instructions+=2;goto B65c7f5;
case 0x65c7f8:c.instructions+=1;goto B65c7f8;
case 0x65c7fd:goto L65c7fd;
case 0x65c7ff:c.instructions+=2;goto B65c7ff;
case 0x65c801:c.instructions+=1;goto B65c801;
case 0x65c803:goto L65c803;
case 0x65c807:c.instructions+=2;goto B65c807;
case 0x65c80b:c.instructions+=1;goto B65c80b;
case 0x65c80d:goto L65c80d;
case 0x65c810:c.instructions+=5;goto B65c810;
case 0x65c811:c.instructions+=4;goto B65c811;
case 0x65c814:c.instructions+=3;goto B65c814;
case 0x65c817:c.instructions+=2;goto B65c817;
case 0x65c81a:c.instructions+=1;goto B65c81a;
case 0x65c81b:goto L65c81b;
case 0x65c81d:c.instructions+=4;goto B65c81d;
case 0x65c820:c.instructions+=3;goto B65c820;
case 0x65c822:c.instructions+=2;goto B65c822;
case 0x65c825:c.instructions+=1;goto B65c825;
case 0x65c827:goto L65c827;
case 0x65c82a:c.instructions+=1;goto B65c82a;
case 0x65c82c:goto L65c82c;
case 0x65c82f:c.instructions+=2;goto B65c82f;
case 0x65c831:c.instructions+=1;goto B65c831;
case 0x65c833:goto L65c833;
case 0x65c835:c.instructions+=3;goto B65c835;
case 0x65c837:c.instructions+=2;goto B65c837;
case 0x65c839:c.instructions+=1;goto B65c839;
case 0x65c83b:goto L65c83b;
case 0x65c83d:c.instructions+=1;goto B65c83d;
case 0x65c83f:goto L65c83f;
case 0x65c842:c.instructions+=3;goto B65c842;
case 0x65c844:c.instructions+=2;goto B65c844;
case 0x65c847:c.instructions+=1;goto B65c847;
case 0x65c849:goto L65c849;
case 0x65c84a:c.instructions+=5;goto B65c84a;
case 0x65c84b:c.instructions+=4;goto B65c84b;
case 0x65c84c:c.instructions+=3;goto B65c84c;
case 0x65c84d:c.instructions+=2;goto B65c84d;
case 0x65c84f:c.instructions+=1;goto B65c84f;
case 0x65c851:goto L65c851;
case 0x65c853:c.instructions+=1;goto B65c853;
case 0x65c855:goto L65c855;
case 0x65c857:c.instructions+=1;goto B65c857;
case 0x65c85a:goto L65c85a;
case 0x65c85c:c.instructions+=1;goto B65c85c;
case 0x65c85e:goto L65c85e;
case 0x65c862:goto L65c862;
case 0x65c864:goto L65c864;
case 0x65c867:c.instructions+=4;goto B65c867;
case 0x65c86a:c.instructions+=3;goto B65c86a;
case 0x65c86d:c.instructions+=2;goto B65c86d;
case 0x65c870:c.instructions+=1;goto B65c870;
case 0x65c872:goto L65c872;
case 0x65c873:c.instructions+=1;goto B65c873;
case 0x65c874:goto L65c874;
case 0x65c877:c.instructions+=2;goto B65c877;
case 0x65c87a:c.instructions+=1;goto B65c87a;
case 0x65c87c:goto L65c87c;
case 0x65c87e:c.instructions+=1;goto B65c87e;
case 0x65c880:goto L65c880;
case 0x65c883:c.instructions+=2;goto B65c883;
case 0x65c886:c.instructions+=1;goto B65c886;
case 0x65c888:goto L65c888;
case 0x65c889:c.instructions+=2;goto B65c889;
case 0x65c88a:c.instructions+=1;goto B65c88a;
case 0x65c88d:goto L65c88d;
case 0x65c88f:c.instructions+=12;goto B65c88f;
case 0x65c890:c.instructions+=11;goto B65c890;
case 0x65c892:c.instructions+=10;goto B65c892;
case 0x65c895:c.instructions+=9;goto B65c895;
case 0x65c896:c.instructions+=8;goto B65c896;
case 0x65c897:c.instructions+=7;goto B65c897;
case 0x65c89a:c.instructions+=6;goto B65c89a;
case 0x65c89b:c.instructions+=5;goto B65c89b;
case 0x65c8a1:c.instructions+=4;goto B65c8a1;
case 0x65c8a3:c.instructions+=3;goto B65c8a3;
case 0x65c8a5:c.instructions+=2;goto B65c8a5;
case 0x65c8a7:c.instructions+=1;goto B65c8a7;
case 0x65c8a9:goto L65c8a9;
case 0x65c8ab:c.instructions+=2;goto B65c8ab;
case 0x65c8ac:c.instructions+=1;goto B65c8ac;
case 0x65c8af:goto L65c8af;
case 0x65c8b1:goto L65c8b1;
case 0x65c8b7:c.instructions+=2;goto B65c8b7;
case 0x65c8ba:c.instructions+=1;goto B65c8ba;
case 0x65c8c0:goto L65c8c0;
case 0x65c8c2:c.instructions+=2;goto B65c8c2;
case 0x65c8c5:c.instructions+=1;goto B65c8c5;
case 0x65c8c7:goto L65c8c7;
case 0x65c8ca:goto L65c8ca;
case 0x65c8d0:c.instructions+=3;goto B65c8d0;
case 0x65c8d7:c.instructions+=2;goto B65c8d7;
case 0x65c8d9:c.instructions+=1;goto B65c8d9;
case 0x65c8db:goto L65c8db;
case 0x65c8dd:c.instructions+=3;goto B65c8dd;
case 0x65c8df:c.instructions+=2;goto B65c8df;
case 0x65c8e0:c.instructions+=1;goto B65c8e0;
case 0x65c8e3:goto L65c8e3;
case 0x65c8e9:c.instructions+=1;goto B65c8e9;
case 0x65c8f0:goto L65c8f0;
case 0x65c8f6:c.instructions+=1;goto B65c8f6;
case 0x65c8fd:goto L65c8fd;
case 0x65c903:c.instructions+=3;goto B65c903;
case 0x65c907:c.instructions+=2;goto B65c907;
case 0x65c909:c.instructions+=1;goto B65c909;
case 0x65c90b:goto L65c90b;
case 0x65c90d:c.instructions+=3;goto B65c90d;
case 0x65c90f:c.instructions+=2;goto B65c90f;
case 0x65c910:c.instructions+=1;goto B65c910;
case 0x65c913:goto L65c913;
case 0x65c919:c.instructions+=1;goto B65c919;
case 0x65c91d:goto L65c91d;
case 0x65c923:c.instructions+=3;goto B65c923;
case 0x65c925:c.instructions+=2;goto B65c925;
case 0x65c927:c.instructions+=1;goto B65c927;
case 0x65c929:goto L65c929;
case 0x65c92b:c.instructions+=3;goto B65c92b;
case 0x65c92d:c.instructions+=2;goto B65c92d;
case 0x65c92e:c.instructions+=1;goto B65c92e;
case 0x65c931:goto L65c931;
case 0x65c937:c.instructions+=1;goto B65c937;
case 0x65c93a:goto L65c93a;
case 0x65c93d:c.instructions+=2;goto B65c93d;
case 0x65c940:c.instructions+=1;goto B65c940;
case 0x65c942:goto L65c942;
case 0x65c945:c.instructions+=4;goto B65c945;
case 0x65c948:c.instructions+=3;goto B65c948;
case 0x65c94f:c.instructions+=2;goto B65c94f;
case 0x65c955:c.instructions+=1;goto B65c955;
case 0x65c95b:goto L65c95b;
case 0x65c95e:c.instructions+=2;goto B65c95e;
case 0x65c961:c.instructions+=1;goto B65c961;
case 0x65c963:goto L65c963;
case 0x65c965:goto L65c965;
case 0x65c968:c.instructions+=4;goto B65c968;
case 0x65c96a:c.instructions+=3;goto B65c96a;
case 0x65c96c:c.instructions+=2;goto B65c96c;
case 0x65c96f:c.instructions+=1;goto B65c96f;
case 0x65c971:goto L65c971;
case 0x65c974:c.instructions+=1;goto B65c974;
case 0x65c976:goto L65c976;
case 0x65c979:c.instructions+=1;goto B65c979;
case 0x65c97b:goto L65c97b;
case 0x65c97e:c.instructions+=1;goto B65c97e;
case 0x65c980:goto L65c980;
case 0x65c983:c.instructions+=1;goto B65c983;
case 0x65c985:goto L65c985;
case 0x65c988:c.instructions+=1;goto B65c988;
case 0x65c98a:goto L65c98a;
case 0x65c98d:c.instructions+=6;goto B65c98d;
case 0x65c98f:c.instructions+=5;goto B65c98f;
case 0x65c992:c.instructions+=4;goto B65c992;
case 0x65c993:c.instructions+=3;goto B65c993;
case 0x65c994:c.instructions+=2;goto B65c994;
case 0x65c995:c.instructions+=1;goto B65c995;
case 0x65c998:goto L65c998;
case 0x65c99b:c.instructions+=1;goto B65c99b;
case 0x65c99d:goto L65c99d;
case 0x65c9a0:c.instructions+=3;goto B65c9a0;
case 0x65c9a4:c.instructions+=2;goto B65c9a4;
case 0x65c9a6:c.instructions+=1;goto B65c9a6;
case 0x65c9a8:goto L65c9a8;
case 0x65c9aa:c.instructions+=3;goto B65c9aa;
case 0x65c9ac:c.instructions+=2;goto B65c9ac;
case 0x65c9ad:c.instructions+=1;goto B65c9ad;
case 0x65c9b0:goto L65c9b0;
case 0x65c9b3:c.instructions+=1;goto B65c9b3;
case 0x65c9b7:goto L65c9b7;
case 0x65c9ba:c.instructions+=4;goto B65c9ba;
case 0x65c9bd:c.instructions+=3;goto B65c9bd;
case 0x65c9c0:c.instructions+=2;goto B65c9c0;
case 0x65c9c3:c.instructions+=1;goto B65c9c3;
case 0x65c9c5:goto L65c9c5;
case 0x65c9cb:c.instructions+=2;goto B65c9cb;
case 0x65c9ce:c.instructions+=1;goto B65c9ce;
case 0x65c9d4:goto L65c9d4;
case 0x65c9da:c.instructions+=3;goto B65c9da;
case 0x65c9dd:c.instructions+=2;goto B65c9dd;
case 0x65c9e0:c.instructions+=1;goto B65c9e0;
case 0x65c9e2:goto L65c9e2;
case 0x65c9e5:c.instructions+=2;goto B65c9e5;
case 0x65c9e8:c.instructions+=1;goto B65c9e8;
case 0x65c9ea:goto L65c9ea;
case 0x65c9ed:c.instructions+=6;goto B65c9ed;
case 0x65c9f0:c.instructions+=5;goto B65c9f0;
case 0x65c9f3:c.instructions+=4;goto B65c9f3;
case 0x65c9f5:c.instructions+=3;goto B65c9f5;
case 0x65c9f7:c.instructions+=2;goto B65c9f7;
case 0x65c9fa:c.instructions+=1;goto B65c9fa;
case 0x65c9fc:goto L65c9fc;
case 0x65c9ff:c.instructions+=1;goto B65c9ff;
case 0x65ca01:goto L65ca01;
case 0x65ca04:c.instructions+=1;goto B65ca04;
case 0x65ca06:goto L65ca06;
case 0x65ca09:c.instructions+=1;goto B65ca09;
case 0x65ca0b:goto L65ca0b;
case 0x65ca0e:c.instructions+=1;goto B65ca0e;
case 0x65ca10:goto L65ca10;
case 0x65ca14:c.instructions+=1;goto B65ca14;
case 0x65ca16:goto L65ca16;
case 0x65ca19:c.instructions+=7;goto B65ca19;
case 0x65ca1d:c.instructions+=6;goto B65ca1d;
case 0x65ca1f:c.instructions+=5;goto B65ca1f;
case 0x65ca22:c.instructions+=4;goto B65ca22;
case 0x65ca23:c.instructions+=3;goto B65ca23;
case 0x65ca25:c.instructions+=2;goto B65ca25;
case 0x65ca26:c.instructions+=1;goto B65ca26;
case 0x65ca29:goto L65ca29;
case 0x65ca2d:c.instructions+=1;goto B65ca2d;
case 0x65ca2f:goto L65ca2f;
case 0x65ca32:c.instructions+=2;goto B65ca32;
case 0x65ca37:c.instructions+=1;goto B65ca37;
case 0x65ca39:goto L65ca39;
case 0x65ca3d:c.instructions+=3;goto B65ca3d;
case 0x65ca3f:c.instructions+=2;goto B65ca3f;
case 0x65ca40:c.instructions+=1;goto B65ca40;
case 0x65ca43:goto L65ca43;
case 0x65ca46:c.instructions+=1;goto B65ca46;
case 0x65ca4b:goto L65ca4b;
case 0x65ca4e:c.instructions+=3;goto B65ca4e;
case 0x65ca51:c.instructions+=2;goto B65ca51;
case 0x65ca54:c.instructions+=1;goto B65ca54;
case 0x65ca56:goto L65ca56;
case 0x65ca58:goto L65ca58;
case 0x65ca5b:goto L65ca5b;
case 0x65ca5d:c.instructions+=1;goto B65ca5d;
case 0x65ca5f:goto L65ca5f;
case 0x65ca62:c.instructions+=3;goto B65ca62;
case 0x65ca65:c.instructions+=2;goto B65ca65;
case 0x65ca6b:c.instructions+=1;goto B65ca6b;
case 0x65ca71:goto L65ca71;
case 0x65ca77:c.instructions+=1;goto B65ca77;
case 0x65ca79:goto L65ca79;
case 0x65ca7c:c.instructions+=2;goto B65ca7c;
case 0x65ca7f:c.instructions+=1;goto B65ca7f;
case 0x65ca81:goto L65ca81;
case 0x65ca84:c.instructions+=6;goto B65ca84;
case 0x65ca87:c.instructions+=5;goto B65ca87;
case 0x65ca8a:c.instructions+=4;goto B65ca8a;
case 0x65ca8c:c.instructions+=3;goto B65ca8c;
case 0x65ca8e:c.instructions+=2;goto B65ca8e;
case 0x65ca91:c.instructions+=1;goto B65ca91;
case 0x65ca93:goto L65ca93;
case 0x65ca96:c.instructions+=1;goto B65ca96;
case 0x65ca98:goto L65ca98;
case 0x65ca9b:c.instructions+=1;goto B65ca9b;
case 0x65ca9d:goto L65ca9d;
case 0x65caa0:c.instructions+=1;goto B65caa0;
case 0x65caa2:goto L65caa2;
case 0x65caa5:c.instructions+=1;goto B65caa5;
case 0x65caa7:goto L65caa7;
case 0x65caaa:c.instructions+=1;goto B65caaa;
case 0x65caac:goto L65caac;
case 0x65caaf:c.instructions+=7;goto B65caaf;
case 0x65cab3:c.instructions+=6;goto B65cab3;
case 0x65cab5:c.instructions+=5;goto B65cab5;
case 0x65cab8:c.instructions+=4;goto B65cab8;
case 0x65cab9:c.instructions+=3;goto B65cab9;
case 0x65caba:c.instructions+=2;goto B65caba;
case 0x65cabb:c.instructions+=1;goto B65cabb;
case 0x65cabe:goto L65cabe;
case 0x65cac1:c.instructions+=1;goto B65cac1;
case 0x65cac3:goto L65cac3;
case 0x65cac6:c.instructions+=2;goto B65cac6;
case 0x65caca:c.instructions+=1;goto B65caca;
case 0x65cacc:goto L65cacc;
case 0x65cad0:c.instructions+=3;goto B65cad0;
case 0x65cad2:c.instructions+=2;goto B65cad2;
case 0x65cad3:c.instructions+=1;goto B65cad3;
case 0x65cad6:goto L65cad6;
case 0x65cad9:c.instructions+=1;goto B65cad9;
case 0x65cadd:goto L65cadd;
case 0x65cae0:c.instructions+=3;goto B65cae0;
case 0x65cae3:c.instructions+=2;goto B65cae3;
case 0x65cae6:c.instructions+=1;goto B65cae6;
case 0x65cae8:goto L65cae8;
case 0x65caeb:goto L65caeb;
case 0x65caed:c.instructions+=1;goto B65caed;
case 0x65caef:goto L65caef;
case 0x65caf0:c.instructions+=5;goto B65caf0;
case 0x65caf1:c.instructions+=4;goto B65caf1;
case 0x65caf3:c.instructions+=3;goto B65caf3;
case 0x65caf4:c.instructions+=2;goto B65caf4;
case 0x65caf5:c.instructions+=1;goto B65caf5;
case 0x65caf8:goto L65caf8;
case 0x65cafa:c.instructions+=7;goto B65cafa;
case 0x65cafb:c.instructions+=6;goto B65cafb;
case 0x65cafd:c.instructions+=5;goto B65cafd;
case 0x65cb00:c.instructions+=4;goto B65cb00;
case 0x65cb01:c.instructions+=3;goto B65cb01;
case 0x65cb03:c.instructions+=2;goto B65cb03;
case 0x65cb05:c.instructions+=1;goto B65cb05;
case 0x65cb07:goto L65cb07;
case 0x65cb0c:c.instructions+=1;goto B65cb0c;
case 0x65cb0e:goto L65cb0e;
case 0x65cb11:c.instructions+=4;goto B65cb11;
case 0x65cb14:c.instructions+=3;goto B65cb14;
case 0x65cb16:c.instructions+=2;goto B65cb16;
case 0x65cb18:c.instructions+=1;goto B65cb18;
case 0x65cb1a:goto L65cb1a;
case 0x65cb1c:c.instructions+=2;goto B65cb1c;
case 0x65cb1d:c.instructions+=1;goto B65cb1d;
case 0x65cb20:goto L65cb20;
case 0x65cb22:c.instructions+=3;goto B65cb22;
case 0x65cb23:c.instructions+=2;goto B65cb23;
case 0x65cb24:c.instructions+=1;goto B65cb24;
case 0x65cb27:goto L65cb27;
case 0x65cb29:c.instructions+=7;goto B65cb29;
case 0x65cb2a:c.instructions+=6;goto B65cb2a;
case 0x65cb2c:c.instructions+=5;goto B65cb2c;
case 0x65cb2f:c.instructions+=4;goto B65cb2f;
case 0x65cb30:c.instructions+=3;goto B65cb30;
case 0x65cb32:c.instructions+=2;goto B65cb32;
case 0x65cb34:c.instructions+=1;goto B65cb34;
case 0x65cb36:goto L65cb36;
case 0x65cb3b:c.instructions+=1;goto B65cb3b;
case 0x65cb3d:goto L65cb3d;
case 0x65cb40:c.instructions+=4;goto B65cb40;
case 0x65cb43:c.instructions+=3;goto B65cb43;
case 0x65cb45:c.instructions+=2;goto B65cb45;
case 0x65cb47:c.instructions+=1;goto B65cb47;
case 0x65cb49:goto L65cb49;
case 0x65cb4b:c.instructions+=2;goto B65cb4b;
case 0x65cb4c:c.instructions+=1;goto B65cb4c;
case 0x65cb4f:goto L65cb4f;
case 0x65cb51:c.instructions+=3;goto B65cb51;
case 0x65cb52:c.instructions+=2;goto B65cb52;
case 0x65cb53:c.instructions+=1;goto B65cb53;
case 0x65cb56:goto L65cb56;
case 0x65cb58:c.instructions+=6;goto B65cb58;
case 0x65cb59:c.instructions+=5;goto B65cb59;
case 0x65cb5b:c.instructions+=4;goto B65cb5b;
case 0x65cb5e:c.instructions+=3;goto B65cb5e;
case 0x65cb60:c.instructions+=2;goto B65cb60;
case 0x65cb62:c.instructions+=1;goto B65cb62;
case 0x65cb64:goto L65cb64;
case 0x65cb69:c.instructions+=1;goto B65cb69;
case 0x65cb6b:goto L65cb6b;
case 0x65cb6c:c.instructions+=17;goto B65cb6c;
case 0x65cb6d:c.instructions+=16;goto B65cb6d;
case 0x65cb6f:c.instructions+=15;goto B65cb6f;
case 0x65cb71:c.instructions+=14;goto B65cb71;
case 0x65cb72:c.instructions+=13;goto B65cb72;
case 0x65cb73:c.instructions+=12;goto B65cb73;
case 0x65cb74:c.instructions+=11;goto B65cb74;
case 0x65cb75:c.instructions+=10;goto B65cb75;
case 0x65cb7a:c.instructions+=9;goto B65cb7a;
case 0x65cb7c:c.instructions+=8;goto B65cb7c;
case 0x65cb7f:c.instructions+=7;goto B65cb7f;
case 0x65cb85:c.instructions+=6;goto B65cb85;
case 0x65cb88:c.instructions+=5;goto B65cb88;
case 0x65cb8e:c.instructions+=4;goto B65cb8e;
case 0x65cb8f:c.instructions+=3;goto B65cb8f;
case 0x65cb92:c.instructions+=2;goto B65cb92;
case 0x65cb95:c.instructions+=1;goto B65cb95;
case 0x65cb96:goto L65cb96;
case 0x65cb98:c.instructions+=2;goto B65cb98;
case 0x65cb99:c.instructions+=1;goto B65cb99;
case 0x65cb9c:goto L65cb9c;
case 0x65cb9e:c.instructions+=8;goto B65cb9e;
case 0x65cb9f:c.instructions+=7;goto B65cb9f;
case 0x65cba1:c.instructions+=6;goto B65cba1;
case 0x65cba2:c.instructions+=5;goto B65cba2;
case 0x65cba3:c.instructions+=4;goto B65cba3;
case 0x65cba6:c.instructions+=3;goto B65cba6;
case 0x65cba8:c.instructions+=2;goto B65cba8;
case 0x65cbaa:c.instructions+=1;goto B65cbaa;
case 0x65cbac:goto L65cbac;
case 0x65cbb1:c.instructions+=1;goto B65cbb1;
case 0x65cbb3:goto L65cbb3;
case 0x65cbb6:c.instructions+=2;goto B65cbb6;
case 0x65cbb9:c.instructions+=1;goto B65cbb9;
case 0x65cbbb:goto L65cbbb;
case 0x65cbbf:c.instructions+=3;goto B65cbbf;
case 0x65cbc5:c.instructions+=2;goto B65cbc5;
case 0x65cbcb:c.instructions+=1;goto B65cbcb;
case 0x65cbcd:goto L65cbcd;
case 0x65cbcf:c.instructions+=2;goto B65cbcf;
case 0x65cbd2:c.instructions+=1;goto B65cbd2;
case 0x65cbd7:goto L65cbd7;
case 0x65cbd9:c.instructions+=2;goto B65cbd9;
case 0x65cbdb:c.instructions+=1;goto B65cbdb;
case 0x65cbdd:goto L65cbdd;
case 0x65cbde:c.instructions+=11;goto B65cbde;
case 0x65cbe0:c.instructions+=10;goto B65cbe0;
case 0x65cbe2:c.instructions+=9;goto B65cbe2;
case 0x65cbe3:c.instructions+=8;goto B65cbe3;
case 0x65cbe4:c.instructions+=7;goto B65cbe4;
case 0x65cbe5:c.instructions+=6;goto B65cbe5;
case 0x65cbe8:c.instructions+=5;goto B65cbe8;
case 0x65cbeb:c.instructions+=4;goto B65cbeb;
case 0x65cbed:c.instructions+=3;goto B65cbed;
case 0x65cbf0:c.instructions+=2;goto B65cbf0;
case 0x65cbf1:c.instructions+=1;goto B65cbf1;
case 0x65cbf3:goto L65cbf3;
case 0x65cbf5:c.instructions+=1;goto B65cbf5;
case 0x65cbf7:goto L65cbf7;
case 0x65cbfa:goto L65cbfa;
case 0x65cbfc:c.instructions+=4;goto B65cbfc;
case 0x65cbff:c.instructions+=3;goto B65cbff;
case 0x65cc02:c.instructions+=2;goto B65cc02;
case 0x65cc05:c.instructions+=1;goto B65cc05;
case 0x65cc08:goto L65cc08;
case 0x65cc09:c.instructions+=4;goto B65cc09;
case 0x65cc0b:c.instructions+=3;goto B65cc0b;
case 0x65cc0c:c.instructions+=2;goto B65cc0c;
case 0x65cc0d:c.instructions+=1;goto B65cc0d;
case 0x65cc10:goto L65cc10;
case 0x65cc12:c.instructions+=9;goto B65cc12;
case 0x65cc13:c.instructions+=8;goto B65cc13;
case 0x65cc15:c.instructions+=7;goto B65cc15;
case 0x65cc18:c.instructions+=6;goto B65cc18;
case 0x65cc1a:c.instructions+=5;goto B65cc1a;
case 0x65cc1b:c.instructions+=4;goto B65cc1b;
case 0x65cc1c:c.instructions+=3;goto B65cc1c;
case 0x65cc1d:c.instructions+=2;goto B65cc1d;
case 0x65cc1f:c.instructions+=1;goto B65cc1f;
case 0x65cc21:goto L65cc21;
case 0x65cc24:c.instructions+=1;goto B65cc24;
case 0x65cc26:goto L65cc26;
case 0x65cc29:c.instructions+=2;goto B65cc29;
case 0x65cc2c:c.instructions+=1;goto B65cc2c;
case 0x65cc2f:goto L65cc2f;
case 0x65cc32:c.instructions+=5;goto B65cc32;
case 0x65cc35:c.instructions+=4;goto B65cc35;
case 0x65cc38:c.instructions+=3;goto B65cc38;
case 0x65cc3b:c.instructions+=2;goto B65cc3b;
case 0x65cc3e:c.instructions+=1;goto B65cc3e;
case 0x65cc40:goto L65cc40;
case 0x65cc42:c.instructions+=1;goto B65cc42;
case 0x65cc44:goto L65cc44;
case 0x65cc46:c.instructions+=2;goto B65cc46;
case 0x65cc47:c.instructions+=1;goto B65cc47;
case 0x65cc4a:goto L65cc4a;
case 0x65cc4d:c.instructions+=2;goto B65cc4d;
case 0x65cc4f:c.instructions+=1;goto B65cc4f;
case 0x65cc51:goto L65cc51;
case 0x65cc53:c.instructions+=2;goto B65cc53;
case 0x65cc54:c.instructions+=1;goto B65cc54;
case 0x65cc57:goto L65cc57;
case 0x65cc5b:goto L65cc5b;
case 0x65cc5f:c.instructions+=5;goto B65cc5f;
case 0x65cc62:c.instructions+=4;goto B65cc62;
case 0x65cc65:c.instructions+=3;goto B65cc65;
case 0x65cc6c:c.instructions+=2;goto B65cc6c;
case 0x65cc6e:c.instructions+=1;goto B65cc6e;
case 0x65cc70:goto L65cc70;
case 0x65cc73:c.instructions+=2;goto B65cc73;
case 0x65cc75:c.instructions+=1;goto B65cc75;
case 0x65cc77:goto L65cc77;
case 0x65cc79:c.instructions+=2;goto B65cc79;
case 0x65cc7b:c.instructions+=1;goto B65cc7b;
case 0x65cc7d:goto L65cc7d;
case 0x65cc80:c.instructions+=8;goto B65cc80;
case 0x65cc83:c.instructions+=7;goto B65cc83;
case 0x65cc86:c.instructions+=6;goto B65cc86;
case 0x65cc89:c.instructions+=5;goto B65cc89;
case 0x65cc8c:c.instructions+=4;goto B65cc8c;
case 0x65cc8f:c.instructions+=3;goto B65cc8f;
case 0x65cc92:c.instructions+=2;goto B65cc92;
case 0x65cc94:c.instructions+=1;goto B65cc94;
case 0x65cc96:goto L65cc96;
case 0x65cc98:c.instructions+=2;goto B65cc98;
case 0x65cc99:c.instructions+=1;goto B65cc99;
case 0x65cc9c:goto L65cc9c;
case 0x65cc9f:c.instructions+=2;goto B65cc9f;
case 0x65cca1:c.instructions+=1;goto B65cca1;
case 0x65cca3:goto L65cca3;
case 0x65cca5:c.instructions+=2;goto B65cca5;
case 0x65cca6:c.instructions+=1;goto B65cca6;
case 0x65cca9:goto L65cca9;
case 0x65ccad:goto L65ccad;
case 0x65ccb0:c.instructions+=2;goto B65ccb0;
case 0x65ccb4:c.instructions+=1;goto B65ccb4;
case 0x65ccb7:goto L65ccb7;
case 0x65ccba:c.instructions+=2;goto B65ccba;
case 0x65ccbd:c.instructions+=1;goto B65ccbd;
case 0x65ccbf:goto L65ccbf;
case 0x65ccc0:c.instructions+=5;goto B65ccc0;
case 0x65ccc1:c.instructions+=4;goto B65ccc1;
case 0x65ccc3:c.instructions+=3;goto B65ccc3;
case 0x65ccc4:c.instructions+=2;goto B65ccc4;
case 0x65ccc5:c.instructions+=1;goto B65ccc5;
case 0x65ccc8:goto L65ccc8;
case 0x65ccca:c.instructions+=8;goto B65ccca;
case 0x65cccb:c.instructions+=7;goto B65cccb;
case 0x65cccd:c.instructions+=6;goto B65cccd;
case 0x65ccce:c.instructions+=5;goto B65ccce;
case 0x65cccf:c.instructions+=4;goto B65cccf;
case 0x65ccd0:c.instructions+=3;goto B65ccd0;
case 0x65ccd3:c.instructions+=2;goto B65ccd3;
case 0x65ccd5:c.instructions+=1;goto B65ccd5;
case 0x65ccd7:goto L65ccd7;
case 0x65ccda:c.instructions+=1;goto B65ccda;
case 0x65ccdc:goto L65ccdc;
case 0x65ccdf:c.instructions+=2;goto B65ccdf;
case 0x65cce2:c.instructions+=1;goto B65cce2;
case 0x65cce5:goto L65cce5;
case 0x65cce8:c.instructions+=5;goto B65cce8;
case 0x65cceb:c.instructions+=4;goto B65cceb;
case 0x65ccee:c.instructions+=3;goto B65ccee;
case 0x65ccf1:c.instructions+=2;goto B65ccf1;
case 0x65ccf4:c.instructions+=1;goto B65ccf4;
case 0x65ccf6:goto L65ccf6;
case 0x65ccf8:c.instructions+=1;goto B65ccf8;
case 0x65ccfa:goto L65ccfa;
case 0x65ccfc:c.instructions+=2;goto B65ccfc;
case 0x65ccfd:c.instructions+=1;goto B65ccfd;
case 0x65cd00:goto L65cd00;
case 0x65cd03:c.instructions+=2;goto B65cd03;
case 0x65cd05:c.instructions+=1;goto B65cd05;
case 0x65cd07:goto L65cd07;
case 0x65cd09:c.instructions+=2;goto B65cd09;
case 0x65cd0a:c.instructions+=1;goto B65cd0a;
case 0x65cd0d:goto L65cd0d;
case 0x65cd11:goto L65cd11;
case 0x65cd13:c.instructions+=2;goto B65cd13;
case 0x65cd16:c.instructions+=1;goto B65cd16;
case 0x65cd18:goto L65cd18;
case 0x65cd1b:c.instructions+=1;goto B65cd1b;
case 0x65cd1d:goto L65cd1d;
case 0x65cd1f:c.instructions+=2;goto B65cd1f;
case 0x65cd21:c.instructions+=1;goto B65cd21;
case 0x65cd23:goto L65cd23;
case 0x65cd26:c.instructions+=8;goto B65cd26;
case 0x65cd29:c.instructions+=7;goto B65cd29;
case 0x65cd2c:c.instructions+=6;goto B65cd2c;
case 0x65cd2f:c.instructions+=5;goto B65cd2f;
case 0x65cd32:c.instructions+=4;goto B65cd32;
case 0x65cd35:c.instructions+=3;goto B65cd35;
case 0x65cd38:c.instructions+=2;goto B65cd38;
case 0x65cd3a:c.instructions+=1;goto B65cd3a;
case 0x65cd3c:goto L65cd3c;
case 0x65cd3e:c.instructions+=2;goto B65cd3e;
case 0x65cd3f:c.instructions+=1;goto B65cd3f;
case 0x65cd42:goto L65cd42;
case 0x65cd45:c.instructions+=2;goto B65cd45;
case 0x65cd47:c.instructions+=1;goto B65cd47;
case 0x65cd49:goto L65cd49;
case 0x65cd4b:c.instructions+=2;goto B65cd4b;
case 0x65cd4c:c.instructions+=1;goto B65cd4c;
case 0x65cd4f:goto L65cd4f;
case 0x65cd53:goto L65cd53;
case 0x65cd56:c.instructions+=2;goto B65cd56;
case 0x65cd59:c.instructions+=1;goto B65cd59;
case 0x65cd5c:goto L65cd5c;
case 0x65cd5f:goto L65cd5f;
case 0x65cd61:c.instructions+=1;goto B65cd61;
case 0x65cd63:goto L65cd63;
case 0x65cd64:c.instructions+=5;goto B65cd64;
case 0x65cd65:c.instructions+=4;goto B65cd65;
case 0x65cd67:c.instructions+=3;goto B65cd67;
case 0x65cd68:c.instructions+=2;goto B65cd68;
case 0x65cd69:c.instructions+=1;goto B65cd69;
case 0x65cd6c:goto L65cd6c;
case 0x65cd6e:c.instructions+=12;goto B65cd6e;
case 0x65cd6f:c.instructions+=11;goto B65cd6f;
case 0x65cd71:c.instructions+=10;goto B65cd71;
case 0x65cd74:c.instructions+=9;goto B65cd74;
case 0x65cd77:c.instructions+=8;goto B65cd77;
case 0x65cd78:c.instructions+=7;goto B65cd78;
case 0x65cd7a:c.instructions+=6;goto B65cd7a;
case 0x65cd7c:c.instructions+=5;goto B65cd7c;
case 0x65cd7d:c.instructions+=4;goto B65cd7d;
case 0x65cd7e:c.instructions+=3;goto B65cd7e;
case 0x65cd81:c.instructions+=2;goto B65cd81;
case 0x65cd84:c.instructions+=1;goto B65cd84;
case 0x65cd86:goto L65cd86;
case 0x65cd89:c.instructions+=1;goto B65cd89;
case 0x65cd8b:goto L65cd8b;
case 0x65cd8e:c.instructions+=2;goto B65cd8e;
case 0x65cd91:c.instructions+=1;goto B65cd91;
case 0x65cd94:goto L65cd94;
case 0x65cd97:c.instructions+=4;goto B65cd97;
case 0x65cd9a:c.instructions+=3;goto B65cd9a;
case 0x65cd9d:c.instructions+=2;goto B65cd9d;
case 0x65cda0:c.instructions+=1;goto B65cda0;
case 0x65cda2:goto L65cda2;
case 0x65cda5:c.instructions+=1;goto B65cda5;
case 0x65cda8:goto L65cda8;
case 0x65cdaa:c.instructions+=3;goto B65cdaa;
case 0x65cdab:c.instructions+=2;goto B65cdab;
case 0x65cdad:c.instructions+=1;goto B65cdad;
case 0x65cdaf:goto L65cdaf;
case 0x65cdb1:c.instructions+=5;goto B65cdb1;
case 0x65cdb4:c.instructions+=4;goto B65cdb4;
case 0x65cdb7:c.instructions+=3;goto B65cdb7;
case 0x65cdb9:c.instructions+=2;goto B65cdb9;
case 0x65cdbc:c.instructions+=1;goto B65cdbc;
case 0x65cdbe:goto L65cdbe;
case 0x65cdc0:c.instructions+=2;goto B65cdc0;
case 0x65cdc1:c.instructions+=1;goto B65cdc1;
case 0x65cdc4:goto L65cdc4;
case 0x65cdc6:c.instructions+=1;goto B65cdc6;
case 0x65cdc8:goto L65cdc8;
case 0x65cdcb:c.instructions+=3;goto B65cdcb;
case 0x65cdcd:c.instructions+=2;goto B65cdcd;
case 0x65cdd0:c.instructions+=1;goto B65cdd0;
case 0x65cdd2:goto L65cdd2;
case 0x65cdd4:c.instructions+=2;goto B65cdd4;
case 0x65cdd5:c.instructions+=1;goto B65cdd5;
case 0x65cdd8:goto L65cdd8;
case 0x65cdda:goto L65cdda;
case 0x65cddd:c.instructions+=3;goto B65cddd;
case 0x65cdde:c.instructions+=2;goto B65cdde;
case 0x65cddf:c.instructions+=1;goto B65cddf;
case 0x65cde4:goto L65cde4;
case 0x65cde6:c.instructions+=2;goto B65cde6;
case 0x65cde9:c.instructions+=1;goto B65cde9;
case 0x65cdef:goto L65cdef;
case 0x65cdf2:goto L65cdf2;
case 0x65cdf4:c.instructions+=3;goto B65cdf4;
case 0x65cdf7:c.instructions+=2;goto B65cdf7;
case 0x65cdf8:c.instructions+=1;goto B65cdf8;
case 0x65cdfb:goto L65cdfb;
case 0x65cdfe:c.instructions+=3;goto B65cdfe;
case 0x65ce00:c.instructions+=2;goto B65ce00;
case 0x65ce02:c.instructions+=1;goto B65ce02;
case 0x65ce05:goto L65ce05;
case 0x65ce07:goto L65ce07;
case 0x65ce09:c.instructions+=1;goto B65ce09;
case 0x65ce0c:goto L65ce0c;
case 0x65ce0e:goto L65ce0e;
case 0x65ce11:c.instructions+=2;goto B65ce11;
case 0x65ce13:c.instructions+=1;goto B65ce13;
case 0x65ce15:goto L65ce15;
case 0x65ce17:c.instructions+=2;goto B65ce17;
case 0x65ce18:c.instructions+=1;goto B65ce18;
case 0x65ce1b:goto L65ce1b;
case 0x65ce1e:c.instructions+=2;goto B65ce1e;
case 0x65ce20:c.instructions+=1;goto B65ce20;
case 0x65ce22:goto L65ce22;
case 0x65ce24:c.instructions+=2;goto B65ce24;
case 0x65ce25:c.instructions+=1;goto B65ce25;
case 0x65ce28:goto L65ce28;
case 0x65ce2c:goto L65ce2c;
case 0x65ce2f:c.instructions+=4;goto B65ce2f;
case 0x65ce32:c.instructions+=3;goto B65ce32;
case 0x65ce35:c.instructions+=2;goto B65ce35;
case 0x65ce37:c.instructions+=1;goto B65ce37;
case 0x65ce39:goto L65ce39;
case 0x65ce3c:c.instructions+=2;goto B65ce3c;
case 0x65ce3e:c.instructions+=1;goto B65ce3e;
case 0x65ce40:goto L65ce40;
case 0x65ce42:c.instructions+=2;goto B65ce42;
case 0x65ce44:c.instructions+=1;goto B65ce44;
case 0x65ce46:goto L65ce46;
case 0x65ce49:c.instructions+=8;goto B65ce49;
case 0x65ce4c:c.instructions+=7;goto B65ce4c;
case 0x65ce4f:c.instructions+=6;goto B65ce4f;
case 0x65ce52:c.instructions+=5;goto B65ce52;
case 0x65ce55:c.instructions+=4;goto B65ce55;
case 0x65ce58:c.instructions+=3;goto B65ce58;
case 0x65ce5b:c.instructions+=2;goto B65ce5b;
case 0x65ce5d:c.instructions+=1;goto B65ce5d;
case 0x65ce5f:goto L65ce5f;
case 0x65ce61:c.instructions+=2;goto B65ce61;
case 0x65ce62:c.instructions+=1;goto B65ce62;
case 0x65ce65:goto L65ce65;
case 0x65ce68:c.instructions+=2;goto B65ce68;
case 0x65ce6a:c.instructions+=1;goto B65ce6a;
case 0x65ce6c:goto L65ce6c;
case 0x65ce6e:c.instructions+=2;goto B65ce6e;
case 0x65ce6f:c.instructions+=1;goto B65ce6f;
case 0x65ce72:goto L65ce72;
case 0x65ce76:goto L65ce76;
case 0x65ce79:c.instructions+=1;goto B65ce79;
case 0x65ce7c:goto L65ce7c;
case 0x65ce7f:c.instructions+=2;goto B65ce7f;
case 0x65ce82:c.instructions+=1;goto B65ce82;
case 0x65ce84:goto L65ce84;
case 0x65ce87:c.instructions+=5;goto B65ce87;
case 0x65ce89:c.instructions+=4;goto B65ce89;
case 0x65ce8a:c.instructions+=3;goto B65ce8a;
case 0x65ce8b:c.instructions+=2;goto B65ce8b;
case 0x65ce8c:c.instructions+=1;goto B65ce8c;
case 0x65ce8e:goto L65ce8e;
case 0x65ce90:c.instructions+=2;goto B65ce90;
case 0x65ce91:c.instructions+=1;goto B65ce91;
case 0x65ce94:goto L65ce94;
case 0x65ce97:c.instructions+=2;goto B65ce97;
case 0x65ce98:c.instructions+=1;goto B65ce98;
case 0x65ce9b:goto L65ce9b;
case 0x65ce9d:c.instructions+=8;goto B65ce9d;
case 0x65ce9e:c.instructions+=7;goto B65ce9e;
case 0x65cea0:c.instructions+=6;goto B65cea0;
case 0x65cea3:c.instructions+=5;goto B65cea3;
case 0x65cea5:c.instructions+=4;goto B65cea5;
case 0x65cea6:c.instructions+=3;goto B65cea6;
case 0x65cea7:c.instructions+=2;goto B65cea7;
case 0x65cea8:c.instructions+=1;goto B65cea8;
case 0x65ceaa:goto L65ceaa;
case 0x65ceab:c.instructions+=1;goto B65ceab;
case 0x65cead:goto L65cead;
case 0x65ceae:c.instructions+=1;goto B65ceae;
case 0x65ceb0:goto L65ceb0;
case 0x65ceb5:c.instructions+=1;goto B65ceb5;
case 0x65ceb7:goto L65ceb7;
case 0x65ceba:c.instructions+=5;goto B65ceba;
case 0x65cebd:c.instructions+=4;goto B65cebd;
case 0x65cec0:c.instructions+=3;goto B65cec0;
case 0x65cec3:c.instructions+=2;goto B65cec3;
case 0x65cec5:c.instructions+=1;goto B65cec5;
case 0x65cec8:goto L65cec8;
case 0x65ceca:goto L65ceca;
case 0x65cecc:c.instructions+=1;goto B65cecc;
case 0x65cecf:goto L65cecf;
case 0x65ced1:goto L65ced1;
case 0x65ced3:goto L65ced3;
case 0x65ced6:c.instructions+=3;goto B65ced6;
case 0x65ced9:c.instructions+=2;goto B65ced9;
case 0x65cedc:c.instructions+=1;goto B65cedc;
case 0x65cede:goto L65cede;
case 0x65cee1:c.instructions+=3;goto B65cee1;
case 0x65cee2:c.instructions+=2;goto B65cee2;
case 0x65cee4:c.instructions+=1;goto B65cee4;
case 0x65cee6:goto L65cee6;
case 0x65cee9:c.instructions+=1;goto B65cee9;
case 0x65ceee:goto L65ceee;
case 0x65cef0:c.instructions+=3;goto B65cef0;
case 0x65cef3:c.instructions+=2;goto B65cef3;
case 0x65cef4:c.instructions+=1;goto B65cef4;
case 0x65cef6:goto L65cef6;
case 0x65cef7:c.instructions+=1;goto B65cef7;
case 0x65cef9:goto L65cef9;
case 0x65cefc:c.instructions+=3;goto B65cefc;
case 0x65ceff:c.instructions+=2;goto B65ceff;
case 0x65cf02:c.instructions+=1;goto B65cf02;
case 0x65cf04:goto L65cf04;
case 0x65cf07:c.instructions+=2;goto B65cf07;
case 0x65cf09:c.instructions+=1;goto B65cf09;
case 0x65cf0b:goto L65cf0b;
case 0x65cf0d:c.instructions+=5;goto B65cf0d;
case 0x65cf13:c.instructions+=4;goto B65cf13;
case 0x65cf15:c.instructions+=3;goto B65cf15;
case 0x65cf17:c.instructions+=2;goto B65cf17;
case 0x65cf1a:c.instructions+=1;goto B65cf1a;
case 0x65cf1c:goto L65cf1c;
case 0x65cf1e:c.instructions+=2;goto B65cf1e;
case 0x65cf1f:c.instructions+=1;goto B65cf1f;
case 0x65cf21:goto L65cf21;
case 0x65cf23:goto L65cf23;
case 0x65cf26:c.instructions+=3;goto B65cf26;
case 0x65cf29:c.instructions+=2;goto B65cf29;
case 0x65cf2a:c.instructions+=1;goto B65cf2a;
case 0x65cf2c:goto L65cf2c;
case 0x65cf2e:goto L65cf2e;
case 0x65cf2f:c.instructions+=3;goto B65cf2f;
case 0x65cf30:c.instructions+=2;goto B65cf30;
case 0x65cf31:c.instructions+=1;goto B65cf31;
case 0x65cf34:goto L65cf34;
case 0x65cf36:c.instructions+=12;goto B65cf36;
case 0x65cf37:c.instructions+=11;goto B65cf37;
case 0x65cf39:c.instructions+=10;goto B65cf39;
case 0x65cf3c:c.instructions+=9;goto B65cf3c;
case 0x65cf3f:c.instructions+=8;goto B65cf3f;
case 0x65cf41:c.instructions+=7;goto B65cf41;
case 0x65cf42:c.instructions+=6;goto B65cf42;
case 0x65cf43:c.instructions+=5;goto B65cf43;
case 0x65cf44:c.instructions+=4;goto B65cf44;
case 0x65cf46:c.instructions+=3;goto B65cf46;
case 0x65cf47:c.instructions+=2;goto B65cf47;
case 0x65cf4a:c.instructions+=1;goto B65cf4a;
case 0x65cf4c:goto L65cf4c;
case 0x65cf4d:c.instructions+=1;goto B65cf4d;
case 0x65cf4f:goto L65cf4f;
case 0x65cf50:c.instructions+=1;goto B65cf50;
case 0x65cf52:goto L65cf52;
case 0x65cf57:c.instructions+=1;goto B65cf57;
case 0x65cf5c:goto L65cf5c;
case 0x65cf5f:c.instructions+=4;goto B65cf5f;
case 0x65cf61:c.instructions+=3;goto B65cf61;
case 0x65cf62:c.instructions+=2;goto B65cf62;
case 0x65cf65:c.instructions+=1;goto B65cf65;
case 0x65cf67:goto L65cf67;
case 0x65cf6a:c.instructions+=14;goto B65cf6a;
case 0x65cf6c:c.instructions+=13;goto B65cf6c;
case 0x65cf6f:c.instructions+=12;goto B65cf6f;
case 0x65cf71:c.instructions+=11;goto B65cf71;
case 0x65cf73:c.instructions+=10;goto B65cf73;
case 0x65cf75:c.instructions+=9;goto B65cf75;
case 0x65cf77:c.instructions+=8;goto B65cf77;
case 0x65cf79:c.instructions+=7;goto B65cf79;
case 0x65cf7c:c.instructions+=6;goto B65cf7c;
case 0x65cf7e:c.instructions+=5;goto B65cf7e;
case 0x65cf80:c.instructions+=4;goto B65cf80;
case 0x65cf82:c.instructions+=3;goto B65cf82;
case 0x65cf84:c.instructions+=2;goto B65cf84;
case 0x65cf85:c.instructions+=1;goto B65cf85;
case 0x65cf87:goto L65cf87;
case 0x65cf89:goto L65cf89;
case 0x65cf8c:c.instructions+=3;goto B65cf8c;
case 0x65cf8e:c.instructions+=2;goto B65cf8e;
case 0x65cf8f:c.instructions+=1;goto B65cf8f;
case 0x65cf92:goto L65cf92;
case 0x65cf94:c.instructions+=1;goto B65cf94;
case 0x65cf97:goto L65cf97;
case 0x65cf9a:c.instructions+=2;goto B65cf9a;
case 0x65cf9c:c.instructions+=1;goto B65cf9c;
case 0x65cfa1:goto L65cfa1;
case 0x65cfa4:c.instructions+=4;goto B65cfa4;
case 0x65cfa6:c.instructions+=3;goto B65cfa6;
case 0x65cfa9:c.instructions+=2;goto B65cfa9;
case 0x65cfac:c.instructions+=1;goto B65cfac;
case 0x65cfae:goto L65cfae;
case 0x65cfb0:c.instructions+=2;goto B65cfb0;
case 0x65cfb3:c.instructions+=1;goto B65cfb3;
case 0x65cfb5:goto L65cfb5;
case 0x65cfb7:goto L65cfb7;
case 0x65cfba:c.instructions+=3;goto B65cfba;
case 0x65cfbc:c.instructions+=2;goto B65cfbc;
case 0x65cfbd:c.instructions+=1;goto B65cfbd;
case 0x65cfc0:goto L65cfc0;
case 0x65cfc2:c.instructions+=1;goto B65cfc2;
case 0x65cfc4:goto L65cfc4;
case 0x65cfc6:c.instructions+=5;goto B65cfc6;
case 0x65cfcc:c.instructions+=4;goto B65cfcc;
case 0x65cfce:c.instructions+=3;goto B65cfce;
case 0x65cfd0:c.instructions+=2;goto B65cfd0;
case 0x65cfd3:c.instructions+=1;goto B65cfd3;
case 0x65cfd5:goto L65cfd5;
case 0x65cfd7:c.instructions+=2;goto B65cfd7;
case 0x65cfd8:c.instructions+=1;goto B65cfd8;
case 0x65cfda:goto L65cfda;
case 0x65cfdc:goto L65cfdc;
case 0x65cfde:c.instructions+=4;goto B65cfde;
case 0x65cfe0:c.instructions+=3;goto B65cfe0;
case 0x65cfe3:c.instructions+=2;goto B65cfe3;
case 0x65cfe4:c.instructions+=1;goto B65cfe4;
case 0x65cfe6:goto L65cfe6;
case 0x65cfe8:c.instructions+=2;goto B65cfe8;
case 0x65cfeb:c.instructions+=1;goto B65cfeb;
case 0x65cfed:goto L65cfed;
case 0x65cfef:goto L65cfef;
case 0x65cff0:c.instructions+=4;goto B65cff0;
case 0x65cff1:c.instructions+=3;goto B65cff1;
case 0x65cff2:c.instructions+=2;goto B65cff2;
case 0x65cff3:c.instructions+=1;goto B65cff3;
case 0x65cff6:goto L65cff6;
case 0x65cff8:c.instructions+=5;goto B65cff8;
case 0x65cff9:c.instructions+=4;goto B65cff9;
case 0x65cffb:c.instructions+=3;goto B65cffb;
case 0x65cffc:c.instructions+=2;goto B65cffc;
case 0x65cffd:c.instructions+=1;goto B65cffd;
default:missing_instruction(c.pc);}
B65c000:L65c000:{c.instructions+=1;NFSU2_TR(0x65c000);
if(r1(R+518)){{goto L65c00e;}}
}
B65c002:L65c002:{c.instructions+=2;NFSU2_TR(0x65c002);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65c003:{NFSU2_TR(0x65c003);
if(r1(R+518)){{goto L65c00e;}}
}
B65c005:L65c005:{c.instructions+=2;NFSU2_TR(0x65c005);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65c006:{NFSU2_TR(0x65c006);
if(r1(R+518)){{goto L65c00e;}}
}
B65c008:L65c008:{c.instructions+=3;NFSU2_TR(0x65c008);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65c00a:{NFSU2_TR(0x65c00a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65c00c:{NFSU2_TR(0x65c00c);
{goto L65c013;}
}
B65c00e:L65c00e:{c.instructions+=4;NFSU2_TR(0x65c00e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c010:{NFSU2_TR(0x65c010);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65c011:{NFSU2_TR(0x65c011);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c012:{NFSU2_TR(0x65c012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B65c013:L65c013:{c.instructions+=9;NFSU2_TR(0x65c013);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B65c016:{NFSU2_TR(0x65c016);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B65c019:{NFSU2_TR(0x65c019);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B65c01c:{NFSU2_TR(0x65c01c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B65c01e:{NFSU2_TR(0x65c01e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c021:{NFSU2_TR(0x65c021);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B65c024:{NFSU2_TR(0x65c024);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+512,carry<u32>(r4(U+0),r4(R+8)));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+523,scarry<u32>(r4(U+0),r4(R+8)));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+4)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65c026:{NFSU2_TR(0x65c026);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B65c029:{NFSU2_TR(0x65c029);
{goto L65c02d;}
}
B65c02b:L65c02b:{c.instructions+=1;NFSU2_TR(0x65c02b);
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
B65c02d:L65c02d:{c.instructions+=4;NFSU2_TR(0x65c02d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65c02e:{NFSU2_TR(0x65c02e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65c02f:{NFSU2_TR(0x65c02f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65c030:{NFSU2_TR(0x65c030);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65c033:L65c033:{c.instructions+=17;NFSU2_TR(0x65c033);
__builtin_memmove((R+28),(R+28),4);
}
B65c035:{NFSU2_TR(0x65c035);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c036:{NFSU2_TR(0x65c036);
__builtin_memmove((R+20),(R+16),4);
}
B65c038:{NFSU2_TR(0x65c038);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c039:{NFSU2_TR(0x65c039);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c03a:{NFSU2_TR(0x65c03a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c03d:{NFSU2_TR(0x65c03d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c03e:{NFSU2_TR(0x65c03e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c03f:{NFSU2_TR(0x65c03f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65c042:{NFSU2_TR(0x65c042);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B65c044:{NFSU2_TR(0x65c044);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c047:{NFSU2_TR(0x65c047);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B65c04a:{NFSU2_TR(0x65c04a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65c04d:{NFSU2_TR(0x65c04d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c04f:{NFSU2_TR(0x65c04f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c052:{NFSU2_TR(0x65c052);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c053:{NFSU2_TR(0x65c053);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c056;}}
}
B65c055:L65c055:{c.instructions+=1;NFSU2_TR(0x65c055);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B65c056:L65c056:{c.instructions+=2;NFSU2_TR(0x65c056);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65c058:{NFSU2_TR(0x65c058);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65c11a;}}
}
B65c05e:L65c05e:{c.instructions+=2;NFSU2_TR(0x65c05e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65c061:{NFSU2_TR(0x65c061);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65c0de;}}
}
B65c063:L65c063:{c.instructions+=2;NFSU2_TR(0x65c063);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65c066:{NFSU2_TR(0x65c066);
if(r1(R+518)){{goto L65c0ba;}}
}
B65c068:L65c068:{c.instructions+=2;NFSU2_TR(0x65c068);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65c06b:{NFSU2_TR(0x65c06b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c11a;}}
}
B65c071:L65c071:{c.instructions+=9;NFSU2_TR(0x65c071);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c074:{NFSU2_TR(0x65c074);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65c077:{NFSU2_TR(0x65c077);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65c07b:{NFSU2_TR(0x65c07b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B65c07e:{NFSU2_TR(0x65c07e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c080:{NFSU2_TR(0x65c080);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65c082:{NFSU2_TR(0x65c082);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65c084:{NFSU2_TR(0x65c084);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c087:{NFSU2_TR(0x65c087);
if(r1(R+518)){{goto L65c0a1;}}
}
B65c089:L65c089:{c.instructions+=1;NFSU2_TR(0x65c089);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c08c:L65c08c:{c.instructions+=5;NFSU2_TR(0x65c08c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c08f:{NFSU2_TR(0x65c08f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c090:{NFSU2_TR(0x65c090);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c091:{NFSU2_TR(0x65c091);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65c094:{NFSU2_TR(0x65c094);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c099ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c033u);}goto L65c033;}
}
B65c099:L65c099:{c.instructions+=3;NFSU2_TR(0x65c099);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B65c09c:{NFSU2_TR(0x65c09c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65c09f:{NFSU2_TR(0x65c09f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c08cu);}goto L65c08c;}}
}
B65c0a1:L65c0a1:{c.instructions+=8;NFSU2_TR(0x65c0a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65c0a3:{NFSU2_TR(0x65c0a3);
__builtin_memmove((R+4),(R+0),4);
}
B65c0a5:{NFSU2_TR(0x65c0a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B65c0a8:{NFSU2_TR(0x65c0a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B65c0ab:{NFSU2_TR(0x65c0ab);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B65c0ae:{NFSU2_TR(0x65c0ae);
u8 U[6];
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65c0b0:{NFSU2_TR(0x65c0b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c0b3:{NFSU2_TR(0x65c0b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B65c0b5:L65c0b5:{c.instructions+=2;NFSU2_TR(0x65c0b5);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(r4(R+12)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B65c0b8:{NFSU2_TR(0x65c0b8);
{goto L65c11c;}
}
B65c0ba:L65c0ba:{c.instructions+=3;NFSU2_TR(0x65c0ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c0bc:{NFSU2_TR(0x65c0bc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B65c0bf:{NFSU2_TR(0x65c0bf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65c0ca;}}
}
B65c0c1:L65c0c1:{c.instructions+=2;NFSU2_TR(0x65c0c1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65c0c4:{NFSU2_TR(0x65c0c4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L65c0ca;}}
}
B65c0c6:L65c0c6:{c.instructions+=2;NFSU2_TR(0x65c0c6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65c0c8:{NFSU2_TR(0x65c0c8);
{goto L65c0cd;}
}
B65c0ca:L65c0ca:{c.instructions+=2;NFSU2_TR(0x65c0ca);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c0cc:{NFSU2_TR(0x65c0cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65c0cd:L65c0cd:{c.instructions+=7;NFSU2_TR(0x65c0cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c0d0:{NFSU2_TR(0x65c0d0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B65c0d3:{NFSU2_TR(0x65c0d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65c0d5:{NFSU2_TR(0x65c0d5);
__builtin_memmove((R+8),(R+12),4);
}
B65c0d7:{NFSU2_TR(0x65c0d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B65c0da:{NFSU2_TR(0x65c0da);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+4)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65c0dc:{NFSU2_TR(0x65c0dc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c0b5u);}goto L65c0b5;}
}
B65c0de:L65c0de:{c.instructions+=6;NFSU2_TR(0x65c0de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c0e1:{NFSU2_TR(0x65c0e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c0e4:{NFSU2_TR(0x65c0e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c0e7:{NFSU2_TR(0x65c0e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c0e9:{NFSU2_TR(0x65c0e9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B65c0ea:{NFSU2_TR(0x65c0ea);
if(r1(R+518)){{goto L65c0f8;}}
}
B65c0ec:L65c0ec:{c.instructions+=2;NFSU2_TR(0x65c0ec);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B65c0ed:{NFSU2_TR(0x65c0ed);
if(r1(R+518)){{goto L65c0f8;}}
}
B65c0ef:L65c0ef:{c.instructions+=2;NFSU2_TR(0x65c0ef);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B65c0f0:{NFSU2_TR(0x65c0f0);
if(r1(R+518)){{goto L65c0f8;}}
}
B65c0f2:L65c0f2:{c.instructions+=3;NFSU2_TR(0x65c0f2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65c0f4:{NFSU2_TR(0x65c0f4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B65c0f6:{NFSU2_TR(0x65c0f6);
{goto L65c0fd;}
}
B65c0f8:L65c0f8:{c.instructions+=4;NFSU2_TR(0x65c0f8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c0fa:{NFSU2_TR(0x65c0fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65c0fb:{NFSU2_TR(0x65c0fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c0fc:{NFSU2_TR(0x65c0fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65c0fd:L65c0fd:{c.instructions+=10;NFSU2_TR(0x65c0fd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B65c100:{NFSU2_TR(0x65c100);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B65c104:{NFSU2_TR(0x65c104);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B65c108:{NFSU2_TR(0x65c108);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B65c10b:{NFSU2_TR(0x65c10b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1cull))));
}
B65c10e:{NFSU2_TR(0x65c10e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65c110:{NFSU2_TR(0x65c110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65c113:{NFSU2_TR(0x65c113);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+8)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65c115:{NFSU2_TR(0x65c115);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B65c118:{NFSU2_TR(0x65c118);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c0b5u);}goto L65c0b5;}
}
B65c11a:L65c11a:{c.instructions+=1;NFSU2_TR(0x65c11a);
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
B65c11c:L65c11c:{c.instructions+=5;NFSU2_TR(0x65c11c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65c11d:{NFSU2_TR(0x65c11d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65c11e:{NFSU2_TR(0x65c11e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65c11f:{NFSU2_TR(0x65c11f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65c120:{NFSU2_TR(0x65c120);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65c123:L65c123:{c.instructions+=11;NFSU2_TR(0x65c123);
__builtin_memmove((R+28),(R+28),4);
}
B65c125:{NFSU2_TR(0x65c125);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c126:{NFSU2_TR(0x65c126);
__builtin_memmove((R+20),(R+16),4);
}
B65c128:{NFSU2_TR(0x65c128);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B65c12b:{NFSU2_TR(0x65c12b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c12c:{NFSU2_TR(0x65c12c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c12d:{NFSU2_TR(0x65c12d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c12e:{NFSU2_TR(0x65c12e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65c131:{NFSU2_TR(0x65c131);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c133:{NFSU2_TR(0x65c133);
__builtin_memmove((R+12),(R+4),4);
}
B65c135:{NFSU2_TR(0x65c135);
if(r1(R+518)){{goto L65c2eb;}}
}
B65c13b:L65c13b:{c.instructions+=1;NFSU2_TR(0x65c13b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L65c141;}}
}
B65c13d:L65c13d:{c.instructions+=2;NFSU2_TR(0x65c13d);
w4(R+28,u32(~u32(r4(R+28))));
}
B65c13f:{NFSU2_TR(0x65c13f);
{goto L65c158;}
}
B65c141:L65c141:{c.instructions+=5;NFSU2_TR(0x65c141);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c143:{NFSU2_TR(0x65c143);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65c146:{NFSU2_TR(0x65c146);
__builtin_memmove((R+4),(R+12),4);
}
B65c148:{NFSU2_TR(0x65c148);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c149:{NFSU2_TR(0x65c149);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c14eull));
TAIL_STATIC(0x66bbeeu,66b);
}
B65c14e:L65c14e:{c.instructions+=3;NFSU2_TR(0x65c14e);
__builtin_memmove((R+28),(R+0),4);
}
B65c150:{NFSU2_TR(0x65c150);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c152:{NFSU2_TR(0x65c152);
if(r1(R+518)){{goto L65c2eb;}}
}
B65c158:L65c158:{c.instructions+=5;NFSU2_TR(0x65c158);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c15c:{NFSU2_TR(0x65c15c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c15f:{NFSU2_TR(0x65c15f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c162:{NFSU2_TR(0x65c162);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c165:{NFSU2_TR(0x65c165);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c2eb;}}
}
B65c16b:L65c16b:{c.instructions+=2;NFSU2_TR(0x65c16b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c16d:{NFSU2_TR(0x65c16d);
if(r1(R+518)){{goto L65c2eb;}}
}
B65c173:L65c173:{c.instructions+=3;NFSU2_TR(0x65c173);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c176:{NFSU2_TR(0x65c176);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B65c178:{NFSU2_TR(0x65c178);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65c2eb;}}
}
B65c17e:L65c17e:{c.instructions+=4;NFSU2_TR(0x65c17e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65c181:{NFSU2_TR(0x65c181);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65c185:{NFSU2_TR(0x65c185);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c187:{NFSU2_TR(0x65c187);
if(r1(R+518)){{goto L65c1a5;}}
}
B65c189:L65c189:{c.instructions+=2;NFSU2_TR(0x65c189);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B65c18c:{NFSU2_TR(0x65c18c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65c198;}}
}
B65c18e:L65c18e:{c.instructions+=4;NFSU2_TR(0x65c18e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c191:{NFSU2_TR(0x65c191);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65c194:{NFSU2_TR(0x65c194);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c196:{NFSU2_TR(0x65c196);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c189u);}goto L65c189;}}
}
B65c198:L65c198:{c.instructions+=2;NFSU2_TR(0x65c198);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c19a:{NFSU2_TR(0x65c19a);
if(r1(R+518)){{goto L65c1a5;}}
}
B65c19c:L65c19c:{c.instructions+=2;NFSU2_TR(0x65c19c);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65c19f:{NFSU2_TR(0x65c19f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65c2e5;}}
}
B65c1a5:L65c1a5:{c.instructions+=2;NFSU2_TR(0x65c1a5);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c1a7:{NFSU2_TR(0x65c1a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c1acull));
TAIL_STATIC(0x575620u,575);
}
B65c1ac:L65c1ac:{c.instructions+=4;NFSU2_TR(0x65c1ac);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65c1ae:{NFSU2_TR(0x65c1ae);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65c1b0:{NFSU2_TR(0x65c1b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65c1b1:{NFSU2_TR(0x65c1b1);
if(r1(R+518)){{goto L65c1c6;}}
}
B65c1b3:L65c1b3:{c.instructions+=7;NFSU2_TR(0x65c1b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65c1b7:{NFSU2_TR(0x65c1b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c1ba:{NFSU2_TR(0x65c1ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c1bd:{NFSU2_TR(0x65c1bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65c1bf:{NFSU2_TR(0x65c1bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c1c2:{NFSU2_TR(0x65c1c2);
__builtin_memmove((R+24),(R+0),4);
}
B65c1c4:{NFSU2_TR(0x65c1c4);
{goto L65c1c8;}
}
B65c1c6:L65c1c6:{c.instructions+=1;NFSU2_TR(0x65c1c6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65c1c8:L65c1c8:{c.instructions+=2;NFSU2_TR(0x65c1c8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65c1ca:{NFSU2_TR(0x65c1ca);
if(r1(R+518)){{goto L65c2eb;}}
}
B65c1d0:L65c1d0:{c.instructions+=16;NFSU2_TR(0x65c1d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c1d6:{NFSU2_TR(0x65c1d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c1d9:{NFSU2_TR(0x65c1d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65c1dc:{NFSU2_TR(0x65c1dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c1de:{NFSU2_TR(0x65c1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c1e1:{NFSU2_TR(0x65c1e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B65c1e4:{NFSU2_TR(0x65c1e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c1e7:{NFSU2_TR(0x65c1e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c1ea:{NFSU2_TR(0x65c1ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c1ec:{NFSU2_TR(0x65c1ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c1ef:{NFSU2_TR(0x65c1ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B65c1f2:{NFSU2_TR(0x65c1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c1f5:{NFSU2_TR(0x65c1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c1f8:{NFSU2_TR(0x65c1f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65c1fa:{NFSU2_TR(0x65c1fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c1fd:{NFSU2_TR(0x65c1fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c204;}}
}
B65c1ff:L65c1ff:{c.instructions+=2;NFSU2_TR(0x65c1ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c202:{NFSU2_TR(0x65c202);
{goto L65c20a;}
}
B65c204:L65c204:{c.instructions+=2;NFSU2_TR(0x65c204);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c207:{NFSU2_TR(0x65c207);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c20a:L65c20a:{c.instructions+=7;NFSU2_TR(0x65c20a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65c20d:{NFSU2_TR(0x65c20d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c20e:{NFSU2_TR(0x65c20e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65c211:{NFSU2_TR(0x65c211);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c212:{NFSU2_TR(0x65c212);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c213:{NFSU2_TR(0x65c213);
__builtin_memmove((R+4),(R+12),4);
}
B65c215:{NFSU2_TR(0x65c215);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c21aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c033u);}goto L65c033;}
}
B65c21a:L65c21a:{c.instructions+=6;NFSU2_TR(0x65c21a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c220:{NFSU2_TR(0x65c220);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c223:{NFSU2_TR(0x65c223);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c226:{NFSU2_TR(0x65c226);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65c229:{NFSU2_TR(0x65c229);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c22d:{NFSU2_TR(0x65c22d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c234;}}
}
B65c22f:L65c22f:{c.instructions+=2;NFSU2_TR(0x65c22f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c232:{NFSU2_TR(0x65c232);
{goto L65c23a;}
}
B65c234:L65c234:{c.instructions+=2;NFSU2_TR(0x65c234);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c237:{NFSU2_TR(0x65c237);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c23a:L65c23a:{c.instructions+=6;NFSU2_TR(0x65c23a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65c23d:{NFSU2_TR(0x65c23d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c23e:{NFSU2_TR(0x65c23e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65c241:{NFSU2_TR(0x65c241);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c242:{NFSU2_TR(0x65c242);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c243:{NFSU2_TR(0x65c243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c248ull));
TAIL_STATIC(0x65bf18u,65b);
}
B65c248:L65c248:{c.instructions+=31;NFSU2_TR(0x65c248);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65c24f:{NFSU2_TR(0x65c24f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c252:{NFSU2_TR(0x65c252);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c255:{NFSU2_TR(0x65c255);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c258:{NFSU2_TR(0x65c258);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c25b:{NFSU2_TR(0x65c25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c25e:{NFSU2_TR(0x65c25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65c264:{NFSU2_TR(0x65c264);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B65c267:{NFSU2_TR(0x65c267);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c26a:{NFSU2_TR(0x65c26a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B65c26d:{NFSU2_TR(0x65c26d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c270:{NFSU2_TR(0x65c270);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B65c272:{NFSU2_TR(0x65c272);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65c274:{NFSU2_TR(0x65c274);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x65c274);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x65c274);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B65c277:{NFSU2_TR(0x65c277);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65c279:{NFSU2_TR(0x65c279);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B65c27d:{NFSU2_TR(0x65c27d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B65c27f:{NFSU2_TR(0x65c27f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c282:{NFSU2_TR(0x65c282);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c285:{NFSU2_TR(0x65c285);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x65c285);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x65c285);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B65c288:{NFSU2_TR(0x65c288);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c28b:{NFSU2_TR(0x65c28b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c28e:{NFSU2_TR(0x65c28e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c291:{NFSU2_TR(0x65c291);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c294:{NFSU2_TR(0x65c294);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c297:{NFSU2_TR(0x65c297);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c29a:{NFSU2_TR(0x65c29a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c2a0:{NFSU2_TR(0x65c2a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65c2a3:{NFSU2_TR(0x65c2a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B65c2a6:{NFSU2_TR(0x65c2a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c2aa:{NFSU2_TR(0x65c2aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c2b1;}}
}
B65c2ac:L65c2ac:{c.instructions+=2;NFSU2_TR(0x65c2ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c2af:{NFSU2_TR(0x65c2af);
{goto L65c2b7;}
}
B65c2b1:L65c2b1:{c.instructions+=2;NFSU2_TR(0x65c2b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c2b4:{NFSU2_TR(0x65c2b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c2b7:L65c2b7:{c.instructions+=9;NFSU2_TR(0x65c2b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65c2bd:{NFSU2_TR(0x65c2bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65c2c0:{NFSU2_TR(0x65c2c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c2c3:{NFSU2_TR(0x65c2c3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B65c2c5:{NFSU2_TR(0x65c2c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B65c2c8:{NFSU2_TR(0x65c2c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65c2ca:{NFSU2_TR(0x65c2ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c2cd:{NFSU2_TR(0x65c2cd);
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
B65c2cf:{NFSU2_TR(0x65c2cf);
if(r1(R+518)){{goto L65c2dc;}}
}
B65c2d1:L65c2d1:{c.instructions+=4;NFSU2_TR(0x65c2d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c2d4:{NFSU2_TR(0x65c2d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c2d7:{NFSU2_TR(0x65c2d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c2da:{NFSU2_TR(0x65c2da);
{goto L65c2e5;}
}
B65c2dc:L65c2dc:{c.instructions+=3;NFSU2_TR(0x65c2dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c2df:{NFSU2_TR(0x65c2df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c2e2:{NFSU2_TR(0x65c2e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c2e5:L65c2e5:{c.instructions+=3;NFSU2_TR(0x65c2e5);
__builtin_memmove((R+0),(R+24),4);
}
B65c2e7:{NFSU2_TR(0x65c2e7);
w4(R+0,u32(~u32(r4(R+0))));
}
B65c2e9:{NFSU2_TR(0x65c2e9);
{goto L65c2ed;}
}
B65c2eb:L65c2eb:{c.instructions+=1;NFSU2_TR(0x65c2eb);
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
B65c2ed:L65c2ed:{c.instructions+=5;NFSU2_TR(0x65c2ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65c2ee:{NFSU2_TR(0x65c2ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65c2ef:{NFSU2_TR(0x65c2ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65c2f0:{NFSU2_TR(0x65c2f0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65c2f1:{NFSU2_TR(0x65c2f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65c2f4:L65c2f4:{c.instructions+=10;NFSU2_TR(0x65c2f4);
__builtin_memmove((R+28),(R+28),4);
}
B65c2f6:{NFSU2_TR(0x65c2f6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c2f7:{NFSU2_TR(0x65c2f7);
__builtin_memmove((R+20),(R+16),4);
}
B65c2f9:{NFSU2_TR(0x65c2f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c2fc:{NFSU2_TR(0x65c2fc);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B65c300:{NFSU2_TR(0x65c300);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B65c306:{NFSU2_TR(0x65c306);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65c30c:{NFSU2_TR(0x65c30c);
w4(R+0,u32(~u32(r4(R+0))));
}
B65c30e:{NFSU2_TR(0x65c30e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65c30f:{NFSU2_TR(0x65c30f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65c312:L65c312:{c.instructions+=20;NFSU2_TR(0x65c312);
__builtin_memmove((R+28),(R+28),4);
}
B65c314:{NFSU2_TR(0x65c314);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c315:{NFSU2_TR(0x65c315);
__builtin_memmove((R+20),(R+16),4);
}
B65c317:{NFSU2_TR(0x65c317);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x60ull))));
}
B65c31a:{NFSU2_TR(0x65c31a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65c31d:{NFSU2_TR(0x65c31d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c320:{NFSU2_TR(0x65c320);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65c323:{NFSU2_TR(0x65c323);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B65c329:{NFSU2_TR(0x65c329);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c32f:{NFSU2_TR(0x65c32f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B65c332:{NFSU2_TR(0x65c332);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65c335:{NFSU2_TR(0x65c335);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c336:{NFSU2_TR(0x65c336);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c337:{NFSU2_TR(0x65c337);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c338:{NFSU2_TR(0x65c338);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65c33a:{NFSU2_TR(0x65c33a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B65c33c:{NFSU2_TR(0x65c33c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65c33e:{NFSU2_TR(0x65c33e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65c340:{NFSU2_TR(0x65c340);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c343:{NFSU2_TR(0x65c343);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c34a;}}
}
B65c345:L65c345:{c.instructions+=2;NFSU2_TR(0x65c345);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c348:{NFSU2_TR(0x65c348);
{goto L65c350;}
}
B65c34a:L65c34a:{c.instructions+=2;NFSU2_TR(0x65c34a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B65c34d:{NFSU2_TR(0x65c34d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c350:L65c350:{c.instructions+=8;NFSU2_TR(0x65c350);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c353:{NFSU2_TR(0x65c353);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c355:{NFSU2_TR(0x65c355);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c358:{NFSU2_TR(0x65c358);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c35b:{NFSU2_TR(0x65c35b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c35e:{NFSU2_TR(0x65c35e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c361:{NFSU2_TR(0x65c361);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c364:{NFSU2_TR(0x65c364);
if(r1(R+518)){{goto L65c5b5;}}
}
B65c36a:L65c36a:{c.instructions+=2;NFSU2_TR(0x65c36a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c36d:{NFSU2_TR(0x65c36d);
if(r1(R+518)){{goto L65c5b5;}}
}
B65c373:L65c373:{c.instructions+=2;NFSU2_TR(0x65c373);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c376:{NFSU2_TR(0x65c376);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B65c379:L65c379:{c.instructions+=4;NFSU2_TR(0x65c379);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B65c37b:{NFSU2_TR(0x65c37b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65c37c:{NFSU2_TR(0x65c37c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65c37e:{NFSU2_TR(0x65c37e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c379u);}goto L65c379;}}
}
B65c380:L65c380:{c.instructions+=4;NFSU2_TR(0x65c380);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B65c382:{NFSU2_TR(0x65c382);
__builtin_memmove((R+4),(R+0),4);
}
B65c384:{NFSU2_TR(0x65c384);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c387:{NFSU2_TR(0x65c387);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65c38a:L65c38a:{c.instructions+=4;NFSU2_TR(0x65c38a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B65c38c:{NFSU2_TR(0x65c38c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65c38d:{NFSU2_TR(0x65c38d);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65c38f:{NFSU2_TR(0x65c38f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c38au);}goto L65c38a;}}
}
B65c391:L65c391:{c.instructions+=4;NFSU2_TR(0x65c391);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B65c393:{NFSU2_TR(0x65c393);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B65c397:{NFSU2_TR(0x65c397);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c398:{NFSU2_TR(0x65c398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c39dull));
TAIL_STATIC(0x575620u,575);
}
B65c39d:L65c39d:{c.instructions+=4;NFSU2_TR(0x65c39d);
__builtin_memmove((R+12),(R+0),4);
}
B65c39f:{NFSU2_TR(0x65c39f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65c3a1:{NFSU2_TR(0x65c3a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65c3a2:{NFSU2_TR(0x65c3a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c3ae;}}
}
B65c3a4:L65c3a4:{c.instructions+=2;NFSU2_TR(0x65c3a4);
w4(R+24,u32(0x8007000eull));
}
B65c3a9:{NFSU2_TR(0x65c3a9);
{goto L65c5ca;}
}
B65c3ae:L65c3ae:{c.instructions+=3;NFSU2_TR(0x65c3ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c3b1:{NFSU2_TR(0x65c3b1);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+12)),r1(U+0));
}
B65c3b4:{NFSU2_TR(0x65c3b4);
__builtin_memmove((R+4),(R+0),4);
}
B65c3b6:L65c3b6:{c.instructions+=4;NFSU2_TR(0x65c3b6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B65c3b8:{NFSU2_TR(0x65c3b8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65c3b9:{NFSU2_TR(0x65c3b9);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65c3bb:{NFSU2_TR(0x65c3bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c3b6u);}goto L65c3b6;}}
}
B65c3bd:L65c3bd:{c.instructions+=5;NFSU2_TR(0x65c3bd);
__builtin_memmove((R+28),(R+12),4);
}
B65c3bf:{NFSU2_TR(0x65c3bf);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B65c3c1:{NFSU2_TR(0x65c3c1);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B65c3c2:{NFSU2_TR(0x65c3c2);
__builtin_memmove((R+24),(R+4),4);
}
B65c3c4:{NFSU2_TR(0x65c3c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B65c3c7:L65c3c7:{c.instructions+=4;NFSU2_TR(0x65c3c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B65c3ca:{NFSU2_TR(0x65c3ca);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65c3cb:{NFSU2_TR(0x65c3cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65c3cd:{NFSU2_TR(0x65c3cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c3c7u);}goto L65c3c7;}}
}
B65c3cf:L65c3cf:{c.instructions+=2;NFSU2_TR(0x65c3cf);
__builtin_memmove((R+4),(R+0),4);
}
B65c3d1:{NFSU2_TR(0x65c3d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65c3d4:L65c3d4:{c.instructions+=1;NFSU2_TR(0x65c3d4);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L65c3d6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c3d4u);}goto L65c3d4;}
}
B65c3d6:L65c3d6:{c.instructions+=3;NFSU2_TR(0x65c3d6);
__builtin_memmove((R+4),(R+0),4);
}
B65c3d8:{NFSU2_TR(0x65c3d8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65c3db:{NFSU2_TR(0x65c3db);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B65c3dc:L65c3dc:{c.instructions+=1;NFSU2_TR(0x65c3dc);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65c3de;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c3dcu);}goto L65c3dc;}
}
B65c3de:L65c3de:{c.instructions+=1;NFSU2_TR(0x65c3de);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65c3e1:L65c3e1:{c.instructions+=4;NFSU2_TR(0x65c3e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B65c3e4:{NFSU2_TR(0x65c3e4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B65c3e5:{NFSU2_TR(0x65c3e5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65c3e7:{NFSU2_TR(0x65c3e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c3e1u);}goto L65c3e1;}}
}
B65c3e9:L65c3e9:{c.instructions+=5;NFSU2_TR(0x65c3e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c3ec:{NFSU2_TR(0x65c3ec);
__builtin_memmove((R+28),(R+8),4);
}
B65c3ee:{NFSU2_TR(0x65c3ee);
w4(R+24,u32(0x7b6dfcull));
}
B65c3f3:{NFSU2_TR(0x65c3f3);
u8 U[36];
__builtin_memmove((U+18),(R+28),4);
w4(U+22,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+26,u32(r1(R+522)));
w4(U+30,u32(u32(u32(0x4ull))*u32(r4(U+26))));
w4(R+28,u32(u32(r4(U+22))-u32(r4(U+30))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),2);
__builtin_memmove((U+34),(U+16),2);
s2(u32(r4(U+18)),r2(U+34));
}
B65c3f5:{NFSU2_TR(0x65c3f5);
__builtin_memmove((R+24),(R+0),4);
}
B65c3f7:L65c3f7:{c.instructions+=4;NFSU2_TR(0x65c3f7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B65c3f9:{NFSU2_TR(0x65c3f9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65c3fa:{NFSU2_TR(0x65c3fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65c3fc:{NFSU2_TR(0x65c3fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c3f7u);}goto L65c3f7;}}
}
B65c3fe:L65c3fe:{c.instructions+=2;NFSU2_TR(0x65c3fe);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B65c400:{NFSU2_TR(0x65c400);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B65c401:L65c401:{c.instructions+=4;NFSU2_TR(0x65c401);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B65c404:{NFSU2_TR(0x65c404);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B65c405:{NFSU2_TR(0x65c405);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65c407:{NFSU2_TR(0x65c407);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c401u);}goto L65c401;}}
}
B65c409:L65c409:{c.instructions+=3;NFSU2_TR(0x65c409);
__builtin_memmove((R+28),(R+4),4);
}
B65c40b:{NFSU2_TR(0x65c40b);
__builtin_memmove((R+4),(R+0),4);
}
B65c40d:{NFSU2_TR(0x65c40d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65c410:L65c410:{c.instructions+=1;NFSU2_TR(0x65c410);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L65c412;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c410u);}goto L65c410;}
}
B65c412:L65c412:{c.instructions+=2;NFSU2_TR(0x65c412);
__builtin_memmove((R+4),(R+0),4);
}
B65c414:{NFSU2_TR(0x65c414);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65c417:L65c417:{c.instructions+=1;NFSU2_TR(0x65c417);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65c419;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c417u);}goto L65c417;}
}
B65c419:L65c419:{c.instructions+=3;NFSU2_TR(0x65c419);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65c41c:{NFSU2_TR(0x65c41c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c41e:{NFSU2_TR(0x65c41e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65c454;}}
}
B65c420:L65c420:{c.instructions+=3;NFSU2_TR(0x65c420);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B65c423:{NFSU2_TR(0x65c423);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c424:{NFSU2_TR(0x65c424);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c429ull));
TAIL_STATIC(0x575620u,575);
}
B65c429:L65c429:{c.instructions+=5;NFSU2_TR(0x65c429);
__builtin_memmove((R+8),(R+0),4);
}
B65c42b:{NFSU2_TR(0x65c42b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c42d:{NFSU2_TR(0x65c42d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65c42e:{NFSU2_TR(0x65c42e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c431:{NFSU2_TR(0x65c431);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c43d;}}
}
B65c433:L65c433:{c.instructions+=2;NFSU2_TR(0x65c433);
w4(R+24,u32(0x8007000eull));
}
B65c438:{NFSU2_TR(0x65c438);
{goto L65c5ba;}
}
B65c43d:L65c43d:{c.instructions+=4;NFSU2_TR(0x65c43d);
__builtin_memmove((R+4),(R+24),4);
}
B65c43f:{NFSU2_TR(0x65c43f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65c442:{NFSU2_TR(0x65c442);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65c444:{NFSU2_TR(0x65c444);
__builtin_memmove((R+28),(R+8),4);
}
B65c446:L65c446:{c.instructions+=1;NFSU2_TR(0x65c446);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L65c448;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c446u);}goto L65c446;}
}
B65c448:L65c448:{c.instructions+=3;NFSU2_TR(0x65c448);
__builtin_memmove((R+4),(R+24),4);
}
B65c44a:{NFSU2_TR(0x65c44a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65c44d:{NFSU2_TR(0x65c44d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65c450:L65c450:{c.instructions+=1;NFSU2_TR(0x65c450);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L65c452;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c450u);}goto L65c450;}
}
B65c452:L65c452:{c.instructions+=1;NFSU2_TR(0x65c452);
{goto L65c457;}
}
B65c454:L65c454:{c.instructions+=1;NFSU2_TR(0x65c454);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65c457:L65c457:{c.instructions+=3;NFSU2_TR(0x65c457);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c45a:{NFSU2_TR(0x65c45a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65c45b:{NFSU2_TR(0x65c45b);
if(r1(R+518)){{goto L65c599;}}
}
B65c461:L65c461:{c.instructions+=2;NFSU2_TR(0x65c461);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65c462:{NFSU2_TR(0x65c462);
if(r1(R+518)){{goto L65c57f;}}
}
B65c468:L65c468:{c.instructions+=2;NFSU2_TR(0x65c468);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65c469:{NFSU2_TR(0x65c469);
if(r1(R+518)){{goto L65c48e;}}
}
B65c46b:L65c46b:{c.instructions+=2;NFSU2_TR(0x65c46b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65c46c:{NFSU2_TR(0x65c46c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c5b5;}}
}
B65c472:L65c472:{c.instructions+=2;NFSU2_TR(0x65c472);
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
B65c474:{NFSU2_TR(0x65c474);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L65c5b5;}}
}
B65c47a:L65c47a:{c.instructions+=6;NFSU2_TR(0x65c47a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c47d:{NFSU2_TR(0x65c47d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c47f:{NFSU2_TR(0x65c47f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c481:{NFSU2_TR(0x65c481);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c482:{NFSU2_TR(0x65c482);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c483:{NFSU2_TR(0x65c483);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c489ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65c489:L65c489:{c.instructions+=1;NFSU2_TR(0x65c489);
{goto L65c5a8;}
}
B65c48e:L65c48e:{c.instructions+=3;NFSU2_TR(0x65c48e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c491:{NFSU2_TR(0x65c491);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65c494:{NFSU2_TR(0x65c494);
if(r1(R+518)){{goto L65c55d;}}
}
B65c49a:L65c49a:{c.instructions+=2;NFSU2_TR(0x65c49a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65c49b:{NFSU2_TR(0x65c49b);
if(r1(R+518)){{goto L65c526;}}
}
B65c4a1:L65c4a1:{c.instructions+=2;NFSU2_TR(0x65c4a1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65c4a2:{NFSU2_TR(0x65c4a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c5b5;}}
}
B65c4a8:L65c4a8:{c.instructions+=2;NFSU2_TR(0x65c4a8);
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
B65c4aa:{NFSU2_TR(0x65c4aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c512;}}
}
B65c4ac:L65c4ac:{c.instructions+=39;NFSU2_TR(0x65c4ac);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c4ae:{NFSU2_TR(0x65c4ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c4b1:{NFSU2_TR(0x65c4b1);
{u32 ea_=u32(r4(R+20)+u32(4294967200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c4b4:{NFSU2_TR(0x65c4b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c4b6:{NFSU2_TR(0x65c4b6);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c4b8:{NFSU2_TR(0x65c4b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B65c4bb:{NFSU2_TR(0x65c4bb);
{u32 ea_=u32(r4(R+20)+u32(4294967204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c4be:{NFSU2_TR(0x65c4be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c4bf:{NFSU2_TR(0x65c4bf);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c4c1:{NFSU2_TR(0x65c4c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c4c2:{NFSU2_TR(0x65c4c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c4c3:{NFSU2_TR(0x65c4c3);
{u32 ea_=u32(r4(R+20)+u32(4294967208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c4c6:{NFSU2_TR(0x65c4c6);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c4c8:{NFSU2_TR(0x65c4c8);
{u32 ea_=u32(r4(R+20)+u32(4294967212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c4cb:{NFSU2_TR(0x65c4cb);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c4cd:{NFSU2_TR(0x65c4cd);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c4d0:{NFSU2_TR(0x65c4d0);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c4d2:{NFSU2_TR(0x65c4d2);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c4d5:{NFSU2_TR(0x65c4d5);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c4d7:{NFSU2_TR(0x65c4d7);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c4da:{NFSU2_TR(0x65c4da);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c4dc:{NFSU2_TR(0x65c4dc);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c4df:{NFSU2_TR(0x65c4df);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c4e1:{NFSU2_TR(0x65c4e1);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c4e4:{NFSU2_TR(0x65c4e4);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c4e6:{NFSU2_TR(0x65c4e6);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c4e9:{NFSU2_TR(0x65c4e9);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c4eb:{NFSU2_TR(0x65c4eb);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c4ee:{NFSU2_TR(0x65c4ee);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c4f0:{NFSU2_TR(0x65c4f0);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c4f3:{NFSU2_TR(0x65c4f3);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c4f5:{NFSU2_TR(0x65c4f5);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c4f8:{NFSU2_TR(0x65c4f8);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c4fa:{NFSU2_TR(0x65c4fa);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c4fd:{NFSU2_TR(0x65c4fd);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c4ff:{NFSU2_TR(0x65c4ff);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c502:{NFSU2_TR(0x65c502);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c504:{NFSU2_TR(0x65c504);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c507:{NFSU2_TR(0x65c507);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c50dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65c50d:L65c50d:{c.instructions+=1;NFSU2_TR(0x65c50d);
{goto L65c5a8;}
}
B65c512:L65c512:{c.instructions+=7;NFSU2_TR(0x65c512);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c515:{NFSU2_TR(0x65c515);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c517:{NFSU2_TR(0x65c517);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c518:{NFSU2_TR(0x65c518);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c519:{NFSU2_TR(0x65c519);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c51a:{NFSU2_TR(0x65c51a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c51b:{NFSU2_TR(0x65c51b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c521ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65c521:L65c521:{c.instructions+=1;NFSU2_TR(0x65c521);
{goto L65c5a8;}
}
B65c526:L65c526:{c.instructions+=4;NFSU2_TR(0x65c526);
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
B65c528:{NFSU2_TR(0x65c528);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c52b:{NFSU2_TR(0x65c52b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c52d:{NFSU2_TR(0x65c52d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c551;}}
}
B65c52f:L65c52f:{c.instructions+=13;NFSU2_TR(0x65c52f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c531:{NFSU2_TR(0x65c531);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B65c534:{NFSU2_TR(0x65c534);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c537:{NFSU2_TR(0x65c537);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c538:{NFSU2_TR(0x65c538);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c53a:{NFSU2_TR(0x65c53a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c53b:{NFSU2_TR(0x65c53b);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c53e:{NFSU2_TR(0x65c53e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c53f:{NFSU2_TR(0x65c53f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c541:{NFSU2_TR(0x65c541);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c544:{NFSU2_TR(0x65c544);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c546:{NFSU2_TR(0x65c546);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c549:{NFSU2_TR(0x65c549);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c54full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65c54f:L65c54f:{c.instructions+=1;NFSU2_TR(0x65c54f);
{goto L65c5a8;}
}
B65c551:L65c551:{c.instructions+=5;NFSU2_TR(0x65c551);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c552:{NFSU2_TR(0x65c552);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c553:{NFSU2_TR(0x65c553);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c554:{NFSU2_TR(0x65c554);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c555:{NFSU2_TR(0x65c555);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c55bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65c55b:L65c55b:{c.instructions+=1;NFSU2_TR(0x65c55b);
{goto L65c5a8;}
}
B65c55d:L65c55d:{c.instructions+=4;NFSU2_TR(0x65c55d);
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
B65c55f:{NFSU2_TR(0x65c55f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c562:{NFSU2_TR(0x65c562);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c564:{NFSU2_TR(0x65c564);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c573;}}
}
B65c566:L65c566:{c.instructions+=6;NFSU2_TR(0x65c566);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c567:{NFSU2_TR(0x65c567);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B65c569:{NFSU2_TR(0x65c569);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B65c56c:{NFSU2_TR(0x65c56c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c56d:{NFSU2_TR(0x65c56d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c56e:{NFSU2_TR(0x65c56e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c571ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65c571:L65c571:{c.instructions+=1;NFSU2_TR(0x65c571);
{goto L65c5a8;}
}
B65c573:L65c573:{c.instructions+=5;NFSU2_TR(0x65c573);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c574:{NFSU2_TR(0x65c574);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c575:{NFSU2_TR(0x65c575);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c576:{NFSU2_TR(0x65c576);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c577:{NFSU2_TR(0x65c577);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c57dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65c57d:L65c57d:{c.instructions+=1;NFSU2_TR(0x65c57d);
{goto L65c5a8;}
}
B65c57f:L65c57f:{c.instructions+=4;NFSU2_TR(0x65c57f);
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
B65c581:{NFSU2_TR(0x65c581);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c584:{NFSU2_TR(0x65c584);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c586:{NFSU2_TR(0x65c586);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c590;}}
}
B65c588:L65c588:{c.instructions+=4;NFSU2_TR(0x65c588);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c589:{NFSU2_TR(0x65c589);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c58a:{NFSU2_TR(0x65c58a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c58b:{NFSU2_TR(0x65c58b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c58eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65c58e:L65c58e:{c.instructions+=1;NFSU2_TR(0x65c58e);
{goto L65c5a8;}
}
B65c590:L65c590:{c.instructions+=5;NFSU2_TR(0x65c590);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c591:{NFSU2_TR(0x65c591);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c592:{NFSU2_TR(0x65c592);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c593:{NFSU2_TR(0x65c593);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c594:{NFSU2_TR(0x65c594);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c597ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65c597:L65c597:{c.instructions+=1;NFSU2_TR(0x65c597);
{goto L65c5a8;}
}
B65c599:L65c599:{c.instructions+=4;NFSU2_TR(0x65c599);
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
B65c59b:{NFSU2_TR(0x65c59b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c59e:{NFSU2_TR(0x65c59e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c5a0:{NFSU2_TR(0x65c5a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c5ac;}}
}
B65c5a2:L65c5a2:{c.instructions+=4;NFSU2_TR(0x65c5a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c5a3:{NFSU2_TR(0x65c5a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c5a4:{NFSU2_TR(0x65c5a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c5a5:{NFSU2_TR(0x65c5a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c5a8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65c5a8:L65c5a8:{c.instructions+=2;NFSU2_TR(0x65c5a8);
__builtin_memmove((R+24),(R+0),4);
}
B65c5aa:{NFSU2_TR(0x65c5aa);
{goto L65c5ba;}
}
B65c5ac:L65c5ac:{c.instructions+=5;NFSU2_TR(0x65c5ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c5ad:{NFSU2_TR(0x65c5ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c5ae:{NFSU2_TR(0x65c5ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c5af:{NFSU2_TR(0x65c5af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c5b0:{NFSU2_TR(0x65c5b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c5b3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65c5b3:L65c5b3:{c.instructions+=1;NFSU2_TR(0x65c5b3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c5a8u);}goto L65c5a8;}
}
B65c5b5:L65c5b5:{c.instructions+=1;NFSU2_TR(0x65c5b5);
w4(R+24,u32(0x80004005ull));
}
B65c5ba:L65c5ba:{c.instructions+=3;NFSU2_TR(0x65c5ba);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65c5bc:{NFSU2_TR(0x65c5bc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c5bf:{NFSU2_TR(0x65c5bf);
if(r1(R+518)){{goto L65c5ca;}}
}
B65c5c1:L65c5c1:{c.instructions+=2;NFSU2_TR(0x65c5c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65c5c4:{NFSU2_TR(0x65c5c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c5c9ull));
TAIL_STATIC(0x575630u,575);
}
B65c5c9:L65c5c9:{c.instructions+=1;NFSU2_TR(0x65c5c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65c5ca:L65c5ca:{c.instructions+=2;NFSU2_TR(0x65c5ca);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65c5cc:{NFSU2_TR(0x65c5cc);
if(r1(R+518)){{goto L65c5d5;}}
}
B65c5ce:L65c5ce:{c.instructions+=2;NFSU2_TR(0x65c5ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c5cf:{NFSU2_TR(0x65c5cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c5d4ull));
TAIL_STATIC(0x575630u,575);
}
B65c5d4:L65c5d4:{c.instructions+=1;NFSU2_TR(0x65c5d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65c5d5:L65c5d5:{c.instructions+=6;NFSU2_TR(0x65c5d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65c5d6:{NFSU2_TR(0x65c5d6);
__builtin_memmove((R+0),(R+24),4);
}
B65c5d8:{NFSU2_TR(0x65c5d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65c5d9:{NFSU2_TR(0x65c5d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65c5da:{NFSU2_TR(0x65c5da);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65c5db:{NFSU2_TR(0x65c5db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65c5de:L65c5de:{c.instructions+=7;NFSU2_TR(0x65c5de);
__builtin_memmove((R+28),(R+28),4);
}
B65c5e0:{NFSU2_TR(0x65c5e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c5e1:{NFSU2_TR(0x65c5e1);
__builtin_memmove((R+20),(R+16),4);
}
B65c5e3:{NFSU2_TR(0x65c5e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65c5e6:{NFSU2_TR(0x65c5e6);
w4(R+8,u32(~u32(r4(R+8))));
}
B65c5e8:{NFSU2_TR(0x65c5e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c5ec:{NFSU2_TR(0x65c5ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c619;}}
}
B65c5ee:L65c5ee:{c.instructions+=3;NFSU2_TR(0x65c5ee);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B65c5f2:{NFSU2_TR(0x65c5f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65c5f8:{NFSU2_TR(0x65c5f8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65c619;}}
}
B65c5fa:L65c5fa:{c.instructions+=6;NFSU2_TR(0x65c5fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c600:{NFSU2_TR(0x65c600);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B65c606:{NFSU2_TR(0x65c606);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B65c608:{NFSU2_TR(0x65c608);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B65c60c:{NFSU2_TR(0x65c60c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65c60f:{NFSU2_TR(0x65c60f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65c619;}}
}
B65c611:L65c611:{c.instructions+=3;NFSU2_TR(0x65c611);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B65c614:{NFSU2_TR(0x65c614);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65c617:{NFSU2_TR(0x65c617);
{goto L65c61b;}
}
B65c619:L65c619:{c.instructions+=1;NFSU2_TR(0x65c619);
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
B65c61b:L65c61b:{c.instructions+=2;NFSU2_TR(0x65c61b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65c61c:{NFSU2_TR(0x65c61c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65c61f:L65c61f:{c.instructions+=9;NFSU2_TR(0x65c61f);
__builtin_memmove((R+28),(R+28),4);
}
B65c621:{NFSU2_TR(0x65c621);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c622:{NFSU2_TR(0x65c622);
__builtin_memmove((R+20),(R+16),4);
}
B65c624:{NFSU2_TR(0x65c624);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c625:{NFSU2_TR(0x65c625);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c628:{NFSU2_TR(0x65c628);
__builtin_memmove((R+8),(R+0),4);
}
B65c62a:{NFSU2_TR(0x65c62a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffull))));
}
B65c630:{NFSU2_TR(0x65c630);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65c632:{NFSU2_TR(0x65c632);
if(r1(R+518)){{goto L65c6e8;}}
}
B65c638:L65c638:{c.instructions+=2;NFSU2_TR(0x65c638);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c63a:{NFSU2_TR(0x65c63a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L65c6d4;}}
}
B65c640:L65c640:{c.instructions+=3;NFSU2_TR(0x65c640);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65c644:{NFSU2_TR(0x65c644);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c64b:{NFSU2_TR(0x65c64b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65c6bb;}}
}
B65c64d:L65c64d:{c.instructions+=5;NFSU2_TR(0x65c64d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c64e:{NFSU2_TR(0x65c64e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65c654:{NFSU2_TR(0x65c654);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c655:{NFSU2_TR(0x65c655);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x28ull))));
}
B65c658:{NFSU2_TR(0x65c658);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c659:L65c659:{c.instructions+=5;NFSU2_TR(0x65c659);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B65c65b:{NFSU2_TR(0x65c65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65c65e:{NFSU2_TR(0x65c65e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B65c660:{NFSU2_TR(0x65c660);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65c663:{NFSU2_TR(0x65c663);
if(r1(R+518)){{goto L65c6a0;}}
}
B65c665:L65c665:{c.instructions+=2;NFSU2_TR(0x65c665);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65c668:{NFSU2_TR(0x65c668);
if(r1(R+518)){{goto L65c6a0;}}
}
B65c66a:L65c66a:{c.instructions+=2;NFSU2_TR(0x65c66a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c66c:{NFSU2_TR(0x65c66c);
if(r1(R+518)){{goto L65c6a4;}}
}
B65c66e:L65c66e:{c.instructions+=1;NFSU2_TR(0x65c66e);
__builtin_memmove((R+24),(R+0),4);
}
B65c670:L65c670:{c.instructions+=4;NFSU2_TR(0x65c670);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+12),(U+0),1);
}
B65c672:{NFSU2_TR(0x65c672);
__builtin_memmove((R+0),(R+12),1);
}
B65c674:{NFSU2_TR(0x65c674);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B65c676:{NFSU2_TR(0x65c676);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c692;}}
}
B65c678:L65c678:{c.instructions+=2;NFSU2_TR(0x65c678);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65c67a:{NFSU2_TR(0x65c67a);
if(r1(R+518)){{goto L65c68e;}}
}
B65c67c:L65c67c:{c.instructions+=4;NFSU2_TR(0x65c67c);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B65c67f:{NFSU2_TR(0x65c67f);
__builtin_memmove((R+0),(R+12),1);
}
B65c681:{NFSU2_TR(0x65c681);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B65c684:{NFSU2_TR(0x65c684);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c692;}}
}
B65c686:L65c686:{c.instructions+=6;NFSU2_TR(0x65c686);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B65c687:{NFSU2_TR(0x65c687);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B65c688:{NFSU2_TR(0x65c688);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65c689:{NFSU2_TR(0x65c689);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65c68a:{NFSU2_TR(0x65c68a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65c68c:{NFSU2_TR(0x65c68c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c670u);}goto L65c670;}}
}
B65c68e:L65c68e:{c.instructions+=2;NFSU2_TR(0x65c68e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65c690:{NFSU2_TR(0x65c690);
{goto L65c697;}
}
B65c692:L65c692:{c.instructions+=2;NFSU2_TR(0x65c692);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+8))<(r4(R+8))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B65c694:{NFSU2_TR(0x65c694);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(u32(0xffffffffull))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B65c697:L65c697:{c.instructions+=2;NFSU2_TR(0x65c697);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c699:{NFSU2_TR(0x65c699);
if(r1(R+518)){{goto L65c6b8;}}
}
B65c69b:L65c69b:{c.instructions+=2;NFSU2_TR(0x65c69b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c69e:{NFSU2_TR(0x65c69e);
{goto L65c6a4;}
}
B65c6a0:L65c6a0:{c.instructions+=2;NFSU2_TR(0x65c6a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c6a2:{NFSU2_TR(0x65c6a2);
if(r1(R+518)){{goto L65c6b8;}}
}
B65c6a4:L65c6a4:{c.instructions+=5;NFSU2_TR(0x65c6a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65c6a7:{NFSU2_TR(0x65c6a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65c6aa:{NFSU2_TR(0x65c6aa);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
}
B65c6b0:{NFSU2_TR(0x65c6b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B65c6b6:{NFSU2_TR(0x65c6b6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c659u);}goto L65c659;}}
}
B65c6b8:L65c6b8:{c.instructions+=3;NFSU2_TR(0x65c6b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65c6b9:{NFSU2_TR(0x65c6b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65c6ba:{NFSU2_TR(0x65c6ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65c6bb:L65c6bb:{c.instructions+=3;NFSU2_TR(0x65c6bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c6be:{NFSU2_TR(0x65c6be);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c6c4:{NFSU2_TR(0x65c6c4);
if(r1(R+518)){{goto L65c6e8;}}
}
B65c6c6:L65c6c6:{c.instructions+=3;NFSU2_TR(0x65c6c6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B65c6cc:{NFSU2_TR(0x65c6cc);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65c6d2:{NFSU2_TR(0x65c6d2);
{goto L65c6ea;}
}
B65c6d4:L65c6d4:{c.instructions+=3;NFSU2_TR(0x65c6d4);
w4(R+0,u32(~u32(r4(R+0))));
}
B65c6d6:{NFSU2_TR(0x65c6d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c6da:{NFSU2_TR(0x65c6da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c6e8;}}
}
B65c6dc:L65c6dc:{c.instructions+=3;NFSU2_TR(0x65c6dc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B65c6e0:{NFSU2_TR(0x65c6e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65c6e6:{NFSU2_TR(0x65c6e6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c6c6u);}goto L65c6c6;}}
}
B65c6e8:L65c6e8:{c.instructions+=1;NFSU2_TR(0x65c6e8);
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
B65c6ea:L65c6ea:{c.instructions+=2;NFSU2_TR(0x65c6ea);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65c6eb:{NFSU2_TR(0x65c6eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65c6ee:L65c6ee:{c.instructions+=7;NFSU2_TR(0x65c6ee);
__builtin_memmove((R+28),(R+28),4);
}
B65c6f0:{NFSU2_TR(0x65c6f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c6f1:{NFSU2_TR(0x65c6f1);
__builtin_memmove((R+20),(R+16),4);
}
B65c6f3:{NFSU2_TR(0x65c6f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c6f6:{NFSU2_TR(0x65c6f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c6f9:{NFSU2_TR(0x65c6f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65c6ff:{NFSU2_TR(0x65c6ff);
if(r1(R+512)){{goto L65c705;}}
}
B65c701:L65c701:{c.instructions+=2;NFSU2_TR(0x65c701);
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
B65c703:{NFSU2_TR(0x65c703);
{goto L65c713;}
}
B65c705:L65c705:{c.instructions+=3;NFSU2_TR(0x65c705);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B65c70b:{NFSU2_TR(0x65c70b);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65c711:{NFSU2_TR(0x65c711);
w4(R+0,u32(~u32(r4(R+0))));
}
B65c713:L65c713:{c.instructions+=2;NFSU2_TR(0x65c713);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65c714:{NFSU2_TR(0x65c714);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65c717:L65c717:{c.instructions+=9;NFSU2_TR(0x65c717);
__builtin_memmove((R+28),(R+28),4);
}
B65c719:{NFSU2_TR(0x65c719);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c71a:{NFSU2_TR(0x65c71a);
__builtin_memmove((R+20),(R+16),4);
}
B65c71c:{NFSU2_TR(0x65c71c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c71d:{NFSU2_TR(0x65c71d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65c721:{NFSU2_TR(0x65c721);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c722:{NFSU2_TR(0x65c722);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65c725:{NFSU2_TR(0x65c725);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c72c:{NFSU2_TR(0x65c72c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65c798;}}
}
B65c72e:L65c72e:{c.instructions+=4;NFSU2_TR(0x65c72e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c72f:{NFSU2_TR(0x65c72f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65c735:{NFSU2_TR(0x65c735);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x28ull))));
}
B65c738:{NFSU2_TR(0x65c738);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c739:L65c739:{c.instructions+=5;NFSU2_TR(0x65c739);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c73b:{NFSU2_TR(0x65c73b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c73e:{NFSU2_TR(0x65c73e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B65c740:{NFSU2_TR(0x65c740);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65c743:{NFSU2_TR(0x65c743);
if(r1(R+518)){{goto L65c77c;}}
}
B65c745:L65c745:{c.instructions+=2;NFSU2_TR(0x65c745);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B65c748:{NFSU2_TR(0x65c748);
if(r1(R+518)){{goto L65c77c;}}
}
B65c74a:L65c74a:{c.instructions+=3;NFSU2_TR(0x65c74a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65c74d:{NFSU2_TR(0x65c74d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c74f:{NFSU2_TR(0x65c74f);
if(r1(R+518)){{goto L65c782;}}
}
B65c751:L65c751:{c.instructions+=4;NFSU2_TR(0x65c751);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B65c753:{NFSU2_TR(0x65c753);
__builtin_memmove((R+8),(R+0),1);
}
B65c755:{NFSU2_TR(0x65c755);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+0))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B65c757:{NFSU2_TR(0x65c757);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c773;}}
}
B65c759:L65c759:{c.instructions+=2;NFSU2_TR(0x65c759);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65c75b:{NFSU2_TR(0x65c75b);
if(r1(R+518)){{goto L65c76f;}}
}
B65c75d:L65c75d:{c.instructions+=4;NFSU2_TR(0x65c75d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B65c760:{NFSU2_TR(0x65c760);
__builtin_memmove((R+8),(R+0),1);
}
B65c762:{NFSU2_TR(0x65c762);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B65c765:{NFSU2_TR(0x65c765);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c773;}}
}
B65c767:L65c767:{c.instructions+=6;NFSU2_TR(0x65c767);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B65c768:{NFSU2_TR(0x65c768);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B65c769:{NFSU2_TR(0x65c769);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65c76a:{NFSU2_TR(0x65c76a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65c76b:{NFSU2_TR(0x65c76b);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65c76d:{NFSU2_TR(0x65c76d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c751u);}goto L65c751;}}
}
B65c76f:L65c76f:{c.instructions+=2;NFSU2_TR(0x65c76f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B65c771:{NFSU2_TR(0x65c771);
{goto L65c778;}
}
B65c773:L65c773:{c.instructions+=2;NFSU2_TR(0x65c773);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+4))<(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B65c775:{NFSU2_TR(0x65c775);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(u32(0xffffffffull))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B65c778:L65c778:{c.instructions+=2;NFSU2_TR(0x65c778);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c77a:{NFSU2_TR(0x65c77a);
{goto L65c780;}
}
B65c77c:L65c77c:{c.instructions+=1;NFSU2_TR(0x65c77c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c780:L65c780:{c.instructions+=1;NFSU2_TR(0x65c780);
if(r1(R+518)){{goto L65c796;}}
}
B65c782:L65c782:{c.instructions+=5;NFSU2_TR(0x65c782);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65c785:{NFSU2_TR(0x65c785);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c788:{NFSU2_TR(0x65c788);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
}
B65c78e:{NFSU2_TR(0x65c78e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65c794:{NFSU2_TR(0x65c794);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c739u);}goto L65c739;}}
}
B65c796:L65c796:{c.instructions+=2;NFSU2_TR(0x65c796);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65c797:{NFSU2_TR(0x65c797);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65c798:L65c798:{c.instructions+=3;NFSU2_TR(0x65c798);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c79b:{NFSU2_TR(0x65c79b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c7a1:{NFSU2_TR(0x65c7a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c7a7;}}
}
B65c7a3:L65c7a3:{c.instructions+=2;NFSU2_TR(0x65c7a3);
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
B65c7a5:{NFSU2_TR(0x65c7a5);
{goto L65c7b5;}
}
B65c7a7:L65c7a7:{c.instructions+=3;NFSU2_TR(0x65c7a7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B65c7ad:{NFSU2_TR(0x65c7ad);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65c7b3:{NFSU2_TR(0x65c7b3);
w4(R+0,u32(~u32(r4(R+0))));
}
B65c7b5:L65c7b5:{c.instructions+=3;NFSU2_TR(0x65c7b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65c7b6:{NFSU2_TR(0x65c7b6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65c7b7:{NFSU2_TR(0x65c7b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65c7ba:L65c7ba:{c.instructions+=7;NFSU2_TR(0x65c7ba);
__builtin_memmove((R+28),(R+28),4);
}
B65c7bc:{NFSU2_TR(0x65c7bc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c7bd:{NFSU2_TR(0x65c7bd);
__builtin_memmove((R+20),(R+16),4);
}
B65c7bf:{NFSU2_TR(0x65c7bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c7c2:{NFSU2_TR(0x65c7c2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c7c4:{NFSU2_TR(0x65c7c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65c7c7:{NFSU2_TR(0x65c7c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c7ccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c61fu);}goto L65c61f;}
}
B65c7cc:L65c7cc:{c.instructions+=2;NFSU2_TR(0x65c7cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c7ce:{NFSU2_TR(0x65c7ce);
if(r1(R+518)){{goto L65c7d8;}}
}
B65c7d0:L65c7d0:{c.instructions+=3;NFSU2_TR(0x65c7d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c7d3:{NFSU2_TR(0x65c7d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B65c7d6:{NFSU2_TR(0x65c7d6);
if(r1(R+512)){{goto L65c7dc;}}
}
B65c7d8:L65c7d8:{c.instructions+=2;NFSU2_TR(0x65c7d8);
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
B65c7da:{NFSU2_TR(0x65c7da);
{goto L65c7e6;}
}
B65c7dc:L65c7dc:{c.instructions+=4;NFSU2_TR(0x65c7dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c7df:{NFSU2_TR(0x65c7df);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B65c7e2:{NFSU2_TR(0x65c7e2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65c7e4:{NFSU2_TR(0x65c7e4);
w4(R+0,u32(~u32(r4(R+0))));
}
B65c7e6:L65c7e6:{c.instructions+=2;NFSU2_TR(0x65c7e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65c7e7:{NFSU2_TR(0x65c7e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65c7ea:L65c7ea:{c.instructions+=8;NFSU2_TR(0x65c7ea);
__builtin_memmove((R+28),(R+28),4);
}
B65c7ec:{NFSU2_TR(0x65c7ec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c7ed:{NFSU2_TR(0x65c7ed);
__builtin_memmove((R+20),(R+16),4);
}
B65c7ef:{NFSU2_TR(0x65c7ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c7f2:{NFSU2_TR(0x65c7f2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c7f3:{NFSU2_TR(0x65c7f3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c7f5:{NFSU2_TR(0x65c7f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65c7f8:{NFSU2_TR(0x65c7f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c7fdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c61fu);}goto L65c61f;}
}
B65c7fd:L65c7fd:{c.instructions+=3;NFSU2_TR(0x65c7fd);
__builtin_memmove((R+12),(R+0),4);
}
B65c7ff:{NFSU2_TR(0x65c7ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c801:{NFSU2_TR(0x65c801);
if(r1(R+518)){{goto L65c87c;}}
}
B65c803:L65c803:{c.instructions+=3;NFSU2_TR(0x65c803);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65c807:{NFSU2_TR(0x65c807);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c80b:{NFSU2_TR(0x65c80b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65c874;}}
}
B65c80d:L65c80d:{c.instructions+=6;NFSU2_TR(0x65c80d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c810:{NFSU2_TR(0x65c810);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c811:{NFSU2_TR(0x65c811);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65c814:{NFSU2_TR(0x65c814);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c817:{NFSU2_TR(0x65c817);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x28ull))));
}
B65c81a:{NFSU2_TR(0x65c81a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c81b:L65c81b:{c.instructions+=5;NFSU2_TR(0x65c81b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65c81d:{NFSU2_TR(0x65c81d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c820:{NFSU2_TR(0x65c820);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B65c822:{NFSU2_TR(0x65c822);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65c825:{NFSU2_TR(0x65c825);
if(r1(R+518)){{goto L65c85e;}}
}
B65c827:L65c827:{c.instructions+=2;NFSU2_TR(0x65c827);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B65c82a:{NFSU2_TR(0x65c82a);
if(r1(R+518)){{goto L65c85e;}}
}
B65c82c:L65c82c:{c.instructions+=3;NFSU2_TR(0x65c82c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65c82f:{NFSU2_TR(0x65c82f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c831:{NFSU2_TR(0x65c831);
if(r1(R+518)){{goto L65c864;}}
}
B65c833:L65c833:{c.instructions+=4;NFSU2_TR(0x65c833);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B65c835:{NFSU2_TR(0x65c835);
__builtin_memmove((R+8),(R+0),1);
}
B65c837:{NFSU2_TR(0x65c837);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+0))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B65c839:{NFSU2_TR(0x65c839);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c855;}}
}
B65c83b:L65c83b:{c.instructions+=2;NFSU2_TR(0x65c83b);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65c83d:{NFSU2_TR(0x65c83d);
if(r1(R+518)){{goto L65c851;}}
}
B65c83f:L65c83f:{c.instructions+=4;NFSU2_TR(0x65c83f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B65c842:{NFSU2_TR(0x65c842);
__builtin_memmove((R+8),(R+0),1);
}
B65c844:{NFSU2_TR(0x65c844);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B65c847:{NFSU2_TR(0x65c847);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c855;}}
}
B65c849:L65c849:{c.instructions+=6;NFSU2_TR(0x65c849);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B65c84a:{NFSU2_TR(0x65c84a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B65c84b:{NFSU2_TR(0x65c84b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65c84c:{NFSU2_TR(0x65c84c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65c84d:{NFSU2_TR(0x65c84d);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65c84f:{NFSU2_TR(0x65c84f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c833u);}goto L65c833;}}
}
B65c851:L65c851:{c.instructions+=2;NFSU2_TR(0x65c851);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B65c853:{NFSU2_TR(0x65c853);
{goto L65c85a;}
}
B65c855:L65c855:{c.instructions+=2;NFSU2_TR(0x65c855);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+4))<(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B65c857:{NFSU2_TR(0x65c857);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(u32(0xffffffffull))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B65c85a:L65c85a:{c.instructions+=2;NFSU2_TR(0x65c85a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65c85c:{NFSU2_TR(0x65c85c);
{goto L65c862;}
}
B65c85e:L65c85e:{c.instructions+=1;NFSU2_TR(0x65c85e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c862:L65c862:{c.instructions+=1;NFSU2_TR(0x65c862);
if(r1(R+518)){{goto L65c872;}}
}
B65c864:L65c864:{c.instructions+=5;NFSU2_TR(0x65c864);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65c867:{NFSU2_TR(0x65c867);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c86a:{NFSU2_TR(0x65c86a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x38ull))));
}
B65c86d:{NFSU2_TR(0x65c86d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65c870:{NFSU2_TR(0x65c870);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c81bu);}goto L65c81b;}}
}
B65c872:L65c872:{c.instructions+=2;NFSU2_TR(0x65c872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65c873:{NFSU2_TR(0x65c873);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65c874:L65c874:{c.instructions+=3;NFSU2_TR(0x65c874);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c877:{NFSU2_TR(0x65c877);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c87a:{NFSU2_TR(0x65c87a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c880;}}
}
B65c87c:L65c87c:{c.instructions+=2;NFSU2_TR(0x65c87c);
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
B65c87e:{NFSU2_TR(0x65c87e);
{goto L65c888;}
}
B65c880:L65c880:{c.instructions+=3;NFSU2_TR(0x65c880);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B65c883:{NFSU2_TR(0x65c883);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65c886:{NFSU2_TR(0x65c886);
w4(R+0,u32(~u32(r4(R+0))));
}
B65c888:L65c888:{c.instructions+=3;NFSU2_TR(0x65c888);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65c889:{NFSU2_TR(0x65c889);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65c88a:{NFSU2_TR(0x65c88a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65c88d:L65c88d:{c.instructions+=13;NFSU2_TR(0x65c88d);
__builtin_memmove((R+28),(R+28),4);
}
B65c88f:{NFSU2_TR(0x65c88f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c890:{NFSU2_TR(0x65c890);
__builtin_memmove((R+20),(R+16),4);
}
B65c892:{NFSU2_TR(0x65c892);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B65c895:{NFSU2_TR(0x65c895);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c896:{NFSU2_TR(0x65c896);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c897:{NFSU2_TR(0x65c897);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65c89a:{NFSU2_TR(0x65c89a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c89b:{NFSU2_TR(0x65c89b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65c8a1:{NFSU2_TR(0x65c8a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65c8a3:{NFSU2_TR(0x65c8a3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65c8a5:{NFSU2_TR(0x65c8a5);
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
B65c8a7:{NFSU2_TR(0x65c8a7);
if(r1(R+518)){{goto L65c8b1;}}
}
B65c8a9:L65c8a9:{c.instructions+=3;NFSU2_TR(0x65c8a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c8ab:{NFSU2_TR(0x65c8ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c8ac:{NFSU2_TR(0x65c8ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c8afull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65c8af:L65c8af:{c.instructions+=1;NFSU2_TR(0x65c8af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B65c8b1:L65c8b1:{c.instructions+=3;NFSU2_TR(0x65c8b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c8b7:{NFSU2_TR(0x65c8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c8ba:{NFSU2_TR(0x65c8ba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65c95b;}}
}
B65c8c0:L65c8c0:{c.instructions+=3;NFSU2_TR(0x65c8c0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65c8c2:{NFSU2_TR(0x65c8c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c8c5:{NFSU2_TR(0x65c8c5);
{goto L65c8ca;}
}
B65c8c7:L65c8c7:{c.instructions+=1;NFSU2_TR(0x65c8c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65c8ca:L65c8ca:{c.instructions+=4;NFSU2_TR(0x65c8ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c8d0:{NFSU2_TR(0x65c8d0);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B65c8d7:{NFSU2_TR(0x65c8d7);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65c8d9:{NFSU2_TR(0x65c8d9);
if(r1(R+518)){{goto L65c8f0;}}
}
B65c8db:L65c8db:{c.instructions+=4;NFSU2_TR(0x65c8db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65c8dd:{NFSU2_TR(0x65c8dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c8df:{NFSU2_TR(0x65c8df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c8e0:{NFSU2_TR(0x65c8e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c8e3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65c8e3:L65c8e3:{c.instructions+=2;NFSU2_TR(0x65c8e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c8e9:{NFSU2_TR(0x65c8e9);
u8 U[16];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B65c8f0:L65c8f0:{c.instructions+=2;NFSU2_TR(0x65c8f0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8cull))));
}
B65c8f6:{NFSU2_TR(0x65c8f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65c8fd:L65c8fd:{c.instructions+=4;NFSU2_TR(0x65c8fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c903:{NFSU2_TR(0x65c903);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B65c907:{NFSU2_TR(0x65c907);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65c909:{NFSU2_TR(0x65c909);
if(r1(R+518)){{goto L65c91d;}}
}
B65c90b:L65c90b:{c.instructions+=4;NFSU2_TR(0x65c90b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65c90d:{NFSU2_TR(0x65c90d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c90f:{NFSU2_TR(0x65c90f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c910:{NFSU2_TR(0x65c910);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c913ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65c913:L65c913:{c.instructions+=2;NFSU2_TR(0x65c913);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c919:{NFSU2_TR(0x65c919);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B65c91d:L65c91d:{c.instructions+=4;NFSU2_TR(0x65c91d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c923:{NFSU2_TR(0x65c923);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B65c925:{NFSU2_TR(0x65c925);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65c927:{NFSU2_TR(0x65c927);
if(r1(R+518)){{goto L65c93a;}}
}
B65c929:L65c929:{c.instructions+=4;NFSU2_TR(0x65c929);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65c92b:{NFSU2_TR(0x65c92b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c92d:{NFSU2_TR(0x65c92d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c92e:{NFSU2_TR(0x65c92e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c931ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65c931:L65c931:{c.instructions+=2;NFSU2_TR(0x65c931);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c937:{NFSU2_TR(0x65c937);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B65c93a:L65c93a:{c.instructions+=3;NFSU2_TR(0x65c93a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B65c93d:{NFSU2_TR(0x65c93d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65c940:{NFSU2_TR(0x65c940);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c8fdu);}goto L65c8fd;}}
}
B65c942:L65c942:{c.instructions+=5;NFSU2_TR(0x65c942);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65c945:{NFSU2_TR(0x65c945);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c948:{NFSU2_TR(0x65c948);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xb4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65c94f:{NFSU2_TR(0x65c94f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65c955:{NFSU2_TR(0x65c955);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c8c7u);}goto L65c8c7;}}
}
B65c95b:L65c95b:{c.instructions+=3;NFSU2_TR(0x65c95b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c95e:{NFSU2_TR(0x65c95e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c961:{NFSU2_TR(0x65c961);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65c9c5;}}
}
B65c963:L65c963:{c.instructions+=1;NFSU2_TR(0x65c963);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65c965:L65c965:{c.instructions+=5;NFSU2_TR(0x65c965);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c968:{NFSU2_TR(0x65c968);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B65c96a:{NFSU2_TR(0x65c96a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c96c:{NFSU2_TR(0x65c96c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65c96f:{NFSU2_TR(0x65c96f);
if(r1(R+518)){{goto L65c985;}}
}
B65c971:L65c971:{c.instructions+=2;NFSU2_TR(0x65c971);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65c974:{NFSU2_TR(0x65c974);
if(r1(R+518)){{goto L65c985;}}
}
B65c976:L65c976:{c.instructions+=2;NFSU2_TR(0x65c976);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65c979:{NFSU2_TR(0x65c979);
if(r1(R+518)){{goto L65c985;}}
}
B65c97b:L65c97b:{c.instructions+=2;NFSU2_TR(0x65c97b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65c97e:{NFSU2_TR(0x65c97e);
if(r1(R+518)){{goto L65c985;}}
}
B65c980:L65c980:{c.instructions+=2;NFSU2_TR(0x65c980);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65c983:{NFSU2_TR(0x65c983);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c9b7;}}
}
B65c985:L65c985:{c.instructions+=2;NFSU2_TR(0x65c985);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65c988:{NFSU2_TR(0x65c988);
if(r1(R+518)){{goto L65c9b7;}}
}
B65c98a:L65c98a:{c.instructions+=7;NFSU2_TR(0x65c98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c98d:{NFSU2_TR(0x65c98d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c98f:{NFSU2_TR(0x65c98f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B65c992:{NFSU2_TR(0x65c992);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c993:{NFSU2_TR(0x65c993);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c994:{NFSU2_TR(0x65c994);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c995:{NFSU2_TR(0x65c995);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c998ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65c998:L65c998:{c.instructions+=2;NFSU2_TR(0x65c998);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c99b:{NFSU2_TR(0x65c99b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65c9b7;}}
}
B65c99d:L65c99d:{c.instructions+=4;NFSU2_TR(0x65c99d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c9a0:{NFSU2_TR(0x65c9a0);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B65c9a4:{NFSU2_TR(0x65c9a4);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B65c9a6:{NFSU2_TR(0x65c9a6);
if(r1(R+518)){{goto L65c9b7;}}
}
B65c9a8:L65c9a8:{c.instructions+=4;NFSU2_TR(0x65c9a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65c9aa:{NFSU2_TR(0x65c9aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c9ac:{NFSU2_TR(0x65c9ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65c9ad:{NFSU2_TR(0x65c9ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65c9b0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65c9b0:L65c9b0:{c.instructions+=2;NFSU2_TR(0x65c9b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c9b3:{NFSU2_TR(0x65c9b3);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B65c9b7:L65c9b7:{c.instructions+=5;NFSU2_TR(0x65c9b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65c9ba:{NFSU2_TR(0x65c9ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c9bd:{NFSU2_TR(0x65c9bd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x18ull))));
}
B65c9c0:{NFSU2_TR(0x65c9c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65c9c3:{NFSU2_TR(0x65c9c3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c965u);}goto L65c965;}}
}
B65c9c5:L65c9c5:{c.instructions+=3;NFSU2_TR(0x65c9c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c9cb:{NFSU2_TR(0x65c9cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c9ce:{NFSU2_TR(0x65c9ce);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65ca71;}}
}
B65c9d4:L65c9d4:{c.instructions+=4;NFSU2_TR(0x65c9d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c9da:{NFSU2_TR(0x65c9da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65c9dd:{NFSU2_TR(0x65c9dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B65c9e0:{NFSU2_TR(0x65c9e0);
{goto L65ca5b;}
}
B65c9e2:L65c9e2:{c.instructions+=3;NFSU2_TR(0x65c9e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65c9e5:{NFSU2_TR(0x65c9e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65c9e8:{NFSU2_TR(0x65c9e8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65ca58;}}
}
B65c9ea:L65c9ea:{c.instructions+=7;NFSU2_TR(0x65c9ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65c9ed:{NFSU2_TR(0x65c9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65c9f0:{NFSU2_TR(0x65c9f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B65c9f3:{NFSU2_TR(0x65c9f3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B65c9f5:{NFSU2_TR(0x65c9f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65c9f7:{NFSU2_TR(0x65c9f7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65c9fa:{NFSU2_TR(0x65c9fa);
if(r1(R+518)){{goto L65ca10;}}
}
B65c9fc:L65c9fc:{c.instructions+=2;NFSU2_TR(0x65c9fc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65c9ff:{NFSU2_TR(0x65c9ff);
if(r1(R+518)){{goto L65ca10;}}
}
B65ca01:L65ca01:{c.instructions+=2;NFSU2_TR(0x65ca01);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ca04:{NFSU2_TR(0x65ca04);
if(r1(R+518)){{goto L65ca10;}}
}
B65ca06:L65ca06:{c.instructions+=2;NFSU2_TR(0x65ca06);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ca09:{NFSU2_TR(0x65ca09);
if(r1(R+518)){{goto L65ca10;}}
}
B65ca0b:L65ca0b:{c.instructions+=2;NFSU2_TR(0x65ca0b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ca0e:{NFSU2_TR(0x65ca0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65ca4b;}}
}
B65ca10:L65ca10:{c.instructions+=2;NFSU2_TR(0x65ca10);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B65ca14:{NFSU2_TR(0x65ca14);
if(r1(R+518)){{goto L65ca4b;}}
}
B65ca16:L65ca16:{c.instructions+=8;NFSU2_TR(0x65ca16);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ca19:{NFSU2_TR(0x65ca19);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B65ca1d:{NFSU2_TR(0x65ca1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ca1f:{NFSU2_TR(0x65ca1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B65ca22:{NFSU2_TR(0x65ca22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ca23:{NFSU2_TR(0x65ca23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ca25:{NFSU2_TR(0x65ca25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ca26:{NFSU2_TR(0x65ca26);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ca29ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ca29:L65ca29:{c.instructions+=2;NFSU2_TR(0x65ca29);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65ca2d:{NFSU2_TR(0x65ca2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65ca4b;}}
}
B65ca2f:L65ca2f:{c.instructions+=3;NFSU2_TR(0x65ca2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ca32:{NFSU2_TR(0x65ca32);
u8 U[30];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(U+22))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+22),u32(0x0ull)));
w4(U+26,u32(u32(r4(U+22))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B65ca37:{NFSU2_TR(0x65ca37);
if(r1(R+518)){{goto L65ca4b;}}
}
B65ca39:L65ca39:{c.instructions+=4;NFSU2_TR(0x65ca39);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B65ca3d:{NFSU2_TR(0x65ca3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ca3f:{NFSU2_TR(0x65ca3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ca40:{NFSU2_TR(0x65ca40);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ca43ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ca43:L65ca43:{c.instructions+=2;NFSU2_TR(0x65ca43);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ca46:{NFSU2_TR(0x65ca46);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B65ca4b:L65ca4b:{c.instructions+=4;NFSU2_TR(0x65ca4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ca4e:{NFSU2_TR(0x65ca4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ca51:{NFSU2_TR(0x65ca51);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65ca54:{NFSU2_TR(0x65ca54);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c9eau);}goto L65c9ea;}}
}
B65ca56:L65ca56:{c.instructions+=1;NFSU2_TR(0x65ca56);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65ca58:L65ca58:{c.instructions+=1;NFSU2_TR(0x65ca58);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65ca5b:L65ca5b:{c.instructions+=2;NFSU2_TR(0x65ca5b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ca5d:{NFSU2_TR(0x65ca5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c9e2u);}goto L65c9e2;}}
}
B65ca5f:L65ca5f:{c.instructions+=4;NFSU2_TR(0x65ca5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ca62:{NFSU2_TR(0x65ca62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ca65:{NFSU2_TR(0x65ca65);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65ca6b:{NFSU2_TR(0x65ca6b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c9d4u);}goto L65c9d4;}}
}
B65ca71:L65ca71:{c.instructions+=2;NFSU2_TR(0x65ca71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65ca77:{NFSU2_TR(0x65ca77);
{goto L65caeb;}
}
B65ca79:L65ca79:{c.instructions+=3;NFSU2_TR(0x65ca79);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65ca7c:{NFSU2_TR(0x65ca7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ca7f:{NFSU2_TR(0x65ca7f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L65cae8;}}
}
B65ca81:L65ca81:{c.instructions+=7;NFSU2_TR(0x65ca81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65ca84:{NFSU2_TR(0x65ca84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ca87:{NFSU2_TR(0x65ca87);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B65ca8a:{NFSU2_TR(0x65ca8a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B65ca8c:{NFSU2_TR(0x65ca8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ca8e:{NFSU2_TR(0x65ca8e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ca91:{NFSU2_TR(0x65ca91);
if(r1(R+518)){{goto L65caa7;}}
}
B65ca93:L65ca93:{c.instructions+=2;NFSU2_TR(0x65ca93);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ca96:{NFSU2_TR(0x65ca96);
if(r1(R+518)){{goto L65caa7;}}
}
B65ca98:L65ca98:{c.instructions+=2;NFSU2_TR(0x65ca98);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ca9b:{NFSU2_TR(0x65ca9b);
if(r1(R+518)){{goto L65caa7;}}
}
B65ca9d:L65ca9d:{c.instructions+=2;NFSU2_TR(0x65ca9d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65caa0:{NFSU2_TR(0x65caa0);
if(r1(R+518)){{goto L65caa7;}}
}
B65caa2:L65caa2:{c.instructions+=2;NFSU2_TR(0x65caa2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65caa5:{NFSU2_TR(0x65caa5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65cadd;}}
}
B65caa7:L65caa7:{c.instructions+=2;NFSU2_TR(0x65caa7);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B65caaa:{NFSU2_TR(0x65caaa);
if(r1(R+518)){{goto L65cadd;}}
}
B65caac:L65caac:{c.instructions+=8;NFSU2_TR(0x65caac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65caaf:{NFSU2_TR(0x65caaf);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B65cab3:{NFSU2_TR(0x65cab3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65cab5:{NFSU2_TR(0x65cab5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B65cab8:{NFSU2_TR(0x65cab8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cab9:{NFSU2_TR(0x65cab9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65caba:{NFSU2_TR(0x65caba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cabb:{NFSU2_TR(0x65cabb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65cabeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65cabe:L65cabe:{c.instructions+=2;NFSU2_TR(0x65cabe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65cac1:{NFSU2_TR(0x65cac1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65cadd;}}
}
B65cac3:L65cac3:{c.instructions+=3;NFSU2_TR(0x65cac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cac6:{NFSU2_TR(0x65cac6);
u8 U[30];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(U+22))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+22),r4(R+12)));
w4(U+26,u32(u32(r4(U+22))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B65caca:{NFSU2_TR(0x65caca);
if(r1(R+518)){{goto L65cadd;}}
}
B65cacc:L65cacc:{c.instructions+=4;NFSU2_TR(0x65cacc);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B65cad0:{NFSU2_TR(0x65cad0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65cad2:{NFSU2_TR(0x65cad2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cad3:{NFSU2_TR(0x65cad3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65cad6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65cad6:L65cad6:{c.instructions+=2;NFSU2_TR(0x65cad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cad9:{NFSU2_TR(0x65cad9);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B65cadd:L65cadd:{c.instructions+=4;NFSU2_TR(0x65cadd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65cae0:{NFSU2_TR(0x65cae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cae3:{NFSU2_TR(0x65cae3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B65cae6:{NFSU2_TR(0x65cae6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ca81u);}goto L65ca81;}}
}
B65cae8:L65cae8:{c.instructions+=1;NFSU2_TR(0x65cae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65caeb:L65caeb:{c.instructions+=2;NFSU2_TR(0x65caeb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65caed:{NFSU2_TR(0x65caed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ca79u);}goto L65ca79;}}
}
B65caef:L65caef:{c.instructions+=6;NFSU2_TR(0x65caef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65caf0:{NFSU2_TR(0x65caf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65caf1:{NFSU2_TR(0x65caf1);
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
B65caf3:{NFSU2_TR(0x65caf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65caf4:{NFSU2_TR(0x65caf4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65caf5:{NFSU2_TR(0x65caf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65caf8:L65caf8:{c.instructions+=8;NFSU2_TR(0x65caf8);
__builtin_memmove((R+28),(R+28),4);
}
B65cafa:{NFSU2_TR(0x65cafa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cafb:{NFSU2_TR(0x65cafb);
__builtin_memmove((R+20),(R+16),4);
}
B65cafd:{NFSU2_TR(0x65cafd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65cb00:{NFSU2_TR(0x65cb00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cb01:{NFSU2_TR(0x65cb01);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65cb03:{NFSU2_TR(0x65cb03);
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
B65cb05:{NFSU2_TR(0x65cb05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65cb0e;}}
}
B65cb07:L65cb07:{c.instructions+=2;NFSU2_TR(0x65cb07);
w4(R+24,u32(0x8876086cull));
}
B65cb0c:{NFSU2_TR(0x65cb0c);
{goto L65cb20;}
}
B65cb0e:L65cb0e:{c.instructions+=5;NFSU2_TR(0x65cb0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cb11:{NFSU2_TR(0x65cb11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cb14:{NFSU2_TR(0x65cb14);
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
B65cb16:{NFSU2_TR(0x65cb16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65cb18:{NFSU2_TR(0x65cb18);
if(r1(R+518)){{goto L65cb20;}}
}
B65cb1a:L65cb1a:{c.instructions+=3;NFSU2_TR(0x65cb1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65cb1c:{NFSU2_TR(0x65cb1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cb1d:{NFSU2_TR(0x65cb1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65cb20ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65cb20:L65cb20:{c.instructions+=4;NFSU2_TR(0x65cb20);
__builtin_memmove((R+0),(R+24),4);
}
B65cb22:{NFSU2_TR(0x65cb22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65cb23:{NFSU2_TR(0x65cb23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65cb24:{NFSU2_TR(0x65cb24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65cb27:L65cb27:{c.instructions+=8;NFSU2_TR(0x65cb27);
__builtin_memmove((R+28),(R+28),4);
}
B65cb29:{NFSU2_TR(0x65cb29);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cb2a:{NFSU2_TR(0x65cb2a);
__builtin_memmove((R+20),(R+16),4);
}
B65cb2c:{NFSU2_TR(0x65cb2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65cb2f:{NFSU2_TR(0x65cb2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cb30:{NFSU2_TR(0x65cb30);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65cb32:{NFSU2_TR(0x65cb32);
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
B65cb34:{NFSU2_TR(0x65cb34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65cb3d;}}
}
B65cb36:L65cb36:{c.instructions+=2;NFSU2_TR(0x65cb36);
w4(R+24,u32(0x8876086cull));
}
B65cb3b:{NFSU2_TR(0x65cb3b);
{goto L65cb4f;}
}
B65cb3d:L65cb3d:{c.instructions+=5;NFSU2_TR(0x65cb3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cb40:{NFSU2_TR(0x65cb40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cb43:{NFSU2_TR(0x65cb43);
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
B65cb45:{NFSU2_TR(0x65cb45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65cb47:{NFSU2_TR(0x65cb47);
if(r1(R+518)){{goto L65cb4f;}}
}
B65cb49:L65cb49:{c.instructions+=3;NFSU2_TR(0x65cb49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65cb4b:{NFSU2_TR(0x65cb4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cb4c:{NFSU2_TR(0x65cb4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65cb4full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65cb4f:L65cb4f:{c.instructions+=4;NFSU2_TR(0x65cb4f);
__builtin_memmove((R+0),(R+24),4);
}
B65cb51:{NFSU2_TR(0x65cb51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65cb52:{NFSU2_TR(0x65cb52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65cb53:{NFSU2_TR(0x65cb53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65cb56:L65cb56:{c.instructions+=7;NFSU2_TR(0x65cb56);
__builtin_memmove((R+28),(R+28),4);
}
B65cb58:{NFSU2_TR(0x65cb58);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cb59:{NFSU2_TR(0x65cb59);
__builtin_memmove((R+20),(R+16),4);
}
B65cb5b:{NFSU2_TR(0x65cb5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65cb5e:{NFSU2_TR(0x65cb5e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65cb60:{NFSU2_TR(0x65cb60);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65cb62:{NFSU2_TR(0x65cb62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65cb6b;}}
}
B65cb64:L65cb64:{c.instructions+=2;NFSU2_TR(0x65cb64);
w4(R+8,u32(0x8876086cull));
}
B65cb69:{NFSU2_TR(0x65cb69);
{goto L65cb96;}
}
B65cb6b:L65cb6b:{c.instructions+=18;NFSU2_TR(0x65cb6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cb6c:{NFSU2_TR(0x65cb6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cb6d:{NFSU2_TR(0x65cb6d);
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
B65cb6f:{NFSU2_TR(0x65cb6f);
__builtin_memmove((R+28),(R+4),4);
}
B65cb71:{NFSU2_TR(0x65cb71);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B65cb72:{NFSU2_TR(0x65cb72);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B65cb73:{NFSU2_TR(0x65cb73);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B65cb74:{NFSU2_TR(0x65cb74);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B65cb75:{NFSU2_TR(0x65cb75);
__builtin_memmove((R+0),gp(0x809164),4);
}
B65cb7a:{NFSU2_TR(0x65cb7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65cb7c:{NFSU2_TR(0x65cb7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cb7f:{NFSU2_TR(0x65cb7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65cb85:{NFSU2_TR(0x65cb85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65cb88:{NFSU2_TR(0x65cb88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cb8e:{NFSU2_TR(0x65cb8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65cb8f:{NFSU2_TR(0x65cb8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65cb92:{NFSU2_TR(0x65cb92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65cb95:{NFSU2_TR(0x65cb95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65cb96:L65cb96:{c.instructions+=3;NFSU2_TR(0x65cb96);
__builtin_memmove((R+0),(R+8),4);
}
B65cb98:{NFSU2_TR(0x65cb98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65cb99:{NFSU2_TR(0x65cb99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65cb9c:L65cb9c:{c.instructions+=9;NFSU2_TR(0x65cb9c);
__builtin_memmove((R+28),(R+28),4);
}
B65cb9e:{NFSU2_TR(0x65cb9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cb9f:{NFSU2_TR(0x65cb9f);
__builtin_memmove((R+20),(R+16),4);
}
B65cba1:{NFSU2_TR(0x65cba1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cba2:{NFSU2_TR(0x65cba2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cba3:{NFSU2_TR(0x65cba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65cba6:{NFSU2_TR(0x65cba6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65cba8:{NFSU2_TR(0x65cba8);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B65cbaa:{NFSU2_TR(0x65cbaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65cbb3;}}
}
B65cbac:L65cbac:{c.instructions+=2;NFSU2_TR(0x65cbac);
w4(R+12,u32(0x8876086cull));
}
B65cbb1:{NFSU2_TR(0x65cbb1);
{goto L65cc08;}
}
B65cbb3:L65cbb3:{c.instructions+=3;NFSU2_TR(0x65cbb3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65cbb6:{NFSU2_TR(0x65cbb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65cbb9:{NFSU2_TR(0x65cbb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65cbcd;}}
}
B65cbbb:L65cbbb:{c.instructions+=4;NFSU2_TR(0x65cbbb);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B65cbbf:{NFSU2_TR(0x65cbbf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B65cbc5:{NFSU2_TR(0x65cbc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B65cbcb:{NFSU2_TR(0x65cbcb);
{goto L65cbdd;}
}
B65cbcd:L65cbcd:{c.instructions+=3;NFSU2_TR(0x65cbcd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cbcf:{NFSU2_TR(0x65cbcf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65cbd2:{NFSU2_TR(0x65cbd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65cbd7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65c61fu);}goto L65c61f;}
}
B65cbd7:L65cbd7:{c.instructions+=3;NFSU2_TR(0x65cbd7);
__builtin_memmove((R+8),(R+0),4);
}
B65cbd9:{NFSU2_TR(0x65cbd9);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B65cbdb:{NFSU2_TR(0x65cbdb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65cbacu);}goto L65cbac;}}
}
B65cbdd:L65cbdd:{c.instructions+=12;NFSU2_TR(0x65cbdd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cbde:{NFSU2_TR(0x65cbde);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65cbe0:{NFSU2_TR(0x65cbe0);
__builtin_memmove((R+28),(R+24),4);
}
B65cbe2:{NFSU2_TR(0x65cbe2);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B65cbe3:{NFSU2_TR(0x65cbe3);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B65cbe4:{NFSU2_TR(0x65cbe4);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B65cbe5:{NFSU2_TR(0x65cbe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cbe8:{NFSU2_TR(0x65cbe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65cbeb:{NFSU2_TR(0x65cbeb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B65cbed:{NFSU2_TR(0x65cbed);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B65cbf0:{NFSU2_TR(0x65cbf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65cbf1:{NFSU2_TR(0x65cbf1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65cbf7;}}
}
B65cbf3:L65cbf3:{c.instructions+=2;NFSU2_TR(0x65cbf3);
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
B65cbf5:{NFSU2_TR(0x65cbf5);
{goto L65cbfa;}
}
B65cbf7:L65cbf7:{c.instructions+=1;NFSU2_TR(0x65cbf7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65cbfa:L65cbfa:{c.instructions+=5;NFSU2_TR(0x65cbfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B65cbfc:{NFSU2_TR(0x65cbfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cbff:{NFSU2_TR(0x65cbff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65cc02:{NFSU2_TR(0x65cc02);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cc05:{NFSU2_TR(0x65cc05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65cc08:L65cc08:{c.instructions+=5;NFSU2_TR(0x65cc08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65cc09:{NFSU2_TR(0x65cc09);
__builtin_memmove((R+0),(R+12),4);
}
B65cc0b:{NFSU2_TR(0x65cc0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65cc0c:{NFSU2_TR(0x65cc0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65cc0d:{NFSU2_TR(0x65cc0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65cc10:L65cc10:{c.instructions+=10;NFSU2_TR(0x65cc10);
__builtin_memmove((R+28),(R+28),4);
}
B65cc12:{NFSU2_TR(0x65cc12);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cc13:{NFSU2_TR(0x65cc13);
__builtin_memmove((R+20),(R+16),4);
}
B65cc15:{NFSU2_TR(0x65cc15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cc18:{NFSU2_TR(0x65cc18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65cc1a:{NFSU2_TR(0x65cc1a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cc1b:{NFSU2_TR(0x65cc1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cc1c:{NFSU2_TR(0x65cc1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cc1d:{NFSU2_TR(0x65cc1d);
__builtin_memmove((R+12),(R+4),4);
}
B65cc1f:{NFSU2_TR(0x65cc1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65cc26;}}
}
B65cc21:L65cc21:{c.instructions+=2;NFSU2_TR(0x65cc21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cc24:{NFSU2_TR(0x65cc24);
{goto L65cc2f;}
}
B65cc26:L65cc26:{c.instructions+=3;NFSU2_TR(0x65cc26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cc29:{NFSU2_TR(0x65cc29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65cc2c:{NFSU2_TR(0x65cc2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65cc2f:L65cc2f:{c.instructions+=6;NFSU2_TR(0x65cc2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65cc32:{NFSU2_TR(0x65cc32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65cc35:{NFSU2_TR(0x65cc35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65cc38:{NFSU2_TR(0x65cc38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B65cc3b:{NFSU2_TR(0x65cc3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65cc3e:{NFSU2_TR(0x65cc3e);
if(r1(R+518)){{goto L65ccbf;}}
}
B65cc40:L65cc40:{c.instructions+=2;NFSU2_TR(0x65cc40);
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
B65cc42:{NFSU2_TR(0x65cc42);
if(r1(R+518)){{goto L65cc4a;}}
}
B65cc44:L65cc44:{c.instructions+=3;NFSU2_TR(0x65cc44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65cc46:{NFSU2_TR(0x65cc46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cc47:{NFSU2_TR(0x65cc47);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65cc4aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65cc4a:L65cc4a:{c.instructions+=3;NFSU2_TR(0x65cc4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cc4d:{NFSU2_TR(0x65cc4d);
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
B65cc4f:{NFSU2_TR(0x65cc4f);
if(r1(R+518)){{goto L65cc5b;}}
}
B65cc51:L65cc51:{c.instructions+=3;NFSU2_TR(0x65cc51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65cc53:{NFSU2_TR(0x65cc53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cc54:{NFSU2_TR(0x65cc54);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65cc57ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65cc57:L65cc57:{c.instructions+=1;NFSU2_TR(0x65cc57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65cc5b:L65cc5b:{c.instructions+=6;NFSU2_TR(0x65cc5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65cc5f:{NFSU2_TR(0x65cc5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cc62:{NFSU2_TR(0x65cc62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65cc65:{NFSU2_TR(0x65cc65);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65cc6c:{NFSU2_TR(0x65cc6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65cc6e:{NFSU2_TR(0x65cc6e);
if(r1(R+518)){{goto L65ccbf;}}
}
B65cc70:L65cc70:{c.instructions+=3;NFSU2_TR(0x65cc70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65cc73:{NFSU2_TR(0x65cc73);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65cc75:{NFSU2_TR(0x65cc75);
if(r1(R+518)){{goto L65ccbf;}}
}
B65cc77:L65cc77:{c.instructions+=3;NFSU2_TR(0x65cc77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65cc79:{NFSU2_TR(0x65cc79);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65cc7b:{NFSU2_TR(0x65cc7b);
if(r1(R+518)){{goto L65ccb7;}}
}
B65cc7d:L65cc7d:{c.instructions+=9;NFSU2_TR(0x65cc7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cc80:{NFSU2_TR(0x65cc80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65cc83:{NFSU2_TR(0x65cc83);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65cc86:{NFSU2_TR(0x65cc86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65cc89:{NFSU2_TR(0x65cc89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65cc8c:{NFSU2_TR(0x65cc8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B65cc8f:{NFSU2_TR(0x65cc8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cc92:{NFSU2_TR(0x65cc92);
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
B65cc94:{NFSU2_TR(0x65cc94);
if(r1(R+518)){{goto L65cc9c;}}
}
B65cc96:L65cc96:{c.instructions+=3;NFSU2_TR(0x65cc96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65cc98:{NFSU2_TR(0x65cc98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cc99:{NFSU2_TR(0x65cc99);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65cc9cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65cc9c:L65cc9c:{c.instructions+=3;NFSU2_TR(0x65cc9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cc9f:{NFSU2_TR(0x65cc9f);
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
B65cca1:{NFSU2_TR(0x65cca1);
if(r1(R+518)){{goto L65ccad;}}
}
B65cca3:L65cca3:{c.instructions+=3;NFSU2_TR(0x65cca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65cca5:{NFSU2_TR(0x65cca5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cca6:{NFSU2_TR(0x65cca6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65cca9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65cca9:L65cca9:{c.instructions+=1;NFSU2_TR(0x65cca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ccad:L65ccad:{c.instructions+=3;NFSU2_TR(0x65ccad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ccb0:{NFSU2_TR(0x65ccb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ccb4:{NFSU2_TR(0x65ccb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ccb7:L65ccb7:{c.instructions+=3;NFSU2_TR(0x65ccb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65ccba:{NFSU2_TR(0x65ccba);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65ccbd:{NFSU2_TR(0x65ccbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65cc77u);}goto L65cc77;}}
}
B65ccbf:L65ccbf:{c.instructions+=6;NFSU2_TR(0x65ccbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65ccc0:{NFSU2_TR(0x65ccc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65ccc1:{NFSU2_TR(0x65ccc1);
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
B65ccc3:{NFSU2_TR(0x65ccc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65ccc4:{NFSU2_TR(0x65ccc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65ccc5:{NFSU2_TR(0x65ccc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65ccc8:L65ccc8:{c.instructions+=9;NFSU2_TR(0x65ccc8);
__builtin_memmove((R+28),(R+28),4);
}
B65ccca:{NFSU2_TR(0x65ccca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cccb:{NFSU2_TR(0x65cccb);
__builtin_memmove((R+20),(R+16),4);
}
B65cccd:{NFSU2_TR(0x65cccd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ccce:{NFSU2_TR(0x65ccce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cccf:{NFSU2_TR(0x65cccf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ccd0:{NFSU2_TR(0x65ccd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65ccd3:{NFSU2_TR(0x65ccd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ccd5:{NFSU2_TR(0x65ccd5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65ccdc;}}
}
B65ccd7:L65ccd7:{c.instructions+=2;NFSU2_TR(0x65ccd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ccda:{NFSU2_TR(0x65ccda);
{goto L65cce5;}
}
B65ccdc:L65ccdc:{c.instructions+=3;NFSU2_TR(0x65ccdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ccdf:{NFSU2_TR(0x65ccdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65cce2:{NFSU2_TR(0x65cce2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65cce5:L65cce5:{c.instructions+=6;NFSU2_TR(0x65cce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65cce8:{NFSU2_TR(0x65cce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65cceb:{NFSU2_TR(0x65cceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65ccee:{NFSU2_TR(0x65ccee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B65ccf1:{NFSU2_TR(0x65ccf1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65ccf4:{NFSU2_TR(0x65ccf4);
if(r1(R+518)){{goto L65cd63;}}
}
B65ccf6:L65ccf6:{c.instructions+=2;NFSU2_TR(0x65ccf6);
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
B65ccf8:{NFSU2_TR(0x65ccf8);
if(r1(R+518)){{goto L65cd00;}}
}
B65ccfa:L65ccfa:{c.instructions+=3;NFSU2_TR(0x65ccfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65ccfc:{NFSU2_TR(0x65ccfc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ccfd:{NFSU2_TR(0x65ccfd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65cd00ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65cd00:L65cd00:{c.instructions+=3;NFSU2_TR(0x65cd00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cd03:{NFSU2_TR(0x65cd03);
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
B65cd05:{NFSU2_TR(0x65cd05);
if(r1(R+518)){{goto L65cd11;}}
}
B65cd07:L65cd07:{c.instructions+=3;NFSU2_TR(0x65cd07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65cd09:{NFSU2_TR(0x65cd09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cd0a:{NFSU2_TR(0x65cd0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65cd0dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65cd0d:L65cd0d:{c.instructions+=1;NFSU2_TR(0x65cd0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65cd11:L65cd11:{c.instructions+=3;NFSU2_TR(0x65cd11);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65cd13:{NFSU2_TR(0x65cd13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65cd16:{NFSU2_TR(0x65cd16);
if(r1(R+518)){{goto L65cd63;}}
}
B65cd18:L65cd18:{c.instructions+=2;NFSU2_TR(0x65cd18);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65cd1b:{NFSU2_TR(0x65cd1b);
{goto L65cd5f;}
}
B65cd1d:L65cd1d:{c.instructions+=3;NFSU2_TR(0x65cd1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65cd1f:{NFSU2_TR(0x65cd1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65cd21:{NFSU2_TR(0x65cd21);
if(r1(R+518)){{goto L65cd5c;}}
}
B65cd23:L65cd23:{c.instructions+=9;NFSU2_TR(0x65cd23);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cd26:{NFSU2_TR(0x65cd26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65cd29:{NFSU2_TR(0x65cd29);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65cd2c:{NFSU2_TR(0x65cd2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65cd2f:{NFSU2_TR(0x65cd2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65cd32:{NFSU2_TR(0x65cd32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B65cd35:{NFSU2_TR(0x65cd35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cd38:{NFSU2_TR(0x65cd38);
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
B65cd3a:{NFSU2_TR(0x65cd3a);
if(r1(R+518)){{goto L65cd42;}}
}
B65cd3c:L65cd3c:{c.instructions+=3;NFSU2_TR(0x65cd3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65cd3e:{NFSU2_TR(0x65cd3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cd3f:{NFSU2_TR(0x65cd3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65cd42ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65cd42:L65cd42:{c.instructions+=3;NFSU2_TR(0x65cd42);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cd45:{NFSU2_TR(0x65cd45);
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
B65cd47:{NFSU2_TR(0x65cd47);
if(r1(R+518)){{goto L65cd53;}}
}
B65cd49:L65cd49:{c.instructions+=3;NFSU2_TR(0x65cd49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65cd4b:{NFSU2_TR(0x65cd4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cd4c:{NFSU2_TR(0x65cd4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65cd4full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65cd4f:L65cd4f:{c.instructions+=1;NFSU2_TR(0x65cd4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65cd53:L65cd53:{c.instructions+=3;NFSU2_TR(0x65cd53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cd56:{NFSU2_TR(0x65cd56);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65cd59:{NFSU2_TR(0x65cd59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65cd5c:L65cd5c:{c.instructions+=1;NFSU2_TR(0x65cd5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65cd5f:L65cd5f:{c.instructions+=2;NFSU2_TR(0x65cd5f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65cd61:{NFSU2_TR(0x65cd61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65cd1du);}goto L65cd1d;}}
}
B65cd63:L65cd63:{c.instructions+=6;NFSU2_TR(0x65cd63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65cd64:{NFSU2_TR(0x65cd64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65cd65:{NFSU2_TR(0x65cd65);
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
B65cd67:{NFSU2_TR(0x65cd67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65cd68:{NFSU2_TR(0x65cd68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65cd69:{NFSU2_TR(0x65cd69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65cd6c:L65cd6c:{c.instructions+=13;NFSU2_TR(0x65cd6c);
__builtin_memmove((R+28),(R+28),4);
}
B65cd6e:{NFSU2_TR(0x65cd6e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cd6f:{NFSU2_TR(0x65cd6f);
__builtin_memmove((R+20),(R+16),4);
}
B65cd71:{NFSU2_TR(0x65cd71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B65cd74:{NFSU2_TR(0x65cd74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cd77:{NFSU2_TR(0x65cd77);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cd78:{NFSU2_TR(0x65cd78);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B65cd7a:{NFSU2_TR(0x65cd7a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65cd7c:{NFSU2_TR(0x65cd7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cd7d:{NFSU2_TR(0x65cd7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cd7e:{NFSU2_TR(0x65cd7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65cd81:{NFSU2_TR(0x65cd81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65cd84:{NFSU2_TR(0x65cd84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65cd8b;}}
}
B65cd86:L65cd86:{c.instructions+=2;NFSU2_TR(0x65cd86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cd89:{NFSU2_TR(0x65cd89);
{goto L65cd94;}
}
B65cd8b:L65cd8b:{c.instructions+=3;NFSU2_TR(0x65cd8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cd8e:{NFSU2_TR(0x65cd8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65cd91:{NFSU2_TR(0x65cd91);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65cd94:L65cd94:{c.instructions+=5;NFSU2_TR(0x65cd94);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65cd97:{NFSU2_TR(0x65cd97);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65cd9a:{NFSU2_TR(0x65cd9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65cd9d:{NFSU2_TR(0x65cd9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B65cda0:{NFSU2_TR(0x65cda0);
if(r1(R+518)){{goto L65ce1b;}}
}
B65cda2:L65cda2:{c.instructions+=2;NFSU2_TR(0x65cda2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cda5:{NFSU2_TR(0x65cda5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65cda8:L65cda8:{c.instructions+=4;NFSU2_TR(0x65cda8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B65cdaa:{NFSU2_TR(0x65cdaa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65cdab:{NFSU2_TR(0x65cdab);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65cdad:{NFSU2_TR(0x65cdad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65cda8u);}goto L65cda8;}}
}
B65cdaf:L65cdaf:{c.instructions+=6;NFSU2_TR(0x65cdaf);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B65cdb1:{NFSU2_TR(0x65cdb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65cdb4:{NFSU2_TR(0x65cdb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cdb7:{NFSU2_TR(0x65cdb7);
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
B65cdb9:{NFSU2_TR(0x65cdb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65cdbc:{NFSU2_TR(0x65cdbc);
if(r1(R+518)){{goto L65cdda;}}
}
B65cdbe:L65cdbe:{c.instructions+=3;NFSU2_TR(0x65cdbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65cdc0:{NFSU2_TR(0x65cdc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cdc1:{NFSU2_TR(0x65cdc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65cdc4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65cdc4:L65cdc4:{c.instructions+=2;NFSU2_TR(0x65cdc4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B65cdc6:{NFSU2_TR(0x65cdc6);
if(r1(R+512)){{goto L65cdda;}}
}
B65cdc8:L65cdc8:{c.instructions+=4;NFSU2_TR(0x65cdc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cdcb:{NFSU2_TR(0x65cdcb);
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
B65cdcd:{NFSU2_TR(0x65cdcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65cdd0:{NFSU2_TR(0x65cdd0);
if(r1(R+518)){{goto L65cdf2;}}
}
B65cdd2:L65cdd2:{c.instructions+=3;NFSU2_TR(0x65cdd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65cdd4:{NFSU2_TR(0x65cdd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cdd5:{NFSU2_TR(0x65cdd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65cdd8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65cdd8:L65cdd8:{c.instructions+=1;NFSU2_TR(0x65cdd8);
{goto L65cdef;}
}
B65cdda:L65cdda:{c.instructions+=4;NFSU2_TR(0x65cdda);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B65cddd:{NFSU2_TR(0x65cddd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cdde:{NFSU2_TR(0x65cdde);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cddf:{NFSU2_TR(0x65cddf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65cde4ull));
TAIL_STATIC(0x670f08u,670);
}
B65cde4:L65cde4:{c.instructions+=3;NFSU2_TR(0x65cde4);
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
B65cde6:{NFSU2_TR(0x65cde6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65cde9:{NFSU2_TR(0x65cde9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65ce84;}}
}
B65cdef:L65cdef:{c.instructions+=1;NFSU2_TR(0x65cdef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cdf2:L65cdf2:{c.instructions+=4;NFSU2_TR(0x65cdf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65cdf4:{NFSU2_TR(0x65cdf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65cdf7:{NFSU2_TR(0x65cdf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cdf8:{NFSU2_TR(0x65cdf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65cdfbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65cdfb:L65cdfb:{c.instructions+=4;NFSU2_TR(0x65cdfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65cdfe:{NFSU2_TR(0x65cdfe);
__builtin_memmove((R+28),(R+0),4);
}
B65ce00:{NFSU2_TR(0x65ce00);
__builtin_memmove((R+0),(R+4),4);
}
B65ce02:{NFSU2_TR(0x65ce02);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65ce05:L65ce05:{c.instructions+=1;NFSU2_TR(0x65ce05);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L65ce07;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ce05u);}goto L65ce05;}
}
B65ce07:L65ce07:{c.instructions+=2;NFSU2_TR(0x65ce07);
__builtin_memmove((R+4),(R+0),4);
}
B65ce09:{NFSU2_TR(0x65ce09);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65ce0c:L65ce0c:{c.instructions+=1;NFSU2_TR(0x65ce0c);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65ce0e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ce0cu);}goto L65ce0c;}
}
B65ce0e:L65ce0e:{c.instructions+=3;NFSU2_TR(0x65ce0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ce11:{NFSU2_TR(0x65ce11);
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
B65ce13:{NFSU2_TR(0x65ce13);
if(r1(R+518)){{goto L65ce1b;}}
}
B65ce15:L65ce15:{c.instructions+=3;NFSU2_TR(0x65ce15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ce17:{NFSU2_TR(0x65ce17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ce18:{NFSU2_TR(0x65ce18);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ce1bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ce1b:L65ce1b:{c.instructions+=3;NFSU2_TR(0x65ce1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ce1e:{NFSU2_TR(0x65ce1e);
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
B65ce20:{NFSU2_TR(0x65ce20);
if(r1(R+518)){{goto L65ce2c;}}
}
B65ce22:L65ce22:{c.instructions+=3;NFSU2_TR(0x65ce22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ce24:{NFSU2_TR(0x65ce24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ce25:{NFSU2_TR(0x65ce25);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ce28ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ce28:L65ce28:{c.instructions+=1;NFSU2_TR(0x65ce28);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ce2c:L65ce2c:{c.instructions+=5;NFSU2_TR(0x65ce2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ce2f:{NFSU2_TR(0x65ce2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ce32:{NFSU2_TR(0x65ce32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ce35:{NFSU2_TR(0x65ce35);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ce37:{NFSU2_TR(0x65ce37);
if(r1(R+518)){{goto L65ce84;}}
}
B65ce39:L65ce39:{c.instructions+=3;NFSU2_TR(0x65ce39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65ce3c:{NFSU2_TR(0x65ce3c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65ce3e:{NFSU2_TR(0x65ce3e);
if(r1(R+518)){{goto L65ce84;}}
}
B65ce40:L65ce40:{c.instructions+=3;NFSU2_TR(0x65ce40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ce42:{NFSU2_TR(0x65ce42);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65ce44:{NFSU2_TR(0x65ce44);
if(r1(R+518)){{goto L65ce7c;}}
}
B65ce46:L65ce46:{c.instructions+=9;NFSU2_TR(0x65ce46);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ce49:{NFSU2_TR(0x65ce49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65ce4c:{NFSU2_TR(0x65ce4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B65ce4f:{NFSU2_TR(0x65ce4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ce52:{NFSU2_TR(0x65ce52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65ce55:{NFSU2_TR(0x65ce55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B65ce58:{NFSU2_TR(0x65ce58);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ce5b:{NFSU2_TR(0x65ce5b);
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
B65ce5d:{NFSU2_TR(0x65ce5d);
if(r1(R+518)){{goto L65ce65;}}
}
B65ce5f:L65ce5f:{c.instructions+=3;NFSU2_TR(0x65ce5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ce61:{NFSU2_TR(0x65ce61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ce62:{NFSU2_TR(0x65ce62);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ce65ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ce65:L65ce65:{c.instructions+=3;NFSU2_TR(0x65ce65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ce68:{NFSU2_TR(0x65ce68);
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
B65ce6a:{NFSU2_TR(0x65ce6a);
if(r1(R+518)){{goto L65ce76;}}
}
B65ce6c:L65ce6c:{c.instructions+=3;NFSU2_TR(0x65ce6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ce6e:{NFSU2_TR(0x65ce6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ce6f:{NFSU2_TR(0x65ce6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ce72ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ce72:L65ce72:{c.instructions+=1;NFSU2_TR(0x65ce72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65ce76:L65ce76:{c.instructions+=2;NFSU2_TR(0x65ce76);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ce79:{NFSU2_TR(0x65ce79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65ce7c:L65ce7c:{c.instructions+=3;NFSU2_TR(0x65ce7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65ce7f:{NFSU2_TR(0x65ce7f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65ce82:{NFSU2_TR(0x65ce82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65ce40u);}goto L65ce40;}}
}
B65ce84:L65ce84:{c.instructions+=6;NFSU2_TR(0x65ce84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ce87:{NFSU2_TR(0x65ce87);
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
B65ce89:{NFSU2_TR(0x65ce89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65ce8a:{NFSU2_TR(0x65ce8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65ce8b:{NFSU2_TR(0x65ce8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65ce8c:{NFSU2_TR(0x65ce8c);
if(r1(R+518)){{goto L65ce94;}}
}
B65ce8e:L65ce8e:{c.instructions+=3;NFSU2_TR(0x65ce8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B65ce90:{NFSU2_TR(0x65ce90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ce91:{NFSU2_TR(0x65ce91);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ce94ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65ce94:L65ce94:{c.instructions+=3;NFSU2_TR(0x65ce94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ce97:{NFSU2_TR(0x65ce97);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B65ce98:{NFSU2_TR(0x65ce98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65ce9b:L65ce9b:{c.instructions+=9;NFSU2_TR(0x65ce9b);
__builtin_memmove((R+28),(R+28),4);
}
B65ce9d:{NFSU2_TR(0x65ce9d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65ce9e:{NFSU2_TR(0x65ce9e);
__builtin_memmove((R+20),(R+16),4);
}
B65cea0:{NFSU2_TR(0x65cea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cea3:{NFSU2_TR(0x65cea3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65cea5:{NFSU2_TR(0x65cea5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65cea6:{NFSU2_TR(0x65cea6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cea7:{NFSU2_TR(0x65cea7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cea8:{NFSU2_TR(0x65cea8);
if(r1(R+518)){{goto L65cef9;}}
}
B65ceaa:L65ceaa:{c.instructions+=2;NFSU2_TR(0x65ceaa);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65ceab:{NFSU2_TR(0x65ceab);
if(r1(R+518)){{goto L65ced3;}}
}
B65cead:L65cead:{c.instructions+=2;NFSU2_TR(0x65cead);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65ceae:{NFSU2_TR(0x65ceae);
if(r1(R+518)){{goto L65ceb7;}}
}
B65ceb0:L65ceb0:{c.instructions+=2;NFSU2_TR(0x65ceb0);
w4(R+0,u32(0x8876086cull));
}
B65ceb5:{NFSU2_TR(0x65ceb5);
{goto L65cf2e;}
}
B65ceb7:L65ceb7:{c.instructions+=6;NFSU2_TR(0x65ceb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65ceba:{NFSU2_TR(0x65ceba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65cebd:{NFSU2_TR(0x65cebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65cec0:{NFSU2_TR(0x65cec0);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B65cec3:{NFSU2_TR(0x65cec3);
__builtin_memmove((R+0),(R+4),4);
}
B65cec5:{NFSU2_TR(0x65cec5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B65cec8:L65cec8:{c.instructions+=1;NFSU2_TR(0x65cec8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L65ceca;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65cec8u);}goto L65cec8;}
}
B65ceca:L65ceca:{c.instructions+=2;NFSU2_TR(0x65ceca);
__builtin_memmove((R+4),(R+0),4);
}
B65cecc:{NFSU2_TR(0x65cecc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B65cecf:L65cecf:{c.instructions+=1;NFSU2_TR(0x65cecf);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65ced1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65cecfu);}goto L65cecf;}
}
B65ced1:L65ced1:{c.instructions+=1;NFSU2_TR(0x65ced1);
{goto L65cf2c;}
}
B65ced3:L65ced3:{c.instructions+=4;NFSU2_TR(0x65ced3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65ced6:{NFSU2_TR(0x65ced6);
u8 U[9];
w4(U+5,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+0))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B65ced9:{NFSU2_TR(0x65ced9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65cedc:{NFSU2_TR(0x65cedc);
if(r1(R+518)){{goto L65cf2c;}}
}
B65cede:L65cede:{c.instructions+=4;NFSU2_TR(0x65cede);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65cee1:{NFSU2_TR(0x65cee1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cee2:{NFSU2_TR(0x65cee2);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B65cee4:{NFSU2_TR(0x65cee4);
__builtin_memmove((R+12),(R+0),4);
}
B65cee6:L65cee6:{c.instructions+=2;NFSU2_TR(0x65cee6);
{u32 ea_=u32(r4(R+28)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65cee9:{NFSU2_TR(0x65cee9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65ceeeull));
TAIL_STATIC(0x75dd28u,75d);
}
B65ceee:L65ceee:{c.instructions+=4;NFSU2_TR(0x65ceee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B65cef0:{NFSU2_TR(0x65cef0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B65cef3:{NFSU2_TR(0x65cef3);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B65cef4:{NFSU2_TR(0x65cef4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65cee6u);}goto L65cee6;}}
}
B65cef6:L65cef6:{c.instructions+=2;NFSU2_TR(0x65cef6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65cef7:{NFSU2_TR(0x65cef7);
{goto L65cf2c;}
}
B65cef9:L65cef9:{c.instructions+=4;NFSU2_TR(0x65cef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cefc:{NFSU2_TR(0x65cefc);
u8 U[9];
w4(U+5,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+0))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B65ceff:{NFSU2_TR(0x65ceff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65cf02:{NFSU2_TR(0x65cf02);
if(r1(R+518)){{goto L65cf2c;}}
}
B65cf04:L65cf04:{c.instructions+=3;NFSU2_TR(0x65cf04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65cf07:{NFSU2_TR(0x65cf07);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B65cf09:{NFSU2_TR(0x65cf09);
__builtin_memmove((R+24),(R+0),4);
}
B65cf0b:L65cf0b:{c.instructions+=6;NFSU2_TR(0x65cf0b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65cf0d:{NFSU2_TR(0x65cf0d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65cf13:{NFSU2_TR(0x65cf13);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B65cf15:{NFSU2_TR(0x65cf15);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B65cf17:{NFSU2_TR(0x65cf17);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B65cf1a:{NFSU2_TR(0x65cf1a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L65cf21;}}
}
B65cf1c:L65cf1c:{c.instructions+=3;NFSU2_TR(0x65cf1c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65cf1e:{NFSU2_TR(0x65cf1e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65cf1f:{NFSU2_TR(0x65cf1f);
{goto L65cf23;}
}
B65cf21:L65cf21:{c.instructions+=1;NFSU2_TR(0x65cf21);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65cf23:L65cf23:{c.instructions+=4;NFSU2_TR(0x65cf23);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B65cf26:{NFSU2_TR(0x65cf26);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B65cf29:{NFSU2_TR(0x65cf29);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B65cf2a:{NFSU2_TR(0x65cf2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65cf0bu);}goto L65cf0b;}}
}
B65cf2c:L65cf2c:{c.instructions+=1;NFSU2_TR(0x65cf2c);
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
B65cf2e:L65cf2e:{c.instructions+=4;NFSU2_TR(0x65cf2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65cf2f:{NFSU2_TR(0x65cf2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65cf30:{NFSU2_TR(0x65cf30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65cf31:{NFSU2_TR(0x65cf31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65cf34:L65cf34:{c.instructions+=13;NFSU2_TR(0x65cf34);
__builtin_memmove((R+28),(R+28),4);
}
B65cf36:{NFSU2_TR(0x65cf36);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cf37:{NFSU2_TR(0x65cf37);
__builtin_memmove((R+20),(R+16),4);
}
B65cf39:{NFSU2_TR(0x65cf39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65cf3c:{NFSU2_TR(0x65cf3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cf3f:{NFSU2_TR(0x65cf3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65cf41:{NFSU2_TR(0x65cf41);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65cf42:{NFSU2_TR(0x65cf42);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cf43:{NFSU2_TR(0x65cf43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cf44:{NFSU2_TR(0x65cf44);
__builtin_memmove((R+12),(R+4),4);
}
B65cf46:{NFSU2_TR(0x65cf46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cf47:{NFSU2_TR(0x65cf47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65cf4a:{NFSU2_TR(0x65cf4a);
if(r1(R+518)){{goto L65cfb7;}}
}
B65cf4c:L65cf4c:{c.instructions+=2;NFSU2_TR(0x65cf4c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65cf4d:{NFSU2_TR(0x65cf4d);
if(r1(R+518)){{goto L65cf89;}}
}
B65cf4f:L65cf4f:{c.instructions+=2;NFSU2_TR(0x65cf4f);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65cf50:{NFSU2_TR(0x65cf50);
if(r1(R+518)){{goto L65cf5c;}}
}
B65cf52:L65cf52:{c.instructions+=2;NFSU2_TR(0x65cf52);
w4(R+0,u32(0x80004005ull));
}
B65cf57:{NFSU2_TR(0x65cf57);
{goto L65cfef;}
}
B65cf5c:L65cf5c:{c.instructions+=5;NFSU2_TR(0x65cf5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cf5f:{NFSU2_TR(0x65cf5f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cf61:{NFSU2_TR(0x65cf61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65cf62:{NFSU2_TR(0x65cf62);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B65cf65:{NFSU2_TR(0x65cf65);
__builtin_memmove((R+8),(R+24),4);
}
B65cf67:L65cf67:{c.instructions+=15;NFSU2_TR(0x65cf67);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65cf6a:{NFSU2_TR(0x65cf6a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65cf6c:{NFSU2_TR(0x65cf6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65cf6f:{NFSU2_TR(0x65cf6f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B65cf71:{NFSU2_TR(0x65cf71);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65cf73:{NFSU2_TR(0x65cf73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B65cf75:{NFSU2_TR(0x65cf75);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B65cf77:{NFSU2_TR(0x65cf77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65cf79:{NFSU2_TR(0x65cf79);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65cf7c:{NFSU2_TR(0x65cf7c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B65cf7e:{NFSU2_TR(0x65cf7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B65cf80:{NFSU2_TR(0x65cf80);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B65cf82:{NFSU2_TR(0x65cf82);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B65cf84:{NFSU2_TR(0x65cf84);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65cf85:{NFSU2_TR(0x65cf85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65cf67u);}goto L65cf67;}}
}
B65cf87:L65cf87:{c.instructions+=1;NFSU2_TR(0x65cf87);
{goto L65cfed;}
}
B65cf89:L65cf89:{c.instructions+=4;NFSU2_TR(0x65cf89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65cf8c:{NFSU2_TR(0x65cf8c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cf8e:{NFSU2_TR(0x65cf8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65cf8f:{NFSU2_TR(0x65cf8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65cf92:L65cf92:{c.instructions+=2;NFSU2_TR(0x65cf92);
__builtin_memmove((R+28),(R+12),4);
}
B65cf94:{NFSU2_TR(0x65cf94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65cf97:L65cf97:{c.instructions+=3;NFSU2_TR(0x65cf97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65cf9a:{NFSU2_TR(0x65cf9a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65cf9c:{NFSU2_TR(0x65cf9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65cfa1ull));
TAIL_STATIC(0x75dd28u,75d);
}
B65cfa1:L65cfa1:{c.instructions+=5;NFSU2_TR(0x65cfa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B65cfa4:{NFSU2_TR(0x65cfa4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B65cfa6:{NFSU2_TR(0x65cfa6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B65cfa9:{NFSU2_TR(0x65cfa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65cfac:{NFSU2_TR(0x65cfac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65cf97u);}goto L65cf97;}}
}
B65cfae:L65cfae:{c.instructions+=3;NFSU2_TR(0x65cfae);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B65cfb0:{NFSU2_TR(0x65cfb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65cfb3:{NFSU2_TR(0x65cfb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65cf92u);}goto L65cf92;}}
}
B65cfb5:L65cfb5:{c.instructions+=1;NFSU2_TR(0x65cfb5);
{goto L65cfed;}
}
B65cfb7:L65cfb7:{c.instructions+=4;NFSU2_TR(0x65cfb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65cfba:{NFSU2_TR(0x65cfba);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cfbc:{NFSU2_TR(0x65cfbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65cfbd:{NFSU2_TR(0x65cfbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65cfc0:L65cfc0:{c.instructions+=2;NFSU2_TR(0x65cfc0);
__builtin_memmove((R+4),(R+28),4);
}
B65cfc2:{NFSU2_TR(0x65cfc2);
__builtin_memmove((R+8),(R+24),4);
}
B65cfc4:L65cfc4:{c.instructions+=6;NFSU2_TR(0x65cfc4);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65cfc6:{NFSU2_TR(0x65cfc6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B65cfcc:{NFSU2_TR(0x65cfcc);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B65cfce:{NFSU2_TR(0x65cfce);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B65cfd0:{NFSU2_TR(0x65cfd0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B65cfd3:{NFSU2_TR(0x65cfd3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L65cfda;}}
}
B65cfd5:L65cfd5:{c.instructions+=3;NFSU2_TR(0x65cfd5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65cfd7:{NFSU2_TR(0x65cfd7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65cfd8:{NFSU2_TR(0x65cfd8);
{goto L65cfdc;}
}
B65cfda:L65cfda:{c.instructions+=1;NFSU2_TR(0x65cfda);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65cfdc:L65cfdc:{c.instructions+=5;NFSU2_TR(0x65cfdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B65cfde:{NFSU2_TR(0x65cfde);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B65cfe0:{NFSU2_TR(0x65cfe0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B65cfe3:{NFSU2_TR(0x65cfe3);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B65cfe4:{NFSU2_TR(0x65cfe4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65cfc4u);}goto L65cfc4;}}
}
B65cfe6:L65cfe6:{c.instructions+=3;NFSU2_TR(0x65cfe6);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B65cfe8:{NFSU2_TR(0x65cfe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65cfeb:{NFSU2_TR(0x65cfeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65cfc0u);}goto L65cfc0;}}
}
B65cfed:L65cfed:{c.instructions+=1;NFSU2_TR(0x65cfed);
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
B65cfef:L65cfef:{c.instructions+=5;NFSU2_TR(0x65cfef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65cff0:{NFSU2_TR(0x65cff0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65cff1:{NFSU2_TR(0x65cff1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65cff2:{NFSU2_TR(0x65cff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65cff3:{NFSU2_TR(0x65cff3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65cff6:L65cff6:{c.instructions+=6;NFSU2_TR(0x65cff6);
__builtin_memmove((R+28),(R+28),4);
}
B65cff8:{NFSU2_TR(0x65cff8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cff9:{NFSU2_TR(0x65cff9);
__builtin_memmove((R+20),(R+16),4);
}
B65cffb:{NFSU2_TR(0x65cffb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cffc:{NFSU2_TR(0x65cffc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65cffd:{NFSU2_TR(0x65cffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x65d000u,65d);
}
XIT:NFSU2_TR_EXIT(0x65c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
