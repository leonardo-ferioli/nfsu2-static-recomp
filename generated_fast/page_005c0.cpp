#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_5bd(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5c0,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5c0,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5c0(u8* __restrict R,Cpu& c);
u32 page_5c0(Cpu& c){return body_5c0(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5c0(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5c0001:goto L5c0001;
case 0x5c0005:c.instructions+=3;goto B5c0005;
case 0x5c0007:c.instructions+=2;goto B5c0007;
case 0x5c0009:c.instructions+=1;goto B5c0009;
case 0x5c000b:goto L5c000b;
case 0x5c000f:c.instructions+=4;goto B5c000f;
case 0x5c0011:c.instructions+=3;goto B5c0011;
case 0x5c0013:c.instructions+=2;goto B5c0013;
case 0x5c0014:c.instructions+=1;goto B5c0014;
case 0x5c0017:goto L5c0017;
case 0x5c001b:c.instructions+=3;goto B5c001b;
case 0x5c001d:c.instructions+=2;goto B5c001d;
case 0x5c001e:c.instructions+=1;goto B5c001e;
case 0x5c0021:goto L5c0021;
case 0x5c0023:c.instructions+=2;goto B5c0023;
case 0x5c0025:c.instructions+=1;goto B5c0025;
case 0x5c0027:goto L5c0027;
case 0x5c0028:c.instructions+=2;goto B5c0028;
case 0x5c002d:c.instructions+=1;goto B5c002d;
case 0x5c0032:goto L5c0032;
case 0x5c0035:c.instructions+=6;goto B5c0035;
case 0x5c0036:c.instructions+=5;goto B5c0036;
case 0x5c0037:c.instructions+=4;goto B5c0037;
case 0x5c0038:c.instructions+=3;goto B5c0038;
case 0x5c003a:c.instructions+=2;goto B5c003a;
case 0x5c003b:c.instructions+=1;goto B5c003b;
case 0x5c003e:goto L5c003e;
case 0x5c0042:c.instructions+=7;goto B5c0042;
case 0x5c004a:c.instructions+=6;goto B5c004a;
case 0x5c004b:c.instructions+=5;goto B5c004b;
case 0x5c004c:c.instructions+=4;goto B5c004c;
case 0x5c004d:c.instructions+=3;goto B5c004d;
case 0x5c004f:c.instructions+=2;goto B5c004f;
case 0x5c0050:c.instructions+=1;goto B5c0050;
case 0x5c0053:goto L5c0053;
case 0x5c0054:c.instructions+=2;goto B5c0054;
case 0x5c0059:c.instructions+=1;goto B5c0059;
case 0x5c005e:goto L5c005e;
case 0x5c0061:c.instructions+=6;goto B5c0061;
case 0x5c0062:c.instructions+=5;goto B5c0062;
case 0x5c0063:c.instructions+=4;goto B5c0063;
case 0x5c0064:c.instructions+=3;goto B5c0064;
case 0x5c0066:c.instructions+=2;goto B5c0066;
case 0x5c0067:c.instructions+=1;goto B5c0067;
case 0x5c0070:goto L5c0070;
case 0x5c0074:c.instructions+=5;goto B5c0074;
case 0x5c0078:c.instructions+=4;goto B5c0078;
case 0x5c007b:c.instructions+=3;goto B5c007b;
case 0x5c007f:c.instructions+=2;goto B5c007f;
case 0x5c0081:c.instructions+=1;goto B5c0081;
case 0x5c0083:goto L5c0083;
case 0x5c0085:c.instructions+=5;goto B5c0085;
case 0x5c0089:c.instructions+=4;goto B5c0089;
case 0x5c008a:c.instructions+=3;goto B5c008a;
case 0x5c008b:c.instructions+=2;goto B5c008b;
case 0x5c0093:c.instructions+=1;goto B5c0093;
case 0x5c0096:goto L5c0096;
case 0x5c0098:c.instructions+=1;goto B5c0098;
case 0x5c009a:goto L5c009a;
case 0x5c009e:c.instructions+=4;goto B5c009e;
case 0x5c00a0:c.instructions+=3;goto B5c00a0;
case 0x5c00a3:c.instructions+=2;goto B5c00a3;
case 0x5c00a6:c.instructions+=1;goto B5c00a6;
case 0x5c00a9:goto L5c00a9;
case 0x5c00ab:c.instructions+=1;goto B5c00ab;
case 0x5c00b0:goto L5c00b0;
case 0x5c00b4:c.instructions+=3;goto B5c00b4;
case 0x5c00b7:c.instructions+=2;goto B5c00b7;
case 0x5c00ba:c.instructions+=1;goto B5c00ba;
case 0x5c00bc:goto L5c00bc;
case 0x5c00c1:goto L5c00c1;
case 0x5c00c3:c.instructions+=12;goto B5c00c3;
case 0x5c00c9:c.instructions+=11;goto B5c00c9;
case 0x5c00ce:c.instructions+=10;goto B5c00ce;
case 0x5c00d0:c.instructions+=9;goto B5c00d0;
case 0x5c00d1:c.instructions+=8;goto B5c00d1;
case 0x5c00d4:c.instructions+=7;goto B5c00d4;
case 0x5c00d9:c.instructions+=6;goto B5c00d9;
case 0x5c00e1:c.instructions+=5;goto B5c00e1;
case 0x5c00e9:c.instructions+=4;goto B5c00e9;
case 0x5c00f1:c.instructions+=3;goto B5c00f1;
case 0x5c00f9:c.instructions+=2;goto B5c00f9;
case 0x5c00fd:c.instructions+=1;goto B5c00fd;
case 0x5c0102:goto L5c0102;
case 0x5c0106:c.instructions+=4;goto B5c0106;
case 0x5c0108:c.instructions+=3;goto B5c0108;
case 0x5c010b:c.instructions+=2;goto B5c010b;
case 0x5c010d:c.instructions+=1;goto B5c010d;
case 0x5c010f:goto L5c010f;
case 0x5c0111:c.instructions+=5;goto B5c0111;
case 0x5c0115:c.instructions+=4;goto B5c0115;
case 0x5c0116:c.instructions+=3;goto B5c0116;
case 0x5c0118:c.instructions+=2;goto B5c0118;
case 0x5c0119:c.instructions+=1;goto B5c0119;
case 0x5c011c:goto L5c011c;
case 0x5c011e:goto L5c011e;
case 0x5c0122:goto L5c0122;
case 0x5c0124:c.instructions+=1;goto B5c0124;
case 0x5c0126:goto L5c0126;
case 0x5c012b:c.instructions+=1;goto B5c012b;
case 0x5c0130:goto L5c0130;
case 0x5c0133:goto L5c0133;
case 0x5c0136:c.instructions+=1;goto B5c0136;
case 0x5c0140:goto L5c0140;
case 0x5c0143:c.instructions+=8;goto B5c0143;
case 0x5c0147:c.instructions+=7;goto B5c0147;
case 0x5c0149:c.instructions+=6;goto B5c0149;
case 0x5c014b:c.instructions+=5;goto B5c014b;
case 0x5c0153:c.instructions+=4;goto B5c0153;
case 0x5c015b:c.instructions+=3;goto B5c015b;
case 0x5c0163:c.instructions+=2;goto B5c0163;
case 0x5c016b:c.instructions+=1;goto B5c016b;
case 0x5c016d:goto L5c016d;
case 0x5c016f:c.instructions+=5;goto B5c016f;
case 0x5c0173:c.instructions+=4;goto B5c0173;
case 0x5c0174:c.instructions+=3;goto B5c0174;
case 0x5c0176:c.instructions+=2;goto B5c0176;
case 0x5c0177:c.instructions+=1;goto B5c0177;
case 0x5c017a:goto L5c017a;
case 0x5c017c:goto L5c017c;
case 0x5c0180:goto L5c0180;
case 0x5c0182:c.instructions+=1;goto B5c0182;
case 0x5c0184:goto L5c0184;
case 0x5c0189:c.instructions+=1;goto B5c0189;
case 0x5c018e:goto L5c018e;
case 0x5c0191:c.instructions+=3;goto B5c0191;
case 0x5c0194:c.instructions+=2;goto B5c0194;
case 0x5c0197:c.instructions+=1;goto B5c0197;
case 0x5c019a:goto L5c019a;
case 0x5c019e:c.instructions+=7;goto B5c019e;
case 0x5c01a1:c.instructions+=6;goto B5c01a1;
case 0x5c01a6:c.instructions+=5;goto B5c01a6;
case 0x5c01a8:c.instructions+=4;goto B5c01a8;
case 0x5c01aa:c.instructions+=3;goto B5c01aa;
case 0x5c01ad:c.instructions+=2;goto B5c01ad;
case 0x5c01b0:c.instructions+=1;goto B5c01b0;
case 0x5c01c0:goto L5c01c0;
case 0x5c01c1:c.instructions+=5;goto B5c01c1;
case 0x5c01c2:c.instructions+=4;goto B5c01c2;
case 0x5c01c3:c.instructions+=3;goto B5c01c3;
case 0x5c01c6:c.instructions+=2;goto B5c01c6;
case 0x5c01cb:c.instructions+=1;goto B5c01cb;
case 0x5c01d0:goto L5c01d0;
case 0x5c01d5:goto L5c01d5;
case 0x5c01d7:c.instructions+=2;goto B5c01d7;
case 0x5c01d9:c.instructions+=1;goto B5c01d9;
case 0x5c01db:goto L5c01db;
case 0x5c01dd:c.instructions+=2;goto B5c01dd;
case 0x5c01de:c.instructions+=1;goto B5c01de;
case 0x5c01e1:goto L5c01e1;
case 0x5c01e7:goto L5c01e7;
case 0x5c01ea:c.instructions+=2;goto B5c01ea;
case 0x5c01eb:c.instructions+=1;goto B5c01eb;
case 0x5c01ed:goto L5c01ed;
case 0x5c01ee:c.instructions+=1;goto B5c01ee;
case 0x5c01f0:goto L5c01f0;
case 0x5c01f1:c.instructions+=3;goto B5c01f1;
case 0x5c01f2:c.instructions+=2;goto B5c01f2;
case 0x5c01f3:c.instructions+=1;goto B5c01f3;
case 0x5c0200:goto L5c0200;
case 0x5c0204:c.instructions+=13;goto B5c0204;
case 0x5c0207:c.instructions+=12;goto B5c0207;
case 0x5c0208:c.instructions+=11;goto B5c0208;
case 0x5c020c:c.instructions+=10;goto B5c020c;
case 0x5c020d:c.instructions+=9;goto B5c020d;
case 0x5c0211:c.instructions+=8;goto B5c0211;
case 0x5c0214:c.instructions+=7;goto B5c0214;
case 0x5c0215:c.instructions+=6;goto B5c0215;
case 0x5c0219:c.instructions+=5;goto B5c0219;
case 0x5c021b:c.instructions+=4;goto B5c021b;
case 0x5c021c:c.instructions+=3;goto B5c021c;
case 0x5c021e:c.instructions+=2;goto B5c021e;
case 0x5c0220:c.instructions+=1;goto B5c0220;
case 0x5c0222:goto L5c0222;
case 0x5c0223:c.instructions+=3;goto B5c0223;
case 0x5c0224:c.instructions+=2;goto B5c0224;
case 0x5c0225:c.instructions+=1;goto B5c0225;
case 0x5c022a:goto L5c022a;
case 0x5c022d:c.instructions+=2;goto B5c022d;
case 0x5c022f:c.instructions+=1;goto B5c022f;
case 0x5c0235:goto L5c0235;
case 0x5c023c:c.instructions+=20;goto B5c023c;
case 0x5c0243:c.instructions+=19;goto B5c0243;
case 0x5c0247:c.instructions+=18;goto B5c0247;
case 0x5c024e:c.instructions+=17;goto B5c024e;
case 0x5c0252:c.instructions+=16;goto B5c0252;
case 0x5c0259:c.instructions+=15;goto B5c0259;
case 0x5c025d:c.instructions+=14;goto B5c025d;
case 0x5c0264:c.instructions+=13;goto B5c0264;
case 0x5c0268:c.instructions+=12;goto B5c0268;
case 0x5c026f:c.instructions+=11;goto B5c026f;
case 0x5c0273:c.instructions+=10;goto B5c0273;
case 0x5c027a:c.instructions+=9;goto B5c027a;
case 0x5c027e:c.instructions+=8;goto B5c027e;
case 0x5c0285:c.instructions+=7;goto B5c0285;
case 0x5c0289:c.instructions+=6;goto B5c0289;
case 0x5c0290:c.instructions+=5;goto B5c0290;
case 0x5c0294:c.instructions+=4;goto B5c0294;
case 0x5c0298:c.instructions+=3;goto B5c0298;
case 0x5c029a:c.instructions+=2;goto B5c029a;
case 0x5c029f:c.instructions+=1;goto B5c029f;
case 0x5c02a3:goto L5c02a3;
case 0x5c02a5:goto L5c02a5;
case 0x5c02ac:c.instructions+=35;goto B5c02ac;
case 0x5c02b0:c.instructions+=34;goto B5c02b0;
case 0x5c02b4:c.instructions+=33;goto B5c02b4;
case 0x5c02bb:c.instructions+=32;goto B5c02bb;
case 0x5c02bf:c.instructions+=31;goto B5c02bf;
case 0x5c02c6:c.instructions+=30;goto B5c02c6;
case 0x5c02ca:c.instructions+=29;goto B5c02ca;
case 0x5c02ce:c.instructions+=28;goto B5c02ce;
case 0x5c02d5:c.instructions+=27;goto B5c02d5;
case 0x5c02d9:c.instructions+=26;goto B5c02d9;
case 0x5c02e0:c.instructions+=25;goto B5c02e0;
case 0x5c02e4:c.instructions+=24;goto B5c02e4;
case 0x5c02e8:c.instructions+=23;goto B5c02e8;
case 0x5c02ec:c.instructions+=22;goto B5c02ec;
case 0x5c02f3:c.instructions+=21;goto B5c02f3;
case 0x5c02f7:c.instructions+=20;goto B5c02f7;
case 0x5c02fb:c.instructions+=19;goto B5c02fb;
case 0x5c0302:c.instructions+=18;goto B5c0302;
case 0x5c0304:c.instructions+=17;goto B5c0304;
case 0x5c0308:c.instructions+=16;goto B5c0308;
case 0x5c030c:c.instructions+=15;goto B5c030c;
case 0x5c030d:c.instructions+=14;goto B5c030d;
case 0x5c0311:c.instructions+=13;goto B5c0311;
case 0x5c0312:c.instructions+=12;goto B5c0312;
case 0x5c0319:c.instructions+=11;goto B5c0319;
case 0x5c031d:c.instructions+=10;goto B5c031d;
case 0x5c0321:c.instructions+=9;goto B5c0321;
case 0x5c0328:c.instructions+=8;goto B5c0328;
case 0x5c0329:c.instructions+=7;goto B5c0329;
case 0x5c0331:c.instructions+=6;goto B5c0331;
case 0x5c0339:c.instructions+=5;goto B5c0339;
case 0x5c0341:c.instructions+=4;goto B5c0341;
case 0x5c0345:c.instructions+=3;goto B5c0345;
case 0x5c0347:c.instructions+=2;goto B5c0347;
case 0x5c0348:c.instructions+=1;goto B5c0348;
case 0x5c034b:goto L5c034b;
case 0x5c034d:c.instructions+=2;goto B5c034d;
case 0x5c034f:c.instructions+=1;goto B5c034f;
case 0x5c0351:goto L5c0351;
case 0x5c0352:c.instructions+=2;goto B5c0352;
case 0x5c0357:c.instructions+=1;goto B5c0357;
case 0x5c035c:goto L5c035c;
case 0x5c035f:c.instructions+=7;goto B5c035f;
case 0x5c0361:c.instructions+=6;goto B5c0361;
case 0x5c0362:c.instructions+=5;goto B5c0362;
case 0x5c0363:c.instructions+=4;goto B5c0363;
case 0x5c0364:c.instructions+=3;goto B5c0364;
case 0x5c0365:c.instructions+=2;goto B5c0365;
case 0x5c0368:c.instructions+=1;goto B5c0368;
case 0x5c036b:goto L5c036b;
case 0x5c036e:c.instructions+=2;goto B5c036e;
case 0x5c0373:c.instructions+=1;goto B5c0373;
case 0x5c0375:goto L5c0375;
case 0x5c0377:goto L5c0377;
case 0x5c0378:c.instructions+=5;goto B5c0378;
case 0x5c0379:c.instructions+=4;goto B5c0379;
case 0x5c037a:c.instructions+=3;goto B5c037a;
case 0x5c037b:c.instructions+=2;goto B5c037b;
case 0x5c037e:c.instructions+=1;goto B5c037e;
case 0x5c0390:goto L5c0390;
case 0x5c0394:c.instructions+=9;goto B5c0394;
case 0x5c0397:c.instructions+=8;goto B5c0397;
case 0x5c0398:c.instructions+=7;goto B5c0398;
case 0x5c039c:c.instructions+=6;goto B5c039c;
case 0x5c039f:c.instructions+=5;goto B5c039f;
case 0x5c03a3:c.instructions+=4;goto B5c03a3;
case 0x5c03a4:c.instructions+=3;goto B5c03a4;
case 0x5c03a6:c.instructions+=2;goto B5c03a6;
case 0x5c03a8:c.instructions+=1;goto B5c03a8;
case 0x5c03ae:goto L5c03ae;
case 0x5c03b5:c.instructions+=21;goto B5c03b5;
case 0x5c03bc:c.instructions+=20;goto B5c03bc;
case 0x5c03c0:c.instructions+=19;goto B5c03c0;
case 0x5c03c7:c.instructions+=18;goto B5c03c7;
case 0x5c03cb:c.instructions+=17;goto B5c03cb;
case 0x5c03d2:c.instructions+=16;goto B5c03d2;
case 0x5c03d6:c.instructions+=15;goto B5c03d6;
case 0x5c03dd:c.instructions+=14;goto B5c03dd;
case 0x5c03e1:c.instructions+=13;goto B5c03e1;
case 0x5c03e8:c.instructions+=12;goto B5c03e8;
case 0x5c03ec:c.instructions+=11;goto B5c03ec;
case 0x5c03f3:c.instructions+=10;goto B5c03f3;
case 0x5c03f7:c.instructions+=9;goto B5c03f7;
case 0x5c03fe:c.instructions+=8;goto B5c03fe;
case 0x5c0402:c.instructions+=7;goto B5c0402;
case 0x5c0409:c.instructions+=6;goto B5c0409;
case 0x5c040d:c.instructions+=5;goto B5c040d;
case 0x5c0411:c.instructions+=4;goto B5c0411;
case 0x5c0413:c.instructions+=3;goto B5c0413;
case 0x5c0414:c.instructions+=2;goto B5c0414;
case 0x5c0419:c.instructions+=1;goto B5c0419;
case 0x5c041d:goto L5c041d;
case 0x5c041f:goto L5c041f;
case 0x5c0423:c.instructions+=32;goto B5c0423;
case 0x5c0427:c.instructions+=31;goto B5c0427;
case 0x5c042b:c.instructions+=30;goto B5c042b;
case 0x5c0432:c.instructions+=29;goto B5c0432;
case 0x5c0436:c.instructions+=28;goto B5c0436;
case 0x5c043d:c.instructions+=27;goto B5c043d;
case 0x5c0441:c.instructions+=26;goto B5c0441;
case 0x5c0445:c.instructions+=25;goto B5c0445;
case 0x5c0449:c.instructions+=24;goto B5c0449;
case 0x5c044d:c.instructions+=23;goto B5c044d;
case 0x5c0454:c.instructions+=22;goto B5c0454;
case 0x5c0458:c.instructions+=21;goto B5c0458;
case 0x5c045f:c.instructions+=20;goto B5c045f;
case 0x5c0463:c.instructions+=19;goto B5c0463;
case 0x5c0467:c.instructions+=18;goto B5c0467;
case 0x5c046b:c.instructions+=17;goto B5c046b;
case 0x5c046f:c.instructions+=16;goto B5c046f;
case 0x5c0476:c.instructions+=15;goto B5c0476;
case 0x5c047a:c.instructions+=14;goto B5c047a;
case 0x5c047e:c.instructions+=13;goto B5c047e;
case 0x5c0482:c.instructions+=12;goto B5c0482;
case 0x5c0486:c.instructions+=11;goto B5c0486;
case 0x5c048b:c.instructions+=10;goto B5c048b;
case 0x5c048f:c.instructions+=9;goto B5c048f;
case 0x5c0493:c.instructions+=8;goto B5c0493;
case 0x5c0494:c.instructions+=7;goto B5c0494;
case 0x5c049c:c.instructions+=6;goto B5c049c;
case 0x5c04a4:c.instructions+=5;goto B5c04a4;
case 0x5c04ac:c.instructions+=4;goto B5c04ac;
case 0x5c04b0:c.instructions+=3;goto B5c04b0;
case 0x5c04b2:c.instructions+=2;goto B5c04b2;
case 0x5c04b3:c.instructions+=1;goto B5c04b3;
case 0x5c04b6:goto L5c04b6;
case 0x5c04b8:c.instructions+=3;goto B5c04b8;
case 0x5c04ba:c.instructions+=2;goto B5c04ba;
case 0x5c04bb:c.instructions+=1;goto B5c04bb;
case 0x5c04bd:goto L5c04bd;
case 0x5c04be:c.instructions+=2;goto B5c04be;
case 0x5c04c3:c.instructions+=1;goto B5c04c3;
case 0x5c04c8:goto L5c04c8;
case 0x5c04cb:goto L5c04cb;
case 0x5c04cd:c.instructions+=4;goto B5c04cd;
case 0x5c04ce:c.instructions+=3;goto B5c04ce;
case 0x5c04cf:c.instructions+=2;goto B5c04cf;
case 0x5c04d2:c.instructions+=1;goto B5c04d2;
case 0x5c04e0:goto L5c04e0;
case 0x5c04e4:c.instructions+=13;goto B5c04e4;
case 0x5c04e7:c.instructions+=12;goto B5c04e7;
case 0x5c04e8:c.instructions+=11;goto B5c04e8;
case 0x5c04ef:c.instructions+=10;goto B5c04ef;
case 0x5c04f0:c.instructions+=9;goto B5c04f0;
case 0x5c04f7:c.instructions+=8;goto B5c04f7;
case 0x5c04fa:c.instructions+=7;goto B5c04fa;
case 0x5c04fb:c.instructions+=6;goto B5c04fb;
case 0x5c04ff:c.instructions+=5;goto B5c04ff;
case 0x5c0501:c.instructions+=4;goto B5c0501;
case 0x5c0502:c.instructions+=3;goto B5c0502;
case 0x5c0504:c.instructions+=2;goto B5c0504;
case 0x5c0506:c.instructions+=1;goto B5c0506;
case 0x5c0508:goto L5c0508;
case 0x5c0509:c.instructions+=3;goto B5c0509;
case 0x5c050a:c.instructions+=2;goto B5c050a;
case 0x5c050b:c.instructions+=1;goto B5c050b;
case 0x5c0510:goto L5c0510;
case 0x5c0513:c.instructions+=3;goto B5c0513;
case 0x5c0515:c.instructions+=2;goto B5c0515;
case 0x5c0517:c.instructions+=1;goto B5c0517;
case 0x5c051d:goto L5c051d;
case 0x5c0524:c.instructions+=27;goto B5c0524;
case 0x5c052b:c.instructions+=26;goto B5c052b;
case 0x5c052f:c.instructions+=25;goto B5c052f;
case 0x5c0536:c.instructions+=24;goto B5c0536;
case 0x5c053a:c.instructions+=23;goto B5c053a;
case 0x5c0541:c.instructions+=22;goto B5c0541;
case 0x5c0545:c.instructions+=21;goto B5c0545;
case 0x5c054c:c.instructions+=20;goto B5c054c;
case 0x5c0550:c.instructions+=19;goto B5c0550;
case 0x5c0557:c.instructions+=18;goto B5c0557;
case 0x5c055b:c.instructions+=17;goto B5c055b;
case 0x5c0562:c.instructions+=16;goto B5c0562;
case 0x5c0566:c.instructions+=15;goto B5c0566;
case 0x5c056d:c.instructions+=14;goto B5c056d;
case 0x5c0571:c.instructions+=13;goto B5c0571;
case 0x5c0578:c.instructions+=12;goto B5c0578;
case 0x5c057c:c.instructions+=11;goto B5c057c;
case 0x5c0580:c.instructions+=10;goto B5c0580;
case 0x5c0587:c.instructions+=9;goto B5c0587;
case 0x5c058b:c.instructions+=8;goto B5c058b;
case 0x5c0590:c.instructions+=7;goto B5c0590;
case 0x5c0594:c.instructions+=6;goto B5c0594;
case 0x5c0598:c.instructions+=5;goto B5c0598;
case 0x5c059c:c.instructions+=4;goto B5c059c;
case 0x5c05a0:c.instructions+=3;goto B5c05a0;
case 0x5c05a2:c.instructions+=2;goto B5c05a2;
case 0x5c05a7:c.instructions+=1;goto B5c05a7;
case 0x5c05ab:goto L5c05ab;
case 0x5c05ad:goto L5c05ad;
case 0x5c05b4:c.instructions+=37;goto B5c05b4;
case 0x5c05bb:c.instructions+=36;goto B5c05bb;
case 0x5c05bf:c.instructions+=35;goto B5c05bf;
case 0x5c05c6:c.instructions+=34;goto B5c05c6;
case 0x5c05ca:c.instructions+=33;goto B5c05ca;
case 0x5c05d1:c.instructions+=32;goto B5c05d1;
case 0x5c05d5:c.instructions+=31;goto B5c05d5;
case 0x5c05dc:c.instructions+=30;goto B5c05dc;
case 0x5c05e0:c.instructions+=29;goto B5c05e0;
case 0x5c05e7:c.instructions+=28;goto B5c05e7;
case 0x5c05eb:c.instructions+=27;goto B5c05eb;
case 0x5c05ee:c.instructions+=26;goto B5c05ee;
case 0x5c05f2:c.instructions+=25;goto B5c05f2;
case 0x5c05f9:c.instructions+=24;goto B5c05f9;
case 0x5c05fc:c.instructions+=23;goto B5c05fc;
case 0x5c0600:c.instructions+=22;goto B5c0600;
case 0x5c0607:c.instructions+=21;goto B5c0607;
case 0x5c060b:c.instructions+=20;goto B5c060b;
case 0x5c060c:c.instructions+=19;goto B5c060c;
case 0x5c0613:c.instructions+=18;goto B5c0613;
case 0x5c0617:c.instructions+=17;goto B5c0617;
case 0x5c061b:c.instructions+=16;goto B5c061b;
case 0x5c061c:c.instructions+=15;goto B5c061c;
case 0x5c0620:c.instructions+=14;goto B5c0620;
case 0x5c0621:c.instructions+=13;goto B5c0621;
case 0x5c0628:c.instructions+=12;goto B5c0628;
case 0x5c062c:c.instructions+=11;goto B5c062c;
case 0x5c0633:c.instructions+=10;goto B5c0633;
case 0x5c0637:c.instructions+=9;goto B5c0637;
case 0x5c0638:c.instructions+=8;goto B5c0638;
case 0x5c063c:c.instructions+=7;goto B5c063c;
case 0x5c0644:c.instructions+=6;goto B5c0644;
case 0x5c064c:c.instructions+=5;goto B5c064c;
case 0x5c0653:c.instructions+=4;goto B5c0653;
case 0x5c065a:c.instructions+=3;goto B5c065a;
case 0x5c065c:c.instructions+=2;goto B5c065c;
case 0x5c065d:c.instructions+=1;goto B5c065d;
case 0x5c0660:goto L5c0660;
case 0x5c0662:c.instructions+=2;goto B5c0662;
case 0x5c0664:c.instructions+=1;goto B5c0664;
case 0x5c0666:goto L5c0666;
case 0x5c0667:c.instructions+=2;goto B5c0667;
case 0x5c066c:c.instructions+=1;goto B5c066c;
case 0x5c0671:goto L5c0671;
case 0x5c0674:c.instructions+=7;goto B5c0674;
case 0x5c0676:c.instructions+=6;goto B5c0676;
case 0x5c0677:c.instructions+=5;goto B5c0677;
case 0x5c0678:c.instructions+=4;goto B5c0678;
case 0x5c0679:c.instructions+=3;goto B5c0679;
case 0x5c067a:c.instructions+=2;goto B5c067a;
case 0x5c067d:c.instructions+=1;goto B5c067d;
case 0x5c0680:goto L5c0680;
case 0x5c0682:c.instructions+=2;goto B5c0682;
case 0x5c0687:c.instructions+=1;goto B5c0687;
case 0x5c0689:goto L5c0689;
case 0x5c068b:goto L5c068b;
case 0x5c068c:c.instructions+=5;goto B5c068c;
case 0x5c068d:c.instructions+=4;goto B5c068d;
case 0x5c068e:c.instructions+=3;goto B5c068e;
case 0x5c068f:c.instructions+=2;goto B5c068f;
case 0x5c0692:c.instructions+=1;goto B5c0692;
case 0x5c06a0:goto L5c06a0;
case 0x5c06a4:c.instructions+=9;goto B5c06a4;
case 0x5c06a7:c.instructions+=8;goto B5c06a7;
case 0x5c06a8:c.instructions+=7;goto B5c06a8;
case 0x5c06af:c.instructions+=6;goto B5c06af;
case 0x5c06b2:c.instructions+=5;goto B5c06b2;
case 0x5c06b6:c.instructions+=4;goto B5c06b6;
case 0x5c06b7:c.instructions+=3;goto B5c06b7;
case 0x5c06b9:c.instructions+=2;goto B5c06b9;
case 0x5c06bb:c.instructions+=1;goto B5c06bb;
case 0x5c06c1:goto L5c06c1;
case 0x5c06c8:c.instructions+=28;goto B5c06c8;
case 0x5c06cf:c.instructions+=27;goto B5c06cf;
case 0x5c06d3:c.instructions+=26;goto B5c06d3;
case 0x5c06da:c.instructions+=25;goto B5c06da;
case 0x5c06de:c.instructions+=24;goto B5c06de;
case 0x5c06e5:c.instructions+=23;goto B5c06e5;
case 0x5c06e9:c.instructions+=22;goto B5c06e9;
case 0x5c06f0:c.instructions+=21;goto B5c06f0;
case 0x5c06f4:c.instructions+=20;goto B5c06f4;
case 0x5c06fb:c.instructions+=19;goto B5c06fb;
case 0x5c06ff:c.instructions+=18;goto B5c06ff;
case 0x5c0706:c.instructions+=17;goto B5c0706;
case 0x5c070a:c.instructions+=16;goto B5c070a;
case 0x5c0711:c.instructions+=15;goto B5c0711;
case 0x5c0715:c.instructions+=14;goto B5c0715;
case 0x5c071c:c.instructions+=13;goto B5c071c;
case 0x5c0720:c.instructions+=12;goto B5c0720;
case 0x5c0724:c.instructions+=11;goto B5c0724;
case 0x5c072b:c.instructions+=10;goto B5c072b;
case 0x5c072f:c.instructions+=9;goto B5c072f;
case 0x5c0734:c.instructions+=8;goto B5c0734;
case 0x5c0738:c.instructions+=7;goto B5c0738;
case 0x5c073c:c.instructions+=6;goto B5c073c;
case 0x5c0740:c.instructions+=5;goto B5c0740;
case 0x5c0744:c.instructions+=4;goto B5c0744;
case 0x5c0746:c.instructions+=3;goto B5c0746;
case 0x5c0747:c.instructions+=2;goto B5c0747;
case 0x5c074c:c.instructions+=1;goto B5c074c;
case 0x5c0750:goto L5c0750;
case 0x5c0752:goto L5c0752;
case 0x5c0759:c.instructions+=34;goto B5c0759;
case 0x5c0760:c.instructions+=33;goto B5c0760;
case 0x5c0764:c.instructions+=32;goto B5c0764;
case 0x5c076b:c.instructions+=31;goto B5c076b;
case 0x5c076f:c.instructions+=30;goto B5c076f;
case 0x5c0776:c.instructions+=29;goto B5c0776;
case 0x5c077a:c.instructions+=28;goto B5c077a;
case 0x5c0781:c.instructions+=27;goto B5c0781;
case 0x5c0785:c.instructions+=26;goto B5c0785;
case 0x5c078c:c.instructions+=25;goto B5c078c;
case 0x5c0790:c.instructions+=24;goto B5c0790;
case 0x5c0797:c.instructions+=23;goto B5c0797;
case 0x5c079b:c.instructions+=22;goto B5c079b;
case 0x5c079e:c.instructions+=21;goto B5c079e;
case 0x5c07a2:c.instructions+=20;goto B5c07a2;
case 0x5c07a5:c.instructions+=19;goto B5c07a5;
case 0x5c07a9:c.instructions+=18;goto B5c07a9;
case 0x5c07b0:c.instructions+=17;goto B5c07b0;
case 0x5c07b4:c.instructions+=16;goto B5c07b4;
case 0x5c07b8:c.instructions+=15;goto B5c07b8;
case 0x5c07bc:c.instructions+=14;goto B5c07bc;
case 0x5c07c3:c.instructions+=13;goto B5c07c3;
case 0x5c07c7:c.instructions+=12;goto B5c07c7;
case 0x5c07cc:c.instructions+=11;goto B5c07cc;
case 0x5c07d0:c.instructions+=10;goto B5c07d0;
case 0x5c07d4:c.instructions+=9;goto B5c07d4;
case 0x5c07d5:c.instructions+=8;goto B5c07d5;
case 0x5c07d9:c.instructions+=7;goto B5c07d9;
case 0x5c07e1:c.instructions+=6;goto B5c07e1;
case 0x5c07e9:c.instructions+=5;goto B5c07e9;
case 0x5c07ed:c.instructions+=4;goto B5c07ed;
case 0x5c07f4:c.instructions+=3;goto B5c07f4;
case 0x5c07f6:c.instructions+=2;goto B5c07f6;
case 0x5c07f7:c.instructions+=1;goto B5c07f7;
case 0x5c07fa:goto L5c07fa;
case 0x5c07fc:c.instructions+=3;goto B5c07fc;
case 0x5c07fe:c.instructions+=2;goto B5c07fe;
case 0x5c07ff:c.instructions+=1;goto B5c07ff;
case 0x5c0801:goto L5c0801;
case 0x5c0802:c.instructions+=2;goto B5c0802;
case 0x5c0807:c.instructions+=1;goto B5c0807;
case 0x5c080c:goto L5c080c;
case 0x5c080f:goto L5c080f;
case 0x5c0811:c.instructions+=4;goto B5c0811;
case 0x5c0812:c.instructions+=3;goto B5c0812;
case 0x5c0813:c.instructions+=2;goto B5c0813;
case 0x5c0816:c.instructions+=1;goto B5c0816;
case 0x5c0820:goto L5c0820;
case 0x5c0824:c.instructions+=13;goto B5c0824;
case 0x5c082a:c.instructions+=12;goto B5c082a;
case 0x5c0830:c.instructions+=11;goto B5c0830;
case 0x5c0833:c.instructions+=10;goto B5c0833;
case 0x5c0837:c.instructions+=9;goto B5c0837;
case 0x5c083b:c.instructions+=8;goto B5c083b;
case 0x5c083f:c.instructions+=7;goto B5c083f;
case 0x5c0845:c.instructions+=6;goto B5c0845;
case 0x5c0846:c.instructions+=5;goto B5c0846;
case 0x5c084a:c.instructions+=4;goto B5c084a;
case 0x5c084e:c.instructions+=3;goto B5c084e;
case 0x5c084f:c.instructions+=2;goto B5c084f;
case 0x5c0850:c.instructions+=1;goto B5c0850;
case 0x5c0855:goto L5c0855;
case 0x5c085b:c.instructions+=6;goto B5c085b;
case 0x5c085f:c.instructions+=5;goto B5c085f;
case 0x5c0860:c.instructions+=4;goto B5c0860;
case 0x5c0864:c.instructions+=3;goto B5c0864;
case 0x5c0865:c.instructions+=2;goto B5c0865;
case 0x5c0866:c.instructions+=1;goto B5c0866;
case 0x5c086b:goto L5c086b;
case 0x5c086f:c.instructions+=5;goto B5c086f;
case 0x5c0875:c.instructions+=4;goto B5c0875;
case 0x5c0878:c.instructions+=3;goto B5c0878;
case 0x5c087a:c.instructions+=2;goto B5c087a;
case 0x5c087d:c.instructions+=1;goto B5c087d;
case 0x5c087f:goto L5c087f;
case 0x5c0883:c.instructions+=3;goto B5c0883;
case 0x5c0889:c.instructions+=2;goto B5c0889;
case 0x5c088d:c.instructions+=1;goto B5c088d;
case 0x5c0891:goto L5c0891;
case 0x5c0895:c.instructions+=4;goto B5c0895;
case 0x5c089b:c.instructions+=3;goto B5c089b;
case 0x5c089d:c.instructions+=2;goto B5c089d;
case 0x5c08a0:c.instructions+=1;goto B5c08a0;
case 0x5c08a2:goto L5c08a2;
case 0x5c08a6:c.instructions+=3;goto B5c08a6;
case 0x5c08ac:c.instructions+=2;goto B5c08ac;
case 0x5c08b0:c.instructions+=1;goto B5c08b0;
case 0x5c08b4:goto L5c08b4;
case 0x5c08ba:c.instructions+=4;goto B5c08ba;
case 0x5c08be:c.instructions+=3;goto B5c08be;
case 0x5c08c0:c.instructions+=2;goto B5c08c0;
case 0x5c08c3:c.instructions+=1;goto B5c08c3;
case 0x5c08c5:goto L5c08c5;
case 0x5c08cd:goto L5c08cd;
case 0x5c08d1:c.instructions+=6;goto B5c08d1;
case 0x5c08d5:c.instructions+=5;goto B5c08d5;
case 0x5c08db:c.instructions+=4;goto B5c08db;
case 0x5c08dc:c.instructions+=3;goto B5c08dc;
case 0x5c08dd:c.instructions+=2;goto B5c08dd;
case 0x5c08de:c.instructions+=1;goto B5c08de;
case 0x5c08e3:goto L5c08e3;
case 0x5c08e6:c.instructions+=1;goto B5c08e6;
case 0x5c08f0:goto L5c08f0;
case 0x5c08f4:c.instructions+=4;goto B5c08f4;
case 0x5c08fa:c.instructions+=3;goto B5c08fa;
case 0x5c08fb:c.instructions+=2;goto B5c08fb;
case 0x5c08fc:c.instructions+=1;goto B5c08fc;
case 0x5c0901:goto L5c0901;
case 0x5c0905:c.instructions+=6;goto B5c0905;
case 0x5c090b:c.instructions+=5;goto B5c090b;
case 0x5c090f:c.instructions+=4;goto B5c090f;
case 0x5c0913:c.instructions+=3;goto B5c0913;
case 0x5c0919:c.instructions+=2;goto B5c0919;
case 0x5c091c:c.instructions+=1;goto B5c091c;
case 0x5c0921:goto L5c0921;
case 0x5c0927:c.instructions+=2;goto B5c0927;
case 0x5c0928:c.instructions+=1;goto B5c0928;
case 0x5c092d:goto L5c092d;
case 0x5c0930:c.instructions+=1;goto B5c0930;
case 0x5c0940:goto L5c0940;
case 0x5c0945:c.instructions+=3;goto B5c0945;
case 0x5c094b:c.instructions+=2;goto B5c094b;
case 0x5c094d:c.instructions+=1;goto B5c094d;
case 0x5c0953:goto L5c0953;
case 0x5c0954:c.instructions+=3;goto B5c0954;
case 0x5c0955:c.instructions+=2;goto B5c0955;
case 0x5c0957:c.instructions+=1;goto B5c0957;
case 0x5c095c:goto L5c095c;
case 0x5c095e:c.instructions+=1;goto B5c095e;
case 0x5c0964:goto L5c0964;
case 0x5c0967:c.instructions+=2;goto B5c0967;
case 0x5c0969:c.instructions+=1;goto B5c0969;
case 0x5c096b:goto L5c096b;
case 0x5c096e:c.instructions+=2;goto B5c096e;
case 0x5c0970:c.instructions+=1;goto B5c0970;
case 0x5c0972:goto L5c0972;
case 0x5c0977:goto L5c0977;
case 0x5c097a:c.instructions+=3;goto B5c097a;
case 0x5c097f:c.instructions+=2;goto B5c097f;
case 0x5c0981:c.instructions+=1;goto B5c0981;
case 0x5c0983:goto L5c0983;
case 0x5c0985:goto L5c0985;
case 0x5c0989:c.instructions+=5;goto B5c0989;
case 0x5c098d:c.instructions+=4;goto B5c098d;
case 0x5c0993:c.instructions+=3;goto B5c0993;
case 0x5c0995:c.instructions+=2;goto B5c0995;
case 0x5c0998:c.instructions+=1;goto B5c0998;
case 0x5c099e:goto L5c099e;
case 0x5c09a3:c.instructions+=2;goto B5c09a3;
case 0x5c09a5:c.instructions+=1;goto B5c09a5;
case 0x5c09a7:goto L5c09a7;
case 0x5c09a9:goto L5c09a9;
case 0x5c09ad:c.instructions+=5;goto B5c09ad;
case 0x5c09b1:c.instructions+=4;goto B5c09b1;
case 0x5c09b7:c.instructions+=3;goto B5c09b7;
case 0x5c09b9:c.instructions+=2;goto B5c09b9;
case 0x5c09bc:c.instructions+=1;goto B5c09bc;
case 0x5c09c2:goto L5c09c2;
case 0x5c09c8:c.instructions+=4;goto B5c09c8;
case 0x5c09ce:c.instructions+=3;goto B5c09ce;
case 0x5c09d0:c.instructions+=2;goto B5c09d0;
case 0x5c09d3:c.instructions+=1;goto B5c09d3;
case 0x5c09d5:goto L5c09d5;
case 0x5c09db:c.instructions+=3;goto B5c09db;
case 0x5c09e1:c.instructions+=2;goto B5c09e1;
case 0x5c09e7:c.instructions+=1;goto B5c09e7;
case 0x5c09ed:goto L5c09ed;
case 0x5c09f3:c.instructions+=5;goto B5c09f3;
case 0x5c09f9:c.instructions+=4;goto B5c09f9;
case 0x5c09ff:c.instructions+=3;goto B5c09ff;
case 0x5c0a01:c.instructions+=2;goto B5c0a01;
case 0x5c0a04:c.instructions+=1;goto B5c0a04;
case 0x5c0a0a:goto L5c0a0a;
case 0x5c0a0c:c.instructions+=5;goto B5c0a0c;
case 0x5c0a12:c.instructions+=4;goto B5c0a12;
case 0x5c0a16:c.instructions+=3;goto B5c0a16;
case 0x5c0a1c:c.instructions+=2;goto B5c0a1c;
case 0x5c0a20:c.instructions+=1;goto B5c0a20;
case 0x5c0a26:goto L5c0a26;
case 0x5c0a27:c.instructions+=3;goto B5c0a27;
case 0x5c0a2b:c.instructions+=2;goto B5c0a2b;
case 0x5c0a2c:c.instructions+=1;goto B5c0a2c;
case 0x5c0a30:goto L5c0a30;
case 0x5c0a34:c.instructions+=1;goto B5c0a34;
case 0x5c0a36:goto L5c0a36;
case 0x5c0a3a:c.instructions+=1;goto B5c0a3a;
case 0x5c0a3c:goto L5c0a3c;
case 0x5c0a40:c.instructions+=8;goto B5c0a40;
case 0x5c0a41:c.instructions+=7;goto B5c0a41;
case 0x5c0a47:c.instructions+=6;goto B5c0a47;
case 0x5c0a4a:c.instructions+=5;goto B5c0a4a;
case 0x5c0a4e:c.instructions+=4;goto B5c0a4e;
case 0x5c0a52:c.instructions+=3;goto B5c0a52;
case 0x5c0a58:c.instructions+=2;goto B5c0a58;
case 0x5c0a5b:c.instructions+=1;goto B5c0a5b;
case 0x5c0a60:goto L5c0a60;
case 0x5c0a63:c.instructions+=2;goto B5c0a63;
case 0x5c0a65:c.instructions+=1;goto B5c0a65;
case 0x5c0a67:goto L5c0a67;
case 0x5c0a6a:c.instructions+=5;goto B5c0a6a;
case 0x5c0a6b:c.instructions+=4;goto B5c0a6b;
case 0x5c0a6f:c.instructions+=3;goto B5c0a6f;
case 0x5c0a74:c.instructions+=2;goto B5c0a74;
case 0x5c0a75:c.instructions+=1;goto B5c0a75;
case 0x5c0a7a:goto L5c0a7a;
case 0x5c0a7e:c.instructions+=2;goto B5c0a7e;
case 0x5c0a7f:c.instructions+=1;goto B5c0a7f;
case 0x5c0a84:goto L5c0a84;
case 0x5c0a85:c.instructions+=3;goto B5c0a85;
case 0x5c0a86:c.instructions+=2;goto B5c0a86;
case 0x5c0a87:c.instructions+=1;goto B5c0a87;
case 0x5c0a8c:goto L5c0a8c;
case 0x5c0a8f:c.instructions+=1;goto B5c0a8f;
case 0x5c0a91:goto L5c0a91;
case 0x5c0a94:c.instructions+=2;goto B5c0a94;
case 0x5c0a96:c.instructions+=1;goto B5c0a96;
case 0x5c0a98:goto L5c0a98;
case 0x5c0a9a:c.instructions+=3;goto B5c0a9a;
case 0x5c0a9b:c.instructions+=2;goto B5c0a9b;
case 0x5c0a9c:c.instructions+=1;goto B5c0a9c;
case 0x5c0a9e:goto L5c0a9e;
case 0x5c0aa3:c.instructions+=2;goto B5c0aa3;
case 0x5c0aa4:c.instructions+=1;goto B5c0aa4;
case 0x5c0aa9:goto L5c0aa9;
case 0x5c0aac:goto L5c0aac;
case 0x5c0aad:c.instructions+=1;goto B5c0aad;
case 0x5c0aae:goto L5c0aae;
case 0x5c0ab4:c.instructions+=1;goto B5c0ab4;
case 0x5c0ab5:goto L5c0ab5;
case 0x5c0abf:c.instructions+=1;goto B5c0abf;
case 0x5c0ad0:goto L5c0ad0;
case 0x5c0ad4:c.instructions+=7;goto B5c0ad4;
case 0x5c0ad7:c.instructions+=6;goto B5c0ad7;
case 0x5c0ada:c.instructions+=5;goto B5c0ada;
case 0x5c0adb:c.instructions+=4;goto B5c0adb;
case 0x5c0adc:c.instructions+=3;goto B5c0adc;
case 0x5c0add:c.instructions+=2;goto B5c0add;
case 0x5c0ade:c.instructions+=1;goto B5c0ade;
case 0x5c0ae0:goto L5c0ae0;
case 0x5c0ae6:c.instructions+=2;goto B5c0ae6;
case 0x5c0ae8:c.instructions+=1;goto B5c0ae8;
case 0x5c0aea:goto L5c0aea;
case 0x5c0aef:c.instructions+=1;goto B5c0aef;
case 0x5c0af5:goto L5c0af5;
case 0x5c0af7:c.instructions+=1;goto B5c0af7;
case 0x5c0afd:goto L5c0afd;
case 0x5c0aff:c.instructions+=7;goto B5c0aff;
case 0x5c0b01:c.instructions+=6;goto B5c0b01;
case 0x5c0b02:c.instructions+=5;goto B5c0b02;
case 0x5c0b03:c.instructions+=4;goto B5c0b03;
case 0x5c0b04:c.instructions+=3;goto B5c0b04;
case 0x5c0b05:c.instructions+=2;goto B5c0b05;
case 0x5c0b08:c.instructions+=1;goto B5c0b08;
case 0x5c0b09:goto L5c0b09;
case 0x5c0b0a:c.instructions+=12;goto B5c0b0a;
case 0x5c0b0b:c.instructions+=11;goto B5c0b0b;
case 0x5c0b0d:c.instructions+=10;goto B5c0b0d;
case 0x5c0b12:c.instructions+=9;goto B5c0b12;
case 0x5c0b13:c.instructions+=8;goto B5c0b13;
case 0x5c0b14:c.instructions+=7;goto B5c0b14;
case 0x5c0b15:c.instructions+=6;goto B5c0b15;
case 0x5c0b16:c.instructions+=5;goto B5c0b16;
case 0x5c0b18:c.instructions+=4;goto B5c0b18;
case 0x5c0b1c:c.instructions+=3;goto B5c0b1c;
case 0x5c0b20:c.instructions+=2;goto B5c0b20;
case 0x5c0b22:c.instructions+=1;goto B5c0b22;
case 0x5c0b24:goto L5c0b24;
case 0x5c0b29:c.instructions+=4;goto B5c0b29;
case 0x5c0b2b:c.instructions+=3;goto B5c0b2b;
case 0x5c0b2f:c.instructions+=2;goto B5c0b2f;
case 0x5c0b34:c.instructions+=1;goto B5c0b34;
case 0x5c0b36:goto L5c0b36;
case 0x5c0b3a:c.instructions+=2;goto B5c0b3a;
case 0x5c0b3b:c.instructions+=1;goto B5c0b3b;
case 0x5c0b41:goto L5c0b41;
case 0x5c0b43:c.instructions+=1;goto B5c0b43;
case 0x5c0b45:goto L5c0b45;
case 0x5c0b4b:goto L5c0b4b;
case 0x5c0b4d:c.instructions+=1;goto B5c0b4d;
case 0x5c0b53:goto L5c0b53;
case 0x5c0b54:c.instructions+=2;goto B5c0b54;
case 0x5c0b56:c.instructions+=1;goto B5c0b56;
case 0x5c0b5c:goto L5c0b5c;
case 0x5c0b5d:c.instructions+=2;goto B5c0b5d;
case 0x5c0b5f:c.instructions+=1;goto B5c0b5f;
case 0x5c0b65:goto L5c0b65;
case 0x5c0b69:c.instructions+=6;goto B5c0b69;
case 0x5c0b6a:c.instructions+=5;goto B5c0b6a;
case 0x5c0b6e:c.instructions+=4;goto B5c0b6e;
case 0x5c0b6f:c.instructions+=3;goto B5c0b6f;
case 0x5c0b70:c.instructions+=2;goto B5c0b70;
case 0x5c0b74:c.instructions+=1;goto B5c0b74;
case 0x5c0b7a:goto L5c0b7a;
case 0x5c0b7f:c.instructions+=2;goto B5c0b7f;
case 0x5c0b80:c.instructions+=1;goto B5c0b80;
case 0x5c0b86:goto L5c0b86;
case 0x5c0b88:c.instructions+=2;goto B5c0b88;
case 0x5c0b89:c.instructions+=1;goto B5c0b89;
case 0x5c0b8f:goto L5c0b8f;
case 0x5c0b91:c.instructions+=2;goto B5c0b91;
case 0x5c0b92:c.instructions+=1;goto B5c0b92;
case 0x5c0b98:goto L5c0b98;
case 0x5c0b9a:c.instructions+=4;goto B5c0b9a;
case 0x5c0ba0:c.instructions+=3;goto B5c0ba0;
case 0x5c0ba4:c.instructions+=2;goto B5c0ba4;
case 0x5c0ba5:c.instructions+=1;goto B5c0ba5;
case 0x5c0ba7:goto L5c0ba7;
case 0x5c0ba9:c.instructions+=5;goto B5c0ba9;
case 0x5c0bad:c.instructions+=4;goto B5c0bad;
case 0x5c0bb1:c.instructions+=3;goto B5c0bb1;
case 0x5c0bb5:c.instructions+=2;goto B5c0bb5;
case 0x5c0bb6:c.instructions+=1;goto B5c0bb6;
case 0x5c0bbc:goto L5c0bbc;
case 0x5c0bc0:c.instructions+=2;goto B5c0bc0;
case 0x5c0bc1:c.instructions+=1;goto B5c0bc1;
case 0x5c0bc3:goto L5c0bc3;
case 0x5c0bc5:c.instructions+=6;goto B5c0bc5;
case 0x5c0bc9:c.instructions+=5;goto B5c0bc9;
case 0x5c0bcd:c.instructions+=4;goto B5c0bcd;
case 0x5c0bd1:c.instructions+=3;goto B5c0bd1;
case 0x5c0bd2:c.instructions+=2;goto B5c0bd2;
case 0x5c0bd3:c.instructions+=1;goto B5c0bd3;
case 0x5c0bd9:goto L5c0bd9;
case 0x5c0bdd:c.instructions+=3;goto B5c0bdd;
case 0x5c0bde:c.instructions+=2;goto B5c0bde;
case 0x5c0bdf:c.instructions+=1;goto B5c0bdf;
case 0x5c0be5:goto L5c0be5;
case 0x5c0be6:c.instructions+=2;goto B5c0be6;
case 0x5c0be7:c.instructions+=1;goto B5c0be7;
case 0x5c0bed:goto L5c0bed;
case 0x5c0bf1:c.instructions+=50;goto B5c0bf1;
case 0x5c0bf5:c.instructions+=49;goto B5c0bf5;
case 0x5c0bf9:c.instructions+=48;goto B5c0bf9;
case 0x5c0bfd:c.instructions+=47;goto B5c0bfd;
case 0x5c0c01:c.instructions+=46;goto B5c0c01;
case 0x5c0c03:c.instructions+=45;goto B5c0c03;
case 0x5c0c05:c.instructions+=44;goto B5c0c05;
case 0x5c0c07:c.instructions+=43;goto B5c0c07;
case 0x5c0c0c:c.instructions+=42;goto B5c0c0c;
case 0x5c0c10:c.instructions+=41;goto B5c0c10;
case 0x5c0c14:c.instructions+=40;goto B5c0c14;
case 0x5c0c18:c.instructions+=39;goto B5c0c18;
case 0x5c0c1c:c.instructions+=38;goto B5c0c1c;
case 0x5c0c22:c.instructions+=37;goto B5c0c22;
case 0x5c0c26:c.instructions+=36;goto B5c0c26;
case 0x5c0c2a:c.instructions+=35;goto B5c0c2a;
case 0x5c0c2c:c.instructions+=34;goto B5c0c2c;
case 0x5c0c2e:c.instructions+=33;goto B5c0c2e;
case 0x5c0c32:c.instructions+=32;goto B5c0c32;
case 0x5c0c36:c.instructions+=31;goto B5c0c36;
case 0x5c0c3a:c.instructions+=30;goto B5c0c3a;
case 0x5c0c3c:c.instructions+=29;goto B5c0c3c;
case 0x5c0c40:c.instructions+=28;goto B5c0c40;
case 0x5c0c42:c.instructions+=27;goto B5c0c42;
case 0x5c0c44:c.instructions+=26;goto B5c0c44;
case 0x5c0c46:c.instructions+=25;goto B5c0c46;
case 0x5c0c4b:c.instructions+=24;goto B5c0c4b;
case 0x5c0c4f:c.instructions+=23;goto B5c0c4f;
case 0x5c0c53:c.instructions+=22;goto B5c0c53;
case 0x5c0c59:c.instructions+=21;goto B5c0c59;
case 0x5c0c5d:c.instructions+=20;goto B5c0c5d;
case 0x5c0c61:c.instructions+=19;goto B5c0c61;
case 0x5c0c65:c.instructions+=18;goto B5c0c65;
case 0x5c0c69:c.instructions+=17;goto B5c0c69;
case 0x5c0c6d:c.instructions+=16;goto B5c0c6d;
case 0x5c0c71:c.instructions+=15;goto B5c0c71;
case 0x5c0c73:c.instructions+=14;goto B5c0c73;
case 0x5c0c75:c.instructions+=13;goto B5c0c75;
case 0x5c0c7a:c.instructions+=12;goto B5c0c7a;
case 0x5c0c7c:c.instructions+=11;goto B5c0c7c;
case 0x5c0c80:c.instructions+=10;goto B5c0c80;
case 0x5c0c84:c.instructions+=9;goto B5c0c84;
case 0x5c0c8a:c.instructions+=8;goto B5c0c8a;
case 0x5c0c8e:c.instructions+=7;goto B5c0c8e;
case 0x5c0c92:c.instructions+=6;goto B5c0c92;
case 0x5c0c96:c.instructions+=5;goto B5c0c96;
case 0x5c0c98:c.instructions+=4;goto B5c0c98;
case 0x5c0c9a:c.instructions+=3;goto B5c0c9a;
case 0x5c0c9c:c.instructions+=2;goto B5c0c9c;
case 0x5c0c9e:c.instructions+=1;goto B5c0c9e;
case 0x5c0ca3:goto L5c0ca3;
case 0x5c0ca7:c.instructions+=4;goto B5c0ca7;
case 0x5c0cab:c.instructions+=3;goto B5c0cab;
case 0x5c0caf:c.instructions+=2;goto B5c0caf;
case 0x5c0cb5:c.instructions+=1;goto B5c0cb5;
case 0x5c0cba:goto L5c0cba;
case 0x5c0cbf:c.instructions+=1;goto B5c0cbf;
case 0x5c0cc5:goto L5c0cc5;
case 0x5c0cc6:c.instructions+=5;goto B5c0cc6;
case 0x5c0cc7:c.instructions+=4;goto B5c0cc7;
case 0x5c0cc8:c.instructions+=3;goto B5c0cc8;
case 0x5c0cc9:c.instructions+=2;goto B5c0cc9;
case 0x5c0ccc:c.instructions+=1;goto B5c0ccc;
case 0x5c0cd0:goto L5c0cd0;
case 0x5c0cd5:c.instructions+=5;goto B5c0cd5;
case 0x5c0cd6:c.instructions+=4;goto B5c0cd6;
case 0x5c0cd8:c.instructions+=3;goto B5c0cd8;
case 0x5c0cda:c.instructions+=2;goto B5c0cda;
case 0x5c0cdb:c.instructions+=1;goto B5c0cdb;
case 0x5c0cdd:goto L5c0cdd;
case 0x5c0ce1:c.instructions+=3;goto B5c0ce1;
case 0x5c0ce5:c.instructions+=2;goto B5c0ce5;
case 0x5c0cea:c.instructions+=1;goto B5c0cea;
case 0x5c0cf0:goto L5c0cf0;
case 0x5c0cf2:c.instructions+=1;goto B5c0cf2;
case 0x5c0cf4:goto L5c0cf4;
case 0x5c0cf7:c.instructions+=1;goto B5c0cf7;
case 0x5c0cf9:goto L5c0cf9;
case 0x5c0cfc:c.instructions+=4;goto B5c0cfc;
case 0x5c0cff:c.instructions+=3;goto B5c0cff;
case 0x5c0d00:c.instructions+=2;goto B5c0d00;
case 0x5c0d02:c.instructions+=1;goto B5c0d02;
case 0x5c0d04:goto L5c0d04;
case 0x5c0d0a:c.instructions+=3;goto B5c0d0a;
case 0x5c0d0b:c.instructions+=2;goto B5c0d0b;
case 0x5c0d0c:c.instructions+=1;goto B5c0d0c;
case 0x5c0d0d:goto L5c0d0d;
case 0x5c0d10:c.instructions+=4;goto B5c0d10;
case 0x5c0d17:c.instructions+=3;goto B5c0d17;
case 0x5c0d18:c.instructions+=2;goto B5c0d18;
case 0x5c0d19:c.instructions+=1;goto B5c0d19;
case 0x5c0d20:goto L5c0d20;
case 0x5c0d25:c.instructions+=1;goto B5c0d25;
case 0x5c0d30:goto L5c0d30;
case 0x5c0d31:c.instructions+=1;goto B5c0d31;
case 0x5c0d37:goto L5c0d37;
case 0x5c0d3c:c.instructions+=2;goto B5c0d3c;
case 0x5c0d3e:c.instructions+=1;goto B5c0d3e;
case 0x5c0d40:goto L5c0d40;
case 0x5c0d45:goto L5c0d45;
case 0x5c0d47:c.instructions+=1;goto B5c0d47;
case 0x5c0d49:goto L5c0d49;
case 0x5c0d53:c.instructions+=1;goto B5c0d53;
case 0x5c0d55:goto L5c0d55;
case 0x5c0d57:goto L5c0d57;
case 0x5c0d61:goto L5c0d61;
case 0x5c0d67:c.instructions+=2;goto B5c0d67;
case 0x5c0d69:c.instructions+=1;goto B5c0d69;
case 0x5c0d6b:goto L5c0d6b;
case 0x5c0d6d:c.instructions+=1;goto B5c0d6d;
case 0x5c0d6f:goto L5c0d6f;
case 0x5c0d74:c.instructions+=1;goto B5c0d74;
case 0x5c0d79:goto L5c0d79;
case 0x5c0d7c:c.instructions+=2;goto B5c0d7c;
case 0x5c0d7e:c.instructions+=1;goto B5c0d7e;
case 0x5c0d80:goto L5c0d80;
case 0x5c0d82:c.instructions+=4;goto B5c0d82;
case 0x5c0d87:c.instructions+=3;goto B5c0d87;
case 0x5c0d8c:c.instructions+=2;goto B5c0d8c;
case 0x5c0d8d:c.instructions+=1;goto B5c0d8d;
case 0x5c0d8f:goto L5c0d8f;
case 0x5c0d92:c.instructions+=1;goto B5c0d92;
case 0x5c0d94:goto L5c0d94;
case 0x5c0d96:c.instructions+=2;goto B5c0d96;
case 0x5c0d97:c.instructions+=1;goto B5c0d97;
case 0x5c0d98:goto L5c0d98;
case 0x5c0d9a:c.instructions+=3;goto B5c0d9a;
case 0x5c0d9f:c.instructions+=2;goto B5c0d9f;
case 0x5c0da0:c.instructions+=1;goto B5c0da0;
case 0x5c0da5:goto L5c0da5;
case 0x5c0da8:c.instructions+=2;goto B5c0da8;
case 0x5c0daa:c.instructions+=1;goto B5c0daa;
case 0x5c0dac:goto L5c0dac;
case 0x5c0db6:c.instructions+=1;goto B5c0db6;
case 0x5c0db8:goto L5c0db8;
case 0x5c0dba:c.instructions+=2;goto B5c0dba;
case 0x5c0dbb:c.instructions+=1;goto B5c0dbb;
case 0x5c0dc0:goto L5c0dc0;
case 0x5c0dc1:c.instructions+=4;goto B5c0dc1;
case 0x5c0dc7:c.instructions+=3;goto B5c0dc7;
case 0x5c0dc8:c.instructions+=2;goto B5c0dc8;
case 0x5c0dcd:c.instructions+=1;goto B5c0dcd;
case 0x5c0dd2:goto L5c0dd2;
case 0x5c0dd4:c.instructions+=2;goto B5c0dd4;
case 0x5c0dd6:c.instructions+=1;goto B5c0dd6;
case 0x5c0dd8:goto L5c0dd8;
case 0x5c0dd9:c.instructions+=3;goto B5c0dd9;
case 0x5c0ddd:c.instructions+=2;goto B5c0ddd;
case 0x5c0dde:c.instructions+=1;goto B5c0dde;
case 0x5c0de2:goto L5c0de2;
case 0x5c0de5:c.instructions+=6;goto B5c0de5;
case 0x5c0de8:c.instructions+=5;goto B5c0de8;
case 0x5c0de9:c.instructions+=4;goto B5c0de9;
case 0x5c0dea:c.instructions+=3;goto B5c0dea;
case 0x5c0deb:c.instructions+=2;goto B5c0deb;
case 0x5c0dec:c.instructions+=1;goto B5c0dec;
case 0x5c0df1:goto L5c0df1;
case 0x5c0df4:c.instructions+=4;goto B5c0df4;
case 0x5c0df6:c.instructions+=3;goto B5c0df6;
case 0x5c0df9:c.instructions+=2;goto B5c0df9;
case 0x5c0dfb:c.instructions+=1;goto B5c0dfb;
case 0x5c0dfd:goto L5c0dfd;
case 0x5c0dfe:c.instructions+=1;goto B5c0dfe;
case 0x5c0dff:goto L5c0dff;
case 0x5c0e00:c.instructions+=2;goto B5c0e00;
case 0x5c0e01:c.instructions+=1;goto B5c0e01;
case 0x5c0e10:goto L5c0e10;
case 0x5c0e11:c.instructions+=10;goto B5c0e11;
case 0x5c0e13:c.instructions+=9;goto B5c0e13;
case 0x5c0e16:c.instructions+=8;goto B5c0e16;
case 0x5c0e19:c.instructions+=7;goto B5c0e19;
case 0x5c0e1e:c.instructions+=6;goto B5c0e1e;
case 0x5c0e20:c.instructions+=5;goto B5c0e20;
case 0x5c0e21:c.instructions+=4;goto B5c0e21;
case 0x5c0e22:c.instructions+=3;goto B5c0e22;
case 0x5c0e25:c.instructions+=2;goto B5c0e25;
case 0x5c0e26:c.instructions+=1;goto B5c0e26;
case 0x5c0e28:goto L5c0e28;
case 0x5c0e2a:c.instructions+=7;goto B5c0e2a;
case 0x5c0e2d:c.instructions+=6;goto B5c0e2d;
case 0x5c0e30:c.instructions+=5;goto B5c0e30;
case 0x5c0e37:c.instructions+=4;goto B5c0e37;
case 0x5c0e3a:c.instructions+=3;goto B5c0e3a;
case 0x5c0e3b:c.instructions+=2;goto B5c0e3b;
case 0x5c0e40:c.instructions+=1;goto B5c0e40;
case 0x5c0e45:goto L5c0e45;
case 0x5c0e46:c.instructions+=1;goto B5c0e46;
case 0x5c0e4b:goto L5c0e4b;
case 0x5c0e4e:c.instructions+=5;goto B5c0e4e;
case 0x5c0e52:c.instructions+=4;goto B5c0e52;
case 0x5c0e53:c.instructions+=3;goto B5c0e53;
case 0x5c0e58:c.instructions+=2;goto B5c0e58;
case 0x5c0e5c:c.instructions+=1;goto B5c0e5c;
case 0x5c0e61:goto L5c0e61;
case 0x5c0e6b:goto L5c0e6b;
case 0x5c0e6e:c.instructions+=31;goto B5c0e6e;
case 0x5c0e71:c.instructions+=30;goto B5c0e71;
case 0x5c0e75:c.instructions+=29;goto B5c0e75;
case 0x5c0e78:c.instructions+=28;goto B5c0e78;
case 0x5c0e7c:c.instructions+=27;goto B5c0e7c;
case 0x5c0e80:c.instructions+=26;goto B5c0e80;
case 0x5c0e86:c.instructions+=25;goto B5c0e86;
case 0x5c0e89:c.instructions+=24;goto B5c0e89;
case 0x5c0e8f:c.instructions+=23;goto B5c0e8f;
case 0x5c0e92:c.instructions+=22;goto B5c0e92;
case 0x5c0e98:c.instructions+=21;goto B5c0e98;
case 0x5c0e9b:c.instructions+=20;goto B5c0e9b;
case 0x5c0e9f:c.instructions+=19;goto B5c0e9f;
case 0x5c0ea3:c.instructions+=18;goto B5c0ea3;
case 0x5c0ea5:c.instructions+=17;goto B5c0ea5;
case 0x5c0ea9:c.instructions+=16;goto B5c0ea9;
case 0x5c0ead:c.instructions+=15;goto B5c0ead;
case 0x5c0eb1:c.instructions+=14;goto B5c0eb1;
case 0x5c0eb7:c.instructions+=13;goto B5c0eb7;
case 0x5c0eba:c.instructions+=12;goto B5c0eba;
case 0x5c0ec0:c.instructions+=11;goto B5c0ec0;
case 0x5c0ec3:c.instructions+=10;goto B5c0ec3;
case 0x5c0ec9:c.instructions+=9;goto B5c0ec9;
case 0x5c0ecc:c.instructions+=8;goto B5c0ecc;
case 0x5c0ed0:c.instructions+=7;goto B5c0ed0;
case 0x5c0ed4:c.instructions+=6;goto B5c0ed4;
case 0x5c0ed6:c.instructions+=5;goto B5c0ed6;
case 0x5c0eda:c.instructions+=4;goto B5c0eda;
case 0x5c0ede:c.instructions+=3;goto B5c0ede;
case 0x5c0ee2:c.instructions+=2;goto B5c0ee2;
case 0x5c0ee5:c.instructions+=1;goto B5c0ee5;
case 0x5c0eea:goto L5c0eea;
case 0x5c0eed:c.instructions+=3;goto B5c0eed;
case 0x5c0eef:c.instructions+=2;goto B5c0eef;
case 0x5c0ef2:c.instructions+=1;goto B5c0ef2;
case 0x5c0ef7:goto L5c0ef7;
case 0x5c0efa:c.instructions+=3;goto B5c0efa;
case 0x5c0efc:c.instructions+=2;goto B5c0efc;
case 0x5c0eff:c.instructions+=1;goto B5c0eff;
case 0x5c0f04:goto L5c0f04;
case 0x5c0f07:c.instructions+=3;goto B5c0f07;
case 0x5c0f09:c.instructions+=2;goto B5c0f09;
case 0x5c0f0c:c.instructions+=1;goto B5c0f0c;
case 0x5c0f11:goto L5c0f11;
case 0x5c0f14:c.instructions+=13;goto B5c0f14;
case 0x5c0f17:c.instructions+=12;goto B5c0f17;
case 0x5c0f19:c.instructions+=11;goto B5c0f19;
case 0x5c0f1c:c.instructions+=10;goto B5c0f1c;
case 0x5c0f20:c.instructions+=9;goto B5c0f20;
case 0x5c0f24:c.instructions+=8;goto B5c0f24;
case 0x5c0f27:c.instructions+=7;goto B5c0f27;
case 0x5c0f2b:c.instructions+=6;goto B5c0f2b;
case 0x5c0f2f:c.instructions+=5;goto B5c0f2f;
case 0x5c0f30:c.instructions+=4;goto B5c0f30;
case 0x5c0f35:c.instructions+=3;goto B5c0f35;
case 0x5c0f39:c.instructions+=2;goto B5c0f39;
case 0x5c0f3d:c.instructions+=1;goto B5c0f3d;
case 0x5c0f42:goto L5c0f42;
case 0x5c0f47:c.instructions+=9;goto B5c0f47;
case 0x5c0f48:c.instructions+=8;goto B5c0f48;
case 0x5c0f49:c.instructions+=7;goto B5c0f49;
case 0x5c0f4a:c.instructions+=6;goto B5c0f4a;
case 0x5c0f4f:c.instructions+=5;goto B5c0f4f;
case 0x5c0f54:c.instructions+=4;goto B5c0f54;
case 0x5c0f55:c.instructions+=3;goto B5c0f55;
case 0x5c0f57:c.instructions+=2;goto B5c0f57;
case 0x5c0f58:c.instructions+=1;goto B5c0f58;
case 0x5c0f60:goto L5c0f60;
case 0x5c0f65:c.instructions+=4;goto B5c0f65;
case 0x5c0f69:c.instructions+=3;goto B5c0f69;
case 0x5c0f6b:c.instructions+=2;goto B5c0f6b;
case 0x5c0f6f:c.instructions+=1;goto B5c0f6f;
case 0x5c0f71:goto L5c0f71;
case 0x5c0f74:c.instructions+=1;goto B5c0f74;
case 0x5c0f77:goto L5c0f77;
case 0x5c0f7d:c.instructions+=2;goto B5c0f7d;
case 0x5c0f7f:c.instructions+=1;goto B5c0f7f;
case 0x5c0f81:goto L5c0f81;
case 0x5c0f84:c.instructions+=1;goto B5c0f84;
case 0x5c0f87:goto L5c0f87;
case 0x5c0f90:goto L5c0f90;
case 0x5c0f91:c.instructions+=6;goto B5c0f91;
case 0x5c0f97:c.instructions+=5;goto B5c0f97;
case 0x5c0f98:c.instructions+=4;goto B5c0f98;
case 0x5c0f99:c.instructions+=3;goto B5c0f99;
case 0x5c0f9a:c.instructions+=2;goto B5c0f9a;
case 0x5c0f9f:c.instructions+=1;goto B5c0f9f;
case 0x5c0fa2:goto L5c0fa2;
case 0x5c0fa8:c.instructions+=2;goto B5c0fa8;
case 0x5c0faa:c.instructions+=1;goto B5c0faa;
case 0x5c0fac:goto L5c0fac;
case 0x5c0faf:c.instructions+=1;goto B5c0faf;
case 0x5c0fb4:goto L5c0fb4;
case 0x5c0fb6:c.instructions+=1;goto B5c0fb6;
case 0x5c0fb8:goto L5c0fb8;
case 0x5c0fba:c.instructions+=1;goto B5c0fba;
case 0x5c0fbc:goto L5c0fbc;
case 0x5c0fc3:c.instructions+=2;goto B5c0fc3;
case 0x5c0fc5:c.instructions+=1;goto B5c0fc5;
case 0x5c0fc7:goto L5c0fc7;
case 0x5c0fcd:c.instructions+=7;goto B5c0fcd;
case 0x5c0fd0:c.instructions+=6;goto B5c0fd0;
case 0x5c0fd3:c.instructions+=5;goto B5c0fd3;
case 0x5c0fd7:c.instructions+=4;goto B5c0fd7;
case 0x5c0fda:c.instructions+=3;goto B5c0fda;
case 0x5c0fde:c.instructions+=2;goto B5c0fde;
case 0x5c0fe2:c.instructions+=1;goto B5c0fe2;
case 0x5c0fe3:goto L5c0fe3;
case 0x5c0fe9:c.instructions+=2;goto B5c0fe9;
case 0x5c0fef:c.instructions+=1;goto B5c0fef;
case 0x5c0ff1:goto L5c0ff1;
case 0x5c0ff2:c.instructions+=5;goto B5c0ff2;
case 0x5c0ff3:c.instructions+=4;goto B5c0ff3;
case 0x5c0ff4:c.instructions+=3;goto B5c0ff4;
case 0x5c0ffa:c.instructions+=2;goto B5c0ffa;
case 0x5c0ffb:c.instructions+=1;goto B5c0ffb;
default:missing_instruction(c.pc);}
B5c0001:L5c0001:{c.instructions+=4;NFSU2_TR(0x5c0001);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5c0005:{NFSU2_TR(0x5c0005);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5c0007:{NFSU2_TR(0x5c0007);
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
B5c0009:{NFSU2_TR(0x5c0009);
if(r1(R+518)){{goto L5c0053;}}
}
B5c000b:L5c000b:{c.instructions+=5;NFSU2_TR(0x5c000b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c000f:{NFSU2_TR(0x5c000f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c0011:{NFSU2_TR(0x5c0011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c0013:{NFSU2_TR(0x5c0013);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0014:{NFSU2_TR(0x5c0014);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0017ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c0017:L5c0017:{c.instructions+=4;NFSU2_TR(0x5c0017);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5c001b:{NFSU2_TR(0x5c001b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c001d:{NFSU2_TR(0x5c001d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c001e:{NFSU2_TR(0x5c001e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0021ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c0021:L5c0021:{c.instructions+=3;NFSU2_TR(0x5c0021);
__builtin_memmove((R+12),(R+0),4);
}
B5c0023:{NFSU2_TR(0x5c0023);
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
B5c0025:{NFSU2_TR(0x5c0025);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c003e;}}
}
B5c0027:L5c0027:{c.instructions+=3;NFSU2_TR(0x5c0027);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0028:{NFSU2_TR(0x5c0028);
u8 U[4];
w4(U+0,u32(0x7a3a6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c002d:{NFSU2_TR(0x5c002d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0032ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c0032:L5c0032:{c.instructions+=7;NFSU2_TR(0x5c0032);
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
B5c0035:{NFSU2_TR(0x5c0035);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c0036:{NFSU2_TR(0x5c0036);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c0037:{NFSU2_TR(0x5c0037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c0038:{NFSU2_TR(0x5c0038);
__builtin_memmove((R+0),(R+12),4);
}
B5c003a:{NFSU2_TR(0x5c003a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c003b:{NFSU2_TR(0x5c003b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c003e:L5c003e:{c.instructions+=8;NFSU2_TR(0x5c003e);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B5c0042:{NFSU2_TR(0x5c0042);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B5c004a:{NFSU2_TR(0x5c004a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c004b:{NFSU2_TR(0x5c004b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c004c:{NFSU2_TR(0x5c004c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c004d:{NFSU2_TR(0x5c004d);
__builtin_memmove((R+0),(R+12),4);
}
B5c004f:{NFSU2_TR(0x5c004f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c0050:{NFSU2_TR(0x5c0050);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0053:L5c0053:{c.instructions+=3;NFSU2_TR(0x5c0053);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0054:{NFSU2_TR(0x5c0054);
u8 U[4];
w4(U+0,u32(0x7a3a18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0059:{NFSU2_TR(0x5c0059);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c005eull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c005e:L5c005e:{c.instructions+=7;NFSU2_TR(0x5c005e);
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
B5c0061:{NFSU2_TR(0x5c0061);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c0062:{NFSU2_TR(0x5c0062);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c0063:{NFSU2_TR(0x5c0063);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c0064:{NFSU2_TR(0x5c0064);
__builtin_memmove((R+0),(R+12),4);
}
B5c0066:{NFSU2_TR(0x5c0066);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c0067:{NFSU2_TR(0x5c0067);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0070:L5c0070:{c.instructions+=6;NFSU2_TR(0x5c0070);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0074:{NFSU2_TR(0x5c0074);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c0078:{NFSU2_TR(0x5c0078);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c007b:{NFSU2_TR(0x5c007b);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5c007f:{NFSU2_TR(0x5c007f);
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
B5c0081:{NFSU2_TR(0x5c0081);
if(r1(R+518)){{goto L5c00a9;}}
}
B5c0083:L5c0083:{c.instructions+=6;NFSU2_TR(0x5c0083);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c0085:{NFSU2_TR(0x5c0085);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c0089:{NFSU2_TR(0x5c0089);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c008a:{NFSU2_TR(0x5c008a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c008b:{NFSU2_TR(0x5c008b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c0093:{NFSU2_TR(0x5c0093);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0096ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c0096:L5c0096:{c.instructions+=2;NFSU2_TR(0x5c0096);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c0098:{NFSU2_TR(0x5c0098);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c00a9;}}
}
B5c009a:L5c009a:{c.instructions+=5;NFSU2_TR(0x5c009a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c009e:{NFSU2_TR(0x5c009e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5c00a0:{NFSU2_TR(0x5c00a0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5c00a3:{NFSU2_TR(0x5c00a3);
__builtin_memmove((R+0),(R+518),1);
}
B5c00a6:{NFSU2_TR(0x5c00a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c00a9:L5c00a9:{c.instructions+=2;NFSU2_TR(0x5c00a9);
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
B5c00ab:{NFSU2_TR(0x5c00ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c00b0:L5c00b0:{c.instructions+=4;NFSU2_TR(0x5c00b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c00b4:{NFSU2_TR(0x5c00b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5c00b7:{NFSU2_TR(0x5c00b7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x64ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c00ba:{NFSU2_TR(0x5c00ba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5c00c1;}}
}
B5c00bc:L5c00bc:{c.instructions+=1;NFSU2_TR(0x5c00bc);
w4(R+4,u32(0x64ull));
}
B5c00c1:L5c00c1:{c.instructions+=13;NFSU2_TR(0x5c00c1);
__builtin_memmove((R+8),(R+4),4);
}
B5c00c3:{NFSU2_TR(0x5c00c3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2710ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5c00c9:{NFSU2_TR(0x5c00c9);
w4(R+0,u32(0x51eb851full));
}
B5c00ce:{NFSU2_TR(0x5c00ce);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+8)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5c00d0:{NFSU2_TR(0x5c00d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c00d1:{NFSU2_TR(0x5c00d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5c00d4:{NFSU2_TR(0x5c00d4);
u8 U[4];
w4(U+0,u32(0x7a3accull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c00d9:{NFSU2_TR(0x5c00d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c00e1:{NFSU2_TR(0x5c00e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c00e9:{NFSU2_TR(0x5c00e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c00f1:{NFSU2_TR(0x5c00f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c00f9:{NFSU2_TR(0x5c00f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c00fd:{NFSU2_TR(0x5c00fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0102ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c0102:L5c0102:{c.instructions+=5;NFSU2_TR(0x5c0102);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0106:{NFSU2_TR(0x5c0106);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c0108:{NFSU2_TR(0x5c0108);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c010b:{NFSU2_TR(0x5c010b);
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
B5c010d:{NFSU2_TR(0x5c010d);
if(r1(R+518)){{goto L5c011e;}}
}
B5c010f:L5c010f:{c.instructions+=6;NFSU2_TR(0x5c010f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c0111:{NFSU2_TR(0x5c0111);
__builtin_memmove((R+8),(R+16),4);
}
B5c0115:{NFSU2_TR(0x5c0115);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0116:{NFSU2_TR(0x5c0116);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0118:{NFSU2_TR(0x5c0118);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0119:{NFSU2_TR(0x5c0119);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c011cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c011c:L5c011c:{c.instructions+=1;NFSU2_TR(0x5c011c);
{goto L5c0122;}
}
B5c011e:L5c011e:{c.instructions+=1;NFSU2_TR(0x5c011e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0122:L5c0122:{c.instructions+=2;NFSU2_TR(0x5c0122);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c0124:{NFSU2_TR(0x5c0124);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c0133;}}
}
B5c0126:L5c0126:{c.instructions+=2;NFSU2_TR(0x5c0126);
u8 U[4];
w4(U+0,u32(0x7a3aa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c012b:{NFSU2_TR(0x5c012b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0130ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c0130:L5c0130:{c.instructions+=1;NFSU2_TR(0x5c0130);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c0133:L5c0133:{c.instructions+=2;NFSU2_TR(0x5c0133);
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
B5c0136:{NFSU2_TR(0x5c0136);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0140:L5c0140:{c.instructions+=9;NFSU2_TR(0x5c0140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5c0143:{NFSU2_TR(0x5c0143);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0147:{NFSU2_TR(0x5c0147);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c0149:{NFSU2_TR(0x5c0149);
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
B5c014b:{NFSU2_TR(0x5c014b);
u8 U[4];
w4(U+0,u32(0x14ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0153:{NFSU2_TR(0x5c0153);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c015b:{NFSU2_TR(0x5c015b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c0163:{NFSU2_TR(0x5c0163);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c016b:{NFSU2_TR(0x5c016b);
if(r1(R+518)){{goto L5c017c;}}
}
B5c016d:L5c016d:{c.instructions+=6;NFSU2_TR(0x5c016d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c016f:{NFSU2_TR(0x5c016f);
__builtin_memmove((R+8),(R+16),4);
}
B5c0173:{NFSU2_TR(0x5c0173);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0174:{NFSU2_TR(0x5c0174);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0176:{NFSU2_TR(0x5c0176);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0177:{NFSU2_TR(0x5c0177);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c017aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c017a:L5c017a:{c.instructions+=1;NFSU2_TR(0x5c017a);
{goto L5c0180;}
}
B5c017c:L5c017c:{c.instructions+=1;NFSU2_TR(0x5c017c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0180:L5c0180:{c.instructions+=2;NFSU2_TR(0x5c0180);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c0182:{NFSU2_TR(0x5c0182);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c019a;}}
}
B5c0184:L5c0184:{c.instructions+=2;NFSU2_TR(0x5c0184);
u8 U[4];
w4(U+0,u32(0x7a3ae0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0189:{NFSU2_TR(0x5c0189);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c018eull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c018e:L5c018e:{c.instructions+=4;NFSU2_TR(0x5c018e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c0191:{NFSU2_TR(0x5c0191);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5c0194:{NFSU2_TR(0x5c0194);
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
B5c0197:{NFSU2_TR(0x5c0197);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c019a:L5c019a:{c.instructions+=8;NFSU2_TR(0x5c019a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c019e:{NFSU2_TR(0x5c019e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5c01a1:{NFSU2_TR(0x5c01a1);
w4(R+0,u32(0xd1b71759ull));
}
B5c01a6:{NFSU2_TR(0x5c01a6);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5c01a8:{NFSU2_TR(0x5c01a8);
__builtin_memmove((R+0),(R+8),4);
}
B5c01aa:{NFSU2_TR(0x5c01aa);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5c01ad:{NFSU2_TR(0x5c01ad);
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
B5c01b0:{NFSU2_TR(0x5c01b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c01c0:L5c01c0:{c.instructions+=6;NFSU2_TR(0x5c01c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c01c1:{NFSU2_TR(0x5c01c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c01c2:{NFSU2_TR(0x5c01c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c01c3:{NFSU2_TR(0x5c01c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c01c6:{NFSU2_TR(0x5c01c6);
w4(R+12,u32(0x2ull));
}
B5c01cb:{NFSU2_TR(0x5c01cb);
{goto L5c01d0;}
}
B5c01d0:L5c01d0:{c.instructions+=1;NFSU2_TR(0x5c01d0);
w4(R+28,u32(0x8ull));
}
B5c01d5:L5c01d5:{c.instructions+=3;NFSU2_TR(0x5c01d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c01d7:{NFSU2_TR(0x5c01d7);
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
B5c01d9:{NFSU2_TR(0x5c01d9);
if(r1(R+518)){{goto L5c01e7;}}
}
B5c01db:L5c01db:{c.instructions+=3;NFSU2_TR(0x5c01db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c01dd:{NFSU2_TR(0x5c01dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c01de:{NFSU2_TR(0x5c01de);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c01e1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c01e1:L5c01e1:{c.instructions+=1;NFSU2_TR(0x5c01e1);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5c01e7:L5c01e7:{c.instructions+=3;NFSU2_TR(0x5c01e7);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5c01ea:{NFSU2_TR(0x5c01ea);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5c01eb:{NFSU2_TR(0x5c01eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c01d5u);}goto L5c01d5;}}
}
B5c01ed:L5c01ed:{c.instructions+=2;NFSU2_TR(0x5c01ed);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c01ee:{NFSU2_TR(0x5c01ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c01d0u);}goto L5c01d0;}}
}
B5c01f0:L5c01f0:{c.instructions+=4;NFSU2_TR(0x5c01f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c01f1:{NFSU2_TR(0x5c01f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c01f2:{NFSU2_TR(0x5c01f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c01f3:{NFSU2_TR(0x5c01f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0200:L5c0200:{c.instructions+=14;NFSU2_TR(0x5c0200);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0204:{NFSU2_TR(0x5c0204);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x5cull))));
}
B5c0207:{NFSU2_TR(0x5c0207);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0208:{NFSU2_TR(0x5c0208);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c020c:{NFSU2_TR(0x5c020c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c020d:{NFSU2_TR(0x5c020d);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c0211:{NFSU2_TR(0x5c0211);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5c0214:{NFSU2_TR(0x5c0214);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0215:{NFSU2_TR(0x5c0215);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5c0219:{NFSU2_TR(0x5c0219);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c021b:{NFSU2_TR(0x5c021b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c021c:{NFSU2_TR(0x5c021c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5c021e:{NFSU2_TR(0x5c021e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c0220:{NFSU2_TR(0x5c0220);
if(r1(R+518)){{goto L5c022a;}}
}
B5c0222:L5c0222:{c.instructions+=4;NFSU2_TR(0x5c0222);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0223:{NFSU2_TR(0x5c0223);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0224:{NFSU2_TR(0x5c0224);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0225:{NFSU2_TR(0x5c0225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c022aull));
TAIL_STATIC(0x5bfff0u,5bf);
}
B5c022a:L5c022a:{c.instructions+=3;NFSU2_TR(0x5c022a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c022d:{NFSU2_TR(0x5c022d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c022f:{NFSU2_TR(0x5c022f);
if(r1(R+518)){{goto L5c036b;}}
}
B5c0235:L5c0235:{c.instructions+=21;NFSU2_TR(0x5c0235);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c023c:{NFSU2_TR(0x5c023c);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0243:{NFSU2_TR(0x5c0243);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0247:{NFSU2_TR(0x5c0247);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c024e:{NFSU2_TR(0x5c024e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0252:{NFSU2_TR(0x5c0252);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0259:{NFSU2_TR(0x5c0259);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c025d:{NFSU2_TR(0x5c025d);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0264:{NFSU2_TR(0x5c0264);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0268:{NFSU2_TR(0x5c0268);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c026f:{NFSU2_TR(0x5c026f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0273:{NFSU2_TR(0x5c0273);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c027a:{NFSU2_TR(0x5c027a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c027e:{NFSU2_TR(0x5c027e);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0285:{NFSU2_TR(0x5c0285);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0289:{NFSU2_TR(0x5c0289);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0290:{NFSU2_TR(0x5c0290);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0294:{NFSU2_TR(0x5c0294);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0298:{NFSU2_TR(0x5c0298);
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
B5c029a:{NFSU2_TR(0x5c029a);
w4(R+4,u32(0xeull));
}
B5c029f:{NFSU2_TR(0x5c029f);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5c02a3:L5c02a3:{c.instructions+=1;NFSU2_TR(0x5c02a3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5c02a5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c02a3u);}goto L5c02a3;}
}
B5c02a5:L5c02a5:{c.instructions+=36;NFSU2_TR(0x5c02a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c02ac:{NFSU2_TR(0x5c02ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c02b0:{NFSU2_TR(0x5c02b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c02b4:{NFSU2_TR(0x5c02b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c02bb:{NFSU2_TR(0x5c02bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c02bf:{NFSU2_TR(0x5c02bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c02c6:{NFSU2_TR(0x5c02c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c02ca:{NFSU2_TR(0x5c02ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c02ce:{NFSU2_TR(0x5c02ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c02d5:{NFSU2_TR(0x5c02d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c02d9:{NFSU2_TR(0x5c02d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c02e0:{NFSU2_TR(0x5c02e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c02e4:{NFSU2_TR(0x5c02e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c02e8:{NFSU2_TR(0x5c02e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c02ec:{NFSU2_TR(0x5c02ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c02f3:{NFSU2_TR(0x5c02f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c02f7:{NFSU2_TR(0x5c02f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c02fb:{NFSU2_TR(0x5c02fb);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0302:{NFSU2_TR(0x5c0302);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0304:{NFSU2_TR(0x5c0304);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0308:{NFSU2_TR(0x5c0308);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c030c:{NFSU2_TR(0x5c030c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c030d:{NFSU2_TR(0x5c030d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c0311:{NFSU2_TR(0x5c0311);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0312:{NFSU2_TR(0x5c0312);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0319:{NFSU2_TR(0x5c0319);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c031d:{NFSU2_TR(0x5c031d);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0321:{NFSU2_TR(0x5c0321);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c0328:{NFSU2_TR(0x5c0328);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0329:{NFSU2_TR(0x5c0329);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c0331:{NFSU2_TR(0x5c0331);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x38ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c0339:{NFSU2_TR(0x5c0339);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c0341:{NFSU2_TR(0x5c0341);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0345:{NFSU2_TR(0x5c0345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c0347:{NFSU2_TR(0x5c0347);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0348:{NFSU2_TR(0x5c0348);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c034bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c034b:L5c034b:{c.instructions+=3;NFSU2_TR(0x5c034b);
__builtin_memmove((R+28),(R+0),4);
}
B5c034d:{NFSU2_TR(0x5c034d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c034f:{NFSU2_TR(0x5c034f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c036b;}}
}
B5c0351:L5c0351:{c.instructions+=3;NFSU2_TR(0x5c0351);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0352:{NFSU2_TR(0x5c0352);
u8 U[4];
w4(U+0,u32(0x7a3b0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0357:{NFSU2_TR(0x5c0357);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c035cull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c035c:L5c035c:{c.instructions+=8;NFSU2_TR(0x5c035c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c035f:{NFSU2_TR(0x5c035f);
__builtin_memmove((R+0),(R+28),4);
}
B5c0361:{NFSU2_TR(0x5c0361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c0362:{NFSU2_TR(0x5c0362);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c0363:{NFSU2_TR(0x5c0363);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c0364:{NFSU2_TR(0x5c0364);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c0365:{NFSU2_TR(0x5c0365);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x5cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x5cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x5cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c0368:{NFSU2_TR(0x5c0368);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x54ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c036b:L5c036b:{c.instructions+=3;NFSU2_TR(0x5c036b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5c036e:{NFSU2_TR(0x5c036e);
w4(R+0,u32(0x80004005ull));
}
B5c0373:{NFSU2_TR(0x5c0373);
if(r1(R+518)){{goto L5c0377;}}
}
B5c0375:L5c0375:{c.instructions+=1;NFSU2_TR(0x5c0375);
__builtin_memmove((R+0),(R+28),4);
}
B5c0377:L5c0377:{c.instructions+=6;NFSU2_TR(0x5c0377);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c0378:{NFSU2_TR(0x5c0378);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c0379:{NFSU2_TR(0x5c0379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c037a:{NFSU2_TR(0x5c037a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c037b:{NFSU2_TR(0x5c037b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x5cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x5cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x5cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c037e:{NFSU2_TR(0x5c037e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x54ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0390:L5c0390:{c.instructions+=10;NFSU2_TR(0x5c0390);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0394:{NFSU2_TR(0x5c0394);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x5cull))));
}
B5c0397:{NFSU2_TR(0x5c0397);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0398:{NFSU2_TR(0x5c0398);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c039c:{NFSU2_TR(0x5c039c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5c039f:{NFSU2_TR(0x5c039f);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5c03a3:{NFSU2_TR(0x5c03a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c03a4:{NFSU2_TR(0x5c03a4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5c03a6:{NFSU2_TR(0x5c03a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c03a8:{NFSU2_TR(0x5c03a8);
if(r1(R+518)){{goto L5c04cb;}}
}
B5c03ae:L5c03ae:{c.instructions+=22;NFSU2_TR(0x5c03ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c03b5:{NFSU2_TR(0x5c03b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c03bc:{NFSU2_TR(0x5c03bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c03c0:{NFSU2_TR(0x5c03c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c03c7:{NFSU2_TR(0x5c03c7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c03cb:{NFSU2_TR(0x5c03cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c03d2:{NFSU2_TR(0x5c03d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c03d6:{NFSU2_TR(0x5c03d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c03dd:{NFSU2_TR(0x5c03dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c03e1:{NFSU2_TR(0x5c03e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c03e8:{NFSU2_TR(0x5c03e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c03ec:{NFSU2_TR(0x5c03ec);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c03f3:{NFSU2_TR(0x5c03f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c03f7:{NFSU2_TR(0x5c03f7);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c03fe:{NFSU2_TR(0x5c03fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0402:{NFSU2_TR(0x5c0402);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0409:{NFSU2_TR(0x5c0409);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c040d:{NFSU2_TR(0x5c040d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0411:{NFSU2_TR(0x5c0411);
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
B5c0413:{NFSU2_TR(0x5c0413);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0414:{NFSU2_TR(0x5c0414);
w4(R+4,u32(0xeull));
}
B5c0419:{NFSU2_TR(0x5c0419);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5c041d:L5c041d:{c.instructions+=1;NFSU2_TR(0x5c041d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5c041f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c041du);}goto L5c041d;}
}
B5c041f:L5c041f:{c.instructions+=33;NFSU2_TR(0x5c041f);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0423:{NFSU2_TR(0x5c0423);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0427:{NFSU2_TR(0x5c0427);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c042b:{NFSU2_TR(0x5c042b);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0432:{NFSU2_TR(0x5c0432);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0436:{NFSU2_TR(0x5c0436);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c043d:{NFSU2_TR(0x5c043d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0441:{NFSU2_TR(0x5c0441);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0445:{NFSU2_TR(0x5c0445);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0449:{NFSU2_TR(0x5c0449);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c044d:{NFSU2_TR(0x5c044d);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0454:{NFSU2_TR(0x5c0454);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0458:{NFSU2_TR(0x5c0458);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c045f:{NFSU2_TR(0x5c045f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c0463:{NFSU2_TR(0x5c0463);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0467:{NFSU2_TR(0x5c0467);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c046b:{NFSU2_TR(0x5c046b);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c046f:{NFSU2_TR(0x5c046f);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0476:{NFSU2_TR(0x5c0476);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c047a:{NFSU2_TR(0x5c047a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c047e:{NFSU2_TR(0x5c047e);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0482:{NFSU2_TR(0x5c0482);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0486:{NFSU2_TR(0x5c0486);
u8 U[4];
w4(U+0,u32(0x140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c048b:{NFSU2_TR(0x5c048b);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c048f:{NFSU2_TR(0x5c048f);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c0493:{NFSU2_TR(0x5c0493);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0494:{NFSU2_TR(0x5c0494);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c049c:{NFSU2_TR(0x5c049c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x38ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c04a4:{NFSU2_TR(0x5c04a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c04ac:{NFSU2_TR(0x5c04ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c04b0:{NFSU2_TR(0x5c04b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c04b2:{NFSU2_TR(0x5c04b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c04b3:{NFSU2_TR(0x5c04b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c04b6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c04b6:L5c04b6:{c.instructions+=4;NFSU2_TR(0x5c04b6);
__builtin_memmove((R+24),(R+0),4);
}
B5c04b8:{NFSU2_TR(0x5c04b8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c04ba:{NFSU2_TR(0x5c04ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c04bb:{NFSU2_TR(0x5c04bb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c04cb;}}
}
B5c04bd:L5c04bd:{c.instructions+=3;NFSU2_TR(0x5c04bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c04be:{NFSU2_TR(0x5c04be);
u8 U[4];
w4(U+0,u32(0x7a3b44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c04c3:{NFSU2_TR(0x5c04c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c04c8ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c04c8:L5c04c8:{c.instructions+=1;NFSU2_TR(0x5c04c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c04cb:L5c04cb:{c.instructions+=5;NFSU2_TR(0x5c04cb);
__builtin_memmove((R+0),(R+24),4);
}
B5c04cd:{NFSU2_TR(0x5c04cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c04ce:{NFSU2_TR(0x5c04ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c04cf:{NFSU2_TR(0x5c04cf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x5cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x5cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x5cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c04d2:{NFSU2_TR(0x5c04d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c04e0:L5c04e0:{c.instructions+=14;NFSU2_TR(0x5c04e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c04e4:{NFSU2_TR(0x5c04e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x78ull))));
}
B5c04e7:{NFSU2_TR(0x5c04e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c04e8:{NFSU2_TR(0x5c04e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c04ef:{NFSU2_TR(0x5c04ef);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c04f0:{NFSU2_TR(0x5c04f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c04f7:{NFSU2_TR(0x5c04f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5c04fa:{NFSU2_TR(0x5c04fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c04fb:{NFSU2_TR(0x5c04fb);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5c04ff:{NFSU2_TR(0x5c04ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c0501:{NFSU2_TR(0x5c0501);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0502:{NFSU2_TR(0x5c0502);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5c0504:{NFSU2_TR(0x5c0504);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c0506:{NFSU2_TR(0x5c0506);
if(r1(R+518)){{goto L5c0510;}}
}
B5c0508:L5c0508:{c.instructions+=4;NFSU2_TR(0x5c0508);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0509:{NFSU2_TR(0x5c0509);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c050a:{NFSU2_TR(0x5c050a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c050b:{NFSU2_TR(0x5c050b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0510ull));
TAIL_STATIC(0x5bfff0u,5bf);
}
B5c0510:L5c0510:{c.instructions+=4;NFSU2_TR(0x5c0510);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c0513:{NFSU2_TR(0x5c0513);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5c0515:{NFSU2_TR(0x5c0515);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c0517:{NFSU2_TR(0x5c0517);
if(r1(R+518)){{goto L5c0680;}}
}
B5c051d:L5c051d:{c.instructions+=28;NFSU2_TR(0x5c051d);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0524:{NFSU2_TR(0x5c0524);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c052b:{NFSU2_TR(0x5c052b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c052f:{NFSU2_TR(0x5c052f);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0536:{NFSU2_TR(0x5c0536);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c053a:{NFSU2_TR(0x5c053a);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0541:{NFSU2_TR(0x5c0541);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0545:{NFSU2_TR(0x5c0545);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c054c:{NFSU2_TR(0x5c054c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0550:{NFSU2_TR(0x5c0550);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0557:{NFSU2_TR(0x5c0557);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c055b:{NFSU2_TR(0x5c055b);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0562:{NFSU2_TR(0x5c0562);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0566:{NFSU2_TR(0x5c0566);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c056d:{NFSU2_TR(0x5c056d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0571:{NFSU2_TR(0x5c0571);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0578:{NFSU2_TR(0x5c0578);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c057c:{NFSU2_TR(0x5c057c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0580:{NFSU2_TR(0x5c0580);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0587:{NFSU2_TR(0x5c0587);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c058b:{NFSU2_TR(0x5c058b);
w4(R+0,u32(0x1f40ull));
}
B5c0590:{NFSU2_TR(0x5c0590);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0594:{NFSU2_TR(0x5c0594);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0598:{NFSU2_TR(0x5c0598);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c059c:{NFSU2_TR(0x5c059c);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c05a0:{NFSU2_TR(0x5c05a0);
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
B5c05a2:{NFSU2_TR(0x5c05a2);
w4(R+4,u32(0xeull));
}
B5c05a7:{NFSU2_TR(0x5c05a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5c05ab:L5c05ab:{c.instructions+=1;NFSU2_TR(0x5c05ab);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5c05ad;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c05abu);}goto L5c05ab;}
}
B5c05ad:L5c05ad:{c.instructions+=38;NFSU2_TR(0x5c05ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c05b4:{NFSU2_TR(0x5c05b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c05bb:{NFSU2_TR(0x5c05bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c05bf:{NFSU2_TR(0x5c05bf);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c05c6:{NFSU2_TR(0x5c05c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c05ca:{NFSU2_TR(0x5c05ca);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c05d1:{NFSU2_TR(0x5c05d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c05d5:{NFSU2_TR(0x5c05d5);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c05dc:{NFSU2_TR(0x5c05dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c05e0:{NFSU2_TR(0x5c05e0);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c05e7:{NFSU2_TR(0x5c05e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c05eb:{NFSU2_TR(0x5c05eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c05ee:{NFSU2_TR(0x5c05ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c05f2:{NFSU2_TR(0x5c05f2);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c05f9:{NFSU2_TR(0x5c05f9);
u8 U[45];
w4(U+37,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
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
B5c05fc:{NFSU2_TR(0x5c05fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0600:{NFSU2_TR(0x5c0600);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0607:{NFSU2_TR(0x5c0607);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c060b:{NFSU2_TR(0x5c060b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c060c:{NFSU2_TR(0x5c060c);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0613:{NFSU2_TR(0x5c0613);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c0617:{NFSU2_TR(0x5c0617);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c061b:{NFSU2_TR(0x5c061b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c061c:{NFSU2_TR(0x5c061c);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c0620:{NFSU2_TR(0x5c0620);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0621:{NFSU2_TR(0x5c0621);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0628:{NFSU2_TR(0x5c0628);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c062c:{NFSU2_TR(0x5c062c);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0633:{NFSU2_TR(0x5c0633);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c0637:{NFSU2_TR(0x5c0637);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0638:{NFSU2_TR(0x5c0638);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c063c:{NFSU2_TR(0x5c063c);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x1f4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c0644:{NFSU2_TR(0x5c0644);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x38ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c064c:{NFSU2_TR(0x5c064c);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0653:{NFSU2_TR(0x5c0653);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c065a:{NFSU2_TR(0x5c065a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c065c:{NFSU2_TR(0x5c065c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c065d:{NFSU2_TR(0x5c065d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0660ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c0660:L5c0660:{c.instructions+=3;NFSU2_TR(0x5c0660);
__builtin_memmove((R+28),(R+0),4);
}
B5c0662:{NFSU2_TR(0x5c0662);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5c0664:{NFSU2_TR(0x5c0664);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c0680;}}
}
B5c0666:L5c0666:{c.instructions+=3;NFSU2_TR(0x5c0666);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0667:{NFSU2_TR(0x5c0667);
u8 U[4];
w4(U+0,u32(0x7a3b7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c066c:{NFSU2_TR(0x5c066c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0671ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c0671:L5c0671:{c.instructions+=8;NFSU2_TR(0x5c0671);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c0674:{NFSU2_TR(0x5c0674);
__builtin_memmove((R+0),(R+28),4);
}
B5c0676:{NFSU2_TR(0x5c0676);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c0677:{NFSU2_TR(0x5c0677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c0678:{NFSU2_TR(0x5c0678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c0679:{NFSU2_TR(0x5c0679);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c067a:{NFSU2_TR(0x5c067a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x78ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x78ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x78ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c067d:{NFSU2_TR(0x5c067d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0680:L5c0680:{c.instructions+=3;NFSU2_TR(0x5c0680);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5c0682:{NFSU2_TR(0x5c0682);
w4(R+0,u32(0x80004005ull));
}
B5c0687:{NFSU2_TR(0x5c0687);
if(r1(R+518)){{goto L5c068b;}}
}
B5c0689:L5c0689:{c.instructions+=1;NFSU2_TR(0x5c0689);
__builtin_memmove((R+0),(R+28),4);
}
B5c068b:L5c068b:{c.instructions+=6;NFSU2_TR(0x5c068b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c068c:{NFSU2_TR(0x5c068c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c068d:{NFSU2_TR(0x5c068d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c068e:{NFSU2_TR(0x5c068e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c068f:{NFSU2_TR(0x5c068f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x78ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x78ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x78ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c0692:{NFSU2_TR(0x5c0692);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c06a0:L5c06a0:{c.instructions+=10;NFSU2_TR(0x5c06a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c06a4:{NFSU2_TR(0x5c06a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x78ull))));
}
B5c06a7:{NFSU2_TR(0x5c06a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c06a8:{NFSU2_TR(0x5c06a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c06af:{NFSU2_TR(0x5c06af);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5c06b2:{NFSU2_TR(0x5c06b2);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5c06b6:{NFSU2_TR(0x5c06b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c06b7:{NFSU2_TR(0x5c06b7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5c06b9:{NFSU2_TR(0x5c06b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c06bb:{NFSU2_TR(0x5c06bb);
if(r1(R+518)){{goto L5c080f;}}
}
B5c06c1:L5c06c1:{c.instructions+=29;NFSU2_TR(0x5c06c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c06c8:{NFSU2_TR(0x5c06c8);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c06cf:{NFSU2_TR(0x5c06cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c06d3:{NFSU2_TR(0x5c06d3);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c06da:{NFSU2_TR(0x5c06da);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c06de:{NFSU2_TR(0x5c06de);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c06e5:{NFSU2_TR(0x5c06e5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c06e9:{NFSU2_TR(0x5c06e9);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c06f0:{NFSU2_TR(0x5c06f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c06f4:{NFSU2_TR(0x5c06f4);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c06fb:{NFSU2_TR(0x5c06fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c06ff:{NFSU2_TR(0x5c06ff);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0706:{NFSU2_TR(0x5c0706);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c070a:{NFSU2_TR(0x5c070a);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0711:{NFSU2_TR(0x5c0711);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0715:{NFSU2_TR(0x5c0715);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c071c:{NFSU2_TR(0x5c071c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0720:{NFSU2_TR(0x5c0720);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0724:{NFSU2_TR(0x5c0724);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c072b:{NFSU2_TR(0x5c072b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c072f:{NFSU2_TR(0x5c072f);
w4(R+0,u32(0x1f40ull));
}
B5c0734:{NFSU2_TR(0x5c0734);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0738:{NFSU2_TR(0x5c0738);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c073c:{NFSU2_TR(0x5c073c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0740:{NFSU2_TR(0x5c0740);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0744:{NFSU2_TR(0x5c0744);
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
B5c0746:{NFSU2_TR(0x5c0746);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0747:{NFSU2_TR(0x5c0747);
w4(R+4,u32(0xeull));
}
B5c074c:{NFSU2_TR(0x5c074c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5c0750:L5c0750:{c.instructions+=1;NFSU2_TR(0x5c0750);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5c0752;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c0750u);}goto L5c0750;}
}
B5c0752:L5c0752:{c.instructions+=35;NFSU2_TR(0x5c0752);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0759:{NFSU2_TR(0x5c0759);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0760:{NFSU2_TR(0x5c0760);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0764:{NFSU2_TR(0x5c0764);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c076b:{NFSU2_TR(0x5c076b);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c076f:{NFSU2_TR(0x5c076f);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0776:{NFSU2_TR(0x5c0776);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c077a:{NFSU2_TR(0x5c077a);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0781:{NFSU2_TR(0x5c0781);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0785:{NFSU2_TR(0x5c0785);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c078c:{NFSU2_TR(0x5c078c);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0790:{NFSU2_TR(0x5c0790);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0797:{NFSU2_TR(0x5c0797);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c079b:{NFSU2_TR(0x5c079b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c079e:{NFSU2_TR(0x5c079e);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c07a2:{NFSU2_TR(0x5c07a2);
u8 U[45];
w4(U+37,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
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
B5c07a5:{NFSU2_TR(0x5c07a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c07a9:{NFSU2_TR(0x5c07a9);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c07b0:{NFSU2_TR(0x5c07b0);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c07b4:{NFSU2_TR(0x5c07b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c07b8:{NFSU2_TR(0x5c07b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c07bc:{NFSU2_TR(0x5c07bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c07c3:{NFSU2_TR(0x5c07c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c07c7:{NFSU2_TR(0x5c07c7);
u8 U[4];
w4(U+0,u32(0x140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c07cc:{NFSU2_TR(0x5c07cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c07d0:{NFSU2_TR(0x5c07d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c07d4:{NFSU2_TR(0x5c07d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c07d5:{NFSU2_TR(0x5c07d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c07d9:{NFSU2_TR(0x5c07d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x1f4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c07e1:{NFSU2_TR(0x5c07e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x38ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c07e9:{NFSU2_TR(0x5c07e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c07ed:{NFSU2_TR(0x5c07ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c07f4:{NFSU2_TR(0x5c07f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c07f6:{NFSU2_TR(0x5c07f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c07f7:{NFSU2_TR(0x5c07f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c07faull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c07fa:L5c07fa:{c.instructions+=4;NFSU2_TR(0x5c07fa);
__builtin_memmove((R+24),(R+0),4);
}
B5c07fc:{NFSU2_TR(0x5c07fc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c07fe:{NFSU2_TR(0x5c07fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c07ff:{NFSU2_TR(0x5c07ff);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c080f;}}
}
B5c0801:L5c0801:{c.instructions+=3;NFSU2_TR(0x5c0801);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0802:{NFSU2_TR(0x5c0802);
u8 U[4];
w4(U+0,u32(0x7a3bb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0807:{NFSU2_TR(0x5c0807);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c080cull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5c080c:L5c080c:{c.instructions+=1;NFSU2_TR(0x5c080c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c080f:L5c080f:{c.instructions+=5;NFSU2_TR(0x5c080f);
__builtin_memmove((R+0),(R+24),4);
}
B5c0811:{NFSU2_TR(0x5c0811);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c0812:{NFSU2_TR(0x5c0812);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c0813:{NFSU2_TR(0x5c0813);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x78ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x78ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x78ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c0816:{NFSU2_TR(0x5c0816);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0820:L5c0820:{c.instructions+=14;NFSU2_TR(0x5c0820);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0824:{NFSU2_TR(0x5c0824);
__builtin_memmove((R+8),gp(0x8709f4),4);
}
B5c082a:{NFSU2_TR(0x5c082a);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c0830:{NFSU2_TR(0x5c0830);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5c0833:{NFSU2_TR(0x5c0833);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c0837:{NFSU2_TR(0x5c0837);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c083b:{NFSU2_TR(0x5c083b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c083f:{NFSU2_TR(0x5c083f);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c0845:{NFSU2_TR(0x5c0845);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0846:{NFSU2_TR(0x5c0846);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c084a:{NFSU2_TR(0x5c084a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c084e:{NFSU2_TR(0x5c084e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c084f:{NFSU2_TR(0x5c084f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0850:{NFSU2_TR(0x5c0850);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0855ull));
TAIL_STATIC(0x51d380u,51d);
}
B5c0855:L5c0855:{c.instructions+=7;NFSU2_TR(0x5c0855);
__builtin_memmove((R+8),gp(0x8709f4),4);
}
B5c085b:{NFSU2_TR(0x5c085b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c085f:{NFSU2_TR(0x5c085f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0860:{NFSU2_TR(0x5c0860);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c0864:{NFSU2_TR(0x5c0864);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0865:{NFSU2_TR(0x5c0865);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0866:{NFSU2_TR(0x5c0866);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c086bull));
TAIL_STATIC(0x51d170u,51d);
}
B5c086b:L5c086b:{c.instructions+=6;NFSU2_TR(0x5c086b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c086f:{NFSU2_TR(0x5c086f);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5c0875:{NFSU2_TR(0x5c0875);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5c0878:{NFSU2_TR(0x5c0878);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5c087a:{NFSU2_TR(0x5c087a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c087d:{NFSU2_TR(0x5c087d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c0891;}}
}
B5c087f:L5c087f:{c.instructions+=4;NFSU2_TR(0x5c087f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0883:{NFSU2_TR(0x5c0883);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c0889:{NFSU2_TR(0x5c0889);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5c088d:{NFSU2_TR(0x5c088d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c0891:L5c0891:{c.instructions+=5;NFSU2_TR(0x5c0891);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0895:{NFSU2_TR(0x5c0895);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5c089b:{NFSU2_TR(0x5c089b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5c089d:{NFSU2_TR(0x5c089d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c08a0:{NFSU2_TR(0x5c08a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c08b4;}}
}
B5c08a2:L5c08a2:{c.instructions+=4;NFSU2_TR(0x5c08a2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c08a6:{NFSU2_TR(0x5c08a6);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c08ac:{NFSU2_TR(0x5c08ac);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5c08b0:{NFSU2_TR(0x5c08b0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c08b4:L5c08b4:{c.instructions+=5;NFSU2_TR(0x5c08b4);
{u32 ea_=u32(u32(7996444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c08ba:{NFSU2_TR(0x5c08ba);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5c08be:{NFSU2_TR(0x5c08be);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5c08c0:{NFSU2_TR(0x5c08c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c08c3:{NFSU2_TR(0x5c08c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c08cd;}}
}
B5c08c5:L5c08c5:{c.instructions+=1;NFSU2_TR(0x5c08c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xc3700000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c08cd:L5c08cd:{c.instructions+=7;NFSU2_TR(0x5c08cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c08d1:{NFSU2_TR(0x5c08d1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c08d5:{NFSU2_TR(0x5c08d5);
__builtin_memmove((R+8),gp(0x8709f4),4);
}
B5c08db:{NFSU2_TR(0x5c08db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c08dc:{NFSU2_TR(0x5c08dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c08dd:{NFSU2_TR(0x5c08dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c08de:{NFSU2_TR(0x5c08de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c08e3ull));
TAIL_STATIC(0x51d380u,51d);
}
B5c08e3:L5c08e3:{c.instructions+=2;NFSU2_TR(0x5c08e3);
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
B5c08e6:{NFSU2_TR(0x5c08e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c08f0:L5c08f0:{c.instructions+=5;NFSU2_TR(0x5c08f0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c08f4:{NFSU2_TR(0x5c08f4);
__builtin_memmove((R+4),gp(0x8709f4),4);
}
B5c08fa:{NFSU2_TR(0x5c08fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c08fb:{NFSU2_TR(0x5c08fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c08fc:{NFSU2_TR(0x5c08fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0901ull));
TAIL_STATIC(0x50c900u,50c);
}
B5c0901:L5c0901:{c.instructions+=7;NFSU2_TR(0x5c0901);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0905:{NFSU2_TR(0x5c0905);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c090b:{NFSU2_TR(0x5c090b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c090f:{NFSU2_TR(0x5c090f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0913:{NFSU2_TR(0x5c0913);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c0919:{NFSU2_TR(0x5c0919);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c091c:{NFSU2_TR(0x5c091c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0921ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c0820u);}goto L5c0820;}
}
B5c0921:L5c0921:{c.instructions+=3;NFSU2_TR(0x5c0921);
__builtin_memmove((R+8),gp(0x8709f4),4);
}
B5c0927:{NFSU2_TR(0x5c0927);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0928:{NFSU2_TR(0x5c0928);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c092dull));
TAIL_STATIC(0x50ca50u,50c);
}
B5c092d:L5c092d:{c.instructions+=2;NFSU2_TR(0x5c092d);
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
B5c0930:{NFSU2_TR(0x5c0930);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0940:L5c0940:{c.instructions+=4;NFSU2_TR(0x5c0940);
__builtin_memmove((R+0),gp(0x8709f4),4);
}
B5c0945:{NFSU2_TR(0x5c0945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x108ull))));
}
B5c094b:{NFSU2_TR(0x5c094b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c094d:{NFSU2_TR(0x5c094d);
if(r1(R+518)){{goto L5c0aae;}}
}
B5c0953:L5c0953:{c.instructions+=4;NFSU2_TR(0x5c0953);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0954:{NFSU2_TR(0x5c0954);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0955:{NFSU2_TR(0x5c0955);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5c0957:{NFSU2_TR(0x5c0957);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c095cull));
TAIL_STATIC(0x50c8e0u,50c);
}
B5c095c:L5c095c:{c.instructions+=2;NFSU2_TR(0x5c095c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c095e:{NFSU2_TR(0x5c095e);
if(r1(R+518)){{goto L5c0a9e;}}
}
B5c0964:L5c0964:{c.instructions+=3;NFSU2_TR(0x5c0964);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0967:{NFSU2_TR(0x5c0967);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c0969:{NFSU2_TR(0x5c0969);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c0977;}}
}
B5c096b:L5c096b:{c.instructions+=3;NFSU2_TR(0x5c096b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c096e:{NFSU2_TR(0x5c096e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c0970:{NFSU2_TR(0x5c0970);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c0964u);}goto L5c0964;}}
}
B5c0972:L5c0972:{c.instructions+=1;NFSU2_TR(0x5c0972);
{goto L5c0a9e;}
}
B5c0977:L5c0977:{c.instructions+=4;NFSU2_TR(0x5c0977);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c097a:{NFSU2_TR(0x5c097a);
__builtin_memmove((R+0),gp(0x8763e4),4);
}
B5c097f:{NFSU2_TR(0x5c097f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c0981:{NFSU2_TR(0x5c0981);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c0985;}}
}
B5c0983:L5c0983:{c.instructions+=1;NFSU2_TR(0x5c0983);
w4(R+0,u32(0-u32(r4(R+0))));
}
B5c0985:L5c0985:{c.instructions+=6;NFSU2_TR(0x5c0985);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0989:{NFSU2_TR(0x5c0989);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c098d:{NFSU2_TR(0x5c098d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5c0993:{NFSU2_TR(0x5c0993);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5c0995:{NFSU2_TR(0x5c0995);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c0998:{NFSU2_TR(0x5c0998);
if(r1(R+514)){{goto L5c0ab5;}}
}
B5c099e:L5c099e:{c.instructions+=3;NFSU2_TR(0x5c099e);
__builtin_memmove((R+0),gp(0x8763e8),4);
}
B5c09a3:{NFSU2_TR(0x5c09a3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c09a5:{NFSU2_TR(0x5c09a5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c09a9;}}
}
B5c09a7:L5c09a7:{c.instructions+=1;NFSU2_TR(0x5c09a7);
w4(R+0,u32(0-u32(r4(R+0))));
}
B5c09a9:L5c09a9:{c.instructions+=6;NFSU2_TR(0x5c09a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c09ad:{NFSU2_TR(0x5c09ad);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c09b1:{NFSU2_TR(0x5c09b1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5c09b7:{NFSU2_TR(0x5c09b7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5c09b9:{NFSU2_TR(0x5c09b9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c09bc:{NFSU2_TR(0x5c09bc);
if(r1(R+514)){{goto L5c0ab5;}}
}
B5c09c2:L5c09c2:{c.instructions+=5;NFSU2_TR(0x5c09c2);
{u32 ea_=u32(u32(8874068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c09c8:{NFSU2_TR(0x5c09c8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5c09ce:{NFSU2_TR(0x5c09ce);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5c09d0:{NFSU2_TR(0x5c09d0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5c09d3:{NFSU2_TR(0x5c09d3);
if(r1(R+514)){{goto L5c09ed;}}
}
B5c09d5:L5c09d5:{c.instructions+=4;NFSU2_TR(0x5c09d5);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c09db:{NFSU2_TR(0x5c09db);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c09e1:{NFSU2_TR(0x5c09e1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5c09e7:{NFSU2_TR(0x5c09e7);
{u32 ea_=u32(u32(8874068u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c09ed:L5c09ed:{c.instructions+=6;NFSU2_TR(0x5c09ed);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c09f3:{NFSU2_TR(0x5c09f3);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c09f9:{NFSU2_TR(0x5c09f9);
{u32 ea_=u32(u32(8874068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5c09ff:{NFSU2_TR(0x5c09ff);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5c0a01:{NFSU2_TR(0x5c0a01);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c0a04:{NFSU2_TR(0x5c0a04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c0a9e;}}
}
B5c0a0a:L5c0a0a:{c.instructions+=6;NFSU2_TR(0x5c0a0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c0a0c:{NFSU2_TR(0x5c0a0c);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c0a12:{NFSU2_TR(0x5c0a12);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c0a16:{NFSU2_TR(0x5c0a16);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c0a1c:{NFSU2_TR(0x5c0a1c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c0a20:{NFSU2_TR(0x5c0a20);
if(r1(R+518)){{goto L5c0a9e;}}
}
B5c0a26:L5c0a26:{c.instructions+=4;NFSU2_TR(0x5c0a26);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0a27:{NFSU2_TR(0x5c0a27);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c0a2b:{NFSU2_TR(0x5c0a2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0a2c:{NFSU2_TR(0x5c0a2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c0a30:L5c0a30:{c.instructions+=2;NFSU2_TR(0x5c0a30);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5c0a34:{NFSU2_TR(0x5c0a34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c0a91;}}
}
B5c0a36:L5c0a36:{c.instructions+=2;NFSU2_TR(0x5c0a36);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5c0a3a:{NFSU2_TR(0x5c0a3a);
if(r1(R+518)){{goto L5c0a91;}}
}
B5c0a3c:L5c0a3c:{c.instructions+=9;NFSU2_TR(0x5c0a3c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0a40:{NFSU2_TR(0x5c0a40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0a41:{NFSU2_TR(0x5c0a41);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c0a47:{NFSU2_TR(0x5c0a47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5c0a4a:{NFSU2_TR(0x5c0a4a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c0a4e:{NFSU2_TR(0x5c0a4e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0a52:{NFSU2_TR(0x5c0a52);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5c0a58:{NFSU2_TR(0x5c0a58);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c0a5b:{NFSU2_TR(0x5c0a5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0a60ull));
TAIL_STATIC(0x52d020u,52d);
}
B5c0a60:L5c0a60:{c.instructions+=3;NFSU2_TR(0x5c0a60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5c0a63:{NFSU2_TR(0x5c0a63);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c0a65:{NFSU2_TR(0x5c0a65);
if(r1(R+518)){{goto L5c0a91;}}
}
B5c0a67:L5c0a67:{c.instructions+=6;NFSU2_TR(0x5c0a67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0a6a:{NFSU2_TR(0x5c0a6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0a6b:{NFSU2_TR(0x5c0a6b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c0a6f:{NFSU2_TR(0x5c0a6f);
u8 U[4];
w4(U+0,u32(0x7a3becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0a74:{NFSU2_TR(0x5c0a74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0a75:{NFSU2_TR(0x5c0a75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0a7aull));
TAIL_STATIC(0x75c784u,75c);
}
B5c0a7a:L5c0a7a:{c.instructions+=3;NFSU2_TR(0x5c0a7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c0a7e:{NFSU2_TR(0x5c0a7e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0a7f:{NFSU2_TR(0x5c0a7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0a84ull));
TAIL_STATIC(0x43db50u,43d);
}
B5c0a84:L5c0a84:{c.instructions+=4;NFSU2_TR(0x5c0a84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0a85:{NFSU2_TR(0x5c0a85);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0a86:{NFSU2_TR(0x5c0a86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0a87:{NFSU2_TR(0x5c0a87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0a8cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c08f0u);}goto L5c08f0;}
}
B5c0a8c:L5c0a8c:{c.instructions+=2;NFSU2_TR(0x5c0a8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B5c0a8f:{NFSU2_TR(0x5c0a8f);
w1(R+12,u8(0x1ull));
}
B5c0a91:L5c0a91:{c.instructions+=3;NFSU2_TR(0x5c0a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c0a94:{NFSU2_TR(0x5c0a94);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c0a96:{NFSU2_TR(0x5c0a96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c0a30u);}goto L5c0a30;}}
}
B5c0a98:L5c0a98:{c.instructions+=4;NFSU2_TR(0x5c0a98);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c0a9a:{NFSU2_TR(0x5c0a9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c0a9b:{NFSU2_TR(0x5c0a9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c0a9c:{NFSU2_TR(0x5c0a9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c0aac;}}
}
B5c0a9e:L5c0a9e:{c.instructions+=3;NFSU2_TR(0x5c0a9e);
__builtin_memmove((R+0),gp(0x8709f4),4);
}
B5c0aa3:{NFSU2_TR(0x5c0aa3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0aa4:{NFSU2_TR(0x5c0aa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0aa9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B5c0aa9:L5c0aa9:{c.instructions+=1;NFSU2_TR(0x5c0aa9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c0aac:L5c0aac:{c.instructions+=2;NFSU2_TR(0x5c0aac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c0aad:{NFSU2_TR(0x5c0aad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c0aae:L5c0aae:{c.instructions+=2;NFSU2_TR(0x5c0aae);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x108ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x108ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x108ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c0ab4:{NFSU2_TR(0x5c0ab4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0ab5:L5c0ab5:{c.instructions+=2;NFSU2_TR(0x5c0ab5);
s4(0x876854,u32(0x0ull));
}
B5c0abf:{NFSU2_TR(0x5c0abf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c0a9eu);}goto L5c0a9e;}
}
B5c0ad0:L5c0ad0:{c.instructions+=8;NFSU2_TR(0x5c0ad0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0ad4:{NFSU2_TR(0x5c0ad4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B5c0ad7:{NFSU2_TR(0x5c0ad7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5c0ada:{NFSU2_TR(0x5c0ada);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0adb:{NFSU2_TR(0x5c0adb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0adc:{NFSU2_TR(0x5c0adc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0add:{NFSU2_TR(0x5c0add);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0ade:{NFSU2_TR(0x5c0ade);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5c0b09;}}
}
B5c0ae0:L5c0ae0:{c.instructions+=3;NFSU2_TR(0x5c0ae0);
__builtin_memmove((R+8),gp(0x86ff2c),4);
}
B5c0ae6:{NFSU2_TR(0x5c0ae6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c0ae8:{NFSU2_TR(0x5c0ae8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c0afd;}}
}
B5c0aea:L5c0aea:{c.instructions+=2;NFSU2_TR(0x5c0aea);
__builtin_memmove((R+0),gp(0x86ff28),4);
}
B5c0aef:{NFSU2_TR(0x5c0aef);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5c0cc5;}}
}
B5c0af5:L5c0af5:{c.instructions+=2;NFSU2_TR(0x5c0af5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c0af7:{NFSU2_TR(0x5c0af7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5c0cc5;}}
}
B5c0afd:L5c0afd:{c.instructions+=8;NFSU2_TR(0x5c0afd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5c0aff:{NFSU2_TR(0x5c0aff);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5c0b01:{NFSU2_TR(0x5c0b01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c0b02:{NFSU2_TR(0x5c0b02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c0b03:{NFSU2_TR(0x5c0b03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c0b04:{NFSU2_TR(0x5c0b04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c0b05:{NFSU2_TR(0x5c0b05);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c0b08:{NFSU2_TR(0x5c0b08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0b09:L5c0b09:{c.instructions+=13;NFSU2_TR(0x5c0b09);
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
B5c0b0a:{NFSU2_TR(0x5c0b0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5c0b0b:{NFSU2_TR(0x5c0b0b);
__builtin_memmove((R+12),(R+0),4);
}
B5c0b0d:{NFSU2_TR(0x5c0b0d);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0x200000ull))));
}
B5c0b12:{NFSU2_TR(0x5c0b12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0b13:{NFSU2_TR(0x5c0b13);
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
B5c0b14:{NFSU2_TR(0x5c0b14);
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
B5c0b15:{NFSU2_TR(0x5c0b15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5c0b16:{NFSU2_TR(0x5c0b16);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+12))));
}
B5c0b18:{NFSU2_TR(0x5c0b18);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0b1c:{NFSU2_TR(0x5c0b1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0b20:{NFSU2_TR(0x5c0b20);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c0b22:{NFSU2_TR(0x5c0b22);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c0afdu);}goto L5c0afd;}}
}
B5c0b24:L5c0b24:{c.instructions+=5;NFSU2_TR(0x5c0b24);
w4(R+0,u32(0x1ull));
}
B5c0b29:{NFSU2_TR(0x5c0b29);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L5c0b29_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L5c0b29_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L5c0b29_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L5c0b29_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L5c0b29_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L5c0b29_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L5c0b29_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L5c0b29_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L5c0b29_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L5c0b29_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L5c0b29_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L5c0b29_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L5c0b29_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L5c0b29_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L5c0b29_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L5c0b29_65;}
{SPILL();c.pc=0x5c0b29u;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b29_67;
L5c0b29_35:;
{SPILL();c.pc=0x5c0b29u;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b29_67;
L5c0b29_37:;
{SPILL();c.pc=0x5c0b29u;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b29_67;
L5c0b29_39:;
{SPILL();c.pc=0x5c0b29u;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b29_67;
L5c0b29_41:;
{SPILL();c.pc=0x5c0b29u;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b29_67;
L5c0b29_43:;
{SPILL();c.pc=0x5c0b29u;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b29_67;
L5c0b29_45:;
{SPILL();c.pc=0x5c0b29u;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b29_67;
L5c0b29_47:;
{SPILL();c.pc=0x5c0b29u;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b29_67;
L5c0b29_49:;
{SPILL();c.pc=0x5c0b29u;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b29_67;
L5c0b29_51:;
{SPILL();c.pc=0x5c0b29u;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b29_67;
L5c0b29_53:;
{SPILL();c.pc=0x5c0b29u;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b29_67;
L5c0b29_55:;
{SPILL();c.pc=0x5c0b29u;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b29_67;
L5c0b29_57:;
{SPILL();c.pc=0x5c0b29u;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b29_67;
L5c0b29_59:;
{SPILL();c.pc=0x5c0b29u;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b29_67;
L5c0b29_61:;
{SPILL();c.pc=0x5c0b29u;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b29_67;
L5c0b29_63:;
{SPILL();c.pc=0x5c0b29u;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b29_67;
L5c0b29_65:;
{SPILL();c.pc=0x5c0b29u;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b29_67;
L5c0b29_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B5c0b2b:{NFSU2_TR(0x5c0b2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0b2f:{NFSU2_TR(0x5c0b2f);
u8 U[9];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5c0b34:{NFSU2_TR(0x5c0b34);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c0afdu);}goto L5c0afd;}}
}
B5c0b36:L5c0b36:{c.instructions+=3;NFSU2_TR(0x5c0b36);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c0b3a:{NFSU2_TR(0x5c0b3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0b3b:{NFSU2_TR(0x5c0b3b);
u8 U[4];
__builtin_memmove((U+0),gp(0x783118),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0b41ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5c0b41:L5c0b41:{c.instructions+=2;NFSU2_TR(0x5c0b41);
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
B5c0b43:{NFSU2_TR(0x5c0b43);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c0afdu);}goto L5c0afd;}}
}
B5c0b45:L5c0b45:{c.instructions+=1;NFSU2_TR(0x5c0b45);
u8 U[4];
__builtin_memmove((U+0),gp(0x78318c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0b4bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5c0b4b:L5c0b4b:{c.instructions+=2;NFSU2_TR(0x5c0b4b);
__builtin_memmove((R+24),(R+0),4);
}
B5c0b4d:{NFSU2_TR(0x5c0b4d);
u8 U[4];
__builtin_memmove((U+0),gp(0x783188),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0b53ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5c0b53:L5c0b53:{c.instructions+=3;NFSU2_TR(0x5c0b53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0b54:{NFSU2_TR(0x5c0b54);
__builtin_memmove((R+28),(R+0),4);
}
B5c0b56:{NFSU2_TR(0x5c0b56);
u8 U[4];
__builtin_memmove((U+0),gp(0x783184),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0b5cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5c0b5c:L5c0b5c:{c.instructions+=3;NFSU2_TR(0x5c0b5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0b5d:{NFSU2_TR(0x5c0b5d);
__builtin_memmove((R+20),(R+0),4);
}
B5c0b5f:{NFSU2_TR(0x5c0b5f);
u8 U[4];
__builtin_memmove((U+0),gp(0x783180),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0b65ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5c0b65:L5c0b65:{c.instructions+=7;NFSU2_TR(0x5c0b65);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c0b69:{NFSU2_TR(0x5c0b69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0b6a:{NFSU2_TR(0x5c0b6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c0b6e:{NFSU2_TR(0x5c0b6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0b6f:{NFSU2_TR(0x5c0b6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0b70:{NFSU2_TR(0x5c0b70);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0b74:{NFSU2_TR(0x5c0b74);
u8 U[4];
__builtin_memmove((U+0),gp(0x78317c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0b7aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5c0b7a:L5c0b7a:{c.instructions+=3;NFSU2_TR(0x5c0b7a);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0b7f:{NFSU2_TR(0x5c0b7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0b80:{NFSU2_TR(0x5c0b80);
u8 U[4];
__builtin_memmove((U+0),gp(0x783178),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0b86ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5c0b86:L5c0b86:{c.instructions+=3;NFSU2_TR(0x5c0b86);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0b88:{NFSU2_TR(0x5c0b88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0b89:{NFSU2_TR(0x5c0b89);
u8 U[4];
__builtin_memmove((U+0),gp(0x783174),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0b8full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5c0b8f:L5c0b8f:{c.instructions+=3;NFSU2_TR(0x5c0b8f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0b91:{NFSU2_TR(0x5c0b91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0b92:{NFSU2_TR(0x5c0b92);
u8 U[4];
__builtin_memmove((U+0),gp(0x783170),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0b98ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5c0b98:L5c0b98:{c.instructions+=5;NFSU2_TR(0x5c0b98);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L5c0b98_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L5c0b98_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L5c0b98_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L5c0b98_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L5c0b98_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L5c0b98_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L5c0b98_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L5c0b98_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L5c0b98_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L5c0b98_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L5c0b98_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L5c0b98_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L5c0b98_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L5c0b98_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L5c0b98_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L5c0b98_65;}
{SPILL();c.pc=0x5c0b98u;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b98_67;
L5c0b98_35:;
{SPILL();c.pc=0x5c0b98u;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b98_67;
L5c0b98_37:;
{SPILL();c.pc=0x5c0b98u;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b98_67;
L5c0b98_39:;
{SPILL();c.pc=0x5c0b98u;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b98_67;
L5c0b98_41:;
{SPILL();c.pc=0x5c0b98u;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b98_67;
L5c0b98_43:;
{SPILL();c.pc=0x5c0b98u;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b98_67;
L5c0b98_45:;
{SPILL();c.pc=0x5c0b98u;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b98_67;
L5c0b98_47:;
{SPILL();c.pc=0x5c0b98u;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b98_67;
L5c0b98_49:;
{SPILL();c.pc=0x5c0b98u;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b98_67;
L5c0b98_51:;
{SPILL();c.pc=0x5c0b98u;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b98_67;
L5c0b98_53:;
{SPILL();c.pc=0x5c0b98u;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b98_67;
L5c0b98_55:;
{SPILL();c.pc=0x5c0b98u;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b98_67;
L5c0b98_57:;
{SPILL();c.pc=0x5c0b98u;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b98_67;
L5c0b98_59:;
{SPILL();c.pc=0x5c0b98u;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b98_67;
L5c0b98_61:;
{SPILL();c.pc=0x5c0b98u;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b98_67;
L5c0b98_63:;
{SPILL();c.pc=0x5c0b98u;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b98_67;
L5c0b98_65:;
{SPILL();c.pc=0x5c0b98u;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5c0b98_67;
L5c0b98_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B5c0b9a:{NFSU2_TR(0x5c0b9a);
__builtin_memmove((R+12),gp(0x78311c),4);
}
B5c0ba0:{NFSU2_TR(0x5c0ba0);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c0ba4:{NFSU2_TR(0x5c0ba4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0ba5:{NFSU2_TR(0x5c0ba5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0ba7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5c0ba7:L5c0ba7:{c.instructions+=6;NFSU2_TR(0x5c0ba7);
u8 U[8];
{SPILL();c.pc=0x5c0ba7u;V r_=user_op(c,524364,{});SPILL();wv<8>((U+0),r_);}
w4(R+8,u32(u64(r8(U+0))>>32));
w4(R+0,u32(r8(U+0)));
}
B5c0ba9:{NFSU2_TR(0x5c0ba9);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0bad:{NFSU2_TR(0x5c0bad);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0bb1:{NFSU2_TR(0x5c0bb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0bb5:{NFSU2_TR(0x5c0bb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0bb6:{NFSU2_TR(0x5c0bb6);
u8 U[4];
__builtin_memmove((U+0),gp(0x783150),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0bbcull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5c0bbc:L5c0bbc:{c.instructions+=3;NFSU2_TR(0x5c0bbc);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c0bc0:{NFSU2_TR(0x5c0bc0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0bc1:{NFSU2_TR(0x5c0bc1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0bc3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5c0bc3:L5c0bc3:{c.instructions+=7;NFSU2_TR(0x5c0bc3);
u8 U[8];
{SPILL();c.pc=0x5c0bc3u;V r_=user_op(c,524364,{});SPILL();wv<8>((U+0),r_);}
w4(R+8,u32(u64(r8(U+0))>>32));
w4(R+0,u32(r8(U+0)));
}
B5c0bc5:{NFSU2_TR(0x5c0bc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0bc9:{NFSU2_TR(0x5c0bc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0bcd:{NFSU2_TR(0x5c0bcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0bd1:{NFSU2_TR(0x5c0bd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0bd2:{NFSU2_TR(0x5c0bd2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0bd3:{NFSU2_TR(0x5c0bd3);
u8 U[4];
__builtin_memmove((U+0),gp(0x783170),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0bd9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5c0bd9:L5c0bd9:{c.instructions+=4;NFSU2_TR(0x5c0bd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0bdd:{NFSU2_TR(0x5c0bdd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0bde:{NFSU2_TR(0x5c0bde);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0bdf:{NFSU2_TR(0x5c0bdf);
u8 U[4];
__builtin_memmove((U+0),gp(0x783174),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0be5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5c0be5:L5c0be5:{c.instructions+=3;NFSU2_TR(0x5c0be5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0be6:{NFSU2_TR(0x5c0be6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0be7:{NFSU2_TR(0x5c0be7);
u8 U[4];
__builtin_memmove((U+0),gp(0x783178),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0bedull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5c0bed:L5c0bed:{c.instructions+=51;NFSU2_TR(0x5c0bed);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c0bf1:{NFSU2_TR(0x5c0bf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c0bf5:{NFSU2_TR(0x5c0bf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c0bf9:{NFSU2_TR(0x5c0bf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0bfd:{NFSU2_TR(0x5c0bfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c0c01:{NFSU2_TR(0x5c0c01);
w1(R+512,u8((r4(R+8))<(r4(R+12))));
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B5c0c03:{NFSU2_TR(0x5c0c03);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+28))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5c0c05:{NFSU2_TR(0x5c0c05);
__builtin_memmove((R+4),(R+0),4);
}
B5c0c07:{NFSU2_TR(0x5c0c07);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B5c0c0c:{NFSU2_TR(0x5c0c0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0c10:{NFSU2_TR(0x5c0c10);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0c14:{NFSU2_TR(0x5c0c14);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0c18:{NFSU2_TR(0x5c0c18);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdf,0x28"::"a"(ea_):"memory");}
}
B5c0c1c:{NFSU2_TR(0x5c0c1c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000000ull))));
}
B5c0c22:{NFSU2_TR(0x5c0c22);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0c26:{NFSU2_TR(0x5c0c26);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0c2a:{NFSU2_TR(0x5c0c2a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5c0c2c:{NFSU2_TR(0x5c0c2c);
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5c0c2e:{NFSU2_TR(0x5c0c2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0c32:{NFSU2_TR(0x5c0c32);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0c36:{NFSU2_TR(0x5c0c36);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdf,0x28"::"a"(ea_):"memory");}
}
B5c0c3a:{NFSU2_TR(0x5c0c3a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+20))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5c0c3c:{NFSU2_TR(0x5c0c3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0c40:{NFSU2_TR(0x5c0c40);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c0c42:{NFSU2_TR(0x5c0c42);
__builtin_memmove((R+4),(R+0),4);
}
B5c0c44:{NFSU2_TR(0x5c0c44);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c0c46:{NFSU2_TR(0x5c0c46);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B5c0c4b:{NFSU2_TR(0x5c0c4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0c4f:{NFSU2_TR(0x5c0c4f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdf,0x28"::"a"(ea_):"memory");}
}
B5c0c53:{NFSU2_TR(0x5c0c53);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000000ull))));
}
B5c0c59:{NFSU2_TR(0x5c0c59);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0c5d:{NFSU2_TR(0x5c0c5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0c61:{NFSU2_TR(0x5c0c61);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0c65:{NFSU2_TR(0x5c0c65);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0c69:{NFSU2_TR(0x5c0c69);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdf,0x28"::"a"(ea_):"memory");}
}
B5c0c6d:{NFSU2_TR(0x5c0c6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0c71:{NFSU2_TR(0x5c0c71);
__builtin_memmove((R+4),(R+0),4);
}
B5c0c73:{NFSU2_TR(0x5c0c73);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c0c75:{NFSU2_TR(0x5c0c75);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B5c0c7a:{NFSU2_TR(0x5c0c7a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c0c7c:{NFSU2_TR(0x5c0c7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0c80:{NFSU2_TR(0x5c0c80);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdf,0x28"::"a"(ea_):"memory");}
}
B5c0c84:{NFSU2_TR(0x5c0c84);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000000ull))));
}
B5c0c8a:{NFSU2_TR(0x5c0c8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0c8e:{NFSU2_TR(0x5c0c8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0c92:{NFSU2_TR(0x5c0c92);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdf,0x28"::"a"(ea_):"memory");}
}
B5c0c96:{NFSU2_TR(0x5c0c96);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c0c98:{NFSU2_TR(0x5c0c98);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c0c9a:{NFSU2_TR(0x5c0c9a);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5c0c9c:{NFSU2_TR(0x5c0c9c);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5c0c9e:{NFSU2_TR(0x5c0c9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0ca3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c0ca3:L5c0ca3:{c.instructions+=5;NFSU2_TR(0x5c0ca3);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0ca7:{NFSU2_TR(0x5c0ca7);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0cab:{NFSU2_TR(0x5c0cab);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdf,0x28"::"a"(ea_):"memory");}
}
B5c0caf:{NFSU2_TR(0x5c0caf);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c0cb5:{NFSU2_TR(0x5c0cb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0cbaull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c0cba:L5c0cba:{c.instructions+=2;NFSU2_TR(0x5c0cba);
__builtin_memmove(gp(0x86ff28),(R+0),4);
}
B5c0cbf:{NFSU2_TR(0x5c0cbf);
__builtin_memmove(gp(0x86ff2c),(R+8),4);
}
B5c0cc5:L5c0cc5:{c.instructions+=6;NFSU2_TR(0x5c0cc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c0cc6:{NFSU2_TR(0x5c0cc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c0cc7:{NFSU2_TR(0x5c0cc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c0cc8:{NFSU2_TR(0x5c0cc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c0cc9:{NFSU2_TR(0x5c0cc9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c0ccc:{NFSU2_TR(0x5c0ccc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0cd0:L5c0cd0:{c.instructions+=6;NFSU2_TR(0x5c0cd0);
__builtin_memmove((R+0),gp(0x8005c0),4);
}
B5c0cd5:{NFSU2_TR(0x5c0cd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0cd6:{NFSU2_TR(0x5c0cd6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5c0cd8:{NFSU2_TR(0x5c0cd8);
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
B5c0cda:{NFSU2_TR(0x5c0cda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0cdb:{NFSU2_TR(0x5c0cdb);
if(r1(R+518)){{goto L5c0d04;}}
}
B5c0cdd:L5c0cdd:{c.instructions+=4;NFSU2_TR(0x5c0cdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c0ce1:{NFSU2_TR(0x5c0ce1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c0ce5:{NFSU2_TR(0x5c0ce5);
w4(R+4,u32(0x8005c0ull));
}
B5c0cea:{NFSU2_TR(0x5c0cea);
__builtin_memmove((R+12),(R+12),4);
}
B5c0cf0:L5c0cf0:{c.instructions+=2;NFSU2_TR(0x5c0cf0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c0cf2:{NFSU2_TR(0x5c0cf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c0cf9;}}
}
B5c0cf4:L5c0cf4:{c.instructions+=2;NFSU2_TR(0x5c0cf4);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
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
B5c0cf7:{NFSU2_TR(0x5c0cf7);
if(r1(R+518)){{goto L5c0d0d;}}
}
B5c0cf9:L5c0cf9:{c.instructions+=5;NFSU2_TR(0x5c0cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0cfc:{NFSU2_TR(0x5c0cfc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B5c0cff:{NFSU2_TR(0x5c0cff);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5c0d00:{NFSU2_TR(0x5c0d00);
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
B5c0d02:{NFSU2_TR(0x5c0d02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c0cf0u);}goto L5c0cf0;}}
}
B5c0d04:L5c0d04:{c.instructions+=4;NFSU2_TR(0x5c0d04);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0d0a:{NFSU2_TR(0x5c0d0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c0d0b:{NFSU2_TR(0x5c0d0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c0d0c:{NFSU2_TR(0x5c0d0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0d0d:L5c0d0d:{c.instructions+=5;NFSU2_TR(0x5c0d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c0d10:{NFSU2_TR(0x5c0d10);
{u32 ea_=u32((r4(R+0)*4u)+u32(8390088u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0d17:{NFSU2_TR(0x5c0d17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c0d18:{NFSU2_TR(0x5c0d18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c0d19:{NFSU2_TR(0x5c0d19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0d20:L5c0d20:{c.instructions+=2;NFSU2_TR(0x5c0d20);
__builtin_memmove((R+0),gp(0x86ff28),4);
}
B5c0d25:{NFSU2_TR(0x5c0d25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0d30:L5c0d30:{c.instructions+=2;NFSU2_TR(0x5c0d30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0d31:{NFSU2_TR(0x5c0d31);
__builtin_memmove((R+24),gp(0x783318),4);
}
B5c0d37:L5c0d37:{c.instructions+=3;NFSU2_TR(0x5c0d37);
__builtin_memmove((R+0),gp(0x800b98),4);
}
B5c0d3c:{NFSU2_TR(0x5c0d3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c0d3e:{NFSU2_TR(0x5c0d3e);
if(r1(R+518)){if(r4(MODV+72)){goto L5c0db8;}else{goto L5c0d98;}}
}
B5c0d40:L5c0d40:{c.instructions+=1;NFSU2_TR(0x5c0d40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0d45ull));
TAIL_STATIC(0x5bf450u,5bf);
}
B5c0d45:L5c0d45:{c.instructions+=2;NFSU2_TR(0x5c0d45);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c0d47:{NFSU2_TR(0x5c0d47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c0d55;}}
}
B5c0d49:L5c0d49:{c.instructions+=2;NFSU2_TR(0x5c0d49);
s4(0x800b98,u32(0x1ull));
}
B5c0d53:{NFSU2_TR(0x5c0d53);
if(r4(MODV+72)){goto L5c0d55;}else{goto L5c0d61;}
}
B5c0d55:L5c0d55:{c.instructions+=1;NFSU2_TR(0x5c0d55);
w1(R+0,u8(0x1ull));
}
B5c0d57:L5c0d57:{c.instructions+=1;NFSU2_TR(0x5c0d57);
s4(0x800b98,u32(0x0ull));
}
B5c0d61:L5c0d61:{c.instructions+=3;NFSU2_TR(0x5c0d61);
__builtin_memmove((R+4),gp(0x79dc60),4);
}
B5c0d67:{NFSU2_TR(0x5c0d67);
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
B5c0d69:{NFSU2_TR(0x5c0d69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c0db8;}}
}
B5c0d6b:L5c0d6b:{c.instructions+=2;NFSU2_TR(0x5c0d6b);
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
B5c0d6d:{NFSU2_TR(0x5c0d6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c0db8;}}
}
B5c0d6f:L5c0d6f:{c.instructions+=2;NFSU2_TR(0x5c0d6f);
u8 U[4];
w4(U+0,u32(0x7a3c10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0d74:{NFSU2_TR(0x5c0d74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0d79ull));
TAIL_STATIC(0x57cac0u,57c);
}
B5c0d79:L5c0d79:{c.instructions+=3;NFSU2_TR(0x5c0d79);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c0d7c:{NFSU2_TR(0x5c0d7c);
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
B5c0d7e:{NFSU2_TR(0x5c0d7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c0db8;}}
}
B5c0d80:L5c0d80:{c.instructions+=5;NFSU2_TR(0x5c0d80);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0d82:{NFSU2_TR(0x5c0d82);
u8 U[4];
w4(U+0,u32(0x78e8f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0d87:{NFSU2_TR(0x5c0d87);
u8 U[4];
w4(U+0,u32(0x7a3bf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0d8c:{NFSU2_TR(0x5c0d8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0d8d:{NFSU2_TR(0x5c0d8d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0d8full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5c0d8f:L5c0d8f:{c.instructions+=2;NFSU2_TR(0x5c0d8f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c0d92:{NFSU2_TR(0x5c0d92);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c0d37u);}goto L5c0d37;}}
}
B5c0d94:L5c0d94:{c.instructions+=3;NFSU2_TR(0x5c0d94);
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
B5c0d96:{NFSU2_TR(0x5c0d96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c0d97:{NFSU2_TR(0x5c0d97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0d98:L5c0d98:{c.instructions+=4;NFSU2_TR(0x5c0d98);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5c0d9a:{NFSU2_TR(0x5c0d9a);
__builtin_memmove((R+0),gp(0x80057f),1);
}
B5c0d9f:{NFSU2_TR(0x5c0d9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0da0:{NFSU2_TR(0x5c0da0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0da5ull));
TAIL_STATIC(0x5bf3d0u,5bf);
}
B5c0da5:L5c0da5:{c.instructions+=3;NFSU2_TR(0x5c0da5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c0da8:{NFSU2_TR(0x5c0da8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c0daa:{NFSU2_TR(0x5c0daa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c0d57u);}goto L5c0d57;}}
}
B5c0dac:L5c0dac:{c.instructions+=2;NFSU2_TR(0x5c0dac);
s4(0x800b98,u32(0x1ull));
}
B5c0db6:{NFSU2_TR(0x5c0db6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c0d61u);}goto L5c0d61;}
}
B5c0db8:L5c0db8:{c.instructions+=3;NFSU2_TR(0x5c0db8);
w1(R+0,u8(0x1ull));
}
B5c0dba:{NFSU2_TR(0x5c0dba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c0dbb:{NFSU2_TR(0x5c0dbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0dc0:L5c0dc0:{c.instructions+=5;NFSU2_TR(0x5c0dc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0dc1:{NFSU2_TR(0x5c0dc1);
__builtin_memmove((R+24),gp(0x830d08),4);
}
B5c0dc7:{NFSU2_TR(0x5c0dc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0dc8:{NFSU2_TR(0x5c0dc8);
w4(R+4,u32(0x830d08ull));
}
B5c0dcd:{NFSU2_TR(0x5c0dcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0dd2ull));
TAIL_STATIC(0x502fd0u,502);
}
B5c0dd2:L5c0dd2:{c.instructions+=3;NFSU2_TR(0x5c0dd2);
__builtin_memmove((R+28),(R+0),4);
}
B5c0dd4:{NFSU2_TR(0x5c0dd4);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5c0dd6:{NFSU2_TR(0x5c0dd6);
if(r1(R+518)){{goto L5c0dff;}}
}
B5c0dd8:L5c0dd8:{c.instructions+=4;NFSU2_TR(0x5c0dd8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0dd9:{NFSU2_TR(0x5c0dd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c0ddd:{NFSU2_TR(0x5c0ddd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0dde:{NFSU2_TR(0x5c0dde);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5c0de2:L5c0de2:{c.instructions+=7;NFSU2_TR(0x5c0de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0de5:{NFSU2_TR(0x5c0de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0de8:{NFSU2_TR(0x5c0de8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0de9:{NFSU2_TR(0x5c0de9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0dea:{NFSU2_TR(0x5c0dea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0deb:{NFSU2_TR(0x5c0deb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0dec:{NFSU2_TR(0x5c0dec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0df1ull));
TAIL_STATIC(0x4902d0u,490);
}
B5c0df1:L5c0df1:{c.instructions+=5;NFSU2_TR(0x5c0df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0df4:{NFSU2_TR(0x5c0df4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5c0df6:{NFSU2_TR(0x5c0df6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5c0df9:{NFSU2_TR(0x5c0df9);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5c0dfb:{NFSU2_TR(0x5c0dfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c0de2u);}goto L5c0de2;}}
}
B5c0dfd:L5c0dfd:{c.instructions+=2;NFSU2_TR(0x5c0dfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c0dfe:{NFSU2_TR(0x5c0dfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c0dff:L5c0dff:{c.instructions+=3;NFSU2_TR(0x5c0dff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c0e00:{NFSU2_TR(0x5c0e00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c0e01:{NFSU2_TR(0x5c0e01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0e10:L5c0e10:{c.instructions+=11;NFSU2_TR(0x5c0e10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0e11:{NFSU2_TR(0x5c0e11);
__builtin_memmove((R+20),(R+16),4);
}
B5c0e13:{NFSU2_TR(0x5c0e13);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5c0e16:{NFSU2_TR(0x5c0e16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B5c0e19:{NFSU2_TR(0x5c0e19);
__builtin_memmove((R+0),gp(0x87074c),4);
}
B5c0e1e:{NFSU2_TR(0x5c0e1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c0e20:{NFSU2_TR(0x5c0e20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0e21:{NFSU2_TR(0x5c0e21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0e22:{NFSU2_TR(0x5c0e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c0e25:{NFSU2_TR(0x5c0e25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0e26:{NFSU2_TR(0x5c0e26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c0e6b;}}
}
B5c0e28:L5c0e28:{c.instructions+=8;NFSU2_TR(0x5c0e28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c0e2a:{NFSU2_TR(0x5c0e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c0e2d:{NFSU2_TR(0x5c0e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5c0e30:{NFSU2_TR(0x5c0e30);
s1(0x872b98,u8(0x1ull));
}
B5c0e37:{NFSU2_TR(0x5c0e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0e3a:{NFSU2_TR(0x5c0e3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0e3b:{NFSU2_TR(0x5c0e3b);
u8 U[4];
w4(U+0,u32(0x872e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0e40:{NFSU2_TR(0x5c0e40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0e45ull));
TAIL_STATIC(0x5bdde0u,5bd);
}
B5c0e45:L5c0e45:{c.instructions+=2;NFSU2_TR(0x5c0e45);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0e46:{NFSU2_TR(0x5c0e46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0e4bull));
TAIL_STATIC(0x5bcc30u,5bc);
}
B5c0e4b:L5c0e4b:{c.instructions+=6;NFSU2_TR(0x5c0e4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5c0e4e:{NFSU2_TR(0x5c0e4e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c0e52:{NFSU2_TR(0x5c0e52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0e53:{NFSU2_TR(0x5c0e53);
w4(R+4,u32(0x86b7a4ull));
}
B5c0e58:{NFSU2_TR(0x5c0e58);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0e5c:{NFSU2_TR(0x5c0e5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0e61ull));
TAIL_STATIC(0x5bb320u,5bb);
}
B5c0e61:L5c0e61:{c.instructions+=1;NFSU2_TR(0x5c0e61);
s4(0x87074c,u32(0x1ull));
}
B5c0e6b:L5c0e6b:{c.instructions+=32;NFSU2_TR(0x5c0e6b);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0e6e:{NFSU2_TR(0x5c0e6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c0e71:{NFSU2_TR(0x5c0e71);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c0e75:{NFSU2_TR(0x5c0e75);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0e78:{NFSU2_TR(0x5c0e78);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0e7c:{NFSU2_TR(0x5c0e7c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c0e80:{NFSU2_TR(0x5c0e80);
{u32 ea_=u32(u32(8860528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0e86:{NFSU2_TR(0x5c0e86);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c0e89:{NFSU2_TR(0x5c0e89);
{u32 ea_=u32(u32(8860532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0e8f:{NFSU2_TR(0x5c0e8f);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c0e92:{NFSU2_TR(0x5c0e92);
{u32 ea_=u32(u32(8860536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0e98:{NFSU2_TR(0x5c0e98);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c0e9b:{NFSU2_TR(0x5c0e9b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c0e9f:{NFSU2_TR(0x5c0e9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0ea3:{NFSU2_TR(0x5c0ea3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c0ea5:{NFSU2_TR(0x5c0ea5);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c0ea9:{NFSU2_TR(0x5c0ea9);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0ead:{NFSU2_TR(0x5c0ead);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c0eb1:{NFSU2_TR(0x5c0eb1);
{u32 ea_=u32(u32(8872896u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0eb7:{NFSU2_TR(0x5c0eb7);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c0eba:{NFSU2_TR(0x5c0eba);
{u32 ea_=u32(u32(8872900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0ec0:{NFSU2_TR(0x5c0ec0);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c0ec3:{NFSU2_TR(0x5c0ec3);
{u32 ea_=u32(u32(8872904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0ec9:{NFSU2_TR(0x5c0ec9);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c0ecc:{NFSU2_TR(0x5c0ecc);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c0ed0:{NFSU2_TR(0x5c0ed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0ed4:{NFSU2_TR(0x5c0ed4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5c0ed6:{NFSU2_TR(0x5c0ed6);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c0eda:{NFSU2_TR(0x5c0eda);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0ede:{NFSU2_TR(0x5c0ede);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c0ee2:{NFSU2_TR(0x5c0ee2);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0ee5:{NFSU2_TR(0x5c0ee5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0eeaull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c0eea:L5c0eea:{c.instructions+=4;NFSU2_TR(0x5c0eea);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0eed:{NFSU2_TR(0x5c0eed);
__builtin_memmove((R+28),(R+0),4);
}
B5c0eef:{NFSU2_TR(0x5c0eef);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B5c0ef2:{NFSU2_TR(0x5c0ef2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0ef7ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c0ef7:L5c0ef7:{c.instructions+=4;NFSU2_TR(0x5c0ef7);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0efa:{NFSU2_TR(0x5c0efa);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B5c0efc:{NFSU2_TR(0x5c0efc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B5c0eff:{NFSU2_TR(0x5c0eff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0f04ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c0f04:L5c0f04:{c.instructions+=4;NFSU2_TR(0x5c0f04);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c0f07:{NFSU2_TR(0x5c0f07);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B5c0f09:{NFSU2_TR(0x5c0f09);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B5c0f0c:{NFSU2_TR(0x5c0f0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0f11ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c0f11:L5c0f11:{c.instructions+=14;NFSU2_TR(0x5c0f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c0f14:{NFSU2_TR(0x5c0f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0f17:{NFSU2_TR(0x5c0f17);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B5c0f19:{NFSU2_TR(0x5c0f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0f1c:{NFSU2_TR(0x5c0f1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0f20:{NFSU2_TR(0x5c0f20);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0f24:{NFSU2_TR(0x5c0f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c0f27:{NFSU2_TR(0x5c0f27);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c0f2b:{NFSU2_TR(0x5c0f2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0f2f:{NFSU2_TR(0x5c0f2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0f30:{NFSU2_TR(0x5c0f30);
w4(R+4,u32(0x872b98ull));
}
B5c0f35:{NFSU2_TR(0x5c0f35);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0f39:{NFSU2_TR(0x5c0f39);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0f3d:{NFSU2_TR(0x5c0f3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0f42ull));
TAIL_STATIC(0x5bb430u,5bb);
}
B5c0f42:L5c0f42:{c.instructions+=10;NFSU2_TR(0x5c0f42);
__builtin_memmove((R+0),gp(0x870750),4);
}
B5c0f47:{NFSU2_TR(0x5c0f47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c0f48:{NFSU2_TR(0x5c0f48);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c0f49:{NFSU2_TR(0x5c0f49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c0f4a:{NFSU2_TR(0x5c0f4a);
__builtin_memmove(gp(0x870750),(R+0),4);
}
B5c0f4f:{NFSU2_TR(0x5c0f4f);
w4(R+0,u32(0x1ull));
}
B5c0f54:{NFSU2_TR(0x5c0f54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c0f55:{NFSU2_TR(0x5c0f55);
__builtin_memmove((R+16),(R+20),4);
}
B5c0f57:{NFSU2_TR(0x5c0f57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c0f58:{NFSU2_TR(0x5c0f58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0f60:L5c0f60:{c.instructions+=5;NFSU2_TR(0x5c0f60);
__builtin_memmove((R+0),gp(0x86ffb4),4);
}
B5c0f65:{NFSU2_TR(0x5c0f65);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c0f69:{NFSU2_TR(0x5c0f69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c0f6b:{NFSU2_TR(0x5c0f6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c0f6f:{NFSU2_TR(0x5c0f6f);
if(r1(R+518)){{goto L5c0f77;}}
}
B5c0f71:L5c0f71:{c.instructions+=2;NFSU2_TR(0x5c0f71);
u8 U[1];
w1(U+0,u8(0x64ull));
s1(u32(r4(R+4)),r1(U+0));
}
B5c0f74:{NFSU2_TR(0x5c0f74);
u8 U[1];
w1(U+0,u8(0x9bull));
s1(u32(r4(R+0)),r1(U+0));
}
B5c0f77:L5c0f77:{c.instructions+=3;NFSU2_TR(0x5c0f77);
__builtin_memmove((R+8),gp(0x86ffb8),4);
}
B5c0f7d:{NFSU2_TR(0x5c0f7d);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c0f7f:{NFSU2_TR(0x5c0f7f);
if(r1(R+518)){{goto L5c0f87;}}
}
B5c0f81:L5c0f81:{c.instructions+=2;NFSU2_TR(0x5c0f81);
u8 U[1];
w1(U+0,u8(0x64ull));
s1(u32(r4(R+4)),r1(U+0));
}
B5c0f84:{NFSU2_TR(0x5c0f84);
u8 U[1];
w1(U+0,u8(0x9bull));
s1(u32(r4(R+0)),r1(U+0));
}
B5c0f87:L5c0f87:{c.instructions+=1;NFSU2_TR(0x5c0f87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c0f90:L5c0f90:{c.instructions+=7;NFSU2_TR(0x5c0f90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0f91:{NFSU2_TR(0x5c0f91);
__builtin_memmove((R+12),gp(0x870764),4);
}
B5c0f97:{NFSU2_TR(0x5c0f97);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0f98:{NFSU2_TR(0x5c0f98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0f99:{NFSU2_TR(0x5c0f99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c0f9a:{NFSU2_TR(0x5c0f9a);
w4(R+24,u32(0x874c50ull));
}
B5c0f9f:{NFSU2_TR(0x5c0f9f);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B5c0fa2:L5c0fa2:{c.instructions+=3;NFSU2_TR(0x5c0fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c0fa8:{NFSU2_TR(0x5c0fa8);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c0faa:{NFSU2_TR(0x5c0faa);
if(r1(R+518)){{goto L5c0fe3;}}
}
B5c0fac:L5c0fac:{c.instructions+=2;NFSU2_TR(0x5c0fac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5c0faf:{NFSU2_TR(0x5c0faf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c0fb4ull));
TAIL_STATIC(0x4aca90u,4ac);
}
B5c0fb4:L5c0fb4:{c.instructions+=2;NFSU2_TR(0x5c0fb4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5c0fb6:{NFSU2_TR(0x5c0fb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c0fe3;}}
}
B5c0fb8:L5c0fb8:{c.instructions+=2;NFSU2_TR(0x5c0fb8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5c0fba:{NFSU2_TR(0x5c0fba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5c0fe3;}}
}
B5c0fbc:L5c0fbc:{c.instructions+=3;NFSU2_TR(0x5c0fbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5c0fc3:{NFSU2_TR(0x5c0fc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c0fc5:{NFSU2_TR(0x5c0fc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c0fe3;}}
}
B5c0fc7:L5c0fc7:{c.instructions+=8;NFSU2_TR(0x5c0fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0fcd:{NFSU2_TR(0x5c0fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0fd0:{NFSU2_TR(0x5c0fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c0fd3:{NFSU2_TR(0x5c0fd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5c0fd7:{NFSU2_TR(0x5c0fd7);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B5c0fda:{NFSU2_TR(0x5c0fda);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
w1(U+4,u8(0x80ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5c0fde:{NFSU2_TR(0x5c0fde);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w1(U+4,u8(0x80ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5c0fe2:{NFSU2_TR(0x5c0fe2);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B5c0fe3:L5c0fe3:{c.instructions+=3;NFSU2_TR(0x5c0fe3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x370ull))));
}
B5c0fe9:{NFSU2_TR(0x5c0fe9);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8760f0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8760f0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8760f0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c0fef:{NFSU2_TR(0x5c0fef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c0fa2u);}goto L5c0fa2;}}
}
B5c0ff1:L5c0ff1:{c.instructions+=6;NFSU2_TR(0x5c0ff1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c0ff2:{NFSU2_TR(0x5c0ff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c0ff3:{NFSU2_TR(0x5c0ff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c0ff4:{NFSU2_TR(0x5c0ff4);
__builtin_memmove(gp(0x870764),(R+12),4);
}
B5c0ffa:{NFSU2_TR(0x5c0ffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c0ffb:{NFSU2_TR(0x5c0ffb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x5c0,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
