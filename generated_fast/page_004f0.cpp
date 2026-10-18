#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_49e(u8* __restrict R,Cpu& c);
u32 body_4a0(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4b9(u8* __restrict R,Cpu& c);
u32 body_4ba(u8* __restrict R,Cpu& c);
u32 body_4cf(u8* __restrict R,Cpu& c);
u32 body_4e3(u8* __restrict R,Cpu& c);
u32 body_4ef(u8* __restrict R,Cpu& c);
u32 body_4f1(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_556(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_587(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4f0,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4f0,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4f0(u8* __restrict R,Cpu& c);
u32 page_4f0(Cpu& c){return body_4f0(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4f0(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4f0001:goto L4f0001;
case 0x4f0005:c.instructions+=3;goto B4f0005;
case 0x4f0007:c.instructions+=2;goto B4f0007;
case 0x4f000f:c.instructions+=1;goto B4f000f;
case 0x4f0011:goto L4f0011;
case 0x4f0015:c.instructions+=5;goto B4f0015;
case 0x4f0016:c.instructions+=4;goto B4f0016;
case 0x4f0017:c.instructions+=3;goto B4f0017;
case 0x4f0018:c.instructions+=2;goto B4f0018;
case 0x4f001a:c.instructions+=1;goto B4f001a;
case 0x4f001f:goto L4f001f;
case 0x4f0021:goto L4f0021;
case 0x4f0023:goto L4f0023;
case 0x4f0027:c.instructions+=6;goto B4f0027;
case 0x4f0028:c.instructions+=5;goto B4f0028;
case 0x4f002d:c.instructions+=4;goto B4f002d;
case 0x4f002e:c.instructions+=3;goto B4f002e;
case 0x4f0035:c.instructions+=2;goto B4f0035;
case 0x4f0038:c.instructions+=1;goto B4f0038;
case 0x4f0040:goto L4f0040;
case 0x4f0041:c.instructions+=2;goto B4f0041;
case 0x4f0043:c.instructions+=1;goto B4f0043;
case 0x4f0048:goto L4f0048;
case 0x4f004d:c.instructions+=1;goto B4f004d;
case 0x4f004f:goto L4f004f;
case 0x4f0050:c.instructions+=1;goto B4f0050;
case 0x4f0055:goto L4f0055;
case 0x4f0058:goto L4f0058;
case 0x4f005a:c.instructions+=2;goto B4f005a;
case 0x4f005b:c.instructions+=1;goto B4f005b;
case 0x4f0060:goto L4f0060;
case 0x4f0064:c.instructions+=14;goto B4f0064;
case 0x4f0068:c.instructions+=13;goto B4f0068;
case 0x4f0069:c.instructions+=12;goto B4f0069;
case 0x4f006a:c.instructions+=11;goto B4f006a;
case 0x4f006e:c.instructions+=10;goto B4f006e;
case 0x4f006f:c.instructions+=9;goto B4f006f;
case 0x4f0070:c.instructions+=8;goto B4f0070;
case 0x4f0072:c.instructions+=7;goto B4f0072;
case 0x4f0076:c.instructions+=6;goto B4f0076;
case 0x4f0077:c.instructions+=5;goto B4f0077;
case 0x4f0078:c.instructions+=4;goto B4f0078;
case 0x4f0079:c.instructions+=3;goto B4f0079;
case 0x4f007a:c.instructions+=2;goto B4f007a;
case 0x4f007c:c.instructions+=1;goto B4f007c;
case 0x4f0081:goto L4f0081;
case 0x4f0087:c.instructions+=1;goto B4f0087;
case 0x4f008d:goto L4f008d;
case 0x4f0093:goto L4f0093;
case 0x4f0099:c.instructions+=1;goto B4f0099;
case 0x4f009b:goto L4f009b;
case 0x4f009d:goto L4f009d;
case 0x4f00a3:c.instructions+=1;goto B4f00a3;
case 0x4f00a5:goto L4f00a5;
case 0x4f00ab:c.instructions+=1;goto B4f00ab;
case 0x4f00b1:goto L4f00b1;
case 0x4f00b4:c.instructions+=2;goto B4f00b4;
case 0x4f00b5:c.instructions+=1;goto B4f00b5;
case 0x4f00ba:goto L4f00ba;
case 0x4f00bd:c.instructions+=1;goto B4f00bd;
case 0x4f00c2:goto L4f00c2;
case 0x4f00c7:c.instructions+=1;goto B4f00c7;
case 0x4f00cc:goto L4f00cc;
case 0x4f00cd:c.instructions+=4;goto B4f00cd;
case 0x4f00d3:c.instructions+=3;goto B4f00d3;
case 0x4f00d4:c.instructions+=2;goto B4f00d4;
case 0x4f00d5:c.instructions+=1;goto B4f00d5;
case 0x4f00da:goto L4f00da;
case 0x4f00dd:c.instructions+=1;goto B4f00dd;
case 0x4f00e2:goto L4f00e2;
case 0x4f00e5:c.instructions+=5;goto B4f00e5;
case 0x4f00e7:c.instructions+=4;goto B4f00e7;
case 0x4f00ec:c.instructions+=3;goto B4f00ec;
case 0x4f00f1:c.instructions+=2;goto B4f00f1;
case 0x4f00f2:c.instructions+=1;goto B4f00f2;
case 0x4f00f7:goto L4f00f7;
case 0x4f00fa:c.instructions+=1;goto B4f00fa;
case 0x4f00ff:goto L4f00ff;
case 0x4f0105:c.instructions+=1;goto B4f0105;
case 0x4f0107:goto L4f0107;
case 0x4f010d:c.instructions+=1;goto B4f010d;
case 0x4f0113:goto L4f0113;
case 0x4f0116:c.instructions+=5;goto B4f0116;
case 0x4f0118:c.instructions+=4;goto B4f0118;
case 0x4f011d:c.instructions+=3;goto B4f011d;
case 0x4f0122:c.instructions+=2;goto B4f0122;
case 0x4f0123:c.instructions+=1;goto B4f0123;
case 0x4f0128:goto L4f0128;
case 0x4f012b:c.instructions+=1;goto B4f012b;
case 0x4f0130:goto L4f0130;
case 0x4f0133:c.instructions+=2;goto B4f0133;
case 0x4f0138:c.instructions+=1;goto B4f0138;
case 0x4f013d:goto L4f013d;
case 0x4f013e:c.instructions+=3;goto B4f013e;
case 0x4f0140:c.instructions+=2;goto B4f0140;
case 0x4f0142:c.instructions+=1;goto B4f0142;
case 0x4f0147:goto L4f0147;
case 0x4f014c:c.instructions+=4;goto B4f014c;
case 0x4f0151:c.instructions+=3;goto B4f0151;
case 0x4f0156:c.instructions+=2;goto B4f0156;
case 0x4f0157:c.instructions+=1;goto B4f0157;
case 0x4f015c:goto L4f015c;
case 0x4f015f:c.instructions+=1;goto B4f015f;
case 0x4f0164:goto L4f0164;
case 0x4f0169:goto L4f0169;
case 0x4f016c:c.instructions+=1;goto B4f016c;
case 0x4f016e:goto L4f016e;
case 0x4f0178:c.instructions+=1;goto B4f0178;
case 0x4f017d:goto L4f017d;
case 0x4f0180:c.instructions+=2;goto B4f0180;
case 0x4f0185:c.instructions+=1;goto B4f0185;
case 0x4f018a:goto L4f018a;
case 0x4f018b:c.instructions+=9;goto B4f018b;
case 0x4f018d:c.instructions+=8;goto B4f018d;
case 0x4f0192:c.instructions+=7;goto B4f0192;
case 0x4f0197:c.instructions+=6;goto B4f0197;
case 0x4f019c:c.instructions+=5;goto B4f019c;
case 0x4f01a1:c.instructions+=4;goto B4f01a1;
case 0x4f01a6:c.instructions+=3;goto B4f01a6;
case 0x4f01ab:c.instructions+=2;goto B4f01ab;
case 0x4f01ac:c.instructions+=1;goto B4f01ac;
case 0x4f01b1:goto L4f01b1;
case 0x4f01b4:c.instructions+=1;goto B4f01b4;
case 0x4f01b9:goto L4f01b9;
case 0x4f01bf:c.instructions+=1;goto B4f01bf;
case 0x4f01c1:goto L4f01c1;
case 0x4f01c3:goto L4f01c3;
case 0x4f01c9:c.instructions+=1;goto B4f01c9;
case 0x4f01cb:goto L4f01cb;
case 0x4f01d1:c.instructions+=1;goto B4f01d1;
case 0x4f01d3:goto L4f01d3;
case 0x4f01d6:c.instructions+=2;goto B4f01d6;
case 0x4f01db:c.instructions+=1;goto B4f01db;
case 0x4f01e0:goto L4f01e0;
case 0x4f01e1:c.instructions+=4;goto B4f01e1;
case 0x4f01e3:c.instructions+=3;goto B4f01e3;
case 0x4f01e8:c.instructions+=2;goto B4f01e8;
case 0x4f01ed:c.instructions+=1;goto B4f01ed;
case 0x4f01f2:goto L4f01f2;
case 0x4f01f8:c.instructions+=2;goto B4f01f8;
case 0x4f01fa:c.instructions+=1;goto B4f01fa;
case 0x4f01fc:goto L4f01fc;
case 0x4f01ff:c.instructions+=2;goto B4f01ff;
case 0x4f0200:c.instructions+=1;goto B4f0200;
case 0x4f0205:goto L4f0205;
case 0x4f0208:c.instructions+=1;goto B4f0208;
case 0x4f020a:goto L4f020a;
case 0x4f020d:c.instructions+=2;goto B4f020d;
case 0x4f0212:c.instructions+=1;goto B4f0212;
case 0x4f0217:goto L4f0217;
case 0x4f0218:c.instructions+=4;goto B4f0218;
case 0x4f021a:c.instructions+=3;goto B4f021a;
case 0x4f021f:c.instructions+=2;goto B4f021f;
case 0x4f0224:c.instructions+=1;goto B4f0224;
case 0x4f0229:goto L4f0229;
case 0x4f022f:c.instructions+=1;goto B4f022f;
case 0x4f0231:goto L4f0231;
case 0x4f0236:goto L4f0236;
case 0x4f023d:c.instructions+=4;goto B4f023d;
case 0x4f0240:c.instructions+=3;goto B4f0240;
case 0x4f0241:c.instructions+=2;goto B4f0241;
case 0x4f0246:c.instructions+=1;goto B4f0246;
case 0x4f024b:goto L4f024b;
case 0x4f024e:goto L4f024e;
case 0x4f0254:c.instructions+=2;goto B4f0254;
case 0x4f0256:c.instructions+=1;goto B4f0256;
case 0x4f025c:goto L4f025c;
case 0x4f025f:c.instructions+=15;goto B4f025f;
case 0x4f0263:c.instructions+=14;goto B4f0263;
case 0x4f0267:c.instructions+=13;goto B4f0267;
case 0x4f0269:c.instructions+=12;goto B4f0269;
case 0x4f026c:c.instructions+=11;goto B4f026c;
case 0x4f026f:c.instructions+=10;goto B4f026f;
case 0x4f0275:c.instructions+=9;goto B4f0275;
case 0x4f0279:c.instructions+=8;goto B4f0279;
case 0x4f027a:c.instructions+=7;goto B4f027a;
case 0x4f027e:c.instructions+=6;goto B4f027e;
case 0x4f027f:c.instructions+=5;goto B4f027f;
case 0x4f0280:c.instructions+=4;goto B4f0280;
case 0x4f0281:c.instructions+=3;goto B4f0281;
case 0x4f0282:c.instructions+=2;goto B4f0282;
case 0x4f0284:c.instructions+=1;goto B4f0284;
case 0x4f0289:goto L4f0289;
case 0x4f028b:c.instructions+=1;goto B4f028b;
case 0x4f028d:goto L4f028d;
case 0x4f0292:c.instructions+=2;goto B4f0292;
case 0x4f0294:c.instructions+=1;goto B4f0294;
case 0x4f0296:goto L4f0296;
case 0x4f0298:c.instructions+=1;goto B4f0298;
case 0x4f029d:goto L4f029d;
case 0x4f029e:c.instructions+=5;goto B4f029e;
case 0x4f029f:c.instructions+=4;goto B4f029f;
case 0x4f02a0:c.instructions+=3;goto B4f02a0;
case 0x4f02a7:c.instructions+=2;goto B4f02a7;
case 0x4f02a8:c.instructions+=1;goto B4f02a8;
case 0x4f02ab:goto L4f02ab;
case 0x4f02ae:c.instructions+=1;goto B4f02ae;
case 0x4f02b0:goto L4f02b0;
case 0x4f02b2:c.instructions+=2;goto B4f02b2;
case 0x4f02b4:c.instructions+=1;goto B4f02b4;
case 0x4f02b6:goto L4f02b6;
case 0x4f02b7:c.instructions+=1;goto B4f02b7;
case 0x4f02bc:goto L4f02bc;
case 0x4f02bf:c.instructions+=1;goto B4f02bf;
case 0x4f02c5:goto L4f02c5;
case 0x4f02c8:c.instructions+=10;goto B4f02c8;
case 0x4f02cb:c.instructions+=9;goto B4f02cb;
case 0x4f02d0:c.instructions+=8;goto B4f02d0;
case 0x4f02d2:c.instructions+=7;goto B4f02d2;
case 0x4f02d7:c.instructions+=6;goto B4f02d7;
case 0x4f02dc:c.instructions+=5;goto B4f02dc;
case 0x4f02e1:c.instructions+=4;goto B4f02e1;
case 0x4f02e6:c.instructions+=3;goto B4f02e6;
case 0x4f02eb:c.instructions+=2;goto B4f02eb;
case 0x4f02ec:c.instructions+=1;goto B4f02ec;
case 0x4f02f1:goto L4f02f1;
case 0x4f02f4:c.instructions+=6;goto B4f02f4;
case 0x4f02f6:c.instructions+=5;goto B4f02f6;
case 0x4f02f7:c.instructions+=4;goto B4f02f7;
case 0x4f02f8:c.instructions+=3;goto B4f02f8;
case 0x4f02f9:c.instructions+=2;goto B4f02f9;
case 0x4f02fa:c.instructions+=1;goto B4f02fa;
case 0x4f02fd:goto L4f02fd;
case 0x4f0300:c.instructions+=1;goto B4f0300;
case 0x4f0302:goto L4f0302;
case 0x4f0308:c.instructions+=4;goto B4f0308;
case 0x4f030a:c.instructions+=3;goto B4f030a;
case 0x4f030d:c.instructions+=2;goto B4f030d;
case 0x4f0310:c.instructions+=1;goto B4f0310;
case 0x4f0312:goto L4f0312;
case 0x4f0314:c.instructions+=2;goto B4f0314;
case 0x4f031e:c.instructions+=1;goto B4f031e;
case 0x4f0323:goto L4f0323;
case 0x4f0324:c.instructions+=4;goto B4f0324;
case 0x4f0325:c.instructions+=3;goto B4f0325;
case 0x4f0326:c.instructions+=2;goto B4f0326;
case 0x4f0327:c.instructions+=1;goto B4f0327;
case 0x4f032a:goto L4f032a;
case 0x4f032f:c.instructions+=1;goto B4f032f;
case 0x4f0331:goto L4f0331;
case 0x4f0337:c.instructions+=1;goto B4f0337;
case 0x4f0339:goto L4f0339;
case 0x4f033e:goto L4f033e;
case 0x4f0344:c.instructions+=2;goto B4f0344;
case 0x4f0346:c.instructions+=1;goto B4f0346;
case 0x4f0348:goto L4f0348;
case 0x4f034b:c.instructions+=3;goto B4f034b;
case 0x4f034c:c.instructions+=2;goto B4f034c;
case 0x4f0351:c.instructions+=1;goto B4f0351;
case 0x4f0356:goto L4f0356;
case 0x4f0359:c.instructions+=5;goto B4f0359;
case 0x4f035a:c.instructions+=4;goto B4f035a;
case 0x4f035b:c.instructions+=3;goto B4f035b;
case 0x4f035c:c.instructions+=2;goto B4f035c;
case 0x4f035d:c.instructions+=1;goto B4f035d;
case 0x4f0360:goto L4f0360;
case 0x4f0362:c.instructions+=1;goto B4f0362;
case 0x4f0364:goto L4f0364;
case 0x4f0369:goto L4f0369;
case 0x4f036a:c.instructions+=4;goto B4f036a;
case 0x4f036b:c.instructions+=3;goto B4f036b;
case 0x4f036c:c.instructions+=2;goto B4f036c;
case 0x4f036d:c.instructions+=1;goto B4f036d;
case 0x4f0370:goto L4f0370;
case 0x4f0374:c.instructions+=15;goto B4f0374;
case 0x4f0377:c.instructions+=14;goto B4f0377;
case 0x4f0378:c.instructions+=13;goto B4f0378;
case 0x4f037c:c.instructions+=12;goto B4f037c;
case 0x4f037d:c.instructions+=11;goto B4f037d;
case 0x4f0381:c.instructions+=10;goto B4f0381;
case 0x4f0382:c.instructions+=9;goto B4f0382;
case 0x4f0383:c.instructions+=8;goto B4f0383;
case 0x4f0385:c.instructions+=7;goto B4f0385;
case 0x4f0389:c.instructions+=6;goto B4f0389;
case 0x4f038a:c.instructions+=5;goto B4f038a;
case 0x4f038b:c.instructions+=4;goto B4f038b;
case 0x4f038c:c.instructions+=3;goto B4f038c;
case 0x4f038d:c.instructions+=2;goto B4f038d;
case 0x4f038f:c.instructions+=1;goto B4f038f;
case 0x4f0394:goto L4f0394;
case 0x4f039a:c.instructions+=1;goto B4f039a;
case 0x4f03a0:goto L4f03a0;
case 0x4f03a6:goto L4f03a6;
case 0x4f03ac:c.instructions+=1;goto B4f03ac;
case 0x4f03b2:goto L4f03b2;
case 0x4f03b4:goto L4f03b4;
case 0x4f03ba:c.instructions+=1;goto B4f03ba;
case 0x4f03c0:goto L4f03c0;
case 0x4f03c6:c.instructions+=1;goto B4f03c6;
case 0x4f03c8:goto L4f03c8;
case 0x4f03ce:c.instructions+=1;goto B4f03ce;
case 0x4f03d4:goto L4f03d4;
case 0x4f03d7:c.instructions+=2;goto B4f03d7;
case 0x4f03dc:c.instructions+=1;goto B4f03dc;
case 0x4f03e1:goto L4f03e1;
case 0x4f03e2:c.instructions+=9;goto B4f03e2;
case 0x4f03e4:c.instructions+=8;goto B4f03e4;
case 0x4f03e6:c.instructions+=7;goto B4f03e6;
case 0x4f03e8:c.instructions+=6;goto B4f03e8;
case 0x4f03ed:c.instructions+=5;goto B4f03ed;
case 0x4f03f2:c.instructions+=4;goto B4f03f2;
case 0x4f03f7:c.instructions+=3;goto B4f03f7;
case 0x4f03fc:c.instructions+=2;goto B4f03fc;
case 0x4f03fd:c.instructions+=1;goto B4f03fd;
case 0x4f0402:goto L4f0402;
case 0x4f0405:c.instructions+=1;goto B4f0405;
case 0x4f040a:goto L4f040a;
case 0x4f040d:c.instructions+=2;goto B4f040d;
case 0x4f040e:c.instructions+=1;goto B4f040e;
case 0x4f0413:goto L4f0413;
case 0x4f0416:c.instructions+=1;goto B4f0416;
case 0x4f041b:goto L4f041b;
case 0x4f041e:c.instructions+=2;goto B4f041e;
case 0x4f0425:c.instructions+=1;goto B4f0425;
case 0x4f042b:goto L4f042b;
case 0x4f042c:c.instructions+=6;goto B4f042c;
case 0x4f0431:c.instructions+=5;goto B4f0431;
case 0x4f0434:c.instructions+=4;goto B4f0434;
case 0x4f0435:c.instructions+=3;goto B4f0435;
case 0x4f0437:c.instructions+=2;goto B4f0437;
case 0x4f043e:c.instructions+=1;goto B4f043e;
case 0x4f0443:goto L4f0443;
case 0x4f0446:c.instructions+=2;goto B4f0446;
case 0x4f0448:c.instructions+=1;goto B4f0448;
case 0x4f044d:goto L4f044d;
case 0x4f044f:c.instructions+=1;goto B4f044f;
case 0x4f0451:goto L4f0451;
case 0x4f0454:c.instructions+=3;goto B4f0454;
case 0x4f0459:c.instructions+=2;goto B4f0459;
case 0x4f0460:c.instructions+=1;goto B4f0460;
case 0x4f0465:goto L4f0465;
case 0x4f0466:c.instructions+=6;goto B4f0466;
case 0x4f0468:c.instructions+=5;goto B4f0468;
case 0x4f046a:c.instructions+=4;goto B4f046a;
case 0x4f046f:c.instructions+=3;goto B4f046f;
case 0x4f0474:c.instructions+=2;goto B4f0474;
case 0x4f0475:c.instructions+=1;goto B4f0475;
case 0x4f047a:goto L4f047a;
case 0x4f047d:c.instructions+=1;goto B4f047d;
case 0x4f0482:goto L4f0482;
case 0x4f0485:c.instructions+=3;goto B4f0485;
case 0x4f0486:c.instructions+=2;goto B4f0486;
case 0x4f048b:c.instructions+=1;goto B4f048b;
case 0x4f0490:goto L4f0490;
case 0x4f0493:c.instructions+=4;goto B4f0493;
case 0x4f0494:c.instructions+=3;goto B4f0494;
case 0x4f0499:c.instructions+=2;goto B4f0499;
case 0x4f049a:c.instructions+=1;goto B4f049a;
case 0x4f049f:goto L4f049f;
case 0x4f04a2:c.instructions+=2;goto B4f04a2;
case 0x4f04a8:c.instructions+=1;goto B4f04a8;
case 0x4f04ad:goto L4f04ad;
case 0x4f04b3:c.instructions+=1;goto B4f04b3;
case 0x4f04b9:goto L4f04b9;
case 0x4f04bf:c.instructions+=1;goto B4f04bf;
case 0x4f04c1:goto L4f04c1;
case 0x4f04c7:c.instructions+=1;goto B4f04c7;
case 0x4f04cd:goto L4f04cd;
case 0x4f04d0:c.instructions+=5;goto B4f04d0;
case 0x4f04d2:c.instructions+=4;goto B4f04d2;
case 0x4f04d7:c.instructions+=3;goto B4f04d7;
case 0x4f04dc:c.instructions+=2;goto B4f04dc;
case 0x4f04dd:c.instructions+=1;goto B4f04dd;
case 0x4f04e2:goto L4f04e2;
case 0x4f04e5:c.instructions+=1;goto B4f04e5;
case 0x4f04ea:goto L4f04ea;
case 0x4f04ed:c.instructions+=2;goto B4f04ed;
case 0x4f04ef:c.instructions+=1;goto B4f04ef;
case 0x4f04f5:goto L4f04f5;
case 0x4f04fb:c.instructions+=2;goto B4f04fb;
case 0x4f04fd:c.instructions+=1;goto B4f04fd;
case 0x4f0503:goto L4f0503;
case 0x4f0509:c.instructions+=2;goto B4f0509;
case 0x4f050b:c.instructions+=1;goto B4f050b;
case 0x4f050d:goto L4f050d;
case 0x4f0510:c.instructions+=3;goto B4f0510;
case 0x4f0511:c.instructions+=2;goto B4f0511;
case 0x4f0516:c.instructions+=1;goto B4f0516;
case 0x4f051b:goto L4f051b;
case 0x4f051e:c.instructions+=5;goto B4f051e;
case 0x4f051f:c.instructions+=4;goto B4f051f;
case 0x4f0525:c.instructions+=3;goto B4f0525;
case 0x4f0526:c.instructions+=2;goto B4f0526;
case 0x4f0527:c.instructions+=1;goto B4f0527;
case 0x4f052c:goto L4f052c;
case 0x4f052f:c.instructions+=3;goto B4f052f;
case 0x4f0530:c.instructions+=2;goto B4f0530;
case 0x4f0535:c.instructions+=1;goto B4f0535;
case 0x4f053a:goto L4f053a;
case 0x4f053f:goto L4f053f;
case 0x4f0542:c.instructions+=2;goto B4f0542;
case 0x4f0547:c.instructions+=1;goto B4f0547;
case 0x4f054c:goto L4f054c;
case 0x4f054d:c.instructions+=9;goto B4f054d;
case 0x4f054f:c.instructions+=8;goto B4f054f;
case 0x4f0551:c.instructions+=7;goto B4f0551;
case 0x4f0553:c.instructions+=6;goto B4f0553;
case 0x4f0558:c.instructions+=5;goto B4f0558;
case 0x4f055d:c.instructions+=4;goto B4f055d;
case 0x4f0562:c.instructions+=3;goto B4f0562;
case 0x4f0567:c.instructions+=2;goto B4f0567;
case 0x4f0568:c.instructions+=1;goto B4f0568;
case 0x4f056d:goto L4f056d;
case 0x4f0570:c.instructions+=3;goto B4f0570;
case 0x4f0572:c.instructions+=2;goto B4f0572;
case 0x4f0573:c.instructions+=1;goto B4f0573;
case 0x4f0578:goto L4f0578;
case 0x4f057b:c.instructions+=1;goto B4f057b;
case 0x4f0580:goto L4f0580;
case 0x4f0585:c.instructions+=2;goto B4f0585;
case 0x4f0589:c.instructions+=1;goto B4f0589;
case 0x4f058b:goto L4f058b;
case 0x4f058e:c.instructions+=8;goto B4f058e;
case 0x4f0590:c.instructions+=7;goto B4f0590;
case 0x4f0592:c.instructions+=6;goto B4f0592;
case 0x4f0594:c.instructions+=5;goto B4f0594;
case 0x4f0596:c.instructions+=4;goto B4f0596;
case 0x4f059b:c.instructions+=3;goto B4f059b;
case 0x4f059c:c.instructions+=2;goto B4f059c;
case 0x4f059d:c.instructions+=1;goto B4f059d;
case 0x4f05a2:goto L4f05a2;
case 0x4f05a5:goto L4f05a5;
case 0x4f05aa:c.instructions+=1;goto B4f05aa;
case 0x4f05b0:goto L4f05b0;
case 0x4f05b3:c.instructions+=5;goto B4f05b3;
case 0x4f05b4:c.instructions+=4;goto B4f05b4;
case 0x4f05b8:c.instructions+=3;goto B4f05b8;
case 0x4f05bd:c.instructions+=2;goto B4f05bd;
case 0x4f05be:c.instructions+=1;goto B4f05be;
case 0x4f05c3:goto L4f05c3;
case 0x4f05c6:c.instructions+=6;goto B4f05c6;
case 0x4f05c8:c.instructions+=5;goto B4f05c8;
case 0x4f05cd:c.instructions+=4;goto B4f05cd;
case 0x4f05d1:c.instructions+=3;goto B4f05d1;
case 0x4f05d2:c.instructions+=2;goto B4f05d2;
case 0x4f05d3:c.instructions+=1;goto B4f05d3;
case 0x4f05d8:goto L4f05d8;
case 0x4f05da:c.instructions+=3;goto B4f05da;
case 0x4f05dd:c.instructions+=2;goto B4f05dd;
case 0x4f05e0:c.instructions+=1;goto B4f05e0;
case 0x4f05e2:goto L4f05e2;
case 0x4f05e7:goto L4f05e7;
case 0x4f05ed:c.instructions+=1;goto B4f05ed;
case 0x4f05f3:goto L4f05f3;
case 0x4f05f9:goto L4f05f9;
case 0x4f05ff:c.instructions+=1;goto B4f05ff;
case 0x4f0605:goto L4f0605;
case 0x4f060b:c.instructions+=1;goto B4f060b;
case 0x4f060d:goto L4f060d;
case 0x4f0613:c.instructions+=1;goto B4f0613;
case 0x4f0619:goto L4f0619;
case 0x4f061e:goto L4f061e;
case 0x4f0620:c.instructions+=2;goto B4f0620;
case 0x4f0622:c.instructions+=1;goto B4f0622;
case 0x4f0627:goto L4f0627;
case 0x4f0628:c.instructions+=1;goto B4f0628;
case 0x4f062d:goto L4f062d;
case 0x4f0630:c.instructions+=2;goto B4f0630;
case 0x4f0632:c.instructions+=1;goto B4f0632;
case 0x4f0638:goto L4f0638;
case 0x4f063b:c.instructions+=4;goto B4f063b;
case 0x4f063c:c.instructions+=3;goto B4f063c;
case 0x4f0641:c.instructions+=2;goto B4f0641;
case 0x4f0648:c.instructions+=1;goto B4f0648;
case 0x4f064d:goto L4f064d;
case 0x4f0650:c.instructions+=1;goto B4f0650;
case 0x4f0655:goto L4f0655;
case 0x4f065b:c.instructions+=2;goto B4f065b;
case 0x4f065d:c.instructions+=1;goto B4f065d;
case 0x4f065f:goto L4f065f;
case 0x4f0662:c.instructions+=4;goto B4f0662;
case 0x4f0663:c.instructions+=3;goto B4f0663;
case 0x4f0668:c.instructions+=2;goto B4f0668;
case 0x4f066f:c.instructions+=1;goto B4f066f;
case 0x4f0674:goto L4f0674;
case 0x4f0677:c.instructions+=1;goto B4f0677;
case 0x4f067c:goto L4f067c;
case 0x4f067e:c.instructions+=2;goto B4f067e;
case 0x4f0683:c.instructions+=1;goto B4f0683;
case 0x4f0688:goto L4f0688;
case 0x4f068e:c.instructions+=1;goto B4f068e;
case 0x4f0693:goto L4f0693;
case 0x4f0698:goto L4f0698;
case 0x4f069b:c.instructions+=5;goto B4f069b;
case 0x4f069d:c.instructions+=4;goto B4f069d;
case 0x4f06a2:c.instructions+=3;goto B4f06a2;
case 0x4f06a7:c.instructions+=2;goto B4f06a7;
case 0x4f06a8:c.instructions+=1;goto B4f06a8;
case 0x4f06ad:goto L4f06ad;
case 0x4f06b0:c.instructions+=1;goto B4f06b0;
case 0x4f06b5:goto L4f06b5;
case 0x4f06b8:c.instructions+=1;goto B4f06b8;
case 0x4f06bd:goto L4f06bd;
case 0x4f06c3:c.instructions+=2;goto B4f06c3;
case 0x4f06c5:c.instructions+=1;goto B4f06c5;
case 0x4f06c7:goto L4f06c7;
case 0x4f06c9:c.instructions+=2;goto B4f06c9;
case 0x4f06cb:c.instructions+=1;goto B4f06cb;
case 0x4f06d0:goto L4f06d0;
case 0x4f06d1:c.instructions+=1;goto B4f06d1;
case 0x4f06d6:goto L4f06d6;
case 0x4f06d9:c.instructions+=2;goto B4f06d9;
case 0x4f06db:c.instructions+=1;goto B4f06db;
case 0x4f06dd:goto L4f06dd;
case 0x4f06e3:goto L4f06e3;
case 0x4f06e6:c.instructions+=4;goto B4f06e6;
case 0x4f06e7:c.instructions+=3;goto B4f06e7;
case 0x4f06ed:c.instructions+=2;goto B4f06ed;
case 0x4f06ee:c.instructions+=1;goto B4f06ee;
case 0x4f06f3:goto L4f06f3;
case 0x4f06f8:goto L4f06f8;
case 0x4f06fe:c.instructions+=1;goto B4f06fe;
case 0x4f0704:goto L4f0704;
case 0x4f070a:c.instructions+=1;goto B4f070a;
case 0x4f0710:goto L4f0710;
case 0x4f0713:c.instructions+=3;goto B4f0713;
case 0x4f0716:c.instructions+=2;goto B4f0716;
case 0x4f0717:c.instructions+=1;goto B4f0717;
case 0x4f071c:goto L4f071c;
case 0x4f071f:c.instructions+=2;goto B4f071f;
case 0x4f0721:c.instructions+=1;goto B4f0721;
case 0x4f0723:goto L4f0723;
case 0x4f0728:c.instructions+=1;goto B4f0728;
case 0x4f072d:goto L4f072d;
case 0x4f0730:c.instructions+=3;goto B4f0730;
case 0x4f0731:c.instructions+=2;goto B4f0731;
case 0x4f0733:c.instructions+=1;goto B4f0733;
case 0x4f0738:goto L4f0738;
case 0x4f073a:c.instructions+=2;goto B4f073a;
case 0x4f073c:c.instructions+=1;goto B4f073c;
case 0x4f073f:goto L4f073f;
case 0x4f0744:goto L4f0744;
case 0x4f0747:c.instructions+=3;goto B4f0747;
case 0x4f0748:c.instructions+=2;goto B4f0748;
case 0x4f074d:c.instructions+=1;goto B4f074d;
case 0x4f0752:goto L4f0752;
case 0x4f0755:c.instructions+=4;goto B4f0755;
case 0x4f0756:c.instructions+=3;goto B4f0756;
case 0x4f075b:c.instructions+=2;goto B4f075b;
case 0x4f075c:c.instructions+=1;goto B4f075c;
case 0x4f0761:goto L4f0761;
case 0x4f0764:c.instructions+=6;goto B4f0764;
case 0x4f0765:c.instructions+=5;goto B4f0765;
case 0x4f076a:c.instructions+=4;goto B4f076a;
case 0x4f076b:c.instructions+=3;goto B4f076b;
case 0x4f076d:c.instructions+=2;goto B4f076d;
case 0x4f0773:c.instructions+=1;goto B4f0773;
case 0x4f0778:goto L4f0778;
case 0x4f077b:c.instructions+=2;goto B4f077b;
case 0x4f077d:c.instructions+=1;goto B4f077d;
case 0x4f0782:goto L4f0782;
case 0x4f0784:c.instructions+=1;goto B4f0784;
case 0x4f0786:goto L4f0786;
case 0x4f078c:c.instructions+=2;goto B4f078c;
case 0x4f078d:c.instructions+=1;goto B4f078d;
case 0x4f0792:goto L4f0792;
case 0x4f0795:c.instructions+=3;goto B4f0795;
case 0x4f079a:c.instructions+=2;goto B4f079a;
case 0x4f07a4:c.instructions+=1;goto B4f07a4;
case 0x4f07a9:goto L4f07a9;
case 0x4f07aa:c.instructions+=6;goto B4f07aa;
case 0x4f07ac:c.instructions+=5;goto B4f07ac;
case 0x4f07ae:c.instructions+=4;goto B4f07ae;
case 0x4f07b3:c.instructions+=3;goto B4f07b3;
case 0x4f07b8:c.instructions+=2;goto B4f07b8;
case 0x4f07b9:c.instructions+=1;goto B4f07b9;
case 0x4f07be:goto L4f07be;
case 0x4f07c3:c.instructions+=1;goto B4f07c3;
case 0x4f07c8:goto L4f07c8;
case 0x4f07cb:c.instructions+=3;goto B4f07cb;
case 0x4f07cc:c.instructions+=2;goto B4f07cc;
case 0x4f07ce:c.instructions+=1;goto B4f07ce;
case 0x4f07d3:goto L4f07d3;
case 0x4f07d5:c.instructions+=2;goto B4f07d5;
case 0x4f07d7:c.instructions+=1;goto B4f07d7;
case 0x4f07da:goto L4f07da;
case 0x4f07de:goto L4f07de;
case 0x4f07e2:c.instructions+=10;goto B4f07e2;
case 0x4f07e6:c.instructions+=9;goto B4f07e6;
case 0x4f07ea:c.instructions+=8;goto B4f07ea;
case 0x4f07ec:c.instructions+=7;goto B4f07ec;
case 0x4f07ed:c.instructions+=6;goto B4f07ed;
case 0x4f07ee:c.instructions+=5;goto B4f07ee;
case 0x4f07ef:c.instructions+=4;goto B4f07ef;
case 0x4f07f5:c.instructions+=3;goto B4f07f5;
case 0x4f07f6:c.instructions+=2;goto B4f07f6;
case 0x4f07f8:c.instructions+=1;goto B4f07f8;
case 0x4f07fd:goto L4f07fd;
case 0x4f07ff:c.instructions+=1;goto B4f07ff;
case 0x4f0801:goto L4f0801;
case 0x4f0806:c.instructions+=2;goto B4f0806;
case 0x4f0808:c.instructions+=1;goto B4f0808;
case 0x4f080a:goto L4f080a;
case 0x4f0810:c.instructions+=1;goto B4f0810;
case 0x4f0815:goto L4f0815;
case 0x4f081b:c.instructions+=2;goto B4f081b;
case 0x4f081d:c.instructions+=1;goto B4f081d;
case 0x4f081f:goto L4f081f;
case 0x4f0821:c.instructions+=2;goto B4f0821;
case 0x4f0823:c.instructions+=1;goto B4f0823;
case 0x4f0825:goto L4f0825;
case 0x4f082f:goto L4f082f;
case 0x4f0830:c.instructions+=6;goto B4f0830;
case 0x4f0831:c.instructions+=5;goto B4f0831;
case 0x4f0832:c.instructions+=4;goto B4f0832;
case 0x4f0839:c.instructions+=3;goto B4f0839;
case 0x4f083a:c.instructions+=2;goto B4f083a;
case 0x4f083d:c.instructions+=1;goto B4f083d;
case 0x4f0840:goto L4f0840;
case 0x4f0843:c.instructions+=2;goto B4f0843;
case 0x4f0848:c.instructions+=1;goto B4f0848;
case 0x4f084d:goto L4f084d;
case 0x4f0852:c.instructions+=4;goto B4f0852;
case 0x4f0853:c.instructions+=3;goto B4f0853;
case 0x4f0856:c.instructions+=2;goto B4f0856;
case 0x4f0857:c.instructions+=1;goto B4f0857;
case 0x4f085c:goto L4f085c;
case 0x4f085e:c.instructions+=3;goto B4f085e;
case 0x4f0861:c.instructions+=2;goto B4f0861;
case 0x4f0863:c.instructions+=1;goto B4f0863;
case 0x4f0866:goto L4f0866;
case 0x4f0868:c.instructions+=3;goto B4f0868;
case 0x4f086d:c.instructions+=2;goto B4f086d;
case 0x4f086e:c.instructions+=1;goto B4f086e;
case 0x4f0873:goto L4f0873;
case 0x4f0876:c.instructions+=1;goto B4f0876;
case 0x4f087b:goto L4f087b;
case 0x4f087e:c.instructions+=1;goto B4f087e;
case 0x4f0880:goto L4f0880;
case 0x4f0882:c.instructions+=2;goto B4f0882;
case 0x4f0884:c.instructions+=1;goto B4f0884;
case 0x4f0886:goto L4f0886;
case 0x4f0887:c.instructions+=1;goto B4f0887;
case 0x4f088c:goto L4f088c;
case 0x4f088f:c.instructions+=1;goto B4f088f;
case 0x4f0895:goto L4f0895;
case 0x4f0898:c.instructions+=7;goto B4f0898;
case 0x4f089b:c.instructions+=6;goto B4f089b;
case 0x4f08a0:c.instructions+=5;goto B4f08a0;
case 0x4f08a2:c.instructions+=4;goto B4f08a2;
case 0x4f08a7:c.instructions+=3;goto B4f08a7;
case 0x4f08ac:c.instructions+=2;goto B4f08ac;
case 0x4f08ad:c.instructions+=1;goto B4f08ad;
case 0x4f08b2:goto L4f08b2;
case 0x4f08b5:c.instructions+=7;goto B4f08b5;
case 0x4f08b6:c.instructions+=6;goto B4f08b6;
case 0x4f08b8:c.instructions+=5;goto B4f08b8;
case 0x4f08b9:c.instructions+=4;goto B4f08b9;
case 0x4f08ba:c.instructions+=3;goto B4f08ba;
case 0x4f08bb:c.instructions+=2;goto B4f08bb;
case 0x4f08be:c.instructions+=1;goto B4f08be;
case 0x4f08c1:goto L4f08c1;
case 0x4f08c3:c.instructions+=1;goto B4f08c3;
case 0x4f08c5:goto L4f08c5;
case 0x4f08ca:goto L4f08ca;
case 0x4f08cb:c.instructions+=5;goto B4f08cb;
case 0x4f08cc:c.instructions+=4;goto B4f08cc;
case 0x4f08cd:c.instructions+=3;goto B4f08cd;
case 0x4f08ce:c.instructions+=2;goto B4f08ce;
case 0x4f08d1:c.instructions+=1;goto B4f08d1;
case 0x4f08e0:goto L4f08e0;
case 0x4f08e4:c.instructions+=14;goto B4f08e4;
case 0x4f08e5:c.instructions+=13;goto B4f08e5;
case 0x4f08e9:c.instructions+=12;goto B4f08e9;
case 0x4f08ea:c.instructions+=11;goto B4f08ea;
case 0x4f08ee:c.instructions+=10;goto B4f08ee;
case 0x4f08ef:c.instructions+=9;goto B4f08ef;
case 0x4f08f0:c.instructions+=8;goto B4f08f0;
case 0x4f08f2:c.instructions+=7;goto B4f08f2;
case 0x4f08f6:c.instructions+=6;goto B4f08f6;
case 0x4f08f7:c.instructions+=5;goto B4f08f7;
case 0x4f08f8:c.instructions+=4;goto B4f08f8;
case 0x4f08f9:c.instructions+=3;goto B4f08f9;
case 0x4f08fa:c.instructions+=2;goto B4f08fa;
case 0x4f08fc:c.instructions+=1;goto B4f08fc;
case 0x4f0901:goto L4f0901;
case 0x4f0907:c.instructions+=1;goto B4f0907;
case 0x4f090d:goto L4f090d;
case 0x4f0913:goto L4f0913;
case 0x4f0919:c.instructions+=1;goto B4f0919;
case 0x4f091f:goto L4f091f;
case 0x4f0925:goto L4f0925;
case 0x4f092b:c.instructions+=1;goto B4f092b;
case 0x4f092d:goto L4f092d;
case 0x4f0933:c.instructions+=1;goto B4f0933;
case 0x4f0935:goto L4f0935;
case 0x4f093b:c.instructions+=1;goto B4f093b;
case 0x4f0941:goto L4f0941;
case 0x4f0946:goto L4f0946;
case 0x4f094d:c.instructions+=1;goto B4f094d;
case 0x4f0952:goto L4f0952;
case 0x4f0958:c.instructions+=2;goto B4f0958;
case 0x4f095a:c.instructions+=1;goto B4f095a;
case 0x4f0960:goto L4f0960;
case 0x4f0967:c.instructions+=1;goto B4f0967;
case 0x4f096d:goto L4f096d;
case 0x4f0973:c.instructions+=2;goto B4f0973;
case 0x4f0976:c.instructions+=1;goto B4f0976;
case 0x4f097b:goto L4f097b;
case 0x4f097d:c.instructions+=1;goto B4f097d;
case 0x4f097f:goto L4f097f;
case 0x4f0981:c.instructions+=2;goto B4f0981;
case 0x4f0988:c.instructions+=1;goto B4f0988;
case 0x4f098d:goto L4f098d;
case 0x4f0992:goto L4f0992;
case 0x4f0995:c.instructions+=2;goto B4f0995;
case 0x4f099a:c.instructions+=1;goto B4f099a;
case 0x4f099f:goto L4f099f;
case 0x4f09a0:c.instructions+=5;goto B4f09a0;
case 0x4f09a2:c.instructions+=4;goto B4f09a2;
case 0x4f09a7:c.instructions+=3;goto B4f09a7;
case 0x4f09ac:c.instructions+=2;goto B4f09ac;
case 0x4f09ad:c.instructions+=1;goto B4f09ad;
case 0x4f09b2:goto L4f09b2;
case 0x4f09b5:c.instructions+=1;goto B4f09b5;
case 0x4f09ba:goto L4f09ba;
case 0x4f09c0:c.instructions+=1;goto B4f09c0;
case 0x4f09c5:goto L4f09c5;
case 0x4f09ca:goto L4f09ca;
case 0x4f09d0:c.instructions+=1;goto B4f09d0;
case 0x4f09d2:goto L4f09d2;
case 0x4f09d8:c.instructions+=1;goto B4f09d8;
case 0x4f09da:goto L4f09da;
case 0x4f09e0:c.instructions+=1;goto B4f09e0;
case 0x4f09e6:goto L4f09e6;
case 0x4f09e8:c.instructions+=1;goto B4f09e8;
case 0x4f09ed:goto L4f09ed;
case 0x4f09f2:goto L4f09f2;
case 0x4f09f5:c.instructions+=5;goto B4f09f5;
case 0x4f09f7:c.instructions+=4;goto B4f09f7;
case 0x4f09fc:c.instructions+=3;goto B4f09fc;
case 0x4f0a01:c.instructions+=2;goto B4f0a01;
case 0x4f0a02:c.instructions+=1;goto B4f0a02;
case 0x4f0a07:goto L4f0a07;
case 0x4f0a0a:goto L4f0a0a;
case 0x4f0a0d:c.instructions+=2;goto B4f0a0d;
case 0x4f0a0e:c.instructions+=1;goto B4f0a0e;
case 0x4f0a13:goto L4f0a13;
case 0x4f0a18:c.instructions+=1;goto B4f0a18;
case 0x4f0a1d:goto L4f0a1d;
case 0x4f0a20:c.instructions+=2;goto B4f0a20;
case 0x4f0a26:c.instructions+=1;goto B4f0a26;
case 0x4f0a2c:goto L4f0a2c;
case 0x4f0a2f:c.instructions+=5;goto B4f0a2f;
case 0x4f0a31:c.instructions+=4;goto B4f0a31;
case 0x4f0a36:c.instructions+=3;goto B4f0a36;
case 0x4f0a3b:c.instructions+=2;goto B4f0a3b;
case 0x4f0a3c:c.instructions+=1;goto B4f0a3c;
case 0x4f0a41:goto L4f0a41;
case 0x4f0a44:c.instructions+=1;goto B4f0a44;
case 0x4f0a49:goto L4f0a49;
case 0x4f0a4f:c.instructions+=4;goto B4f0a4f;
case 0x4f0a52:c.instructions+=3;goto B4f0a52;
case 0x4f0a53:c.instructions+=2;goto B4f0a53;
case 0x4f0a58:c.instructions+=1;goto B4f0a58;
case 0x4f0a5d:goto L4f0a5d;
case 0x4f0a60:c.instructions+=3;goto B4f0a60;
case 0x4f0a61:c.instructions+=2;goto B4f0a61;
case 0x4f0a66:c.instructions+=1;goto B4f0a66;
case 0x4f0a6b:goto L4f0a6b;
case 0x4f0a70:c.instructions+=1;goto B4f0a70;
case 0x4f0a75:goto L4f0a75;
case 0x4f0a76:c.instructions+=4;goto B4f0a76;
case 0x4f0a7c:c.instructions+=3;goto B4f0a7c;
case 0x4f0a7d:c.instructions+=2;goto B4f0a7d;
case 0x4f0a7e:c.instructions+=1;goto B4f0a7e;
case 0x4f0a83:goto L4f0a83;
case 0x4f0a86:c.instructions+=1;goto B4f0a86;
case 0x4f0a8b:goto L4f0a8b;
case 0x4f0a91:c.instructions+=1;goto B4f0a91;
case 0x4f0a97:goto L4f0a97;
case 0x4f0a9d:goto L4f0a9d;
case 0x4f0aa3:c.instructions+=1;goto B4f0aa3;
case 0x4f0aa5:goto L4f0aa5;
case 0x4f0aab:c.instructions+=1;goto B4f0aab;
case 0x4f0ab1:goto L4f0ab1;
case 0x4f0ab7:c.instructions+=1;goto B4f0ab7;
case 0x4f0abd:goto L4f0abd;
case 0x4f0ac3:c.instructions+=11;goto B4f0ac3;
case 0x4f0ac8:c.instructions+=10;goto B4f0ac8;
case 0x4f0acb:c.instructions+=9;goto B4f0acb;
case 0x4f0ace:c.instructions+=8;goto B4f0ace;
case 0x4f0ad4:c.instructions+=7;goto B4f0ad4;
case 0x4f0ad7:c.instructions+=6;goto B4f0ad7;
case 0x4f0add:c.instructions+=5;goto B4f0add;
case 0x4f0ae0:c.instructions+=4;goto B4f0ae0;
case 0x4f0ae6:c.instructions+=3;goto B4f0ae6;
case 0x4f0aec:c.instructions+=2;goto B4f0aec;
case 0x4f0aee:c.instructions+=1;goto B4f0aee;
case 0x4f0af1:goto L4f0af1;
case 0x4f0af4:c.instructions+=5;goto B4f0af4;
case 0x4f0af7:c.instructions+=4;goto B4f0af7;
case 0x4f0af8:c.instructions+=3;goto B4f0af8;
case 0x4f0af9:c.instructions+=2;goto B4f0af9;
case 0x4f0aff:c.instructions+=1;goto B4f0aff;
case 0x4f0b04:goto L4f0b04;
case 0x4f0b09:goto L4f0b09;
case 0x4f0b10:c.instructions+=1;goto B4f0b10;
case 0x4f0b12:goto L4f0b12;
case 0x4f0b14:c.instructions+=1;goto B4f0b14;
case 0x4f0b19:goto L4f0b19;
case 0x4f0b20:c.instructions+=1;goto B4f0b20;
case 0x4f0b25:goto L4f0b25;
case 0x4f0b2c:c.instructions+=1;goto B4f0b2c;
case 0x4f0b32:goto L4f0b32;
case 0x4f0b35:c.instructions+=4;goto B4f0b35;
case 0x4f0b37:c.instructions+=3;goto B4f0b37;
case 0x4f0b3c:c.instructions+=2;goto B4f0b3c;
case 0x4f0b3d:c.instructions+=1;goto B4f0b3d;
case 0x4f0b42:goto L4f0b42;
case 0x4f0b45:c.instructions+=2;goto B4f0b45;
case 0x4f0b4c:c.instructions+=1;goto B4f0b4c;
case 0x4f0b51:goto L4f0b51;
case 0x4f0b54:c.instructions+=2;goto B4f0b54;
case 0x4f0b5a:c.instructions+=1;goto B4f0b5a;
case 0x4f0b5c:goto L4f0b5c;
case 0x4f0b5f:c.instructions+=6;goto B4f0b5f;
case 0x4f0b61:c.instructions+=5;goto B4f0b61;
case 0x4f0b62:c.instructions+=4;goto B4f0b62;
case 0x4f0b67:c.instructions+=3;goto B4f0b67;
case 0x4f0b6a:c.instructions+=2;goto B4f0b6a;
case 0x4f0b6b:c.instructions+=1;goto B4f0b6b;
case 0x4f0b70:goto L4f0b70;
case 0x4f0b73:c.instructions+=2;goto B4f0b73;
case 0x4f0b75:c.instructions+=1;goto B4f0b75;
case 0x4f0b7a:goto L4f0b7a;
case 0x4f0b7f:goto L4f0b7f;
case 0x4f0b85:c.instructions+=1;goto B4f0b85;
case 0x4f0b87:goto L4f0b87;
case 0x4f0b8d:c.instructions+=3;goto B4f0b8d;
case 0x4f0b90:c.instructions+=2;goto B4f0b90;
case 0x4f0b93:c.instructions+=1;goto B4f0b93;
case 0x4f0b95:goto L4f0b95;
case 0x4f0b9b:c.instructions+=1;goto B4f0b9b;
case 0x4f0b9d:goto L4f0b9d;
case 0x4f0ba3:c.instructions+=6;goto B4f0ba3;
case 0x4f0ba5:c.instructions+=5;goto B4f0ba5;
case 0x4f0ba8:c.instructions+=4;goto B4f0ba8;
case 0x4f0ba9:c.instructions+=3;goto B4f0ba9;
case 0x4f0bac:c.instructions+=2;goto B4f0bac;
case 0x4f0bad:c.instructions+=1;goto B4f0bad;
case 0x4f0bb2:goto L4f0bb2;
case 0x4f0bb5:c.instructions+=2;goto B4f0bb5;
case 0x4f0bb7:c.instructions+=1;goto B4f0bb7;
case 0x4f0bbc:goto L4f0bbc;
case 0x4f0bc1:goto L4f0bc1;
case 0x4f0bc7:c.instructions+=1;goto B4f0bc7;
case 0x4f0bc9:goto L4f0bc9;
case 0x4f0bcc:c.instructions+=6;goto B4f0bcc;
case 0x4f0bce:c.instructions+=5;goto B4f0bce;
case 0x4f0bcf:c.instructions+=4;goto B4f0bcf;
case 0x4f0bd4:c.instructions+=3;goto B4f0bd4;
case 0x4f0bd9:c.instructions+=2;goto B4f0bd9;
case 0x4f0bda:c.instructions+=1;goto B4f0bda;
case 0x4f0bdf:goto L4f0bdf;
case 0x4f0be2:c.instructions+=2;goto B4f0be2;
case 0x4f0be4:c.instructions+=1;goto B4f0be4;
case 0x4f0be9:goto L4f0be9;
case 0x4f0bee:goto L4f0bee;
case 0x4f0bf4:c.instructions+=1;goto B4f0bf4;
case 0x4f0bf6:goto L4f0bf6;
case 0x4f0bfc:c.instructions+=2;goto B4f0bfc;
case 0x4f0bff:c.instructions+=1;goto B4f0bff;
case 0x4f0c05:goto L4f0c05;
case 0x4f0c07:c.instructions+=3;goto B4f0c07;
case 0x4f0c08:c.instructions+=2;goto B4f0c08;
case 0x4f0c09:c.instructions+=1;goto B4f0c09;
case 0x4f0c0e:goto L4f0c0e;
case 0x4f0c11:goto L4f0c11;
case 0x4f0c13:c.instructions+=1;goto B4f0c13;
case 0x4f0c18:goto L4f0c18;
case 0x4f0c1d:goto L4f0c1d;
case 0x4f0c23:c.instructions+=1;goto B4f0c23;
case 0x4f0c25:goto L4f0c25;
case 0x4f0c2b:c.instructions+=1;goto B4f0c2b;
case 0x4f0c2d:goto L4f0c2d;
case 0x4f0c33:c.instructions+=1;goto B4f0c33;
case 0x4f0c35:goto L4f0c35;
case 0x4f0c3a:goto L4f0c3a;
case 0x4f0c41:c.instructions+=4;goto B4f0c41;
case 0x4f0c44:c.instructions+=3;goto B4f0c44;
case 0x4f0c45:c.instructions+=2;goto B4f0c45;
case 0x4f0c4a:c.instructions+=1;goto B4f0c4a;
case 0x4f0c4f:goto L4f0c4f;
case 0x4f0c52:c.instructions+=1;goto B4f0c52;
case 0x4f0c54:goto L4f0c54;
case 0x4f0c57:c.instructions+=2;goto B4f0c57;
case 0x4f0c5c:c.instructions+=1;goto B4f0c5c;
case 0x4f0c61:goto L4f0c61;
case 0x4f0c62:c.instructions+=4;goto B4f0c62;
case 0x4f0c64:c.instructions+=3;goto B4f0c64;
case 0x4f0c69:c.instructions+=2;goto B4f0c69;
case 0x4f0c6e:c.instructions+=1;goto B4f0c6e;
case 0x4f0c70:goto L4f0c70;
case 0x4f0c73:c.instructions+=2;goto B4f0c73;
case 0x4f0c78:c.instructions+=1;goto B4f0c78;
case 0x4f0c7d:goto L4f0c7d;
case 0x4f0c7e:c.instructions+=3;goto B4f0c7e;
case 0x4f0c80:c.instructions+=2;goto B4f0c80;
case 0x4f0c85:c.instructions+=1;goto B4f0c85;
case 0x4f0c8a:goto L4f0c8a;
case 0x4f0c8f:c.instructions+=4;goto B4f0c8f;
case 0x4f0c94:c.instructions+=3;goto B4f0c94;
case 0x4f0c99:c.instructions+=2;goto B4f0c99;
case 0x4f0c9a:c.instructions+=1;goto B4f0c9a;
case 0x4f0c9f:goto L4f0c9f;
case 0x4f0ca2:goto L4f0ca2;
case 0x4f0ca6:c.instructions+=9;goto B4f0ca6;
case 0x4f0caa:c.instructions+=8;goto B4f0caa;
case 0x4f0cac:c.instructions+=7;goto B4f0cac;
case 0x4f0cad:c.instructions+=6;goto B4f0cad;
case 0x4f0cae:c.instructions+=5;goto B4f0cae;
case 0x4f0caf:c.instructions+=4;goto B4f0caf;
case 0x4f0cb5:c.instructions+=3;goto B4f0cb5;
case 0x4f0cb6:c.instructions+=2;goto B4f0cb6;
case 0x4f0cb8:c.instructions+=1;goto B4f0cb8;
case 0x4f0cbd:goto L4f0cbd;
case 0x4f0cbf:c.instructions+=1;goto B4f0cbf;
case 0x4f0cc1:goto L4f0cc1;
case 0x4f0cc6:c.instructions+=2;goto B4f0cc6;
case 0x4f0cc8:c.instructions+=1;goto B4f0cc8;
case 0x4f0cca:goto L4f0cca;
case 0x4f0cd0:c.instructions+=1;goto B4f0cd0;
case 0x4f0cd5:goto L4f0cd5;
case 0x4f0cd6:c.instructions+=5;goto B4f0cd6;
case 0x4f0cd7:c.instructions+=4;goto B4f0cd7;
case 0x4f0cd8:c.instructions+=3;goto B4f0cd8;
case 0x4f0cdf:c.instructions+=2;goto B4f0cdf;
case 0x4f0ce0:c.instructions+=1;goto B4f0ce0;
case 0x4f0ce3:goto L4f0ce3;
case 0x4f0ce6:c.instructions+=1;goto B4f0ce6;
case 0x4f0ce8:goto L4f0ce8;
case 0x4f0cea:c.instructions+=2;goto B4f0cea;
case 0x4f0cec:c.instructions+=1;goto B4f0cec;
case 0x4f0cee:goto L4f0cee;
case 0x4f0cef:c.instructions+=1;goto B4f0cef;
case 0x4f0cf4:goto L4f0cf4;
case 0x4f0cf7:c.instructions+=1;goto B4f0cf7;
case 0x4f0cfd:goto L4f0cfd;
case 0x4f0d00:c.instructions+=10;goto B4f0d00;
case 0x4f0d03:c.instructions+=9;goto B4f0d03;
case 0x4f0d08:c.instructions+=8;goto B4f0d08;
case 0x4f0d0a:c.instructions+=7;goto B4f0d0a;
case 0x4f0d0f:c.instructions+=6;goto B4f0d0f;
case 0x4f0d14:c.instructions+=5;goto B4f0d14;
case 0x4f0d19:c.instructions+=4;goto B4f0d19;
case 0x4f0d1e:c.instructions+=3;goto B4f0d1e;
case 0x4f0d23:c.instructions+=2;goto B4f0d23;
case 0x4f0d24:c.instructions+=1;goto B4f0d24;
case 0x4f0d29:goto L4f0d29;
case 0x4f0d2c:c.instructions+=6;goto B4f0d2c;
case 0x4f0d2e:c.instructions+=5;goto B4f0d2e;
case 0x4f0d2f:c.instructions+=4;goto B4f0d2f;
case 0x4f0d30:c.instructions+=3;goto B4f0d30;
case 0x4f0d31:c.instructions+=2;goto B4f0d31;
case 0x4f0d32:c.instructions+=1;goto B4f0d32;
case 0x4f0d35:goto L4f0d35;
case 0x4f0d37:c.instructions+=1;goto B4f0d37;
case 0x4f0d39:goto L4f0d39;
case 0x4f0d3a:c.instructions+=5;goto B4f0d3a;
case 0x4f0d3b:c.instructions+=4;goto B4f0d3b;
case 0x4f0d3c:c.instructions+=3;goto B4f0d3c;
case 0x4f0d41:c.instructions+=2;goto B4f0d41;
case 0x4f0d42:c.instructions+=1;goto B4f0d42;
case 0x4f0d45:goto L4f0d45;
case 0x4f0d48:c.instructions+=1;goto B4f0d48;
case 0x4f0d4a:goto L4f0d4a;
case 0x4f0d51:c.instructions+=1;goto B4f0d51;
case 0x4f0d53:goto L4f0d53;
case 0x4f0d5a:c.instructions+=1;goto B4f0d5a;
case 0x4f0d5c:goto L4f0d5c;
case 0x4f0d61:goto L4f0d61;
case 0x4f0d67:c.instructions+=2;goto B4f0d67;
case 0x4f0d69:c.instructions+=1;goto B4f0d69;
case 0x4f0d6b:goto L4f0d6b;
case 0x4f0d6e:c.instructions+=3;goto B4f0d6e;
case 0x4f0d6f:c.instructions+=2;goto B4f0d6f;
case 0x4f0d74:c.instructions+=1;goto B4f0d74;
case 0x4f0d79:goto L4f0d79;
case 0x4f0d7c:goto L4f0d7c;
case 0x4f0d7d:c.instructions+=4;goto B4f0d7d;
case 0x4f0d7e:c.instructions+=3;goto B4f0d7e;
case 0x4f0d7f:c.instructions+=2;goto B4f0d7f;
case 0x4f0d80:c.instructions+=1;goto B4f0d80;
case 0x4f0d90:goto L4f0d90;
case 0x4f0d94:c.instructions+=14;goto B4f0d94;
case 0x4f0d95:c.instructions+=13;goto B4f0d95;
case 0x4f0d99:c.instructions+=12;goto B4f0d99;
case 0x4f0d9a:c.instructions+=11;goto B4f0d9a;
case 0x4f0d9e:c.instructions+=10;goto B4f0d9e;
case 0x4f0d9f:c.instructions+=9;goto B4f0d9f;
case 0x4f0da0:c.instructions+=8;goto B4f0da0;
case 0x4f0da2:c.instructions+=7;goto B4f0da2;
case 0x4f0da6:c.instructions+=6;goto B4f0da6;
case 0x4f0da7:c.instructions+=5;goto B4f0da7;
case 0x4f0da8:c.instructions+=4;goto B4f0da8;
case 0x4f0da9:c.instructions+=3;goto B4f0da9;
case 0x4f0daa:c.instructions+=2;goto B4f0daa;
case 0x4f0dac:c.instructions+=1;goto B4f0dac;
case 0x4f0db1:goto L4f0db1;
case 0x4f0db7:c.instructions+=1;goto B4f0db7;
case 0x4f0dbd:goto L4f0dbd;
case 0x4f0dc3:goto L4f0dc3;
case 0x4f0dc9:c.instructions+=1;goto B4f0dc9;
case 0x4f0dcf:goto L4f0dcf;
case 0x4f0dd5:goto L4f0dd5;
case 0x4f0ddb:c.instructions+=1;goto B4f0ddb;
case 0x4f0ddd:goto L4f0ddd;
case 0x4f0de3:c.instructions+=1;goto B4f0de3;
case 0x4f0de9:goto L4f0de9;
case 0x4f0dec:c.instructions+=5;goto B4f0dec;
case 0x4f0dee:c.instructions+=4;goto B4f0dee;
case 0x4f0df3:c.instructions+=3;goto B4f0df3;
case 0x4f0df8:c.instructions+=2;goto B4f0df8;
case 0x4f0df9:c.instructions+=1;goto B4f0df9;
case 0x4f0dfe:goto L4f0dfe;
case 0x4f0e03:goto L4f0e03;
case 0x4f0e0a:c.instructions+=1;goto B4f0e0a;
case 0x4f0e10:goto L4f0e10;
case 0x4f0e15:c.instructions+=1;goto B4f0e15;
case 0x4f0e1a:goto L4f0e1a;
case 0x4f0e1c:c.instructions+=2;goto B4f0e1c;
case 0x4f0e1f:c.instructions+=1;goto B4f0e1f;
case 0x4f0e21:goto L4f0e21;
case 0x4f0e26:c.instructions+=1;goto B4f0e26;
case 0x4f0e2b:goto L4f0e2b;
case 0x4f0e2e:c.instructions+=1;goto B4f0e2e;
case 0x4f0e30:goto L4f0e30;
case 0x4f0e31:c.instructions+=2;goto B4f0e31;
case 0x4f0e36:c.instructions+=1;goto B4f0e36;
case 0x4f0e3b:goto L4f0e3b;
case 0x4f0e3e:c.instructions+=5;goto B4f0e3e;
case 0x4f0e3f:c.instructions+=4;goto B4f0e3f;
case 0x4f0e40:c.instructions+=3;goto B4f0e40;
case 0x4f0e46:c.instructions+=2;goto B4f0e46;
case 0x4f0e47:c.instructions+=1;goto B4f0e47;
case 0x4f0e4c:goto L4f0e4c;
case 0x4f0e4f:c.instructions+=2;goto B4f0e4f;
case 0x4f0e54:c.instructions+=1;goto B4f0e54;
case 0x4f0e59:goto L4f0e59;
case 0x4f0e5a:c.instructions+=6;goto B4f0e5a;
case 0x4f0e5c:c.instructions+=5;goto B4f0e5c;
case 0x4f0e5e:c.instructions+=4;goto B4f0e5e;
case 0x4f0e63:c.instructions+=3;goto B4f0e63;
case 0x4f0e68:c.instructions+=2;goto B4f0e68;
case 0x4f0e69:c.instructions+=1;goto B4f0e69;
case 0x4f0e6e:goto L4f0e6e;
case 0x4f0e71:c.instructions+=1;goto B4f0e71;
case 0x4f0e76:goto L4f0e76;
case 0x4f0e7c:c.instructions+=1;goto B4f0e7c;
case 0x4f0e81:goto L4f0e81;
case 0x4f0e87:c.instructions+=3;goto B4f0e87;
case 0x4f0e88:c.instructions+=2;goto B4f0e88;
case 0x4f0e8d:c.instructions+=1;goto B4f0e8d;
case 0x4f0e92:goto L4f0e92;
case 0x4f0e98:c.instructions+=3;goto B4f0e98;
case 0x4f0e99:c.instructions+=2;goto B4f0e99;
case 0x4f0e9e:c.instructions+=1;goto B4f0e9e;
case 0x4f0ea3:goto L4f0ea3;
case 0x4f0ea8:goto L4f0ea8;
case 0x4f0eae:c.instructions+=1;goto B4f0eae;
case 0x4f0eb4:goto L4f0eb4;
case 0x4f0eb7:c.instructions+=5;goto B4f0eb7;
case 0x4f0eb9:c.instructions+=4;goto B4f0eb9;
case 0x4f0ebe:c.instructions+=3;goto B4f0ebe;
case 0x4f0ec3:c.instructions+=2;goto B4f0ec3;
case 0x4f0ec4:c.instructions+=1;goto B4f0ec4;
case 0x4f0ec9:goto L4f0ec9;
case 0x4f0ece:goto L4f0ece;
case 0x4f0ed0:c.instructions+=1;goto B4f0ed0;
case 0x4f0ed5:goto L4f0ed5;
case 0x4f0eda:goto L4f0eda;
case 0x4f0ee0:c.instructions+=1;goto B4f0ee0;
case 0x4f0ee6:goto L4f0ee6;
case 0x4f0eec:goto L4f0eec;
case 0x4f0ef2:c.instructions+=1;goto B4f0ef2;
case 0x4f0ef4:goto L4f0ef4;
case 0x4f0efa:c.instructions+=1;goto B4f0efa;
case 0x4f0f00:goto L4f0f00;
case 0x4f0f03:c.instructions+=2;goto B4f0f03;
case 0x4f0f08:c.instructions+=1;goto B4f0f08;
case 0x4f0f0d:goto L4f0f0d;
case 0x4f0f0e:c.instructions+=4;goto B4f0f0e;
case 0x4f0f10:c.instructions+=3;goto B4f0f10;
case 0x4f0f15:c.instructions+=2;goto B4f0f15;
case 0x4f0f1a:c.instructions+=1;goto B4f0f1a;
case 0x4f0f1f:goto L4f0f1f;
case 0x4f0f22:c.instructions+=2;goto B4f0f22;
case 0x4f0f28:c.instructions+=1;goto B4f0f28;
case 0x4f0f2a:goto L4f0f2a;
case 0x4f0f2d:c.instructions+=2;goto B4f0f2d;
case 0x4f0f2e:c.instructions+=1;goto B4f0f2e;
case 0x4f0f33:goto L4f0f33;
case 0x4f0f36:c.instructions+=3;goto B4f0f36;
case 0x4f0f38:c.instructions+=2;goto B4f0f38;
case 0x4f0f3d:c.instructions+=1;goto B4f0f3d;
case 0x4f0f3f:goto L4f0f3f;
case 0x4f0f44:c.instructions+=1;goto B4f0f44;
case 0x4f0f49:goto L4f0f49;
case 0x4f0f4e:c.instructions+=1;goto B4f0f4e;
case 0x4f0f53:goto L4f0f53;
case 0x4f0f56:c.instructions+=3;goto B4f0f56;
case 0x4f0f57:c.instructions+=2;goto B4f0f57;
case 0x4f0f59:c.instructions+=1;goto B4f0f59;
case 0x4f0f5e:goto L4f0f5e;
case 0x4f0f60:c.instructions+=1;goto B4f0f60;
case 0x4f0f65:goto L4f0f65;
case 0x4f0f69:c.instructions+=1;goto B4f0f69;
case 0x4f0f6e:goto L4f0f6e;
case 0x4f0f6f:c.instructions+=1;goto B4f0f6f;
case 0x4f0f74:goto L4f0f74;
case 0x4f0f76:c.instructions+=1;goto B4f0f76;
case 0x4f0f7b:goto L4f0f7b;
case 0x4f0f7f:c.instructions+=1;goto B4f0f7f;
case 0x4f0f84:goto L4f0f84;
case 0x4f0f8a:c.instructions+=1;goto B4f0f8a;
case 0x4f0f8c:goto L4f0f8c;
case 0x4f0f8f:c.instructions+=2;goto B4f0f8f;
case 0x4f0f90:c.instructions+=1;goto B4f0f90;
case 0x4f0f95:goto L4f0f95;
case 0x4f0f98:c.instructions+=3;goto B4f0f98;
case 0x4f0f9a:c.instructions+=2;goto B4f0f9a;
case 0x4f0f9f:c.instructions+=1;goto B4f0f9f;
case 0x4f0fa1:goto L4f0fa1;
case 0x4f0fa6:c.instructions+=1;goto B4f0fa6;
case 0x4f0fab:goto L4f0fab;
case 0x4f0fad:goto L4f0fad;
case 0x4f0fae:c.instructions+=1;goto B4f0fae;
case 0x4f0fb3:goto L4f0fb3;
case 0x4f0fb5:c.instructions+=1;goto B4f0fb5;
case 0x4f0fba:goto L4f0fba;
case 0x4f0fbe:c.instructions+=1;goto B4f0fbe;
case 0x4f0fc0:goto L4f0fc0;
case 0x4f0fc3:c.instructions+=2;goto B4f0fc3;
case 0x4f0fc8:c.instructions+=1;goto B4f0fc8;
case 0x4f0fcd:goto L4f0fcd;
case 0x4f0fce:c.instructions+=3;goto B4f0fce;
case 0x4f0fd0:c.instructions+=2;goto B4f0fd0;
case 0x4f0fd5:c.instructions+=1;goto B4f0fd5;
case 0x4f0fda:goto L4f0fda;
case 0x4f0fdf:c.instructions+=4;goto B4f0fdf;
case 0x4f0fe4:c.instructions+=3;goto B4f0fe4;
case 0x4f0fe9:c.instructions+=2;goto B4f0fe9;
case 0x4f0fea:c.instructions+=1;goto B4f0fea;
case 0x4f0fef:goto L4f0fef;
case 0x4f0ff2:c.instructions+=1;goto B4f0ff2;
case 0x4f0ff4:goto L4f0ff4;
case 0x4f0ffa:c.instructions+=1;goto B4f0ffa;
case 0x4f0ffc:goto L4f0ffc;
default:missing_instruction(c.pc);}
B4f0001:L4f0001:{c.instructions+=4;NFSU2_TR(0x4f0001);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f0005:{NFSU2_TR(0x4f0005);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f0007:{NFSU2_TR(0x4f0007);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f000f:{NFSU2_TR(0x4f000f);
if(r1(R+518)){{goto L4f0021;}}
}
B4f0011:L4f0011:{c.instructions+=6;NFSU2_TR(0x4f0011);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f0015:{NFSU2_TR(0x4f0015);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0016:{NFSU2_TR(0x4f0016);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0017:{NFSU2_TR(0x4f0017);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0018:{NFSU2_TR(0x4f0018);
__builtin_memmove((R+4),(R+0),4);
}
B4f001a:{NFSU2_TR(0x4f001a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f001full));
TAIL_STATIC(0x4e3960u,4e3);
}
B4f001f:L4f001f:{c.instructions+=1;NFSU2_TR(0x4f001f);
{goto L4f0023;}
}
B4f0021:L4f0021:{c.instructions+=1;NFSU2_TR(0x4f0021);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f0023:L4f0023:{c.instructions+=7;NFSU2_TR(0x4f0023);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f0027:{NFSU2_TR(0x4f0027);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f0028:{NFSU2_TR(0x4f0028);
__builtin_memmove(gp(0x836370),(R+0),4);
}
B4f002d:{NFSU2_TR(0x4f002d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f002e:{NFSU2_TR(0x4f002e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f0035:{NFSU2_TR(0x4f0035);
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
B4f0038:{NFSU2_TR(0x4f0038);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f0040:L4f0040:{c.instructions+=3;NFSU2_TR(0x4f0040);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0041:{NFSU2_TR(0x4f0041);
__builtin_memmove((R+24),(R+4),4);
}
B4f0043:{NFSU2_TR(0x4f0043);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0048ull));
TAIL_STATIC(0x4e3ba0u,4e3);
}
B4f0048:L4f0048:{c.instructions+=2;NFSU2_TR(0x4f0048);
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
B4f004d:{NFSU2_TR(0x4f004d);
if(r1(R+518)){{goto L4f0058;}}
}
B4f004f:L4f004f:{c.instructions+=2;NFSU2_TR(0x4f004f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0050:{NFSU2_TR(0x4f0050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0055ull));
TAIL_STATIC(0x575630u,575);
}
B4f0055:L4f0055:{c.instructions+=1;NFSU2_TR(0x4f0055);
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
B4f0058:L4f0058:{c.instructions+=3;NFSU2_TR(0x4f0058);
__builtin_memmove((R+0),(R+24),4);
}
B4f005a:{NFSU2_TR(0x4f005a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f005b:{NFSU2_TR(0x4f005b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f0060:L4f0060:{c.instructions+=15;NFSU2_TR(0x4f0060);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f0064:{NFSU2_TR(0x4f0064);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f0068:{NFSU2_TR(0x4f0068);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0069:{NFSU2_TR(0x4f0069);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f006a:{NFSU2_TR(0x4f006a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4f006e:{NFSU2_TR(0x4f006e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f006f:{NFSU2_TR(0x4f006f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0070:{NFSU2_TR(0x4f0070);
__builtin_memmove((R+24),(R+4),4);
}
B4f0072:{NFSU2_TR(0x4f0072);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f0076:{NFSU2_TR(0x4f0076);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0077:{NFSU2_TR(0x4f0077);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0078:{NFSU2_TR(0x4f0078);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0079:{NFSU2_TR(0x4f0079);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f007a:{NFSU2_TR(0x4f007a);
__builtin_memmove((R+4),(R+24),4);
}
B4f007c:{NFSU2_TR(0x4f007c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0081ull));
TAIL_STATIC(0x556020u,556);
}
B4f0081:L4f0081:{c.instructions+=2;NFSU2_TR(0x4f0081);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0xa8de4cd2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xa8de4cd2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xa8de4cd2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f0087:{NFSU2_TR(0x4f0087);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f01b9;}}
}
B4f008d:L4f008d:{c.instructions+=1;NFSU2_TR(0x4f008d);
if(r1(R+518)){{goto L4f0164;}}
}
B4f0093:L4f0093:{c.instructions+=2;NFSU2_TR(0x4f0093);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(U+0))<(u32(0x72619778ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0099:{NFSU2_TR(0x4f0099);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f00ff;}}
}
B4f009b:L4f009b:{c.instructions+=1;NFSU2_TR(0x4f009b);
if(r1(R+518)){{goto L4f00e2;}}
}
B4f009d:L4f009d:{c.instructions+=2;NFSU2_TR(0x4f009d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f00a3:{NFSU2_TR(0x4f00a3);
if(r1(R+518)){{goto L4f00c2;}}
}
B4f00a5:L4f00a5:{c.instructions+=2;NFSU2_TR(0x4f00a5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2c0e485aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f00ab:{NFSU2_TR(0x4f00ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f024e;}}
}
B4f00b1:L4f00b1:{c.instructions+=3;NFSU2_TR(0x4f00b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f00b4:{NFSU2_TR(0x4f00b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f00b5:{NFSU2_TR(0x4f00b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f00baull));
TAIL_STATIC(0x4a0140u,4a0);
}
B4f00ba:L4f00ba:{c.instructions+=2;NFSU2_TR(0x4f00ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f00bd:{NFSU2_TR(0x4f00bd);
{goto L4f024e;}
}
B4f00c2:L4f00c2:{c.instructions+=2;NFSU2_TR(0x4f00c2);
u8 U[4];
w4(U+0,u32(0x144849c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f00c7:{NFSU2_TR(0x4f00c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f00ccull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f00cc:L4f00cc:{c.instructions+=5;NFSU2_TR(0x4f00cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f00cd:{NFSU2_TR(0x4f00cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f00d3:{NFSU2_TR(0x4f00d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f00d4:{NFSU2_TR(0x4f00d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f00d5:{NFSU2_TR(0x4f00d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f00daull));
TAIL_STATIC(0x4cfcb0u,4cf);
}
B4f00da:L4f00da:{c.instructions+=2;NFSU2_TR(0x4f00da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f00dd:{NFSU2_TR(0x4f00dd);
{goto L4f024e;}
}
B4f00e2:L4f00e2:{c.instructions+=6;NFSU2_TR(0x4f00e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f00e5:{NFSU2_TR(0x4f00e5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f00e7:{NFSU2_TR(0x4f00e7);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f00ec:{NFSU2_TR(0x4f00ec);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f00f1:{NFSU2_TR(0x4f00f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f00f2:{NFSU2_TR(0x4f00f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f00f7ull));
TAIL_STATIC(0x537c00u,537);
}
B4f00f7:L4f00f7:{c.instructions+=2;NFSU2_TR(0x4f00f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f00fa:{NFSU2_TR(0x4f00fa);
{goto L4f024e;}
}
B4f00ff:L4f00ff:{c.instructions+=2;NFSU2_TR(0x4f00ff);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0105:{NFSU2_TR(0x4f0105);
if(r1(R+518)){{goto L4f0130;}}
}
B4f0107:L4f0107:{c.instructions+=2;NFSU2_TR(0x4f0107);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f010d:{NFSU2_TR(0x4f010d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f024e;}}
}
B4f0113:L4f0113:{c.instructions+=6;NFSU2_TR(0x4f0113);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f0116:{NFSU2_TR(0x4f0116);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0118:{NFSU2_TR(0x4f0118);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f011d:{NFSU2_TR(0x4f011d);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0122:{NFSU2_TR(0x4f0122);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0123:{NFSU2_TR(0x4f0123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0128ull));
TAIL_STATIC(0x537c00u,537);
}
B4f0128:L4f0128:{c.instructions+=2;NFSU2_TR(0x4f0128);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f012b:{NFSU2_TR(0x4f012b);
{goto L4f024e;}
}
B4f0130:L4f0130:{c.instructions+=3;NFSU2_TR(0x4f0130);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f0133:{NFSU2_TR(0x4f0133);
u8 U[4];
w4(U+0,u32(0xafff7c7aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0138:{NFSU2_TR(0x4f0138);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f013dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f013d:L4f013d:{c.instructions+=4;NFSU2_TR(0x4f013d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f013e:{NFSU2_TR(0x4f013e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0140:{NFSU2_TR(0x4f0140);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0142:{NFSU2_TR(0x4f0142);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0147:L4f0147:{c.instructions+=5;NFSU2_TR(0x4f0147);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f014c:{NFSU2_TR(0x4f014c);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0151:{NFSU2_TR(0x4f0151);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0156:{NFSU2_TR(0x4f0156);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0157:{NFSU2_TR(0x4f0157);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f015cull));
TAIL_STATIC(0x558820u,558);
}
B4f015c:L4f015c:{c.instructions+=2;NFSU2_TR(0x4f015c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4f015f:{NFSU2_TR(0x4f015f);
{goto L4f024e;}
}
B4f0164:L4f0164:{c.instructions+=1;NFSU2_TR(0x4f0164);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0169ull));
TAIL_STATIC(0x5b7c40u,5b7);
}
B4f0169:L4f0169:{c.instructions+=2;NFSU2_TR(0x4f0169);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f016c:{NFSU2_TR(0x4f016c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4f017d;}}
}
B4f016e:L4f016e:{c.instructions+=2;NFSU2_TR(0x4f016e);
s4(0x864f4c,u32(0x1ull));
}
B4f0178:{NFSU2_TR(0x4f0178);
{goto L4f024e;}
}
B4f017d:L4f017d:{c.instructions+=3;NFSU2_TR(0x4f017d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f0180:{NFSU2_TR(0x4f0180);
u8 U[4];
w4(U+0,u32(0x10073c4full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0185:{NFSU2_TR(0x4f0185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f018aull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f018a:L4f018a:{c.instructions+=10;NFSU2_TR(0x4f018a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f018b:{NFSU2_TR(0x4f018b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f018d:{NFSU2_TR(0x4f018d);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0192:{NFSU2_TR(0x4f0192);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0197:{NFSU2_TR(0x4f0197);
u8 U[4];
w4(U+0,u32(0xa8de4cd2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f019c:{NFSU2_TR(0x4f019c);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f01a1:{NFSU2_TR(0x4f01a1);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f01a6:{NFSU2_TR(0x4f01a6);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f01ab:{NFSU2_TR(0x4f01ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f01ac:{NFSU2_TR(0x4f01ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f01b1ull));
TAIL_STATIC(0x558750u,558);
}
B4f01b1:L4f01b1:{c.instructions+=2;NFSU2_TR(0x4f01b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4f01b4:{NFSU2_TR(0x4f01b4);
{goto L4f024e;}
}
B4f01b9:L4f01b9:{c.instructions+=2;NFSU2_TR(0x4f01b9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(U+0))<(u32(0xf6734aafull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xf6734aafull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f01bf:{NFSU2_TR(0x4f01bf);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f0229;}}
}
B4f01c1:L4f01c1:{c.instructions+=1;NFSU2_TR(0x4f01c1);
if(r1(R+518)){{goto L4f020a;}}
}
B4f01c3:L4f01c3:{c.instructions+=2;NFSU2_TR(0x4f01c3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f01c9:{NFSU2_TR(0x4f01c9);
if(r1(R+518)){{goto L4f01f2;}}
}
B4f01cb:L4f01cb:{c.instructions+=2;NFSU2_TR(0x4f01cb);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xf6734aa2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f01d1:{NFSU2_TR(0x4f01d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f024e;}}
}
B4f01d3:L4f01d3:{c.instructions+=3;NFSU2_TR(0x4f01d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f01d6:{NFSU2_TR(0x4f01d6);
u8 U[4];
w4(U+0,u32(0xc5c25c87ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f01db:{NFSU2_TR(0x4f01db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f01e0ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f01e0:L4f01e0:{c.instructions+=5;NFSU2_TR(0x4f01e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f01e1:{NFSU2_TR(0x4f01e1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f01e3:{NFSU2_TR(0x4f01e3);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f01e8:{NFSU2_TR(0x4f01e8);
u8 U[4];
w4(U+0,u32(0xf6734aafull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f01ed:{NFSU2_TR(0x4f01ed);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f0147u);}goto L4f0147;}
}
B4f01f2:L4f01f2:{c.instructions+=3;NFSU2_TR(0x4f01f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x151ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f01f8:{NFSU2_TR(0x4f01f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f01fa:{NFSU2_TR(0x4f01fa);
if(r1(R+518)){{goto L4f024e;}}
}
B4f01fc:L4f01fc:{c.instructions+=3;NFSU2_TR(0x4f01fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f01ff:{NFSU2_TR(0x4f01ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0200:{NFSU2_TR(0x4f0200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0205ull));
TAIL_STATIC(0x4a0140u,4a0);
}
B4f0205:L4f0205:{c.instructions+=2;NFSU2_TR(0x4f0205);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f0208:{NFSU2_TR(0x4f0208);
{goto L4f024e;}
}
B4f020a:L4f020a:{c.instructions+=3;NFSU2_TR(0x4f020a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f020d:{NFSU2_TR(0x4f020d);
u8 U[4];
w4(U+0,u32(0x82ec12c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0212:{NFSU2_TR(0x4f0212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0217ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f0217:L4f0217:{c.instructions+=5;NFSU2_TR(0x4f0217);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0218:{NFSU2_TR(0x4f0218);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f021a:{NFSU2_TR(0x4f021a);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f021f:{NFSU2_TR(0x4f021f);
u8 U[4];
w4(U+0,u32(0xf6734ad3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0224:{NFSU2_TR(0x4f0224);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f0147u);}goto L4f0147;}
}
B4f0229:L4f0229:{c.instructions+=2;NFSU2_TR(0x4f0229);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xf6734ad3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f022f:{NFSU2_TR(0x4f022f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f024e;}}
}
B4f0231:L4f0231:{c.instructions+=1;NFSU2_TR(0x4f0231);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0236ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4f0236:L4f0236:{c.instructions+=5;NFSU2_TR(0x4f0236);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f023d:{NFSU2_TR(0x4f023d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f0240:{NFSU2_TR(0x4f0240);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0241:{NFSU2_TR(0x4f0241);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0246:{NFSU2_TR(0x4f0246);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f024bull));
TAIL_STATIC(0x51ce60u,51c);
}
B4f024b:L4f024b:{c.instructions+=1;NFSU2_TR(0x4f024b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f024e:L4f024e:{c.instructions+=3;NFSU2_TR(0x4f024e);
__builtin_memmove((R+12),gp(0x836370),4);
}
B4f0254:{NFSU2_TR(0x4f0254);
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
B4f0256:{NFSU2_TR(0x4f0256);
if(r1(R+518)){{goto L4f0369;}}
}
B4f025c:L4f025c:{c.instructions+=16;NFSU2_TR(0x4f025c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f025f:{NFSU2_TR(0x4f025f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f0263:{NFSU2_TR(0x4f0263);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f0267:{NFSU2_TR(0x4f0267);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f0269:{NFSU2_TR(0x4f0269);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f026c:{NFSU2_TR(0x4f026c);
__builtin_memmove((R+0),(R+518),1);
}
B4f026f:{NFSU2_TR(0x4f026f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f0275:{NFSU2_TR(0x4f0275);
u8 U[12];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4f0279:{NFSU2_TR(0x4f0279);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f027a:{NFSU2_TR(0x4f027a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f027e:{NFSU2_TR(0x4f027e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f027f:{NFSU2_TR(0x4f027f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0280:{NFSU2_TR(0x4f0280);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0281:{NFSU2_TR(0x4f0281);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0282:{NFSU2_TR(0x4f0282);
__builtin_memmove((R+4),(R+28),4);
}
B4f0284:{NFSU2_TR(0x4f0284);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0289ull));
TAIL_STATIC(0x4efe40u,4ef);
}
B4f0289:L4f0289:{c.instructions+=2;NFSU2_TR(0x4f0289);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f028b:{NFSU2_TR(0x4f028b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4f02ab;}}
}
B4f028d:L4f028d:{c.instructions+=3;NFSU2_TR(0x4f028d);
__builtin_memmove((R+0),gp(0x837b6e),1);
}
B4f0292:{NFSU2_TR(0x4f0292);
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
B4f0294:{NFSU2_TR(0x4f0294);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f029d;}}
}
B4f0296:L4f0296:{c.instructions+=2;NFSU2_TR(0x4f0296);
__builtin_memmove((R+4),(R+12),4);
}
B4f0298:{NFSU2_TR(0x4f0298);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f029dull));
TAIL_STATIC(0x4b9690u,4b9);
}
B4f029d:L4f029d:{c.instructions+=6;NFSU2_TR(0x4f029d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f029e:{NFSU2_TR(0x4f029e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f029f:{NFSU2_TR(0x4f029f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f02a0:{NFSU2_TR(0x4f02a0);
s1(0x837b6e,u8(0x1ull));
}
B4f02a7:{NFSU2_TR(0x4f02a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f02a8:{NFSU2_TR(0x4f02a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f02ab:L4f02ab:{c.instructions+=2;NFSU2_TR(0x4f02ab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f02ae:{NFSU2_TR(0x4f02ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f02fd;}}
}
B4f02b0:L4f02b0:{c.instructions+=3;NFSU2_TR(0x4f02b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f02b2:{NFSU2_TR(0x4f02b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f02b4:{NFSU2_TR(0x4f02b4);
if(r1(R+518)){{goto L4f02c5;}}
}
B4f02b6:L4f02b6:{c.instructions+=2;NFSU2_TR(0x4f02b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f02b7:{NFSU2_TR(0x4f02b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f02bcull));
TAIL_STATIC(0x540a60u,540);
}
B4f02bc:L4f02bc:{c.instructions+=2;NFSU2_TR(0x4f02bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f02bf:{NFSU2_TR(0x4f02bf);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4f02c5:L4f02c5:{c.instructions+=11;NFSU2_TR(0x4f02c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f02c8:{NFSU2_TR(0x4f02c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f02cb:{NFSU2_TR(0x4f02cb);
u8 U[4];
w4(U+0,u32(0x5a6f817full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f02d0:{NFSU2_TR(0x4f02d0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f02d2:{NFSU2_TR(0x4f02d2);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f02d7:{NFSU2_TR(0x4f02d7);
u8 U[4];
w4(U+0,u32(0x73c044ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f02dc:{NFSU2_TR(0x4f02dc);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f02e1:{NFSU2_TR(0x4f02e1);
u8 U[4];
w4(U+0,u32(0x39df715ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f02e6:{NFSU2_TR(0x4f02e6);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f02eb:{NFSU2_TR(0x4f02eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f02ec:{NFSU2_TR(0x4f02ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f02f1ull));
TAIL_STATIC(0x558860u,558);
}
B4f02f1:L4f02f1:{c.instructions+=7;NFSU2_TR(0x4f02f1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f02f4:{NFSU2_TR(0x4f02f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4f02f6:{NFSU2_TR(0x4f02f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f02f7:{NFSU2_TR(0x4f02f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f02f8:{NFSU2_TR(0x4f02f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f02f9:{NFSU2_TR(0x4f02f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f02fa:{NFSU2_TR(0x4f02fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f02fd:L4f02fd:{c.instructions+=2;NFSU2_TR(0x4f02fd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0300:{NFSU2_TR(0x4f0300);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0360;}}
}
B4f0302:L4f0302:{c.instructions+=5;NFSU2_TR(0x4f0302);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4f0308:{NFSU2_TR(0x4f0308);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4f030a:{NFSU2_TR(0x4f030a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f030d:{NFSU2_TR(0x4f030d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f0310:{NFSU2_TR(0x4f0310);
if(r1(R+518)){{goto L4f032a;}}
}
B4f0312:L4f0312:{c.instructions+=3;NFSU2_TR(0x4f0312);
__builtin_memmove((R+4),(R+12),4);
}
B4f0314:{NFSU2_TR(0x4f0314);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f031e:{NFSU2_TR(0x4f031e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0323ull));
TAIL_STATIC(0x4b9690u,4b9);
}
B4f0323:L4f0323:{c.instructions+=5;NFSU2_TR(0x4f0323);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f0324:{NFSU2_TR(0x4f0324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f0325:{NFSU2_TR(0x4f0325);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f0326:{NFSU2_TR(0x4f0326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f0327:{NFSU2_TR(0x4f0327);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f032a:L4f032a:{c.instructions+=2;NFSU2_TR(0x4f032a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x61757468ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x61757468ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x61757468ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f032f:{NFSU2_TR(0x4f032f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0369;}}
}
B4f0331:L4f0331:{c.instructions+=2;NFSU2_TR(0x4f0331);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x696b6579ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x696b6579ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x696b6579ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f0337:{NFSU2_TR(0x4f0337);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0369;}}
}
B4f0339:L4f0339:{c.instructions+=1;NFSU2_TR(0x4f0339);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f033eull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4f033e:L4f033e:{c.instructions+=3;NFSU2_TR(0x4f033e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4f0344:{NFSU2_TR(0x4f0344);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4f0346:{NFSU2_TR(0x4f0346);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0369;}}
}
B4f0348:L4f0348:{c.instructions+=4;NFSU2_TR(0x4f0348);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f034b:{NFSU2_TR(0x4f034b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f034c:{NFSU2_TR(0x4f034c);
u8 U[4];
w4(U+0,u32(0xf6734aa2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0351:{NFSU2_TR(0x4f0351);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0356ull));
TAIL_STATIC(0x51ce60u,51c);
}
B4f0356:L4f0356:{c.instructions+=6;NFSU2_TR(0x4f0356);
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
B4f0359:{NFSU2_TR(0x4f0359);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f035a:{NFSU2_TR(0x4f035a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f035b:{NFSU2_TR(0x4f035b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f035c:{NFSU2_TR(0x4f035c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f035d:{NFSU2_TR(0x4f035d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f0360:L4f0360:{c.instructions+=2;NFSU2_TR(0x4f0360);
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
B4f0362:{NFSU2_TR(0x4f0362);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0369;}}
}
B4f0364:L4f0364:{c.instructions+=1;NFSU2_TR(0x4f0364);
__builtin_memmove(gp(0x837b6e),(R+0),1);
}
B4f0369:L4f0369:{c.instructions+=5;NFSU2_TR(0x4f0369);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f036a:{NFSU2_TR(0x4f036a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f036b:{NFSU2_TR(0x4f036b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f036c:{NFSU2_TR(0x4f036c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f036d:{NFSU2_TR(0x4f036d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f0370:L4f0370:{c.instructions+=16;NFSU2_TR(0x4f0370);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f0374:{NFSU2_TR(0x4f0374);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4f0377:{NFSU2_TR(0x4f0377);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0378:{NFSU2_TR(0x4f0378);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4f037c:{NFSU2_TR(0x4f037c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f037d:{NFSU2_TR(0x4f037d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4f0381:{NFSU2_TR(0x4f0381);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0382:{NFSU2_TR(0x4f0382);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0383:{NFSU2_TR(0x4f0383);
__builtin_memmove((R+24),(R+4),4);
}
B4f0385:{NFSU2_TR(0x4f0385);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f0389:{NFSU2_TR(0x4f0389);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f038a:{NFSU2_TR(0x4f038a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f038b:{NFSU2_TR(0x4f038b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f038c:{NFSU2_TR(0x4f038c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f038d:{NFSU2_TR(0x4f038d);
__builtin_memmove((R+4),(R+24),4);
}
B4f038f:{NFSU2_TR(0x4f038f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0394ull));
TAIL_STATIC(0x556020u,556);
}
B4f0394:L4f0394:{c.instructions+=2;NFSU2_TR(0x4f0394);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f039a:{NFSU2_TR(0x4f039a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f05e7;}}
}
B4f03a0:L4f03a0:{c.instructions+=1;NFSU2_TR(0x4f03a0);
if(r1(R+518)){{goto L4f0655;}}
}
B4f03a6:L4f03a6:{c.instructions+=2;NFSU2_TR(0x4f03a6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x34dc1becull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34dc1becull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f03ac:{NFSU2_TR(0x4f03ac);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f04ad;}}
}
B4f03b2:L4f03b2:{c.instructions+=1;NFSU2_TR(0x4f03b2);
if(r1(R+518)){{goto L4f041b;}}
}
B4f03b4:L4f03b4:{c.instructions+=2;NFSU2_TR(0x4f03b4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f03ba:{NFSU2_TR(0x4f03ba);
if(r1(R+518)){{goto L4f04ea;}}
}
B4f03c0:L4f03c0:{c.instructions+=2;NFSU2_TR(0x4f03c0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2c0e485bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f03c6:{NFSU2_TR(0x4f03c6);
if(r1(R+518)){{goto L4f040a;}}
}
B4f03c8:L4f03c8:{c.instructions+=2;NFSU2_TR(0x4f03c8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x347820baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f03ce:{NFSU2_TR(0x4f03ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f07de;}}
}
B4f03d4:L4f03d4:{c.instructions+=3;NFSU2_TR(0x4f03d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f03d7:{NFSU2_TR(0x4f03d7);
u8 U[4];
w4(U+0,u32(0x10a27a02ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f03dc:{NFSU2_TR(0x4f03dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f03e1ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f03e1:L4f03e1:{c.instructions+=10;NFSU2_TR(0x4f03e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f03e2:{NFSU2_TR(0x4f03e2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f03e4:{NFSU2_TR(0x4f03e4);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f03e6:{NFSU2_TR(0x4f03e6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f03e8:{NFSU2_TR(0x4f03e8);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f03ed:{NFSU2_TR(0x4f03ed);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f03f2:{NFSU2_TR(0x4f03f2);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f03f7:{NFSU2_TR(0x4f03f7);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f03fc:{NFSU2_TR(0x4f03fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f03fd:{NFSU2_TR(0x4f03fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0402ull));
TAIL_STATIC(0x558750u,558);
}
B4f0402:L4f0402:{c.instructions+=2;NFSU2_TR(0x4f0402);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4f0405:{NFSU2_TR(0x4f0405);
{goto L4f07de;}
}
B4f040a:L4f040a:{c.instructions+=3;NFSU2_TR(0x4f040a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f040d:{NFSU2_TR(0x4f040d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f040e:{NFSU2_TR(0x4f040e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0413ull));
TAIL_STATIC(0x4a0140u,4a0);
}
B4f0413:L4f0413:{c.instructions+=2;NFSU2_TR(0x4f0413);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f0416:{NFSU2_TR(0x4f0416);
{goto L4f07de;}
}
B4f041b:L4f041b:{c.instructions+=3;NFSU2_TR(0x4f041b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f041e:{NFSU2_TR(0x4f041e);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4f0425:{NFSU2_TR(0x4f0425);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f07de;}}
}
B4f042b:L4f042b:{c.instructions+=7;NFSU2_TR(0x4f042b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f042c:{NFSU2_TR(0x4f042c);
u8 U[4];
w4(U+0,u32(0x49e150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0431:{NFSU2_TR(0x4f0431);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4cull))));
}
B4f0434:{NFSU2_TR(0x4f0434);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0435:{NFSU2_TR(0x4f0435);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0437:{NFSU2_TR(0x4f0437);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f043e:{NFSU2_TR(0x4f043e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0443ull));
TAIL_STATIC(0x58b940u,58b);
}
B4f0443:L4f0443:{c.instructions+=3;NFSU2_TR(0x4f0443);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f0446:{NFSU2_TR(0x4f0446);
__builtin_memmove((R+4),(R+0),4);
}
B4f0448:{NFSU2_TR(0x4f0448);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f044dull));
TAIL_STATIC(0x587450u,587);
}
B4f044d:L4f044d:{c.instructions+=2;NFSU2_TR(0x4f044d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4f044f:{NFSU2_TR(0x4f044f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4f0482;}}
}
B4f0451:L4f0451:{c.instructions+=4;NFSU2_TR(0x4f0451);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f0454:{NFSU2_TR(0x4f0454);
u8 U[4];
w4(U+0,u32(0x167bcf0bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0459:{NFSU2_TR(0x4f0459);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f0460:{NFSU2_TR(0x4f0460);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0465ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f0465:L4f0465:{c.instructions+=7;NFSU2_TR(0x4f0465);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0466:{NFSU2_TR(0x4f0466);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0468:{NFSU2_TR(0x4f0468);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f046a:{NFSU2_TR(0x4f046a);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f046f:{NFSU2_TR(0x4f046f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0474:{NFSU2_TR(0x4f0474);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0475:{NFSU2_TR(0x4f0475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f047aull));
TAIL_STATIC(0x558540u,558);
}
B4f047a:L4f047a:{c.instructions+=2;NFSU2_TR(0x4f047a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4f047d:{NFSU2_TR(0x4f047d);
{goto L4f07de;}
}
B4f0482:L4f0482:{c.instructions+=4;NFSU2_TR(0x4f0482);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4f0485:{NFSU2_TR(0x4f0485);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0486:{NFSU2_TR(0x4f0486);
u8 U[4];
w4(U+0,u32(0xb709aca9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f048b:{NFSU2_TR(0x4f048b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0490ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f0490:L4f0490:{c.instructions+=5;NFSU2_TR(0x4f0490);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f0493:{NFSU2_TR(0x4f0493);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0494:{NFSU2_TR(0x4f0494);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0499:{NFSU2_TR(0x4f0499);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f049a:{NFSU2_TR(0x4f049a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f049full));
TAIL_STATIC(0x558310u,558);
}
B4f049f:L4f049f:{c.instructions+=3;NFSU2_TR(0x4f049f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f04a2:{NFSU2_TR(0x4f04a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f04a8:{NFSU2_TR(0x4f04a8);
{goto L4f07de;}
}
B4f04ad:L4f04ad:{c.instructions+=2;NFSU2_TR(0x4f04ad);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f04b3:{NFSU2_TR(0x4f04b3);
if(r1(R+518)){{goto L4f0580;}}
}
B4f04b9:L4f04b9:{c.instructions+=2;NFSU2_TR(0x4f04b9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f04bf:{NFSU2_TR(0x4f04bf);
if(r1(R+518)){{goto L4f04ea;}}
}
B4f04c1:L4f04c1:{c.instructions+=2;NFSU2_TR(0x4f04c1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f04c7:{NFSU2_TR(0x4f04c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f07de;}}
}
B4f04cd:L4f04cd:{c.instructions+=6;NFSU2_TR(0x4f04cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f04d0:{NFSU2_TR(0x4f04d0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f04d2:{NFSU2_TR(0x4f04d2);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f04d7:{NFSU2_TR(0x4f04d7);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f04dc:{NFSU2_TR(0x4f04dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f04dd:{NFSU2_TR(0x4f04dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f04e2ull));
TAIL_STATIC(0x537c00u,537);
}
B4f04e2:L4f04e2:{c.instructions+=2;NFSU2_TR(0x4f04e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f04e5:{NFSU2_TR(0x4f04e5);
{goto L4f07de;}
}
B4f04ea:L4f04ea:{c.instructions+=3;NFSU2_TR(0x4f04ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f04ed:{NFSU2_TR(0x4f04ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f04ef:{NFSU2_TR(0x4f04ef);
if(r1(R+518)){{goto L4f07de;}}
}
B4f04f5:L4f04f5:{c.instructions+=3;NFSU2_TR(0x4f04f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4f04fb:{NFSU2_TR(0x4f04fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f04fd:{NFSU2_TR(0x4f04fd);
if(r1(R+518)){{goto L4f07de;}}
}
B4f0503:L4f0503:{c.instructions+=3;NFSU2_TR(0x4f0503);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4f0509:{NFSU2_TR(0x4f0509);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f050b:{NFSU2_TR(0x4f050b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f053f;}}
}
B4f050d:L4f050d:{c.instructions+=4;NFSU2_TR(0x4f050d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f0510:{NFSU2_TR(0x4f0510);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0511:{NFSU2_TR(0x4f0511);
u8 U[4];
w4(U+0,u32(0x1cb0c3fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0516:{NFSU2_TR(0x4f0516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f051bull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f051b:L4f051b:{c.instructions+=6;NFSU2_TR(0x4f051b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f051e:{NFSU2_TR(0x4f051e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f051f:{NFSU2_TR(0x4f051f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f0525:{NFSU2_TR(0x4f0525);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0526:{NFSU2_TR(0x4f0526);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0527:{NFSU2_TR(0x4f0527);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f052cull));
TAIL_STATIC(0x4cfcb0u,4cf);
}
B4f052c:L4f052c:{c.instructions+=4;NFSU2_TR(0x4f052c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f052f:{NFSU2_TR(0x4f052f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0530:{NFSU2_TR(0x4f0530);
w4(R+4,u32(0x850080ull));
}
B4f0535:{NFSU2_TR(0x4f0535);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f053aull));
TAIL_STATIC(0x503260u,503);
}
B4f053a:L4f053a:{c.instructions+=1;NFSU2_TR(0x4f053a);
{goto L4f07de;}
}
B4f053f:L4f053f:{c.instructions+=3;NFSU2_TR(0x4f053f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f0542:{NFSU2_TR(0x4f0542);
u8 U[4];
w4(U+0,u32(0x46527fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0547:{NFSU2_TR(0x4f0547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f054cull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f054c:L4f054c:{c.instructions+=10;NFSU2_TR(0x4f054c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f054d:{NFSU2_TR(0x4f054d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f054f:{NFSU2_TR(0x4f054f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0551:{NFSU2_TR(0x4f0551);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0553:{NFSU2_TR(0x4f0553);
u8 U[4];
w4(U+0,u32(0x347820baull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0558:{NFSU2_TR(0x4f0558);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f055d:{NFSU2_TR(0x4f055d);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0562:{NFSU2_TR(0x4f0562);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0567:{NFSU2_TR(0x4f0567);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0568:{NFSU2_TR(0x4f0568);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f056dull));
TAIL_STATIC(0x558750u,558);
}
B4f056d:L4f056d:{c.instructions+=4;NFSU2_TR(0x4f056d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f0570:{NFSU2_TR(0x4f0570);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0572:{NFSU2_TR(0x4f0572);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0573:{NFSU2_TR(0x4f0573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0578ull));
TAIL_STATIC(0x51de60u,51d);
}
B4f0578:L4f0578:{c.instructions+=2;NFSU2_TR(0x4f0578);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4f057b:{NFSU2_TR(0x4f057b);
{goto L4f07de;}
}
B4f0580:L4f0580:{c.instructions+=3;NFSU2_TR(0x4f0580);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4f0585:{NFSU2_TR(0x4f0585);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4f0589:{NFSU2_TR(0x4f0589);
if(r1(R+518)){{goto L4f05a5;}}
}
B4f058b:L4f058b:{c.instructions+=9;NFSU2_TR(0x4f058b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f058e:{NFSU2_TR(0x4f058e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0590:{NFSU2_TR(0x4f0590);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0592:{NFSU2_TR(0x4f0592);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0594:{NFSU2_TR(0x4f0594);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0596:{NFSU2_TR(0x4f0596);
u8 U[4];
w4(U+0,u32(0x12141ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f059b:{NFSU2_TR(0x4f059b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f059c:{NFSU2_TR(0x4f059c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f059d:{NFSU2_TR(0x4f059d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f05a2ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B4f05a2:L4f05a2:{c.instructions+=1;NFSU2_TR(0x4f05a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4f05a5:L4f05a5:{c.instructions+=2;NFSU2_TR(0x4f05a5);
w4(R+0,u32(0x1ull));
}
B4f05aa:{NFSU2_TR(0x4f05aa);
__builtin_memmove((R+12),(R+12),4);
}
B4f05b0:L4f05b0:{c.instructions+=6;NFSU2_TR(0x4f05b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f05b3:{NFSU2_TR(0x4f05b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f05b4:{NFSU2_TR(0x4f05b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f05b8:{NFSU2_TR(0x4f05b8);
u8 U[4];
w4(U+0,u32(0x796450ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f05bd:{NFSU2_TR(0x4f05bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f05be:{NFSU2_TR(0x4f05be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f05c3ull));
TAIL_STATIC(0x4400d0u,440);
}
B4f05c3:L4f05c3:{c.instructions+=7;NFSU2_TR(0x4f05c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f05c6:{NFSU2_TR(0x4f05c6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f05c8:{NFSU2_TR(0x4f05c8);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f05cd:{NFSU2_TR(0x4f05cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4f05d1:{NFSU2_TR(0x4f05d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f05d2:{NFSU2_TR(0x4f05d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f05d3:{NFSU2_TR(0x4f05d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f05d8ull));
TAIL_STATIC(0x5426c0u,542);
}
B4f05d8:L4f05d8:{c.instructions+=4;NFSU2_TR(0x4f05d8);
__builtin_memmove((R+0),(R+28),4);
}
B4f05da:{NFSU2_TR(0x4f05da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4f05dd:{NFSU2_TR(0x4f05dd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4f05e0:{NFSU2_TR(0x4f05e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f05b0u);}goto L4f05b0;}}
}
B4f05e2:L4f05e2:{c.instructions+=1;NFSU2_TR(0x4f05e2);
{goto L4f07de;}
}
B4f05e7:L4f05e7:{c.instructions+=2;NFSU2_TR(0x4f05e7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0xc98356baull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f05ed:{NFSU2_TR(0x4f05ed);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f06f8;}}
}
B4f05f3:L4f05f3:{c.instructions+=1;NFSU2_TR(0x4f05f3);
if(r1(R+518)){{goto L4f06b5;}}
}
B4f05f9:L4f05f9:{c.instructions+=2;NFSU2_TR(0x4f05f9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f05ff:{NFSU2_TR(0x4f05ff);
if(r1(R+518)){{goto L4f0698;}}
}
B4f0605:L4f0605:{c.instructions+=2;NFSU2_TR(0x4f0605);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaa54bf29ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f060b:{NFSU2_TR(0x4f060b);
if(r1(R+518)){{goto L4f0655;}}
}
B4f060d:L4f060d:{c.instructions+=2;NFSU2_TR(0x4f060d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc519bfc0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0613:{NFSU2_TR(0x4f0613);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f07de;}}
}
B4f0619:L4f0619:{c.instructions+=1;NFSU2_TR(0x4f0619);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f061eull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4f061e:L4f061e:{c.instructions+=3;NFSU2_TR(0x4f061e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0620:{NFSU2_TR(0x4f0620);
__builtin_memmove((R+4),(R+0),4);
}
B4f0622:{NFSU2_TR(0x4f0622);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0627ull));
TAIL_STATIC(0x5822e0u,582);
}
B4f0627:L4f0627:{c.instructions+=2;NFSU2_TR(0x4f0627);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0628:{NFSU2_TR(0x4f0628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f062dull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4f062d:L4f062d:{c.instructions+=3;NFSU2_TR(0x4f062d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f0630:{NFSU2_TR(0x4f0630);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f0632:{NFSU2_TR(0x4f0632);
if(r1(R+518)){{goto L4f07de;}}
}
B4f0638:L4f0638:{c.instructions+=5;NFSU2_TR(0x4f0638);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f063b:{NFSU2_TR(0x4f063b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f063c:{NFSU2_TR(0x4f063c);
u8 U[4];
w4(U+0,u32(0xaf0bbd92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0641:{NFSU2_TR(0x4f0641);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f0648:{NFSU2_TR(0x4f0648);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f064dull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f064d:L4f064d:{c.instructions+=2;NFSU2_TR(0x4f064d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f0650:{NFSU2_TR(0x4f0650);
{goto L4f07de;}
}
B4f0655:L4f0655:{c.instructions+=3;NFSU2_TR(0x4f0655);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f065b:{NFSU2_TR(0x4f065b);
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
B4f065d:{NFSU2_TR(0x4f065d);
if(r1(R+518)){{goto L4f067c;}}
}
B4f065f:L4f065f:{c.instructions+=5;NFSU2_TR(0x4f065f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f0662:{NFSU2_TR(0x4f0662);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0663:{NFSU2_TR(0x4f0663);
u8 U[4];
w4(U+0,u32(0xaf0bbd92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0668:{NFSU2_TR(0x4f0668);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f066f:{NFSU2_TR(0x4f066f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0674ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f0674:L4f0674:{c.instructions+=2;NFSU2_TR(0x4f0674);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f0677:{NFSU2_TR(0x4f0677);
{goto L4f07de;}
}
B4f067c:L4f067c:{c.instructions+=3;NFSU2_TR(0x4f067c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f067e:{NFSU2_TR(0x4f067e);
w4(R+4,u32(0x850080ull));
}
B4f0683:{NFSU2_TR(0x4f0683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0688ull));
TAIL_STATIC(0x5031b0u,503);
}
B4f0688:L4f0688:{c.instructions+=2;NFSU2_TR(0x4f0688);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4f068e:{NFSU2_TR(0x4f068e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0693ull));
TAIL_STATIC(0x4b96f0u,4b9);
}
B4f0693:L4f0693:{c.instructions+=1;NFSU2_TR(0x4f0693);
{goto L4f07de;}
}
B4f0698:L4f0698:{c.instructions+=6;NFSU2_TR(0x4f0698);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f069b:{NFSU2_TR(0x4f069b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f069d:{NFSU2_TR(0x4f069d);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f06a2:{NFSU2_TR(0x4f06a2);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f06a7:{NFSU2_TR(0x4f06a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f06a8:{NFSU2_TR(0x4f06a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f06adull));
TAIL_STATIC(0x537c00u,537);
}
B4f06ad:L4f06ad:{c.instructions+=2;NFSU2_TR(0x4f06ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f06b0:{NFSU2_TR(0x4f06b0);
{goto L4f07de;}
}
B4f06b5:L4f06b5:{c.instructions+=2;NFSU2_TR(0x4f06b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f06b8:{NFSU2_TR(0x4f06b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f06bdull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4f06bd:L4f06bd:{c.instructions+=3;NFSU2_TR(0x4f06bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4f06c3:{NFSU2_TR(0x4f06c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f06c5:{NFSU2_TR(0x4f06c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f06dd;}}
}
B4f06c7:L4f06c7:{c.instructions+=3;NFSU2_TR(0x4f06c7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f06c9:{NFSU2_TR(0x4f06c9);
__builtin_memmove((R+4),(R+0),4);
}
B4f06cb:{NFSU2_TR(0x4f06cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f06d0ull));
TAIL_STATIC(0x5822e0u,582);
}
B4f06d0:L4f06d0:{c.instructions+=2;NFSU2_TR(0x4f06d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f06d1:{NFSU2_TR(0x4f06d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f06d6ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4f06d6:L4f06d6:{c.instructions+=3;NFSU2_TR(0x4f06d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f06d9:{NFSU2_TR(0x4f06d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f06db:{NFSU2_TR(0x4f06db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f06e3;}}
}
B4f06dd:L4f06dd:{c.instructions+=1;NFSU2_TR(0x4f06dd);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffffdfffull))));
}
B4f06e3:L4f06e3:{c.instructions+=5;NFSU2_TR(0x4f06e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f06e6:{NFSU2_TR(0x4f06e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f06e7:{NFSU2_TR(0x4f06e7);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4f06ed:{NFSU2_TR(0x4f06ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f06ee:{NFSU2_TR(0x4f06ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f06f3ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4f06f3:L4f06f3:{c.instructions+=1;NFSU2_TR(0x4f06f3);
{goto L4f07de;}
}
B4f06f8:L4f06f8:{c.instructions+=2;NFSU2_TR(0x4f06f8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc9d30688ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f06fe:{NFSU2_TR(0x4f06fe);
if(r1(R+518)){{goto L4f0840;}}
}
B4f0704:L4f0704:{c.instructions+=2;NFSU2_TR(0x4f0704);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xda5b8712ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f070a:{NFSU2_TR(0x4f070a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f07de;}}
}
B4f0710:L4f0710:{c.instructions+=4;NFSU2_TR(0x4f0710);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f0713:{NFSU2_TR(0x4f0713);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f0716:{NFSU2_TR(0x4f0716);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0717:{NFSU2_TR(0x4f0717);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f071cull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4f071c:L4f071c:{c.instructions+=3;NFSU2_TR(0x4f071c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f071f:{NFSU2_TR(0x4f071f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f0721:{NFSU2_TR(0x4f0721);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0744;}}
}
B4f0723:L4f0723:{c.instructions+=2;NFSU2_TR(0x4f0723);
u8 U[4];
w4(U+0,u32(0x9700a5adull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0728:{NFSU2_TR(0x4f0728);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f072dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f072d:L4f072d:{c.instructions+=4;NFSU2_TR(0x4f072d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f0730:{NFSU2_TR(0x4f0730);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0731:{NFSU2_TR(0x4f0731);
__builtin_memmove((R+4),(R+28),4);
}
B4f0733:{NFSU2_TR(0x4f0733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0738ull));
TAIL_STATIC(0x4957d0u,495);
}
B4f0738:L4f0738:{c.instructions+=3;NFSU2_TR(0x4f0738);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4f073a:{NFSU2_TR(0x4f073a);
__builtin_memmove((R+4),(R+28),4);
}
B4f073c:{NFSU2_TR(0x4f073c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f073full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f073f:L4f073f:{c.instructions+=1;NFSU2_TR(0x4f073f);
{goto L4f07de;}
}
B4f0744:L4f0744:{c.instructions+=4;NFSU2_TR(0x4f0744);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4f0747:{NFSU2_TR(0x4f0747);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0748:{NFSU2_TR(0x4f0748);
u8 U[4];
w4(U+0,u32(0x17828beaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f074d:{NFSU2_TR(0x4f074d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0752ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f0752:L4f0752:{c.instructions+=5;NFSU2_TR(0x4f0752);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f0755:{NFSU2_TR(0x4f0755);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0756:{NFSU2_TR(0x4f0756);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f075b:{NFSU2_TR(0x4f075b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f075c:{NFSU2_TR(0x4f075c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0761ull));
TAIL_STATIC(0x558310u,558);
}
B4f0761:L4f0761:{c.instructions+=7;NFSU2_TR(0x4f0761);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f0764:{NFSU2_TR(0x4f0764);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0765:{NFSU2_TR(0x4f0765);
u8 U[4];
w4(U+0,u32(0x49e060ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f076a:{NFSU2_TR(0x4f076a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f076b:{NFSU2_TR(0x4f076b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f076d:{NFSU2_TR(0x4f076d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f0773:{NFSU2_TR(0x4f0773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0778ull));
TAIL_STATIC(0x58b940u,58b);
}
B4f0778:L4f0778:{c.instructions+=3;NFSU2_TR(0x4f0778);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f077b:{NFSU2_TR(0x4f077b);
__builtin_memmove((R+4),(R+0),4);
}
B4f077d:{NFSU2_TR(0x4f077d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0782ull));
TAIL_STATIC(0x587310u,587);
}
B4f0782:L4f0782:{c.instructions+=2;NFSU2_TR(0x4f0782);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4f0784:{NFSU2_TR(0x4f0784);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4f07da;}}
}
B4f0786:L4f0786:{c.instructions+=3;NFSU2_TR(0x4f0786);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f078c:{NFSU2_TR(0x4f078c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f078d:{NFSU2_TR(0x4f078d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0792ull));
TAIL_STATIC(0x540a60u,540);
}
B4f0792:L4f0792:{c.instructions+=4;NFSU2_TR(0x4f0792);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4f0795:{NFSU2_TR(0x4f0795);
u8 U[4];
w4(U+0,u32(0x150dfd4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f079a:{NFSU2_TR(0x4f079a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f07a4:{NFSU2_TR(0x4f07a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f07a9ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f07a9:L4f07a9:{c.instructions+=7;NFSU2_TR(0x4f07a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f07aa:{NFSU2_TR(0x4f07aa);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f07ac:{NFSU2_TR(0x4f07ac);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f07ae:{NFSU2_TR(0x4f07ae);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f07b3:{NFSU2_TR(0x4f07b3);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f07b8:{NFSU2_TR(0x4f07b8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f07b9:{NFSU2_TR(0x4f07b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f07beull));
TAIL_STATIC(0x558540u,558);
}
B4f07be:L4f07be:{c.instructions+=2;NFSU2_TR(0x4f07be);
u8 U[4];
w4(U+0,u32(0x9700a5adull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f07c3:{NFSU2_TR(0x4f07c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f07c8ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f07c8:L4f07c8:{c.instructions+=4;NFSU2_TR(0x4f07c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4f07cb:{NFSU2_TR(0x4f07cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f07cc:{NFSU2_TR(0x4f07cc);
__builtin_memmove((R+4),(R+28),4);
}
B4f07ce:{NFSU2_TR(0x4f07ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f07d3ull));
TAIL_STATIC(0x4957d0u,495);
}
B4f07d3:L4f07d3:{c.instructions+=3;NFSU2_TR(0x4f07d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4f07d5:{NFSU2_TR(0x4f07d5);
__builtin_memmove((R+4),(R+28),4);
}
B4f07d7:{NFSU2_TR(0x4f07d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f07daull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f07da:L4f07da:{c.instructions+=1;NFSU2_TR(0x4f07da);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4f07de:L4f07de:{c.instructions+=11;NFSU2_TR(0x4f07de);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f07e2:{NFSU2_TR(0x4f07e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f07e6:{NFSU2_TR(0x4f07e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f07ea:{NFSU2_TR(0x4f07ea);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f07ec:{NFSU2_TR(0x4f07ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f07ed:{NFSU2_TR(0x4f07ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f07ee:{NFSU2_TR(0x4f07ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f07ef:{NFSU2_TR(0x4f07ef);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x150ull))));
}
B4f07f5:{NFSU2_TR(0x4f07f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f07f6:{NFSU2_TR(0x4f07f6);
__builtin_memmove((R+4),(R+24),4);
}
B4f07f8:{NFSU2_TR(0x4f07f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f07fdull));
TAIL_STATIC(0x4efe40u,4ef);
}
B4f07fd:L4f07fd:{c.instructions+=2;NFSU2_TR(0x4f07fd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f07ff:{NFSU2_TR(0x4f07ff);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4f087b;}}
}
B4f0801:L4f0801:{c.instructions+=3;NFSU2_TR(0x4f0801);
__builtin_memmove((R+0),gp(0x837b6f),1);
}
B4f0806:{NFSU2_TR(0x4f0806);
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
B4f0808:{NFSU2_TR(0x4f0808);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f082f;}}
}
B4f080a:L4f080a:{c.instructions+=2;NFSU2_TR(0x4f080a);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4f0810:{NFSU2_TR(0x4f0810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0815ull));
TAIL_STATIC(0x4b9690u,4b9);
}
B4f0815:L4f0815:{c.instructions+=3;NFSU2_TR(0x4f0815);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4f081b:{NFSU2_TR(0x4f081b);
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
B4f081d:{NFSU2_TR(0x4f081d);
if(r1(R+518)){{goto L4f0825;}}
}
B4f081f:L4f081f:{c.instructions+=3;NFSU2_TR(0x4f081f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f0821:{NFSU2_TR(0x4f0821);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0823:{NFSU2_TR(0x4f0823);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0825ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4f0825:L4f0825:{c.instructions+=1;NFSU2_TR(0x4f0825);
s4(0x836370,u32(0x0ull));
}
B4f082f:L4f082f:{c.instructions+=7;NFSU2_TR(0x4f082f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f0830:{NFSU2_TR(0x4f0830);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f0831:{NFSU2_TR(0x4f0831);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f0832:{NFSU2_TR(0x4f0832);
s1(0x837b6f,u8(0x1ull));
}
B4f0839:{NFSU2_TR(0x4f0839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f083a:{NFSU2_TR(0x4f083a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f083d:{NFSU2_TR(0x4f083d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f0840:L4f0840:{c.instructions+=3;NFSU2_TR(0x4f0840);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f0843:{NFSU2_TR(0x4f0843);
u8 U[4];
w4(U+0,u32(0x9700a5adull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0848:{NFSU2_TR(0x4f0848);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f084dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f084d:L4f084d:{c.instructions+=5;NFSU2_TR(0x4f084d);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0852:{NFSU2_TR(0x4f0852);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0853:{NFSU2_TR(0x4f0853);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4f0856:{NFSU2_TR(0x4f0856);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0857:{NFSU2_TR(0x4f0857);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f085cull));
TAIL_STATIC(0x43dc00u,43d);
}
B4f085c:L4f085c:{c.instructions+=4;NFSU2_TR(0x4f085c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4f085e:{NFSU2_TR(0x4f085e);
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
B4f0861:{NFSU2_TR(0x4f0861);
__builtin_memmove((R+4),(R+28),4);
}
B4f0863:{NFSU2_TR(0x4f0863);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0866ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f0866:L4f0866:{c.instructions+=4;NFSU2_TR(0x4f0866);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0868:{NFSU2_TR(0x4f0868);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f086d:{NFSU2_TR(0x4f086d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f086e:{NFSU2_TR(0x4f086e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0873ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4f0873:L4f0873:{c.instructions+=2;NFSU2_TR(0x4f0873);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f0876:{NFSU2_TR(0x4f0876);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f07deu);}goto L4f07de;}
}
B4f087b:L4f087b:{c.instructions+=2;NFSU2_TR(0x4f087b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f087e:{NFSU2_TR(0x4f087e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f08c1;}}
}
B4f0880:L4f0880:{c.instructions+=3;NFSU2_TR(0x4f0880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f0882:{NFSU2_TR(0x4f0882);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f0884:{NFSU2_TR(0x4f0884);
if(r1(R+518)){{goto L4f0895;}}
}
B4f0886:L4f0886:{c.instructions+=2;NFSU2_TR(0x4f0886);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0887:{NFSU2_TR(0x4f0887);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f088cull));
TAIL_STATIC(0x540a60u,540);
}
B4f088c:L4f088c:{c.instructions+=2;NFSU2_TR(0x4f088c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f088f:{NFSU2_TR(0x4f088f);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4f0895:L4f0895:{c.instructions+=8;NFSU2_TR(0x4f0895);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f0898:{NFSU2_TR(0x4f0898);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f089b:{NFSU2_TR(0x4f089b);
u8 U[4];
w4(U+0,u32(0xb368b7a5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f08a0:{NFSU2_TR(0x4f08a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f08a2:{NFSU2_TR(0x4f08a2);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f08a7:{NFSU2_TR(0x4f08a7);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f08ac:{NFSU2_TR(0x4f08ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f08ad:{NFSU2_TR(0x4f08ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f08b2ull));
TAIL_STATIC(0x558610u,558);
}
B4f08b2:L4f08b2:{c.instructions+=8;NFSU2_TR(0x4f08b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4f08b5:{NFSU2_TR(0x4f08b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f08b6:{NFSU2_TR(0x4f08b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f08b8:{NFSU2_TR(0x4f08b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f08b9:{NFSU2_TR(0x4f08b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f08ba:{NFSU2_TR(0x4f08ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f08bb:{NFSU2_TR(0x4f08bb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f08be:{NFSU2_TR(0x4f08be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f08c1:L4f08c1:{c.instructions+=2;NFSU2_TR(0x4f08c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f08c3:{NFSU2_TR(0x4f08c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f08ca;}}
}
B4f08c5:L4f08c5:{c.instructions+=1;NFSU2_TR(0x4f08c5);
__builtin_memmove(gp(0x837b6f),(R+0),1);
}
B4f08ca:L4f08ca:{c.instructions+=6;NFSU2_TR(0x4f08ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f08cb:{NFSU2_TR(0x4f08cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f08cc:{NFSU2_TR(0x4f08cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f08cd:{NFSU2_TR(0x4f08cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f08ce:{NFSU2_TR(0x4f08ce);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f08d1:{NFSU2_TR(0x4f08d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f08e0:L4f08e0:{c.instructions+=15;NFSU2_TR(0x4f08e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f08e4:{NFSU2_TR(0x4f08e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f08e5:{NFSU2_TR(0x4f08e5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4f08e9:{NFSU2_TR(0x4f08e9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f08ea:{NFSU2_TR(0x4f08ea);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4f08ee:{NFSU2_TR(0x4f08ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f08ef:{NFSU2_TR(0x4f08ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f08f0:{NFSU2_TR(0x4f08f0);
__builtin_memmove((R+24),(R+4),4);
}
B4f08f2:{NFSU2_TR(0x4f08f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f08f6:{NFSU2_TR(0x4f08f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f08f7:{NFSU2_TR(0x4f08f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f08f8:{NFSU2_TR(0x4f08f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f08f9:{NFSU2_TR(0x4f08f9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f08fa:{NFSU2_TR(0x4f08fa);
__builtin_memmove((R+4),(R+24),4);
}
B4f08fc:{NFSU2_TR(0x4f08fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0901ull));
TAIL_STATIC(0x556020u,556);
}
B4f0901:L4f0901:{c.instructions+=2;NFSU2_TR(0x4f0901);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(U+0))<(u32(0xb34a760full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb34a760full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0907:{NFSU2_TR(0x4f0907);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f0a8b;}}
}
B4f090d:L4f090d:{c.instructions+=1;NFSU2_TR(0x4f090d);
if(r1(R+518)){{goto L4f0a49;}}
}
B4f0913:L4f0913:{c.instructions+=2;NFSU2_TR(0x4f0913);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x904aca43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x904aca43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x904aca43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f0919:{NFSU2_TR(0x4f0919);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f09ca;}}
}
B4f091f:L4f091f:{c.instructions+=1;NFSU2_TR(0x4f091f);
if(r1(R+518)){{goto L4f09ba;}}
}
B4f0925:L4f0925:{c.instructions+=2;NFSU2_TR(0x4f0925);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f092b:{NFSU2_TR(0x4f092b);
if(r1(R+518)){{goto L4f0952;}}
}
B4f092d:L4f092d:{c.instructions+=2;NFSU2_TR(0x4f092d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3098bf25ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0933:{NFSU2_TR(0x4f0933);
if(r1(R+518)){{goto L4f0946;}}
}
B4f0935:L4f0935:{c.instructions+=2;NFSU2_TR(0x4f0935);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f093b:{NFSU2_TR(0x4f093b);
if(r1(R+518)){{goto L4f0a0a;}}
}
B4f0941:L4f0941:{c.instructions+=1;NFSU2_TR(0x4f0941);
{goto L4f0ca2;}
}
B4f0946:L4f0946:{c.instructions+=2;NFSU2_TR(0x4f0946);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f094d:{NFSU2_TR(0x4f094d);
{goto L4f0ca2;}
}
B4f0952:L4f0952:{c.instructions+=3;NFSU2_TR(0x4f0952);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f0958:{NFSU2_TR(0x4f0958);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f095a:{NFSU2_TR(0x4f095a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0ca2;}}
}
B4f0960:L4f0960:{c.instructions+=2;NFSU2_TR(0x4f0960);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xd79b07a0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4f0967:{NFSU2_TR(0x4f0967);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0ca2;}}
}
B4f096d:L4f096d:{c.instructions+=3;NFSU2_TR(0x4f096d);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4f0973:{NFSU2_TR(0x4f0973);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B4f0976:{NFSU2_TR(0x4f0976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f097bull));
TAIL_STATIC(0x495960u,495);
}
B4f097b:L4f097b:{c.instructions+=2;NFSU2_TR(0x4f097b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f097d:{NFSU2_TR(0x4f097d);
if(r1(R+518)){{goto L4f0992;}}
}
B4f097f:L4f097f:{c.instructions+=3;NFSU2_TR(0x4f097f);
__builtin_memmove((R+4),(R+24),4);
}
B4f0981:{NFSU2_TR(0x4f0981);
s1(0x836376,u8(0x0ull));
}
B4f0988:{NFSU2_TR(0x4f0988);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f098dull));
TAIL_STATIC(0x49e3b0u,49e);
}
B4f098d:L4f098d:{c.instructions+=1;NFSU2_TR(0x4f098d);
{goto L4f0ca2;}
}
B4f0992:L4f0992:{c.instructions+=3;NFSU2_TR(0x4f0992);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f0995:{NFSU2_TR(0x4f0995);
u8 U[4];
w4(U+0,u32(0xa5cf4291ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f099a:{NFSU2_TR(0x4f099a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f099full));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f099f:L4f099f:{c.instructions+=6;NFSU2_TR(0x4f099f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f09a0:{NFSU2_TR(0x4f09a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f09a2:{NFSU2_TR(0x4f09a2);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f09a7:{NFSU2_TR(0x4f09a7);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f09ac:{NFSU2_TR(0x4f09ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f09ad:{NFSU2_TR(0x4f09ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f09b2ull));
TAIL_STATIC(0x5585e0u,558);
}
B4f09b2:L4f09b2:{c.instructions+=2;NFSU2_TR(0x4f09b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4f09b5:{NFSU2_TR(0x4f09b5);
{goto L4f0ca2;}
}
B4f09ba:L4f09ba:{c.instructions+=2;NFSU2_TR(0x4f09ba);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4f09c0:{NFSU2_TR(0x4f09c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f09c5ull));
TAIL_STATIC(0x4b96f0u,4b9);
}
B4f09c5:L4f09c5:{c.instructions+=1;NFSU2_TR(0x4f09c5);
{goto L4f0ca2;}
}
B4f09ca:L4f09ca:{c.instructions+=2;NFSU2_TR(0x4f09ca);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x911ab364ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f09d0:{NFSU2_TR(0x4f09d0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f09bau);}goto L4f09ba;}}
}
B4f09d2:L4f09d2:{c.instructions+=2;NFSU2_TR(0x4f09d2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f09d8:{NFSU2_TR(0x4f09d8);
if(r1(R+518)){{goto L4f09f2;}}
}
B4f09da:L4f09da:{c.instructions+=2;NFSU2_TR(0x4f09da);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xa365b3d5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f09e0:{NFSU2_TR(0x4f09e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0ca2;}}
}
B4f09e6:L4f09e6:{c.instructions+=2;NFSU2_TR(0x4f09e6);
__builtin_memmove((R+4),(R+24),4);
}
B4f09e8:{NFSU2_TR(0x4f09e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f09edull));
TAIL_STATIC(0x4ba840u,4ba);
}
B4f09ed:L4f09ed:{c.instructions+=1;NFSU2_TR(0x4f09ed);
{goto L4f0ca2;}
}
B4f09f2:L4f09f2:{c.instructions+=6;NFSU2_TR(0x4f09f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f09f5:{NFSU2_TR(0x4f09f5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f09f7:{NFSU2_TR(0x4f09f7);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f09fc:{NFSU2_TR(0x4f09fc);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0a01:{NFSU2_TR(0x4f0a01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0a02:{NFSU2_TR(0x4f0a02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0a07ull));
TAIL_STATIC(0x537c00u,537);
}
B4f0a07:L4f0a07:{c.instructions+=1;NFSU2_TR(0x4f0a07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f0a0a:L4f0a0a:{c.instructions+=3;NFSU2_TR(0x4f0a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f0a0d:{NFSU2_TR(0x4f0a0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0a0e:{NFSU2_TR(0x4f0a0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0a13ull));
TAIL_STATIC(0x51cd60u,51c);
}
B4f0a13:L4f0a13:{c.instructions+=2;NFSU2_TR(0x4f0a13);
u8 U[4];
w4(U+0,u32(0x798070ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0a18:{NFSU2_TR(0x4f0a18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0a1dull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4f0a1d:L4f0a1d:{c.instructions+=3;NFSU2_TR(0x4f0a1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f0a20:{NFSU2_TR(0x4f0a20);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0a26:{NFSU2_TR(0x4f0a26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0ca2;}}
}
B4f0a2c:L4f0a2c:{c.instructions+=6;NFSU2_TR(0x4f0a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f0a2f:{NFSU2_TR(0x4f0a2f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0a31:{NFSU2_TR(0x4f0a31);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0a36:{NFSU2_TR(0x4f0a36);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0a3b:{NFSU2_TR(0x4f0a3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0a3c:{NFSU2_TR(0x4f0a3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0a41ull));
TAIL_STATIC(0x537c00u,537);
}
B4f0a41:L4f0a41:{c.instructions+=2;NFSU2_TR(0x4f0a41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f0a44:{NFSU2_TR(0x4f0a44);
{goto L4f0ca2;}
}
B4f0a49:L4f0a49:{c.instructions+=5;NFSU2_TR(0x4f0a49);
__builtin_memmove((R+28),gp(0x836370),4);
}
B4f0a4f:{NFSU2_TR(0x4f0a4f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B4f0a52:{NFSU2_TR(0x4f0a52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0a53:{NFSU2_TR(0x4f0a53);
w4(R+4,u32(0x850080ull));
}
B4f0a58:{NFSU2_TR(0x4f0a58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0a5dull));
TAIL_STATIC(0x503230u,503);
}
B4f0a5d:L4f0a5d:{c.instructions+=4;NFSU2_TR(0x4f0a5d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B4f0a60:{NFSU2_TR(0x4f0a60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0a61:{NFSU2_TR(0x4f0a61);
w4(R+4,u32(0x850080ull));
}
B4f0a66:{NFSU2_TR(0x4f0a66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0a6bull));
TAIL_STATIC(0x503290u,503);
}
B4f0a6b:L4f0a6b:{c.instructions+=2;NFSU2_TR(0x4f0a6b);
u8 U[4];
w4(U+0,u32(0x144849c1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0a70:{NFSU2_TR(0x4f0a70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0a75ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f0a75:L4f0a75:{c.instructions+=5;NFSU2_TR(0x4f0a75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0a76:{NFSU2_TR(0x4f0a76);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4f0a7c:{NFSU2_TR(0x4f0a7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0a7d:{NFSU2_TR(0x4f0a7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0a7e:{NFSU2_TR(0x4f0a7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0a83ull));
TAIL_STATIC(0x4cfcb0u,4cf);
}
B4f0a83:L4f0a83:{c.instructions+=2;NFSU2_TR(0x4f0a83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f0a86:{NFSU2_TR(0x4f0a86);
{goto L4f0ca2;}
}
B4f0a8b:L4f0a8b:{c.instructions+=2;NFSU2_TR(0x4f0a8b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(U+0))<(u32(0xda5b8712ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xda5b8712ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0a91:{NFSU2_TR(0x4f0a91);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f0c1d;}}
}
B4f0a97:L4f0a97:{c.instructions+=1;NFSU2_TR(0x4f0a97);
if(r1(R+518)){{goto L4f0b51;}}
}
B4f0a9d:L4f0a9d:{c.instructions+=2;NFSU2_TR(0x4f0a9d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0aa3:{NFSU2_TR(0x4f0aa3);
if(r1(R+518)){{goto L4f0b09;}}
}
B4f0aa5:L4f0aa5:{c.instructions+=2;NFSU2_TR(0x4f0aa5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc9d30688ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0aab:{NFSU2_TR(0x4f0aab);
if(r1(R+518)){{goto L4f0c11;}}
}
B4f0ab1:L4f0ab1:{c.instructions+=2;NFSU2_TR(0x4f0ab1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xda52af6bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0ab7:{NFSU2_TR(0x4f0ab7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0ca2;}}
}
B4f0abd:L4f0abd:{c.instructions+=12;NFSU2_TR(0x4f0abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f0ac3:{NFSU2_TR(0x4f0ac3);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4f0ac8:{NFSU2_TR(0x4f0ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f0acb:{NFSU2_TR(0x4f0acb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f0ace:{NFSU2_TR(0x4f0ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f0ad4:{NFSU2_TR(0x4f0ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f0ad7:{NFSU2_TR(0x4f0ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f0add:{NFSU2_TR(0x4f0add);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f0ae0:{NFSU2_TR(0x4f0ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f0ae6:{NFSU2_TR(0x4f0ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f0aec:{NFSU2_TR(0x4f0aec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4f0aee:{NFSU2_TR(0x4f0aee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0af1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f0af1:L4f0af1:{c.instructions+=6;NFSU2_TR(0x4f0af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f0af4:{NFSU2_TR(0x4f0af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f0af7:{NFSU2_TR(0x4f0af7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0af8:{NFSU2_TR(0x4f0af8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0af9:{NFSU2_TR(0x4f0af9);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4f0aff:{NFSU2_TR(0x4f0aff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0b04ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4f0b04:L4f0b04:{c.instructions+=1;NFSU2_TR(0x4f0b04);
{goto L4f0ca2;}
}
B4f0b09:L4f0b09:{c.instructions+=2;NFSU2_TR(0x4f0b09);
u8 U[2];
__builtin_memmove((U+0),gp(0x836374),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4f0b10:{NFSU2_TR(0x4f0b10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0b25;}}
}
B4f0b12:L4f0b12:{c.instructions+=2;NFSU2_TR(0x4f0b12);
__builtin_memmove((R+4),(R+24),4);
}
B4f0b14:{NFSU2_TR(0x4f0b14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0b19ull));
TAIL_STATIC(0x49e3b0u,49e);
}
B4f0b19:L4f0b19:{c.instructions+=2;NFSU2_TR(0x4f0b19);
s1(0x836374,u8(0x0ull));
}
B4f0b20:{NFSU2_TR(0x4f0b20);
{goto L4f0ca2;}
}
B4f0b25:L4f0b25:{c.instructions+=2;NFSU2_TR(0x4f0b25);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4f0b2c:{NFSU2_TR(0x4f0b2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0ca2;}}
}
B4f0b32:L4f0b32:{c.instructions+=5;NFSU2_TR(0x4f0b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f0b35:{NFSU2_TR(0x4f0b35);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0b37:{NFSU2_TR(0x4f0b37);
u8 U[4];
w4(U+0,u32(0x78fe04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0b3c:{NFSU2_TR(0x4f0b3c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0b3d:{NFSU2_TR(0x4f0b3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0b42ull));
TAIL_STATIC(0x537980u,537);
}
B4f0b42:L4f0b42:{c.instructions+=3;NFSU2_TR(0x4f0b42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f0b45:{NFSU2_TR(0x4f0b45);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f0b4c:{NFSU2_TR(0x4f0b4c);
{goto L4f0ca2;}
}
B4f0b51:L4f0b51:{c.instructions+=3;NFSU2_TR(0x4f0b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f0b54:{NFSU2_TR(0x4f0b54);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4f0b5a:{NFSU2_TR(0x4f0b5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0b7f;}}
}
B4f0b5c:L4f0b5c:{c.instructions+=7;NFSU2_TR(0x4f0b5c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
}
B4f0b5f:{NFSU2_TR(0x4f0b5f);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0b61:{NFSU2_TR(0x4f0b61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0b62:{NFSU2_TR(0x4f0b62);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4f0b67:{NFSU2_TR(0x4f0b67);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B4f0b6a:{NFSU2_TR(0x4f0b6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0b6b:{NFSU2_TR(0x4f0b6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0b70ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4f0b70:L4f0b70:{c.instructions+=3;NFSU2_TR(0x4f0b70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f0b73:{NFSU2_TR(0x4f0b73);
__builtin_memmove((R+4),(R+24),4);
}
B4f0b75:{NFSU2_TR(0x4f0b75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0b7aull));
TAIL_STATIC(0x51ff40u,51f);
}
B4f0b7a:L4f0b7a:{c.instructions+=1;NFSU2_TR(0x4f0b7a);
{goto L4f0ca2;}
}
B4f0b7f:L4f0b7f:{c.instructions+=2;NFSU2_TR(0x4f0b7f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4f0b85:{NFSU2_TR(0x4f0b85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0b95;}}
}
B4f0b87:L4f0b87:{c.instructions+=4;NFSU2_TR(0x4f0b87);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4f0b8d:{NFSU2_TR(0x4f0b8d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
}
B4f0b90:{NFSU2_TR(0x4f0b90);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x48ull))));
}
B4f0b93:{NFSU2_TR(0x4f0b93);
{goto L4f0c05;}
}
B4f0b95:L4f0b95:{c.instructions+=2;NFSU2_TR(0x4f0b95);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4f0b9b:{NFSU2_TR(0x4f0b9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0bc1;}}
}
B4f0b9d:L4f0b9d:{c.instructions+=7;NFSU2_TR(0x4f0b9d);
__builtin_memmove((R+8),gp(0x836370),4);
}
B4f0ba3:{NFSU2_TR(0x4f0ba3);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0ba5:{NFSU2_TR(0x4f0ba5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
}
B4f0ba8:{NFSU2_TR(0x4f0ba8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0ba9:{NFSU2_TR(0x4f0ba9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x68ull))));
}
B4f0bac:{NFSU2_TR(0x4f0bac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0bad:{NFSU2_TR(0x4f0bad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0bb2ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4f0bb2:L4f0bb2:{c.instructions+=3;NFSU2_TR(0x4f0bb2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f0bb5:{NFSU2_TR(0x4f0bb5);
__builtin_memmove((R+4),(R+24),4);
}
B4f0bb7:{NFSU2_TR(0x4f0bb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0bbcull));
TAIL_STATIC(0x51ff40u,51f);
}
B4f0bbc:L4f0bbc:{c.instructions+=1;NFSU2_TR(0x4f0bbc);
{goto L4f0ca2;}
}
B4f0bc1:L4f0bc1:{c.instructions+=2;NFSU2_TR(0x4f0bc1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4f0bc7:{NFSU2_TR(0x4f0bc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0bee;}}
}
B4f0bc9:L4f0bc9:{c.instructions+=7;NFSU2_TR(0x4f0bc9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
}
B4f0bcc:{NFSU2_TR(0x4f0bcc);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0bce:{NFSU2_TR(0x4f0bce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0bcf:{NFSU2_TR(0x4f0bcf);
__builtin_memmove((R+0),gp(0x836370),4);
}
B4f0bd4:{NFSU2_TR(0x4f0bd4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
}
B4f0bd9:{NFSU2_TR(0x4f0bd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0bda:{NFSU2_TR(0x4f0bda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0bdfull));
TAIL_STATIC(0x43dc00u,43d);
}
B4f0bdf:L4f0bdf:{c.instructions+=3;NFSU2_TR(0x4f0bdf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f0be2:{NFSU2_TR(0x4f0be2);
__builtin_memmove((R+4),(R+24),4);
}
B4f0be4:{NFSU2_TR(0x4f0be4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0be9ull));
TAIL_STATIC(0x51ff40u,51f);
}
B4f0be9:L4f0be9:{c.instructions+=1;NFSU2_TR(0x4f0be9);
{goto L4f0ca2;}
}
B4f0bee:L4f0bee:{c.instructions+=2;NFSU2_TR(0x4f0bee);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4f0bf4:{NFSU2_TR(0x4f0bf4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0c11;}}
}
B4f0bf6:L4f0bf6:{c.instructions+=3;NFSU2_TR(0x4f0bf6);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4f0bfc:{NFSU2_TR(0x4f0bfc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
}
B4f0bff:{NFSU2_TR(0x4f0bff);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x108ull))));
}
B4f0c05:L4f0c05:{c.instructions+=4;NFSU2_TR(0x4f0c05);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c07:{NFSU2_TR(0x4f0c07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c08:{NFSU2_TR(0x4f0c08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c09:{NFSU2_TR(0x4f0c09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0c0eull));
TAIL_STATIC(0x43dc00u,43d);
}
B4f0c0e:L4f0c0e:{c.instructions+=1;NFSU2_TR(0x4f0c0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f0c11:L4f0c11:{c.instructions+=2;NFSU2_TR(0x4f0c11);
__builtin_memmove((R+4),(R+24),4);
}
B4f0c13:{NFSU2_TR(0x4f0c13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0c18ull));
TAIL_STATIC(0x51ff40u,51f);
}
B4f0c18:L4f0c18:{c.instructions+=1;NFSU2_TR(0x4f0c18);
{goto L4f0ca2;}
}
B4f0c1d:L4f0c1d:{c.instructions+=2;NFSU2_TR(0x4f0c1d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xf6734aa2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0c23:{NFSU2_TR(0x4f0c23);
if(r1(R+518)){{goto L4f0c70;}}
}
B4f0c25:L4f0c25:{c.instructions+=2;NFSU2_TR(0x4f0c25);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xf6734aafull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0c2b:{NFSU2_TR(0x4f0c2b);
if(r1(R+518)){{goto L4f0c54;}}
}
B4f0c2d:L4f0c2d:{c.instructions+=2;NFSU2_TR(0x4f0c2d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xf6734ad3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0c33:{NFSU2_TR(0x4f0c33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0ca2;}}
}
B4f0c35:L4f0c35:{c.instructions+=1;NFSU2_TR(0x4f0c35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0c3aull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4f0c3a:L4f0c3a:{c.instructions+=5;NFSU2_TR(0x4f0c3a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f0c41:{NFSU2_TR(0x4f0c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f0c44:{NFSU2_TR(0x4f0c44);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c45:{NFSU2_TR(0x4f0c45);
u8 U[4];
w4(U+0,u32(0xb34a760full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c4a:{NFSU2_TR(0x4f0c4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0c4full));
TAIL_STATIC(0x51ce60u,51c);
}
B4f0c4f:L4f0c4f:{c.instructions+=2;NFSU2_TR(0x4f0c4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f0c52:{NFSU2_TR(0x4f0c52);
{goto L4f0ca2;}
}
B4f0c54:L4f0c54:{c.instructions+=3;NFSU2_TR(0x4f0c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f0c57:{NFSU2_TR(0x4f0c57);
u8 U[4];
w4(U+0,u32(0x82ec12c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c5c:{NFSU2_TR(0x4f0c5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0c61ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f0c61:L4f0c61:{c.instructions+=5;NFSU2_TR(0x4f0c61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c62:{NFSU2_TR(0x4f0c62);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c64:{NFSU2_TR(0x4f0c64);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c69:{NFSU2_TR(0x4f0c69);
u8 U[4];
w4(U+0,u32(0xf6734ad3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c6e:{NFSU2_TR(0x4f0c6e);
{goto L4f0c8a;}
}
B4f0c70:L4f0c70:{c.instructions+=3;NFSU2_TR(0x4f0c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f0c73:{NFSU2_TR(0x4f0c73);
u8 U[4];
w4(U+0,u32(0xc5c25c87ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c78:{NFSU2_TR(0x4f0c78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0c7dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f0c7d:L4f0c7d:{c.instructions+=4;NFSU2_TR(0x4f0c7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c7e:{NFSU2_TR(0x4f0c7e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c80:{NFSU2_TR(0x4f0c80);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c85:{NFSU2_TR(0x4f0c85);
u8 U[4];
w4(U+0,u32(0xf6734aafull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c8a:L4f0c8a:{c.instructions+=5;NFSU2_TR(0x4f0c8a);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c8f:{NFSU2_TR(0x4f0c8f);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c94:{NFSU2_TR(0x4f0c94);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c99:{NFSU2_TR(0x4f0c99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0c9a:{NFSU2_TR(0x4f0c9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0c9full));
TAIL_STATIC(0x558820u,558);
}
B4f0c9f:L4f0c9f:{c.instructions+=1;NFSU2_TR(0x4f0c9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4f0ca2:L4f0ca2:{c.instructions+=10;NFSU2_TR(0x4f0ca2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f0ca6:{NFSU2_TR(0x4f0ca6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f0caa:{NFSU2_TR(0x4f0caa);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0cac:{NFSU2_TR(0x4f0cac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0cad:{NFSU2_TR(0x4f0cad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0cae:{NFSU2_TR(0x4f0cae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0caf:{NFSU2_TR(0x4f0caf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f0cb5:{NFSU2_TR(0x4f0cb5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0cb6:{NFSU2_TR(0x4f0cb6);
__builtin_memmove((R+4),(R+28),4);
}
B4f0cb8:{NFSU2_TR(0x4f0cb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0cbdull));
TAIL_STATIC(0x4efe40u,4ef);
}
B4f0cbd:L4f0cbd:{c.instructions+=2;NFSU2_TR(0x4f0cbd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f0cbf:{NFSU2_TR(0x4f0cbf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4f0ce3;}}
}
B4f0cc1:L4f0cc1:{c.instructions+=3;NFSU2_TR(0x4f0cc1);
__builtin_memmove((R+0),gp(0x837b70),1);
}
B4f0cc6:{NFSU2_TR(0x4f0cc6);
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
B4f0cc8:{NFSU2_TR(0x4f0cc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0cd5;}}
}
B4f0cca:L4f0cca:{c.instructions+=2;NFSU2_TR(0x4f0cca);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4f0cd0:{NFSU2_TR(0x4f0cd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0cd5ull));
TAIL_STATIC(0x4b9690u,4b9);
}
B4f0cd5:L4f0cd5:{c.instructions+=6;NFSU2_TR(0x4f0cd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f0cd6:{NFSU2_TR(0x4f0cd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f0cd7:{NFSU2_TR(0x4f0cd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f0cd8:{NFSU2_TR(0x4f0cd8);
s1(0x837b70,u8(0x1ull));
}
B4f0cdf:{NFSU2_TR(0x4f0cdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f0ce0:{NFSU2_TR(0x4f0ce0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f0ce3:L4f0ce3:{c.instructions+=2;NFSU2_TR(0x4f0ce3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0ce6:{NFSU2_TR(0x4f0ce6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0d35;}}
}
B4f0ce8:L4f0ce8:{c.instructions+=3;NFSU2_TR(0x4f0ce8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f0cea:{NFSU2_TR(0x4f0cea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f0cec:{NFSU2_TR(0x4f0cec);
if(r1(R+518)){{goto L4f0cfd;}}
}
B4f0cee:L4f0cee:{c.instructions+=2;NFSU2_TR(0x4f0cee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0cef:{NFSU2_TR(0x4f0cef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0cf4ull));
TAIL_STATIC(0x540a60u,540);
}
B4f0cf4:L4f0cf4:{c.instructions+=2;NFSU2_TR(0x4f0cf4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f0cf7:{NFSU2_TR(0x4f0cf7);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4f0cfd:L4f0cfd:{c.instructions+=11;NFSU2_TR(0x4f0cfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f0d00:{NFSU2_TR(0x4f0d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f0d03:{NFSU2_TR(0x4f0d03);
u8 U[4];
w4(U+0,u32(0x5a6f817full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0d08:{NFSU2_TR(0x4f0d08);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0d0a:{NFSU2_TR(0x4f0d0a);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0d0f:{NFSU2_TR(0x4f0d0f);
u8 U[4];
w4(U+0,u32(0x73c044ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0d14:{NFSU2_TR(0x4f0d14);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0d19:{NFSU2_TR(0x4f0d19);
u8 U[4];
w4(U+0,u32(0x39df715ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0d1e:{NFSU2_TR(0x4f0d1e);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0d23:{NFSU2_TR(0x4f0d23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0d24:{NFSU2_TR(0x4f0d24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0d29ull));
TAIL_STATIC(0x558860u,558);
}
B4f0d29:L4f0d29:{c.instructions+=7;NFSU2_TR(0x4f0d29);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f0d2c:{NFSU2_TR(0x4f0d2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4f0d2e:{NFSU2_TR(0x4f0d2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f0d2f:{NFSU2_TR(0x4f0d2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f0d30:{NFSU2_TR(0x4f0d30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f0d31:{NFSU2_TR(0x4f0d31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f0d32:{NFSU2_TR(0x4f0d32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f0d35:L4f0d35:{c.instructions+=2;NFSU2_TR(0x4f0d35);
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
B4f0d37:{NFSU2_TR(0x4f0d37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0d45;}}
}
B4f0d39:L4f0d39:{c.instructions+=6;NFSU2_TR(0x4f0d39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f0d3a:{NFSU2_TR(0x4f0d3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f0d3b:{NFSU2_TR(0x4f0d3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f0d3c:{NFSU2_TR(0x4f0d3c);
__builtin_memmove(gp(0x837b70),(R+0),1);
}
B4f0d41:{NFSU2_TR(0x4f0d41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f0d42:{NFSU2_TR(0x4f0d42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f0d45:L4f0d45:{c.instructions+=2;NFSU2_TR(0x4f0d45);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffffeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffffeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f0d48:{NFSU2_TR(0x4f0d48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0d7c;}}
}
B4f0d4a:L4f0d4a:{c.instructions+=2;NFSU2_TR(0x4f0d4a);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x61757468ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x61757468ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x61757468ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4f0d51:{NFSU2_TR(0x4f0d51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0d7c;}}
}
B4f0d53:L4f0d53:{c.instructions+=2;NFSU2_TR(0x4f0d53);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x696b6579ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x696b6579ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x696b6579ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4f0d5a:{NFSU2_TR(0x4f0d5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0d7c;}}
}
B4f0d5c:L4f0d5c:{c.instructions+=1;NFSU2_TR(0x4f0d5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0d61ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4f0d61:L4f0d61:{c.instructions+=3;NFSU2_TR(0x4f0d61);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4f0d67:{NFSU2_TR(0x4f0d67);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4f0d69:{NFSU2_TR(0x4f0d69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0d7c;}}
}
B4f0d6b:L4f0d6b:{c.instructions+=4;NFSU2_TR(0x4f0d6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f0d6e:{NFSU2_TR(0x4f0d6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0d6f:{NFSU2_TR(0x4f0d6f);
u8 U[4];
w4(U+0,u32(0xf6734aa2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0d74:{NFSU2_TR(0x4f0d74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0d79ull));
TAIL_STATIC(0x51ce60u,51c);
}
B4f0d79:L4f0d79:{c.instructions+=1;NFSU2_TR(0x4f0d79);
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
B4f0d7c:L4f0d7c:{c.instructions+=5;NFSU2_TR(0x4f0d7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f0d7d:{NFSU2_TR(0x4f0d7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f0d7e:{NFSU2_TR(0x4f0d7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f0d7f:{NFSU2_TR(0x4f0d7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f0d80:{NFSU2_TR(0x4f0d80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f0d90:L4f0d90:{c.instructions+=15;NFSU2_TR(0x4f0d90);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f0d94:{NFSU2_TR(0x4f0d94);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0d95:{NFSU2_TR(0x4f0d95);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4f0d99:{NFSU2_TR(0x4f0d99);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0d9a:{NFSU2_TR(0x4f0d9a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4f0d9e:{NFSU2_TR(0x4f0d9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0d9f:{NFSU2_TR(0x4f0d9f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0da0:{NFSU2_TR(0x4f0da0);
__builtin_memmove((R+24),(R+4),4);
}
B4f0da2:{NFSU2_TR(0x4f0da2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f0da6:{NFSU2_TR(0x4f0da6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0da7:{NFSU2_TR(0x4f0da7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0da8:{NFSU2_TR(0x4f0da8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0da9:{NFSU2_TR(0x4f0da9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0daa:{NFSU2_TR(0x4f0daa);
__builtin_memmove((R+4),(R+24),4);
}
B4f0dac:{NFSU2_TR(0x4f0dac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0db1ull));
TAIL_STATIC(0x556020u,556);
}
B4f0db1:L4f0db1:{c.instructions+=2;NFSU2_TR(0x4f0db1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(U+0))<(u32(0xc9d30688ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc9d30688ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0db7:{NFSU2_TR(0x4f0db7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f0eda;}}
}
B4f0dbd:L4f0dbd:{c.instructions+=1;NFSU2_TR(0x4f0dbd);
if(r1(R+518)){{goto L4f0ece;}}
}
B4f0dc3:L4f0dc3:{c.instructions+=2;NFSU2_TR(0x4f0dc3);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x911ab364ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f0dc9:{NFSU2_TR(0x4f0dc9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f0ea8;}}
}
B4f0dcf:L4f0dcf:{c.instructions+=1;NFSU2_TR(0x4f0dcf);
if(r1(R+518)){{goto L4f0e76;}}
}
B4f0dd5:L4f0dd5:{c.instructions+=2;NFSU2_TR(0x4f0dd5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0ddb:{NFSU2_TR(0x4f0ddb);
if(r1(R+518)){{goto L4f0e03;}}
}
B4f0ddd:L4f0ddd:{c.instructions+=2;NFSU2_TR(0x4f0ddd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0de3:{NFSU2_TR(0x4f0de3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4f1031u,4f1);}
}
B4f0de9:L4f0de9:{c.instructions+=6;NFSU2_TR(0x4f0de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f0dec:{NFSU2_TR(0x4f0dec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0dee:{NFSU2_TR(0x4f0dee);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0df3:{NFSU2_TR(0x4f0df3);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0df8:{NFSU2_TR(0x4f0df8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0df9:{NFSU2_TR(0x4f0df9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0dfeull));
TAIL_STATIC(0x537c00u,537);
}
B4f0dfe:L4f0dfe:{c.instructions+=1;NFSU2_TR(0x4f0dfe);
TAIL_STATIC(0x4f102eu,4f1);
}
B4f0e03:L4f0e03:{c.instructions+=2;NFSU2_TR(0x4f0e03);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xd79b07a0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4f0e0a:{NFSU2_TR(0x4f0e0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4f1031u,4f1);}
}
B4f0e10:L4f0e10:{c.instructions+=2;NFSU2_TR(0x4f0e10);
w4(R+4,u32(0x850080ull));
}
B4f0e15:{NFSU2_TR(0x4f0e15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0e1aull));
TAIL_STATIC(0x5031d0u,503);
}
B4f0e1a:L4f0e1a:{c.instructions+=3;NFSU2_TR(0x4f0e1a);
__builtin_memmove((R+28),(R+0),4);
}
B4f0e1c:{NFSU2_TR(0x4f0e1c);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4f0e1f:{NFSU2_TR(0x4f0e1f);
if(r1(R+518)){{goto L4f0e4c;}}
}
B4f0e21:L4f0e21:{c.instructions+=2;NFSU2_TR(0x4f0e21);
w4(R+4,u32(0x850080ull));
}
B4f0e26:{NFSU2_TR(0x4f0e26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0e2bull));
TAIL_STATIC(0x503210u,503);
}
B4f0e2b:L4f0e2b:{c.instructions+=2;NFSU2_TR(0x4f0e2b);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4f0e2e:{NFSU2_TR(0x4f0e2e);
if(r1(R+518)){{goto L4f0e4c;}}
}
B4f0e30:L4f0e30:{c.instructions+=3;NFSU2_TR(0x4f0e30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0e31:{NFSU2_TR(0x4f0e31);
u8 U[4];
w4(U+0,u32(0x2756fb2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0e36:{NFSU2_TR(0x4f0e36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0e3bull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f0e3b:L4f0e3b:{c.instructions+=6;NFSU2_TR(0x4f0e3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f0e3e:{NFSU2_TR(0x4f0e3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0e3f:{NFSU2_TR(0x4f0e3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0e40:{NFSU2_TR(0x4f0e40);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4f0e46:{NFSU2_TR(0x4f0e46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0e47:{NFSU2_TR(0x4f0e47);
TAIL_STATIC(0x4f1029u,4f1);
}
B4f0e4c:L4f0e4c:{c.instructions+=3;NFSU2_TR(0x4f0e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f0e4f:{NFSU2_TR(0x4f0e4f);
u8 U[4];
w4(U+0,u32(0x9da1f76dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0e54:{NFSU2_TR(0x4f0e54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0e59ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f0e59:L4f0e59:{c.instructions+=7;NFSU2_TR(0x4f0e59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0e5a:{NFSU2_TR(0x4f0e5a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0e5c:{NFSU2_TR(0x4f0e5c);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0e5e:{NFSU2_TR(0x4f0e5e);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0e63:{NFSU2_TR(0x4f0e63);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0e68:{NFSU2_TR(0x4f0e68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0e69:{NFSU2_TR(0x4f0e69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0e6eull));
TAIL_STATIC(0x558540u,558);
}
B4f0e6e:L4f0e6e:{c.instructions+=2;NFSU2_TR(0x4f0e6e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4f0e71:{NFSU2_TR(0x4f0e71);
TAIL_STATIC(0x4f1031u,4f1);
}
B4f0e76:L4f0e76:{c.instructions+=2;NFSU2_TR(0x4f0e76);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4f0e7c:{NFSU2_TR(0x4f0e7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0e81ull));
TAIL_STATIC(0x4b96f0u,4b9);
}
B4f0e81:L4f0e81:{c.instructions+=4;NFSU2_TR(0x4f0e81);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f0e87:{NFSU2_TR(0x4f0e87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0e88:{NFSU2_TR(0x4f0e88);
w4(R+4,u32(0x850080ull));
}
B4f0e8d:{NFSU2_TR(0x4f0e8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0e92ull));
TAIL_STATIC(0x503230u,503);
}
B4f0e92:L4f0e92:{c.instructions+=4;NFSU2_TR(0x4f0e92);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4f0e98:{NFSU2_TR(0x4f0e98);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0e99:{NFSU2_TR(0x4f0e99);
w4(R+4,u32(0x850080ull));
}
B4f0e9e:{NFSU2_TR(0x4f0e9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0ea3ull));
TAIL_STATIC(0x503290u,503);
}
B4f0ea3:L4f0ea3:{c.instructions+=1;NFSU2_TR(0x4f0ea3);
TAIL_STATIC(0x4f1031u,4f1);
}
B4f0ea8:L4f0ea8:{c.instructions+=2;NFSU2_TR(0x4f0ea8);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0eae:{NFSU2_TR(0x4f0eae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4f1031u,4f1);}
}
B4f0eb4:L4f0eb4:{c.instructions+=6;NFSU2_TR(0x4f0eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f0eb7:{NFSU2_TR(0x4f0eb7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0eb9:{NFSU2_TR(0x4f0eb9);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0ebe:{NFSU2_TR(0x4f0ebe);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0ec3:{NFSU2_TR(0x4f0ec3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0ec4:{NFSU2_TR(0x4f0ec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0ec9ull));
TAIL_STATIC(0x537c00u,537);
}
B4f0ec9:L4f0ec9:{c.instructions+=1;NFSU2_TR(0x4f0ec9);
TAIL_STATIC(0x4f102eu,4f1);
}
B4f0ece:L4f0ece:{c.instructions+=2;NFSU2_TR(0x4f0ece);
__builtin_memmove((R+4),(R+24),4);
}
B4f0ed0:{NFSU2_TR(0x4f0ed0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0ed5ull));
TAIL_STATIC(0x51ff40u,51f);
}
B4f0ed5:L4f0ed5:{c.instructions+=1;NFSU2_TR(0x4f0ed5);
TAIL_STATIC(0x4f1031u,4f1);
}
B4f0eda:L4f0eda:{c.instructions+=2;NFSU2_TR(0x4f0eda);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(U+0))<(u32(0xf6734aafull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xf6734aafull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0ee0:{NFSU2_TR(0x4f0ee0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f0ff4;}}
}
B4f0ee6:L4f0ee6:{c.instructions+=1;NFSU2_TR(0x4f0ee6);
if(r1(R+518)){{goto L4f0fc0;}}
}
B4f0eec:L4f0eec:{c.instructions+=2;NFSU2_TR(0x4f0eec);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xda5b8712ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0ef2:{NFSU2_TR(0x4f0ef2);
if(r1(R+518)){{goto L4f0f1f;}}
}
B4f0ef4:L4f0ef4:{c.instructions+=2;NFSU2_TR(0x4f0ef4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xf6734aa2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0efa:{NFSU2_TR(0x4f0efa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4f1031u,4f1);}
}
B4f0f00:L4f0f00:{c.instructions+=3;NFSU2_TR(0x4f0f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f0f03:{NFSU2_TR(0x4f0f03);
u8 U[4];
w4(U+0,u32(0xc5c25c87ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0f08:{NFSU2_TR(0x4f0f08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0f0dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f0f0d:L4f0f0d:{c.instructions+=5;NFSU2_TR(0x4f0f0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0f0e:{NFSU2_TR(0x4f0f0e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0f10:{NFSU2_TR(0x4f0f10);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0f15:{NFSU2_TR(0x4f0f15);
u8 U[4];
w4(U+0,u32(0xf6734aafull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0f1a:{NFSU2_TR(0x4f0f1a);
{goto L4f0fda;}
}
B4f0f1f:L4f0f1f:{c.instructions+=3;NFSU2_TR(0x4f0f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f0f22:{NFSU2_TR(0x4f0f22);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4f0f28:{NFSU2_TR(0x4f0f28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0f84;}}
}
B4f0f2a:L4f0f2a:{c.instructions+=3;NFSU2_TR(0x4f0f2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f0f2d:{NFSU2_TR(0x4f0f2d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0f2e:{NFSU2_TR(0x4f0f2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0f33ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4f0f33:L4f0f33:{c.instructions+=4;NFSU2_TR(0x4f0f33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f0f36:{NFSU2_TR(0x4f0f36);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f0f38:{NFSU2_TR(0x4f0f38);
w4(R+4,u32(0x850080ull));
}
B4f0f3d:{NFSU2_TR(0x4f0f3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0f6e;}}
}
B4f0f3f:L4f0f3f:{c.instructions+=2;NFSU2_TR(0x4f0f3f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0f44:{NFSU2_TR(0x4f0f44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0f49ull));
TAIL_STATIC(0x503230u,503);
}
B4f0f49:L4f0f49:{c.instructions+=2;NFSU2_TR(0x4f0f49);
u8 U[4];
w4(U+0,u32(0xbb298a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0f4e:{NFSU2_TR(0x4f0f4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0f53ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f0f53:L4f0f53:{c.instructions+=4;NFSU2_TR(0x4f0f53);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f0f56:{NFSU2_TR(0x4f0f56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0f57:{NFSU2_TR(0x4f0f57);
__builtin_memmove((R+4),(R+28),4);
}
B4f0f59:{NFSU2_TR(0x4f0f59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0f5eull));
TAIL_STATIC(0x4957d0u,495);
}
B4f0f5e:L4f0f5e:{c.instructions+=2;NFSU2_TR(0x4f0f5e);
__builtin_memmove((R+4),(R+24),4);
}
B4f0f60:{NFSU2_TR(0x4f0f60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0f65ull));
TAIL_STATIC(0x51ff40u,51f);
}
B4f0f65:L4f0f65:{c.instructions+=2;NFSU2_TR(0x4f0f65);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4f0f69:{NFSU2_TR(0x4f0f69);
TAIL_STATIC(0x4f1031u,4f1);
}
B4f0f6e:L4f0f6e:{c.instructions+=2;NFSU2_TR(0x4f0f6e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0f6f:{NFSU2_TR(0x4f0f6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0f74ull));
TAIL_STATIC(0x503230u,503);
}
B4f0f74:L4f0f74:{c.instructions+=2;NFSU2_TR(0x4f0f74);
__builtin_memmove((R+4),(R+24),4);
}
B4f0f76:{NFSU2_TR(0x4f0f76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0f7bull));
TAIL_STATIC(0x51ff40u,51f);
}
B4f0f7b:L4f0f7b:{c.instructions+=2;NFSU2_TR(0x4f0f7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4f0f7f:{NFSU2_TR(0x4f0f7f);
TAIL_STATIC(0x4f1031u,4f1);
}
B4f0f84:L4f0f84:{c.instructions+=2;NFSU2_TR(0x4f0f84);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4f0f8a:{NFSU2_TR(0x4f0f8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0fb3;}}
}
B4f0f8c:L4f0f8c:{c.instructions+=3;NFSU2_TR(0x4f0f8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f0f8f:{NFSU2_TR(0x4f0f8f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0f90:{NFSU2_TR(0x4f0f90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0f95ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4f0f95:L4f0f95:{c.instructions+=4;NFSU2_TR(0x4f0f95);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f0f98:{NFSU2_TR(0x4f0f98);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f0f9a:{NFSU2_TR(0x4f0f9a);
w4(R+4,u32(0x850080ull));
}
B4f0f9f:{NFSU2_TR(0x4f0f9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f0fad;}}
}
B4f0fa1:L4f0fa1:{c.instructions+=2;NFSU2_TR(0x4f0fa1);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0fa6:{NFSU2_TR(0x4f0fa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0fabull));
TAIL_STATIC(0x503290u,503);
}
B4f0fab:L4f0fab:{c.instructions+=1;NFSU2_TR(0x4f0fab);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f0f49u);}goto L4f0f49;}
}
B4f0fad:L4f0fad:{c.instructions+=2;NFSU2_TR(0x4f0fad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0fae:{NFSU2_TR(0x4f0fae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0fb3ull));
TAIL_STATIC(0x503290u,503);
}
B4f0fb3:L4f0fb3:{c.instructions+=2;NFSU2_TR(0x4f0fb3);
__builtin_memmove((R+4),(R+24),4);
}
B4f0fb5:{NFSU2_TR(0x4f0fb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0fbaull));
TAIL_STATIC(0x51ff40u,51f);
}
B4f0fba:L4f0fba:{c.instructions+=2;NFSU2_TR(0x4f0fba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4f0fbe:{NFSU2_TR(0x4f0fbe);
TAIL_STATIC(0x4f1031u,4f1);
}
B4f0fc0:L4f0fc0:{c.instructions+=3;NFSU2_TR(0x4f0fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f0fc3:{NFSU2_TR(0x4f0fc3);
u8 U[4];
w4(U+0,u32(0x82ec12c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0fc8:{NFSU2_TR(0x4f0fc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0fcdull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f0fcd:L4f0fcd:{c.instructions+=4;NFSU2_TR(0x4f0fcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0fce:{NFSU2_TR(0x4f0fce);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0fd0:{NFSU2_TR(0x4f0fd0);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0fd5:{NFSU2_TR(0x4f0fd5);
u8 U[4];
w4(U+0,u32(0xf6734ad3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0fda:L4f0fda:{c.instructions+=5;NFSU2_TR(0x4f0fda);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0fdf:{NFSU2_TR(0x4f0fdf);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0fe4:{NFSU2_TR(0x4f0fe4);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0fe9:{NFSU2_TR(0x4f0fe9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f0fea:{NFSU2_TR(0x4f0fea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f0fefull));
TAIL_STATIC(0x558820u,558);
}
B4f0fef:L4f0fef:{c.instructions+=2;NFSU2_TR(0x4f0fef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4f0ff2:{NFSU2_TR(0x4f0ff2);
TAIL_STATIC(0x4f1031u,4f1);
}
B4f0ff4:L4f0ff4:{c.instructions+=2;NFSU2_TR(0x4f0ff4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xf6734ad3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f0ffa:{NFSU2_TR(0x4f0ffa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4f1031u,4f1);}
}
B4f0ffc:L4f0ffc:{c.instructions+=1;NFSU2_TR(0x4f0ffc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f1001ull));
TAIL_STATIC(0x58a0e0u,58a);
}
XIT:NFSU2_TR_EXIT(0x4f0,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
