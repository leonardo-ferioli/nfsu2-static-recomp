#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_64b(u8* __restrict R,Cpu& c);
u32 body_65a(u8* __restrict R,Cpu& c);
u32 body_65b(u8* __restrict R,Cpu& c);
u32 body_65c(u8* __restrict R,Cpu& c);
u32 body_65f(u8* __restrict R,Cpu& c);
u32 body_661(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x660,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x660,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_660(u8* __restrict R,Cpu& c);
u32 page_660(Cpu& c){return body_660(c.regs.data(),c);}
__attribute__((noinline)) u32 body_660(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x660001:goto L660001;
case 0x660003:goto L660003;
case 0x660006:c.instructions+=6;goto B660006;
case 0x660008:c.instructions+=5;goto B660008;
case 0x66000b:c.instructions+=4;goto B66000b;
case 0x66000c:c.instructions+=3;goto B66000c;
case 0x66000d:c.instructions+=2;goto B66000d;
case 0x660010:c.instructions+=1;goto B660010;
case 0x660012:goto L660012;
case 0x660015:c.instructions+=3;goto B660015;
case 0x660016:c.instructions+=2;goto B660016;
case 0x660019:c.instructions+=1;goto B660019;
case 0x66001b:goto L66001b;
case 0x66001d:c.instructions+=1;goto B66001d;
case 0x660022:goto L660022;
case 0x660025:c.instructions+=8;goto B660025;
case 0x660027:c.instructions+=7;goto B660027;
case 0x66002a:c.instructions+=6;goto B66002a;
case 0x66002d:c.instructions+=5;goto B66002d;
case 0x660031:c.instructions+=4;goto B660031;
case 0x660035:c.instructions+=3;goto B660035;
case 0x660037:c.instructions+=2;goto B660037;
case 0x660039:c.instructions+=1;goto B660039;
case 0x66003b:goto L66003b;
case 0x66003d:c.instructions+=1;goto B66003d;
case 0x66003f:goto L66003f;
case 0x660041:c.instructions+=2;goto B660041;
case 0x660044:c.instructions+=1;goto B660044;
case 0x660046:goto L660046;
case 0x660048:c.instructions+=1;goto B660048;
case 0x66004a:goto L66004a;
case 0x66004c:c.instructions+=7;goto B66004c;
case 0x66004f:c.instructions+=6;goto B66004f;
case 0x660051:c.instructions+=5;goto B660051;
case 0x660054:c.instructions+=4;goto B660054;
case 0x660055:c.instructions+=3;goto B660055;
case 0x660056:c.instructions+=2;goto B660056;
case 0x660059:c.instructions+=1;goto B660059;
case 0x66005b:goto L66005b;
case 0x66005e:c.instructions+=4;goto B66005e;
case 0x660061:c.instructions+=3;goto B660061;
case 0x660064:c.instructions+=2;goto B660064;
case 0x660067:c.instructions+=1;goto B660067;
case 0x660069:goto L660069;
case 0x66006b:goto L66006b;
case 0x66006e:c.instructions+=8;goto B66006e;
case 0x660070:c.instructions+=7;goto B660070;
case 0x660073:c.instructions+=6;goto B660073;
case 0x660076:c.instructions+=5;goto B660076;
case 0x66007a:c.instructions+=4;goto B66007a;
case 0x66007e:c.instructions+=3;goto B66007e;
case 0x660080:c.instructions+=2;goto B660080;
case 0x660082:c.instructions+=1;goto B660082;
case 0x660084:goto L660084;
case 0x660086:c.instructions+=1;goto B660086;
case 0x660088:goto L660088;
case 0x66008a:c.instructions+=2;goto B66008a;
case 0x66008d:c.instructions+=1;goto B66008d;
case 0x66008f:goto L66008f;
case 0x660091:c.instructions+=1;goto B660091;
case 0x660093:goto L660093;
case 0x660095:c.instructions+=7;goto B660095;
case 0x660098:c.instructions+=6;goto B660098;
case 0x66009a:c.instructions+=5;goto B66009a;
case 0x66009d:c.instructions+=4;goto B66009d;
case 0x66009e:c.instructions+=3;goto B66009e;
case 0x66009f:c.instructions+=2;goto B66009f;
case 0x6600a2:c.instructions+=1;goto B6600a2;
case 0x6600a4:goto L6600a4;
case 0x6600a7:c.instructions+=4;goto B6600a7;
case 0x6600aa:c.instructions+=3;goto B6600aa;
case 0x6600ad:c.instructions+=2;goto B6600ad;
case 0x6600b0:c.instructions+=1;goto B6600b0;
case 0x6600b2:goto L6600b2;
case 0x6600b5:c.instructions+=5;goto B6600b5;
case 0x6600b7:c.instructions+=4;goto B6600b7;
case 0x6600ba:c.instructions+=3;goto B6600ba;
case 0x6600bc:c.instructions+=2;goto B6600bc;
case 0x6600be:c.instructions+=1;goto B6600be;
case 0x6600c3:goto L6600c3;
case 0x6600c5:c.instructions+=7;goto B6600c5;
case 0x6600c8:c.instructions+=6;goto B6600c8;
case 0x6600ca:c.instructions+=5;goto B6600ca;
case 0x6600cc:c.instructions+=4;goto B6600cc;
case 0x6600cf:c.instructions+=3;goto B6600cf;
case 0x6600d2:c.instructions+=2;goto B6600d2;
case 0x6600d5:c.instructions+=1;goto B6600d5;
case 0x6600d7:goto L6600d7;
case 0x6600d9:c.instructions+=4;goto B6600d9;
case 0x6600da:c.instructions+=3;goto B6600da;
case 0x6600dc:c.instructions+=2;goto B6600dc;
case 0x6600df:c.instructions+=1;goto B6600df;
case 0x6600e2:goto L6600e2;
case 0x6600e3:c.instructions+=1;goto B6600e3;
case 0x6600e9:goto L6600e9;
case 0x6600ea:c.instructions+=1;goto B6600ea;
case 0x6600ec:goto L6600ec;
case 0x6600ed:c.instructions+=1;goto B6600ed;
case 0x6600f3:goto L6600f3;
case 0x6600f6:c.instructions+=8;goto B6600f6;
case 0x6600f9:c.instructions+=7;goto B6600f9;
case 0x6600fb:c.instructions+=6;goto B6600fb;
case 0x6600fe:c.instructions+=5;goto B6600fe;
case 0x660101:c.instructions+=4;goto B660101;
case 0x660103:c.instructions+=3;goto B660103;
case 0x660105:c.instructions+=2;goto B660105;
case 0x660108:c.instructions+=1;goto B660108;
case 0x66010a:goto L66010a;
case 0x66010c:c.instructions+=1;goto B66010c;
case 0x66010e:goto L66010e;
case 0x660110:c.instructions+=2;goto B660110;
case 0x660113:c.instructions+=1;goto B660113;
case 0x660115:goto L660115;
case 0x660117:c.instructions+=1;goto B660117;
case 0x660119:goto L660119;
case 0x66011b:c.instructions+=14;goto B66011b;
case 0x66011e:c.instructions+=13;goto B66011e;
case 0x660120:c.instructions+=12;goto B660120;
case 0x660123:c.instructions+=11;goto B660123;
case 0x660126:c.instructions+=10;goto B660126;
case 0x660127:c.instructions+=9;goto B660127;
case 0x660129:c.instructions+=8;goto B660129;
case 0x66012a:c.instructions+=7;goto B66012a;
case 0x66012d:c.instructions+=6;goto B66012d;
case 0x660130:c.instructions+=5;goto B660130;
case 0x660133:c.instructions+=4;goto B660133;
case 0x660136:c.instructions+=3;goto B660136;
case 0x660139:c.instructions+=2;goto B660139;
case 0x66013b:c.instructions+=1;goto B66013b;
case 0x66013d:goto L66013d;
case 0x660140:c.instructions+=5;goto B660140;
case 0x660143:c.instructions+=4;goto B660143;
case 0x660146:c.instructions+=3;goto B660146;
case 0x660149:c.instructions+=2;goto B660149;
case 0x66014c:c.instructions+=1;goto B66014c;
case 0x66014e:goto L66014e;
case 0x660150:c.instructions+=3;goto B660150;
case 0x660153:c.instructions+=2;goto B660153;
case 0x660155:c.instructions+=1;goto B660155;
case 0x66015a:goto L66015a;
case 0x66015d:c.instructions+=8;goto B66015d;
case 0x660160:c.instructions+=7;goto B660160;
case 0x660162:c.instructions+=6;goto B660162;
case 0x660165:c.instructions+=5;goto B660165;
case 0x660168:c.instructions+=4;goto B660168;
case 0x66016a:c.instructions+=3;goto B66016a;
case 0x66016c:c.instructions+=2;goto B66016c;
case 0x66016f:c.instructions+=1;goto B66016f;
case 0x660171:goto L660171;
case 0x660173:c.instructions+=1;goto B660173;
case 0x660175:goto L660175;
case 0x660177:c.instructions+=2;goto B660177;
case 0x66017a:c.instructions+=1;goto B66017a;
case 0x66017c:goto L66017c;
case 0x66017e:c.instructions+=1;goto B66017e;
case 0x660180:goto L660180;
case 0x660182:c.instructions+=7;goto B660182;
case 0x660185:c.instructions+=6;goto B660185;
case 0x660187:c.instructions+=5;goto B660187;
case 0x66018a:c.instructions+=4;goto B66018a;
case 0x66018b:c.instructions+=3;goto B66018b;
case 0x66018c:c.instructions+=2;goto B66018c;
case 0x66018f:c.instructions+=1;goto B66018f;
case 0x660191:goto L660191;
case 0x660194:c.instructions+=5;goto B660194;
case 0x660197:c.instructions+=4;goto B660197;
case 0x66019a:c.instructions+=3;goto B66019a;
case 0x66019d:c.instructions+=2;goto B66019d;
case 0x6601a0:c.instructions+=1;goto B6601a0;
case 0x6601a2:goto L6601a2;
case 0x6601a4:goto L6601a4;
case 0x6601a7:c.instructions+=8;goto B6601a7;
case 0x6601aa:c.instructions+=7;goto B6601aa;
case 0x6601ac:c.instructions+=6;goto B6601ac;
case 0x6601af:c.instructions+=5;goto B6601af;
case 0x6601b2:c.instructions+=4;goto B6601b2;
case 0x6601b4:c.instructions+=3;goto B6601b4;
case 0x6601b6:c.instructions+=2;goto B6601b6;
case 0x6601b9:c.instructions+=1;goto B6601b9;
case 0x6601bb:goto L6601bb;
case 0x6601bd:c.instructions+=1;goto B6601bd;
case 0x6601bf:goto L6601bf;
case 0x6601c1:c.instructions+=2;goto B6601c1;
case 0x6601c4:c.instructions+=1;goto B6601c4;
case 0x6601c6:goto L6601c6;
case 0x6601c8:c.instructions+=1;goto B6601c8;
case 0x6601ca:goto L6601ca;
case 0x6601cc:c.instructions+=7;goto B6601cc;
case 0x6601cf:c.instructions+=6;goto B6601cf;
case 0x6601d1:c.instructions+=5;goto B6601d1;
case 0x6601d4:c.instructions+=4;goto B6601d4;
case 0x6601d5:c.instructions+=3;goto B6601d5;
case 0x6601d6:c.instructions+=2;goto B6601d6;
case 0x6601d9:c.instructions+=1;goto B6601d9;
case 0x6601db:goto L6601db;
case 0x6601de:c.instructions+=5;goto B6601de;
case 0x6601e1:c.instructions+=4;goto B6601e1;
case 0x6601e4:c.instructions+=3;goto B6601e4;
case 0x6601e7:c.instructions+=2;goto B6601e7;
case 0x6601ea:c.instructions+=1;goto B6601ea;
case 0x6601ec:goto L6601ec;
case 0x6601ee:goto L6601ee;
case 0x6601f1:c.instructions+=1;goto B6601f1;
case 0x6601f3:goto L6601f3;
case 0x6601f6:c.instructions+=1;goto B6601f6;
case 0x6601f8:goto L6601f8;
case 0x6601fb:c.instructions+=1;goto B6601fb;
case 0x6601fe:goto L6601fe;
case 0x6601ff:c.instructions+=4;goto B6601ff;
case 0x660200:c.instructions+=3;goto B660200;
case 0x660201:c.instructions+=2;goto B660201;
case 0x660202:c.instructions+=1;goto B660202;
case 0x660205:goto L660205;
case 0x660207:c.instructions+=16;goto B660207;
case 0x660208:c.instructions+=15;goto B660208;
case 0x66020a:c.instructions+=14;goto B66020a;
case 0x66020b:c.instructions+=13;goto B66020b;
case 0x66020c:c.instructions+=12;goto B66020c;
case 0x660210:c.instructions+=11;goto B660210;
case 0x660211:c.instructions+=10;goto B660211;
case 0x660212:c.instructions+=9;goto B660212;
case 0x660213:c.instructions+=8;goto B660213;
case 0x660216:c.instructions+=7;goto B660216;
case 0x660219:c.instructions+=6;goto B660219;
case 0x66021d:c.instructions+=5;goto B66021d;
case 0x660220:c.instructions+=4;goto B660220;
case 0x660223:c.instructions+=3;goto B660223;
case 0x660225:c.instructions+=2;goto B660225;
case 0x660227:c.instructions+=1;goto B660227;
case 0x660229:goto L660229;
case 0x66022b:goto L66022b;
case 0x66022f:c.instructions+=3;goto B66022f;
case 0x660232:c.instructions+=2;goto B660232;
case 0x660234:c.instructions+=1;goto B660234;
case 0x660236:goto L660236;
case 0x660238:goto L660238;
case 0x66023e:c.instructions+=1;goto B66023e;
case 0x660240:goto L660240;
case 0x660241:c.instructions+=1;goto B660241;
case 0x660246:goto L660246;
case 0x660248:c.instructions+=4;goto B660248;
case 0x66024a:c.instructions+=3;goto B66024a;
case 0x66024b:c.instructions+=2;goto B66024b;
case 0x66024e:c.instructions+=1;goto B66024e;
case 0x660250:goto L660250;
case 0x660257:c.instructions+=1;goto B660257;
case 0x66025c:goto L66025c;
case 0x66025e:c.instructions+=3;goto B66025e;
case 0x660260:c.instructions+=2;goto B660260;
case 0x660263:c.instructions+=1;goto B660263;
case 0x660265:goto L660265;
case 0x660267:goto L660267;
case 0x660269:c.instructions+=1;goto B660269;
case 0x66026c:goto L66026c;
case 0x66026e:goto L66026e;
case 0x660274:c.instructions+=3;goto B660274;
case 0x660276:c.instructions+=2;goto B660276;
case 0x660278:c.instructions+=1;goto B660278;
case 0x66027a:goto L66027a;
case 0x66027b:c.instructions+=1;goto B66027b;
case 0x660280:goto L660280;
case 0x660283:c.instructions+=1;goto B660283;
case 0x660284:goto L660284;
case 0x660287:c.instructions+=3;goto B660287;
case 0x660289:c.instructions+=2;goto B660289;
case 0x66028c:c.instructions+=1;goto B66028c;
case 0x660292:goto L660292;
case 0x660296:c.instructions+=1;goto B660296;
case 0x660298:goto L660298;
case 0x66029b:c.instructions+=4;goto B66029b;
case 0x66029d:c.instructions+=3;goto B66029d;
case 0x66029f:c.instructions+=2;goto B66029f;
case 0x6602a0:c.instructions+=1;goto B6602a0;
case 0x6602a6:goto L6602a6;
case 0x6602a8:c.instructions+=2;goto B6602a8;
case 0x6602ab:c.instructions+=1;goto B6602ab;
case 0x6602ad:goto L6602ad;
case 0x6602b0:c.instructions+=2;goto B6602b0;
case 0x6602b3:c.instructions+=1;goto B6602b3;
case 0x6602b5:goto L6602b5;
case 0x6602b8:c.instructions+=7;goto B6602b8;
case 0x6602ba:c.instructions+=6;goto B6602ba;
case 0x6602bd:c.instructions+=5;goto B6602bd;
case 0x6602be:c.instructions+=4;goto B6602be;
case 0x6602c4:c.instructions+=3;goto B6602c4;
case 0x6602c6:c.instructions+=2;goto B6602c6;
case 0x6602c7:c.instructions+=1;goto B6602c7;
case 0x6602cd:goto L6602cd;
case 0x6602cf:c.instructions+=2;goto B6602cf;
case 0x6602d2:c.instructions+=1;goto B6602d2;
case 0x6602d4:goto L6602d4;
case 0x6602d8:c.instructions+=2;goto B6602d8;
case 0x6602db:c.instructions+=1;goto B6602db;
case 0x6602dd:goto L6602dd;
case 0x6602e0:c.instructions+=5;goto B6602e0;
case 0x6602e1:c.instructions+=4;goto B6602e1;
case 0x6602e7:c.instructions+=3;goto B6602e7;
case 0x6602e9:c.instructions+=2;goto B6602e9;
case 0x6602ec:c.instructions+=1;goto B6602ec;
case 0x6602f1:goto L6602f1;
case 0x6602f3:c.instructions+=2;goto B6602f3;
case 0x6602f6:c.instructions+=1;goto B6602f6;
case 0x6602f8:goto L6602f8;
case 0x6602fc:c.instructions+=2;goto B6602fc;
case 0x6602ff:c.instructions+=1;goto B6602ff;
case 0x660301:goto L660301;
case 0x660304:c.instructions+=7;goto B660304;
case 0x660306:c.instructions+=6;goto B660306;
case 0x660309:c.instructions+=5;goto B660309;
case 0x66030a:c.instructions+=4;goto B66030a;
case 0x660310:c.instructions+=3;goto B660310;
case 0x660312:c.instructions+=2;goto B660312;
case 0x660313:c.instructions+=1;goto B660313;
case 0x660319:goto L660319;
case 0x66031c:goto L66031c;
case 0x66031f:c.instructions+=5;goto B66031f;
case 0x660320:c.instructions+=4;goto B660320;
case 0x660321:c.instructions+=3;goto B660321;
case 0x660322:c.instructions+=2;goto B660322;
case 0x660323:c.instructions+=1;goto B660323;
case 0x660326:goto L660326;
case 0x660328:c.instructions+=11;goto B660328;
case 0x660329:c.instructions+=10;goto B660329;
case 0x66032b:c.instructions+=9;goto B66032b;
case 0x66032c:c.instructions+=8;goto B66032c;
case 0x66032d:c.instructions+=7;goto B66032d;
case 0x66032e:c.instructions+=6;goto B66032e;
case 0x660330:c.instructions+=5;goto B660330;
case 0x660333:c.instructions+=4;goto B660333;
case 0x660335:c.instructions+=3;goto B660335;
case 0x660339:c.instructions+=2;goto B660339;
case 0x66033c:c.instructions+=1;goto B66033c;
case 0x66033e:goto L66033e;
case 0x66033f:c.instructions+=2;goto B66033f;
case 0x660344:c.instructions+=1;goto B660344;
case 0x660345:goto L660345;
case 0x660348:c.instructions+=5;goto B660348;
case 0x66034a:c.instructions+=4;goto B66034a;
case 0x66034c:c.instructions+=3;goto B66034c;
case 0x66034d:c.instructions+=2;goto B66034d;
case 0x66034e:c.instructions+=1;goto B66034e;
case 0x660354:goto L660354;
case 0x660356:c.instructions+=1;goto B660356;
case 0x660358:goto L660358;
case 0x66035a:c.instructions+=1;goto B66035a;
case 0x66035b:goto L66035b;
case 0x660361:c.instructions+=4;goto B660361;
case 0x660367:c.instructions+=3;goto B660367;
case 0x66036d:c.instructions+=2;goto B66036d;
case 0x66036f:c.instructions+=1;goto B66036f;
case 0x660371:goto L660371;
case 0x660374:c.instructions+=2;goto B660374;
case 0x660377:c.instructions+=1;goto B660377;
case 0x660379:goto L660379;
case 0x66037d:goto L66037d;
case 0x660380:c.instructions+=6;goto B660380;
case 0x660383:c.instructions+=5;goto B660383;
case 0x660385:c.instructions+=4;goto B660385;
case 0x660386:c.instructions+=3;goto B660386;
case 0x660387:c.instructions+=2;goto B660387;
case 0x660388:c.instructions+=1;goto B660388;
case 0x66038e:goto L66038e;
case 0x660390:c.instructions+=1;goto B660390;
case 0x660392:goto L660392;
case 0x660395:c.instructions+=2;goto B660395;
case 0x66039b:c.instructions+=1;goto B66039b;
case 0x66039d:goto L66039d;
case 0x6603a0:c.instructions+=5;goto B6603a0;
case 0x6603a4:c.instructions+=4;goto B6603a4;
case 0x6603a7:c.instructions+=3;goto B6603a7;
case 0x6603a8:c.instructions+=2;goto B6603a8;
case 0x6603ab:c.instructions+=1;goto B6603ab;
case 0x6603ad:goto L6603ad;
case 0x6603ae:c.instructions+=1;goto B6603ae;
case 0x6603af:goto L6603af;
case 0x6603b0:c.instructions+=2;goto B6603b0;
case 0x6603b1:c.instructions+=1;goto B6603b1;
case 0x6603b4:goto L6603b4;
case 0x6603b6:c.instructions+=16;goto B6603b6;
case 0x6603b7:c.instructions+=15;goto B6603b7;
case 0x6603b9:c.instructions+=14;goto B6603b9;
case 0x6603ba:c.instructions+=13;goto B6603ba;
case 0x6603bb:c.instructions+=12;goto B6603bb;
case 0x6603bf:c.instructions+=11;goto B6603bf;
case 0x6603c0:c.instructions+=10;goto B6603c0;
case 0x6603c1:c.instructions+=9;goto B6603c1;
case 0x6603c2:c.instructions+=8;goto B6603c2;
case 0x6603c5:c.instructions+=7;goto B6603c5;
case 0x6603c8:c.instructions+=6;goto B6603c8;
case 0x6603cc:c.instructions+=5;goto B6603cc;
case 0x6603cf:c.instructions+=4;goto B6603cf;
case 0x6603d2:c.instructions+=3;goto B6603d2;
case 0x6603d4:c.instructions+=2;goto B6603d4;
case 0x6603d6:c.instructions+=1;goto B6603d6;
case 0x6603d8:goto L6603d8;
case 0x6603da:goto L6603da;
case 0x6603de:c.instructions+=3;goto B6603de;
case 0x6603e1:c.instructions+=2;goto B6603e1;
case 0x6603e3:c.instructions+=1;goto B6603e3;
case 0x6603e5:goto L6603e5;
case 0x6603e7:goto L6603e7;
case 0x6603ed:c.instructions+=1;goto B6603ed;
case 0x6603ef:goto L6603ef;
case 0x6603f0:c.instructions+=1;goto B6603f0;
case 0x6603f5:goto L6603f5;
case 0x6603f7:c.instructions+=4;goto B6603f7;
case 0x6603f9:c.instructions+=3;goto B6603f9;
case 0x6603fa:c.instructions+=2;goto B6603fa;
case 0x6603fd:c.instructions+=1;goto B6603fd;
case 0x6603ff:goto L6603ff;
case 0x660406:c.instructions+=1;goto B660406;
case 0x66040b:goto L66040b;
case 0x66040d:c.instructions+=3;goto B66040d;
case 0x66040f:c.instructions+=2;goto B66040f;
case 0x660412:c.instructions+=1;goto B660412;
case 0x660414:goto L660414;
case 0x660416:goto L660416;
case 0x660418:c.instructions+=1;goto B660418;
case 0x66041b:goto L66041b;
case 0x66041d:goto L66041d;
case 0x660423:c.instructions+=3;goto B660423;
case 0x660425:c.instructions+=2;goto B660425;
case 0x660427:c.instructions+=1;goto B660427;
case 0x660429:goto L660429;
case 0x66042a:c.instructions+=1;goto B66042a;
case 0x66042f:goto L66042f;
case 0x660432:c.instructions+=1;goto B660432;
case 0x660433:goto L660433;
case 0x660436:c.instructions+=3;goto B660436;
case 0x660438:c.instructions+=2;goto B660438;
case 0x66043b:c.instructions+=1;goto B66043b;
case 0x660441:goto L660441;
case 0x660445:c.instructions+=1;goto B660445;
case 0x660447:goto L660447;
case 0x66044a:c.instructions+=4;goto B66044a;
case 0x66044c:c.instructions+=3;goto B66044c;
case 0x66044e:c.instructions+=2;goto B66044e;
case 0x66044f:c.instructions+=1;goto B66044f;
case 0x660455:goto L660455;
case 0x660457:c.instructions+=2;goto B660457;
case 0x66045a:c.instructions+=1;goto B66045a;
case 0x66045c:goto L66045c;
case 0x66045f:c.instructions+=2;goto B66045f;
case 0x660462:c.instructions+=1;goto B660462;
case 0x660464:goto L660464;
case 0x660467:c.instructions+=7;goto B660467;
case 0x660469:c.instructions+=6;goto B660469;
case 0x66046c:c.instructions+=5;goto B66046c;
case 0x66046d:c.instructions+=4;goto B66046d;
case 0x660473:c.instructions+=3;goto B660473;
case 0x660475:c.instructions+=2;goto B660475;
case 0x660476:c.instructions+=1;goto B660476;
case 0x66047c:goto L66047c;
case 0x66047e:c.instructions+=2;goto B66047e;
case 0x660481:c.instructions+=1;goto B660481;
case 0x660483:goto L660483;
case 0x660487:c.instructions+=2;goto B660487;
case 0x66048a:c.instructions+=1;goto B66048a;
case 0x66048c:goto L66048c;
case 0x66048f:c.instructions+=7;goto B66048f;
case 0x660491:c.instructions+=6;goto B660491;
case 0x660494:c.instructions+=5;goto B660494;
case 0x660495:c.instructions+=4;goto B660495;
case 0x66049b:c.instructions+=3;goto B66049b;
case 0x66049d:c.instructions+=2;goto B66049d;
case 0x66049e:c.instructions+=1;goto B66049e;
case 0x6604a4:goto L6604a4;
case 0x6604a6:c.instructions+=2;goto B6604a6;
case 0x6604a9:c.instructions+=1;goto B6604a9;
case 0x6604ab:goto L6604ab;
case 0x6604af:c.instructions+=2;goto B6604af;
case 0x6604b2:c.instructions+=1;goto B6604b2;
case 0x6604b4:goto L6604b4;
case 0x6604b7:c.instructions+=7;goto B6604b7;
case 0x6604b9:c.instructions+=6;goto B6604b9;
case 0x6604bc:c.instructions+=5;goto B6604bc;
case 0x6604bd:c.instructions+=4;goto B6604bd;
case 0x6604c3:c.instructions+=3;goto B6604c3;
case 0x6604c5:c.instructions+=2;goto B6604c5;
case 0x6604c6:c.instructions+=1;goto B6604c6;
case 0x6604cc:goto L6604cc;
case 0x6604cf:goto L6604cf;
case 0x6604d2:c.instructions+=5;goto B6604d2;
case 0x6604d3:c.instructions+=4;goto B6604d3;
case 0x6604d4:c.instructions+=3;goto B6604d4;
case 0x6604d5:c.instructions+=2;goto B6604d5;
case 0x6604d6:c.instructions+=1;goto B6604d6;
case 0x6604d9:goto L6604d9;
case 0x6604db:c.instructions+=11;goto B6604db;
case 0x6604dc:c.instructions+=10;goto B6604dc;
case 0x6604de:c.instructions+=9;goto B6604de;
case 0x6604df:c.instructions+=8;goto B6604df;
case 0x6604e0:c.instructions+=7;goto B6604e0;
case 0x6604e1:c.instructions+=6;goto B6604e1;
case 0x6604e3:c.instructions+=5;goto B6604e3;
case 0x6604e6:c.instructions+=4;goto B6604e6;
case 0x6604e8:c.instructions+=3;goto B6604e8;
case 0x6604ea:c.instructions+=2;goto B6604ea;
case 0x6604ee:c.instructions+=1;goto B6604ee;
case 0x6604f0:goto L6604f0;
case 0x6604f1:goto L6604f1;
case 0x6604f4:c.instructions+=5;goto B6604f4;
case 0x6604f6:c.instructions+=4;goto B6604f6;
case 0x6604f8:c.instructions+=3;goto B6604f8;
case 0x6604f9:c.instructions+=2;goto B6604f9;
case 0x6604fa:c.instructions+=1;goto B6604fa;
case 0x660500:goto L660500;
case 0x660502:c.instructions+=1;goto B660502;
case 0x660504:goto L660504;
case 0x660506:c.instructions+=1;goto B660506;
case 0x660507:goto L660507;
case 0x66050d:c.instructions+=4;goto B66050d;
case 0x660513:c.instructions+=3;goto B660513;
case 0x660519:c.instructions+=2;goto B660519;
case 0x66051b:c.instructions+=1;goto B66051b;
case 0x66051d:goto L66051d;
case 0x660520:c.instructions+=2;goto B660520;
case 0x660523:c.instructions+=1;goto B660523;
case 0x660525:goto L660525;
case 0x660529:goto L660529;
case 0x66052c:c.instructions+=6;goto B66052c;
case 0x66052f:c.instructions+=5;goto B66052f;
case 0x660531:c.instructions+=4;goto B660531;
case 0x660532:c.instructions+=3;goto B660532;
case 0x660533:c.instructions+=2;goto B660533;
case 0x660534:c.instructions+=1;goto B660534;
case 0x66053a:goto L66053a;
case 0x66053c:c.instructions+=1;goto B66053c;
case 0x66053e:goto L66053e;
case 0x660541:c.instructions+=2;goto B660541;
case 0x660547:c.instructions+=1;goto B660547;
case 0x660549:goto L660549;
case 0x66054c:c.instructions+=4;goto B66054c;
case 0x660550:c.instructions+=3;goto B660550;
case 0x660551:c.instructions+=2;goto B660551;
case 0x660553:c.instructions+=1;goto B660553;
case 0x660555:goto L660555;
case 0x660556:goto L660556;
case 0x660557:c.instructions+=3;goto B660557;
case 0x660558:c.instructions+=2;goto B660558;
case 0x660559:c.instructions+=1;goto B660559;
case 0x66055c:goto L66055c;
case 0x66055e:c.instructions+=13;goto B66055e;
case 0x66055f:c.instructions+=12;goto B66055f;
case 0x660561:c.instructions+=11;goto B660561;
case 0x660564:c.instructions+=10;goto B660564;
case 0x660567:c.instructions+=9;goto B660567;
case 0x660568:c.instructions+=8;goto B660568;
case 0x66056a:c.instructions+=7;goto B66056a;
case 0x660570:c.instructions+=6;goto B660570;
case 0x660573:c.instructions+=5;goto B660573;
case 0x660574:c.instructions+=4;goto B660574;
case 0x660575:c.instructions+=3;goto B660575;
case 0x660578:c.instructions+=2;goto B660578;
case 0x66057a:c.instructions+=1;goto B66057a;
case 0x66057c:goto L66057c;
case 0x66057f:c.instructions+=3;goto B66057f;
case 0x660582:c.instructions+=2;goto B660582;
case 0x660585:c.instructions+=1;goto B660585;
case 0x660587:goto L660587;
case 0x660589:c.instructions+=1;goto B660589;
case 0x66058b:goto L66058b;
case 0x66058d:c.instructions+=1;goto B66058d;
case 0x66058f:goto L66058f;
case 0x660592:c.instructions+=2;goto B660592;
case 0x660594:c.instructions+=1;goto B660594;
case 0x660596:goto L660596;
case 0x660598:c.instructions+=1;goto B660598;
case 0x66059a:goto L66059a;
case 0x66059d:c.instructions+=1;goto B66059d;
case 0x66059f:goto L66059f;
case 0x6605a1:c.instructions+=1;goto B6605a1;
case 0x6605a3:goto L6605a3;
case 0x6605a6:goto L6605a6;
case 0x6605a8:c.instructions+=1;goto B6605a8;
case 0x6605aa:goto L6605aa;
case 0x6605ad:c.instructions+=1;goto B6605ad;
case 0x6605af:goto L6605af;
case 0x6605b2:c.instructions+=2;goto B6605b2;
case 0x6605b4:c.instructions+=1;goto B6605b4;
case 0x6605b6:goto L6605b6;
case 0x6605b8:c.instructions+=2;goto B6605b8;
case 0x6605ba:c.instructions+=1;goto B6605ba;
case 0x6605bc:goto L6605bc;
case 0x6605c3:c.instructions+=1;goto B6605c3;
case 0x6605c5:goto L6605c5;
case 0x6605c8:c.instructions+=1;goto B6605c8;
case 0x6605cd:goto L6605cd;
case 0x6605cf:c.instructions+=1;goto B6605cf;
case 0x6605d1:goto L6605d1;
case 0x6605d4:goto L6605d4;
case 0x6605d6:c.instructions+=1;goto B6605d6;
case 0x6605d8:goto L6605d8;
case 0x6605df:c.instructions+=1;goto B6605df;
case 0x6605e1:goto L6605e1;
case 0x6605e4:c.instructions+=1;goto B6605e4;
case 0x6605e6:goto L6605e6;
case 0x6605e7:goto L6605e7;
case 0x6605e9:goto L6605e9;
case 0x6605ee:goto L6605ee;
case 0x6605ef:c.instructions+=4;goto B6605ef;
case 0x6605f0:c.instructions+=3;goto B6605f0;
case 0x6605f1:c.instructions+=2;goto B6605f1;
case 0x6605f2:c.instructions+=1;goto B6605f2;
case 0x6605f5:goto L6605f5;
case 0x6605f7:c.instructions+=12;goto B6605f7;
case 0x6605f8:c.instructions+=11;goto B6605f8;
case 0x6605fa:c.instructions+=10;goto B6605fa;
case 0x6605fb:c.instructions+=9;goto B6605fb;
case 0x6605fc:c.instructions+=8;goto B6605fc;
case 0x6605ff:c.instructions+=7;goto B6605ff;
case 0x660603:c.instructions+=6;goto B660603;
case 0x660604:c.instructions+=5;goto B660604;
case 0x660606:c.instructions+=4;goto B660606;
case 0x660608:c.instructions+=3;goto B660608;
case 0x66060b:c.instructions+=2;goto B66060b;
case 0x66060f:c.instructions+=1;goto B66060f;
case 0x660611:goto L660611;
case 0x660616:c.instructions+=1;goto B660616;
case 0x66061b:goto L66061b;
case 0x66061e:c.instructions+=1;goto B66061e;
case 0x660620:goto L660620;
case 0x660624:c.instructions+=2;goto B660624;
case 0x660629:c.instructions+=1;goto B660629;
case 0x66062b:goto L66062b;
case 0x66062f:c.instructions+=16;goto B66062f;
case 0x660631:c.instructions+=15;goto B660631;
case 0x660635:c.instructions+=14;goto B660635;
case 0x660638:c.instructions+=13;goto B660638;
case 0x66063b:c.instructions+=12;goto B66063b;
case 0x660641:c.instructions+=11;goto B660641;
case 0x660644:c.instructions+=10;goto B660644;
case 0x660647:c.instructions+=9;goto B660647;
case 0x660648:c.instructions+=8;goto B660648;
case 0x660649:c.instructions+=7;goto B660649;
case 0x66064f:c.instructions+=6;goto B66064f;
case 0x660653:c.instructions+=5;goto B660653;
case 0x660658:c.instructions+=4;goto B660658;
case 0x66065a:c.instructions+=3;goto B66065a;
case 0x66065b:c.instructions+=2;goto B66065b;
case 0x66065d:c.instructions+=1;goto B66065d;
case 0x660662:goto L660662;
case 0x660664:c.instructions+=2;goto B660664;
case 0x660666:c.instructions+=1;goto B660666;
case 0x66066c:goto L66066c;
case 0x660672:c.instructions+=2;goto B660672;
case 0x660675:c.instructions+=1;goto B660675;
case 0x660677:goto L660677;
case 0x66067d:c.instructions+=2;goto B66067d;
case 0x660681:c.instructions+=1;goto B660681;
case 0x660683:goto L660683;
case 0x660685:c.instructions+=3;goto B660685;
case 0x660688:c.instructions+=2;goto B660688;
case 0x66068a:c.instructions+=1;goto B66068a;
case 0x66068f:goto L66068f;
case 0x660691:c.instructions+=1;goto B660691;
case 0x660697:goto L660697;
case 0x66069b:c.instructions+=6;goto B66069b;
case 0x6606a1:c.instructions+=5;goto B6606a1;
case 0x6606a3:c.instructions+=4;goto B6606a3;
case 0x6606a7:c.instructions+=3;goto B6606a7;
case 0x6606aa:c.instructions+=2;goto B6606aa;
case 0x6606b1:c.instructions+=1;goto B6606b1;
case 0x6606b4:goto L6606b4;
case 0x6606ba:c.instructions+=1;goto B6606ba;
case 0x6606bc:goto L6606bc;
case 0x6606c0:c.instructions+=8;goto B6606c0;
case 0x6606c7:c.instructions+=7;goto B6606c7;
case 0x6606cd:c.instructions+=6;goto B6606cd;
case 0x6606d0:c.instructions+=5;goto B6606d0;
case 0x6606d1:c.instructions+=4;goto B6606d1;
case 0x6606d7:c.instructions+=3;goto B6606d7;
case 0x6606d9:c.instructions+=2;goto B6606d9;
case 0x6606da:c.instructions+=1;goto B6606da;
case 0x6606e0:goto L6606e0;
case 0x6606e2:c.instructions+=1;goto B6606e2;
case 0x6606e4:goto L6606e4;
case 0x6606e8:goto L6606e8;
case 0x6606ec:c.instructions+=2;goto B6606ec;
case 0x6606f2:c.instructions+=1;goto B6606f2;
case 0x6606f4:goto L6606f4;
case 0x6606f7:c.instructions+=3;goto B6606f7;
case 0x6606f9:c.instructions+=2;goto B6606f9;
case 0x6606fb:c.instructions+=1;goto B6606fb;
case 0x6606fc:goto L6606fc;
case 0x6606ff:c.instructions+=12;goto B6606ff;
case 0x660705:c.instructions+=11;goto B660705;
case 0x660709:c.instructions+=10;goto B660709;
case 0x66070c:c.instructions+=9;goto B66070c;
case 0x660713:c.instructions+=8;goto B660713;
case 0x660716:c.instructions+=7;goto B660716;
case 0x660717:c.instructions+=6;goto B660717;
case 0x66071d:c.instructions+=5;goto B66071d;
case 0x66071e:c.instructions+=4;goto B66071e;
case 0x660720:c.instructions+=3;goto B660720;
case 0x660721:c.instructions+=2;goto B660721;
case 0x660722:c.instructions+=1;goto B660722;
case 0x660725:goto L660725;
case 0x660729:c.instructions+=6;goto B660729;
case 0x66072c:c.instructions+=5;goto B66072c;
case 0x660732:c.instructions+=4;goto B660732;
case 0x660738:c.instructions+=3;goto B660738;
case 0x66073a:c.instructions+=2;goto B66073a;
case 0x66073c:c.instructions+=1;goto B66073c;
case 0x66073e:goto L66073e;
case 0x660740:c.instructions+=16;goto B660740;
case 0x660741:c.instructions+=15;goto B660741;
case 0x660743:c.instructions+=14;goto B660743;
case 0x660746:c.instructions+=13;goto B660746;
case 0x660747:c.instructions+=12;goto B660747;
case 0x66074a:c.instructions+=11;goto B66074a;
case 0x66074e:c.instructions+=10;goto B66074e;
case 0x660752:c.instructions+=9;goto B660752;
case 0x660756:c.instructions+=8;goto B660756;
case 0x66075a:c.instructions+=7;goto B66075a;
case 0x66075b:c.instructions+=6;goto B66075b;
case 0x66075e:c.instructions+=5;goto B66075e;
case 0x660762:c.instructions+=4;goto B660762;
case 0x660765:c.instructions+=3;goto B660765;
case 0x660768:c.instructions+=2;goto B660768;
case 0x66076b:c.instructions+=1;goto B66076b;
case 0x66076d:goto L66076d;
case 0x660772:c.instructions+=1;goto B660772;
case 0x660777:goto L660777;
case 0x66077b:c.instructions+=1;goto B66077b;
case 0x66077d:goto L66077d;
case 0x66077f:c.instructions+=3;goto B66077f;
case 0x660782:c.instructions+=2;goto B660782;
case 0x660784:c.instructions+=1;goto B660784;
case 0x660789:goto L660789;
case 0x66078b:c.instructions+=1;goto B66078b;
case 0x66078d:goto L66078d;
case 0x660791:c.instructions+=2;goto B660791;
case 0x660795:c.instructions+=1;goto B660795;
case 0x660797:goto L660797;
case 0x66079d:c.instructions+=2;goto B66079d;
case 0x6607a1:c.instructions+=1;goto B6607a1;
case 0x6607a5:goto L6607a5;
case 0x6607a9:c.instructions+=4;goto B6607a9;
case 0x6607b0:c.instructions+=3;goto B6607b0;
case 0x6607b6:c.instructions+=2;goto B6607b6;
case 0x6607b9:c.instructions+=1;goto B6607b9;
case 0x6607bf:goto L6607bf;
case 0x6607c0:c.instructions+=3;goto B6607c0;
case 0x6607c6:c.instructions+=2;goto B6607c6;
case 0x6607c9:c.instructions+=1;goto B6607c9;
case 0x6607cb:goto L6607cb;
case 0x6607cd:c.instructions+=4;goto B6607cd;
case 0x6607ce:c.instructions+=3;goto B6607ce;
case 0x6607d3:c.instructions+=2;goto B6607d3;
case 0x6607d4:c.instructions+=1;goto B6607d4;
case 0x6607da:goto L6607da;
case 0x6607dc:c.instructions+=2;goto B6607dc;
case 0x6607de:c.instructions+=1;goto B6607de;
case 0x6607e4:goto L6607e4;
case 0x6607eb:c.instructions+=1;goto B6607eb;
case 0x6607f1:goto L6607f1;
case 0x6607f8:c.instructions+=1;goto B6607f8;
case 0x6607fa:goto L6607fa;
case 0x6607fd:c.instructions+=3;goto B6607fd;
case 0x6607ff:c.instructions+=2;goto B6607ff;
case 0x660800:c.instructions+=1;goto B660800;
case 0x660806:goto L660806;
case 0x660808:c.instructions+=2;goto B660808;
case 0x66080a:c.instructions+=1;goto B66080a;
case 0x660810:goto L660810;
case 0x660813:c.instructions+=4;goto B660813;
case 0x660815:c.instructions+=3;goto B660815;
case 0x660817:c.instructions+=2;goto B660817;
case 0x660818:c.instructions+=1;goto B660818;
case 0x66081e:goto L66081e;
case 0x660820:c.instructions+=2;goto B660820;
case 0x660822:c.instructions+=1;goto B660822;
case 0x660828:goto L660828;
case 0x66082b:c.instructions+=4;goto B66082b;
case 0x66082d:c.instructions+=3;goto B66082d;
case 0x66082f:c.instructions+=2;goto B66082f;
case 0x660830:c.instructions+=1;goto B660830;
case 0x660836:goto L660836;
case 0x660838:c.instructions+=2;goto B660838;
case 0x66083a:c.instructions+=1;goto B66083a;
case 0x660840:goto L660840;
case 0x660843:c.instructions+=4;goto B660843;
case 0x660845:c.instructions+=3;goto B660845;
case 0x660847:c.instructions+=2;goto B660847;
case 0x660848:c.instructions+=1;goto B660848;
case 0x66084e:goto L66084e;
case 0x660850:c.instructions+=2;goto B660850;
case 0x660852:c.instructions+=1;goto B660852;
case 0x660858:goto L660858;
case 0x66085b:c.instructions+=5;goto B66085b;
case 0x66085d:c.instructions+=4;goto B66085d;
case 0x660863:c.instructions+=3;goto B660863;
case 0x660864:c.instructions+=2;goto B660864;
case 0x660865:c.instructions+=1;goto B660865;
case 0x66086b:goto L66086b;
case 0x66086d:c.instructions+=2;goto B66086d;
case 0x66086f:c.instructions+=1;goto B66086f;
case 0x660875:goto L660875;
case 0x66087b:c.instructions+=3;goto B66087b;
case 0x66087d:c.instructions+=2;goto B66087d;
case 0x66087e:c.instructions+=1;goto B66087e;
case 0x660881:goto L660881;
case 0x660883:c.instructions+=2;goto B660883;
case 0x660885:c.instructions+=1;goto B660885;
case 0x66088b:goto L66088b;
case 0x66088e:c.instructions+=6;goto B66088e;
case 0x660890:c.instructions+=5;goto B660890;
case 0x660892:c.instructions+=4;goto B660892;
case 0x660894:c.instructions+=3;goto B660894;
case 0x660895:c.instructions+=2;goto B660895;
case 0x660898:c.instructions+=1;goto B660898;
case 0x66089e:goto L66089e;
case 0x6608a0:c.instructions+=1;goto B6608a0;
case 0x6608a6:goto L6608a6;
case 0x6608a9:c.instructions+=4;goto B6608a9;
case 0x6608ab:c.instructions+=3;goto B6608ab;
case 0x6608ac:c.instructions+=2;goto B6608ac;
case 0x6608ad:c.instructions+=1;goto B6608ad;
case 0x6608b3:goto L6608b3;
case 0x6608b5:c.instructions+=1;goto B6608b5;
case 0x6608bb:goto L6608bb;
case 0x6608be:c.instructions+=4;goto B6608be;
case 0x6608c0:c.instructions+=3;goto B6608c0;
case 0x6608c1:c.instructions+=2;goto B6608c1;
case 0x6608c2:c.instructions+=1;goto B6608c2;
case 0x6608c8:goto L6608c8;
case 0x6608ca:c.instructions+=1;goto B6608ca;
case 0x6608d0:goto L6608d0;
case 0x6608d2:c.instructions+=4;goto B6608d2;
case 0x6608d3:c.instructions+=3;goto B6608d3;
case 0x6608d4:c.instructions+=2;goto B6608d4;
case 0x6608d5:c.instructions+=1;goto B6608d5;
case 0x6608db:goto L6608db;
case 0x6608dd:c.instructions+=1;goto B6608dd;
case 0x6608e3:goto L6608e3;
case 0x6608e5:c.instructions+=2;goto B6608e5;
case 0x6608ec:c.instructions+=1;goto B6608ec;
case 0x6608f1:goto L6608f1;
case 0x6608f5:c.instructions+=5;goto B6608f5;
case 0x6608fb:c.instructions+=4;goto B6608fb;
case 0x660901:c.instructions+=3;goto B660901;
case 0x660903:c.instructions+=2;goto B660903;
case 0x660907:c.instructions+=1;goto B660907;
case 0x660909:goto L660909;
case 0x66090b:c.instructions+=3;goto B66090b;
case 0x66090c:c.instructions+=2;goto B66090c;
case 0x66090d:c.instructions+=1;goto B66090d;
case 0x660913:goto L660913;
case 0x660915:c.instructions+=1;goto B660915;
case 0x660917:goto L660917;
case 0x66091a:c.instructions+=5;goto B66091a;
case 0x66091c:c.instructions+=4;goto B66091c;
case 0x66091f:c.instructions+=3;goto B66091f;
case 0x660920:c.instructions+=2;goto B660920;
case 0x660921:c.instructions+=1;goto B660921;
case 0x660927:goto L660927;
case 0x660929:c.instructions+=1;goto B660929;
case 0x66092b:goto L66092b;
case 0x66092d:c.instructions+=2;goto B66092d;
case 0x66092e:c.instructions+=1;goto B66092e;
case 0x660934:goto L660934;
case 0x660936:c.instructions+=1;goto B660936;
case 0x660938:goto L660938;
case 0x66093c:c.instructions+=5;goto B66093c;
case 0x660942:c.instructions+=4;goto B660942;
case 0x660948:c.instructions+=3;goto B660948;
case 0x660949:c.instructions+=2;goto B660949;
case 0x66094d:c.instructions+=1;goto B66094d;
case 0x66094f:goto L66094f;
case 0x660951:goto L660951;
case 0x660954:c.instructions+=5;goto B660954;
case 0x660956:c.instructions+=4;goto B660956;
case 0x66095c:c.instructions+=3;goto B66095c;
case 0x66095d:c.instructions+=2;goto B66095d;
case 0x66095e:c.instructions+=1;goto B66095e;
case 0x660964:goto L660964;
case 0x660966:c.instructions+=2;goto B660966;
case 0x660968:c.instructions+=1;goto B660968;
case 0x66096a:goto L66096a;
case 0x66096c:c.instructions+=2;goto B66096c;
case 0x66096d:c.instructions+=1;goto B66096d;
case 0x660970:goto L660970;
case 0x660973:c.instructions+=1;goto B660973;
case 0x660975:goto L660975;
case 0x660978:goto L660978;
case 0x660979:c.instructions+=1;goto B660979;
case 0x66097e:goto L66097e;
case 0x660980:c.instructions+=3;goto B660980;
case 0x660981:c.instructions+=2;goto B660981;
case 0x660988:c.instructions+=1;goto B660988;
case 0x66098e:goto L66098e;
case 0x660990:c.instructions+=1;goto B660990;
case 0x660992:goto L660992;
case 0x660995:c.instructions+=1;goto B660995;
case 0x660997:goto L660997;
case 0x66099a:goto L66099a;
case 0x6609a0:c.instructions+=3;goto B6609a0;
case 0x6609a2:c.instructions+=2;goto B6609a2;
case 0x6609a3:c.instructions+=1;goto B6609a3;
case 0x6609a6:goto L6609a6;
case 0x6609a8:c.instructions+=2;goto B6609a8;
case 0x6609aa:c.instructions+=1;goto B6609aa;
case 0x6609ac:goto L6609ac;
case 0x6609b0:c.instructions+=1;goto B6609b0;
case 0x6609b2:goto L6609b2;
case 0x6609b5:goto L6609b5;
case 0x6609b9:c.instructions+=1;goto B6609b9;
case 0x6609bb:goto L6609bb;
case 0x6609be:goto L6609be;
case 0x6609bf:goto L6609bf;
case 0x6609c2:c.instructions+=5;goto B6609c2;
case 0x6609c7:c.instructions+=4;goto B6609c7;
case 0x6609ca:c.instructions+=3;goto B6609ca;
case 0x6609ce:c.instructions+=2;goto B6609ce;
case 0x6609d2:c.instructions+=1;goto B6609d2;
case 0x6609d4:goto L6609d4;
case 0x6609d6:c.instructions+=15;goto B6609d6;
case 0x6609da:c.instructions+=14;goto B6609da;
case 0x6609dd:c.instructions+=13;goto B6609dd;
case 0x6609e0:c.instructions+=12;goto B6609e0;
case 0x6609e6:c.instructions+=11;goto B6609e6;
case 0x6609e9:c.instructions+=10;goto B6609e9;
case 0x6609ec:c.instructions+=9;goto B6609ec;
case 0x6609ed:c.instructions+=8;goto B6609ed;
case 0x6609ee:c.instructions+=7;goto B6609ee;
case 0x6609f4:c.instructions+=6;goto B6609f4;
case 0x6609f8:c.instructions+=5;goto B6609f8;
case 0x6609fd:c.instructions+=4;goto B6609fd;
case 0x6609ff:c.instructions+=3;goto B6609ff;
case 0x660a00:c.instructions+=2;goto B660a00;
case 0x660a02:c.instructions+=1;goto B660a02;
case 0x660a07:goto L660a07;
case 0x660a09:c.instructions+=1;goto B660a09;
case 0x660a0b:goto L660a0b;
case 0x660a0d:c.instructions+=1;goto B660a0d;
case 0x660a0f:goto L660a0f;
case 0x660a14:goto L660a14;
case 0x660a1a:goto L660a1a;
case 0x660a1d:c.instructions+=11;goto B660a1d;
case 0x660a23:c.instructions+=10;goto B660a23;
case 0x660a26:c.instructions+=9;goto B660a26;
case 0x660a2a:c.instructions+=8;goto B660a2a;
case 0x660a31:c.instructions+=7;goto B660a31;
case 0x660a34:c.instructions+=6;goto B660a34;
case 0x660a3a:c.instructions+=5;goto B660a3a;
case 0x660a3c:c.instructions+=4;goto B660a3c;
case 0x660a3d:c.instructions+=3;goto B660a3d;
case 0x660a3e:c.instructions+=2;goto B660a3e;
case 0x660a3f:c.instructions+=1;goto B660a3f;
case 0x660a42:goto L660a42;
case 0x660a44:c.instructions+=16;goto B660a44;
case 0x660a45:c.instructions+=15;goto B660a45;
case 0x660a47:c.instructions+=14;goto B660a47;
case 0x660a4a:c.instructions+=13;goto B660a4a;
case 0x660a4b:c.instructions+=12;goto B660a4b;
case 0x660a4c:c.instructions+=11;goto B660a4c;
case 0x660a4f:c.instructions+=10;goto B660a4f;
case 0x660a50:c.instructions+=9;goto B660a50;
case 0x660a53:c.instructions+=8;goto B660a53;
case 0x660a56:c.instructions+=7;goto B660a56;
case 0x660a59:c.instructions+=6;goto B660a59;
case 0x660a5c:c.instructions+=5;goto B660a5c;
case 0x660a5f:c.instructions+=4;goto B660a5f;
case 0x660a62:c.instructions+=3;goto B660a62;
case 0x660a64:c.instructions+=2;goto B660a64;
case 0x660a65:c.instructions+=1;goto B660a65;
case 0x660a68:goto L660a68;
case 0x660a6b:c.instructions+=14;goto B660a6b;
case 0x660a6d:c.instructions+=13;goto B660a6d;
case 0x660a71:c.instructions+=12;goto B660a71;
case 0x660a74:c.instructions+=11;goto B660a74;
case 0x660a76:c.instructions+=10;goto B660a76;
case 0x660a79:c.instructions+=9;goto B660a79;
case 0x660a7c:c.instructions+=8;goto B660a7c;
case 0x660a7f:c.instructions+=7;goto B660a7f;
case 0x660a82:c.instructions+=6;goto B660a82;
case 0x660a85:c.instructions+=5;goto B660a85;
case 0x660a88:c.instructions+=4;goto B660a88;
case 0x660a8a:c.instructions+=3;goto B660a8a;
case 0x660a8d:c.instructions+=2;goto B660a8d;
case 0x660a90:c.instructions+=1;goto B660a90;
case 0x660a92:goto L660a92;
case 0x660a99:goto L660a99;
case 0x660a9b:c.instructions+=1;goto B660a9b;
case 0x660aa1:goto L660aa1;
case 0x660aa4:c.instructions+=1;goto B660aa4;
case 0x660aa6:goto L660aa6;
case 0x660aa9:c.instructions+=1;goto B660aa9;
case 0x660aaf:goto L660aaf;
case 0x660ab3:c.instructions+=4;goto B660ab3;
case 0x660ab7:c.instructions+=3;goto B660ab7;
case 0x660aba:c.instructions+=2;goto B660aba;
case 0x660abd:c.instructions+=1;goto B660abd;
case 0x660ac3:goto L660ac3;
case 0x660ac5:c.instructions+=1;goto B660ac5;
case 0x660acb:goto L660acb;
case 0x660acf:c.instructions+=3;goto B660acf;
case 0x660ad1:c.instructions+=2;goto B660ad1;
case 0x660ad4:c.instructions+=1;goto B660ad4;
case 0x660ad6:goto L660ad6;
case 0x660ad8:c.instructions+=1;goto B660ad8;
case 0x660ada:goto L660ada;
case 0x660add:c.instructions+=8;goto B660add;
case 0x660ade:c.instructions+=7;goto B660ade;
case 0x660ae1:c.instructions+=6;goto B660ae1;
case 0x660ae2:c.instructions+=5;goto B660ae2;
case 0x660ae5:c.instructions+=4;goto B660ae5;
case 0x660ae6:c.instructions+=3;goto B660ae6;
case 0x660ae9:c.instructions+=2;goto B660ae9;
case 0x660aea:c.instructions+=1;goto B660aea;
case 0x660aef:goto L660aef;
case 0x660af1:c.instructions+=2;goto B660af1;
case 0x660af4:c.instructions+=1;goto B660af4;
case 0x660afa:goto L660afa;
case 0x660afd:c.instructions+=3;goto B660afd;
case 0x660b00:c.instructions+=2;goto B660b00;
case 0x660b03:c.instructions+=1;goto B660b03;
case 0x660b05:goto L660b05;
case 0x660b08:c.instructions+=3;goto B660b08;
case 0x660b0b:c.instructions+=2;goto B660b0b;
case 0x660b0e:c.instructions+=1;goto B660b0e;
case 0x660b10:goto L660b10;
case 0x660b15:goto L660b15;
case 0x660b18:c.instructions+=16;goto B660b18;
case 0x660b1b:c.instructions+=15;goto B660b1b;
case 0x660b1d:c.instructions+=14;goto B660b1d;
case 0x660b1f:c.instructions+=13;goto B660b1f;
case 0x660b22:c.instructions+=12;goto B660b22;
case 0x660b24:c.instructions+=11;goto B660b24;
case 0x660b27:c.instructions+=10;goto B660b27;
case 0x660b29:c.instructions+=9;goto B660b29;
case 0x660b2c:c.instructions+=8;goto B660b2c;
case 0x660b2e:c.instructions+=7;goto B660b2e;
case 0x660b30:c.instructions+=6;goto B660b30;
case 0x660b31:c.instructions+=5;goto B660b31;
case 0x660b34:c.instructions+=4;goto B660b34;
case 0x660b37:c.instructions+=3;goto B660b37;
case 0x660b3a:c.instructions+=2;goto B660b3a;
case 0x660b3d:c.instructions+=1;goto B660b3d;
case 0x660b43:goto L660b43;
case 0x660b44:c.instructions+=1;goto B660b44;
case 0x660b4a:goto L660b4a;
case 0x660b4b:c.instructions+=1;goto B660b4b;
case 0x660b51:goto L660b51;
case 0x660b55:c.instructions+=2;goto B660b55;
case 0x660b59:c.instructions+=1;goto B660b59;
case 0x660b5f:goto L660b5f;
case 0x660b61:c.instructions+=1;goto B660b61;
case 0x660b67:goto L660b67;
case 0x660b69:c.instructions+=2;goto B660b69;
case 0x660b6b:c.instructions+=1;goto B660b6b;
case 0x660b6d:goto L660b6d;
case 0x660b6f:c.instructions+=1;goto B660b6f;
case 0x660b71:goto L660b71;
case 0x660b74:c.instructions+=1;goto B660b74;
case 0x660b76:goto L660b76;
case 0x660b78:c.instructions+=3;goto B660b78;
case 0x660b7b:c.instructions+=2;goto B660b7b;
case 0x660b7e:c.instructions+=1;goto B660b7e;
case 0x660b81:goto L660b81;
case 0x660b85:c.instructions+=1;goto B660b85;
case 0x660b87:goto L660b87;
case 0x660b8a:c.instructions+=4;goto B660b8a;
case 0x660b8c:c.instructions+=3;goto B660b8c;
case 0x660b8e:c.instructions+=2;goto B660b8e;
case 0x660b91:c.instructions+=1;goto B660b91;
case 0x660b94:goto L660b94;
case 0x660b97:c.instructions+=11;goto B660b97;
case 0x660b9a:c.instructions+=10;goto B660b9a;
case 0x660b9d:c.instructions+=9;goto B660b9d;
case 0x660b9f:c.instructions+=8;goto B660b9f;
case 0x660ba2:c.instructions+=7;goto B660ba2;
case 0x660ba4:c.instructions+=6;goto B660ba4;
case 0x660ba6:c.instructions+=5;goto B660ba6;
case 0x660ba9:c.instructions+=4;goto B660ba9;
case 0x660bab:c.instructions+=3;goto B660bab;
case 0x660bac:c.instructions+=2;goto B660bac;
case 0x660baf:c.instructions+=1;goto B660baf;
case 0x660bb1:goto L660bb1;
case 0x660bb4:goto L660bb4;
case 0x660bb7:c.instructions+=4;goto B660bb7;
case 0x660bb8:c.instructions+=3;goto B660bb8;
case 0x660bba:c.instructions+=2;goto B660bba;
case 0x660bbd:c.instructions+=1;goto B660bbd;
case 0x660bbf:goto L660bbf;
case 0x660bc3:c.instructions+=11;goto B660bc3;
case 0x660bc6:c.instructions+=10;goto B660bc6;
case 0x660bc9:c.instructions+=9;goto B660bc9;
case 0x660bcb:c.instructions+=8;goto B660bcb;
case 0x660bcf:c.instructions+=7;goto B660bcf;
case 0x660bd2:c.instructions+=6;goto B660bd2;
case 0x660bd5:c.instructions+=5;goto B660bd5;
case 0x660bd8:c.instructions+=4;goto B660bd8;
case 0x660bdb:c.instructions+=3;goto B660bdb;
case 0x660bde:c.instructions+=2;goto B660bde;
case 0x660be1:c.instructions+=1;goto B660be1;
case 0x660be7:goto L660be7;
case 0x660bec:goto L660bec;
case 0x660bf0:c.instructions+=2;goto B660bf0;
case 0x660bf4:c.instructions+=1;goto B660bf4;
case 0x660bfa:goto L660bfa;
case 0x660bfc:c.instructions+=1;goto B660bfc;
case 0x660c02:goto L660c02;
case 0x660c04:c.instructions+=2;goto B660c04;
case 0x660c06:c.instructions+=1;goto B660c06;
case 0x660c08:goto L660c08;
case 0x660c0a:c.instructions+=1;goto B660c0a;
case 0x660c0c:goto L660c0c;
case 0x660c0f:c.instructions+=1;goto B660c0f;
case 0x660c11:goto L660c11;
case 0x660c13:c.instructions+=3;goto B660c13;
case 0x660c16:c.instructions+=2;goto B660c16;
case 0x660c19:c.instructions+=1;goto B660c19;
case 0x660c1c:goto L660c1c;
case 0x660c1f:c.instructions+=2;goto B660c1f;
case 0x660c21:c.instructions+=1;goto B660c21;
case 0x660c23:goto L660c23;
case 0x660c25:c.instructions+=5;goto B660c25;
case 0x660c28:c.instructions+=4;goto B660c28;
case 0x660c2a:c.instructions+=3;goto B660c2a;
case 0x660c2d:c.instructions+=2;goto B660c2d;
case 0x660c30:c.instructions+=1;goto B660c30;
case 0x660c33:goto L660c33;
case 0x660c36:c.instructions+=1;goto B660c36;
case 0x660c3b:goto L660c3b;
case 0x660c3e:c.instructions+=11;goto B660c3e;
case 0x660c41:c.instructions+=10;goto B660c41;
case 0x660c44:c.instructions+=9;goto B660c44;
case 0x660c47:c.instructions+=8;goto B660c47;
case 0x660c49:c.instructions+=7;goto B660c49;
case 0x660c4c:c.instructions+=6;goto B660c4c;
case 0x660c4e:c.instructions+=5;goto B660c4e;
case 0x660c50:c.instructions+=4;goto B660c50;
case 0x660c53:c.instructions+=3;goto B660c53;
case 0x660c56:c.instructions+=2;goto B660c56;
case 0x660c59:c.instructions+=1;goto B660c59;
case 0x660c5b:goto L660c5b;
case 0x660c5e:goto L660c5e;
case 0x660c61:c.instructions+=4;goto B660c61;
case 0x660c62:c.instructions+=3;goto B660c62;
case 0x660c64:c.instructions+=2;goto B660c64;
case 0x660c67:c.instructions+=1;goto B660c67;
case 0x660c69:goto L660c69;
case 0x660c6d:c.instructions+=11;goto B660c6d;
case 0x660c70:c.instructions+=10;goto B660c70;
case 0x660c72:c.instructions+=9;goto B660c72;
case 0x660c76:c.instructions+=8;goto B660c76;
case 0x660c79:c.instructions+=7;goto B660c79;
case 0x660c7c:c.instructions+=6;goto B660c7c;
case 0x660c7f:c.instructions+=5;goto B660c7f;
case 0x660c82:c.instructions+=4;goto B660c82;
case 0x660c85:c.instructions+=3;goto B660c85;
case 0x660c88:c.instructions+=2;goto B660c88;
case 0x660c8b:c.instructions+=1;goto B660c8b;
case 0x660c91:goto L660c91;
case 0x660c96:goto L660c96;
case 0x660c9a:c.instructions+=2;goto B660c9a;
case 0x660c9e:c.instructions+=1;goto B660c9e;
case 0x660ca4:goto L660ca4;
case 0x660ca6:c.instructions+=1;goto B660ca6;
case 0x660cac:goto L660cac;
case 0x660cae:c.instructions+=2;goto B660cae;
case 0x660cb0:c.instructions+=1;goto B660cb0;
case 0x660cb2:goto L660cb2;
case 0x660cb4:c.instructions+=1;goto B660cb4;
case 0x660cb6:goto L660cb6;
case 0x660cb9:c.instructions+=1;goto B660cb9;
case 0x660cbb:goto L660cbb;
case 0x660cbd:c.instructions+=3;goto B660cbd;
case 0x660cc0:c.instructions+=2;goto B660cc0;
case 0x660cc3:c.instructions+=1;goto B660cc3;
case 0x660cc6:goto L660cc6;
case 0x660cc9:c.instructions+=2;goto B660cc9;
case 0x660ccb:c.instructions+=1;goto B660ccb;
case 0x660ccd:goto L660ccd;
case 0x660ccf:c.instructions+=5;goto B660ccf;
case 0x660cd2:c.instructions+=4;goto B660cd2;
case 0x660cd4:c.instructions+=3;goto B660cd4;
case 0x660cd7:c.instructions+=2;goto B660cd7;
case 0x660cda:c.instructions+=1;goto B660cda;
case 0x660cdd:goto L660cdd;
case 0x660ce0:c.instructions+=1;goto B660ce0;
case 0x660ce5:goto L660ce5;
case 0x660ce8:c.instructions+=11;goto B660ce8;
case 0x660ceb:c.instructions+=10;goto B660ceb;
case 0x660cee:c.instructions+=9;goto B660cee;
case 0x660cf1:c.instructions+=8;goto B660cf1;
case 0x660cf3:c.instructions+=7;goto B660cf3;
case 0x660cf6:c.instructions+=6;goto B660cf6;
case 0x660cf8:c.instructions+=5;goto B660cf8;
case 0x660cfa:c.instructions+=4;goto B660cfa;
case 0x660cfd:c.instructions+=3;goto B660cfd;
case 0x660d00:c.instructions+=2;goto B660d00;
case 0x660d03:c.instructions+=1;goto B660d03;
case 0x660d05:goto L660d05;
case 0x660d08:goto L660d08;
case 0x660d0b:c.instructions+=4;goto B660d0b;
case 0x660d0c:c.instructions+=3;goto B660d0c;
case 0x660d0e:c.instructions+=2;goto B660d0e;
case 0x660d11:c.instructions+=1;goto B660d11;
case 0x660d13:goto L660d13;
case 0x660d17:c.instructions+=11;goto B660d17;
case 0x660d1a:c.instructions+=10;goto B660d1a;
case 0x660d1c:c.instructions+=9;goto B660d1c;
case 0x660d20:c.instructions+=8;goto B660d20;
case 0x660d23:c.instructions+=7;goto B660d23;
case 0x660d26:c.instructions+=6;goto B660d26;
case 0x660d29:c.instructions+=5;goto B660d29;
case 0x660d2c:c.instructions+=4;goto B660d2c;
case 0x660d2f:c.instructions+=3;goto B660d2f;
case 0x660d32:c.instructions+=2;goto B660d32;
case 0x660d35:c.instructions+=1;goto B660d35;
case 0x660d3b:goto L660d3b;
case 0x660d3d:goto L660d3d;
case 0x660d44:goto L660d44;
case 0x660d47:c.instructions+=5;goto B660d47;
case 0x660d48:c.instructions+=4;goto B660d48;
case 0x660d49:c.instructions+=3;goto B660d49;
case 0x660d4a:c.instructions+=2;goto B660d4a;
case 0x660d4b:c.instructions+=1;goto B660d4b;
case 0x660d4e:goto L660d4e;
case 0x660d50:c.instructions+=16;goto B660d50;
case 0x660d51:c.instructions+=15;goto B660d51;
case 0x660d53:c.instructions+=14;goto B660d53;
case 0x660d56:c.instructions+=13;goto B660d56;
case 0x660d57:c.instructions+=12;goto B660d57;
case 0x660d5a:c.instructions+=11;goto B660d5a;
case 0x660d5b:c.instructions+=10;goto B660d5b;
case 0x660d5e:c.instructions+=9;goto B660d5e;
case 0x660d61:c.instructions+=8;goto B660d61;
case 0x660d64:c.instructions+=7;goto B660d64;
case 0x660d67:c.instructions+=6;goto B660d67;
case 0x660d69:c.instructions+=5;goto B660d69;
case 0x660d6c:c.instructions+=4;goto B660d6c;
case 0x660d6d:c.instructions+=3;goto B660d6d;
case 0x660d71:c.instructions+=2;goto B660d71;
case 0x660d74:c.instructions+=1;goto B660d74;
case 0x660d7a:goto L660d7a;
case 0x660d7d:c.instructions+=1;goto B660d7d;
case 0x660d83:goto L660d83;
case 0x660d86:c.instructions+=15;goto B660d86;
case 0x660d8a:c.instructions+=14;goto B660d8a;
case 0x660d8d:c.instructions+=13;goto B660d8d;
case 0x660d8e:c.instructions+=12;goto B660d8e;
case 0x660d91:c.instructions+=11;goto B660d91;
case 0x660d92:c.instructions+=10;goto B660d92;
case 0x660d96:c.instructions+=9;goto B660d96;
case 0x660d9a:c.instructions+=8;goto B660d9a;
case 0x660d9d:c.instructions+=7;goto B660d9d;
case 0x660d9e:c.instructions+=6;goto B660d9e;
case 0x660da1:c.instructions+=5;goto B660da1;
case 0x660da2:c.instructions+=4;goto B660da2;
case 0x660da5:c.instructions+=3;goto B660da5;
case 0x660da6:c.instructions+=2;goto B660da6;
case 0x660dac:c.instructions+=1;goto B660dac;
case 0x660db1:goto L660db1;
case 0x660db3:c.instructions+=2;goto B660db3;
case 0x660db6:c.instructions+=1;goto B660db6;
case 0x660dbc:goto L660dbc;
case 0x660dbf:c.instructions+=2;goto B660dbf;
case 0x660dc1:c.instructions+=1;goto B660dc1;
case 0x660dc7:goto L660dc7;
case 0x660dca:c.instructions+=5;goto B660dca;
case 0x660dcd:c.instructions+=4;goto B660dcd;
case 0x660dd0:c.instructions+=3;goto B660dd0;
case 0x660dd3:c.instructions+=2;goto B660dd3;
case 0x660dd4:c.instructions+=1;goto B660dd4;
case 0x660dd9:goto L660dd9;
case 0x660ddb:c.instructions+=2;goto B660ddb;
case 0x660ddc:c.instructions+=1;goto B660ddc;
case 0x660dde:goto L660dde;
case 0x660de1:c.instructions+=8;goto B660de1;
case 0x660de6:c.instructions+=7;goto B660de6;
case 0x660de7:c.instructions+=6;goto B660de7;
case 0x660de9:c.instructions+=5;goto B660de9;
case 0x660dec:c.instructions+=4;goto B660dec;
case 0x660dee:c.instructions+=3;goto B660dee;
case 0x660def:c.instructions+=2;goto B660def;
case 0x660df2:c.instructions+=1;goto B660df2;
case 0x660df7:goto L660df7;
case 0x660dfa:c.instructions+=1;goto B660dfa;
case 0x660dfc:goto L660dfc;
case 0x660dfe:goto L660dfe;
case 0x660e00:c.instructions+=2;goto B660e00;
case 0x660e03:c.instructions+=1;goto B660e03;
case 0x660e05:goto L660e05;
case 0x660e0c:c.instructions+=1;goto B660e0c;
case 0x660e11:goto L660e11;
case 0x660e14:c.instructions+=8;goto B660e14;
case 0x660e18:c.instructions+=7;goto B660e18;
case 0x660e1c:c.instructions+=6;goto B660e1c;
case 0x660e20:c.instructions+=5;goto B660e20;
case 0x660e23:c.instructions+=4;goto B660e23;
case 0x660e25:c.instructions+=3;goto B660e25;
case 0x660e29:c.instructions+=2;goto B660e29;
case 0x660e2c:c.instructions+=1;goto B660e2c;
case 0x660e2e:goto L660e2e;
case 0x660e30:goto L660e30;
case 0x660e33:goto L660e33;
case 0x660e35:c.instructions+=5;goto B660e35;
case 0x660e38:c.instructions+=4;goto B660e38;
case 0x660e3b:c.instructions+=3;goto B660e3b;
case 0x660e3d:c.instructions+=2;goto B660e3d;
case 0x660e3e:c.instructions+=1;goto B660e3e;
case 0x660e43:goto L660e43;
case 0x660e45:c.instructions+=1;goto B660e45;
case 0x660e4b:goto L660e4b;
case 0x660e4e:c.instructions+=11;goto B660e4e;
case 0x660e50:c.instructions+=10;goto B660e50;
case 0x660e54:c.instructions+=9;goto B660e54;
case 0x660e57:c.instructions+=8;goto B660e57;
case 0x660e58:c.instructions+=7;goto B660e58;
case 0x660e59:c.instructions+=6;goto B660e59;
case 0x660e5c:c.instructions+=5;goto B660e5c;
case 0x660e5d:c.instructions+=4;goto B660e5d;
case 0x660e60:c.instructions+=3;goto B660e60;
case 0x660e64:c.instructions+=2;goto B660e64;
case 0x660e67:c.instructions+=1;goto B660e67;
case 0x660e6c:goto L660e6c;
case 0x660e6e:c.instructions+=2;goto B660e6e;
case 0x660e71:c.instructions+=1;goto B660e71;
case 0x660e77:goto L660e77;
case 0x660e7a:c.instructions+=5;goto B660e7a;
case 0x660e7d:c.instructions+=4;goto B660e7d;
case 0x660e80:c.instructions+=3;goto B660e80;
case 0x660e84:c.instructions+=2;goto B660e84;
case 0x660e87:c.instructions+=1;goto B660e87;
case 0x660e89:goto L660e89;
case 0x660e8d:c.instructions+=7;goto B660e8d;
case 0x660e91:c.instructions+=6;goto B660e91;
case 0x660e95:c.instructions+=5;goto B660e95;
case 0x660e98:c.instructions+=4;goto B660e98;
case 0x660e9b:c.instructions+=3;goto B660e9b;
case 0x660e9d:c.instructions+=2;goto B660e9d;
case 0x660ea0:c.instructions+=1;goto B660ea0;
case 0x660ea2:goto L660ea2;
case 0x660ea3:c.instructions+=1;goto B660ea3;
case 0x660ea6:goto L660ea6;
case 0x660ea9:c.instructions+=53;goto B660ea9;
case 0x660eab:c.instructions+=52;goto B660eab;
case 0x660ead:c.instructions+=51;goto B660ead;
case 0x660eaf:c.instructions+=50;goto B660eaf;
case 0x660eb1:c.instructions+=49;goto B660eb1;
case 0x660eb4:c.instructions+=48;goto B660eb4;
case 0x660eb6:c.instructions+=47;goto B660eb6;
case 0x660eb8:c.instructions+=46;goto B660eb8;
case 0x660ebb:c.instructions+=45;goto B660ebb;
case 0x660ebd:c.instructions+=44;goto B660ebd;
case 0x660ebf:c.instructions+=43;goto B660ebf;
case 0x660ec2:c.instructions+=42;goto B660ec2;
case 0x660ec4:c.instructions+=41;goto B660ec4;
case 0x660ec6:c.instructions+=40;goto B660ec6;
case 0x660ec9:c.instructions+=39;goto B660ec9;
case 0x660ecb:c.instructions+=38;goto B660ecb;
case 0x660ece:c.instructions+=37;goto B660ece;
case 0x660ed1:c.instructions+=36;goto B660ed1;
case 0x660ed4:c.instructions+=35;goto B660ed4;
case 0x660ed8:c.instructions+=34;goto B660ed8;
case 0x660edb:c.instructions+=33;goto B660edb;
case 0x660edf:c.instructions+=32;goto B660edf;
case 0x660ee2:c.instructions+=31;goto B660ee2;
case 0x660ee4:c.instructions+=30;goto B660ee4;
case 0x660ee7:c.instructions+=29;goto B660ee7;
case 0x660eeb:c.instructions+=28;goto B660eeb;
case 0x660eee:c.instructions+=27;goto B660eee;
case 0x660ef1:c.instructions+=26;goto B660ef1;
case 0x660ef4:c.instructions+=25;goto B660ef4;
case 0x660ef7:c.instructions+=24;goto B660ef7;
case 0x660efa:c.instructions+=23;goto B660efa;
case 0x660efd:c.instructions+=22;goto B660efd;
case 0x660f00:c.instructions+=21;goto B660f00;
case 0x660f02:c.instructions+=20;goto B660f02;
case 0x660f04:c.instructions+=19;goto B660f04;
case 0x660f07:c.instructions+=18;goto B660f07;
case 0x660f0a:c.instructions+=17;goto B660f0a;
case 0x660f0d:c.instructions+=16;goto B660f0d;
case 0x660f10:c.instructions+=15;goto B660f10;
case 0x660f13:c.instructions+=14;goto B660f13;
case 0x660f16:c.instructions+=13;goto B660f16;
case 0x660f1a:c.instructions+=12;goto B660f1a;
case 0x660f1d:c.instructions+=11;goto B660f1d;
case 0x660f1f:c.instructions+=10;goto B660f1f;
case 0x660f22:c.instructions+=9;goto B660f22;
case 0x660f25:c.instructions+=8;goto B660f25;
case 0x660f28:c.instructions+=7;goto B660f28;
case 0x660f2b:c.instructions+=6;goto B660f2b;
case 0x660f2e:c.instructions+=5;goto B660f2e;
case 0x660f31:c.instructions+=4;goto B660f31;
case 0x660f34:c.instructions+=3;goto B660f34;
case 0x660f37:c.instructions+=2;goto B660f37;
case 0x660f3a:c.instructions+=1;goto B660f3a;
case 0x660f3c:goto L660f3c;
case 0x660f3f:goto L660f3f;
case 0x660f42:c.instructions+=1;goto B660f42;
case 0x660f44:goto L660f44;
case 0x660f4b:goto L660f4b;
case 0x660f4e:c.instructions+=5;goto B660f4e;
case 0x660f4f:c.instructions+=4;goto B660f4f;
case 0x660f50:c.instructions+=3;goto B660f50;
case 0x660f51:c.instructions+=2;goto B660f51;
case 0x660f52:c.instructions+=1;goto B660f52;
case 0x660f55:goto L660f55;
case 0x660f57:c.instructions+=6;goto B660f57;
case 0x660f58:c.instructions+=5;goto B660f58;
case 0x660f5a:c.instructions+=4;goto B660f5a;
case 0x660f5e:c.instructions+=3;goto B660f5e;
case 0x660f5f:c.instructions+=2;goto B660f5f;
case 0x660f61:c.instructions+=1;goto B660f61;
case 0x660f63:goto L660f63;
case 0x660f64:c.instructions+=6;goto B660f64;
case 0x660f69:c.instructions+=5;goto B660f69;
case 0x660f6c:c.instructions+=4;goto B660f6c;
case 0x660f6e:c.instructions+=3;goto B660f6e;
case 0x660f70:c.instructions+=2;goto B660f70;
case 0x660f71:c.instructions+=1;goto B660f71;
case 0x660f76:goto L660f76;
case 0x660f7a:c.instructions+=1;goto B660f7a;
case 0x660f7c:goto L660f7c;
case 0x660f7d:c.instructions+=1;goto B660f7d;
case 0x660f82:goto L660f82;
case 0x660f83:goto L660f83;
case 0x660f85:c.instructions+=2;goto B660f85;
case 0x660f86:c.instructions+=1;goto B660f86;
case 0x660f88:goto L660f88;
case 0x660f8c:c.instructions+=1;goto B660f8c;
case 0x660f8e:goto L660f8e;
case 0x660f8f:c.instructions+=1;goto B660f8f;
case 0x660f94:goto L660f94;
case 0x660f95:goto L660f95;
case 0x660f97:goto L660f97;
case 0x660f98:c.instructions+=2;goto B660f98;
case 0x660f99:c.instructions+=1;goto B660f99;
case 0x660f9c:goto L660f9c;
case 0x660f9e:c.instructions+=16;goto B660f9e;
case 0x660f9f:c.instructions+=15;goto B660f9f;
case 0x660fa1:c.instructions+=14;goto B660fa1;
case 0x660fa4:c.instructions+=13;goto B660fa4;
case 0x660fa5:c.instructions+=12;goto B660fa5;
case 0x660fa8:c.instructions+=11;goto B660fa8;
case 0x660fa9:c.instructions+=10;goto B660fa9;
case 0x660fac:c.instructions+=9;goto B660fac;
case 0x660faf:c.instructions+=8;goto B660faf;
case 0x660fb2:c.instructions+=7;goto B660fb2;
case 0x660fb5:c.instructions+=6;goto B660fb5;
case 0x660fb7:c.instructions+=5;goto B660fb7;
case 0x660fba:c.instructions+=4;goto B660fba;
case 0x660fbb:c.instructions+=3;goto B660fbb;
case 0x660fbf:c.instructions+=2;goto B660fbf;
case 0x660fc2:c.instructions+=1;goto B660fc2;
case 0x660fc8:goto L660fc8;
case 0x660fcb:c.instructions+=1;goto B660fcb;
case 0x660fd1:goto L660fd1;
case 0x660fd4:c.instructions+=15;goto B660fd4;
case 0x660fd8:c.instructions+=14;goto B660fd8;
case 0x660fdb:c.instructions+=13;goto B660fdb;
case 0x660fdc:c.instructions+=12;goto B660fdc;
case 0x660fdf:c.instructions+=11;goto B660fdf;
case 0x660fe0:c.instructions+=10;goto B660fe0;
case 0x660fe4:c.instructions+=9;goto B660fe4;
case 0x660fe8:c.instructions+=8;goto B660fe8;
case 0x660feb:c.instructions+=7;goto B660feb;
case 0x660fec:c.instructions+=6;goto B660fec;
case 0x660fef:c.instructions+=5;goto B660fef;
case 0x660ff0:c.instructions+=4;goto B660ff0;
case 0x660ff3:c.instructions+=3;goto B660ff3;
case 0x660ff4:c.instructions+=2;goto B660ff4;
case 0x660ffa:c.instructions+=1;goto B660ffa;
case 0x660fff:goto L660fff;
default:missing_instruction(c.pc);}
B660001:L660001:{c.instructions+=1;NFSU2_TR(0x660001);
if(r1(R+518)){{goto L660012;}}
}
B660003:L660003:{c.instructions+=7;NFSU2_TR(0x660003);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B660006:{NFSU2_TR(0x660006);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B660008:{NFSU2_TR(0x660008);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B66000b:{NFSU2_TR(0x66000b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B66000c:{NFSU2_TR(0x66000c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66000d:{NFSU2_TR(0x66000d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B660010:{NFSU2_TR(0x660010);
if(r1(R+512)){TAIL_STATIC(0x65ffffu,65f);}
}
B660012:L660012:{c.instructions+=4;NFSU2_TR(0x660012);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B660015:{NFSU2_TR(0x660015);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B660016:{NFSU2_TR(0x660016);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B660019:{NFSU2_TR(0x660019);
if(r1(R+512)){TAIL_STATIC(0x65fff4u,65f);}
}
B66001b:L66001b:{c.instructions+=2;NFSU2_TR(0x66001b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66001d:{NFSU2_TR(0x66001d);
{goto L6601ee;}
}
B660022:L660022:{c.instructions+=9;NFSU2_TR(0x660022);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660025:{NFSU2_TR(0x660025);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B660027:{NFSU2_TR(0x660027);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66002a:{NFSU2_TR(0x66002a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66002d:{NFSU2_TR(0x66002d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660031:{NFSU2_TR(0x660031);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B660035:{NFSU2_TR(0x660035);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B660037:{NFSU2_TR(0x660037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B660039:{NFSU2_TR(0x660039);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6600b2;}}
}
B66003b:L66003b:{c.instructions+=2;NFSU2_TR(0x66003b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66003d:{NFSU2_TR(0x66003d);
if(r1(R+518)){{goto L6600b2;}}
}
B66003f:L66003f:{c.instructions+=3;NFSU2_TR(0x66003f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B660041:{NFSU2_TR(0x660041);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B660044:{NFSU2_TR(0x660044);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66005b;}}
}
B660046:L660046:{c.instructions+=2;NFSU2_TR(0x660046);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660048:{NFSU2_TR(0x660048);
if(r1(R+518)){{goto L66005b;}}
}
B66004a:L66004a:{c.instructions+=8;NFSU2_TR(0x66004a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B66004c:{NFSU2_TR(0x66004c);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+12));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66004f:{NFSU2_TR(0x66004f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B660051:{NFSU2_TR(0x660051);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B660054:{NFSU2_TR(0x660054);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B660055:{NFSU2_TR(0x660055);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B660056:{NFSU2_TR(0x660056);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B660059:{NFSU2_TR(0x660059);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660046u);}goto L660046;}}
}
B66005b:L66005b:{c.instructions+=5;NFSU2_TR(0x66005b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B66005e:{NFSU2_TR(0x66005e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660061:{NFSU2_TR(0x660061);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B660064:{NFSU2_TR(0x660064);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B660067:{NFSU2_TR(0x660067);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66003bu);}goto L66003b;}}
}
B660069:L660069:{c.instructions+=1;NFSU2_TR(0x660069);
{goto L6600b2;}
}
B66006b:L66006b:{c.instructions+=9;NFSU2_TR(0x66006b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66006e:{NFSU2_TR(0x66006e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B660070:{NFSU2_TR(0x660070);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660073:{NFSU2_TR(0x660073);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660076:{NFSU2_TR(0x660076);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66007a:{NFSU2_TR(0x66007a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66007e:{NFSU2_TR(0x66007e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B660080:{NFSU2_TR(0x660080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B660082:{NFSU2_TR(0x660082);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6600b2;}}
}
B660084:L660084:{c.instructions+=2;NFSU2_TR(0x660084);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660086:{NFSU2_TR(0x660086);
if(r1(R+518)){{goto L6600b2;}}
}
B660088:L660088:{c.instructions+=3;NFSU2_TR(0x660088);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66008a:{NFSU2_TR(0x66008a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66008d:{NFSU2_TR(0x66008d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6600a4;}}
}
B66008f:L66008f:{c.instructions+=2;NFSU2_TR(0x66008f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660091:{NFSU2_TR(0x660091);
if(r1(R+518)){{goto L6600a4;}}
}
B660093:L660093:{c.instructions+=8;NFSU2_TR(0x660093);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B660095:{NFSU2_TR(0x660095);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+12));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B660098:{NFSU2_TR(0x660098);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B66009a:{NFSU2_TR(0x66009a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B66009d:{NFSU2_TR(0x66009d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B66009e:{NFSU2_TR(0x66009e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66009f:{NFSU2_TR(0x66009f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6600a2:{NFSU2_TR(0x6600a2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66008fu);}goto L66008f;}}
}
B6600a4:L6600a4:{c.instructions+=5;NFSU2_TR(0x6600a4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B6600a7:{NFSU2_TR(0x6600a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6600aa:{NFSU2_TR(0x6600aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6600ad:{NFSU2_TR(0x6600ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6600b0:{NFSU2_TR(0x6600b0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660084u);}goto L660084;}}
}
B6600b2:L6600b2:{c.instructions+=6;NFSU2_TR(0x6600b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6600b5:{NFSU2_TR(0x6600b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6600b7:{NFSU2_TR(0x6600b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6600ba:{NFSU2_TR(0x6600ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6600bc:{NFSU2_TR(0x6600bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6600be:{NFSU2_TR(0x6600be);
{goto L6601f8;}
}
B6600c3:L6600c3:{c.instructions+=8;NFSU2_TR(0x6600c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6600c5:{NFSU2_TR(0x6600c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6600c8:{NFSU2_TR(0x6600c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6600ca:{NFSU2_TR(0x6600ca);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6600cc:{NFSU2_TR(0x6600cc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6600cf:{NFSU2_TR(0x6600cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6600d2:{NFSU2_TR(0x6600d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6600d5:{NFSU2_TR(0x6600d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6600e2;}}
}
B6600d7:L6600d7:{c.instructions+=5;NFSU2_TR(0x6600d7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6600d9:{NFSU2_TR(0x6600d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6600da:{NFSU2_TR(0x6600da);
w1(R+512,u8((r4(R+0))<(r4(R+24))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6600dc:{NFSU2_TR(0x6600dc);
u8 U[23];
w4(U+15,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B6600df:{NFSU2_TR(0x6600df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6600e2:L6600e2:{c.instructions+=2;NFSU2_TR(0x6600e2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6600e3:{NFSU2_TR(0x6600e3);
if(r1(R+518)){{goto L6601a4;}}
}
B6600e9:L6600e9:{c.instructions+=2;NFSU2_TR(0x6600e9);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6600ea:{NFSU2_TR(0x6600ea);
if(r1(R+518)){{goto L66015a;}}
}
B6600ec:L6600ec:{c.instructions+=2;NFSU2_TR(0x6600ec);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6600ed:{NFSU2_TR(0x6600ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6601fe;}}
}
B6600f3:L6600f3:{c.instructions+=9;NFSU2_TR(0x6600f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6600f6:{NFSU2_TR(0x6600f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6600f9:{NFSU2_TR(0x6600f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6600fb:{NFSU2_TR(0x6600fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6600fe:{NFSU2_TR(0x6600fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660101:{NFSU2_TR(0x660101);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B660103:{NFSU2_TR(0x660103);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B660105:{NFSU2_TR(0x660105);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660108:{NFSU2_TR(0x660108);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66014e;}}
}
B66010a:L66010a:{c.instructions+=2;NFSU2_TR(0x66010a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66010c:{NFSU2_TR(0x66010c);
if(r1(R+518)){{goto L66014e;}}
}
B66010e:L66010e:{c.instructions+=3;NFSU2_TR(0x66010e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B660110:{NFSU2_TR(0x660110);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B660113:{NFSU2_TR(0x660113);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66013d;}}
}
B660115:L660115:{c.instructions+=2;NFSU2_TR(0x660115);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660117:{NFSU2_TR(0x660117);
if(r1(R+518)){{goto L66013d;}}
}
B660119:L660119:{c.instructions+=15;NFSU2_TR(0x660119);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66011b:{NFSU2_TR(0x66011b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B66011e:{NFSU2_TR(0x66011e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B660120:{NFSU2_TR(0x660120);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B660123:{NFSU2_TR(0x660123);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B660126:{NFSU2_TR(0x660126);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B660127:{NFSU2_TR(0x660127);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B660129:{NFSU2_TR(0x660129);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B66012a:{NFSU2_TR(0x66012a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B66012d:{NFSU2_TR(0x66012d);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B660130:{NFSU2_TR(0x660130);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B660133:{NFSU2_TR(0x660133);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B660136:{NFSU2_TR(0x660136);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B660139:{NFSU2_TR(0x660139);
__builtin_memmove((R+4),(R+8),4);
}
B66013b:{NFSU2_TR(0x66013b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660115u);}goto L660115;}}
}
B66013d:L66013d:{c.instructions+=6;NFSU2_TR(0x66013d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B660140:{NFSU2_TR(0x660140);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660143:{NFSU2_TR(0x660143);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B660146:{NFSU2_TR(0x660146);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B660149:{NFSU2_TR(0x660149);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B66014c:{NFSU2_TR(0x66014c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66010au);}goto L66010a;}}
}
B66014e:L66014e:{c.instructions+=4;NFSU2_TR(0x66014e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B660150:{NFSU2_TR(0x660150);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660153:{NFSU2_TR(0x660153);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B660155:{NFSU2_TR(0x660155);
{goto L6601f3;}
}
B66015a:L66015a:{c.instructions+=9;NFSU2_TR(0x66015a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66015d:{NFSU2_TR(0x66015d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660160:{NFSU2_TR(0x660160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B660162:{NFSU2_TR(0x660162);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B660165:{NFSU2_TR(0x660165);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660168:{NFSU2_TR(0x660168);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66016a:{NFSU2_TR(0x66016a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66016c:{NFSU2_TR(0x66016c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66016f:{NFSU2_TR(0x66016f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6601ec;}}
}
B660171:L660171:{c.instructions+=2;NFSU2_TR(0x660171);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660173:{NFSU2_TR(0x660173);
if(r1(R+518)){{goto L6601ec;}}
}
B660175:L660175:{c.instructions+=3;NFSU2_TR(0x660175);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B660177:{NFSU2_TR(0x660177);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66017a:{NFSU2_TR(0x66017a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660191;}}
}
B66017c:L66017c:{c.instructions+=2;NFSU2_TR(0x66017c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66017e:{NFSU2_TR(0x66017e);
if(r1(R+518)){{goto L660191;}}
}
B660180:L660180:{c.instructions+=8;NFSU2_TR(0x660180);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B660182:{NFSU2_TR(0x660182);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B660185:{NFSU2_TR(0x660185);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B660187:{NFSU2_TR(0x660187);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B66018a:{NFSU2_TR(0x66018a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B66018b:{NFSU2_TR(0x66018b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66018c:{NFSU2_TR(0x66018c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B66018f:{NFSU2_TR(0x66018f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66017cu);}goto L66017c;}}
}
B660191:L660191:{c.instructions+=6;NFSU2_TR(0x660191);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B660194:{NFSU2_TR(0x660194);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660197:{NFSU2_TR(0x660197);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66019a:{NFSU2_TR(0x66019a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66019d:{NFSU2_TR(0x66019d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6601a0:{NFSU2_TR(0x6601a0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660171u);}goto L660171;}}
}
B6601a2:L6601a2:{c.instructions+=1;NFSU2_TR(0x6601a2);
{goto L6601ec;}
}
B6601a4:L6601a4:{c.instructions+=9;NFSU2_TR(0x6601a4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6601a7:{NFSU2_TR(0x6601a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6601aa:{NFSU2_TR(0x6601aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6601ac:{NFSU2_TR(0x6601ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6601af:{NFSU2_TR(0x6601af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6601b2:{NFSU2_TR(0x6601b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6601b4:{NFSU2_TR(0x6601b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6601b6:{NFSU2_TR(0x6601b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6601b9:{NFSU2_TR(0x6601b9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6601ec;}}
}
B6601bb:L6601bb:{c.instructions+=2;NFSU2_TR(0x6601bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6601bd:{NFSU2_TR(0x6601bd);
if(r1(R+518)){{goto L6601ec;}}
}
B6601bf:L6601bf:{c.instructions+=3;NFSU2_TR(0x6601bf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6601c1:{NFSU2_TR(0x6601c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6601c4:{NFSU2_TR(0x6601c4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6601db;}}
}
B6601c6:L6601c6:{c.instructions+=2;NFSU2_TR(0x6601c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6601c8:{NFSU2_TR(0x6601c8);
if(r1(R+518)){{goto L6601db;}}
}
B6601ca:L6601ca:{c.instructions+=8;NFSU2_TR(0x6601ca);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6601cc:{NFSU2_TR(0x6601cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6601cf:{NFSU2_TR(0x6601cf);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6601d1:{NFSU2_TR(0x6601d1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B6601d4:{NFSU2_TR(0x6601d4);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6601d5:{NFSU2_TR(0x6601d5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6601d6:{NFSU2_TR(0x6601d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6601d9:{NFSU2_TR(0x6601d9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6601c6u);}goto L6601c6;}}
}
B6601db:L6601db:{c.instructions+=6;NFSU2_TR(0x6601db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6601de:{NFSU2_TR(0x6601de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6601e1:{NFSU2_TR(0x6601e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6601e4:{NFSU2_TR(0x6601e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6601e7:{NFSU2_TR(0x6601e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6601ea:{NFSU2_TR(0x6601ea);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6601bbu);}goto L6601bb;}}
}
B6601ec:L6601ec:{c.instructions+=1;NFSU2_TR(0x6601ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6601ee:L6601ee:{c.instructions+=2;NFSU2_TR(0x6601ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6601f1:{NFSU2_TR(0x6601f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6601f3:L6601f3:{c.instructions+=2;NFSU2_TR(0x6601f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6601f6:{NFSU2_TR(0x6601f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6601f8:L6601f8:{c.instructions+=2;NFSU2_TR(0x6601f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6601fb:{NFSU2_TR(0x6601fb);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6601fe:L6601fe:{c.instructions+=5;NFSU2_TR(0x6601fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6601ff:{NFSU2_TR(0x6601ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B660200:{NFSU2_TR(0x660200);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B660201:{NFSU2_TR(0x660201);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B660202:{NFSU2_TR(0x660202);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B660205:L660205:{c.instructions+=17;NFSU2_TR(0x660205);
__builtin_memmove((R+28),(R+28),4);
}
B660207:{NFSU2_TR(0x660207);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660208:{NFSU2_TR(0x660208);
__builtin_memmove((R+20),(R+16),4);
}
B66020a:{NFSU2_TR(0x66020a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66020b:{NFSU2_TR(0x66020b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66020c:{NFSU2_TR(0x66020c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660210:{NFSU2_TR(0x660210);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660211:{NFSU2_TR(0x660211);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660212:{NFSU2_TR(0x660212);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660213:{NFSU2_TR(0x660213);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B660216:{NFSU2_TR(0x660216);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+12,u32(r2(U+0)));
}
B660219:{NFSU2_TR(0x660219);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66021d:{NFSU2_TR(0x66021d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B660220:{NFSU2_TR(0x660220);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B660223:{NFSU2_TR(0x660223);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B660225:{NFSU2_TR(0x660225);
__builtin_memmove((R+24),(R+4),4);
}
B660227:{NFSU2_TR(0x660227);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66022b;}}
}
B660229:L660229:{c.instructions+=1;NFSU2_TR(0x660229);
__builtin_memmove((R+12),(R+0),4);
}
B66022b:L66022b:{c.instructions+=4;NFSU2_TR(0x66022b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66022f:{NFSU2_TR(0x66022f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B660232:{NFSU2_TR(0x660232);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B660234:{NFSU2_TR(0x660234);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L660238;}}
}
B660236:L660236:{c.instructions+=1;NFSU2_TR(0x660236);
__builtin_memmove((R+12),(R+0),4);
}
B660238:L660238:{c.instructions+=2;NFSU2_TR(0x660238);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B66023e:{NFSU2_TR(0x66023e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L660292;}}
}
B660240:L660240:{c.instructions+=2;NFSU2_TR(0x660240);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660241:{NFSU2_TR(0x660241);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660246ull));
TAIL_STATIC(0x575620u,575);
}
B660246:L660246:{c.instructions+=5;NFSU2_TR(0x660246);
__builtin_memmove((R+28),(R+0),4);
}
B660248:{NFSU2_TR(0x660248);
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
B66024a:{NFSU2_TR(0x66024a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66024b:{NFSU2_TR(0x66024b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66024e:{NFSU2_TR(0x66024e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66025c;}}
}
B660250:L660250:{c.instructions+=2;NFSU2_TR(0x660250);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B660257:{NFSU2_TR(0x660257);
{goto L66031c;}
}
B66025c:L66025c:{c.instructions+=4;NFSU2_TR(0x66025c);
__builtin_memmove((R+4),(R+12),4);
}
B66025e:{NFSU2_TR(0x66025e);
__builtin_memmove((R+8),(R+4),4);
}
B660260:{NFSU2_TR(0x660260);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B660263:{NFSU2_TR(0x660263);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B660265:L660265:{c.instructions+=1;NFSU2_TR(0x660265);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L660267;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660265u);}goto L660265;}
}
B660267:L660267:{c.instructions+=2;NFSU2_TR(0x660267);
__builtin_memmove((R+4),(R+8),4);
}
B660269:{NFSU2_TR(0x660269);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66026c:L66026c:{c.instructions+=1;NFSU2_TR(0x66026c);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L66026e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66026cu);}goto L66026c;}
}
B66026e:L66026e:{c.instructions+=4;NFSU2_TR(0x66026e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((R+28),(U+0),4);
}
B660274:{NFSU2_TR(0x660274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B660276:{NFSU2_TR(0x660276);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660278:{NFSU2_TR(0x660278);
if(r1(R+518)){{goto L660284;}}
}
B66027a:L66027a:{c.instructions+=2;NFSU2_TR(0x66027a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66027b:{NFSU2_TR(0x66027b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660280ull));
TAIL_STATIC(0x575630u,575);
}
B660280:L660280:{c.instructions+=2;NFSU2_TR(0x660280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B660283:{NFSU2_TR(0x660283);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B660284:L660284:{c.instructions+=4;NFSU2_TR(0x660284);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660287:{NFSU2_TR(0x660287);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B660289:{NFSU2_TR(0x660289);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66028c:{NFSU2_TR(0x66028c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660292:L660292:{c.instructions+=2;NFSU2_TR(0x660292);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B660296:{NFSU2_TR(0x660296);
if(r1(R+518)){{goto L6602ad;}}
}
B660298:L660298:{c.instructions+=5;NFSU2_TR(0x660298);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66029b:{NFSU2_TR(0x66029b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66029d:{NFSU2_TR(0x66029d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66029f:{NFSU2_TR(0x66029f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6602a0:{NFSU2_TR(0x6602a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6602a6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6602a6:L6602a6:{c.instructions+=3;NFSU2_TR(0x6602a6);
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
B6602a8:{NFSU2_TR(0x6602a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6602ab:{NFSU2_TR(0x6602ab);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66031c;}}
}
B6602ad:L6602ad:{c.instructions+=3;NFSU2_TR(0x6602ad);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((R+4),(U+0),2);
}
B6602b0:{NFSU2_TR(0x6602b0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6602b3:{NFSU2_TR(0x6602b3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6602d4;}}
}
B6602b5:L6602b5:{c.instructions+=8;NFSU2_TR(0x6602b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6602b8:{NFSU2_TR(0x6602b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6602ba:{NFSU2_TR(0x6602ba);
w4(R+4,u32(r2(R+4)));
}
B6602bd:{NFSU2_TR(0x6602bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6602be:{NFSU2_TR(0x6602be);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6602c4:{NFSU2_TR(0x6602c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6602c6:{NFSU2_TR(0x6602c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6602c7:{NFSU2_TR(0x6602c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6602cdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6602cd:L6602cd:{c.instructions+=3;NFSU2_TR(0x6602cd);
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
B6602cf:{NFSU2_TR(0x6602cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6602d2:{NFSU2_TR(0x6602d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66031c;}}
}
B6602d4:L6602d4:{c.instructions+=3;NFSU2_TR(0x6602d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6602d8:{NFSU2_TR(0x6602d8);
u8 U[2];
w1(R+512,u8(0x0ull));
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6602db:{NFSU2_TR(0x6602db);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6602f8;}}
}
B6602dd:L6602dd:{c.instructions+=6;NFSU2_TR(0x6602dd);
w4(R+0,u32(r2(R+0)));
}
B6602e0:{NFSU2_TR(0x6602e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6602e1:{NFSU2_TR(0x6602e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6602e7:{NFSU2_TR(0x6602e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6602e9:{NFSU2_TR(0x6602e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6602ec:{NFSU2_TR(0x6602ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6602f1ull));
TAIL_STATIC(0x65aa5du,65a);
}
B6602f1:L6602f1:{c.instructions+=3;NFSU2_TR(0x6602f1);
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
B6602f3:{NFSU2_TR(0x6602f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6602f6:{NFSU2_TR(0x6602f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66031c;}}
}
B6602f8:L6602f8:{c.instructions+=3;NFSU2_TR(0x6602f8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B6602fc:{NFSU2_TR(0x6602fc);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+28))&u32(r2(R+28))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6602ff:{NFSU2_TR(0x6602ff);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66031c;}}
}
B660301:L660301:{c.instructions+=8;NFSU2_TR(0x660301);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660304:{NFSU2_TR(0x660304);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B660306:{NFSU2_TR(0x660306);
w4(R+8,u32(r2(R+28)));
}
B660309:{NFSU2_TR(0x660309);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66030a:{NFSU2_TR(0x66030a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B660310:{NFSU2_TR(0x660310);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660312:{NFSU2_TR(0x660312);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660313:{NFSU2_TR(0x660313);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660319ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B660319:L660319:{c.instructions+=1;NFSU2_TR(0x660319);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66031c:L66031c:{c.instructions+=6;NFSU2_TR(0x66031c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66031f:{NFSU2_TR(0x66031f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B660320:{NFSU2_TR(0x660320);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B660321:{NFSU2_TR(0x660321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B660322:{NFSU2_TR(0x660322);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B660323:{NFSU2_TR(0x660323);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B660326:L660326:{c.instructions+=12;NFSU2_TR(0x660326);
__builtin_memmove((R+28),(R+28),4);
}
B660328:{NFSU2_TR(0x660328);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660329:{NFSU2_TR(0x660329);
__builtin_memmove((R+20),(R+16),4);
}
B66032b:{NFSU2_TR(0x66032b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66032c:{NFSU2_TR(0x66032c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66032d:{NFSU2_TR(0x66032d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66032e:{NFSU2_TR(0x66032e);
__builtin_memmove((R+24),(R+4),4);
}
B660330:{NFSU2_TR(0x660330);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660333:{NFSU2_TR(0x660333);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B660335:{NFSU2_TR(0x660335);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+0))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+0)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B660339:{NFSU2_TR(0x660339);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66033c:{NFSU2_TR(0x66033c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6603af;}}
}
B66033e:L66033e:{c.instructions+=3;NFSU2_TR(0x66033e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66033f:{NFSU2_TR(0x66033f);
w4(R+12,u32(0x101ull));
}
B660344:{NFSU2_TR(0x660344);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660345:L660345:{c.instructions+=6;NFSU2_TR(0x660345);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660348:{NFSU2_TR(0x660348);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66034a:{NFSU2_TR(0x66034a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66034c:{NFSU2_TR(0x66034c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66034d:{NFSU2_TR(0x66034d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66034e:{NFSU2_TR(0x66034e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660354ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B660354:L660354:{c.instructions+=2;NFSU2_TR(0x660354);
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
B660356:{NFSU2_TR(0x660356);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6603ad;}}
}
B660358:L660358:{c.instructions+=2;NFSU2_TR(0x660358);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66035a:{NFSU2_TR(0x66035a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66035b:L66035b:{c.instructions+=5;NFSU2_TR(0x66035b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7b6c54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660361:{NFSU2_TR(0x660361);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7b6c58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660367:{NFSU2_TR(0x660367);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffffull))));
}
B66036d:{NFSU2_TR(0x66036d);
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
B66036f:{NFSU2_TR(0x66036f);
if(r1(R+518)){{goto L660379;}}
}
B660371:L660371:{c.instructions+=3;NFSU2_TR(0x660371);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660374:{NFSU2_TR(0x660374);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660377:{NFSU2_TR(0x660377);
{goto L66037d;}
}
B660379:L660379:{c.instructions+=1;NFSU2_TR(0x660379);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B66037d:L66037d:{c.instructions+=7;NFSU2_TR(0x66037d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B660380:{NFSU2_TR(0x660380);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660383:{NFSU2_TR(0x660383);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B660385:{NFSU2_TR(0x660385);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660386:{NFSU2_TR(0x660386);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660387:{NFSU2_TR(0x660387);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660388:{NFSU2_TR(0x660388);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66038eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66038e:L66038e:{c.instructions+=2;NFSU2_TR(0x66038e);
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
B660390:{NFSU2_TR(0x660390);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6603ad;}}
}
B660392:L660392:{c.instructions+=3;NFSU2_TR(0x660392);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1cull))));
}
B660395:{NFSU2_TR(0x660395);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x188ull))));
}
B66039b:{NFSU2_TR(0x66039b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66035bu);}goto L66035b;}}
}
B66039d:L66039d:{c.instructions+=6;NFSU2_TR(0x66039d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6603a0:{NFSU2_TR(0x6603a0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6603a4:{NFSU2_TR(0x6603a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6603a7:{NFSU2_TR(0x6603a7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6603a8:{NFSU2_TR(0x6603a8);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B6603ab:{NFSU2_TR(0x6603ab);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660345u);}goto L660345;}}
}
B6603ad:L6603ad:{c.instructions+=2;NFSU2_TR(0x6603ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6603ae:{NFSU2_TR(0x6603ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6603af:L6603af:{c.instructions+=3;NFSU2_TR(0x6603af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6603b0:{NFSU2_TR(0x6603b0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6603b1:{NFSU2_TR(0x6603b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6603b4:L6603b4:{c.instructions+=17;NFSU2_TR(0x6603b4);
__builtin_memmove((R+28),(R+28),4);
}
B6603b6:{NFSU2_TR(0x6603b6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6603b7:{NFSU2_TR(0x6603b7);
__builtin_memmove((R+20),(R+16),4);
}
B6603b9:{NFSU2_TR(0x6603b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6603ba:{NFSU2_TR(0x6603ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6603bb:{NFSU2_TR(0x6603bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6603bf:{NFSU2_TR(0x6603bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6603c0:{NFSU2_TR(0x6603c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6603c1:{NFSU2_TR(0x6603c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6603c2:{NFSU2_TR(0x6603c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6603c5:{NFSU2_TR(0x6603c5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+12,u32(r2(U+0)));
}
B6603c8:{NFSU2_TR(0x6603c8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6603cc:{NFSU2_TR(0x6603cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6603cf:{NFSU2_TR(0x6603cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6603d2:{NFSU2_TR(0x6603d2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6603d4:{NFSU2_TR(0x6603d4);
__builtin_memmove((R+24),(R+4),4);
}
B6603d6:{NFSU2_TR(0x6603d6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6603da;}}
}
B6603d8:L6603d8:{c.instructions+=1;NFSU2_TR(0x6603d8);
__builtin_memmove((R+12),(R+0),4);
}
B6603da:L6603da:{c.instructions+=4;NFSU2_TR(0x6603da);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6603de:{NFSU2_TR(0x6603de);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6603e1:{NFSU2_TR(0x6603e1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6603e3:{NFSU2_TR(0x6603e3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6603e7;}}
}
B6603e5:L6603e5:{c.instructions+=1;NFSU2_TR(0x6603e5);
__builtin_memmove((R+12),(R+0),4);
}
B6603e7:L6603e7:{c.instructions+=2;NFSU2_TR(0x6603e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6603ed:{NFSU2_TR(0x6603ed);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L660441;}}
}
B6603ef:L6603ef:{c.instructions+=2;NFSU2_TR(0x6603ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6603f0:{NFSU2_TR(0x6603f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6603f5ull));
TAIL_STATIC(0x575620u,575);
}
B6603f5:L6603f5:{c.instructions+=5;NFSU2_TR(0x6603f5);
__builtin_memmove((R+28),(R+0),4);
}
B6603f7:{NFSU2_TR(0x6603f7);
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
B6603f9:{NFSU2_TR(0x6603f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6603fa:{NFSU2_TR(0x6603fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6603fd:{NFSU2_TR(0x6603fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66040b;}}
}
B6603ff:L6603ff:{c.instructions+=2;NFSU2_TR(0x6603ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B660406:{NFSU2_TR(0x660406);
{goto L6604cf;}
}
B66040b:L66040b:{c.instructions+=4;NFSU2_TR(0x66040b);
__builtin_memmove((R+4),(R+12),4);
}
B66040d:{NFSU2_TR(0x66040d);
__builtin_memmove((R+8),(R+4),4);
}
B66040f:{NFSU2_TR(0x66040f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B660412:{NFSU2_TR(0x660412);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B660414:L660414:{c.instructions+=1;NFSU2_TR(0x660414);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L660416;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660414u);}goto L660414;}
}
B660416:L660416:{c.instructions+=2;NFSU2_TR(0x660416);
__builtin_memmove((R+4),(R+8),4);
}
B660418:{NFSU2_TR(0x660418);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66041b:L66041b:{c.instructions+=1;NFSU2_TR(0x66041b);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L66041d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66041bu);}goto L66041b;}
}
B66041d:L66041d:{c.instructions+=4;NFSU2_TR(0x66041d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((R+28),(U+0),4);
}
B660423:{NFSU2_TR(0x660423);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B660425:{NFSU2_TR(0x660425);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660427:{NFSU2_TR(0x660427);
if(r1(R+518)){{goto L660433;}}
}
B660429:L660429:{c.instructions+=2;NFSU2_TR(0x660429);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66042a:{NFSU2_TR(0x66042a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66042full));
TAIL_STATIC(0x575630u,575);
}
B66042f:L66042f:{c.instructions+=2;NFSU2_TR(0x66042f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B660432:{NFSU2_TR(0x660432);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B660433:L660433:{c.instructions+=4;NFSU2_TR(0x660433);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660436:{NFSU2_TR(0x660436);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B660438:{NFSU2_TR(0x660438);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66043b:{NFSU2_TR(0x66043b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660441:L660441:{c.instructions+=2;NFSU2_TR(0x660441);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B660445:{NFSU2_TR(0x660445);
if(r1(R+518)){{goto L66045c;}}
}
B660447:L660447:{c.instructions+=5;NFSU2_TR(0x660447);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66044a:{NFSU2_TR(0x66044a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66044c:{NFSU2_TR(0x66044c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66044e:{NFSU2_TR(0x66044e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66044f:{NFSU2_TR(0x66044f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660455ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B660455:L660455:{c.instructions+=3;NFSU2_TR(0x660455);
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
B660457:{NFSU2_TR(0x660457);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66045a:{NFSU2_TR(0x66045a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6604cf;}}
}
B66045c:L66045c:{c.instructions+=3;NFSU2_TR(0x66045c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((R+4),(U+0),2);
}
B66045f:{NFSU2_TR(0x66045f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B660462:{NFSU2_TR(0x660462);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660483;}}
}
B660464:L660464:{c.instructions+=8;NFSU2_TR(0x660464);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660467:{NFSU2_TR(0x660467);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B660469:{NFSU2_TR(0x660469);
w4(R+4,u32(r2(R+4)));
}
B66046c:{NFSU2_TR(0x66046c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66046d:{NFSU2_TR(0x66046d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B660473:{NFSU2_TR(0x660473);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660475:{NFSU2_TR(0x660475);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660476:{NFSU2_TR(0x660476);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66047cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66047c:L66047c:{c.instructions+=3;NFSU2_TR(0x66047c);
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
B66047e:{NFSU2_TR(0x66047e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660481:{NFSU2_TR(0x660481);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6604cf;}}
}
B660483:L660483:{c.instructions+=3;NFSU2_TR(0x660483);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B660487:{NFSU2_TR(0x660487);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B66048a:{NFSU2_TR(0x66048a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6604ab;}}
}
B66048c:L66048c:{c.instructions+=8;NFSU2_TR(0x66048c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66048f:{NFSU2_TR(0x66048f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B660491:{NFSU2_TR(0x660491);
w4(R+4,u32(r2(R+4)));
}
B660494:{NFSU2_TR(0x660494);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660495:{NFSU2_TR(0x660495);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66049b:{NFSU2_TR(0x66049b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66049d:{NFSU2_TR(0x66049d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66049e:{NFSU2_TR(0x66049e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6604a4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6604a4:L6604a4:{c.instructions+=3;NFSU2_TR(0x6604a4);
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
B6604a6:{NFSU2_TR(0x6604a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6604a9:{NFSU2_TR(0x6604a9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6604cf;}}
}
B6604ab:L6604ab:{c.instructions+=3;NFSU2_TR(0x6604ab);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B6604af:{NFSU2_TR(0x6604af);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+28))&u32(r2(R+28))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6604b2:{NFSU2_TR(0x6604b2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6604cf;}}
}
B6604b4:L6604b4:{c.instructions+=8;NFSU2_TR(0x6604b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6604b7:{NFSU2_TR(0x6604b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6604b9:{NFSU2_TR(0x6604b9);
w4(R+8,u32(r2(R+28)));
}
B6604bc:{NFSU2_TR(0x6604bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6604bd:{NFSU2_TR(0x6604bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6604c3:{NFSU2_TR(0x6604c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6604c5:{NFSU2_TR(0x6604c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6604c6:{NFSU2_TR(0x6604c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6604ccull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6604cc:L6604cc:{c.instructions+=1;NFSU2_TR(0x6604cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6604cf:L6604cf:{c.instructions+=6;NFSU2_TR(0x6604cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6604d2:{NFSU2_TR(0x6604d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6604d3:{NFSU2_TR(0x6604d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6604d4:{NFSU2_TR(0x6604d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6604d5:{NFSU2_TR(0x6604d5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6604d6:{NFSU2_TR(0x6604d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6604d9:L6604d9:{c.instructions+=12;NFSU2_TR(0x6604d9);
__builtin_memmove((R+28),(R+28),4);
}
B6604db:{NFSU2_TR(0x6604db);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6604dc:{NFSU2_TR(0x6604dc);
__builtin_memmove((R+20),(R+16),4);
}
B6604de:{NFSU2_TR(0x6604de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6604df:{NFSU2_TR(0x6604df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6604e0:{NFSU2_TR(0x6604e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6604e1:{NFSU2_TR(0x6604e1);
__builtin_memmove((R+24),(R+4),4);
}
B6604e3:{NFSU2_TR(0x6604e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6604e6:{NFSU2_TR(0x6604e6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6604e8:{NFSU2_TR(0x6604e8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6604ea:{NFSU2_TR(0x6604ea);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+12))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+12)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6604ee:{NFSU2_TR(0x6604ee);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660556;}}
}
B6604f0:L6604f0:{c.instructions+=1;NFSU2_TR(0x6604f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6604f1:L6604f1:{c.instructions+=6;NFSU2_TR(0x6604f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6604f4:{NFSU2_TR(0x6604f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6604f6:{NFSU2_TR(0x6604f6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6604f8:{NFSU2_TR(0x6604f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6604f9:{NFSU2_TR(0x6604f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6604fa:{NFSU2_TR(0x6604fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660500ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B660500:L660500:{c.instructions+=2;NFSU2_TR(0x660500);
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
B660502:{NFSU2_TR(0x660502);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L660555;}}
}
B660504:L660504:{c.instructions+=2;NFSU2_TR(0x660504);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660506:{NFSU2_TR(0x660506);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B660507:L660507:{c.instructions+=5;NFSU2_TR(0x660507);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7b6c54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66050d:{NFSU2_TR(0x66050d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7b6c58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660513:{NFSU2_TR(0x660513);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffffull))));
}
B660519:{NFSU2_TR(0x660519);
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
B66051b:{NFSU2_TR(0x66051b);
if(r1(R+518)){{goto L660525;}}
}
B66051d:L66051d:{c.instructions+=3;NFSU2_TR(0x66051d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660520:{NFSU2_TR(0x660520);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660523:{NFSU2_TR(0x660523);
{goto L660529;}
}
B660525:L660525:{c.instructions+=1;NFSU2_TR(0x660525);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B660529:L660529:{c.instructions+=7;NFSU2_TR(0x660529);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66052c:{NFSU2_TR(0x66052c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66052f:{NFSU2_TR(0x66052f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B660531:{NFSU2_TR(0x660531);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660532:{NFSU2_TR(0x660532);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660533:{NFSU2_TR(0x660533);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660534:{NFSU2_TR(0x660534);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66053aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66053a:L66053a:{c.instructions+=2;NFSU2_TR(0x66053a);
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
B66053c:{NFSU2_TR(0x66053c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L660555;}}
}
B66053e:L66053e:{c.instructions+=3;NFSU2_TR(0x66053e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1cull))));
}
B660541:{NFSU2_TR(0x660541);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x16cull))));
}
B660547:{NFSU2_TR(0x660547);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660507u);}goto L660507;}}
}
B660549:L660549:{c.instructions+=5;NFSU2_TR(0x660549);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66054c:{NFSU2_TR(0x66054c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B660550:{NFSU2_TR(0x660550);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B660551:{NFSU2_TR(0x660551);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B660553:{NFSU2_TR(0x660553);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6604f1u);}goto L6604f1;}}
}
B660555:L660555:{c.instructions+=1;NFSU2_TR(0x660555);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B660556:L660556:{c.instructions+=4;NFSU2_TR(0x660556);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B660557:{NFSU2_TR(0x660557);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B660558:{NFSU2_TR(0x660558);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B660559:{NFSU2_TR(0x660559);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66055c:L66055c:{c.instructions+=14;NFSU2_TR(0x66055c);
__builtin_memmove((R+28),(R+28),4);
}
B66055e:{NFSU2_TR(0x66055e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66055f:{NFSU2_TR(0x66055f);
__builtin_memmove((R+20),(R+16),4);
}
B660561:{NFSU2_TR(0x660561);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B660564:{NFSU2_TR(0x660564);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660567:{NFSU2_TR(0x660567);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660568:{NFSU2_TR(0x660568);
__builtin_memmove((R+12),(R+4),4);
}
B66056a:{NFSU2_TR(0x66056a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660570:{NFSU2_TR(0x660570);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B660573:{NFSU2_TR(0x660573);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660574:{NFSU2_TR(0x660574);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660575:{NFSU2_TR(0x660575);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B660578:{NFSU2_TR(0x660578);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66057a:{NFSU2_TR(0x66057a);
if(r1(R+518)){{goto L6605e6;}}
}
B66057c:L66057c:{c.instructions+=4;NFSU2_TR(0x66057c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66057f:{NFSU2_TR(0x66057f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660582:{NFSU2_TR(0x660582);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B660585:{NFSU2_TR(0x660585);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6605aa;}}
}
B660587:L660587:{c.instructions+=2;NFSU2_TR(0x660587);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660589:{NFSU2_TR(0x660589);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66058f;}}
}
B66058b:L66058b:{c.instructions+=2;NFSU2_TR(0x66058b);
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
B66058d:{NFSU2_TR(0x66058d);
{goto L6605ee;}
}
B66058f:L66058f:{c.instructions+=3;NFSU2_TR(0x66058f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660592:{NFSU2_TR(0x660592);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B660594:{NFSU2_TR(0x660594);
if(r1(R+518)){{goto L6605e6;}}
}
B660596:L660596:{c.instructions+=2;NFSU2_TR(0x660596);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660598:{NFSU2_TR(0x660598);
if(r1(R+518)){{goto L6605aa;}}
}
B66059a:L66059a:{c.instructions+=2;NFSU2_TR(0x66059a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66059d:{NFSU2_TR(0x66059d);
{goto L6605a6;}
}
B66059f:L66059f:{c.instructions+=2;NFSU2_TR(0x66059f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+4))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6605a1:{NFSU2_TR(0x6605a1);
if(r1(R+518)){{goto L6605af;}}
}
B6605a3:L6605a3:{c.instructions+=1;NFSU2_TR(0x6605a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6605a6:L6605a6:{c.instructions+=2;NFSU2_TR(0x6605a6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6605a8:{NFSU2_TR(0x6605a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66059fu);}goto L66059f;}}
}
B6605aa:L6605aa:{c.instructions+=2;NFSU2_TR(0x6605aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6605ad:{NFSU2_TR(0x6605ad);
{goto L6605d4;}
}
B6605af:L6605af:{c.instructions+=3;NFSU2_TR(0x6605af);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6605b2:{NFSU2_TR(0x6605b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6605b4:{NFSU2_TR(0x6605b4);
{goto L6605e9;}
}
B6605b6:L6605b6:{c.instructions+=3;NFSU2_TR(0x6605b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6605b8:{NFSU2_TR(0x6605b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6605ba:{NFSU2_TR(0x6605ba);
if(r1(R+518)){{goto L6605d1;}}
}
B6605bc:L6605bc:{c.instructions+=2;NFSU2_TR(0x6605bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x119ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6605c3:{NFSU2_TR(0x6605c3);
if(r1(R+518)){{goto L6605d1;}}
}
B6605c5:L6605c5:{c.instructions+=2;NFSU2_TR(0x6605c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6605c8:{NFSU2_TR(0x6605c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6605cdull));
TAIL_STATIC(0x65ab14u,65a);
}
B6605cd:L6605cd:{c.instructions+=2;NFSU2_TR(0x6605cd);
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
B6605cf:{NFSU2_TR(0x6605cf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6605ee;}}
}
B6605d1:L6605d1:{c.instructions+=1;NFSU2_TR(0x6605d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6605d4:L6605d4:{c.instructions+=2;NFSU2_TR(0x6605d4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6605d6:{NFSU2_TR(0x6605d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6605b6u);}goto L6605b6;}}
}
B6605d8:L6605d8:{c.instructions+=2;NFSU2_TR(0x6605d8);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x119ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6605df:{NFSU2_TR(0x6605df);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66058bu);}goto L66058b;}}
}
B6605e1:L6605e1:{c.instructions+=2;NFSU2_TR(0x6605e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6605e4:{NFSU2_TR(0x6605e4);
{goto L6605e7;}
}
B6605e6:L6605e6:{c.instructions+=1;NFSU2_TR(0x6605e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6605e7:L6605e7:{c.instructions+=1;NFSU2_TR(0x6605e7);
__builtin_memmove((R+4),(R+12),4);
}
B6605e9:L6605e9:{c.instructions+=1;NFSU2_TR(0x6605e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6605eeull));
TAIL_STATIC(0x65ab14u,65a);
}
B6605ee:L6605ee:{c.instructions+=5;NFSU2_TR(0x6605ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6605ef:{NFSU2_TR(0x6605ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6605f0:{NFSU2_TR(0x6605f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6605f1:{NFSU2_TR(0x6605f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6605f2:{NFSU2_TR(0x6605f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6605f5:L6605f5:{c.instructions+=13;NFSU2_TR(0x6605f5);
__builtin_memmove((R+28),(R+28),4);
}
B6605f7:{NFSU2_TR(0x6605f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6605f8:{NFSU2_TR(0x6605f8);
__builtin_memmove((R+20),(R+16),4);
}
B6605fa:{NFSU2_TR(0x6605fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6605fb:{NFSU2_TR(0x6605fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6605fc:{NFSU2_TR(0x6605fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6605ff:{NFSU2_TR(0x6605ff);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B660603:{NFSU2_TR(0x660603);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660604:{NFSU2_TR(0x660604);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B660606:{NFSU2_TR(0x660606);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B660608:{NFSU2_TR(0x660608);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66060b:{NFSU2_TR(0x66060b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66060f:{NFSU2_TR(0x66060f);
if(r1(R+518)){{goto L66061b;}}
}
B660611:L660611:{c.instructions+=2;NFSU2_TR(0x660611);
w4(R+12,u32(0x8876086cull));
}
B660616:{NFSU2_TR(0x660616);
{goto L6606fc;}
}
B66061b:L66061b:{c.instructions+=2;NFSU2_TR(0x66061b);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66061e:{NFSU2_TR(0x66061e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660611u);}goto L660611;}}
}
B660620:L660620:{c.instructions+=3;NFSU2_TR(0x660620);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B660624:{NFSU2_TR(0x660624);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B660629:{NFSU2_TR(0x660629);
if(r1(R+518)){{goto L66066c;}}
}
B66062b:L66062b:{c.instructions+=17;NFSU2_TR(0x66062b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66062f:{NFSU2_TR(0x66062f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B660631:{NFSU2_TR(0x660631);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B660635:{NFSU2_TR(0x660635);
w4(R+0,u32(r2(R+0)));
}
B660638:{NFSU2_TR(0x660638);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B66063b:{NFSU2_TR(0x66063b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B660641:{NFSU2_TR(0x660641);
w4(R+4,u32(r2(R+4)));
}
B660644:{NFSU2_TR(0x660644);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B660647:{NFSU2_TR(0x660647);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B660648:{NFSU2_TR(0x660648);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660649:{NFSU2_TR(0x660649);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66064f:{NFSU2_TR(0x66064f);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B660653:{NFSU2_TR(0x660653);
u8 U[14];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B660658:{NFSU2_TR(0x660658);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66065a:{NFSU2_TR(0x66065a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66065b:{NFSU2_TR(0x66065b);
__builtin_memmove((R+4),(R+24),4);
}
B66065d:{NFSU2_TR(0x66065d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660662ull));
TAIL_STATIC(0x65ae25u,65a);
}
B660662:L660662:{c.instructions+=3;NFSU2_TR(0x660662);
__builtin_memmove((R+12),(R+0),4);
}
B660664:{NFSU2_TR(0x660664);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B660666:{NFSU2_TR(0x660666);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6606fc;}}
}
B66066c:L66066c:{c.instructions+=3;NFSU2_TR(0x66066c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B660672:{NFSU2_TR(0x660672);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B660675:{NFSU2_TR(0x660675);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L660683;}}
}
B660677:L660677:{c.instructions+=3;NFSU2_TR(0x660677);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66067d:{NFSU2_TR(0x66067d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B660681:{NFSU2_TR(0x660681);
{goto L6606b4;}
}
B660683:L660683:{c.instructions+=4;NFSU2_TR(0x660683);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660685:{NFSU2_TR(0x660685);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B660688:{NFSU2_TR(0x660688);
__builtin_memmove((R+4),(R+24),4);
}
B66068a:{NFSU2_TR(0x66068a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66068full));
TAIL_STATIC(0x65c61fu,65c);
}
B66068f:L66068f:{c.instructions+=2;NFSU2_TR(0x66068f);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w4(U+10,u32(u32(r4(R+0))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B660691:{NFSU2_TR(0x660691);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660611u);}goto L660611;}}
}
B660697:L660697:{c.instructions+=7;NFSU2_TR(0x660697);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66069b:{NFSU2_TR(0x66069b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6606a1:{NFSU2_TR(0x6606a1);
w2(R+0,u16(u32(r2(R+0))+u32(u16(0x1ull))));
}
B6606a3:{NFSU2_TR(0x6606a3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6606a7:{NFSU2_TR(0x6606a7);
w4(R+0,u32(r2(R+0)));
}
B6606aa:{NFSU2_TR(0x6606aa);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6606b1:{NFSU2_TR(0x6606b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6606b4:L6606b4:{c.instructions+=2;NFSU2_TR(0x6606b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6606ba:{NFSU2_TR(0x6606ba);
{goto L6606e8;}
}
B6606bc:L6606bc:{c.instructions+=9;NFSU2_TR(0x6606bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6606c0:{NFSU2_TR(0x6606c0);
u8 U[40];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B6606c7:{NFSU2_TR(0x6606c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6606cd:{NFSU2_TR(0x6606cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6606d0:{NFSU2_TR(0x6606d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6606d1:{NFSU2_TR(0x6606d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6606d7:{NFSU2_TR(0x6606d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6606d9:{NFSU2_TR(0x6606d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6606da:{NFSU2_TR(0x6606da);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6606e0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6606e0:L6606e0:{c.instructions+=2;NFSU2_TR(0x6606e0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6606e2:{NFSU2_TR(0x6606e2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L660725;}}
}
B6606e4:L6606e4:{c.instructions+=1;NFSU2_TR(0x6606e4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B6606e8:L6606e8:{c.instructions+=3;NFSU2_TR(0x6606e8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6606ec:{NFSU2_TR(0x6606ec);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6606f2:{NFSU2_TR(0x6606f2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6606bcu);}goto L6606bc;}}
}
B6606f4:L6606f4:{c.instructions+=4;NFSU2_TR(0x6606f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6606f7:{NFSU2_TR(0x6606f7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6606f9:{NFSU2_TR(0x6606f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6606fb:{NFSU2_TR(0x6606fb);
u8 U[6];
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6606fc:L6606fc:{c.instructions+=13;NFSU2_TR(0x6606fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6606ff:{NFSU2_TR(0x6606ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660705:{NFSU2_TR(0x660705);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B660709:{NFSU2_TR(0x660709);
w4(R+0,u32(r2(R+0)));
}
B66070c:{NFSU2_TR(0x66070c);
u8 U[40];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B660713:{NFSU2_TR(0x660713);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B660716:{NFSU2_TR(0x660716);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B660717:{NFSU2_TR(0x660717);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66071d:{NFSU2_TR(0x66071d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66071e:{NFSU2_TR(0x66071e);
__builtin_memmove((R+0),(R+12),4);
}
B660720:{NFSU2_TR(0x660720);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B660721:{NFSU2_TR(0x660721);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B660722:{NFSU2_TR(0x660722);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B660725:L660725:{c.instructions+=7;NFSU2_TR(0x660725);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B660729:{NFSU2_TR(0x660729);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66072c:{NFSU2_TR(0x66072c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B660732:{NFSU2_TR(0x660732);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B660738:{NFSU2_TR(0x660738);
w4(R+0,u32(~u32(r4(R+0))));
}
B66073a:{NFSU2_TR(0x66073a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B66073c:{NFSU2_TR(0x66073c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6606fcu);}goto L6606fc;}
}
B66073e:L66073e:{c.instructions+=17;NFSU2_TR(0x66073e);
__builtin_memmove((R+28),(R+28),4);
}
B660740:{NFSU2_TR(0x660740);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660741:{NFSU2_TR(0x660741);
__builtin_memmove((R+20),(R+16),4);
}
B660743:{NFSU2_TR(0x660743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B660746:{NFSU2_TR(0x660746);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660747:{NFSU2_TR(0x660747);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66074a:{NFSU2_TR(0x66074a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66074e:{NFSU2_TR(0x66074e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B660752:{NFSU2_TR(0x660752);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B660756:{NFSU2_TR(0x660756);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66075a:{NFSU2_TR(0x66075a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66075b:{NFSU2_TR(0x66075b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66075e:{NFSU2_TR(0x66075e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B660762:{NFSU2_TR(0x660762);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660765:{NFSU2_TR(0x660765);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660768:{NFSU2_TR(0x660768);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66076b:{NFSU2_TR(0x66076b);
if(r1(R+518)){{goto L660777;}}
}
B66076d:L66076d:{c.instructions+=2;NFSU2_TR(0x66076d);
w4(R+28,u32(0x8876086cull));
}
B660772:{NFSU2_TR(0x660772);
{goto L6609bf;}
}
B660777:L660777:{c.instructions+=2;NFSU2_TR(0x660777);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66077b:{NFSU2_TR(0x66077b);
if(r1(R+518)){{goto L6607bf;}}
}
B66077d:L66077d:{c.instructions+=4;NFSU2_TR(0x66077d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66077f:{NFSU2_TR(0x66077f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B660782:{NFSU2_TR(0x660782);
__builtin_memmove((R+4),(R+24),4);
}
B660784:{NFSU2_TR(0x660784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660789ull));
TAIL_STATIC(0x65c61fu,65c);
}
B660789:L660789:{c.instructions+=2;NFSU2_TR(0x660789);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66078b:{NFSU2_TR(0x66078b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66076du);}goto L66076d;}}
}
B66078d:L66078d:{c.instructions+=3;NFSU2_TR(0x66078d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B660791:{NFSU2_TR(0x660791);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+4))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B660795:{NFSU2_TR(0x660795);
if(r1(R+518)){{goto L6607a5;}}
}
B660797:L660797:{c.instructions+=3;NFSU2_TR(0x660797);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66079d:{NFSU2_TR(0x66079d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6607a1:{NFSU2_TR(0x6607a1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6607a5:L6607a5:{c.instructions+=5;NFSU2_TR(0x6607a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6607a9:{NFSU2_TR(0x6607a9);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6607b0:{NFSU2_TR(0x6607b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6607b6:{NFSU2_TR(0x6607b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6607b9:{NFSU2_TR(0x6607b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6607bf:L6607bf:{c.instructions+=4;NFSU2_TR(0x6607bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6607c0:{NFSU2_TR(0x6607c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6607c6:{NFSU2_TR(0x6607c6);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6607c9:{NFSU2_TR(0x6607c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6607e4;}}
}
B6607cb:L6607cb:{c.instructions+=5;NFSU2_TR(0x6607cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6607cd:{NFSU2_TR(0x6607cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6607ce:{NFSU2_TR(0x6607ce);
u8 U[4];
w4(U+0,u32(0x7b4ff8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6607d3:{NFSU2_TR(0x6607d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6607d4:{NFSU2_TR(0x6607d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6607daull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6607da:L6607da:{c.instructions+=3;NFSU2_TR(0x6607da);
__builtin_memmove((R+28),(R+0),4);
}
B6607dc:{NFSU2_TR(0x6607dc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6607de:{NFSU2_TR(0x6607de);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6609be;}}
}
B6607e4:L6607e4:{c.instructions+=2;NFSU2_TR(0x6607e4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
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
B6607eb:{NFSU2_TR(0x6607eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L660875;}}
}
B6607f1:L6607f1:{c.instructions+=2;NFSU2_TR(0x6607f1);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x119ull))));
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
B6607f8:{NFSU2_TR(0x6607f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L660875;}}
}
B6607fa:L6607fa:{c.instructions+=4;NFSU2_TR(0x6607fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6607fd:{NFSU2_TR(0x6607fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6607ff:{NFSU2_TR(0x6607ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660800:{NFSU2_TR(0x660800);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660806ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B660806:L660806:{c.instructions+=3;NFSU2_TR(0x660806);
__builtin_memmove((R+28),(R+0),4);
}
B660808:{NFSU2_TR(0x660808);
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
B66080a:{NFSU2_TR(0x66080a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6609be;}}
}
B660810:L660810:{c.instructions+=5;NFSU2_TR(0x660810);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660813:{NFSU2_TR(0x660813);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B660815:{NFSU2_TR(0x660815);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B660817:{NFSU2_TR(0x660817);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660818:{NFSU2_TR(0x660818);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66081eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66081e:L66081e:{c.instructions+=3;NFSU2_TR(0x66081e);
__builtin_memmove((R+28),(R+0),4);
}
B660820:{NFSU2_TR(0x660820);
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
B660822:{NFSU2_TR(0x660822);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L660951;}}
}
B660828:L660828:{c.instructions+=5;NFSU2_TR(0x660828);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66082b:{NFSU2_TR(0x66082b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66082d:{NFSU2_TR(0x66082d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66082f:{NFSU2_TR(0x66082f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660830:{NFSU2_TR(0x660830);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660836ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B660836:L660836:{c.instructions+=3;NFSU2_TR(0x660836);
__builtin_memmove((R+28),(R+0),4);
}
B660838:{NFSU2_TR(0x660838);
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
B66083a:{NFSU2_TR(0x66083a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L660951;}}
}
B660840:L660840:{c.instructions+=5;NFSU2_TR(0x660840);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660843:{NFSU2_TR(0x660843);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B660845:{NFSU2_TR(0x660845);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660847:{NFSU2_TR(0x660847);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660848:{NFSU2_TR(0x660848);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66084eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66084e:L66084e:{c.instructions+=3;NFSU2_TR(0x66084e);
__builtin_memmove((R+28),(R+0),4);
}
B660850:{NFSU2_TR(0x660850);
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
B660852:{NFSU2_TR(0x660852);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L660951;}}
}
B660858:L660858:{c.instructions+=6;NFSU2_TR(0x660858);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66085b:{NFSU2_TR(0x66085b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66085d:{NFSU2_TR(0x66085d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((R+4),(U+0),4);
}
B660863:{NFSU2_TR(0x660863);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660864:{NFSU2_TR(0x660864);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660865:{NFSU2_TR(0x660865);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66086bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66086b:L66086b:{c.instructions+=3;NFSU2_TR(0x66086b);
__builtin_memmove((R+28),(R+0),4);
}
B66086d:{NFSU2_TR(0x66086d);
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
B66086f:{NFSU2_TR(0x66086f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6609be;}}
}
B660875:L660875:{c.instructions+=4;NFSU2_TR(0x660875);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66087b:{NFSU2_TR(0x66087b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66087d:{NFSU2_TR(0x66087d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66087e:{NFSU2_TR(0x66087e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660881ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B660881:L660881:{c.instructions+=3;NFSU2_TR(0x660881);
__builtin_memmove((R+28),(R+0),4);
}
B660883:{NFSU2_TR(0x660883);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B660885:{NFSU2_TR(0x660885);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6609be;}}
}
B66088b:L66088b:{c.instructions+=7;NFSU2_TR(0x66088b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66088e:{NFSU2_TR(0x66088e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B660890:{NFSU2_TR(0x660890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B660892:{NFSU2_TR(0x660892);
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
B660894:{NFSU2_TR(0x660894);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660895:{NFSU2_TR(0x660895);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660898:{NFSU2_TR(0x660898);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66089eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66089e:L66089e:{c.instructions+=2;NFSU2_TR(0x66089e);
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
B6608a0:{NFSU2_TR(0x6608a0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L660997;}}
}
B6608a6:L6608a6:{c.instructions+=5;NFSU2_TR(0x6608a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6608a9:{NFSU2_TR(0x6608a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6608ab:{NFSU2_TR(0x6608ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6608ac:{NFSU2_TR(0x6608ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6608ad:{NFSU2_TR(0x6608ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6608b3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6608b3:L6608b3:{c.instructions+=2;NFSU2_TR(0x6608b3);
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
B6608b5:{NFSU2_TR(0x6608b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L660997;}}
}
B6608bb:L6608bb:{c.instructions+=5;NFSU2_TR(0x6608bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6608be:{NFSU2_TR(0x6608be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6608c0:{NFSU2_TR(0x6608c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6608c1:{NFSU2_TR(0x6608c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6608c2:{NFSU2_TR(0x6608c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6608c8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6608c8:L6608c8:{c.instructions+=2;NFSU2_TR(0x6608c8);
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
B6608ca:{NFSU2_TR(0x6608ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L660997;}}
}
B6608d0:L6608d0:{c.instructions+=5;NFSU2_TR(0x6608d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6608d2:{NFSU2_TR(0x6608d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6608d3:{NFSU2_TR(0x6608d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6608d4:{NFSU2_TR(0x6608d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6608d5:{NFSU2_TR(0x6608d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6608dbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6608db:L6608db:{c.instructions+=2;NFSU2_TR(0x6608db);
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
B6608dd:{NFSU2_TR(0x6608dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L660997;}}
}
B6608e3:L6608e3:{c.instructions+=3;NFSU2_TR(0x6608e3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6608e5:{NFSU2_TR(0x6608e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6608ec:{NFSU2_TR(0x6608ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6608f1ull));
TAIL_STATIC(0x671aedu,671);
}
B6608f1:L6608f1:{c.instructions+=6;NFSU2_TR(0x6608f1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6608f5:{NFSU2_TR(0x6608f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6608fb:{NFSU2_TR(0x6608fb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B660901:{NFSU2_TR(0x660901);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B660903:{NFSU2_TR(0x660903);
u8 U[30];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(U+22))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+22),r4(R+28)));
w4(U+26,u32(u32(r4(U+22))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B660907:{NFSU2_TR(0x660907);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660978;}}
}
B660909:L660909:{c.instructions+=4;NFSU2_TR(0x660909);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66090b:{NFSU2_TR(0x66090b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66090c:{NFSU2_TR(0x66090c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66090d:{NFSU2_TR(0x66090d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660913ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B660913:L660913:{c.instructions+=2;NFSU2_TR(0x660913);
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
B660915:{NFSU2_TR(0x660915);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L660975;}}
}
B660917:L660917:{c.instructions+=6;NFSU2_TR(0x660917);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66091a:{NFSU2_TR(0x66091a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66091c:{NFSU2_TR(0x66091c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B66091f:{NFSU2_TR(0x66091f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660920:{NFSU2_TR(0x660920);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660921:{NFSU2_TR(0x660921);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660927ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B660927:L660927:{c.instructions+=2;NFSU2_TR(0x660927);
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
B660929:{NFSU2_TR(0x660929);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L660975;}}
}
B66092b:L66092b:{c.instructions+=3;NFSU2_TR(0x66092b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66092d:{NFSU2_TR(0x66092d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66092e:{NFSU2_TR(0x66092e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660934ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B660934:L660934:{c.instructions+=2;NFSU2_TR(0x660934);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B660936:{NFSU2_TR(0x660936);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L660975;}}
}
B660938:L660938:{c.instructions+=6;NFSU2_TR(0x660938);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66093c:{NFSU2_TR(0x66093c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660942:{NFSU2_TR(0x660942);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B660948:{NFSU2_TR(0x660948);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B660949:{NFSU2_TR(0x660949);
u8 U[30];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(R+12))<(r4(U+22))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+22)));
w4(U+26,u32(u32(r4(R+12))-u32(r4(U+22))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B66094d:{NFSU2_TR(0x66094d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660909u);}goto L660909;}}
}
B66094f:L66094f:{c.instructions+=1;NFSU2_TR(0x66094f);
{goto L660978;}
}
B660951:L660951:{c.instructions+=6;NFSU2_TR(0x660951);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660954:{NFSU2_TR(0x660954);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B660956:{NFSU2_TR(0x660956);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66095c:{NFSU2_TR(0x66095c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66095d:{NFSU2_TR(0x66095d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66095e:{NFSU2_TR(0x66095e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660964ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B660964:L660964:{c.instructions+=3;NFSU2_TR(0x660964);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B660966:{NFSU2_TR(0x660966);
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
B660968:{NFSU2_TR(0x660968);
if(r1(R+518)){{goto L6609be;}}
}
B66096a:L66096a:{c.instructions+=3;NFSU2_TR(0x66096a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66096c:{NFSU2_TR(0x66096c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66096d:{NFSU2_TR(0x66096d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660970ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B660970:L660970:{c.instructions+=2;NFSU2_TR(0x660970);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B660973:{NFSU2_TR(0x660973);
{goto L6609be;}
}
B660975:L660975:{c.instructions+=1;NFSU2_TR(0x660975);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660978:L660978:{c.instructions+=2;NFSU2_TR(0x660978);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660979:{NFSU2_TR(0x660979);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66097eull));
TAIL_STATIC(0x671aedu,671);
}
B66097e:L66097e:{c.instructions+=4;NFSU2_TR(0x66097e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B660980:{NFSU2_TR(0x660980);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660981:{NFSU2_TR(0x660981);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B660988:{NFSU2_TR(0x660988);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66098eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66098e:L66098e:{c.instructions+=2;NFSU2_TR(0x66098e);
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
B660990:{NFSU2_TR(0x660990);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66099a;}}
}
B660992:L660992:{c.instructions+=2;NFSU2_TR(0x660992);
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
B660995:{NFSU2_TR(0x660995);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66099a;}}
}
B660997:L660997:{c.instructions+=1;NFSU2_TR(0x660997);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66099a:L66099a:{c.instructions+=4;NFSU2_TR(0x66099a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6609a0:{NFSU2_TR(0x6609a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6609a2:{NFSU2_TR(0x6609a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6609a3:{NFSU2_TR(0x6609a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6609a6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6609a6:L6609a6:{c.instructions+=3;NFSU2_TR(0x6609a6);
__builtin_memmove((R+28),(R+0),4);
}
B6609a8:{NFSU2_TR(0x6609a8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6609aa:{NFSU2_TR(0x6609aa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6609b5;}}
}
B6609ac:L6609ac:{c.instructions+=2;NFSU2_TR(0x6609ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6609b0:{NFSU2_TR(0x6609b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6609bb;}}
}
B6609b2:L6609b2:{c.instructions+=1;NFSU2_TR(0x6609b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6609b5:L6609b5:{c.instructions+=2;NFSU2_TR(0x6609b5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6609b9:{NFSU2_TR(0x6609b9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6609be;}}
}
B6609bb:L6609bb:{c.instructions+=1;NFSU2_TR(0x6609bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6609be:L6609be:{c.instructions+=1;NFSU2_TR(0x6609be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6609bf:L6609bf:{c.instructions+=6;NFSU2_TR(0x6609bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6609c2:{NFSU2_TR(0x6609c2);
u8 U[8];
__builtin_memmove((U+4),(R+4),2);
w2(U+6,u16(u32(r2(U+4))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6609c7:{NFSU2_TR(0x6609c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6609ca:{NFSU2_TR(0x6609ca);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6609ce:{NFSU2_TR(0x6609ce);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6609d2:{NFSU2_TR(0x6609d2);
if(r1(R+518)){{goto L660a1a;}}
}
B6609d4:L6609d4:{c.instructions+=16;NFSU2_TR(0x6609d4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6609d6:{NFSU2_TR(0x6609d6);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6609da:{NFSU2_TR(0x6609da);
w4(R+0,u32(r2(R+0)));
}
B6609dd:{NFSU2_TR(0x6609dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6609e0:{NFSU2_TR(0x6609e0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6609e6:{NFSU2_TR(0x6609e6);
w4(R+4,u32(r2(R+4)));
}
B6609e9:{NFSU2_TR(0x6609e9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6609ec:{NFSU2_TR(0x6609ec);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6609ed:{NFSU2_TR(0x6609ed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6609ee:{NFSU2_TR(0x6609ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6609f4:{NFSU2_TR(0x6609f4);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6609f8:{NFSU2_TR(0x6609f8);
u8 U[14];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6609fd:{NFSU2_TR(0x6609fd);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6609ff:{NFSU2_TR(0x6609ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660a00:{NFSU2_TR(0x660a00);
__builtin_memmove((R+4),(R+24),4);
}
B660a02:{NFSU2_TR(0x660a02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660a07ull));
TAIL_STATIC(0x65ae25u,65a);
}
B660a07:L660a07:{c.instructions+=2;NFSU2_TR(0x660a07);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B660a09:{NFSU2_TR(0x660a09);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L660a14;}}
}
B660a0b:L660a0b:{c.instructions+=2;NFSU2_TR(0x660a0b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B660a0d:{NFSU2_TR(0x660a0d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L660a14;}}
}
B660a0f:L660a0f:{c.instructions+=1;NFSU2_TR(0x660a0f);
w4(R+28,u32(0x80004005ull));
}
B660a14:L660a14:{c.instructions+=1;NFSU2_TR(0x660a14);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B660a1a:L660a1a:{c.instructions+=12;NFSU2_TR(0x660a1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660a1d:{NFSU2_TR(0x660a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660a23:{NFSU2_TR(0x660a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660a26:{NFSU2_TR(0x660a26);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B660a2a:{NFSU2_TR(0x660a2a);
u8 U[40];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B660a31:{NFSU2_TR(0x660a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B660a34:{NFSU2_TR(0x660a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660a3a:{NFSU2_TR(0x660a3a);
__builtin_memmove((R+0),(R+28),4);
}
B660a3c:{NFSU2_TR(0x660a3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B660a3d:{NFSU2_TR(0x660a3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B660a3e:{NFSU2_TR(0x660a3e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B660a3f:{NFSU2_TR(0x660a3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B660a42:L660a42:{c.instructions+=17;NFSU2_TR(0x660a42);
__builtin_memmove((R+28),(R+28),4);
}
B660a44:{NFSU2_TR(0x660a44);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660a45:{NFSU2_TR(0x660a45);
__builtin_memmove((R+20),(R+16),4);
}
B660a47:{NFSU2_TR(0x660a47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B660a4a:{NFSU2_TR(0x660a4a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660a4b:{NFSU2_TR(0x660a4b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660a4c:{NFSU2_TR(0x660a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B660a4f:{NFSU2_TR(0x660a4f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660a50:{NFSU2_TR(0x660a50);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B660a53:{NFSU2_TR(0x660a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B660a56:{NFSU2_TR(0x660a56);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B660a59:{NFSU2_TR(0x660a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B660a5c:{NFSU2_TR(0x660a5c);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B660a5f:{NFSU2_TR(0x660a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660a62:{NFSU2_TR(0x660a62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B660a64:{NFSU2_TR(0x660a64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660a65:{NFSU2_TR(0x660a65);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660a68ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B660a68:L660a68:{c.instructions+=15;NFSU2_TR(0x660a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660a6b:{NFSU2_TR(0x660a6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+0))));
}
B660a6d:{NFSU2_TR(0x660a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660a71:{NFSU2_TR(0x660a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660a74:{NFSU2_TR(0x660a74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B660a76:{NFSU2_TR(0x660a76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660a79:{NFSU2_TR(0x660a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660a7c:{NFSU2_TR(0x660a7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660a7f:{NFSU2_TR(0x660a7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B660a82:{NFSU2_TR(0x660a82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660a85:{NFSU2_TR(0x660a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B660a88:{NFSU2_TR(0x660a88);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660a8a:{NFSU2_TR(0x660a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B660a8d:{NFSU2_TR(0x660a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660a90:{NFSU2_TR(0x660a90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L660a99;}}
}
B660a92:L660a92:{c.instructions+=1;NFSU2_TR(0x660a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B660a99:L660a99:{c.instructions+=2;NFSU2_TR(0x660a99);
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
B660a9b:{NFSU2_TR(0x660a9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L660d3d;}}
}
B660aa1:L660aa1:{c.instructions+=2;NFSU2_TR(0x660aa1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B660aa4:{NFSU2_TR(0x660aa4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L660b15;}}
}
B660aa6:L660aa6:{c.instructions+=2;NFSU2_TR(0x660aa6);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B660aa9:{NFSU2_TR(0x660aa9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L660d3d;}}
}
B660aaf:L660aaf:{c.instructions+=5;NFSU2_TR(0x660aaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660ab3:{NFSU2_TR(0x660ab3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B660ab7:{NFSU2_TR(0x660ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B660aba:{NFSU2_TR(0x660aba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B660abd:{NFSU2_TR(0x660abd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660d44;}}
}
B660ac3:L660ac3:{c.instructions+=2;NFSU2_TR(0x660ac3);
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
B660ac5:{NFSU2_TR(0x660ac5);
if(r1(R+518)){{goto L660d44;}}
}
B660acb:L660acb:{c.instructions+=4;NFSU2_TR(0x660acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660acf:{NFSU2_TR(0x660acf);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660ad1:{NFSU2_TR(0x660ad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660ad4:{NFSU2_TR(0x660ad4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660b05;}}
}
B660ad6:L660ad6:{c.instructions+=2;NFSU2_TR(0x660ad6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660ad8:{NFSU2_TR(0x660ad8);
if(r1(R+518)){{goto L660b05;}}
}
B660ada:L660ada:{c.instructions+=9;NFSU2_TR(0x660ada);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B660add:{NFSU2_TR(0x660add);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660ade:{NFSU2_TR(0x660ade);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B660ae1:{NFSU2_TR(0x660ae1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660ae2:{NFSU2_TR(0x660ae2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B660ae5:{NFSU2_TR(0x660ae5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660ae6:{NFSU2_TR(0x660ae6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B660ae9:{NFSU2_TR(0x660ae9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660aea:{NFSU2_TR(0x660aea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660aefull));
TAIL_STATIC(0x65b0f2u,65b);
}
B660aef:L660aef:{c.instructions+=3;NFSU2_TR(0x660aef);
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
B660af1:{NFSU2_TR(0x660af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660af4:{NFSU2_TR(0x660af4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L660d44;}}
}
B660afa:L660afa:{c.instructions+=4;NFSU2_TR(0x660afa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660afd:{NFSU2_TR(0x660afd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B660b00:{NFSU2_TR(0x660b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B660b03:{NFSU2_TR(0x660b03);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660ad6u);}goto L660ad6;}}
}
B660b05:L660b05:{c.instructions+=4;NFSU2_TR(0x660b05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660b08:{NFSU2_TR(0x660b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660b0b:{NFSU2_TR(0x660b0b);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B660b0e:{NFSU2_TR(0x660b0e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660ac3u);}goto L660ac3;}}
}
B660b10:L660b10:{c.instructions+=1;NFSU2_TR(0x660b10);
{goto L660d44;}
}
B660b15:L660b15:{c.instructions+=17;NFSU2_TR(0x660b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B660b18:{NFSU2_TR(0x660b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B660b1b:{NFSU2_TR(0x660b1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B660b1d:{NFSU2_TR(0x660b1d);
__builtin_memmove((R+8),(R+28),4);
}
B660b1f:{NFSU2_TR(0x660b1f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B660b22:{NFSU2_TR(0x660b22);
w1(R+512,u8((r1(R+8))!=(u8(0x0ull))));
w1(R+8,u8(0-u32(r1(R+8))));
}
B660b24:{NFSU2_TR(0x660b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660b27:{NFSU2_TR(0x660b27);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B660b29:{NFSU2_TR(0x660b29);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B660b2c:{NFSU2_TR(0x660b2c);
w4(R+8,u32(0-u32(r4(R+8))));
}
B660b2e:{NFSU2_TR(0x660b2e);
w1(R+512,carry<u32>(r4(R+8),r4(R+28)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B660b30:{NFSU2_TR(0x660b30);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B660b31:{NFSU2_TR(0x660b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B660b34:{NFSU2_TR(0x660b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660b37:{NFSU2_TR(0x660b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660b3a:{NFSU2_TR(0x660b3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660b3d:{NFSU2_TR(0x660b3d);
if(r1(R+518)){{goto L660c96;}}
}
B660b43:L660b43:{c.instructions+=2;NFSU2_TR(0x660b43);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B660b44:{NFSU2_TR(0x660b44);
if(r1(R+518)){{goto L660bec;}}
}
B660b4a:L660b4a:{c.instructions+=2;NFSU2_TR(0x660b4a);
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
B660b4b:{NFSU2_TR(0x660b4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L660d3d;}}
}
B660b51:L660b51:{c.instructions+=3;NFSU2_TR(0x660b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660b55:{NFSU2_TR(0x660b55);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B660b59:{NFSU2_TR(0x660b59);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660d44;}}
}
B660b5f:L660b5f:{c.instructions+=2;NFSU2_TR(0x660b5f);
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
B660b61:{NFSU2_TR(0x660b61);
if(r1(R+518)){{goto L660d44;}}
}
B660b67:L660b67:{c.instructions+=3;NFSU2_TR(0x660b67);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B660b69:{NFSU2_TR(0x660b69);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660b6b:{NFSU2_TR(0x660b6b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660bbf;}}
}
B660b6d:L660b6d:{c.instructions+=2;NFSU2_TR(0x660b6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660b6f:{NFSU2_TR(0x660b6f);
if(r1(R+518)){{goto L660bbf;}}
}
B660b71:L660b71:{c.instructions+=2;NFSU2_TR(0x660b71);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B660b74:{NFSU2_TR(0x660b74);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660b81;}}
}
B660b76:L660b76:{c.instructions+=4;NFSU2_TR(0x660b76);
__builtin_memmove((R+8),(R+12),4);
}
B660b78:{NFSU2_TR(0x660b78);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B660b7b:{NFSU2_TR(0x660b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660b7e:{NFSU2_TR(0x660b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660b81:L660b81:{c.instructions+=2;NFSU2_TR(0x660b81);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B660b85:{NFSU2_TR(0x660b85);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660bb4;}}
}
B660b87:L660b87:{c.instructions+=5;NFSU2_TR(0x660b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B660b8a:{NFSU2_TR(0x660b8a);
__builtin_memmove((R+28),(R+0),4);
}
B660b8c:{NFSU2_TR(0x660b8c);
__builtin_memmove((R+8),(R+0),4);
}
B660b8e:{NFSU2_TR(0x660b8e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B660b91:{NFSU2_TR(0x660b91);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B660b94:L660b94:{c.instructions+=12;NFSU2_TR(0x660b94);
{u32 ea_=u32(r4(R+4)+r4(R+8));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B660b97:{NFSU2_TR(0x660b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660b9a:{NFSU2_TR(0x660b9a);
{u32 ea_=u32(r4(R+4)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B660b9d:{NFSU2_TR(0x660b9d);
__builtin_memmove((R+4),(R+24),4);
}
B660b9f:{NFSU2_TR(0x660b9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B660ba2:{NFSU2_TR(0x660ba2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B660ba4:{NFSU2_TR(0x660ba4);
__builtin_memmove((R+4),(R+24),4);
}
B660ba6:{NFSU2_TR(0x660ba6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B660ba9:{NFSU2_TR(0x660ba9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B660bab:{NFSU2_TR(0x660bab);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B660bac:{NFSU2_TR(0x660bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660baf:{NFSU2_TR(0x660baf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660b94u);}goto L660b94;}}
}
B660bb1:L660bb1:{c.instructions+=1;NFSU2_TR(0x660bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B660bb4:L660bb4:{c.instructions+=5;NFSU2_TR(0x660bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B660bb7:{NFSU2_TR(0x660bb7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B660bb8:{NFSU2_TR(0x660bb8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B660bba:{NFSU2_TR(0x660bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660bbd:{NFSU2_TR(0x660bbd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660b6du);}goto L660b6d;}}
}
B660bbf:L660bbf:{c.instructions+=12;NFSU2_TR(0x660bbf);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B660bc3:{NFSU2_TR(0x660bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B660bc6:{NFSU2_TR(0x660bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B660bc9:{NFSU2_TR(0x660bc9);
__builtin_memmove((R+0),(R+24),4);
}
B660bcb:{NFSU2_TR(0x660bcb);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B660bcf:{NFSU2_TR(0x660bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660bd2:{NFSU2_TR(0x660bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B660bd5:{NFSU2_TR(0x660bd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660bd8:{NFSU2_TR(0x660bd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660bdb:{NFSU2_TR(0x660bdb);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B660bde:{NFSU2_TR(0x660bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660be1:{NFSU2_TR(0x660be1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660b5fu);}goto L660b5f;}}
}
B660be7:L660be7:{c.instructions+=1;NFSU2_TR(0x660be7);
{goto L660d44;}
}
B660bec:L660bec:{c.instructions+=3;NFSU2_TR(0x660bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660bf0:{NFSU2_TR(0x660bf0);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B660bf4:{NFSU2_TR(0x660bf4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660d44;}}
}
B660bfa:L660bfa:{c.instructions+=2;NFSU2_TR(0x660bfa);
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
B660bfc:{NFSU2_TR(0x660bfc);
if(r1(R+518)){{goto L660d44;}}
}
B660c02:L660c02:{c.instructions+=3;NFSU2_TR(0x660c02);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B660c04:{NFSU2_TR(0x660c04);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660c06:{NFSU2_TR(0x660c06);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660c69;}}
}
B660c08:L660c08:{c.instructions+=2;NFSU2_TR(0x660c08);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660c0a:{NFSU2_TR(0x660c0a);
if(r1(R+518)){{goto L660c69;}}
}
B660c0c:L660c0c:{c.instructions+=2;NFSU2_TR(0x660c0c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B660c0f:{NFSU2_TR(0x660c0f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660c1c;}}
}
B660c11:L660c11:{c.instructions+=4;NFSU2_TR(0x660c11);
__builtin_memmove((R+0),(R+12),4);
}
B660c13:{NFSU2_TR(0x660c13);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B660c16:{NFSU2_TR(0x660c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660c19:{NFSU2_TR(0x660c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660c1c:L660c1c:{c.instructions+=3;NFSU2_TR(0x660c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660c1f:{NFSU2_TR(0x660c1f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660c21:{NFSU2_TR(0x660c21);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660c5e;}}
}
B660c23:L660c23:{c.instructions+=6;NFSU2_TR(0x660c23);
__builtin_memmove((R+8),(R+28),4);
}
B660c25:{NFSU2_TR(0x660c25);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B660c28:{NFSU2_TR(0x660c28);
__builtin_memmove((R+12),(R+28),4);
}
B660c2a:{NFSU2_TR(0x660c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660c2d:{NFSU2_TR(0x660c2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B660c30:{NFSU2_TR(0x660c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660c33:L660c33:{c.instructions+=2;NFSU2_TR(0x660c33);
{u32 ea_=u32(r4(R+4)+r4(R+12));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B660c36:{NFSU2_TR(0x660c36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660c3bull));
TAIL_STATIC(0x75dd28u,75d);
}
B660c3b:L660c3b:{c.instructions+=12;NFSU2_TR(0x660c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660c3e:{NFSU2_TR(0x660c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B660c41:{NFSU2_TR(0x660c41);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B660c44:{NFSU2_TR(0x660c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660c47:{NFSU2_TR(0x660c47);
__builtin_memmove((R+0),(R+24),4);
}
B660c49:{NFSU2_TR(0x660c49);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B660c4c:{NFSU2_TR(0x660c4c);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B660c4e:{NFSU2_TR(0x660c4e);
__builtin_memmove((R+0),(R+24),4);
}
B660c50:{NFSU2_TR(0x660c50);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B660c53:{NFSU2_TR(0x660c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B660c56:{NFSU2_TR(0x660c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B660c59:{NFSU2_TR(0x660c59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660c33u);}goto L660c33;}}
}
B660c5b:L660c5b:{c.instructions+=1;NFSU2_TR(0x660c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B660c5e:L660c5e:{c.instructions+=5;NFSU2_TR(0x660c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B660c61:{NFSU2_TR(0x660c61);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B660c62:{NFSU2_TR(0x660c62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B660c64:{NFSU2_TR(0x660c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660c67:{NFSU2_TR(0x660c67);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660c08u);}goto L660c08;}}
}
B660c69:L660c69:{c.instructions+=12;NFSU2_TR(0x660c69);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B660c6d:{NFSU2_TR(0x660c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B660c70:{NFSU2_TR(0x660c70);
__builtin_memmove((R+0),(R+24),4);
}
B660c72:{NFSU2_TR(0x660c72);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B660c76:{NFSU2_TR(0x660c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660c79:{NFSU2_TR(0x660c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B660c7c:{NFSU2_TR(0x660c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660c7f:{NFSU2_TR(0x660c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660c82:{NFSU2_TR(0x660c82);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B660c85:{NFSU2_TR(0x660c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B660c88:{NFSU2_TR(0x660c88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660c8b:{NFSU2_TR(0x660c8b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660bfau);}goto L660bfa;}}
}
B660c91:L660c91:{c.instructions+=1;NFSU2_TR(0x660c91);
{goto L660d44;}
}
B660c96:L660c96:{c.instructions+=3;NFSU2_TR(0x660c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660c9a:{NFSU2_TR(0x660c9a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B660c9e:{NFSU2_TR(0x660c9e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660d44;}}
}
B660ca4:L660ca4:{c.instructions+=2;NFSU2_TR(0x660ca4);
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
B660ca6:{NFSU2_TR(0x660ca6);
if(r1(R+518)){{goto L660d44;}}
}
B660cac:L660cac:{c.instructions+=3;NFSU2_TR(0x660cac);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B660cae:{NFSU2_TR(0x660cae);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660cb0:{NFSU2_TR(0x660cb0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660d13;}}
}
B660cb2:L660cb2:{c.instructions+=2;NFSU2_TR(0x660cb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660cb4:{NFSU2_TR(0x660cb4);
if(r1(R+518)){{goto L660d13;}}
}
B660cb6:L660cb6:{c.instructions+=2;NFSU2_TR(0x660cb6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B660cb9:{NFSU2_TR(0x660cb9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660cc6;}}
}
B660cbb:L660cbb:{c.instructions+=4;NFSU2_TR(0x660cbb);
__builtin_memmove((R+0),(R+12),4);
}
B660cbd:{NFSU2_TR(0x660cbd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B660cc0:{NFSU2_TR(0x660cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660cc3:{NFSU2_TR(0x660cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660cc6:L660cc6:{c.instructions+=3;NFSU2_TR(0x660cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660cc9:{NFSU2_TR(0x660cc9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660ccb:{NFSU2_TR(0x660ccb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660d08;}}
}
B660ccd:L660ccd:{c.instructions+=6;NFSU2_TR(0x660ccd);
__builtin_memmove((R+8),(R+28),4);
}
B660ccf:{NFSU2_TR(0x660ccf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B660cd2:{NFSU2_TR(0x660cd2);
__builtin_memmove((R+12),(R+28),4);
}
B660cd4:{NFSU2_TR(0x660cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660cd7:{NFSU2_TR(0x660cd7);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B660cda:{NFSU2_TR(0x660cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660cdd:L660cdd:{c.instructions+=2;NFSU2_TR(0x660cdd);
{u32 ea_=u32(r4(R+4)+r4(R+12));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B660ce0:{NFSU2_TR(0x660ce0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660ce5ull));
TAIL_STATIC(0x75dd28u,75d);
}
B660ce5:L660ce5:{c.instructions+=12;NFSU2_TR(0x660ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660ce8:{NFSU2_TR(0x660ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B660ceb:{NFSU2_TR(0x660ceb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B660cee:{NFSU2_TR(0x660cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660cf1:{NFSU2_TR(0x660cf1);
__builtin_memmove((R+0),(R+24),4);
}
B660cf3:{NFSU2_TR(0x660cf3);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B660cf6:{NFSU2_TR(0x660cf6);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B660cf8:{NFSU2_TR(0x660cf8);
__builtin_memmove((R+0),(R+24),4);
}
B660cfa:{NFSU2_TR(0x660cfa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B660cfd:{NFSU2_TR(0x660cfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B660d00:{NFSU2_TR(0x660d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B660d03:{NFSU2_TR(0x660d03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660cddu);}goto L660cdd;}}
}
B660d05:L660d05:{c.instructions+=1;NFSU2_TR(0x660d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B660d08:L660d08:{c.instructions+=5;NFSU2_TR(0x660d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B660d0b:{NFSU2_TR(0x660d0b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B660d0c:{NFSU2_TR(0x660d0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B660d0e:{NFSU2_TR(0x660d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660d11:{NFSU2_TR(0x660d11);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660cb2u);}goto L660cb2;}}
}
B660d13:L660d13:{c.instructions+=12;NFSU2_TR(0x660d13);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B660d17:{NFSU2_TR(0x660d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B660d1a:{NFSU2_TR(0x660d1a);
__builtin_memmove((R+0),(R+24),4);
}
B660d1c:{NFSU2_TR(0x660d1c);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B660d20:{NFSU2_TR(0x660d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660d23:{NFSU2_TR(0x660d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B660d26:{NFSU2_TR(0x660d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660d29:{NFSU2_TR(0x660d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660d2c:{NFSU2_TR(0x660d2c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B660d2f:{NFSU2_TR(0x660d2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B660d32:{NFSU2_TR(0x660d32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660d35:{NFSU2_TR(0x660d35);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660ca4u);}goto L660ca4;}}
}
B660d3b:L660d3b:{c.instructions+=1;NFSU2_TR(0x660d3b);
{goto L660d44;}
}
B660d3d:L660d3d:{c.instructions+=1;NFSU2_TR(0x660d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B660d44:L660d44:{c.instructions+=6;NFSU2_TR(0x660d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660d47:{NFSU2_TR(0x660d47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B660d48:{NFSU2_TR(0x660d48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B660d49:{NFSU2_TR(0x660d49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B660d4a:{NFSU2_TR(0x660d4a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B660d4b:{NFSU2_TR(0x660d4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B660d4e:L660d4e:{c.instructions+=17;NFSU2_TR(0x660d4e);
__builtin_memmove((R+28),(R+28),4);
}
B660d50:{NFSU2_TR(0x660d50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660d51:{NFSU2_TR(0x660d51);
__builtin_memmove((R+20),(R+16),4);
}
B660d53:{NFSU2_TR(0x660d53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B660d56:{NFSU2_TR(0x660d56);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660d57:{NFSU2_TR(0x660d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B660d5a:{NFSU2_TR(0x660d5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660d5b:{NFSU2_TR(0x660d5b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B660d5e:{NFSU2_TR(0x660d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B660d61:{NFSU2_TR(0x660d61);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B660d64:{NFSU2_TR(0x660d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B660d67:{NFSU2_TR(0x660d67);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B660d69:{NFSU2_TR(0x660d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B660d6c:{NFSU2_TR(0x660d6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660d6d:{NFSU2_TR(0x660d6d);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+0))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+0)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B660d71:{NFSU2_TR(0x660d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660d74:{NFSU2_TR(0x660d74);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L660f44;}}
}
B660d7a:L660d7a:{c.instructions+=2;NFSU2_TR(0x660d7a);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
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
B660d7d:{NFSU2_TR(0x660d7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L660f44;}}
}
B660d83:L660d83:{c.instructions+=16;NFSU2_TR(0x660d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B660d86:{NFSU2_TR(0x660d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660d8a:{NFSU2_TR(0x660d8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B660d8d:{NFSU2_TR(0x660d8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660d8e:{NFSU2_TR(0x660d8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B660d91:{NFSU2_TR(0x660d91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660d92:{NFSU2_TR(0x660d92);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B660d96:{NFSU2_TR(0x660d96);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B660d9a:{NFSU2_TR(0x660d9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B660d9d:{NFSU2_TR(0x660d9d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660d9e:{NFSU2_TR(0x660d9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B660da1:{NFSU2_TR(0x660da1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660da2:{NFSU2_TR(0x660da2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B660da5:{NFSU2_TR(0x660da5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660da6:{NFSU2_TR(0x660da6);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+12)),r4(U+0));
}
B660dac:{NFSU2_TR(0x660dac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660db1ull));
TAIL_STATIC(0x65b3f7u,65b);
}
B660db1:L660db1:{c.instructions+=3;NFSU2_TR(0x660db1);
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
B660db3:{NFSU2_TR(0x660db3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660db6:{NFSU2_TR(0x660db6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L660f4b;}}
}
B660dbc:L660dbc:{c.instructions+=3;NFSU2_TR(0x660dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660dbf:{NFSU2_TR(0x660dbf);
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
B660dc1:{NFSU2_TR(0x660dc1);
if(r1(R+518)){{goto L660f4b;}}
}
B660dc7:L660dc7:{c.instructions+=6;NFSU2_TR(0x660dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660dca:{NFSU2_TR(0x660dca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660dcd:{NFSU2_TR(0x660dcd);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B660dd0:{NFSU2_TR(0x660dd0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B660dd3:{NFSU2_TR(0x660dd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660dd4:{NFSU2_TR(0x660dd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660dd9ull));
TAIL_STATIC(0x575620u,575);
}
B660dd9:L660dd9:{c.instructions+=3;NFSU2_TR(0x660dd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660ddb:{NFSU2_TR(0x660ddb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B660ddc:{NFSU2_TR(0x660ddc);
if(r1(R+518)){{goto L660dfc;}}
}
B660dde:L660dde:{c.instructions+=9;NFSU2_TR(0x660dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660de1:{NFSU2_TR(0x660de1);
u8 U[4];
w4(U+0,u32(0x65b680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660de6:{NFSU2_TR(0x660de6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660de7:{NFSU2_TR(0x660de7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B660de9:{NFSU2_TR(0x660de9);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B660dec:{NFSU2_TR(0x660dec);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660dee:{NFSU2_TR(0x660dee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660def:{NFSU2_TR(0x660def);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660df2:{NFSU2_TR(0x660df2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660df7ull));
TAIL_STATIC(0x401650u,401);
}
B660df7:L660df7:{c.instructions+=2;NFSU2_TR(0x660df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660dfa:{NFSU2_TR(0x660dfa);
{goto L660dfe;}
}
B660dfc:L660dfc:{c.instructions+=1;NFSU2_TR(0x660dfc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B660dfe:L660dfe:{c.instructions+=3;NFSU2_TR(0x660dfe);
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
B660e00:{NFSU2_TR(0x660e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660e03:{NFSU2_TR(0x660e03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L660e11;}}
}
B660e05:L660e05:{c.instructions+=2;NFSU2_TR(0x660e05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B660e0c:{NFSU2_TR(0x660e0c);
{goto L660f4b;}
}
B660e11:L660e11:{c.instructions+=9;NFSU2_TR(0x660e11);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660e14:{NFSU2_TR(0x660e14);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B660e18:{NFSU2_TR(0x660e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660e1c:{NFSU2_TR(0x660e1c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B660e20:{NFSU2_TR(0x660e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660e23:{NFSU2_TR(0x660e23);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B660e25:{NFSU2_TR(0x660e25);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B660e29:{NFSU2_TR(0x660e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660e2c:{NFSU2_TR(0x660e2c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660e89;}}
}
B660e2e:L660e2e:{c.instructions+=1;NFSU2_TR(0x660e2e);
{goto L660e33;}
}
B660e30:L660e30:{c.instructions+=1;NFSU2_TR(0x660e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660e33:L660e33:{c.instructions+=6;NFSU2_TR(0x660e33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B660e35:{NFSU2_TR(0x660e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B660e38:{NFSU2_TR(0x660e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660e3b:{NFSU2_TR(0x660e3b);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660e3d:{NFSU2_TR(0x660e3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660e3e:{NFSU2_TR(0x660e3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660e43ull));
TAIL_STATIC(0x65be0du,65b);
}
B660e43:L660e43:{c.instructions+=2;NFSU2_TR(0x660e43);
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
B660e45:{NFSU2_TR(0x660e45);
if(r1(R+518)){{goto L660f44;}}
}
B660e4b:L660e4b:{c.instructions+=12;NFSU2_TR(0x660e4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B660e4e:{NFSU2_TR(0x660e4e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B660e50:{NFSU2_TR(0x660e50);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B660e54:{NFSU2_TR(0x660e54);
w4(R+8,u32(r2(R+4)));
}
B660e57:{NFSU2_TR(0x660e57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660e58:{NFSU2_TR(0x660e58);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660e59:{NFSU2_TR(0x660e59);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B660e5c:{NFSU2_TR(0x660e5c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B660e5d:{NFSU2_TR(0x660e5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B660e60:{NFSU2_TR(0x660e60);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B660e64:{NFSU2_TR(0x660e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660e67:{NFSU2_TR(0x660e67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660e6cull));
TAIL_STATIC(0x65bd1eu,65b);
}
B660e6c:L660e6c:{c.instructions+=3;NFSU2_TR(0x660e6c);
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
B660e6e:{NFSU2_TR(0x660e6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660e71:{NFSU2_TR(0x660e71);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L660f4b;}}
}
B660e77:L660e77:{c.instructions+=6;NFSU2_TR(0x660e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660e7a:{NFSU2_TR(0x660e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660e7d:{NFSU2_TR(0x660e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B660e80:{NFSU2_TR(0x660e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x14ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660e84:{NFSU2_TR(0x660e84);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B660e87:{NFSU2_TR(0x660e87);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x660e30u);}goto L660e30;}}
}
B660e89:L660e89:{c.instructions+=8;NFSU2_TR(0x660e89);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B660e8d:{NFSU2_TR(0x660e8d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B660e91:{NFSU2_TR(0x660e91);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B660e95:{NFSU2_TR(0x660e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B660e98:{NFSU2_TR(0x660e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B660e9b:{NFSU2_TR(0x660e9b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B660e9d:{NFSU2_TR(0x660e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660ea0:{NFSU2_TR(0x660ea0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L660ea6;}}
}
B660ea2:L660ea2:{c.instructions+=2;NFSU2_TR(0x660ea2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B660ea3:{NFSU2_TR(0x660ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660ea6:L660ea6:{c.instructions+=54;NFSU2_TR(0x660ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B660ea9:{NFSU2_TR(0x660ea9);
__builtin_memmove((R+0),(R+12),4);
}
B660eab:{NFSU2_TR(0x660eab);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B660ead:{NFSU2_TR(0x660ead);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B660eaf:{NFSU2_TR(0x660eaf);
__builtin_memmove((R+12),(R+0),4);
}
B660eb1:{NFSU2_TR(0x660eb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B660eb4:{NFSU2_TR(0x660eb4);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B660eb6:{NFSU2_TR(0x660eb6);
__builtin_memmove((R+0),(R+12),4);
}
B660eb8:{NFSU2_TR(0x660eb8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B660ebb:{NFSU2_TR(0x660ebb);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B660ebd:{NFSU2_TR(0x660ebd);
__builtin_memmove((R+12),(R+0),4);
}
B660ebf:{NFSU2_TR(0x660ebf);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B660ec2:{NFSU2_TR(0x660ec2);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B660ec4:{NFSU2_TR(0x660ec4);
__builtin_memmove((R+0),(R+12),4);
}
B660ec6:{NFSU2_TR(0x660ec6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B660ec9:{NFSU2_TR(0x660ec9);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B660ecb:{NFSU2_TR(0x660ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660ece:{NFSU2_TR(0x660ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B660ed1:{NFSU2_TR(0x660ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660ed4:{NFSU2_TR(0x660ed4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+8,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shr<u32>(r4(U+4),u64(r4(U+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B660ed8:{NFSU2_TR(0x660ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660edb:{NFSU2_TR(0x660edb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x7ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660edf:{NFSU2_TR(0x660edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B660ee2:{NFSU2_TR(0x660ee2);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B660ee4:{NFSU2_TR(0x660ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660ee7:{NFSU2_TR(0x660ee7);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B660eeb:{NFSU2_TR(0x660eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660eee:{NFSU2_TR(0x660eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B660ef1:{NFSU2_TR(0x660ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B660ef4:{NFSU2_TR(0x660ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660ef7:{NFSU2_TR(0x660ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660efa:{NFSU2_TR(0x660efa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660efd:{NFSU2_TR(0x660efd);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B660f00:{NFSU2_TR(0x660f00);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B660f02:{NFSU2_TR(0x660f02);
__builtin_memmove((R+8),(R+0),4);
}
B660f04:{NFSU2_TR(0x660f04);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B660f07:{NFSU2_TR(0x660f07);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B660f0a:{NFSU2_TR(0x660f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B660f0d:{NFSU2_TR(0x660f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660f10:{NFSU2_TR(0x660f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660f13:{NFSU2_TR(0x660f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B660f16:{NFSU2_TR(0x660f16);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B660f1a:{NFSU2_TR(0x660f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B660f1d:{NFSU2_TR(0x660f1d);
__builtin_memmove((R+8),(R+0),4);
}
B660f1f:{NFSU2_TR(0x660f1f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B660f22:{NFSU2_TR(0x660f22);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B660f25:{NFSU2_TR(0x660f25);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B660f28:{NFSU2_TR(0x660f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660f2b:{NFSU2_TR(0x660f2b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B660f2e:{NFSU2_TR(0x660f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660f31:{NFSU2_TR(0x660f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B660f34:{NFSU2_TR(0x660f34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660f37:{NFSU2_TR(0x660f37);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B660f3a:{NFSU2_TR(0x660f3a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L660f3f;}}
}
B660f3c:L660f3c:{c.instructions+=1;NFSU2_TR(0x660f3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660f3f:L660f3f:{c.instructions+=2;NFSU2_TR(0x660f3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660f42:{NFSU2_TR(0x660f42);
{goto L660f4b;}
}
B660f44:L660f44:{c.instructions+=1;NFSU2_TR(0x660f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B660f4b:L660f4b:{c.instructions+=6;NFSU2_TR(0x660f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B660f4e:{NFSU2_TR(0x660f4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B660f4f:{NFSU2_TR(0x660f4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B660f50:{NFSU2_TR(0x660f50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B660f51:{NFSU2_TR(0x660f51);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B660f52:{NFSU2_TR(0x660f52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B660f55:L660f55:{c.instructions+=7;NFSU2_TR(0x660f55);
__builtin_memmove((R+28),(R+28),4);
}
B660f57:{NFSU2_TR(0x660f57);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660f58:{NFSU2_TR(0x660f58);
__builtin_memmove((R+20),(R+16),4);
}
B660f5a:{NFSU2_TR(0x660f5a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B660f5e:{NFSU2_TR(0x660f5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660f5f:{NFSU2_TR(0x660f5f);
__builtin_memmove((R+28),(R+4),4);
}
B660f61:{NFSU2_TR(0x660f61);
if(r1(R+518)){{goto L660f88;}}
}
B660f63:L660f63:{c.instructions+=7;NFSU2_TR(0x660f63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660f64:{NFSU2_TR(0x660f64);
u8 U[4];
w4(U+0,u32(0x6996f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660f69:{NFSU2_TR(0x660f69);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B660f6c:{NFSU2_TR(0x660f6c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B660f6e:{NFSU2_TR(0x660f6e);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660f70:{NFSU2_TR(0x660f70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660f71:{NFSU2_TR(0x660f71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660f76ull));
TAIL_STATIC(0x64b5ffu,64b);
}
B660f76:L660f76:{c.instructions+=2;NFSU2_TR(0x660f76);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B660f7a:{NFSU2_TR(0x660f7a);
if(r1(R+518)){{goto L660f83;}}
}
B660f7c:L660f7c:{c.instructions+=2;NFSU2_TR(0x660f7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660f7d:{NFSU2_TR(0x660f7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660f82ull));
TAIL_STATIC(0x575630u,575);
}
B660f82:L660f82:{c.instructions+=1;NFSU2_TR(0x660f82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B660f83:L660f83:{c.instructions+=3;NFSU2_TR(0x660f83);
__builtin_memmove((R+0),(R+24),4);
}
B660f85:{NFSU2_TR(0x660f85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B660f86:{NFSU2_TR(0x660f86);
{goto L660f97;}
}
B660f88:L660f88:{c.instructions+=2;NFSU2_TR(0x660f88);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B660f8c:{NFSU2_TR(0x660f8c);
if(r1(R+518)){{goto L660f95;}}
}
B660f8e:L660f8e:{c.instructions+=2;NFSU2_TR(0x660f8e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660f8f:{NFSU2_TR(0x660f8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660f94ull));
TAIL_STATIC(0x575630u,575);
}
B660f94:L660f94:{c.instructions+=1;NFSU2_TR(0x660f94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B660f95:L660f95:{c.instructions+=1;NFSU2_TR(0x660f95);
__builtin_memmove((R+0),(R+28),4);
}
B660f97:L660f97:{c.instructions+=3;NFSU2_TR(0x660f97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B660f98:{NFSU2_TR(0x660f98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B660f99:{NFSU2_TR(0x660f99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B660f9c:L660f9c:{c.instructions+=17;NFSU2_TR(0x660f9c);
__builtin_memmove((R+28),(R+28),4);
}
B660f9e:{NFSU2_TR(0x660f9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660f9f:{NFSU2_TR(0x660f9f);
__builtin_memmove((R+20),(R+16),4);
}
B660fa1:{NFSU2_TR(0x660fa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B660fa4:{NFSU2_TR(0x660fa4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660fa5:{NFSU2_TR(0x660fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B660fa8:{NFSU2_TR(0x660fa8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660fa9:{NFSU2_TR(0x660fa9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B660fac:{NFSU2_TR(0x660fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B660faf:{NFSU2_TR(0x660faf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B660fb2:{NFSU2_TR(0x660fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B660fb5:{NFSU2_TR(0x660fb5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B660fb7:{NFSU2_TR(0x660fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B660fba:{NFSU2_TR(0x660fba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660fbb:{NFSU2_TR(0x660fbb);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+0))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+0)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B660fbf:{NFSU2_TR(0x660fbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B660fc2:{NFSU2_TR(0x660fc2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x661191u,661);}
}
B660fc8:L660fc8:{c.instructions+=2;NFSU2_TR(0x660fc8);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
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
B660fcb:{NFSU2_TR(0x660fcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x661191u,661);}
}
B660fd1:L660fd1:{c.instructions+=16;NFSU2_TR(0x660fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B660fd4:{NFSU2_TR(0x660fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B660fd8:{NFSU2_TR(0x660fd8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B660fdb:{NFSU2_TR(0x660fdb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660fdc:{NFSU2_TR(0x660fdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B660fdf:{NFSU2_TR(0x660fdf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660fe0:{NFSU2_TR(0x660fe0);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B660fe4:{NFSU2_TR(0x660fe4);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B660fe8:{NFSU2_TR(0x660fe8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B660feb:{NFSU2_TR(0x660feb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660fec:{NFSU2_TR(0x660fec);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B660fef:{NFSU2_TR(0x660fef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660ff0:{NFSU2_TR(0x660ff0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B660ff3:{NFSU2_TR(0x660ff3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B660ff4:{NFSU2_TR(0x660ff4);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+12)),r4(U+0));
}
B660ffa:{NFSU2_TR(0x660ffa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x660fffull));
TAIL_STATIC(0x65b3f7u,65b);
}
B660fff:L660fff:{c.instructions+=1;NFSU2_TR(0x660fff);
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
TAIL_STATIC(0x661001u,661);
}
XIT:NFSU2_TR_EXIT(0x660,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
