#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4a4(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4c0,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4c0,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4c0(u8* __restrict R,Cpu& c);
u32 page_4c0(Cpu& c){return body_4c0(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4c0(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4c0001:goto L4c0001;
case 0x4c0002:c.instructions+=1;goto B4c0002;
case 0x4c0007:goto L4c0007;
case 0x4c000d:c.instructions+=4;goto B4c000d;
case 0x4c0010:c.instructions+=3;goto B4c0010;
case 0x4c0012:c.instructions+=2;goto B4c0012;
case 0x4c0014:c.instructions+=1;goto B4c0014;
case 0x4c0019:goto L4c0019;
case 0x4c001d:goto L4c001d;
case 0x4c0020:goto L4c0020;
case 0x4c0023:c.instructions+=2;goto B4c0023;
case 0x4c0026:c.instructions+=1;goto B4c0026;
case 0x4c0028:goto L4c0028;
case 0x4c002b:c.instructions+=7;goto B4c002b;
case 0x4c002e:c.instructions+=6;goto B4c002e;
case 0x4c0031:c.instructions+=5;goto B4c0031;
case 0x4c0034:c.instructions+=4;goto B4c0034;
case 0x4c0036:c.instructions+=3;goto B4c0036;
case 0x4c0037:c.instructions+=2;goto B4c0037;
case 0x4c0038:c.instructions+=1;goto B4c0038;
case 0x4c003d:goto L4c003d;
case 0x4c0040:goto L4c0040;
case 0x4c004c:goto L4c004c;
case 0x4c004d:c.instructions+=6;goto B4c004d;
case 0x4c004e:c.instructions+=5;goto B4c004e;
case 0x4c004f:c.instructions+=4;goto B4c004f;
case 0x4c0050:c.instructions+=3;goto B4c0050;
case 0x4c0055:c.instructions+=2;goto B4c0055;
case 0x4c0057:c.instructions+=1;goto B4c0057;
case 0x4c0059:goto L4c0059;
case 0x4c005f:c.instructions+=3;goto B4c005f;
case 0x4c0064:c.instructions+=2;goto B4c0064;
case 0x4c0066:c.instructions+=1;goto B4c0066;
case 0x4c0068:goto L4c0068;
case 0x4c006e:c.instructions+=2;goto B4c006e;
case 0x4c0070:c.instructions+=1;goto B4c0070;
case 0x4c0072:goto L4c0072;
case 0x4c0078:c.instructions+=1;goto B4c0078;
case 0x4c007a:goto L4c007a;
case 0x4c007c:c.instructions+=1;goto B4c007c;
case 0x4c007d:goto L4c007d;
case 0x4c0083:c.instructions+=2;goto B4c0083;
case 0x4c0088:c.instructions+=1;goto B4c0088;
case 0x4c008a:goto L4c008a;
case 0x4c008c:c.instructions+=1;goto B4c008c;
case 0x4c008e:goto L4c008e;
case 0x4c0094:c.instructions+=1;goto B4c0094;
case 0x4c0096:goto L4c0096;
case 0x4c0098:c.instructions+=1;goto B4c0098;
case 0x4c009a:goto L4c009a;
case 0x4c00a0:c.instructions+=1;goto B4c00a0;
case 0x4c00a2:goto L4c00a2;
case 0x4c00a5:c.instructions+=1;goto B4c00a5;
case 0x4c00a7:goto L4c00a7;
case 0x4c00ad:goto L4c00ad;
case 0x4c00af:goto L4c00af;
case 0x4c00b1:goto L4c00b1;
case 0x4c00c0:goto L4c00c0;
case 0x4c00c5:c.instructions+=2;goto B4c00c5;
case 0x4c00c7:c.instructions+=1;goto B4c00c7;
case 0x4c00c9:goto L4c00c9;
case 0x4c00ce:c.instructions+=2;goto B4c00ce;
case 0x4c00d1:c.instructions+=1;goto B4c00d1;
case 0x4c00d3:goto L4c00d3;
case 0x4c00d8:c.instructions+=2;goto B4c00d8;
case 0x4c00da:c.instructions+=1;goto B4c00da;
case 0x4c00dc:goto L4c00dc;
case 0x4c00e3:c.instructions+=1;goto B4c00e3;
case 0x4c00e5:goto L4c00e5;
case 0x4c00e7:c.instructions+=1;goto B4c00e7;
case 0x4c00e8:goto L4c00e8;
case 0x4c00ed:c.instructions+=2;goto B4c00ed;
case 0x4c00f2:c.instructions+=1;goto B4c00f2;
case 0x4c00f4:goto L4c00f4;
case 0x4c00f6:c.instructions+=1;goto B4c00f6;
case 0x4c00f8:goto L4c00f8;
case 0x4c00fe:c.instructions+=1;goto B4c00fe;
case 0x4c0100:goto L4c0100;
case 0x4c0103:c.instructions+=1;goto B4c0103;
case 0x4c0105:goto L4c0105;
case 0x4c010b:c.instructions+=1;goto B4c010b;
case 0x4c010d:goto L4c010d;
case 0x4c010f:c.instructions+=1;goto B4c010f;
case 0x4c0110:goto L4c0110;
case 0x4c0113:c.instructions+=8;goto B4c0113;
case 0x4c0118:c.instructions+=7;goto B4c0118;
case 0x4c011d:c.instructions+=6;goto B4c011d;
case 0x4c011e:c.instructions+=5;goto B4c011e;
case 0x4c011f:c.instructions+=4;goto B4c011f;
case 0x4c0120:c.instructions+=3;goto B4c0120;
case 0x4c0122:c.instructions+=2;goto B4c0122;
case 0x4c0126:c.instructions+=1;goto B4c0126;
case 0x4c0128:goto L4c0128;
case 0x4c012b:c.instructions+=1;goto B4c012b;
case 0x4c0131:goto L4c0131;
case 0x4c0138:c.instructions+=1;goto B4c0138;
case 0x4c013e:goto L4c013e;
case 0x4c0143:c.instructions+=2;goto B4c0143;
case 0x4c014b:c.instructions+=1;goto B4c014b;
case 0x4c0150:goto L4c0150;
case 0x4c0152:c.instructions+=1;goto B4c0152;
case 0x4c0158:goto L4c0158;
case 0x4c015b:c.instructions+=1;goto B4c015b;
case 0x4c0160:goto L4c0160;
case 0x4c0162:c.instructions+=3;goto B4c0162;
case 0x4c0169:c.instructions+=2;goto B4c0169;
case 0x4c016b:c.instructions+=1;goto B4c016b;
case 0x4c0170:goto L4c0170;
case 0x4c0173:c.instructions+=2;goto B4c0173;
case 0x4c0175:c.instructions+=1;goto B4c0175;
case 0x4c0177:goto L4c0177;
case 0x4c017a:c.instructions+=5;goto B4c017a;
case 0x4c017d:c.instructions+=4;goto B4c017d;
case 0x4c0180:c.instructions+=3;goto B4c0180;
case 0x4c0183:c.instructions+=2;goto B4c0183;
case 0x4c018a:c.instructions+=1;goto B4c018a;
case 0x4c018c:goto L4c018c;
case 0x4c018e:goto L4c018e;
case 0x4c0191:c.instructions+=10;goto B4c0191;
case 0x4c0195:c.instructions+=9;goto B4c0195;
case 0x4c0197:c.instructions+=8;goto B4c0197;
case 0x4c019a:c.instructions+=7;goto B4c019a;
case 0x4c019d:c.instructions+=6;goto B4c019d;
case 0x4c019e:c.instructions+=5;goto B4c019e;
case 0x4c01a3:c.instructions+=4;goto B4c01a3;
case 0x4c01a5:c.instructions+=3;goto B4c01a5;
case 0x4c01a9:c.instructions+=2;goto B4c01a9;
case 0x4c01af:c.instructions+=1;goto B4c01af;
case 0x4c01b4:goto L4c01b4;
case 0x4c01b6:c.instructions+=1;goto B4c01b6;
case 0x4c01b8:goto L4c01b8;
case 0x4c01bd:goto L4c01bd;
case 0x4c01c0:c.instructions+=1;goto B4c01c0;
case 0x4c01c6:goto L4c01c6;
case 0x4c01cb:c.instructions+=3;goto B4c01cb;
case 0x4c01cd:c.instructions+=2;goto B4c01cd;
case 0x4c01cf:c.instructions+=1;goto B4c01cf;
case 0x4c01d5:goto L4c01d5;
case 0x4c01d6:c.instructions+=2;goto B4c01d6;
case 0x4c01db:c.instructions+=1;goto B4c01db;
case 0x4c01e0:goto L4c01e0;
case 0x4c01e3:c.instructions+=3;goto B4c01e3;
case 0x4c01e4:c.instructions+=2;goto B4c01e4;
case 0x4c01e9:c.instructions+=1;goto B4c01e9;
case 0x4c01ee:goto L4c01ee;
case 0x4c01ef:c.instructions+=3;goto B4c01ef;
case 0x4c01f4:c.instructions+=2;goto B4c01f4;
case 0x4c01f6:c.instructions+=1;goto B4c01f6;
case 0x4c01fb:goto L4c01fb;
case 0x4c01fc:c.instructions+=3;goto B4c01fc;
case 0x4c0201:c.instructions+=2;goto B4c0201;
case 0x4c0205:c.instructions+=1;goto B4c0205;
case 0x4c020a:goto L4c020a;
case 0x4c020c:c.instructions+=2;goto B4c020c;
case 0x4c0210:c.instructions+=1;goto B4c0210;
case 0x4c0215:goto L4c0215;
case 0x4c0218:c.instructions+=2;goto B4c0218;
case 0x4c021a:c.instructions+=1;goto B4c021a;
case 0x4c021c:goto L4c021c;
case 0x4c0220:c.instructions+=6;goto B4c0220;
case 0x4c0224:c.instructions+=5;goto B4c0224;
case 0x4c0227:c.instructions+=4;goto B4c0227;
case 0x4c022a:c.instructions+=3;goto B4c022a;
case 0x4c022d:c.instructions+=2;goto B4c022d;
case 0x4c0230:c.instructions+=1;goto B4c0230;
case 0x4c0232:goto L4c0232;
case 0x4c0234:goto L4c0234;
case 0x4c0238:c.instructions+=10;goto B4c0238;
case 0x4c023b:c.instructions+=9;goto B4c023b;
case 0x4c023e:c.instructions+=8;goto B4c023e;
case 0x4c0240:c.instructions+=7;goto B4c0240;
case 0x4c0243:c.instructions+=6;goto B4c0243;
case 0x4c0246:c.instructions+=5;goto B4c0246;
case 0x4c0248:c.instructions+=4;goto B4c0248;
case 0x4c024d:c.instructions+=3;goto B4c024d;
case 0x4c024e:c.instructions+=2;goto B4c024e;
case 0x4c0250:c.instructions+=1;goto B4c0250;
case 0x4c0252:goto L4c0252;
case 0x4c0256:goto L4c0256;
case 0x4c0259:c.instructions+=2;goto B4c0259;
case 0x4c025e:c.instructions+=1;goto B4c025e;
case 0x4c0263:goto L4c0263;
case 0x4c0264:c.instructions+=4;goto B4c0264;
case 0x4c0265:c.instructions+=3;goto B4c0265;
case 0x4c0266:c.instructions+=2;goto B4c0266;
case 0x4c0269:c.instructions+=1;goto B4c0269;
case 0x4c0270:goto L4c0270;
case 0x4c0271:c.instructions+=4;goto B4c0271;
case 0x4c0272:c.instructions+=3;goto B4c0272;
case 0x4c0274:c.instructions+=2;goto B4c0274;
case 0x4c0279:c.instructions+=1;goto B4c0279;
case 0x4c027e:goto L4c027e;
case 0x4c0280:c.instructions+=1;goto B4c0280;
case 0x4c0282:goto L4c0282;
case 0x4c0287:c.instructions+=2;goto B4c0287;
case 0x4c028c:c.instructions+=1;goto B4c028c;
case 0x4c028e:goto L4c028e;
case 0x4c0291:c.instructions+=1;goto B4c0291;
case 0x4c0293:goto L4c0293;
case 0x4c029a:c.instructions+=1;goto B4c029a;
case 0x4c029c:goto L4c029c;
case 0x4c029f:c.instructions+=2;goto B4c029f;
case 0x4c02a4:c.instructions+=1;goto B4c02a4;
case 0x4c02a9:goto L4c02a9;
case 0x4c02aa:c.instructions+=3;goto B4c02aa;
case 0x4c02af:c.instructions+=2;goto B4c02af;
case 0x4c02b0:c.instructions+=1;goto B4c02b0;
case 0x4c02b5:goto L4c02b5;
case 0x4c02b8:goto L4c02b8;
case 0x4c02bd:c.instructions+=2;goto B4c02bd;
case 0x4c02bf:c.instructions+=1;goto B4c02bf;
case 0x4c02c1:goto L4c02c1;
case 0x4c02c6:c.instructions+=2;goto B4c02c6;
case 0x4c02c8:c.instructions+=1;goto B4c02c8;
case 0x4c02ca:goto L4c02ca;
case 0x4c02cd:c.instructions+=2;goto B4c02cd;
case 0x4c02d2:c.instructions+=1;goto B4c02d2;
case 0x4c02d7:goto L4c02d7;
case 0x4c02da:c.instructions+=3;goto B4c02da;
case 0x4c02db:c.instructions+=2;goto B4c02db;
case 0x4c02e0:c.instructions+=1;goto B4c02e0;
case 0x4c02e5:goto L4c02e5;
case 0x4c02e8:c.instructions+=3;goto B4c02e8;
case 0x4c02e9:c.instructions+=2;goto B4c02e9;
case 0x4c02ea:c.instructions+=1;goto B4c02ea;
case 0x4c02ef:goto L4c02ef;
case 0x4c02f2:goto L4c02f2;
case 0x4c02f3:c.instructions+=2;goto B4c02f3;
case 0x4c02f4:c.instructions+=1;goto B4c02f4;
case 0x4c0300:goto L4c0300;
case 0x4c0301:c.instructions+=10;goto B4c0301;
case 0x4c0305:c.instructions+=9;goto B4c0305;
case 0x4c0308:c.instructions+=8;goto B4c0308;
case 0x4c0309:c.instructions+=7;goto B4c0309;
case 0x4c030a:c.instructions+=6;goto B4c030a;
case 0x4c030e:c.instructions+=5;goto B4c030e;
case 0x4c0310:c.instructions+=4;goto B4c0310;
case 0x4c0316:c.instructions+=3;goto B4c0316;
case 0x4c0317:c.instructions+=2;goto B4c0317;
case 0x4c0318:c.instructions+=1;goto B4c0318;
case 0x4c031d:goto L4c031d;
case 0x4c0320:c.instructions+=2;goto B4c0320;
case 0x4c0324:c.instructions+=1;goto B4c0324;
case 0x4c0326:goto L4c0326;
case 0x4c032c:c.instructions+=2;goto B4c032c;
case 0x4c032e:c.instructions+=1;goto B4c032e;
case 0x4c0330:goto L4c0330;
case 0x4c0337:c.instructions+=1;goto B4c0337;
case 0x4c0339:goto L4c0339;
case 0x4c0340:c.instructions+=1;goto B4c0340;
case 0x4c0342:goto L4c0342;
case 0x4c0343:c.instructions+=4;goto B4c0343;
case 0x4c0346:c.instructions+=3;goto B4c0346;
case 0x4c0348:c.instructions+=2;goto B4c0348;
case 0x4c034d:c.instructions+=1;goto B4c034d;
case 0x4c0352:goto L4c0352;
case 0x4c0355:c.instructions+=4;goto B4c0355;
case 0x4c0356:c.instructions+=3;goto B4c0356;
case 0x4c0357:c.instructions+=2;goto B4c0357;
case 0x4c035c:c.instructions+=1;goto B4c035c;
case 0x4c0361:goto L4c0361;
case 0x4c0364:c.instructions+=3;goto B4c0364;
case 0x4c0365:c.instructions+=2;goto B4c0365;
case 0x4c0366:c.instructions+=1;goto B4c0366;
case 0x4c036b:goto L4c036b;
case 0x4c036e:c.instructions+=1;goto B4c036e;
case 0x4c036f:goto L4c036f;
case 0x4c0372:c.instructions+=6;goto B4c0372;
case 0x4c0375:c.instructions+=5;goto B4c0375;
case 0x4c0376:c.instructions+=4;goto B4c0376;
case 0x4c037b:c.instructions+=3;goto B4c037b;
case 0x4c037c:c.instructions+=2;goto B4c037c;
case 0x4c0381:c.instructions+=1;goto B4c0381;
case 0x4c0386:goto L4c0386;
case 0x4c0389:c.instructions+=3;goto B4c0389;
case 0x4c038a:c.instructions+=2;goto B4c038a;
case 0x4c038b:c.instructions+=1;goto B4c038b;
case 0x4c0390:goto L4c0390;
case 0x4c0393:c.instructions+=4;goto B4c0393;
case 0x4c0394:c.instructions+=3;goto B4c0394;
case 0x4c0395:c.instructions+=2;goto B4c0395;
case 0x4c0396:c.instructions+=1;goto B4c0396;
case 0x4c03a0:goto L4c03a0;
case 0x4c03a1:c.instructions+=11;goto B4c03a1;
case 0x4c03a2:c.instructions+=10;goto B4c03a2;
case 0x4c03a6:c.instructions+=9;goto B4c03a6;
case 0x4c03a7:c.instructions+=8;goto B4c03a7;
case 0x4c03a8:c.instructions+=7;goto B4c03a8;
case 0x4c03ac:c.instructions+=6;goto B4c03ac;
case 0x4c03af:c.instructions+=5;goto B4c03af;
case 0x4c03b1:c.instructions+=4;goto B4c03b1;
case 0x4c03b7:c.instructions+=3;goto B4c03b7;
case 0x4c03b8:c.instructions+=2;goto B4c03b8;
case 0x4c03b9:c.instructions+=1;goto B4c03b9;
case 0x4c03be:goto L4c03be;
case 0x4c03c3:c.instructions+=2;goto B4c03c3;
case 0x4c03c5:c.instructions+=1;goto B4c03c5;
case 0x4c03ca:goto L4c03ca;
case 0x4c03cc:c.instructions+=1;goto B4c03cc;
case 0x4c03ce:goto L4c03ce;
case 0x4c03d1:c.instructions+=3;goto B4c03d1;
case 0x4c03d2:c.instructions+=2;goto B4c03d2;
case 0x4c03d7:c.instructions+=1;goto B4c03d7;
case 0x4c03dc:goto L4c03dc;
case 0x4c03df:c.instructions+=1;goto B4c03df;
case 0x4c03e1:goto L4c03e1;
case 0x4c03e4:c.instructions+=2;goto B4c03e4;
case 0x4c03e8:c.instructions+=1;goto B4c03e8;
case 0x4c03ea:goto L4c03ea;
case 0x4c03f0:c.instructions+=2;goto B4c03f0;
case 0x4c03f2:c.instructions+=1;goto B4c03f2;
case 0x4c03f4:goto L4c03f4;
case 0x4c03f7:c.instructions+=1;goto B4c03f7;
case 0x4c03fc:goto L4c03fc;
case 0x4c03fe:goto L4c03fe;
case 0x4c0403:goto L4c0403;
case 0x4c0406:c.instructions+=5;goto B4c0406;
case 0x4c0407:c.instructions+=4;goto B4c0407;
case 0x4c040c:c.instructions+=3;goto B4c040c;
case 0x4c040d:c.instructions+=2;goto B4c040d;
case 0x4c0412:c.instructions+=1;goto B4c0412;
case 0x4c0417:goto L4c0417;
case 0x4c041a:c.instructions+=3;goto B4c041a;
case 0x4c041b:c.instructions+=2;goto B4c041b;
case 0x4c041c:c.instructions+=1;goto B4c041c;
case 0x4c0421:goto L4c0421;
case 0x4c0424:c.instructions+=5;goto B4c0424;
case 0x4c0425:c.instructions+=4;goto B4c0425;
case 0x4c0426:c.instructions+=3;goto B4c0426;
case 0x4c0427:c.instructions+=2;goto B4c0427;
case 0x4c0428:c.instructions+=1;goto B4c0428;
case 0x4c0430:goto L4c0430;
case 0x4c0433:c.instructions+=9;goto B4c0433;
case 0x4c0434:c.instructions+=8;goto B4c0434;
case 0x4c0438:c.instructions+=7;goto B4c0438;
case 0x4c043a:c.instructions+=6;goto B4c043a;
case 0x4c043b:c.instructions+=5;goto B4c043b;
case 0x4c043c:c.instructions+=4;goto B4c043c;
case 0x4c043e:c.instructions+=3;goto B4c043e;
case 0x4c0440:c.instructions+=2;goto B4c0440;
case 0x4c0441:c.instructions+=1;goto B4c0441;
case 0x4c0443:goto L4c0443;
case 0x4c0445:goto L4c0445;
case 0x4c0448:c.instructions+=2;goto B4c0448;
case 0x4c044a:c.instructions+=1;goto B4c044a;
case 0x4c044c:goto L4c044c;
case 0x4c044e:goto L4c044e;
case 0x4c0451:c.instructions+=2;goto B4c0451;
case 0x4c0453:c.instructions+=1;goto B4c0453;
case 0x4c0455:goto L4c0455;
case 0x4c0457:goto L4c0457;
case 0x4c045a:c.instructions+=2;goto B4c045a;
case 0x4c045c:c.instructions+=1;goto B4c045c;
case 0x4c045e:goto L4c045e;
case 0x4c0460:goto L4c0460;
case 0x4c0463:c.instructions+=2;goto B4c0463;
case 0x4c0465:c.instructions+=1;goto B4c0465;
case 0x4c0467:goto L4c0467;
case 0x4c0469:goto L4c0469;
case 0x4c046c:c.instructions+=2;goto B4c046c;
case 0x4c046e:c.instructions+=1;goto B4c046e;
case 0x4c0470:goto L4c0470;
case 0x4c0472:goto L4c0472;
case 0x4c0476:c.instructions+=5;goto B4c0476;
case 0x4c0479:c.instructions+=4;goto B4c0479;
case 0x4c047a:c.instructions+=3;goto B4c047a;
case 0x4c047c:c.instructions+=2;goto B4c047c;
case 0x4c047e:c.instructions+=1;goto B4c047e;
case 0x4c0483:goto L4c0483;
case 0x4c0485:c.instructions+=3;goto B4c0485;
case 0x4c048a:c.instructions+=2;goto B4c048a;
case 0x4c048f:c.instructions+=1;goto B4c048f;
case 0x4c0493:goto L4c0493;
case 0x4c0495:goto L4c0495;
case 0x4c0497:c.instructions+=4;goto B4c0497;
case 0x4c0498:c.instructions+=3;goto B4c0498;
case 0x4c049e:c.instructions+=2;goto B4c049e;
case 0x4c04a0:c.instructions+=1;goto B4c04a0;
case 0x4c04a6:goto L4c04a6;
case 0x4c04ac:c.instructions+=4;goto B4c04ac;
case 0x4c04b1:c.instructions+=3;goto B4c04b1;
case 0x4c04b5:c.instructions+=2;goto B4c04b5;
case 0x4c04b9:c.instructions+=1;goto B4c04b9;
case 0x4c04c0:goto L4c04c0;
case 0x4c04c4:c.instructions+=2;goto B4c04c4;
case 0x4c04c7:c.instructions+=1;goto B4c04c7;
case 0x4c04cd:goto L4c04cd;
case 0x4c04d0:c.instructions+=2;goto B4c04d0;
case 0x4c04d2:c.instructions+=1;goto B4c04d2;
case 0x4c04d4:goto L4c04d4;
case 0x4c04d9:c.instructions+=1;goto B4c04d9;
case 0x4c04db:goto L4c04db;
case 0x4c04e1:c.instructions+=3;goto B4c04e1;
case 0x4c04e7:c.instructions+=2;goto B4c04e7;
case 0x4c04e9:c.instructions+=1;goto B4c04e9;
case 0x4c04eb:goto L4c04eb;
case 0x4c04f1:goto L4c04f1;
case 0x4c04f7:c.instructions+=6;goto B4c04f7;
case 0x4c04fd:c.instructions+=5;goto B4c04fd;
case 0x4c0503:c.instructions+=4;goto B4c0503;
case 0x4c0505:c.instructions+=3;goto B4c0505;
case 0x4c050b:c.instructions+=2;goto B4c050b;
case 0x4c0511:c.instructions+=1;goto B4c0511;
case 0x4c0516:goto L4c0516;
case 0x4c0519:goto L4c0519;
case 0x4c051a:c.instructions+=5;goto B4c051a;
case 0x4c051f:c.instructions+=4;goto B4c051f;
case 0x4c0523:c.instructions+=3;goto B4c0523;
case 0x4c0525:c.instructions+=2;goto B4c0525;
case 0x4c0526:c.instructions+=1;goto B4c0526;
case 0x4c052b:goto L4c052b;
case 0x4c052e:c.instructions+=5;goto B4c052e;
case 0x4c0533:c.instructions+=4;goto B4c0533;
case 0x4c0537:c.instructions+=3;goto B4c0537;
case 0x4c0538:c.instructions+=2;goto B4c0538;
case 0x4c0539:c.instructions+=1;goto B4c0539;
case 0x4c053e:goto L4c053e;
case 0x4c0542:c.instructions+=7;goto B4c0542;
case 0x4c0545:c.instructions+=6;goto B4c0545;
case 0x4c0548:c.instructions+=5;goto B4c0548;
case 0x4c0549:c.instructions+=4;goto B4c0549;
case 0x4c054e:c.instructions+=3;goto B4c054e;
case 0x4c054f:c.instructions+=2;goto B4c054f;
case 0x4c0554:c.instructions+=1;goto B4c0554;
case 0x4c0559:goto L4c0559;
case 0x4c055c:c.instructions+=3;goto B4c055c;
case 0x4c055d:c.instructions+=2;goto B4c055d;
case 0x4c055e:c.instructions+=1;goto B4c055e;
case 0x4c0563:goto L4c0563;
case 0x4c0566:c.instructions+=6;goto B4c0566;
case 0x4c0567:c.instructions+=5;goto B4c0567;
case 0x4c056a:c.instructions+=4;goto B4c056a;
case 0x4c056b:c.instructions+=3;goto B4c056b;
case 0x4c056c:c.instructions+=2;goto B4c056c;
case 0x4c056e:c.instructions+=1;goto B4c056e;
case 0x4c0573:goto L4c0573;
case 0x4c0577:c.instructions+=4;goto B4c0577;
case 0x4c0579:c.instructions+=3;goto B4c0579;
case 0x4c057b:c.instructions+=2;goto B4c057b;
case 0x4c057e:c.instructions+=1;goto B4c057e;
case 0x4c0580:goto L4c0580;
case 0x4c0585:c.instructions+=1;goto B4c0585;
case 0x4c0587:goto L4c0587;
case 0x4c0589:c.instructions+=1;goto B4c0589;
case 0x4c058b:goto L4c058b;
case 0x4c0590:c.instructions+=1;goto B4c0590;
case 0x4c0592:goto L4c0592;
case 0x4c0595:c.instructions+=1;goto B4c0595;
case 0x4c0597:goto L4c0597;
case 0x4c059c:goto L4c059c;
case 0x4c059d:c.instructions+=5;goto B4c059d;
case 0x4c05a2:c.instructions+=4;goto B4c05a2;
case 0x4c05a6:c.instructions+=3;goto B4c05a6;
case 0x4c05a8:c.instructions+=2;goto B4c05a8;
case 0x4c05a9:c.instructions+=1;goto B4c05a9;
case 0x4c05ae:goto L4c05ae;
case 0x4c05b1:c.instructions+=3;goto B4c05b1;
case 0x4c05b2:c.instructions+=2;goto B4c05b2;
case 0x4c05b6:c.instructions+=1;goto B4c05b6;
case 0x4c05bb:goto L4c05bb;
case 0x4c05bf:c.instructions+=5;goto B4c05bf;
case 0x4c05c0:c.instructions+=4;goto B4c05c0;
case 0x4c05c4:c.instructions+=3;goto B4c05c4;
case 0x4c05c5:c.instructions+=2;goto B4c05c5;
case 0x4c05c6:c.instructions+=1;goto B4c05c6;
case 0x4c05cb:goto L4c05cb;
case 0x4c05cc:c.instructions+=5;goto B4c05cc;
case 0x4c05d1:c.instructions+=4;goto B4c05d1;
case 0x4c05d5:c.instructions+=3;goto B4c05d5;
case 0x4c05d7:c.instructions+=2;goto B4c05d7;
case 0x4c05d8:c.instructions+=1;goto B4c05d8;
case 0x4c05dd:goto L4c05dd;
case 0x4c05e0:c.instructions+=5;goto B4c05e0;
case 0x4c05e5:c.instructions+=4;goto B4c05e5;
case 0x4c05e9:c.instructions+=3;goto B4c05e9;
case 0x4c05ea:c.instructions+=2;goto B4c05ea;
case 0x4c05eb:c.instructions+=1;goto B4c05eb;
case 0x4c05f0:goto L4c05f0;
case 0x4c05f3:goto L4c05f3;
case 0x4c05f7:c.instructions+=9;goto B4c05f7;
case 0x4c05fb:c.instructions+=8;goto B4c05fb;
case 0x4c05fe:c.instructions+=7;goto B4c05fe;
case 0x4c0601:c.instructions+=6;goto B4c0601;
case 0x4c0602:c.instructions+=5;goto B4c0602;
case 0x4c0606:c.instructions+=4;goto B4c0606;
case 0x4c0609:c.instructions+=3;goto B4c0609;
case 0x4c060c:c.instructions+=2;goto B4c060c;
case 0x4c0610:c.instructions+=1;goto B4c0610;
case 0x4c0616:goto L4c0616;
case 0x4c0617:c.instructions+=5;goto B4c0617;
case 0x4c0618:c.instructions+=4;goto B4c0618;
case 0x4c0619:c.instructions+=3;goto B4c0619;
case 0x4c061a:c.instructions+=2;goto B4c061a;
case 0x4c061d:c.instructions+=1;goto B4c061d;
case 0x4c061e:goto L4c061e;
case 0x4c0623:c.instructions+=6;goto B4c0623;
case 0x4c0627:c.instructions+=5;goto B4c0627;
case 0x4c062c:c.instructions+=4;goto B4c062c;
case 0x4c062e:c.instructions+=3;goto B4c062e;
case 0x4c0633:c.instructions+=2;goto B4c0633;
case 0x4c063b:c.instructions+=1;goto B4c063b;
case 0x4c0640:goto L4c0640;
case 0x4c0642:c.instructions+=1;goto B4c0642;
case 0x4c0648:goto L4c0648;
case 0x4c064a:c.instructions+=1;goto B4c064a;
case 0x4c064c:goto L4c064c;
case 0x4c064f:c.instructions+=2;goto B4c064f;
case 0x4c0653:c.instructions+=1;goto B4c0653;
case 0x4c0655:goto L4c0655;
case 0x4c0657:c.instructions+=3;goto B4c0657;
case 0x4c065a:c.instructions+=2;goto B4c065a;
case 0x4c065c:c.instructions+=1;goto B4c065c;
case 0x4c065e:goto L4c065e;
case 0x4c0662:c.instructions+=4;goto B4c0662;
case 0x4c0663:c.instructions+=3;goto B4c0663;
case 0x4c0664:c.instructions+=2;goto B4c0664;
case 0x4c0668:c.instructions+=1;goto B4c0668;
case 0x4c066a:goto L4c066a;
case 0x4c066c:c.instructions+=1;goto B4c066c;
case 0x4c0672:goto L4c0672;
case 0x4c0675:c.instructions+=1;goto B4c0675;
case 0x4c0677:goto L4c0677;
case 0x4c067a:c.instructions+=2;goto B4c067a;
case 0x4c067e:c.instructions+=1;goto B4c067e;
case 0x4c0680:goto L4c0680;
case 0x4c0682:c.instructions+=3;goto B4c0682;
case 0x4c0685:c.instructions+=2;goto B4c0685;
case 0x4c0687:c.instructions+=1;goto B4c0687;
case 0x4c0689:goto L4c0689;
case 0x4c068b:c.instructions+=2;goto B4c068b;
case 0x4c068f:c.instructions+=1;goto B4c068f;
case 0x4c0690:goto L4c0690;
case 0x4c0693:c.instructions+=3;goto B4c0693;
case 0x4c0697:c.instructions+=2;goto B4c0697;
case 0x4c0699:c.instructions+=1;goto B4c0699;
case 0x4c069b:goto L4c069b;
case 0x4c069d:c.instructions+=2;goto B4c069d;
case 0x4c06a1:c.instructions+=1;goto B4c06a1;
case 0x4c06a6:goto L4c06a6;
case 0x4c06a7:c.instructions+=9;goto B4c06a7;
case 0x4c06aa:c.instructions+=8;goto B4c06aa;
case 0x4c06af:c.instructions+=7;goto B4c06af;
case 0x4c06b3:c.instructions+=6;goto B4c06b3;
case 0x4c06ba:c.instructions+=5;goto B4c06ba;
case 0x4c06be:c.instructions+=4;goto B4c06be;
case 0x4c06c0:c.instructions+=3;goto B4c06c0;
case 0x4c06c1:c.instructions+=2;goto B4c06c1;
case 0x4c06c5:c.instructions+=1;goto B4c06c5;
case 0x4c06ca:goto L4c06ca;
case 0x4c06ce:c.instructions+=3;goto B4c06ce;
case 0x4c06d1:c.instructions+=2;goto B4c06d1;
case 0x4c06d3:c.instructions+=1;goto B4c06d3;
case 0x4c06d5:goto L4c06d5;
case 0x4c06d6:c.instructions+=6;goto B4c06d6;
case 0x4c06d9:c.instructions+=5;goto B4c06d9;
case 0x4c06de:c.instructions+=4;goto B4c06de;
case 0x4c06e2:c.instructions+=3;goto B4c06e2;
case 0x4c06e3:c.instructions+=2;goto B4c06e3;
case 0x4c06e4:c.instructions+=1;goto B4c06e4;
case 0x4c06e9:goto L4c06e9;
case 0x4c06ec:c.instructions+=1;goto B4c06ec;
case 0x4c06ee:goto L4c06ee;
case 0x4c06f1:c.instructions+=5;goto B4c06f1;
case 0x4c06f6:c.instructions+=4;goto B4c06f6;
case 0x4c06fa:c.instructions+=3;goto B4c06fa;
case 0x4c06fb:c.instructions+=2;goto B4c06fb;
case 0x4c06fc:c.instructions+=1;goto B4c06fc;
case 0x4c0701:goto L4c0701;
case 0x4c0704:goto L4c0704;
case 0x4c0707:c.instructions+=8;goto B4c0707;
case 0x4c070a:c.instructions+=7;goto B4c070a;
case 0x4c070d:c.instructions+=6;goto B4c070d;
case 0x4c070e:c.instructions+=5;goto B4c070e;
case 0x4c0713:c.instructions+=4;goto B4c0713;
case 0x4c0714:c.instructions+=3;goto B4c0714;
case 0x4c0719:c.instructions+=2;goto B4c0719;
case 0x4c071d:c.instructions+=1;goto B4c071d;
case 0x4c0722:goto L4c0722;
case 0x4c0725:c.instructions+=4;goto B4c0725;
case 0x4c0726:c.instructions+=3;goto B4c0726;
case 0x4c072a:c.instructions+=2;goto B4c072a;
case 0x4c072b:c.instructions+=1;goto B4c072b;
case 0x4c0730:goto L4c0730;
case 0x4c0733:c.instructions+=5;goto B4c0733;
case 0x4c0734:c.instructions+=4;goto B4c0734;
case 0x4c0735:c.instructions+=3;goto B4c0735;
case 0x4c0736:c.instructions+=2;goto B4c0736;
case 0x4c0738:c.instructions+=1;goto B4c0738;
case 0x4c073d:goto L4c073d;
case 0x4c0741:c.instructions+=6;goto B4c0741;
case 0x4c0742:c.instructions+=5;goto B4c0742;
case 0x4c0743:c.instructions+=4;goto B4c0743;
case 0x4c0744:c.instructions+=3;goto B4c0744;
case 0x4c0745:c.instructions+=2;goto B4c0745;
case 0x4c0747:c.instructions+=1;goto B4c0747;
case 0x4c074c:goto L4c074c;
case 0x4c0754:c.instructions+=7;goto B4c0754;
case 0x4c0757:c.instructions+=6;goto B4c0757;
case 0x4c0758:c.instructions+=5;goto B4c0758;
case 0x4c075d:c.instructions+=4;goto B4c075d;
case 0x4c075e:c.instructions+=3;goto B4c075e;
case 0x4c0763:c.instructions+=2;goto B4c0763;
case 0x4c0767:c.instructions+=1;goto B4c0767;
case 0x4c076c:goto L4c076c;
case 0x4c0770:c.instructions+=4;goto B4c0770;
case 0x4c0773:c.instructions+=3;goto B4c0773;
case 0x4c0774:c.instructions+=2;goto B4c0774;
case 0x4c0775:c.instructions+=1;goto B4c0775;
case 0x4c077a:goto L4c077a;
case 0x4c077e:c.instructions+=4;goto B4c077e;
case 0x4c0781:c.instructions+=3;goto B4c0781;
case 0x4c0783:c.instructions+=2;goto B4c0783;
case 0x4c0787:c.instructions+=1;goto B4c0787;
case 0x4c0789:goto L4c0789;
case 0x4c078c:c.instructions+=1;goto B4c078c;
case 0x4c0792:goto L4c0792;
case 0x4c0793:c.instructions+=5;goto B4c0793;
case 0x4c0794:c.instructions+=4;goto B4c0794;
case 0x4c0795:c.instructions+=3;goto B4c0795;
case 0x4c0796:c.instructions+=2;goto B4c0796;
case 0x4c0799:c.instructions+=1;goto B4c0799;
case 0x4c07a0:goto L4c07a0;
case 0x4c07a3:c.instructions+=7;goto B4c07a3;
case 0x4c07a8:c.instructions+=6;goto B4c07a8;
case 0x4c07ab:c.instructions+=5;goto B4c07ab;
case 0x4c07ac:c.instructions+=4;goto B4c07ac;
case 0x4c07ad:c.instructions+=3;goto B4c07ad;
case 0x4c07ae:c.instructions+=2;goto B4c07ae;
case 0x4c07b2:c.instructions+=1;goto B4c07b2;
case 0x4c07b8:goto L4c07b8;
case 0x4c07bf:c.instructions+=1;goto B4c07bf;
case 0x4c07c5:goto L4c07c5;
case 0x4c07c7:c.instructions+=4;goto B4c07c7;
case 0x4c07cd:c.instructions+=3;goto B4c07cd;
case 0x4c07d2:c.instructions+=2;goto B4c07d2;
case 0x4c07da:c.instructions+=1;goto B4c07da;
case 0x4c07e0:goto L4c07e0;
case 0x4c07e2:c.instructions+=1;goto B4c07e2;
case 0x4c07e7:goto L4c07e7;
case 0x4c07ea:c.instructions+=2;goto B4c07ea;
case 0x4c07ec:c.instructions+=1;goto B4c07ec;
case 0x4c07ee:goto L4c07ee;
case 0x4c07f1:c.instructions+=6;goto B4c07f1;
case 0x4c07f8:c.instructions+=5;goto B4c07f8;
case 0x4c07fb:c.instructions+=4;goto B4c07fb;
case 0x4c07fe:c.instructions+=3;goto B4c07fe;
case 0x4c0805:c.instructions+=2;goto B4c0805;
case 0x4c0808:c.instructions+=1;goto B4c0808;
case 0x4c080a:goto L4c080a;
case 0x4c080c:goto L4c080c;
case 0x4c080f:c.instructions+=10;goto B4c080f;
case 0x4c0811:c.instructions+=9;goto B4c0811;
case 0x4c0814:c.instructions+=8;goto B4c0814;
case 0x4c0817:c.instructions+=7;goto B4c0817;
case 0x4c0819:c.instructions+=6;goto B4c0819;
case 0x4c081d:c.instructions+=5;goto B4c081d;
case 0x4c081e:c.instructions+=4;goto B4c081e;
case 0x4c0824:c.instructions+=3;goto B4c0824;
case 0x4c0825:c.instructions+=2;goto B4c0825;
case 0x4c0829:c.instructions+=1;goto B4c0829;
case 0x4c082b:goto L4c082b;
case 0x4c0830:c.instructions+=2;goto B4c0830;
case 0x4c0832:c.instructions+=1;goto B4c0832;
case 0x4c0837:goto L4c0837;
case 0x4c0838:c.instructions+=4;goto B4c0838;
case 0x4c0839:c.instructions+=3;goto B4c0839;
case 0x4c083a:c.instructions+=2;goto B4c083a;
case 0x4c083d:c.instructions+=1;goto B4c083d;
case 0x4c083e:goto L4c083e;
case 0x4c0843:c.instructions+=1;goto B4c0843;
case 0x4c0845:goto L4c0845;
case 0x4c0848:c.instructions+=1;goto B4c0848;
case 0x4c084e:goto L4c084e;
case 0x4c0855:c.instructions+=1;goto B4c0855;
case 0x4c085b:goto L4c085b;
case 0x4c0860:c.instructions+=2;goto B4c0860;
case 0x4c0868:c.instructions+=1;goto B4c0868;
case 0x4c086d:goto L4c086d;
case 0x4c086f:c.instructions+=1;goto B4c086f;
case 0x4c0871:goto L4c0871;
case 0x4c0875:c.instructions+=2;goto B4c0875;
case 0x4c087b:c.instructions+=1;goto B4c087b;
case 0x4c0880:goto L4c0880;
case 0x4c0882:c.instructions+=3;goto B4c0882;
case 0x4c0889:c.instructions+=2;goto B4c0889;
case 0x4c088b:c.instructions+=1;goto B4c088b;
case 0x4c0890:goto L4c0890;
case 0x4c0893:c.instructions+=2;goto B4c0893;
case 0x4c0895:c.instructions+=1;goto B4c0895;
case 0x4c0897:goto L4c0897;
case 0x4c0899:c.instructions+=6;goto B4c0899;
case 0x4c089c:c.instructions+=5;goto B4c089c;
case 0x4c089f:c.instructions+=4;goto B4c089f;
case 0x4c08a2:c.instructions+=3;goto B4c08a2;
case 0x4c08a9:c.instructions+=2;goto B4c08a9;
case 0x4c08ac:c.instructions+=1;goto B4c08ac;
case 0x4c08ae:goto L4c08ae;
case 0x4c08b0:goto L4c08b0;
case 0x4c08b3:c.instructions+=10;goto B4c08b3;
case 0x4c08b7:c.instructions+=9;goto B4c08b7;
case 0x4c08b9:c.instructions+=8;goto B4c08b9;
case 0x4c08bc:c.instructions+=7;goto B4c08bc;
case 0x4c08bf:c.instructions+=6;goto B4c08bf;
case 0x4c08c0:c.instructions+=5;goto B4c08c0;
case 0x4c08c5:c.instructions+=4;goto B4c08c5;
case 0x4c08c7:c.instructions+=3;goto B4c08c7;
case 0x4c08cb:c.instructions+=2;goto B4c08cb;
case 0x4c08d1:c.instructions+=1;goto B4c08d1;
case 0x4c08d6:goto L4c08d6;
case 0x4c08d8:c.instructions+=1;goto B4c08d8;
case 0x4c08da:goto L4c08da;
case 0x4c08de:c.instructions+=4;goto B4c08de;
case 0x4c08e4:c.instructions+=3;goto B4c08e4;
case 0x4c08e9:c.instructions+=2;goto B4c08e9;
case 0x4c08ed:c.instructions+=1;goto B4c08ed;
case 0x4c08f2:goto L4c08f2;
case 0x4c08f7:c.instructions+=4;goto B4c08f7;
case 0x4c08f9:c.instructions+=3;goto B4c08f9;
case 0x4c0901:c.instructions+=2;goto B4c0901;
case 0x4c0903:c.instructions+=1;goto B4c0903;
case 0x4c0908:goto L4c0908;
case 0x4c090a:c.instructions+=1;goto B4c090a;
case 0x4c0910:goto L4c0910;
case 0x4c0915:goto L4c0915;
case 0x4c0919:c.instructions+=2;goto B4c0919;
case 0x4c091a:c.instructions+=1;goto B4c091a;
case 0x4c091f:goto L4c091f;
case 0x4c0921:c.instructions+=3;goto B4c0921;
case 0x4c0928:c.instructions+=2;goto B4c0928;
case 0x4c092c:c.instructions+=1;goto B4c092c;
case 0x4c092e:goto L4c092e;
case 0x4c0930:c.instructions+=1;goto B4c0930;
case 0x4c0934:goto L4c0934;
case 0x4c0939:c.instructions+=4;goto B4c0939;
case 0x4c093c:c.instructions+=3;goto B4c093c;
case 0x4c093d:c.instructions+=2;goto B4c093d;
case 0x4c0943:c.instructions+=1;goto B4c0943;
case 0x4c0948:goto L4c0948;
case 0x4c094a:c.instructions+=1;goto B4c094a;
case 0x4c094c:goto L4c094c;
case 0x4c094d:c.instructions+=4;goto B4c094d;
case 0x4c094e:c.instructions+=3;goto B4c094e;
case 0x4c094f:c.instructions+=2;goto B4c094f;
case 0x4c0952:c.instructions+=1;goto B4c0952;
case 0x4c0953:goto L4c0953;
case 0x4c0958:c.instructions+=3;goto B4c0958;
case 0x4c095a:c.instructions+=2;goto B4c095a;
case 0x4c095c:c.instructions+=1;goto B4c095c;
case 0x4c0962:goto L4c0962;
case 0x4c0968:c.instructions+=2;goto B4c0968;
case 0x4c096c:c.instructions+=1;goto B4c096c;
case 0x4c0970:goto L4c0970;
case 0x4c0971:c.instructions+=2;goto B4c0971;
case 0x4c0976:c.instructions+=1;goto B4c0976;
case 0x4c097b:goto L4c097b;
case 0x4c097e:c.instructions+=3;goto B4c097e;
case 0x4c097f:c.instructions+=2;goto B4c097f;
case 0x4c0984:c.instructions+=1;goto B4c0984;
case 0x4c0989:goto L4c0989;
case 0x4c098a:c.instructions+=3;goto B4c098a;
case 0x4c098f:c.instructions+=2;goto B4c098f;
case 0x4c0991:c.instructions+=1;goto B4c0991;
case 0x4c0996:goto L4c0996;
case 0x4c0997:c.instructions+=3;goto B4c0997;
case 0x4c099c:c.instructions+=2;goto B4c099c;
case 0x4c09a0:c.instructions+=1;goto B4c09a0;
case 0x4c09a5:goto L4c09a5;
case 0x4c09a7:c.instructions+=2;goto B4c09a7;
case 0x4c09ab:c.instructions+=1;goto B4c09ab;
case 0x4c09b0:goto L4c09b0;
case 0x4c09b3:c.instructions+=2;goto B4c09b3;
case 0x4c09b5:c.instructions+=1;goto B4c09b5;
case 0x4c09b7:goto L4c09b7;
case 0x4c09bb:c.instructions+=6;goto B4c09bb;
case 0x4c09bf:c.instructions+=5;goto B4c09bf;
case 0x4c09c2:c.instructions+=4;goto B4c09c2;
case 0x4c09c5:c.instructions+=3;goto B4c09c5;
case 0x4c09c8:c.instructions+=2;goto B4c09c8;
case 0x4c09cb:c.instructions+=1;goto B4c09cb;
case 0x4c09cd:goto L4c09cd;
case 0x4c09cf:goto L4c09cf;
case 0x4c09d3:c.instructions+=7;goto B4c09d3;
case 0x4c09d6:c.instructions+=6;goto B4c09d6;
case 0x4c09d8:c.instructions+=5;goto B4c09d8;
case 0x4c09db:c.instructions+=4;goto B4c09db;
case 0x4c09e0:c.instructions+=3;goto B4c09e0;
case 0x4c09e3:c.instructions+=2;goto B4c09e3;
case 0x4c09e5:c.instructions+=1;goto B4c09e5;
case 0x4c09ea:goto L4c09ea;
case 0x4c09ef:c.instructions+=3;goto B4c09ef;
case 0x4c09f0:c.instructions+=2;goto B4c09f0;
case 0x4c09f2:c.instructions+=1;goto B4c09f2;
case 0x4c09f8:goto L4c09f8;
case 0x4c09f9:c.instructions+=4;goto B4c09f9;
case 0x4c09fa:c.instructions+=3;goto B4c09fa;
case 0x4c09fb:c.instructions+=2;goto B4c09fb;
case 0x4c09fe:c.instructions+=1;goto B4c09fe;
case 0x4c0a00:goto L4c0a00;
case 0x4c0a04:c.instructions+=9;goto B4c0a04;
case 0x4c0a05:c.instructions+=8;goto B4c0a05;
case 0x4c0a09:c.instructions+=7;goto B4c0a09;
case 0x4c0a0a:c.instructions+=6;goto B4c0a0a;
case 0x4c0a0c:c.instructions+=5;goto B4c0a0c;
case 0x4c0a0f:c.instructions+=4;goto B4c0a0f;
case 0x4c0a10:c.instructions+=3;goto B4c0a10;
case 0x4c0a16:c.instructions+=2;goto B4c0a16;
case 0x4c0a17:c.instructions+=1;goto B4c0a17;
case 0x4c0a1c:goto L4c0a1c;
case 0x4c0a1f:c.instructions+=2;goto B4c0a1f;
case 0x4c0a23:c.instructions+=1;goto B4c0a23;
case 0x4c0a25:goto L4c0a25;
case 0x4c0a2b:c.instructions+=2;goto B4c0a2b;
case 0x4c0a2d:c.instructions+=1;goto B4c0a2d;
case 0x4c0a2f:goto L4c0a2f;
case 0x4c0a36:c.instructions+=1;goto B4c0a36;
case 0x4c0a38:goto L4c0a38;
case 0x4c0a3f:c.instructions+=1;goto B4c0a3f;
case 0x4c0a41:goto L4c0a41;
case 0x4c0a42:c.instructions+=4;goto B4c0a42;
case 0x4c0a45:c.instructions+=3;goto B4c0a45;
case 0x4c0a47:c.instructions+=2;goto B4c0a47;
case 0x4c0a4c:c.instructions+=1;goto B4c0a4c;
case 0x4c0a51:goto L4c0a51;
case 0x4c0a54:c.instructions+=4;goto B4c0a54;
case 0x4c0a55:c.instructions+=3;goto B4c0a55;
case 0x4c0a56:c.instructions+=2;goto B4c0a56;
case 0x4c0a5b:c.instructions+=1;goto B4c0a5b;
case 0x4c0a60:goto L4c0a60;
case 0x4c0a63:c.instructions+=3;goto B4c0a63;
case 0x4c0a64:c.instructions+=2;goto B4c0a64;
case 0x4c0a65:c.instructions+=1;goto B4c0a65;
case 0x4c0a6a:goto L4c0a6a;
case 0x4c0a6d:c.instructions+=1;goto B4c0a6d;
case 0x4c0a6e:goto L4c0a6e;
case 0x4c0a72:c.instructions+=3;goto B4c0a72;
case 0x4c0a74:c.instructions+=2;goto B4c0a74;
case 0x4c0a77:c.instructions+=1;goto B4c0a77;
case 0x4c0a79:goto L4c0a79;
case 0x4c0a7a:c.instructions+=2;goto B4c0a7a;
case 0x4c0a7b:c.instructions+=1;goto B4c0a7b;
case 0x4c0a7d:goto L4c0a7d;
case 0x4c0a7e:goto L4c0a7e;
case 0x4c0a83:c.instructions+=3;goto B4c0a83;
case 0x4c0a84:c.instructions+=2;goto B4c0a84;
case 0x4c0a89:c.instructions+=1;goto B4c0a89;
case 0x4c0a8e:goto L4c0a8e;
case 0x4c0a91:c.instructions+=3;goto B4c0a91;
case 0x4c0a92:c.instructions+=2;goto B4c0a92;
case 0x4c0a93:c.instructions+=1;goto B4c0a93;
case 0x4c0a98:goto L4c0a98;
case 0x4c0a9b:c.instructions+=3;goto B4c0a9b;
case 0x4c0a9c:c.instructions+=2;goto B4c0a9c;
case 0x4c0a9d:c.instructions+=1;goto B4c0a9d;
case 0x4c0aa0:goto L4c0aa0;
case 0x4c0aa2:c.instructions+=14;goto B4c0aa2;
case 0x4c0aa7:c.instructions+=13;goto B4c0aa7;
case 0x4c0aad:c.instructions+=12;goto B4c0aad;
case 0x4c0aae:c.instructions+=11;goto B4c0aae;
case 0x4c0ab5:c.instructions+=10;goto B4c0ab5;
case 0x4c0ab8:c.instructions+=9;goto B4c0ab8;
case 0x4c0abc:c.instructions+=8;goto B4c0abc;
case 0x4c0abd:c.instructions+=7;goto B4c0abd;
case 0x4c0abe:c.instructions+=6;goto B4c0abe;
case 0x4c0abf:c.instructions+=5;goto B4c0abf;
case 0x4c0ac0:c.instructions+=4;goto B4c0ac0;
case 0x4c0ac2:c.instructions+=3;goto B4c0ac2;
case 0x4c0ac3:c.instructions+=2;goto B4c0ac3;
case 0x4c0ac7:c.instructions+=1;goto B4c0ac7;
case 0x4c0acc:goto L4c0acc;
case 0x4c0ace:c.instructions+=18;goto B4c0ace;
case 0x4c0ad4:c.instructions+=17;goto B4c0ad4;
case 0x4c0ad7:c.instructions+=16;goto B4c0ad7;
case 0x4c0ada:c.instructions+=15;goto B4c0ada;
case 0x4c0add:c.instructions+=14;goto B4c0add;
case 0x4c0ae3:c.instructions+=13;goto B4c0ae3;
case 0x4c0ae9:c.instructions+=12;goto B4c0ae9;
case 0x4c0aef:c.instructions+=11;goto B4c0aef;
case 0x4c0af5:c.instructions+=10;goto B4c0af5;
case 0x4c0afa:c.instructions+=9;goto B4c0afa;
case 0x4c0b00:c.instructions+=8;goto B4c0b00;
case 0x4c0b03:c.instructions+=7;goto B4c0b03;
case 0x4c0b08:c.instructions+=6;goto B4c0b08;
case 0x4c0b0c:c.instructions+=5;goto B4c0b0c;
case 0x4c0b12:c.instructions+=4;goto B4c0b12;
case 0x4c0b18:c.instructions+=3;goto B4c0b18;
case 0x4c0b1f:c.instructions+=2;goto B4c0b1f;
case 0x4c0b25:c.instructions+=1;goto B4c0b25;
case 0x4c0b2a:goto L4c0b2a;
case 0x4c0b2b:c.instructions+=4;goto B4c0b2b;
case 0x4c0b30:c.instructions+=3;goto B4c0b30;
case 0x4c0b35:c.instructions+=2;goto B4c0b35;
case 0x4c0b36:c.instructions+=1;goto B4c0b36;
case 0x4c0b3b:goto L4c0b3b;
case 0x4c0b3e:c.instructions+=2;goto B4c0b3e;
case 0x4c0b43:c.instructions+=1;goto B4c0b43;
case 0x4c0b48:goto L4c0b48;
case 0x4c0b49:c.instructions+=4;goto B4c0b49;
case 0x4c0b4e:c.instructions+=3;goto B4c0b4e;
case 0x4c0b53:c.instructions+=2;goto B4c0b53;
case 0x4c0b54:c.instructions+=1;goto B4c0b54;
case 0x4c0b59:goto L4c0b59;
case 0x4c0b5c:c.instructions+=3;goto B4c0b5c;
case 0x4c0b61:c.instructions+=2;goto B4c0b61;
case 0x4c0b62:c.instructions+=1;goto B4c0b62;
case 0x4c0b67:goto L4c0b67;
case 0x4c0b68:c.instructions+=1;goto B4c0b68;
case 0x4c0b6d:goto L4c0b6d;
case 0x4c0b70:c.instructions+=3;goto B4c0b70;
case 0x4c0b75:c.instructions+=2;goto B4c0b75;
case 0x4c0b76:c.instructions+=1;goto B4c0b76;
case 0x4c0b7b:goto L4c0b7b;
case 0x4c0b7c:c.instructions+=1;goto B4c0b7c;
case 0x4c0b81:goto L4c0b81;
case 0x4c0b86:c.instructions+=3;goto B4c0b86;
case 0x4c0b89:c.instructions+=2;goto B4c0b89;
case 0x4c0b8b:c.instructions+=1;goto B4c0b8b;
case 0x4c0b8d:goto L4c0b8d;
case 0x4c0b93:c.instructions+=1;goto B4c0b93;
case 0x4c0b95:goto L4c0b95;
case 0x4c0b98:c.instructions+=3;goto B4c0b98;
case 0x4c0b99:c.instructions+=2;goto B4c0b99;
case 0x4c0b9e:c.instructions+=1;goto B4c0b9e;
case 0x4c0ba3:goto L4c0ba3;
case 0x4c0ba6:c.instructions+=4;goto B4c0ba6;
case 0x4c0ba7:c.instructions+=3;goto B4c0ba7;
case 0x4c0bac:c.instructions+=2;goto B4c0bac;
case 0x4c0bad:c.instructions+=1;goto B4c0bad;
case 0x4c0bb2:goto L4c0bb2;
case 0x4c0bb5:c.instructions+=4;goto B4c0bb5;
case 0x4c0bb8:c.instructions+=3;goto B4c0bb8;
case 0x4c0bb9:c.instructions+=2;goto B4c0bb9;
case 0x4c0bbe:c.instructions+=1;goto B4c0bbe;
case 0x4c0bc3:goto L4c0bc3;
case 0x4c0bc6:c.instructions+=4;goto B4c0bc6;
case 0x4c0bc7:c.instructions+=3;goto B4c0bc7;
case 0x4c0bcc:c.instructions+=2;goto B4c0bcc;
case 0x4c0bcd:c.instructions+=1;goto B4c0bcd;
case 0x4c0bd2:goto L4c0bd2;
case 0x4c0bd5:c.instructions+=4;goto B4c0bd5;
case 0x4c0bd8:c.instructions+=3;goto B4c0bd8;
case 0x4c0bd9:c.instructions+=2;goto B4c0bd9;
case 0x4c0bde:c.instructions+=1;goto B4c0bde;
case 0x4c0be3:goto L4c0be3;
case 0x4c0be6:c.instructions+=4;goto B4c0be6;
case 0x4c0be7:c.instructions+=3;goto B4c0be7;
case 0x4c0bec:c.instructions+=2;goto B4c0bec;
case 0x4c0bed:c.instructions+=1;goto B4c0bed;
case 0x4c0bf2:goto L4c0bf2;
case 0x4c0bf5:goto L4c0bf5;
case 0x4c0bf8:c.instructions+=4;goto B4c0bf8;
case 0x4c0bfe:c.instructions+=3;goto B4c0bfe;
case 0x4c0bff:c.instructions+=2;goto B4c0bff;
case 0x4c0c03:c.instructions+=1;goto B4c0c03;
case 0x4c0c08:goto L4c0c08;
case 0x4c0c0a:c.instructions+=3;goto B4c0c0a;
case 0x4c0c0c:c.instructions+=2;goto B4c0c0c;
case 0x4c0c10:c.instructions+=1;goto B4c0c10;
case 0x4c0c16:goto L4c0c16;
case 0x4c0c19:c.instructions+=4;goto B4c0c19;
case 0x4c0c1e:c.instructions+=3;goto B4c0c1e;
case 0x4c0c1f:c.instructions+=2;goto B4c0c1f;
case 0x4c0c21:c.instructions+=1;goto B4c0c21;
case 0x4c0c26:goto L4c0c26;
case 0x4c0c29:c.instructions+=2;goto B4c0c29;
case 0x4c0c2b:c.instructions+=1;goto B4c0c2b;
case 0x4c0c2d:goto L4c0c2d;
case 0x4c0c32:c.instructions+=2;goto B4c0c32;
case 0x4c0c33:c.instructions+=1;goto B4c0c33;
case 0x4c0c38:goto L4c0c38;
case 0x4c0c3b:c.instructions+=2;goto B4c0c3b;
case 0x4c0c3d:c.instructions+=1;goto B4c0c3d;
case 0x4c0c3f:goto L4c0c3f;
case 0x4c0c41:goto L4c0c41;
case 0x4c0c47:c.instructions+=7;goto B4c0c47;
case 0x4c0c4d:c.instructions+=6;goto B4c0c4d;
case 0x4c0c50:c.instructions+=5;goto B4c0c50;
case 0x4c0c53:c.instructions+=4;goto B4c0c53;
case 0x4c0c55:c.instructions+=3;goto B4c0c55;
case 0x4c0c57:c.instructions+=2;goto B4c0c57;
case 0x4c0c5b:c.instructions+=1;goto B4c0c5b;
case 0x4c0c5d:goto L4c0c5d;
case 0x4c0c62:c.instructions+=2;goto B4c0c62;
case 0x4c0c63:c.instructions+=1;goto B4c0c63;
case 0x4c0c68:goto L4c0c68;
case 0x4c0c6b:c.instructions+=2;goto B4c0c6b;
case 0x4c0c6d:c.instructions+=1;goto B4c0c6d;
case 0x4c0c6f:goto L4c0c6f;
case 0x4c0c73:c.instructions+=5;goto B4c0c73;
case 0x4c0c79:c.instructions+=4;goto B4c0c79;
case 0x4c0c7f:c.instructions+=3;goto B4c0c7f;
case 0x4c0c81:c.instructions+=2;goto B4c0c81;
case 0x4c0c84:c.instructions+=1;goto B4c0c84;
case 0x4c0c86:goto L4c0c86;
case 0x4c0c88:goto L4c0c88;
case 0x4c0c8d:c.instructions+=2;goto B4c0c8d;
case 0x4c0c8e:c.instructions+=1;goto B4c0c8e;
case 0x4c0c93:goto L4c0c93;
case 0x4c0c96:c.instructions+=2;goto B4c0c96;
case 0x4c0c98:c.instructions+=1;goto B4c0c98;
case 0x4c0c9a:goto L4c0c9a;
case 0x4c0c9e:c.instructions+=2;goto B4c0c9e;
case 0x4c0ca0:c.instructions+=1;goto B4c0ca0;
case 0x4c0ca2:goto L4c0ca2;
case 0x4c0ca4:goto L4c0ca4;
case 0x4c0ca8:goto L4c0ca8;
case 0x4c0caa:c.instructions+=1;goto B4c0caa;
case 0x4c0cac:goto L4c0cac;
case 0x4c0caf:c.instructions+=6;goto B4c0caf;
case 0x4c0cb2:c.instructions+=5;goto B4c0cb2;
case 0x4c0cb5:c.instructions+=4;goto B4c0cb5;
case 0x4c0cb8:c.instructions+=3;goto B4c0cb8;
case 0x4c0cbf:c.instructions+=2;goto B4c0cbf;
case 0x4c0cc5:c.instructions+=1;goto B4c0cc5;
case 0x4c0cc9:goto L4c0cc9;
case 0x4c0ccd:c.instructions+=3;goto B4c0ccd;
case 0x4c0cd3:c.instructions+=2;goto B4c0cd3;
case 0x4c0cd4:c.instructions+=1;goto B4c0cd4;
case 0x4c0cd9:goto L4c0cd9;
case 0x4c0cdb:c.instructions+=4;goto B4c0cdb;
case 0x4c0cdc:c.instructions+=3;goto B4c0cdc;
case 0x4c0cde:c.instructions+=2;goto B4c0cde;
case 0x4c0ce2:c.instructions+=1;goto B4c0ce2;
case 0x4c0ce8:goto L4c0ce8;
case 0x4c0cea:goto L4c0cea;
case 0x4c0ced:c.instructions+=2;goto B4c0ced;
case 0x4c0cf2:c.instructions+=1;goto B4c0cf2;
case 0x4c0cf7:goto L4c0cf7;
case 0x4c0cf8:c.instructions+=2;goto B4c0cf8;
case 0x4c0cf9:c.instructions+=1;goto B4c0cf9;
case 0x4c0cfe:goto L4c0cfe;
case 0x4c0d01:c.instructions+=3;goto B4c0d01;
case 0x4c0d06:c.instructions+=2;goto B4c0d06;
case 0x4c0d0c:c.instructions+=1;goto B4c0d0c;
case 0x4c0d11:goto L4c0d11;
case 0x4c0d12:c.instructions+=2;goto B4c0d12;
case 0x4c0d13:c.instructions+=1;goto B4c0d13;
case 0x4c0d18:goto L4c0d18;
case 0x4c0d1b:c.instructions+=3;goto B4c0d1b;
case 0x4c0d20:c.instructions+=2;goto B4c0d20;
case 0x4c0d26:c.instructions+=1;goto B4c0d26;
case 0x4c0d2b:goto L4c0d2b;
case 0x4c0d2c:c.instructions+=2;goto B4c0d2c;
case 0x4c0d2d:c.instructions+=1;goto B4c0d2d;
case 0x4c0d32:goto L4c0d32;
case 0x4c0d38:c.instructions+=14;goto B4c0d38;
case 0x4c0d3d:c.instructions+=13;goto B4c0d3d;
case 0x4c0d43:c.instructions+=12;goto B4c0d43;
case 0x4c0d46:c.instructions+=11;goto B4c0d46;
case 0x4c0d4b:c.instructions+=10;goto B4c0d4b;
case 0x4c0d51:c.instructions+=9;goto B4c0d51;
case 0x4c0d57:c.instructions+=8;goto B4c0d57;
case 0x4c0d5d:c.instructions+=7;goto B4c0d5d;
case 0x4c0d5f:c.instructions+=6;goto B4c0d5f;
case 0x4c0d65:c.instructions+=5;goto B4c0d65;
case 0x4c0d6b:c.instructions+=4;goto B4c0d6b;
case 0x4c0d71:c.instructions+=3;goto B4c0d71;
case 0x4c0d77:c.instructions+=2;goto B4c0d77;
case 0x4c0d7d:c.instructions+=1;goto B4c0d7d;
case 0x4c0d82:goto L4c0d82;
case 0x4c0d83:c.instructions+=2;goto B4c0d83;
case 0x4c0d84:c.instructions+=1;goto B4c0d84;
case 0x4c0d89:goto L4c0d89;
case 0x4c0d8b:c.instructions+=6;goto B4c0d8b;
case 0x4c0d8f:c.instructions+=5;goto B4c0d8f;
case 0x4c0d90:c.instructions+=4;goto B4c0d90;
case 0x4c0d97:c.instructions+=3;goto B4c0d97;
case 0x4c0d98:c.instructions+=2;goto B4c0d98;
case 0x4c0d99:c.instructions+=1;goto B4c0d99;
case 0x4c0d9e:goto L4c0d9e;
case 0x4c0da5:c.instructions+=16;goto B4c0da5;
case 0x4c0dab:c.instructions+=15;goto B4c0dab;
case 0x4c0dae:c.instructions+=14;goto B4c0dae;
case 0x4c0db1:c.instructions+=13;goto B4c0db1;
case 0x4c0db4:c.instructions+=12;goto B4c0db4;
case 0x4c0dba:c.instructions+=11;goto B4c0dba;
case 0x4c0dbd:c.instructions+=10;goto B4c0dbd;
case 0x4c0dc3:c.instructions+=9;goto B4c0dc3;
case 0x4c0dc6:c.instructions+=8;goto B4c0dc6;
case 0x4c0dcc:c.instructions+=7;goto B4c0dcc;
case 0x4c0dd2:c.instructions+=6;goto B4c0dd2;
case 0x4c0dd8:c.instructions+=5;goto B4c0dd8;
case 0x4c0ddb:c.instructions+=4;goto B4c0ddb;
case 0x4c0de0:c.instructions+=3;goto B4c0de0;
case 0x4c0de6:c.instructions+=2;goto B4c0de6;
case 0x4c0dec:c.instructions+=1;goto B4c0dec;
case 0x4c0df1:goto L4c0df1;
case 0x4c0df4:c.instructions+=3;goto B4c0df4;
case 0x4c0df5:c.instructions+=2;goto B4c0df5;
case 0x4c0df6:c.instructions+=1;goto B4c0df6;
case 0x4c0dfb:goto L4c0dfb;
case 0x4c0dfc:c.instructions+=2;goto B4c0dfc;
case 0x4c0e02:c.instructions+=1;goto B4c0e02;
case 0x4c0e07:goto L4c0e07;
case 0x4c0e0a:c.instructions+=2;goto B4c0e0a;
case 0x4c0e0f:c.instructions+=1;goto B4c0e0f;
case 0x4c0e14:goto L4c0e14;
case 0x4c0e15:c.instructions+=2;goto B4c0e15;
case 0x4c0e16:c.instructions+=1;goto B4c0e16;
case 0x4c0e1b:goto L4c0e1b;
case 0x4c0e1c:c.instructions+=2;goto B4c0e1c;
case 0x4c0e22:c.instructions+=1;goto B4c0e22;
case 0x4c0e27:goto L4c0e27;
case 0x4c0e2a:c.instructions+=4;goto B4c0e2a;
case 0x4c0e2d:c.instructions+=3;goto B4c0e2d;
case 0x4c0e2f:c.instructions+=2;goto B4c0e2f;
case 0x4c0e31:c.instructions+=1;goto B4c0e31;
case 0x4c0e37:goto L4c0e37;
case 0x4c0e3d:c.instructions+=1;goto B4c0e3d;
case 0x4c0e40:goto L4c0e40;
case 0x4c0e42:c.instructions+=7;goto B4c0e42;
case 0x4c0e45:c.instructions+=6;goto B4c0e45;
case 0x4c0e46:c.instructions+=5;goto B4c0e46;
case 0x4c0e4a:c.instructions+=4;goto B4c0e4a;
case 0x4c0e4f:c.instructions+=3;goto B4c0e4f;
case 0x4c0e50:c.instructions+=2;goto B4c0e50;
case 0x4c0e54:c.instructions+=1;goto B4c0e54;
case 0x4c0e59:goto L4c0e59;
case 0x4c0e5c:c.instructions+=3;goto B4c0e5c;
case 0x4c0e60:c.instructions+=2;goto B4c0e60;
case 0x4c0e61:c.instructions+=1;goto B4c0e61;
case 0x4c0e66:goto L4c0e66;
case 0x4c0e67:c.instructions+=2;goto B4c0e67;
case 0x4c0e68:c.instructions+=1;goto B4c0e68;
case 0x4c0e6d:goto L4c0e6d;
case 0x4c0e71:c.instructions+=8;goto B4c0e71;
case 0x4c0e74:c.instructions+=7;goto B4c0e74;
case 0x4c0e76:c.instructions+=6;goto B4c0e76;
case 0x4c0e77:c.instructions+=5;goto B4c0e77;
case 0x4c0e7d:c.instructions+=4;goto B4c0e7d;
case 0x4c0e83:c.instructions+=3;goto B4c0e83;
case 0x4c0e89:c.instructions+=2;goto B4c0e89;
case 0x4c0e8d:c.instructions+=1;goto B4c0e8d;
case 0x4c0e92:goto L4c0e92;
case 0x4c0e96:c.instructions+=5;goto B4c0e96;
case 0x4c0e97:c.instructions+=4;goto B4c0e97;
case 0x4c0e9b:c.instructions+=3;goto B4c0e9b;
case 0x4c0e9c:c.instructions+=2;goto B4c0e9c;
case 0x4c0e9d:c.instructions+=1;goto B4c0e9d;
case 0x4c0ea2:goto L4c0ea2;
case 0x4c0ea6:c.instructions+=12;goto B4c0ea6;
case 0x4c0eac:c.instructions+=11;goto B4c0eac;
case 0x4c0eb2:c.instructions+=10;goto B4c0eb2;
case 0x4c0eb5:c.instructions+=9;goto B4c0eb5;
case 0x4c0eb6:c.instructions+=8;goto B4c0eb6;
case 0x4c0ebc:c.instructions+=7;goto B4c0ebc;
case 0x4c0ec0:c.instructions+=6;goto B4c0ec0;
case 0x4c0ec1:c.instructions+=5;goto B4c0ec1;
case 0x4c0ec7:c.instructions+=4;goto B4c0ec7;
case 0x4c0ec9:c.instructions+=3;goto B4c0ec9;
case 0x4c0ecc:c.instructions+=2;goto B4c0ecc;
case 0x4c0ecd:c.instructions+=1;goto B4c0ecd;
case 0x4c0ed2:goto L4c0ed2;
case 0x4c0ed5:c.instructions+=5;goto B4c0ed5;
case 0x4c0ed7:c.instructions+=4;goto B4c0ed7;
case 0x4c0eda:c.instructions+=3;goto B4c0eda;
case 0x4c0edd:c.instructions+=2;goto B4c0edd;
case 0x4c0edf:c.instructions+=1;goto B4c0edf;
case 0x4c0ee5:goto L4c0ee5;
case 0x4c0ee7:goto L4c0ee7;
case 0x4c0eed:c.instructions+=1;goto B4c0eed;
case 0x4c0ef2:goto L4c0ef2;
case 0x4c0ef4:c.instructions+=1;goto B4c0ef4;
case 0x4c0ef6:goto L4c0ef6;
case 0x4c0efc:c.instructions+=2;goto B4c0efc;
case 0x4c0efe:c.instructions+=1;goto B4c0efe;
case 0x4c0f03:goto L4c0f03;
case 0x4c0f0a:c.instructions+=2;goto B4c0f0a;
case 0x4c0f10:c.instructions+=1;goto B4c0f10;
case 0x4c0f15:goto L4c0f15;
case 0x4c0f17:c.instructions+=1;goto B4c0f17;
case 0x4c0f19:goto L4c0f19;
case 0x4c0f20:goto L4c0f20;
case 0x4c0f23:c.instructions+=4;goto B4c0f23;
case 0x4c0f2a:c.instructions+=3;goto B4c0f2a;
case 0x4c0f30:c.instructions+=2;goto B4c0f30;
case 0x4c0f34:c.instructions+=1;goto B4c0f34;
case 0x4c0f39:goto L4c0f39;
case 0x4c0f3b:c.instructions+=1;goto B4c0f3b;
case 0x4c0f3d:goto L4c0f3d;
case 0x4c0f40:goto L4c0f40;
case 0x4c0f43:c.instructions+=3;goto B4c0f43;
case 0x4c0f44:c.instructions+=2;goto B4c0f44;
case 0x4c0f46:c.instructions+=1;goto B4c0f46;
case 0x4c0f4b:goto L4c0f4b;
case 0x4c0f4e:c.instructions+=3;goto B4c0f4e;
case 0x4c0f53:c.instructions+=2;goto B4c0f53;
case 0x4c0f54:c.instructions+=1;goto B4c0f54;
case 0x4c0f59:goto L4c0f59;
case 0x4c0f5c:c.instructions+=4;goto B4c0f5c;
case 0x4c0f5f:c.instructions+=3;goto B4c0f5f;
case 0x4c0f64:c.instructions+=2;goto B4c0f64;
case 0x4c0f65:c.instructions+=1;goto B4c0f65;
case 0x4c0f6a:goto L4c0f6a;
case 0x4c0f6d:c.instructions+=4;goto B4c0f6d;
case 0x4c0f70:c.instructions+=3;goto B4c0f70;
case 0x4c0f75:c.instructions+=2;goto B4c0f75;
case 0x4c0f76:c.instructions+=1;goto B4c0f76;
case 0x4c0f7b:goto L4c0f7b;
case 0x4c0f7e:c.instructions+=4;goto B4c0f7e;
case 0x4c0f81:c.instructions+=3;goto B4c0f81;
case 0x4c0f86:c.instructions+=2;goto B4c0f86;
case 0x4c0f87:c.instructions+=1;goto B4c0f87;
case 0x4c0f8c:goto L4c0f8c;
case 0x4c0f8f:c.instructions+=4;goto B4c0f8f;
case 0x4c0f92:c.instructions+=3;goto B4c0f92;
case 0x4c0f97:c.instructions+=2;goto B4c0f97;
case 0x4c0f98:c.instructions+=1;goto B4c0f98;
case 0x4c0f9d:goto L4c0f9d;
case 0x4c0fa0:c.instructions+=4;goto B4c0fa0;
case 0x4c0fa3:c.instructions+=3;goto B4c0fa3;
case 0x4c0fa8:c.instructions+=2;goto B4c0fa8;
case 0x4c0fa9:c.instructions+=1;goto B4c0fa9;
case 0x4c0fae:goto L4c0fae;
case 0x4c0fb1:c.instructions+=4;goto B4c0fb1;
case 0x4c0fb4:c.instructions+=3;goto B4c0fb4;
case 0x4c0fb9:c.instructions+=2;goto B4c0fb9;
case 0x4c0fba:c.instructions+=1;goto B4c0fba;
case 0x4c0fbf:goto L4c0fbf;
case 0x4c0fc2:c.instructions+=4;goto B4c0fc2;
case 0x4c0fc5:c.instructions+=3;goto B4c0fc5;
case 0x4c0fca:c.instructions+=2;goto B4c0fca;
case 0x4c0fcb:c.instructions+=1;goto B4c0fcb;
case 0x4c0fd0:goto L4c0fd0;
case 0x4c0fd3:c.instructions+=5;goto B4c0fd3;
case 0x4c0fd6:c.instructions+=4;goto B4c0fd6;
case 0x4c0fd9:c.instructions+=3;goto B4c0fd9;
case 0x4c0fde:c.instructions+=2;goto B4c0fde;
case 0x4c0fdf:c.instructions+=1;goto B4c0fdf;
case 0x4c0fe4:goto L4c0fe4;
case 0x4c0fe7:c.instructions+=7;goto B4c0fe7;
case 0x4c0fe9:c.instructions+=6;goto B4c0fe9;
case 0x4c0fee:c.instructions+=5;goto B4c0fee;
case 0x4c0ff3:c.instructions+=4;goto B4c0ff3;
case 0x4c0ff4:c.instructions+=3;goto B4c0ff4;
case 0x4c0ff7:c.instructions+=2;goto B4c0ff7;
case 0x4c0ffb:c.instructions+=1;goto B4c0ffb;
default:missing_instruction(c.pc);}
B4c0001:L4c0001:{c.instructions+=2;NFSU2_TR(0x4c0001);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0002:{NFSU2_TR(0x4c0002);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0007ull));
TAIL_STATIC(0x50c8d0u,50c);
}
B4c0007:L4c0007:{c.instructions+=5;NFSU2_TR(0x4c0007);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c000d:{NFSU2_TR(0x4c000d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c0010:{NFSU2_TR(0x4c0010);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0012:{NFSU2_TR(0x4c0012);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0014:{NFSU2_TR(0x4c0014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0019ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B4c0019:L4c0019:{c.instructions+=1;NFSU2_TR(0x4c0019);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c001d:L4c001d:{c.instructions+=1;NFSU2_TR(0x4c001d);
u8 U[4];
{SPILL();c.pc=0x4c001du;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B4c0020:L4c0020:{c.instructions+=3;NFSU2_TR(0x4c0020);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0023:{NFSU2_TR(0x4c0023);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4c0026:{NFSU2_TR(0x4c0026);
if(r1(R+518)){{goto L4c0040;}}
}
B4c0028:L4c0028:{c.instructions+=8;NFSU2_TR(0x4c0028);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c002b:{NFSU2_TR(0x4c002b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c002e:{NFSU2_TR(0x4c002e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0031:{NFSU2_TR(0x4c0031);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0034:{NFSU2_TR(0x4c0034);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0036:{NFSU2_TR(0x4c0036);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0037:{NFSU2_TR(0x4c0037);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0038:{NFSU2_TR(0x4c0038);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c003dull));
TAIL_STATIC(0x537980u,537);
}
B4c003d:L4c003d:{c.instructions+=1;NFSU2_TR(0x4c003d);
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
B4c0040:L4c0040:{c.instructions+=1;NFSU2_TR(0x4c0040);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c004c:L4c004c:{c.instructions+=7;NFSU2_TR(0x4c004c);
}
B4c004d:{NFSU2_TR(0x4c004d);
}
B4c004e:{NFSU2_TR(0x4c004e);
}
B4c004f:{NFSU2_TR(0x4c004f);
}
B4c0050:{NFSU2_TR(0x4c0050);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B4c0055:{NFSU2_TR(0x4c0055);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c0057:{NFSU2_TR(0x4c0057);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c00af;}}
}
B4c0059:L4c0059:{c.instructions+=4;NFSU2_TR(0x4c0059);
__builtin_memmove((R+4),gp(0x850078),4);
}
B4c005f:{NFSU2_TR(0x4c005f);
w4(R+0,u32(0x1ull));
}
B4c0064:{NFSU2_TR(0x4c0064);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c0066:{NFSU2_TR(0x4c0066);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c007d;}}
}
B4c0068:L4c0068:{c.instructions+=3;NFSU2_TR(0x4c0068);
__builtin_memmove((R+4),gp(0x863470),4);
}
B4c006e:{NFSU2_TR(0x4c006e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c0070:{NFSU2_TR(0x4c0070);
if(r1(R+518)){{goto L4c00af;}}
}
B4c0072:L4c0072:{c.instructions+=2;NFSU2_TR(0x4c0072);
u8 U[14];
__builtin_memmove((U+6),gp(0x85ef4c),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c0078:{NFSU2_TR(0x4c0078);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4c00b1;}}
}
B4c007a:L4c007a:{c.instructions+=2;NFSU2_TR(0x4c007a);
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
B4c007c:{NFSU2_TR(0x4c007c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c007d:L4c007d:{c.instructions+=3;NFSU2_TR(0x4c007d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c0083:{NFSU2_TR(0x4c0083);
w4(R+8,u32(0x8ull));
}
B4c0088:{NFSU2_TR(0x4c0088);
if(r1(R+518)){{goto L4c008e;}}
}
B4c008a:L4c008a:{c.instructions+=2;NFSU2_TR(0x4c008a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c008c:{NFSU2_TR(0x4c008c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c00a2;}}
}
B4c008e:L4c008e:{c.instructions+=2;NFSU2_TR(0x4c008e);
u8 U[14];
__builtin_memmove((U+6),gp(0x850088),4);
w1(R+512,u8((r4(U+6))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+8)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c0094:{NFSU2_TR(0x4c0094);
if(r1(R+518)){{goto L4c00b1;}}
}
B4c0096:L4c0096:{c.instructions+=2;NFSU2_TR(0x4c0096);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c0098:{NFSU2_TR(0x4c0098);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c00a2;}}
}
B4c009a:L4c009a:{c.instructions+=2;NFSU2_TR(0x4c009a);
u8 U[5];
__builtin_memmove((U+3),gp(0x850098),1);
w1(R+512,u8((r1(U+3))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+0)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c00a0:{NFSU2_TR(0x4c00a0);
{goto L4c00ad;}
}
B4c00a2:L4c00a2:{c.instructions+=2;NFSU2_TR(0x4c00a2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c00a5:{NFSU2_TR(0x4c00a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c00af;}}
}
B4c00a7:L4c00a7:{c.instructions+=1;NFSU2_TR(0x4c00a7);
u8 U[14];
__builtin_memmove((U+6),gp(0x83aab4),4);
w1(R+512,u8((r4(U+6))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+8)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c00ad:L4c00ad:{c.instructions+=1;NFSU2_TR(0x4c00ad);
if(r1(R+518)){{goto L4c00b1;}}
}
B4c00af:L4c00af:{c.instructions+=1;NFSU2_TR(0x4c00af);
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
B4c00b1:L4c00b1:{c.instructions+=1;NFSU2_TR(0x4c00b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c00c0:L4c00c0:{c.instructions+=3;NFSU2_TR(0x4c00c0);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B4c00c5:{NFSU2_TR(0x4c00c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c00c7:{NFSU2_TR(0x4c00c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c00e5;}}
}
B4c00c9:L4c00c9:{c.instructions+=3;NFSU2_TR(0x4c00c9);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4c00ce:{NFSU2_TR(0x4c00ce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c00d1:{NFSU2_TR(0x4c00d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c00e8;}}
}
B4c00d3:L4c00d3:{c.instructions+=3;NFSU2_TR(0x4c00d3);
__builtin_memmove((R+0),gp(0x863470),4);
}
B4c00d8:{NFSU2_TR(0x4c00d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c00da:{NFSU2_TR(0x4c00da);
if(r1(R+518)){{goto L4c00e5;}}
}
B4c00dc:L4c00dc:{c.instructions+=2;NFSU2_TR(0x4c00dc);
u8 U[14];
__builtin_memmove((U+6),gp(0x85ef4c),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c00e3:{NFSU2_TR(0x4c00e3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4c010d;}}
}
B4c00e5:L4c00e5:{c.instructions+=2;NFSU2_TR(0x4c00e5);
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
B4c00e7:{NFSU2_TR(0x4c00e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c00e8:L4c00e8:{c.instructions+=3;NFSU2_TR(0x4c00e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c00ed:{NFSU2_TR(0x4c00ed);
w4(R+4,u32(0x8ull));
}
B4c00f2:{NFSU2_TR(0x4c00f2);
if(r1(R+518)){{goto L4c00f8;}}
}
B4c00f4:L4c00f4:{c.instructions+=2;NFSU2_TR(0x4c00f4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c00f6:{NFSU2_TR(0x4c00f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c0100;}}
}
B4c00f8:L4c00f8:{c.instructions+=2;NFSU2_TR(0x4c00f8);
u8 U[14];
__builtin_memmove((U+6),gp(0x850088),4);
w1(R+512,u8((r4(U+6))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+4)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c00fe:{NFSU2_TR(0x4c00fe);
if(r1(R+518)){{goto L4c010d;}}
}
B4c0100:L4c0100:{c.instructions+=2;NFSU2_TR(0x4c0100);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c0103:{NFSU2_TR(0x4c0103);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c00e5u);}goto L4c00e5;}}
}
B4c0105:L4c0105:{c.instructions+=2;NFSU2_TR(0x4c0105);
u8 U[14];
__builtin_memmove((U+6),gp(0x83aab4),4);
w1(R+512,u8((r4(U+6))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+4)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c010b:{NFSU2_TR(0x4c010b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c00e5u);}goto L4c00e5;}}
}
B4c010d:L4c010d:{c.instructions+=2;NFSU2_TR(0x4c010d);
w1(R+0,u8(0x1ull));
}
B4c010f:{NFSU2_TR(0x4c010f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c0110:L4c0110:{c.instructions+=9;NFSU2_TR(0x4c0110);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4c0113:{NFSU2_TR(0x4c0113);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4c0118:{NFSU2_TR(0x4c0118);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c011d:{NFSU2_TR(0x4c011d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c011e:{NFSU2_TR(0x4c011e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c011f:{NFSU2_TR(0x4c011f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0120:{NFSU2_TR(0x4c0120);
__builtin_memmove((R+28),(R+4),4);
}
B4c0122:{NFSU2_TR(0x4c0122);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0126:{NFSU2_TR(0x4c0126);
if(r1(R+518)){{goto L4c0131;}}
}
B4c0128:L4c0128:{c.instructions+=2;NFSU2_TR(0x4c0128);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c012b:{NFSU2_TR(0x4c012b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c01bd;}}
}
B4c0131:L4c0131:{c.instructions+=2;NFSU2_TR(0x4c0131);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c0138:{NFSU2_TR(0x4c0138);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c01bd;}}
}
B4c013e:L4c013e:{c.instructions+=3;NFSU2_TR(0x4c013e);
w4(R+4,u32(0x89cf48ull));
}
B4c0143:{NFSU2_TR(0x4c0143);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c014b:{NFSU2_TR(0x4c014b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0150ull));
TAIL_STATIC(0x5f01e0u,5f0);
}
B4c0150:L4c0150:{c.instructions+=2;NFSU2_TR(0x4c0150);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c0152:{NFSU2_TR(0x4c0152);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c0256;}}
}
B4c0158:L4c0158:{c.instructions+=2;NFSU2_TR(0x4c0158);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4cull))));
}
B4c015b:{NFSU2_TR(0x4c015b);
w4(R+24,u32(0x85036cull));
}
B4c0160:L4c0160:{c.instructions+=4;NFSU2_TR(0x4c0160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c0162:{NFSU2_TR(0x4c0162);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78daa7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(s32(s8(r1(U+4)))));
}
B4c0169:{NFSU2_TR(0x4c0169);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c016b:{NFSU2_TR(0x4c016b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0170ull));
TAIL_STATIC(0x575620u,575);
}
B4c0170:L4c0170:{c.instructions+=3;NFSU2_TR(0x4c0170);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c0173:{NFSU2_TR(0x4c0173);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c0175:{NFSU2_TR(0x4c0175);
if(r1(R+518)){{goto L4c018c;}}
}
B4c0177:L4c0177:{c.instructions+=6;NFSU2_TR(0x4c0177);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c017a:{NFSU2_TR(0x4c017a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c017d:{NFSU2_TR(0x4c017d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0180:{NFSU2_TR(0x4c0180);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0183:{NFSU2_TR(0x4c0183);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c018a:{NFSU2_TR(0x4c018a);
{goto L4c018e;}
}
B4c018c:L4c018c:{c.instructions+=1;NFSU2_TR(0x4c018c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c018e:L4c018e:{c.instructions+=11;NFSU2_TR(0x4c018e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c0191:{NFSU2_TR(0x4c0191);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c0195:{NFSU2_TR(0x4c0195);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4c0197:{NFSU2_TR(0x4c0197);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c019a:{NFSU2_TR(0x4c019a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c019d:{NFSU2_TR(0x4c019d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4c019e:{NFSU2_TR(0x4c019e);
w4(R+4,u32(0x89cf48ull));
}
B4c01a3:{NFSU2_TR(0x4c01a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4c01a5:{NFSU2_TR(0x4c01a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c01a9:{NFSU2_TR(0x4c01a9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x224ull))));
}
B4c01af:{NFSU2_TR(0x4c01af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c01b4ull));
TAIL_STATIC(0x5f01e0u,5f0);
}
B4c01b4:L4c01b4:{c.instructions+=2;NFSU2_TR(0x4c01b4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c01b6:{NFSU2_TR(0x4c01b6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c0160u);}goto L4c0160;}}
}
B4c01b8:L4c01b8:{c.instructions+=1;NFSU2_TR(0x4c01b8);
{goto L4c0252;}
}
B4c01bd:L4c01bd:{c.instructions+=2;NFSU2_TR(0x4c01bd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c01c0:{NFSU2_TR(0x4c01c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c0263;}}
}
B4c01c6:L4c01c6:{c.instructions+=4;NFSU2_TR(0x4c01c6);
__builtin_memmove((R+0),gp(0x85bab4),4);
}
B4c01cb:{NFSU2_TR(0x4c01cb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4c01cd:{NFSU2_TR(0x4c01cd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c01cf:{NFSU2_TR(0x4c01cf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c0256;}}
}
B4c01d5:L4c01d5:{c.instructions+=3;NFSU2_TR(0x4c01d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c01d6:{NFSU2_TR(0x4c01d6);
w4(R+4,u32(0x85ba64ull));
}
B4c01db:{NFSU2_TR(0x4c01db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c01e0ull));
TAIL_STATIC(0x500d90u,500);
}
B4c01e0:L4c01e0:{c.instructions+=4;NFSU2_TR(0x4c01e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c01e3:{NFSU2_TR(0x4c01e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c01e4:{NFSU2_TR(0x4c01e4);
w4(R+4,u32(0x85036cull));
}
B4c01e9:{NFSU2_TR(0x4c01e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c01eeull));
TAIL_STATIC(0x503320u,503);
}
B4c01ee:L4c01ee:{c.instructions+=4;NFSU2_TR(0x4c01ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c01ef:{NFSU2_TR(0x4c01ef);
w4(R+4,u32(0x85ba64ull));
}
B4c01f4:{NFSU2_TR(0x4c01f4);
__builtin_memmove((R+12),(R+0),4);
}
B4c01f6:{NFSU2_TR(0x4c01f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c01fbull));
TAIL_STATIC(0x513e70u,513);
}
B4c01fb:L4c01fb:{c.instructions+=4;NFSU2_TR(0x4c01fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c01fc:{NFSU2_TR(0x4c01fc);
w4(R+4,u32(0x85ba64ull));
}
B4c0201:{NFSU2_TR(0x4c0201);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0205:{NFSU2_TR(0x4c0205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c020aull));
TAIL_STATIC(0x513eb0u,513);
}
B4c020a:L4c020a:{c.instructions+=3;NFSU2_TR(0x4c020a);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c020c:{NFSU2_TR(0x4c020c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0210:{NFSU2_TR(0x4c0210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0215ull));
TAIL_STATIC(0x575620u,575);
}
B4c0215:L4c0215:{c.instructions+=3;NFSU2_TR(0x4c0215);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c0218:{NFSU2_TR(0x4c0218);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c021a:{NFSU2_TR(0x4c021a);
if(r1(R+518)){{goto L4c0232;}}
}
B4c021c:L4c021c:{c.instructions+=7;NFSU2_TR(0x4c021c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c0220:{NFSU2_TR(0x4c0220);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c0224:{NFSU2_TR(0x4c0224);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0227:{NFSU2_TR(0x4c0227);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c022a:{NFSU2_TR(0x4c022a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c022d:{NFSU2_TR(0x4c022d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0230:{NFSU2_TR(0x4c0230);
{goto L4c0234;}
}
B4c0232:L4c0232:{c.instructions+=1;NFSU2_TR(0x4c0232);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c0234:L4c0234:{c.instructions+=11;NFSU2_TR(0x4c0234);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c0238:{NFSU2_TR(0x4c0238);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c023b:{NFSU2_TR(0x4c023b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B4c023e:{NFSU2_TR(0x4c023e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4c0240:{NFSU2_TR(0x4c0240);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0243:{NFSU2_TR(0x4c0243);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0246:{NFSU2_TR(0x4c0246);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4c0248:{NFSU2_TR(0x4c0248);
__builtin_memmove((R+0),gp(0x85bab4),4);
}
B4c024d:{NFSU2_TR(0x4c024d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4c024e:{NFSU2_TR(0x4c024e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c0250:{NFSU2_TR(0x4c0250);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c01d5u);}goto L4c01d5;}}
}
B4c0252:L4c0252:{c.instructions+=1;NFSU2_TR(0x4c0252);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c0256:L4c0256:{c.instructions+=3;NFSU2_TR(0x4c0256);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c0259:{NFSU2_TR(0x4c0259);
u8 U[4];
w4(U+0,u32(0x4a4710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c025e:{NFSU2_TR(0x4c025e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0263ull));
TAIL_STATIC(0x43e650u,43e);
}
B4c0263:L4c0263:{c.instructions+=5;NFSU2_TR(0x4c0263);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c0264:{NFSU2_TR(0x4c0264);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c0265:{NFSU2_TR(0x4c0265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c0266:{NFSU2_TR(0x4c0266);
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
B4c0269:{NFSU2_TR(0x4c0269);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c0270:L4c0270:{c.instructions+=5;NFSU2_TR(0x4c0270);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0271:{NFSU2_TR(0x4c0271);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0272:{NFSU2_TR(0x4c0272);
__builtin_memmove((R+28),(R+4),4);
}
B4c0274:{NFSU2_TR(0x4c0274);
w4(R+4,u32(0x89cf48ull));
}
B4c0279:{NFSU2_TR(0x4c0279);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c027eull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4c027e:L4c027e:{c.instructions+=2;NFSU2_TR(0x4c027e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c0280:{NFSU2_TR(0x4c0280);
if(r1(R+518)){{goto L4c02b8;}}
}
B4c0282:L4c0282:{c.instructions+=3;NFSU2_TR(0x4c0282);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4c0287:{NFSU2_TR(0x4c0287);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c028c:{NFSU2_TR(0x4c028c);
if(r1(R+518)){{goto L4c0293;}}
}
B4c028e:L4c028e:{c.instructions+=2;NFSU2_TR(0x4c028e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c0291:{NFSU2_TR(0x4c0291);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c029c;}}
}
B4c0293:L4c0293:{c.instructions+=2;NFSU2_TR(0x4c0293);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c029a:{NFSU2_TR(0x4c029a);
if(r1(R+518)){{goto L4c02b8;}}
}
B4c029c:L4c029c:{c.instructions+=3;NFSU2_TR(0x4c029c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c029f:{NFSU2_TR(0x4c029f);
u8 U[4];
w4(U+0,u32(0xff115fffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c02a4:{NFSU2_TR(0x4c02a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c02a9ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c02a9:L4c02a9:{c.instructions+=4;NFSU2_TR(0x4c02a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c02aa:{NFSU2_TR(0x4c02aa);
u8 U[4];
w4(U+0,u32(0x7953e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c02af:{NFSU2_TR(0x4c02af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c02b0:{NFSU2_TR(0x4c02b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c02b5ull));
TAIL_STATIC(0x542600u,542);
}
B4c02b5:L4c02b5:{c.instructions+=1;NFSU2_TR(0x4c02b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c02b8:L4c02b8:{c.instructions+=3;NFSU2_TR(0x4c02b8);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4c02bd:{NFSU2_TR(0x4c02bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c02bf:{NFSU2_TR(0x4c02bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c02ca;}}
}
B4c02c1:L4c02c1:{c.instructions+=3;NFSU2_TR(0x4c02c1);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4c02c6:{NFSU2_TR(0x4c02c6);
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
B4c02c8:{NFSU2_TR(0x4c02c8);
if(r1(R+518)){{goto L4c02f2;}}
}
B4c02ca:L4c02ca:{c.instructions+=3;NFSU2_TR(0x4c02ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c02cd:{NFSU2_TR(0x4c02cd);
u8 U[4];
w4(U+0,u32(0xc03f9f19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c02d2:{NFSU2_TR(0x4c02d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c02d7ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c02d7:L4c02d7:{c.instructions+=4;NFSU2_TR(0x4c02d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c02da:{NFSU2_TR(0x4c02da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c02db:{NFSU2_TR(0x4c02db);
u8 U[4];
w4(U+0,u32(0x7904bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c02e0:{NFSU2_TR(0x4c02e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c02e5ull));
TAIL_STATIC(0x50b990u,50b);
}
B4c02e5:L4c02e5:{c.instructions+=4;NFSU2_TR(0x4c02e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c02e8:{NFSU2_TR(0x4c02e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c02e9:{NFSU2_TR(0x4c02e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c02ea:{NFSU2_TR(0x4c02ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c02efull));
TAIL_STATIC(0x537b80u,537);
}
B4c02ef:L4c02ef:{c.instructions+=1;NFSU2_TR(0x4c02ef);
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
B4c02f2:L4c02f2:{c.instructions+=3;NFSU2_TR(0x4c02f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c02f3:{NFSU2_TR(0x4c02f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c02f4:{NFSU2_TR(0x4c02f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c0300:L4c0300:{c.instructions+=11;NFSU2_TR(0x4c0300);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0301:{NFSU2_TR(0x4c0301);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4c0305:{NFSU2_TR(0x4c0305);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0308:{NFSU2_TR(0x4c0308);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0309:{NFSU2_TR(0x4c0309);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c030a:{NFSU2_TR(0x4c030a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c030e:{NFSU2_TR(0x4c030e);
__builtin_memmove((R+24),(R+4),4);
}
B4c0310:{NFSU2_TR(0x4c0310);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4c0316:{NFSU2_TR(0x4c0316);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0317:{NFSU2_TR(0x4c0317);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c0318:{NFSU2_TR(0x4c0318);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c031dull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4c031d:L4c031d:{c.instructions+=3;NFSU2_TR(0x4c031d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0320:{NFSU2_TR(0x4c0320);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c0324:{NFSU2_TR(0x4c0324);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c036f;}}
}
B4c0326:L4c0326:{c.instructions+=3;NFSU2_TR(0x4c0326);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c032c:{NFSU2_TR(0x4c032c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c032e:{NFSU2_TR(0x4c032e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c036f;}}
}
B4c0330:L4c0330:{c.instructions+=2;NFSU2_TR(0x4c0330);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c0337:{NFSU2_TR(0x4c0337);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c0342;}}
}
B4c0339:L4c0339:{c.instructions+=2;NFSU2_TR(0x4c0339);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c0340:{NFSU2_TR(0x4c0340);
if(r1(R+518)){{goto L4c036f;}}
}
B4c0342:L4c0342:{c.instructions+=5;NFSU2_TR(0x4c0342);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0343:{NFSU2_TR(0x4c0343);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c0346:{NFSU2_TR(0x4c0346);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0348:{NFSU2_TR(0x4c0348);
u8 U[4];
w4(U+0,u32(0x7905f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c034d:{NFSU2_TR(0x4c034d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0352ull));
TAIL_STATIC(0x50b990u,50b);
}
B4c0352:L4c0352:{c.instructions+=5;NFSU2_TR(0x4c0352);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c0355:{NFSU2_TR(0x4c0355);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0356:{NFSU2_TR(0x4c0356);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0357:{NFSU2_TR(0x4c0357);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c035c:{NFSU2_TR(0x4c035c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0361ull));
TAIL_STATIC(0x50b990u,50b);
}
B4c0361:L4c0361:{c.instructions+=4;NFSU2_TR(0x4c0361);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c0364:{NFSU2_TR(0x4c0364);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0365:{NFSU2_TR(0x4c0365);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0366:{NFSU2_TR(0x4c0366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c036bull));
TAIL_STATIC(0x537c60u,537);
}
B4c036b:L4c036b:{c.instructions+=2;NFSU2_TR(0x4c036b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c036e:{NFSU2_TR(0x4c036e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c036f:L4c036f:{c.instructions+=7;NFSU2_TR(0x4c036f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4c0372:{NFSU2_TR(0x4c0372);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c0375:{NFSU2_TR(0x4c0375);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0376:{NFSU2_TR(0x4c0376);
u8 U[4];
w4(U+0,u32(0x7909f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c037b:{NFSU2_TR(0x4c037b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c037c:{NFSU2_TR(0x4c037c);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0381:{NFSU2_TR(0x4c0381);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0386ull));
TAIL_STATIC(0x50b990u,50b);
}
B4c0386:L4c0386:{c.instructions+=4;NFSU2_TR(0x4c0386);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c0389:{NFSU2_TR(0x4c0389);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c038a:{NFSU2_TR(0x4c038a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c038b:{NFSU2_TR(0x4c038b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0390ull));
TAIL_STATIC(0x537b80u,537);
}
B4c0390:L4c0390:{c.instructions+=5;NFSU2_TR(0x4c0390);
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
B4c0393:{NFSU2_TR(0x4c0393);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c0394:{NFSU2_TR(0x4c0394);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c0395:{NFSU2_TR(0x4c0395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c0396:{NFSU2_TR(0x4c0396);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c03a0:L4c03a0:{c.instructions+=12;NFSU2_TR(0x4c03a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c03a1:{NFSU2_TR(0x4c03a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c03a2:{NFSU2_TR(0x4c03a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4c03a6:{NFSU2_TR(0x4c03a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c03a7:{NFSU2_TR(0x4c03a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c03a8:{NFSU2_TR(0x4c03a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c03ac:{NFSU2_TR(0x4c03ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c03af:{NFSU2_TR(0x4c03af);
__builtin_memmove((R+12),(R+4),4);
}
B4c03b1:{NFSU2_TR(0x4c03b1);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4c03b7:{NFSU2_TR(0x4c03b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c03b8:{NFSU2_TR(0x4c03b8);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c03b9:{NFSU2_TR(0x4c03b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c03beull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4c03be:L4c03be:{c.instructions+=3;NFSU2_TR(0x4c03be);
w4(R+4,u32(0x89cf48ull));
}
B4c03c3:{NFSU2_TR(0x4c03c3);
__builtin_memmove((R+24),(R+0),4);
}
B4c03c5:{NFSU2_TR(0x4c03c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c03caull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4c03ca:L4c03ca:{c.instructions+=2;NFSU2_TR(0x4c03ca);
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
B4c03cc:{NFSU2_TR(0x4c03cc);
if(r1(R+518)){{goto L4c03e1;}}
}
B4c03ce:L4c03ce:{c.instructions+=4;NFSU2_TR(0x4c03ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c03d1:{NFSU2_TR(0x4c03d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c03d2:{NFSU2_TR(0x4c03d2);
w4(R+4,u32(0x89cf48ull));
}
B4c03d7:{NFSU2_TR(0x4c03d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c03dcull));
TAIL_STATIC(0x5f0220u,5f0);
}
B4c03dc:L4c03dc:{c.instructions+=2;NFSU2_TR(0x4c03dc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
}
B4c03df:{NFSU2_TR(0x4c03df);
{goto L4c0403;}
}
B4c03e1:L4c03e1:{c.instructions+=3;NFSU2_TR(0x4c03e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c03e4:{NFSU2_TR(0x4c03e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c03e8:{NFSU2_TR(0x4c03e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c03fe;}}
}
B4c03ea:L4c03ea:{c.instructions+=3;NFSU2_TR(0x4c03ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c03f0:{NFSU2_TR(0x4c03f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c03f2:{NFSU2_TR(0x4c03f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c03fe;}}
}
B4c03f4:L4c03f4:{c.instructions+=2;NFSU2_TR(0x4c03f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c03f7:{NFSU2_TR(0x4c03f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c03fcull));
TAIL_STATIC(0x5f41b0u,5f4);
}
B4c03fc:L4c03fc:{c.instructions+=1;NFSU2_TR(0x4c03fc);
{goto L4c0403;}
}
B4c03fe:L4c03fe:{c.instructions+=1;NFSU2_TR(0x4c03fe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90cull))));
}
B4c0403:L4c0403:{c.instructions+=6;NFSU2_TR(0x4c0403);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c0406:{NFSU2_TR(0x4c0406);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0407:{NFSU2_TR(0x4c0407);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c040c:{NFSU2_TR(0x4c040c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c040d:{NFSU2_TR(0x4c040d);
u8 U[4];
w4(U+0,u32(0x79050cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0412:{NFSU2_TR(0x4c0412);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0417ull));
TAIL_STATIC(0x50b990u,50b);
}
B4c0417:L4c0417:{c.instructions+=4;NFSU2_TR(0x4c0417);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c041a:{NFSU2_TR(0x4c041a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c041b:{NFSU2_TR(0x4c041b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c041c:{NFSU2_TR(0x4c041c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0421ull));
TAIL_STATIC(0x537b80u,537);
}
B4c0421:L4c0421:{c.instructions+=6;NFSU2_TR(0x4c0421);
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
B4c0424:{NFSU2_TR(0x4c0424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c0425:{NFSU2_TR(0x4c0425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c0426:{NFSU2_TR(0x4c0426);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c0427:{NFSU2_TR(0x4c0427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c0428:{NFSU2_TR(0x4c0428);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c0430:L4c0430:{c.instructions+=10;NFSU2_TR(0x4c0430);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B4c0433:{NFSU2_TR(0x4c0433);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0434:{NFSU2_TR(0x4c0434);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c0438:{NFSU2_TR(0x4c0438);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+4),(U+0),1);
}
B4c043a:{NFSU2_TR(0x4c043a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c043b:{NFSU2_TR(0x4c043b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c043c:{NFSU2_TR(0x4c043c);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4c043e:{NFSU2_TR(0x4c043e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c0440:{NFSU2_TR(0x4c0440);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0441:{NFSU2_TR(0x4c0441);
if(r1(R+518)){{goto L4c0445;}}
}
B4c0443:L4c0443:{c.instructions+=1;NFSU2_TR(0x4c0443);
w1(R+0,u8(0x1ull));
}
B4c0445:L4c0445:{c.instructions+=3;NFSU2_TR(0x4c0445);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c0448:{NFSU2_TR(0x4c0448);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c044a:{NFSU2_TR(0x4c044a);
if(r1(R+518)){{goto L4c044e;}}
}
B4c044c:L4c044c:{c.instructions+=1;NFSU2_TR(0x4c044c);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B4c044e:L4c044e:{c.instructions+=3;NFSU2_TR(0x4c044e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c0451:{NFSU2_TR(0x4c0451);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c0453:{NFSU2_TR(0x4c0453);
if(r1(R+518)){{goto L4c0457;}}
}
B4c0455:L4c0455:{c.instructions+=1;NFSU2_TR(0x4c0455);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B4c0457:L4c0457:{c.instructions+=3;NFSU2_TR(0x4c0457);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c045a:{NFSU2_TR(0x4c045a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c045c:{NFSU2_TR(0x4c045c);
if(r1(R+518)){{goto L4c0460;}}
}
B4c045e:L4c045e:{c.instructions+=1;NFSU2_TR(0x4c045e);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B4c0460:L4c0460:{c.instructions+=3;NFSU2_TR(0x4c0460);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c0463:{NFSU2_TR(0x4c0463);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c0465:{NFSU2_TR(0x4c0465);
if(r1(R+518)){{goto L4c0469;}}
}
B4c0467:L4c0467:{c.instructions+=1;NFSU2_TR(0x4c0467);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B4c0469:L4c0469:{c.instructions+=3;NFSU2_TR(0x4c0469);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c046c:{NFSU2_TR(0x4c046c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c046e:{NFSU2_TR(0x4c046e);
if(r1(R+518)){{goto L4c0472;}}
}
B4c0470:L4c0470:{c.instructions+=1;NFSU2_TR(0x4c0470);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B4c0472:L4c0472:{c.instructions+=6;NFSU2_TR(0x4c0472);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c0476:{NFSU2_TR(0x4c0476);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B4c0479:{NFSU2_TR(0x4c0479);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c047a:{NFSU2_TR(0x4c047a);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c047c:{NFSU2_TR(0x4c047c);
__builtin_memmove((R+4),(R+24),4);
}
B4c047e:{NFSU2_TR(0x4c047e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0483ull));
TAIL_STATIC(0x4a4770u,4a4);
}
B4c0483:L4c0483:{c.instructions+=4;NFSU2_TR(0x4c0483);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c0485:{NFSU2_TR(0x4c0485);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c048a:{NFSU2_TR(0x4c048a);
w4(R+4,u32(0x7ull));
}
B4c048f:{NFSU2_TR(0x4c048f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4c0493:L4c0493:{c.instructions+=1;NFSU2_TR(0x4c0493);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4c0495;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c0493u);}goto L4c0493;}
}
B4c0495:L4c0495:{c.instructions+=5;NFSU2_TR(0x4c0495);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4c0497:{NFSU2_TR(0x4c0497);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4c0498:{NFSU2_TR(0x4c0498);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c049e:{NFSU2_TR(0x4c049e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c04a0:{NFSU2_TR(0x4c04a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c061e;}}
}
B4c04a6:L4c04a6:{c.instructions+=5;NFSU2_TR(0x4c04a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c04ac:{NFSU2_TR(0x4c04ac);
w4(R+28,u32(0x1ull));
}
B4c04b1:{NFSU2_TR(0x4c04b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c04b5:{NFSU2_TR(0x4c04b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c04b9:{NFSU2_TR(0x4c04b9);
__builtin_memmove((R+16),(R+16),4);
}
B4c04c0:L4c04c0:{c.instructions+=3;NFSU2_TR(0x4c04c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c04c4:{NFSU2_TR(0x4c04c4);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4c04c7:{NFSU2_TR(0x4c04c7);
if(r1(R+518)){{goto L4c05f3;}}
}
B4c04cd:L4c04cd:{c.instructions+=3;NFSU2_TR(0x4c04cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c04d0:{NFSU2_TR(0x4c04d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c04d2:{NFSU2_TR(0x4c04d2);
if(r1(R+518)){{goto L4c04db;}}
}
B4c04d4:L4c04d4:{c.instructions+=2;NFSU2_TR(0x4c04d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c04d9:{NFSU2_TR(0x4c04d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c0519;}}
}
B4c04db:L4c04db:{c.instructions+=4;NFSU2_TR(0x4c04db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c04e1:{NFSU2_TR(0x4c04e1);
{u32 ea_=u32(r4(R+12)+u32(196u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c04e7:{NFSU2_TR(0x4c04e7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4c04e9:{NFSU2_TR(0x4c04e9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4c04f1;}}
}
B4c04eb:L4c04eb:{c.instructions+=1;NFSU2_TR(0x4c04eb);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4c04f1:L4c04f1:{c.instructions+=7;NFSU2_TR(0x4c04f1);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c04f7:{NFSU2_TR(0x4c04f7);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c04fd:{NFSU2_TR(0x4c04fd);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c0503:{NFSU2_TR(0x4c0503);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4c0505:{NFSU2_TR(0x4c0505);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c050b:{NFSU2_TR(0x4c050b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4c0511:{NFSU2_TR(0x4c0511);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0516ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4c0516:L4c0516:{c.instructions+=1;NFSU2_TR(0x4c0516);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0519:L4c0519:{c.instructions+=6;NFSU2_TR(0x4c0519);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c051a:{NFSU2_TR(0x4c051a);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c051f:{NFSU2_TR(0x4c051f);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c0523:{NFSU2_TR(0x4c0523);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0525:{NFSU2_TR(0x4c0525);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0526:{NFSU2_TR(0x4c0526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c052bull));
TAIL_STATIC(0x50c960u,50c);
}
B4c052b:L4c052b:{c.instructions+=6;NFSU2_TR(0x4c052b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c052e:{NFSU2_TR(0x4c052e);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0533:{NFSU2_TR(0x4c0533);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4c0537:{NFSU2_TR(0x4c0537);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0538:{NFSU2_TR(0x4c0538);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0539:{NFSU2_TR(0x4c0539);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c053eull));
TAIL_STATIC(0x542600u,542);
}
B4c053e:L4c053e:{c.instructions+=8;NFSU2_TR(0x4c053e);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c0542:{NFSU2_TR(0x4c0542);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4c0545:{NFSU2_TR(0x4c0545);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4c0548:{NFSU2_TR(0x4c0548);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0549:{NFSU2_TR(0x4c0549);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c054e:{NFSU2_TR(0x4c054e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c054f:{NFSU2_TR(0x4c054f);
u8 U[4];
w4(U+0,u32(0x79050cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0554:{NFSU2_TR(0x4c0554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0559ull));
TAIL_STATIC(0x50b990u,50b);
}
B4c0559:L4c0559:{c.instructions+=4;NFSU2_TR(0x4c0559);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c055c:{NFSU2_TR(0x4c055c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c055d:{NFSU2_TR(0x4c055d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c055e:{NFSU2_TR(0x4c055e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0563ull));
TAIL_STATIC(0x537b80u,537);
}
B4c0563:L4c0563:{c.instructions+=7;NFSU2_TR(0x4c0563);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c0566:{NFSU2_TR(0x4c0566);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0567:{NFSU2_TR(0x4c0567);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c056a:{NFSU2_TR(0x4c056a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c056b:{NFSU2_TR(0x4c056b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c056c:{NFSU2_TR(0x4c056c);
__builtin_memmove((R+4),(R+24),4);
}
B4c056e:{NFSU2_TR(0x4c056e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0573ull));
TAIL_STATIC(0x4a4930u,4a4);
}
B4c0573:L4c0573:{c.instructions+=5;NFSU2_TR(0x4c0573);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0577:{NFSU2_TR(0x4c0577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c0579:{NFSU2_TR(0x4c0579);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4c057b:{NFSU2_TR(0x4c057b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c057e:{NFSU2_TR(0x4c057e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c0587;}}
}
B4c0580:L4c0580:{c.instructions+=2;NFSU2_TR(0x4c0580);
w4(R+20,u32(0x490a722dull));
}
B4c0585:{NFSU2_TR(0x4c0585);
{goto L4c059c;}
}
B4c0587:L4c0587:{c.instructions+=2;NFSU2_TR(0x4c0587);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c0589:{NFSU2_TR(0x4c0589);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c0592;}}
}
B4c058b:L4c058b:{c.instructions+=2;NFSU2_TR(0x4c058b);
w4(R+20,u32(0xc147e3acull));
}
B4c0590:{NFSU2_TR(0x4c0590);
{goto L4c059c;}
}
B4c0592:L4c0592:{c.instructions+=2;NFSU2_TR(0x4c0592);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c0595:{NFSU2_TR(0x4c0595);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c059c;}}
}
B4c0597:L4c0597:{c.instructions+=1;NFSU2_TR(0x4c0597);
w4(R+20,u32(0x71d5e280ull));
}
B4c059c:L4c059c:{c.instructions+=6;NFSU2_TR(0x4c059c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c059d:{NFSU2_TR(0x4c059d);
u8 U[4];
w4(U+0,u32(0x7904ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c05a2:{NFSU2_TR(0x4c05a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c05a6:{NFSU2_TR(0x4c05a6);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c05a8:{NFSU2_TR(0x4c05a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c05a9:{NFSU2_TR(0x4c05a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c05aeull));
TAIL_STATIC(0x50c960u,50c);
}
B4c05ae:L4c05ae:{c.instructions+=4;NFSU2_TR(0x4c05ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c05b1:{NFSU2_TR(0x4c05b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c05b2:{NFSU2_TR(0x4c05b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c05b6:{NFSU2_TR(0x4c05b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c05bbull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c05bb:L4c05bb:{c.instructions+=6;NFSU2_TR(0x4c05bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c05bf:{NFSU2_TR(0x4c05bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c05c0:{NFSU2_TR(0x4c05c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4c05c4:{NFSU2_TR(0x4c05c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c05c5:{NFSU2_TR(0x4c05c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c05c6:{NFSU2_TR(0x4c05c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c05cbull));
TAIL_STATIC(0x542600u,542);
}
B4c05cb:L4c05cb:{c.instructions+=6;NFSU2_TR(0x4c05cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c05cc:{NFSU2_TR(0x4c05cc);
u8 U[4];
w4(U+0,u32(0x790544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c05d1:{NFSU2_TR(0x4c05d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4c05d5:{NFSU2_TR(0x4c05d5);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c05d7:{NFSU2_TR(0x4c05d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c05d8:{NFSU2_TR(0x4c05d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c05ddull));
TAIL_STATIC(0x50c960u,50c);
}
B4c05dd:L4c05dd:{c.instructions+=6;NFSU2_TR(0x4c05dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c05e0:{NFSU2_TR(0x4c05e0);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c05e5:{NFSU2_TR(0x4c05e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4c05e9:{NFSU2_TR(0x4c05e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c05ea:{NFSU2_TR(0x4c05ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c05eb:{NFSU2_TR(0x4c05eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c05f0ull));
TAIL_STATIC(0x542600u,542);
}
B4c05f0:L4c05f0:{c.instructions+=1;NFSU2_TR(0x4c05f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B4c05f3:L4c05f3:{c.instructions+=10;NFSU2_TR(0x4c05f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4c05f7:{NFSU2_TR(0x4c05f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c05fb:{NFSU2_TR(0x4c05fb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B4c05fe:{NFSU2_TR(0x4c05fe);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B4c0601:{NFSU2_TR(0x4c0601);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4c0602:{NFSU2_TR(0x4c0602);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0606:{NFSU2_TR(0x4c0606);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c0609:{NFSU2_TR(0x4c0609);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c060c:{NFSU2_TR(0x4c060c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0610:{NFSU2_TR(0x4c0610);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c04c0u);}goto L4c04c0;}}
}
B4c0616:L4c0616:{c.instructions+=6;NFSU2_TR(0x4c0616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c0617:{NFSU2_TR(0x4c0617);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c0618:{NFSU2_TR(0x4c0618);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c0619:{NFSU2_TR(0x4c0619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c061a:{NFSU2_TR(0x4c061a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c061d:{NFSU2_TR(0x4c061d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c061e:L4c061e:{c.instructions+=7;NFSU2_TR(0x4c061e);
w4(R+0,u32(0xfefefefeull));
}
B4c0623:{NFSU2_TR(0x4c0623);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0627:{NFSU2_TR(0x4c0627);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4c062c:{NFSU2_TR(0x4c062c);
w1(R+4,u8(0x1ull));
}
B4c062e:{NFSU2_TR(0x4c062e);
w4(R+8,u32(0x1ull));
}
B4c0633:{NFSU2_TR(0x4c0633);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c063b:{NFSU2_TR(0x4c063b);
{goto L4c0640;}
}
B4c0640:L4c0640:{c.instructions+=2;NFSU2_TR(0x4c0640);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4c0642:{NFSU2_TR(0x4c0642);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c0648:L4c0648:{c.instructions+=2;NFSU2_TR(0x4c0648);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4c064a:{NFSU2_TR(0x4c064a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c0655;}}
}
B4c064c:L4c064c:{c.instructions+=3;NFSU2_TR(0x4c064c);
w4(R+20,u32(s32(s8(r1(R+4)))));
}
B4c064f:{NFSU2_TR(0x4c064f);
u8 U[13];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4c0653:{NFSU2_TR(0x4c0653);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B4c0655:L4c0655:{c.instructions+=4;NFSU2_TR(0x4c0655);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B4c0657:{NFSU2_TR(0x4c0657);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4c065a:{NFSU2_TR(0x4c065a);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x6ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x6ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B4c065c:{NFSU2_TR(0x4c065c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c0648u);}goto L4c0648;}}
}
B4c065e:L4c065e:{c.instructions+=5;NFSU2_TR(0x4c065e);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0662:{NFSU2_TR(0x4c0662);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4c0663:{NFSU2_TR(0x4c0663);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4c0664:{NFSU2_TR(0x4c0664);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0668:{NFSU2_TR(0x4c0668);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c0640u);}goto L4c0640;}}
}
B4c066a:L4c066a:{c.instructions+=2;NFSU2_TR(0x4c066a);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4c066c:{NFSU2_TR(0x4c066c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c0672:L4c0672:{c.instructions+=2;NFSU2_TR(0x4c0672);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x0ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B4c0675:{NFSU2_TR(0x4c0675);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4c0680;}}
}
B4c0677:L4c0677:{c.instructions+=3;NFSU2_TR(0x4c0677);
w4(R+8,u32(s32(s8(r1(R+4)))));
}
B4c067a:{NFSU2_TR(0x4c067a);
u8 U[13];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4c067e:{NFSU2_TR(0x4c067e);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B4c0680:L4c0680:{c.instructions+=4;NFSU2_TR(0x4c0680);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B4c0682:{NFSU2_TR(0x4c0682);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4c0685:{NFSU2_TR(0x4c0685);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x6ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x6ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B4c0687:{NFSU2_TR(0x4c0687);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c0672u);}goto L4c0672;}}
}
B4c0689:L4c0689:{c.instructions+=3;NFSU2_TR(0x4c0689);
w1(R+4,u8(0x1ull));
}
B4c068b:{NFSU2_TR(0x4c068b);
u8 U[5];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c068f:{NFSU2_TR(0x4c068f);
}
B4c0690:L4c0690:{c.instructions+=4;NFSU2_TR(0x4c0690);
w4(R+20,u32(s32(s8(r1(R+4)))));
}
B4c0693:{NFSU2_TR(0x4c0693);
u8 U[13];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B4c0697:{NFSU2_TR(0x4c0697);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0xffull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B4c0699:{NFSU2_TR(0x4c0699);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4c06a6;}}
}
B4c069b:L4c069b:{c.instructions+=3;NFSU2_TR(0x4c069b);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B4c069d:{NFSU2_TR(0x4c069d);
u8 U[5];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c06a1:{NFSU2_TR(0x4c06a1);
{goto L4c0789;}
}
B4c06a6:L4c06a6:{c.instructions+=10;NFSU2_TR(0x4c06a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c06a7:{NFSU2_TR(0x4c06a7);
w4(R+28,u32(s32(s8(r1(R+0)))));
}
B4c06aa:{NFSU2_TR(0x4c06aa);
u8 U[4];
w4(U+0,u32(0x794d68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c06af:{NFSU2_TR(0x4c06af);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c06b3:{NFSU2_TR(0x4c06b3);
u8 U[16];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4c06ba:{NFSU2_TR(0x4c06ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c06be:{NFSU2_TR(0x4c06be);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c06c0:{NFSU2_TR(0x4c06c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c06c1:{NFSU2_TR(0x4c06c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c06c5:{NFSU2_TR(0x4c06c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c06caull));
TAIL_STATIC(0x50c960u,50c);
}
B4c06ca:L4c06ca:{c.instructions+=4;NFSU2_TR(0x4c06ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c06ce:{NFSU2_TR(0x4c06ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c06d1:{NFSU2_TR(0x4c06d1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c06d3:{NFSU2_TR(0x4c06d3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c06ee;}}
}
B4c06d5:L4c06d5:{c.instructions+=7;NFSU2_TR(0x4c06d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c06d6:{NFSU2_TR(0x4c06d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c06d9:{NFSU2_TR(0x4c06d9);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c06de:{NFSU2_TR(0x4c06de);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4c06e2:{NFSU2_TR(0x4c06e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c06e3:{NFSU2_TR(0x4c06e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c06e4:{NFSU2_TR(0x4c06e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c06e9ull));
TAIL_STATIC(0x542600u,542);
}
B4c06e9:L4c06e9:{c.instructions+=2;NFSU2_TR(0x4c06e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c06ec:{NFSU2_TR(0x4c06ec);
{goto L4c0704;}
}
B4c06ee:L4c06ee:{c.instructions+=6;NFSU2_TR(0x4c06ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c06f1:{NFSU2_TR(0x4c06f1);
u8 U[4];
w4(U+0,u32(0x7909a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c06f6:{NFSU2_TR(0x4c06f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c06fa:{NFSU2_TR(0x4c06fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c06fb:{NFSU2_TR(0x4c06fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c06fc:{NFSU2_TR(0x4c06fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0701ull));
TAIL_STATIC(0x542600u,542);
}
B4c0701:L4c0701:{c.instructions+=1;NFSU2_TR(0x4c0701);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c0704:L4c0704:{c.instructions+=9;NFSU2_TR(0x4c0704);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0707:{NFSU2_TR(0x4c0707);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4c070a:{NFSU2_TR(0x4c070a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4c070d:{NFSU2_TR(0x4c070d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c070e:{NFSU2_TR(0x4c070e);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0713:{NFSU2_TR(0x4c0713);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0714:{NFSU2_TR(0x4c0714);
u8 U[4];
w4(U+0,u32(0x79050cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0719:{NFSU2_TR(0x4c0719);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c071d:{NFSU2_TR(0x4c071d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0722ull));
TAIL_STATIC(0x50b990u,50b);
}
B4c0722:L4c0722:{c.instructions+=5;NFSU2_TR(0x4c0722);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c0725:{NFSU2_TR(0x4c0725);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0726:{NFSU2_TR(0x4c0726);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c072a:{NFSU2_TR(0x4c072a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c072b:{NFSU2_TR(0x4c072b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0730ull));
TAIL_STATIC(0x537b80u,537);
}
B4c0730:L4c0730:{c.instructions+=6;NFSU2_TR(0x4c0730);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c0733:{NFSU2_TR(0x4c0733);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0734:{NFSU2_TR(0x4c0734);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0735:{NFSU2_TR(0x4c0735);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0736:{NFSU2_TR(0x4c0736);
__builtin_memmove((R+4),(R+24),4);
}
B4c0738:{NFSU2_TR(0x4c0738);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c073dull));
TAIL_STATIC(0x4a4930u,4a4);
}
B4c073d:L4c073d:{c.instructions+=7;NFSU2_TR(0x4c073d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c0741:{NFSU2_TR(0x4c0741);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0742:{NFSU2_TR(0x4c0742);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0743:{NFSU2_TR(0x4c0743);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0744:{NFSU2_TR(0x4c0744);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0745:{NFSU2_TR(0x4c0745);
__builtin_memmove((R+4),(R+24),4);
}
B4c0747:{NFSU2_TR(0x4c0747);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c074cull));
TAIL_STATIC(0x4a49c0u,4a4);
}
B4c074c:L4c074c:{c.instructions+=8;NFSU2_TR(0x4c074c);
u8 U[13];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B4c0754:{NFSU2_TR(0x4c0754);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c0757:{NFSU2_TR(0x4c0757);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0758:{NFSU2_TR(0x4c0758);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c075d:{NFSU2_TR(0x4c075d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c075e:{NFSU2_TR(0x4c075e);
u8 U[4];
w4(U+0,u32(0x790544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0763:{NFSU2_TR(0x4c0763);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0767:{NFSU2_TR(0x4c0767);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c076cull));
TAIL_STATIC(0x50b990u,50b);
}
B4c076c:L4c076c:{c.instructions+=5;NFSU2_TR(0x4c076c);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c0770:{NFSU2_TR(0x4c0770);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c0773:{NFSU2_TR(0x4c0773);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0774:{NFSU2_TR(0x4c0774);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0775:{NFSU2_TR(0x4c0775);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c077aull));
TAIL_STATIC(0x537b80u,537);
}
B4c077a:L4c077a:{c.instructions+=5;NFSU2_TR(0x4c077a);
u8 U[5];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c077e:{NFSU2_TR(0x4c077e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c0781:{NFSU2_TR(0x4c0781);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B4c0783:{NFSU2_TR(0x4c0783);
u8 U[5];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c0787:{NFSU2_TR(0x4c0787);
__builtin_memmove((R+4),(R+0),1);
}
B4c0789:L4c0789:{c.instructions+=2;NFSU2_TR(0x4c0789);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x6ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x6ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4c078c:{NFSU2_TR(0x4c078c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c0690u);}goto L4c0690;}}
}
B4c0792:L4c0792:{c.instructions+=6;NFSU2_TR(0x4c0792);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c0793:{NFSU2_TR(0x4c0793);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c0794:{NFSU2_TR(0x4c0794);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c0795:{NFSU2_TR(0x4c0795);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c0796:{NFSU2_TR(0x4c0796);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c0799:{NFSU2_TR(0x4c0799);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c07a0:L4c07a0:{c.instructions+=8;NFSU2_TR(0x4c07a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4c07a3:{NFSU2_TR(0x4c07a3);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4c07a8:{NFSU2_TR(0x4c07a8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c07ab:{NFSU2_TR(0x4c07ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c07ac:{NFSU2_TR(0x4c07ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c07ad:{NFSU2_TR(0x4c07ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c07ae:{NFSU2_TR(0x4c07ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c07b2:{NFSU2_TR(0x4c07b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c083e;}}
}
B4c07b8:L4c07b8:{c.instructions+=2;NFSU2_TR(0x4c07b8);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c07bf:{NFSU2_TR(0x4c07bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c0953;}}
}
B4c07c5:L4c07c5:{c.instructions+=5;NFSU2_TR(0x4c07c5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4c07c7:{NFSU2_TR(0x4c07c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c07cd:{NFSU2_TR(0x4c07cd);
w4(R+24,u32(0x85036cull));
}
B4c07d2:{NFSU2_TR(0x4c07d2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c07da:{NFSU2_TR(0x4c07da);
__builtin_memmove((R+12),(R+12),4);
}
B4c07e0:L4c07e0:{c.instructions+=2;NFSU2_TR(0x4c07e0);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c07e2:{NFSU2_TR(0x4c07e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c07e7ull));
TAIL_STATIC(0x575620u,575);
}
B4c07e7:L4c07e7:{c.instructions+=3;NFSU2_TR(0x4c07e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c07ea:{NFSU2_TR(0x4c07ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c07ec:{NFSU2_TR(0x4c07ec);
if(r1(R+518)){{goto L4c080a;}}
}
B4c07ee:L4c07ee:{c.instructions+=7;NFSU2_TR(0x4c07ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c07f1:{NFSU2_TR(0x4c07f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x83abc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4c07f8:{NFSU2_TR(0x4c07f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c07fb:{NFSU2_TR(0x4c07fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c07fe:{NFSU2_TR(0x4c07fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c0805:{NFSU2_TR(0x4c0805);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0808:{NFSU2_TR(0x4c0808);
{goto L4c080c;}
}
B4c080a:L4c080a:{c.instructions+=1;NFSU2_TR(0x4c080a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c080c:L4c080c:{c.instructions+=11;NFSU2_TR(0x4c080c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c080f:{NFSU2_TR(0x4c080f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4c0811:{NFSU2_TR(0x4c0811);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0814:{NFSU2_TR(0x4c0814);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0817:{NFSU2_TR(0x4c0817);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4c0819:{NFSU2_TR(0x4c0819);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c081d:{NFSU2_TR(0x4c081d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4c081e:{NFSU2_TR(0x4c081e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x224ull))));
}
B4c0824:{NFSU2_TR(0x4c0824);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4c0825:{NFSU2_TR(0x4c0825);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0829:{NFSU2_TR(0x4c0829);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c07e0u);}goto L4c07e0;}}
}
B4c082b:L4c082b:{c.instructions+=3;NFSU2_TR(0x4c082b);
u8 U[4];
w4(U+0,u32(0x4a4730ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0830:{NFSU2_TR(0x4c0830);
__builtin_memmove((R+4),(R+28),4);
}
B4c0832:{NFSU2_TR(0x4c0832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0837ull));
TAIL_STATIC(0x43e650u,43e);
}
B4c0837:L4c0837:{c.instructions+=5;NFSU2_TR(0x4c0837);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c0838:{NFSU2_TR(0x4c0838);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c0839:{NFSU2_TR(0x4c0839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c083a:{NFSU2_TR(0x4c083a);
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
B4c083d:{NFSU2_TR(0x4c083d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c083e:L4c083e:{c.instructions+=2;NFSU2_TR(0x4c083e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c0843:{NFSU2_TR(0x4c0843);
if(r1(R+518)){{goto L4c084e;}}
}
B4c0845:L4c0845:{c.instructions+=2;NFSU2_TR(0x4c0845);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c0848:{NFSU2_TR(0x4c0848);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c0953;}}
}
B4c084e:L4c084e:{c.instructions+=2;NFSU2_TR(0x4c084e);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c0855:{NFSU2_TR(0x4c0855);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c0953;}}
}
B4c085b:L4c085b:{c.instructions+=3;NFSU2_TR(0x4c085b);
w4(R+4,u32(0x89cf48ull));
}
B4c0860:{NFSU2_TR(0x4c0860);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c0868:{NFSU2_TR(0x4c0868);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c086dull));
TAIL_STATIC(0x5f01e0u,5f0);
}
B4c086d:L4c086d:{c.instructions+=2;NFSU2_TR(0x4c086d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c086f:{NFSU2_TR(0x4c086f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c08da;}}
}
B4c0871:L4c0871:{c.instructions+=3;NFSU2_TR(0x4c0871);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c0875:{NFSU2_TR(0x4c0875);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8cull))));
}
B4c087b:{NFSU2_TR(0x4c087b);
w4(R+24,u32(0x850370ull));
}
B4c0880:L4c0880:{c.instructions+=4;NFSU2_TR(0x4c0880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c0882:{NFSU2_TR(0x4c0882);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x83abc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B4c0889:{NFSU2_TR(0x4c0889);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c088b:{NFSU2_TR(0x4c088b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0890ull));
TAIL_STATIC(0x575620u,575);
}
B4c0890:L4c0890:{c.instructions+=3;NFSU2_TR(0x4c0890);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c0893:{NFSU2_TR(0x4c0893);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c0895:{NFSU2_TR(0x4c0895);
if(r1(R+518)){{goto L4c08ae;}}
}
B4c0897:L4c0897:{c.instructions+=7;NFSU2_TR(0x4c0897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4c0899:{NFSU2_TR(0x4c0899);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c089c:{NFSU2_TR(0x4c089c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c089f:{NFSU2_TR(0x4c089f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c08a2:{NFSU2_TR(0x4c08a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c08a9:{NFSU2_TR(0x4c08a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c08ac:{NFSU2_TR(0x4c08ac);
{goto L4c08b0;}
}
B4c08ae:L4c08ae:{c.instructions+=1;NFSU2_TR(0x4c08ae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c08b0:L4c08b0:{c.instructions+=11;NFSU2_TR(0x4c08b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c08b3:{NFSU2_TR(0x4c08b3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c08b7:{NFSU2_TR(0x4c08b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4c08b9:{NFSU2_TR(0x4c08b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c08bc:{NFSU2_TR(0x4c08bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c08bf:{NFSU2_TR(0x4c08bf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4c08c0:{NFSU2_TR(0x4c08c0);
w4(R+4,u32(0x89cf48ull));
}
B4c08c5:{NFSU2_TR(0x4c08c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4c08c7:{NFSU2_TR(0x4c08c7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c08cb:{NFSU2_TR(0x4c08cb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x224ull))));
}
B4c08d1:{NFSU2_TR(0x4c08d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c08d6ull));
TAIL_STATIC(0x5f01e0u,5f0);
}
B4c08d6:L4c08d6:{c.instructions+=2;NFSU2_TR(0x4c08d6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c08d8:{NFSU2_TR(0x4c08d8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c0880u);}goto L4c0880;}}
}
B4c08da:L4c08da:{c.instructions+=5;NFSU2_TR(0x4c08da);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c08de:{NFSU2_TR(0x4c08de);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8cull))));
}
B4c08e4:{NFSU2_TR(0x4c08e4);
u8 U[4];
w4(U+0,u32(0x4a4730ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c08e9:{NFSU2_TR(0x4c08e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c08ed:{NFSU2_TR(0x4c08ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c08f2ull));
TAIL_STATIC(0x43e650u,43e);
}
B4c08f2:L4c08f2:{c.instructions+=5;NFSU2_TR(0x4c08f2);
w4(R+4,u32(0x89cf48ull));
}
B4c08f7:{NFSU2_TR(0x4c08f7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4c08f9:{NFSU2_TR(0x4c08f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c0901:{NFSU2_TR(0x4c0901);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4c0903:{NFSU2_TR(0x4c0903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0908ull));
TAIL_STATIC(0x5f01e0u,5f0);
}
B4c0908:L4c0908:{c.instructions+=2;NFSU2_TR(0x4c0908);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c090a:{NFSU2_TR(0x4c090a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c09f8;}}
}
B4c0910:L4c0910:{c.instructions+=1;NFSU2_TR(0x4c0910);
w4(R+28,u32(0x850370ull));
}
B4c0915:L4c0915:{c.instructions+=3;NFSU2_TR(0x4c0915);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c0919:{NFSU2_TR(0x4c0919);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c091a:{NFSU2_TR(0x4c091a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c091full));
TAIL_STATIC(0x43be60u,43b);
}
B4c091f:L4c091f:{c.instructions+=4;NFSU2_TR(0x4c091f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4c0921:{NFSU2_TR(0x4c0921);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x83abc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4c0928:{NFSU2_TR(0x4c0928);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c092c:{NFSU2_TR(0x4c092c);
if(r1(R+518)){{goto L4c0934;}}
}
B4c092e:L4c092e:{c.instructions+=2;NFSU2_TR(0x4c092e);
__builtin_memmove((R+12),(R+24),4);
}
B4c0930:{NFSU2_TR(0x4c0930);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0934:L4c0934:{c.instructions+=5;NFSU2_TR(0x4c0934);
w4(R+4,u32(0x89cf48ull));
}
B4c0939:{NFSU2_TR(0x4c0939);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c093c:{NFSU2_TR(0x4c093c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4c093d:{NFSU2_TR(0x4c093d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x224ull))));
}
B4c0943:{NFSU2_TR(0x4c0943);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0948ull));
TAIL_STATIC(0x5f01e0u,5f0);
}
B4c0948:L4c0948:{c.instructions+=2;NFSU2_TR(0x4c0948);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c094a:{NFSU2_TR(0x4c094a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c0915u);}goto L4c0915;}}
}
B4c094c:L4c094c:{c.instructions+=5;NFSU2_TR(0x4c094c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c094d:{NFSU2_TR(0x4c094d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c094e:{NFSU2_TR(0x4c094e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c094f:{NFSU2_TR(0x4c094f);
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
B4c0952:{NFSU2_TR(0x4c0952);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c0953:L4c0953:{c.instructions+=4;NFSU2_TR(0x4c0953);
__builtin_memmove((R+0),gp(0x85bab4),4);
}
B4c0958:{NFSU2_TR(0x4c0958);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4c095a:{NFSU2_TR(0x4c095a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c095c:{NFSU2_TR(0x4c095c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c09f8;}}
}
B4c0962:L4c0962:{c.instructions+=3;NFSU2_TR(0x4c0962);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8cull))));
}
B4c0968:{NFSU2_TR(0x4c0968);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c096c:{NFSU2_TR(0x4c096c);
__builtin_memmove((R+16),(R+16),4);
}
B4c0970:L4c0970:{c.instructions+=3;NFSU2_TR(0x4c0970);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0971:{NFSU2_TR(0x4c0971);
w4(R+4,u32(0x85ba64ull));
}
B4c0976:{NFSU2_TR(0x4c0976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c097bull));
TAIL_STATIC(0x500d90u,500);
}
B4c097b:L4c097b:{c.instructions+=4;NFSU2_TR(0x4c097b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c097e:{NFSU2_TR(0x4c097e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c097f:{NFSU2_TR(0x4c097f);
w4(R+4,u32(0x85036cull));
}
B4c0984:{NFSU2_TR(0x4c0984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0989ull));
TAIL_STATIC(0x503320u,503);
}
B4c0989:L4c0989:{c.instructions+=4;NFSU2_TR(0x4c0989);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c098a:{NFSU2_TR(0x4c098a);
w4(R+4,u32(0x85ba64ull));
}
B4c098f:{NFSU2_TR(0x4c098f);
__builtin_memmove((R+12),(R+0),4);
}
B4c0991:{NFSU2_TR(0x4c0991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0996ull));
TAIL_STATIC(0x513e70u,513);
}
B4c0996:L4c0996:{c.instructions+=4;NFSU2_TR(0x4c0996);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0997:{NFSU2_TR(0x4c0997);
w4(R+4,u32(0x85ba64ull));
}
B4c099c:{NFSU2_TR(0x4c099c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c09a0:{NFSU2_TR(0x4c09a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c09a5ull));
TAIL_STATIC(0x513eb0u,513);
}
B4c09a5:L4c09a5:{c.instructions+=3;NFSU2_TR(0x4c09a5);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c09a7:{NFSU2_TR(0x4c09a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c09ab:{NFSU2_TR(0x4c09ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c09b0ull));
TAIL_STATIC(0x575620u,575);
}
B4c09b0:L4c09b0:{c.instructions+=3;NFSU2_TR(0x4c09b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c09b3:{NFSU2_TR(0x4c09b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c09b5:{NFSU2_TR(0x4c09b5);
if(r1(R+518)){{goto L4c09cd;}}
}
B4c09b7:L4c09b7:{c.instructions+=7;NFSU2_TR(0x4c09b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c09bb:{NFSU2_TR(0x4c09bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c09bf:{NFSU2_TR(0x4c09bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c09c2:{NFSU2_TR(0x4c09c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c09c5:{NFSU2_TR(0x4c09c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c09c8:{NFSU2_TR(0x4c09c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c09cb:{NFSU2_TR(0x4c09cb);
{goto L4c09cf;}
}
B4c09cd:L4c09cd:{c.instructions+=1;NFSU2_TR(0x4c09cd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c09cf:L4c09cf:{c.instructions+=8;NFSU2_TR(0x4c09cf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c09d3:{NFSU2_TR(0x4c09d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c09d6:{NFSU2_TR(0x4c09d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4c09d8:{NFSU2_TR(0x4c09d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c09db:{NFSU2_TR(0x4c09db);
u8 U[4];
w4(U+0,u32(0x4a4730ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c09e0:{NFSU2_TR(0x4c09e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c09e3:{NFSU2_TR(0x4c09e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4c09e5:{NFSU2_TR(0x4c09e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c09eaull));
TAIL_STATIC(0x43e650u,43e);
}
B4c09ea:L4c09ea:{c.instructions+=4;NFSU2_TR(0x4c09ea);
__builtin_memmove((R+0),gp(0x85bab4),4);
}
B4c09ef:{NFSU2_TR(0x4c09ef);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4c09f0:{NFSU2_TR(0x4c09f0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c09f2:{NFSU2_TR(0x4c09f2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c0970u);}goto L4c0970;}}
}
B4c09f8:L4c09f8:{c.instructions+=5;NFSU2_TR(0x4c09f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c09f9:{NFSU2_TR(0x4c09f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c09fa:{NFSU2_TR(0x4c09fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c09fb:{NFSU2_TR(0x4c09fb);
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
B4c09fe:{NFSU2_TR(0x4c09fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c0a00:L4c0a00:{c.instructions+=10;NFSU2_TR(0x4c0a00);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0a04:{NFSU2_TR(0x4c0a04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0a05:{NFSU2_TR(0x4c0a05);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c0a09:{NFSU2_TR(0x4c0a09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0a0a:{NFSU2_TR(0x4c0a0a);
__builtin_memmove((R+28),(R+4),4);
}
B4c0a0c:{NFSU2_TR(0x4c0a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c0a0f:{NFSU2_TR(0x4c0a0f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0a10:{NFSU2_TR(0x4c0a10);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4c0a16:{NFSU2_TR(0x4c0a16);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c0a17:{NFSU2_TR(0x4c0a17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0a1cull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4c0a1c:L4c0a1c:{c.instructions+=3;NFSU2_TR(0x4c0a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0a1f:{NFSU2_TR(0x4c0a1f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c0a23:{NFSU2_TR(0x4c0a23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c0a6e;}}
}
B4c0a25:L4c0a25:{c.instructions+=3;NFSU2_TR(0x4c0a25);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c0a2b:{NFSU2_TR(0x4c0a2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c0a2d:{NFSU2_TR(0x4c0a2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c0a6e;}}
}
B4c0a2f:L4c0a2f:{c.instructions+=2;NFSU2_TR(0x4c0a2f);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c0a36:{NFSU2_TR(0x4c0a36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c0a41;}}
}
B4c0a38:L4c0a38:{c.instructions+=2;NFSU2_TR(0x4c0a38);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c0a3f:{NFSU2_TR(0x4c0a3f);
if(r1(R+518)){{goto L4c0a6e;}}
}
B4c0a41:L4c0a41:{c.instructions+=5;NFSU2_TR(0x4c0a41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0a42:{NFSU2_TR(0x4c0a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c0a45:{NFSU2_TR(0x4c0a45);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0a47:{NFSU2_TR(0x4c0a47);
u8 U[4];
w4(U+0,u32(0x7905f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0a4c:{NFSU2_TR(0x4c0a4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0a51ull));
TAIL_STATIC(0x50b990u,50b);
}
B4c0a51:L4c0a51:{c.instructions+=5;NFSU2_TR(0x4c0a51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c0a54:{NFSU2_TR(0x4c0a54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0a55:{NFSU2_TR(0x4c0a55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0a56:{NFSU2_TR(0x4c0a56);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0a5b:{NFSU2_TR(0x4c0a5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0a60ull));
TAIL_STATIC(0x50b990u,50b);
}
B4c0a60:L4c0a60:{c.instructions+=4;NFSU2_TR(0x4c0a60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c0a63:{NFSU2_TR(0x4c0a63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0a64:{NFSU2_TR(0x4c0a64);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0a65:{NFSU2_TR(0x4c0a65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0a6aull));
TAIL_STATIC(0x537c60u,537);
}
B4c0a6a:L4c0a6a:{c.instructions+=2;NFSU2_TR(0x4c0a6a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c0a6d:{NFSU2_TR(0x4c0a6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c0a6e:L4c0a6e:{c.instructions+=4;NFSU2_TR(0x4c0a6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0a72:{NFSU2_TR(0x4c0a72);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4c0a74:{NFSU2_TR(0x4c0a74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c0a77:{NFSU2_TR(0x4c0a77);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4c0a7d;}}
}
B4c0a79:L4c0a79:{c.instructions+=3;NFSU2_TR(0x4c0a79);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4c0a7a:{NFSU2_TR(0x4c0a7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0a7b:{NFSU2_TR(0x4c0a7b);
{goto L4c0a7e;}
}
B4c0a7d:L4c0a7d:{c.instructions+=1;NFSU2_TR(0x4c0a7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0a7e:L4c0a7e:{c.instructions+=4;NFSU2_TR(0x4c0a7e);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0a83:{NFSU2_TR(0x4c0a83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0a84:{NFSU2_TR(0x4c0a84);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0a89:{NFSU2_TR(0x4c0a89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0a8eull));
TAIL_STATIC(0x50b990u,50b);
}
B4c0a8e:L4c0a8e:{c.instructions+=4;NFSU2_TR(0x4c0a8e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c0a91:{NFSU2_TR(0x4c0a91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0a92:{NFSU2_TR(0x4c0a92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0a93:{NFSU2_TR(0x4c0a93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0a98ull));
TAIL_STATIC(0x537b80u,537);
}
B4c0a98:L4c0a98:{c.instructions+=4;NFSU2_TR(0x4c0a98);
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
B4c0a9b:{NFSU2_TR(0x4c0a9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c0a9c:{NFSU2_TR(0x4c0a9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c0a9d:{NFSU2_TR(0x4c0a9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c0aa0:L4c0aa0:{c.instructions+=15;NFSU2_TR(0x4c0aa0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0aa2:{NFSU2_TR(0x4c0aa2);
u8 U[4];
w4(U+0,u32(0x773a38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0aa7:{NFSU2_TR(0x4c0aa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0aad:{NFSU2_TR(0x4c0aad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0aae:{NFSU2_TR(0x4c0aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0ab5:{NFSU2_TR(0x4c0ab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B4c0ab8:{NFSU2_TR(0x4c0ab8);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0abc:{NFSU2_TR(0x4c0abc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0abd:{NFSU2_TR(0x4c0abd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0abe:{NFSU2_TR(0x4c0abe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0abf:{NFSU2_TR(0x4c0abf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0ac0:{NFSU2_TR(0x4c0ac0);
__builtin_memmove((R+24),(R+4),4);
}
B4c0ac2:{NFSU2_TR(0x4c0ac2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0ac3:{NFSU2_TR(0x4c0ac3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0ac7:{NFSU2_TR(0x4c0ac7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0accull));
TAIL_STATIC(0x551de0u,551);
}
B4c0acc:L4c0acc:{c.instructions+=19;NFSU2_TR(0x4c0acc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4c0ace:{NFSU2_TR(0x4c0ace);
u8 U[4];
w4(U+0,u32(0x79055cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c0ad4:{NFSU2_TR(0x4c0ad4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c0ad7:{NFSU2_TR(0x4c0ad7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c0ada:{NFSU2_TR(0x4c0ada);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x75ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c0add:{NFSU2_TR(0x4c0add);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0ae3:{NFSU2_TR(0x4c0ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0ae9:{NFSU2_TR(0x4c0ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0aef:{NFSU2_TR(0x4c0aef);
__builtin_memmove(gp(0x8363ec),(R+24),4);
}
B4c0af5:{NFSU2_TR(0x4c0af5);
w4(R+20,u32(0x1ull));
}
B4c0afa:{NFSU2_TR(0x4c0afa);
__builtin_memmove(gp(0x8363e8),(R+20),4);
}
B4c0b00:{NFSU2_TR(0x4c0b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c0b03:{NFSU2_TR(0x4c0b03);
u8 U[4];
w4(U+0,u32(0x90038d25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0b08:{NFSU2_TR(0x4c0b08);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0b0c:{NFSU2_TR(0x4c0b0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0b12:{NFSU2_TR(0x4c0b12);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c0b18:{NFSU2_TR(0x4c0b18);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd3ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c0b1f:{NFSU2_TR(0x4c0b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0b25:{NFSU2_TR(0x4c0b25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0b2aull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c0b2a:L4c0b2a:{c.instructions+=5;NFSU2_TR(0x4c0b2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0b2b:{NFSU2_TR(0x4c0b2b);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0b30:{NFSU2_TR(0x4c0b30);
u8 U[4];
w4(U+0,u32(0x788c05e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0b35:{NFSU2_TR(0x4c0b35);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0b36:{NFSU2_TR(0x4c0b36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0b3bull));
TAIL_STATIC(0x537b80u,537);
}
B4c0b3b:L4c0b3b:{c.instructions+=3;NFSU2_TR(0x4c0b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c0b3e:{NFSU2_TR(0x4c0b3e);
u8 U[4];
w4(U+0,u32(0x90732102ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0b43:{NFSU2_TR(0x4c0b43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0b48ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c0b48:L4c0b48:{c.instructions+=5;NFSU2_TR(0x4c0b48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0b49:{NFSU2_TR(0x4c0b49);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0b4e:{NFSU2_TR(0x4c0b4e);
u8 U[4];
w4(U+0,u32(0x8a0ab225ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0b53:{NFSU2_TR(0x4c0b53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0b54:{NFSU2_TR(0x4c0b54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0b59ull));
TAIL_STATIC(0x537b80u,537);
}
B4c0b59:L4c0b59:{c.instructions+=4;NFSU2_TR(0x4c0b59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0b5c:{NFSU2_TR(0x4c0b5c);
u8 U[4];
w4(U+0,u32(0x7139516dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0b61:{NFSU2_TR(0x4c0b61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0b62:{NFSU2_TR(0x4c0b62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0b67ull));
TAIL_STATIC(0x5379c0u,537);
}
B4c0b67:L4c0b67:{c.instructions+=2;NFSU2_TR(0x4c0b67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0b68:{NFSU2_TR(0x4c0b68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0b6dull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c0b6d:L4c0b6d:{c.instructions+=4;NFSU2_TR(0x4c0b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0b70:{NFSU2_TR(0x4c0b70);
u8 U[4];
w4(U+0,u32(0x5497b9bfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0b75:{NFSU2_TR(0x4c0b75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0b76:{NFSU2_TR(0x4c0b76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0b7bull));
TAIL_STATIC(0x5379c0u,537);
}
B4c0b7b:L4c0b7b:{c.instructions+=2;NFSU2_TR(0x4c0b7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0b7c:{NFSU2_TR(0x4c0b7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0b81ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c0b81:L4c0b81:{c.instructions+=4;NFSU2_TR(0x4c0b81);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4c0b86:{NFSU2_TR(0x4c0b86);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4c0b89:{NFSU2_TR(0x4c0b89);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c0b8b:{NFSU2_TR(0x4c0b8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c0b95;}}
}
B4c0b8d:L4c0b8d:{c.instructions+=2;NFSU2_TR(0x4c0b8d);
u8 U[8];
__builtin_memmove((U+0),gp(0x890108),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c0b93:{NFSU2_TR(0x4c0b93);
if(r1(R+518)){{goto L4c0bf5;}}
}
B4c0b95:L4c0b95:{c.instructions+=4;NFSU2_TR(0x4c0b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c0b98:{NFSU2_TR(0x4c0b98);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0b99:{NFSU2_TR(0x4c0b99);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0b9e:{NFSU2_TR(0x4c0b9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0ba3ull));
TAIL_STATIC(0x43db50u,43d);
}
B4c0ba3:L4c0ba3:{c.instructions+=5;NFSU2_TR(0x4c0ba3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c0ba6:{NFSU2_TR(0x4c0ba6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0ba7:{NFSU2_TR(0x4c0ba7);
u8 U[4];
w4(U+0,u32(0x788c05e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0bac:{NFSU2_TR(0x4c0bac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0bad:{NFSU2_TR(0x4c0bad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0bb2ull));
TAIL_STATIC(0x537c60u,537);
}
B4c0bb2:L4c0bb2:{c.instructions+=5;NFSU2_TR(0x4c0bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c0bb5:{NFSU2_TR(0x4c0bb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c0bb8:{NFSU2_TR(0x4c0bb8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0bb9:{NFSU2_TR(0x4c0bb9);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0bbe:{NFSU2_TR(0x4c0bbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0bc3ull));
TAIL_STATIC(0x43db50u,43d);
}
B4c0bc3:L4c0bc3:{c.instructions+=5;NFSU2_TR(0x4c0bc3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c0bc6:{NFSU2_TR(0x4c0bc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0bc7:{NFSU2_TR(0x4c0bc7);
u8 U[4];
w4(U+0,u32(0x57f0e3a5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0bcc:{NFSU2_TR(0x4c0bcc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0bcd:{NFSU2_TR(0x4c0bcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0bd2ull));
TAIL_STATIC(0x537c60u,537);
}
B4c0bd2:L4c0bd2:{c.instructions+=5;NFSU2_TR(0x4c0bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c0bd5:{NFSU2_TR(0x4c0bd5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c0bd8:{NFSU2_TR(0x4c0bd8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0bd9:{NFSU2_TR(0x4c0bd9);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0bde:{NFSU2_TR(0x4c0bde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0be3ull));
TAIL_STATIC(0x43db50u,43d);
}
B4c0be3:L4c0be3:{c.instructions+=5;NFSU2_TR(0x4c0be3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c0be6:{NFSU2_TR(0x4c0be6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0be7:{NFSU2_TR(0x4c0be7);
u8 U[4];
w4(U+0,u32(0xf2685238ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0bec:{NFSU2_TR(0x4c0bec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0bed:{NFSU2_TR(0x4c0bed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0bf2ull));
TAIL_STATIC(0x537c60u,537);
}
B4c0bf2:L4c0bf2:{c.instructions+=1;NFSU2_TR(0x4c0bf2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c0bf5:L4c0bf5:{c.instructions+=5;NFSU2_TR(0x4c0bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0bf8:{NFSU2_TR(0x4c0bf8);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B4c0bfe:{NFSU2_TR(0x4c0bfe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0bff:{NFSU2_TR(0x4c0bff);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0c03:{NFSU2_TR(0x4c0c03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0c08ull));
TAIL_STATIC(0x579020u,579);
}
B4c0c08:L4c0c08:{c.instructions+=4;NFSU2_TR(0x4c0c08);
__builtin_memmove((R+28),(R+0),4);
}
B4c0c0a:{NFSU2_TR(0x4c0c0a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c0c0c:{NFSU2_TR(0x4c0c0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0c10:{NFSU2_TR(0x4c0c10);
if(r1(R+518)){{goto L4c0cea;}}
}
B4c0c16:L4c0c16:{c.instructions+=5;NFSU2_TR(0x4c0c16);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c0c19:{NFSU2_TR(0x4c0c19);
u8 U[4];
w4(U+0,u32(0x79545cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0c1e:{NFSU2_TR(0x4c0c1e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0c1f:{NFSU2_TR(0x4c0c1f);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4c0c21:{NFSU2_TR(0x4c0c21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0c26ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4c0c26:L4c0c26:{c.instructions+=3;NFSU2_TR(0x4c0c26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c0c29:{NFSU2_TR(0x4c0c29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c0c2b:{NFSU2_TR(0x4c0c2b);
if(r1(R+518)){{goto L4c0c41;}}
}
B4c0c2d:L4c0c2d:{c.instructions+=3;NFSU2_TR(0x4c0c2d);
u8 U[4];
w4(U+0,u32(0x79544cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0c32:{NFSU2_TR(0x4c0c32);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0c33:{NFSU2_TR(0x4c0c33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0c38ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4c0c38:L4c0c38:{c.instructions+=3;NFSU2_TR(0x4c0c38);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c0c3b:{NFSU2_TR(0x4c0c3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c0c3d:{NFSU2_TR(0x4c0c3d);
if(r1(R+518)){{goto L4c0c41;}}
}
B4c0c3f:L4c0c3f:{c.instructions+=1;NFSU2_TR(0x4c0c3f);
w1(R+12,u8(0x1ull));
}
B4c0c41:L4c0c41:{c.instructions+=8;NFSU2_TR(0x4c0c41);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B4c0c47:{NFSU2_TR(0x4c0c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c0c4d:{NFSU2_TR(0x4c0c4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c0c50:{NFSU2_TR(0x4c0c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0c53:{NFSU2_TR(0x4c0c53);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B4c0c55:{NFSU2_TR(0x4c0c55);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c0c57:{NFSU2_TR(0x4c0c57);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0c5b:{NFSU2_TR(0x4c0c5b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c0c88;}}
}
B4c0c5d:L4c0c5d:{c.instructions+=3;NFSU2_TR(0x4c0c5d);
u8 U[4];
w4(U+0,u32(0x79544cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0c62:{NFSU2_TR(0x4c0c62);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0c63:{NFSU2_TR(0x4c0c63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0c68ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4c0c68:L4c0c68:{c.instructions+=3;NFSU2_TR(0x4c0c68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c0c6b:{NFSU2_TR(0x4c0c6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c0c6d:{NFSU2_TR(0x4c0c6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c0c88;}}
}
B4c0c6f:L4c0c6f:{c.instructions+=6;NFSU2_TR(0x4c0c6f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c0c73:{NFSU2_TR(0x4c0c73);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c0c79:{NFSU2_TR(0x4c0c79);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c0c7f:{NFSU2_TR(0x4c0c7f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c0c81:{NFSU2_TR(0x4c0c81);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c0c84:{NFSU2_TR(0x4c0c84);
if(r1(R+514)){{goto L4c0c88;}}
}
B4c0c86:L4c0c86:{c.instructions+=1;NFSU2_TR(0x4c0c86);
w1(R+12,u8(0x1ull));
}
B4c0c88:L4c0c88:{c.instructions+=3;NFSU2_TR(0x4c0c88);
u8 U[4];
w4(U+0,u32(0x79545cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0c8d:{NFSU2_TR(0x4c0c8d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0c8e:{NFSU2_TR(0x4c0c8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0c93ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4c0c93:L4c0c93:{c.instructions+=3;NFSU2_TR(0x4c0c93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c0c96:{NFSU2_TR(0x4c0c96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c0c98:{NFSU2_TR(0x4c0c98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c0ca8;}}
}
B4c0c9a:L4c0c9a:{c.instructions+=3;NFSU2_TR(0x4c0c9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0c9e:{NFSU2_TR(0x4c0c9e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c0ca0:{NFSU2_TR(0x4c0ca0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c0ca4;}}
}
B4c0ca2:L4c0ca2:{c.instructions+=1;NFSU2_TR(0x4c0ca2);
w1(R+12,u8(0x1ull));
}
B4c0ca4:L4c0ca4:{c.instructions+=1;NFSU2_TR(0x4c0ca4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4c0ca8:L4c0ca8:{c.instructions+=2;NFSU2_TR(0x4c0ca8);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c0caa:{NFSU2_TR(0x4c0caa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c0cc9;}}
}
B4c0cac:L4c0cac:{c.instructions+=7;NFSU2_TR(0x4c0cac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0caf:{NFSU2_TR(0x4c0caf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c0cb2:{NFSU2_TR(0x4c0cb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0cb5:{NFSU2_TR(0x4c0cb5);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c0cb8:{NFSU2_TR(0x4c0cb8);
u8 U[16];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4c0cbf:{NFSU2_TR(0x4c0cbf);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c0cc5:{NFSU2_TR(0x4c0cc5);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c0cc9:L4c0cc9:{c.instructions+=4;NFSU2_TR(0x4c0cc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c0ccd:{NFSU2_TR(0x4c0ccd);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B4c0cd3:{NFSU2_TR(0x4c0cd3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0cd4:{NFSU2_TR(0x4c0cd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0cd9ull));
TAIL_STATIC(0x579020u,579);
}
B4c0cd9:L4c0cd9:{c.instructions+=5;NFSU2_TR(0x4c0cd9);
__builtin_memmove((R+28),(R+0),4);
}
B4c0cdb:{NFSU2_TR(0x4c0cdb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4c0cdc:{NFSU2_TR(0x4c0cdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c0cde:{NFSU2_TR(0x4c0cde);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0ce2:{NFSU2_TR(0x4c0ce2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c0c16u);}goto L4c0c16;}}
}
B4c0ce8:L4c0ce8:{c.instructions+=1;NFSU2_TR(0x4c0ce8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4c0cea:L4c0cea:{c.instructions+=3;NFSU2_TR(0x4c0cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c0ced:{NFSU2_TR(0x4c0ced);
u8 U[4];
w4(U+0,u32(0x795440ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0cf2:{NFSU2_TR(0x4c0cf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0cf7ull));
TAIL_STATIC(0x505450u,505);
}
B4c0cf7:L4c0cf7:{c.instructions+=3;NFSU2_TR(0x4c0cf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0cf8:{NFSU2_TR(0x4c0cf8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0cf9:{NFSU2_TR(0x4c0cf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0cfeull));
TAIL_STATIC(0x537a10u,537);
}
B4c0cfe:L4c0cfe:{c.instructions+=4;NFSU2_TR(0x4c0cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c0d01:{NFSU2_TR(0x4c0d01);
u8 U[4];
w4(U+0,u32(0x795434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0d06:{NFSU2_TR(0x4c0d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0d0c:{NFSU2_TR(0x4c0d0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0d11ull));
TAIL_STATIC(0x505450u,505);
}
B4c0d11:L4c0d11:{c.instructions+=3;NFSU2_TR(0x4c0d11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0d12:{NFSU2_TR(0x4c0d12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0d13:{NFSU2_TR(0x4c0d13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0d18ull));
TAIL_STATIC(0x537a10u,537);
}
B4c0d18:L4c0d18:{c.instructions+=4;NFSU2_TR(0x4c0d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c0d1b:{NFSU2_TR(0x4c0d1b);
u8 U[4];
w4(U+0,u32(0x7909b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0d20:{NFSU2_TR(0x4c0d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0d26:{NFSU2_TR(0x4c0d26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0d2bull));
TAIL_STATIC(0x505450u,505);
}
B4c0d2b:L4c0d2b:{c.instructions+=3;NFSU2_TR(0x4c0d2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0d2c:{NFSU2_TR(0x4c0d2c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0d2d:{NFSU2_TR(0x4c0d2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0d32ull));
TAIL_STATIC(0x537a10u,537);
}
B4c0d32:L4c0d32:{c.instructions+=15;NFSU2_TR(0x4c0d32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0d38:{NFSU2_TR(0x4c0d38);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B4c0d3d:{NFSU2_TR(0x4c0d3d);
{u32 ea_=u32(r4(R+0)+u32(136u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c0d43:{NFSU2_TR(0x4c0d43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c0d46:{NFSU2_TR(0x4c0d46);
u8 U[4];
w4(U+0,u32(0x795420ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0d4b:{NFSU2_TR(0x4c0d4b);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c0d51:{NFSU2_TR(0x4c0d51);
{u32 ea_=u32(r4(R+0)+u32(132u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c0d57:{NFSU2_TR(0x4c0d57);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c0d5d:{NFSU2_TR(0x4c0d5d);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4c0d5f:{NFSU2_TR(0x4c0d5f);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c0d65:{NFSU2_TR(0x4c0d65);
__builtin_memmove((R+8),gp(0x8650b8),4);
}
B4c0d6b:{NFSU2_TR(0x4c0d6b);
{u32 ea_=u32(r4(R+8)+u32(132u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c0d71:{NFSU2_TR(0x4c0d71);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c0d77:{NFSU2_TR(0x4c0d77);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c0d7d:{NFSU2_TR(0x4c0d7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0d82ull));
TAIL_STATIC(0x505450u,505);
}
B4c0d82:L4c0d82:{c.instructions+=3;NFSU2_TR(0x4c0d82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0d83:{NFSU2_TR(0x4c0d83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0d84:{NFSU2_TR(0x4c0d84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0d89ull));
TAIL_STATIC(0x5379c0u,537);
}
B4c0d89:L4c0d89:{c.instructions+=7;NFSU2_TR(0x4c0d89);
__builtin_memmove((R+28),(R+0),4);
}
B4c0d8b:{NFSU2_TR(0x4c0d8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4c0d8f:{NFSU2_TR(0x4c0d8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0d90:{NFSU2_TR(0x4c0d90);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c0d97:{NFSU2_TR(0x4c0d97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0d98:{NFSU2_TR(0x4c0d98);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0d99:{NFSU2_TR(0x4c0d99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0d9eull));
TAIL_STATIC(0x51d730u,51d);
}
B4c0d9e:L4c0d9e:{c.instructions+=17;NFSU2_TR(0x4c0d9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c0da5:{NFSU2_TR(0x4c0da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0dab:{NFSU2_TR(0x4c0dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0dae:{NFSU2_TR(0x4c0dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c0db1:{NFSU2_TR(0x4c0db1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B4c0db4:{NFSU2_TR(0x4c0db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0dba:{NFSU2_TR(0x4c0dba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c0dbd:{NFSU2_TR(0x4c0dbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0dc3:{NFSU2_TR(0x4c0dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0dc6:{NFSU2_TR(0x4c0dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0dcc:{NFSU2_TR(0x4c0dcc);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c0dd2:{NFSU2_TR(0x4c0dd2);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c0dd8:{NFSU2_TR(0x4c0dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c0ddb:{NFSU2_TR(0x4c0ddb);
u8 U[4];
w4(U+0,u32(0x795410ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0de0:{NFSU2_TR(0x4c0de0);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4c0de6:{NFSU2_TR(0x4c0de6);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c0dec:{NFSU2_TR(0x4c0dec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0df1ull));
TAIL_STATIC(0x505450u,505);
}
B4c0df1:L4c0df1:{c.instructions+=4;NFSU2_TR(0x4c0df1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4c0df4:{NFSU2_TR(0x4c0df4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0df5:{NFSU2_TR(0x4c0df5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0df6:{NFSU2_TR(0x4c0df6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0dfbull));
TAIL_STATIC(0x5379c0u,537);
}
B4c0dfb:L4c0dfb:{c.instructions+=3;NFSU2_TR(0x4c0dfb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0dfc:{NFSU2_TR(0x4c0dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0e02:{NFSU2_TR(0x4c0e02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0e07ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c0e07:L4c0e07:{c.instructions+=3;NFSU2_TR(0x4c0e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c0e0a:{NFSU2_TR(0x4c0e0a);
u8 U[4];
w4(U+0,u32(0x795400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0e0f:{NFSU2_TR(0x4c0e0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0e14ull));
TAIL_STATIC(0x505450u,505);
}
B4c0e14:L4c0e14:{c.instructions+=3;NFSU2_TR(0x4c0e14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0e15:{NFSU2_TR(0x4c0e15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0e16:{NFSU2_TR(0x4c0e16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0e1bull));
TAIL_STATIC(0x5379c0u,537);
}
B4c0e1b:L4c0e1b:{c.instructions+=3;NFSU2_TR(0x4c0e1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0e1c:{NFSU2_TR(0x4c0e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0e22:{NFSU2_TR(0x4c0e22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0e27ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c0e27:L4c0e27:{c.instructions+=5;NFSU2_TR(0x4c0e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c0e2a:{NFSU2_TR(0x4c0e2a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4c0e2d:{NFSU2_TR(0x4c0e2d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c0e2f:{NFSU2_TR(0x4c0e2f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c0e31:{NFSU2_TR(0x4c0e31);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c0ee7;}}
}
B4c0e37:L4c0e37:{c.instructions+=2;NFSU2_TR(0x4c0e37);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c0e3d:{NFSU2_TR(0x4c0e3d);
__builtin_memmove((R+4),(R+4),4);
}
B4c0e40:L4c0e40:{c.instructions+=8;NFSU2_TR(0x4c0e40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4c0e42:{NFSU2_TR(0x4c0e42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c0e45:{NFSU2_TR(0x4c0e45);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0e46:{NFSU2_TR(0x4c0e46);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4c0e4a:{NFSU2_TR(0x4c0e4a);
u8 U[4];
w4(U+0,u32(0x7953f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0e4f:{NFSU2_TR(0x4c0e4f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0e50:{NFSU2_TR(0x4c0e50);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0e54:{NFSU2_TR(0x4c0e54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0e59ull));
TAIL_STATIC(0x4400d0u,440);
}
B4c0e59:L4c0e59:{c.instructions+=4;NFSU2_TR(0x4c0e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c0e5c:{NFSU2_TR(0x4c0e5c);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4c0e60:{NFSU2_TR(0x4c0e60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0e61:{NFSU2_TR(0x4c0e61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0e66ull));
TAIL_STATIC(0x505450u,505);
}
B4c0e66:L4c0e66:{c.instructions+=3;NFSU2_TR(0x4c0e66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0e67:{NFSU2_TR(0x4c0e67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0e68:{NFSU2_TR(0x4c0e68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0e6dull));
TAIL_STATIC(0x5379c0u,537);
}
B4c0e6d:L4c0e6d:{c.instructions+=9;NFSU2_TR(0x4c0e6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c0e71:{NFSU2_TR(0x4c0e71);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c0e74:{NFSU2_TR(0x4c0e74);
__builtin_memmove((R+28),(R+0),4);
}
B4c0e76:{NFSU2_TR(0x4c0e76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0e77:{NFSU2_TR(0x4c0e77);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c0e7d:{NFSU2_TR(0x4c0e7d);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4c0e83:{NFSU2_TR(0x4c0e83);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4c0e89:{NFSU2_TR(0x4c0e89);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c0e8d:{NFSU2_TR(0x4c0e8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0e92ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c0e92:L4c0e92:{c.instructions+=6;NFSU2_TR(0x4c0e92);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4c0e96:{NFSU2_TR(0x4c0e96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0e97:{NFSU2_TR(0x4c0e97);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4c0e9b:{NFSU2_TR(0x4c0e9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0e9c:{NFSU2_TR(0x4c0e9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0e9d:{NFSU2_TR(0x4c0e9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0ea2ull));
TAIL_STATIC(0x51d730u,51d);
}
B4c0ea2:L4c0ea2:{c.instructions+=13;NFSU2_TR(0x4c0ea2);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c0ea6:{NFSU2_TR(0x4c0ea6);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c0eac:{NFSU2_TR(0x4c0eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c0eb2:{NFSU2_TR(0x4c0eb2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4c0eb5:{NFSU2_TR(0x4c0eb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0eb6:{NFSU2_TR(0x4c0eb6);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4c0ebc:{NFSU2_TR(0x4c0ebc);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c0ec0:{NFSU2_TR(0x4c0ec0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0ec1:{NFSU2_TR(0x4c0ec1);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c0ec7:{NFSU2_TR(0x4c0ec7);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4c0ec9:{NFSU2_TR(0x4c0ec9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c0ecc:{NFSU2_TR(0x4c0ecc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0ecd:{NFSU2_TR(0x4c0ecd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0ed2ull));
TAIL_STATIC(0x51d380u,51d);
}
B4c0ed2:L4c0ed2:{c.instructions+=6;NFSU2_TR(0x4c0ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c0ed5:{NFSU2_TR(0x4c0ed5);
__builtin_memmove((R+0),(R+20),4);
}
B4c0ed7:{NFSU2_TR(0x4c0ed7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c0eda:{NFSU2_TR(0x4c0eda);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B4c0edd:{NFSU2_TR(0x4c0edd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c0edf:{NFSU2_TR(0x4c0edf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c0e40u);}goto L4c0e40;}}
}
B4c0ee5:L4c0ee5:{c.instructions+=1;NFSU2_TR(0x4c0ee5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4c0ee7:L4c0ee7:{c.instructions+=2;NFSU2_TR(0x4c0ee7);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c0eed:{NFSU2_TR(0x4c0eed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0ef2ull));
TAIL_STATIC(0x430560u,430);
}
B4c0ef2:L4c0ef2:{c.instructions+=2;NFSU2_TR(0x4c0ef2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c0ef4:{NFSU2_TR(0x4c0ef4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c0f03;}}
}
B4c0ef6:L4c0ef6:{c.instructions+=3;NFSU2_TR(0x4c0ef6);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c0efc:{NFSU2_TR(0x4c0efc);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0efe:{NFSU2_TR(0x4c0efe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0f03ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B4c0f03:L4c0f03:{c.instructions+=3;NFSU2_TR(0x4c0f03);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c0f0a:{NFSU2_TR(0x4c0f0a);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c0f10:{NFSU2_TR(0x4c0f10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0f15ull));
TAIL_STATIC(0x430560u,430);
}
B4c0f15:L4c0f15:{c.instructions+=2;NFSU2_TR(0x4c0f15);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c0f17:{NFSU2_TR(0x4c0f17);
if(r1(R+518)){{goto L4c0f20;}}
}
B4c0f19:L4c0f19:{c.instructions+=1;NFSU2_TR(0x4c0f19);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c0f20:L4c0f20:{c.instructions+=5;NFSU2_TR(0x4c0f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c0f23:{NFSU2_TR(0x4c0f23);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c0f2a:{NFSU2_TR(0x4c0f2a);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c0f30:{NFSU2_TR(0x4c0f30);
u8 U[12];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B4c0f34:{NFSU2_TR(0x4c0f34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0f39ull));
TAIL_STATIC(0x430560u,430);
}
B4c0f39:L4c0f39:{c.instructions+=2;NFSU2_TR(0x4c0f39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c0f3b:{NFSU2_TR(0x4c0f3b);
if(r1(R+518)){{goto L4c0f40;}}
}
B4c0f3d:L4c0f3d:{c.instructions+=1;NFSU2_TR(0x4c0f3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c0f40:L4c0f40:{c.instructions+=4;NFSU2_TR(0x4c0f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0f43:{NFSU2_TR(0x4c0f43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0f44:{NFSU2_TR(0x4c0f44);
__builtin_memmove((R+4),(R+24),4);
}
B4c0f46:{NFSU2_TR(0x4c0f46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0f4bull));
TAIL_STATIC(0x4a4bf0u,4a4);
}
B4c0f4b:L4c0f4b:{c.instructions+=4;NFSU2_TR(0x4c0f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0f4e:{NFSU2_TR(0x4c0f4e);
u8 U[4];
w4(U+0,u32(0x8a0f21a1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0f53:{NFSU2_TR(0x4c0f53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0f54:{NFSU2_TR(0x4c0f54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0f59ull));
TAIL_STATIC(0x537a60u,537);
}
B4c0f59:L4c0f59:{c.instructions+=5;NFSU2_TR(0x4c0f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0f5c:{NFSU2_TR(0x4c0f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0f5f:{NFSU2_TR(0x4c0f5f);
u8 U[4];
w4(U+0,u32(0xac6bdbc6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0f64:{NFSU2_TR(0x4c0f64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0f65:{NFSU2_TR(0x4c0f65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0f6aull));
TAIL_STATIC(0x537a60u,537);
}
B4c0f6a:L4c0f6a:{c.instructions+=5;NFSU2_TR(0x4c0f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0f6d:{NFSU2_TR(0x4c0f6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0f70:{NFSU2_TR(0x4c0f70);
u8 U[4];
w4(U+0,u32(0xcbeda229ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0f75:{NFSU2_TR(0x4c0f75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0f76:{NFSU2_TR(0x4c0f76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0f7bull));
TAIL_STATIC(0x537a60u,537);
}
B4c0f7b:L4c0f7b:{c.instructions+=5;NFSU2_TR(0x4c0f7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0f7e:{NFSU2_TR(0x4c0f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0f81:{NFSU2_TR(0x4c0f81);
u8 U[4];
w4(U+0,u32(0x8a10c890ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0f86:{NFSU2_TR(0x4c0f86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0f87:{NFSU2_TR(0x4c0f87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0f8cull));
TAIL_STATIC(0x537a60u,537);
}
B4c0f8c:L4c0f8c:{c.instructions+=5;NFSU2_TR(0x4c0f8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0f8f:{NFSU2_TR(0x4c0f8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0f92:{NFSU2_TR(0x4c0f92);
u8 U[4];
w4(U+0,u32(0xa6b6dd4aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0f97:{NFSU2_TR(0x4c0f97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0f98:{NFSU2_TR(0x4c0f98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0f9dull));
TAIL_STATIC(0x537a60u,537);
}
B4c0f9d:L4c0f9d:{c.instructions+=5;NFSU2_TR(0x4c0f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0fa0:{NFSU2_TR(0x4c0fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0fa3:{NFSU2_TR(0x4c0fa3);
u8 U[4];
w4(U+0,u32(0x9c0ae9aaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0fa8:{NFSU2_TR(0x4c0fa8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0fa9:{NFSU2_TR(0x4c0fa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0faeull));
TAIL_STATIC(0x537a60u,537);
}
B4c0fae:L4c0fae:{c.instructions+=5;NFSU2_TR(0x4c0fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0fb1:{NFSU2_TR(0x4c0fb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0fb4:{NFSU2_TR(0x4c0fb4);
u8 U[4];
w4(U+0,u32(0x8a094d85ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0fb9:{NFSU2_TR(0x4c0fb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0fba:{NFSU2_TR(0x4c0fba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0fbfull));
TAIL_STATIC(0x537a60u,537);
}
B4c0fbf:L4c0fbf:{c.instructions+=5;NFSU2_TR(0x4c0fbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0fc2:{NFSU2_TR(0x4c0fc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0fc5:{NFSU2_TR(0x4c0fc5);
u8 U[4];
w4(U+0,u32(0x8a0ab225ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0fca:{NFSU2_TR(0x4c0fca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0fcb:{NFSU2_TR(0x4c0fcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0fd0ull));
TAIL_STATIC(0x537a10u,537);
}
B4c0fd0:L4c0fd0:{c.instructions+=6;NFSU2_TR(0x4c0fd0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4c0fd3:{NFSU2_TR(0x4c0fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0fd6:{NFSU2_TR(0x4c0fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c0fd9:{NFSU2_TR(0x4c0fd9);
u8 U[4];
w4(U+0,u32(0x8a0aa234ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0fde:{NFSU2_TR(0x4c0fde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0fdf:{NFSU2_TR(0x4c0fdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0fe4ull));
TAIL_STATIC(0x537a60u,537);
}
B4c0fe4:L4c0fe4:{c.instructions+=8;NFSU2_TR(0x4c0fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c0fe7:{NFSU2_TR(0x4c0fe7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0fe9:{NFSU2_TR(0x4c0fe9);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0fee:{NFSU2_TR(0x4c0fee);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0ff3:{NFSU2_TR(0x4c0ff3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c0ff4:{NFSU2_TR(0x4c0ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c0ff7:{NFSU2_TR(0x4c0ff7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x76ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c0ffb:{NFSU2_TR(0x4c0ffb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c1000ull));
TAIL_STATIC(0x537c00u,537);
}
XIT:NFSU2_TR_EXIT(0x4c0,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
