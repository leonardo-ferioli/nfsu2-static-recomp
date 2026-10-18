#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_518(u8* __restrict R,Cpu& c);
u32 body_519(u8* __restrict R,Cpu& c);
u32 body_51a(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_52b(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x52c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x52c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_52c(u8* __restrict R,Cpu& c);
u32 page_52c(Cpu& c){return body_52c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_52c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x52c001:goto L52c001;
case 0x52c002:c.instructions+=2;goto B52c002;
case 0x52c005:c.instructions+=1;goto B52c005;
case 0x52c006:goto L52c006;
case 0x52c008:c.instructions+=12;goto B52c008;
case 0x52c00b:c.instructions+=11;goto B52c00b;
case 0x52c00e:c.instructions+=10;goto B52c00e;
case 0x52c012:c.instructions+=9;goto B52c012;
case 0x52c013:c.instructions+=8;goto B52c013;
case 0x52c015:c.instructions+=7;goto B52c015;
case 0x52c016:c.instructions+=6;goto B52c016;
case 0x52c017:c.instructions+=5;goto B52c017;
case 0x52c01a:c.instructions+=4;goto B52c01a;
case 0x52c01d:c.instructions+=3;goto B52c01d;
case 0x52c01e:c.instructions+=2;goto B52c01e;
case 0x52c021:c.instructions+=1;goto B52c021;
case 0x52c022:goto L52c022;
case 0x52c025:c.instructions+=14;goto B52c025;
case 0x52c028:c.instructions+=13;goto B52c028;
case 0x52c02b:c.instructions+=12;goto B52c02b;
case 0x52c02d:c.instructions+=11;goto B52c02d;
case 0x52c031:c.instructions+=10;goto B52c031;
case 0x52c033:c.instructions+=9;goto B52c033;
case 0x52c034:c.instructions+=8;goto B52c034;
case 0x52c037:c.instructions+=7;goto B52c037;
case 0x52c038:c.instructions+=6;goto B52c038;
case 0x52c039:c.instructions+=5;goto B52c039;
case 0x52c03c:c.instructions+=4;goto B52c03c;
case 0x52c03f:c.instructions+=3;goto B52c03f;
case 0x52c040:c.instructions+=2;goto B52c040;
case 0x52c043:c.instructions+=1;goto B52c043;
case 0x52c044:goto L52c044;
case 0x52c048:c.instructions+=4;goto B52c048;
case 0x52c04e:c.instructions+=3;goto B52c04e;
case 0x52c050:c.instructions+=2;goto B52c050;
case 0x52c053:c.instructions+=1;goto B52c053;
case 0x52c059:goto L52c059;
case 0x52c05d:c.instructions+=4;goto B52c05d;
case 0x52c063:c.instructions+=3;goto B52c063;
case 0x52c065:c.instructions+=2;goto B52c065;
case 0x52c068:c.instructions+=1;goto B52c068;
case 0x52c06e:goto L52c06e;
case 0x52c072:c.instructions+=3;goto B52c072;
case 0x52c073:c.instructions+=2;goto B52c073;
case 0x52c076:c.instructions+=1;goto B52c076;
case 0x52c07c:goto L52c07c;
case 0x52c083:goto L52c083;
case 0x52c087:c.instructions+=9;goto B52c087;
case 0x52c08b:c.instructions+=8;goto B52c08b;
case 0x52c08e:c.instructions+=7;goto B52c08e;
case 0x52c08f:c.instructions+=6;goto B52c08f;
case 0x52c092:c.instructions+=5;goto B52c092;
case 0x52c093:c.instructions+=4;goto B52c093;
case 0x52c094:c.instructions+=3;goto B52c094;
case 0x52c095:c.instructions+=2;goto B52c095;
case 0x52c096:c.instructions+=1;goto B52c096;
case 0x52c09b:goto L52c09b;
case 0x52c09e:c.instructions+=6;goto B52c09e;
case 0x52c09f:c.instructions+=5;goto B52c09f;
case 0x52c0a0:c.instructions+=4;goto B52c0a0;
case 0x52c0a1:c.instructions+=3;goto B52c0a1;
case 0x52c0a2:c.instructions+=2;goto B52c0a2;
case 0x52c0a5:c.instructions+=1;goto B52c0a5;
case 0x52c0a6:goto L52c0a6;
case 0x52c0a9:c.instructions+=14;goto B52c0a9;
case 0x52c0ad:c.instructions+=13;goto B52c0ad;
case 0x52c0b0:c.instructions+=12;goto B52c0b0;
case 0x52c0b2:c.instructions+=11;goto B52c0b2;
case 0x52c0b6:c.instructions+=10;goto B52c0b6;
case 0x52c0b8:c.instructions+=9;goto B52c0b8;
case 0x52c0ba:c.instructions+=8;goto B52c0ba;
case 0x52c0bb:c.instructions+=7;goto B52c0bb;
case 0x52c0bc:c.instructions+=6;goto B52c0bc;
case 0x52c0bd:c.instructions+=5;goto B52c0bd;
case 0x52c0bf:c.instructions+=4;goto B52c0bf;
case 0x52c0c0:c.instructions+=3;goto B52c0c0;
case 0x52c0c2:c.instructions+=2;goto B52c0c2;
case 0x52c0c5:c.instructions+=1;goto B52c0c5;
case 0x52c0c6:goto L52c0c6;
case 0x52c0ca:c.instructions+=9;goto B52c0ca;
case 0x52c0ce:c.instructions+=8;goto B52c0ce;
case 0x52c0cf:c.instructions+=7;goto B52c0cf;
case 0x52c0d0:c.instructions+=6;goto B52c0d0;
case 0x52c0d1:c.instructions+=5;goto B52c0d1;
case 0x52c0d4:c.instructions+=4;goto B52c0d4;
case 0x52c0d5:c.instructions+=3;goto B52c0d5;
case 0x52c0d8:c.instructions+=2;goto B52c0d8;
case 0x52c0d9:c.instructions+=1;goto B52c0d9;
case 0x52c0de:goto L52c0de;
case 0x52c0e1:c.instructions+=6;goto B52c0e1;
case 0x52c0e2:c.instructions+=5;goto B52c0e2;
case 0x52c0e3:c.instructions+=4;goto B52c0e3;
case 0x52c0e4:c.instructions+=3;goto B52c0e4;
case 0x52c0e5:c.instructions+=2;goto B52c0e5;
case 0x52c0e8:c.instructions+=1;goto B52c0e8;
case 0x52c0e9:goto L52c0e9;
case 0x52c0ed:c.instructions+=9;goto B52c0ed;
case 0x52c0f1:c.instructions+=8;goto B52c0f1;
case 0x52c0f2:c.instructions+=7;goto B52c0f2;
case 0x52c0f3:c.instructions+=6;goto B52c0f3;
case 0x52c0f4:c.instructions+=5;goto B52c0f4;
case 0x52c0f7:c.instructions+=4;goto B52c0f7;
case 0x52c0f8:c.instructions+=3;goto B52c0f8;
case 0x52c0fb:c.instructions+=2;goto B52c0fb;
case 0x52c0fc:c.instructions+=1;goto B52c0fc;
case 0x52c101:goto L52c101;
case 0x52c104:c.instructions+=6;goto B52c104;
case 0x52c105:c.instructions+=5;goto B52c105;
case 0x52c106:c.instructions+=4;goto B52c106;
case 0x52c107:c.instructions+=3;goto B52c107;
case 0x52c108:c.instructions+=2;goto B52c108;
case 0x52c10b:c.instructions+=1;goto B52c10b;
case 0x52c10c:goto L52c10c;
case 0x52c110:c.instructions+=9;goto B52c110;
case 0x52c114:c.instructions+=8;goto B52c114;
case 0x52c115:c.instructions+=7;goto B52c115;
case 0x52c116:c.instructions+=6;goto B52c116;
case 0x52c117:c.instructions+=5;goto B52c117;
case 0x52c11a:c.instructions+=4;goto B52c11a;
case 0x52c11b:c.instructions+=3;goto B52c11b;
case 0x52c11e:c.instructions+=2;goto B52c11e;
case 0x52c11f:c.instructions+=1;goto B52c11f;
case 0x52c124:goto L52c124;
case 0x52c127:c.instructions+=6;goto B52c127;
case 0x52c128:c.instructions+=5;goto B52c128;
case 0x52c129:c.instructions+=4;goto B52c129;
case 0x52c12a:c.instructions+=3;goto B52c12a;
case 0x52c12b:c.instructions+=2;goto B52c12b;
case 0x52c12e:c.instructions+=1;goto B52c12e;
case 0x52c12f:goto L52c12f;
case 0x52c133:c.instructions+=9;goto B52c133;
case 0x52c137:c.instructions+=8;goto B52c137;
case 0x52c138:c.instructions+=7;goto B52c138;
case 0x52c139:c.instructions+=6;goto B52c139;
case 0x52c13a:c.instructions+=5;goto B52c13a;
case 0x52c13d:c.instructions+=4;goto B52c13d;
case 0x52c13e:c.instructions+=3;goto B52c13e;
case 0x52c141:c.instructions+=2;goto B52c141;
case 0x52c142:c.instructions+=1;goto B52c142;
case 0x52c147:goto L52c147;
case 0x52c14a:c.instructions+=6;goto B52c14a;
case 0x52c14b:c.instructions+=5;goto B52c14b;
case 0x52c14c:c.instructions+=4;goto B52c14c;
case 0x52c14d:c.instructions+=3;goto B52c14d;
case 0x52c14e:c.instructions+=2;goto B52c14e;
case 0x52c151:c.instructions+=1;goto B52c151;
case 0x52c152:goto L52c152;
case 0x52c155:c.instructions+=1;goto B52c155;
case 0x52c157:goto L52c157;
case 0x52c15a:goto L52c15a;
case 0x52c15e:c.instructions+=3;goto B52c15e;
case 0x52c15f:c.instructions+=2;goto B52c15f;
case 0x52c162:c.instructions+=1;goto B52c162;
case 0x52c168:goto L52c168;
case 0x52c16f:goto L52c16f;
case 0x52c171:c.instructions+=10;goto B52c171;
case 0x52c173:c.instructions+=9;goto B52c173;
case 0x52c174:c.instructions+=8;goto B52c174;
case 0x52c175:c.instructions+=7;goto B52c175;
case 0x52c177:c.instructions+=6;goto B52c177;
case 0x52c17b:c.instructions+=5;goto B52c17b;
case 0x52c17c:c.instructions+=4;goto B52c17c;
case 0x52c17e:c.instructions+=3;goto B52c17e;
case 0x52c17f:c.instructions+=2;goto B52c17f;
case 0x52c182:c.instructions+=1;goto B52c182;
case 0x52c183:goto L52c183;
case 0x52c185:c.instructions+=9;goto B52c185;
case 0x52c186:c.instructions+=8;goto B52c186;
case 0x52c188:c.instructions+=7;goto B52c188;
case 0x52c18c:c.instructions+=6;goto B52c18c;
case 0x52c18d:c.instructions+=5;goto B52c18d;
case 0x52c18e:c.instructions+=4;goto B52c18e;
case 0x52c190:c.instructions+=3;goto B52c190;
case 0x52c191:c.instructions+=2;goto B52c191;
case 0x52c194:c.instructions+=1;goto B52c194;
case 0x52c195:goto L52c195;
case 0x52c197:c.instructions+=12;goto B52c197;
case 0x52c19b:c.instructions+=11;goto B52c19b;
case 0x52c19d:c.instructions+=10;goto B52c19d;
case 0x52c19f:c.instructions+=9;goto B52c19f;
case 0x52c1a2:c.instructions+=8;goto B52c1a2;
case 0x52c1a5:c.instructions+=7;goto B52c1a5;
case 0x52c1a6:c.instructions+=6;goto B52c1a6;
case 0x52c1a7:c.instructions+=5;goto B52c1a7;
case 0x52c1a8:c.instructions+=4;goto B52c1a8;
case 0x52c1ab:c.instructions+=3;goto B52c1ab;
case 0x52c1ac:c.instructions+=2;goto B52c1ac;
case 0x52c1af:c.instructions+=1;goto B52c1af;
case 0x52c1b0:goto L52c1b0;
case 0x52c1b2:c.instructions+=15;goto B52c1b2;
case 0x52c1b6:c.instructions+=14;goto B52c1b6;
case 0x52c1b8:c.instructions+=13;goto B52c1b8;
case 0x52c1ba:c.instructions+=12;goto B52c1ba;
case 0x52c1bd:c.instructions+=11;goto B52c1bd;
case 0x52c1c0:c.instructions+=10;goto B52c1c0;
case 0x52c1c3:c.instructions+=9;goto B52c1c3;
case 0x52c1c6:c.instructions+=8;goto B52c1c6;
case 0x52c1c9:c.instructions+=7;goto B52c1c9;
case 0x52c1ca:c.instructions+=6;goto B52c1ca;
case 0x52c1cb:c.instructions+=5;goto B52c1cb;
case 0x52c1cc:c.instructions+=4;goto B52c1cc;
case 0x52c1cf:c.instructions+=3;goto B52c1cf;
case 0x52c1d0:c.instructions+=2;goto B52c1d0;
case 0x52c1d3:c.instructions+=1;goto B52c1d3;
case 0x52c1d4:goto L52c1d4;
case 0x52c1d5:c.instructions+=3;goto B52c1d5;
case 0x52c1d9:c.instructions+=2;goto B52c1d9;
case 0x52c1da:c.instructions+=1;goto B52c1da;
case 0x52c1df:goto L52c1df;
case 0x52c1e3:c.instructions+=2;goto B52c1e3;
case 0x52c1e4:c.instructions+=1;goto B52c1e4;
case 0x52c1e9:goto L52c1e9;
case 0x52c1ea:c.instructions+=5;goto B52c1ea;
case 0x52c1eb:c.instructions+=4;goto B52c1eb;
case 0x52c1ec:c.instructions+=3;goto B52c1ec;
case 0x52c1ed:c.instructions+=2;goto B52c1ed;
case 0x52c1f0:c.instructions+=1;goto B52c1f0;
case 0x52c1f1:goto L52c1f1;
case 0x52c1f4:c.instructions+=14;goto B52c1f4;
case 0x52c1f7:c.instructions+=13;goto B52c1f7;
case 0x52c1fb:c.instructions+=12;goto B52c1fb;
case 0x52c1fd:c.instructions+=11;goto B52c1fd;
case 0x52c200:c.instructions+=10;goto B52c200;
case 0x52c203:c.instructions+=9;goto B52c203;
case 0x52c206:c.instructions+=8;goto B52c206;
case 0x52c209:c.instructions+=7;goto B52c209;
case 0x52c20b:c.instructions+=6;goto B52c20b;
case 0x52c20d:c.instructions+=5;goto B52c20d;
case 0x52c20f:c.instructions+=4;goto B52c20f;
case 0x52c211:c.instructions+=3;goto B52c211;
case 0x52c214:c.instructions+=2;goto B52c214;
case 0x52c217:c.instructions+=1;goto B52c217;
case 0x52c21a:goto L52c21a;
case 0x52c21b:c.instructions+=5;goto B52c21b;
case 0x52c21c:c.instructions+=4;goto B52c21c;
case 0x52c21d:c.instructions+=3;goto B52c21d;
case 0x52c21e:c.instructions+=2;goto B52c21e;
case 0x52c221:c.instructions+=1;goto B52c221;
case 0x52c270:goto L52c270;
case 0x52c272:c.instructions+=6;goto B52c272;
case 0x52c274:c.instructions+=5;goto B52c274;
case 0x52c27a:c.instructions+=4;goto B52c27a;
case 0x52c27d:c.instructions+=3;goto B52c27d;
case 0x52c280:c.instructions+=2;goto B52c280;
case 0x52c283:c.instructions+=1;goto B52c283;
case 0x52c290:goto L52c290;
case 0x52c291:c.instructions+=5;goto B52c291;
case 0x52c295:c.instructions+=4;goto B52c295;
case 0x52c298:c.instructions+=3;goto B52c298;
case 0x52c299:c.instructions+=2;goto B52c299;
case 0x52c29b:c.instructions+=1;goto B52c29b;
case 0x52c29d:goto L52c29d;
case 0x52c2a0:c.instructions+=7;goto B52c2a0;
case 0x52c2a1:c.instructions+=6;goto B52c2a1;
case 0x52c2a6:c.instructions+=5;goto B52c2a6;
case 0x52c2a9:c.instructions+=4;goto B52c2a9;
case 0x52c2aa:c.instructions+=3;goto B52c2aa;
case 0x52c2ac:c.instructions+=2;goto B52c2ac;
case 0x52c2ad:c.instructions+=1;goto B52c2ad;
case 0x52c2b2:goto L52c2b2;
case 0x52c2b5:c.instructions+=1;goto B52c2b5;
case 0x52c2b7:goto L52c2b7;
case 0x52c2b8:c.instructions+=1;goto B52c2b8;
case 0x52c2bd:goto L52c2bd;
case 0x52c2c0:goto L52c2c0;
case 0x52c2c2:c.instructions+=4;goto B52c2c2;
case 0x52c2c3:c.instructions+=3;goto B52c2c3;
case 0x52c2c4:c.instructions+=2;goto B52c2c4;
case 0x52c2c5:c.instructions+=1;goto B52c2c5;
case 0x52c2c8:goto L52c2c8;
case 0x52c2ca:c.instructions+=2;goto B52c2ca;
case 0x52c2d0:c.instructions+=1;goto B52c2d0;
case 0x52c2d5:goto L52c2d5;
case 0x52c2d8:c.instructions+=1;goto B52c2d8;
case 0x52c2da:goto L52c2da;
case 0x52c2db:c.instructions+=1;goto B52c2db;
case 0x52c2e0:goto L52c2e0;
case 0x52c2e3:goto L52c2e3;
case 0x52c2e5:c.instructions+=3;goto B52c2e5;
case 0x52c2e6:c.instructions+=2;goto B52c2e6;
case 0x52c2e7:c.instructions+=1;goto B52c2e7;
case 0x52c2f0:goto L52c2f0;
case 0x52c2f1:c.instructions+=7;goto B52c2f1;
case 0x52c2f2:c.instructions+=6;goto B52c2f2;
case 0x52c2f6:c.instructions+=5;goto B52c2f6;
case 0x52c2f7:c.instructions+=4;goto B52c2f7;
case 0x52c2f8:c.instructions+=3;goto B52c2f8;
case 0x52c2f9:c.instructions+=2;goto B52c2f9;
case 0x52c2fb:c.instructions+=1;goto B52c2fb;
case 0x52c300:goto L52c300;
case 0x52c303:c.instructions+=5;goto B52c303;
case 0x52c306:c.instructions+=4;goto B52c306;
case 0x52c309:c.instructions+=3;goto B52c309;
case 0x52c30a:c.instructions+=2;goto B52c30a;
case 0x52c30c:c.instructions+=1;goto B52c30c;
case 0x52c311:goto L52c311;
case 0x52c313:c.instructions+=4;goto B52c313;
case 0x52c314:c.instructions+=3;goto B52c314;
case 0x52c315:c.instructions+=2;goto B52c315;
case 0x52c316:c.instructions+=1;goto B52c316;
case 0x52c31b:goto L52c31b;
case 0x52c31e:c.instructions+=8;goto B52c31e;
case 0x52c321:c.instructions+=7;goto B52c321;
case 0x52c322:c.instructions+=6;goto B52c322;
case 0x52c325:c.instructions+=5;goto B52c325;
case 0x52c328:c.instructions+=4;goto B52c328;
case 0x52c329:c.instructions+=3;goto B52c329;
case 0x52c32a:c.instructions+=2;goto B52c32a;
case 0x52c32b:c.instructions+=1;goto B52c32b;
case 0x52c330:goto L52c330;
case 0x52c332:c.instructions+=22;goto B52c332;
case 0x52c337:c.instructions+=21;goto B52c337;
case 0x52c33d:c.instructions+=20;goto B52c33d;
case 0x52c33e:c.instructions+=19;goto B52c33e;
case 0x52c345:c.instructions+=18;goto B52c345;
case 0x52c346:c.instructions+=17;goto B52c346;
case 0x52c34a:c.instructions+=16;goto B52c34a;
case 0x52c34e:c.instructions+=15;goto B52c34e;
case 0x52c34f:c.instructions+=14;goto B52c34f;
case 0x52c351:c.instructions+=13;goto B52c351;
case 0x52c354:c.instructions+=12;goto B52c354;
case 0x52c356:c.instructions+=11;goto B52c356;
case 0x52c359:c.instructions+=10;goto B52c359;
case 0x52c35c:c.instructions+=9;goto B52c35c;
case 0x52c35f:c.instructions+=8;goto B52c35f;
case 0x52c362:c.instructions+=7;goto B52c362;
case 0x52c366:c.instructions+=6;goto B52c366;
case 0x52c368:c.instructions+=5;goto B52c368;
case 0x52c36b:c.instructions+=4;goto B52c36b;
case 0x52c36e:c.instructions+=3;goto B52c36e;
case 0x52c36f:c.instructions+=2;goto B52c36f;
case 0x52c373:c.instructions+=1;goto B52c373;
case 0x52c378:goto L52c378;
case 0x52c37c:c.instructions+=6;goto B52c37c;
case 0x52c37f:c.instructions+=5;goto B52c37f;
case 0x52c381:c.instructions+=4;goto B52c381;
case 0x52c382:c.instructions+=3;goto B52c382;
case 0x52c389:c.instructions+=2;goto B52c389;
case 0x52c38c:c.instructions+=1;goto B52c38c;
case 0x52c390:goto L52c390;
case 0x52c393:c.instructions+=1;goto B52c393;
case 0x52c3a0:goto L52c3a0;
case 0x52c3a1:c.instructions+=6;goto B52c3a1;
case 0x52c3a3:c.instructions+=5;goto B52c3a3;
case 0x52c3a6:c.instructions+=4;goto B52c3a6;
case 0x52c3a7:c.instructions+=3;goto B52c3a7;
case 0x52c3aa:c.instructions+=2;goto B52c3aa;
case 0x52c3ac:c.instructions+=1;goto B52c3ac;
case 0x52c3ae:goto L52c3ae;
case 0x52c3af:c.instructions+=1;goto B52c3af;
case 0x52c3b0:goto L52c3b0;
case 0x52c3b2:c.instructions+=7;goto B52c3b2;
case 0x52c3b5:c.instructions+=6;goto B52c3b5;
case 0x52c3b7:c.instructions+=5;goto B52c3b7;
case 0x52c3b9:c.instructions+=4;goto B52c3b9;
case 0x52c3bc:c.instructions+=3;goto B52c3bc;
case 0x52c3c2:c.instructions+=2;goto B52c3c2;
case 0x52c3c3:c.instructions+=1;goto B52c3c3;
case 0x52c3c8:goto L52c3c8;
case 0x52c3ca:c.instructions+=2;goto B52c3ca;
case 0x52c3cb:c.instructions+=1;goto B52c3cb;
case 0x52c3cd:goto L52c3cd;
case 0x52c3d3:c.instructions+=1;goto B52c3d3;
case 0x52c3d8:goto L52c3d8;
case 0x52c3da:goto L52c3da;
case 0x52c3e0:c.instructions+=1;goto B52c3e0;
case 0x52c3e5:goto L52c3e5;
case 0x52c3ea:c.instructions+=3;goto B52c3ea;
case 0x52c3ed:c.instructions+=2;goto B52c3ed;
case 0x52c3ef:c.instructions+=1;goto B52c3ef;
case 0x52c3f1:goto L52c3f1;
case 0x52c3f2:c.instructions+=1;goto B52c3f2;
case 0x52c3f7:goto L52c3f7;
case 0x52c3fa:c.instructions+=1;goto B52c3fa;
case 0x52c404:goto L52c404;
case 0x52c406:c.instructions+=1;goto B52c406;
case 0x52c408:goto L52c408;
case 0x52c409:goto L52c409;
case 0x52c40c:c.instructions+=6;goto B52c40c;
case 0x52c40f:c.instructions+=5;goto B52c40f;
case 0x52c410:c.instructions+=4;goto B52c410;
case 0x52c413:c.instructions+=3;goto B52c413;
case 0x52c41a:c.instructions+=2;goto B52c41a;
case 0x52c41b:c.instructions+=1;goto B52c41b;
case 0x52c420:goto L52c420;
case 0x52c426:c.instructions+=1;goto B52c426;
case 0x52c430:goto L52c430;
case 0x52c432:c.instructions+=10;goto B52c432;
case 0x52c437:c.instructions+=9;goto B52c437;
case 0x52c43d:c.instructions+=8;goto B52c43d;
case 0x52c43e:c.instructions+=7;goto B52c43e;
case 0x52c445:c.instructions+=6;goto B52c445;
case 0x52c446:c.instructions+=5;goto B52c446;
case 0x52c447:c.instructions+=4;goto B52c447;
case 0x52c449:c.instructions+=3;goto B52c449;
case 0x52c44d:c.instructions+=2;goto B52c44d;
case 0x52c455:c.instructions+=1;goto B52c455;
case 0x52c45a:goto L52c45a;
case 0x52c460:c.instructions+=3;goto B52c460;
case 0x52c465:c.instructions+=2;goto B52c465;
case 0x52c46b:c.instructions+=1;goto B52c46b;
case 0x52c470:goto L52c470;
case 0x52c476:c.instructions+=3;goto B52c476;
case 0x52c47b:c.instructions+=2;goto B52c47b;
case 0x52c481:c.instructions+=1;goto B52c481;
case 0x52c486:goto L52c486;
case 0x52c48c:c.instructions+=3;goto B52c48c;
case 0x52c491:c.instructions+=2;goto B52c491;
case 0x52c497:c.instructions+=1;goto B52c497;
case 0x52c49c:goto L52c49c;
case 0x52c4a2:c.instructions+=3;goto B52c4a2;
case 0x52c4a7:c.instructions+=2;goto B52c4a7;
case 0x52c4ad:c.instructions+=1;goto B52c4ad;
case 0x52c4b2:goto L52c4b2;
case 0x52c4b8:c.instructions+=3;goto B52c4b8;
case 0x52c4bd:c.instructions+=2;goto B52c4bd;
case 0x52c4c3:c.instructions+=1;goto B52c4c3;
case 0x52c4c8:goto L52c4c8;
case 0x52c4ce:c.instructions+=3;goto B52c4ce;
case 0x52c4d6:c.instructions+=2;goto B52c4d6;
case 0x52c4dc:c.instructions+=1;goto B52c4dc;
case 0x52c4e1:goto L52c4e1;
case 0x52c4e5:c.instructions+=4;goto B52c4e5;
case 0x52c4e6:c.instructions+=3;goto B52c4e6;
case 0x52c4ed:c.instructions+=2;goto B52c4ed;
case 0x52c4f0:c.instructions+=1;goto B52c4f0;
case 0x52c500:goto L52c500;
case 0x52c501:c.instructions+=7;goto B52c501;
case 0x52c505:c.instructions+=6;goto B52c505;
case 0x52c506:c.instructions+=5;goto B52c506;
case 0x52c508:c.instructions+=4;goto B52c508;
case 0x52c50e:c.instructions+=3;goto B52c50e;
case 0x52c510:c.instructions+=2;goto B52c510;
case 0x52c511:c.instructions+=1;goto B52c511;
case 0x52c514:goto L52c514;
case 0x52c516:c.instructions+=1;goto B52c516;
case 0x52c518:goto L52c518;
case 0x52c519:c.instructions+=3;goto B52c519;
case 0x52c51a:c.instructions+=2;goto B52c51a;
case 0x52c51c:c.instructions+=1;goto B52c51c;
case 0x52c521:goto L52c521;
case 0x52c527:c.instructions+=2;goto B52c527;
case 0x52c529:c.instructions+=1;goto B52c529;
case 0x52c52b:goto L52c52b;
case 0x52c52d:c.instructions+=2;goto B52c52d;
case 0x52c52e:c.instructions+=1;goto B52c52e;
case 0x52c531:goto L52c531;
case 0x52c533:c.instructions+=1;goto B52c533;
case 0x52c535:goto L52c535;
case 0x52c537:goto L52c537;
case 0x52c53d:c.instructions+=2;goto B52c53d;
case 0x52c53f:c.instructions+=1;goto B52c53f;
case 0x52c541:goto L52c541;
case 0x52c544:c.instructions+=6;goto B52c544;
case 0x52c546:c.instructions+=5;goto B52c546;
case 0x52c547:c.instructions+=4;goto B52c547;
case 0x52c54a:c.instructions+=3;goto B52c54a;
case 0x52c54b:c.instructions+=2;goto B52c54b;
case 0x52c54c:c.instructions+=1;goto B52c54c;
case 0x52c54f:goto L52c54f;
case 0x52c551:c.instructions+=2;goto B52c551;
case 0x52c552:c.instructions+=1;goto B52c552;
case 0x52c554:goto L52c554;
case 0x52c556:c.instructions+=1;goto B52c556;
case 0x52c558:goto L52c558;
case 0x52c55a:c.instructions+=3;goto B52c55a;
case 0x52c55c:c.instructions+=2;goto B52c55c;
case 0x52c55e:c.instructions+=1;goto B52c55e;
case 0x52c560:goto L52c560;
case 0x52c561:c.instructions+=2;goto B52c561;
case 0x52c562:c.instructions+=1;goto B52c562;
case 0x52c570:goto L52c570;
case 0x52c574:c.instructions+=4;goto B52c574;
case 0x52c576:c.instructions+=3;goto B52c576;
case 0x52c577:c.instructions+=2;goto B52c577;
case 0x52c578:c.instructions+=1;goto B52c578;
case 0x52c57a:goto L52c57a;
case 0x52c580:c.instructions+=4;goto B52c580;
case 0x52c586:c.instructions+=3;goto B52c586;
case 0x52c587:c.instructions+=2;goto B52c587;
case 0x52c588:c.instructions+=1;goto B52c588;
case 0x52c58d:goto L52c58d;
case 0x52c58f:c.instructions+=1;goto B52c58f;
case 0x52c591:goto L52c591;
case 0x52c595:c.instructions+=3;goto B52c595;
case 0x52c596:c.instructions+=2;goto B52c596;
case 0x52c598:c.instructions+=1;goto B52c598;
case 0x52c59d:goto L52c59d;
case 0x52c59e:c.instructions+=2;goto B52c59e;
case 0x52c59f:c.instructions+=1;goto B52c59f;
case 0x52c5a2:goto L52c5a2;
case 0x52c5a8:c.instructions+=2;goto B52c5a8;
case 0x52c5aa:c.instructions+=1;goto B52c5aa;
case 0x52c5ac:goto L52c5ac;
case 0x52c5b0:goto L52c5b0;
case 0x52c5b1:c.instructions+=2;goto B52c5b1;
case 0x52c5b3:c.instructions+=1;goto B52c5b3;
case 0x52c5b8:goto L52c5b8;
case 0x52c5ba:c.instructions+=1;goto B52c5ba;
case 0x52c5bc:goto L52c5bc;
case 0x52c5bf:c.instructions+=2;goto B52c5bf;
case 0x52c5c1:c.instructions+=1;goto B52c5c1;
case 0x52c5c3:goto L52c5c3;
case 0x52c5c5:goto L52c5c5;
case 0x52c5c6:c.instructions+=2;goto B52c5c6;
case 0x52c5c7:c.instructions+=1;goto B52c5c7;
case 0x52c5d0:goto L52c5d0;
case 0x52c5d6:c.instructions+=14;goto B52c5d6;
case 0x52c5d7:c.instructions+=13;goto B52c5d7;
case 0x52c5d8:c.instructions+=12;goto B52c5d8;
case 0x52c5df:c.instructions+=11;goto B52c5df;
case 0x52c5e2:c.instructions+=10;goto B52c5e2;
case 0x52c5e5:c.instructions+=9;goto B52c5e5;
case 0x52c5e7:c.instructions+=8;goto B52c5e7;
case 0x52c5e9:c.instructions+=7;goto B52c5e9;
case 0x52c5f1:c.instructions+=6;goto B52c5f1;
case 0x52c5f9:c.instructions+=5;goto B52c5f9;
case 0x52c601:c.instructions+=4;goto B52c601;
case 0x52c609:c.instructions+=3;goto B52c609;
case 0x52c611:c.instructions+=2;goto B52c611;
case 0x52c619:c.instructions+=1;goto B52c619;
case 0x52c61f:goto L52c61f;
case 0x52c622:c.instructions+=1;goto B52c622;
case 0x52c624:goto L52c624;
case 0x52c627:c.instructions+=2;goto B52c627;
case 0x52c629:c.instructions+=1;goto B52c629;
case 0x52c62f:goto L52c62f;
case 0x52c630:c.instructions+=5;goto B52c630;
case 0x52c631:c.instructions+=4;goto B52c631;
case 0x52c635:c.instructions+=3;goto B52c635;
case 0x52c636:c.instructions+=2;goto B52c636;
case 0x52c639:c.instructions+=1;goto B52c639;
case 0x52c63e:goto L52c63e;
case 0x52c641:c.instructions+=18;goto B52c641;
case 0x52c644:c.instructions+=17;goto B52c644;
case 0x52c647:c.instructions+=16;goto B52c647;
case 0x52c649:c.instructions+=15;goto B52c649;
case 0x52c64d:c.instructions+=14;goto B52c64d;
case 0x52c653:c.instructions+=13;goto B52c653;
case 0x52c657:c.instructions+=12;goto B52c657;
case 0x52c658:c.instructions+=11;goto B52c658;
case 0x52c65c:c.instructions+=10;goto B52c65c;
case 0x52c660:c.instructions+=9;goto B52c660;
case 0x52c661:c.instructions+=8;goto B52c661;
case 0x52c665:c.instructions+=7;goto B52c665;
case 0x52c66b:c.instructions+=6;goto B52c66b;
case 0x52c66c:c.instructions+=5;goto B52c66c;
case 0x52c670:c.instructions+=4;goto B52c670;
case 0x52c674:c.instructions+=3;goto B52c674;
case 0x52c67a:c.instructions+=2;goto B52c67a;
case 0x52c67e:c.instructions+=1;goto B52c67e;
case 0x52c683:goto L52c683;
case 0x52c687:c.instructions+=18;goto B52c687;
case 0x52c68e:c.instructions+=17;goto B52c68e;
case 0x52c691:c.instructions+=16;goto B52c691;
case 0x52c692:c.instructions+=15;goto B52c692;
case 0x52c696:c.instructions+=14;goto B52c696;
case 0x52c699:c.instructions+=13;goto B52c699;
case 0x52c69d:c.instructions+=12;goto B52c69d;
case 0x52c6a0:c.instructions+=11;goto B52c6a0;
case 0x52c6a3:c.instructions+=10;goto B52c6a3;
case 0x52c6a7:c.instructions+=9;goto B52c6a7;
case 0x52c6ab:c.instructions+=8;goto B52c6ab;
case 0x52c6ae:c.instructions+=7;goto B52c6ae;
case 0x52c6b1:c.instructions+=6;goto B52c6b1;
case 0x52c6b5:c.instructions+=5;goto B52c6b5;
case 0x52c6b6:c.instructions+=4;goto B52c6b6;
case 0x52c6b7:c.instructions+=3;goto B52c6b7;
case 0x52c6bb:c.instructions+=2;goto B52c6bb;
case 0x52c6bf:c.instructions+=1;goto B52c6bf;
case 0x52c6c4:goto L52c6c4;
case 0x52c6cb:c.instructions+=6;goto B52c6cb;
case 0x52c6cc:c.instructions+=5;goto B52c6cc;
case 0x52c6d3:c.instructions+=4;goto B52c6d3;
case 0x52c6d4:c.instructions+=3;goto B52c6d4;
case 0x52c6d8:c.instructions+=2;goto B52c6d8;
case 0x52c6d9:c.instructions+=1;goto B52c6d9;
case 0x52c6de:goto L52c6de;
case 0x52c6e6:c.instructions+=10;goto B52c6e6;
case 0x52c6e9:c.instructions+=9;goto B52c6e9;
case 0x52c6f0:c.instructions+=8;goto B52c6f0;
case 0x52c6f2:c.instructions+=7;goto B52c6f2;
case 0x52c6f9:c.instructions+=6;goto B52c6f9;
case 0x52c6fd:c.instructions+=5;goto B52c6fd;
case 0x52c703:c.instructions+=4;goto B52c703;
case 0x52c705:c.instructions+=3;goto B52c705;
case 0x52c706:c.instructions+=2;goto B52c706;
case 0x52c707:c.instructions+=1;goto B52c707;
case 0x52c70a:goto L52c70a;
case 0x52c70d:c.instructions+=2;goto B52c70d;
case 0x52c70f:c.instructions+=1;goto B52c70f;
case 0x52c711:goto L52c711;
case 0x52c715:c.instructions+=2;goto B52c715;
case 0x52c716:c.instructions+=1;goto B52c716;
case 0x52c718:goto L52c718;
case 0x52c719:c.instructions+=5;goto B52c719;
case 0x52c71d:c.instructions+=4;goto B52c71d;
case 0x52c71e:c.instructions+=3;goto B52c71e;
case 0x52c71f:c.instructions+=2;goto B52c71f;
case 0x52c721:c.instructions+=1;goto B52c721;
case 0x52c726:goto L52c726;
case 0x52c728:goto L52c728;
case 0x52c72c:c.instructions+=4;goto B52c72c;
case 0x52c72d:c.instructions+=3;goto B52c72d;
case 0x52c72e:c.instructions+=2;goto B52c72e;
case 0x52c730:c.instructions+=1;goto B52c730;
case 0x52c735:goto L52c735;
case 0x52c738:c.instructions+=2;goto B52c738;
case 0x52c73a:c.instructions+=1;goto B52c73a;
case 0x52c73c:goto L52c73c;
case 0x52c73d:c.instructions+=1;goto B52c73d;
case 0x52c73e:goto L52c73e;
case 0x52c73f:c.instructions+=3;goto B52c73f;
case 0x52c740:c.instructions+=2;goto B52c740;
case 0x52c746:c.instructions+=1;goto B52c746;
case 0x52c750:goto L52c750;
case 0x52c754:c.instructions+=2;goto B52c754;
case 0x52c759:c.instructions+=1;goto B52c759;
case 0x52c75b:goto L52c75b;
case 0x52c75d:goto L52c75d;
case 0x52c762:c.instructions+=1;goto B52c762;
case 0x52c764:goto L52c764;
case 0x52c769:c.instructions+=1;goto B52c769;
case 0x52c76b:goto L52c76b;
case 0x52c76f:c.instructions+=3;goto B52c76f;
case 0x52c771:c.instructions+=2;goto B52c771;
case 0x52c773:c.instructions+=1;goto B52c773;
case 0x52c778:goto L52c778;
case 0x52c77a:c.instructions+=1;goto B52c77a;
case 0x52c77d:goto L52c77d;
case 0x52c781:c.instructions+=3;goto B52c781;
case 0x52c783:c.instructions+=2;goto B52c783;
case 0x52c785:c.instructions+=1;goto B52c785;
case 0x52c78a:goto L52c78a;
case 0x52c78c:c.instructions+=1;goto B52c78c;
case 0x52c78f:goto L52c78f;
case 0x52c793:c.instructions+=3;goto B52c793;
case 0x52c795:c.instructions+=2;goto B52c795;
case 0x52c797:c.instructions+=1;goto B52c797;
case 0x52c79c:goto L52c79c;
case 0x52c79e:c.instructions+=1;goto B52c79e;
case 0x52c7a1:goto L52c7a1;
case 0x52c7a6:c.instructions+=1;goto B52c7a6;
case 0x52c7a8:goto L52c7a8;
case 0x52c7aa:c.instructions+=1;goto B52c7aa;
case 0x52c7ad:goto L52c7ad;
case 0x52c7b1:c.instructions+=3;goto B52c7b1;
case 0x52c7b3:c.instructions+=2;goto B52c7b3;
case 0x52c7b5:c.instructions+=1;goto B52c7b5;
case 0x52c7ba:goto L52c7ba;
case 0x52c7bc:c.instructions+=1;goto B52c7bc;
case 0x52c7c0:goto L52c7c0;
case 0x52c7c3:c.instructions+=10;goto B52c7c3;
case 0x52c7c4:c.instructions+=9;goto B52c7c4;
case 0x52c7c8:c.instructions+=8;goto B52c7c8;
case 0x52c7cb:c.instructions+=7;goto B52c7cb;
case 0x52c7cc:c.instructions+=6;goto B52c7cc;
case 0x52c7ce:c.instructions+=5;goto B52c7ce;
case 0x52c7d0:c.instructions+=4;goto B52c7d0;
case 0x52c7d2:c.instructions+=3;goto B52c7d2;
case 0x52c7d6:c.instructions+=2;goto B52c7d6;
case 0x52c7da:c.instructions+=1;goto B52c7da;
case 0x52c7e0:goto L52c7e0;
case 0x52c7e1:c.instructions+=2;goto B52c7e1;
case 0x52c7e2:c.instructions+=1;goto B52c7e2;
case 0x52c7e6:goto L52c7e6;
case 0x52c7e9:c.instructions+=5;goto B52c7e9;
case 0x52c7ec:c.instructions+=4;goto B52c7ec;
case 0x52c7ef:c.instructions+=3;goto B52c7ef;
case 0x52c7f1:c.instructions+=2;goto B52c7f1;
case 0x52c7f6:c.instructions+=1;goto B52c7f6;
case 0x52c7fc:goto L52c7fc;
case 0x52c802:goto L52c802;
case 0x52c807:c.instructions+=1;goto B52c807;
case 0x52c80d:goto L52c80d;
case 0x52c813:goto L52c813;
case 0x52c816:c.instructions+=1;goto B52c816;
case 0x52c81c:goto L52c81c;
case 0x52c81e:goto L52c81e;
case 0x52c821:c.instructions+=1;goto B52c821;
case 0x52c823:goto L52c823;
case 0x52c824:c.instructions+=1;goto B52c824;
case 0x52c82a:goto L52c82a;
case 0x52c82d:c.instructions+=2;goto B52c82d;
case 0x52c830:c.instructions+=1;goto B52c830;
case 0x52c832:goto L52c832;
case 0x52c835:c.instructions+=1;goto B52c835;
case 0x52c837:goto L52c837;
case 0x52c838:c.instructions+=2;goto B52c838;
case 0x52c83a:c.instructions+=1;goto B52c83a;
case 0x52c83f:goto L52c83f;
case 0x52c843:c.instructions+=9;goto B52c843;
case 0x52c847:c.instructions+=8;goto B52c847;
case 0x52c848:c.instructions+=7;goto B52c848;
case 0x52c849:c.instructions+=6;goto B52c849;
case 0x52c84c:c.instructions+=5;goto B52c84c;
case 0x52c84d:c.instructions+=4;goto B52c84d;
case 0x52c84e:c.instructions+=3;goto B52c84e;
case 0x52c84f:c.instructions+=2;goto B52c84f;
case 0x52c851:c.instructions+=1;goto B52c851;
case 0x52c856:goto L52c856;
case 0x52c85b:goto L52c85b;
case 0x52c85f:c.instructions+=2;goto B52c85f;
case 0x52c861:c.instructions+=1;goto B52c861;
case 0x52c867:goto L52c867;
case 0x52c86a:c.instructions+=3;goto B52c86a;
case 0x52c86b:c.instructions+=2;goto B52c86b;
case 0x52c86d:c.instructions+=1;goto B52c86d;
case 0x52c872:goto L52c872;
case 0x52c874:c.instructions+=2;goto B52c874;
case 0x52c876:c.instructions+=1;goto B52c876;
case 0x52c87c:goto L52c87c;
case 0x52c880:c.instructions+=2;goto B52c880;
case 0x52c881:c.instructions+=1;goto B52c881;
case 0x52c886:goto L52c886;
case 0x52c88d:c.instructions+=1;goto B52c88d;
case 0x52c892:goto L52c892;
case 0x52c896:c.instructions+=9;goto B52c896;
case 0x52c89a:c.instructions+=8;goto B52c89a;
case 0x52c89d:c.instructions+=7;goto B52c89d;
case 0x52c89e:c.instructions+=6;goto B52c89e;
case 0x52c8a0:c.instructions+=5;goto B52c8a0;
case 0x52c8a1:c.instructions+=4;goto B52c8a1;
case 0x52c8a2:c.instructions+=3;goto B52c8a2;
case 0x52c8a3:c.instructions+=2;goto B52c8a3;
case 0x52c8a5:c.instructions+=1;goto B52c8a5;
case 0x52c8aa:goto L52c8aa;
case 0x52c8af:goto L52c8af;
case 0x52c8b2:c.instructions+=1;goto B52c8b2;
case 0x52c8b4:goto L52c8b4;
case 0x52c8b9:c.instructions+=1;goto B52c8b9;
case 0x52c8bf:goto L52c8bf;
case 0x52c8c2:c.instructions+=2;goto B52c8c2;
case 0x52c8c4:c.instructions+=1;goto B52c8c4;
case 0x52c8c6:goto L52c8c6;
case 0x52c8c7:c.instructions+=2;goto B52c8c7;
case 0x52c8c9:c.instructions+=1;goto B52c8c9;
case 0x52c8ce:goto L52c8ce;
case 0x52c8d0:c.instructions+=1;goto B52c8d0;
case 0x52c8d2:goto L52c8d2;
case 0x52c8d5:c.instructions+=2;goto B52c8d5;
case 0x52c8d7:c.instructions+=1;goto B52c8d7;
case 0x52c8dd:goto L52c8dd;
case 0x52c8df:goto L52c8df;
case 0x52c8e2:c.instructions+=5;goto B52c8e2;
case 0x52c8e4:c.instructions+=4;goto B52c8e4;
case 0x52c8e5:c.instructions+=3;goto B52c8e5;
case 0x52c8e6:c.instructions+=2;goto B52c8e6;
case 0x52c8e7:c.instructions+=1;goto B52c8e7;
case 0x52c8ec:goto L52c8ec;
case 0x52c8f1:goto L52c8f1;
case 0x52c8f3:c.instructions+=1;goto B52c8f3;
case 0x52c8f5:goto L52c8f5;
case 0x52c8f9:c.instructions+=9;goto B52c8f9;
case 0x52c8fd:c.instructions+=8;goto B52c8fd;
case 0x52c900:c.instructions+=7;goto B52c900;
case 0x52c901:c.instructions+=6;goto B52c901;
case 0x52c903:c.instructions+=5;goto B52c903;
case 0x52c904:c.instructions+=4;goto B52c904;
case 0x52c905:c.instructions+=3;goto B52c905;
case 0x52c906:c.instructions+=2;goto B52c906;
case 0x52c908:c.instructions+=1;goto B52c908;
case 0x52c90d:goto L52c90d;
case 0x52c912:goto L52c912;
case 0x52c916:c.instructions+=3;goto B52c916;
case 0x52c919:c.instructions+=2;goto B52c919;
case 0x52c91c:c.instructions+=1;goto B52c91c;
case 0x52c921:goto L52c921;
case 0x52c926:c.instructions+=2;goto B52c926;
case 0x52c929:c.instructions+=1;goto B52c929;
case 0x52c92b:goto L52c92b;
case 0x52c932:goto L52c932;
case 0x52c938:c.instructions+=2;goto B52c938;
case 0x52c93a:c.instructions+=1;goto B52c93a;
case 0x52c93c:goto L52c93c;
case 0x52c93f:c.instructions+=5;goto B52c93f;
case 0x52c942:c.instructions+=4;goto B52c942;
case 0x52c943:c.instructions+=3;goto B52c943;
case 0x52c944:c.instructions+=2;goto B52c944;
case 0x52c946:c.instructions+=1;goto B52c946;
case 0x52c94b:goto L52c94b;
case 0x52c94d:goto L52c94d;
case 0x52c950:c.instructions+=4;goto B52c950;
case 0x52c952:c.instructions+=3;goto B52c952;
case 0x52c953:c.instructions+=2;goto B52c953;
case 0x52c955:c.instructions+=1;goto B52c955;
case 0x52c95a:goto L52c95a;
case 0x52c95c:goto L52c95c;
case 0x52c95f:c.instructions+=4;goto B52c95f;
case 0x52c960:c.instructions+=3;goto B52c960;
case 0x52c962:c.instructions+=2;goto B52c962;
case 0x52c964:c.instructions+=1;goto B52c964;
case 0x52c969:goto L52c969;
case 0x52c96b:c.instructions+=1;goto B52c96b;
case 0x52c96d:goto L52c96d;
case 0x52c96e:c.instructions+=2;goto B52c96e;
case 0x52c970:c.instructions+=1;goto B52c970;
case 0x52c975:goto L52c975;
case 0x52c977:c.instructions+=2;goto B52c977;
case 0x52c979:c.instructions+=1;goto B52c979;
case 0x52c97b:goto L52c97b;
case 0x52c97e:c.instructions+=2;goto B52c97e;
case 0x52c980:c.instructions+=1;goto B52c980;
case 0x52c982:goto L52c982;
case 0x52c983:c.instructions+=2;goto B52c983;
case 0x52c985:c.instructions+=1;goto B52c985;
case 0x52c98a:goto L52c98a;
case 0x52c98c:c.instructions+=2;goto B52c98c;
case 0x52c98e:c.instructions+=1;goto B52c98e;
case 0x52c990:goto L52c990;
case 0x52c993:c.instructions+=2;goto B52c993;
case 0x52c995:c.instructions+=1;goto B52c995;
case 0x52c997:goto L52c997;
case 0x52c999:goto L52c999;
case 0x52c99c:c.instructions+=5;goto B52c99c;
case 0x52c99e:c.instructions+=4;goto B52c99e;
case 0x52c99f:c.instructions+=3;goto B52c99f;
case 0x52c9a0:c.instructions+=2;goto B52c9a0;
case 0x52c9a1:c.instructions+=1;goto B52c9a1;
case 0x52c9a6:goto L52c9a6;
case 0x52c9aa:goto L52c9aa;
case 0x52c9ae:c.instructions+=5;goto B52c9ae;
case 0x52c9b2:c.instructions+=4;goto B52c9b2;
case 0x52c9b3:c.instructions+=3;goto B52c9b3;
case 0x52c9b5:c.instructions+=2;goto B52c9b5;
case 0x52c9b9:c.instructions+=1;goto B52c9b9;
case 0x52c9bf:goto L52c9bf;
case 0x52c9c0:c.instructions+=1;goto B52c9c0;
case 0x52c9c1:goto L52c9c1;
case 0x52c9c2:c.instructions+=3;goto B52c9c2;
case 0x52c9c3:c.instructions+=2;goto B52c9c3;
case 0x52c9c6:c.instructions+=1;goto B52c9c6;
case 0x52c9c9:goto L52c9c9;
case 0x52c9cd:c.instructions+=5;goto B52c9cd;
case 0x52c9ce:c.instructions+=4;goto B52c9ce;
case 0x52c9d0:c.instructions+=3;goto B52c9d0;
case 0x52c9d1:c.instructions+=2;goto B52c9d1;
case 0x52c9d3:c.instructions+=1;goto B52c9d3;
case 0x52c9d8:goto L52c9d8;
case 0x52c9da:goto L52c9da;
case 0x52c9df:c.instructions+=4;goto B52c9df;
case 0x52c9e1:c.instructions+=3;goto B52c9e1;
case 0x52c9e2:c.instructions+=2;goto B52c9e2;
case 0x52c9e4:c.instructions+=1;goto B52c9e4;
case 0x52c9e9:goto L52c9e9;
case 0x52c9eb:goto L52c9eb;
case 0x52c9ef:c.instructions+=5;goto B52c9ef;
case 0x52c9f0:c.instructions+=4;goto B52c9f0;
case 0x52c9f2:c.instructions+=3;goto B52c9f2;
case 0x52c9f3:c.instructions+=2;goto B52c9f3;
case 0x52c9f5:c.instructions+=1;goto B52c9f5;
case 0x52c9fa:goto L52c9fa;
case 0x52c9fc:goto L52c9fc;
case 0x52ca01:c.instructions+=4;goto B52ca01;
case 0x52ca03:c.instructions+=3;goto B52ca03;
case 0x52ca04:c.instructions+=2;goto B52ca04;
case 0x52ca06:c.instructions+=1;goto B52ca06;
case 0x52ca0b:goto L52ca0b;
case 0x52ca0d:goto L52ca0d;
case 0x52ca12:c.instructions+=1;goto B52ca12;
case 0x52ca18:goto L52ca18;
case 0x52ca1e:goto L52ca1e;
case 0x52ca23:c.instructions+=2;goto B52ca23;
case 0x52ca26:c.instructions+=1;goto B52ca26;
case 0x52ca28:goto L52ca28;
case 0x52ca2f:goto L52ca2f;
case 0x52ca32:c.instructions+=4;goto B52ca32;
case 0x52ca33:c.instructions+=3;goto B52ca33;
case 0x52ca34:c.instructions+=2;goto B52ca34;
case 0x52ca36:c.instructions+=1;goto B52ca36;
case 0x52ca3b:goto L52ca3b;
case 0x52ca40:goto L52ca40;
case 0x52ca43:c.instructions+=6;goto B52ca43;
case 0x52ca46:c.instructions+=5;goto B52ca46;
case 0x52ca47:c.instructions+=4;goto B52ca47;
case 0x52ca48:c.instructions+=3;goto B52ca48;
case 0x52ca49:c.instructions+=2;goto B52ca49;
case 0x52ca4b:c.instructions+=1;goto B52ca4b;
case 0x52ca50:goto L52ca50;
case 0x52ca55:goto L52ca55;
case 0x52ca57:c.instructions+=1;goto B52ca57;
case 0x52ca60:goto L52ca60;
case 0x52ca64:c.instructions+=5;goto B52ca64;
case 0x52ca69:c.instructions+=4;goto B52ca69;
case 0x52ca6b:c.instructions+=3;goto B52ca6b;
case 0x52ca6d:c.instructions+=2;goto B52ca6d;
case 0x52ca6f:c.instructions+=1;goto B52ca6f;
case 0x52ca71:goto L52ca71;
case 0x52ca72:c.instructions+=5;goto B52ca72;
case 0x52ca75:c.instructions+=4;goto B52ca75;
case 0x52ca76:c.instructions+=3;goto B52ca76;
case 0x52ca77:c.instructions+=2;goto B52ca77;
case 0x52ca79:c.instructions+=1;goto B52ca79;
case 0x52ca7e:goto L52ca7e;
case 0x52ca7f:c.instructions+=2;goto B52ca7f;
case 0x52ca82:c.instructions+=1;goto B52ca82;
case 0x52ca84:goto L52ca84;
case 0x52ca89:goto L52ca89;
case 0x52ca8c:c.instructions+=5;goto B52ca8c;
case 0x52ca8e:c.instructions+=4;goto B52ca8e;
case 0x52ca8f:c.instructions+=3;goto B52ca8f;
case 0x52ca90:c.instructions+=2;goto B52ca90;
case 0x52ca92:c.instructions+=1;goto B52ca92;
case 0x52ca97:goto L52ca97;
case 0x52ca9c:goto L52ca9c;
case 0x52ca9d:c.instructions+=2;goto B52ca9d;
case 0x52ca9f:c.instructions+=1;goto B52ca9f;
case 0x52caa4:goto L52caa4;
case 0x52caa9:goto L52caa9;
case 0x52caac:c.instructions+=3;goto B52caac;
case 0x52caad:c.instructions+=2;goto B52caad;
case 0x52caaf:c.instructions+=1;goto B52caaf;
case 0x52cab4:goto L52cab4;
case 0x52cab9:goto L52cab9;
case 0x52cabe:c.instructions+=1;goto B52cabe;
case 0x52cac0:goto L52cac0;
case 0x52cac2:goto L52cac2;
case 0x52cac7:c.instructions+=1;goto B52cac7;
case 0x52cac9:goto L52cac9;
case 0x52caca:c.instructions+=1;goto B52caca;
case 0x52cad0:goto L52cad0;
case 0x52cad2:c.instructions+=1;goto B52cad2;
case 0x52cad7:goto L52cad7;
case 0x52cadc:goto L52cadc;
case 0x52cae2:c.instructions+=2;goto B52cae2;
case 0x52cae4:c.instructions+=1;goto B52cae4;
case 0x52caea:goto L52caea;
case 0x52caeb:c.instructions+=5;goto B52caeb;
case 0x52caf1:c.instructions+=4;goto B52caf1;
case 0x52caf4:c.instructions+=3;goto B52caf4;
case 0x52cafb:c.instructions+=2;goto B52cafb;
case 0x52cafd:c.instructions+=1;goto B52cafd;
case 0x52cb03:goto L52cb03;
case 0x52cb04:c.instructions+=3;goto B52cb04;
case 0x52cb05:c.instructions+=2;goto B52cb05;
case 0x52cb07:c.instructions+=1;goto B52cb07;
case 0x52cb0c:goto L52cb0c;
case 0x52cb11:goto L52cb11;
case 0x52cb15:c.instructions+=4;goto B52cb15;
case 0x52cb18:c.instructions+=3;goto B52cb18;
case 0x52cb1b:c.instructions+=2;goto B52cb1b;
case 0x52cb1e:c.instructions+=1;goto B52cb1e;
case 0x52cb24:goto L52cb24;
case 0x52cb25:c.instructions+=2;goto B52cb25;
case 0x52cb27:c.instructions+=1;goto B52cb27;
case 0x52cb2c:goto L52cb2c;
case 0x52cb30:c.instructions+=1;goto B52cb30;
case 0x52cb35:goto L52cb35;
case 0x52cb3a:c.instructions+=1;goto B52cb3a;
case 0x52cb3c:goto L52cb3c;
case 0x52cb41:c.instructions+=1;goto B52cb41;
case 0x52cb43:goto L52cb43;
case 0x52cb47:c.instructions+=3;goto B52cb47;
case 0x52cb4a:c.instructions+=2;goto B52cb4a;
case 0x52cb4d:c.instructions+=1;goto B52cb4d;
case 0x52cb50:goto L52cb50;
case 0x52cb56:goto L52cb56;
case 0x52cb57:c.instructions+=2;goto B52cb57;
case 0x52cb59:c.instructions+=1;goto B52cb59;
case 0x52cb5e:goto L52cb5e;
case 0x52cb62:c.instructions+=1;goto B52cb62;
case 0x52cba0:goto L52cba0;
case 0x52cba2:c.instructions+=11;goto B52cba2;
case 0x52cba7:c.instructions+=10;goto B52cba7;
case 0x52cbad:c.instructions+=9;goto B52cbad;
case 0x52cbae:c.instructions+=8;goto B52cbae;
case 0x52cbb5:c.instructions+=7;goto B52cbb5;
case 0x52cbb6:c.instructions+=6;goto B52cbb6;
case 0x52cbbb:c.instructions+=5;goto B52cbbb;
case 0x52cbbc:c.instructions+=4;goto B52cbbc;
case 0x52cbbd:c.instructions+=3;goto B52cbbd;
case 0x52cbbe:c.instructions+=2;goto B52cbbe;
case 0x52cbc0:c.instructions+=1;goto B52cbc0;
case 0x52cbc5:goto L52cbc5;
case 0x52cbc8:c.instructions+=5;goto B52cbc8;
case 0x52cbcc:c.instructions+=4;goto B52cbcc;
case 0x52cbce:c.instructions+=3;goto B52cbce;
case 0x52cbd2:c.instructions+=2;goto B52cbd2;
case 0x52cbda:c.instructions+=1;goto B52cbda;
case 0x52cbdc:goto L52cbdc;
case 0x52cbe0:c.instructions+=4;goto B52cbe0;
case 0x52cbe1:c.instructions+=3;goto B52cbe1;
case 0x52cbe2:c.instructions+=2;goto B52cbe2;
case 0x52cbe4:c.instructions+=1;goto B52cbe4;
case 0x52cbe9:goto L52cbe9;
case 0x52cbeb:goto L52cbeb;
case 0x52cbed:goto L52cbed;
case 0x52cbf0:c.instructions+=12;goto B52cbf0;
case 0x52cbf3:c.instructions+=11;goto B52cbf3;
case 0x52cbf6:c.instructions+=10;goto B52cbf6;
case 0x52cbf8:c.instructions+=9;goto B52cbf8;
case 0x52cbfb:c.instructions+=8;goto B52cbfb;
case 0x52cbfd:c.instructions+=7;goto B52cbfd;
case 0x52cc01:c.instructions+=6;goto B52cc01;
case 0x52cc02:c.instructions+=5;goto B52cc02;
case 0x52cc05:c.instructions+=4;goto B52cc05;
case 0x52cc06:c.instructions+=3;goto B52cc06;
case 0x52cc0d:c.instructions+=2;goto B52cc0d;
case 0x52cc10:c.instructions+=1;goto B52cc10;
case 0x52cc20:goto L52cc20;
case 0x52cc21:c.instructions+=2;goto B52cc21;
case 0x52cc23:c.instructions+=1;goto B52cc23;
case 0x52cc28:goto L52cc28;
case 0x52cc2d:c.instructions+=1;goto B52cc2d;
case 0x52cc2f:goto L52cc2f;
case 0x52cc30:c.instructions+=1;goto B52cc30;
case 0x52cc35:goto L52cc35;
case 0x52cc38:goto L52cc38;
case 0x52cc3a:c.instructions+=2;goto B52cc3a;
case 0x52cc3b:c.instructions+=1;goto B52cc3b;
case 0x52cc40:goto L52cc40;
case 0x52cc46:c.instructions+=2;goto B52cc46;
case 0x52cc49:c.instructions+=1;goto B52cc49;
case 0x52cc50:goto L52cc50;
case 0x52cc52:c.instructions+=5;goto B52cc52;
case 0x52cc55:c.instructions+=4;goto B52cc55;
case 0x52cc5b:c.instructions+=3;goto B52cc5b;
case 0x52cc5d:c.instructions+=2;goto B52cc5d;
case 0x52cc60:c.instructions+=1;goto B52cc60;
case 0x52cc70:goto L52cc70;
case 0x52cc71:c.instructions+=2;goto B52cc71;
case 0x52cc73:c.instructions+=1;goto B52cc73;
case 0x52cc78:goto L52cc78;
case 0x52cc7d:c.instructions+=1;goto B52cc7d;
case 0x52cc7f:goto L52cc7f;
case 0x52cc80:c.instructions+=1;goto B52cc80;
case 0x52cc85:goto L52cc85;
case 0x52cc88:goto L52cc88;
case 0x52cc8a:c.instructions+=2;goto B52cc8a;
case 0x52cc8b:c.instructions+=1;goto B52cc8b;
case 0x52cc90:goto L52cc90;
case 0x52cc93:c.instructions+=7;goto B52cc93;
case 0x52cc95:c.instructions+=6;goto B52cc95;
case 0x52cc96:c.instructions+=5;goto B52cc96;
case 0x52cc97:c.instructions+=4;goto B52cc97;
case 0x52cc9a:c.instructions+=3;goto B52cc9a;
case 0x52cc9b:c.instructions+=2;goto B52cc9b;
case 0x52cc9c:c.instructions+=1;goto B52cc9c;
case 0x52cc9e:goto L52cc9e;
case 0x52cca1:c.instructions+=1;goto B52cca1;
case 0x52cca3:goto L52cca3;
case 0x52cca5:goto L52cca5;
case 0x52cca9:c.instructions+=2;goto B52cca9;
case 0x52ccad:c.instructions+=1;goto B52ccad;
case 0x52ccb0:goto L52ccb0;
case 0x52ccb2:c.instructions+=1;goto B52ccb2;
case 0x52ccb4:goto L52ccb4;
case 0x52ccb7:c.instructions+=1;goto B52ccb7;
case 0x52ccb9:goto L52ccb9;
case 0x52ccbb:goto L52ccbb;
case 0x52ccbd:c.instructions+=1;goto B52ccbd;
case 0x52ccbf:goto L52ccbf;
case 0x52ccc2:c.instructions+=2;goto B52ccc2;
case 0x52ccc4:c.instructions+=1;goto B52ccc4;
case 0x52ccc6:goto L52ccc6;
case 0x52ccc8:c.instructions+=1;goto B52ccc8;
case 0x52ccca:goto L52ccca;
case 0x52cccd:c.instructions+=2;goto B52cccd;
case 0x52cccf:c.instructions+=1;goto B52cccf;
case 0x52ccd1:goto L52ccd1;
case 0x52ccd5:c.instructions+=6;goto B52ccd5;
case 0x52ccd9:c.instructions+=5;goto B52ccd9;
case 0x52ccda:c.instructions+=4;goto B52ccda;
case 0x52ccdb:c.instructions+=3;goto B52ccdb;
case 0x52ccdc:c.instructions+=2;goto B52ccdc;
case 0x52ccdd:c.instructions+=1;goto B52ccdd;
case 0x52cce2:goto L52cce2;
case 0x52cce5:c.instructions+=2;goto B52cce5;
case 0x52cce7:c.instructions+=1;goto B52cce7;
case 0x52cce9:goto L52cce9;
case 0x52ccec:c.instructions+=1;goto B52ccec;
case 0x52ccee:goto L52ccee;
case 0x52ccf0:c.instructions+=1;goto B52ccf0;
case 0x52ccf2:goto L52ccf2;
case 0x52ccf3:c.instructions+=4;goto B52ccf3;
case 0x52ccf4:c.instructions+=3;goto B52ccf4;
case 0x52ccf5:c.instructions+=2;goto B52ccf5;
case 0x52ccf6:c.instructions+=1;goto B52ccf6;
case 0x52cd00:goto L52cd00;
case 0x52cd06:c.instructions+=8;goto B52cd06;
case 0x52cd08:c.instructions+=7;goto B52cd08;
case 0x52cd0d:c.instructions+=6;goto B52cd0d;
case 0x52cd0e:c.instructions+=5;goto B52cd0e;
case 0x52cd15:c.instructions+=4;goto B52cd15;
case 0x52cd16:c.instructions+=3;goto B52cd16;
case 0x52cd1a:c.instructions+=2;goto B52cd1a;
case 0x52cd20:c.instructions+=1;goto B52cd20;
case 0x52cd22:goto L52cd22;
case 0x52cd24:c.instructions+=1;goto B52cd24;
case 0x52cd29:goto L52cd29;
case 0x52cd2c:c.instructions+=4;goto B52cd2c;
case 0x52cd30:c.instructions+=3;goto B52cd30;
case 0x52cd32:c.instructions+=2;goto B52cd32;
case 0x52cd3a:c.instructions+=1;goto B52cd3a;
case 0x52cd3c:goto L52cd3c;
case 0x52cd3d:c.instructions+=2;goto B52cd3d;
case 0x52cd3f:c.instructions+=1;goto B52cd3f;
case 0x52cd44:goto L52cd44;
case 0x52cd46:goto L52cd46;
case 0x52cd48:goto L52cd48;
case 0x52cd4e:c.instructions+=10;goto B52cd4e;
case 0x52cd53:c.instructions+=9;goto B52cd53;
case 0x52cd56:c.instructions+=8;goto B52cd56;
case 0x52cd5d:c.instructions+=7;goto B52cd5d;
case 0x52cd5f:c.instructions+=6;goto B52cd5f;
case 0x52cd64:c.instructions+=5;goto B52cd64;
case 0x52cd68:c.instructions+=4;goto B52cd68;
case 0x52cd6f:c.instructions+=3;goto B52cd6f;
case 0x52cd70:c.instructions+=2;goto B52cd70;
case 0x52cd73:c.instructions+=1;goto B52cd73;
case 0x52cd74:goto L52cd74;
case 0x52cd78:c.instructions+=5;goto B52cd78;
case 0x52cd7a:c.instructions+=4;goto B52cd7a;
case 0x52cd81:c.instructions+=3;goto B52cd81;
case 0x52cd82:c.instructions+=2;goto B52cd82;
case 0x52cd85:c.instructions+=1;goto B52cd85;
case 0x52cd90:goto L52cd90;
case 0x52cd94:c.instructions+=2;goto B52cd94;
case 0x52cd9a:c.instructions+=1;goto B52cd9a;
case 0x52cd9c:goto L52cd9c;
case 0x52cd9f:c.instructions+=4;goto B52cd9f;
case 0x52cda2:c.instructions+=3;goto B52cda2;
case 0x52cda3:c.instructions+=2;goto B52cda3;
case 0x52cda8:c.instructions+=1;goto B52cda8;
case 0x52cdad:goto L52cdad;
case 0x52cdb2:c.instructions+=1;goto B52cdb2;
case 0x52cdb3:goto L52cdb3;
case 0x52cdb5:c.instructions+=1;goto B52cdb5;
case 0x52cdc0:goto L52cdc0;
case 0x52cdc5:c.instructions+=1;goto B52cdc5;
case 0x52cdd0:goto L52cdd0;
case 0x52cdd5:c.instructions+=4;goto B52cdd5;
case 0x52cdd7:c.instructions+=3;goto B52cdd7;
case 0x52cdd8:c.instructions+=2;goto B52cdd8;
case 0x52cdda:c.instructions+=1;goto B52cdda;
case 0x52cddc:goto L52cddc;
case 0x52cddd:c.instructions+=1;goto B52cddd;
case 0x52cde2:goto L52cde2;
case 0x52cde5:c.instructions+=4;goto B52cde5;
case 0x52cde6:c.instructions+=3;goto B52cde6;
case 0x52cdeb:c.instructions+=2;goto B52cdeb;
case 0x52cdec:c.instructions+=1;goto B52cdec;
case 0x52cdf1:goto L52cdf1;
case 0x52cdf3:c.instructions+=9;goto B52cdf3;
case 0x52cdf5:c.instructions+=8;goto B52cdf5;
case 0x52cdf7:c.instructions+=7;goto B52cdf7;
case 0x52cdfa:c.instructions+=6;goto B52cdfa;
case 0x52cdfd:c.instructions+=5;goto B52cdfd;
case 0x52ce00:c.instructions+=4;goto B52ce00;
case 0x52ce03:c.instructions+=3;goto B52ce03;
case 0x52ce04:c.instructions+=2;goto B52ce04;
case 0x52ce09:c.instructions+=1;goto B52ce09;
case 0x52ce0e:goto L52ce0e;
case 0x52ce11:c.instructions+=3;goto B52ce11;
case 0x52ce14:c.instructions+=2;goto B52ce14;
case 0x52ce1a:c.instructions+=1;goto B52ce1a;
case 0x52ce1c:goto L52ce1c;
case 0x52ce1d:c.instructions+=4;goto B52ce1d;
case 0x52ce22:c.instructions+=3;goto B52ce22;
case 0x52ce24:c.instructions+=2;goto B52ce24;
case 0x52ce25:c.instructions+=1;goto B52ce25;
case 0x52ce2a:goto L52ce2a;
case 0x52ce2d:c.instructions+=1;goto B52ce2d;
case 0x52ce2e:goto L52ce2e;
case 0x52ce38:c.instructions+=2;goto B52ce38;
case 0x52ce39:c.instructions+=1;goto B52ce39;
case 0x52ce40:goto L52ce40;
case 0x52ce44:c.instructions+=5;goto B52ce44;
case 0x52ce45:c.instructions+=4;goto B52ce45;
case 0x52ce47:c.instructions+=3;goto B52ce47;
case 0x52ce48:c.instructions+=2;goto B52ce48;
case 0x52ce4d:c.instructions+=1;goto B52ce4d;
case 0x52ce52:goto L52ce52;
case 0x52ce54:c.instructions+=1;goto B52ce54;
case 0x52ce56:goto L52ce56;
case 0x52ce59:c.instructions+=2;goto B52ce59;
case 0x52ce5b:c.instructions+=1;goto B52ce5b;
case 0x52ce5d:goto L52ce5d;
case 0x52ce63:c.instructions+=4;goto B52ce63;
case 0x52ce64:c.instructions+=3;goto B52ce64;
case 0x52ce66:c.instructions+=2;goto B52ce66;
case 0x52ce68:c.instructions+=1;goto B52ce68;
case 0x52ce6a:goto L52ce6a;
case 0x52ce70:c.instructions+=4;goto B52ce70;
case 0x52ce71:c.instructions+=3;goto B52ce71;
case 0x52ce75:c.instructions+=2;goto B52ce75;
case 0x52ce76:c.instructions+=1;goto B52ce76;
case 0x52ce78:goto L52ce78;
case 0x52ce7a:c.instructions+=2;goto B52ce7a;
case 0x52ce7d:c.instructions+=1;goto B52ce7d;
case 0x52ce7f:goto L52ce7f;
case 0x52ce81:goto L52ce81;
case 0x52ce84:c.instructions+=2;goto B52ce84;
case 0x52ce85:c.instructions+=1;goto B52ce85;
case 0x52ce87:goto L52ce87;
case 0x52ce89:c.instructions+=3;goto B52ce89;
case 0x52ce8a:c.instructions+=2;goto B52ce8a;
case 0x52ce8b:c.instructions+=1;goto B52ce8b;
case 0x52ce8d:goto L52ce8d;
case 0x52ce90:c.instructions+=4;goto B52ce90;
case 0x52ce92:c.instructions+=3;goto B52ce92;
case 0x52ce93:c.instructions+=2;goto B52ce93;
case 0x52ce94:c.instructions+=1;goto B52ce94;
case 0x52ce99:goto L52ce99;
case 0x52ce9a:goto L52ce9a;
case 0x52ce9b:c.instructions+=1;goto B52ce9b;
case 0x52cea0:goto L52cea0;
case 0x52cea6:c.instructions+=2;goto B52cea6;
case 0x52cea8:c.instructions+=1;goto B52cea8;
case 0x52ceaa:goto L52ceaa;
case 0x52ceae:c.instructions+=4;goto B52ceae;
case 0x52ceb2:c.instructions+=3;goto B52ceb2;
case 0x52ceb3:c.instructions+=2;goto B52ceb3;
case 0x52ceb4:c.instructions+=1;goto B52ceb4;
case 0x52ceb9:goto L52ceb9;
case 0x52cec0:goto L52cec0;
case 0x52cec6:c.instructions+=2;goto B52cec6;
case 0x52cec8:c.instructions+=1;goto B52cec8;
case 0x52ceca:goto L52ceca;
case 0x52cece:c.instructions+=2;goto B52cece;
case 0x52ced0:c.instructions+=1;goto B52ced0;
case 0x52ced2:goto L52ced2;
case 0x52ced5:c.instructions+=4;goto B52ced5;
case 0x52ced9:c.instructions+=3;goto B52ced9;
case 0x52ceda:c.instructions+=2;goto B52ceda;
case 0x52cedb:c.instructions+=1;goto B52cedb;
case 0x52cee0:goto L52cee0;
case 0x52cef0:goto L52cef0;
case 0x52cef5:c.instructions+=4;goto B52cef5;
case 0x52cef7:c.instructions+=3;goto B52cef7;
case 0x52cef8:c.instructions+=2;goto B52cef8;
case 0x52cef9:c.instructions+=1;goto B52cef9;
case 0x52cefb:goto L52cefb;
case 0x52cf00:c.instructions+=2;goto B52cf00;
case 0x52cf02:c.instructions+=1;goto B52cf02;
case 0x52cf04:goto L52cf04;
case 0x52cf07:c.instructions+=2;goto B52cf07;
case 0x52cf09:c.instructions+=1;goto B52cf09;
case 0x52cf0b:goto L52cf0b;
case 0x52cf11:c.instructions+=5;goto B52cf11;
case 0x52cf15:c.instructions+=4;goto B52cf15;
case 0x52cf1b:c.instructions+=3;goto B52cf1b;
case 0x52cf1c:c.instructions+=2;goto B52cf1c;
case 0x52cf1d:c.instructions+=1;goto B52cf1d;
case 0x52cf22:goto L52cf22;
case 0x52cf24:c.instructions+=1;goto B52cf24;
case 0x52cf26:goto L52cf26;
case 0x52cf2c:c.instructions+=4;goto B52cf2c;
case 0x52cf32:c.instructions+=3;goto B52cf32;
case 0x52cf33:c.instructions+=2;goto B52cf33;
case 0x52cf34:c.instructions+=1;goto B52cf34;
case 0x52cf39:goto L52cf39;
case 0x52cf3b:goto L52cf3b;
case 0x52cf3f:c.instructions+=3;goto B52cf3f;
case 0x52cf40:c.instructions+=2;goto B52cf40;
case 0x52cf45:c.instructions+=1;goto B52cf45;
case 0x52cf4a:goto L52cf4a;
case 0x52cf4c:c.instructions+=1;goto B52cf4c;
case 0x52cf4e:goto L52cf4e;
case 0x52cf51:goto L52cf51;
case 0x52cf53:c.instructions+=1;goto B52cf53;
case 0x52cf55:goto L52cf55;
case 0x52cf57:goto L52cf57;
case 0x52cf58:c.instructions+=2;goto B52cf58;
case 0x52cf59:c.instructions+=1;goto B52cf59;
case 0x52cf60:goto L52cf60;
case 0x52cf65:c.instructions+=2;goto B52cf65;
case 0x52cf67:c.instructions+=1;goto B52cf67;
case 0x52cf69:goto L52cf69;
case 0x52cf6e:c.instructions+=2;goto B52cf6e;
case 0x52cf70:c.instructions+=1;goto B52cf70;
case 0x52cf72:goto L52cf72;
case 0x52cf75:c.instructions+=2;goto B52cf75;
case 0x52cf77:c.instructions+=1;goto B52cf77;
case 0x52cf79:goto L52cf79;
case 0x52cf7d:c.instructions+=5;goto B52cf7d;
case 0x52cf83:c.instructions+=4;goto B52cf83;
case 0x52cf86:c.instructions+=3;goto B52cf86;
case 0x52cf87:c.instructions+=2;goto B52cf87;
case 0x52cf88:c.instructions+=1;goto B52cf88;
case 0x52cf8d:goto L52cf8d;
case 0x52cf8f:c.instructions+=2;goto B52cf8f;
case 0x52cf92:c.instructions+=1;goto B52cf92;
case 0x52cf93:goto L52cf93;
case 0x52cf97:c.instructions+=3;goto B52cf97;
case 0x52cf98:c.instructions+=2;goto B52cf98;
case 0x52cf9d:c.instructions+=1;goto B52cf9d;
case 0x52cfa2:goto L52cfa2;
case 0x52cfa4:c.instructions+=1;goto B52cfa4;
case 0x52cfa6:goto L52cfa6;
case 0x52cfa9:c.instructions+=3;goto B52cfa9;
case 0x52cfab:c.instructions+=2;goto B52cfab;
case 0x52cfae:c.instructions+=1;goto B52cfae;
case 0x52cfaf:goto L52cfaf;
case 0x52cfb1:c.instructions+=3;goto B52cfb1;
case 0x52cfb3:c.instructions+=2;goto B52cfb3;
case 0x52cfb6:c.instructions+=1;goto B52cfb6;
case 0x52cfc0:goto L52cfc0;
case 0x52cfc6:c.instructions+=8;goto B52cfc6;
case 0x52cfc8:c.instructions+=7;goto B52cfc8;
case 0x52cfcd:c.instructions+=6;goto B52cfcd;
case 0x52cfce:c.instructions+=5;goto B52cfce;
case 0x52cfd2:c.instructions+=4;goto B52cfd2;
case 0x52cfd9:c.instructions+=3;goto B52cfd9;
case 0x52cfdc:c.instructions+=2;goto B52cfdc;
case 0x52cfdd:c.instructions+=1;goto B52cfdd;
case 0x52cfe2:goto L52cfe2;
case 0x52cfe5:c.instructions+=2;goto B52cfe5;
case 0x52cfe7:c.instructions+=1;goto B52cfe7;
case 0x52cfe9:goto L52cfe9;
case 0x52cfed:c.instructions+=5;goto B52cfed;
case 0x52cff5:c.instructions+=4;goto B52cff5;
case 0x52cff9:c.instructions+=3;goto B52cff9;
case 0x52cffd:c.instructions+=2;goto B52cffd;
case 0x52cffe:c.instructions+=1;goto B52cffe;
default:missing_instruction(c.pc);}
B52c001:L52c001:{c.instructions+=3;NFSU2_TR(0x52c001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c002:{NFSU2_TR(0x52c002);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c005:{NFSU2_TR(0x52c005);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c006:L52c006:{c.instructions+=13;NFSU2_TR(0x52c006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B52c008:{NFSU2_TR(0x52c008);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c00b:{NFSU2_TR(0x52c00b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52c00e:{NFSU2_TR(0x52c00e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c012:{NFSU2_TR(0x52c012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c013:{NFSU2_TR(0x52c013);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B52c015:{NFSU2_TR(0x52c015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c016:{NFSU2_TR(0x52c016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52c017:{NFSU2_TR(0x52c017);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c01a:{NFSU2_TR(0x52c01a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c01d:{NFSU2_TR(0x52c01d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c01e:{NFSU2_TR(0x52c01e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c021:{NFSU2_TR(0x52c021);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c022:L52c022:{c.instructions+=15;NFSU2_TR(0x52c022);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52c025:{NFSU2_TR(0x52c025);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c028:{NFSU2_TR(0x52c028);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52c02b:{NFSU2_TR(0x52c02b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B52c02d:{NFSU2_TR(0x52c02d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c031:{NFSU2_TR(0x52c031);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B52c033:{NFSU2_TR(0x52c033);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c034:{NFSU2_TR(0x52c034);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c037:{NFSU2_TR(0x52c037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c038:{NFSU2_TR(0x52c038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52c039:{NFSU2_TR(0x52c039);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c03c:{NFSU2_TR(0x52c03c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c03f:{NFSU2_TR(0x52c03f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c040:{NFSU2_TR(0x52c040);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c043:{NFSU2_TR(0x52c043);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c044:L52c044:{c.instructions+=5;NFSU2_TR(0x52c044);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52c048:{NFSU2_TR(0x52c048);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52c04e:{NFSU2_TR(0x52c04e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52c050:{NFSU2_TR(0x52c050);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52c053:{NFSU2_TR(0x52c053);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L52c152;}}
}
B52c059:L52c059:{c.instructions+=5;NFSU2_TR(0x52c059);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52c05d:{NFSU2_TR(0x52c05d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52c063:{NFSU2_TR(0x52c063);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52c065:{NFSU2_TR(0x52c065);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52c068:{NFSU2_TR(0x52c068);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L52c157;}}
}
B52c06e:L52c06e:{c.instructions+=4;NFSU2_TR(0x52c06e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
w4(R+0,u32(r1(U+0)));
}
B52c072:{NFSU2_TR(0x52c072);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B52c073:{NFSU2_TR(0x52c073);
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
B52c076:{NFSU2_TR(0x52c076);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52c21a;}}
}
B52c07c:L52c07c:{c.instructions+=1;NFSU2_TR(0x52c07c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x52c23cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52c083:L52c083:{c.instructions+=10;NFSU2_TR(0x52c083);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c087:{NFSU2_TR(0x52c087);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c08b:{NFSU2_TR(0x52c08b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52c08e:{NFSU2_TR(0x52c08e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c08f:{NFSU2_TR(0x52c08f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c092:{NFSU2_TR(0x52c092);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c093:{NFSU2_TR(0x52c093);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c094:{NFSU2_TR(0x52c094);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c095:{NFSU2_TR(0x52c095);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c096:{NFSU2_TR(0x52c096);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c09bull));
TAIL_STATIC(0x5050d0u,505);
}
B52c09b:L52c09b:{c.instructions+=7;NFSU2_TR(0x52c09b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B52c09e:{NFSU2_TR(0x52c09e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c09f:{NFSU2_TR(0x52c09f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c0a0:{NFSU2_TR(0x52c0a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52c0a1:{NFSU2_TR(0x52c0a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c0a2:{NFSU2_TR(0x52c0a2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c0a5:{NFSU2_TR(0x52c0a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c0a6:L52c0a6:{c.instructions+=15;NFSU2_TR(0x52c0a6);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52c0a9:{NFSU2_TR(0x52c0a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c0ad:{NFSU2_TR(0x52c0ad);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52c0b0:{NFSU2_TR(0x52c0b0);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B52c0b2:{NFSU2_TR(0x52c0b2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52c0b6:{NFSU2_TR(0x52c0b6);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B52c0b8:{NFSU2_TR(0x52c0b8);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52c0ba:{NFSU2_TR(0x52c0ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c0bb:{NFSU2_TR(0x52c0bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c0bc:{NFSU2_TR(0x52c0bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52c0bd:{NFSU2_TR(0x52c0bd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52c0bf:{NFSU2_TR(0x52c0bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c0c0:{NFSU2_TR(0x52c0c0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52c0c2:{NFSU2_TR(0x52c0c2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c0c5:{NFSU2_TR(0x52c0c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c0c6:L52c0c6:{c.instructions+=10;NFSU2_TR(0x52c0c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52c0ca:{NFSU2_TR(0x52c0ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c0ce:{NFSU2_TR(0x52c0ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c0cf:{NFSU2_TR(0x52c0cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c0d0:{NFSU2_TR(0x52c0d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c0d1:{NFSU2_TR(0x52c0d1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B52c0d4:{NFSU2_TR(0x52c0d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c0d5:{NFSU2_TR(0x52c0d5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x10ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c0d8:{NFSU2_TR(0x52c0d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c0d9:{NFSU2_TR(0x52c0d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c0deull));
TAIL_STATIC(0x505110u,505);
}
B52c0de:L52c0de:{c.instructions+=7;NFSU2_TR(0x52c0de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B52c0e1:{NFSU2_TR(0x52c0e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c0e2:{NFSU2_TR(0x52c0e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c0e3:{NFSU2_TR(0x52c0e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52c0e4:{NFSU2_TR(0x52c0e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c0e5:{NFSU2_TR(0x52c0e5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c0e8:{NFSU2_TR(0x52c0e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c0e9:L52c0e9:{c.instructions+=10;NFSU2_TR(0x52c0e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c0ed:{NFSU2_TR(0x52c0ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52c0f1:{NFSU2_TR(0x52c0f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c0f2:{NFSU2_TR(0x52c0f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c0f3:{NFSU2_TR(0x52c0f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c0f4:{NFSU2_TR(0x52c0f4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B52c0f7:{NFSU2_TR(0x52c0f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c0f8:{NFSU2_TR(0x52c0f8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x10ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c0fb:{NFSU2_TR(0x52c0fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c0fc:{NFSU2_TR(0x52c0fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c101ull));
TAIL_STATIC(0x505150u,505);
}
B52c101:L52c101:{c.instructions+=7;NFSU2_TR(0x52c101);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B52c104:{NFSU2_TR(0x52c104);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c105:{NFSU2_TR(0x52c105);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c106:{NFSU2_TR(0x52c106);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52c107:{NFSU2_TR(0x52c107);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c108:{NFSU2_TR(0x52c108);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c10b:{NFSU2_TR(0x52c10b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c10c:L52c10c:{c.instructions+=10;NFSU2_TR(0x52c10c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c110:{NFSU2_TR(0x52c110);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c114:{NFSU2_TR(0x52c114);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c115:{NFSU2_TR(0x52c115);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c116:{NFSU2_TR(0x52c116);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c117:{NFSU2_TR(0x52c117);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B52c11a:{NFSU2_TR(0x52c11a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c11b:{NFSU2_TR(0x52c11b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B52c11e:{NFSU2_TR(0x52c11e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c11f:{NFSU2_TR(0x52c11f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c124ull));
TAIL_STATIC(0x519b00u,519);
}
B52c124:L52c124:{c.instructions+=7;NFSU2_TR(0x52c124);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B52c127:{NFSU2_TR(0x52c127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c128:{NFSU2_TR(0x52c128);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c129:{NFSU2_TR(0x52c129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52c12a:{NFSU2_TR(0x52c12a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c12b:{NFSU2_TR(0x52c12b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c12e:{NFSU2_TR(0x52c12e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c12f:L52c12f:{c.instructions+=10;NFSU2_TR(0x52c12f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52c133:{NFSU2_TR(0x52c133);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c137:{NFSU2_TR(0x52c137);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c138:{NFSU2_TR(0x52c138);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c139:{NFSU2_TR(0x52c139);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c13a:{NFSU2_TR(0x52c13a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B52c13d:{NFSU2_TR(0x52c13d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c13e:{NFSU2_TR(0x52c13e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B52c141:{NFSU2_TR(0x52c141);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c142:{NFSU2_TR(0x52c142);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c147ull));
TAIL_STATIC(0x5051a0u,505);
}
B52c147:L52c147:{c.instructions+=7;NFSU2_TR(0x52c147);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B52c14a:{NFSU2_TR(0x52c14a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c14b:{NFSU2_TR(0x52c14b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c14c:{NFSU2_TR(0x52c14c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52c14d:{NFSU2_TR(0x52c14d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c14e:{NFSU2_TR(0x52c14e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c151:{NFSU2_TR(0x52c151);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c152:L52c152:{c.instructions+=2;NFSU2_TR(0x52c152);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52c155:{NFSU2_TR(0x52c155);
{goto L52c15a;}
}
B52c157:L52c157:{c.instructions+=1;NFSU2_TR(0x52c157);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52c15a:L52c15a:{c.instructions+=4;NFSU2_TR(0x52c15a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
w4(R+0,u32(r1(U+0)));
}
B52c15e:{NFSU2_TR(0x52c15e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B52c15f:{NFSU2_TR(0x52c15f);
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
B52c162:{NFSU2_TR(0x52c162);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52c21a;}}
}
B52c168:L52c168:{c.instructions+=1;NFSU2_TR(0x52c168);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x52c254ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52c16f:L52c16f:{c.instructions+=11;NFSU2_TR(0x52c16f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52c171:{NFSU2_TR(0x52c171);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52c173:{NFSU2_TR(0x52c173);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c174:{NFSU2_TR(0x52c174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c175:{NFSU2_TR(0x52c175);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B52c177:{NFSU2_TR(0x52c177);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c17b:{NFSU2_TR(0x52c17b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52c17c:{NFSU2_TR(0x52c17c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B52c17e:{NFSU2_TR(0x52c17e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c17f:{NFSU2_TR(0x52c17f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c182:{NFSU2_TR(0x52c182);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c183:L52c183:{c.instructions+=10;NFSU2_TR(0x52c183);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52c185:{NFSU2_TR(0x52c185);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c186:{NFSU2_TR(0x52c186);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52c188:{NFSU2_TR(0x52c188);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c18c:{NFSU2_TR(0x52c18c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c18d:{NFSU2_TR(0x52c18d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52c18e:{NFSU2_TR(0x52c18e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52c190:{NFSU2_TR(0x52c190);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c191:{NFSU2_TR(0x52c191);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c194:{NFSU2_TR(0x52c194);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c195:L52c195:{c.instructions+=13;NFSU2_TR(0x52c195);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52c197:{NFSU2_TR(0x52c197);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c19b:{NFSU2_TR(0x52c19b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52c19d:{NFSU2_TR(0x52c19d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52c19f:{NFSU2_TR(0x52c19f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52c1a2:{NFSU2_TR(0x52c1a2);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52c1a5:{NFSU2_TR(0x52c1a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c1a6:{NFSU2_TR(0x52c1a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c1a7:{NFSU2_TR(0x52c1a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52c1a8:{NFSU2_TR(0x52c1a8);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52c1ab:{NFSU2_TR(0x52c1ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c1ac:{NFSU2_TR(0x52c1ac);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c1af:{NFSU2_TR(0x52c1af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c1b0:L52c1b0:{c.instructions+=16;NFSU2_TR(0x52c1b0);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52c1b2:{NFSU2_TR(0x52c1b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c1b6:{NFSU2_TR(0x52c1b6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52c1b8:{NFSU2_TR(0x52c1b8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52c1ba:{NFSU2_TR(0x52c1ba);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52c1bd:{NFSU2_TR(0x52c1bd);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52c1c0:{NFSU2_TR(0x52c1c0);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52c1c3:{NFSU2_TR(0x52c1c3);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52c1c6:{NFSU2_TR(0x52c1c6);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52c1c9:{NFSU2_TR(0x52c1c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c1ca:{NFSU2_TR(0x52c1ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c1cb:{NFSU2_TR(0x52c1cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52c1cc:{NFSU2_TR(0x52c1cc);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52c1cf:{NFSU2_TR(0x52c1cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c1d0:{NFSU2_TR(0x52c1d0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c1d3:{NFSU2_TR(0x52c1d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c1d4:L52c1d4:{c.instructions+=4;NFSU2_TR(0x52c1d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c1d5:{NFSU2_TR(0x52c1d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52c1d9:{NFSU2_TR(0x52c1d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c1da:{NFSU2_TR(0x52c1da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c1dfull));
TAIL_STATIC(0x4fe6b0u,4fe);
}
B52c1df:L52c1df:{c.instructions+=3;NFSU2_TR(0x52c1df);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c1e3:{NFSU2_TR(0x52c1e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c1e4:{NFSU2_TR(0x52c1e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c1e9ull));
TAIL_STATIC(0x4955f0u,495);
}
B52c1e9:L52c1e9:{c.instructions+=6;NFSU2_TR(0x52c1e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c1ea:{NFSU2_TR(0x52c1ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c1eb:{NFSU2_TR(0x52c1eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52c1ec:{NFSU2_TR(0x52c1ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c1ed:{NFSU2_TR(0x52c1ed);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c1f0:{NFSU2_TR(0x52c1f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c1f1:L52c1f1:{c.instructions+=15;NFSU2_TR(0x52c1f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52c1f4:{NFSU2_TR(0x52c1f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B52c1f7:{NFSU2_TR(0x52c1f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c1fb:{NFSU2_TR(0x52c1fb);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B52c1fd:{NFSU2_TR(0x52c1fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c200:{NFSU2_TR(0x52c200);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52c203:{NFSU2_TR(0x52c203);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B52c206:{NFSU2_TR(0x52c206);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c209:{NFSU2_TR(0x52c209);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B52c20b:{NFSU2_TR(0x52c20b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52c20d:{NFSU2_TR(0x52c20d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B52c20f:{NFSU2_TR(0x52c20f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B52c211:{NFSU2_TR(0x52c211);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c214:{NFSU2_TR(0x52c214);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B52c217:{NFSU2_TR(0x52c217);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c21a:L52c21a:{c.instructions+=6;NFSU2_TR(0x52c21a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c21b:{NFSU2_TR(0x52c21b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c21c:{NFSU2_TR(0x52c21c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52c21d:{NFSU2_TR(0x52c21d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c21e:{NFSU2_TR(0x52c21e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c221:{NFSU2_TR(0x52c221);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c270:L52c270:{c.instructions+=7;NFSU2_TR(0x52c270);
__builtin_memmove((R+0),(R+4),4);
}
B52c272:{NFSU2_TR(0x52c272);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c274:{NFSU2_TR(0x52c274);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+0)),r4(U+0));
}
B52c27a:{NFSU2_TR(0x52c27a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c27d:{NFSU2_TR(0x52c27d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c280:{NFSU2_TR(0x52c280);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c283:{NFSU2_TR(0x52c283);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c290:L52c290:{c.instructions+=6;NFSU2_TR(0x52c290);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c291:{NFSU2_TR(0x52c291);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B52c295:{NFSU2_TR(0x52c295);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52c298:{NFSU2_TR(0x52c298);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c299:{NFSU2_TR(0x52c299);
__builtin_memmove((R+24),(R+4),4);
}
B52c29b:{NFSU2_TR(0x52c29b);
if(r1(R+518)){{goto L52c2c8;}}
}
B52c29d:L52c29d:{c.instructions+=8;NFSU2_TR(0x52c29d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c2a0:{NFSU2_TR(0x52c2a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c2a1:{NFSU2_TR(0x52c2a1);
u8 U[4];
w4(U+0,u32(0x52c420ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c2a6:{NFSU2_TR(0x52c2a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c2a9:{NFSU2_TR(0x52c2a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c2aa:{NFSU2_TR(0x52c2aa);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c2ac:{NFSU2_TR(0x52c2ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c2ad:{NFSU2_TR(0x52c2ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c2b2ull));
TAIL_STATIC(0x75c401u,75c);
}
B52c2b2:L52c2b2:{c.instructions+=2;NFSU2_TR(0x52c2b2);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52c2b5:{NFSU2_TR(0x52c2b5);
if(r1(R+518)){{goto L52c2c0;}}
}
B52c2b7:L52c2b7:{c.instructions+=2;NFSU2_TR(0x52c2b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c2b8:{NFSU2_TR(0x52c2b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c2bdull));
TAIL_STATIC(0x575630u,575);
}
B52c2bd:L52c2bd:{c.instructions+=1;NFSU2_TR(0x52c2bd);
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
B52c2c0:L52c2c0:{c.instructions+=5;NFSU2_TR(0x52c2c0);
__builtin_memmove((R+0),(R+28),4);
}
B52c2c2:{NFSU2_TR(0x52c2c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c2c3:{NFSU2_TR(0x52c2c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c2c4:{NFSU2_TR(0x52c2c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c2c5:{NFSU2_TR(0x52c2c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c2c8:L52c2c8:{c.instructions+=3;NFSU2_TR(0x52c2c8);
__builtin_memmove((R+4),(R+24),4);
}
B52c2ca:{NFSU2_TR(0x52c2ca);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+24)),r4(U+0));
}
B52c2d0:{NFSU2_TR(0x52c2d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c2d5ull));
TAIL_STATIC(0x511670u,511);
}
B52c2d5:L52c2d5:{c.instructions+=2;NFSU2_TR(0x52c2d5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52c2d8:{NFSU2_TR(0x52c2d8);
if(r1(R+518)){{goto L52c2e3;}}
}
B52c2da:L52c2da:{c.instructions+=2;NFSU2_TR(0x52c2da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c2db:{NFSU2_TR(0x52c2db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c2e0ull));
TAIL_STATIC(0x575630u,575);
}
B52c2e0:L52c2e0:{c.instructions+=1;NFSU2_TR(0x52c2e0);
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
B52c2e3:L52c2e3:{c.instructions+=4;NFSU2_TR(0x52c2e3);
__builtin_memmove((R+0),(R+24),4);
}
B52c2e5:{NFSU2_TR(0x52c2e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c2e6:{NFSU2_TR(0x52c2e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c2e7:{NFSU2_TR(0x52c2e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c2f0:L52c2f0:{c.instructions+=8;NFSU2_TR(0x52c2f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c2f1:{NFSU2_TR(0x52c2f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c2f2:{NFSU2_TR(0x52c2f2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B52c2f6:{NFSU2_TR(0x52c2f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c2f7:{NFSU2_TR(0x52c2f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c2f8:{NFSU2_TR(0x52c2f8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c2f9:{NFSU2_TR(0x52c2f9);
__builtin_memmove((R+24),(R+4),4);
}
B52c2fb:{NFSU2_TR(0x52c2fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c300ull));
TAIL_STATIC(0x7433a0u,743);
}
B52c300:L52c300:{c.instructions+=6;NFSU2_TR(0x52c300);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52c303:{NFSU2_TR(0x52c303);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c306:{NFSU2_TR(0x52c306);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c309:{NFSU2_TR(0x52c309);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c30a:{NFSU2_TR(0x52c30a);
__builtin_memmove((R+4),(R+12),4);
}
B52c30c:{NFSU2_TR(0x52c30c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c311ull));
TAIL_STATIC(0x51de90u,51d);
}
B52c311:L52c311:{c.instructions+=5;NFSU2_TR(0x52c311);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52c313:{NFSU2_TR(0x52c313);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c314:{NFSU2_TR(0x52c314);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c315:{NFSU2_TR(0x52c315);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c316:{NFSU2_TR(0x52c316);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c31bull));
TAIL_STATIC(0x7433f0u,743);
}
B52c31b:L52c31b:{c.instructions+=9;NFSU2_TR(0x52c31b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c31e:{NFSU2_TR(0x52c31e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52c321:{NFSU2_TR(0x52c321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c322:{NFSU2_TR(0x52c322);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c325:{NFSU2_TR(0x52c325);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c328:{NFSU2_TR(0x52c328);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c329:{NFSU2_TR(0x52c329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52c32a:{NFSU2_TR(0x52c32a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c32b:{NFSU2_TR(0x52c32b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c330:L52c330:{c.instructions+=23;NFSU2_TR(0x52c330);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c332:{NFSU2_TR(0x52c332);
u8 U[4];
w4(U+0,u32(0x7774fbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c337:{NFSU2_TR(0x52c337);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c33d:{NFSU2_TR(0x52c33d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c33e:{NFSU2_TR(0x52c33e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c345:{NFSU2_TR(0x52c345);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c346:{NFSU2_TR(0x52c346);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c34a:{NFSU2_TR(0x52c34a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52c34e:{NFSU2_TR(0x52c34e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c34f:{NFSU2_TR(0x52c34f);
__builtin_memmove((R+24),(R+4),4);
}
B52c351:{NFSU2_TR(0x52c351);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c354:{NFSU2_TR(0x52c354);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B52c356:{NFSU2_TR(0x52c356);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52c359:{NFSU2_TR(0x52c359);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c35c:{NFSU2_TR(0x52c35c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c35f:{NFSU2_TR(0x52c35f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c362:{NFSU2_TR(0x52c362);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c366:{NFSU2_TR(0x52c366);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B52c368:{NFSU2_TR(0x52c368);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c36b:{NFSU2_TR(0x52c36b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52c36e:{NFSU2_TR(0x52c36e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c36f:{NFSU2_TR(0x52c36f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c373:{NFSU2_TR(0x52c373);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c378ull));
TAIL_STATIC(0x43c780u,43c);
}
B52c378:L52c378:{c.instructions+=7;NFSU2_TR(0x52c378);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c37c:{NFSU2_TR(0x52c37c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52c37f:{NFSU2_TR(0x52c37f);
__builtin_memmove((R+0),(R+24),4);
}
B52c381:{NFSU2_TR(0x52c381);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c382:{NFSU2_TR(0x52c382);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c389:{NFSU2_TR(0x52c389);
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
B52c38c:{NFSU2_TR(0x52c38c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c390:L52c390:{c.instructions+=2;NFSU2_TR(0x52c390);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B52c393:{NFSU2_TR(0x52c393);
TAIL_STATIC(0x525ac0u,525);
}
B52c3a0:L52c3a0:{c.instructions+=7;NFSU2_TR(0x52c3a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c3a1:{NFSU2_TR(0x52c3a1);
__builtin_memmove((R+12),(R+4),4);
}
B52c3a3:{NFSU2_TR(0x52c3a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c3a6:{NFSU2_TR(0x52c3a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c3a7:{NFSU2_TR(0x52c3a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c3aa:{NFSU2_TR(0x52c3aa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52c3ac:{NFSU2_TR(0x52c3ac);
if(r1(R+518)){{goto L52c409;}}
}
B52c3ae:L52c3ae:{c.instructions+=2;NFSU2_TR(0x52c3ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c3af:{NFSU2_TR(0x52c3af);
}
B52c3b0:L52c3b0:{c.instructions+=8;NFSU2_TR(0x52c3b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B52c3b2:{NFSU2_TR(0x52c3b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c3b5:{NFSU2_TR(0x52c3b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52c3b7:{NFSU2_TR(0x52c3b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B52c3b9:{NFSU2_TR(0x52c3b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c3bc:{NFSU2_TR(0x52c3bc);
__builtin_memmove((R+4),gp(0x838480),4);
}
B52c3c2:{NFSU2_TR(0x52c3c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c3c3:{NFSU2_TR(0x52c3c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c3c8ull));
TAIL_STATIC(0x43cd80u,43c);
}
B52c3c8:L52c3c8:{c.instructions+=3;NFSU2_TR(0x52c3c8);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B52c3ca:{NFSU2_TR(0x52c3ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c3cb:{NFSU2_TR(0x52c3cb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L52c3da;}}
}
B52c3cd:L52c3cd:{c.instructions+=2;NFSU2_TR(0x52c3cd);
__builtin_memmove((R+4),gp(0x838480),4);
}
B52c3d3:{NFSU2_TR(0x52c3d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c3d8ull));
TAIL_STATIC(0x43cdf0u,43c);
}
B52c3d8:L52c3d8:{c.instructions+=1;NFSU2_TR(0x52c3d8);
{goto L52c404;}
}
B52c3da:L52c3da:{c.instructions+=2;NFSU2_TR(0x52c3da);
__builtin_memmove((R+4),gp(0x838484),4);
}
B52c3e0:{NFSU2_TR(0x52c3e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c3e5ull));
TAIL_STATIC(0x43cdf0u,43c);
}
B52c3e5:L52c3e5:{c.instructions+=4;NFSU2_TR(0x52c3e5);
__builtin_memmove((R+0),gp(0x838484),4);
}
B52c3ea:{NFSU2_TR(0x52c3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c3ed:{NFSU2_TR(0x52c3ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c3ef:{NFSU2_TR(0x52c3ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52c404;}}
}
B52c3f1:L52c3f1:{c.instructions+=2;NFSU2_TR(0x52c3f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c3f2:{NFSU2_TR(0x52c3f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c3f7ull));
TAIL_STATIC(0x440e40u,440);
}
B52c3f7:L52c3f7:{c.instructions+=2;NFSU2_TR(0x52c3f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52c3fa:{NFSU2_TR(0x52c3fa);
s4(0x838484,u32(0x0ull));
}
B52c404:L52c404:{c.instructions+=2;NFSU2_TR(0x52c404);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B52c406:{NFSU2_TR(0x52c406);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c3b0u);}goto L52c3b0;}}
}
B52c408:L52c408:{c.instructions+=1;NFSU2_TR(0x52c408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c409:L52c409:{c.instructions+=7;NFSU2_TR(0x52c409);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c40c:{NFSU2_TR(0x52c40c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffdull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c40f:{NFSU2_TR(0x52c40f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c410:{NFSU2_TR(0x52c410);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c413:{NFSU2_TR(0x52c413);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52c41a:{NFSU2_TR(0x52c41a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c41b:{NFSU2_TR(0x52c41b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c420:L52c420:{c.instructions+=2;NFSU2_TR(0x52c420);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B52c426:{NFSU2_TR(0x52c426);
TAIL_STATIC(0x511670u,511);
}
B52c430:L52c430:{c.instructions+=11;NFSU2_TR(0x52c430);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c432:{NFSU2_TR(0x52c432);
u8 U[4];
w4(U+0,u32(0x777654ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c437:{NFSU2_TR(0x52c437);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c43d:{NFSU2_TR(0x52c43d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c43e:{NFSU2_TR(0x52c43e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c445:{NFSU2_TR(0x52c445);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c446:{NFSU2_TR(0x52c446);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c447:{NFSU2_TR(0x52c447);
__builtin_memmove((R+24),(R+4),4);
}
B52c449:{NFSU2_TR(0x52c449);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c44d:{NFSU2_TR(0x52c44d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52c455:{NFSU2_TR(0x52c455);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c45aull));
TAIL_STATIC(0x51a640u,51a);
}
B52c45a:L52c45a:{c.instructions+=4;NFSU2_TR(0x52c45a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4134ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52c460:{NFSU2_TR(0x52c460);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52c465:{NFSU2_TR(0x52c465);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B52c46b:{NFSU2_TR(0x52c46b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c470ull));
TAIL_STATIC(0x511670u,511);
}
B52c470:L52c470:{c.instructions+=4;NFSU2_TR(0x52c470);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52c476:{NFSU2_TR(0x52c476);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52c47b:{NFSU2_TR(0x52c47b);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B52c481:{NFSU2_TR(0x52c481);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c486ull));
TAIL_STATIC(0x511670u,511);
}
B52c486:L52c486:{c.instructions+=4;NFSU2_TR(0x52c486);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52c48c:{NFSU2_TR(0x52c48c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52c491:{NFSU2_TR(0x52c491);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B52c497:{NFSU2_TR(0x52c497);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c49cull));
TAIL_STATIC(0x511670u,511);
}
B52c49c:L52c49c:{c.instructions+=4;NFSU2_TR(0x52c49c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B52c4a2:{NFSU2_TR(0x52c4a2);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52c4a7:{NFSU2_TR(0x52c4a7);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B52c4ad:{NFSU2_TR(0x52c4ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c4b2ull));
TAIL_STATIC(0x511670u,511);
}
B52c4b2:L52c4b2:{c.instructions+=4;NFSU2_TR(0x52c4b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((R+4),(U+0),4);
}
B52c4b8:{NFSU2_TR(0x52c4b8);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52c4bd:{NFSU2_TR(0x52c4bd);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B52c4c3:{NFSU2_TR(0x52c4c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c4c8ull));
TAIL_STATIC(0x511670u,511);
}
B52c4c8:L52c4c8:{c.instructions+=4;NFSU2_TR(0x52c4c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B52c4ce:{NFSU2_TR(0x52c4ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B52c4d6:{NFSU2_TR(0x52c4d6);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B52c4dc:{NFSU2_TR(0x52c4dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c4e1ull));
TAIL_STATIC(0x511670u,511);
}
B52c4e1:L52c4e1:{c.instructions+=5;NFSU2_TR(0x52c4e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c4e5:{NFSU2_TR(0x52c4e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c4e6:{NFSU2_TR(0x52c4e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c4ed:{NFSU2_TR(0x52c4ed);
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
B52c4f0:{NFSU2_TR(0x52c4f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c500:L52c500:{c.instructions+=8;NFSU2_TR(0x52c500);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c501:{NFSU2_TR(0x52c501);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52c505:{NFSU2_TR(0x52c505);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c506:{NFSU2_TR(0x52c506);
__builtin_memmove((R+28),(R+4),4);
}
B52c508:{NFSU2_TR(0x52c508);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c50e:{NFSU2_TR(0x52c50e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52c510:{NFSU2_TR(0x52c510);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c511:{NFSU2_TR(0x52c511);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c514ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52c514:L52c514:{c.instructions+=2;NFSU2_TR(0x52c514);
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
B52c516:{NFSU2_TR(0x52c516);
if(r1(R+518)){{goto L52c560;}}
}
B52c518:L52c518:{c.instructions+=4;NFSU2_TR(0x52c518);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c519:{NFSU2_TR(0x52c519);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c51a:{NFSU2_TR(0x52c51a);
__builtin_memmove((R+4),(R+28),4);
}
B52c51c:{NFSU2_TR(0x52c51c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c521ull));
TAIL_STATIC(0x51a910u,51a);
}
B52c521:L52c521:{c.instructions+=3;NFSU2_TR(0x52c521);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c527:{NFSU2_TR(0x52c527);
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
B52c529:{NFSU2_TR(0x52c529);
if(r1(R+518)){{goto L52c535;}}
}
B52c52b:L52c52b:{c.instructions+=3;NFSU2_TR(0x52c52b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52c52d:{NFSU2_TR(0x52c52d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c52e:{NFSU2_TR(0x52c52e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c531ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52c531:L52c531:{c.instructions+=2;NFSU2_TR(0x52c531);
__builtin_memmove((R+12),(R+0),1);
}
B52c533:{NFSU2_TR(0x52c533);
{goto L52c537;}
}
B52c535:L52c535:{c.instructions+=1;NFSU2_TR(0x52c535);
w1(R+12,u8(0x1ull));
}
B52c537:L52c537:{c.instructions+=3;NFSU2_TR(0x52c537);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c53d:{NFSU2_TR(0x52c53d);
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
B52c53f:{NFSU2_TR(0x52c53f);
if(r1(R+518)){{goto L52c54f;}}
}
B52c541:L52c541:{c.instructions+=7;NFSU2_TR(0x52c541);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52c544:{NFSU2_TR(0x52c544);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52c546:{NFSU2_TR(0x52c546);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c547:{NFSU2_TR(0x52c547);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52c54a:{NFSU2_TR(0x52c54a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c54b:{NFSU2_TR(0x52c54b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c54c:{NFSU2_TR(0x52c54c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c54full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52c54f:L52c54f:{c.instructions+=3;NFSU2_TR(0x52c54f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52c551:{NFSU2_TR(0x52c551);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c552:{NFSU2_TR(0x52c552);
if(r1(R+518)){{goto L52c560;}}
}
B52c554:L52c554:{c.instructions+=2;NFSU2_TR(0x52c554);
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
B52c556:{NFSU2_TR(0x52c556);
if(r1(R+518)){{goto L52c560;}}
}
B52c558:L52c558:{c.instructions+=4;NFSU2_TR(0x52c558);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52c55a:{NFSU2_TR(0x52c55a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c55c:{NFSU2_TR(0x52c55c);
__builtin_memmove((R+4),(R+24),4);
}
B52c55e:{NFSU2_TR(0x52c55e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c560ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B52c560:L52c560:{c.instructions+=3;NFSU2_TR(0x52c560);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c561:{NFSU2_TR(0x52c561);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c562:{NFSU2_TR(0x52c562);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c570:L52c570:{c.instructions+=5;NFSU2_TR(0x52c570);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c574:{NFSU2_TR(0x52c574);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c576:{NFSU2_TR(0x52c576);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c577:{NFSU2_TR(0x52c577);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c578:{NFSU2_TR(0x52c578);
if(r1(R+518)){{goto L52c5a2;}}
}
B52c57a:L52c57a:{c.instructions+=5;NFSU2_TR(0x52c57a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52c580:{NFSU2_TR(0x52c580);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xdcull))));
}
B52c586:{NFSU2_TR(0x52c586);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c587:{NFSU2_TR(0x52c587);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c588:{NFSU2_TR(0x52c588);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c58dull));
TAIL_STATIC(0x519e50u,519);
}
B52c58d:L52c58d:{c.instructions+=2;NFSU2_TR(0x52c58d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c58f:{NFSU2_TR(0x52c58f);
if(r1(R+518)){{goto L52c5c3;}}
}
B52c591:L52c591:{c.instructions+=4;NFSU2_TR(0x52c591);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c595:{NFSU2_TR(0x52c595);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c596:{NFSU2_TR(0x52c596);
__builtin_memmove((R+4),(R+0),4);
}
B52c598:{NFSU2_TR(0x52c598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c59dull));
TAIL_STATIC(0x517f80u,517);
}
B52c59d:L52c59d:{c.instructions+=3;NFSU2_TR(0x52c59d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c59e:{NFSU2_TR(0x52c59e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c59f:{NFSU2_TR(0x52c59f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c5a2:L52c5a2:{c.instructions+=3;NFSU2_TR(0x52c5a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52c5a8:{NFSU2_TR(0x52c5a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c5aa:{NFSU2_TR(0x52c5aa);
if(r1(R+518)){{goto L52c5c3;}}
}
B52c5ac:L52c5ac:{c.instructions+=1;NFSU2_TR(0x52c5ac);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52c5b0:L52c5b0:{c.instructions+=3;NFSU2_TR(0x52c5b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c5b1:{NFSU2_TR(0x52c5b1);
__builtin_memmove((R+4),(R+24),4);
}
B52c5b3:{NFSU2_TR(0x52c5b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c5b8ull));
TAIL_STATIC(0x517f80u,517);
}
B52c5b8:L52c5b8:{c.instructions+=2;NFSU2_TR(0x52c5b8);
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
B52c5ba:{NFSU2_TR(0x52c5ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52c5c5;}}
}
B52c5bc:L52c5bc:{c.instructions+=3;NFSU2_TR(0x52c5bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52c5bf:{NFSU2_TR(0x52c5bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c5c1:{NFSU2_TR(0x52c5c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c5b0u);}goto L52c5b0;}}
}
B52c5c3:L52c5c3:{c.instructions+=1;NFSU2_TR(0x52c5c3);
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
B52c5c5:L52c5c5:{c.instructions+=3;NFSU2_TR(0x52c5c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c5c6:{NFSU2_TR(0x52c5c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c5c7:{NFSU2_TR(0x52c5c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c5d0:L52c5d0:{c.instructions+=15;NFSU2_TR(0x52c5d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x98ull))));
}
B52c5d6:{NFSU2_TR(0x52c5d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c5d7:{NFSU2_TR(0x52c5d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c5d8:{NFSU2_TR(0x52c5d8);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52c5df:{NFSU2_TR(0x52c5df);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52c5e2:{NFSU2_TR(0x52c5e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c5e5:{NFSU2_TR(0x52c5e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c5e7:{NFSU2_TR(0x52c5e7);
__builtin_memmove((R+24),(R+4),4);
}
B52c5e9:{NFSU2_TR(0x52c5e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52c5f1:{NFSU2_TR(0x52c5f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52c5f9:{NFSU2_TR(0x52c5f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52c601:{NFSU2_TR(0x52c601);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52c609:{NFSU2_TR(0x52c609);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52c611:{NFSU2_TR(0x52c611);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52c619:{NFSU2_TR(0x52c619);
if(r1(R+518)){{goto L52c73e;}}
}
B52c61f:L52c61f:{c.instructions+=2;NFSU2_TR(0x52c61f);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B52c622:{NFSU2_TR(0x52c622);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52c62f;}}
}
B52c624:L52c624:{c.instructions+=3;NFSU2_TR(0x52c624);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c627:{NFSU2_TR(0x52c627);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B52c629:{NFSU2_TR(0x52c629);
if(r1(R+519)){{goto L52c73e;}}
}
B52c62f:L52c62f:{c.instructions+=6;NFSU2_TR(0x52c62f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c630:{NFSU2_TR(0x52c630);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c631:{NFSU2_TR(0x52c631);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52c635:{NFSU2_TR(0x52c635);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c636:{NFSU2_TR(0x52c636);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52c639:{NFSU2_TR(0x52c639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c63eull));
TAIL_STATIC(0x504a50u,504);
}
B52c63e:L52c63e:{c.instructions+=19;NFSU2_TR(0x52c63e);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52c641:{NFSU2_TR(0x52c641);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52c644:{NFSU2_TR(0x52c644);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c647:{NFSU2_TR(0x52c647);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B52c649:{NFSU2_TR(0x52c649);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c64d:{NFSU2_TR(0x52c64d);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52c653:{NFSU2_TR(0x52c653);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52c657:{NFSU2_TR(0x52c657);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c658:{NFSU2_TR(0x52c658);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52c65c:{NFSU2_TR(0x52c65c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52c660:{NFSU2_TR(0x52c660);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c661:{NFSU2_TR(0x52c661);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52c665:{NFSU2_TR(0x52c665);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52c66b:{NFSU2_TR(0x52c66b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c66c:{NFSU2_TR(0x52c66c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52c670:{NFSU2_TR(0x52c670);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52c674:{NFSU2_TR(0x52c674);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52c67a:{NFSU2_TR(0x52c67a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52c67e:{NFSU2_TR(0x52c67e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c683ull));
TAIL_STATIC(0x504b50u,504);
}
B52c683:L52c683:{c.instructions+=19;NFSU2_TR(0x52c683);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52c687:{NFSU2_TR(0x52c687);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c68e:{NFSU2_TR(0x52c68e);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52c691:{NFSU2_TR(0x52c691);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c692:{NFSU2_TR(0x52c692);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52c696:{NFSU2_TR(0x52c696);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52c699:{NFSU2_TR(0x52c699);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52c69d:{NFSU2_TR(0x52c69d);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52c6a0:{NFSU2_TR(0x52c6a0);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52c6a3:{NFSU2_TR(0x52c6a3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52c6a7:{NFSU2_TR(0x52c6a7);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52c6ab:{NFSU2_TR(0x52c6ab);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52c6ae:{NFSU2_TR(0x52c6ae);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52c6b1:{NFSU2_TR(0x52c6b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52c6b5:{NFSU2_TR(0x52c6b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c6b6:{NFSU2_TR(0x52c6b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c6b7:{NFSU2_TR(0x52c6b7);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52c6bb:{NFSU2_TR(0x52c6bb);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52c6bf:{NFSU2_TR(0x52c6bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c6c4ull));
TAIL_STATIC(0x5187a0u,518);
}
B52c6c4:L52c6c4:{c.instructions+=7;NFSU2_TR(0x52c6c4);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B52c6cb:{NFSU2_TR(0x52c6cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c6cc:{NFSU2_TR(0x52c6cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52c6d3:{NFSU2_TR(0x52c6d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c6d4:{NFSU2_TR(0x52c6d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52c6d8:{NFSU2_TR(0x52c6d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c6d9:{NFSU2_TR(0x52c6d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c6deull));
TAIL_STATIC(0x5187a0u,518);
}
B52c6de:L52c6de:{c.instructions+=11;NFSU2_TR(0x52c6de);
u8 U[6];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B52c6e6:{NFSU2_TR(0x52c6e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B52c6e9:{NFSU2_TR(0x52c6e9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B52c6f0:{NFSU2_TR(0x52c6f0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c6f2:{NFSU2_TR(0x52c6f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B52c6f9:{NFSU2_TR(0x52c6f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B52c6fd:{NFSU2_TR(0x52c6fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c703:{NFSU2_TR(0x52c703);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52c705:{NFSU2_TR(0x52c705);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c706:{NFSU2_TR(0x52c706);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c707:{NFSU2_TR(0x52c707);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c70aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52c70a:L52c70a:{c.instructions+=3;NFSU2_TR(0x52c70a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52c70d:{NFSU2_TR(0x52c70d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c70f:{NFSU2_TR(0x52c70f);
if(r1(R+518)){{goto L52c73c;}}
}
B52c711:L52c711:{c.instructions+=3;NFSU2_TR(0x52c711);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52c715:{NFSU2_TR(0x52c715);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c716:{NFSU2_TR(0x52c716);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52c728;}}
}
B52c718:L52c718:{c.instructions+=6;NFSU2_TR(0x52c718);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c719:{NFSU2_TR(0x52c719);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52c71d:{NFSU2_TR(0x52c71d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c71e:{NFSU2_TR(0x52c71e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c71f:{NFSU2_TR(0x52c71f);
__builtin_memmove((R+4),(R+24),4);
}
B52c721:{NFSU2_TR(0x52c721);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c726ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c5d0u);}goto L52c5d0;}
}
B52c726:L52c726:{c.instructions+=1;NFSU2_TR(0x52c726);
{goto L52c735;}
}
B52c728:L52c728:{c.instructions+=5;NFSU2_TR(0x52c728);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52c72c:{NFSU2_TR(0x52c72c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c72d:{NFSU2_TR(0x52c72d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c72e:{NFSU2_TR(0x52c72e);
__builtin_memmove((R+4),(R+24),4);
}
B52c730:{NFSU2_TR(0x52c730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c735ull));
TAIL_STATIC(0x51a970u,51a);
}
B52c735:L52c735:{c.instructions+=3;NFSU2_TR(0x52c735);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52c738:{NFSU2_TR(0x52c738);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c73a:{NFSU2_TR(0x52c73a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c711u);}goto L52c711;}}
}
B52c73c:L52c73c:{c.instructions+=2;NFSU2_TR(0x52c73c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52c73d:{NFSU2_TR(0x52c73d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c73e:L52c73e:{c.instructions+=4;NFSU2_TR(0x52c73e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c73f:{NFSU2_TR(0x52c73f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c740:{NFSU2_TR(0x52c740);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x98ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x98ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x98ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52c746:{NFSU2_TR(0x52c746);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c750:L52c750:{c.instructions+=3;NFSU2_TR(0x52c750);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c754:{NFSU2_TR(0x52c754);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xe10c4af9ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xe10c4af9ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c759:{NFSU2_TR(0x52c759);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52c7a1;}}
}
B52c75b:L52c75b:{c.instructions+=1;NFSU2_TR(0x52c75b);
if(r1(R+518)){{goto L52c78f;}}
}
B52c75d:L52c75d:{c.instructions+=2;NFSU2_TR(0x52c75d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30471acull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c762:{NFSU2_TR(0x52c762);
if(r1(R+518)){{goto L52c77d;}}
}
B52c764:L52c764:{c.instructions+=2;NFSU2_TR(0x52c764);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xe10814a6ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c769:{NFSU2_TR(0x52c769);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52c7a8;}}
}
B52c76b:L52c76b:{c.instructions+=4;NFSU2_TR(0x52c76b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c76f:{NFSU2_TR(0x52c76f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c771:{NFSU2_TR(0x52c771);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c773:{NFSU2_TR(0x52c773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c778ull));
TAIL_STATIC(0x52bd70u,52b);
}
B52c778:L52c778:{c.instructions+=2;NFSU2_TR(0x52c778);
w1(R+0,u8(0x1ull));
}
B52c77a:{NFSU2_TR(0x52c77a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c77d:L52c77d:{c.instructions+=4;NFSU2_TR(0x52c77d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c781:{NFSU2_TR(0x52c781);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c783:{NFSU2_TR(0x52c783);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c785:{NFSU2_TR(0x52c785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c78aull));
TAIL_STATIC(0x52bd70u,52b);
}
B52c78a:L52c78a:{c.instructions+=2;NFSU2_TR(0x52c78a);
w1(R+0,u8(0x1ull));
}
B52c78c:{NFSU2_TR(0x52c78c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c78f:L52c78f:{c.instructions+=4;NFSU2_TR(0x52c78f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c793:{NFSU2_TR(0x52c793);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c795:{NFSU2_TR(0x52c795);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c797:{NFSU2_TR(0x52c797);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c79cull));
TAIL_STATIC(0x52bd70u,52b);
}
B52c79c:L52c79c:{c.instructions+=2;NFSU2_TR(0x52c79c);
w1(R+0,u8(0x1ull));
}
B52c79e:{NFSU2_TR(0x52c79e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c7a1:L52c7a1:{c.instructions+=2;NFSU2_TR(0x52c7a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfb814f13ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c7a6:{NFSU2_TR(0x52c7a6);
if(r1(R+518)){{goto L52c7ad;}}
}
B52c7a8:L52c7a8:{c.instructions+=2;NFSU2_TR(0x52c7a8);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52c7aa:{NFSU2_TR(0x52c7aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c7ad:L52c7ad:{c.instructions+=4;NFSU2_TR(0x52c7ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c7b1:{NFSU2_TR(0x52c7b1);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c7b3:{NFSU2_TR(0x52c7b3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c7b5:{NFSU2_TR(0x52c7b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c7baull));
TAIL_STATIC(0x52bd70u,52b);
}
B52c7ba:L52c7ba:{c.instructions+=2;NFSU2_TR(0x52c7ba);
w1(R+0,u8(0x1ull));
}
B52c7bc:{NFSU2_TR(0x52c7bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c7c0:L52c7c0:{c.instructions+=11;NFSU2_TR(0x52c7c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B52c7c3:{NFSU2_TR(0x52c7c3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c7c4:{NFSU2_TR(0x52c7c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B52c7c8:{NFSU2_TR(0x52c7c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c7cb:{NFSU2_TR(0x52c7cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c7cc:{NFSU2_TR(0x52c7cc);
__builtin_memmove((R+28),(R+4),4);
}
B52c7ce:{NFSU2_TR(0x52c7ce);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B52c7d0:{NFSU2_TR(0x52c7d0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c7d2:{NFSU2_TR(0x52c7d2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c7d6:{NFSU2_TR(0x52c7d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c7da:{NFSU2_TR(0x52c7da);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L52c9c1;}}
}
B52c7e0:L52c7e0:{c.instructions+=3;NFSU2_TR(0x52c7e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c7e1:{NFSU2_TR(0x52c7e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c7e2:{NFSU2_TR(0x52c7e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52c7e6:L52c7e6:{c.instructions+=6;NFSU2_TR(0x52c7e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52c7e9:{NFSU2_TR(0x52c7e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B52c7ec:{NFSU2_TR(0x52c7ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B52c7ef:{NFSU2_TR(0x52c7ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52c7f1:{NFSU2_TR(0x52c7f1);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x108ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x108ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c7f6:{NFSU2_TR(0x52c7f6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52ca0d;}}
}
B52c7fc:L52c7fc:{c.instructions+=1;NFSU2_TR(0x52c7fc);
if(r1(R+518)){{goto L52c9fc;}}
}
B52c802:L52c802:{c.instructions+=2;NFSU2_TR(0x52c802);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x101ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x101ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c807:{NFSU2_TR(0x52c807);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52c921;}}
}
B52c80d:L52c80d:{c.instructions+=1;NFSU2_TR(0x52c80d);
if(r1(R+518)){{goto L52c912;}}
}
B52c813:L52c813:{c.instructions+=2;NFSU2_TR(0x52c813);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52c816:{NFSU2_TR(0x52c816);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52c8af;}}
}
B52c81c:L52c81c:{c.instructions+=1;NFSU2_TR(0x52c81c);
if(r1(R+518)){{goto L52c892;}}
}
B52c81e:L52c81e:{c.instructions+=2;NFSU2_TR(0x52c81e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52c821:{NFSU2_TR(0x52c821);
if(r1(R+518)){{goto L52c85b;}}
}
B52c823:L52c823:{c.instructions+=2;NFSU2_TR(0x52c823);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52c824:{NFSU2_TR(0x52c824);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52c9aa;}}
}
B52c82a:L52c82a:{c.instructions+=3;NFSU2_TR(0x52c82a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c82d:{NFSU2_TR(0x52c82d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52c830:{NFSU2_TR(0x52c830);
if(r1(R+518)){{goto L52c83f;}}
}
B52c832:L52c832:{c.instructions+=2;NFSU2_TR(0x52c832);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52c835:{NFSU2_TR(0x52c835);
if(r1(R+518)){{goto L52c83f;}}
}
B52c837:L52c837:{c.instructions+=3;NFSU2_TR(0x52c837);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c838:{NFSU2_TR(0x52c838);
__builtin_memmove((R+4),(R+24),4);
}
B52c83a:{NFSU2_TR(0x52c83a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c83full));
TAIL_STATIC(0x517fe0u,517);
}
B52c83f:L52c83f:{c.instructions+=10;NFSU2_TR(0x52c83f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c843:{NFSU2_TR(0x52c843);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52c847:{NFSU2_TR(0x52c847);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c848:{NFSU2_TR(0x52c848);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c849:{NFSU2_TR(0x52c849);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c84c:{NFSU2_TR(0x52c84c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c84d:{NFSU2_TR(0x52c84d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c84e:{NFSU2_TR(0x52c84e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c84f:{NFSU2_TR(0x52c84f);
__builtin_memmove((R+4),(R+28),4);
}
B52c851:{NFSU2_TR(0x52c851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c856ull));
TAIL_STATIC(0x51aa20u,51a);
}
B52c856:L52c856:{c.instructions+=1;NFSU2_TR(0x52c856);
{goto L52c9aa;}
}
B52c85b:L52c85b:{c.instructions+=3;NFSU2_TR(0x52c85b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c85f:{NFSU2_TR(0x52c85f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c861:{NFSU2_TR(0x52c861);
if(r1(R+518)){{goto L52c9aa;}}
}
B52c867:L52c867:{c.instructions+=4;NFSU2_TR(0x52c867);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c86a:{NFSU2_TR(0x52c86a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c86b:{NFSU2_TR(0x52c86b);
__builtin_memmove((R+4),(R+0),4);
}
B52c86d:{NFSU2_TR(0x52c86d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c872ull));
TAIL_STATIC(0x5046b0u,504);
}
B52c872:L52c872:{c.instructions+=3;NFSU2_TR(0x52c872);
__builtin_memmove((R+12),(R+0),4);
}
B52c874:{NFSU2_TR(0x52c874);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c876:{NFSU2_TR(0x52c876);
if(r1(R+518)){{goto L52c9aa;}}
}
B52c87c:L52c87c:{c.instructions+=3;NFSU2_TR(0x52c87c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c880:{NFSU2_TR(0x52c880);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c881:{NFSU2_TR(0x52c881);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c886ull));
TAIL_STATIC(0x5178b0u,517);
}
B52c886:L52c886:{c.instructions+=2;NFSU2_TR(0x52c886);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52c88d:{NFSU2_TR(0x52c88d);
{goto L52c9aa;}
}
B52c892:L52c892:{c.instructions+=10;NFSU2_TR(0x52c892);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52c896:{NFSU2_TR(0x52c896);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c89a:{NFSU2_TR(0x52c89a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c89d:{NFSU2_TR(0x52c89d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c89e:{NFSU2_TR(0x52c89e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c8a0:{NFSU2_TR(0x52c8a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c8a1:{NFSU2_TR(0x52c8a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c8a2:{NFSU2_TR(0x52c8a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c8a3:{NFSU2_TR(0x52c8a3);
__builtin_memmove((R+4),(R+28),4);
}
B52c8a5:{NFSU2_TR(0x52c8a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c8aaull));
TAIL_STATIC(0x51aa20u,51a);
}
B52c8aa:L52c8aa:{c.instructions+=1;NFSU2_TR(0x52c8aa);
{goto L52c9aa;}
}
B52c8af:L52c8af:{c.instructions+=2;NFSU2_TR(0x52c8af);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52c8b2:{NFSU2_TR(0x52c8b2);
if(r1(R+518)){{goto L52c8f5;}}
}
B52c8b4:L52c8b4:{c.instructions+=2;NFSU2_TR(0x52c8b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c8b9:{NFSU2_TR(0x52c8b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52c9aa;}}
}
B52c8bf:L52c8bf:{c.instructions+=3;NFSU2_TR(0x52c8bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c8c2:{NFSU2_TR(0x52c8c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c8c4:{NFSU2_TR(0x52c8c4);
if(r1(R+518)){{goto L52c8f1;}}
}
B52c8c6:L52c8c6:{c.instructions+=3;NFSU2_TR(0x52c8c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c8c7:{NFSU2_TR(0x52c8c7);
__builtin_memmove((R+4),(R+24),4);
}
B52c8c9:{NFSU2_TR(0x52c8c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c8ceull));
TAIL_STATIC(0x517fe0u,517);
}
B52c8ce:L52c8ce:{c.instructions+=2;NFSU2_TR(0x52c8ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c8d0:{NFSU2_TR(0x52c8d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52c8df;}}
}
B52c8d2:L52c8d2:{c.instructions+=3;NFSU2_TR(0x52c8d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c8d5:{NFSU2_TR(0x52c8d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c8d7:{NFSU2_TR(0x52c8d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52c9aa;}}
}
B52c8dd:L52c8dd:{c.instructions+=1;NFSU2_TR(0x52c8dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c8df:L52c8df:{c.instructions+=6;NFSU2_TR(0x52c8df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B52c8e2:{NFSU2_TR(0x52c8e2);
__builtin_memmove((R+4),(R+24),4);
}
B52c8e4:{NFSU2_TR(0x52c8e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c8e5:{NFSU2_TR(0x52c8e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c8e6:{NFSU2_TR(0x52c8e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c8e7:{NFSU2_TR(0x52c8e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c8ecull));
TAIL_STATIC(0x52b3a0u,52b);
}
B52c8ec:L52c8ec:{c.instructions+=1;NFSU2_TR(0x52c8ec);
{goto L52c9aa;}
}
B52c8f1:L52c8f1:{c.instructions+=2;NFSU2_TR(0x52c8f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52c8f3:{NFSU2_TR(0x52c8f3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c8d2u);}goto L52c8d2;}
}
B52c8f5:L52c8f5:{c.instructions+=10;NFSU2_TR(0x52c8f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c8f9:{NFSU2_TR(0x52c8f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c8fd:{NFSU2_TR(0x52c8fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52c900:{NFSU2_TR(0x52c900);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c901:{NFSU2_TR(0x52c901);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c903:{NFSU2_TR(0x52c903);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c904:{NFSU2_TR(0x52c904);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c905:{NFSU2_TR(0x52c905);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c906:{NFSU2_TR(0x52c906);
__builtin_memmove((R+4),(R+28),4);
}
B52c908:{NFSU2_TR(0x52c908);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c90dull));
TAIL_STATIC(0x51aa20u,51a);
}
B52c90d:L52c90d:{c.instructions+=1;NFSU2_TR(0x52c90d);
{goto L52c9aa;}
}
B52c912:L52c912:{c.instructions+=4;NFSU2_TR(0x52c912);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52c916:{NFSU2_TR(0x52c916);
__builtin_memmove((R+0),(R+518),1);
}
B52c919:{NFSU2_TR(0x52c919);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52c91c:{NFSU2_TR(0x52c91c);
{goto L52c9aa;}
}
B52c921:L52c921:{c.instructions+=3;NFSU2_TR(0x52c921);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x102ull))));
}
B52c926:{NFSU2_TR(0x52c926);
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
B52c929:{NFSU2_TR(0x52c929);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52c9aa;}}
}
B52c92b:L52c92b:{c.instructions+=1;NFSU2_TR(0x52c92b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x52cb68ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52c932:L52c932:{c.instructions+=3;NFSU2_TR(0x52c932);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c938:{NFSU2_TR(0x52c938);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c93a:{NFSU2_TR(0x52c93a);
if(r1(R+518)){{goto L52c94d;}}
}
B52c93c:L52c93c:{c.instructions+=6;NFSU2_TR(0x52c93c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c93f:{NFSU2_TR(0x52c93f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52c942:{NFSU2_TR(0x52c942);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c943:{NFSU2_TR(0x52c943);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c944:{NFSU2_TR(0x52c944);
__builtin_memmove((R+4),(R+28),4);
}
B52c946:{NFSU2_TR(0x52c946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c94bull));
TAIL_STATIC(0x50b300u,50b);
}
B52c94b:L52c94b:{c.instructions+=1;NFSU2_TR(0x52c94b);
{goto L52c9aa;}
}
B52c94d:L52c94d:{c.instructions+=5;NFSU2_TR(0x52c94d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c950:{NFSU2_TR(0x52c950);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c952:{NFSU2_TR(0x52c952);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c953:{NFSU2_TR(0x52c953);
__builtin_memmove((R+4),(R+28),4);
}
B52c955:{NFSU2_TR(0x52c955);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c95aull));
TAIL_STATIC(0x50b300u,50b);
}
B52c95a:L52c95a:{c.instructions+=1;NFSU2_TR(0x52c95a);
{goto L52c9aa;}
}
B52c95c:L52c95c:{c.instructions+=5;NFSU2_TR(0x52c95c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c95f:{NFSU2_TR(0x52c95f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c960:{NFSU2_TR(0x52c960);
__builtin_memmove((R+4),(R+28),4);
}
B52c962:{NFSU2_TR(0x52c962);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B52c964:{NFSU2_TR(0x52c964);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c969ull));
TAIL_STATIC(0x50b360u,50b);
}
B52c969:L52c969:{c.instructions+=2;NFSU2_TR(0x52c969);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c96b:{NFSU2_TR(0x52c96b);
if(r1(R+518)){{goto L52c97b;}}
}
B52c96d:L52c96d:{c.instructions+=3;NFSU2_TR(0x52c96d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c96e:{NFSU2_TR(0x52c96e);
__builtin_memmove((R+4),(R+24),4);
}
B52c970:{NFSU2_TR(0x52c970);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c975ull));
TAIL_STATIC(0x517fe0u,517);
}
B52c975:L52c975:{c.instructions+=3;NFSU2_TR(0x52c975);
__builtin_memmove((R+20),(R+0),4);
}
B52c977:{NFSU2_TR(0x52c977);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c979:{NFSU2_TR(0x52c979);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52c999;}}
}
B52c97b:L52c97b:{c.instructions+=3;NFSU2_TR(0x52c97b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c97e:{NFSU2_TR(0x52c97e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c980:{NFSU2_TR(0x52c980);
if(r1(R+518)){{goto L52c990;}}
}
B52c982:L52c982:{c.instructions+=3;NFSU2_TR(0x52c982);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c983:{NFSU2_TR(0x52c983);
__builtin_memmove((R+4),(R+24),4);
}
B52c985:{NFSU2_TR(0x52c985);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c98aull));
TAIL_STATIC(0x517fe0u,517);
}
B52c98a:L52c98a:{c.instructions+=3;NFSU2_TR(0x52c98a);
__builtin_memmove((R+20),(R+0),4);
}
B52c98c:{NFSU2_TR(0x52c98c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c98e:{NFSU2_TR(0x52c98e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52c999;}}
}
B52c990:L52c990:{c.instructions+=3;NFSU2_TR(0x52c990);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c993:{NFSU2_TR(0x52c993);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c995:{NFSU2_TR(0x52c995);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52c9a6;}}
}
B52c997:L52c997:{c.instructions+=1;NFSU2_TR(0x52c997);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52c999:L52c999:{c.instructions+=6;NFSU2_TR(0x52c999);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B52c99c:{NFSU2_TR(0x52c99c);
__builtin_memmove((R+4),(R+24),4);
}
B52c99e:{NFSU2_TR(0x52c99e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c99f:{NFSU2_TR(0x52c99f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c9a0:{NFSU2_TR(0x52c9a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c9a1:{NFSU2_TR(0x52c9a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c9a6ull));
TAIL_STATIC(0x52b3a0u,52b);
}
B52c9a6:L52c9a6:{c.instructions+=1;NFSU2_TR(0x52c9a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B52c9aa:L52c9aa:{c.instructions+=6;NFSU2_TR(0x52c9aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c9ae:{NFSU2_TR(0x52c9ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c9b2:{NFSU2_TR(0x52c9b2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B52c9b3:{NFSU2_TR(0x52c9b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B52c9b5:{NFSU2_TR(0x52c9b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52c9b9:{NFSU2_TR(0x52c9b9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c7e6u);}goto L52c7e6;}}
}
B52c9bf:L52c9bf:{c.instructions+=2;NFSU2_TR(0x52c9bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52c9c0:{NFSU2_TR(0x52c9c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52c9c1:L52c9c1:{c.instructions+=4;NFSU2_TR(0x52c9c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52c9c2:{NFSU2_TR(0x52c9c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52c9c3:{NFSU2_TR(0x52c9c3);
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
B52c9c6:{NFSU2_TR(0x52c9c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52c9c9:L52c9c9:{c.instructions+=6;NFSU2_TR(0x52c9c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52c9cd:{NFSU2_TR(0x52c9cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c9ce:{NFSU2_TR(0x52c9ce);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c9d0:{NFSU2_TR(0x52c9d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c9d1:{NFSU2_TR(0x52c9d1);
__builtin_memmove((R+4),(R+28),4);
}
B52c9d3:{NFSU2_TR(0x52c9d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c9d8ull));
TAIL_STATIC(0x51af50u,51a);
}
B52c9d8:L52c9d8:{c.instructions+=1;NFSU2_TR(0x52c9d8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}
}
B52c9da:L52c9da:{c.instructions+=5;NFSU2_TR(0x52c9da);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c9df:{NFSU2_TR(0x52c9df);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c9e1:{NFSU2_TR(0x52c9e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c9e2:{NFSU2_TR(0x52c9e2);
__builtin_memmove((R+4),(R+28),4);
}
B52c9e4:{NFSU2_TR(0x52c9e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c9e9ull));
TAIL_STATIC(0x51af50u,51a);
}
B52c9e9:L52c9e9:{c.instructions+=1;NFSU2_TR(0x52c9e9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}
}
B52c9eb:L52c9eb:{c.instructions+=6;NFSU2_TR(0x52c9eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52c9ef:{NFSU2_TR(0x52c9ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c9f0:{NFSU2_TR(0x52c9f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c9f2:{NFSU2_TR(0x52c9f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52c9f3:{NFSU2_TR(0x52c9f3);
__builtin_memmove((R+4),(R+28),4);
}
B52c9f5:{NFSU2_TR(0x52c9f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52c9faull));
TAIL_STATIC(0x51af50u,51a);
}
B52c9fa:L52c9fa:{c.instructions+=1;NFSU2_TR(0x52c9fa);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}
}
B52c9fc:L52c9fc:{c.instructions+=5;NFSU2_TR(0x52c9fc);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ca01:{NFSU2_TR(0x52ca01);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ca03:{NFSU2_TR(0x52ca03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ca04:{NFSU2_TR(0x52ca04);
__builtin_memmove((R+4),(R+28),4);
}
B52ca06:{NFSU2_TR(0x52ca06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ca0bull));
TAIL_STATIC(0x51af50u,51a);
}
B52ca0b:L52ca0b:{c.instructions+=1;NFSU2_TR(0x52ca0b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}
}
B52ca0d:L52ca0d:{c.instructions+=2;NFSU2_TR(0x52ca0d);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x2c0ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2c0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52ca12:{NFSU2_TR(0x52ca12);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52cab9;}}
}
B52ca18:L52ca18:{c.instructions+=1;NFSU2_TR(0x52ca18);
if(r1(R+518)){{goto L52caa9;}}
}
B52ca1e:L52ca1e:{c.instructions+=3;NFSU2_TR(0x52ca1e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
}
B52ca23:{NFSU2_TR(0x52ca23);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52ca26:{NFSU2_TR(0x52ca26);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}}
}
B52ca28:L52ca28:{c.instructions+=1;NFSU2_TR(0x52ca28);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x52cb80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52ca2f:L52ca2f:{c.instructions+=5;NFSU2_TR(0x52ca2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ca32:{NFSU2_TR(0x52ca32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ca33:{NFSU2_TR(0x52ca33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ca34:{NFSU2_TR(0x52ca34);
__builtin_memmove((R+4),(R+28),4);
}
B52ca36:{NFSU2_TR(0x52ca36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ca3bull));
TAIL_STATIC(0x51ab20u,51a);
}
B52ca3b:L52ca3b:{c.instructions+=1;NFSU2_TR(0x52ca3b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}
}
B52ca40:L52ca40:{c.instructions+=7;NFSU2_TR(0x52ca40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ca43:{NFSU2_TR(0x52ca43);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ca46:{NFSU2_TR(0x52ca46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ca47:{NFSU2_TR(0x52ca47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ca48:{NFSU2_TR(0x52ca48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ca49:{NFSU2_TR(0x52ca49);
__builtin_memmove((R+4),(R+28),4);
}
B52ca4b:{NFSU2_TR(0x52ca4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ca50ull));
TAIL_STATIC(0x51ac10u,51a);
}
B52ca50:L52ca50:{c.instructions+=1;NFSU2_TR(0x52ca50);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}
}
B52ca55:L52ca55:{c.instructions+=2;NFSU2_TR(0x52ca55);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B52ca57:{NFSU2_TR(0x52ca57);
{goto L52ca60;}
}
B52ca60:L52ca60:{c.instructions+=6;NFSU2_TR(0x52ca60);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ca64:{NFSU2_TR(0x52ca64);
w4(R+0,u32(0x1ull));
}
B52ca69:{NFSU2_TR(0x52ca69);
__builtin_memmove((R+4),(R+20),4);
}
B52ca6b:{NFSU2_TR(0x52ca6b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B52ca6d:{NFSU2_TR(0x52ca6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52ca6f:{NFSU2_TR(0x52ca6f);
if(r1(R+518)){{goto L52ca7e;}}
}
B52ca71:L52ca71:{c.instructions+=6;NFSU2_TR(0x52ca71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ca72:{NFSU2_TR(0x52ca72);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ca75:{NFSU2_TR(0x52ca75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ca76:{NFSU2_TR(0x52ca76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ca77:{NFSU2_TR(0x52ca77);
__builtin_memmove((R+4),(R+28),4);
}
B52ca79:{NFSU2_TR(0x52ca79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ca7eull));
TAIL_STATIC(0x51ac10u,51a);
}
B52ca7e:L52ca7e:{c.instructions+=3;NFSU2_TR(0x52ca7e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B52ca7f:{NFSU2_TR(0x52ca7f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B52ca82:{NFSU2_TR(0x52ca82);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52ca60u);}goto L52ca60;}}
}
B52ca84:L52ca84:{c.instructions+=1;NFSU2_TR(0x52ca84);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9a6u);}goto L52c9a6;}
}
B52ca89:L52ca89:{c.instructions+=6;NFSU2_TR(0x52ca89);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ca8c:{NFSU2_TR(0x52ca8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ca8e:{NFSU2_TR(0x52ca8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ca8f:{NFSU2_TR(0x52ca8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ca90:{NFSU2_TR(0x52ca90);
__builtin_memmove((R+4),(R+28),4);
}
B52ca92:{NFSU2_TR(0x52ca92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ca97ull));
TAIL_STATIC(0x51ac10u,51a);
}
B52ca97:L52ca97:{c.instructions+=1;NFSU2_TR(0x52ca97);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}
}
B52ca9c:L52ca9c:{c.instructions+=3;NFSU2_TR(0x52ca9c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ca9d:{NFSU2_TR(0x52ca9d);
__builtin_memmove((R+4),(R+28),4);
}
B52ca9f:{NFSU2_TR(0x52ca9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52caa4ull));
TAIL_STATIC(0x51adb0u,51a);
}
B52caa4:L52caa4:{c.instructions+=1;NFSU2_TR(0x52caa4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}
}
B52caa9:L52caa9:{c.instructions+=4;NFSU2_TR(0x52caa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52caac:{NFSU2_TR(0x52caac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52caad:{NFSU2_TR(0x52caad);
__builtin_memmove((R+4),(R+28),4);
}
B52caaf:{NFSU2_TR(0x52caaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cab4ull));
TAIL_STATIC(0x51b070u,51b);
}
B52cab4:L52cab4:{c.instructions+=1;NFSU2_TR(0x52cab4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}
}
B52cab9:L52cab9:{c.instructions+=2;NFSU2_TR(0x52cab9);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x300ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x300ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cabe:{NFSU2_TR(0x52cabe);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52cb35;}}
}
B52cac0:L52cac0:{c.instructions+=1;NFSU2_TR(0x52cac0);
if(r1(R+518)){{goto L52cb11;}}
}
B52cac2:L52cac2:{c.instructions+=2;NFSU2_TR(0x52cac2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2c1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52cac7:{NFSU2_TR(0x52cac7);
if(r1(R+518)){{goto L52cadc;}}
}
B52cac9:L52cac9:{c.instructions+=2;NFSU2_TR(0x52cac9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52caca:{NFSU2_TR(0x52caca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}}
}
B52cad0:L52cad0:{c.instructions+=2;NFSU2_TR(0x52cad0);
__builtin_memmove((R+4),(R+28),4);
}
B52cad2:{NFSU2_TR(0x52cad2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cad7ull));
TAIL_STATIC(0x50b390u,50b);
}
B52cad7:L52cad7:{c.instructions+=1;NFSU2_TR(0x52cad7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}
}
B52cadc:L52cadc:{c.instructions+=3;NFSU2_TR(0x52cadc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cae2:{NFSU2_TR(0x52cae2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cae4:{NFSU2_TR(0x52cae4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}}
}
B52caea:L52caea:{c.instructions+=6;NFSU2_TR(0x52caea);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B52caeb:{NFSU2_TR(0x52caeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4148ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52caf1:{NFSU2_TR(0x52caf1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B52caf4:{NFSU2_TR(0x52caf4);
u8 U[12];
w4(U+0,u32(u32(u32(0x414cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B52cafb:{NFSU2_TR(0x52cafb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cafd:{NFSU2_TR(0x52cafd);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}}
}
B52cb03:L52cb03:{c.instructions+=4;NFSU2_TR(0x52cb03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cb04:{NFSU2_TR(0x52cb04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cb05:{NFSU2_TR(0x52cb05);
__builtin_memmove((R+4),(R+28),4);
}
B52cb07:{NFSU2_TR(0x52cb07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cb0cull));
TAIL_STATIC(0x51ab20u,51a);
}
B52cb0c:L52cb0c:{c.instructions+=1;NFSU2_TR(0x52cb0c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}
}
B52cb11:L52cb11:{c.instructions+=5;NFSU2_TR(0x52cb11);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cb15:{NFSU2_TR(0x52cb15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52cb18:{NFSU2_TR(0x52cb18);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cb1b:{NFSU2_TR(0x52cb1b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52cb1e:{NFSU2_TR(0x52cb1e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}}
}
B52cb24:L52cb24:{c.instructions+=3;NFSU2_TR(0x52cb24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cb25:{NFSU2_TR(0x52cb25);
__builtin_memmove((R+4),(R+20),4);
}
B52cb27:{NFSU2_TR(0x52cb27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cb2cull));
TAIL_STATIC(0x504490u,504);
}
B52cb2c:L52cb2c:{c.instructions+=2;NFSU2_TR(0x52cb2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52cb30:{NFSU2_TR(0x52cb30);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}
}
B52cb35:L52cb35:{c.instructions+=2;NFSU2_TR(0x52cb35);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x301ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cb3a:{NFSU2_TR(0x52cb3a);
if(r1(R+518)){{goto L52cb43;}}
}
B52cb3c:L52cb3c:{c.instructions+=2;NFSU2_TR(0x52cb3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x500ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cb41:{NFSU2_TR(0x52cb41);
{goto L52cb50;}
}
B52cb43:L52cb43:{c.instructions+=4;NFSU2_TR(0x52cb43);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52cb47:{NFSU2_TR(0x52cb47);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cb4a:{NFSU2_TR(0x52cb4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52cb4d:{NFSU2_TR(0x52cb4d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52cb50:L52cb50:{c.instructions+=1;NFSU2_TR(0x52cb50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}}
}
B52cb56:L52cb56:{c.instructions+=3;NFSU2_TR(0x52cb56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cb57:{NFSU2_TR(0x52cb57);
__builtin_memmove((R+4),(R+20),4);
}
B52cb59:{NFSU2_TR(0x52cb59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cb5eull));
TAIL_STATIC(0x504490u,504);
}
B52cb5e:L52cb5e:{c.instructions+=2;NFSU2_TR(0x52cb5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52cb62:{NFSU2_TR(0x52cb62);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c9aau);}goto L52c9aa;}
}
B52cba0:L52cba0:{c.instructions+=12;NFSU2_TR(0x52cba0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cba2:{NFSU2_TR(0x52cba2);
u8 U[4];
w4(U+0,u32(0x77751bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cba7:{NFSU2_TR(0x52cba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cbad:{NFSU2_TR(0x52cbad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cbae:{NFSU2_TR(0x52cbae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52cbb5:{NFSU2_TR(0x52cbb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cbb6:{NFSU2_TR(0x52cbb6);
__builtin_memmove((R+0),gp(0x83847c),4);
}
B52cbbb:{NFSU2_TR(0x52cbbb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cbbc:{NFSU2_TR(0x52cbbc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cbbd:{NFSU2_TR(0x52cbbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cbbe:{NFSU2_TR(0x52cbbe);
__builtin_memmove((R+28),(R+4),4);
}
B52cbc0:{NFSU2_TR(0x52cbc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cbc5ull));
TAIL_STATIC(0x440e50u,440);
}
B52cbc5:L52cbc5:{c.instructions+=6;NFSU2_TR(0x52cbc5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52cbc8:{NFSU2_TR(0x52cbc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52cbcc:{NFSU2_TR(0x52cbcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cbce:{NFSU2_TR(0x52cbce);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52cbd2:{NFSU2_TR(0x52cbd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52cbda:{NFSU2_TR(0x52cbda);
if(r1(R+518)){{goto L52cbeb;}}
}
B52cbdc:L52cbdc:{c.instructions+=5;NFSU2_TR(0x52cbdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52cbe0:{NFSU2_TR(0x52cbe0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cbe1:{NFSU2_TR(0x52cbe1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cbe2:{NFSU2_TR(0x52cbe2);
__builtin_memmove((R+4),(R+0),4);
}
B52cbe4:{NFSU2_TR(0x52cbe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cbe9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52c330u);}goto L52c330;}
}
B52cbe9:L52cbe9:{c.instructions+=1;NFSU2_TR(0x52cbe9);
{goto L52cbed;}
}
B52cbeb:L52cbeb:{c.instructions+=1;NFSU2_TR(0x52cbeb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52cbed:L52cbed:{c.instructions+=13;NFSU2_TR(0x52cbed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52cbf0:{NFSU2_TR(0x52cbf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52cbf3:{NFSU2_TR(0x52cbf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52cbf6:{NFSU2_TR(0x52cbf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B52cbf8:{NFSU2_TR(0x52cbf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52cbfb:{NFSU2_TR(0x52cbfb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B52cbfd:{NFSU2_TR(0x52cbfd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52cc01:{NFSU2_TR(0x52cc01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52cc02:{NFSU2_TR(0x52cc02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52cc05:{NFSU2_TR(0x52cc05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52cc06:{NFSU2_TR(0x52cc06);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52cc0d:{NFSU2_TR(0x52cc0d);
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
B52cc10:{NFSU2_TR(0x52cc10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52cc20:L52cc20:{c.instructions+=3;NFSU2_TR(0x52cc20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cc21:{NFSU2_TR(0x52cc21);
__builtin_memmove((R+24),(R+4),4);
}
B52cc23:{NFSU2_TR(0x52cc23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cc28ull));
TAIL_STATIC(0x51b990u,51b);
}
B52cc28:L52cc28:{c.instructions+=2;NFSU2_TR(0x52cc28);
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
B52cc2d:{NFSU2_TR(0x52cc2d);
if(r1(R+518)){{goto L52cc38;}}
}
B52cc2f:L52cc2f:{c.instructions+=2;NFSU2_TR(0x52cc2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cc30:{NFSU2_TR(0x52cc30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cc35ull));
TAIL_STATIC(0x575630u,575);
}
B52cc35:L52cc35:{c.instructions+=1;NFSU2_TR(0x52cc35);
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
B52cc38:L52cc38:{c.instructions+=3;NFSU2_TR(0x52cc38);
__builtin_memmove((R+0),(R+24),4);
}
B52cc3a:{NFSU2_TR(0x52cc3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52cc3b:{NFSU2_TR(0x52cc3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52cc40:L52cc40:{c.instructions+=3;NFSU2_TR(0x52cc40);
u8 U[4];
w4(U+0,u32(0x79b910ull));
s4(u32(r4(R+4)),r4(U+0));
}
B52cc46:{NFSU2_TR(0x52cc46);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B52cc49:{NFSU2_TR(0x52cc49);
TAIL_STATIC(0x4358e0u,435);
}
B52cc50:L52cc50:{c.instructions+=6;NFSU2_TR(0x52cc50);
__builtin_memmove((R+0),(R+4),4);
}
B52cc52:{NFSU2_TR(0x52cc52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B52cc55:{NFSU2_TR(0x52cc55);
u8 U[4];
w4(U+0,u32(0x79b910ull));
s4(u32(r4(R+0)),r4(U+0));
}
B52cc5b:{NFSU2_TR(0x52cc5b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+8)),r4(U+0));
}
B52cc5d:{NFSU2_TR(0x52cc5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52cc60:{NFSU2_TR(0x52cc60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52cc70:L52cc70:{c.instructions+=3;NFSU2_TR(0x52cc70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cc71:{NFSU2_TR(0x52cc71);
__builtin_memmove((R+24),(R+4),4);
}
B52cc73:{NFSU2_TR(0x52cc73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cc78ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52cc40u);}goto L52cc40;}
}
B52cc78:L52cc78:{c.instructions+=2;NFSU2_TR(0x52cc78);
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
B52cc7d:{NFSU2_TR(0x52cc7d);
if(r1(R+518)){{goto L52cc88;}}
}
B52cc7f:L52cc7f:{c.instructions+=2;NFSU2_TR(0x52cc7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cc80:{NFSU2_TR(0x52cc80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cc85ull));
TAIL_STATIC(0x575630u,575);
}
B52cc85:L52cc85:{c.instructions+=1;NFSU2_TR(0x52cc85);
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
B52cc88:L52cc88:{c.instructions+=3;NFSU2_TR(0x52cc88);
__builtin_memmove((R+0),(R+24),4);
}
B52cc8a:{NFSU2_TR(0x52cc8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52cc8b:{NFSU2_TR(0x52cc8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52cc90:L52cc90:{c.instructions+=8;NFSU2_TR(0x52cc90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cc93:{NFSU2_TR(0x52cc93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cc95:{NFSU2_TR(0x52cc95);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cc96:{NFSU2_TR(0x52cc96);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cc97:{NFSU2_TR(0x52cc97);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52cc9a:{NFSU2_TR(0x52cc9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cc9b:{NFSU2_TR(0x52cc9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cc9c:{NFSU2_TR(0x52cc9c);
if(r1(R+518)){{goto L52cca3;}}
}
B52cc9e:L52cc9e:{c.instructions+=2;NFSU2_TR(0x52cc9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B52cca1:{NFSU2_TR(0x52cca1);
{goto L52cca5;}
}
B52cca3:L52cca3:{c.instructions+=1;NFSU2_TR(0x52cca3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52cca5:L52cca5:{c.instructions+=3;NFSU2_TR(0x52cca5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52cca9:{NFSU2_TR(0x52cca9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B52ccad:{NFSU2_TR(0x52ccad);
__builtin_memmove((R+4),(R+4),4);
}
B52ccb0:L52ccb0:{c.instructions+=2;NFSU2_TR(0x52ccb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52ccb2:{NFSU2_TR(0x52ccb2);
if(r1(R+518)){{goto L52ccb9;}}
}
B52ccb4:L52ccb4:{c.instructions+=2;NFSU2_TR(0x52ccb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B52ccb7:{NFSU2_TR(0x52ccb7);
{goto L52ccbb;}
}
B52ccb9:L52ccb9:{c.instructions+=1;NFSU2_TR(0x52ccb9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52ccbb:L52ccbb:{c.instructions+=2;NFSU2_TR(0x52ccbb);
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
B52ccbd:{NFSU2_TR(0x52ccbd);
if(r1(R+518)){{goto L52ccf2;}}
}
B52ccbf:L52ccbf:{c.instructions+=3;NFSU2_TR(0x52ccbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ccc2:{NFSU2_TR(0x52ccc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52ccc4:{NFSU2_TR(0x52ccc4);
if(r1(R+518)){{goto L52cce2;}}
}
B52ccc6:L52ccc6:{c.instructions+=2;NFSU2_TR(0x52ccc6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52ccc8:{NFSU2_TR(0x52ccc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52cce2;}}
}
B52ccca:L52ccca:{c.instructions+=3;NFSU2_TR(0x52ccca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52cccd:{NFSU2_TR(0x52cccd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cccf:{NFSU2_TR(0x52cccf);
if(r1(R+518)){{goto L52cce2;}}
}
B52ccd1:L52ccd1:{c.instructions+=7;NFSU2_TR(0x52ccd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ccd5:{NFSU2_TR(0x52ccd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ccd9:{NFSU2_TR(0x52ccd9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ccda:{NFSU2_TR(0x52ccda);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ccdb:{NFSU2_TR(0x52ccdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ccdc:{NFSU2_TR(0x52ccdc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ccdd:{NFSU2_TR(0x52ccdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cce2ull));
TAIL_STATIC(0x51dcd0u,51d);
}
B52cce2:L52cce2:{c.instructions+=3;NFSU2_TR(0x52cce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52cce5:{NFSU2_TR(0x52cce5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cce7:{NFSU2_TR(0x52cce7);
if(r1(R+518)){{goto L52ccee;}}
}
B52cce9:L52cce9:{c.instructions+=2;NFSU2_TR(0x52cce9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B52ccec:{NFSU2_TR(0x52ccec);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52ccb0u);}goto L52ccb0;}
}
B52ccee:L52ccee:{c.instructions+=2;NFSU2_TR(0x52ccee);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52ccf0:{NFSU2_TR(0x52ccf0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52ccb0u);}goto L52ccb0;}
}
B52ccf2:L52ccf2:{c.instructions+=5;NFSU2_TR(0x52ccf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52ccf3:{NFSU2_TR(0x52ccf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ccf4:{NFSU2_TR(0x52ccf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52ccf5:{NFSU2_TR(0x52ccf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52ccf6:{NFSU2_TR(0x52ccf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52cd00:L52cd00:{c.instructions+=9;NFSU2_TR(0x52cd00);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cd06:{NFSU2_TR(0x52cd06);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cd08:{NFSU2_TR(0x52cd08);
u8 U[4];
w4(U+0,u32(0x77708bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cd0d:{NFSU2_TR(0x52cd0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cd0e:{NFSU2_TR(0x52cd0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52cd15:{NFSU2_TR(0x52cd15);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cd16:{NFSU2_TR(0x52cd16);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52cd1a:{NFSU2_TR(0x52cd1a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x30201ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B52cd20:{NFSU2_TR(0x52cd20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52cd74;}}
}
B52cd22:L52cd22:{c.instructions+=2;NFSU2_TR(0x52cd22);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cd24:{NFSU2_TR(0x52cd24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cd29ull));
TAIL_STATIC(0x575620u,575);
}
B52cd29:L52cd29:{c.instructions+=5;NFSU2_TR(0x52cd29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52cd2c:{NFSU2_TR(0x52cd2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52cd30:{NFSU2_TR(0x52cd30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cd32:{NFSU2_TR(0x52cd32);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52cd3a:{NFSU2_TR(0x52cd3a);
if(r1(R+518)){{goto L52cd46;}}
}
B52cd3c:L52cd3c:{c.instructions+=3;NFSU2_TR(0x52cd3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cd3d:{NFSU2_TR(0x52cd3d);
__builtin_memmove((R+4),(R+0),4);
}
B52cd3f:{NFSU2_TR(0x52cd3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cd44ull));
TAIL_STATIC(0x51bdc0u,51b);
}
B52cd44:L52cd44:{c.instructions+=1;NFSU2_TR(0x52cd44);
{goto L52cd48;}
}
B52cd46:L52cd46:{c.instructions+=1;NFSU2_TR(0x52cd46);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52cd48:L52cd48:{c.instructions+=11;NFSU2_TR(0x52cd48);
__builtin_memmove((R+4),gp(0x863768),4);
}
B52cd4e:{NFSU2_TR(0x52cd4e);
__builtin_memmove(gp(0x863768),(R+0),4);
}
B52cd53:{NFSU2_TR(0x52cd53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52cd56:{NFSU2_TR(0x52cd56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x863768ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52cd5d:{NFSU2_TR(0x52cd5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B52cd5f:{NFSU2_TR(0x52cd5f);
w4(R+0,u32(0x1ull));
}
B52cd64:{NFSU2_TR(0x52cd64);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52cd68:{NFSU2_TR(0x52cd68);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52cd6f:{NFSU2_TR(0x52cd6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52cd70:{NFSU2_TR(0x52cd70);
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
B52cd73:{NFSU2_TR(0x52cd73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52cd74:L52cd74:{c.instructions+=6;NFSU2_TR(0x52cd74);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52cd78:{NFSU2_TR(0x52cd78);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52cd7a:{NFSU2_TR(0x52cd7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52cd81:{NFSU2_TR(0x52cd81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52cd82:{NFSU2_TR(0x52cd82);
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
B52cd85:{NFSU2_TR(0x52cd85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52cd90:L52cd90:{c.instructions+=3;NFSU2_TR(0x52cd90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cd94:{NFSU2_TR(0x52cd94);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x39020ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B52cd9a:{NFSU2_TR(0x52cd9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52cdb3;}}
}
B52cd9c:L52cd9c:{c.instructions+=5;NFSU2_TR(0x52cd9c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
}
B52cd9f:{NFSU2_TR(0x52cd9f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B52cda2:{NFSU2_TR(0x52cda2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cda3:{NFSU2_TR(0x52cda3);
w4(R+4,u32(0x8637bcull));
}
B52cda8:{NFSU2_TR(0x52cda8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cdadull));
TAIL_STATIC(0x479130u,479);
}
B52cdad:L52cdad:{c.instructions+=2;NFSU2_TR(0x52cdad);
w4(R+0,u32(0x1ull));
}
B52cdb2:{NFSU2_TR(0x52cdb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52cdb3:L52cdb3:{c.instructions+=2;NFSU2_TR(0x52cdb3);
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
B52cdb5:{NFSU2_TR(0x52cdb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52cdc0:L52cdc0:{c.instructions+=2;NFSU2_TR(0x52cdc0);
w4(R+4,u32(0x8637b0ull));
}
B52cdc5:{NFSU2_TR(0x52cdc5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52cc90u);}goto L52cc90;}
}
B52cdd0:L52cdd0:{c.instructions+=5;NFSU2_TR(0x52cdd0);
__builtin_memmove((R+0),gp(0x8384b8),4);
}
B52cdd5:{NFSU2_TR(0x52cdd5);
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
B52cdd7:{NFSU2_TR(0x52cdd7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cdd8:{NFSU2_TR(0x52cdd8);
__builtin_memmove((R+28),(R+4),4);
}
B52cdda:{NFSU2_TR(0x52cdda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52ce2e;}}
}
B52cddc:L52cddc:{c.instructions+=2;NFSU2_TR(0x52cddc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cddd:{NFSU2_TR(0x52cddd);
w4(R+24,u32(0x7f91d4ull));
}
B52cde2:L52cde2:{c.instructions+=5;NFSU2_TR(0x52cde2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cde5:{NFSU2_TR(0x52cde5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cde6:{NFSU2_TR(0x52cde6);
u8 U[4];
w4(U+0,u32(0x50c630ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cdeb:{NFSU2_TR(0x52cdeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cdec:{NFSU2_TR(0x52cdec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cdf1ull));
TAIL_STATIC(0x5794b0u,579);
}
B52cdf1:L52cdf1:{c.instructions+=10;NFSU2_TR(0x52cdf1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B52cdf3:{NFSU2_TR(0x52cdf3);
__builtin_memmove((R+8),(R+24),4);
}
B52cdf5:{NFSU2_TR(0x52cdf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B52cdf7:{NFSU2_TR(0x52cdf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52cdfa:{NFSU2_TR(0x52cdfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52cdfd:{NFSU2_TR(0x52cdfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ce00:{NFSU2_TR(0x52ce00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ce03:{NFSU2_TR(0x52ce03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ce04:{NFSU2_TR(0x52ce04);
u8 U[4];
w4(U+0,u32(0x79b914ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ce09:{NFSU2_TR(0x52ce09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ce0eull));
TAIL_STATIC(0x50d510u,50d);
}
B52ce0e:L52ce0e:{c.instructions+=4;NFSU2_TR(0x52ce0e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B52ce11:{NFSU2_TR(0x52ce11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B52ce14:{NFSU2_TR(0x52ce14);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7f9420ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7f9420ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52ce1a:{NFSU2_TR(0x52ce1a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52cde2u);}goto L52cde2;}}
}
B52ce1c:L52ce1c:{c.instructions+=5;NFSU2_TR(0x52ce1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ce1d:{NFSU2_TR(0x52ce1d);
u8 U[4];
w4(U+0,u32(0x527520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ce22:{NFSU2_TR(0x52ce22);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ce24:{NFSU2_TR(0x52ce24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ce25:{NFSU2_TR(0x52ce25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ce2aull));
TAIL_STATIC(0x579410u,579);
}
B52ce2a:L52ce2a:{c.instructions+=2;NFSU2_TR(0x52ce2a);
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
B52ce2d:{NFSU2_TR(0x52ce2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ce2e:L52ce2e:{c.instructions+=3;NFSU2_TR(0x52ce2e);
s4(0x8384b8,u32(0x1ull));
}
B52ce38:{NFSU2_TR(0x52ce38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52ce39:{NFSU2_TR(0x52ce39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52ce40:L52ce40:{c.instructions+=6;NFSU2_TR(0x52ce40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ce44:{NFSU2_TR(0x52ce44);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ce45:{NFSU2_TR(0x52ce45);
__builtin_memmove((R+20),(R+4),4);
}
B52ce47:{NFSU2_TR(0x52ce47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ce48:{NFSU2_TR(0x52ce48);
w4(R+4,u32(0x8637b0ull));
}
B52ce4d:{NFSU2_TR(0x52ce4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ce52ull));
TAIL_STATIC(0x51bb70u,51b);
}
B52ce52:L52ce52:{c.instructions+=2;NFSU2_TR(0x52ce52);
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
B52ce54:{NFSU2_TR(0x52ce54);
if(r1(R+518)){{goto L52ce9a;}}
}
B52ce56:L52ce56:{c.instructions+=3;NFSU2_TR(0x52ce56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ce59:{NFSU2_TR(0x52ce59);
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
B52ce5b:{NFSU2_TR(0x52ce5b);
if(r1(R+518)){{goto L52ce9a;}}
}
B52ce5d:L52ce5d:{c.instructions+=5;NFSU2_TR(0x52ce5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ce63:{NFSU2_TR(0x52ce63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ce64:{NFSU2_TR(0x52ce64);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B52ce66:{NFSU2_TR(0x52ce66);
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
B52ce68:{NFSU2_TR(0x52ce68);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L52ce99;}}
}
B52ce6a:L52ce6a:{c.instructions+=5;NFSU2_TR(0x52ce6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ce70:{NFSU2_TR(0x52ce70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ce71:{NFSU2_TR(0x52ce71);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52ce75:{NFSU2_TR(0x52ce75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ce76:{NFSU2_TR(0x52ce76);
__builtin_memmove((R+24),(R+0),4);
}
B52ce78:L52ce78:{c.instructions+=3;NFSU2_TR(0x52ce78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52ce7a:{NFSU2_TR(0x52ce7a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52ce7d:{NFSU2_TR(0x52ce7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52ce81;}}
}
B52ce7f:L52ce7f:{c.instructions+=1;NFSU2_TR(0x52ce7f);
__builtin_memmove((R+28),(R+0),4);
}
B52ce81:L52ce81:{c.instructions+=3;NFSU2_TR(0x52ce81);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B52ce84:{NFSU2_TR(0x52ce84);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B52ce85:{NFSU2_TR(0x52ce85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52ce78u);}goto L52ce78;}}
}
B52ce87:L52ce87:{c.instructions+=4;NFSU2_TR(0x52ce87);
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
B52ce89:{NFSU2_TR(0x52ce89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ce8a:{NFSU2_TR(0x52ce8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52ce8b:{NFSU2_TR(0x52ce8b);
if(r1(R+518)){{goto L52ce99;}}
}
B52ce8d:L52ce8d:{c.instructions+=5;NFSU2_TR(0x52ce8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ce90:{NFSU2_TR(0x52ce90);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ce92:{NFSU2_TR(0x52ce92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ce93:{NFSU2_TR(0x52ce93);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ce94:{NFSU2_TR(0x52ce94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ce99ull));
TAIL_STATIC(0x52b3a0u,52b);
}
B52ce99:L52ce99:{c.instructions+=1;NFSU2_TR(0x52ce99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52ce9a:L52ce9a:{c.instructions+=2;NFSU2_TR(0x52ce9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52ce9b:{NFSU2_TR(0x52ce9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52cea0:L52cea0:{c.instructions+=3;NFSU2_TR(0x52cea0);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B52cea6:{NFSU2_TR(0x52cea6);
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
B52cea8:{NFSU2_TR(0x52cea8);
if(r1(R+518)){{goto L52ceb9;}}
}
B52ceaa:L52ceaa:{c.instructions+=5;NFSU2_TR(0x52ceaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ceae:{NFSU2_TR(0x52ceae);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ceb2:{NFSU2_TR(0x52ceb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ceb3:{NFSU2_TR(0x52ceb3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ceb4:{NFSU2_TR(0x52ceb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ceb9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52ce40u);}goto L52ce40;}
}
B52ceb9:L52ceb9:{c.instructions+=1;NFSU2_TR(0x52ceb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52cec0:L52cec0:{c.instructions+=3;NFSU2_TR(0x52cec0);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B52cec6:{NFSU2_TR(0x52cec6);
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
B52cec8:{NFSU2_TR(0x52cec8);
if(r1(R+518)){{goto L52cee0;}}
}
B52ceca:L52ceca:{c.instructions+=3;NFSU2_TR(0x52ceca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cece:{NFSU2_TR(0x52cece);
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
B52ced0:{NFSU2_TR(0x52ced0);
if(r1(R+518)){{goto L52cee0;}}
}
B52ced2:L52ced2:{c.instructions+=5;NFSU2_TR(0x52ced2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ced5:{NFSU2_TR(0x52ced5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ced9:{NFSU2_TR(0x52ced9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ceda:{NFSU2_TR(0x52ceda);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cedb:{NFSU2_TR(0x52cedb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cee0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52ce40u);}goto L52ce40;}
}
B52cee0:L52cee0:{c.instructions+=1;NFSU2_TR(0x52cee0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52cef0:L52cef0:{c.instructions+=5;NFSU2_TR(0x52cef0);
__builtin_memmove((R+0),gp(0x8384d0),4);
}
B52cef5:{NFSU2_TR(0x52cef5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cef7:{NFSU2_TR(0x52cef7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cef8:{NFSU2_TR(0x52cef8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cef9:{NFSU2_TR(0x52cef9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52cf3b;}}
}
B52cefb:L52cefb:{c.instructions+=3;NFSU2_TR(0x52cefb);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B52cf00:{NFSU2_TR(0x52cf00);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cf02:{NFSU2_TR(0x52cf02);
if(r1(R+518)){{goto L52cf3b;}}
}
B52cf04:L52cf04:{c.instructions+=3;NFSU2_TR(0x52cf04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52cf07:{NFSU2_TR(0x52cf07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cf09:{NFSU2_TR(0x52cf09);
if(r1(R+518)){{goto L52cf55;}}
}
B52cf0b:L52cf0b:{c.instructions+=6;NFSU2_TR(0x52cf0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cf11:{NFSU2_TR(0x52cf11);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52cf15:{NFSU2_TR(0x52cf15);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B52cf1b:{NFSU2_TR(0x52cf1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cf1c:{NFSU2_TR(0x52cf1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cf1d:{NFSU2_TR(0x52cf1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cf22ull));
TAIL_STATIC(0x519e50u,519);
}
B52cf22:L52cf22:{c.instructions+=2;NFSU2_TR(0x52cf22);
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
B52cf24:{NFSU2_TR(0x52cf24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52cf57;}}
}
B52cf26:L52cf26:{c.instructions+=5;NFSU2_TR(0x52cf26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52cf2c:{NFSU2_TR(0x52cf2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((R+4),(U+0),4);
}
B52cf32:{NFSU2_TR(0x52cf32);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cf33:{NFSU2_TR(0x52cf33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cf34:{NFSU2_TR(0x52cf34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cf39ull));
TAIL_STATIC(0x519e50u,519);
}
B52cf39:L52cf39:{c.instructions+=1;NFSU2_TR(0x52cf39);
{goto L52cf51;}
}
B52cf3b:L52cf3b:{c.instructions+=4;NFSU2_TR(0x52cf3b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cf3f:{NFSU2_TR(0x52cf3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cf40:{NFSU2_TR(0x52cf40);
w4(R+4,u32(0x8637b0ull));
}
B52cf45:{NFSU2_TR(0x52cf45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cf4aull));
TAIL_STATIC(0x51bb70u,51b);
}
B52cf4a:L52cf4a:{c.instructions+=2;NFSU2_TR(0x52cf4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cf4c:{NFSU2_TR(0x52cf4c);
if(r1(R+518)){{goto L52cf55;}}
}
B52cf4e:L52cf4e:{c.instructions+=1;NFSU2_TR(0x52cf4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cf51:L52cf51:{c.instructions+=2;NFSU2_TR(0x52cf51);
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
B52cf53:{NFSU2_TR(0x52cf53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52cf57;}}
}
B52cf55:L52cf55:{c.instructions+=1;NFSU2_TR(0x52cf55);
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
B52cf57:L52cf57:{c.instructions+=3;NFSU2_TR(0x52cf57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52cf58:{NFSU2_TR(0x52cf58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52cf59:{NFSU2_TR(0x52cf59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52cf60:L52cf60:{c.instructions+=3;NFSU2_TR(0x52cf60);
__builtin_memmove((R+0),gp(0x8384d0),4);
}
B52cf65:{NFSU2_TR(0x52cf65);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cf67:{NFSU2_TR(0x52cf67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52cf93;}}
}
B52cf69:L52cf69:{c.instructions+=3;NFSU2_TR(0x52cf69);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B52cf6e:{NFSU2_TR(0x52cf6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cf70:{NFSU2_TR(0x52cf70);
if(r1(R+518)){{goto L52cf93;}}
}
B52cf72:L52cf72:{c.instructions+=3;NFSU2_TR(0x52cf72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cf75:{NFSU2_TR(0x52cf75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cf77:{NFSU2_TR(0x52cf77);
if(r1(R+518)){{goto L52cf93;}}
}
B52cf79:L52cf79:{c.instructions+=6;NFSU2_TR(0x52cf79);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52cf7d:{NFSU2_TR(0x52cf7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B52cf83:{NFSU2_TR(0x52cf83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cf86:{NFSU2_TR(0x52cf86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cf87:{NFSU2_TR(0x52cf87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cf88:{NFSU2_TR(0x52cf88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cf8dull));
TAIL_STATIC(0x519e50u,519);
}
B52cf8d:L52cf8d:{c.instructions+=3;NFSU2_TR(0x52cf8d);
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
B52cf8f:{NFSU2_TR(0x52cf8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B52cf92:{NFSU2_TR(0x52cf92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52cf93:L52cf93:{c.instructions+=4;NFSU2_TR(0x52cf93);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cf97:{NFSU2_TR(0x52cf97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cf98:{NFSU2_TR(0x52cf98);
w4(R+4,u32(0x8637b0ull));
}
B52cf9d:{NFSU2_TR(0x52cf9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cfa2ull));
TAIL_STATIC(0x51bb70u,51b);
}
B52cfa2:L52cfa2:{c.instructions+=2;NFSU2_TR(0x52cfa2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cfa4:{NFSU2_TR(0x52cfa4);
if(r1(R+518)){{goto L52cfaf;}}
}
B52cfa6:L52cfa6:{c.instructions+=4;NFSU2_TR(0x52cfa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cfa9:{NFSU2_TR(0x52cfa9);
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
B52cfab:{NFSU2_TR(0x52cfab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B52cfae:{NFSU2_TR(0x52cfae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52cfaf:L52cfaf:{c.instructions+=4;NFSU2_TR(0x52cfaf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52cfb1:{NFSU2_TR(0x52cfb1);
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
B52cfb3:{NFSU2_TR(0x52cfb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B52cfb6:{NFSU2_TR(0x52cfb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52cfc0:L52cfc0:{c.instructions+=9;NFSU2_TR(0x52cfc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cfc6:{NFSU2_TR(0x52cfc6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cfc8:{NFSU2_TR(0x52cfc8);
u8 U[4];
w4(U+0,u32(0x776fa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cfcd:{NFSU2_TR(0x52cfcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cfce:{NFSU2_TR(0x52cfce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52cfd2:{NFSU2_TR(0x52cfd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52cfd9:{NFSU2_TR(0x52cfd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B52cfdc:{NFSU2_TR(0x52cfdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cfdd:{NFSU2_TR(0x52cfdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52cfe2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52cef0u);}goto L52cef0;}
}
B52cfe2:L52cfe2:{c.instructions+=3;NFSU2_TR(0x52cfe2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52cfe5:{NFSU2_TR(0x52cfe5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52cfe7:{NFSU2_TR(0x52cfe7);
if(r1(R+518)){TAIL_STATIC(0x52d00du,52d);}
}
B52cfe9:L52cfe9:{c.instructions+=6;NFSU2_TR(0x52cfe9);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B52cfed:{NFSU2_TR(0x52cfed);
u8 U[4];
w4(U+0,u32(0x79abf8ull));
s4(u32(r4(R+16)),r4(U+0));
}
B52cff5:{NFSU2_TR(0x52cff5);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52cff9:{NFSU2_TR(0x52cff9);
__builtin_memmove((R+8),(R+16),4);
}
B52cffd:{NFSU2_TR(0x52cffd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52cffe:{NFSU2_TR(0x52cffe);
__builtin_memmove((R+4),(R+0),4);
TAIL_STATIC(0x52d000u,52d);
}
XIT:NFSU2_TR_EXIT(0x52c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
