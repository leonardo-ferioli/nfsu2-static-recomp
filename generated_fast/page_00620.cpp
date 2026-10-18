#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_433(u8* __restrict R,Cpu& c);
u32 body_434(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_48a(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_48e(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5c7(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_621(u8* __restrict R,Cpu& c);
u32 body_630(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x620,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x620,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_620(u8* __restrict R,Cpu& c);
u32 page_620(Cpu& c){return body_620(c.regs.data(),c);}
__attribute__((noinline)) u32 body_620(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x620001:goto L620001;
case 0x620003:goto L620003;
case 0x620009:c.instructions+=1;goto B620009;
case 0x62000f:goto L62000f;
case 0x620012:c.instructions+=3;goto B620012;
case 0x620017:c.instructions+=2;goto B620017;
case 0x62001d:c.instructions+=1;goto B62001d;
case 0x620023:goto L620023;
case 0x620028:c.instructions+=1;goto B620028;
case 0x62002d:goto L62002d;
case 0x620032:c.instructions+=2;goto B620032;
case 0x620036:c.instructions+=1;goto B620036;
case 0x62003b:goto L62003b;
case 0x620040:c.instructions+=2;goto B620040;
case 0x620044:c.instructions+=1;goto B620044;
case 0x620049:goto L620049;
case 0x62004e:c.instructions+=2;goto B62004e;
case 0x620052:c.instructions+=1;goto B620052;
case 0x620057:goto L620057;
case 0x62005c:c.instructions+=2;goto B62005c;
case 0x620060:c.instructions+=1;goto B620060;
case 0x620065:goto L620065;
case 0x62006a:c.instructions+=2;goto B62006a;
case 0x62006e:c.instructions+=1;goto B62006e;
case 0x620073:goto L620073;
case 0x620078:c.instructions+=2;goto B620078;
case 0x62007c:c.instructions+=1;goto B62007c;
case 0x620081:goto L620081;
case 0x620086:c.instructions+=2;goto B620086;
case 0x62008a:c.instructions+=1;goto B62008a;
case 0x62008f:goto L62008f;
case 0x620093:c.instructions+=3;goto B620093;
case 0x620096:c.instructions+=2;goto B620096;
case 0x62009b:c.instructions+=1;goto B62009b;
case 0x6200a1:goto L6200a1;
case 0x6200a4:c.instructions+=2;goto B6200a4;
case 0x6200aa:c.instructions+=1;goto B6200aa;
case 0x6200ac:goto L6200ac;
case 0x6200ad:c.instructions+=2;goto B6200ad;
case 0x6200b0:c.instructions+=1;goto B6200b0;
case 0x6200b1:goto L6200b1;
case 0x6200b5:c.instructions+=3;goto B6200b5;
case 0x6200b8:c.instructions+=2;goto B6200b8;
case 0x6200ba:c.instructions+=1;goto B6200ba;
case 0x6200bc:goto L6200bc;
case 0x6200be:c.instructions+=1;goto B6200be;
case 0x6200c1:goto L6200c1;
case 0x6200c4:c.instructions+=2;goto B6200c4;
case 0x6200ca:c.instructions+=1;goto B6200ca;
case 0x6200cc:goto L6200cc;
case 0x6200cd:c.instructions+=2;goto B6200cd;
case 0x6200d0:c.instructions+=1;goto B6200d0;
case 0x6200d1:goto L6200d1;
case 0x6200d5:c.instructions+=3;goto B6200d5;
case 0x6200d8:c.instructions+=2;goto B6200d8;
case 0x6200db:c.instructions+=1;goto B6200db;
case 0x6200dd:goto L6200dd;
case 0x6200e0:c.instructions+=1;goto B6200e0;
case 0x6200e3:goto L6200e3;
case 0x6200e5:c.instructions+=2;goto B6200e5;
case 0x6200eb:c.instructions+=1;goto B6200eb;
case 0x6200ed:goto L6200ed;
case 0x6200ee:c.instructions+=2;goto B6200ee;
case 0x6200f1:c.instructions+=1;goto B6200f1;
case 0x6200f2:goto L6200f2;
case 0x6200f6:c.instructions+=3;goto B6200f6;
case 0x6200f9:c.instructions+=2;goto B6200f9;
case 0x6200fc:c.instructions+=1;goto B6200fc;
case 0x6200fe:goto L6200fe;
case 0x620101:c.instructions+=1;goto B620101;
case 0x620104:goto L620104;
case 0x620107:c.instructions+=2;goto B620107;
case 0x62010d:c.instructions+=1;goto B62010d;
case 0x62010f:goto L62010f;
case 0x620110:c.instructions+=2;goto B620110;
case 0x620113:c.instructions+=1;goto B620113;
case 0x620114:goto L620114;
case 0x620118:c.instructions+=3;goto B620118;
case 0x62011b:c.instructions+=2;goto B62011b;
case 0x62011e:c.instructions+=1;goto B62011e;
case 0x620120:goto L620120;
case 0x620123:c.instructions+=1;goto B620123;
case 0x620126:goto L620126;
case 0x620129:c.instructions+=2;goto B620129;
case 0x62012f:c.instructions+=1;goto B62012f;
case 0x620131:goto L620131;
case 0x620132:c.instructions+=2;goto B620132;
case 0x620135:c.instructions+=1;goto B620135;
case 0x620136:goto L620136;
case 0x62013a:c.instructions+=3;goto B62013a;
case 0x62013d:c.instructions+=2;goto B62013d;
case 0x620140:c.instructions+=1;goto B620140;
case 0x620142:goto L620142;
case 0x620145:c.instructions+=1;goto B620145;
case 0x620148:goto L620148;
case 0x62014b:c.instructions+=2;goto B62014b;
case 0x620151:c.instructions+=1;goto B620151;
case 0x620153:goto L620153;
case 0x620154:c.instructions+=2;goto B620154;
case 0x620157:c.instructions+=1;goto B620157;
case 0x620158:goto L620158;
case 0x62015c:c.instructions+=3;goto B62015c;
case 0x62015f:c.instructions+=2;goto B62015f;
case 0x620162:c.instructions+=1;goto B620162;
case 0x620164:goto L620164;
case 0x620167:c.instructions+=1;goto B620167;
case 0x62016a:goto L62016a;
case 0x62016d:c.instructions+=2;goto B62016d;
case 0x620173:c.instructions+=1;goto B620173;
case 0x620175:goto L620175;
case 0x620176:c.instructions+=2;goto B620176;
case 0x620179:c.instructions+=1;goto B620179;
case 0x62017a:goto L62017a;
case 0x62017e:c.instructions+=3;goto B62017e;
case 0x620181:c.instructions+=2;goto B620181;
case 0x620184:c.instructions+=1;goto B620184;
case 0x620186:goto L620186;
case 0x620189:c.instructions+=1;goto B620189;
case 0x62018c:goto L62018c;
case 0x62018f:c.instructions+=2;goto B62018f;
case 0x620195:c.instructions+=1;goto B620195;
case 0x620197:goto L620197;
case 0x620198:c.instructions+=2;goto B620198;
case 0x62019b:c.instructions+=1;goto B62019b;
case 0x62019c:goto L62019c;
case 0x6201a0:c.instructions+=3;goto B6201a0;
case 0x6201a3:c.instructions+=2;goto B6201a3;
case 0x6201a6:c.instructions+=1;goto B6201a6;
case 0x6201a8:goto L6201a8;
case 0x6201ab:c.instructions+=1;goto B6201ab;
case 0x6201ae:goto L6201ae;
case 0x6201b1:c.instructions+=4;goto B6201b1;
case 0x6201b4:c.instructions+=3;goto B6201b4;
case 0x6201b9:c.instructions+=2;goto B6201b9;
case 0x6201bc:c.instructions+=1;goto B6201bc;
case 0x6201c2:goto L6201c2;
case 0x6201c9:c.instructions+=4;goto B6201c9;
case 0x6201cf:c.instructions+=3;goto B6201cf;
case 0x6201d1:c.instructions+=2;goto B6201d1;
case 0x6201d9:c.instructions+=1;goto B6201d9;
case 0x6201db:goto L6201db;
case 0x6201e3:goto L6201e3;
case 0x6201e8:c.instructions+=1;goto B6201e8;
case 0x6201ed:goto L6201ed;
case 0x6201ef:c.instructions+=3;goto B6201ef;
case 0x6201f4:c.instructions+=2;goto B6201f4;
case 0x6201f8:c.instructions+=1;goto B6201f8;
case 0x6201fd:goto L6201fd;
case 0x620202:c.instructions+=2;goto B620202;
case 0x620206:c.instructions+=1;goto B620206;
case 0x62020b:goto L62020b;
case 0x620210:c.instructions+=1;goto B620210;
case 0x620215:goto L620215;
case 0x62021a:c.instructions+=1;goto B62021a;
case 0x62021f:goto L62021f;
case 0x620224:c.instructions+=1;goto B620224;
case 0x620229:goto L620229;
case 0x62022e:c.instructions+=2;goto B62022e;
case 0x620232:c.instructions+=1;goto B620232;
case 0x620237:goto L620237;
case 0x62023c:c.instructions+=2;goto B62023c;
case 0x620240:c.instructions+=1;goto B620240;
case 0x620245:goto L620245;
case 0x620248:c.instructions+=2;goto B620248;
case 0x62024c:c.instructions+=1;goto B62024c;
case 0x620254:goto L620254;
case 0x62025b:c.instructions+=4;goto B62025b;
case 0x62025f:c.instructions+=3;goto B62025f;
case 0x620266:c.instructions+=2;goto B620266;
case 0x620268:c.instructions+=1;goto B620268;
case 0x62026e:goto L62026e;
case 0x620270:c.instructions+=2;goto B620270;
case 0x620273:c.instructions+=1;goto B620273;
case 0x620275:goto L620275;
case 0x620279:c.instructions+=2;goto B620279;
case 0x62027b:c.instructions+=1;goto B62027b;
case 0x620281:goto L620281;
case 0x620285:c.instructions+=2;goto B620285;
case 0x620289:c.instructions+=1;goto B620289;
case 0x62028f:goto L62028f;
case 0x620292:c.instructions+=7;goto B620292;
case 0x620297:c.instructions+=6;goto B620297;
case 0x62029a:c.instructions+=5;goto B62029a;
case 0x62029e:c.instructions+=4;goto B62029e;
case 0x6202a1:c.instructions+=3;goto B6202a1;
case 0x6202a3:c.instructions+=2;goto B6202a3;
case 0x6202a5:c.instructions+=1;goto B6202a5;
case 0x6202ab:goto L6202ab;
case 0x6202ae:c.instructions+=1;goto B6202ae;
case 0x6202b1:goto L6202b1;
case 0x6202b3:c.instructions+=3;goto B6202b3;
case 0x6202b6:c.instructions+=2;goto B6202b6;
case 0x6202b9:c.instructions+=1;goto B6202b9;
case 0x6202bb:goto L6202bb;
case 0x6202bd:c.instructions+=1;goto B6202bd;
case 0x6202bf:goto L6202bf;
case 0x6202c0:c.instructions+=3;goto B6202c0;
case 0x6202c3:c.instructions+=2;goto B6202c3;
case 0x6202c5:c.instructions+=1;goto B6202c5;
case 0x6202c7:goto L6202c7;
case 0x6202cc:goto L6202cc;
case 0x6202ce:c.instructions+=1;goto B6202ce;
case 0x6202d4:goto L6202d4;
case 0x6202d7:c.instructions+=3;goto B6202d7;
case 0x6202d9:c.instructions+=2;goto B6202d9;
case 0x6202db:c.instructions+=1;goto B6202db;
case 0x6202e1:goto L6202e1;
case 0x6202e5:c.instructions+=1;goto B6202e5;
case 0x6202e8:goto L6202e8;
case 0x6202ea:c.instructions+=3;goto B6202ea;
case 0x6202ed:c.instructions+=2;goto B6202ed;
case 0x6202f0:c.instructions+=1;goto B6202f0;
case 0x6202f2:goto L6202f2;
case 0x6202f4:c.instructions+=1;goto B6202f4;
case 0x6202f6:goto L6202f6;
case 0x6202f7:c.instructions+=3;goto B6202f7;
case 0x6202fa:c.instructions+=2;goto B6202fa;
case 0x6202fc:c.instructions+=1;goto B6202fc;
case 0x6202fe:goto L6202fe;
case 0x620303:goto L620303;
case 0x620305:c.instructions+=1;goto B620305;
case 0x62030b:goto L62030b;
case 0x62030e:c.instructions+=3;goto B62030e;
case 0x620310:c.instructions+=2;goto B620310;
case 0x620312:c.instructions+=1;goto B620312;
case 0x620314:goto L620314;
case 0x620318:c.instructions+=2;goto B620318;
case 0x62031b:c.instructions+=1;goto B62031b;
case 0x620320:goto L620320;
case 0x620322:c.instructions+=3;goto B620322;
case 0x620325:c.instructions+=2;goto B620325;
case 0x620328:c.instructions+=1;goto B620328;
case 0x62032a:goto L62032a;
case 0x62032c:c.instructions+=1;goto B62032c;
case 0x62032e:goto L62032e;
case 0x62032f:c.instructions+=3;goto B62032f;
case 0x620332:c.instructions+=2;goto B620332;
case 0x620334:c.instructions+=1;goto B620334;
case 0x620336:goto L620336;
case 0x62033a:goto L62033a;
case 0x62033d:c.instructions+=3;goto B62033d;
case 0x62033f:c.instructions+=2;goto B62033f;
case 0x620341:c.instructions+=1;goto B620341;
case 0x620343:goto L620343;
case 0x620346:goto L620346;
case 0x620348:c.instructions+=3;goto B620348;
case 0x62034b:c.instructions+=2;goto B62034b;
case 0x62034e:c.instructions+=1;goto B62034e;
case 0x620354:goto L620354;
case 0x620356:c.instructions+=1;goto B620356;
case 0x62035c:goto L62035c;
case 0x62035d:c.instructions+=3;goto B62035d;
case 0x620360:c.instructions+=2;goto B620360;
case 0x620362:c.instructions+=1;goto B620362;
case 0x620364:goto L620364;
case 0x62036c:goto L62036c;
case 0x620370:c.instructions+=11;goto B620370;
case 0x620374:c.instructions+=10;goto B620374;
case 0x620377:c.instructions+=9;goto B620377;
case 0x620379:c.instructions+=8;goto B620379;
case 0x62037c:c.instructions+=7;goto B62037c;
case 0x620383:c.instructions+=6;goto B620383;
case 0x620386:c.instructions+=5;goto B620386;
case 0x62038d:c.instructions+=4;goto B62038d;
case 0x620394:c.instructions+=3;goto B620394;
case 0x62039b:c.instructions+=2;goto B62039b;
case 0x62039f:c.instructions+=1;goto B62039f;
case 0x6203a7:goto L6203a7;
case 0x6203ab:c.instructions+=3;goto B6203ab;
case 0x6203ad:c.instructions+=2;goto B6203ad;
case 0x6203af:c.instructions+=1;goto B6203af;
case 0x6203b5:goto L6203b5;
case 0x6203ba:c.instructions+=1;goto B6203ba;
case 0x6203bf:goto L6203bf;
case 0x6203c3:c.instructions+=3;goto B6203c3;
case 0x6203c6:c.instructions+=2;goto B6203c6;
case 0x6203cb:c.instructions+=1;goto B6203cb;
case 0x6203cd:goto L6203cd;
case 0x6203d3:c.instructions+=7;goto B6203d3;
case 0x6203d6:c.instructions+=6;goto B6203d6;
case 0x6203d9:c.instructions+=5;goto B6203d9;
case 0x6203dd:c.instructions+=4;goto B6203dd;
case 0x6203e0:c.instructions+=3;goto B6203e0;
case 0x6203e2:c.instructions+=2;goto B6203e2;
case 0x6203e4:c.instructions+=1;goto B6203e4;
case 0x6203e6:goto L6203e6;
case 0x6203e9:c.instructions+=2;goto B6203e9;
case 0x6203ec:c.instructions+=1;goto B6203ec;
case 0x6203f0:goto L6203f0;
case 0x6203f2:c.instructions+=3;goto B6203f2;
case 0x6203f5:c.instructions+=2;goto B6203f5;
case 0x6203f8:c.instructions+=1;goto B6203f8;
case 0x6203fa:goto L6203fa;
case 0x6203fc:c.instructions+=1;goto B6203fc;
case 0x6203fe:goto L6203fe;
case 0x6203ff:c.instructions+=3;goto B6203ff;
case 0x620402:c.instructions+=2;goto B620402;
case 0x620404:c.instructions+=1;goto B620404;
case 0x620406:goto L620406;
case 0x620408:goto L620408;
case 0x62040c:c.instructions+=2;goto B62040c;
case 0x620410:c.instructions+=1;goto B620410;
case 0x620412:goto L620412;
case 0x620417:c.instructions+=3;goto B620417;
case 0x62041b:c.instructions+=2;goto B62041b;
case 0x62041c:c.instructions+=1;goto B62041c;
case 0x62041e:goto L62041e;
case 0x620420:c.instructions+=1;goto B620420;
case 0x620426:goto L620426;
case 0x620429:c.instructions+=2;goto B620429;
case 0x62042d:c.instructions+=1;goto B62042d;
case 0x620432:goto L620432;
case 0x620434:c.instructions+=1;goto B620434;
case 0x620436:goto L620436;
case 0x620439:c.instructions+=1;goto B620439;
case 0x62043b:goto L62043b;
case 0x62043f:c.instructions+=1;goto B62043f;
case 0x620441:goto L620441;
case 0x620446:c.instructions+=3;goto B620446;
case 0x62044a:c.instructions+=2;goto B62044a;
case 0x62044b:c.instructions+=1;goto B62044b;
case 0x62044d:goto L62044d;
case 0x620451:c.instructions+=1;goto B620451;
case 0x620453:goto L620453;
case 0x620458:c.instructions+=2;goto B620458;
case 0x62045c:c.instructions+=1;goto B62045c;
case 0x62045d:goto L62045d;
case 0x620462:goto L620462;
case 0x620465:goto L620465;
case 0x620469:c.instructions+=3;goto B620469;
case 0x62046a:c.instructions+=2;goto B62046a;
case 0x62046b:c.instructions+=1;goto B62046b;
case 0x620470:goto L620470;
case 0x620473:c.instructions+=3;goto B620473;
case 0x620476:c.instructions+=2;goto B620476;
case 0x620478:c.instructions+=1;goto B620478;
case 0x62047a:goto L62047a;
case 0x62047d:c.instructions+=1;goto B62047d;
case 0x620484:goto L620484;
case 0x620488:c.instructions+=7;goto B620488;
case 0x62048c:c.instructions+=6;goto B62048c;
case 0x62048f:c.instructions+=5;goto B62048f;
case 0x620492:c.instructions+=4;goto B620492;
case 0x620493:c.instructions+=3;goto B620493;
case 0x620497:c.instructions+=2;goto B620497;
case 0x62049b:c.instructions+=1;goto B62049b;
case 0x6204a1:goto L6204a1;
case 0x6204a5:goto L6204a5;
case 0x6204a9:c.instructions+=4;goto B6204a9;
case 0x6204aa:c.instructions+=3;goto B6204aa;
case 0x6204ad:c.instructions+=2;goto B6204ad;
case 0x6204b1:c.instructions+=1;goto B6204b1;
case 0x6204b7:goto L6204b7;
case 0x6204b8:c.instructions+=5;goto B6204b8;
case 0x6204b9:c.instructions+=4;goto B6204b9;
case 0x6204ba:c.instructions+=3;goto B6204ba;
case 0x6204bb:c.instructions+=2;goto B6204bb;
case 0x6204c1:c.instructions+=1;goto B6204c1;
case 0x6204d0:goto L6204d0;
case 0x6204d3:c.instructions+=5;goto B6204d3;
case 0x6204d4:c.instructions+=4;goto B6204d4;
case 0x6204d6:c.instructions+=3;goto B6204d6;
case 0x6204d9:c.instructions+=2;goto B6204d9;
case 0x6204db:c.instructions+=1;goto B6204db;
case 0x6204e1:goto L6204e1;
case 0x6204e2:c.instructions+=5;goto B6204e2;
case 0x6204e8:c.instructions+=4;goto B6204e8;
case 0x6204e9:c.instructions+=3;goto B6204e9;
case 0x6204ed:c.instructions+=2;goto B6204ed;
case 0x6204f5:c.instructions+=1;goto B6204f5;
case 0x6204f6:goto L6204f6;
case 0x6204fa:c.instructions+=4;goto B6204fa;
case 0x6204fc:c.instructions+=3;goto B6204fc;
case 0x6204fe:c.instructions+=2;goto B6204fe;
case 0x620502:c.instructions+=1;goto B620502;
case 0x620508:goto L620508;
case 0x62050a:c.instructions+=2;goto B62050a;
case 0x62050c:c.instructions+=1;goto B62050c;
case 0x620511:goto L620511;
case 0x620513:c.instructions+=2;goto B620513;
case 0x620515:c.instructions+=1;goto B620515;
case 0x62051b:goto L62051b;
case 0x620520:goto L620520;
case 0x620522:c.instructions+=2;goto B620522;
case 0x620527:c.instructions+=1;goto B620527;
case 0x62052c:goto L62052c;
case 0x62052e:c.instructions+=3;goto B62052e;
case 0x620531:c.instructions+=2;goto B620531;
case 0x620536:c.instructions+=1;goto B620536;
case 0x620538:goto L620538;
case 0x62053a:goto L62053a;
case 0x62053f:c.instructions+=1;goto B62053f;
case 0x620541:goto L620541;
case 0x620546:c.instructions+=1;goto B620546;
case 0x620548:goto L620548;
case 0x62054d:c.instructions+=1;goto B62054d;
case 0x62054f:goto L62054f;
case 0x620554:c.instructions+=1;goto B620554;
case 0x620556:goto L620556;
case 0x62055b:goto L62055b;
case 0x62055d:goto L62055d;
case 0x62055f:c.instructions+=1;goto B62055f;
case 0x620561:goto L620561;
case 0x620566:goto L620566;
case 0x620568:c.instructions+=1;goto B620568;
case 0x62056d:goto L62056d;
case 0x620570:c.instructions+=26;goto B620570;
case 0x620573:c.instructions+=25;goto B620573;
case 0x620577:c.instructions+=24;goto B620577;
case 0x62057a:c.instructions+=23;goto B62057a;
case 0x62057d:c.instructions+=22;goto B62057d;
case 0x620581:c.instructions+=21;goto B620581;
case 0x620584:c.instructions+=20;goto B620584;
case 0x620587:c.instructions+=19;goto B620587;
case 0x62058a:c.instructions+=18;goto B62058a;
case 0x62058d:c.instructions+=17;goto B62058d;
case 0x620590:c.instructions+=16;goto B620590;
case 0x620593:c.instructions+=15;goto B620593;
case 0x620596:c.instructions+=14;goto B620596;
case 0x62059d:c.instructions+=13;goto B62059d;
case 0x6205a0:c.instructions+=12;goto B6205a0;
case 0x6205a3:c.instructions+=11;goto B6205a3;
case 0x6205a6:c.instructions+=10;goto B6205a6;
case 0x6205a9:c.instructions+=9;goto B6205a9;
case 0x6205ac:c.instructions+=8;goto B6205ac;
case 0x6205af:c.instructions+=7;goto B6205af;
case 0x6205b5:c.instructions+=6;goto B6205b5;
case 0x6205b8:c.instructions+=5;goto B6205b8;
case 0x6205bb:c.instructions+=4;goto B6205bb;
case 0x6205bd:c.instructions+=3;goto B6205bd;
case 0x6205c0:c.instructions+=2;goto B6205c0;
case 0x6205c3:c.instructions+=1;goto B6205c3;
case 0x6205c5:goto L6205c5;
case 0x6205c6:c.instructions+=2;goto B6205c6;
case 0x6205c8:c.instructions+=1;goto B6205c8;
case 0x6205cd:goto L6205cd;
case 0x6205cf:c.instructions+=2;goto B6205cf;
case 0x6205d1:c.instructions+=1;goto B6205d1;
case 0x6205d7:goto L6205d7;
case 0x6205db:c.instructions+=6;goto B6205db;
case 0x6205df:c.instructions+=5;goto B6205df;
case 0x6205e2:c.instructions+=4;goto B6205e2;
case 0x6205e3:c.instructions+=3;goto B6205e3;
case 0x6205e7:c.instructions+=2;goto B6205e7;
case 0x6205eb:c.instructions+=1;goto B6205eb;
case 0x6205f1:goto L6205f1;
case 0x6205f2:c.instructions+=2;goto B6205f2;
case 0x6205f3:c.instructions+=1;goto B6205f3;
case 0x6205f4:goto L6205f4;
case 0x6205f5:c.instructions+=2;goto B6205f5;
case 0x6205f8:c.instructions+=1;goto B6205f8;
case 0x620600:goto L620600;
case 0x620601:c.instructions+=8;goto B620601;
case 0x620603:c.instructions+=7;goto B620603;
case 0x620606:c.instructions+=6;goto B620606;
case 0x62060c:c.instructions+=5;goto B62060c;
case 0x62060f:c.instructions+=4;goto B62060f;
case 0x620615:c.instructions+=3;goto B620615;
case 0x620617:c.instructions+=2;goto B620617;
case 0x620618:c.instructions+=1;goto B620618;
case 0x62061a:goto L62061a;
case 0x62061f:goto L62061f;
case 0x620622:c.instructions+=4;goto B620622;
case 0x620626:c.instructions+=3;goto B620626;
case 0x62062a:c.instructions+=2;goto B62062a;
case 0x62062e:c.instructions+=1;goto B62062e;
case 0x620630:goto L620630;
case 0x620638:goto L620638;
case 0x62063a:c.instructions+=3;goto B62063a;
case 0x62063c:c.instructions+=2;goto B62063c;
case 0x620641:c.instructions+=1;goto B620641;
case 0x620646:goto L620646;
case 0x620649:c.instructions+=2;goto B620649;
case 0x62064a:c.instructions+=1;goto B62064a;
case 0x62064f:goto L62064f;
case 0x620652:c.instructions+=3;goto B620652;
case 0x620659:c.instructions+=2;goto B620659;
case 0x62065b:c.instructions+=1;goto B62065b;
case 0x620660:goto L620660;
case 0x620662:c.instructions+=46;goto B620662;
case 0x620667:c.instructions+=45;goto B620667;
case 0x62066b:c.instructions+=44;goto B62066b;
case 0x620672:c.instructions+=43;goto B620672;
case 0x620679:c.instructions+=42;goto B620679;
case 0x620680:c.instructions+=41;goto B620680;
case 0x620687:c.instructions+=40;goto B620687;
case 0x62068e:c.instructions+=39;goto B62068e;
case 0x620695:c.instructions+=38;goto B620695;
case 0x62069c:c.instructions+=37;goto B62069c;
case 0x6206a3:c.instructions+=36;goto B6206a3;
case 0x6206aa:c.instructions+=35;goto B6206aa;
case 0x6206b1:c.instructions+=34;goto B6206b1;
case 0x6206b8:c.instructions+=33;goto B6206b8;
case 0x6206bf:c.instructions+=32;goto B6206bf;
case 0x6206c6:c.instructions+=31;goto B6206c6;
case 0x6206cd:c.instructions+=30;goto B6206cd;
case 0x6206d4:c.instructions+=29;goto B6206d4;
case 0x6206db:c.instructions+=28;goto B6206db;
case 0x6206dc:c.instructions+=27;goto B6206dc;
case 0x6206e0:c.instructions+=26;goto B6206e0;
case 0x6206e1:c.instructions+=25;goto B6206e1;
case 0x6206ec:c.instructions+=24;goto B6206ec;
case 0x6206f7:c.instructions+=23;goto B6206f7;
case 0x620702:c.instructions+=22;goto B620702;
case 0x62070d:c.instructions+=21;goto B62070d;
case 0x620718:c.instructions+=20;goto B620718;
case 0x620723:c.instructions+=19;goto B620723;
case 0x62072e:c.instructions+=18;goto B62072e;
case 0x620739:c.instructions+=17;goto B620739;
case 0x620741:c.instructions+=16;goto B620741;
case 0x620749:c.instructions+=15;goto B620749;
case 0x620751:c.instructions+=14;goto B620751;
case 0x620759:c.instructions+=13;goto B620759;
case 0x620761:c.instructions+=12;goto B620761;
case 0x620769:c.instructions+=11;goto B620769;
case 0x620771:c.instructions+=10;goto B620771;
case 0x620779:c.instructions+=9;goto B620779;
case 0x620781:c.instructions+=8;goto B620781;
case 0x620789:c.instructions+=7;goto B620789;
case 0x620791:c.instructions+=6;goto B620791;
case 0x620799:c.instructions+=5;goto B620799;
case 0x6207a1:c.instructions+=4;goto B6207a1;
case 0x6207a9:c.instructions+=3;goto B6207a9;
case 0x6207b1:c.instructions+=2;goto B6207b1;
case 0x6207b9:c.instructions+=1;goto B6207b9;
case 0x6207be:goto L6207be;
case 0x6207c2:c.instructions+=172;goto B6207c2;
case 0x6207c8:c.instructions+=171;goto B6207c8;
case 0x6207ce:c.instructions+=170;goto B6207ce;
case 0x6207d0:c.instructions+=169;goto B6207d0;
case 0x6207d7:c.instructions+=168;goto B6207d7;
case 0x6207db:c.instructions+=167;goto B6207db;
case 0x6207e1:c.instructions+=166;goto B6207e1;
case 0x6207e3:c.instructions+=165;goto B6207e3;
case 0x6207e6:c.instructions+=164;goto B6207e6;
case 0x6207ea:c.instructions+=163;goto B6207ea;
case 0x6207ee:c.instructions+=162;goto B6207ee;
case 0x6207f0:c.instructions+=161;goto B6207f0;
case 0x6207f4:c.instructions+=160;goto B6207f4;
case 0x6207f8:c.instructions+=159;goto B6207f8;
case 0x6207ff:c.instructions+=158;goto B6207ff;
case 0x620803:c.instructions+=157;goto B620803;
case 0x620807:c.instructions+=156;goto B620807;
case 0x62080e:c.instructions+=155;goto B62080e;
case 0x620812:c.instructions+=154;goto B620812;
case 0x620816:c.instructions+=153;goto B620816;
case 0x62081a:c.instructions+=152;goto B62081a;
case 0x62081e:c.instructions+=151;goto B62081e;
case 0x620822:c.instructions+=150;goto B620822;
case 0x620826:c.instructions+=149;goto B620826;
case 0x62082a:c.instructions+=148;goto B62082a;
case 0x62082e:c.instructions+=147;goto B62082e;
case 0x620830:c.instructions+=146;goto B620830;
case 0x620834:c.instructions+=145;goto B620834;
case 0x620838:c.instructions+=144;goto B620838;
case 0x62083c:c.instructions+=143;goto B62083c;
case 0x62083e:c.instructions+=142;goto B62083e;
case 0x620842:c.instructions+=141;goto B620842;
case 0x620846:c.instructions+=140;goto B620846;
case 0x62084a:c.instructions+=139;goto B62084a;
case 0x62084e:c.instructions+=138;goto B62084e;
case 0x620852:c.instructions+=137;goto B620852;
case 0x620854:c.instructions+=136;goto B620854;
case 0x620858:c.instructions+=135;goto B620858;
case 0x62085c:c.instructions+=134;goto B62085c;
case 0x62085e:c.instructions+=133;goto B62085e;
case 0x620862:c.instructions+=132;goto B620862;
case 0x620866:c.instructions+=131;goto B620866;
case 0x62086a:c.instructions+=130;goto B62086a;
case 0x62086e:c.instructions+=129;goto B62086e;
case 0x620872:c.instructions+=128;goto B620872;
case 0x620874:c.instructions+=127;goto B620874;
case 0x620878:c.instructions+=126;goto B620878;
case 0x62087c:c.instructions+=125;goto B62087c;
case 0x62087e:c.instructions+=124;goto B62087e;
case 0x620882:c.instructions+=123;goto B620882;
case 0x620889:c.instructions+=122;goto B620889;
case 0x62088b:c.instructions+=121;goto B62088b;
case 0x62088f:c.instructions+=120;goto B62088f;
case 0x620896:c.instructions+=119;goto B620896;
case 0x62089a:c.instructions+=118;goto B62089a;
case 0x62089e:c.instructions+=117;goto B62089e;
case 0x6208a5:c.instructions+=116;goto B6208a5;
case 0x6208a9:c.instructions+=115;goto B6208a9;
case 0x6208b0:c.instructions+=114;goto B6208b0;
case 0x6208b4:c.instructions+=113;goto B6208b4;
case 0x6208bb:c.instructions+=112;goto B6208bb;
case 0x6208bd:c.instructions+=111;goto B6208bd;
case 0x6208c4:c.instructions+=110;goto B6208c4;
case 0x6208c8:c.instructions+=109;goto B6208c8;
case 0x6208cc:c.instructions+=108;goto B6208cc;
case 0x6208d0:c.instructions+=107;goto B6208d0;
case 0x6208d7:c.instructions+=106;goto B6208d7;
case 0x6208db:c.instructions+=105;goto B6208db;
case 0x6208e2:c.instructions+=104;goto B6208e2;
case 0x6208e6:c.instructions+=103;goto B6208e6;
case 0x6208ed:c.instructions+=102;goto B6208ed;
case 0x6208ef:c.instructions+=101;goto B6208ef;
case 0x6208f6:c.instructions+=100;goto B6208f6;
case 0x6208fa:c.instructions+=99;goto B6208fa;
case 0x6208fe:c.instructions+=98;goto B6208fe;
case 0x620902:c.instructions+=97;goto B620902;
case 0x620906:c.instructions+=96;goto B620906;
case 0x62090a:c.instructions+=95;goto B62090a;
case 0x620911:c.instructions+=94;goto B620911;
case 0x620915:c.instructions+=93;goto B620915;
case 0x62091c:c.instructions+=92;goto B62091c;
case 0x62091e:c.instructions+=91;goto B62091e;
case 0x620922:c.instructions+=90;goto B620922;
case 0x620926:c.instructions+=89;goto B620926;
case 0x62092d:c.instructions+=88;goto B62092d;
case 0x620934:c.instructions+=87;goto B620934;
case 0x620936:c.instructions+=86;goto B620936;
case 0x62093d:c.instructions+=85;goto B62093d;
case 0x620944:c.instructions+=84;goto B620944;
case 0x620948:c.instructions+=83;goto B620948;
case 0x62094c:c.instructions+=82;goto B62094c;
case 0x620950:c.instructions+=81;goto B620950;
case 0x620954:c.instructions+=80;goto B620954;
case 0x620958:c.instructions+=79;goto B620958;
case 0x62095c:c.instructions+=78;goto B62095c;
case 0x620960:c.instructions+=77;goto B620960;
case 0x620964:c.instructions+=76;goto B620964;
case 0x620966:c.instructions+=75;goto B620966;
case 0x62096a:c.instructions+=74;goto B62096a;
case 0x62096e:c.instructions+=73;goto B62096e;
case 0x620972:c.instructions+=72;goto B620972;
case 0x620976:c.instructions+=71;goto B620976;
case 0x62097a:c.instructions+=70;goto B62097a;
case 0x62097e:c.instructions+=69;goto B62097e;
case 0x620982:c.instructions+=68;goto B620982;
case 0x620986:c.instructions+=67;goto B620986;
case 0x62098d:c.instructions+=66;goto B62098d;
case 0x620991:c.instructions+=65;goto B620991;
case 0x620993:c.instructions+=64;goto B620993;
case 0x620997:c.instructions+=63;goto B620997;
case 0x620999:c.instructions+=62;goto B620999;
case 0x62099b:c.instructions+=61;goto B62099b;
case 0x62099f:c.instructions+=60;goto B62099f;
case 0x6209a3:c.instructions+=59;goto B6209a3;
case 0x6209a7:c.instructions+=58;goto B6209a7;
case 0x6209ab:c.instructions+=57;goto B6209ab;
case 0x6209af:c.instructions+=56;goto B6209af;
case 0x6209b3:c.instructions+=55;goto B6209b3;
case 0x6209b7:c.instructions+=54;goto B6209b7;
case 0x6209bb:c.instructions+=53;goto B6209bb;
case 0x6209bf:c.instructions+=52;goto B6209bf;
case 0x6209c1:c.instructions+=51;goto B6209c1;
case 0x6209c5:c.instructions+=50;goto B6209c5;
case 0x6209cc:c.instructions+=49;goto B6209cc;
case 0x6209d3:c.instructions+=48;goto B6209d3;
case 0x6209d5:c.instructions+=47;goto B6209d5;
case 0x6209dc:c.instructions+=46;goto B6209dc;
case 0x6209e0:c.instructions+=45;goto B6209e0;
case 0x6209e7:c.instructions+=44;goto B6209e7;
case 0x6209eb:c.instructions+=43;goto B6209eb;
case 0x6209f2:c.instructions+=42;goto B6209f2;
case 0x6209f9:c.instructions+=41;goto B6209f9;
case 0x6209fd:c.instructions+=40;goto B6209fd;
case 0x620a04:c.instructions+=39;goto B620a04;
case 0x620a08:c.instructions+=38;goto B620a08;
case 0x620a0f:c.instructions+=37;goto B620a0f;
case 0x620a13:c.instructions+=36;goto B620a13;
case 0x620a1a:c.instructions+=35;goto B620a1a;
case 0x620a1e:c.instructions+=34;goto B620a1e;
case 0x620a25:c.instructions+=33;goto B620a25;
case 0x620a29:c.instructions+=32;goto B620a29;
case 0x620a2d:c.instructions+=31;goto B620a2d;
case 0x620a34:c.instructions+=30;goto B620a34;
case 0x620a3b:c.instructions+=29;goto B620a3b;
case 0x620a42:c.instructions+=28;goto B620a42;
case 0x620a44:c.instructions+=27;goto B620a44;
case 0x620a48:c.instructions+=26;goto B620a48;
case 0x620a4f:c.instructions+=25;goto B620a4f;
case 0x620a56:c.instructions+=24;goto B620a56;
case 0x620a5d:c.instructions+=23;goto B620a5d;
case 0x620a64:c.instructions+=22;goto B620a64;
case 0x620a6b:c.instructions+=21;goto B620a6b;
case 0x620a6d:c.instructions+=20;goto B620a6d;
case 0x620a74:c.instructions+=19;goto B620a74;
case 0x620a7b:c.instructions+=18;goto B620a7b;
case 0x620a82:c.instructions+=17;goto B620a82;
case 0x620a85:c.instructions+=16;goto B620a85;
case 0x620a8c:c.instructions+=15;goto B620a8c;
case 0x620a93:c.instructions+=14;goto B620a93;
case 0x620a95:c.instructions+=13;goto B620a95;
case 0x620a9c:c.instructions+=12;goto B620a9c;
case 0x620aa3:c.instructions+=11;goto B620aa3;
case 0x620aa4:c.instructions+=10;goto B620aa4;
case 0x620aa7:c.instructions+=9;goto B620aa7;
case 0x620aae:c.instructions+=8;goto B620aae;
case 0x620ab5:c.instructions+=7;goto B620ab5;
case 0x620abc:c.instructions+=6;goto B620abc;
case 0x620ac3:c.instructions+=5;goto B620ac3;
case 0x620ac4:c.instructions+=4;goto B620ac4;
case 0x620acb:c.instructions+=3;goto B620acb;
case 0x620acc:c.instructions+=2;goto B620acc;
case 0x620ad3:c.instructions+=1;goto B620ad3;
case 0x620ad8:goto L620ad8;
case 0x620ad9:c.instructions+=3;goto B620ad9;
case 0x620adb:c.instructions+=2;goto B620adb;
case 0x620adc:c.instructions+=1;goto B620adc;
case 0x620ae0:goto L620ae0;
case 0x620ae1:c.instructions+=11;goto B620ae1;
case 0x620ae3:c.instructions+=10;goto B620ae3;
case 0x620ae6:c.instructions+=9;goto B620ae6;
case 0x620aec:c.instructions+=8;goto B620aec;
case 0x620aed:c.instructions+=7;goto B620aed;
case 0x620aee:c.instructions+=6;goto B620aee;
case 0x620af0:c.instructions+=5;goto B620af0;
case 0x620af6:c.instructions+=4;goto B620af6;
case 0x620af8:c.instructions+=3;goto B620af8;
case 0x620af9:c.instructions+=2;goto B620af9;
case 0x620afd:c.instructions+=1;goto B620afd;
case 0x620aff:goto L620aff;
case 0x620b04:c.instructions+=1;goto B620b04;
case 0x620b06:goto L620b06;
case 0x620b09:c.instructions+=4;goto B620b09;
case 0x620b0f:c.instructions+=3;goto B620b0f;
case 0x620b11:c.instructions+=2;goto B620b11;
case 0x620b12:c.instructions+=1;goto B620b12;
case 0x620b17:goto L620b17;
case 0x620b1a:goto L620b1a;
case 0x620b1c:c.instructions+=6;goto B620b1c;
case 0x620b1f:c.instructions+=5;goto B620b1f;
case 0x620b25:c.instructions+=4;goto B620b25;
case 0x620b28:c.instructions+=3;goto B620b28;
case 0x620b2a:c.instructions+=2;goto B620b2a;
case 0x620b31:c.instructions+=1;goto B620b31;
case 0x620b33:goto L620b33;
case 0x620b38:c.instructions+=1;goto B620b38;
case 0x620b3a:goto L620b3a;
case 0x620b3d:c.instructions+=4;goto B620b3d;
case 0x620b43:c.instructions+=3;goto B620b43;
case 0x620b45:c.instructions+=2;goto B620b45;
case 0x620b46:c.instructions+=1;goto B620b46;
case 0x620b4b:goto L620b4b;
case 0x620b4e:goto L620b4e;
case 0x620b50:c.instructions+=7;goto B620b50;
case 0x620b53:c.instructions+=6;goto B620b53;
case 0x620b59:c.instructions+=5;goto B620b59;
case 0x620b5c:c.instructions+=4;goto B620b5c;
case 0x620b5e:c.instructions+=3;goto B620b5e;
case 0x620b60:c.instructions+=2;goto B620b60;
case 0x620b67:c.instructions+=1;goto B620b67;
case 0x620b69:goto L620b69;
case 0x620b6e:c.instructions+=1;goto B620b6e;
case 0x620b70:goto L620b70;
case 0x620b73:c.instructions+=4;goto B620b73;
case 0x620b79:c.instructions+=3;goto B620b79;
case 0x620b7b:c.instructions+=2;goto B620b7b;
case 0x620b7c:c.instructions+=1;goto B620b7c;
case 0x620b81:goto L620b81;
case 0x620b84:goto L620b84;
case 0x620b86:c.instructions+=6;goto B620b86;
case 0x620b89:c.instructions+=5;goto B620b89;
case 0x620b8f:c.instructions+=4;goto B620b8f;
case 0x620b92:c.instructions+=3;goto B620b92;
case 0x620b94:c.instructions+=2;goto B620b94;
case 0x620b9b:c.instructions+=1;goto B620b9b;
case 0x620b9d:goto L620b9d;
case 0x620ba2:c.instructions+=1;goto B620ba2;
case 0x620ba4:goto L620ba4;
case 0x620ba7:c.instructions+=4;goto B620ba7;
case 0x620bad:c.instructions+=3;goto B620bad;
case 0x620baf:c.instructions+=2;goto B620baf;
case 0x620bb0:c.instructions+=1;goto B620bb0;
case 0x620bb5:goto L620bb5;
case 0x620bb8:goto L620bb8;
case 0x620bba:c.instructions+=6;goto B620bba;
case 0x620bbd:c.instructions+=5;goto B620bbd;
case 0x620bc0:c.instructions+=4;goto B620bc0;
case 0x620bc2:c.instructions+=3;goto B620bc2;
case 0x620bcd:c.instructions+=2;goto B620bcd;
case 0x620bd4:c.instructions+=1;goto B620bd4;
case 0x620bd6:goto L620bd6;
case 0x620bdc:c.instructions+=6;goto B620bdc;
case 0x620bdf:c.instructions+=5;goto B620bdf;
case 0x620be5:c.instructions+=4;goto B620be5;
case 0x620be7:c.instructions+=3;goto B620be7;
case 0x620be9:c.instructions+=2;goto B620be9;
case 0x620bea:c.instructions+=1;goto B620bea;
case 0x620bef:goto L620bef;
case 0x620bf6:c.instructions+=1;goto B620bf6;
case 0x620bf9:goto L620bf9;
case 0x620bfb:c.instructions+=2;goto B620bfb;
case 0x620c06:c.instructions+=1;goto B620c06;
case 0x620c08:goto L620c08;
case 0x620c0e:c.instructions+=6;goto B620c0e;
case 0x620c11:c.instructions+=5;goto B620c11;
case 0x620c17:c.instructions+=4;goto B620c17;
case 0x620c19:c.instructions+=3;goto B620c19;
case 0x620c1b:c.instructions+=2;goto B620c1b;
case 0x620c1c:c.instructions+=1;goto B620c1c;
case 0x620c21:goto L620c21;
case 0x620c28:c.instructions+=1;goto B620c28;
case 0x620c2b:goto L620c2b;
case 0x620c32:c.instructions+=6;goto B620c32;
case 0x620c35:c.instructions+=5;goto B620c35;
case 0x620c38:c.instructions+=4;goto B620c38;
case 0x620c3f:c.instructions+=3;goto B620c3f;
case 0x620c44:c.instructions+=2;goto B620c44;
case 0x620c46:c.instructions+=1;goto B620c46;
case 0x620c48:goto L620c48;
case 0x620c4a:c.instructions+=1;goto B620c4a;
case 0x620c4f:goto L620c4f;
case 0x620c51:c.instructions+=1;goto B620c51;
case 0x620c53:goto L620c53;
case 0x620c55:c.instructions+=2;goto B620c55;
case 0x620c57:c.instructions+=1;goto B620c57;
case 0x620c5c:goto L620c5c;
case 0x620c66:c.instructions+=1;goto B620c66;
case 0x620c6b:goto L620c6b;
case 0x620c6e:c.instructions+=5;goto B620c6e;
case 0x620c71:c.instructions+=4;goto B620c71;
case 0x620c76:c.instructions+=3;goto B620c76;
case 0x620c77:c.instructions+=2;goto B620c77;
case 0x620c79:c.instructions+=1;goto B620c79;
case 0x620c7e:goto L620c7e;
case 0x620c80:c.instructions+=2;goto B620c80;
case 0x620c84:c.instructions+=1;goto B620c84;
case 0x620c89:goto L620c89;
case 0x620c8c:c.instructions+=1;goto B620c8c;
case 0x620c8e:goto L620c8e;
case 0x620c95:c.instructions+=1;goto B620c95;
case 0x620c97:goto L620c97;
case 0x620c9b:c.instructions+=2;goto B620c9b;
case 0x620ca1:c.instructions+=1;goto B620ca1;
case 0x620ca6:goto L620ca6;
case 0x620ca8:c.instructions+=4;goto B620ca8;
case 0x620cad:c.instructions+=3;goto B620cad;
case 0x620cb1:c.instructions+=2;goto B620cb1;
case 0x620cb4:c.instructions+=1;goto B620cb4;
case 0x620cb7:goto L620cb7;
case 0x620cba:c.instructions+=1;goto B620cba;
case 0x620cc0:goto L620cc0;
case 0x620cc2:c.instructions+=4;goto B620cc2;
case 0x620cc4:c.instructions+=3;goto B620cc4;
case 0x620cc6:c.instructions+=2;goto B620cc6;
case 0x620ccd:c.instructions+=1;goto B620ccd;
case 0x620ccf:goto L620ccf;
case 0x620cd2:c.instructions+=2;goto B620cd2;
case 0x620cd9:c.instructions+=1;goto B620cd9;
case 0x620cdb:goto L620cdb;
case 0x620ce2:goto L620ce2;
case 0x620ce8:c.instructions+=11;goto B620ce8;
case 0x620ceb:c.instructions+=10;goto B620ceb;
case 0x620cee:c.instructions+=9;goto B620cee;
case 0x620cf4:c.instructions+=8;goto B620cf4;
case 0x620cf7:c.instructions+=7;goto B620cf7;
case 0x620cfe:c.instructions+=6;goto B620cfe;
case 0x620d03:c.instructions+=5;goto B620d03;
case 0x620d06:c.instructions+=4;goto B620d06;
case 0x620d0c:c.instructions+=3;goto B620d0c;
case 0x620d0e:c.instructions+=2;goto B620d0e;
case 0x620d15:c.instructions+=1;goto B620d15;
case 0x620d17:goto L620d17;
case 0x620d1d:c.instructions+=6;goto B620d1d;
case 0x620d22:c.instructions+=5;goto B620d22;
case 0x620d28:c.instructions+=4;goto B620d28;
case 0x620d2e:c.instructions+=3;goto B620d2e;
case 0x620d34:c.instructions+=2;goto B620d34;
case 0x620d3b:c.instructions+=1;goto B620d3b;
case 0x620d3d:goto L620d3d;
case 0x620d3f:c.instructions+=4;goto B620d3f;
case 0x620d41:c.instructions+=3;goto B620d41;
case 0x620d48:c.instructions+=2;goto B620d48;
case 0x620d4d:c.instructions+=1;goto B620d4d;
case 0x620d52:goto L620d52;
case 0x620d55:c.instructions+=3;goto B620d55;
case 0x620d57:c.instructions+=2;goto B620d57;
case 0x620d5c:c.instructions+=1;goto B620d5c;
case 0x620d5e:goto L620d5e;
case 0x620d64:c.instructions+=5;goto B620d64;
case 0x620d66:c.instructions+=4;goto B620d66;
case 0x620d6c:c.instructions+=3;goto B620d6c;
case 0x620d72:c.instructions+=2;goto B620d72;
case 0x620d74:c.instructions+=1;goto B620d74;
case 0x620d76:goto L620d76;
case 0x620d78:c.instructions+=2;goto B620d78;
case 0x620d7a:c.instructions+=1;goto B620d7a;
case 0x620d7f:goto L620d7f;
case 0x620d82:c.instructions+=2;goto B620d82;
case 0x620d84:c.instructions+=1;goto B620d84;
case 0x620d86:goto L620d86;
case 0x620d8c:c.instructions+=5;goto B620d8c;
case 0x620d8e:c.instructions+=4;goto B620d8e;
case 0x620d94:c.instructions+=3;goto B620d94;
case 0x620d9a:c.instructions+=2;goto B620d9a;
case 0x620da5:c.instructions+=1;goto B620da5;
case 0x620da7:goto L620da7;
case 0x620da9:c.instructions+=4;goto B620da9;
case 0x620dab:c.instructions+=3;goto B620dab;
case 0x620db2:c.instructions+=2;goto B620db2;
case 0x620db7:c.instructions+=1;goto B620db7;
case 0x620dbc:goto L620dbc;
case 0x620dbf:c.instructions+=2;goto B620dbf;
case 0x620dc1:c.instructions+=1;goto B620dc1;
case 0x620dc3:goto L620dc3;
case 0x620dc9:c.instructions+=5;goto B620dc9;
case 0x620dcb:c.instructions+=4;goto B620dcb;
case 0x620dd1:c.instructions+=3;goto B620dd1;
case 0x620dd7:c.instructions+=2;goto B620dd7;
case 0x620dd9:c.instructions+=1;goto B620dd9;
case 0x620ddb:goto L620ddb;
case 0x620ddd:c.instructions+=2;goto B620ddd;
case 0x620ddf:c.instructions+=1;goto B620ddf;
case 0x620de4:goto L620de4;
case 0x620de7:c.instructions+=2;goto B620de7;
case 0x620de9:c.instructions+=1;goto B620de9;
case 0x620deb:goto L620deb;
case 0x620df0:c.instructions+=5;goto B620df0;
case 0x620df3:c.instructions+=4;goto B620df3;
case 0x620dfd:c.instructions+=3;goto B620dfd;
case 0x620e02:c.instructions+=2;goto B620e02;
case 0x620e04:c.instructions+=1;goto B620e04;
case 0x620e06:goto L620e06;
case 0x620e0c:c.instructions+=1;goto B620e0c;
case 0x620e0e:goto L620e0e;
case 0x620e15:c.instructions+=3;goto B620e15;
case 0x620e17:c.instructions+=2;goto B620e17;
case 0x620e1e:c.instructions+=1;goto B620e1e;
case 0x620e24:goto L620e24;
case 0x620e26:c.instructions+=1;goto B620e26;
case 0x620e2c:goto L620e2c;
case 0x620e2e:c.instructions+=1;goto B620e2e;
case 0x620e34:goto L620e34;
case 0x620e36:c.instructions+=1;goto B620e36;
case 0x620e3c:goto L620e3c;
case 0x620e3f:c.instructions+=3;goto B620e3f;
case 0x620e40:c.instructions+=2;goto B620e40;
case 0x620e41:c.instructions+=1;goto B620e41;
case 0x620e46:goto L620e46;
case 0x620e49:c.instructions+=3;goto B620e49;
case 0x620e4c:c.instructions+=2;goto B620e4c;
case 0x620e4e:c.instructions+=1;goto B620e4e;
case 0x620e50:goto L620e50;
case 0x620e57:c.instructions+=2;goto B620e57;
case 0x620e59:c.instructions+=1;goto B620e59;
case 0x620e5b:goto L620e5b;
case 0x620e5e:c.instructions+=14;goto B620e5e;
case 0x620e61:c.instructions+=13;goto B620e61;
case 0x620e63:c.instructions+=12;goto B620e63;
case 0x620e66:c.instructions+=11;goto B620e66;
case 0x620e68:c.instructions+=10;goto B620e68;
case 0x620e6a:c.instructions+=9;goto B620e6a;
case 0x620e71:c.instructions+=8;goto B620e71;
case 0x620e78:c.instructions+=7;goto B620e78;
case 0x620e7f:c.instructions+=6;goto B620e7f;
case 0x620e86:c.instructions+=5;goto B620e86;
case 0x620e88:c.instructions+=4;goto B620e88;
case 0x620e8f:c.instructions+=3;goto B620e8f;
case 0x620e90:c.instructions+=2;goto B620e90;
case 0x620e96:c.instructions+=1;goto B620e96;
case 0x620e9b:goto L620e9b;
case 0x620e9e:c.instructions+=11;goto B620e9e;
case 0x620ea5:c.instructions+=10;goto B620ea5;
case 0x620ea8:c.instructions+=9;goto B620ea8;
case 0x620eaa:c.instructions+=8;goto B620eaa;
case 0x620eac:c.instructions+=7;goto B620eac;
case 0x620eaf:c.instructions+=6;goto B620eaf;
case 0x620eb1:c.instructions+=5;goto B620eb1;
case 0x620eb4:c.instructions+=4;goto B620eb4;
case 0x620eb6:c.instructions+=3;goto B620eb6;
case 0x620eb9:c.instructions+=2;goto B620eb9;
case 0x620ebc:c.instructions+=1;goto B620ebc;
case 0x620ebe:goto L620ebe;
case 0x620ec1:c.instructions+=6;goto B620ec1;
case 0x620ec3:c.instructions+=5;goto B620ec3;
case 0x620ec6:c.instructions+=4;goto B620ec6;
case 0x620ec9:c.instructions+=3;goto B620ec9;
case 0x620ecc:c.instructions+=2;goto B620ecc;
case 0x620ecf:c.instructions+=1;goto B620ecf;
case 0x620ed2:goto L620ed2;
case 0x620ed6:c.instructions+=10;goto B620ed6;
case 0x620ed9:c.instructions+=9;goto B620ed9;
case 0x620eda:c.instructions+=8;goto B620eda;
case 0x620edd:c.instructions+=7;goto B620edd;
case 0x620ede:c.instructions+=6;goto B620ede;
case 0x620ee5:c.instructions+=5;goto B620ee5;
case 0x620ee6:c.instructions+=4;goto B620ee6;
case 0x620ee9:c.instructions+=3;goto B620ee9;
case 0x620ef0:c.instructions+=2;goto B620ef0;
case 0x620ef7:c.instructions+=1;goto B620ef7;
case 0x620efc:goto L620efc;
case 0x620efe:c.instructions+=1;goto B620efe;
case 0x620f04:goto L620f04;
case 0x620f0b:c.instructions+=12;goto B620f0b;
case 0x620f0e:c.instructions+=11;goto B620f0e;
case 0x620f11:c.instructions+=10;goto B620f11;
case 0x620f18:c.instructions+=9;goto B620f18;
case 0x620f1b:c.instructions+=8;goto B620f1b;
case 0x620f22:c.instructions+=7;goto B620f22;
case 0x620f29:c.instructions+=6;goto B620f29;
case 0x620f2c:c.instructions+=5;goto B620f2c;
case 0x620f33:c.instructions+=4;goto B620f33;
case 0x620f38:c.instructions+=3;goto B620f38;
case 0x620f3a:c.instructions+=2;goto B620f3a;
case 0x620f45:c.instructions+=1;goto B620f45;
case 0x620f47:goto L620f47;
case 0x620f51:goto L620f51;
case 0x620f58:c.instructions+=2;goto B620f58;
case 0x620f5a:c.instructions+=1;goto B620f5a;
case 0x620f5c:goto L620f5c;
case 0x620f5f:c.instructions+=4;goto B620f5f;
case 0x620f62:c.instructions+=3;goto B620f62;
case 0x620f63:c.instructions+=2;goto B620f63;
case 0x620f65:c.instructions+=1;goto B620f65;
case 0x620f6a:goto L620f6a;
case 0x620f71:c.instructions+=2;goto B620f71;
case 0x620f72:c.instructions+=1;goto B620f72;
case 0x620f77:goto L620f77;
case 0x620f79:goto L620f79;
case 0x620f7c:c.instructions+=4;goto B620f7c;
case 0x620f83:c.instructions+=3;goto B620f83;
case 0x620f84:c.instructions+=2;goto B620f84;
case 0x620f85:c.instructions+=1;goto B620f85;
case 0x620f8a:goto L620f8a;
case 0x620f8d:goto L620f8d;
case 0x620f90:c.instructions+=10;goto B620f90;
case 0x620f92:c.instructions+=9;goto B620f92;
case 0x620f99:c.instructions+=8;goto B620f99;
case 0x620f9c:c.instructions+=7;goto B620f9c;
case 0x620f9f:c.instructions+=6;goto B620f9f;
case 0x620fa2:c.instructions+=5;goto B620fa2;
case 0x620fa5:c.instructions+=4;goto B620fa5;
case 0x620fa8:c.instructions+=3;goto B620fa8;
case 0x620faf:c.instructions+=2;goto B620faf;
case 0x620fb6:c.instructions+=1;goto B620fb6;
case 0x620fb8:goto L620fb8;
case 0x620fbc:c.instructions+=3;goto B620fbc;
case 0x620fc2:c.instructions+=2;goto B620fc2;
case 0x620fc3:c.instructions+=1;goto B620fc3;
case 0x620fc8:goto L620fc8;
case 0x620fcb:goto L620fcb;
case 0x620fd2:c.instructions+=2;goto B620fd2;
case 0x620fd3:c.instructions+=1;goto B620fd3;
case 0x620fd8:goto L620fd8;
case 0x620fdb:c.instructions+=10;goto B620fdb;
case 0x620fde:c.instructions+=9;goto B620fde;
case 0x620fe1:c.instructions+=8;goto B620fe1;
case 0x620fe2:c.instructions+=7;goto B620fe2;
case 0x620fe7:c.instructions+=6;goto B620fe7;
case 0x620fe9:c.instructions+=5;goto B620fe9;
case 0x620fea:c.instructions+=4;goto B620fea;
case 0x620feb:c.instructions+=3;goto B620feb;
case 0x620ff2:c.instructions+=2;goto B620ff2;
case 0x620ff3:c.instructions+=1;goto B620ff3;
case 0x620ff8:goto L620ff8;
case 0x620ffb:c.instructions+=1;goto B620ffb;
default:missing_instruction(c.pc);}
B620001:L620001:{c.instructions+=1;NFSU2_TR(0x620001);
if(r1(R+518)){{goto L62000f;}}
}
B620003:L620003:{c.instructions+=2;NFSU2_TR(0x620003);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620009:{NFSU2_TR(0x620009);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62000f:L62000f:{c.instructions+=4;NFSU2_TR(0x62000f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x24ull))));
}
B620012:{NFSU2_TR(0x620012);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
}
B620017:{NFSU2_TR(0x620017);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8a43c4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8a43c4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B62001d:{NFSU2_TR(0x62001d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x61ff70u,61f);}
}
B620023:L620023:{c.instructions+=2;NFSU2_TR(0x620023);
u8 U[4];
w4(U+0,u32(0x7a887cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620028:{NFSU2_TR(0x620028);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62002dull));
TAIL_STATIC(0x43db50u,43d);
}
B62002d:L62002d:{c.instructions+=3;NFSU2_TR(0x62002d);
u8 U[4];
w4(U+0,u32(0x7a886cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620032:{NFSU2_TR(0x620032);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620036:{NFSU2_TR(0x620036);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62003bull));
TAIL_STATIC(0x43db50u,43d);
}
B62003b:L62003b:{c.instructions+=3;NFSU2_TR(0x62003b);
u8 U[4];
w4(U+0,u32(0x7a885cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620040:{NFSU2_TR(0x620040);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620044:{NFSU2_TR(0x620044);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620049ull));
TAIL_STATIC(0x43db50u,43d);
}
B620049:L620049:{c.instructions+=3;NFSU2_TR(0x620049);
u8 U[4];
w4(U+0,u32(0x7a884cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62004e:{NFSU2_TR(0x62004e);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620052:{NFSU2_TR(0x620052);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620057ull));
TAIL_STATIC(0x43db50u,43d);
}
B620057:L620057:{c.instructions+=3;NFSU2_TR(0x620057);
u8 U[4];
w4(U+0,u32(0x7a883cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62005c:{NFSU2_TR(0x62005c);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620060:{NFSU2_TR(0x620060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620065ull));
TAIL_STATIC(0x43db50u,43d);
}
B620065:L620065:{c.instructions+=3;NFSU2_TR(0x620065);
u8 U[4];
w4(U+0,u32(0x7a882cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62006a:{NFSU2_TR(0x62006a);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62006e:{NFSU2_TR(0x62006e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620073ull));
TAIL_STATIC(0x43db50u,43d);
}
B620073:L620073:{c.instructions+=3;NFSU2_TR(0x620073);
u8 U[4];
w4(U+0,u32(0x7a881cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620078:{NFSU2_TR(0x620078);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62007c:{NFSU2_TR(0x62007c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620081ull));
TAIL_STATIC(0x43db50u,43d);
}
B620081:L620081:{c.instructions+=3;NFSU2_TR(0x620081);
u8 U[4];
w4(U+0,u32(0x7a880cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620086:{NFSU2_TR(0x620086);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62008a:{NFSU2_TR(0x62008a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62008full));
TAIL_STATIC(0x43db50u,43d);
}
B62008f:L62008f:{c.instructions+=4;NFSU2_TR(0x62008f);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620093:{NFSU2_TR(0x620093);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B620096:{NFSU2_TR(0x620096);
w4(R+4,u32(0x2ull));
}
B62009b:{NFSU2_TR(0x62009b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13ecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6200a1:L6200a1:{c.instructions+=3;NFSU2_TR(0x6200a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+8),(U+0),4);
}
B6200a4:{NFSU2_TR(0x6200a4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B6200aa:{NFSU2_TR(0x6200aa);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6200b1;}}
}
B6200ac:L6200ac:{c.instructions+=3;NFSU2_TR(0x6200ac);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6200ad:{NFSU2_TR(0x6200ad);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffff8ull))));
}
B6200b0:{NFSU2_TR(0x6200b0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6200b1:L6200b1:{c.instructions+=4;NFSU2_TR(0x6200b1);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6200b5:{NFSU2_TR(0x6200b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6200b8:{NFSU2_TR(0x6200b8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6200ba:{NFSU2_TR(0x6200ba);
if(r1(R+518)){{goto L6200c1;}}
}
B6200bc:L6200bc:{c.instructions+=2;NFSU2_TR(0x6200bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6200be:{NFSU2_TR(0x6200be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6200c1:L6200c1:{c.instructions+=3;NFSU2_TR(0x6200c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B6200c4:{NFSU2_TR(0x6200c4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B6200ca:{NFSU2_TR(0x6200ca);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6200d1;}}
}
B6200cc:L6200cc:{c.instructions+=3;NFSU2_TR(0x6200cc);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6200cd:{NFSU2_TR(0x6200cd);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffff8ull))));
}
B6200d0:{NFSU2_TR(0x6200d0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6200d1:L6200d1:{c.instructions+=4;NFSU2_TR(0x6200d1);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6200d5:{NFSU2_TR(0x6200d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6200d8:{NFSU2_TR(0x6200d8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6200db:{NFSU2_TR(0x6200db);
if(r1(R+518)){{goto L6200e3;}}
}
B6200dd:L6200dd:{c.instructions+=2;NFSU2_TR(0x6200dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6200e0:{NFSU2_TR(0x6200e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6200e3:L6200e3:{c.instructions+=3;NFSU2_TR(0x6200e3);
__builtin_memmove((R+8),(R+4),4);
}
B6200e5:{NFSU2_TR(0x6200e5);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B6200eb:{NFSU2_TR(0x6200eb);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6200f2;}}
}
B6200ed:L6200ed:{c.instructions+=3;NFSU2_TR(0x6200ed);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6200ee:{NFSU2_TR(0x6200ee);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffff8ull))));
}
B6200f1:{NFSU2_TR(0x6200f1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6200f2:L6200f2:{c.instructions+=4;NFSU2_TR(0x6200f2);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6200f6:{NFSU2_TR(0x6200f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6200f9:{NFSU2_TR(0x6200f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6200fc:{NFSU2_TR(0x6200fc);
if(r1(R+518)){{goto L620104;}}
}
B6200fe:L6200fe:{c.instructions+=2;NFSU2_TR(0x6200fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620101:{NFSU2_TR(0x620101);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620104:L620104:{c.instructions+=3;NFSU2_TR(0x620104);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B620107:{NFSU2_TR(0x620107);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B62010d:{NFSU2_TR(0x62010d);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L620114;}}
}
B62010f:L62010f:{c.instructions+=3;NFSU2_TR(0x62010f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B620110:{NFSU2_TR(0x620110);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffff8ull))));
}
B620113:{NFSU2_TR(0x620113);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B620114:L620114:{c.instructions+=4;NFSU2_TR(0x620114);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B620118:{NFSU2_TR(0x620118);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62011b:{NFSU2_TR(0x62011b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B62011e:{NFSU2_TR(0x62011e);
if(r1(R+518)){{goto L620126;}}
}
B620120:L620120:{c.instructions+=2;NFSU2_TR(0x620120);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620123:{NFSU2_TR(0x620123);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620126:L620126:{c.instructions+=3;NFSU2_TR(0x620126);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B620129:{NFSU2_TR(0x620129);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B62012f:{NFSU2_TR(0x62012f);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L620136;}}
}
B620131:L620131:{c.instructions+=3;NFSU2_TR(0x620131);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B620132:{NFSU2_TR(0x620132);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffff8ull))));
}
B620135:{NFSU2_TR(0x620135);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B620136:L620136:{c.instructions+=4;NFSU2_TR(0x620136);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B62013a:{NFSU2_TR(0x62013a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62013d:{NFSU2_TR(0x62013d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B620140:{NFSU2_TR(0x620140);
if(r1(R+518)){{goto L620148;}}
}
B620142:L620142:{c.instructions+=2;NFSU2_TR(0x620142);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620145:{NFSU2_TR(0x620145);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620148:L620148:{c.instructions+=3;NFSU2_TR(0x620148);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((R+8),(U+0),4);
}
B62014b:{NFSU2_TR(0x62014b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B620151:{NFSU2_TR(0x620151);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L620158;}}
}
B620153:L620153:{c.instructions+=3;NFSU2_TR(0x620153);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B620154:{NFSU2_TR(0x620154);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffff8ull))));
}
B620157:{NFSU2_TR(0x620157);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B620158:L620158:{c.instructions+=4;NFSU2_TR(0x620158);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B62015c:{NFSU2_TR(0x62015c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62015f:{NFSU2_TR(0x62015f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B620162:{NFSU2_TR(0x620162);
if(r1(R+518)){{goto L62016a;}}
}
B620164:L620164:{c.instructions+=2;NFSU2_TR(0x620164);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620167:{NFSU2_TR(0x620167);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62016a:L62016a:{c.instructions+=3;NFSU2_TR(0x62016a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B62016d:{NFSU2_TR(0x62016d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B620173:{NFSU2_TR(0x620173);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L62017a;}}
}
B620175:L620175:{c.instructions+=3;NFSU2_TR(0x620175);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B620176:{NFSU2_TR(0x620176);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffff8ull))));
}
B620179:{NFSU2_TR(0x620179);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B62017a:L62017a:{c.instructions+=4;NFSU2_TR(0x62017a);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B62017e:{NFSU2_TR(0x62017e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620181:{NFSU2_TR(0x620181);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B620184:{NFSU2_TR(0x620184);
if(r1(R+518)){{goto L62018c;}}
}
B620186:L620186:{c.instructions+=2;NFSU2_TR(0x620186);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620189:{NFSU2_TR(0x620189);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62018c:L62018c:{c.instructions+=3;NFSU2_TR(0x62018c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((R+8),(U+0),4);
}
B62018f:{NFSU2_TR(0x62018f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B620195:{NFSU2_TR(0x620195);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L62019c;}}
}
B620197:L620197:{c.instructions+=3;NFSU2_TR(0x620197);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B620198:{NFSU2_TR(0x620198);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffff8ull))));
}
B62019b:{NFSU2_TR(0x62019b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B62019c:L62019c:{c.instructions+=4;NFSU2_TR(0x62019c);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6201a0:{NFSU2_TR(0x6201a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6201a3:{NFSU2_TR(0x6201a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6201a6:{NFSU2_TR(0x6201a6);
if(r1(R+518)){{goto L6201ae;}}
}
B6201a8:L6201a8:{c.instructions+=2;NFSU2_TR(0x6201a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6201ab:{NFSU2_TR(0x6201ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6201ae:L6201ae:{c.instructions+=5;NFSU2_TR(0x6201ae);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B6201b1:{NFSU2_TR(0x6201b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+8),(U+0),4);
}
B6201b4:{NFSU2_TR(0x6201b4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B6201b9:{NFSU2_TR(0x6201b9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x38ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6201bc:{NFSU2_TR(0x6201bc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6200a1u);}goto L6200a1;}}
}
B6201c2:L6201c2:{c.instructions+=5;NFSU2_TR(0x6201c2);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6201c9:{NFSU2_TR(0x6201c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6201cf:{NFSU2_TR(0x6201cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6201d1:{NFSU2_TR(0x6201d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6201d9:{NFSU2_TR(0x6201d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6201e3;}}
}
B6201db:L6201db:{c.instructions+=1;NFSU2_TR(0x6201db);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6201e3:L6201e3:{c.instructions+=2;NFSU2_TR(0x6201e3);
u8 U[4];
w4(U+0,u32(0x7a38bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6201e8:{NFSU2_TR(0x6201e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6201edull));
TAIL_STATIC(0x43db50u,43d);
}
B6201ed:L6201ed:{c.instructions+=4;NFSU2_TR(0x6201ed);
__builtin_memmove((R+20),(R+0),4);
}
B6201ef:{NFSU2_TR(0x6201ef);
u8 U[4];
w4(U+0,u32(0x7a8804ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6201f4:{NFSU2_TR(0x6201f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6201f8:{NFSU2_TR(0x6201f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6201fdull));
TAIL_STATIC(0x43db50u,43d);
}
B6201fd:L6201fd:{c.instructions+=3;NFSU2_TR(0x6201fd);
u8 U[4];
w4(U+0,u32(0x7a87fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620202:{NFSU2_TR(0x620202);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620206:{NFSU2_TR(0x620206);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62020bull));
TAIL_STATIC(0x43db50u,43d);
}
B62020b:L62020b:{c.instructions+=2;NFSU2_TR(0x62020b);
u8 U[4];
w4(U+0,u32(0x7a87f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620210:{NFSU2_TR(0x620210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620215ull));
TAIL_STATIC(0x43db50u,43d);
}
B620215:L620215:{c.instructions+=2;NFSU2_TR(0x620215);
u8 U[4];
w4(U+0,u32(0x7a87ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62021a:{NFSU2_TR(0x62021a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62021full));
TAIL_STATIC(0x43db50u,43d);
}
B62021f:L62021f:{c.instructions+=2;NFSU2_TR(0x62021f);
u8 U[4];
w4(U+0,u32(0x7a2d34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620224:{NFSU2_TR(0x620224);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620229ull));
TAIL_STATIC(0x43db50u,43d);
}
B620229:L620229:{c.instructions+=3;NFSU2_TR(0x620229);
u8 U[4];
w4(U+0,u32(0x7a87e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62022e:{NFSU2_TR(0x62022e);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620232:{NFSU2_TR(0x620232);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620237ull));
TAIL_STATIC(0x43db50u,43d);
}
B620237:L620237:{c.instructions+=3;NFSU2_TR(0x620237);
u8 U[4];
w4(U+0,u32(0x7a87dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62023c:{NFSU2_TR(0x62023c);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620240:{NFSU2_TR(0x620240);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620245ull));
TAIL_STATIC(0x43db50u,43d);
}
B620245:L620245:{c.instructions+=3;NFSU2_TR(0x620245);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B620248:{NFSU2_TR(0x620248);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62024c:{NFSU2_TR(0x62024c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x34ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620254:L620254:{c.instructions+=5;NFSU2_TR(0x620254);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B62025b:{NFSU2_TR(0x62025b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62025f:{NFSU2_TR(0x62025f);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B620266:{NFSU2_TR(0x620266);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620268:{NFSU2_TR(0x620268);
if(r1(R+518)){{goto L6204a5;}}
}
B62026e:L62026e:{c.instructions+=3;NFSU2_TR(0x62026e);
__builtin_memmove((R+4),(R+8),4);
}
B620270:{NFSU2_TR(0x620270);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B620273:{NFSU2_TR(0x620273);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L620281;}}
}
B620275:L620275:{c.instructions+=3;NFSU2_TR(0x620275);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620279:{NFSU2_TR(0x620279);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B62027b:{NFSU2_TR(0x62027b);
if(r1(R+518)){{goto L6204a5;}}
}
B620281:L620281:{c.instructions+=3;NFSU2_TR(0x620281);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B620285:{NFSU2_TR(0x620285);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B620289:{NFSU2_TR(0x620289);
if(r1(R+518)){{goto L6204a5;}}
}
B62028f:L62028f:{c.instructions+=8;NFSU2_TR(0x62028f);
w4(R+4,u32(r2(R+0)));
}
B620292:{NFSU2_TR(0x620292);
__builtin_memmove((R+0),gp(0x8a1cc8),4);
}
B620297:{NFSU2_TR(0x620297);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62029a:{NFSU2_TR(0x62029a);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+24,u32(s32(s16(r2(U+8)))));
}
B62029e:{NFSU2_TR(0x62029e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6202a1:{NFSU2_TR(0x6202a1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6202a3:{NFSU2_TR(0x6202a3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6202a5:{NFSU2_TR(0x6202a5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6204a5;}}
}
B6202ab:L6202ab:{c.instructions+=2;NFSU2_TR(0x6202ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6202ae:{NFSU2_TR(0x6202ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6202b1:L6202b1:{c.instructions+=4;NFSU2_TR(0x6202b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6202b3:{NFSU2_TR(0x6202b3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B6202b6:{NFSU2_TR(0x6202b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6202b9:{NFSU2_TR(0x6202b9);
if(r1(R+518)){{goto L6202cc;}}
}
B6202bb:L6202bb:{c.instructions+=2;NFSU2_TR(0x6202bb);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6202bd:{NFSU2_TR(0x6202bd);
if(r1(R+518)){{goto L6202cc;}}
}
B6202bf:L6202bf:{c.instructions+=4;NFSU2_TR(0x6202bf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6202c0:{NFSU2_TR(0x6202c0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6202c3:{NFSU2_TR(0x6202c3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6202c5:{NFSU2_TR(0x6202c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6202b1u);}goto L6202b1;}}
}
B6202c7:L6202c7:{c.instructions+=1;NFSU2_TR(0x6202c7);
{goto L6204a5;}
}
B6202cc:L6202cc:{c.instructions+=2;NFSU2_TR(0x6202cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6202ce:{NFSU2_TR(0x6202ce);
if(r1(R+518)){{goto L6204a5;}}
}
B6202d4:L6202d4:{c.instructions+=4;NFSU2_TR(0x6202d4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+24,u32(s32(s16(r2(U+0)))));
}
B6202d7:{NFSU2_TR(0x6202d7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6202d9:{NFSU2_TR(0x6202d9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6202db:{NFSU2_TR(0x6202db);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6204a5;}}
}
B6202e1:L6202e1:{c.instructions+=2;NFSU2_TR(0x6202e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6202e5:{NFSU2_TR(0x6202e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6202e8:L6202e8:{c.instructions+=4;NFSU2_TR(0x6202e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6202ea:{NFSU2_TR(0x6202ea);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B6202ed:{NFSU2_TR(0x6202ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6202f0:{NFSU2_TR(0x6202f0);
if(r1(R+518)){{goto L620303;}}
}
B6202f2:L6202f2:{c.instructions+=2;NFSU2_TR(0x6202f2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6202f4:{NFSU2_TR(0x6202f4);
if(r1(R+518)){{goto L620303;}}
}
B6202f6:L6202f6:{c.instructions+=4;NFSU2_TR(0x6202f6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6202f7:{NFSU2_TR(0x6202f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6202fa:{NFSU2_TR(0x6202fa);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6202fc:{NFSU2_TR(0x6202fc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6202e8u);}goto L6202e8;}}
}
B6202fe:L6202fe:{c.instructions+=1;NFSU2_TR(0x6202fe);
{goto L6204a1;}
}
B620303:L620303:{c.instructions+=2;NFSU2_TR(0x620303);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620305:{NFSU2_TR(0x620305);
if(r1(R+518)){{goto L6204a1;}}
}
B62030b:L62030b:{c.instructions+=4;NFSU2_TR(0x62030b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+24,u32(s32(s16(r2(U+0)))));
}
B62030e:{NFSU2_TR(0x62030e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B620310:{NFSU2_TR(0x620310);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620312:{NFSU2_TR(0x620312);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L62033a;}}
}
B620314:L620314:{c.instructions+=3;NFSU2_TR(0x620314);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B620318:{NFSU2_TR(0x620318);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B62031b:{NFSU2_TR(0x62031b);
{goto L620320;}
}
B620320:L620320:{c.instructions+=4;NFSU2_TR(0x620320);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620322:{NFSU2_TR(0x620322);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B620325:{NFSU2_TR(0x620325);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B620328:{NFSU2_TR(0x620328);
if(r1(R+518)){{goto L620336;}}
}
B62032a:L62032a:{c.instructions+=2;NFSU2_TR(0x62032a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B62032c:{NFSU2_TR(0x62032c);
if(r1(R+518)){{goto L620336;}}
}
B62032e:L62032e:{c.instructions+=4;NFSU2_TR(0x62032e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B62032f:{NFSU2_TR(0x62032f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B620332:{NFSU2_TR(0x620332);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B620334:{NFSU2_TR(0x620334);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x620320u);}goto L620320;}}
}
B620336:L620336:{c.instructions+=1;NFSU2_TR(0x620336);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B62033a:L62033a:{c.instructions+=4;NFSU2_TR(0x62033a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+24,u32(s32(s16(r2(U+0)))));
}
B62033d:{NFSU2_TR(0x62033d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B62033f:{NFSU2_TR(0x62033f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620341:{NFSU2_TR(0x620341);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L620364;}}
}
B620343:L620343:{c.instructions+=1;NFSU2_TR(0x620343);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B620346:L620346:{c.instructions+=4;NFSU2_TR(0x620346);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620348:{NFSU2_TR(0x620348);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B62034b:{NFSU2_TR(0x62034b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B62034e:{NFSU2_TR(0x62034e);
if(r1(R+518)){{goto L62041e;}}
}
B620354:L620354:{c.instructions+=2;NFSU2_TR(0x620354);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B620356:{NFSU2_TR(0x620356);
if(r1(R+518)){{goto L62041e;}}
}
B62035c:L62035c:{c.instructions+=4;NFSU2_TR(0x62035c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B62035d:{NFSU2_TR(0x62035d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B620360:{NFSU2_TR(0x620360);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B620362:{NFSU2_TR(0x620362);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x620346u);}goto L620346;}}
}
B620364:L620364:{c.instructions+=1;NFSU2_TR(0x620364);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62036c:L62036c:{c.instructions+=12;NFSU2_TR(0x62036c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620370:{NFSU2_TR(0x620370);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620374:{NFSU2_TR(0x620374);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xffffffccull))));
}
B620377:{NFSU2_TR(0x620377);
__builtin_memmove((R+0),(R+4),4);
}
B620379:{NFSU2_TR(0x620379);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B62037c:{NFSU2_TR(0x62037c);
u8 U[12];
w4(U+0,u32(u32(u32(0x13e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B620383:{NFSU2_TR(0x620383);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B620386:{NFSU2_TR(0x620386);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62038d:{NFSU2_TR(0x62038d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x61ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B620394:{NFSU2_TR(0x620394);
u8 U[12];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B62039b:{NFSU2_TR(0x62039b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62039f:{NFSU2_TR(0x62039f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6203a7:L6203a7:{c.instructions+=4;NFSU2_TR(0x6203a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6203ab:{NFSU2_TR(0x6203ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6203ad:{NFSU2_TR(0x6203ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6203af:{NFSU2_TR(0x6203af);
if(r1(R+518)){{goto L620484;}}
}
B6203b5:L6203b5:{c.instructions+=2;NFSU2_TR(0x6203b5);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6203ba:{NFSU2_TR(0x6203ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6203bfull));
TAIL_STATIC(0x43db50u,43d);
}
B6203bf:L6203bf:{c.instructions+=4;NFSU2_TR(0x6203bf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6203c3:{NFSU2_TR(0x6203c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6203c6:{NFSU2_TR(0x6203c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B6203cb:{NFSU2_TR(0x6203cb);
if(r1(R+518)){{goto L620406;}}
}
B6203cd:L6203cd:{c.instructions+=8;NFSU2_TR(0x6203cd);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B6203d3:{NFSU2_TR(0x6203d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6203d6:{NFSU2_TR(0x6203d6);
w4(R+4,u32(r2(R+4)));
}
B6203d9:{NFSU2_TR(0x6203d9);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(s32(s16(r2(U+8)))));
}
B6203dd:{NFSU2_TR(0x6203dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6203e0:{NFSU2_TR(0x6203e0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6203e2:{NFSU2_TR(0x6203e2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6203e4:{NFSU2_TR(0x6203e4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L620406;}}
}
B6203e6:L6203e6:{c.instructions+=3;NFSU2_TR(0x6203e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6203e9:{NFSU2_TR(0x6203e9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6203ec:{NFSU2_TR(0x6203ec);
__builtin_memmove((R+16),(R+16),4);
}
B6203f0:L6203f0:{c.instructions+=4;NFSU2_TR(0x6203f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6203f2:{NFSU2_TR(0x6203f2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B6203f5:{NFSU2_TR(0x6203f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6203f8:{NFSU2_TR(0x6203f8);
if(r1(R+518)){{goto L620432;}}
}
B6203fa:L6203fa:{c.instructions+=2;NFSU2_TR(0x6203fa);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6203fc:{NFSU2_TR(0x6203fc);
if(r1(R+518)){{goto L620432;}}
}
B6203fe:L6203fe:{c.instructions+=4;NFSU2_TR(0x6203fe);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6203ff:{NFSU2_TR(0x6203ff);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B620402:{NFSU2_TR(0x620402);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B620404:{NFSU2_TR(0x620404);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6203f0u);}goto L6203f0;}}
}
B620406:L620406:{c.instructions+=1;NFSU2_TR(0x620406);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B620408:L620408:{c.instructions+=3;NFSU2_TR(0x620408);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62040c:{NFSU2_TR(0x62040c);
u8 U[16];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B620410:{NFSU2_TR(0x620410);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L62043b;}}
}
B620412:L620412:{c.instructions+=4;NFSU2_TR(0x620412);
u8 U[4];
w4(U+0,u32(0x7a87d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620417:{NFSU2_TR(0x620417);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B62041b:{NFSU2_TR(0x62041b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62041c:{NFSU2_TR(0x62041c);
{goto L62045d;}
}
B62041e:L62041e:{c.instructions+=2;NFSU2_TR(0x62041e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620420:{NFSU2_TR(0x620420);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x620364u);}goto L620364;}}
}
B620426:L620426:{c.instructions+=3;NFSU2_TR(0x620426);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620429:{NFSU2_TR(0x620429);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62042d:{NFSU2_TR(0x62042d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x62036cu);}goto L62036c;}
}
B620432:L620432:{c.instructions+=2;NFSU2_TR(0x620432);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620434:{NFSU2_TR(0x620434);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x620406u);}goto L620406;}}
}
B620436:L620436:{c.instructions+=2;NFSU2_TR(0x620436);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B620439:{NFSU2_TR(0x620439);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x620408u);}goto L620408;}
}
B62043b:L62043b:{c.instructions+=2;NFSU2_TR(0x62043b);
u8 U[16];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B62043f:{NFSU2_TR(0x62043f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L62044d;}}
}
B620441:L620441:{c.instructions+=4;NFSU2_TR(0x620441);
u8 U[4];
w4(U+0,u32(0x7a87ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620446:{NFSU2_TR(0x620446);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B62044a:{NFSU2_TR(0x62044a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62044b:{NFSU2_TR(0x62044b);
{goto L62045d;}
}
B62044d:L62044d:{c.instructions+=2;NFSU2_TR(0x62044d);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B620451:{NFSU2_TR(0x620451);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L620465;}}
}
B620453:L620453:{c.instructions+=3;NFSU2_TR(0x620453);
u8 U[4];
w4(U+0,u32(0x7a87c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620458:{NFSU2_TR(0x620458);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62045c:{NFSU2_TR(0x62045c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62045d:L62045d:{c.instructions+=1;NFSU2_TR(0x62045d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620462ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B620462:L620462:{c.instructions+=1;NFSU2_TR(0x620462);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B620465:L620465:{c.instructions+=4;NFSU2_TR(0x620465);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B620469:{NFSU2_TR(0x620469);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62046a:{NFSU2_TR(0x62046a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62046b:{NFSU2_TR(0x62046b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620470ull));
TAIL_STATIC(0x43db80u,43d);
}
B620470:L620470:{c.instructions+=4;NFSU2_TR(0x620470);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B620473:{NFSU2_TR(0x620473);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B620476:{NFSU2_TR(0x620476);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B620478:{NFSU2_TR(0x620478);
if(r1(R+518)){{goto L620484;}}
}
B62047a:L62047a:{c.instructions+=2;NFSU2_TR(0x62047a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B62047d:{NFSU2_TR(0x62047d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B620484:L620484:{c.instructions+=8;NFSU2_TR(0x620484);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620488:{NFSU2_TR(0x620488);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62048c:{NFSU2_TR(0x62048c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B62048f:{NFSU2_TR(0x62048f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B620492:{NFSU2_TR(0x620492);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B620493:{NFSU2_TR(0x620493);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620497:{NFSU2_TR(0x620497);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62049b:{NFSU2_TR(0x62049b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6203a7u);}goto L6203a7;}}
}
B6204a1:L6204a1:{c.instructions+=1;NFSU2_TR(0x6204a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6204a5:L6204a5:{c.instructions+=5;NFSU2_TR(0x6204a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6204a9:{NFSU2_TR(0x6204a9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6204aa:{NFSU2_TR(0x6204aa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3aull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3aull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6204ad:{NFSU2_TR(0x6204ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6204b1:{NFSU2_TR(0x6204b1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x620254u);}goto L620254;}}
}
B6204b7:L6204b7:{c.instructions+=6;NFSU2_TR(0x6204b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6204b8:{NFSU2_TR(0x6204b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6204b9:{NFSU2_TR(0x6204b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6204ba:{NFSU2_TR(0x6204ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6204bb:{NFSU2_TR(0x6204bb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xccull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xccull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xccull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6204c1:{NFSU2_TR(0x6204c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6204d0:L6204d0:{c.instructions+=6;NFSU2_TR(0x6204d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6204d3:{NFSU2_TR(0x6204d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6204d4:{NFSU2_TR(0x6204d4);
__builtin_memmove((R+28),(R+4),4);
}
B6204d6:{NFSU2_TR(0x6204d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6204d9:{NFSU2_TR(0x6204d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6204db:{NFSU2_TR(0x6204db);
if(r1(R+518)){{goto L6205f4;}}
}
B6204e1:L6204e1:{c.instructions+=6;NFSU2_TR(0x6204e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6204e2:{NFSU2_TR(0x6204e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17a8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6204e8:{NFSU2_TR(0x6204e8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6204e9:{NFSU2_TR(0x6204e9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6204ed:{NFSU2_TR(0x6204ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3full));
s4(u32(r4(U+0)),r4(U+4));
}
B6204f5:{NFSU2_TR(0x6204f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6204f6:L6204f6:{c.instructions+=5;NFSU2_TR(0x6204f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6204fa:{NFSU2_TR(0x6204fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6204fc:{NFSU2_TR(0x6204fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6204fe:{NFSU2_TR(0x6204fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620502:{NFSU2_TR(0x620502);
if(r1(R+518)){{goto L6205d7;}}
}
B620508:L620508:{c.instructions+=3;NFSU2_TR(0x620508);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62050a:{NFSU2_TR(0x62050a);
__builtin_memmove((R+4),(R+12),4);
}
B62050c:{NFSU2_TR(0x62050c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620511ull));
TAIL_STATIC(0x48d8a0u,48d);
}
B620511:L620511:{c.instructions+=3;NFSU2_TR(0x620511);
__builtin_memmove((R+24),(R+0),4);
}
B620513:{NFSU2_TR(0x620513);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620515:{NFSU2_TR(0x620515);
if(r1(R+518)){{goto L6205d7;}}
}
B62051b:L62051b:{c.instructions+=1;NFSU2_TR(0x62051b);
{goto L620520;}
}
B620520:L620520:{c.instructions+=3;NFSU2_TR(0x620520);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+20),(U+0),4);
}
B620522:{NFSU2_TR(0x620522);
u8 U[4];
w4(U+0,u32(0x7a888cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620527:{NFSU2_TR(0x620527);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62052cull));
TAIL_STATIC(0x43db50u,43d);
}
B62052c:L62052c:{c.instructions+=4;NFSU2_TR(0x62052c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B62052e:{NFSU2_TR(0x62052e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B620531:{NFSU2_TR(0x620531);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xa2a2fc7cull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa2a2fc7cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620536:{NFSU2_TR(0x620536);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L62054f;}}
}
B620538:L620538:{c.instructions+=1;NFSU2_TR(0x620538);
if(r1(R+518)){{goto L620561;}}
}
B62053a:L62053a:{c.instructions+=2;NFSU2_TR(0x62053a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x31a66786ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B62053f:{NFSU2_TR(0x62053f);
if(r1(R+518)){{goto L620561;}}
}
B620541:L620541:{c.instructions+=2;NFSU2_TR(0x620541);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7a5bcf69ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620546:{NFSU2_TR(0x620546);
if(r1(R+518)){{goto L62055d;}}
}
B620548:L620548:{c.instructions+=2;NFSU2_TR(0x620548);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9db90133ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B62054d:{NFSU2_TR(0x62054d);
{goto L62055b;}
}
B62054f:L62054f:{c.instructions+=2;NFSU2_TR(0x62054f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xbf700a79ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620554:{NFSU2_TR(0x620554);
if(r1(R+518)){{goto L620561;}}
}
B620556:L620556:{c.instructions+=1;NFSU2_TR(0x620556);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd09091c6ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B62055b:L62055b:{c.instructions+=1;NFSU2_TR(0x62055b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6205c5;}}
}
B62055d:L62055d:{c.instructions+=2;NFSU2_TR(0x62055d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B62055f:{NFSU2_TR(0x62055f);
{goto L620566;}
}
B620561:L620561:{c.instructions+=1;NFSU2_TR(0x620561);
w4(R+12,u32(0x1ull));
}
B620566:L620566:{c.instructions+=2;NFSU2_TR(0x620566);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620568:{NFSU2_TR(0x620568);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62056dull));
TAIL_STATIC(0x575620u,575);
}
B62056d:L62056d:{c.instructions+=27;NFSU2_TR(0x62056d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B620570:{NFSU2_TR(0x620570);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620573:{NFSU2_TR(0x620573);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2dull))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B620577:{NFSU2_TR(0x620577);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62057a:{NFSU2_TR(0x62057a);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B62057d:{NFSU2_TR(0x62057d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B620581:{NFSU2_TR(0x620581);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B620584:{NFSU2_TR(0x620584);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620587:{NFSU2_TR(0x620587);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62058a:{NFSU2_TR(0x62058a);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B62058d:{NFSU2_TR(0x62058d);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620590:{NFSU2_TR(0x620590);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B620593:{NFSU2_TR(0x620593);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B620596:{NFSU2_TR(0x620596);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62059d:{NFSU2_TR(0x62059d);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6205a0:{NFSU2_TR(0x6205a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6205a3:{NFSU2_TR(0x6205a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6205a6:{NFSU2_TR(0x6205a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6205a9:{NFSU2_TR(0x6205a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6205ac:{NFSU2_TR(0x6205ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6205af:{NFSU2_TR(0x6205af);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6205b5:{NFSU2_TR(0x6205b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6205b8:{NFSU2_TR(0x6205b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6205bb:{NFSU2_TR(0x6205bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6205bd:{NFSU2_TR(0x6205bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6205c0:{NFSU2_TR(0x6205c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6205c3:{NFSU2_TR(0x6205c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6205c5:L6205c5:{c.instructions+=3;NFSU2_TR(0x6205c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6205c6:{NFSU2_TR(0x6205c6);
__builtin_memmove((R+4),(R+12),4);
}
B6205c8:{NFSU2_TR(0x6205c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6205cdull));
TAIL_STATIC(0x48d8a0u,48d);
}
B6205cd:L6205cd:{c.instructions+=3;NFSU2_TR(0x6205cd);
__builtin_memmove((R+24),(R+0),4);
}
B6205cf:{NFSU2_TR(0x6205cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6205d1:{NFSU2_TR(0x6205d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x620520u);}goto L620520;}}
}
B6205d7:L6205d7:{c.instructions+=7;NFSU2_TR(0x6205d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6205db:{NFSU2_TR(0x6205db);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6205df:{NFSU2_TR(0x6205df);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B6205e2:{NFSU2_TR(0x6205e2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6205e3:{NFSU2_TR(0x6205e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6205e7:{NFSU2_TR(0x6205e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6205eb:{NFSU2_TR(0x6205eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6204f6u);}goto L6204f6;}}
}
B6205f1:L6205f1:{c.instructions+=3;NFSU2_TR(0x6205f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6205f2:{NFSU2_TR(0x6205f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6205f3:{NFSU2_TR(0x6205f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6205f4:L6205f4:{c.instructions+=3;NFSU2_TR(0x6205f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6205f5:{NFSU2_TR(0x6205f5);
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
B6205f8:{NFSU2_TR(0x6205f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B620600:L620600:{c.instructions+=9;NFSU2_TR(0x620600);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620601:{NFSU2_TR(0x620601);
__builtin_memmove((R+20),(R+16),4);
}
B620603:{NFSU2_TR(0x620603);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B620606:{NFSU2_TR(0x620606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x13cull))));
}
B62060c:{NFSU2_TR(0x62060c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62060f:{NFSU2_TR(0x62060f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x604ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620615:{NFSU2_TR(0x620615);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620617:{NFSU2_TR(0x620617);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620618:{NFSU2_TR(0x620618);
if(r1(R+518)){{goto L620630;}}
}
B62061a:L62061a:{c.instructions+=1;NFSU2_TR(0x62061a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62061full));
TAIL_STATIC(0x4fe120u,4fe);
}
B62061f:L62061f:{c.instructions+=5;NFSU2_TR(0x62061f);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B620622:{NFSU2_TR(0x620622);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620626:{NFSU2_TR(0x620626);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B62062a:{NFSU2_TR(0x62062a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62062e:{NFSU2_TR(0x62062e);
{goto L620638;}
}
B620630:L620630:{c.instructions+=1;NFSU2_TR(0x620630);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x41880000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620638:L620638:{c.instructions+=4;NFSU2_TR(0x620638);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62063a:{NFSU2_TR(0x62063a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62063c:{NFSU2_TR(0x62063c);
u8 U[4];
w4(U+0,u32(0x7a88a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620641:{NFSU2_TR(0x620641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620646ull));
TAIL_STATIC(0x43db50u,43d);
}
B620646:L620646:{c.instructions+=3;NFSU2_TR(0x620646);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B620649:{NFSU2_TR(0x620649);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62064a:{NFSU2_TR(0x62064a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62064full));
TAIL_STATIC(0x4901d0u,490);
}
B62064f:L62064f:{c.instructions+=4;NFSU2_TR(0x62064f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B620652:{NFSU2_TR(0x620652);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B620659:{NFSU2_TR(0x620659);
__builtin_memmove((R+24),(R+0),4);
}
B62065b:{NFSU2_TR(0x62065b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620660ull));
TAIL_STATIC(0x5bb1c0u,5bb);
}
B620660:L620660:{c.instructions+=47;NFSU2_TR(0x620660);
w1(R+0,u8(0x80ull));
}
B620662:{NFSU2_TR(0x620662);
u8 U[4];
w4(U+0,u32(0x1999ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620667:{NFSU2_TR(0x620667);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62066b:{NFSU2_TR(0x62066b);
u8 U[5];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B620672:{NFSU2_TR(0x620672);
u8 U[5];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B620679:{NFSU2_TR(0x620679);
u8 U[5];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B620680:{NFSU2_TR(0x620680);
u8 U[5];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B620687:{NFSU2_TR(0x620687);
u8 U[5];
w4(U+0,u32(u32(u32(0x125ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B62068e:{NFSU2_TR(0x62068e);
u8 U[5];
w4(U+0,u32(u32(u32(0x129ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B620695:{NFSU2_TR(0x620695);
u8 U[5];
w4(U+0,u32(u32(u32(0x12dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B62069c:{NFSU2_TR(0x62069c);
u8 U[5];
w4(U+0,u32(u32(u32(0x131ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6206a3:{NFSU2_TR(0x6206a3);
u8 U[5];
w4(U+0,u32(u32(u32(0x126ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6206aa:{NFSU2_TR(0x6206aa);
u8 U[5];
w4(U+0,u32(u32(u32(0x12aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6206b1:{NFSU2_TR(0x6206b1);
u8 U[5];
w4(U+0,u32(u32(u32(0x12eull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6206b8:{NFSU2_TR(0x6206b8);
u8 U[5];
w4(U+0,u32(u32(u32(0x132ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6206bf:{NFSU2_TR(0x6206bf);
u8 U[5];
w4(U+0,u32(u32(u32(0x127ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6206c6:{NFSU2_TR(0x6206c6);
u8 U[5];
w4(U+0,u32(u32(u32(0x12bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6206cd:{NFSU2_TR(0x6206cd);
u8 U[5];
w4(U+0,u32(u32(u32(0x12full))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6206d4:{NFSU2_TR(0x6206d4);
u8 U[5];
w4(U+0,u32(u32(u32(0x133ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6206db:{NFSU2_TR(0x6206db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6206dc:{NFSU2_TR(0x6206dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6206e0:{NFSU2_TR(0x6206e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6206e1:{NFSU2_TR(0x6206e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6206ec:{NFSU2_TR(0x6206ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6206f7:{NFSU2_TR(0x6206f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620702:{NFSU2_TR(0x620702);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62070d:{NFSU2_TR(0x62070d);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620718:{NFSU2_TR(0x620718);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620723:{NFSU2_TR(0x620723);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62072e:{NFSU2_TR(0x62072e);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620739:{NFSU2_TR(0x620739);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620741:{NFSU2_TR(0x620741);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620749:{NFSU2_TR(0x620749);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620751:{NFSU2_TR(0x620751);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620759:{NFSU2_TR(0x620759);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620761:{NFSU2_TR(0x620761);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620769:{NFSU2_TR(0x620769);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620771:{NFSU2_TR(0x620771);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620779:{NFSU2_TR(0x620779);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620781:{NFSU2_TR(0x620781);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620789:{NFSU2_TR(0x620789);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620791:{NFSU2_TR(0x620791);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620799:{NFSU2_TR(0x620799);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6207a1:{NFSU2_TR(0x6207a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6207a9:{NFSU2_TR(0x6207a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6207b1:{NFSU2_TR(0x6207b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6207b9:{NFSU2_TR(0x6207b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6207beull));
TAIL_STATIC(0x5bada0u,5ba);
}
B6207be:L6207be:{c.instructions+=173;NFSU2_TR(0x6207be);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6207c2:{NFSU2_TR(0x6207c2);
{u32 ea_=u32(u32(8030364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6207c8:{NFSU2_TR(0x6207c8);
__builtin_memmove((R+4),gp(0x7a672c),4);
}
B6207ce:{NFSU2_TR(0x6207ce);
__builtin_memmove((R+8),(R+4),4);
}
B6207d0:{NFSU2_TR(0x6207d0);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6207d7:{NFSU2_TR(0x6207d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6207db:{NFSU2_TR(0x6207db);
{u32 ea_=u32(u32(8021800u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6207e1:{NFSU2_TR(0x6207e1);
__builtin_memmove((R+0),(R+4),4);
}
B6207e3:{NFSU2_TR(0x6207e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6207e6:{NFSU2_TR(0x6207e6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6207ea:{NFSU2_TR(0x6207ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6207ee:{NFSU2_TR(0x6207ee);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6207f0:{NFSU2_TR(0x6207f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6207f4:{NFSU2_TR(0x6207f4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6207f8:{NFSU2_TR(0x6207f8);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6207ff:{NFSU2_TR(0x6207ff);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B620803:{NFSU2_TR(0x620803);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620807:{NFSU2_TR(0x620807);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B62080e:{NFSU2_TR(0x62080e);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620812:{NFSU2_TR(0x620812);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B620816:{NFSU2_TR(0x620816);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62081a:{NFSU2_TR(0x62081a);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62081e:{NFSU2_TR(0x62081e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B620822:{NFSU2_TR(0x620822);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620826:{NFSU2_TR(0x620826);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B62082a:{NFSU2_TR(0x62082a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62082e:{NFSU2_TR(0x62082e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B620830:{NFSU2_TR(0x620830);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620834:{NFSU2_TR(0x620834);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B620838:{NFSU2_TR(0x620838);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62083c:{NFSU2_TR(0x62083c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62083e:{NFSU2_TR(0x62083e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B620842:{NFSU2_TR(0x620842);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B620846:{NFSU2_TR(0x620846);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62084a:{NFSU2_TR(0x62084a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62084e:{NFSU2_TR(0x62084e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B620852:{NFSU2_TR(0x620852);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B620854:{NFSU2_TR(0x620854);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B620858:{NFSU2_TR(0x620858);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62085c:{NFSU2_TR(0x62085c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62085e:{NFSU2_TR(0x62085e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B620862:{NFSU2_TR(0x620862);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B620866:{NFSU2_TR(0x620866);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62086a:{NFSU2_TR(0x62086a);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62086e:{NFSU2_TR(0x62086e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B620872:{NFSU2_TR(0x620872);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B620874:{NFSU2_TR(0x620874);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B620878:{NFSU2_TR(0x620878);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62087c:{NFSU2_TR(0x62087c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62087e:{NFSU2_TR(0x62087e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B620882:{NFSU2_TR(0x620882);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620889:{NFSU2_TR(0x620889);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B62088b:{NFSU2_TR(0x62088b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62088f:{NFSU2_TR(0x62088f);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B620896:{NFSU2_TR(0x620896);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62089a:{NFSU2_TR(0x62089a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62089e:{NFSU2_TR(0x62089e);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6208a5:{NFSU2_TR(0x6208a5);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6208a9:{NFSU2_TR(0x6208a9);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6208b0:{NFSU2_TR(0x6208b0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6208b4:{NFSU2_TR(0x6208b4);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6208bb:{NFSU2_TR(0x6208bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6208bd:{NFSU2_TR(0x6208bd);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6208c4:{NFSU2_TR(0x6208c4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6208c8:{NFSU2_TR(0x6208c8);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6208cc:{NFSU2_TR(0x6208cc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6208d0:{NFSU2_TR(0x6208d0);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6208d7:{NFSU2_TR(0x6208d7);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6208db:{NFSU2_TR(0x6208db);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6208e2:{NFSU2_TR(0x6208e2);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6208e6:{NFSU2_TR(0x6208e6);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6208ed:{NFSU2_TR(0x6208ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6208ef:{NFSU2_TR(0x6208ef);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6208f6:{NFSU2_TR(0x6208f6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6208fa:{NFSU2_TR(0x6208fa);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6208fe:{NFSU2_TR(0x6208fe);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B620902:{NFSU2_TR(0x620902);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620906:{NFSU2_TR(0x620906);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62090a:{NFSU2_TR(0x62090a);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B620911:{NFSU2_TR(0x620911);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B620915:{NFSU2_TR(0x620915);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62091c:{NFSU2_TR(0x62091c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62091e:{NFSU2_TR(0x62091e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B620922:{NFSU2_TR(0x620922);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B620926:{NFSU2_TR(0x620926);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62092d:{NFSU2_TR(0x62092d);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620934:{NFSU2_TR(0x620934);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B620936:{NFSU2_TR(0x620936);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62093d:{NFSU2_TR(0x62093d);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620944:{NFSU2_TR(0x620944);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B620948:{NFSU2_TR(0x620948);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62094c:{NFSU2_TR(0x62094c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B620950:{NFSU2_TR(0x620950);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620954:{NFSU2_TR(0x620954);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B620958:{NFSU2_TR(0x620958);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62095c:{NFSU2_TR(0x62095c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B620960:{NFSU2_TR(0x620960);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B620964:{NFSU2_TR(0x620964);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B620966:{NFSU2_TR(0x620966);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62096a:{NFSU2_TR(0x62096a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62096e:{NFSU2_TR(0x62096e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B620972:{NFSU2_TR(0x620972);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B620976:{NFSU2_TR(0x620976);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62097a:{NFSU2_TR(0x62097a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62097e:{NFSU2_TR(0x62097e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620982:{NFSU2_TR(0x620982);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B620986:{NFSU2_TR(0x620986);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62098d:{NFSU2_TR(0x62098d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B620991:{NFSU2_TR(0x620991);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620993:{NFSU2_TR(0x620993);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B620997:{NFSU2_TR(0x620997);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620999:{NFSU2_TR(0x620999);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62099b:{NFSU2_TR(0x62099b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62099f:{NFSU2_TR(0x62099f);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6209a3:{NFSU2_TR(0x6209a3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6209a7:{NFSU2_TR(0x6209a7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6209ab:{NFSU2_TR(0x6209ab);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6209af:{NFSU2_TR(0x6209af);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6209b3:{NFSU2_TR(0x6209b3);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6209b7:{NFSU2_TR(0x6209b7);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6209bb:{NFSU2_TR(0x6209bb);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6209bf:{NFSU2_TR(0x6209bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6209c1:{NFSU2_TR(0x6209c1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6209c5:{NFSU2_TR(0x6209c5);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6209cc:{NFSU2_TR(0x6209cc);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6209d3:{NFSU2_TR(0x6209d3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6209d5:{NFSU2_TR(0x6209d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6209dc:{NFSU2_TR(0x6209dc);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6209e0:{NFSU2_TR(0x6209e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6209e7:{NFSU2_TR(0x6209e7);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6209eb:{NFSU2_TR(0x6209eb);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6209f2:{NFSU2_TR(0x6209f2);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6209f9:{NFSU2_TR(0x6209f9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6209fd:{NFSU2_TR(0x6209fd);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B620a04:{NFSU2_TR(0x620a04);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B620a08:{NFSU2_TR(0x620a08);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B620a0f:{NFSU2_TR(0x620a0f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B620a13:{NFSU2_TR(0x620a13);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B620a1a:{NFSU2_TR(0x620a1a);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B620a1e:{NFSU2_TR(0x620a1e);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B620a25:{NFSU2_TR(0x620a25);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B620a29:{NFSU2_TR(0x620a29);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B620a2d:{NFSU2_TR(0x620a2d);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620a34:{NFSU2_TR(0x620a34);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620a3b:{NFSU2_TR(0x620a3b);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620a42:{NFSU2_TR(0x620a42);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B620a44:{NFSU2_TR(0x620a44);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620a48:{NFSU2_TR(0x620a48);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620a4f:{NFSU2_TR(0x620a4f);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620a56:{NFSU2_TR(0x620a56);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620a5d:{NFSU2_TR(0x620a5d);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620a64:{NFSU2_TR(0x620a64);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620a6b:{NFSU2_TR(0x620a6b);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B620a6d:{NFSU2_TR(0x620a6d);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620a74:{NFSU2_TR(0x620a74);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620a7b:{NFSU2_TR(0x620a7b);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620a82:{NFSU2_TR(0x620a82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620a85:{NFSU2_TR(0x620a85);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620a8c:{NFSU2_TR(0x620a8c);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620a93:{NFSU2_TR(0x620a93);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B620a95:{NFSU2_TR(0x620a95);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620a9c:{NFSU2_TR(0x620a9c);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620aa3:{NFSU2_TR(0x620aa3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620aa4:{NFSU2_TR(0x620aa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620aa7:{NFSU2_TR(0x620aa7);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620aae:{NFSU2_TR(0x620aae);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620ab5:{NFSU2_TR(0x620ab5);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620abc:{NFSU2_TR(0x620abc);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620ac3:{NFSU2_TR(0x620ac3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620ac4:{NFSU2_TR(0x620ac4);
u8 U[4];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B620acb:{NFSU2_TR(0x620acb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620acc:{NFSU2_TR(0x620acc);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620ad3:{NFSU2_TR(0x620ad3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620ad8ull));
TAIL_STATIC(0x5c7e80u,5c7);
}
B620ad8:L620ad8:{c.instructions+=4;NFSU2_TR(0x620ad8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B620ad9:{NFSU2_TR(0x620ad9);
__builtin_memmove((R+16),(R+20),4);
}
B620adb:{NFSU2_TR(0x620adb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B620adc:{NFSU2_TR(0x620adc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B620ae0:L620ae0:{c.instructions+=12;NFSU2_TR(0x620ae0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620ae1:{NFSU2_TR(0x620ae1);
__builtin_memmove((R+20),(R+16),4);
}
B620ae3:{NFSU2_TR(0x620ae3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B620ae6:{NFSU2_TR(0x620ae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xed4ull))));
}
B620aec:{NFSU2_TR(0x620aec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620aed:{NFSU2_TR(0x620aed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620aee:{NFSU2_TR(0x620aee);
__builtin_memmove((R+24),(R+4),4);
}
B620af0:{NFSU2_TR(0x620af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620af6:{NFSU2_TR(0x620af6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620af8:{NFSU2_TR(0x620af8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620af9:{NFSU2_TR(0x620af9);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620afd:{NFSU2_TR(0x620afd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L620b06;}}
}
B620aff:L620aff:{c.instructions+=2;NFSU2_TR(0x620aff);
w4(R+0,u32(0x1ull));
}
B620b04:{NFSU2_TR(0x620b04);
{goto L620b1a;}
}
B620b06:L620b06:{c.instructions+=5;NFSU2_TR(0x620b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620b09:{NFSU2_TR(0x620b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620b0f:{NFSU2_TR(0x620b0f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620b11:{NFSU2_TR(0x620b11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620b12:{NFSU2_TR(0x620b12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620b17ull));
TAIL_STATIC(0x433cd0u,433);
}
B620b17:L620b17:{c.instructions+=1;NFSU2_TR(0x620b17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B620b1a:L620b1a:{c.instructions+=7;NFSU2_TR(0x620b1a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B620b1c:{NFSU2_TR(0x620b1c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B620b1f:{NFSU2_TR(0x620b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620b25:{NFSU2_TR(0x620b25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B620b28:{NFSU2_TR(0x620b28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620b2a:{NFSU2_TR(0x620b2a);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620b31:{NFSU2_TR(0x620b31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L620b3a;}}
}
B620b33:L620b33:{c.instructions+=2;NFSU2_TR(0x620b33);
w4(R+0,u32(0x1ull));
}
B620b38:{NFSU2_TR(0x620b38);
{goto L620b4e;}
}
B620b3a:L620b3a:{c.instructions+=5;NFSU2_TR(0x620b3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620b3d:{NFSU2_TR(0x620b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620b43:{NFSU2_TR(0x620b43);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620b45:{NFSU2_TR(0x620b45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620b46:{NFSU2_TR(0x620b46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620b4bull));
TAIL_STATIC(0x433cd0u,433);
}
B620b4b:L620b4b:{c.instructions+=1;NFSU2_TR(0x620b4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B620b4e:L620b4e:{c.instructions+=8;NFSU2_TR(0x620b4e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B620b50:{NFSU2_TR(0x620b50);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B620b53:{NFSU2_TR(0x620b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620b59:{NFSU2_TR(0x620b59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B620b5c:{NFSU2_TR(0x620b5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620b5e:{NFSU2_TR(0x620b5e);
__builtin_memmove((R+28),(R+4),4);
}
B620b60:{NFSU2_TR(0x620b60);
u8 U[8];
w4(U+0,u32(u32(u32(0x30cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620b67:{NFSU2_TR(0x620b67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L620b70;}}
}
B620b69:L620b69:{c.instructions+=2;NFSU2_TR(0x620b69);
w4(R+0,u32(0x1ull));
}
B620b6e:{NFSU2_TR(0x620b6e);
{goto L620b84;}
}
B620b70:L620b70:{c.instructions+=5;NFSU2_TR(0x620b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620b73:{NFSU2_TR(0x620b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620b79:{NFSU2_TR(0x620b79);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620b7b:{NFSU2_TR(0x620b7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620b7c:{NFSU2_TR(0x620b7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620b81ull));
TAIL_STATIC(0x433cd0u,433);
}
B620b81:L620b81:{c.instructions+=1;NFSU2_TR(0x620b81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B620b84:L620b84:{c.instructions+=7;NFSU2_TR(0x620b84);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B620b86:{NFSU2_TR(0x620b86);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B620b89:{NFSU2_TR(0x620b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620b8f:{NFSU2_TR(0x620b8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B620b92:{NFSU2_TR(0x620b92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620b94:{NFSU2_TR(0x620b94);
u8 U[8];
w4(U+0,u32(u32(u32(0x184ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620b9b:{NFSU2_TR(0x620b9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L620ba4;}}
}
B620b9d:L620b9d:{c.instructions+=2;NFSU2_TR(0x620b9d);
w4(R+0,u32(0x1ull));
}
B620ba2:{NFSU2_TR(0x620ba2);
{goto L620bb8;}
}
B620ba4:L620ba4:{c.instructions+=5;NFSU2_TR(0x620ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620ba7:{NFSU2_TR(0x620ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620bad:{NFSU2_TR(0x620bad);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620baf:{NFSU2_TR(0x620baf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620bb0:{NFSU2_TR(0x620bb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620bb5ull));
TAIL_STATIC(0x433cd0u,433);
}
B620bb5:L620bb5:{c.instructions+=1;NFSU2_TR(0x620bb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B620bb8:L620bb8:{c.instructions+=7;NFSU2_TR(0x620bb8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B620bba:{NFSU2_TR(0x620bba);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B620bbd:{NFSU2_TR(0x620bbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B620bc0:{NFSU2_TR(0x620bc0);
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
B620bc2:{NFSU2_TR(0x620bc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620bcd:{NFSU2_TR(0x620bcd);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620bd4:{NFSU2_TR(0x620bd4);
if(r1(R+518)){{goto L620bf9;}}
}
B620bd6:L620bd6:{c.instructions+=7;NFSU2_TR(0x620bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620bdc:{NFSU2_TR(0x620bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620bdf:{NFSU2_TR(0x620bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620be5:{NFSU2_TR(0x620be5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620be7:{NFSU2_TR(0x620be7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620be9:{NFSU2_TR(0x620be9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620bea:{NFSU2_TR(0x620bea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620befull));
TAIL_STATIC(0x434610u,434);
}
B620bef:L620bef:{c.instructions+=2;NFSU2_TR(0x620bef);
{u32 ea_=u32(r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620bf6:{NFSU2_TR(0x620bf6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B620bf9:L620bf9:{c.instructions+=3;NFSU2_TR(0x620bf9);
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
B620bfb:{NFSU2_TR(0x620bfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620c06:{NFSU2_TR(0x620c06);
if(r1(R+518)){{goto L620c2b;}}
}
B620c08:L620c08:{c.instructions+=7;NFSU2_TR(0x620c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620c0e:{NFSU2_TR(0x620c0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620c11:{NFSU2_TR(0x620c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620c17:{NFSU2_TR(0x620c17);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620c19:{NFSU2_TR(0x620c19);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620c1b:{NFSU2_TR(0x620c1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620c1c:{NFSU2_TR(0x620c1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620c21ull));
TAIL_STATIC(0x434610u,434);
}
B620c21:L620c21:{c.instructions+=2;NFSU2_TR(0x620c21);
{u32 ea_=u32(r4(R+16)+u32(348u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620c28:{NFSU2_TR(0x620c28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B620c2b:L620c2b:{c.instructions+=7;NFSU2_TR(0x620c2b);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B620c32:{NFSU2_TR(0x620c32);
__builtin_memmove((R+8),(R+518),1);
}
B620c35:{NFSU2_TR(0x620c35);
w4(R+0,u32(r1(R+8)));
}
B620c38:{NFSU2_TR(0x620c38);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620c3f:{NFSU2_TR(0x620c3f);
__builtin_memmove((R+0),gp(0x8a1c64),4);
}
B620c44:{NFSU2_TR(0x620c44);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620c46:{NFSU2_TR(0x620c46);
if(r1(R+518)){{goto L620c6b;}}
}
B620c48:L620c48:{c.instructions+=2;NFSU2_TR(0x620c48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B620c4a:{NFSU2_TR(0x620c4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620c4full));
TAIL_STATIC(0x5ed270u,5ed);
}
B620c4f:L620c4f:{c.instructions+=2;NFSU2_TR(0x620c4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620c51:{NFSU2_TR(0x620c51);
if(r1(R+518)){{goto L620c6b;}}
}
B620c53:L620c53:{c.instructions+=3;NFSU2_TR(0x620c53);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620c55:{NFSU2_TR(0x620c55);
__builtin_memmove((R+4),(R+0),4);
}
B620c57:{NFSU2_TR(0x620c57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620c5cull));
TAIL_STATIC(0x61cfe0u,61c);
}
B620c5c:L620c5c:{c.instructions+=2;NFSU2_TR(0x620c5c);
s4(0x8a1c64,u32(0x0ull));
}
B620c66:{NFSU2_TR(0x620c66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620c6bull));
TAIL_STATIC(0x4022c0u,402);
}
B620c6b:L620c6b:{c.instructions+=6;NFSU2_TR(0x620c6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620c6e:{NFSU2_TR(0x620c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B620c71:{NFSU2_TR(0x620c71);
u8 U[4];
w4(U+0,u32(0x40400000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620c76:{NFSU2_TR(0x620c76);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620c77:{NFSU2_TR(0x620c77);
__builtin_memmove((R+4),(R+12),4);
}
B620c79:{NFSU2_TR(0x620c79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620c7eull));
TAIL_STATIC(0x48acb0u,48a);
}
B620c7e:L620c7e:{c.instructions+=3;NFSU2_TR(0x620c7e);
__builtin_memmove((R+28),(R+0),4);
}
B620c80:{NFSU2_TR(0x620c80);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620c84:{NFSU2_TR(0x620c84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620c89ull));
TAIL_STATIC(0x5b98a0u,5b9);
}
B620c89:L620c89:{c.instructions+=2;NFSU2_TR(0x620c89);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B620c8c:{NFSU2_TR(0x620c8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L620cb7;}}
}
B620c8e:L620c8e:{c.instructions+=2;NFSU2_TR(0x620c8e);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B620c95:{NFSU2_TR(0x620c95);
if(r1(R+518)){{goto L620cb7;}}
}
B620c97:L620c97:{c.instructions+=3;NFSU2_TR(0x620c97);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B620c9b:{NFSU2_TR(0x620c9b);
{u32 ea_=u32(u32(8021760u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B620ca1:{NFSU2_TR(0x620ca1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620ca6ull));
TAIL_STATIC(0x75bed4u,75b);
}
B620ca6:L620ca6:{c.instructions+=5;NFSU2_TR(0x620ca6);
__builtin_memmove((R+28),(R+0),4);
}
B620ca8:{NFSU2_TR(0x620ca8);
w4(R+0,u32(0x1ull));
}
B620cad:{NFSU2_TR(0x620cad);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620cb1:{NFSU2_TR(0x620cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620cb4:{NFSU2_TR(0x620cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620cb7:L620cb7:{c.instructions+=2;NFSU2_TR(0x620cb7);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B620cba:{NFSU2_TR(0x620cba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x630d1bu,630);}
}
B620cc0:L620cc0:{c.instructions+=5;NFSU2_TR(0x620cc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B620cc2:{NFSU2_TR(0x620cc2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B620cc4:{NFSU2_TR(0x620cc4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B620cc6:{NFSU2_TR(0x620cc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620ccd:{NFSU2_TR(0x620ccd);
if(r1(R+518)){{goto L620cdb;}}
}
B620ccf:L620ccf:{c.instructions+=3;NFSU2_TR(0x620ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620cd2:{NFSU2_TR(0x620cd2);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620cd9:{NFSU2_TR(0x620cd9);
{goto L620ce2;}
}
B620cdb:L620cdb:{c.instructions+=1;NFSU2_TR(0x620cdb);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620ce2:L620ce2:{c.instructions+=12;NFSU2_TR(0x620ce2);
__builtin_memmove((R+24),gp(0x8654a4),4);
}
B620ce8:{NFSU2_TR(0x620ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620ceb:{NFSU2_TR(0x620ceb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B620cee:{NFSU2_TR(0x620cee);
__builtin_memmove((R+24),gp(0x82da60),4);
}
B620cf4:{NFSU2_TR(0x620cf4);
__builtin_memmove((R+4),(R+518),1);
}
B620cf7:{NFSU2_TR(0x620cf7);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620cfe:{NFSU2_TR(0x620cfe);
__builtin_memmove((R+0),gp(0x82da5c),4);
}
B620d03:{NFSU2_TR(0x620d03);
w4(R+8,u32(r1(R+4)));
}
B620d06:{NFSU2_TR(0x620d06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B620d0c:{NFSU2_TR(0x620d0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B620d0e:{NFSU2_TR(0x620d0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x188ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620d15:{NFSU2_TR(0x620d15);
if(r1(R+512)){{goto L620d3d;}}
}
B620d17:L620d17:{c.instructions+=7;NFSU2_TR(0x620d17);
__builtin_memmove((R+4),gp(0x82da70),4);
}
B620d1d:{NFSU2_TR(0x620d1d);
w4(R+8,u32(0x1ull));
}
B620d22:{NFSU2_TR(0x620d22);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1c0ull))));
}
B620d28:{NFSU2_TR(0x620d28);
__builtin_memmove(gp(0x82da6c),(R+8),4);
}
B620d2e:{NFSU2_TR(0x620d2e);
__builtin_memmove(gp(0x82da70),(R+4),4);
}
B620d34:{NFSU2_TR(0x620d34);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620d3b:{NFSU2_TR(0x620d3b);
{goto L620d52;}
}
B620d3d:L620d3d:{c.instructions+=5;NFSU2_TR(0x620d3d);
__builtin_memmove((R+8),(R+0),4);
}
B620d3f:{NFSU2_TR(0x620d3f);
__builtin_memmove((R+0),(R+4),4);
}
B620d41:{NFSU2_TR(0x620d41);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620d48:{NFSU2_TR(0x620d48);
__builtin_memmove(gp(0x82da5c),(R+0),4);
}
B620d4d:{NFSU2_TR(0x620d4d);
w4(R+8,u32(0x1ull));
}
B620d52:L620d52:{c.instructions+=4;NFSU2_TR(0x620d52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B620d55:{NFSU2_TR(0x620d55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B620d57:{NFSU2_TR(0x620d57);
w4(R+12,u32(0x40ull));
}
B620d5c:{NFSU2_TR(0x620d5c);
if(r1(R+512)){{goto L620d76;}}
}
B620d5e:L620d5e:{c.instructions+=6;NFSU2_TR(0x620d5e);
__builtin_memmove((R+4),gp(0x82da70),4);
}
B620d64:{NFSU2_TR(0x620d64);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B620d66:{NFSU2_TR(0x620d66);
__builtin_memmove(gp(0x82da6c),(R+8),4);
}
B620d6c:{NFSU2_TR(0x620d6c);
__builtin_memmove(gp(0x82da70),(R+4),4);
}
B620d72:{NFSU2_TR(0x620d72);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B620d74:{NFSU2_TR(0x620d74);
{goto L620d7f;}
}
B620d76:L620d76:{c.instructions+=3;NFSU2_TR(0x620d76);
__builtin_memmove((R+28),(R+0),4);
}
B620d78:{NFSU2_TR(0x620d78);
__builtin_memmove((R+0),(R+4),4);
}
B620d7a:{NFSU2_TR(0x620d7a);
__builtin_memmove(gp(0x82da5c),(R+0),4);
}
B620d7f:L620d7f:{c.instructions+=3;NFSU2_TR(0x620d7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B620d82:{NFSU2_TR(0x620d82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B620d84:{NFSU2_TR(0x620d84);
if(r1(R+512)){{goto L620da7;}}
}
B620d86:L620d86:{c.instructions+=6;NFSU2_TR(0x620d86);
__builtin_memmove((R+4),gp(0x82da70),4);
}
B620d8c:{NFSU2_TR(0x620d8c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B620d8e:{NFSU2_TR(0x620d8e);
__builtin_memmove(gp(0x82da6c),(R+8),4);
}
B620d94:{NFSU2_TR(0x620d94);
__builtin_memmove(gp(0x82da70),(R+4),4);
}
B620d9a:{NFSU2_TR(0x620d9a);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620da5:{NFSU2_TR(0x620da5);
{goto L620dbc;}
}
B620da7:L620da7:{c.instructions+=5;NFSU2_TR(0x620da7);
__builtin_memmove((R+8),(R+0),4);
}
B620da9:{NFSU2_TR(0x620da9);
__builtin_memmove((R+0),(R+4),4);
}
B620dab:{NFSU2_TR(0x620dab);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620db2:{NFSU2_TR(0x620db2);
__builtin_memmove(gp(0x82da5c),(R+0),4);
}
B620db7:{NFSU2_TR(0x620db7);
w4(R+8,u32(0x1ull));
}
B620dbc:L620dbc:{c.instructions+=3;NFSU2_TR(0x620dbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B620dbf:{NFSU2_TR(0x620dbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B620dc1:{NFSU2_TR(0x620dc1);
if(r1(R+512)){{goto L620ddb;}}
}
B620dc3:L620dc3:{c.instructions+=6;NFSU2_TR(0x620dc3);
__builtin_memmove((R+4),gp(0x82da70),4);
}
B620dc9:{NFSU2_TR(0x620dc9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B620dcb:{NFSU2_TR(0x620dcb);
__builtin_memmove(gp(0x82da6c),(R+8),4);
}
B620dd1:{NFSU2_TR(0x620dd1);
__builtin_memmove(gp(0x82da70),(R+4),4);
}
B620dd7:{NFSU2_TR(0x620dd7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B620dd9:{NFSU2_TR(0x620dd9);
{goto L620de4;}
}
B620ddb:L620ddb:{c.instructions+=3;NFSU2_TR(0x620ddb);
__builtin_memmove((R+12),(R+0),4);
}
B620ddd:{NFSU2_TR(0x620ddd);
__builtin_memmove((R+0),(R+4),4);
}
B620ddf:{NFSU2_TR(0x620ddf);
__builtin_memmove(gp(0x82da5c),(R+0),4);
}
B620de4:L620de4:{c.instructions+=3;NFSU2_TR(0x620de4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B620de7:{NFSU2_TR(0x620de7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B620de9:{NFSU2_TR(0x620de9);
if(r1(R+512)){{goto L620e06;}}
}
B620deb:L620deb:{c.instructions+=6;NFSU2_TR(0x620deb);
__builtin_memmove((R+0),gp(0x82da70),4);
}
B620df0:{NFSU2_TR(0x620df0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B620df3:{NFSU2_TR(0x620df3);
s4(0x82da6c,u32(0x1ull));
}
B620dfd:{NFSU2_TR(0x620dfd);
__builtin_memmove(gp(0x82da70),(R+0),4);
}
B620e02:{NFSU2_TR(0x620e02);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B620e04:{NFSU2_TR(0x620e04);
{goto L620e0e;}
}
B620e06:L620e06:{c.instructions+=2;NFSU2_TR(0x620e06);
__builtin_memmove(gp(0x82da5c),(R+4),4);
}
B620e0c:{NFSU2_TR(0x620e0c);
__builtin_memmove((R+24),(R+0),4);
}
B620e0e:L620e0e:{c.instructions+=4;NFSU2_TR(0x620e0e);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620e15:{NFSU2_TR(0x620e15);
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
B620e17:{NFSU2_TR(0x620e17);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620e1e:{NFSU2_TR(0x620e1e);
if(r1(R+518)){TAIL_STATIC(0x630d1bu,630);}
}
B620e24:L620e24:{c.instructions+=2;NFSU2_TR(0x620e24);
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
B620e26:{NFSU2_TR(0x620e26);
if(r1(R+518)){TAIL_STATIC(0x630d1bu,630);}
}
B620e2c:L620e2c:{c.instructions+=2;NFSU2_TR(0x620e2c);
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
B620e2e:{NFSU2_TR(0x620e2e);
if(r1(R+518)){TAIL_STATIC(0x630d1bu,630);}
}
B620e34:L620e34:{c.instructions+=2;NFSU2_TR(0x620e34);
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
B620e36:{NFSU2_TR(0x620e36);
if(r1(R+518)){TAIL_STATIC(0x630d1bu,630);}
}
B620e3c:L620e3c:{c.instructions+=4;NFSU2_TR(0x620e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620e3f:{NFSU2_TR(0x620e3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620e40:{NFSU2_TR(0x620e40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620e41:{NFSU2_TR(0x620e41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620e46ull));
TAIL_STATIC(0x4012b0u,401);
}
B620e46:L620e46:{c.instructions+=4;NFSU2_TR(0x620e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620e49:{NFSU2_TR(0x620e49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B620e4c:{NFSU2_TR(0x620e4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620e4e:{NFSU2_TR(0x620e4e);
if(r1(R+518)){{goto L620ebe;}}
}
B620e50:L620e50:{c.instructions+=3;NFSU2_TR(0x620e50);
u8 U[8];
w4(U+0,u32(u32(u32(0x188ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620e57:{NFSU2_TR(0x620e57);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620e59:{NFSU2_TR(0x620e59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L620ebe;}}
}
B620e5b:L620e5b:{c.instructions+=15;NFSU2_TR(0x620e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620e5e:{NFSU2_TR(0x620e5e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B620e61:{NFSU2_TR(0x620e61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B620e63:{NFSU2_TR(0x620e63);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B620e66:{NFSU2_TR(0x620e66);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620e68:{NFSU2_TR(0x620e68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620e6a:{NFSU2_TR(0x620e6a);
{u32 ea_=u32(r4(R+16)+u32(2204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620e71:{NFSU2_TR(0x620e71);
u8 U[8];
w4(U+0,u32(u32(u32(0x898ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620e78:{NFSU2_TR(0x620e78);
u8 U[8];
w4(U+0,u32(u32(u32(0x194ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620e7f:{NFSU2_TR(0x620e7f);
{u32 ea_=u32(r4(R+16)+u32(2208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620e86:{NFSU2_TR(0x620e86);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620e88:{NFSU2_TR(0x620e88);
u8 U[4];
w4(U+0,u32(u32(u32(0x89cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B620e8f:{NFSU2_TR(0x620e8f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620e90:{NFSU2_TR(0x620e90);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5c4ull))));
}
B620e96:{NFSU2_TR(0x620e96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620e9bull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B620e9b:L620e9b:{c.instructions+=12;NFSU2_TR(0x620e9b);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B620e9e:{NFSU2_TR(0x620e9e);
{u32 ea_=u32(r4(R+16)+u32(2200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B620ea5:{NFSU2_TR(0x620ea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620ea8:{NFSU2_TR(0x620ea8);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B620eaa:{NFSU2_TR(0x620eaa);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B620eac:{NFSU2_TR(0x620eac);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B620eaf:{NFSU2_TR(0x620eaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B620eb1:{NFSU2_TR(0x620eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620eb4:{NFSU2_TR(0x620eb4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B620eb6:{NFSU2_TR(0x620eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620eb9:{NFSU2_TR(0x620eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620ebc:{NFSU2_TR(0x620ebc);
{goto L620ed2;}
}
B620ebe:L620ebe:{c.instructions+=7;NFSU2_TR(0x620ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620ec1:{NFSU2_TR(0x620ec1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B620ec3:{NFSU2_TR(0x620ec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620ec6:{NFSU2_TR(0x620ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620ec9:{NFSU2_TR(0x620ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620ecc:{NFSU2_TR(0x620ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620ecf:{NFSU2_TR(0x620ecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620ed2:L620ed2:{c.instructions+=11;NFSU2_TR(0x620ed2);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620ed6:{NFSU2_TR(0x620ed6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B620ed9:{NFSU2_TR(0x620ed9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620eda:{NFSU2_TR(0x620eda);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B620edd:{NFSU2_TR(0x620edd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620ede:{NFSU2_TR(0x620ede);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620ee5:{NFSU2_TR(0x620ee5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620ee6:{NFSU2_TR(0x620ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620ee9:{NFSU2_TR(0x620ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620ef0:{NFSU2_TR(0x620ef0);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620ef7:{NFSU2_TR(0x620ef7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620efcull));
TAIL_STATIC(0x48ac60u,48a);
}
B620efc:L620efc:{c.instructions+=2;NFSU2_TR(0x620efc);
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
B620efe:{NFSU2_TR(0x620efe);
if(r1(R+518)){TAIL_STATIC(0x630d1bu,630);}
}
B620f04:L620f04:{c.instructions+=13;NFSU2_TR(0x620f04);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620f0b:{NFSU2_TR(0x620f0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620f0e:{NFSU2_TR(0x620f0e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B620f11:{NFSU2_TR(0x620f11);
u8 U[8];
w4(U+0,u32(u32(u32(0x790ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620f18:{NFSU2_TR(0x620f18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620f1b:{NFSU2_TR(0x620f1b);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620f22:{NFSU2_TR(0x620f22);
u8 U[8];
w4(U+0,u32(u32(u32(0x794ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620f29:{NFSU2_TR(0x620f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620f2c:{NFSU2_TR(0x620f2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x798ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620f33:{NFSU2_TR(0x620f33);
__builtin_memmove((R+0),gp(0x8a1c04),4);
}
B620f38:{NFSU2_TR(0x620f38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B620f3a:{NFSU2_TR(0x620f3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x79cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620f45:{NFSU2_TR(0x620f45);
if(r1(R+518)){{goto L620f51;}}
}
B620f47:L620f47:{c.instructions+=1;NFSU2_TR(0x620f47);
s4(0x82dad8,u32(0x1ull));
}
B620f51:L620f51:{c.instructions+=3;NFSU2_TR(0x620f51);
u8 U[8];
w4(U+0,u32(u32(u32(0x18cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620f58:{NFSU2_TR(0x620f58);
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
B620f5a:{NFSU2_TR(0x620f5a);
if(r1(R+518)){{goto L620f79;}}
}
B620f5c:L620f5c:{c.instructions+=5;NFSU2_TR(0x620f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620f5f:{NFSU2_TR(0x620f5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620f62:{NFSU2_TR(0x620f62);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620f63:{NFSU2_TR(0x620f63);
__builtin_memmove((R+4),(R+0),4);
}
B620f65:{NFSU2_TR(0x620f65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620f6aull));
TAIL_STATIC(0x60bcc0u,60b);
}
B620f6a:L620f6a:{c.instructions+=3;NFSU2_TR(0x620f6a);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620f71:{NFSU2_TR(0x620f71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620f72:{NFSU2_TR(0x620f72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620f77ull));
TAIL_STATIC(0x4013d0u,401);
}
B620f77:L620f77:{c.instructions+=1;NFSU2_TR(0x620f77);
{goto L620f8d;}
}
B620f79:L620f79:{c.instructions+=5;NFSU2_TR(0x620f79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620f7c:{NFSU2_TR(0x620f7c);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620f83:{NFSU2_TR(0x620f83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620f84:{NFSU2_TR(0x620f84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620f85:{NFSU2_TR(0x620f85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620f8aull));
TAIL_STATIC(0x4012b0u,401);
}
B620f8a:L620f8a:{c.instructions+=1;NFSU2_TR(0x620f8a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B620f8d:L620f8d:{c.instructions+=11;NFSU2_TR(0x620f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620f90:{NFSU2_TR(0x620f90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B620f92:{NFSU2_TR(0x620f92);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620f99:{NFSU2_TR(0x620f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620f9c:{NFSU2_TR(0x620f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620f9f:{NFSU2_TR(0x620f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620fa2:{NFSU2_TR(0x620fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620fa5:{NFSU2_TR(0x620fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B620fa8:{NFSU2_TR(0x620fa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B620faf:{NFSU2_TR(0x620faf);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B620fb6:{NFSU2_TR(0x620fb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L620fcb;}}
}
B620fb8:L620fb8:{c.instructions+=4;NFSU2_TR(0x620fb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620fbc:{NFSU2_TR(0x620fbc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1f88ull))));
}
B620fc2:{NFSU2_TR(0x620fc2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620fc3:{NFSU2_TR(0x620fc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620fc8ull));
TAIL_STATIC(0x48e3b0u,48e);
}
B620fc8:L620fc8:{c.instructions+=1;NFSU2_TR(0x620fc8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B620fcb:L620fcb:{c.instructions+=3;NFSU2_TR(0x620fcb);
u8 U[4];
w4(U+0,u32(u32(u32(0xb20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B620fd2:{NFSU2_TR(0x620fd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620fd3:{NFSU2_TR(0x620fd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620fd8ull));
TAIL_STATIC(0x48ab10u,48a);
}
B620fd8:L620fd8:{c.instructions+=11;NFSU2_TR(0x620fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B620fdb:{NFSU2_TR(0x620fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B620fde:{NFSU2_TR(0x620fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620fe1:{NFSU2_TR(0x620fe1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620fe2:{NFSU2_TR(0x620fe2);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620fe7:{NFSU2_TR(0x620fe7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620fe9:{NFSU2_TR(0x620fe9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620fea:{NFSU2_TR(0x620fea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620feb:{NFSU2_TR(0x620feb);
u8 U[4];
w4(U+0,u32(u32(u32(0xb38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B620ff2:{NFSU2_TR(0x620ff2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B620ff3:{NFSU2_TR(0x620ff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x620ff8ull));
TAIL_STATIC(0x48ed60u,48e);
}
B620ff8:L620ff8:{c.instructions+=2;NFSU2_TR(0x620ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B620ffb:{NFSU2_TR(0x620ffb);
u8 U[4];
w4(U+0,u32(u32(u32(0xb3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
TAIL_STATIC(0x621002u,621);
}
XIT:NFSU2_TR_EXIT(0x620,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
