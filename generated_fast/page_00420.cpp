#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40d(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_41a(u8* __restrict R,Cpu& c);
u32 body_41b(u8* __restrict R,Cpu& c);
u32 body_41c(u8* __restrict R,Cpu& c);
u32 body_41d(u8* __restrict R,Cpu& c);
u32 body_41e(u8* __restrict R,Cpu& c);
u32 body_41f(u8* __restrict R,Cpu& c);
u32 body_421(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_63a(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x420,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x420,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_420(u8* __restrict R,Cpu& c);
u32 page_420(Cpu& c){return body_420(c.regs.data(),c);}
__attribute__((noinline)) u32 body_420(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x420000:goto L420000;
case 0x420001:c.instructions+=3;goto B420001;
case 0x420002:c.instructions+=2;goto B420002;
case 0x420006:c.instructions+=1;goto B420006;
case 0x420008:goto L420008;
case 0x42000c:c.instructions+=6;goto B42000c;
case 0x420010:c.instructions+=5;goto B420010;
case 0x420013:c.instructions+=4;goto B420013;
case 0x420014:c.instructions+=3;goto B420014;
case 0x420018:c.instructions+=2;goto B420018;
case 0x42001c:c.instructions+=1;goto B42001c;
case 0x420022:goto L420022;
case 0x420023:c.instructions+=5;goto B420023;
case 0x420024:c.instructions+=4;goto B420024;
case 0x420025:c.instructions+=3;goto B420025;
case 0x420026:c.instructions+=2;goto B420026;
case 0x420029:c.instructions+=1;goto B420029;
case 0x420030:goto L420030;
case 0x420031:c.instructions+=8;goto B420031;
case 0x420036:c.instructions+=7;goto B420036;
case 0x420039:c.instructions+=6;goto B420039;
case 0x42003a:c.instructions+=5;goto B42003a;
case 0x42003d:c.instructions+=4;goto B42003d;
case 0x42003f:c.instructions+=3;goto B42003f;
case 0x420041:c.instructions+=2;goto B420041;
case 0x420049:c.instructions+=1;goto B420049;
case 0x42004f:goto L42004f;
case 0x420050:c.instructions+=4;goto B420050;
case 0x420051:c.instructions+=3;goto B420051;
case 0x420052:c.instructions+=2;goto B420052;
case 0x420058:c.instructions+=1;goto B420058;
case 0x420060:goto L420060;
case 0x420064:c.instructions+=7;goto B420064;
case 0x420066:c.instructions+=6;goto B420066;
case 0x42006a:c.instructions+=5;goto B42006a;
case 0x42006c:c.instructions+=4;goto B42006c;
case 0x42006f:c.instructions+=3;goto B42006f;
case 0x420071:c.instructions+=2;goto B420071;
case 0x420073:c.instructions+=1;goto B420073;
case 0x420075:goto L420075;
case 0x42007b:c.instructions+=1;goto B42007b;
case 0x420080:goto L420080;
case 0x420083:c.instructions+=1;goto B420083;
case 0x420085:goto L420085;
case 0x420087:c.instructions+=2;goto B420087;
case 0x420089:c.instructions+=1;goto B420089;
case 0x42008b:goto L42008b;
case 0x42008d:goto L42008d;
case 0x42008f:goto L42008f;
case 0x420092:c.instructions+=4;goto B420092;
case 0x420095:c.instructions+=3;goto B420095;
case 0x420096:c.instructions+=2;goto B420096;
case 0x420098:c.instructions+=1;goto B420098;
case 0x42009d:goto L42009d;
case 0x42009f:c.instructions+=5;goto B42009f;
case 0x4200a5:c.instructions+=4;goto B4200a5;
case 0x4200a8:c.instructions+=3;goto B4200a8;
case 0x4200a9:c.instructions+=2;goto B4200a9;
case 0x4200ab:c.instructions+=1;goto B4200ab;
case 0x4200b0:goto L4200b0;
case 0x4200b3:c.instructions+=3;goto B4200b3;
case 0x4200b5:c.instructions+=2;goto B4200b5;
case 0x4200b7:c.instructions+=1;goto B4200b7;
case 0x4200b9:goto L4200b9;
case 0x4200bb:c.instructions+=1;goto B4200bb;
case 0x4200c0:goto L4200c0;
case 0x4200c3:c.instructions+=1;goto B4200c3;
case 0x4200c5:goto L4200c5;
case 0x4200c8:c.instructions+=2;goto B4200c8;
case 0x4200cb:c.instructions+=1;goto B4200cb;
case 0x4200cd:goto L4200cd;
case 0x4200cf:c.instructions+=2;goto B4200cf;
case 0x4200d1:c.instructions+=1;goto B4200d1;
case 0x4200d3:goto L4200d3;
case 0x4200d5:goto L4200d5;
case 0x4200d7:c.instructions+=1;goto B4200d7;
case 0x4200d9:goto L4200d9;
case 0x4200df:c.instructions+=3;goto B4200df;
case 0x4200e0:c.instructions+=2;goto B4200e0;
case 0x4200e5:c.instructions+=1;goto B4200e5;
case 0x4200ea:goto L4200ea;
case 0x4200f0:c.instructions+=7;goto B4200f0;
case 0x4200f6:c.instructions+=6;goto B4200f6;
case 0x4200f7:c.instructions+=5;goto B4200f7;
case 0x4200f8:c.instructions+=4;goto B4200f8;
case 0x4200fe:c.instructions+=3;goto B4200fe;
case 0x420104:c.instructions+=2;goto B420104;
case 0x42010a:c.instructions+=1;goto B42010a;
case 0x420110:goto L420110;
case 0x420115:c.instructions+=8;goto B420115;
case 0x420119:c.instructions+=7;goto B420119;
case 0x42011c:c.instructions+=6;goto B42011c;
case 0x42011f:c.instructions+=5;goto B42011f;
case 0x420120:c.instructions+=4;goto B420120;
case 0x420122:c.instructions+=3;goto B420122;
case 0x420124:c.instructions+=2;goto B420124;
case 0x420128:c.instructions+=1;goto B420128;
case 0x42012e:goto L42012e;
case 0x42012f:c.instructions+=2;goto B42012f;
case 0x420130:c.instructions+=1;goto B420130;
case 0x420131:goto L420131;
case 0x420132:c.instructions+=2;goto B420132;
case 0x420133:c.instructions+=1;goto B420133;
case 0x420140:goto L420140;
case 0x420141:c.instructions+=8;goto B420141;
case 0x420142:c.instructions+=7;goto B420142;
case 0x420143:c.instructions+=6;goto B420143;
case 0x420145:c.instructions+=5;goto B420145;
case 0x42014b:c.instructions+=4;goto B42014b;
case 0x42014c:c.instructions+=3;goto B42014c;
case 0x420152:c.instructions+=2;goto B420152;
case 0x420154:c.instructions+=1;goto B420154;
case 0x420156:goto L420156;
case 0x42015c:c.instructions+=2;goto B42015c;
case 0x42015e:c.instructions+=1;goto B42015e;
case 0x420160:goto L420160;
case 0x420161:c.instructions+=2;goto B420161;
case 0x420166:c.instructions+=1;goto B420166;
case 0x42016b:goto L42016b;
case 0x42016d:c.instructions+=2;goto B42016d;
case 0x42016f:c.instructions+=1;goto B42016f;
case 0x420171:goto L420171;
case 0x420178:c.instructions+=4;goto B420178;
case 0x42017d:c.instructions+=3;goto B42017d;
case 0x42017f:c.instructions+=2;goto B42017f;
case 0x420181:c.instructions+=1;goto B420181;
case 0x420183:goto L420183;
case 0x420184:c.instructions+=2;goto B420184;
case 0x420189:c.instructions+=1;goto B420189;
case 0x42018e:goto L42018e;
case 0x420194:c.instructions+=6;goto B420194;
case 0x420196:c.instructions+=5;goto B420196;
case 0x420199:c.instructions+=4;goto B420199;
case 0x42019c:c.instructions+=3;goto B42019c;
case 0x4201a2:c.instructions+=2;goto B4201a2;
case 0x4201aa:c.instructions+=1;goto B4201aa;
case 0x4201ac:goto L4201ac;
case 0x4201af:c.instructions+=3;goto B4201af;
case 0x4201b0:c.instructions+=2;goto B4201b0;
case 0x4201b2:c.instructions+=1;goto B4201b2;
case 0x4201b7:goto L4201b7;
case 0x4201b9:c.instructions+=1;goto B4201b9;
case 0x4201bf:goto L4201bf;
case 0x4201c4:c.instructions+=3;goto B4201c4;
case 0x4201c5:c.instructions+=2;goto B4201c5;
case 0x4201c7:c.instructions+=1;goto B4201c7;
case 0x4201c9:goto L4201c9;
case 0x4201ca:c.instructions+=4;goto B4201ca;
case 0x4201cb:c.instructions+=3;goto B4201cb;
case 0x4201cc:c.instructions+=2;goto B4201cc;
case 0x4201cd:c.instructions+=1;goto B4201cd;
case 0x4201d0:goto L4201d0;
case 0x4201d4:c.instructions+=20;goto B4201d4;
case 0x4201d6:c.instructions+=19;goto B4201d6;
case 0x4201d9:c.instructions+=18;goto B4201d9;
case 0x4201dd:c.instructions+=17;goto B4201dd;
case 0x4201e3:c.instructions+=16;goto B4201e3;
case 0x4201e9:c.instructions+=15;goto B4201e9;
case 0x4201ed:c.instructions+=14;goto B4201ed;
case 0x4201ef:c.instructions+=13;goto B4201ef;
case 0x4201f2:c.instructions+=12;goto B4201f2;
case 0x4201f8:c.instructions+=11;goto B4201f8;
case 0x4201fe:c.instructions+=10;goto B4201fe;
case 0x420201:c.instructions+=9;goto B420201;
case 0x420204:c.instructions+=8;goto B420204;
case 0x420206:c.instructions+=7;goto B420206;
case 0x420208:c.instructions+=6;goto B420208;
case 0x42020b:c.instructions+=5;goto B42020b;
case 0x42020e:c.instructions+=4;goto B42020e;
case 0x420211:c.instructions+=3;goto B420211;
case 0x420214:c.instructions+=2;goto B420214;
case 0x420216:c.instructions+=1;goto B420216;
case 0x420218:goto L420218;
case 0x42021e:c.instructions+=1;goto B42021e;
case 0x420220:goto L420220;
case 0x420223:c.instructions+=3;goto B420223;
case 0x420227:c.instructions+=2;goto B420227;
case 0x420228:c.instructions+=1;goto B420228;
case 0x42022d:goto L42022d;
case 0x420230:goto L420230;
case 0x420232:c.instructions+=15;goto B420232;
case 0x420236:c.instructions+=14;goto B420236;
case 0x420239:c.instructions+=13;goto B420239;
case 0x42023a:c.instructions+=12;goto B42023a;
case 0x42023d:c.instructions+=11;goto B42023d;
case 0x420240:c.instructions+=10;goto B420240;
case 0x420242:c.instructions+=9;goto B420242;
case 0x420244:c.instructions+=8;goto B420244;
case 0x420246:c.instructions+=7;goto B420246;
case 0x420248:c.instructions+=6;goto B420248;
case 0x42024a:c.instructions+=5;goto B42024a;
case 0x42024c:c.instructions+=4;goto B42024c;
case 0x42024e:c.instructions+=3;goto B42024e;
case 0x420250:c.instructions+=2;goto B420250;
case 0x420253:c.instructions+=1;goto B420253;
case 0x420258:goto L420258;
case 0x42025b:goto L42025b;
case 0x42025f:c.instructions+=3;goto B42025f;
case 0x420260:c.instructions+=2;goto B420260;
case 0x420267:c.instructions+=1;goto B420267;
case 0x42026c:goto L42026c;
case 0x420270:goto L420270;
case 0x420273:c.instructions+=10;goto B420273;
case 0x420274:c.instructions+=9;goto B420274;
case 0x420275:c.instructions+=8;goto B420275;
case 0x420277:c.instructions+=7;goto B420277;
case 0x42027a:c.instructions+=6;goto B42027a;
case 0x42027e:c.instructions+=5;goto B42027e;
case 0x420281:c.instructions+=4;goto B420281;
case 0x420283:c.instructions+=3;goto B420283;
case 0x420285:c.instructions+=2;goto B420285;
case 0x42028a:c.instructions+=1;goto B42028a;
case 0x420290:goto L420290;
case 0x420291:c.instructions+=1;goto B420291;
case 0x420292:goto L420292;
case 0x420296:c.instructions+=2;goto B420296;
case 0x420298:c.instructions+=1;goto B420298;
case 0x42029e:goto L42029e;
case 0x4202a1:c.instructions+=5;goto B4202a1;
case 0x4202a5:c.instructions+=4;goto B4202a5;
case 0x4202ab:c.instructions+=3;goto B4202ab;
case 0x4202ad:c.instructions+=2;goto B4202ad;
case 0x4202b0:c.instructions+=1;goto B4202b0;
case 0x4202b6:goto L4202b6;
case 0x4202b9:c.instructions+=3;goto B4202b9;
case 0x4202ba:c.instructions+=2;goto B4202ba;
case 0x4202bc:c.instructions+=1;goto B4202bc;
case 0x4202c1:goto L4202c1;
case 0x4202c3:c.instructions+=1;goto B4202c3;
case 0x4202c9:goto L4202c9;
case 0x4202cd:c.instructions+=3;goto B4202cd;
case 0x4202d0:c.instructions+=2;goto B4202d0;
case 0x4202d1:c.instructions+=1;goto B4202d1;
case 0x4202d6:goto L4202d6;
case 0x4202d8:c.instructions+=1;goto B4202d8;
case 0x4202de:goto L4202de;
case 0x4202e1:c.instructions+=2;goto B4202e1;
case 0x4202e3:c.instructions+=1;goto B4202e3;
case 0x4202e8:goto L4202e8;
case 0x4202ea:c.instructions+=2;goto B4202ea;
case 0x4202ee:c.instructions+=1;goto B4202ee;
case 0x4202f4:goto L4202f4;
case 0x4202f6:c.instructions+=1;goto B4202f6;
case 0x4202fc:goto L4202fc;
case 0x420300:c.instructions+=2;goto B420300;
case 0x420302:c.instructions+=1;goto B420302;
case 0x420308:goto L420308;
case 0x42030b:c.instructions+=2;goto B42030b;
case 0x42030c:c.instructions+=1;goto B42030c;
case 0x420311:goto L420311;
case 0x420317:c.instructions+=9;goto B420317;
case 0x420319:c.instructions+=8;goto B420319;
case 0x42031c:c.instructions+=7;goto B42031c;
case 0x42031e:c.instructions+=6;goto B42031e;
case 0x420321:c.instructions+=5;goto B420321;
case 0x420324:c.instructions+=4;goto B420324;
case 0x420326:c.instructions+=3;goto B420326;
case 0x420329:c.instructions+=2;goto B420329;
case 0x42032b:c.instructions+=1;goto B42032b;
case 0x42032d:goto L42032d;
case 0x42032f:c.instructions+=2;goto B42032f;
case 0x420331:c.instructions+=1;goto B420331;
case 0x420337:goto L420337;
case 0x42033b:c.instructions+=3;goto B42033b;
case 0x42033c:c.instructions+=2;goto B42033c;
case 0x42033e:c.instructions+=1;goto B42033e;
case 0x420343:goto L420343;
case 0x420345:c.instructions+=1;goto B420345;
case 0x420347:goto L420347;
case 0x420349:c.instructions+=1;goto B420349;
case 0x42034b:goto L42034b;
case 0x42034f:c.instructions+=3;goto B42034f;
case 0x420350:c.instructions+=2;goto B420350;
case 0x420352:c.instructions+=1;goto B420352;
case 0x420357:goto L420357;
case 0x420359:c.instructions+=1;goto B420359;
case 0x42035b:goto L42035b;
case 0x42035f:c.instructions+=3;goto B42035f;
case 0x420360:c.instructions+=2;goto B420360;
case 0x420362:c.instructions+=1;goto B420362;
case 0x420367:goto L420367;
case 0x420369:c.instructions+=1;goto B420369;
case 0x42036b:goto L42036b;
case 0x420370:goto L420370;
case 0x420374:c.instructions+=3;goto B420374;
case 0x420375:c.instructions+=2;goto B420375;
case 0x420377:c.instructions+=1;goto B420377;
case 0x42037d:goto L42037d;
case 0x420381:c.instructions+=2;goto B420381;
case 0x420383:c.instructions+=1;goto B420383;
case 0x420389:goto L420389;
case 0x42038c:c.instructions+=2;goto B42038c;
case 0x42038e:c.instructions+=1;goto B42038e;
case 0x420394:goto L420394;
case 0x42039a:c.instructions+=6;goto B42039a;
case 0x42039c:c.instructions+=5;goto B42039c;
case 0x42039e:c.instructions+=4;goto B42039e;
case 0x4203a1:c.instructions+=3;goto B4203a1;
case 0x4203a3:c.instructions+=2;goto B4203a3;
case 0x4203a5:c.instructions+=1;goto B4203a5;
case 0x4203a7:goto L4203a7;
case 0x4203a9:c.instructions+=1;goto B4203a9;
case 0x4203ae:goto L4203ae;
case 0x4203b1:c.instructions+=4;goto B4203b1;
case 0x4203b3:c.instructions+=3;goto B4203b3;
case 0x4203b4:c.instructions+=2;goto B4203b4;
case 0x4203b5:c.instructions+=1;goto B4203b5;
case 0x4203ba:goto L4203ba;
case 0x4203bd:c.instructions+=9;goto B4203bd;
case 0x4203c3:c.instructions+=8;goto B4203c3;
case 0x4203c6:c.instructions+=7;goto B4203c6;
case 0x4203c9:c.instructions+=6;goto B4203c9;
case 0x4203cc:c.instructions+=5;goto B4203cc;
case 0x4203cf:c.instructions+=4;goto B4203cf;
case 0x4203d2:c.instructions+=3;goto B4203d2;
case 0x4203d4:c.instructions+=2;goto B4203d4;
case 0x4203da:c.instructions+=1;goto B4203da;
case 0x4203dc:goto L4203dc;
case 0x4203e3:c.instructions+=1;goto B4203e3;
case 0x4203e5:goto L4203e5;
case 0x4203e7:c.instructions+=1;goto B4203e7;
case 0x4203e9:goto L4203e9;
case 0x4203ed:c.instructions+=5;goto B4203ed;
case 0x4203f0:c.instructions+=4;goto B4203f0;
case 0x4203f4:c.instructions+=3;goto B4203f4;
case 0x4203f8:c.instructions+=2;goto B4203f8;
case 0x4203fe:c.instructions+=1;goto B4203fe;
case 0x420400:goto L420400;
case 0x420402:c.instructions+=1;goto B420402;
case 0x420407:goto L420407;
case 0x420409:c.instructions+=3;goto B420409;
case 0x42040b:c.instructions+=2;goto B42040b;
case 0x42040d:c.instructions+=1;goto B42040d;
case 0x42040f:goto L42040f;
case 0x420411:goto L420411;
case 0x420416:goto L420416;
case 0x42041c:c.instructions+=7;goto B42041c;
case 0x42041f:c.instructions+=6;goto B42041f;
case 0x420422:c.instructions+=5;goto B420422;
case 0x420424:c.instructions+=4;goto B420424;
case 0x420427:c.instructions+=3;goto B420427;
case 0x42042a:c.instructions+=2;goto B42042a;
case 0x42042b:c.instructions+=1;goto B42042b;
case 0x420430:goto L420430;
case 0x420433:goto L420433;
case 0x420436:c.instructions+=3;goto B420436;
case 0x420438:c.instructions+=2;goto B420438;
case 0x42043a:c.instructions+=1;goto B42043a;
case 0x420440:goto L420440;
case 0x420442:goto L420442;
case 0x420449:c.instructions+=1;goto B420449;
case 0x42044b:goto L42044b;
case 0x42044e:goto L42044e;
case 0x42044f:c.instructions+=1;goto B42044f;
case 0x420450:goto L420450;
case 0x420453:c.instructions+=2;goto B420453;
case 0x420455:c.instructions+=1;goto B420455;
case 0x420457:goto L420457;
case 0x42045d:c.instructions+=2;goto B42045d;
case 0x42045f:c.instructions+=1;goto B42045f;
case 0x420461:goto L420461;
case 0x420465:c.instructions+=4;goto B420465;
case 0x420466:c.instructions+=3;goto B420466;
case 0x420468:c.instructions+=2;goto B420468;
case 0x42046b:c.instructions+=1;goto B42046b;
case 0x420470:goto L420470;
case 0x420471:c.instructions+=3;goto B420471;
case 0x420472:c.instructions+=2;goto B420472;
case 0x420475:c.instructions+=1;goto B420475;
case 0x420478:goto L420478;
case 0x42047a:c.instructions+=16;goto B42047a;
case 0x42047e:c.instructions+=15;goto B42047e;
case 0x420481:c.instructions+=14;goto B420481;
case 0x420482:c.instructions+=13;goto B420482;
case 0x420485:c.instructions+=12;goto B420485;
case 0x420487:c.instructions+=11;goto B420487;
case 0x42048a:c.instructions+=10;goto B42048a;
case 0x42048c:c.instructions+=9;goto B42048c;
case 0x42048e:c.instructions+=8;goto B42048e;
case 0x420490:c.instructions+=7;goto B420490;
case 0x420492:c.instructions+=6;goto B420492;
case 0x420494:c.instructions+=5;goto B420494;
case 0x420496:c.instructions+=4;goto B420496;
case 0x420498:c.instructions+=3;goto B420498;
case 0x42049a:c.instructions+=2;goto B42049a;
case 0x42049d:c.instructions+=1;goto B42049d;
case 0x4204a2:goto L4204a2;
case 0x4204a3:c.instructions+=3;goto B4204a3;
case 0x4204a4:c.instructions+=2;goto B4204a4;
case 0x4204a7:c.instructions+=1;goto B4204a7;
case 0x4204aa:goto L4204aa;
case 0x4204ae:c.instructions+=4;goto B4204ae;
case 0x4204af:c.instructions+=3;goto B4204af;
case 0x4204b1:c.instructions+=2;goto B4204b1;
case 0x4204b8:c.instructions+=1;goto B4204b8;
case 0x4204bd:goto L4204bd;
case 0x4204be:c.instructions+=3;goto B4204be;
case 0x4204bf:c.instructions+=2;goto B4204bf;
case 0x4204c2:c.instructions+=1;goto B4204c2;
case 0x4204d0:goto L4204d0;
case 0x4204e0:goto L4204e0;
case 0x4204f0:goto L4204f0;
case 0x420500:goto L420500;
case 0x420502:c.instructions+=14;goto B420502;
case 0x420507:c.instructions+=13;goto B420507;
case 0x42050d:c.instructions+=12;goto B42050d;
case 0x42050e:c.instructions+=11;goto B42050e;
case 0x420515:c.instructions+=10;goto B420515;
case 0x420516:c.instructions+=9;goto B420516;
case 0x420517:c.instructions+=8;goto B420517;
case 0x420518:c.instructions+=7;goto B420518;
case 0x42051c:c.instructions+=6;goto B42051c;
case 0x42051d:c.instructions+=5;goto B42051d;
case 0x42051e:c.instructions+=4;goto B42051e;
case 0x420520:c.instructions+=3;goto B420520;
case 0x420521:c.instructions+=2;goto B420521;
case 0x420525:c.instructions+=1;goto B420525;
case 0x42052a:goto L42052a;
case 0x42052d:c.instructions+=6;goto B42052d;
case 0x42052f:c.instructions+=5;goto B42052f;
case 0x420530:c.instructions+=4;goto B420530;
case 0x420532:c.instructions+=3;goto B420532;
case 0x420536:c.instructions+=2;goto B420536;
case 0x42053c:c.instructions+=1;goto B42053c;
case 0x420541:goto L420541;
case 0x420547:c.instructions+=36;goto B420547;
case 0x42054d:c.instructions+=35;goto B42054d;
case 0x420553:c.instructions+=34;goto B420553;
case 0x420559:c.instructions+=33;goto B420559;
case 0x42055f:c.instructions+=32;goto B42055f;
case 0x420565:c.instructions+=31;goto B420565;
case 0x42056b:c.instructions+=30;goto B42056b;
case 0x420571:c.instructions+=29;goto B420571;
case 0x420577:c.instructions+=28;goto B420577;
case 0x42057d:c.instructions+=27;goto B42057d;
case 0x420583:c.instructions+=26;goto B420583;
case 0x420589:c.instructions+=25;goto B420589;
case 0x42058f:c.instructions+=24;goto B42058f;
case 0x420595:c.instructions+=23;goto B420595;
case 0x420598:c.instructions+=22;goto B420598;
case 0x42059e:c.instructions+=21;goto B42059e;
case 0x4205a4:c.instructions+=20;goto B4205a4;
case 0x4205aa:c.instructions+=19;goto B4205aa;
case 0x4205b0:c.instructions+=18;goto B4205b0;
case 0x4205b6:c.instructions+=17;goto B4205b6;
case 0x4205bc:c.instructions+=16;goto B4205bc;
case 0x4205c2:c.instructions+=15;goto B4205c2;
case 0x4205c6:c.instructions+=14;goto B4205c6;
case 0x4205ca:c.instructions+=13;goto B4205ca;
case 0x4205d0:c.instructions+=12;goto B4205d0;
case 0x4205d4:c.instructions+=11;goto B4205d4;
case 0x4205da:c.instructions+=10;goto B4205da;
case 0x4205e4:c.instructions+=9;goto B4205e4;
case 0x4205ea:c.instructions+=8;goto B4205ea;
case 0x4205f1:c.instructions+=7;goto B4205f1;
case 0x4205f7:c.instructions+=6;goto B4205f7;
case 0x4205fc:c.instructions+=5;goto B4205fc;
case 0x420602:c.instructions+=4;goto B420602;
case 0x420608:c.instructions+=3;goto B420608;
case 0x42060b:c.instructions+=2;goto B42060b;
case 0x420612:c.instructions+=1;goto B420612;
case 0x420617:goto L420617;
case 0x42061d:c.instructions+=18;goto B42061d;
case 0x420623:c.instructions+=17;goto B420623;
case 0x420629:c.instructions+=16;goto B420629;
case 0x42062f:c.instructions+=15;goto B42062f;
case 0x420635:c.instructions+=14;goto B420635;
case 0x42063b:c.instructions+=13;goto B42063b;
case 0x42063e:c.instructions+=12;goto B42063e;
case 0x420644:c.instructions+=11;goto B420644;
case 0x42064a:c.instructions+=10;goto B42064a;
case 0x420650:c.instructions+=9;goto B420650;
case 0x420656:c.instructions+=8;goto B420656;
case 0x42065c:c.instructions+=7;goto B42065c;
case 0x420662:c.instructions+=6;goto B420662;
case 0x420668:c.instructions+=5;goto B420668;
case 0x42066e:c.instructions+=4;goto B42066e;
case 0x420674:c.instructions+=3;goto B420674;
case 0x42067a:c.instructions+=2;goto B42067a;
case 0x420680:c.instructions+=1;goto B420680;
case 0x420685:goto L420685;
case 0x420687:c.instructions+=2;goto B420687;
case 0x42068d:c.instructions+=1;goto B42068d;
case 0x420692:goto L420692;
case 0x420695:c.instructions+=4;goto B420695;
case 0x420699:c.instructions+=3;goto B420699;
case 0x42069b:c.instructions+=2;goto B42069b;
case 0x4206a0:c.instructions+=1;goto B4206a0;
case 0x4206a2:goto L4206a2;
case 0x4206a4:c.instructions+=2;goto B4206a4;
case 0x4206a6:c.instructions+=1;goto B4206a6;
case 0x4206ab:goto L4206ab;
case 0x4206ad:goto L4206ad;
case 0x4206af:goto L4206af;
case 0x4206b2:c.instructions+=5;goto B4206b2;
case 0x4206b8:c.instructions+=4;goto B4206b8;
case 0x4206bb:c.instructions+=3;goto B4206bb;
case 0x4206bf:c.instructions+=2;goto B4206bf;
case 0x4206c4:c.instructions+=1;goto B4206c4;
case 0x4206c6:goto L4206c6;
case 0x4206c8:c.instructions+=1;goto B4206c8;
case 0x4206cd:goto L4206cd;
case 0x4206d0:c.instructions+=4;goto B4206d0;
case 0x4206d4:c.instructions+=3;goto B4206d4;
case 0x4206d6:c.instructions+=2;goto B4206d6;
case 0x4206db:c.instructions+=1;goto B4206db;
case 0x4206dd:goto L4206dd;
case 0x4206df:c.instructions+=2;goto B4206df;
case 0x4206e1:c.instructions+=1;goto B4206e1;
case 0x4206e6:goto L4206e6;
case 0x4206eb:c.instructions+=2;goto B4206eb;
case 0x4206f1:c.instructions+=1;goto B4206f1;
case 0x4206f3:goto L4206f3;
case 0x4206f5:c.instructions+=3;goto B4206f5;
case 0x4206fa:c.instructions+=2;goto B4206fa;
case 0x420700:c.instructions+=1;goto B420700;
case 0x420702:goto L420702;
case 0x420708:goto L420708;
case 0x42070b:c.instructions+=9;goto B42070b;
case 0x420712:c.instructions+=8;goto B420712;
case 0x420718:c.instructions+=7;goto B420718;
case 0x420722:c.instructions+=6;goto B420722;
case 0x420728:c.instructions+=5;goto B420728;
case 0x42072e:c.instructions+=4;goto B42072e;
case 0x420730:c.instructions+=3;goto B420730;
case 0x420731:c.instructions+=2;goto B420731;
case 0x420735:c.instructions+=1;goto B420735;
case 0x42073a:goto L42073a;
case 0x420740:c.instructions+=23;goto B420740;
case 0x420746:c.instructions+=22;goto B420746;
case 0x42074c:c.instructions+=21;goto B42074c;
case 0x420753:c.instructions+=20;goto B420753;
case 0x420759:c.instructions+=19;goto B420759;
case 0x42075f:c.instructions+=18;goto B42075f;
case 0x420765:c.instructions+=17;goto B420765;
case 0x42076b:c.instructions+=16;goto B42076b;
case 0x42076e:c.instructions+=15;goto B42076e;
case 0x420773:c.instructions+=14;goto B420773;
case 0x420779:c.instructions+=13;goto B420779;
case 0x42077f:c.instructions+=12;goto B42077f;
case 0x420785:c.instructions+=11;goto B420785;
case 0x42078b:c.instructions+=10;goto B42078b;
case 0x420791:c.instructions+=9;goto B420791;
case 0x420797:c.instructions+=8;goto B420797;
case 0x42079d:c.instructions+=7;goto B42079d;
case 0x4207a3:c.instructions+=6;goto B4207a3;
case 0x4207a9:c.instructions+=5;goto B4207a9;
case 0x4207af:c.instructions+=4;goto B4207af;
case 0x4207b2:c.instructions+=3;goto B4207b2;
case 0x4207b5:c.instructions+=2;goto B4207b5;
case 0x4207b7:c.instructions+=1;goto B4207b7;
case 0x4207b9:goto L4207b9;
case 0x4207bd:c.instructions+=2;goto B4207bd;
case 0x4207c3:c.instructions+=1;goto B4207c3;
case 0x4207c5:goto L4207c5;
case 0x4207cb:goto L4207cb;
case 0x4207cf:c.instructions+=9;goto B4207cf;
case 0x4207d0:c.instructions+=8;goto B4207d0;
case 0x4207d6:c.instructions+=7;goto B4207d6;
case 0x4207d8:c.instructions+=6;goto B4207d8;
case 0x4207d9:c.instructions+=5;goto B4207d9;
case 0x4207da:c.instructions+=4;goto B4207da;
case 0x4207db:c.instructions+=3;goto B4207db;
case 0x4207e2:c.instructions+=2;goto B4207e2;
case 0x4207e5:c.instructions+=1;goto B4207e5;
case 0x4207f0:goto L4207f0;
case 0x4207f1:c.instructions+=2;goto B4207f1;
case 0x4207f3:c.instructions+=1;goto B4207f3;
case 0x4207f8:goto L4207f8;
case 0x4207fd:c.instructions+=1;goto B4207fd;
case 0x4207ff:goto L4207ff;
case 0x420800:c.instructions+=1;goto B420800;
case 0x420805:goto L420805;
case 0x420808:goto L420808;
case 0x42080a:c.instructions+=2;goto B42080a;
case 0x42080b:c.instructions+=1;goto B42080b;
case 0x420810:goto L420810;
case 0x420811:c.instructions+=8;goto B420811;
case 0x420813:c.instructions+=7;goto B420813;
case 0x420819:c.instructions+=6;goto B420819;
case 0x42081c:c.instructions+=5;goto B42081c;
case 0x42081e:c.instructions+=4;goto B42081e;
case 0x42081f:c.instructions+=3;goto B42081f;
case 0x420822:c.instructions+=2;goto B420822;
case 0x420823:c.instructions+=1;goto B420823;
case 0x420826:goto L420826;
case 0x420828:c.instructions+=2;goto B420828;
case 0x42082a:c.instructions+=1;goto B42082a;
case 0x420830:goto L420830;
case 0x420832:c.instructions+=1;goto B420832;
case 0x420837:goto L420837;
case 0x42083d:c.instructions+=4;goto B42083d;
case 0x42083f:c.instructions+=3;goto B42083f;
case 0x420842:c.instructions+=2;goto B420842;
case 0x420843:c.instructions+=1;goto B420843;
case 0x420846:goto L420846;
case 0x42084c:c.instructions+=2;goto B42084c;
case 0x42084e:c.instructions+=1;goto B42084e;
case 0x420850:goto L420850;
case 0x420856:c.instructions+=2;goto B420856;
case 0x420858:c.instructions+=1;goto B420858;
case 0x42085a:goto L42085a;
case 0x42085d:c.instructions+=3;goto B42085d;
case 0x420860:c.instructions+=2;goto B420860;
case 0x420862:c.instructions+=1;goto B420862;
case 0x420867:goto L420867;
case 0x420869:c.instructions+=1;goto B420869;
case 0x42086b:goto L42086b;
case 0x42086d:c.instructions+=2;goto B42086d;
case 0x42086f:c.instructions+=1;goto B42086f;
case 0x420875:goto L420875;
case 0x420877:c.instructions+=1;goto B420877;
case 0x42087c:goto L42087c;
case 0x420882:c.instructions+=3;goto B420882;
case 0x420888:c.instructions+=2;goto B420888;
case 0x42088e:c.instructions+=1;goto B42088e;
case 0x420890:goto L420890;
case 0x420895:c.instructions+=2;goto B420895;
case 0x420897:c.instructions+=1;goto B420897;
case 0x420899:goto L420899;
case 0x42089e:c.instructions+=2;goto B42089e;
case 0x4208a0:c.instructions+=1;goto B4208a0;
case 0x4208a2:goto L4208a2;
case 0x4208a7:c.instructions+=2;goto B4208a7;
case 0x4208a9:c.instructions+=1;goto B4208a9;
case 0x4208ab:goto L4208ab;
case 0x4208b0:c.instructions+=2;goto B4208b0;
case 0x4208b2:c.instructions+=1;goto B4208b2;
case 0x4208b4:goto L4208b4;
case 0x4208b9:c.instructions+=2;goto B4208b9;
case 0x4208bb:c.instructions+=1;goto B4208bb;
case 0x4208bd:goto L4208bd;
case 0x4208c0:c.instructions+=3;goto B4208c0;
case 0x4208c3:c.instructions+=2;goto B4208c3;
case 0x4208c5:c.instructions+=1;goto B4208c5;
case 0x4208c7:goto L4208c7;
case 0x4208ca:c.instructions+=1;goto B4208ca;
case 0x4208d4:goto L4208d4;
case 0x4208da:c.instructions+=4;goto B4208da;
case 0x4208dc:c.instructions+=3;goto B4208dc;
case 0x4208de:c.instructions+=2;goto B4208de;
case 0x4208e1:c.instructions+=1;goto B4208e1;
case 0x4208e6:goto L4208e6;
case 0x4208e9:c.instructions+=3;goto B4208e9;
case 0x4208ec:c.instructions+=2;goto B4208ec;
case 0x4208ee:c.instructions+=1;goto B4208ee;
case 0x4208f0:goto L4208f0;
case 0x4208f4:c.instructions+=2;goto B4208f4;
case 0x4208fa:c.instructions+=1;goto B4208fa;
case 0x4208fc:goto L4208fc;
case 0x420906:c.instructions+=1;goto B420906;
case 0x42090c:goto L42090c;
case 0x42090d:c.instructions+=2;goto B42090d;
case 0x42090e:c.instructions+=1;goto B42090e;
case 0x420910:goto L420910;
case 0x420917:c.instructions+=3;goto B420917;
case 0x42091b:c.instructions+=2;goto B42091b;
case 0x42091d:c.instructions+=1;goto B42091d;
case 0x42091f:goto L42091f;
case 0x420922:c.instructions+=2;goto B420922;
case 0x420926:c.instructions+=1;goto B420926;
case 0x420928:goto L420928;
case 0x42092b:c.instructions+=3;goto B42092b;
case 0x42092f:c.instructions+=2;goto B42092f;
case 0x420932:c.instructions+=1;goto B420932;
case 0x420937:goto L420937;
case 0x420940:goto L420940;
case 0x420941:c.instructions+=10;goto B420941;
case 0x420943:c.instructions+=9;goto B420943;
case 0x420946:c.instructions+=8;goto B420946;
case 0x420949:c.instructions+=7;goto B420949;
case 0x42094a:c.instructions+=6;goto B42094a;
case 0x42094b:c.instructions+=5;goto B42094b;
case 0x42094c:c.instructions+=4;goto B42094c;
case 0x42094f:c.instructions+=3;goto B42094f;
case 0x420951:c.instructions+=2;goto B420951;
case 0x420953:c.instructions+=1;goto B420953;
case 0x420958:goto L420958;
case 0x42095a:c.instructions+=5;goto B42095a;
case 0x42095c:c.instructions+=4;goto B42095c;
case 0x42095f:c.instructions+=3;goto B42095f;
case 0x420961:c.instructions+=2;goto B420961;
case 0x420965:c.instructions+=1;goto B420965;
case 0x42096a:goto L42096a;
case 0x42096c:c.instructions+=5;goto B42096c;
case 0x420973:c.instructions+=4;goto B420973;
case 0x42097d:c.instructions+=3;goto B42097d;
case 0x420984:c.instructions+=2;goto B420984;
case 0x42098b:c.instructions+=1;goto B42098b;
case 0x420991:goto L420991;
case 0x420992:c.instructions+=2;goto B420992;
case 0x420994:c.instructions+=1;goto B420994;
case 0x420999:goto L420999;
case 0x42099c:c.instructions+=9;goto B42099c;
case 0x4209a2:c.instructions+=8;goto B4209a2;
case 0x4209a3:c.instructions+=7;goto B4209a3;
case 0x4209a5:c.instructions+=6;goto B4209a5;
case 0x4209a6:c.instructions+=5;goto B4209a6;
case 0x4209aa:c.instructions+=4;goto B4209aa;
case 0x4209ad:c.instructions+=3;goto B4209ad;
case 0x4209ae:c.instructions+=2;goto B4209ae;
case 0x4209b0:c.instructions+=1;goto B4209b0;
case 0x4209b5:goto L4209b5;
case 0x4209ba:c.instructions+=2;goto B4209ba;
case 0x4209bc:c.instructions+=1;goto B4209bc;
case 0x4209be:goto L4209be;
case 0x4209c3:c.instructions+=2;goto B4209c3;
case 0x4209c5:c.instructions+=1;goto B4209c5;
case 0x4209c7:goto L4209c7;
case 0x4209cc:c.instructions+=2;goto B4209cc;
case 0x4209ce:c.instructions+=1;goto B4209ce;
case 0x4209d0:goto L4209d0;
case 0x4209d5:c.instructions+=2;goto B4209d5;
case 0x4209d7:c.instructions+=1;goto B4209d7;
case 0x4209d9:goto L4209d9;
case 0x4209dd:goto L4209dd;
case 0x4209e0:c.instructions+=6;goto B4209e0;
case 0x4209e4:c.instructions+=5;goto B4209e4;
case 0x4209e6:c.instructions+=4;goto B4209e6;
case 0x4209e8:c.instructions+=3;goto B4209e8;
case 0x4209ea:c.instructions+=2;goto B4209ea;
case 0x4209f0:c.instructions+=1;goto B4209f0;
case 0x4209f5:goto L4209f5;
case 0x4209f6:c.instructions+=6;goto B4209f6;
case 0x4209f7:c.instructions+=5;goto B4209f7;
case 0x4209fb:c.instructions+=4;goto B4209fb;
case 0x4209fe:c.instructions+=3;goto B4209fe;
case 0x4209ff:c.instructions+=2;goto B4209ff;
case 0x420a01:c.instructions+=1;goto B420a01;
case 0x420a06:goto L420a06;
case 0x420a0b:c.instructions+=6;goto B420a0b;
case 0x420a0d:c.instructions+=5;goto B420a0d;
case 0x420a0f:c.instructions+=4;goto B420a0f;
case 0x420a14:c.instructions+=3;goto B420a14;
case 0x420a15:c.instructions+=2;goto B420a15;
case 0x420a16:c.instructions+=1;goto B420a16;
case 0x420a1b:goto L420a1b;
case 0x420a1d:c.instructions+=4;goto B420a1d;
case 0x420a20:c.instructions+=3;goto B420a20;
case 0x420a23:c.instructions+=2;goto B420a23;
case 0x420a26:c.instructions+=1;goto B420a26;
case 0x420a28:goto L420a28;
case 0x420a2e:c.instructions+=7;goto B420a2e;
case 0x420a34:c.instructions+=6;goto B420a34;
case 0x420a35:c.instructions+=5;goto B420a35;
case 0x420a36:c.instructions+=4;goto B420a36;
case 0x420a37:c.instructions+=3;goto B420a37;
case 0x420a39:c.instructions+=2;goto B420a39;
case 0x420a3a:c.instructions+=1;goto B420a3a;
case 0x420a3d:goto L420a3d;
case 0x420a42:c.instructions+=1;goto B420a42;
case 0x420a48:goto L420a48;
case 0x420a49:c.instructions+=5;goto B420a49;
case 0x420a4a:c.instructions+=4;goto B420a4a;
case 0x420a4b:c.instructions+=3;goto B420a4b;
case 0x420a4d:c.instructions+=2;goto B420a4d;
case 0x420a4e:c.instructions+=1;goto B420a4e;
case 0x420a60:goto L420a60;
case 0x420a61:c.instructions+=26;goto B420a61;
case 0x420a63:c.instructions+=25;goto B420a63;
case 0x420a66:c.instructions+=24;goto B420a66;
case 0x420a69:c.instructions+=23;goto B420a69;
case 0x420a6c:c.instructions+=22;goto B420a6c;
case 0x420a6f:c.instructions+=21;goto B420a6f;
case 0x420a70:c.instructions+=20;goto B420a70;
case 0x420a73:c.instructions+=19;goto B420a73;
case 0x420a74:c.instructions+=18;goto B420a74;
case 0x420a76:c.instructions+=17;goto B420a76;
case 0x420a77:c.instructions+=16;goto B420a77;
case 0x420a79:c.instructions+=15;goto B420a79;
case 0x420a7b:c.instructions+=14;goto B420a7b;
case 0x420a7d:c.instructions+=13;goto B420a7d;
case 0x420a7f:c.instructions+=12;goto B420a7f;
case 0x420a81:c.instructions+=11;goto B420a81;
case 0x420a83:c.instructions+=10;goto B420a83;
case 0x420a85:c.instructions+=9;goto B420a85;
case 0x420a87:c.instructions+=8;goto B420a87;
case 0x420a89:c.instructions+=7;goto B420a89;
case 0x420a8b:c.instructions+=6;goto B420a8b;
case 0x420a8d:c.instructions+=5;goto B420a8d;
case 0x420a8f:c.instructions+=4;goto B420a8f;
case 0x420a95:c.instructions+=3;goto B420a95;
case 0x420a97:c.instructions+=2;goto B420a97;
case 0x420a9a:c.instructions+=1;goto B420a9a;
case 0x420a9c:goto L420a9c;
case 0x420a9f:c.instructions+=6;goto B420a9f;
case 0x420aa0:c.instructions+=5;goto B420aa0;
case 0x420aa4:c.instructions+=4;goto B420aa4;
case 0x420aa5:c.instructions+=3;goto B420aa5;
case 0x420aa9:c.instructions+=2;goto B420aa9;
case 0x420aaa:c.instructions+=1;goto B420aaa;
case 0x420aaf:goto L420aaf;
case 0x420ab2:c.instructions+=2;goto B420ab2;
case 0x420aba:c.instructions+=1;goto B420aba;
case 0x420abc:goto L420abc;
case 0x420abd:c.instructions+=3;goto B420abd;
case 0x420ac1:c.instructions+=2;goto B420ac1;
case 0x420ac2:c.instructions+=1;goto B420ac2;
case 0x420ac7:goto L420ac7;
case 0x420aca:goto L420aca;
case 0x420acd:c.instructions+=4;goto B420acd;
case 0x420acf:c.instructions+=3;goto B420acf;
case 0x420ad1:c.instructions+=2;goto B420ad1;
case 0x420ad3:c.instructions+=1;goto B420ad3;
case 0x420ad8:goto L420ad8;
case 0x420adb:c.instructions+=6;goto B420adb;
case 0x420ae1:c.instructions+=5;goto B420ae1;
case 0x420ae4:c.instructions+=4;goto B420ae4;
case 0x420ae6:c.instructions+=3;goto B420ae6;
case 0x420aea:c.instructions+=2;goto B420aea;
case 0x420aee:c.instructions+=1;goto B420aee;
case 0x420af0:goto L420af0;
case 0x420af4:c.instructions+=9;goto B420af4;
case 0x420af5:c.instructions+=8;goto B420af5;
case 0x420af9:c.instructions+=7;goto B420af9;
case 0x420afd:c.instructions+=6;goto B420afd;
case 0x420b01:c.instructions+=5;goto B420b01;
case 0x420b04:c.instructions+=4;goto B420b04;
case 0x420b05:c.instructions+=3;goto B420b05;
case 0x420b06:c.instructions+=2;goto B420b06;
case 0x420b07:c.instructions+=1;goto B420b07;
case 0x420b0c:goto L420b0c;
case 0x420b0f:c.instructions+=9;goto B420b0f;
case 0x420b11:c.instructions+=8;goto B420b11;
case 0x420b13:c.instructions+=7;goto B420b13;
case 0x420b15:c.instructions+=6;goto B420b15;
case 0x420b17:c.instructions+=5;goto B420b17;
case 0x420b19:c.instructions+=4;goto B420b19;
case 0x420b1d:c.instructions+=3;goto B420b1d;
case 0x420b1e:c.instructions+=2;goto B420b1e;
case 0x420b20:c.instructions+=1;goto B420b20;
case 0x420b25:goto L420b25;
case 0x420b26:c.instructions+=3;goto B420b26;
case 0x420b29:c.instructions+=2;goto B420b29;
case 0x420b2d:c.instructions+=1;goto B420b2d;
case 0x420b2f:goto L420b2f;
case 0x420b36:c.instructions+=6;goto B420b36;
case 0x420b37:c.instructions+=5;goto B420b37;
case 0x420b38:c.instructions+=4;goto B420b38;
case 0x420b39:c.instructions+=3;goto B420b39;
case 0x420b3b:c.instructions+=2;goto B420b3b;
case 0x420b3c:c.instructions+=1;goto B420b3c;
case 0x420b40:goto L420b40;
case 0x420b41:c.instructions+=10;goto B420b41;
case 0x420b43:c.instructions+=9;goto B420b43;
case 0x420b45:c.instructions+=8;goto B420b45;
case 0x420b46:c.instructions+=7;goto B420b46;
case 0x420b4c:c.instructions+=6;goto B420b4c;
case 0x420b52:c.instructions+=5;goto B420b52;
case 0x420b54:c.instructions+=4;goto B420b54;
case 0x420b5a:c.instructions+=3;goto B420b5a;
case 0x420b5f:c.instructions+=2;goto B420b5f;
case 0x420b61:c.instructions+=1;goto B420b61;
case 0x420b62:goto L420b62;
case 0x420b64:goto L420b64;
case 0x420b65:c.instructions+=2;goto B420b65;
case 0x420b67:c.instructions+=1;goto B420b67;
case 0x420b6c:goto L420b6c;
case 0x420b6d:c.instructions+=3;goto B420b6d;
case 0x420b6f:c.instructions+=2;goto B420b6f;
case 0x420b70:c.instructions+=1;goto B420b70;
case 0x420b80:goto L420b80;
case 0x420b81:c.instructions+=10;goto B420b81;
case 0x420b83:c.instructions+=9;goto B420b83;
case 0x420b86:c.instructions+=8;goto B420b86;
case 0x420b89:c.instructions+=7;goto B420b89;
case 0x420b8a:c.instructions+=6;goto B420b8a;
case 0x420b8b:c.instructions+=5;goto B420b8b;
case 0x420b8c:c.instructions+=4;goto B420b8c;
case 0x420b8e:c.instructions+=3;goto B420b8e;
case 0x420b90:c.instructions+=2;goto B420b90;
case 0x420b92:c.instructions+=1;goto B420b92;
case 0x420b97:goto L420b97;
case 0x420b9a:c.instructions+=34;goto B420b9a;
case 0x420b9c:c.instructions+=33;goto B420b9c;
case 0x420b9f:c.instructions+=32;goto B420b9f;
case 0x420ba2:c.instructions+=31;goto B420ba2;
case 0x420ba6:c.instructions+=30;goto B420ba6;
case 0x420ba8:c.instructions+=29;goto B420ba8;
case 0x420bac:c.instructions+=28;goto B420bac;
case 0x420baf:c.instructions+=27;goto B420baf;
case 0x420bb3:c.instructions+=26;goto B420bb3;
case 0x420bb6:c.instructions+=25;goto B420bb6;
case 0x420bba:c.instructions+=24;goto B420bba;
case 0x420bbc:c.instructions+=23;goto B420bbc;
case 0x420bbf:c.instructions+=22;goto B420bbf;
case 0x420bc3:c.instructions+=21;goto B420bc3;
case 0x420bc7:c.instructions+=20;goto B420bc7;
case 0x420bcb:c.instructions+=19;goto B420bcb;
case 0x420bcf:c.instructions+=18;goto B420bcf;
case 0x420bd3:c.instructions+=17;goto B420bd3;
case 0x420bdb:c.instructions+=16;goto B420bdb;
case 0x420bdf:c.instructions+=15;goto B420bdf;
case 0x420be1:c.instructions+=14;goto B420be1;
case 0x420be3:c.instructions+=13;goto B420be3;
case 0x420be7:c.instructions+=12;goto B420be7;
case 0x420beb:c.instructions+=11;goto B420beb;
case 0x420bef:c.instructions+=10;goto B420bef;
case 0x420bf3:c.instructions+=9;goto B420bf3;
case 0x420bf5:c.instructions+=8;goto B420bf5;
case 0x420bf7:c.instructions+=7;goto B420bf7;
case 0x420bf9:c.instructions+=6;goto B420bf9;
case 0x420bfb:c.instructions+=5;goto B420bfb;
case 0x420c01:c.instructions+=4;goto B420c01;
case 0x420c03:c.instructions+=3;goto B420c03;
case 0x420c05:c.instructions+=2;goto B420c05;
case 0x420c08:c.instructions+=1;goto B420c08;
case 0x420c0a:goto L420c0a;
case 0x420c0d:c.instructions+=7;goto B420c0d;
case 0x420c10:c.instructions+=6;goto B420c10;
case 0x420c11:c.instructions+=5;goto B420c11;
case 0x420c12:c.instructions+=4;goto B420c12;
case 0x420c13:c.instructions+=3;goto B420c13;
case 0x420c14:c.instructions+=2;goto B420c14;
case 0x420c15:c.instructions+=1;goto B420c15;
case 0x420c1a:goto L420c1a;
case 0x420c1d:c.instructions+=6;goto B420c1d;
case 0x420c1e:c.instructions+=5;goto B420c1e;
case 0x420c1f:c.instructions+=4;goto B420c1f;
case 0x420c20:c.instructions+=3;goto B420c20;
case 0x420c22:c.instructions+=2;goto B420c22;
case 0x420c23:c.instructions+=1;goto B420c23;
case 0x420c26:goto L420c26;
case 0x420c2c:c.instructions+=5;goto B420c2c;
case 0x420c2e:c.instructions+=4;goto B420c2e;
case 0x420c31:c.instructions+=3;goto B420c31;
case 0x420c33:c.instructions+=2;goto B420c33;
case 0x420c36:c.instructions+=1;goto B420c36;
case 0x420c3c:goto L420c3c;
case 0x420c40:goto L420c40;
case 0x420c43:c.instructions+=1;goto B420c43;
case 0x420c49:goto L420c49;
case 0x420c4c:c.instructions+=1;goto B420c4c;
case 0x420c52:goto L420c52;
case 0x420c58:c.instructions+=8;goto B420c58;
case 0x420c59:c.instructions+=7;goto B420c59;
case 0x420c5d:c.instructions+=6;goto B420c5d;
case 0x420c5e:c.instructions+=5;goto B420c5e;
case 0x420c62:c.instructions+=4;goto B420c62;
case 0x420c63:c.instructions+=3;goto B420c63;
case 0x420c67:c.instructions+=2;goto B420c67;
case 0x420c68:c.instructions+=1;goto B420c68;
case 0x420c6d:goto L420c6d;
case 0x420c73:c.instructions+=8;goto B420c73;
case 0x420c74:c.instructions+=7;goto B420c74;
case 0x420c78:c.instructions+=6;goto B420c78;
case 0x420c79:c.instructions+=5;goto B420c79;
case 0x420c7d:c.instructions+=4;goto B420c7d;
case 0x420c7e:c.instructions+=3;goto B420c7e;
case 0x420c82:c.instructions+=2;goto B420c82;
case 0x420c83:c.instructions+=1;goto B420c83;
case 0x420c88:goto L420c88;
case 0x420c8c:c.instructions+=14;goto B420c8c;
case 0x420c90:c.instructions+=13;goto B420c90;
case 0x420c93:c.instructions+=12;goto B420c93;
case 0x420c95:c.instructions+=11;goto B420c95;
case 0x420c97:c.instructions+=10;goto B420c97;
case 0x420c99:c.instructions+=9;goto B420c99;
case 0x420c9b:c.instructions+=8;goto B420c9b;
case 0x420c9d:c.instructions+=7;goto B420c9d;
case 0x420ca1:c.instructions+=6;goto B420ca1;
case 0x420ca5:c.instructions+=5;goto B420ca5;
case 0x420ca6:c.instructions+=4;goto B420ca6;
case 0x420ca8:c.instructions+=3;goto B420ca8;
case 0x420cac:c.instructions+=2;goto B420cac;
case 0x420cb4:c.instructions+=1;goto B420cb4;
case 0x420cb9:goto L420cb9;
case 0x420cbd:c.instructions+=31;goto B420cbd;
case 0x420cc1:c.instructions+=30;goto B420cc1;
case 0x420cc5:c.instructions+=29;goto B420cc5;
case 0x420cc9:c.instructions+=28;goto B420cc9;
case 0x420ccd:c.instructions+=27;goto B420ccd;
case 0x420cd1:c.instructions+=26;goto B420cd1;
case 0x420cd5:c.instructions+=25;goto B420cd5;
case 0x420cd7:c.instructions+=24;goto B420cd7;
case 0x420cdb:c.instructions+=23;goto B420cdb;
case 0x420cdd:c.instructions+=22;goto B420cdd;
case 0x420ce1:c.instructions+=21;goto B420ce1;
case 0x420ce5:c.instructions+=20;goto B420ce5;
case 0x420ce9:c.instructions+=19;goto B420ce9;
case 0x420ceb:c.instructions+=18;goto B420ceb;
case 0x420cec:c.instructions+=17;goto B420cec;
case 0x420cee:c.instructions+=16;goto B420cee;
case 0x420cf2:c.instructions+=15;goto B420cf2;
case 0x420cf4:c.instructions+=14;goto B420cf4;
case 0x420cf6:c.instructions+=13;goto B420cf6;
case 0x420cf8:c.instructions+=12;goto B420cf8;
case 0x420cfa:c.instructions+=11;goto B420cfa;
case 0x420cfe:c.instructions+=10;goto B420cfe;
case 0x420d02:c.instructions+=9;goto B420d02;
case 0x420d06:c.instructions+=8;goto B420d06;
case 0x420d09:c.instructions+=7;goto B420d09;
case 0x420d0d:c.instructions+=6;goto B420d0d;
case 0x420d0f:c.instructions+=5;goto B420d0f;
case 0x420d11:c.instructions+=4;goto B420d11;
case 0x420d17:c.instructions+=3;goto B420d17;
case 0x420d19:c.instructions+=2;goto B420d19;
case 0x420d1c:c.instructions+=1;goto B420d1c;
case 0x420d1e:goto L420d1e;
case 0x420d22:c.instructions+=4;goto B420d22;
case 0x420d25:c.instructions+=3;goto B420d25;
case 0x420d27:c.instructions+=2;goto B420d27;
case 0x420d2a:c.instructions+=1;goto B420d2a;
case 0x420d30:goto L420d30;
case 0x420d37:c.instructions+=6;goto B420d37;
case 0x420d38:c.instructions+=5;goto B420d38;
case 0x420d39:c.instructions+=4;goto B420d39;
case 0x420d3a:c.instructions+=3;goto B420d3a;
case 0x420d3c:c.instructions+=2;goto B420d3c;
case 0x420d3d:c.instructions+=1;goto B420d3d;
case 0x420d40:goto L420d40;
case 0x420d41:c.instructions+=13;goto B420d41;
case 0x420d43:c.instructions+=12;goto B420d43;
case 0x420d46:c.instructions+=11;goto B420d46;
case 0x420d47:c.instructions+=10;goto B420d47;
case 0x420d4d:c.instructions+=9;goto B420d4d;
case 0x420d51:c.instructions+=8;goto B420d51;
case 0x420d52:c.instructions+=7;goto B420d52;
case 0x420d55:c.instructions+=6;goto B420d55;
case 0x420d58:c.instructions+=5;goto B420d58;
case 0x420d5a:c.instructions+=4;goto B420d5a;
case 0x420d60:c.instructions+=3;goto B420d60;
case 0x420d62:c.instructions+=2;goto B420d62;
case 0x420d65:c.instructions+=1;goto B420d65;
case 0x420d67:goto L420d67;
case 0x420d6f:c.instructions+=1;goto B420d6f;
case 0x420d71:goto L420d71;
case 0x420d76:c.instructions+=1;goto B420d76;
case 0x420d7a:goto L420d7a;
case 0x420d7f:c.instructions+=2;goto B420d7f;
case 0x420d81:c.instructions+=1;goto B420d81;
case 0x420d83:goto L420d83;
case 0x420d88:c.instructions+=2;goto B420d88;
case 0x420d8a:c.instructions+=1;goto B420d8a;
case 0x420d8c:goto L420d8c;
case 0x420d91:c.instructions+=2;goto B420d91;
case 0x420d93:c.instructions+=1;goto B420d93;
case 0x420d95:goto L420d95;
case 0x420d9a:c.instructions+=2;goto B420d9a;
case 0x420d9c:c.instructions+=1;goto B420d9c;
case 0x420d9e:goto L420d9e;
case 0x420da3:c.instructions+=2;goto B420da3;
case 0x420da5:c.instructions+=1;goto B420da5;
case 0x420da7:goto L420da7;
case 0x420daa:c.instructions+=2;goto B420daa;
case 0x420dac:c.instructions+=1;goto B420dac;
case 0x420dae:goto L420dae;
case 0x420db6:goto L420db6;
case 0x420db7:c.instructions+=1;goto B420db7;
case 0x420dbc:goto L420dbc;
case 0x420dbe:c.instructions+=1;goto B420dbe;
case 0x420dc0:goto L420dc0;
case 0x420dc4:c.instructions+=4;goto B420dc4;
case 0x420dc6:c.instructions+=3;goto B420dc6;
case 0x420dc8:c.instructions+=2;goto B420dc8;
case 0x420dca:c.instructions+=1;goto B420dca;
case 0x420dcf:goto L420dcf;
case 0x420dd2:c.instructions+=10;goto B420dd2;
case 0x420dd5:c.instructions+=9;goto B420dd5;
case 0x420dd7:c.instructions+=8;goto B420dd7;
case 0x420dd8:c.instructions+=7;goto B420dd8;
case 0x420ddc:c.instructions+=6;goto B420ddc;
case 0x420ddd:c.instructions+=5;goto B420ddd;
case 0x420dde:c.instructions+=4;goto B420dde;
case 0x420ddf:c.instructions+=3;goto B420ddf;
case 0x420de0:c.instructions+=2;goto B420de0;
case 0x420de1:c.instructions+=1;goto B420de1;
case 0x420de6:goto L420de6;
case 0x420de9:c.instructions+=6;goto B420de9;
case 0x420df0:c.instructions+=5;goto B420df0;
case 0x420df1:c.instructions+=4;goto B420df1;
case 0x420df2:c.instructions+=3;goto B420df2;
case 0x420df4:c.instructions+=2;goto B420df4;
case 0x420df5:c.instructions+=1;goto B420df5;
case 0x420df8:goto L420df8;
case 0x420dfb:c.instructions+=7;goto B420dfb;
case 0x420e01:c.instructions+=6;goto B420e01;
case 0x420e04:c.instructions+=5;goto B420e04;
case 0x420e05:c.instructions+=4;goto B420e05;
case 0x420e09:c.instructions+=3;goto B420e09;
case 0x420e0b:c.instructions+=2;goto B420e0b;
case 0x420e0d:c.instructions+=1;goto B420e0d;
case 0x420e13:goto L420e13;
case 0x420e14:c.instructions+=1;goto B420e14;
case 0x420e19:goto L420e19;
case 0x420e1f:c.instructions+=8;goto B420e1f;
case 0x420e22:c.instructions+=7;goto B420e22;
case 0x420e23:c.instructions+=6;goto B420e23;
case 0x420e26:c.instructions+=5;goto B420e26;
case 0x420e27:c.instructions+=4;goto B420e27;
case 0x420e28:c.instructions+=3;goto B420e28;
case 0x420e2a:c.instructions+=2;goto B420e2a;
case 0x420e2e:c.instructions+=1;goto B420e2e;
case 0x420e33:goto L420e33;
case 0x420e35:c.instructions+=3;goto B420e35;
case 0x420e36:c.instructions+=2;goto B420e36;
case 0x420e38:c.instructions+=1;goto B420e38;
case 0x420e3d:goto L420e3d;
case 0x420e43:c.instructions+=5;goto B420e43;
case 0x420e49:c.instructions+=4;goto B420e49;
case 0x420e4f:c.instructions+=3;goto B420e4f;
case 0x420e51:c.instructions+=2;goto B420e51;
case 0x420e54:c.instructions+=1;goto B420e54;
case 0x420e56:goto L420e56;
case 0x420e5a:c.instructions+=1;goto B420e5a;
case 0x420e5c:goto L420e5c;
case 0x420e61:c.instructions+=2;goto B420e61;
case 0x420e63:c.instructions+=1;goto B420e63;
case 0x420e67:goto L420e67;
case 0x420e6c:c.instructions+=2;goto B420e6c;
case 0x420e6e:c.instructions+=1;goto B420e6e;
case 0x420e70:goto L420e70;
case 0x420e75:c.instructions+=2;goto B420e75;
case 0x420e77:c.instructions+=1;goto B420e77;
case 0x420e79:goto L420e79;
case 0x420e7f:c.instructions+=2;goto B420e7f;
case 0x420e85:c.instructions+=1;goto B420e85;
case 0x420e89:goto L420e89;
case 0x420e8d:c.instructions+=4;goto B420e8d;
case 0x420e8e:c.instructions+=3;goto B420e8e;
case 0x420e8f:c.instructions+=2;goto B420e8f;
case 0x420e91:c.instructions+=1;goto B420e91;
case 0x420e93:goto L420e93;
case 0x420e95:c.instructions+=1;goto B420e95;
case 0x420e97:goto L420e97;
case 0x420e9c:goto L420e9c;
case 0x420e9f:c.instructions+=10;goto B420e9f;
case 0x420ea2:c.instructions+=9;goto B420ea2;
case 0x420ea4:c.instructions+=8;goto B420ea4;
case 0x420ea5:c.instructions+=7;goto B420ea5;
case 0x420ea9:c.instructions+=6;goto B420ea9;
case 0x420eaa:c.instructions+=5;goto B420eaa;
case 0x420eab:c.instructions+=4;goto B420eab;
case 0x420eac:c.instructions+=3;goto B420eac;
case 0x420ead:c.instructions+=2;goto B420ead;
case 0x420eae:c.instructions+=1;goto B420eae;
case 0x420eb3:goto L420eb3;
case 0x420eb6:c.instructions+=7;goto B420eb6;
case 0x420ebd:c.instructions+=6;goto B420ebd;
case 0x420ebe:c.instructions+=5;goto B420ebe;
case 0x420ebf:c.instructions+=4;goto B420ebf;
case 0x420ec0:c.instructions+=3;goto B420ec0;
case 0x420ec2:c.instructions+=2;goto B420ec2;
case 0x420ec3:c.instructions+=1;goto B420ec3;
case 0x420ed0:goto L420ed0;
case 0x420ed3:c.instructions+=9;goto B420ed3;
case 0x420ed4:c.instructions+=8;goto B420ed4;
case 0x420ed5:c.instructions+=7;goto B420ed5;
case 0x420ed9:c.instructions+=6;goto B420ed9;
case 0x420eda:c.instructions+=5;goto B420eda;
case 0x420edd:c.instructions+=4;goto B420edd;
case 0x420ede:c.instructions+=3;goto B420ede;
case 0x420ee0:c.instructions+=2;goto B420ee0;
case 0x420ee2:c.instructions+=1;goto B420ee2;
case 0x420ee7:goto L420ee7;
case 0x420ee9:c.instructions+=3;goto B420ee9;
case 0x420eeb:c.instructions+=2;goto B420eeb;
case 0x420eee:c.instructions+=1;goto B420eee;
case 0x420ef0:goto L420ef0;
case 0x420ef3:c.instructions+=1;goto B420ef3;
case 0x420ef5:goto L420ef5;
case 0x420ef9:c.instructions+=4;goto B420ef9;
case 0x420efa:c.instructions+=3;goto B420efa;
case 0x420efb:c.instructions+=2;goto B420efb;
case 0x420efd:c.instructions+=1;goto B420efd;
case 0x420f02:goto L420f02;
case 0x420f03:c.instructions+=6;goto B420f03;
case 0x420f04:c.instructions+=5;goto B420f04;
case 0x420f05:c.instructions+=4;goto B420f05;
case 0x420f07:c.instructions+=3;goto B420f07;
case 0x420f08:c.instructions+=2;goto B420f08;
case 0x420f0b:c.instructions+=1;goto B420f0b;
case 0x420f0e:goto L420f0e;
case 0x420f11:c.instructions+=15;goto B420f11;
case 0x420f13:c.instructions+=14;goto B420f13;
case 0x420f16:c.instructions+=13;goto B420f16;
case 0x420f1b:c.instructions+=12;goto B420f1b;
case 0x420f1e:c.instructions+=11;goto B420f1e;
case 0x420f23:c.instructions+=10;goto B420f23;
case 0x420f2b:c.instructions+=9;goto B420f2b;
case 0x420f33:c.instructions+=8;goto B420f33;
case 0x420f3b:c.instructions+=7;goto B420f3b;
case 0x420f43:c.instructions+=6;goto B420f43;
case 0x420f44:c.instructions+=5;goto B420f44;
case 0x420f45:c.instructions+=4;goto B420f45;
case 0x420f48:c.instructions+=3;goto B420f48;
case 0x420f49:c.instructions+=2;goto B420f49;
case 0x420f4a:c.instructions+=1;goto B420f4a;
case 0x420f4f:goto L420f4f;
case 0x420f52:c.instructions+=2;goto B420f52;
case 0x420f55:c.instructions+=1;goto B420f55;
case 0x420f57:goto L420f57;
case 0x420f58:c.instructions+=2;goto B420f58;
case 0x420f5c:c.instructions+=1;goto B420f5c;
case 0x420f61:goto L420f61;
case 0x420f65:c.instructions+=4;goto B420f65;
case 0x420f66:c.instructions+=3;goto B420f66;
case 0x420f67:c.instructions+=2;goto B420f67;
case 0x420f6b:c.instructions+=1;goto B420f6b;
case 0x420f70:goto L420f70;
case 0x420f72:c.instructions+=2;goto B420f72;
case 0x420f74:c.instructions+=1;goto B420f74;
case 0x420f76:goto L420f76;
case 0x420f7a:c.instructions+=3;goto B420f7a;
case 0x420f7b:c.instructions+=2;goto B420f7b;
case 0x420f7d:c.instructions+=1;goto B420f7d;
case 0x420f82:goto L420f82;
case 0x420f83:c.instructions+=6;goto B420f83;
case 0x420f84:c.instructions+=5;goto B420f84;
case 0x420f85:c.instructions+=4;goto B420f85;
case 0x420f87:c.instructions+=3;goto B420f87;
case 0x420f88:c.instructions+=2;goto B420f88;
case 0x420f8b:c.instructions+=1;goto B420f8b;
case 0x420f8e:goto L420f8e;
case 0x420f94:c.instructions+=3;goto B420f94;
case 0x420f95:c.instructions+=2;goto B420f95;
case 0x420f97:c.instructions+=1;goto B420f97;
case 0x420f9c:goto L420f9c;
case 0x420f9e:c.instructions+=1;goto B420f9e;
case 0x420fa0:goto L420fa0;
case 0x420fa3:c.instructions+=2;goto B420fa3;
case 0x420fa6:c.instructions+=1;goto B420fa6;
case 0x420fab:goto L420fab;
case 0x420fad:c.instructions+=2;goto B420fad;
case 0x420faf:c.instructions+=1;goto B420faf;
case 0x420fb4:goto L420fb4;
case 0x420fb8:c.instructions+=4;goto B420fb8;
case 0x420fb9:c.instructions+=3;goto B420fb9;
case 0x420fba:c.instructions+=2;goto B420fba;
case 0x420fbc:c.instructions+=1;goto B420fbc;
case 0x420fc1:goto L420fc1;
case 0x420fc2:c.instructions+=6;goto B420fc2;
case 0x420fc3:c.instructions+=5;goto B420fc3;
case 0x420fc4:c.instructions+=4;goto B420fc4;
case 0x420fc6:c.instructions+=3;goto B420fc6;
case 0x420fc7:c.instructions+=2;goto B420fc7;
case 0x420fca:c.instructions+=1;goto B420fca;
case 0x420fd0:goto L420fd0;
case 0x420fd2:c.instructions+=12;goto B420fd2;
case 0x420fd7:c.instructions+=11;goto B420fd7;
case 0x420fdd:c.instructions+=10;goto B420fdd;
case 0x420fde:c.instructions+=9;goto B420fde;
case 0x420fe5:c.instructions+=8;goto B420fe5;
case 0x420fe6:c.instructions+=7;goto B420fe6;
case 0x420fe7:c.instructions+=6;goto B420fe7;
case 0x420fe9:c.instructions+=5;goto B420fe9;
case 0x420fed:c.instructions+=4;goto B420fed;
case 0x420ff3:c.instructions+=3;goto B420ff3;
case 0x420ff6:c.instructions+=2;goto B420ff6;
case 0x420ff8:c.instructions+=1;goto B420ff8;
default:missing_instruction(c.pc);}
B420000:L420000:{c.instructions+=4;NFSU2_TR(0x420000);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B420001:{NFSU2_TR(0x420001);
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
B420002:{NFSU2_TR(0x420002);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420006:{NFSU2_TR(0x420006);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x41ffa1u,41f);}
}
B420008:L420008:{c.instructions+=7;NFSU2_TR(0x420008);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42000c:{NFSU2_TR(0x42000c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420010:{NFSU2_TR(0x420010);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B420013:{NFSU2_TR(0x420013);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B420014:{NFSU2_TR(0x420014);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420018:{NFSU2_TR(0x420018);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42001c:{NFSU2_TR(0x42001c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x41fe4cu,41f);}
}
B420022:L420022:{c.instructions+=6;NFSU2_TR(0x420022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B420023:{NFSU2_TR(0x420023);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B420024:{NFSU2_TR(0x420024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B420025:{NFSU2_TR(0x420025);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B420026:{NFSU2_TR(0x420026);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B420029:{NFSU2_TR(0x420029);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420030:L420030:{c.instructions+=9;NFSU2_TR(0x420030);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420031:{NFSU2_TR(0x420031);
__builtin_memmove((R+0),gp(0x890080),4);
}
B420036:{NFSU2_TR(0x420036);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B420039:{NFSU2_TR(0x420039);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42003a:{NFSU2_TR(0x42003a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42003d:{NFSU2_TR(0x42003d);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B42003f:{NFSU2_TR(0x42003f);
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
B420041:{NFSU2_TR(0x420041);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B420049:{NFSU2_TR(0x420049);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L420131;}}
}
B42004f:L42004f:{c.instructions+=5;NFSU2_TR(0x42004f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420050:{NFSU2_TR(0x420050);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420051:{NFSU2_TR(0x420051);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420052:{NFSU2_TR(0x420052);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x900ull))));
__builtin_memmove((R+28),(U+0),4);
}
B420058:{NFSU2_TR(0x420058);
{goto L420060;}
}
B420060:L420060:{c.instructions+=8;NFSU2_TR(0x420060);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B420064:{NFSU2_TR(0x420064);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B420066:{NFSU2_TR(0x420066);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B42006a:{NFSU2_TR(0x42006a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42006c:{NFSU2_TR(0x42006c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42006f:{NFSU2_TR(0x42006f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B420071:{NFSU2_TR(0x420071);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B420073:{NFSU2_TR(0x420073);
if(r1(R+518)){{goto L42008f;}}
}
B420075:L420075:{c.instructions+=2;NFSU2_TR(0x420075);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x908ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42007b:{NFSU2_TR(0x42007b);
{goto L420080;}
}
B420080:L420080:{c.instructions+=2;NFSU2_TR(0x420080);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B420083:{NFSU2_TR(0x420083);
if(r1(R+518)){{goto L42008d;}}
}
B420085:L420085:{c.instructions+=3;NFSU2_TR(0x420085);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B420087:{NFSU2_TR(0x420087);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B420089:{NFSU2_TR(0x420089);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x420080u);}goto L420080;}}
}
B42008b:L42008b:{c.instructions+=1;NFSU2_TR(0x42008b);
{goto L42008f;}
}
B42008d:L42008d:{c.instructions+=1;NFSU2_TR(0x42008d);
__builtin_memmove((R+4),(R+0),4);
}
B42008f:L42008f:{c.instructions+=5;NFSU2_TR(0x42008f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B420092:{NFSU2_TR(0x420092);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B420095:{NFSU2_TR(0x420095);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420096:{NFSU2_TR(0x420096);
__builtin_memmove((R+4),(R+12),4);
}
B420098:{NFSU2_TR(0x420098);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42009dull));
TAIL_STATIC(0x413440u,413);
}
B42009d:L42009d:{c.instructions+=6;NFSU2_TR(0x42009d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42009f:{NFSU2_TR(0x42009f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x908ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4200a5:{NFSU2_TR(0x4200a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4200a8:{NFSU2_TR(0x4200a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4200a9:{NFSU2_TR(0x4200a9);
__builtin_memmove((R+4),(R+24),4);
}
B4200ab:{NFSU2_TR(0x4200ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4200b0ull));
TAIL_STATIC(0x601110u,601);
}
B4200b0:L4200b0:{c.instructions+=4;NFSU2_TR(0x4200b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4200b3:{NFSU2_TR(0x4200b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4200b5:{NFSU2_TR(0x4200b5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4200b7:{NFSU2_TR(0x4200b7);
if(r1(R+518)){{goto L420110;}}
}
B4200b9:L4200b9:{c.instructions+=2;NFSU2_TR(0x4200b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4200bb:{NFSU2_TR(0x4200bb);
{goto L4200c0;}
}
B4200c0:L4200c0:{c.instructions+=2;NFSU2_TR(0x4200c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4200c3:{NFSU2_TR(0x4200c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4200cd;}}
}
B4200c5:L4200c5:{c.instructions+=3;NFSU2_TR(0x4200c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4200c8:{NFSU2_TR(0x4200c8);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4200cb:{NFSU2_TR(0x4200cb);
if(r1(R+518)){{goto L4200d5;}}
}
B4200cd:L4200cd:{c.instructions+=3;NFSU2_TR(0x4200cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4200cf:{NFSU2_TR(0x4200cf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4200d1:{NFSU2_TR(0x4200d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4200c0u);}goto L4200c0;}}
}
B4200d3:L4200d3:{c.instructions+=1;NFSU2_TR(0x4200d3);
{goto L420110;}
}
B4200d5:L4200d5:{c.instructions+=2;NFSU2_TR(0x4200d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4200d7:{NFSU2_TR(0x4200d7);
if(r1(R+518)){{goto L420110;}}
}
B4200d9:L4200d9:{c.instructions+=4;NFSU2_TR(0x4200d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4200df:{NFSU2_TR(0x4200df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4200e0:{NFSU2_TR(0x4200e0);
w4(R+4,u32(0x8a3288ull));
}
B4200e5:{NFSU2_TR(0x4200e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4200eaull));
TAIL_STATIC(0x61ca50u,61c);
}
B4200ea:L4200ea:{c.instructions+=8;NFSU2_TR(0x4200ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x908ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4200f0:{NFSU2_TR(0x4200f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4200f6:{NFSU2_TR(0x4200f6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4200f7:{NFSU2_TR(0x4200f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4200f8:{NFSU2_TR(0x4200f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x908ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4200fe:{NFSU2_TR(0x4200fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420104:{NFSU2_TR(0x420104);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B42010a:{NFSU2_TR(0x42010a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420110:L420110:{c.instructions+=9;NFSU2_TR(0x420110);
__builtin_memmove((R+0),gp(0x890080),4);
}
B420115:{NFSU2_TR(0x420115);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B420119:{NFSU2_TR(0x420119);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42011c:{NFSU2_TR(0x42011c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42011f:{NFSU2_TR(0x42011f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B420120:{NFSU2_TR(0x420120);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B420122:{NFSU2_TR(0x420122);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B420124:{NFSU2_TR(0x420124);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420128:{NFSU2_TR(0x420128);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x420060u);}goto L420060;}}
}
B42012e:L42012e:{c.instructions+=3;NFSU2_TR(0x42012e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42012f:{NFSU2_TR(0x42012f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B420130:{NFSU2_TR(0x420130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B420131:L420131:{c.instructions+=3;NFSU2_TR(0x420131);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B420132:{NFSU2_TR(0x420132);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B420133:{NFSU2_TR(0x420133);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420140:L420140:{c.instructions+=9;NFSU2_TR(0x420140);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420141:{NFSU2_TR(0x420141);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420142:{NFSU2_TR(0x420142);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420143:{NFSU2_TR(0x420143);
__builtin_memmove((R+20),(R+4),4);
}
B420145:{NFSU2_TR(0x420145);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42014b:{NFSU2_TR(0x42014b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42014c:{NFSU2_TR(0x42014c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x900ull))));
__builtin_memmove((R+28),(U+0),4);
}
B420152:{NFSU2_TR(0x420152);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B420154:{NFSU2_TR(0x420154);
if(r1(R+518)){{goto L420171;}}
}
B420156:L420156:{c.instructions+=3;NFSU2_TR(0x420156);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42015c:{NFSU2_TR(0x42015c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42015e:{NFSU2_TR(0x42015e);
if(r1(R+518)){{goto L42016b;}}
}
B420160:L420160:{c.instructions+=3;NFSU2_TR(0x420160);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420161:{NFSU2_TR(0x420161);
w4(R+4,u32(0x8a3288ull));
}
B420166:{NFSU2_TR(0x420166);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42016bull));
TAIL_STATIC(0x63ae00u,63a);
}
B42016b:L42016b:{c.instructions+=3;NFSU2_TR(0x42016b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B42016d:{NFSU2_TR(0x42016d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42016f:{NFSU2_TR(0x42016f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x420156u);}goto L420156;}}
}
B420171:L420171:{c.instructions+=5;NFSU2_TR(0x420171);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+20)),r4(U+0));
}
B420178:{NFSU2_TR(0x420178);
__builtin_memmove((R+0),gp(0x89e814),4);
}
B42017d:{NFSU2_TR(0x42017d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B42017f:{NFSU2_TR(0x42017f);
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
B420181:{NFSU2_TR(0x420181);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4201c9;}}
}
B420183:L420183:{c.instructions+=3;NFSU2_TR(0x420183);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420184:{NFSU2_TR(0x420184);
w4(R+4,u32(0x89e7a0ull));
}
B420189:{NFSU2_TR(0x420189);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42018eull));
TAIL_STATIC(0x5ed900u,5ed);
}
B42018e:L42018e:{c.instructions+=7;NFSU2_TR(0x42018e);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B420194:{NFSU2_TR(0x420194);
__builtin_memmove((R+28),(R+0),4);
}
B420196:{NFSU2_TR(0x420196);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420199:{NFSU2_TR(0x420199);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42019c:{NFSU2_TR(0x42019c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4201a2:{NFSU2_TR(0x4201a2);
u8 U[24];
w4(U+0,u32(u32(u32(0x844ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B4201aa:{NFSU2_TR(0x4201aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4201bf;}}
}
B4201ac:L4201ac:{c.instructions+=4;NFSU2_TR(0x4201ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4201af:{NFSU2_TR(0x4201af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4201b0:{NFSU2_TR(0x4201b0);
__builtin_memmove((R+4),(R+24),4);
}
B4201b2:{NFSU2_TR(0x4201b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4201b7ull));
TAIL_STATIC(0x413440u,413);
}
B4201b7:L4201b7:{c.instructions+=2;NFSU2_TR(0x4201b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4201b9:{NFSU2_TR(0x4201b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x908ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4201bf:L4201bf:{c.instructions+=4;NFSU2_TR(0x4201bf);
__builtin_memmove((R+0),gp(0x89e814),4);
}
B4201c4:{NFSU2_TR(0x4201c4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4201c5:{NFSU2_TR(0x4201c5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4201c7:{NFSU2_TR(0x4201c7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x420183u);}goto L420183;}}
}
B4201c9:L4201c9:{c.instructions+=5;NFSU2_TR(0x4201c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4201ca:{NFSU2_TR(0x4201ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4201cb:{NFSU2_TR(0x4201cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4201cc:{NFSU2_TR(0x4201cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4201cd:{NFSU2_TR(0x4201cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4201d0:L4201d0:{c.instructions+=21;NFSU2_TR(0x4201d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4201d4:{NFSU2_TR(0x4201d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4201d6:{NFSU2_TR(0x4201d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4201d9:{NFSU2_TR(0x4201d9);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4201dd:{NFSU2_TR(0x4201dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4201e3:{NFSU2_TR(0x4201e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4201e9:{NFSU2_TR(0x4201e9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4201ed:{NFSU2_TR(0x4201ed);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4201ef:{NFSU2_TR(0x4201ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4201f2:{NFSU2_TR(0x4201f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4201f8:{NFSU2_TR(0x4201f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4201fe:{NFSU2_TR(0x4201fe);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420201:{NFSU2_TR(0x420201);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420204:{NFSU2_TR(0x420204);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B420206:{NFSU2_TR(0x420206);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B420208:{NFSU2_TR(0x420208);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42020b:{NFSU2_TR(0x42020b);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42020e:{NFSU2_TR(0x42020e);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B420211:{NFSU2_TR(0x420211);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420214:{NFSU2_TR(0x420214);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B420216:{NFSU2_TR(0x420216);
if(r1(R+518)){{goto L42025b;}}
}
B420218:L420218:{c.instructions+=2;NFSU2_TR(0x420218);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+8))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B42021e:{NFSU2_TR(0x42021e);
if(r1(R+518)){{goto L420230;}}
}
B420220:L420220:{c.instructions+=4;NFSU2_TR(0x420220);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420223:{NFSU2_TR(0x420223);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B420227:{NFSU2_TR(0x420227);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420228:{NFSU2_TR(0x420228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42022dull));
TAIL_STATIC(0x41ae40u,41a);
}
B42022d:L42022d:{c.instructions+=1;NFSU2_TR(0x42022d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420230:L420230:{c.instructions+=16;NFSU2_TR(0x420230);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420232:{NFSU2_TR(0x420232);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B420236:{NFSU2_TR(0x420236);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B420239:{NFSU2_TR(0x420239);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42023a:{NFSU2_TR(0x42023a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42023d:{NFSU2_TR(0x42023d);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B420240:{NFSU2_TR(0x420240);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B420242:{NFSU2_TR(0x420242);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B420244:{NFSU2_TR(0x420244);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B420246:{NFSU2_TR(0x420246);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B420248:{NFSU2_TR(0x420248);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B42024a:{NFSU2_TR(0x42024a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B42024c:{NFSU2_TR(0x42024c);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B42024e:{NFSU2_TR(0x42024e);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B420250:{NFSU2_TR(0x420250);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B420253:{NFSU2_TR(0x420253);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420258ull));
TAIL_STATIC(0x41ae40u,41a);
}
B420258:L420258:{c.instructions+=1;NFSU2_TR(0x420258);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42025b:L42025b:{c.instructions+=4;NFSU2_TR(0x42025b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42025f:{NFSU2_TR(0x42025f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420260:{NFSU2_TR(0x420260);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B420267:{NFSU2_TR(0x420267);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42026cull));
TAIL_STATIC(0x41ae40u,41a);
}
B42026c:L42026c:{c.instructions+=1;NFSU2_TR(0x42026c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420270:L420270:{c.instructions+=11;NFSU2_TR(0x420270);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B420273:{NFSU2_TR(0x420273);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420274:{NFSU2_TR(0x420274);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420275:{NFSU2_TR(0x420275);
__builtin_memmove((R+24),(R+4),4);
}
B420277:{NFSU2_TR(0x420277);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42027a:{NFSU2_TR(0x42027a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42027e:{NFSU2_TR(0x42027e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420281:{NFSU2_TR(0x420281);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B420283:{NFSU2_TR(0x420283);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B420285:{NFSU2_TR(0x420285);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42028a:{NFSU2_TR(0x42028a);
if(r1(R+518)){{goto L420450;}}
}
B420290:L420290:{c.instructions+=2;NFSU2_TR(0x420290);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420291:{NFSU2_TR(0x420291);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420292:L420292:{c.instructions+=3;NFSU2_TR(0x420292);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B420296:{NFSU2_TR(0x420296);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420298:{NFSU2_TR(0x420298);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42044e;}}
}
B42029e:L42029e:{c.instructions+=6;NFSU2_TR(0x42029e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4202a1:{NFSU2_TR(0x4202a1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4202a5:{NFSU2_TR(0x4202a5);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4202ab:{NFSU2_TR(0x4202ab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4202ad:{NFSU2_TR(0x4202ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4202b0:{NFSU2_TR(0x4202b0);
if(r1(R+518)){{goto L42044b;}}
}
B4202b6:L4202b6:{c.instructions+=4;NFSU2_TR(0x4202b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4202b9:{NFSU2_TR(0x4202b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4202ba:{NFSU2_TR(0x4202ba);
__builtin_memmove((R+4),(R+24),4);
}
B4202bc:{NFSU2_TR(0x4202bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4202c1ull));
TAIL_STATIC(0x413250u,413);
}
B4202c1:L4202c1:{c.instructions+=2;NFSU2_TR(0x4202c1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4202c3:{NFSU2_TR(0x4202c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L420442;}}
}
B4202c9:L4202c9:{c.instructions+=4;NFSU2_TR(0x4202c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4202cd:{NFSU2_TR(0x4202cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4202d0:{NFSU2_TR(0x4202d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4202d1:{NFSU2_TR(0x4202d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4202d6ull));
TAIL_STATIC(0x5d8bb0u,5d8);
}
B4202d6:L4202d6:{c.instructions+=2;NFSU2_TR(0x4202d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4202d8:{NFSU2_TR(0x4202d8);
if(r1(R+518)){{goto L42044b;}}
}
B4202de:L4202de:{c.instructions+=3;NFSU2_TR(0x4202de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4202e1:{NFSU2_TR(0x4202e1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4202e3:{NFSU2_TR(0x4202e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4202e8ull));
TAIL_STATIC(0x5d4380u,5d4);
}
B4202e8:L4202e8:{c.instructions+=3;NFSU2_TR(0x4202e8);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4202ea:{NFSU2_TR(0x4202ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4202ee:{NFSU2_TR(0x4202ee);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L420389;}}
}
B4202f4:L4202f4:{c.instructions+=2;NFSU2_TR(0x4202f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4202f6:{NFSU2_TR(0x4202f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42037d;}}
}
B4202fc:L4202fc:{c.instructions+=3;NFSU2_TR(0x4202fc);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B420300:{NFSU2_TR(0x420300);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420302:{NFSU2_TR(0x420302);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L420433;}}
}
B420308:L420308:{c.instructions+=3;NFSU2_TR(0x420308);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42030b:{NFSU2_TR(0x42030b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42030c:{NFSU2_TR(0x42030c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420311ull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B420311:L420311:{c.instructions+=10;NFSU2_TR(0x420311);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B420317:{NFSU2_TR(0x420317);
__builtin_memmove((R+28),(R+0),4);
}
B420319:{NFSU2_TR(0x420319);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42031c:{NFSU2_TR(0x42031c);
__builtin_memmove((R+4),(R+0),4);
}
B42031e:{NFSU2_TR(0x42031e);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B420321:{NFSU2_TR(0x420321);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B420324:{NFSU2_TR(0x420324);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420326:{NFSU2_TR(0x420326);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B420329:{NFSU2_TR(0x420329);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+8))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B42032b:{NFSU2_TR(0x42032b);
if(r1(R+518)){{goto L420370;}}
}
B42032d:L42032d:{c.instructions+=3;NFSU2_TR(0x42032d);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B42032f:{NFSU2_TR(0x42032f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420331:{NFSU2_TR(0x420331);
if(r1(R+518)){{goto L4203dc;}}
}
B420337:L420337:{c.instructions+=4;NFSU2_TR(0x420337);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42033b:{NFSU2_TR(0x42033b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42033c:{NFSU2_TR(0x42033c);
__builtin_memmove((R+4),(R+28),4);
}
B42033e:{NFSU2_TR(0x42033e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420343ull));
TAIL_STATIC(0x5dcbe0u,5dc);
}
B420343:L420343:{c.instructions+=2;NFSU2_TR(0x420343);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420345:{NFSU2_TR(0x420345);
if(r1(R+518)){{goto L42034b;}}
}
B420347:L420347:{c.instructions+=2;NFSU2_TR(0x420347);
__builtin_memmove((R+12),(R+28),4);
}
B420349:{NFSU2_TR(0x420349);
{goto L420370;}
}
B42034b:L42034b:{c.instructions+=4;NFSU2_TR(0x42034b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42034f:{NFSU2_TR(0x42034f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420350:{NFSU2_TR(0x420350);
__builtin_memmove((R+4),(R+28),4);
}
B420352:{NFSU2_TR(0x420352);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420357ull));
TAIL_STATIC(0x5dcb90u,5dc);
}
B420357:L420357:{c.instructions+=2;NFSU2_TR(0x420357);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420359:{NFSU2_TR(0x420359);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L420370;}}
}
B42035b:L42035b:{c.instructions+=4;NFSU2_TR(0x42035b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42035f:{NFSU2_TR(0x42035f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420360:{NFSU2_TR(0x420360);
__builtin_memmove((R+4),(R+28),4);
}
B420362:{NFSU2_TR(0x420362);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420367ull));
TAIL_STATIC(0x5dcc30u,5dc);
}
B420367:L420367:{c.instructions+=2;NFSU2_TR(0x420367);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420369:{NFSU2_TR(0x420369);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L420370;}}
}
B42036b:L42036b:{c.instructions+=1;NFSU2_TR(0x42036b);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B420370:L420370:{c.instructions+=4;NFSU2_TR(0x420370);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420374:{NFSU2_TR(0x420374);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B420375:{NFSU2_TR(0x420375);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B420377:{NFSU2_TR(0x420377);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4202f4u);}goto L4202f4;}}
}
B42037d:L42037d:{c.instructions+=3;NFSU2_TR(0x42037d);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B420381:{NFSU2_TR(0x420381);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420383:{NFSU2_TR(0x420383);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L420433;}}
}
B420389:L420389:{c.instructions+=3;NFSU2_TR(0x420389);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42038c:{NFSU2_TR(0x42038c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42038e:{NFSU2_TR(0x42038e);
if(r1(R+518)){{goto L420433;}}
}
B420394:L420394:{c.instructions+=7;NFSU2_TR(0x420394);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42039a:{NFSU2_TR(0x42039a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42039c:{NFSU2_TR(0x42039c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42039e:{NFSU2_TR(0x42039e);
__builtin_memmove((R+0),(R+518),1);
}
B4203a1:{NFSU2_TR(0x4203a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4203a3:{NFSU2_TR(0x4203a3);
__builtin_memmove((R+20),(R+0),4);
}
B4203a5:{NFSU2_TR(0x4203a5);
if(r1(R+518)){{goto L4203e5;}}
}
B4203a7:L4203a7:{c.instructions+=2;NFSU2_TR(0x4203a7);
__builtin_memmove((R+4),(R+12),4);
}
B4203a9:{NFSU2_TR(0x4203a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4203aeull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B4203ae:L4203ae:{c.instructions+=5;NFSU2_TR(0x4203ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4203b1:{NFSU2_TR(0x4203b1);
__builtin_memmove((R+28),(R+0),4);
}
B4203b3:{NFSU2_TR(0x4203b3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4203b4:{NFSU2_TR(0x4203b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4203b5:{NFSU2_TR(0x4203b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4203baull));
TAIL_STATIC(0x40cbc0u,40c);
}
B4203ba:L4203ba:{c.instructions+=10;NFSU2_TR(0x4203ba);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4203bd:{NFSU2_TR(0x4203bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4203c3:{NFSU2_TR(0x4203c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4203c6:{NFSU2_TR(0x4203c6);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4203c9:{NFSU2_TR(0x4203c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4203cc:{NFSU2_TR(0x4203cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B4203cf:{NFSU2_TR(0x4203cf);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B4203d2:{NFSU2_TR(0x4203d2);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+4))));
}
B4203d4:{NFSU2_TR(0x4203d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4203da:{NFSU2_TR(0x4203da);
{goto L420433;}
}
B4203dc:L4203dc:{c.instructions+=2;NFSU2_TR(0x4203dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4203e3:{NFSU2_TR(0x4203e3);
{goto L420433;}
}
B4203e5:L4203e5:{c.instructions+=2;NFSU2_TR(0x4203e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4203e7:{NFSU2_TR(0x4203e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L420400;}}
}
B4203e9:L4203e9:{c.instructions+=6;NFSU2_TR(0x4203e9);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B4203ed:{NFSU2_TR(0x4203ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4203f0:{NFSU2_TR(0x4203f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4203f4:{NFSU2_TR(0x4203f4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4203f8:{NFSU2_TR(0x4203f8);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4203fe:{NFSU2_TR(0x4203fe);
{goto L420416;}
}
B420400:L420400:{c.instructions+=2;NFSU2_TR(0x420400);
__builtin_memmove((R+4),(R+28),4);
}
B420402:{NFSU2_TR(0x420402);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420407ull));
TAIL_STATIC(0x5d89f0u,5d8);
}
B420407:L420407:{c.instructions+=4;NFSU2_TR(0x420407);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B420409:{NFSU2_TR(0x420409);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42040b:{NFSU2_TR(0x42040b);
__builtin_memmove((R+4),(R+0),4);
}
B42040d:{NFSU2_TR(0x42040d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L420411;}}
}
B42040f:L42040f:{c.instructions+=1;NFSU2_TR(0x42040f);
__builtin_memmove((R+4),(R+28),4);
}
B420411:L420411:{c.instructions+=1;NFSU2_TR(0x420411);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420416ull));
TAIL_STATIC(0x401a30u,401);
}
B420416:L420416:{c.instructions+=8;NFSU2_TR(0x420416);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B42041c:{NFSU2_TR(0x42041c);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42041f:{NFSU2_TR(0x42041f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B420422:{NFSU2_TR(0x420422);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420424:{NFSU2_TR(0x420424);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B420427:{NFSU2_TR(0x420427);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42042a:{NFSU2_TR(0x42042a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42042b:{NFSU2_TR(0x42042b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420430ull));
TAIL_STATIC(0x5d8a40u,5d8);
}
B420430:L420430:{c.instructions+=1;NFSU2_TR(0x420430);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420433:L420433:{c.instructions+=4;NFSU2_TR(0x420433);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420436:{NFSU2_TR(0x420436);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B420438:{NFSU2_TR(0x420438);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42043a:{NFSU2_TR(0x42043a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x420292u);}goto L420292;}}
}
B420440:L420440:{c.instructions+=1;NFSU2_TR(0x420440);
{goto L42044e;}
}
B420442:L420442:{c.instructions+=2;NFSU2_TR(0x420442);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbaull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B420449:{NFSU2_TR(0x420449);
{goto L42044e;}
}
B42044b:L42044b:{c.instructions+=1;NFSU2_TR(0x42044b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42044e:L42044e:{c.instructions+=2;NFSU2_TR(0x42044e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42044f:{NFSU2_TR(0x42044f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B420450:L420450:{c.instructions+=3;NFSU2_TR(0x420450);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420453:{NFSU2_TR(0x420453);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B420455:{NFSU2_TR(0x420455);
if(r1(R+518)){{goto L4204aa;}}
}
B420457:L420457:{c.instructions+=3;NFSU2_TR(0x420457);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42045d:{NFSU2_TR(0x42045d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42045f:{NFSU2_TR(0x42045f);
if(r1(R+518)){{goto L420478;}}
}
B420461:L420461:{c.instructions+=5;NFSU2_TR(0x420461);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B420465:{NFSU2_TR(0x420465);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420466:{NFSU2_TR(0x420466);
__builtin_memmove((R+4),(R+24),4);
}
B420468:{NFSU2_TR(0x420468);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42046b:{NFSU2_TR(0x42046b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420470ull));
TAIL_STATIC(0x41ae40u,41a);
}
B420470:L420470:{c.instructions+=4;NFSU2_TR(0x420470);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B420471:{NFSU2_TR(0x420471);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B420472:{NFSU2_TR(0x420472);
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
B420475:{NFSU2_TR(0x420475);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420478:L420478:{c.instructions+=17;NFSU2_TR(0x420478);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42047a:{NFSU2_TR(0x42047a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42047e:{NFSU2_TR(0x42047e);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B420481:{NFSU2_TR(0x420481);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420482:{NFSU2_TR(0x420482);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420485:{NFSU2_TR(0x420485);
__builtin_memmove((R+4),(R+24),4);
}
B420487:{NFSU2_TR(0x420487);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42048a:{NFSU2_TR(0x42048a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B42048c:{NFSU2_TR(0x42048c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B42048e:{NFSU2_TR(0x42048e);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B420490:{NFSU2_TR(0x420490);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B420492:{NFSU2_TR(0x420492);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B420494:{NFSU2_TR(0x420494);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B420496:{NFSU2_TR(0x420496);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B420498:{NFSU2_TR(0x420498);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42049a:{NFSU2_TR(0x42049a);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42049d:{NFSU2_TR(0x42049d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4204a2ull));
TAIL_STATIC(0x41ae40u,41a);
}
B4204a2:L4204a2:{c.instructions+=4;NFSU2_TR(0x4204a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4204a3:{NFSU2_TR(0x4204a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4204a4:{NFSU2_TR(0x4204a4);
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
B4204a7:{NFSU2_TR(0x4204a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4204aa:L4204aa:{c.instructions+=5;NFSU2_TR(0x4204aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4204ae:{NFSU2_TR(0x4204ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4204af:{NFSU2_TR(0x4204af);
__builtin_memmove((R+4),(R+24),4);
}
B4204b1:{NFSU2_TR(0x4204b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4204b8:{NFSU2_TR(0x4204b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4204bdull));
TAIL_STATIC(0x41ae40u,41a);
}
B4204bd:L4204bd:{c.instructions+=4;NFSU2_TR(0x4204bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4204be:{NFSU2_TR(0x4204be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4204bf:{NFSU2_TR(0x4204bf);
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
B4204c2:{NFSU2_TR(0x4204c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4204d0:L4204d0:{c.instructions+=1;NFSU2_TR(0x4204d0);
TAIL_STATIC(0x41c5e0u,41c);
}
B4204e0:L4204e0:{c.instructions+=1;NFSU2_TR(0x4204e0);
TAIL_STATIC(0x41c380u,41c);
}
B4204f0:L4204f0:{c.instructions+=1;NFSU2_TR(0x4204f0);
TAIL_STATIC(0x41c990u,41c);
}
B420500:L420500:{c.instructions+=15;NFSU2_TR(0x420500);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420502:{NFSU2_TR(0x420502);
u8 U[4];
w4(U+0,u32(0x77168bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420507:{NFSU2_TR(0x420507);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42050d:{NFSU2_TR(0x42050d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42050e:{NFSU2_TR(0x42050e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420515:{NFSU2_TR(0x420515);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420516:{NFSU2_TR(0x420516);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420517:{NFSU2_TR(0x420517);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420518:{NFSU2_TR(0x420518);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42051c:{NFSU2_TR(0x42051c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42051d:{NFSU2_TR(0x42051d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42051e:{NFSU2_TR(0x42051e);
__builtin_memmove((R+24),(R+4),4);
}
B420520:{NFSU2_TR(0x420520);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420521:{NFSU2_TR(0x420521);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420525:{NFSU2_TR(0x420525);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42052aull));
TAIL_STATIC(0x40f630u,40f);
}
B42052a:L42052a:{c.instructions+=7;NFSU2_TR(0x42052a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42052d:{NFSU2_TR(0x42052d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B42052f:{NFSU2_TR(0x42052f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420530:{NFSU2_TR(0x420530);
__builtin_memmove((R+4),(R+28),4);
}
B420532:{NFSU2_TR(0x420532);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420536:{NFSU2_TR(0x420536);
u8 U[4];
w4(U+0,u32(0x7852b0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B42053c:{NFSU2_TR(0x42053c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420541ull));
TAIL_STATIC(0x41c290u,41c);
}
B420541:L420541:{c.instructions+=37;NFSU2_TR(0x420541);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x700ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420547:{NFSU2_TR(0x420547);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x708ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42054d:{NFSU2_TR(0x42054d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420553:{NFSU2_TR(0x420553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x720ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420559:{NFSU2_TR(0x420559);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x724ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42055f:{NFSU2_TR(0x42055f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x72cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420565:{NFSU2_TR(0x420565);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x730ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42056b:{NFSU2_TR(0x42056b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x734ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420571:{NFSU2_TR(0x420571);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x738ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420577:{NFSU2_TR(0x420577);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x754ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42057d:{NFSU2_TR(0x42057d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x76cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420583:{NFSU2_TR(0x420583);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x764ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420589:{NFSU2_TR(0x420589);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x768ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42058f:{NFSU2_TR(0x42058f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x76cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420595:{NFSU2_TR(0x420595);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B420598:{NFSU2_TR(0x420598);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x760ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42059e:{NFSU2_TR(0x42059e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x778ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4205a4:{NFSU2_TR(0x4205a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x780ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4205aa:{NFSU2_TR(0x4205aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x784ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4205b0:{NFSU2_TR(0x4205b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x788ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4205b6:{NFSU2_TR(0x4205b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4205bc:{NFSU2_TR(0x4205bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x794ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4205c2:{NFSU2_TR(0x4205c2);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4205c6:{NFSU2_TR(0x4205c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4205ca:{NFSU2_TR(0x4205ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4205d0:{NFSU2_TR(0x4205d0);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4205d4:{NFSU2_TR(0x4205d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4205da:{NFSU2_TR(0x4205da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f4ull))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4205e4:{NFSU2_TR(0x4205e4);
{u32 ea_=u32(u32(7877780u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4205ea:{NFSU2_TR(0x4205ea);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ecull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4205f1:{NFSU2_TR(0x4205f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x31cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4205f7:{NFSU2_TR(0x4205f7);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4205fc:{NFSU2_TR(0x4205fc);
{u32 ea_=u32(u32(7883508u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B420602:{NFSU2_TR(0x420602);
{u32 ea_=u32(r4(R+24)+u32(1776u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B420608:{NFSU2_TR(0x420608);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42060b:{NFSU2_TR(0x42060b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x308ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B420612:{NFSU2_TR(0x420612);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420617ull));
TAIL_STATIC(0x411be0u,411);
}
B420617:L420617:{c.instructions+=19;NFSU2_TR(0x420617);
{u32 ea_=u32(u32(7877796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42061d:{NFSU2_TR(0x42061d);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B420623:{NFSU2_TR(0x420623);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x310ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420629:{NFSU2_TR(0x420629);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x314ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42062f:{NFSU2_TR(0x42062f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x318ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420635:{NFSU2_TR(0x420635);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42063b:{NFSU2_TR(0x42063b);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B42063e:{NFSU2_TR(0x42063e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420644:{NFSU2_TR(0x420644);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x360ull))));
__builtin_memmove((R+8),(U+0),4);
}
B42064a:{NFSU2_TR(0x42064a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x370ull))));
__builtin_memmove((R+0),(U+0),4);
}
B420650:{NFSU2_TR(0x420650);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420656:{NFSU2_TR(0x420656);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42065c:{NFSU2_TR(0x42065c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420662:{NFSU2_TR(0x420662);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x700ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420668:{NFSU2_TR(0x420668);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x704ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42066e:{NFSU2_TR(0x42066e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x72cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420674:{NFSU2_TR(0x420674);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x730ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42067a:{NFSU2_TR(0x42067a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x734ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420680:{NFSU2_TR(0x420680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420685ull));
TAIL_STATIC(0x75bed4u,75b);
}
B420685:L420685:{c.instructions+=3;NFSU2_TR(0x420685);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420687:{NFSU2_TR(0x420687);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x738ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42068d:{NFSU2_TR(0x42068d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420692ull));
TAIL_STATIC(0x575620u,575);
}
B420692:L420692:{c.instructions+=5;NFSU2_TR(0x420692);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B420695:{NFSU2_TR(0x420695);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420699:{NFSU2_TR(0x420699);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42069b:{NFSU2_TR(0x42069b);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4206a0:{NFSU2_TR(0x4206a0);
if(r1(R+518)){{goto L4206ad;}}
}
B4206a2:L4206a2:{c.instructions+=3;NFSU2_TR(0x4206a2);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4206a4:{NFSU2_TR(0x4206a4);
__builtin_memmove((R+4),(R+0),4);
}
B4206a6:{NFSU2_TR(0x4206a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4206abull));
TAIL_STATIC(0x579f20u,579);
}
B4206ab:L4206ab:{c.instructions+=1;NFSU2_TR(0x4206ab);
{goto L4206af;}
}
B4206ad:L4206ad:{c.instructions+=1;NFSU2_TR(0x4206ad);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4206af:L4206af:{c.instructions+=6;NFSU2_TR(0x4206af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4206b2:{NFSU2_TR(0x4206b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x73cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4206b8:{NFSU2_TR(0x4206b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4206bb:{NFSU2_TR(0x4206bb);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4206bf:{NFSU2_TR(0x4206bf);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4206c4:{NFSU2_TR(0x4206c4);
if(r1(R+518)){{goto L420702;}}
}
B4206c6:L4206c6:{c.instructions+=2;NFSU2_TR(0x4206c6);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4206c8:{NFSU2_TR(0x4206c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4206cdull));
TAIL_STATIC(0x575620u,575);
}
B4206cd:L4206cd:{c.instructions+=5;NFSU2_TR(0x4206cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4206d0:{NFSU2_TR(0x4206d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4206d4:{NFSU2_TR(0x4206d4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4206d6:{NFSU2_TR(0x4206d6);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4206db:{NFSU2_TR(0x4206db);
if(r1(R+518)){{goto L4206f3;}}
}
B4206dd:L4206dd:{c.instructions+=3;NFSU2_TR(0x4206dd);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4206df:{NFSU2_TR(0x4206df);
__builtin_memmove((R+4),(R+0),4);
}
B4206e1:{NFSU2_TR(0x4206e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4206e6ull));
TAIL_STATIC(0x579f20u,579);
}
B4206e6:L4206e6:{c.instructions+=3;NFSU2_TR(0x4206e6);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4206eb:{NFSU2_TR(0x4206eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x758ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4206f1:{NFSU2_TR(0x4206f1);
{goto L420708;}
}
B4206f3:L4206f3:{c.instructions+=4;NFSU2_TR(0x4206f3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4206f5:{NFSU2_TR(0x4206f5);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4206fa:{NFSU2_TR(0x4206fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x758ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420700:{NFSU2_TR(0x420700);
{goto L420708;}
}
B420702:L420702:{c.instructions+=1;NFSU2_TR(0x420702);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x758ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420708:L420708:{c.instructions+=10;NFSU2_TR(0x420708);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42070b:{NFSU2_TR(0x42070b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x744ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B420712:{NFSU2_TR(0x420712);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x748ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420718:{NFSU2_TR(0x420718);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70cull))));
w4(U+4,u32(0x4b189680ull));
s4(u32(r4(U+0)),r4(U+4));
}
B420722:{NFSU2_TR(0x420722);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x708ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420728:{NFSU2_TR(0x420728);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42072e:{NFSU2_TR(0x42072e);
__builtin_memmove((R+4),(R+0),4);
}
B420730:{NFSU2_TR(0x420730);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420731:{NFSU2_TR(0x420731);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420735:{NFSU2_TR(0x420735);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42073aull));
TAIL_STATIC(0x5d42d0u,5d4);
}
B42073a:L42073a:{c.instructions+=24;NFSU2_TR(0x42073a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420740:{NFSU2_TR(0x420740);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x750ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420746:{NFSU2_TR(0x420746);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x754ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42074c:{NFSU2_TR(0x42074c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x728ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B420753:{NFSU2_TR(0x420753);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x760ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420759:{NFSU2_TR(0x420759);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x764ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42075f:{NFSU2_TR(0x42075f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x768ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420765:{NFSU2_TR(0x420765);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x76cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42076b:{NFSU2_TR(0x42076b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42076e:{NFSU2_TR(0x42076e);
w4(R+0,u32(0x3f800000ull));
}
B420773:{NFSU2_TR(0x420773);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x75cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420779:{NFSU2_TR(0x420779);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42077f:{NFSU2_TR(0x42077f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x770ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420785:{NFSU2_TR(0x420785);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x774ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42078b:{NFSU2_TR(0x42078b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x778ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420791:{NFSU2_TR(0x420791);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B420797:{NFSU2_TR(0x420797);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42079d:{NFSU2_TR(0x42079d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x790ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4207a3:{NFSU2_TR(0x4207a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x794ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4207a9:{NFSU2_TR(0x4207a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4207af:{NFSU2_TR(0x4207af);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4207b2:{NFSU2_TR(0x4207b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4207b5:{NFSU2_TR(0x4207b5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4207b7:{NFSU2_TR(0x4207b7);
if(r1(R+518)){{goto L4207c5;}}
}
B4207b9:L4207b9:{c.instructions+=3;NFSU2_TR(0x4207b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4207bd:{NFSU2_TR(0x4207bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x714ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4207c3:{NFSU2_TR(0x4207c3);
{goto L4207cb;}
}
B4207c5:L4207c5:{c.instructions+=1;NFSU2_TR(0x4207c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x714ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4207cb:L4207cb:{c.instructions+=10;NFSU2_TR(0x4207cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4207cf:{NFSU2_TR(0x4207cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4207d0:{NFSU2_TR(0x4207d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x718ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4207d6:{NFSU2_TR(0x4207d6);
__builtin_memmove((R+0),(R+24),4);
}
B4207d8:{NFSU2_TR(0x4207d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4207d9:{NFSU2_TR(0x4207d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4207da:{NFSU2_TR(0x4207da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4207db:{NFSU2_TR(0x4207db);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4207e2:{NFSU2_TR(0x4207e2);
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
B4207e5:{NFSU2_TR(0x4207e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4207f0:L4207f0:{c.instructions+=3;NFSU2_TR(0x4207f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4207f1:{NFSU2_TR(0x4207f1);
__builtin_memmove((R+24),(R+4),4);
}
B4207f3:{NFSU2_TR(0x4207f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4207f8ull));
TAIL_STATIC(0x41be00u,41b);
}
B4207f8:L4207f8:{c.instructions+=2;NFSU2_TR(0x4207f8);
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
B4207fd:{NFSU2_TR(0x4207fd);
if(r1(R+518)){{goto L420808;}}
}
B4207ff:L4207ff:{c.instructions+=2;NFSU2_TR(0x4207ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420800:{NFSU2_TR(0x420800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420805ull));
TAIL_STATIC(0x575630u,575);
}
B420805:L420805:{c.instructions+=1;NFSU2_TR(0x420805);
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
B420808:L420808:{c.instructions+=3;NFSU2_TR(0x420808);
__builtin_memmove((R+0),(R+24),4);
}
B42080a:{NFSU2_TR(0x42080a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42080b:{NFSU2_TR(0x42080b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420810:L420810:{c.instructions+=9;NFSU2_TR(0x420810);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420811:{NFSU2_TR(0x420811);
__builtin_memmove((R+24),(R+4),4);
}
B420813:{NFSU2_TR(0x420813);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B420819:{NFSU2_TR(0x420819);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42081c:{NFSU2_TR(0x42081c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42081e:{NFSU2_TR(0x42081e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42081f:{NFSU2_TR(0x42081f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x20ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B420822:{NFSU2_TR(0x420822);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420823:{NFSU2_TR(0x420823);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420826ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B420826:L420826:{c.instructions+=3;NFSU2_TR(0x420826);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B420828:{NFSU2_TR(0x420828);
__builtin_memmove((R+4),(R+24),4);
}
B42082a:{NFSU2_TR(0x42082a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420830ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B420830:L420830:{c.instructions+=2;NFSU2_TR(0x420830);
__builtin_memmove((R+4),(R+24),4);
}
B420832:{NFSU2_TR(0x420832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420837ull));
TAIL_STATIC(0x40d980u,40d);
}
B420837:L420837:{c.instructions+=5;NFSU2_TR(0x420837);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42083d:{NFSU2_TR(0x42083d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42083f:{NFSU2_TR(0x42083f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B420842:{NFSU2_TR(0x420842);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420843:{NFSU2_TR(0x420843);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420846ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B420846:L420846:{c.instructions+=3;NFSU2_TR(0x420846);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42084c:{NFSU2_TR(0x42084c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42084e:{NFSU2_TR(0x42084e);
if(r1(R+518)){{goto L42087c;}}
}
B420850:L420850:{c.instructions+=3;NFSU2_TR(0x420850);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B420856:{NFSU2_TR(0x420856);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420858:{NFSU2_TR(0x420858);
if(r1(R+518)){{goto L42087c;}}
}
B42085a:L42085a:{c.instructions+=4;NFSU2_TR(0x42085a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42085d:{NFSU2_TR(0x42085d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B420860:{NFSU2_TR(0x420860);
__builtin_memmove((R+4),(R+28),4);
}
B420862:{NFSU2_TR(0x420862);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420867ull));
TAIL_STATIC(0x59fa30u,59f);
}
B420867:L420867:{c.instructions+=2;NFSU2_TR(0x420867);
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
B420869:{NFSU2_TR(0x420869);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L420875;}}
}
B42086b:L42086b:{c.instructions+=3;NFSU2_TR(0x42086b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42086d:{NFSU2_TR(0x42086d);
__builtin_memmove((R+4),(R+24),4);
}
B42086f:{NFSU2_TR(0x42086f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420875ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B420875:L420875:{c.instructions+=2;NFSU2_TR(0x420875);
__builtin_memmove((R+4),(R+28),4);
}
B420877:{NFSU2_TR(0x420877);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42087cull));
TAIL_STATIC(0x59faf0u,59f);
}
B42087c:L42087c:{c.instructions+=4;NFSU2_TR(0x42087c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420882:{NFSU2_TR(0x420882);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420888:{NFSU2_TR(0x420888);
u8 U[8];
__builtin_memmove((U+0),gp(0x86518c),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42088e:{NFSU2_TR(0x42088e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4208d4;}}
}
B420890:L420890:{c.instructions+=3;NFSU2_TR(0x420890);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B420895:{NFSU2_TR(0x420895);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420897:{NFSU2_TR(0x420897);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4208c7;}}
}
B420899:L420899:{c.instructions+=3;NFSU2_TR(0x420899);
__builtin_memmove((R+0),gp(0x890108),4);
}
B42089e:{NFSU2_TR(0x42089e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4208a0:{NFSU2_TR(0x4208a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4208c7;}}
}
B4208a2:L4208a2:{c.instructions+=3;NFSU2_TR(0x4208a2);
__builtin_memmove((R+0),gp(0x890114),4);
}
B4208a7:{NFSU2_TR(0x4208a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4208a9:{NFSU2_TR(0x4208a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4208bd;}}
}
B4208ab:L4208ab:{c.instructions+=3;NFSU2_TR(0x4208ab);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4208b0:{NFSU2_TR(0x4208b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4208b2:{NFSU2_TR(0x4208b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4208bd;}}
}
B4208b4:L4208b4:{c.instructions+=3;NFSU2_TR(0x4208b4);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4208b9:{NFSU2_TR(0x4208b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4208bb:{NFSU2_TR(0x4208bb);
if(r1(R+518)){{goto L4208c7;}}
}
B4208bd:L4208bd:{c.instructions+=4;NFSU2_TR(0x4208bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4208c0:{NFSU2_TR(0x4208c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4208c3:{NFSU2_TR(0x4208c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4208c5:{NFSU2_TR(0x4208c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4208d4;}}
}
B4208c7:L4208c7:{c.instructions+=2;NFSU2_TR(0x4208c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4208ca:{NFSU2_TR(0x4208ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x250ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4208d4:L4208d4:{c.instructions+=5;NFSU2_TR(0x4208d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4208da:{NFSU2_TR(0x4208da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4208dc:{NFSU2_TR(0x4208dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4208de:{NFSU2_TR(0x4208de);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B4208e1:{NFSU2_TR(0x4208e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4208e6ull));
TAIL_STATIC(0x41d160u,41d);
}
B4208e6:L4208e6:{c.instructions+=4;NFSU2_TR(0x4208e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4208e9:{NFSU2_TR(0x4208e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4208ec:{NFSU2_TR(0x4208ec);
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
B4208ee:{NFSU2_TR(0x4208ee);
if(r1(R+518)){{goto L42090c;}}
}
B4208f0:L4208f0:{c.instructions+=3;NFSU2_TR(0x4208f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4208f4:{NFSU2_TR(0x4208f4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x714ull))));
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
B4208fa:{NFSU2_TR(0x4208fa);
if(r1(R+518)){{goto L42090c;}}
}
B4208fc:L4208fc:{c.instructions+=2;NFSU2_TR(0x4208fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x718ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B420906:{NFSU2_TR(0x420906);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x714ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42090c:L42090c:{c.instructions+=3;NFSU2_TR(0x42090c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42090d:{NFSU2_TR(0x42090d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42090e:{NFSU2_TR(0x42090e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420910:L420910:{c.instructions+=4;NFSU2_TR(0x420910);
u8 U[14];
__builtin_memmove((U+6),gp(0x89e7b0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B420917:{NFSU2_TR(0x420917);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42091b:{NFSU2_TR(0x42091b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42091d:{NFSU2_TR(0x42091d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L420937;}}
}
B42091f:L42091f:{c.instructions+=3;NFSU2_TR(0x42091f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B420922:{NFSU2_TR(0x420922);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
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
B420926:{NFSU2_TR(0x420926);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L420937;}}
}
B420928:L420928:{c.instructions+=4;NFSU2_TR(0x420928);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42092b:{NFSU2_TR(0x42092b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42092f:{NFSU2_TR(0x42092f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B420932:{NFSU2_TR(0x420932);
TAIL_STATIC(0x41e540u,41e);
}
B420937:L420937:{c.instructions+=1;NFSU2_TR(0x420937);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420940:L420940:{c.instructions+=11;NFSU2_TR(0x420940);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420941:{NFSU2_TR(0x420941);
__builtin_memmove((R+20),(R+16),4);
}
B420943:{NFSU2_TR(0x420943);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B420946:{NFSU2_TR(0x420946);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B420949:{NFSU2_TR(0x420949);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42094a:{NFSU2_TR(0x42094a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42094b:{NFSU2_TR(0x42094b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42094c:{NFSU2_TR(0x42094c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42094f:{NFSU2_TR(0x42094f);
__builtin_memmove((R+24),(R+4),4);
}
B420951:{NFSU2_TR(0x420951);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B420953:{NFSU2_TR(0x420953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420958ull));
TAIL_STATIC(0x5ec0b0u,5ec);
}
B420958:L420958:{c.instructions+=6;NFSU2_TR(0x420958);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42095a:{NFSU2_TR(0x42095a);
__builtin_memmove((R+12),(R+0),4);
}
B42095c:{NFSU2_TR(0x42095c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42095f:{NFSU2_TR(0x42095f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420961:{NFSU2_TR(0x420961);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420965:{NFSU2_TR(0x420965);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42096aull));
TAIL_STATIC(0x41d160u,41d);
}
B42096a:L42096a:{c.instructions+=6;NFSU2_TR(0x42096a);
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
B42096c:{NFSU2_TR(0x42096c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B420973:{NFSU2_TR(0x420973);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42097d:{NFSU2_TR(0x42097d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1feull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B420984:{NFSU2_TR(0x420984);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42098b:{NFSU2_TR(0x42098b);
if(r1(R+518)){{goto L420a48;}}
}
B420991:L420991:{c.instructions+=3;NFSU2_TR(0x420991);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420992:{NFSU2_TR(0x420992);
__builtin_memmove((R+4),(R+24),4);
}
B420994:{NFSU2_TR(0x420994);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420999ull));
TAIL_STATIC(0x4032a0u,403);
}
B420999:L420999:{c.instructions+=10;NFSU2_TR(0x420999);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42099c:{NFSU2_TR(0x42099c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4209a2:{NFSU2_TR(0x4209a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4209a3:{NFSU2_TR(0x4209a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4209a5:{NFSU2_TR(0x4209a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4209a6:{NFSU2_TR(0x4209a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4209aa:{NFSU2_TR(0x4209aa);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4209ad:{NFSU2_TR(0x4209ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4209ae:{NFSU2_TR(0x4209ae);
__builtin_memmove((R+4),(R+0),4);
}
B4209b0:{NFSU2_TR(0x4209b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4209b5ull));
TAIL_STATIC(0x4122c0u,412);
}
B4209b5:L4209b5:{c.instructions+=3;NFSU2_TR(0x4209b5);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4209ba:{NFSU2_TR(0x4209ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4209bc:{NFSU2_TR(0x4209bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4209d9;}}
}
B4209be:L4209be:{c.instructions+=3;NFSU2_TR(0x4209be);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4209c3:{NFSU2_TR(0x4209c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4209c5:{NFSU2_TR(0x4209c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4209d9;}}
}
B4209c7:L4209c7:{c.instructions+=3;NFSU2_TR(0x4209c7);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B4209cc:{NFSU2_TR(0x4209cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4209ce:{NFSU2_TR(0x4209ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4209d9;}}
}
B4209d0:L4209d0:{c.instructions+=3;NFSU2_TR(0x4209d0);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B4209d5:{NFSU2_TR(0x4209d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4209d7:{NFSU2_TR(0x4209d7);
if(r1(R+518)){{goto L4209dd;}}
}
B4209d9:L4209d9:{c.instructions+=1;NFSU2_TR(0x4209d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4209dd:L4209dd:{c.instructions+=7;NFSU2_TR(0x4209dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4209e0:{NFSU2_TR(0x4209e0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4209e4:{NFSU2_TR(0x4209e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4209e6:{NFSU2_TR(0x4209e6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4209e8:{NFSU2_TR(0x4209e8);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4209ea:{NFSU2_TR(0x4209ea);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7ffull))));
}
B4209f0:{NFSU2_TR(0x4209f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4209f5ull));
TAIL_STATIC(0x5d89b0u,5d8);
}
B4209f5:L4209f5:{c.instructions+=7;NFSU2_TR(0x4209f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4209f6:{NFSU2_TR(0x4209f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4209f7:{NFSU2_TR(0x4209f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4209fb:{NFSU2_TR(0x4209fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4209fe:{NFSU2_TR(0x4209fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4209ff:{NFSU2_TR(0x4209ff);
__builtin_memmove((R+4),(R+12),4);
}
B420a01:{NFSU2_TR(0x420a01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420a06ull));
TAIL_STATIC(0x404cd0u,404);
}
B420a06:L420a06:{c.instructions+=7;NFSU2_TR(0x420a06);
u8 U[4];
w4(U+0,u32(0x3e19999aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420a0b:{NFSU2_TR(0x420a0b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420a0d:{NFSU2_TR(0x420a0d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420a0f:{NFSU2_TR(0x420a0f);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420a14:{NFSU2_TR(0x420a14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420a15:{NFSU2_TR(0x420a15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420a16:{NFSU2_TR(0x420a16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420a1bull));
TAIL_STATIC(0x41d530u,41d);
}
B420a1b:L420a1b:{c.instructions+=5;NFSU2_TR(0x420a1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B420a1d:{NFSU2_TR(0x420a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420a20:{NFSU2_TR(0x420a20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B420a23:{NFSU2_TR(0x420a23);
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
B420a26:{NFSU2_TR(0x420a26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L420a3d;}}
}
B420a28:L420a28:{c.instructions+=8;NFSU2_TR(0x420a28);
__builtin_memmove((R+8),gp(0x7836d8),4);
}
B420a2e:{NFSU2_TR(0x420a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420a34:{NFSU2_TR(0x420a34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B420a35:{NFSU2_TR(0x420a35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B420a36:{NFSU2_TR(0x420a36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B420a37:{NFSU2_TR(0x420a37);
__builtin_memmove((R+16),(R+20),4);
}
B420a39:{NFSU2_TR(0x420a39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B420a3a:{NFSU2_TR(0x420a3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420a3d:L420a3d:{c.instructions+=2;NFSU2_TR(0x420a3d);
__builtin_memmove((R+0),gp(0x7836dc),4);
}
B420a42:{NFSU2_TR(0x420a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420a48:L420a48:{c.instructions+=6;NFSU2_TR(0x420a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B420a49:{NFSU2_TR(0x420a49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B420a4a:{NFSU2_TR(0x420a4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B420a4b:{NFSU2_TR(0x420a4b);
__builtin_memmove((R+16),(R+20),4);
}
B420a4d:{NFSU2_TR(0x420a4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B420a4e:{NFSU2_TR(0x420a4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420a60:L420a60:{c.instructions+=27;NFSU2_TR(0x420a60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420a61:{NFSU2_TR(0x420a61);
__builtin_memmove((R+20),(R+16),4);
}
B420a63:{NFSU2_TR(0x420a63);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B420a66:{NFSU2_TR(0x420a66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B420a69:{NFSU2_TR(0x420a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B420a6c:{NFSU2_TR(0x420a6c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420a6f:{NFSU2_TR(0x420a6f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420a70:{NFSU2_TR(0x420a70);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420a73:{NFSU2_TR(0x420a73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420a74:{NFSU2_TR(0x420a74);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420a76:{NFSU2_TR(0x420a76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420a77:{NFSU2_TR(0x420a77);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B420a79:{NFSU2_TR(0x420a79);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B420a7b:{NFSU2_TR(0x420a7b);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B420a7d:{NFSU2_TR(0x420a7d);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B420a7f:{NFSU2_TR(0x420a7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B420a81:{NFSU2_TR(0x420a81);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B420a83:{NFSU2_TR(0x420a83);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B420a85:{NFSU2_TR(0x420a85);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B420a87:{NFSU2_TR(0x420a87);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B420a89:{NFSU2_TR(0x420a89);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B420a8b:{NFSU2_TR(0x420a8b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B420a8d:{NFSU2_TR(0x420a8d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B420a8f:{NFSU2_TR(0x420a8f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B420a95:{NFSU2_TR(0x420a95);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B420a97:{NFSU2_TR(0x420a97);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B420a9a:{NFSU2_TR(0x420a9a);
if(r1(R+514)){{goto L420abc;}}
}
B420a9c:L420a9c:{c.instructions+=7;NFSU2_TR(0x420a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420a9f:{NFSU2_TR(0x420a9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420aa0:{NFSU2_TR(0x420aa0);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B420aa4:{NFSU2_TR(0x420aa4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420aa5:{NFSU2_TR(0x420aa5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B420aa9:{NFSU2_TR(0x420aa9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420aaa:{NFSU2_TR(0x420aaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420aafull));
TAIL_STATIC(0x43c390u,43c);
}
B420aaf:L420aaf:{c.instructions+=3;NFSU2_TR(0x420aaf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B420ab2:{NFSU2_TR(0x420ab2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B420aba:{NFSU2_TR(0x420aba);
{goto L420aca;}
}
B420abc:L420abc:{c.instructions+=4;NFSU2_TR(0x420abc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420abd:{NFSU2_TR(0x420abd);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B420ac1:{NFSU2_TR(0x420ac1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420ac2:{NFSU2_TR(0x420ac2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420ac7ull));
TAIL_STATIC(0x43cf10u,43c);
}
B420ac7:L420ac7:{c.instructions+=1;NFSU2_TR(0x420ac7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B420aca:L420aca:{c.instructions+=5;NFSU2_TR(0x420aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B420acd:{NFSU2_TR(0x420acd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420acf:{NFSU2_TR(0x420acf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420ad1:{NFSU2_TR(0x420ad1);
__builtin_memmove((R+4),(R+28),4);
}
B420ad3:{NFSU2_TR(0x420ad3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420ad8ull));
TAIL_STATIC(0x41d160u,41d);
}
B420ad8:L420ad8:{c.instructions+=7;NFSU2_TR(0x420ad8);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420adb:{NFSU2_TR(0x420adb);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B420ae1:{NFSU2_TR(0x420ae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B420ae4:{NFSU2_TR(0x420ae4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B420ae6:{NFSU2_TR(0x420ae6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420aea:{NFSU2_TR(0x420aea);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B420aee:{NFSU2_TR(0x420aee);
__builtin_memmove((R+28),(R+28),4);
}
B420af0:L420af0:{c.instructions+=10;NFSU2_TR(0x420af0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B420af4:{NFSU2_TR(0x420af4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420af5:{NFSU2_TR(0x420af5);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B420af9:{NFSU2_TR(0x420af9);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B420afd:{NFSU2_TR(0x420afd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B420b01:{NFSU2_TR(0x420b01);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B420b04:{NFSU2_TR(0x420b04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b05:{NFSU2_TR(0x420b05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b06:{NFSU2_TR(0x420b06);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b07:{NFSU2_TR(0x420b07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420b0cull));
TAIL_STATIC(0x43d0c0u,43d);
}
B420b0c:L420b0c:{c.instructions+=10;NFSU2_TR(0x420b0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B420b0f:{NFSU2_TR(0x420b0f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b11:{NFSU2_TR(0x420b11);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b13:{NFSU2_TR(0x420b13);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b15:{NFSU2_TR(0x420b15);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b17:{NFSU2_TR(0x420b17);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b19:{NFSU2_TR(0x420b19);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B420b1d:{NFSU2_TR(0x420b1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b1e:{NFSU2_TR(0x420b1e);
__builtin_memmove((R+4),(R+28),4);
}
B420b20:{NFSU2_TR(0x420b20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420b25ull));
TAIL_STATIC(0x404cd0u,404);
}
B420b25:L420b25:{c.instructions+=4;NFSU2_TR(0x420b25);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B420b26:{NFSU2_TR(0x420b26);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B420b29:{NFSU2_TR(0x420b29);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420b2d:{NFSU2_TR(0x420b2d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x420af0u);}goto L420af0;}}
}
B420b2f:L420b2f:{c.instructions+=7;NFSU2_TR(0x420b2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B420b36:{NFSU2_TR(0x420b36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B420b37:{NFSU2_TR(0x420b37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B420b38:{NFSU2_TR(0x420b38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B420b39:{NFSU2_TR(0x420b39);
__builtin_memmove((R+16),(R+20),4);
}
B420b3b:{NFSU2_TR(0x420b3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B420b3c:{NFSU2_TR(0x420b3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420b40:L420b40:{c.instructions+=11;NFSU2_TR(0x420b40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b41:{NFSU2_TR(0x420b41);
__builtin_memmove((R+24),(R+4),4);
}
B420b43:{NFSU2_TR(0x420b43);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B420b45:{NFSU2_TR(0x420b45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b46:{NFSU2_TR(0x420b46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420b4c:{NFSU2_TR(0x420b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420b52:{NFSU2_TR(0x420b52);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B420b54:{NFSU2_TR(0x420b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420b5a:{NFSU2_TR(0x420b5a);
w4(R+4,u32(0x74ull));
}
B420b5f:{NFSU2_TR(0x420b5f);
__builtin_memmove((R+28),(R+24),4);
}
B420b61:{NFSU2_TR(0x420b61);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b62:L420b62:{c.instructions+=1;NFSU2_TR(0x420b62);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L420b64;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x420b62u);}goto L420b62;}
}
B420b64:L420b64:{c.instructions+=3;NFSU2_TR(0x420b64);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b65:{NFSU2_TR(0x420b65);
__builtin_memmove((R+4),(R+24),4);
}
B420b67:{NFSU2_TR(0x420b67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420b6cull));
TAIL_STATIC(0x41d160u,41d);
}
B420b6c:L420b6c:{c.instructions+=4;NFSU2_TR(0x420b6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B420b6d:{NFSU2_TR(0x420b6d);
__builtin_memmove((R+0),(R+24),4);
}
B420b6f:{NFSU2_TR(0x420b6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B420b70:{NFSU2_TR(0x420b70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420b80:L420b80:{c.instructions+=11;NFSU2_TR(0x420b80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b81:{NFSU2_TR(0x420b81);
__builtin_memmove((R+20),(R+16),4);
}
B420b83:{NFSU2_TR(0x420b83);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B420b86:{NFSU2_TR(0x420b86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B420b89:{NFSU2_TR(0x420b89);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b8a:{NFSU2_TR(0x420b8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b8b:{NFSU2_TR(0x420b8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b8c:{NFSU2_TR(0x420b8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b8e:{NFSU2_TR(0x420b8e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420b90:{NFSU2_TR(0x420b90);
__builtin_memmove((R+28),(R+4),4);
}
B420b92:{NFSU2_TR(0x420b92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420b97ull));
TAIL_STATIC(0x41d160u,41d);
}
B420b97:L420b97:{c.instructions+=35;NFSU2_TR(0x420b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B420b9a:{NFSU2_TR(0x420b9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B420b9c:{NFSU2_TR(0x420b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B420b9f:{NFSU2_TR(0x420b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B420ba2:{NFSU2_TR(0x420ba2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420ba6:{NFSU2_TR(0x420ba6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B420ba8:{NFSU2_TR(0x420ba8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420bac:{NFSU2_TR(0x420bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420baf:{NFSU2_TR(0x420baf);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420bb3:{NFSU2_TR(0x420bb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B420bb6:{NFSU2_TR(0x420bb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420bba:{NFSU2_TR(0x420bba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B420bbc:{NFSU2_TR(0x420bbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420bbf:{NFSU2_TR(0x420bbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420bc3:{NFSU2_TR(0x420bc3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420bc7:{NFSU2_TR(0x420bc7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B420bcb:{NFSU2_TR(0x420bcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420bcf:{NFSU2_TR(0x420bcf);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420bd3:{NFSU2_TR(0x420bd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B420bdb:{NFSU2_TR(0x420bdb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B420bdf:{NFSU2_TR(0x420bdf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B420be1:{NFSU2_TR(0x420be1);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B420be3:{NFSU2_TR(0x420be3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420be7:{NFSU2_TR(0x420be7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B420beb:{NFSU2_TR(0x420beb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420bef:{NFSU2_TR(0x420bef);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B420bf3:{NFSU2_TR(0x420bf3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B420bf5:{NFSU2_TR(0x420bf5);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B420bf7:{NFSU2_TR(0x420bf7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B420bf9:{NFSU2_TR(0x420bf9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B420bfb:{NFSU2_TR(0x420bfb);
{u32 ea_=u32(u32(7886096u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B420c01:{NFSU2_TR(0x420c01);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B420c03:{NFSU2_TR(0x420c03);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B420c05:{NFSU2_TR(0x420c05);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B420c08:{NFSU2_TR(0x420c08);
if(r1(R+514)){{goto L420c26;}}
}
B420c0a:L420c0a:{c.instructions+=8;NFSU2_TR(0x420c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B420c0d:{NFSU2_TR(0x420c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420c10:{NFSU2_TR(0x420c10);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420c11:{NFSU2_TR(0x420c11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420c12:{NFSU2_TR(0x420c12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420c13:{NFSU2_TR(0x420c13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420c14:{NFSU2_TR(0x420c14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420c15:{NFSU2_TR(0x420c15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420c1aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x420a60u);}goto L420a60;}
}
B420c1a:L420c1a:{c.instructions+=7;NFSU2_TR(0x420c1a);
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
B420c1d:{NFSU2_TR(0x420c1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B420c1e:{NFSU2_TR(0x420c1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B420c1f:{NFSU2_TR(0x420c1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B420c20:{NFSU2_TR(0x420c20);
__builtin_memmove((R+16),(R+20),4);
}
B420c22:{NFSU2_TR(0x420c22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B420c23:{NFSU2_TR(0x420c23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420c26:L420c26:{c.instructions+=6;NFSU2_TR(0x420c26);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420c2c:{NFSU2_TR(0x420c2c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B420c2e:{NFSU2_TR(0x420c2e);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B420c31:{NFSU2_TR(0x420c31);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B420c33:{NFSU2_TR(0x420c33);
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
B420c36:{NFSU2_TR(0x420c36);
if(r1(R+514)){{goto L420d30;}}
}
B420c3c:L420c3c:{c.instructions+=1;NFSU2_TR(0x420c3c);
__builtin_memmove((R+16),(R+16),4);
}
B420c40:L420c40:{c.instructions+=2;NFSU2_TR(0x420c40);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x14ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x14ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x14ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B420c43:{NFSU2_TR(0x420c43);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L420d30;}}
}
B420c49:L420c49:{c.instructions+=2;NFSU2_TR(0x420c49);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B420c4c:{NFSU2_TR(0x420c4c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L420d30;}}
}
B420c52:L420c52:{c.instructions+=9;NFSU2_TR(0x420c52);
__builtin_memmove((R+4),gp(0x7837cc),4);
}
B420c58:{NFSU2_TR(0x420c58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420c59:{NFSU2_TR(0x420c59);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B420c5d:{NFSU2_TR(0x420c5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420c5e:{NFSU2_TR(0x420c5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B420c62:{NFSU2_TR(0x420c62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420c63:{NFSU2_TR(0x420c63);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B420c67:{NFSU2_TR(0x420c67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420c68:{NFSU2_TR(0x420c68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420c6dull));
TAIL_STATIC(0x43d090u,43d);
}
B420c6d:L420c6d:{c.instructions+=9;NFSU2_TR(0x420c6d);
__builtin_memmove((R+8),gp(0x7837cc),4);
}
B420c73:{NFSU2_TR(0x420c73);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420c74:{NFSU2_TR(0x420c74);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B420c78:{NFSU2_TR(0x420c78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420c79:{NFSU2_TR(0x420c79);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B420c7d:{NFSU2_TR(0x420c7d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420c7e:{NFSU2_TR(0x420c7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B420c82:{NFSU2_TR(0x420c82);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420c83:{NFSU2_TR(0x420c83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420c88ull));
TAIL_STATIC(0x43d090u,43d);
}
B420c88:L420c88:{c.instructions+=15;NFSU2_TR(0x420c88);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B420c8c:{NFSU2_TR(0x420c8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420c90:{NFSU2_TR(0x420c90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B420c93:{NFSU2_TR(0x420c93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420c95:{NFSU2_TR(0x420c95);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420c97:{NFSU2_TR(0x420c97);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420c99:{NFSU2_TR(0x420c99);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420c9b:{NFSU2_TR(0x420c9b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420c9d:{NFSU2_TR(0x420c9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B420ca1:{NFSU2_TR(0x420ca1);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420ca5:{NFSU2_TR(0x420ca5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420ca6:{NFSU2_TR(0x420ca6);
__builtin_memmove((R+4),(R+28),4);
}
B420ca8:{NFSU2_TR(0x420ca8);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420cac:{NFSU2_TR(0x420cac);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B420cb4:{NFSU2_TR(0x420cb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420cb9ull));
TAIL_STATIC(0x404cd0u,404);
}
B420cb9:L420cb9:{c.instructions+=32;NFSU2_TR(0x420cb9);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420cbd:{NFSU2_TR(0x420cbd);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B420cc1:{NFSU2_TR(0x420cc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420cc5:{NFSU2_TR(0x420cc5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420cc9:{NFSU2_TR(0x420cc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B420ccd:{NFSU2_TR(0x420ccd);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B420cd1:{NFSU2_TR(0x420cd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B420cd5:{NFSU2_TR(0x420cd5);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B420cd7:{NFSU2_TR(0x420cd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420cdb:{NFSU2_TR(0x420cdb);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B420cdd:{NFSU2_TR(0x420cdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420ce1:{NFSU2_TR(0x420ce1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420ce5:{NFSU2_TR(0x420ce5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420ce9:{NFSU2_TR(0x420ce9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B420ceb:{NFSU2_TR(0x420ceb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B420cec:{NFSU2_TR(0x420cec);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B420cee:{NFSU2_TR(0x420cee);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420cf2:{NFSU2_TR(0x420cf2);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B420cf4:{NFSU2_TR(0x420cf4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B420cf6:{NFSU2_TR(0x420cf6);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B420cf8:{NFSU2_TR(0x420cf8);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B420cfa:{NFSU2_TR(0x420cfa);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B420cfe:{NFSU2_TR(0x420cfe);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B420d02:{NFSU2_TR(0x420d02);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420d06:{NFSU2_TR(0x420d06);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B420d09:{NFSU2_TR(0x420d09);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420d0d:{NFSU2_TR(0x420d0d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B420d0f:{NFSU2_TR(0x420d0f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B420d11:{NFSU2_TR(0x420d11);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B420d17:{NFSU2_TR(0x420d17);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B420d19:{NFSU2_TR(0x420d19);
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
B420d1c:{NFSU2_TR(0x420d1c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L420d30;}}
}
B420d1e:L420d1e:{c.instructions+=5;NFSU2_TR(0x420d1e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420d22:{NFSU2_TR(0x420d22);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B420d25:{NFSU2_TR(0x420d25);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B420d27:{NFSU2_TR(0x420d27);
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
B420d2a:{NFSU2_TR(0x420d2a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x420c40u);}goto L420c40;}}
}
B420d30:L420d30:{c.instructions+=7;NFSU2_TR(0x420d30);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B420d37:{NFSU2_TR(0x420d37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B420d38:{NFSU2_TR(0x420d38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B420d39:{NFSU2_TR(0x420d39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B420d3a:{NFSU2_TR(0x420d3a);
__builtin_memmove((R+16),(R+20),4);
}
B420d3c:{NFSU2_TR(0x420d3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B420d3d:{NFSU2_TR(0x420d3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420d40:L420d40:{c.instructions+=14;NFSU2_TR(0x420d40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420d41:{NFSU2_TR(0x420d41);
__builtin_memmove((R+12),(R+4),4);
}
B420d43:{NFSU2_TR(0x420d43);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420d46:{NFSU2_TR(0x420d46);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420d47:{NFSU2_TR(0x420d47);
{u32 ea_=u32(u32(8293992u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B420d4d:{NFSU2_TR(0x420d4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B420d51:{NFSU2_TR(0x420d51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420d52:{NFSU2_TR(0x420d52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B420d55:{NFSU2_TR(0x420d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B420d58:{NFSU2_TR(0x420d58);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B420d5a:{NFSU2_TR(0x420d5a);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B420d60:{NFSU2_TR(0x420d60);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B420d62:{NFSU2_TR(0x420d62);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B420d65:{NFSU2_TR(0x420d65);
if(r1(R+514)){{goto L420d71;}}
}
B420d67:L420d67:{c.instructions+=2;NFSU2_TR(0x420d67);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B420d6f:{NFSU2_TR(0x420d6f);
{goto L420d7a;}
}
B420d71:L420d71:{c.instructions+=2;NFSU2_TR(0x420d71);
__builtin_memmove((R+0),gp(0x7837ec),4);
}
B420d76:{NFSU2_TR(0x420d76);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420d7a:L420d7a:{c.instructions+=3;NFSU2_TR(0x420d7a);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B420d7f:{NFSU2_TR(0x420d7f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420d81:{NFSU2_TR(0x420d81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L420db6;}}
}
B420d83:L420d83:{c.instructions+=3;NFSU2_TR(0x420d83);
__builtin_memmove((R+0),gp(0x890108),4);
}
B420d88:{NFSU2_TR(0x420d88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B420d8a:{NFSU2_TR(0x420d8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L420db6;}}
}
B420d8c:L420d8c:{c.instructions+=3;NFSU2_TR(0x420d8c);
__builtin_memmove((R+0),gp(0x890114),4);
}
B420d91:{NFSU2_TR(0x420d91);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B420d93:{NFSU2_TR(0x420d93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L420da7;}}
}
B420d95:L420d95:{c.instructions+=3;NFSU2_TR(0x420d95);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B420d9a:{NFSU2_TR(0x420d9a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420d9c:{NFSU2_TR(0x420d9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L420da7;}}
}
B420d9e:L420d9e:{c.instructions+=3;NFSU2_TR(0x420d9e);
__builtin_memmove((R+0),gp(0x890104),4);
}
B420da3:{NFSU2_TR(0x420da3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B420da5:{NFSU2_TR(0x420da5);
if(r1(R+518)){{goto L420db6;}}
}
B420da7:L420da7:{c.instructions+=3;NFSU2_TR(0x420da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420daa:{NFSU2_TR(0x420daa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B420dac:{NFSU2_TR(0x420dac);
if(r1(R+518)){{goto L420db6;}}
}
B420dae:L420dae:{c.instructions+=1;NFSU2_TR(0x420dae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x40a00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B420db6:L420db6:{c.instructions+=2;NFSU2_TR(0x420db6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420db7:{NFSU2_TR(0x420db7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420dbcull));
TAIL_STATIC(0x41bfe0u,41b);
}
B420dbc:L420dbc:{c.instructions+=2;NFSU2_TR(0x420dbc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420dbe:{NFSU2_TR(0x420dbe);
if(r1(R+518)){{goto L420df8;}}
}
B420dc0:L420dc0:{c.instructions+=5;NFSU2_TR(0x420dc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B420dc4:{NFSU2_TR(0x420dc4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420dc6:{NFSU2_TR(0x420dc6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420dc8:{NFSU2_TR(0x420dc8);
__builtin_memmove((R+4),(R+24),4);
}
B420dca:{NFSU2_TR(0x420dca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420dcfull));
TAIL_STATIC(0x41d160u,41d);
}
B420dcf:L420dcf:{c.instructions+=11;NFSU2_TR(0x420dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B420dd2:{NFSU2_TR(0x420dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B420dd5:{NFSU2_TR(0x420dd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B420dd7:{NFSU2_TR(0x420dd7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420dd8:{NFSU2_TR(0x420dd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B420ddc:{NFSU2_TR(0x420ddc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420ddd:{NFSU2_TR(0x420ddd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420dde:{NFSU2_TR(0x420dde);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420ddf:{NFSU2_TR(0x420ddf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420de0:{NFSU2_TR(0x420de0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420de1:{NFSU2_TR(0x420de1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420de6ull));
TAIL_STATIC(0x41d530u,41d);
}
B420de6:L420de6:{c.instructions+=7;NFSU2_TR(0x420de6);
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
B420de9:{NFSU2_TR(0x420de9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B420df0:{NFSU2_TR(0x420df0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B420df1:{NFSU2_TR(0x420df1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B420df2:{NFSU2_TR(0x420df2);
w1(R+0,u8(0x1ull));
}
B420df4:{NFSU2_TR(0x420df4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B420df5:{NFSU2_TR(0x420df5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420df8:L420df8:{c.instructions+=8;NFSU2_TR(0x420df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420dfb:{NFSU2_TR(0x420dfb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B420e01:{NFSU2_TR(0x420e01);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B420e04:{NFSU2_TR(0x420e04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420e05:{NFSU2_TR(0x420e05);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B420e09:{NFSU2_TR(0x420e09);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420e0b:{NFSU2_TR(0x420e0b);
__builtin_memmove((R+4),(R+28),4);
}
B420e0d:{NFSU2_TR(0x420e0d);
if(r1(R+518)){{goto L420e93;}}
}
B420e13:L420e13:{c.instructions+=2;NFSU2_TR(0x420e13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420e14:{NFSU2_TR(0x420e14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420e19ull));
TAIL_STATIC(0x401d40u,401);
}
B420e19:L420e19:{c.instructions+=9;NFSU2_TR(0x420e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B420e1f:{NFSU2_TR(0x420e1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B420e22:{NFSU2_TR(0x420e22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420e23:{NFSU2_TR(0x420e23);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B420e26:{NFSU2_TR(0x420e26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420e27:{NFSU2_TR(0x420e27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420e28:{NFSU2_TR(0x420e28);
__builtin_memmove((R+4),(R+28),4);
}
B420e2a:{NFSU2_TR(0x420e2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420e2e:{NFSU2_TR(0x420e2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420e33ull));
TAIL_STATIC(0x404ef0u,404);
}
B420e33:L420e33:{c.instructions+=4;NFSU2_TR(0x420e33);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420e35:{NFSU2_TR(0x420e35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420e36:{NFSU2_TR(0x420e36);
__builtin_memmove((R+4),(R+28),4);
}
B420e38:{NFSU2_TR(0x420e38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420e3dull));
TAIL_STATIC(0x40f7a0u,40f);
}
B420e3d:L420e3d:{c.instructions+=6;NFSU2_TR(0x420e3d);
{u32 ea_=u32(u32(7878624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420e43:{NFSU2_TR(0x420e43);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B420e49:{NFSU2_TR(0x420e49);
{u32 ea_=u32(u32(7878632u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B420e4f:{NFSU2_TR(0x420e4f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B420e51:{NFSU2_TR(0x420e51);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420e54:{NFSU2_TR(0x420e54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L420e5c;}}
}
B420e56:L420e56:{c.instructions+=2;NFSU2_TR(0x420e56);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B420e5a:{NFSU2_TR(0x420e5a);
{goto L420e67;}
}
B420e5c:L420e5c:{c.instructions+=3;NFSU2_TR(0x420e5c);
__builtin_memmove((R+0),gp(0x7837e8),4);
}
B420e61:{NFSU2_TR(0x420e61);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B420e63:{NFSU2_TR(0x420e63);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420e67:L420e67:{c.instructions+=3;NFSU2_TR(0x420e67);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B420e6c:{NFSU2_TR(0x420e6c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420e6e:{NFSU2_TR(0x420e6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L420e79;}}
}
B420e70:L420e70:{c.instructions+=3;NFSU2_TR(0x420e70);
__builtin_memmove((R+0),gp(0x890108),4);
}
B420e75:{NFSU2_TR(0x420e75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B420e77:{NFSU2_TR(0x420e77);
if(r1(R+518)){{goto L420e89;}}
}
B420e79:L420e79:{c.instructions+=3;NFSU2_TR(0x420e79);
{u32 ea_=u32(u32(7878628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B420e7f:{NFSU2_TR(0x420e7f);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B420e85:{NFSU2_TR(0x420e85);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B420e89:L420e89:{c.instructions+=5;NFSU2_TR(0x420e89);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B420e8d:{NFSU2_TR(0x420e8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420e8e:{NFSU2_TR(0x420e8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420e8f:{NFSU2_TR(0x420e8f);
__builtin_memmove((R+4),(R+28),4);
}
B420e91:{NFSU2_TR(0x420e91);
{goto L420e97;}
}
B420e93:L420e93:{c.instructions+=2;NFSU2_TR(0x420e93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420e95:{NFSU2_TR(0x420e95);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420e97:L420e97:{c.instructions+=1;NFSU2_TR(0x420e97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420e9cull));
TAIL_STATIC(0x41d160u,41d);
}
B420e9c:L420e9c:{c.instructions+=11;NFSU2_TR(0x420e9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B420e9f:{NFSU2_TR(0x420e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420ea2:{NFSU2_TR(0x420ea2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B420ea4:{NFSU2_TR(0x420ea4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420ea5:{NFSU2_TR(0x420ea5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B420ea9:{NFSU2_TR(0x420ea9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420eaa:{NFSU2_TR(0x420eaa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420eab:{NFSU2_TR(0x420eab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420eac:{NFSU2_TR(0x420eac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420ead:{NFSU2_TR(0x420ead);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420eae:{NFSU2_TR(0x420eae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420eb3ull));
TAIL_STATIC(0x41d530u,41d);
}
B420eb3:L420eb3:{c.instructions+=8;NFSU2_TR(0x420eb3);
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
B420eb6:{NFSU2_TR(0x420eb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B420ebd:{NFSU2_TR(0x420ebd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B420ebe:{NFSU2_TR(0x420ebe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B420ebf:{NFSU2_TR(0x420ebf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B420ec0:{NFSU2_TR(0x420ec0);
w1(R+0,u8(0x1ull));
}
B420ec2:{NFSU2_TR(0x420ec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B420ec3:{NFSU2_TR(0x420ec3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420ed0:L420ed0:{c.instructions+=10;NFSU2_TR(0x420ed0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B420ed3:{NFSU2_TR(0x420ed3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420ed4:{NFSU2_TR(0x420ed4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420ed5:{NFSU2_TR(0x420ed5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B420ed9:{NFSU2_TR(0x420ed9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420eda:{NFSU2_TR(0x420eda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B420edd:{NFSU2_TR(0x420edd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420ede:{NFSU2_TR(0x420ede);
__builtin_memmove((R+28),(R+4),4);
}
B420ee0:{NFSU2_TR(0x420ee0);
__builtin_memmove((R+4),(R+24),4);
}
B420ee2:{NFSU2_TR(0x420ee2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420ee7ull));
TAIL_STATIC(0x5ec0b0u,5ec);
}
B420ee7:L420ee7:{c.instructions+=4;NFSU2_TR(0x420ee7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B420ee9:{NFSU2_TR(0x420ee9);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B420eeb:{NFSU2_TR(0x420eeb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B420eee:{NFSU2_TR(0x420eee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L420f0e;}}
}
B420ef0:L420ef0:{c.instructions+=2;NFSU2_TR(0x420ef0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B420ef3:{NFSU2_TR(0x420ef3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L420f0e;}}
}
B420ef5:L420ef5:{c.instructions+=5;NFSU2_TR(0x420ef5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420ef9:{NFSU2_TR(0x420ef9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420efa:{NFSU2_TR(0x420efa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420efb:{NFSU2_TR(0x420efb);
__builtin_memmove((R+4),(R+28),4);
}
B420efd:{NFSU2_TR(0x420efd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420f02ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x420d40u);}goto L420d40;}
}
B420f02:L420f02:{c.instructions+=7;NFSU2_TR(0x420f02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B420f03:{NFSU2_TR(0x420f03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B420f04:{NFSU2_TR(0x420f04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B420f05:{NFSU2_TR(0x420f05);
w1(R+0,u8(0x1ull));
}
B420f07:{NFSU2_TR(0x420f07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B420f08:{NFSU2_TR(0x420f08);
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
B420f0b:{NFSU2_TR(0x420f0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420f0e:L420f0e:{c.instructions+=16;NFSU2_TR(0x420f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B420f11:{NFSU2_TR(0x420f11);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B420f13:{NFSU2_TR(0x420f13);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+8))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B420f16:{NFSU2_TR(0x420f16);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420f1b:{NFSU2_TR(0x420f1b);
__builtin_memmove((R+8),(R+518),1);
}
B420f1e:{NFSU2_TR(0x420f1e);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420f23:{NFSU2_TR(0x420f23);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B420f2b:{NFSU2_TR(0x420f2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B420f33:{NFSU2_TR(0x420f33);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B420f3b:{NFSU2_TR(0x420f3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B420f43:{NFSU2_TR(0x420f43);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420f44:{NFSU2_TR(0x420f44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420f45:{NFSU2_TR(0x420f45);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B420f48:{NFSU2_TR(0x420f48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420f49:{NFSU2_TR(0x420f49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420f4a:{NFSU2_TR(0x420f4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420f4full));
TAIL_STATIC(0x40f4a0u,40f);
}
B420f4f:L420f4f:{c.instructions+=3;NFSU2_TR(0x420f4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B420f52:{NFSU2_TR(0x420f52);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B420f55:{NFSU2_TR(0x420f55);
if(r1(R+518)){{goto L420f8e;}}
}
B420f57:L420f57:{c.instructions+=3;NFSU2_TR(0x420f57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420f58:{NFSU2_TR(0x420f58);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B420f5c:{NFSU2_TR(0x420f5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420f61ull));
TAIL_STATIC(0x405410u,405);
}
B420f61:L420f61:{c.instructions+=5;NFSU2_TR(0x420f61);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B420f65:{NFSU2_TR(0x420f65);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420f66:{NFSU2_TR(0x420f66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420f67:{NFSU2_TR(0x420f67);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B420f6b:{NFSU2_TR(0x420f6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420f70ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x420d40u);}goto L420d40;}
}
B420f70:L420f70:{c.instructions+=3;NFSU2_TR(0x420f70);
__builtin_memmove((R+12),(R+0),1);
}
B420f72:{NFSU2_TR(0x420f72);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420f74:{NFSU2_TR(0x420f74);
if(r1(R+518)){{goto L420f8e;}}
}
B420f76:L420f76:{c.instructions+=4;NFSU2_TR(0x420f76);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B420f7a:{NFSU2_TR(0x420f7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420f7b:{NFSU2_TR(0x420f7b);
__builtin_memmove((R+4),(R+28),4);
}
B420f7d:{NFSU2_TR(0x420f7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420f82ull));
TAIL_STATIC(0x40fbe0u,40f);
}
B420f82:L420f82:{c.instructions+=7;NFSU2_TR(0x420f82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B420f83:{NFSU2_TR(0x420f83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B420f84:{NFSU2_TR(0x420f84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B420f85:{NFSU2_TR(0x420f85);
__builtin_memmove((R+0),(R+12),1);
}
B420f87:{NFSU2_TR(0x420f87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B420f88:{NFSU2_TR(0x420f88);
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
B420f8b:{NFSU2_TR(0x420f8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420f8e:L420f8e:{c.instructions+=4;NFSU2_TR(0x420f8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x31cull))));
__builtin_memmove((R+0),(U+0),4);
}
B420f94:{NFSU2_TR(0x420f94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420f95:{NFSU2_TR(0x420f95);
__builtin_memmove((R+4),(R+28),4);
}
B420f97:{NFSU2_TR(0x420f97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420f9cull));
TAIL_STATIC(0x40fc40u,40f);
}
B420f9c:L420f9c:{c.instructions+=2;NFSU2_TR(0x420f9c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B420f9e:{NFSU2_TR(0x420f9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L420fb4;}}
}
B420fa0:L420fa0:{c.instructions+=3;NFSU2_TR(0x420fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B420fa3:{NFSU2_TR(0x420fa3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B420fa6:{NFSU2_TR(0x420fa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420fabull));
TAIL_STATIC(0x5b5330u,5b5);
}
B420fab:L420fab:{c.instructions+=3;NFSU2_TR(0x420fab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420fad:{NFSU2_TR(0x420fad);
__builtin_memmove((R+4),(R+28),4);
}
B420faf:{NFSU2_TR(0x420faf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420fb4ull));
TAIL_STATIC(0x405410u,405);
}
B420fb4:L420fb4:{c.instructions+=5;NFSU2_TR(0x420fb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420fb8:{NFSU2_TR(0x420fb8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420fb9:{NFSU2_TR(0x420fb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420fba:{NFSU2_TR(0x420fba);
__builtin_memmove((R+4),(R+28),4);
}
B420fbc:{NFSU2_TR(0x420fbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x420fc1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x420d40u);}goto L420d40;}
}
B420fc1:L420fc1:{c.instructions+=7;NFSU2_TR(0x420fc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B420fc2:{NFSU2_TR(0x420fc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B420fc3:{NFSU2_TR(0x420fc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B420fc4:{NFSU2_TR(0x420fc4);
__builtin_memmove((R+0),(R+12),1);
}
B420fc6:{NFSU2_TR(0x420fc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B420fc7:{NFSU2_TR(0x420fc7);
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
B420fca:{NFSU2_TR(0x420fca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B420fd0:L420fd0:{c.instructions+=13;NFSU2_TR(0x420fd0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420fd2:{NFSU2_TR(0x420fd2);
u8 U[4];
w4(U+0,u32(0x7716a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420fd7:{NFSU2_TR(0x420fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B420fdd:{NFSU2_TR(0x420fdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420fde:{NFSU2_TR(0x420fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420fe5:{NFSU2_TR(0x420fe5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420fe6:{NFSU2_TR(0x420fe6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B420fe7:{NFSU2_TR(0x420fe7);
__builtin_memmove((R+24),(R+4),4);
}
B420fe9:{NFSU2_TR(0x420fe9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B420fed:{NFSU2_TR(0x420fed);
u8 U[4];
w4(U+0,u32(0x785518ull));
s4(u32(r4(R+24)),r4(U+0));
}
B420ff3:{NFSU2_TR(0x420ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B420ff6:{NFSU2_TR(0x420ff6);
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
B420ff8:{NFSU2_TR(0x420ff8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x421000u,421);
}
XIT:NFSU2_TR_EXIT(0x420,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
