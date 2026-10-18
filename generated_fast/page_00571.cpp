#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_572(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_57f(u8* __restrict R,Cpu& c);
u32 body_5c0(u8* __restrict R,Cpu& c);
u32 body_5c1(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x571,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x571,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_571(u8* __restrict R,Cpu& c);
u32 page_571(Cpu& c){return body_571(c.regs.data(),c);}
__attribute__((noinline)) u32 body_571(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x571001:goto L571001;
case 0x571007:c.instructions+=2;goto B571007;
case 0x571008:c.instructions+=1;goto B571008;
case 0x571010:goto L571010;
case 0x571014:c.instructions+=2;goto B571014;
case 0x571017:c.instructions+=1;goto B571017;
case 0x571020:goto L571020;
case 0x571021:c.instructions+=4;goto B571021;
case 0x571023:c.instructions+=3;goto B571023;
case 0x571026:c.instructions+=2;goto B571026;
case 0x571028:c.instructions+=1;goto B571028;
case 0x57102a:goto L57102a;
case 0x571030:c.instructions+=2;goto B571030;
case 0x571032:c.instructions+=1;goto B571032;
case 0x571034:goto L571034;
case 0x571035:c.instructions+=1;goto B571035;
case 0x57103a:goto L57103a;
case 0x57103d:c.instructions+=1;goto B57103d;
case 0x571047:goto L571047;
case 0x571048:c.instructions+=1;goto B571048;
case 0x571050:goto L571050;
case 0x571054:c.instructions+=2;goto B571054;
case 0x57105a:c.instructions+=1;goto B57105a;
case 0x571060:goto L571060;
case 0x571066:c.instructions+=4;goto B571066;
case 0x571068:c.instructions+=3;goto B571068;
case 0x57106a:c.instructions+=2;goto B57106a;
case 0x57106d:c.instructions+=1;goto B57106d;
case 0x571070:goto L571070;
case 0x571074:c.instructions+=4;goto B571074;
case 0x571078:c.instructions+=3;goto B571078;
case 0x57107d:c.instructions+=2;goto B57107d;
case 0x571083:c.instructions+=1;goto B571083;
case 0x571090:goto L571090;
case 0x571096:c.instructions+=4;goto B571096;
case 0x571098:c.instructions+=3;goto B571098;
case 0x57109a:c.instructions+=2;goto B57109a;
case 0x57109d:c.instructions+=1;goto B57109d;
case 0x5710a0:goto L5710a0;
case 0x5710a1:c.instructions+=6;goto B5710a1;
case 0x5710a3:c.instructions+=5;goto B5710a3;
case 0x5710a6:c.instructions+=4;goto B5710a6;
case 0x5710a7:c.instructions+=3;goto B5710a7;
case 0x5710a9:c.instructions+=2;goto B5710a9;
case 0x5710ab:c.instructions+=1;goto B5710ab;
case 0x5710ad:goto L5710ad;
case 0x5710ae:c.instructions+=1;goto B5710ae;
case 0x5710b1:goto L5710b1;
case 0x5710b4:c.instructions+=2;goto B5710b4;
case 0x5710b5:c.instructions+=1;goto B5710b5;
case 0x5710ba:goto L5710ba;
case 0x5710be:c.instructions+=3;goto B5710be;
case 0x5710c1:c.instructions+=2;goto B5710c1;
case 0x5710c3:c.instructions+=1;goto B5710c3;
case 0x5710c8:goto L5710c8;
case 0x5710cb:c.instructions+=4;goto B5710cb;
case 0x5710cc:c.instructions+=3;goto B5710cc;
case 0x5710cf:c.instructions+=2;goto B5710cf;
case 0x5710d1:c.instructions+=1;goto B5710d1;
case 0x5710d3:goto L5710d3;
case 0x5710d4:goto L5710d4;
case 0x5710d5:c.instructions+=3;goto B5710d5;
case 0x5710dc:c.instructions+=2;goto B5710dc;
case 0x5710dd:c.instructions+=1;goto B5710dd;
case 0x5710e0:goto L5710e0;
case 0x5710e1:c.instructions+=6;goto B5710e1;
case 0x5710e3:c.instructions+=5;goto B5710e3;
case 0x5710e6:c.instructions+=4;goto B5710e6;
case 0x5710e7:c.instructions+=3;goto B5710e7;
case 0x5710e9:c.instructions+=2;goto B5710e9;
case 0x5710eb:c.instructions+=1;goto B5710eb;
case 0x5710ed:goto L5710ed;
case 0x5710ee:c.instructions+=1;goto B5710ee;
case 0x5710f1:goto L5710f1;
case 0x5710f4:c.instructions+=2;goto B5710f4;
case 0x5710f5:c.instructions+=1;goto B5710f5;
case 0x5710fa:goto L5710fa;
case 0x5710fe:c.instructions+=3;goto B5710fe;
case 0x571101:c.instructions+=2;goto B571101;
case 0x571103:c.instructions+=1;goto B571103;
case 0x571108:goto L571108;
case 0x57110b:c.instructions+=4;goto B57110b;
case 0x57110c:c.instructions+=3;goto B57110c;
case 0x57110f:c.instructions+=2;goto B57110f;
case 0x571111:c.instructions+=1;goto B571111;
case 0x571113:goto L571113;
case 0x571114:c.instructions+=4;goto B571114;
case 0x571115:c.instructions+=3;goto B571115;
case 0x57111c:c.instructions+=2;goto B57111c;
case 0x57111d:c.instructions+=1;goto B57111d;
case 0x57111e:goto L57111e;
case 0x571121:c.instructions+=3;goto B571121;
case 0x571122:c.instructions+=2;goto B571122;
case 0x571123:c.instructions+=1;goto B571123;
case 0x571130:goto L571130;
case 0x571134:c.instructions+=2;goto B571134;
case 0x57113f:c.instructions+=1;goto B57113f;
case 0x571140:goto L571140;
case 0x571144:c.instructions+=1;goto B571144;
case 0x571150:goto L571150;
case 0x571154:c.instructions+=1;goto B571154;
case 0x571160:goto L571160;
case 0x571161:c.instructions+=4;goto B571161;
case 0x571165:c.instructions+=3;goto B571165;
case 0x571166:c.instructions+=2;goto B571166;
case 0x571167:c.instructions+=1;goto B571167;
case 0x57116c:goto L57116c;
case 0x57116e:c.instructions+=3;goto B57116e;
case 0x571171:c.instructions+=2;goto B571171;
case 0x571173:c.instructions+=1;goto B571173;
case 0x571175:goto L571175;
case 0x571176:c.instructions+=2;goto B571176;
case 0x571177:c.instructions+=1;goto B571177;
case 0x571178:goto L571178;
case 0x571179:c.instructions+=1;goto B571179;
case 0x57117e:goto L57117e;
case 0x571181:c.instructions+=4;goto B571181;
case 0x571183:c.instructions+=3;goto B571183;
case 0x571184:c.instructions+=2;goto B571184;
case 0x571189:c.instructions+=1;goto B571189;
case 0x57118e:goto L57118e;
case 0x571191:c.instructions+=2;goto B571191;
case 0x571193:c.instructions+=1;goto B571193;
case 0x571195:goto L571195;
case 0x571196:c.instructions+=2;goto B571196;
case 0x57119b:c.instructions+=1;goto B57119b;
case 0x5711a0:goto L5711a0;
case 0x5711a2:c.instructions+=1;goto B5711a2;
case 0x5711a4:goto L5711a4;
case 0x5711a8:goto L5711a8;
case 0x5711a9:c.instructions+=1;goto B5711a9;
case 0x5711ae:goto L5711ae;
case 0x5711b0:c.instructions+=3;goto B5711b0;
case 0x5711b3:c.instructions+=2;goto B5711b3;
case 0x5711b5:c.instructions+=1;goto B5711b5;
case 0x5711b7:goto L5711b7;
case 0x5711b9:c.instructions+=1;goto B5711b9;
case 0x5711be:goto L5711be;
case 0x5711bf:c.instructions+=3;goto B5711bf;
case 0x5711c1:c.instructions+=2;goto B5711c1;
case 0x5711c2:c.instructions+=1;goto B5711c2;
case 0x5711d0:goto L5711d0;
case 0x5711d1:c.instructions+=4;goto B5711d1;
case 0x5711d3:c.instructions+=3;goto B5711d3;
case 0x5711d4:c.instructions+=2;goto B5711d4;
case 0x5711d9:c.instructions+=1;goto B5711d9;
case 0x5711de:goto L5711de;
case 0x5711e0:c.instructions+=2;goto B5711e0;
case 0x5711e5:c.instructions+=1;goto B5711e5;
case 0x5711ea:goto L5711ea;
case 0x5711ec:goto L5711ec;
case 0x5711ef:c.instructions+=3;goto B5711ef;
case 0x5711f1:c.instructions+=2;goto B5711f1;
case 0x5711f3:c.instructions+=1;goto B5711f3;
case 0x5711f5:goto L5711f5;
case 0x5711fa:goto L5711fa;
case 0x5711fd:goto L5711fd;
case 0x571200:c.instructions+=2;goto B571200;
case 0x571202:c.instructions+=1;goto B571202;
case 0x571204:goto L571204;
case 0x571209:goto L571209;
case 0x57120c:goto L57120c;
case 0x57120f:c.instructions+=2;goto B57120f;
case 0x571211:c.instructions+=1;goto B571211;
case 0x571213:goto L571213;
case 0x571218:goto L571218;
case 0x57121b:goto L57121b;
case 0x57121e:c.instructions+=2;goto B57121e;
case 0x571220:c.instructions+=1;goto B571220;
case 0x571222:goto L571222;
case 0x571227:goto L571227;
case 0x57122a:goto L57122a;
case 0x57122d:c.instructions+=2;goto B57122d;
case 0x57122f:c.instructions+=1;goto B57122f;
case 0x571231:goto L571231;
case 0x571236:goto L571236;
case 0x571239:goto L571239;
case 0x57123c:c.instructions+=2;goto B57123c;
case 0x57123e:c.instructions+=1;goto B57123e;
case 0x571240:goto L571240;
case 0x571245:goto L571245;
case 0x571248:goto L571248;
case 0x571249:c.instructions+=2;goto B571249;
case 0x57124a:c.instructions+=1;goto B57124a;
case 0x571250:goto L571250;
case 0x571255:c.instructions+=1;goto B571255;
case 0x57125a:goto L57125a;
case 0x57125c:c.instructions+=1;goto B57125c;
case 0x57125e:goto L57125e;
case 0x571260:c.instructions+=1;goto B571260;
case 0x571261:goto L571261;
case 0x571266:c.instructions+=2;goto B571266;
case 0x571268:c.instructions+=1;goto B571268;
case 0x57126a:goto L57126a;
case 0x57126d:c.instructions+=1;goto B57126d;
case 0x57126f:goto L57126f;
case 0x571274:c.instructions+=1;goto B571274;
case 0x571275:goto L571275;
case 0x571277:c.instructions+=1;goto B571277;
case 0x571280:goto L571280;
case 0x571285:c.instructions+=2;goto B571285;
case 0x571287:c.instructions+=1;goto B571287;
case 0x571289:goto L571289;
case 0x57128c:c.instructions+=1;goto B57128c;
case 0x57128e:goto L57128e;
case 0x571293:c.instructions+=1;goto B571293;
case 0x571294:goto L571294;
case 0x571296:c.instructions+=1;goto B571296;
case 0x5712a0:goto L5712a0;
case 0x5712a5:c.instructions+=2;goto B5712a5;
case 0x5712a8:c.instructions+=1;goto B5712a8;
case 0x5712aa:goto L5712aa;
case 0x5712b1:goto L5712b1;
case 0x5712b6:c.instructions+=1;goto B5712b6;
case 0x5712b7:goto L5712b7;
case 0x5712bc:goto L5712bc;
case 0x5712be:c.instructions+=1;goto B5712be;
case 0x5712c0:goto L5712c0;
case 0x5712c3:c.instructions+=1;goto B5712c3;
case 0x5712c5:goto L5712c5;
case 0x5712ca:goto L5712ca;
case 0x5712cc:c.instructions+=1;goto B5712cc;
case 0x5712cd:goto L5712cd;
case 0x5712d2:c.instructions+=1;goto B5712d2;
case 0x5712d3:goto L5712d3;
case 0x5712d8:c.instructions+=1;goto B5712d8;
case 0x5712d9:goto L5712d9;
case 0x5712de:c.instructions+=1;goto B5712de;
case 0x5712df:goto L5712df;
case 0x5712e4:c.instructions+=1;goto B5712e4;
case 0x5712e5:goto L5712e5;
case 0x5712ea:goto L5712ea;
case 0x5712ed:c.instructions+=1;goto B5712ed;
case 0x5712ef:goto L5712ef;
case 0x5712f6:goto L5712f6;
case 0x5712fb:c.instructions+=1;goto B5712fb;
case 0x5712fc:goto L5712fc;
case 0x571301:c.instructions+=1;goto B571301;
case 0x571302:goto L571302;
case 0x571307:c.instructions+=1;goto B571307;
case 0x571308:goto L571308;
case 0x57130d:c.instructions+=1;goto B57130d;
case 0x57130e:goto L57130e;
case 0x571313:c.instructions+=1;goto B571313;
case 0x571314:goto L571314;
case 0x571319:c.instructions+=1;goto B571319;
case 0x57131a:goto L57131a;
case 0x57131f:c.instructions+=1;goto B57131f;
case 0x571380:goto L571380;
case 0x571385:c.instructions+=2;goto B571385;
case 0x571388:c.instructions+=1;goto B571388;
case 0x57138a:goto L57138a;
case 0x571391:goto L571391;
case 0x571396:c.instructions+=1;goto B571396;
case 0x571397:goto L571397;
case 0x57139c:c.instructions+=1;goto B57139c;
case 0x57139d:goto L57139d;
case 0x5713a2:c.instructions+=1;goto B5713a2;
case 0x5713a3:goto L5713a3;
case 0x5713a8:c.instructions+=1;goto B5713a8;
case 0x5713a9:goto L5713a9;
case 0x5713ae:c.instructions+=1;goto B5713ae;
case 0x5713af:goto L5713af;
case 0x5713b4:c.instructions+=1;goto B5713b4;
case 0x5713b5:goto L5713b5;
case 0x5713ba:goto L5713ba;
case 0x5713bd:c.instructions+=1;goto B5713bd;
case 0x5713bf:goto L5713bf;
case 0x5713c6:goto L5713c6;
case 0x5713cb:c.instructions+=1;goto B5713cb;
case 0x5713cc:goto L5713cc;
case 0x5713d1:c.instructions+=1;goto B5713d1;
case 0x5713d2:goto L5713d2;
case 0x5713d7:c.instructions+=1;goto B5713d7;
case 0x5713d8:goto L5713d8;
case 0x5713dd:c.instructions+=1;goto B5713dd;
case 0x5713de:goto L5713de;
case 0x5713e3:c.instructions+=1;goto B5713e3;
case 0x5713e4:goto L5713e4;
case 0x5713e9:c.instructions+=1;goto B5713e9;
case 0x5713ea:goto L5713ea;
case 0x5713ef:c.instructions+=1;goto B5713ef;
case 0x5713f0:goto L5713f0;
case 0x5713f5:c.instructions+=1;goto B5713f5;
case 0x5713f6:goto L5713f6;
case 0x5713f8:c.instructions+=1;goto B5713f8;
case 0x571450:goto L571450;
case 0x571453:c.instructions+=5;goto B571453;
case 0x571454:c.instructions+=4;goto B571454;
case 0x571456:c.instructions+=3;goto B571456;
case 0x57145b:c.instructions+=2;goto B57145b;
case 0x571460:c.instructions+=1;goto B571460;
case 0x571464:goto L571464;
case 0x571466:goto L571466;
case 0x571468:c.instructions+=7;goto B571468;
case 0x57146a:c.instructions+=6;goto B57146a;
case 0x57146c:c.instructions+=5;goto B57146c;
case 0x57146d:c.instructions+=4;goto B57146d;
case 0x571471:c.instructions+=3;goto B571471;
case 0x571476:c.instructions+=2;goto B571476;
case 0x571477:c.instructions+=1;goto B571477;
case 0x57147c:goto L57147c;
case 0x571480:c.instructions+=4;goto B571480;
case 0x571484:c.instructions+=3;goto B571484;
case 0x571485:c.instructions+=2;goto B571485;
case 0x571486:c.instructions+=1;goto B571486;
case 0x57148b:goto L57148b;
case 0x57148e:c.instructions+=3;goto B57148e;
case 0x57148f:c.instructions+=2;goto B57148f;
case 0x571492:c.instructions+=1;goto B571492;
case 0x5714a0:goto L5714a0;
case 0x5714a1:c.instructions+=8;goto B5714a1;
case 0x5714a2:c.instructions+=7;goto B5714a2;
case 0x5714a3:c.instructions+=6;goto B5714a3;
case 0x5714a7:c.instructions+=5;goto B5714a7;
case 0x5714a9:c.instructions+=4;goto B5714a9;
case 0x5714ac:c.instructions+=3;goto B5714ac;
case 0x5714ad:c.instructions+=2;goto B5714ad;
case 0x5714ae:c.instructions+=1;goto B5714ae;
case 0x5714b3:goto L5714b3;
case 0x5714b9:c.instructions+=15;goto B5714b9;
case 0x5714bc:c.instructions+=14;goto B5714bc;
case 0x5714c2:c.instructions+=13;goto B5714c2;
case 0x5714c4:c.instructions+=12;goto B5714c4;
case 0x5714c9:c.instructions+=11;goto B5714c9;
case 0x5714ca:c.instructions+=10;goto B5714ca;
case 0x5714cd:c.instructions+=9;goto B5714cd;
case 0x5714d0:c.instructions+=8;goto B5714d0;
case 0x5714d3:c.instructions+=7;goto B5714d3;
case 0x5714d6:c.instructions+=6;goto B5714d6;
case 0x5714d9:c.instructions+=5;goto B5714d9;
case 0x5714dc:c.instructions+=4;goto B5714dc;
case 0x5714df:c.instructions+=3;goto B5714df;
case 0x5714e3:c.instructions+=2;goto B5714e3;
case 0x5714e6:c.instructions+=1;goto B5714e6;
case 0x5714eb:goto L5714eb;
case 0x5714ee:c.instructions+=2;goto B5714ee;
case 0x5714f0:c.instructions+=1;goto B5714f0;
case 0x5714f2:goto L5714f2;
case 0x5714f6:goto L5714f6;
case 0x5714f7:c.instructions+=10;goto B5714f7;
case 0x5714fb:c.instructions+=9;goto B5714fb;
case 0x5714ff:c.instructions+=8;goto B5714ff;
case 0x571502:c.instructions+=7;goto B571502;
case 0x571508:c.instructions+=6;goto B571508;
case 0x57150e:c.instructions+=5;goto B57150e;
case 0x571514:c.instructions+=4;goto B571514;
case 0x57151b:c.instructions+=3;goto B57151b;
case 0x57151c:c.instructions+=2;goto B57151c;
case 0x57151d:c.instructions+=1;goto B57151d;
case 0x571520:goto L571520;
case 0x571524:c.instructions+=4;goto B571524;
case 0x571527:c.instructions+=3;goto B571527;
case 0x571529:c.instructions+=2;goto B571529;
case 0x57152b:c.instructions+=1;goto B57152b;
case 0x57152d:goto L57152d;
case 0x57152e:c.instructions+=2;goto B57152e;
case 0x571532:c.instructions+=1;goto B571532;
case 0x571533:goto L571533;
case 0x571537:c.instructions+=5;goto B571537;
case 0x57153a:c.instructions+=4;goto B57153a;
case 0x57153c:c.instructions+=3;goto B57153c;
case 0x57153d:c.instructions+=2;goto B57153d;
case 0x57153f:c.instructions+=1;goto B57153f;
case 0x571541:goto L571541;
case 0x571542:c.instructions+=1;goto B571542;
case 0x571543:goto L571543;
case 0x571550:goto L571550;
case 0x571551:c.instructions+=8;goto B571551;
case 0x571553:c.instructions+=7;goto B571553;
case 0x571559:c.instructions+=6;goto B571559;
case 0x57155f:c.instructions+=5;goto B57155f;
case 0x571560:c.instructions+=4;goto B571560;
case 0x571564:c.instructions+=3;goto B571564;
case 0x571567:c.instructions+=2;goto B571567;
case 0x571569:c.instructions+=1;goto B571569;
case 0x57156b:goto L57156b;
case 0x57156d:c.instructions+=2;goto B57156d;
case 0x57156f:c.instructions+=1;goto B57156f;
case 0x571571:goto L571571;
case 0x571572:c.instructions+=2;goto B571572;
case 0x571576:c.instructions+=1;goto B571576;
case 0x571580:goto L571580;
case 0x571583:c.instructions+=5;goto B571583;
case 0x57158a:c.instructions+=4;goto B57158a;
case 0x57158b:c.instructions+=3;goto B57158b;
case 0x57158c:c.instructions+=2;goto B57158c;
case 0x57158e:c.instructions+=1;goto B57158e;
case 0x571590:goto L571590;
case 0x571591:goto L571591;
case 0x571592:c.instructions+=3;goto B571592;
case 0x571598:c.instructions+=2;goto B571598;
case 0x571599:c.instructions+=1;goto B571599;
case 0x57159c:goto L57159c;
case 0x57159d:c.instructions+=3;goto B57159d;
case 0x5715a3:c.instructions+=2;goto B5715a3;
case 0x5715a4:c.instructions+=1;goto B5715a4;
case 0x5715b0:goto L5715b0;
case 0x5715b4:c.instructions+=8;goto B5715b4;
case 0x5715b5:c.instructions+=7;goto B5715b5;
case 0x5715b7:c.instructions+=6;goto B5715b7;
case 0x5715bd:c.instructions+=5;goto B5715bd;
case 0x5715be:c.instructions+=4;goto B5715be;
case 0x5715c4:c.instructions+=3;goto B5715c4;
case 0x5715c7:c.instructions+=2;goto B5715c7;
case 0x5715c9:c.instructions+=1;goto B5715c9;
case 0x5715cb:goto L5715cb;
case 0x5715cc:c.instructions+=6;goto B5715cc;
case 0x5715ce:c.instructions+=5;goto B5715ce;
case 0x5715d0:c.instructions+=4;goto B5715d0;
case 0x5715d2:c.instructions+=3;goto B5715d2;
case 0x5715d3:c.instructions+=2;goto B5715d3;
case 0x5715d7:c.instructions+=1;goto B5715d7;
case 0x5715d9:goto L5715d9;
case 0x5715e0:goto L5715e0;
case 0x5715e7:c.instructions+=5;goto B5715e7;
case 0x5715e8:c.instructions+=4;goto B5715e8;
case 0x5715eb:c.instructions+=3;goto B5715eb;
case 0x5715ec:c.instructions+=2;goto B5715ec;
case 0x5715ee:c.instructions+=1;goto B5715ee;
case 0x5715f0:goto L5715f0;
case 0x5715f4:c.instructions+=2;goto B5715f4;
case 0x5715f6:c.instructions+=1;goto B5715f6;
case 0x5715f8:goto L5715f8;
case 0x5715fa:c.instructions+=2;goto B5715fa;
case 0x5715ff:c.instructions+=1;goto B5715ff;
case 0x571601:goto L571601;
case 0x571604:c.instructions+=2;goto B571604;
case 0x571607:c.instructions+=1;goto B571607;
case 0x57160a:goto L57160a;
case 0x57160c:c.instructions+=8;goto B57160c;
case 0x57160e:c.instructions+=7;goto B57160e;
case 0x571610:c.instructions+=6;goto B571610;
case 0x571612:c.instructions+=5;goto B571612;
case 0x571614:c.instructions+=4;goto B571614;
case 0x571617:c.instructions+=3;goto B571617;
case 0x571619:c.instructions+=2;goto B571619;
case 0x57161c:c.instructions+=1;goto B57161c;
case 0x57161f:goto L57161f;
case 0x571621:goto L571621;
case 0x571623:c.instructions+=1;goto B571623;
case 0x571626:goto L571626;
case 0x571628:goto L571628;
case 0x571629:c.instructions+=1;goto B571629;
case 0x57162a:goto L57162a;
case 0x571630:c.instructions+=3;goto B571630;
case 0x571631:c.instructions+=2;goto B571631;
case 0x571632:c.instructions+=1;goto B571632;
case 0x571640:goto L571640;
case 0x571644:c.instructions+=5;goto B571644;
case 0x571647:c.instructions+=4;goto B571647;
case 0x571648:c.instructions+=3;goto B571648;
case 0x57164a:c.instructions+=2;goto B57164a;
case 0x57164e:c.instructions+=1;goto B57164e;
case 0x571650:goto L571650;
case 0x571652:goto L571652;
case 0x571655:c.instructions+=2;goto B571655;
case 0x571657:c.instructions+=1;goto B571657;
case 0x571659:goto L571659;
case 0x57165d:c.instructions+=7;goto B57165d;
case 0x57165e:c.instructions+=6;goto B57165e;
case 0x57165f:c.instructions+=5;goto B57165f;
case 0x571663:c.instructions+=4;goto B571663;
case 0x571664:c.instructions+=3;goto B571664;
case 0x571665:c.instructions+=2;goto B571665;
case 0x571667:c.instructions+=1;goto B571667;
case 0x57166c:goto L57166c;
case 0x57166d:c.instructions+=1;goto B57166d;
case 0x571670:goto L571670;
case 0x571673:c.instructions+=2;goto B571673;
case 0x571675:c.instructions+=1;goto B571675;
case 0x571677:goto L571677;
case 0x57167b:c.instructions+=7;goto B57167b;
case 0x57167c:c.instructions+=6;goto B57167c;
case 0x57167d:c.instructions+=5;goto B57167d;
case 0x571681:c.instructions+=4;goto B571681;
case 0x571682:c.instructions+=3;goto B571682;
case 0x571683:c.instructions+=2;goto B571683;
case 0x571685:c.instructions+=1;goto B571685;
case 0x57168a:goto L57168a;
case 0x57168b:c.instructions+=1;goto B57168b;
case 0x57168e:goto L57168e;
case 0x571691:c.instructions+=2;goto B571691;
case 0x571693:c.instructions+=1;goto B571693;
case 0x571695:goto L571695;
case 0x571696:c.instructions+=5;goto B571696;
case 0x571697:c.instructions+=4;goto B571697;
case 0x57169b:c.instructions+=3;goto B57169b;
case 0x57169c:c.instructions+=2;goto B57169c;
case 0x57169e:c.instructions+=1;goto B57169e;
case 0x5716a3:goto L5716a3;
case 0x5716a5:c.instructions+=7;goto B5716a5;
case 0x5716a7:c.instructions+=6;goto B5716a7;
case 0x5716a9:c.instructions+=5;goto B5716a9;
case 0x5716ad:c.instructions+=4;goto B5716ad;
case 0x5716ae:c.instructions+=3;goto B5716ae;
case 0x5716b0:c.instructions+=2;goto B5716b0;
case 0x5716b4:c.instructions+=1;goto B5716b4;
case 0x5716b9:goto L5716b9;
case 0x5716ba:c.instructions+=1;goto B5716ba;
case 0x5716c0:goto L5716c0;
case 0x5716c3:c.instructions+=2;goto B5716c3;
case 0x5716c5:c.instructions+=1;goto B5716c5;
case 0x5716c7:goto L5716c7;
case 0x5716cd:c.instructions+=5;goto B5716cd;
case 0x5716d3:c.instructions+=4;goto B5716d3;
case 0x5716d4:c.instructions+=3;goto B5716d4;
case 0x5716d7:c.instructions+=2;goto B5716d7;
case 0x5716d9:c.instructions+=1;goto B5716d9;
case 0x5716db:goto L5716db;
case 0x5716df:c.instructions+=2;goto B5716df;
case 0x5716e1:c.instructions+=1;goto B5716e1;
case 0x5716e8:goto L5716e8;
case 0x5716ee:c.instructions+=2;goto B5716ee;
case 0x5716ef:c.instructions+=1;goto B5716ef;
case 0x5716f2:goto L5716f2;
case 0x5716f6:c.instructions+=5;goto B5716f6;
case 0x5716f8:c.instructions+=4;goto B5716f8;
case 0x5716fa:c.instructions+=3;goto B5716fa;
case 0x5716fc:c.instructions+=2;goto B5716fc;
case 0x5716fd:c.instructions+=1;goto B5716fd;
case 0x571702:goto L571702;
case 0x571710:goto L571710;
case 0x571713:c.instructions+=2;goto B571713;
case 0x571715:c.instructions+=1;goto B571715;
case 0x571717:goto L571717;
case 0x57171d:c.instructions+=5;goto B57171d;
case 0x571723:c.instructions+=4;goto B571723;
case 0x571724:c.instructions+=3;goto B571724;
case 0x571727:c.instructions+=2;goto B571727;
case 0x571729:c.instructions+=1;goto B571729;
case 0x57172b:goto L57172b;
case 0x57172c:c.instructions+=8;goto B57172c;
case 0x57172d:c.instructions+=7;goto B57172d;
case 0x571731:c.instructions+=6;goto B571731;
case 0x571733:c.instructions+=5;goto B571733;
case 0x571736:c.instructions+=4;goto B571736;
case 0x571737:c.instructions+=3;goto B571737;
case 0x57173e:c.instructions+=2;goto B57173e;
case 0x571745:c.instructions+=1;goto B571745;
case 0x571746:goto L571746;
case 0x57174c:c.instructions+=2;goto B57174c;
case 0x57174d:c.instructions+=1;goto B57174d;
case 0x571750:goto L571750;
case 0x571754:c.instructions+=5;goto B571754;
case 0x571756:c.instructions+=4;goto B571756;
case 0x571758:c.instructions+=3;goto B571758;
case 0x57175a:c.instructions+=2;goto B57175a;
case 0x57175b:c.instructions+=1;goto B57175b;
case 0x571760:goto L571760;
case 0x571770:goto L571770;
case 0x571771:c.instructions+=3;goto B571771;
case 0x571774:c.instructions+=2;goto B571774;
case 0x571776:c.instructions+=1;goto B571776;
case 0x571778:goto L571778;
case 0x57177e:c.instructions+=5;goto B57177e;
case 0x571784:c.instructions+=4;goto B571784;
case 0x571785:c.instructions+=3;goto B571785;
case 0x571788:c.instructions+=2;goto B571788;
case 0x57178a:c.instructions+=1;goto B57178a;
case 0x57178c:goto L57178c;
case 0x57178d:c.instructions+=16;goto B57178d;
case 0x57178e:c.instructions+=15;goto B57178e;
case 0x571792:c.instructions+=14;goto B571792;
case 0x571795:c.instructions+=13;goto B571795;
case 0x571798:c.instructions+=12;goto B571798;
case 0x57179c:c.instructions+=11;goto B57179c;
case 0x57179f:c.instructions+=10;goto B57179f;
case 0x5717a3:c.instructions+=9;goto B5717a3;
case 0x5717a5:c.instructions+=8;goto B5717a5;
case 0x5717ac:c.instructions+=7;goto B5717ac;
case 0x5717b0:c.instructions+=6;goto B5717b0;
case 0x5717b7:c.instructions+=5;goto B5717b7;
case 0x5717bb:c.instructions+=4;goto B5717bb;
case 0x5717bc:c.instructions+=3;goto B5717bc;
case 0x5717c3:c.instructions+=2;goto B5717c3;
case 0x5717ca:c.instructions+=1;goto B5717ca;
case 0x5717cb:goto L5717cb;
case 0x5717d1:c.instructions+=3;goto B5717d1;
case 0x5717d2:c.instructions+=2;goto B5717d2;
case 0x5717d3:c.instructions+=1;goto B5717d3;
case 0x5717d6:goto L5717d6;
case 0x5717da:c.instructions+=5;goto B5717da;
case 0x5717dc:c.instructions+=4;goto B5717dc;
case 0x5717de:c.instructions+=3;goto B5717de;
case 0x5717e0:c.instructions+=2;goto B5717e0;
case 0x5717e1:c.instructions+=1;goto B5717e1;
case 0x5717e6:goto L5717e6;
case 0x5717e7:c.instructions+=1;goto B5717e7;
case 0x5717f0:goto L5717f0;
case 0x5717f1:c.instructions+=8;goto B5717f1;
case 0x5717f2:c.instructions+=7;goto B5717f2;
case 0x5717f4:c.instructions+=6;goto B5717f4;
case 0x5717f7:c.instructions+=5;goto B5717f7;
case 0x5717f8:c.instructions+=4;goto B5717f8;
case 0x5717fa:c.instructions+=3;goto B5717fa;
case 0x5717fc:c.instructions+=2;goto B5717fc;
case 0x5717fe:c.instructions+=1;goto B5717fe;
case 0x571800:goto L571800;
case 0x571801:c.instructions+=1;goto B571801;
case 0x571804:goto L571804;
case 0x571806:c.instructions+=1;goto B571806;
case 0x571808:goto L571808;
case 0x571809:goto L571809;
case 0x57180b:c.instructions+=2;goto B57180b;
case 0x57180c:c.instructions+=1;goto B57180c;
case 0x571811:goto L571811;
case 0x571815:c.instructions+=6;goto B571815;
case 0x571818:c.instructions+=5;goto B571818;
case 0x57181a:c.instructions+=4;goto B57181a;
case 0x57181b:c.instructions+=3;goto B57181b;
case 0x57181e:c.instructions+=2;goto B57181e;
case 0x571820:c.instructions+=1;goto B571820;
case 0x571822:goto L571822;
case 0x571823:goto L571823;
case 0x571824:c.instructions+=4;goto B571824;
case 0x571826:c.instructions+=3;goto B571826;
case 0x571827:c.instructions+=2;goto B571827;
case 0x571828:c.instructions+=1;goto B571828;
case 0x571830:goto L571830;
case 0x571836:c.instructions+=2;goto B571836;
case 0x571838:c.instructions+=1;goto B571838;
case 0x57183a:goto L57183a;
case 0x571844:goto L571844;
case 0x571850:goto L571850;
case 0x571856:c.instructions+=6;goto B571856;
case 0x571857:c.instructions+=5;goto B571857;
case 0x57185b:c.instructions+=4;goto B57185b;
case 0x57185d:c.instructions+=3;goto B57185d;
case 0x57185f:c.instructions+=2;goto B57185f;
case 0x571860:c.instructions+=1;goto B571860;
case 0x571862:goto L571862;
case 0x571869:c.instructions+=1;goto B571869;
case 0x57186b:goto L57186b;
case 0x57186d:goto L57186d;
case 0x571873:c.instructions+=1;goto B571873;
case 0x571875:goto L571875;
case 0x57187c:c.instructions+=1;goto B57187c;
case 0x571880:goto L571880;
case 0x571882:c.instructions+=1;goto B571882;
case 0x571884:goto L571884;
case 0x57188a:c.instructions+=4;goto B57188a;
case 0x57188b:c.instructions+=3;goto B57188b;
case 0x57188e:c.instructions+=2;goto B57188e;
case 0x571890:c.instructions+=1;goto B571890;
case 0x571892:goto L571892;
case 0x571893:c.instructions+=3;goto B571893;
case 0x571895:c.instructions+=2;goto B571895;
case 0x571896:c.instructions+=1;goto B571896;
case 0x571899:goto L571899;
case 0x57189a:c.instructions+=4;goto B57189a;
case 0x5718a0:c.instructions+=3;goto B5718a0;
case 0x5718a2:c.instructions+=2;goto B5718a2;
case 0x5718a3:c.instructions+=1;goto B5718a3;
case 0x5718b0:goto L5718b0;
case 0x5718b1:c.instructions+=4;goto B5718b1;
case 0x5718b3:c.instructions+=3;goto B5718b3;
case 0x5718b9:c.instructions+=2;goto B5718b9;
case 0x5718bb:c.instructions+=1;goto B5718bb;
case 0x5718c1:goto L5718c1;
case 0x5718c7:c.instructions+=5;goto B5718c7;
case 0x5718c8:c.instructions+=4;goto B5718c8;
case 0x5718ce:c.instructions+=3;goto B5718ce;
case 0x5718d0:c.instructions+=2;goto B5718d0;
case 0x5718d1:c.instructions+=1;goto B5718d1;
case 0x5718d3:goto L5718d3;
case 0x5718d9:c.instructions+=3;goto B5718d9;
case 0x5718dc:c.instructions+=2;goto B5718dc;
case 0x5718de:c.instructions+=1;goto B5718de;
case 0x5718e0:goto L5718e0;
case 0x5718e2:c.instructions+=1;goto B5718e2;
case 0x5718e4:goto L5718e4;
case 0x5718e5:c.instructions+=3;goto B5718e5;
case 0x5718e8:c.instructions+=2;goto B5718e8;
case 0x5718ea:c.instructions+=1;goto B5718ea;
case 0x5718ec:goto L5718ec;
case 0x5718ee:goto L5718ee;
case 0x5718f0:c.instructions+=1;goto B5718f0;
case 0x5718f2:goto L5718f2;
case 0x5718f4:goto L5718f4;
case 0x5718f6:c.instructions+=1;goto B5718f6;
case 0x5718f8:goto L5718f8;
case 0x5718fe:c.instructions+=2;goto B5718fe;
case 0x571901:c.instructions+=1;goto B571901;
case 0x571903:goto L571903;
case 0x571905:c.instructions+=2;goto B571905;
case 0x571907:c.instructions+=1;goto B571907;
case 0x571909:goto L571909;
case 0x57190b:goto L57190b;
case 0x57190e:c.instructions+=2;goto B57190e;
case 0x57190f:c.instructions+=1;goto B57190f;
case 0x571914:goto L571914;
case 0x57191a:c.instructions+=1;goto B57191a;
case 0x57191d:goto L57191d;
case 0x571923:c.instructions+=4;goto B571923;
case 0x571924:c.instructions+=3;goto B571924;
case 0x571927:c.instructions+=2;goto B571927;
case 0x571929:c.instructions+=1;goto B571929;
case 0x57192b:goto L57192b;
case 0x571931:c.instructions+=3;goto B571931;
case 0x571932:c.instructions+=2;goto B571932;
case 0x571934:c.instructions+=1;goto B571934;
case 0x571936:goto L571936;
case 0x571938:goto L571938;
case 0x571939:c.instructions+=2;goto B571939;
case 0x57193f:c.instructions+=1;goto B57193f;
case 0x571940:goto L571940;
case 0x571941:c.instructions+=1;goto B571941;
case 0x571950:goto L571950;
case 0x571954:c.instructions+=9;goto B571954;
case 0x571957:c.instructions+=8;goto B571957;
case 0x57195b:c.instructions+=7;goto B57195b;
case 0x57195c:c.instructions+=6;goto B57195c;
case 0x57195f:c.instructions+=5;goto B57195f;
case 0x571961:c.instructions+=4;goto B571961;
case 0x571963:c.instructions+=3;goto B571963;
case 0x571966:c.instructions+=2;goto B571966;
case 0x571967:c.instructions+=1;goto B571967;
case 0x571970:goto L571970;
case 0x571974:c.instructions+=3;goto B571974;
case 0x571976:c.instructions+=2;goto B571976;
case 0x571978:c.instructions+=1;goto B571978;
case 0x57197a:goto L57197a;
case 0x57197d:c.instructions+=1;goto B57197d;
case 0x57197f:goto L57197f;
case 0x571981:goto L571981;
case 0x571988:c.instructions+=2;goto B571988;
case 0x57198b:c.instructions+=1;goto B57198b;
case 0x57198d:goto L57198d;
case 0x57198f:c.instructions+=1;goto B57198f;
case 0x571991:goto L571991;
case 0x571994:c.instructions+=1;goto B571994;
case 0x571996:goto L571996;
case 0x571998:goto L571998;
case 0x57199f:c.instructions+=5;goto B57199f;
case 0x5719a3:c.instructions+=4;goto B5719a3;
case 0x5719a4:c.instructions+=3;goto B5719a4;
case 0x5719a9:c.instructions+=2;goto B5719a9;
case 0x5719aa:c.instructions+=1;goto B5719aa;
case 0x5719af:goto L5719af;
case 0x5719b2:c.instructions+=1;goto B5719b2;
case 0x5719b5:goto L5719b5;
case 0x5719b9:c.instructions+=2;goto B5719b9;
case 0x5719bc:c.instructions+=1;goto B5719bc;
case 0x5719c0:goto L5719c0;
case 0x5719c1:c.instructions+=5;goto B5719c1;
case 0x5719c3:c.instructions+=4;goto B5719c3;
case 0x5719c5:c.instructions+=3;goto B5719c5;
case 0x5719c7:c.instructions+=2;goto B5719c7;
case 0x5719c9:c.instructions+=1;goto B5719c9;
case 0x5719cb:goto L5719cb;
case 0x5719cf:c.instructions+=4;goto B5719cf;
case 0x5719d0:c.instructions+=3;goto B5719d0;
case 0x5719d1:c.instructions+=2;goto B5719d1;
case 0x5719d5:c.instructions+=1;goto B5719d5;
case 0x5719d8:goto L5719d8;
case 0x5719dc:c.instructions+=2;goto B5719dc;
case 0x5719de:c.instructions+=1;goto B5719de;
case 0x5719e0:goto L5719e0;
case 0x5719e2:c.instructions+=1;goto B5719e2;
case 0x5719e4:goto L5719e4;
case 0x5719ea:goto L5719ea;
case 0x5719ec:c.instructions+=4;goto B5719ec;
case 0x5719ed:c.instructions+=3;goto B5719ed;
case 0x5719f0:c.instructions+=2;goto B5719f0;
case 0x5719f2:c.instructions+=1;goto B5719f2;
case 0x5719f4:goto L5719f4;
case 0x5719f5:c.instructions+=1;goto B5719f5;
case 0x5719f6:goto L5719f6;
case 0x5719f7:c.instructions+=1;goto B5719f7;
case 0x571a00:goto L571a00;
case 0x571a04:c.instructions+=4;goto B571a04;
case 0x571a08:c.instructions+=3;goto B571a08;
case 0x571a0e:c.instructions+=2;goto B571a0e;
case 0x571a15:c.instructions+=1;goto B571a15;
case 0x571a20:goto L571a20;
case 0x571a21:c.instructions+=4;goto B571a21;
case 0x571a22:c.instructions+=3;goto B571a22;
case 0x571a26:c.instructions+=2;goto B571a26;
case 0x571a27:c.instructions+=1;goto B571a27;
case 0x571a2c:goto L571a2c;
case 0x571a30:c.instructions+=4;goto B571a30;
case 0x571a33:c.instructions+=3;goto B571a33;
case 0x571a34:c.instructions+=2;goto B571a34;
case 0x571a35:c.instructions+=1;goto B571a35;
case 0x571a3a:goto L571a3a;
case 0x571a3d:c.instructions+=4;goto B571a3d;
case 0x571a43:c.instructions+=3;goto B571a43;
case 0x571a44:c.instructions+=2;goto B571a44;
case 0x571a45:c.instructions+=1;goto B571a45;
case 0x571a50:goto L571a50;
case 0x571a54:c.instructions+=3;goto B571a54;
case 0x571a58:c.instructions+=2;goto B571a58;
case 0x571a5e:c.instructions+=1;goto B571a5e;
case 0x571a60:goto L571a60;
case 0x571a64:c.instructions+=5;goto B571a64;
case 0x571a6a:c.instructions+=4;goto B571a6a;
case 0x571a6c:c.instructions+=3;goto B571a6c;
case 0x571a6f:c.instructions+=2;goto B571a6f;
case 0x571a72:c.instructions+=1;goto B571a72;
case 0x571a80:goto L571a80;
case 0x571a85:c.instructions+=2;goto B571a85;
case 0x571a87:c.instructions+=1;goto B571a87;
case 0x571a89:goto L571a89;
case 0x571a8d:c.instructions+=6;goto B571a8d;
case 0x571a93:c.instructions+=5;goto B571a93;
case 0x571a95:c.instructions+=4;goto B571a95;
case 0x571a97:c.instructions+=3;goto B571a97;
case 0x571a9a:c.instructions+=2;goto B571a9a;
case 0x571a9c:c.instructions+=1;goto B571a9c;
case 0x571a9d:goto L571a9d;
case 0x571aa1:c.instructions+=6;goto B571aa1;
case 0x571aa7:c.instructions+=5;goto B571aa7;
case 0x571aa9:c.instructions+=4;goto B571aa9;
case 0x571aab:c.instructions+=3;goto B571aab;
case 0x571aae:c.instructions+=2;goto B571aae;
case 0x571ab0:c.instructions+=1;goto B571ab0;
case 0x571ac0:goto L571ac0;
case 0x571ac4:c.instructions+=2;goto B571ac4;
case 0x571aca:c.instructions+=1;goto B571aca;
case 0x571ad0:goto L571ad0;
case 0x571ad1:c.instructions+=4;goto B571ad1;
case 0x571ad2:c.instructions+=3;goto B571ad2;
case 0x571ad6:c.instructions+=2;goto B571ad6;
case 0x571ad8:c.instructions+=1;goto B571ad8;
case 0x571ae0:goto L571ae0;
case 0x571ae7:c.instructions+=3;goto B571ae7;
case 0x571ae8:c.instructions+=2;goto B571ae8;
case 0x571ae9:c.instructions+=1;goto B571ae9;
case 0x571aee:goto L571aee;
case 0x571af1:c.instructions+=2;goto B571af1;
case 0x571af3:c.instructions+=1;goto B571af3;
case 0x571af5:goto L571af5;
case 0x571af6:c.instructions+=2;goto B571af6;
case 0x571afc:c.instructions+=1;goto B571afc;
case 0x571afe:goto L571afe;
case 0x571aff:c.instructions+=3;goto B571aff;
case 0x571b01:c.instructions+=2;goto B571b01;
case 0x571b02:c.instructions+=1;goto B571b02;
case 0x571b03:goto L571b03;
case 0x571b0a:c.instructions+=3;goto B571b0a;
case 0x571b0b:c.instructions+=2;goto B571b0b;
case 0x571b0c:c.instructions+=1;goto B571b0c;
case 0x571b10:goto L571b10;
case 0x571b13:c.instructions+=9;goto B571b13;
case 0x571b14:c.instructions+=8;goto B571b14;
case 0x571b18:c.instructions+=7;goto B571b18;
case 0x571b1b:c.instructions+=6;goto B571b1b;
case 0x571b1d:c.instructions+=5;goto B571b1d;
case 0x571b1e:c.instructions+=4;goto B571b1e;
case 0x571b23:c.instructions+=3;goto B571b23;
case 0x571b25:c.instructions+=2;goto B571b25;
case 0x571b29:c.instructions+=1;goto B571b29;
case 0x571b2b:goto L571b2b;
case 0x571b2f:c.instructions+=10;goto B571b2f;
case 0x571b32:c.instructions+=9;goto B571b32;
case 0x571b34:c.instructions+=8;goto B571b34;
case 0x571b37:c.instructions+=7;goto B571b37;
case 0x571b3a:c.instructions+=6;goto B571b3a;
case 0x571b3d:c.instructions+=5;goto B571b3d;
case 0x571b3f:c.instructions+=4;goto B571b3f;
case 0x571b41:c.instructions+=3;goto B571b41;
case 0x571b44:c.instructions+=2;goto B571b44;
case 0x571b46:c.instructions+=1;goto B571b46;
case 0x571b48:goto L571b48;
case 0x571b4b:c.instructions+=2;goto B571b4b;
case 0x571b4d:c.instructions+=1;goto B571b4d;
case 0x571b4f:goto L571b4f;
case 0x571b53:c.instructions+=17;goto B571b53;
case 0x571b56:c.instructions+=16;goto B571b56;
case 0x571b57:c.instructions+=15;goto B571b57;
case 0x571b58:c.instructions+=14;goto B571b58;
case 0x571b5b:c.instructions+=13;goto B571b5b;
case 0x571b5d:c.instructions+=12;goto B571b5d;
case 0x571b60:c.instructions+=11;goto B571b60;
case 0x571b63:c.instructions+=10;goto B571b63;
case 0x571b66:c.instructions+=9;goto B571b66;
case 0x571b69:c.instructions+=8;goto B571b69;
case 0x571b6b:c.instructions+=7;goto B571b6b;
case 0x571b6d:c.instructions+=6;goto B571b6d;
case 0x571b70:c.instructions+=5;goto B571b70;
case 0x571b72:c.instructions+=4;goto B571b72;
case 0x571b75:c.instructions+=3;goto B571b75;
case 0x571b77:c.instructions+=2;goto B571b77;
case 0x571b7b:c.instructions+=1;goto B571b7b;
case 0x571b7d:goto L571b7d;
case 0x571b82:c.instructions+=23;goto B571b82;
case 0x571b86:c.instructions+=22;goto B571b86;
case 0x571b89:c.instructions+=21;goto B571b89;
case 0x571b8b:c.instructions+=20;goto B571b8b;
case 0x571b8e:c.instructions+=19;goto B571b8e;
case 0x571b92:c.instructions+=18;goto B571b92;
case 0x571b95:c.instructions+=17;goto B571b95;
case 0x571b97:c.instructions+=16;goto B571b97;
case 0x571b9b:c.instructions+=15;goto B571b9b;
case 0x571b9f:c.instructions+=14;goto B571b9f;
case 0x571ba1:c.instructions+=13;goto B571ba1;
case 0x571ba3:c.instructions+=12;goto B571ba3;
case 0x571ba7:c.instructions+=11;goto B571ba7;
case 0x571ba9:c.instructions+=10;goto B571ba9;
case 0x571bac:c.instructions+=9;goto B571bac;
case 0x571bae:c.instructions+=8;goto B571bae;
case 0x571bb0:c.instructions+=7;goto B571bb0;
case 0x571bb2:c.instructions+=6;goto B571bb2;
case 0x571bb5:c.instructions+=5;goto B571bb5;
case 0x571bb7:c.instructions+=4;goto B571bb7;
case 0x571bb9:c.instructions+=3;goto B571bb9;
case 0x571bbb:c.instructions+=2;goto B571bbb;
case 0x571bbc:c.instructions+=1;goto B571bbc;
case 0x571bbe:goto L571bbe;
case 0x571bbf:c.instructions+=1;goto B571bbf;
case 0x571bc0:goto L571bc0;
case 0x571bc2:c.instructions+=4;goto B571bc2;
case 0x571bc3:c.instructions+=3;goto B571bc3;
case 0x571bc4:c.instructions+=2;goto B571bc4;
case 0x571bc7:c.instructions+=1;goto B571bc7;
case 0x571bd0:goto L571bd0;
case 0x571bd4:c.instructions+=6;goto B571bd4;
case 0x571bda:c.instructions+=5;goto B571bda;
case 0x571bde:c.instructions+=4;goto B571bde;
case 0x571be1:c.instructions+=3;goto B571be1;
case 0x571be4:c.instructions+=2;goto B571be4;
case 0x571be6:c.instructions+=1;goto B571be6;
case 0x571be8:goto L571be8;
case 0x571beb:c.instructions+=2;goto B571beb;
case 0x571bed:c.instructions+=1;goto B571bed;
case 0x571bef:goto L571bef;
case 0x571bf2:c.instructions+=1;goto B571bf2;
case 0x571bf3:goto L571bf3;
case 0x571bf6:c.instructions+=5;goto B571bf6;
case 0x571bf9:c.instructions+=4;goto B571bf9;
case 0x571bfc:c.instructions+=3;goto B571bfc;
case 0x571c03:c.instructions+=2;goto B571c03;
case 0x571c05:c.instructions+=1;goto B571c05;
case 0x571c10:goto L571c10;
case 0x571c14:c.instructions+=7;goto B571c14;
case 0x571c18:c.instructions+=6;goto B571c18;
case 0x571c19:c.instructions+=5;goto B571c19;
case 0x571c1d:c.instructions+=4;goto B571c1d;
case 0x571c1e:c.instructions+=3;goto B571c1e;
case 0x571c1f:c.instructions+=2;goto B571c1f;
case 0x571c20:c.instructions+=1;goto B571c20;
case 0x571c25:goto L571c25;
case 0x571c28:c.instructions+=2;goto B571c28;
case 0x571c2a:c.instructions+=1;goto B571c2a;
case 0x571c2c:goto L571c2c;
case 0x571c2f:c.instructions+=2;goto B571c2f;
case 0x571c31:c.instructions+=1;goto B571c31;
case 0x571c33:goto L571c33;
case 0x571c36:goto L571c36;
case 0x571c3a:c.instructions+=4;goto B571c3a;
case 0x571c3d:c.instructions+=3;goto B571c3d;
case 0x571c3f:c.instructions+=2;goto B571c3f;
case 0x571c40:c.instructions+=1;goto B571c40;
case 0x571c42:goto L571c42;
case 0x571c49:c.instructions+=1;goto B571c49;
case 0x571c4c:goto L571c4c;
case 0x571c4f:c.instructions+=1;goto B571c4f;
case 0x571c51:goto L571c51;
case 0x571c53:c.instructions+=2;goto B571c53;
case 0x571c56:c.instructions+=1;goto B571c56;
case 0x571c58:goto L571c58;
case 0x571c5b:c.instructions+=3;goto B571c5b;
case 0x571c5e:c.instructions+=2;goto B571c5e;
case 0x571c60:c.instructions+=1;goto B571c60;
case 0x571c61:goto L571c61;
case 0x571c64:c.instructions+=1;goto B571c64;
case 0x571c70:goto L571c70;
case 0x571c74:c.instructions+=7;goto B571c74;
case 0x571c78:c.instructions+=6;goto B571c78;
case 0x571c79:c.instructions+=5;goto B571c79;
case 0x571c7d:c.instructions+=4;goto B571c7d;
case 0x571c7e:c.instructions+=3;goto B571c7e;
case 0x571c7f:c.instructions+=2;goto B571c7f;
case 0x571c80:c.instructions+=1;goto B571c80;
case 0x571c85:goto L571c85;
case 0x571c88:c.instructions+=2;goto B571c88;
case 0x571c8a:c.instructions+=1;goto B571c8a;
case 0x571c8c:goto L571c8c;
case 0x571c8f:c.instructions+=2;goto B571c8f;
case 0x571c91:c.instructions+=1;goto B571c91;
case 0x571c93:goto L571c93;
case 0x571c96:goto L571c96;
case 0x571c9a:c.instructions+=3;goto B571c9a;
case 0x571c9d:c.instructions+=2;goto B571c9d;
case 0x571c9e:c.instructions+=1;goto B571c9e;
case 0x571ca0:goto L571ca0;
case 0x571ca3:c.instructions+=2;goto B571ca3;
case 0x571ca5:c.instructions+=1;goto B571ca5;
case 0x571ca7:goto L571ca7;
case 0x571caa:c.instructions+=1;goto B571caa;
case 0x571cab:goto L571cab;
case 0x571cae:c.instructions+=5;goto B571cae;
case 0x571cb1:c.instructions+=4;goto B571cb1;
case 0x571cb4:c.instructions+=3;goto B571cb4;
case 0x571cbb:c.instructions+=2;goto B571cbb;
case 0x571cbd:c.instructions+=1;goto B571cbd;
case 0x571cc0:goto L571cc0;
case 0x571cc4:c.instructions+=27;goto B571cc4;
case 0x571cc5:c.instructions+=26;goto B571cc5;
case 0x571cc6:c.instructions+=25;goto B571cc6;
case 0x571cca:c.instructions+=24;goto B571cca;
case 0x571cce:c.instructions+=23;goto B571cce;
case 0x571cd0:c.instructions+=22;goto B571cd0;
case 0x571cd3:c.instructions+=21;goto B571cd3;
case 0x571cd6:c.instructions+=20;goto B571cd6;
case 0x571cd9:c.instructions+=19;goto B571cd9;
case 0x571cdb:c.instructions+=18;goto B571cdb;
case 0x571cdd:c.instructions+=17;goto B571cdd;
case 0x571ce0:c.instructions+=16;goto B571ce0;
case 0x571ce1:c.instructions+=15;goto B571ce1;
case 0x571ce3:c.instructions+=14;goto B571ce3;
case 0x571ce5:c.instructions+=13;goto B571ce5;
case 0x571ce9:c.instructions+=12;goto B571ce9;
case 0x571ceb:c.instructions+=11;goto B571ceb;
case 0x571cee:c.instructions+=10;goto B571cee;
case 0x571cf1:c.instructions+=9;goto B571cf1;
case 0x571cf4:c.instructions+=8;goto B571cf4;
case 0x571cf6:c.instructions+=7;goto B571cf6;
case 0x571cf8:c.instructions+=6;goto B571cf8;
case 0x571cfb:c.instructions+=5;goto B571cfb;
case 0x571cfe:c.instructions+=4;goto B571cfe;
case 0x571d00:c.instructions+=3;goto B571d00;
case 0x571d03:c.instructions+=2;goto B571d03;
case 0x571d05:c.instructions+=1;goto B571d05;
case 0x571d07:goto L571d07;
case 0x571d09:c.instructions+=1;goto B571d09;
case 0x571d0b:goto L571d0b;
case 0x571d0d:c.instructions+=1;goto B571d0d;
case 0x571d0f:goto L571d0f;
case 0x571d11:c.instructions+=1;goto B571d11;
case 0x571d13:goto L571d13;
case 0x571d16:goto L571d16;
case 0x571d1a:c.instructions+=7;goto B571d1a;
case 0x571d1d:c.instructions+=6;goto B571d1d;
case 0x571d20:c.instructions+=5;goto B571d20;
case 0x571d22:c.instructions+=4;goto B571d22;
case 0x571d23:c.instructions+=3;goto B571d23;
case 0x571d24:c.instructions+=2;goto B571d24;
case 0x571d25:c.instructions+=1;goto B571d25;
case 0x571d27:goto L571d27;
case 0x571d2a:c.instructions+=2;goto B571d2a;
case 0x571d2c:c.instructions+=1;goto B571d2c;
case 0x571d2e:goto L571d2e;
case 0x571d31:c.instructions+=1;goto B571d31;
case 0x571d32:goto L571d32;
case 0x571d35:c.instructions+=5;goto B571d35;
case 0x571d38:c.instructions+=4;goto B571d38;
case 0x571d3b:c.instructions+=3;goto B571d3b;
case 0x571d42:c.instructions+=2;goto B571d42;
case 0x571d44:c.instructions+=1;goto B571d44;
case 0x571d50:goto L571d50;
case 0x571d51:c.instructions+=8;goto B571d51;
case 0x571d56:c.instructions+=7;goto B571d56;
case 0x571d5a:c.instructions+=6;goto B571d5a;
case 0x571d60:c.instructions+=5;goto B571d60;
case 0x571d64:c.instructions+=4;goto B571d64;
case 0x571d6a:c.instructions+=3;goto B571d6a;
case 0x571d6b:c.instructions+=2;goto B571d6b;
case 0x571d6f:c.instructions+=1;goto B571d6f;
case 0x571d74:goto L571d74;
case 0x571d77:c.instructions+=2;goto B571d77;
case 0x571d79:c.instructions+=1;goto B571d79;
case 0x571d7b:goto L571d7b;
case 0x571d7f:c.instructions+=4;goto B571d7f;
case 0x571d80:c.instructions+=3;goto B571d80;
case 0x571d84:c.instructions+=2;goto B571d84;
case 0x571d85:c.instructions+=1;goto B571d85;
case 0x571d8a:goto L571d8a;
case 0x571d8d:goto L571d8d;
case 0x571d91:c.instructions+=18;goto B571d91;
case 0x571d95:c.instructions+=17;goto B571d95;
case 0x571d97:c.instructions+=16;goto B571d97;
case 0x571d98:c.instructions+=15;goto B571d98;
case 0x571d99:c.instructions+=14;goto B571d99;
case 0x571d9d:c.instructions+=13;goto B571d9d;
case 0x571d9e:c.instructions+=12;goto B571d9e;
case 0x571da1:c.instructions+=11;goto B571da1;
case 0x571da4:c.instructions+=10;goto B571da4;
case 0x571da7:c.instructions+=9;goto B571da7;
case 0x571da9:c.instructions+=8;goto B571da9;
case 0x571dab:c.instructions+=7;goto B571dab;
case 0x571dae:c.instructions+=6;goto B571dae;
case 0x571db3:c.instructions+=5;goto B571db3;
case 0x571db5:c.instructions+=4;goto B571db5;
case 0x571db8:c.instructions+=3;goto B571db8;
case 0x571dbe:c.instructions+=2;goto B571dbe;
case 0x571dc0:c.instructions+=1;goto B571dc0;
case 0x571dc2:goto L571dc2;
case 0x571dc5:c.instructions+=9;goto B571dc5;
case 0x571dc7:c.instructions+=8;goto B571dc7;
case 0x571dca:c.instructions+=7;goto B571dca;
case 0x571dcd:c.instructions+=6;goto B571dcd;
case 0x571dd0:c.instructions+=5;goto B571dd0;
case 0x571dd2:c.instructions+=4;goto B571dd2;
case 0x571dd4:c.instructions+=3;goto B571dd4;
case 0x571dd7:c.instructions+=2;goto B571dd7;
case 0x571dd9:c.instructions+=1;goto B571dd9;
case 0x571ddf:goto L571ddf;
case 0x571de3:c.instructions+=4;goto B571de3;
case 0x571de6:c.instructions+=3;goto B571de6;
case 0x571de8:c.instructions+=2;goto B571de8;
case 0x571dea:c.instructions+=1;goto B571dea;
case 0x571dec:goto L571dec;
case 0x571def:c.instructions+=9;goto B571def;
case 0x571df1:c.instructions+=8;goto B571df1;
case 0x571df2:c.instructions+=7;goto B571df2;
case 0x571df5:c.instructions+=6;goto B571df5;
case 0x571df6:c.instructions+=5;goto B571df6;
case 0x571df9:c.instructions+=4;goto B571df9;
case 0x571dfc:c.instructions+=3;goto B571dfc;
case 0x571dfd:c.instructions+=2;goto B571dfd;
case 0x571dfe:c.instructions+=1;goto B571dfe;
case 0x571dff:goto L571dff;
case 0x571e02:c.instructions+=3;goto B571e02;
case 0x571e04:c.instructions+=2;goto B571e04;
case 0x571e05:c.instructions+=1;goto B571e05;
case 0x571e07:goto L571e07;
case 0x571e0a:c.instructions+=5;goto B571e0a;
case 0x571e0d:c.instructions+=4;goto B571e0d;
case 0x571e14:c.instructions+=3;goto B571e14;
case 0x571e19:c.instructions+=2;goto B571e19;
case 0x571e1b:c.instructions+=1;goto B571e1b;
case 0x571e1d:goto L571e1d;
case 0x571e1f:c.instructions+=1;goto B571e1f;
case 0x571e21:goto L571e21;
case 0x571e27:c.instructions+=10;goto B571e27;
case 0x571e2a:c.instructions+=9;goto B571e2a;
case 0x571e2b:c.instructions+=8;goto B571e2b;
case 0x571e2c:c.instructions+=7;goto B571e2c;
case 0x571e2f:c.instructions+=6;goto B571e2f;
case 0x571e30:c.instructions+=5;goto B571e30;
case 0x571e33:c.instructions+=4;goto B571e33;
case 0x571e38:c.instructions+=3;goto B571e38;
case 0x571e39:c.instructions+=2;goto B571e39;
case 0x571e3a:c.instructions+=1;goto B571e3a;
case 0x571e3b:goto L571e3b;
case 0x571e3d:goto L571e3d;
case 0x571e3f:goto L571e3f;
case 0x571e41:c.instructions+=1;goto B571e41;
case 0x571e43:goto L571e43;
case 0x571e47:c.instructions+=6;goto B571e47;
case 0x571e48:c.instructions+=5;goto B571e48;
case 0x571e49:c.instructions+=4;goto B571e49;
case 0x571e4a:c.instructions+=3;goto B571e4a;
case 0x571e4b:c.instructions+=2;goto B571e4b;
case 0x571e4c:c.instructions+=1;goto B571e4c;
case 0x571e4d:goto L571e4d;
case 0x571e4f:c.instructions+=1;goto B571e4f;
case 0x571e55:goto L571e55;
case 0x571e57:c.instructions+=1;goto B571e57;
case 0x571e5d:goto L571e5d;
case 0x571e62:c.instructions+=2;goto B571e62;
case 0x571e65:c.instructions+=1;goto B571e65;
case 0x571e6b:goto L571e6b;
case 0x571e71:c.instructions+=10;goto B571e71;
case 0x571e74:c.instructions+=9;goto B571e74;
case 0x571e75:c.instructions+=8;goto B571e75;
case 0x571e76:c.instructions+=7;goto B571e76;
case 0x571e79:c.instructions+=6;goto B571e79;
case 0x571e7a:c.instructions+=5;goto B571e7a;
case 0x571e7d:c.instructions+=4;goto B571e7d;
case 0x571e82:c.instructions+=3;goto B571e82;
case 0x571e83:c.instructions+=2;goto B571e83;
case 0x571e84:c.instructions+=1;goto B571e84;
case 0x571e85:goto L571e85;
case 0x571e88:c.instructions+=1;goto B571e88;
case 0x571e8a:goto L571e8a;
case 0x571e8d:c.instructions+=1;goto B571e8d;
case 0x571e93:goto L571e93;
case 0x571e97:c.instructions+=11;goto B571e97;
case 0x571e9a:c.instructions+=10;goto B571e9a;
case 0x571e9e:c.instructions+=9;goto B571e9e;
case 0x571ea0:c.instructions+=8;goto B571ea0;
case 0x571ea3:c.instructions+=7;goto B571ea3;
case 0x571ea9:c.instructions+=6;goto B571ea9;
case 0x571eab:c.instructions+=5;goto B571eab;
case 0x571eae:c.instructions+=4;goto B571eae;
case 0x571eb1:c.instructions+=3;goto B571eb1;
case 0x571eb5:c.instructions+=2;goto B571eb5;
case 0x571eb9:c.instructions+=1;goto B571eb9;
case 0x571ebb:goto L571ebb;
case 0x571ebf:c.instructions+=1;goto B571ebf;
case 0x571ec0:goto L571ec0;
case 0x571ec4:c.instructions+=2;goto B571ec4;
case 0x571ec6:c.instructions+=1;goto B571ec6;
case 0x571ec8:goto L571ec8;
case 0x571eca:c.instructions+=2;goto B571eca;
case 0x571ecc:c.instructions+=1;goto B571ecc;
case 0x571ece:goto L571ece;
case 0x571ed2:c.instructions+=1;goto B571ed2;
case 0x571ed4:goto L571ed4;
case 0x571ed7:c.instructions+=1;goto B571ed7;
case 0x571ed9:goto L571ed9;
case 0x571ede:c.instructions+=2;goto B571ede;
case 0x571ee0:c.instructions+=1;goto B571ee0;
case 0x571ee2:goto L571ee2;
case 0x571ee4:c.instructions+=1;goto B571ee4;
case 0x571eea:goto L571eea;
case 0x571eec:c.instructions+=1;goto B571eec;
case 0x571eee:goto L571eee;
case 0x571ef0:c.instructions+=1;goto B571ef0;
case 0x571ef6:goto L571ef6;
case 0x571ef8:c.instructions+=1;goto B571ef8;
case 0x571efa:goto L571efa;
case 0x571efc:c.instructions+=1;goto B571efc;
case 0x571efe:goto L571efe;
case 0x571f03:c.instructions+=2;goto B571f03;
case 0x571f06:c.instructions+=1;goto B571f06;
case 0x571f08:goto L571f08;
case 0x571f0d:c.instructions+=10;goto B571f0d;
case 0x571f0e:c.instructions+=9;goto B571f0e;
case 0x571f11:c.instructions+=8;goto B571f11;
case 0x571f14:c.instructions+=7;goto B571f14;
case 0x571f17:c.instructions+=6;goto B571f17;
case 0x571f18:c.instructions+=5;goto B571f18;
case 0x571f19:c.instructions+=4;goto B571f19;
case 0x571f1e:c.instructions+=3;goto B571f1e;
case 0x571f1f:c.instructions+=2;goto B571f1f;
case 0x571f20:c.instructions+=1;goto B571f20;
case 0x571f21:goto L571f21;
case 0x571f24:c.instructions+=1;goto B571f24;
case 0x571f26:goto L571f26;
case 0x571f2b:c.instructions+=2;goto B571f2b;
case 0x571f2d:c.instructions+=1;goto B571f2d;
case 0x571f2f:goto L571f2f;
case 0x571f31:c.instructions+=1;goto B571f31;
case 0x571f33:goto L571f33;
case 0x571f35:c.instructions+=1;goto B571f35;
case 0x571f37:goto L571f37;
case 0x571f39:c.instructions+=1;goto B571f39;
case 0x571f3f:goto L571f3f;
case 0x571f41:c.instructions+=1;goto B571f41;
case 0x571f43:goto L571f43;
case 0x571f45:c.instructions+=1;goto B571f45;
case 0x571f47:goto L571f47;
case 0x571f4d:c.instructions+=2;goto B571f4d;
case 0x571f50:c.instructions+=1;goto B571f50;
case 0x571f52:goto L571f52;
case 0x571f56:c.instructions+=4;goto B571f56;
case 0x571f57:c.instructions+=3;goto B571f57;
case 0x571f5a:c.instructions+=2;goto B571f5a;
case 0x571f5e:c.instructions+=1;goto B571f5e;
case 0x571f64:goto L571f64;
case 0x571f65:c.instructions+=6;goto B571f65;
case 0x571f66:c.instructions+=5;goto B571f66;
case 0x571f67:c.instructions+=4;goto B571f67;
case 0x571f6a:c.instructions+=3;goto B571f6a;
case 0x571f6b:c.instructions+=2;goto B571f6b;
case 0x571f6c:c.instructions+=1;goto B571f6c;
case 0x571f6d:goto L571f6d;
case 0x571f73:c.instructions+=10;goto B571f73;
case 0x571f76:c.instructions+=9;goto B571f76;
case 0x571f77:c.instructions+=8;goto B571f77;
case 0x571f78:c.instructions+=7;goto B571f78;
case 0x571f7b:c.instructions+=6;goto B571f7b;
case 0x571f7c:c.instructions+=5;goto B571f7c;
case 0x571f7f:c.instructions+=4;goto B571f7f;
case 0x571f84:c.instructions+=3;goto B571f84;
case 0x571f85:c.instructions+=2;goto B571f85;
case 0x571f86:c.instructions+=1;goto B571f86;
case 0x571f87:goto L571f87;
case 0x571f8d:c.instructions+=10;goto B571f8d;
case 0x571f90:c.instructions+=9;goto B571f90;
case 0x571f91:c.instructions+=8;goto B571f91;
case 0x571f92:c.instructions+=7;goto B571f92;
case 0x571f95:c.instructions+=6;goto B571f95;
case 0x571f96:c.instructions+=5;goto B571f96;
case 0x571f99:c.instructions+=4;goto B571f99;
case 0x571f9e:c.instructions+=3;goto B571f9e;
case 0x571f9f:c.instructions+=2;goto B571f9f;
case 0x571fa0:c.instructions+=1;goto B571fa0;
case 0x571fb0:goto L571fb0;
case 0x571fb4:c.instructions+=4;goto B571fb4;
case 0x571fb8:c.instructions+=3;goto B571fb8;
case 0x571fbe:c.instructions+=2;goto B571fbe;
case 0x571fc4:c.instructions+=1;goto B571fc4;
case 0x571fd0:goto L571fd0;
case 0x571fd6:c.instructions+=5;goto B571fd6;
case 0x571fd7:c.instructions+=4;goto B571fd7;
case 0x571fd9:c.instructions+=3;goto B571fd9;
case 0x571fdb:c.instructions+=2;goto B571fdb;
case 0x571fdc:c.instructions+=1;goto B571fdc;
case 0x571fde:goto L571fde;
case 0x571fe2:c.instructions+=1;goto B571fe2;
case 0x571fe7:goto L571fe7;
case 0x571fe9:c.instructions+=1;goto B571fe9;
case 0x571feb:goto L571feb;
case 0x571fec:c.instructions+=3;goto B571fec;
case 0x571fef:c.instructions+=2;goto B571fef;
case 0x571ff1:c.instructions+=1;goto B571ff1;
case 0x571ff3:goto L571ff3;
case 0x571ff5:c.instructions+=3;goto B571ff5;
case 0x571ff6:c.instructions+=2;goto B571ff6;
case 0x571ff7:c.instructions+=1;goto B571ff7;
case 0x571ff8:goto L571ff8;
case 0x571ffb:c.instructions+=2;goto B571ffb;
case 0x571fff:c.instructions+=1;goto B571fff;
default:missing_instruction(c.pc);}
B571001:L571001:{c.instructions+=3;NFSU2_TR(0x571001);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571007:{NFSU2_TR(0x571007);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571008:{NFSU2_TR(0x571008);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571010:L571010:{c.instructions+=3;NFSU2_TR(0x571010);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B571014:{NFSU2_TR(0x571014);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B571017:{NFSU2_TR(0x571017);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571020:L571020:{c.instructions+=5;NFSU2_TR(0x571020);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571021:{NFSU2_TR(0x571021);
__builtin_memmove((R+24),(R+4),4);
}
B571023:{NFSU2_TR(0x571023);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B571026:{NFSU2_TR(0x571026);
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
B571028:{NFSU2_TR(0x571028);
if(r1(R+518)){{goto L571047;}}
}
B57102a:L57102a:{c.instructions+=3;NFSU2_TR(0x57102a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571030:{NFSU2_TR(0x571030);
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
B571032:{NFSU2_TR(0x571032);
if(r1(R+518)){{goto L571047;}}
}
B571034:L571034:{c.instructions+=2;NFSU2_TR(0x571034);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571035:{NFSU2_TR(0x571035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57103aull));
TAIL_STATIC(0x440540u,440);
}
B57103a:L57103a:{c.instructions+=2;NFSU2_TR(0x57103a);
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
B57103d:{NFSU2_TR(0x57103d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B571047:L571047:{c.instructions+=2;NFSU2_TR(0x571047);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571048:{NFSU2_TR(0x571048);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571050:L571050:{c.instructions+=3;NFSU2_TR(0x571050);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571054:{NFSU2_TR(0x571054);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
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
B57105a:{NFSU2_TR(0x57105a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571060:L571060:{c.instructions+=5;NFSU2_TR(0x571060);
__builtin_memmove((R+4),gp(0x864f54),4);
}
B571066:{NFSU2_TR(0x571066);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B571068:{NFSU2_TR(0x571068);
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
B57106a:{NFSU2_TR(0x57106a);
__builtin_memmove((R+0),(R+518),1);
}
B57106d:{NFSU2_TR(0x57106d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571070:L571070:{c.instructions+=5;NFSU2_TR(0x571070);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571074:{NFSU2_TR(0x571074);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B571078:{NFSU2_TR(0x571078);
__builtin_memmove(gp(0x864f58),(R+0),4);
}
B57107d:{NFSU2_TR(0x57107d);
__builtin_memmove(gp(0x864f5c),(R+4),4);
}
B571083:{NFSU2_TR(0x571083);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571090:L571090:{c.instructions+=5;NFSU2_TR(0x571090);
__builtin_memmove((R+4),gp(0x864f7c),4);
}
B571096:{NFSU2_TR(0x571096);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B571098:{NFSU2_TR(0x571098);
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
B57109a:{NFSU2_TR(0x57109a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B57109d:{NFSU2_TR(0x57109d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5710a0:L5710a0:{c.instructions+=7;NFSU2_TR(0x5710a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5710a1:{NFSU2_TR(0x5710a1);
__builtin_memmove((R+12),(R+4),4);
}
B5710a3:{NFSU2_TR(0x5710a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5710a6:{NFSU2_TR(0x5710a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5710a7:{NFSU2_TR(0x5710a7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5710a9:{NFSU2_TR(0x5710a9);
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
B5710ab:{NFSU2_TR(0x5710ab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5710d4;}}
}
B5710ad:L5710ad:{c.instructions+=2;NFSU2_TR(0x5710ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5710ae:{NFSU2_TR(0x5710ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5710b1:L5710b1:{c.instructions+=3;NFSU2_TR(0x5710b1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(r2(U+0)));
}
B5710b4:{NFSU2_TR(0x5710b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5710b5:{NFSU2_TR(0x5710b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5710baull));
TAIL_STATIC(0x5d6430u,5d6);
}
B5710ba:L5710ba:{c.instructions+=4;NFSU2_TR(0x5710ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xefull))));
s1(u32(r4(U+0)),r1(U+4));
}
B5710be:{NFSU2_TR(0x5710be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5710c1:{NFSU2_TR(0x5710c1);
__builtin_memmove((R+4),(R+0),4);
}
B5710c3:{NFSU2_TR(0x5710c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5710c8ull));
TAIL_STATIC(0x5db0e0u,5db);
}
B5710c8:L5710c8:{c.instructions+=5;NFSU2_TR(0x5710c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5710cb:{NFSU2_TR(0x5710cb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5710cc:{NFSU2_TR(0x5710cc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B5710cf:{NFSU2_TR(0x5710cf);
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
B5710d1:{NFSU2_TR(0x5710d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5710b1u);}goto L5710b1;}}
}
B5710d3:L5710d3:{c.instructions+=1;NFSU2_TR(0x5710d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5710d4:L5710d4:{c.instructions+=4;NFSU2_TR(0x5710d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5710d5:{NFSU2_TR(0x5710d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5710dc:{NFSU2_TR(0x5710dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5710dd:{NFSU2_TR(0x5710dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5710e0:L5710e0:{c.instructions+=7;NFSU2_TR(0x5710e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5710e1:{NFSU2_TR(0x5710e1);
__builtin_memmove((R+12),(R+4),4);
}
B5710e3:{NFSU2_TR(0x5710e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5710e6:{NFSU2_TR(0x5710e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5710e7:{NFSU2_TR(0x5710e7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5710e9:{NFSU2_TR(0x5710e9);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5710eb:{NFSU2_TR(0x5710eb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57111e;}}
}
B5710ed:L5710ed:{c.instructions+=2;NFSU2_TR(0x5710ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5710ee:{NFSU2_TR(0x5710ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5710f1:L5710f1:{c.instructions+=3;NFSU2_TR(0x5710f1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(r2(U+0)));
}
B5710f4:{NFSU2_TR(0x5710f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5710f5:{NFSU2_TR(0x5710f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5710faull));
TAIL_STATIC(0x5d6430u,5d6);
}
B5710fa:L5710fa:{c.instructions+=4;NFSU2_TR(0x5710fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x10ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B5710fe:{NFSU2_TR(0x5710fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B571101:{NFSU2_TR(0x571101);
__builtin_memmove((R+4),(R+0),4);
}
B571103:{NFSU2_TR(0x571103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x571108ull));
TAIL_STATIC(0x5db0e0u,5db);
}
B571108:L571108:{c.instructions+=5;NFSU2_TR(0x571108);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57110b:{NFSU2_TR(0x57110b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57110c:{NFSU2_TR(0x57110c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B57110f:{NFSU2_TR(0x57110f);
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
B571111:{NFSU2_TR(0x571111);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5710f1u);}goto L5710f1;}}
}
B571113:L571113:{c.instructions+=5;NFSU2_TR(0x571113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571114:{NFSU2_TR(0x571114);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571115:{NFSU2_TR(0x571115);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57111c:{NFSU2_TR(0x57111c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57111d:{NFSU2_TR(0x57111d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57111e:L57111e:{c.instructions+=4;NFSU2_TR(0x57111e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571121:{NFSU2_TR(0x571121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571122:{NFSU2_TR(0x571122);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B571123:{NFSU2_TR(0x571123);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571130:L571130:{c.instructions+=3;NFSU2_TR(0x571130);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571134:{NFSU2_TR(0x571134);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x864f80ull))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B57113f:{NFSU2_TR(0x57113f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571140:L571140:{c.instructions+=2;NFSU2_TR(0x571140);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B571144:{NFSU2_TR(0x571144);
TAIL_STATIC(0x57dc60u,57d);
}
B571150:L571150:{c.instructions+=2;NFSU2_TR(0x571150);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B571154:{NFSU2_TR(0x571154);
TAIL_STATIC(0x57f2d0u,57f);
}
B571160:L571160:{c.instructions+=5;NFSU2_TR(0x571160);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571161:{NFSU2_TR(0x571161);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B571165:{NFSU2_TR(0x571165);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571166:{NFSU2_TR(0x571166);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571167:{NFSU2_TR(0x571167);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57116cull));
TAIL_STATIC(0x5d7400u,5d7);
}
B57116c:L57116c:{c.instructions+=4;NFSU2_TR(0x57116c);
__builtin_memmove((R+28),(R+0),4);
}
B57116e:{NFSU2_TR(0x57116e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B571171:{NFSU2_TR(0x571171);
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
B571173:{NFSU2_TR(0x571173);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L571178;}}
}
B571175:L571175:{c.instructions+=3;NFSU2_TR(0x571175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571176:{NFSU2_TR(0x571176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571177:{NFSU2_TR(0x571177);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571178:L571178:{c.instructions+=2;NFSU2_TR(0x571178);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571179:{NFSU2_TR(0x571179);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57117eull));
TAIL_STATIC(0x43db50u,43d);
}
B57117e:L57117e:{c.instructions+=5;NFSU2_TR(0x57117e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B571181:{NFSU2_TR(0x571181);
__builtin_memmove((R+24),(R+0),4);
}
B571183:{NFSU2_TR(0x571183);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571184:{NFSU2_TR(0x571184);
w4(R+4,u32(0x883e70ull));
}
B571189:{NFSU2_TR(0x571189);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57118eull));
TAIL_STATIC(0x5d7470u,5d7);
}
B57118e:L57118e:{c.instructions+=3;NFSU2_TR(0x57118e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B571191:{NFSU2_TR(0x571191);
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
B571193:{NFSU2_TR(0x571193);
if(r1(R+518)){{goto L5711a8;}}
}
B571195:L571195:{c.instructions+=3;NFSU2_TR(0x571195);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571196:{NFSU2_TR(0x571196);
w4(R+4,u32(0x88f768ull));
}
B57119b:{NFSU2_TR(0x57119b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5711a0ull));
TAIL_STATIC(0x5d3c60u,5d3);
}
B5711a0:L5711a0:{c.instructions+=2;NFSU2_TR(0x5711a0);
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
B5711a2:{NFSU2_TR(0x5711a2);
if(r1(R+518)){{goto L5711a8;}}
}
B5711a4:L5711a4:{c.instructions+=1;NFSU2_TR(0x5711a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5711a8:L5711a8:{c.instructions+=2;NFSU2_TR(0x5711a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5711a9:{NFSU2_TR(0x5711a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5711aeull));
TAIL_STATIC(0x5db340u,5db);
}
B5711ae:L5711ae:{c.instructions+=4;NFSU2_TR(0x5711ae);
__builtin_memmove((R+24),(R+0),4);
}
B5711b0:{NFSU2_TR(0x5711b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5711b3:{NFSU2_TR(0x5711b3);
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
B5711b5:{NFSU2_TR(0x5711b5);
if(r1(R+518)){{goto L5711be;}}
}
B5711b7:L5711b7:{c.instructions+=2;NFSU2_TR(0x5711b7);
__builtin_memmove((R+4),(R+24),4);
}
B5711b9:{NFSU2_TR(0x5711b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5711beull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5710a0u);}goto L5710a0;}
}
B5711be:L5711be:{c.instructions+=4;NFSU2_TR(0x5711be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5711bf:{NFSU2_TR(0x5711bf);
__builtin_memmove((R+0),(R+24),4);
}
B5711c1:{NFSU2_TR(0x5711c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5711c2:{NFSU2_TR(0x5711c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5711d0:L5711d0:{c.instructions+=5;NFSU2_TR(0x5711d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5711d1:{NFSU2_TR(0x5711d1);
__builtin_memmove((R+24),(R+4),4);
}
B5711d3:{NFSU2_TR(0x5711d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5711d4:{NFSU2_TR(0x5711d4);
w4(R+4,u32(0x88f298ull));
}
B5711d9:{NFSU2_TR(0x5711d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5711deull));
TAIL_STATIC(0x5d4fe0u,5d4);
}
B5711de:L5711de:{c.instructions+=3;NFSU2_TR(0x5711de);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5711e0:{NFSU2_TR(0x5711e0);
w4(R+4,u32(0x8ull));
}
B5711e5:{NFSU2_TR(0x5711e5);
w4(R+28,u32(0x88a28cull));
}
B5711ea:L5711ea:{c.instructions+=1;NFSU2_TR(0x5711ea);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5711ec;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5711eau);}goto L5711ea;}
}
B5711ec:L5711ec:{c.instructions+=4;NFSU2_TR(0x5711ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5711ef:{NFSU2_TR(0x5711ef);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5711f1:{NFSU2_TR(0x5711f1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5711f3:{NFSU2_TR(0x5711f3);
if(r1(R+518)){{goto L5711fd;}}
}
B5711f5:L5711f5:{c.instructions+=1;NFSU2_TR(0x5711f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5711faull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5710e0u);}goto L5710e0;}
}
B5711fa:L5711fa:{c.instructions+=1;NFSU2_TR(0x5711fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5711fd:L5711fd:{c.instructions+=3;NFSU2_TR(0x5711fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B571200:{NFSU2_TR(0x571200);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B571202:{NFSU2_TR(0x571202);
if(r1(R+518)){{goto L57120c;}}
}
B571204:L571204:{c.instructions+=1;NFSU2_TR(0x571204);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x571209ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5710e0u);}goto L5710e0;}
}
B571209:L571209:{c.instructions+=1;NFSU2_TR(0x571209);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57120c:L57120c:{c.instructions+=3;NFSU2_TR(0x57120c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57120f:{NFSU2_TR(0x57120f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B571211:{NFSU2_TR(0x571211);
if(r1(R+518)){{goto L57121b;}}
}
B571213:L571213:{c.instructions+=1;NFSU2_TR(0x571213);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x571218ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5710e0u);}goto L5710e0;}
}
B571218:L571218:{c.instructions+=1;NFSU2_TR(0x571218);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57121b:L57121b:{c.instructions+=3;NFSU2_TR(0x57121b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57121e:{NFSU2_TR(0x57121e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B571220:{NFSU2_TR(0x571220);
if(r1(R+518)){{goto L57122a;}}
}
B571222:L571222:{c.instructions+=1;NFSU2_TR(0x571222);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x571227ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5710e0u);}goto L5710e0;}
}
B571227:L571227:{c.instructions+=1;NFSU2_TR(0x571227);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57122a:L57122a:{c.instructions+=3;NFSU2_TR(0x57122a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57122d:{NFSU2_TR(0x57122d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57122f:{NFSU2_TR(0x57122f);
if(r1(R+518)){{goto L571239;}}
}
B571231:L571231:{c.instructions+=1;NFSU2_TR(0x571231);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x571236ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5710e0u);}goto L5710e0;}
}
B571236:L571236:{c.instructions+=1;NFSU2_TR(0x571236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571239:L571239:{c.instructions+=3;NFSU2_TR(0x571239);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57123c:{NFSU2_TR(0x57123c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B57123e:{NFSU2_TR(0x57123e);
if(r1(R+518)){{goto L571248;}}
}
B571240:L571240:{c.instructions+=1;NFSU2_TR(0x571240);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x571245ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5710e0u);}goto L5710e0;}
}
B571245:L571245:{c.instructions+=1;NFSU2_TR(0x571245);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571248:L571248:{c.instructions+=3;NFSU2_TR(0x571248);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571249:{NFSU2_TR(0x571249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57124a:{NFSU2_TR(0x57124a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571250:L571250:{c.instructions+=2;NFSU2_TR(0x571250);
w4(R+4,u32(0x89cf48ull));
}
B571255:{NFSU2_TR(0x571255);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57125aull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B57125a:L57125a:{c.instructions+=2;NFSU2_TR(0x57125a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57125c:{NFSU2_TR(0x57125c);
if(r1(R+518)){{goto L571261;}}
}
B57125e:L57125e:{c.instructions+=2;NFSU2_TR(0x57125e);
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
B571260:{NFSU2_TR(0x571260);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571261:L571261:{c.instructions+=3;NFSU2_TR(0x571261);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B571266:{NFSU2_TR(0x571266);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B571268:{NFSU2_TR(0x571268);
if(r1(R+518)){{goto L571275;}}
}
B57126a:L57126a:{c.instructions+=2;NFSU2_TR(0x57126a);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x6ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B57126d:{NFSU2_TR(0x57126d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L571275;}}
}
B57126f:L57126f:{c.instructions+=2;NFSU2_TR(0x57126f);
w4(R+0,u32(0x1ull));
}
B571274:{NFSU2_TR(0x571274);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571275:L571275:{c.instructions+=2;NFSU2_TR(0x571275);
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
B571277:{NFSU2_TR(0x571277);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571280:L571280:{c.instructions+=3;NFSU2_TR(0x571280);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B571285:{NFSU2_TR(0x571285);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B571287:{NFSU2_TR(0x571287);
if(r1(R+518)){{goto L571294;}}
}
B571289:L571289:{c.instructions+=2;NFSU2_TR(0x571289);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x7ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B57128c:{NFSU2_TR(0x57128c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L571294;}}
}
B57128e:L57128e:{c.instructions+=2;NFSU2_TR(0x57128e);
w4(R+0,u32(0x1ull));
}
B571293:{NFSU2_TR(0x571293);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571294:L571294:{c.instructions+=2;NFSU2_TR(0x571294);
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
B571296:{NFSU2_TR(0x571296);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5712a0:L5712a0:{c.instructions+=3;NFSU2_TR(0x5712a0);
__builtin_memmove((R+0),gp(0x864f24),4);
}
B5712a5:{NFSU2_TR(0x5712a5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5712a8:{NFSU2_TR(0x5712a8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5712ca;}}
}
B5712aa:L5712aa:{c.instructions+=1;NFSU2_TR(0x5712aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x571320ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5712b1:L5712b1:{c.instructions+=2;NFSU2_TR(0x5712b1);
w4(R+0,u32(0x7a03ccull));
}
B5712b6:{NFSU2_TR(0x5712b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5712b7:L5712b7:{c.instructions+=1;NFSU2_TR(0x5712b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5712bcull));
TAIL_STATIC(0x4ff970u,4ff);
}
B5712bc:L5712bc:{c.instructions+=2;NFSU2_TR(0x5712bc);
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
B5712be:{NFSU2_TR(0x5712be);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5712b1u);}goto L5712b1;}}
}
B5712c0:L5712c0:{c.instructions+=2;NFSU2_TR(0x5712c0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5712c3:{NFSU2_TR(0x5712c3);
if(r1(R+518)){{goto L5712cd;}}
}
B5712c5:L5712c5:{c.instructions+=1;NFSU2_TR(0x5712c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5712caull));
TAIL_STATIC(0x43bd50u,43b);
}
B5712ca:L5712ca:{c.instructions+=2;NFSU2_TR(0x5712ca);
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
B5712cc:{NFSU2_TR(0x5712cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5712cd:L5712cd:{c.instructions+=2;NFSU2_TR(0x5712cd);
w4(R+0,u32(0x7a02b0ull));
}
B5712d2:{NFSU2_TR(0x5712d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5712d3:L5712d3:{c.instructions+=2;NFSU2_TR(0x5712d3);
w4(R+0,u32(0x7a03c8ull));
}
B5712d8:{NFSU2_TR(0x5712d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5712d9:L5712d9:{c.instructions+=2;NFSU2_TR(0x5712d9);
w4(R+0,u32(0x7a03c4ull));
}
B5712de:{NFSU2_TR(0x5712de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5712df:L5712df:{c.instructions+=2;NFSU2_TR(0x5712df);
w4(R+0,u32(0x7a0214ull));
}
B5712e4:{NFSU2_TR(0x5712e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5712e5:L5712e5:{c.instructions+=1;NFSU2_TR(0x5712e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5712eaull));
TAIL_STATIC(0x4ff970u,4ff);
}
B5712ea:L5712ea:{c.instructions+=2;NFSU2_TR(0x5712ea);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5712ed:{NFSU2_TR(0x5712ed);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5712cau);}goto L5712ca;}}
}
B5712ef:L5712ef:{c.instructions+=1;NFSU2_TR(0x5712ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x571354ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5712f6:L5712f6:{c.instructions+=2;NFSU2_TR(0x5712f6);
w4(R+0,u32(0x79c6f8ull));
}
B5712fb:{NFSU2_TR(0x5712fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5712fc:L5712fc:{c.instructions+=2;NFSU2_TR(0x5712fc);
w4(R+0,u32(0x7a0258ull));
}
B571301:{NFSU2_TR(0x571301);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571302:L571302:{c.instructions+=2;NFSU2_TR(0x571302);
w4(R+0,u32(0x7a024cull));
}
B571307:{NFSU2_TR(0x571307);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571308:L571308:{c.instructions+=2;NFSU2_TR(0x571308);
w4(R+0,u32(0x7a0240ull));
}
B57130d:{NFSU2_TR(0x57130d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57130e:L57130e:{c.instructions+=2;NFSU2_TR(0x57130e);
w4(R+0,u32(0x7a03c0ull));
}
B571313:{NFSU2_TR(0x571313);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571314:L571314:{c.instructions+=2;NFSU2_TR(0x571314);
w4(R+0,u32(0x7a03bcull));
}
B571319:{NFSU2_TR(0x571319);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57131a:L57131a:{c.instructions+=2;NFSU2_TR(0x57131a);
w4(R+0,u32(0x7a03b8ull));
}
B57131f:{NFSU2_TR(0x57131f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571380:L571380:{c.instructions+=3;NFSU2_TR(0x571380);
__builtin_memmove((R+0),gp(0x864f24),4);
}
B571385:{NFSU2_TR(0x571385);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B571388:{NFSU2_TR(0x571388);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5713f6;}}
}
B57138a:L57138a:{c.instructions+=1;NFSU2_TR(0x57138a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5713fcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B571391:L571391:{c.instructions+=2;NFSU2_TR(0x571391);
w4(R+0,u32(0x7a03d8ull));
}
B571396:{NFSU2_TR(0x571396);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571397:L571397:{c.instructions+=2;NFSU2_TR(0x571397);
w4(R+0,u32(0x7a03d4ull));
}
B57139c:{NFSU2_TR(0x57139c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57139d:L57139d:{c.instructions+=2;NFSU2_TR(0x57139d);
w4(R+0,u32(0x7a0298ull));
}
B5713a2:{NFSU2_TR(0x5713a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5713a3:L5713a3:{c.instructions+=2;NFSU2_TR(0x5713a3);
w4(R+0,u32(0x7a0280ull));
}
B5713a8:{NFSU2_TR(0x5713a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5713a9:L5713a9:{c.instructions+=2;NFSU2_TR(0x5713a9);
w4(R+0,u32(0x7a0224ull));
}
B5713ae:{NFSU2_TR(0x5713ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5713af:L5713af:{c.instructions+=2;NFSU2_TR(0x5713af);
w4(R+0,u32(0x7a0214ull));
}
B5713b4:{NFSU2_TR(0x5713b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5713b5:L5713b5:{c.instructions+=1;NFSU2_TR(0x5713b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5713baull));
TAIL_STATIC(0x4ff970u,4ff);
}
B5713ba:L5713ba:{c.instructions+=2;NFSU2_TR(0x5713ba);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5713bd:{NFSU2_TR(0x5713bd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5713f6;}}
}
B5713bf:L5713bf:{c.instructions+=1;NFSU2_TR(0x5713bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x571430ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5713c6:L5713c6:{c.instructions+=2;NFSU2_TR(0x5713c6);
w4(R+0,u32(0x7a026cull));
}
B5713cb:{NFSU2_TR(0x5713cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5713cc:L5713cc:{c.instructions+=2;NFSU2_TR(0x5713cc);
w4(R+0,u32(0x79c6f8ull));
}
B5713d1:{NFSU2_TR(0x5713d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5713d2:L5713d2:{c.instructions+=2;NFSU2_TR(0x5713d2);
w4(R+0,u32(0x7a0258ull));
}
B5713d7:{NFSU2_TR(0x5713d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5713d8:L5713d8:{c.instructions+=2;NFSU2_TR(0x5713d8);
w4(R+0,u32(0x7a024cull));
}
B5713dd:{NFSU2_TR(0x5713dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5713de:L5713de:{c.instructions+=2;NFSU2_TR(0x5713de);
w4(R+0,u32(0x7a0240ull));
}
B5713e3:{NFSU2_TR(0x5713e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5713e4:L5713e4:{c.instructions+=2;NFSU2_TR(0x5713e4);
w4(R+0,u32(0x7a03c0ull));
}
B5713e9:{NFSU2_TR(0x5713e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5713ea:L5713ea:{c.instructions+=2;NFSU2_TR(0x5713ea);
w4(R+0,u32(0x7a03d0ull));
}
B5713ef:{NFSU2_TR(0x5713ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5713f0:L5713f0:{c.instructions+=2;NFSU2_TR(0x5713f0);
w4(R+0,u32(0x7a03b8ull));
}
B5713f5:{NFSU2_TR(0x5713f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5713f6:L5713f6:{c.instructions+=2;NFSU2_TR(0x5713f6);
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
B5713f8:{NFSU2_TR(0x5713f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571450:L571450:{c.instructions+=6;NFSU2_TR(0x571450);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B571453:{NFSU2_TR(0x571453);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571454:{NFSU2_TR(0x571454);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B571456:{NFSU2_TR(0x571456);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57145b:{NFSU2_TR(0x57145b);
w4(R+4,u32(0x18ull));
}
B571460:{NFSU2_TR(0x571460);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B571464:L571464:{c.instructions+=1;NFSU2_TR(0x571464);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L571466;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571464u);}goto L571464;}
}
B571466:L571466:{c.instructions+=8;NFSU2_TR(0x571466);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B571468:{NFSU2_TR(0x571468);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57146a:{NFSU2_TR(0x57146a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57146c:{NFSU2_TR(0x57146c);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B57146d:{NFSU2_TR(0x57146d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B571471:{NFSU2_TR(0x571471);
u8 U[4];
w4(U+0,u32(0x7a03dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571476:{NFSU2_TR(0x571476);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571477:{NFSU2_TR(0x571477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57147cull));
TAIL_STATIC(0x4400d0u,440);
}
B57147c:L57147c:{c.instructions+=5;NFSU2_TR(0x57147c);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B571480:{NFSU2_TR(0x571480);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B571484:{NFSU2_TR(0x571484);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571485:{NFSU2_TR(0x571485);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571486:{NFSU2_TR(0x571486);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57148bull));
TAIL_STATIC(0x43dbd0u,43d);
}
B57148b:L57148b:{c.instructions+=4;NFSU2_TR(0x57148b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B57148e:{NFSU2_TR(0x57148e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57148f:{NFSU2_TR(0x57148f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x64ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B571492:{NFSU2_TR(0x571492);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5714a0:L5714a0:{c.instructions+=9;NFSU2_TR(0x5714a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5714a1:{NFSU2_TR(0x5714a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5714a2:{NFSU2_TR(0x5714a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5714a3:{NFSU2_TR(0x5714a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5714a7:{NFSU2_TR(0x5714a7);
__builtin_memmove((R+24),(R+4),4);
}
B5714a9:{NFSU2_TR(0x5714a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5714ac:{NFSU2_TR(0x5714ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5714ad:{NFSU2_TR(0x5714ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5714ae:{NFSU2_TR(0x5714ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5714b3ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5714b3:L5714b3:{c.instructions+=16;NFSU2_TR(0x5714b3);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5714b9:{NFSU2_TR(0x5714b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5714bc:{NFSU2_TR(0x5714bc);
__builtin_memmove((R+8),gp(0x7fb724),4);
}
B5714c2:{NFSU2_TR(0x5714c2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5714c4:{NFSU2_TR(0x5714c4);
u8 U[4];
w4(U+0,u32(0x7a03e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5714c9:{NFSU2_TR(0x5714c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5714ca:{NFSU2_TR(0x5714ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5714cd:{NFSU2_TR(0x5714cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5714d0:{NFSU2_TR(0x5714d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5714d3:{NFSU2_TR(0x5714d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5714d6:{NFSU2_TR(0x5714d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5714d9:{NFSU2_TR(0x5714d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5714dc:{NFSU2_TR(0x5714dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x43ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5714df:{NFSU2_TR(0x5714df);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B5714e3:{NFSU2_TR(0x5714e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5714e6:{NFSU2_TR(0x5714e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5714ebull));
TAIL_STATIC(0x43dc30u,43d);
}
B5714eb:L5714eb:{c.instructions+=3;NFSU2_TR(0x5714eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5714ee:{NFSU2_TR(0x5714ee);
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
B5714f0:{NFSU2_TR(0x5714f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5714f6;}}
}
B5714f2:L5714f2:{c.instructions+=1;NFSU2_TR(0x5714f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5714f6:L5714f6:{c.instructions+=11;NFSU2_TR(0x5714f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5714f7:{NFSU2_TR(0x5714f7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5714fb:{NFSU2_TR(0x5714fb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4aull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5714ff:{NFSU2_TR(0x5714ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571502:{NFSU2_TR(0x571502);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571508:{NFSU2_TR(0x571508);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57150e:{NFSU2_TR(0x57150e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571514:{NFSU2_TR(0x571514);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B57151b:{NFSU2_TR(0x57151b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57151c:{NFSU2_TR(0x57151c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57151d:{NFSU2_TR(0x57151d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571520:L571520:{c.instructions+=5;NFSU2_TR(0x571520);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B571524:{NFSU2_TR(0x571524);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B571527:{NFSU2_TR(0x571527);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B571529:{NFSU2_TR(0x571529);
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
B57152b:{NFSU2_TR(0x57152b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L571543;}}
}
B57152d:L57152d:{c.instructions+=3;NFSU2_TR(0x57152d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57152e:{NFSU2_TR(0x57152e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B571532:{NFSU2_TR(0x571532);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571533:L571533:{c.instructions+=6;NFSU2_TR(0x571533);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B571537:{NFSU2_TR(0x571537);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B57153a:{NFSU2_TR(0x57153a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B57153c:{NFSU2_TR(0x57153c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B57153d:{NFSU2_TR(0x57153d);
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
B57153f:{NFSU2_TR(0x57153f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571533u);}goto L571533;}}
}
B571541:L571541:{c.instructions+=2;NFSU2_TR(0x571541);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571542:{NFSU2_TR(0x571542);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571543:L571543:{c.instructions+=1;NFSU2_TR(0x571543);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571550:L571550:{c.instructions+=9;NFSU2_TR(0x571550);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571551:{NFSU2_TR(0x571551);
__builtin_memmove((R+24),(R+4),4);
}
B571553:{NFSU2_TR(0x571553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B571559:{NFSU2_TR(0x571559);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57155f:{NFSU2_TR(0x57155f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571560:{NFSU2_TR(0x571560);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B571564:{NFSU2_TR(0x571564);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B571567:{NFSU2_TR(0x571567);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B571569:{NFSU2_TR(0x571569);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57159c;}}
}
B57156b:L57156b:{c.instructions+=3;NFSU2_TR(0x57156b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57156d:{NFSU2_TR(0x57156d);
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
B57156f:{NFSU2_TR(0x57156f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L571591;}}
}
B571571:L571571:{c.instructions+=3;NFSU2_TR(0x571571);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571572:{NFSU2_TR(0x571572);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B571576:{NFSU2_TR(0x571576);
{goto L571580;}
}
B571580:L571580:{c.instructions+=6;NFSU2_TR(0x571580);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B571583:{NFSU2_TR(0x571583);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57158a:{NFSU2_TR(0x57158a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B57158b:{NFSU2_TR(0x57158b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57158c:{NFSU2_TR(0x57158c);
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
B57158e:{NFSU2_TR(0x57158e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571580u);}goto L571580;}}
}
B571590:L571590:{c.instructions+=1;NFSU2_TR(0x571590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B571591:L571591:{c.instructions+=4;NFSU2_TR(0x571591);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571592:{NFSU2_TR(0x571592);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571598:{NFSU2_TR(0x571598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571599:{NFSU2_TR(0x571599);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57159c:L57159c:{c.instructions+=4;NFSU2_TR(0x57159c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57159d:{NFSU2_TR(0x57159d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5715a3:{NFSU2_TR(0x5715a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5715a4:{NFSU2_TR(0x5715a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5715b0:L5715b0:{c.instructions+=9;NFSU2_TR(0x5715b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5715b4:{NFSU2_TR(0x5715b4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5715b5:{NFSU2_TR(0x5715b5);
__builtin_memmove((R+20),(R+4),4);
}
B5715b7:{NFSU2_TR(0x5715b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5715bd:{NFSU2_TR(0x5715bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5715be:{NFSU2_TR(0x5715be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5715c4:{NFSU2_TR(0x5715c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5715c7:{NFSU2_TR(0x5715c7);
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
B5715c9:{NFSU2_TR(0x5715c9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L57162a;}}
}
B5715cb:L5715cb:{c.instructions+=7;NFSU2_TR(0x5715cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5715cc:{NFSU2_TR(0x5715cc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5715ce:{NFSU2_TR(0x5715ce);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5715d0:{NFSU2_TR(0x5715d0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5715d2:{NFSU2_TR(0x5715d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5715d3:{NFSU2_TR(0x5715d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5715d7:{NFSU2_TR(0x5715d7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5715f0;}}
}
B5715d9:L5715d9:{c.instructions+=1;NFSU2_TR(0x5715d9);
__builtin_memmove((R+16),(R+16),4);
}
B5715e0:L5715e0:{c.instructions+=6;NFSU2_TR(0x5715e0);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B5715e7:{NFSU2_TR(0x5715e7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5715e8:{NFSU2_TR(0x5715e8);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B5715eb:{NFSU2_TR(0x5715eb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5715ec:{NFSU2_TR(0x5715ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5715ee:{NFSU2_TR(0x5715ee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5715e0u);}goto L5715e0;}}
}
B5715f0:L5715f0:{c.instructions+=3;NFSU2_TR(0x5715f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5715f4:{NFSU2_TR(0x5715f4);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5715f6:{NFSU2_TR(0x5715f6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L571628;}}
}
B5715f8:L5715f8:{c.instructions+=3;NFSU2_TR(0x5715f8);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5715fa:{NFSU2_TR(0x5715fa);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5715ff:{NFSU2_TR(0x5715ff);
if(r1(R+518)){{goto L57160a;}}
}
B571601:L571601:{c.instructions+=3;NFSU2_TR(0x571601);
w4(R+0,u32(r1(R+12)));
}
B571604:{NFSU2_TR(0x571604);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B571607:{NFSU2_TR(0x571607);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B57160a:L57160a:{c.instructions+=9;NFSU2_TR(0x57160a);
__builtin_memmove((R+12),(R+0),1);
}
B57160c:{NFSU2_TR(0x57160c);
__builtin_memmove((R+13),(R+12),1);
}
B57160e:{NFSU2_TR(0x57160e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B571610:{NFSU2_TR(0x571610);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B571612:{NFSU2_TR(0x571612);
__builtin_memmove((R+8),(R+4),4);
}
B571614:{NFSU2_TR(0x571614);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B571617:{NFSU2_TR(0x571617);
__builtin_memmove((R+0),(R+12),4);
}
B571619:{NFSU2_TR(0x571619);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B57161c:{NFSU2_TR(0x57161c);
__builtin_memmove((R+0),(R+12),2);
}
B57161f:L57161f:{c.instructions+=1;NFSU2_TR(0x57161f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L571621;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57161fu);}goto L57161f;}
}
B571621:L571621:{c.instructions+=2;NFSU2_TR(0x571621);
__builtin_memmove((R+4),(R+8),4);
}
B571623:{NFSU2_TR(0x571623);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B571626:L571626:{c.instructions+=1;NFSU2_TR(0x571626);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L571628;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571626u);}goto L571626;}
}
B571628:L571628:{c.instructions+=2;NFSU2_TR(0x571628);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571629:{NFSU2_TR(0x571629);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57162a:L57162a:{c.instructions+=4;NFSU2_TR(0x57162a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571630:{NFSU2_TR(0x571630);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571631:{NFSU2_TR(0x571631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B571632:{NFSU2_TR(0x571632);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571640:L571640:{c.instructions+=6;NFSU2_TR(0x571640);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571644:{NFSU2_TR(0x571644);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B571647:{NFSU2_TR(0x571647);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571648:{NFSU2_TR(0x571648);
__builtin_memmove((R+24),(R+4),4);
}
B57164a:{NFSU2_TR(0x57164a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57164e:{NFSU2_TR(0x57164e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L571652;}}
}
B571650:L571650:{c.instructions+=1;NFSU2_TR(0x571650);
__builtin_memmove((R+0),(R+4),4);
}
B571652:L571652:{c.instructions+=3;NFSU2_TR(0x571652);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B571655:{NFSU2_TR(0x571655);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B571657:{NFSU2_TR(0x571657);
if(r1(R+518)){{goto L571670;}}
}
B571659:L571659:{c.instructions+=8;NFSU2_TR(0x571659);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57165d:{NFSU2_TR(0x57165d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57165e:{NFSU2_TR(0x57165e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57165f:{NFSU2_TR(0x57165f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571663:{NFSU2_TR(0x571663);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571664:{NFSU2_TR(0x571664);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571665:{NFSU2_TR(0x571665);
__builtin_memmove((R+4),(R+24),4);
}
B571667:{NFSU2_TR(0x571667);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57166cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571550u);}goto L571550;}
}
B57166c:L57166c:{c.instructions+=2;NFSU2_TR(0x57166c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57166d:{NFSU2_TR(0x57166d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571670:L571670:{c.instructions+=3;NFSU2_TR(0x571670);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B571673:{NFSU2_TR(0x571673);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B571675:{NFSU2_TR(0x571675);
if(r1(R+518)){{goto L57168e;}}
}
B571677:L571677:{c.instructions+=8;NFSU2_TR(0x571677);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57167b:{NFSU2_TR(0x57167b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57167c:{NFSU2_TR(0x57167c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57167d:{NFSU2_TR(0x57167d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571681:{NFSU2_TR(0x571681);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571682:{NFSU2_TR(0x571682);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571683:{NFSU2_TR(0x571683);
__builtin_memmove((R+4),(R+24),4);
}
B571685:{NFSU2_TR(0x571685);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57168aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5715b0u);}goto L5715b0;}
}
B57168a:L57168a:{c.instructions+=2;NFSU2_TR(0x57168a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57168b:{NFSU2_TR(0x57168b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57168e:L57168e:{c.instructions+=3;NFSU2_TR(0x57168e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B571691:{NFSU2_TR(0x571691);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B571693:{NFSU2_TR(0x571693);
if(r1(R+518)){{goto L5716b9;}}
}
B571695:L571695:{c.instructions+=6;NFSU2_TR(0x571695);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571696:{NFSU2_TR(0x571696);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571697:{NFSU2_TR(0x571697);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57169b:{NFSU2_TR(0x57169b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57169c:{NFSU2_TR(0x57169c);
__builtin_memmove((R+4),(R+24),4);
}
B57169e:{NFSU2_TR(0x57169e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5716a3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571520u);}goto L571520;}
}
B5716a3:L5716a3:{c.instructions+=8;NFSU2_TR(0x5716a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5716a5:{NFSU2_TR(0x5716a5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5716a7:{NFSU2_TR(0x5716a7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5716a9:{NFSU2_TR(0x5716a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5716ad:{NFSU2_TR(0x5716ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5716ae:{NFSU2_TR(0x5716ae);
__builtin_memmove((R+4),(R+24),4);
}
B5716b0:{NFSU2_TR(0x5716b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5716b4:{NFSU2_TR(0x5716b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5716b9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571550u);}goto L571550;}
}
B5716b9:L5716b9:{c.instructions+=2;NFSU2_TR(0x5716b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5716ba:{NFSU2_TR(0x5716ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5716c0:L5716c0:{c.instructions+=3;NFSU2_TR(0x5716c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5716c3:{NFSU2_TR(0x5716c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5716c5:{NFSU2_TR(0x5716c5);
if(r1(R+518)){{goto L5716f2;}}
}
B5716c7:L5716c7:{c.instructions+=6;NFSU2_TR(0x5716c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5716cd:{NFSU2_TR(0x5716cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5716d3:{NFSU2_TR(0x5716d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5716d4:{NFSU2_TR(0x5716d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5716d7:{NFSU2_TR(0x5716d7);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5716d9:{NFSU2_TR(0x5716d9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5716e8;}}
}
B5716db:L5716db:{c.instructions+=3;NFSU2_TR(0x5716db);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5716df:{NFSU2_TR(0x5716df);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+8),(U+0),1);
}
B5716e1:{NFSU2_TR(0x5716e1);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5716e8:L5716e8:{c.instructions+=3;NFSU2_TR(0x5716e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5716ee:{NFSU2_TR(0x5716ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5716ef:{NFSU2_TR(0x5716ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5716f2:L5716f2:{c.instructions+=6;NFSU2_TR(0x5716f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5716f6:{NFSU2_TR(0x5716f6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5716f8:{NFSU2_TR(0x5716f8);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5716fa:{NFSU2_TR(0x5716fa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5716fc:{NFSU2_TR(0x5716fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5716fd:{NFSU2_TR(0x5716fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x571702ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571640u);}goto L571640;}
}
B571702:L571702:{c.instructions+=1;NFSU2_TR(0x571702);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571710:L571710:{c.instructions+=3;NFSU2_TR(0x571710);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B571713:{NFSU2_TR(0x571713);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B571715:{NFSU2_TR(0x571715);
if(r1(R+518)){{goto L571750;}}
}
B571717:L571717:{c.instructions+=6;NFSU2_TR(0x571717);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57171d:{NFSU2_TR(0x57171d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B571723:{NFSU2_TR(0x571723);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571724:{NFSU2_TR(0x571724);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571727:{NFSU2_TR(0x571727);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B571729:{NFSU2_TR(0x571729);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L571746;}}
}
B57172b:L57172b:{c.instructions+=9;NFSU2_TR(0x57172b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57172c:{NFSU2_TR(0x57172c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57172d:{NFSU2_TR(0x57172d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B571731:{NFSU2_TR(0x571731);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B571733:{NFSU2_TR(0x571733);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B571736:{NFSU2_TR(0x571736);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571737:{NFSU2_TR(0x571737);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57173e:{NFSU2_TR(0x57173e);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e9ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B571745:{NFSU2_TR(0x571745);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B571746:L571746:{c.instructions+=3;NFSU2_TR(0x571746);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57174c:{NFSU2_TR(0x57174c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57174d:{NFSU2_TR(0x57174d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571750:L571750:{c.instructions+=6;NFSU2_TR(0x571750);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571754:{NFSU2_TR(0x571754);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571756:{NFSU2_TR(0x571756);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571758:{NFSU2_TR(0x571758);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57175a:{NFSU2_TR(0x57175a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57175b:{NFSU2_TR(0x57175b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x571760ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571640u);}goto L571640;}
}
B571760:L571760:{c.instructions+=1;NFSU2_TR(0x571760);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571770:L571770:{c.instructions+=4;NFSU2_TR(0x571770);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571771:{NFSU2_TR(0x571771);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B571774:{NFSU2_TR(0x571774);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B571776:{NFSU2_TR(0x571776);
if(r1(R+518)){{goto L5717d6;}}
}
B571778:L571778:{c.instructions+=6;NFSU2_TR(0x571778);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57177e:{NFSU2_TR(0x57177e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B571784:{NFSU2_TR(0x571784);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571785:{NFSU2_TR(0x571785);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571788:{NFSU2_TR(0x571788);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B57178a:{NFSU2_TR(0x57178a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5717cb;}}
}
B57178c:L57178c:{c.instructions+=17;NFSU2_TR(0x57178c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57178d:{NFSU2_TR(0x57178d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57178e:{NFSU2_TR(0x57178e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B571792:{NFSU2_TR(0x571792);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B571795:{NFSU2_TR(0x571795);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B571798:{NFSU2_TR(0x571798);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57179c:{NFSU2_TR(0x57179c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B57179f:{NFSU2_TR(0x57179f);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5717a3:{NFSU2_TR(0x5717a3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B5717a5:{NFSU2_TR(0x5717a5);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e9ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5717ac:{NFSU2_TR(0x5717ac);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5717b0:{NFSU2_TR(0x5717b0);
u8 U[13];
w4(U+0,u32(u32(u32(0x1eaull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5717b7:{NFSU2_TR(0x5717b7);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5717bb:{NFSU2_TR(0x5717bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5717bc:{NFSU2_TR(0x5717bc);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5717c3:{NFSU2_TR(0x5717c3);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ebull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5717ca:{NFSU2_TR(0x5717ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5717cb:L5717cb:{c.instructions+=4;NFSU2_TR(0x5717cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5717d1:{NFSU2_TR(0x5717d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5717d2:{NFSU2_TR(0x5717d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5717d3:{NFSU2_TR(0x5717d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5717d6:L5717d6:{c.instructions+=6;NFSU2_TR(0x5717d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5717da:{NFSU2_TR(0x5717da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5717dc:{NFSU2_TR(0x5717dc);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5717de:{NFSU2_TR(0x5717de);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5717e0:{NFSU2_TR(0x5717e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5717e1:{NFSU2_TR(0x5717e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5717e6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571640u);}goto L571640;}
}
B5717e6:L5717e6:{c.instructions+=2;NFSU2_TR(0x5717e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5717e7:{NFSU2_TR(0x5717e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5717f0:L5717f0:{c.instructions+=9;NFSU2_TR(0x5717f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5717f1:{NFSU2_TR(0x5717f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5717f2:{NFSU2_TR(0x5717f2);
__builtin_memmove((R+12),(R+4),4);
}
B5717f4:{NFSU2_TR(0x5717f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5717f7:{NFSU2_TR(0x5717f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5717f8:{NFSU2_TR(0x5717f8);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5717fa:{NFSU2_TR(0x5717fa);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5717fc:{NFSU2_TR(0x5717fc);
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
B5717fe:{NFSU2_TR(0x5717fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L571823;}}
}
B571800:L571800:{c.instructions+=2;NFSU2_TR(0x571800);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571801:{NFSU2_TR(0x571801);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571804:L571804:{c.instructions+=2;NFSU2_TR(0x571804);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B571806:{NFSU2_TR(0x571806);
if(r1(R+518)){{goto L571809;}}
}
B571808:L571808:{c.instructions+=1;NFSU2_TR(0x571808);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B571809:L571809:{c.instructions+=3;NFSU2_TR(0x571809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57180b:{NFSU2_TR(0x57180b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57180c:{NFSU2_TR(0x57180c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x571811ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B571811:L571811:{c.instructions+=7;NFSU2_TR(0x571811);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B571815:{NFSU2_TR(0x571815);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B571818:{NFSU2_TR(0x571818);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B57181a:{NFSU2_TR(0x57181a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57181b:{NFSU2_TR(0x57181b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x18ull))));
}
B57181e:{NFSU2_TR(0x57181e);
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
B571820:{NFSU2_TR(0x571820);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571804u);}goto L571804;}}
}
B571822:L571822:{c.instructions+=1;NFSU2_TR(0x571822);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571823:L571823:{c.instructions+=5;NFSU2_TR(0x571823);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571824:{NFSU2_TR(0x571824);
__builtin_memmove((R+0),(R+20),4);
}
B571826:{NFSU2_TR(0x571826);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B571827:{NFSU2_TR(0x571827);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B571828:{NFSU2_TR(0x571828);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571830:L571830:{c.instructions+=3;NFSU2_TR(0x571830);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571836:{NFSU2_TR(0x571836);
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
B571838:{NFSU2_TR(0x571838);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L571844;}}
}
B57183a:L57183a:{c.instructions+=1;NFSU2_TR(0x57183a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B571844:L571844:{c.instructions+=1;NFSU2_TR(0x571844);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571850:L571850:{c.instructions+=7;NFSU2_TR(0x571850);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B571856:{NFSU2_TR(0x571856);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571857:{NFSU2_TR(0x571857);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57185b:{NFSU2_TR(0x57185b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57185d:{NFSU2_TR(0x57185d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57185f:{NFSU2_TR(0x57185f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571860:{NFSU2_TR(0x571860);
if(r1(R+518)){{goto L57186d;}}
}
B571862:L571862:{c.instructions+=2;NFSU2_TR(0x571862);
u8 U[24];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+523,sborrow<u32>(r4(U+16),r4(R+24)));
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+20))<s32(u32(0x0ull))));
}
B571869:{NFSU2_TR(0x571869);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57186d;}}
}
B57186b:L57186b:{c.instructions+=1;NFSU2_TR(0x57186b);
__builtin_memmove((R+0),(R+8),4);
}
B57186d:L57186d:{c.instructions+=2;NFSU2_TR(0x57186d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B571873:{NFSU2_TR(0x571873);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L571892;}}
}
B571875:L571875:{c.instructions+=2;NFSU2_TR(0x571875);
u8 U[12];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B57187c:{NFSU2_TR(0x57187c);
__builtin_memmove((R+16),(R+16),4);
}
B571880:L571880:{c.instructions+=2;NFSU2_TR(0x571880);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+24)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B571882:{NFSU2_TR(0x571882);
if(r1(R+518)){{goto L571899;}}
}
B571884:L571884:{c.instructions+=5;NFSU2_TR(0x571884);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57188a:{NFSU2_TR(0x57188a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57188b:{NFSU2_TR(0x57188b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B57188e:{NFSU2_TR(0x57188e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B571890:{NFSU2_TR(0x571890);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571880u);}goto L571880;}}
}
B571892:L571892:{c.instructions+=4;NFSU2_TR(0x571892);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571893:{NFSU2_TR(0x571893);
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
B571895:{NFSU2_TR(0x571895);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571896:{NFSU2_TR(0x571896);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571899:L571899:{c.instructions+=5;NFSU2_TR(0x571899);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57189a:{NFSU2_TR(0x57189a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5718a0:{NFSU2_TR(0x5718a0);
w1(R+0,u8(0x1ull));
}
B5718a2:{NFSU2_TR(0x5718a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5718a3:{NFSU2_TR(0x5718a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5718b0:L5718b0:{c.instructions+=5;NFSU2_TR(0x5718b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5718b1:{NFSU2_TR(0x5718b1);
__builtin_memmove((R+12),(R+4),4);
}
B5718b3:{NFSU2_TR(0x5718b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5718b9:{NFSU2_TR(0x5718b9);
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
B5718bb:{NFSU2_TR(0x5718bb);
if(r1(R+518)){{goto L571940;}}
}
B5718c1:L5718c1:{c.instructions+=6;NFSU2_TR(0x5718c1);
__builtin_memmove((R+4),gp(0x7fb724),4);
}
B5718c7:{NFSU2_TR(0x5718c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5718c8:{NFSU2_TR(0x5718c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5718ce:{NFSU2_TR(0x5718ce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5718d0:{NFSU2_TR(0x5718d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5718d1:{NFSU2_TR(0x5718d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5718f2;}}
}
B5718d3:L5718d3:{c.instructions+=4;NFSU2_TR(0x5718d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40full))));
__builtin_memmove((R+0),(U+0),4);
}
B5718d9:{NFSU2_TR(0x5718d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5718dc:{NFSU2_TR(0x5718dc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B5718de:{NFSU2_TR(0x5718de);
__builtin_memmove((R+28),(R+28),4);
}
B5718e0:L5718e0:{c.instructions+=2;NFSU2_TR(0x5718e0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),r4(R+4)));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B5718e2:{NFSU2_TR(0x5718e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5718ee;}}
}
B5718e4:L5718e4:{c.instructions+=4;NFSU2_TR(0x5718e4);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B5718e5:{NFSU2_TR(0x5718e5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x10ull))));
}
B5718e8:{NFSU2_TR(0x5718e8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5718ea:{NFSU2_TR(0x5718ea);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5718e0u);}goto L5718e0;}}
}
B5718ec:L5718ec:{c.instructions+=1;NFSU2_TR(0x5718ec);
{goto L5718f2;}
}
B5718ee:L5718ee:{c.instructions+=2;NFSU2_TR(0x5718ee);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5718f0:{NFSU2_TR(0x5718f0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5718f4;}}
}
B5718f2:L5718f2:{c.instructions+=1;NFSU2_TR(0x5718f2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5718f4:L5718f4:{c.instructions+=2;NFSU2_TR(0x5718f4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5718f6:{NFSU2_TR(0x5718f6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57192b;}}
}
B5718f8:L5718f8:{c.instructions+=3;NFSU2_TR(0x5718f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40full))));
__builtin_memmove((R+28),(U+0),4);
}
B5718fe:{NFSU2_TR(0x5718fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B571901:{NFSU2_TR(0x571901);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B571903:L571903:{c.instructions+=3;NFSU2_TR(0x571903);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B571905:{NFSU2_TR(0x571905);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B571907:{NFSU2_TR(0x571907);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L57192b;}}
}
B571909:L571909:{c.instructions+=1;NFSU2_TR(0x571909);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57191d;}}
}
B57190b:L57190b:{c.instructions+=3;NFSU2_TR(0x57190b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B57190e:{NFSU2_TR(0x57190e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57190f:{NFSU2_TR(0x57190f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x571914ull));
TAIL_STATIC(0x4a7b30u,4a7);
}
B571914:L571914:{c.instructions+=2;NFSU2_TR(0x571914);
__builtin_memmove((R+4),gp(0x7fb724),4);
}
B57191a:{NFSU2_TR(0x57191a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57191d:L57191d:{c.instructions+=5;NFSU2_TR(0x57191d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571923:{NFSU2_TR(0x571923);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B571924:{NFSU2_TR(0x571924);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B571927:{NFSU2_TR(0x571927);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B571929:{NFSU2_TR(0x571929);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571903u);}goto L571903;}}
}
B57192b:L57192b:{c.instructions+=4;NFSU2_TR(0x57192b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571931:{NFSU2_TR(0x571931);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B571932:{NFSU2_TR(0x571932);
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
B571934:{NFSU2_TR(0x571934);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L571938;}}
}
B571936:L571936:{c.instructions+=1;NFSU2_TR(0x571936);
__builtin_memmove((R+24),(R+0),4);
}
B571938:L571938:{c.instructions+=3;NFSU2_TR(0x571938);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571939:{NFSU2_TR(0x571939);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40e8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57193f:{NFSU2_TR(0x57193f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571940:L571940:{c.instructions+=2;NFSU2_TR(0x571940);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B571941:{NFSU2_TR(0x571941);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571950:L571950:{c.instructions+=10;NFSU2_TR(0x571950);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571954:{NFSU2_TR(0x571954);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B571957:{NFSU2_TR(0x571957);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57195b:{NFSU2_TR(0x57195b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57195c:{NFSU2_TR(0x57195c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57195f:{NFSU2_TR(0x57195f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B571961:{NFSU2_TR(0x571961);
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
B571963:{NFSU2_TR(0x571963);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B571966:{NFSU2_TR(0x571966);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571967:{NFSU2_TR(0x571967);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571970:L571970:{c.instructions+=4;NFSU2_TR(0x571970);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571974:{NFSU2_TR(0x571974);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B571976:{NFSU2_TR(0x571976);
__builtin_memmove((R+4),(R+0),4);
}
B571978:{NFSU2_TR(0x571978);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57197f;}}
}
B57197a:L57197a:{c.instructions+=2;NFSU2_TR(0x57197a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57197d:{NFSU2_TR(0x57197d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L571981;}}
}
B57197f:L57197f:{c.instructions+=1;NFSU2_TR(0x57197f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B571981:L571981:{c.instructions+=3;NFSU2_TR(0x571981);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fab40ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B571988:{NFSU2_TR(0x571988);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B57198b:{NFSU2_TR(0x57198b);
if(r1(R+518)){{goto L5719b5;}}
}
B57198d:L57198d:{c.instructions+=2;NFSU2_TR(0x57198d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B57198f:{NFSU2_TR(0x57198f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L571996;}}
}
B571991:L571991:{c.instructions+=2;NFSU2_TR(0x571991);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B571994:{NFSU2_TR(0x571994);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L571998;}}
}
B571996:L571996:{c.instructions+=1;NFSU2_TR(0x571996);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B571998:L571998:{c.instructions+=6;NFSU2_TR(0x571998);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fab40ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B57199f:{NFSU2_TR(0x57199f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5719a3:{NFSU2_TR(0x5719a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5719a4:{NFSU2_TR(0x5719a4);
u8 U[4];
w4(U+0,u32(0x7a03f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5719a9:{NFSU2_TR(0x5719a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5719aa:{NFSU2_TR(0x5719aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5719afull));
TAIL_STATIC(0x4400d0u,440);
}
B5719af:L5719af:{c.instructions+=2;NFSU2_TR(0x5719af);
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
B5719b2:{NFSU2_TR(0x5719b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5719b5:L5719b5:{c.instructions+=3;NFSU2_TR(0x5719b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5719b9:{NFSU2_TR(0x5719b9);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+4)),r1(U+0));
}
B5719bc:{NFSU2_TR(0x5719bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5719c0:L5719c0:{c.instructions+=6;NFSU2_TR(0x5719c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5719c1:{NFSU2_TR(0x5719c1);
__builtin_memmove((R+24),(R+4),4);
}
B5719c3:{NFSU2_TR(0x5719c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5719c5:{NFSU2_TR(0x5719c5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5719c7:{NFSU2_TR(0x5719c7);
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
B5719c9:{NFSU2_TR(0x5719c9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5719f6;}}
}
B5719cb:L5719cb:{c.instructions+=5;NFSU2_TR(0x5719cb);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5719cf:{NFSU2_TR(0x5719cf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5719d0:{NFSU2_TR(0x5719d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5719d1:{NFSU2_TR(0x5719d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5719d5:{NFSU2_TR(0x5719d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5719d8:L5719d8:{c.instructions+=3;NFSU2_TR(0x5719d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(r1(U+4)));
}
B5719dc:{NFSU2_TR(0x5719dc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5719de:{NFSU2_TR(0x5719de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5719ea;}}
}
B5719e0:L5719e0:{c.instructions+=2;NFSU2_TR(0x5719e0);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+4))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5719e2:{NFSU2_TR(0x5719e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5719ea;}}
}
B5719e4:L5719e4:{c.instructions+=1;NFSU2_TR(0x5719e4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5719ea:L5719ea:{c.instructions+=5;NFSU2_TR(0x5719ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5719ec:{NFSU2_TR(0x5719ec);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5719ed:{NFSU2_TR(0x5719ed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B5719f0:{NFSU2_TR(0x5719f0);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5719f2:{NFSU2_TR(0x5719f2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5719d8u);}goto L5719d8;}}
}
B5719f4:L5719f4:{c.instructions+=2;NFSU2_TR(0x5719f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5719f5:{NFSU2_TR(0x5719f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5719f6:L5719f6:{c.instructions+=2;NFSU2_TR(0x5719f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5719f7:{NFSU2_TR(0x5719f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571a00:L571a00:{c.instructions+=5;NFSU2_TR(0x571a00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571a04:{NFSU2_TR(0x571a04);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B571a08:{NFSU2_TR(0x571a08);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x1c8ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B571a0e:{NFSU2_TR(0x571a0e);
u8 U[13];
w4(U+0,u32(u32(u32(0x865658ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B571a15:{NFSU2_TR(0x571a15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571a20:L571a20:{c.instructions+=5;NFSU2_TR(0x571a20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571a21:{NFSU2_TR(0x571a21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571a22:{NFSU2_TR(0x571a22);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B571a26:{NFSU2_TR(0x571a26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571a27:{NFSU2_TR(0x571a27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x571a2cull));
TAIL_STATIC(0x5726a0u,572);
}
B571a2c:L571a2c:{c.instructions+=5;NFSU2_TR(0x571a2c);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B571a30:{NFSU2_TR(0x571a30);
w4(R+0,u32(r1(R+12)));
}
B571a33:{NFSU2_TR(0x571a33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571a34:{NFSU2_TR(0x571a34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571a35:{NFSU2_TR(0x571a35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x571a3aull));
TAIL_STATIC(0x50c5d0u,50c);
}
B571a3a:L571a3a:{c.instructions+=5;NFSU2_TR(0x571a3a);
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
B571a3d:{NFSU2_TR(0x571a3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x864788ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B571a43:{NFSU2_TR(0x571a43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571a44:{NFSU2_TR(0x571a44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B571a45:{NFSU2_TR(0x571a45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571a50:L571a50:{c.instructions+=4;NFSU2_TR(0x571a50);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B571a54:{NFSU2_TR(0x571a54);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B571a58:{NFSU2_TR(0x571a58);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8647a0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B571a5e:{NFSU2_TR(0x571a5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571a60:L571a60:{c.instructions+=6;NFSU2_TR(0x571a60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B571a64:{NFSU2_TR(0x571a64);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x864788ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B571a6a:{NFSU2_TR(0x571a6a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B571a6c:{NFSU2_TR(0x571a6c);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0xffull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0xffull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0xffull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B571a6f:{NFSU2_TR(0x571a6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B571a72:{NFSU2_TR(0x571a72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571a80:L571a80:{c.instructions+=3;NFSU2_TR(0x571a80);
__builtin_memmove((R+0),gp(0x8650c0),1);
}
B571a85:{NFSU2_TR(0x571a85);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B571a87:{NFSU2_TR(0x571a87);
if(r1(R+518)){{goto L571a9d;}}
}
B571a89:L571a89:{c.instructions+=7;NFSU2_TR(0x571a89);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571a8d:{NFSU2_TR(0x571a8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8647a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B571a93:{NFSU2_TR(0x571a93);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B571a95:{NFSU2_TR(0x571a95);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0xffull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0xffull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B571a97:{NFSU2_TR(0x571a97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B571a9a:{NFSU2_TR(0x571a9a);
__builtin_memmove((R+0),(R+8),4);
}
B571a9c:{NFSU2_TR(0x571a9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571a9d:L571a9d:{c.instructions+=7;NFSU2_TR(0x571a9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B571aa1:{NFSU2_TR(0x571aa1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x864788ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B571aa7:{NFSU2_TR(0x571aa7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B571aa9:{NFSU2_TR(0x571aa9);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0xffull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0xffull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B571aab:{NFSU2_TR(0x571aab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B571aae:{NFSU2_TR(0x571aae);
__builtin_memmove((R+0),(R+8),4);
}
B571ab0:{NFSU2_TR(0x571ab0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571ac0:L571ac0:{c.instructions+=3;NFSU2_TR(0x571ac0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571ac4:{NFSU2_TR(0x571ac4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x864788ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B571aca:{NFSU2_TR(0x571aca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571ad0:L571ad0:{c.instructions+=5;NFSU2_TR(0x571ad0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571ad1:{NFSU2_TR(0x571ad1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571ad2:{NFSU2_TR(0x571ad2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B571ad6:{NFSU2_TR(0x571ad6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B571ad8:{NFSU2_TR(0x571ad8);
{goto L571ae0;}
}
B571ae0:L571ae0:{c.instructions+=4;NFSU2_TR(0x571ae0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7fabacull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B571ae7:{NFSU2_TR(0x571ae7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571ae8:{NFSU2_TR(0x571ae8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571ae9:{NFSU2_TR(0x571ae9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x571aeeull));
TAIL_STATIC(0x43dcc0u,43d);
}
B571aee:L571aee:{c.instructions+=3;NFSU2_TR(0x571aee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B571af1:{NFSU2_TR(0x571af1);
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
B571af3:{NFSU2_TR(0x571af3);
if(r1(R+518)){{goto L571b03;}}
}
B571af5:L571af5:{c.instructions+=3;NFSU2_TR(0x571af5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B571af6:{NFSU2_TR(0x571af6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xdfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B571afc:{NFSU2_TR(0x571afc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571ae0u);}goto L571ae0;}}
}
B571afe:L571afe:{c.instructions+=4;NFSU2_TR(0x571afe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571aff:{NFSU2_TR(0x571aff);
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
B571b01:{NFSU2_TR(0x571b01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571b02:{NFSU2_TR(0x571b02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571b03:L571b03:{c.instructions+=4;NFSU2_TR(0x571b03);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7faba8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B571b0a:{NFSU2_TR(0x571b0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571b0b:{NFSU2_TR(0x571b0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571b0c:{NFSU2_TR(0x571b0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571b10:L571b10:{c.instructions+=10;NFSU2_TR(0x571b10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B571b13:{NFSU2_TR(0x571b13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571b14:{NFSU2_TR(0x571b14);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B571b18:{NFSU2_TR(0x571b18);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B571b1b:{NFSU2_TR(0x571b1b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B571b1d:{NFSU2_TR(0x571b1d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571b1e:{NFSU2_TR(0x571b1e);
w4(R+24,u32(0x1ull));
}
B571b23:{NFSU2_TR(0x571b23);
__builtin_memmove((R+0),(R+24),4);
}
B571b25:{NFSU2_TR(0x571b25);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B571b29:{NFSU2_TR(0x571b29);
if(r1(R+518)){{goto L571b48;}}
}
B571b2b:L571b2b:{c.instructions+=11;NFSU2_TR(0x571b2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B571b2f:{NFSU2_TR(0x571b2f);
w4(R+4,u32(r1(R+4)));
}
B571b32:{NFSU2_TR(0x571b32);
__builtin_memmove((R+8),(R+4),4);
}
B571b34:{NFSU2_TR(0x571b34);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B571b37:{NFSU2_TR(0x571b37);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B571b3a:{NFSU2_TR(0x571b3a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B571b3d:{NFSU2_TR(0x571b3d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r1(U+0))));
}
B571b3f:{NFSU2_TR(0x571b3f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B571b41:{NFSU2_TR(0x571b41);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B571b44:{NFSU2_TR(0x571b44);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+4))));
}
B571b46:{NFSU2_TR(0x571b46);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+0))));
}
B571b48:L571b48:{c.instructions+=3;NFSU2_TR(0x571b48);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B571b4b:{NFSU2_TR(0x571b4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B571b4d:{NFSU2_TR(0x571b4d);
if(r1(R+518)){{goto L571bc0;}}
}
B571b4f:L571b4f:{c.instructions+=18;NFSU2_TR(0x571b4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571b53:{NFSU2_TR(0x571b53);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B571b56:{NFSU2_TR(0x571b56);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571b57:{NFSU2_TR(0x571b57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571b58:{NFSU2_TR(0x571b58);
w4(R+28,u32(r1(R+4)));
}
B571b5b:{NFSU2_TR(0x571b5b);
__builtin_memmove((R+8),(R+28),4);
}
B571b5d:{NFSU2_TR(0x571b5d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B571b60:{NFSU2_TR(0x571b60);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B571b63:{NFSU2_TR(0x571b63);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B571b66:{NFSU2_TR(0x571b66);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x1full))));
}
B571b69:{NFSU2_TR(0x571b69);
__builtin_memmove((R+4),(R+28),4);
}
B571b6b:{NFSU2_TR(0x571b6b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B571b6d:{NFSU2_TR(0x571b6d);
w4(R+20,u32(r1(R+12)));
}
B571b70:{NFSU2_TR(0x571b70);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+20))));
}
B571b72:{NFSU2_TR(0x571b72);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B571b75:{NFSU2_TR(0x571b75);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B571b77:{NFSU2_TR(0x571b77);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571b7b:{NFSU2_TR(0x571b7b);
if(r1(R+518)){{goto L571bbe;}}
}
B571b7d:L571b7d:{c.instructions+=24;NFSU2_TR(0x571b7d);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B571b82:{NFSU2_TR(0x571b82);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B571b86:{NFSU2_TR(0x571b86);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B571b89:{NFSU2_TR(0x571b89);
__builtin_memmove((R+12),(R+4),4);
}
B571b8b:{NFSU2_TR(0x571b8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B571b8e:{NFSU2_TR(0x571b8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B571b92:{NFSU2_TR(0x571b92);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B571b95:{NFSU2_TR(0x571b95);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B571b97:{NFSU2_TR(0x571b97);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B571b9b:{NFSU2_TR(0x571b9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B571b9f:{NFSU2_TR(0x571b9f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+4))));
}
B571ba1:{NFSU2_TR(0x571ba1);
__builtin_memmove((R+4),(R+28),4);
}
B571ba3:{NFSU2_TR(0x571ba3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B571ba7:{NFSU2_TR(0x571ba7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B571ba9:{NFSU2_TR(0x571ba9);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x1ull))));
}
B571bac:{NFSU2_TR(0x571bac);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+24))));
}
B571bae:{NFSU2_TR(0x571bae);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+12))));
}
B571bb0:{NFSU2_TR(0x571bb0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+28))));
}
B571bb2:{NFSU2_TR(0x571bb2);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ull))));
}
B571bb5:{NFSU2_TR(0x571bb5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B571bb7:{NFSU2_TR(0x571bb7);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B571bb9:{NFSU2_TR(0x571bb9);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B571bbb:{NFSU2_TR(0x571bbb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B571bbc:{NFSU2_TR(0x571bbc);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B571bbe:L571bbe:{c.instructions+=2;NFSU2_TR(0x571bbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571bbf:{NFSU2_TR(0x571bbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B571bc0:L571bc0:{c.instructions+=5;NFSU2_TR(0x571bc0);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B571bc2:{NFSU2_TR(0x571bc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571bc3:{NFSU2_TR(0x571bc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B571bc4:{NFSU2_TR(0x571bc4);
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
B571bc7:{NFSU2_TR(0x571bc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571bd0:L571bd0:{c.instructions+=7;NFSU2_TR(0x571bd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571bd4:{NFSU2_TR(0x571bd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B571bda:{NFSU2_TR(0x571bda);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B571bde:{NFSU2_TR(0x571bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B571be1:{NFSU2_TR(0x571be1);
w4(R+0,u32(r1(R+0)));
}
B571be4:{NFSU2_TR(0x571be4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B571be6:{NFSU2_TR(0x571be6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L571bf3;}}
}
B571be8:L571be8:{c.instructions+=3;NFSU2_TR(0x571be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B571beb:{NFSU2_TR(0x571beb);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B571bed:{NFSU2_TR(0x571bed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L571bf3;}}
}
B571bef:L571bef:{c.instructions+=2;NFSU2_TR(0x571bef);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+0,u16(u32(r2(R+0))^u32(r2(R+0))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B571bf2:{NFSU2_TR(0x571bf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571bf3:L571bf3:{c.instructions+=6;NFSU2_TR(0x571bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B571bf6:{NFSU2_TR(0x571bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571bf9:{NFSU2_TR(0x571bf9);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B571bfc:{NFSU2_TR(0x571bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B571c03:{NFSU2_TR(0x571c03);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B571c05:{NFSU2_TR(0x571c05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571c10:L571c10:{c.instructions+=8;NFSU2_TR(0x571c10);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571c14:{NFSU2_TR(0x571c14);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B571c18:{NFSU2_TR(0x571c18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571c19:{NFSU2_TR(0x571c19);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B571c1d:{NFSU2_TR(0x571c1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571c1e:{NFSU2_TR(0x571c1e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571c1f:{NFSU2_TR(0x571c1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571c20:{NFSU2_TR(0x571c20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x571c25ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571b10u);}goto L571b10;}
}
B571c25:L571c25:{c.instructions+=3;NFSU2_TR(0x571c25);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B571c28:{NFSU2_TR(0x571c28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B571c2a:{NFSU2_TR(0x571c2a);
if(r1(R+518)){{goto L571c36;}}
}
B571c2c:L571c2c:{c.instructions+=3;NFSU2_TR(0x571c2c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B571c2f:{NFSU2_TR(0x571c2f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B571c31:{NFSU2_TR(0x571c31);
if(r1(R+518)){{goto L571c36;}}
}
B571c33:L571c33:{c.instructions+=1;NFSU2_TR(0x571c33);
w4(R+0,u32(r1(R+4)));
}
B571c36:L571c36:{c.instructions+=5;NFSU2_TR(0x571c36);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B571c3a:{NFSU2_TR(0x571c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B571c3d:{NFSU2_TR(0x571c3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B571c3f:{NFSU2_TR(0x571c3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571c40:{NFSU2_TR(0x571c40);
if(r1(R+518)){{goto L571c4c;}}
}
B571c42:L571c42:{c.instructions+=2;NFSU2_TR(0x571c42);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B571c49:{NFSU2_TR(0x571c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571c4c:L571c4c:{c.instructions+=2;NFSU2_TR(0x571c4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B571c4f:{NFSU2_TR(0x571c4f);
if(r1(R+518)){{goto L571c61;}}
}
B571c51:L571c51:{c.instructions+=3;NFSU2_TR(0x571c51);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B571c53:{NFSU2_TR(0x571c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571c56:{NFSU2_TR(0x571c56);
if(r1(R+518)){{goto L571c61;}}
}
B571c58:L571c58:{c.instructions+=4;NFSU2_TR(0x571c58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B571c5b:{NFSU2_TR(0x571c5b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B571c5e:{NFSU2_TR(0x571c5e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B571c60:{NFSU2_TR(0x571c60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571c61:L571c61:{c.instructions+=2;NFSU2_TR(0x571c61);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+0,u16(u32(r2(R+0))^u32(r2(R+0))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B571c64:{NFSU2_TR(0x571c64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571c70:L571c70:{c.instructions+=8;NFSU2_TR(0x571c70);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571c74:{NFSU2_TR(0x571c74);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B571c78:{NFSU2_TR(0x571c78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571c79:{NFSU2_TR(0x571c79);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B571c7d:{NFSU2_TR(0x571c7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571c7e:{NFSU2_TR(0x571c7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571c7f:{NFSU2_TR(0x571c7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571c80:{NFSU2_TR(0x571c80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x571c85ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571b10u);}goto L571b10;}
}
B571c85:L571c85:{c.instructions+=3;NFSU2_TR(0x571c85);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B571c88:{NFSU2_TR(0x571c88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B571c8a:{NFSU2_TR(0x571c8a);
if(r1(R+518)){{goto L571c96;}}
}
B571c8c:L571c8c:{c.instructions+=3;NFSU2_TR(0x571c8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B571c8f:{NFSU2_TR(0x571c8f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B571c91:{NFSU2_TR(0x571c91);
if(r1(R+518)){{goto L571c96;}}
}
B571c93:L571c93:{c.instructions+=1;NFSU2_TR(0x571c93);
w4(R+0,u32(r1(R+4)));
}
B571c96:L571c96:{c.instructions+=4;NFSU2_TR(0x571c96);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B571c9a:{NFSU2_TR(0x571c9a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B571c9d:{NFSU2_TR(0x571c9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571c9e:{NFSU2_TR(0x571c9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L571cab;}}
}
B571ca0:L571ca0:{c.instructions+=3;NFSU2_TR(0x571ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B571ca3:{NFSU2_TR(0x571ca3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B571ca5:{NFSU2_TR(0x571ca5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L571cab;}}
}
B571ca7:L571ca7:{c.instructions+=2;NFSU2_TR(0x571ca7);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+0,u16(u32(r2(R+0))^u32(r2(R+0))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B571caa:{NFSU2_TR(0x571caa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571cab:L571cab:{c.instructions+=6;NFSU2_TR(0x571cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B571cae:{NFSU2_TR(0x571cae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571cb1:{NFSU2_TR(0x571cb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B571cb4:{NFSU2_TR(0x571cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B571cbb:{NFSU2_TR(0x571cbb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B571cbd:{NFSU2_TR(0x571cbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571cc0:L571cc0:{c.instructions+=28;NFSU2_TR(0x571cc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B571cc4:{NFSU2_TR(0x571cc4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571cc5:{NFSU2_TR(0x571cc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571cc6:{NFSU2_TR(0x571cc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B571cca:{NFSU2_TR(0x571cca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B571cce:{NFSU2_TR(0x571cce);
__builtin_memmove((R+0),(R+4),4);
}
B571cd0:{NFSU2_TR(0x571cd0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B571cd3:{NFSU2_TR(0x571cd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B571cd6:{NFSU2_TR(0x571cd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B571cd9:{NFSU2_TR(0x571cd9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B571cdb:{NFSU2_TR(0x571cdb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B571cdd:{NFSU2_TR(0x571cdd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B571ce0:{NFSU2_TR(0x571ce0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571ce1:{NFSU2_TR(0x571ce1);
w1(R+12,u8(0x80ull));
}
B571ce3:{NFSU2_TR(0x571ce3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B571ce5:{NFSU2_TR(0x571ce5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B571ce9:{NFSU2_TR(0x571ce9);
__builtin_memmove((R+28),(R+4),4);
}
B571ceb:{NFSU2_TR(0x571ceb);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B571cee:{NFSU2_TR(0x571cee);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B571cf1:{NFSU2_TR(0x571cf1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B571cf4:{NFSU2_TR(0x571cf4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B571cf6:{NFSU2_TR(0x571cf6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B571cf8:{NFSU2_TR(0x571cf8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B571cfb:{NFSU2_TR(0x571cfb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B571cfe:{NFSU2_TR(0x571cfe);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B571d00:{NFSU2_TR(0x571d00);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ull))));
}
B571d03:{NFSU2_TR(0x571d03);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B571d05:{NFSU2_TR(0x571d05);
if(r1(R+518)){{goto L571d0f;}}
}
B571d07:L571d07:{c.instructions+=2;NFSU2_TR(0x571d07);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B571d09:{NFSU2_TR(0x571d09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L571d16;}}
}
B571d0b:L571d0b:{c.instructions+=2;NFSU2_TR(0x571d0b);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B571d0d:{NFSU2_TR(0x571d0d);
{goto L571d16;}
}
B571d0f:L571d0f:{c.instructions+=2;NFSU2_TR(0x571d0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B571d11:{NFSU2_TR(0x571d11);
if(r1(R+518)){{goto L571d16;}}
}
B571d13:L571d13:{c.instructions+=1;NFSU2_TR(0x571d13);
w1(R+12,u8(u32(r1(R+12))|u32(u8(0xffull))));
}
B571d16:L571d16:{c.instructions+=8;NFSU2_TR(0x571d16);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B571d1a:{NFSU2_TR(0x571d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B571d1d:{NFSU2_TR(0x571d1d);
w4(R+0,u32(r1(R+12)));
}
B571d20:{NFSU2_TR(0x571d20);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B571d22:{NFSU2_TR(0x571d22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571d23:{NFSU2_TR(0x571d23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571d24:{NFSU2_TR(0x571d24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B571d25:{NFSU2_TR(0x571d25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L571d32;}}
}
B571d27:L571d27:{c.instructions+=3;NFSU2_TR(0x571d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B571d2a:{NFSU2_TR(0x571d2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B571d2c:{NFSU2_TR(0x571d2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L571d32;}}
}
B571d2e:L571d2e:{c.instructions+=2;NFSU2_TR(0x571d2e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+0,u16(u32(r2(R+0))^u32(r2(R+0))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B571d31:{NFSU2_TR(0x571d31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571d32:L571d32:{c.instructions+=6;NFSU2_TR(0x571d32);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B571d35:{NFSU2_TR(0x571d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571d38:{NFSU2_TR(0x571d38);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B571d3b:{NFSU2_TR(0x571d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B571d42:{NFSU2_TR(0x571d42);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B571d44:{NFSU2_TR(0x571d44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571d50:L571d50:{c.instructions+=9;NFSU2_TR(0x571d50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571d51:{NFSU2_TR(0x571d51);
__builtin_memmove((R+0),gp(0x7fdd08),1);
}
B571d56:{NFSU2_TR(0x571d56);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B571d5a:{NFSU2_TR(0x571d5a);
__builtin_memmove((R+4),gp(0x7fdd09),1);
}
B571d60:{NFSU2_TR(0x571d60);
u8 U[5];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B571d64:{NFSU2_TR(0x571d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571d6a:{NFSU2_TR(0x571d6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571d6b:{NFSU2_TR(0x571d6b);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B571d6f:{NFSU2_TR(0x571d6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x571d74ull));
TAIL_STATIC(0x5c1000u,5c1);
}
B571d74:L571d74:{c.instructions+=3;NFSU2_TR(0x571d74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B571d77:{NFSU2_TR(0x571d77);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B571d79:{NFSU2_TR(0x571d79);
if(r1(R+518)){{goto L571d8d;}}
}
B571d7b:L571d7b:{c.instructions+=5;NFSU2_TR(0x571d7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B571d7f:{NFSU2_TR(0x571d7f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571d80:{NFSU2_TR(0x571d80);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B571d84:{NFSU2_TR(0x571d84);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571d85:{NFSU2_TR(0x571d85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x571d8aull));
TAIL_STATIC(0x5c0f60u,5c0);
}
B571d8a:L571d8a:{c.instructions+=1;NFSU2_TR(0x571d8a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B571d8d:L571d8d:{c.instructions+=19;NFSU2_TR(0x571d8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571d91:{NFSU2_TR(0x571d91);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B571d95:{NFSU2_TR(0x571d95);
__builtin_memmove((R+8),(R+4),4);
}
B571d97:{NFSU2_TR(0x571d97);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571d98:{NFSU2_TR(0x571d98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571d99:{NFSU2_TR(0x571d99);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B571d9d:{NFSU2_TR(0x571d9d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571d9e:{NFSU2_TR(0x571d9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B571da1:{NFSU2_TR(0x571da1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B571da4:{NFSU2_TR(0x571da4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B571da7:{NFSU2_TR(0x571da7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r1(U+0))));
}
B571da9:{NFSU2_TR(0x571da9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B571dab:{NFSU2_TR(0x571dab);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B571dae:{NFSU2_TR(0x571dae);
w4(R+8,u32(0x80ull));
}
B571db3:{NFSU2_TR(0x571db3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B571db5:{NFSU2_TR(0x571db5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B571db8:{NFSU2_TR(0x571db8);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffull))));
}
B571dbe:{NFSU2_TR(0x571dbe);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B571dc0:{NFSU2_TR(0x571dc0);
if(r1(R+518)){{goto L571ddf;}}
}
B571dc2:L571dc2:{c.instructions+=10;NFSU2_TR(0x571dc2);
w4(R+4,u32(r1(R+4)));
}
B571dc5:{NFSU2_TR(0x571dc5);
__builtin_memmove((R+8),(R+4),4);
}
B571dc7:{NFSU2_TR(0x571dc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B571dca:{NFSU2_TR(0x571dca);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B571dcd:{NFSU2_TR(0x571dcd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B571dd0:{NFSU2_TR(0x571dd0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B571dd2:{NFSU2_TR(0x571dd2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B571dd4:{NFSU2_TR(0x571dd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B571dd7:{NFSU2_TR(0x571dd7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B571dd9:{NFSU2_TR(0x571dd9);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B571ddf:L571ddf:{c.instructions+=5;NFSU2_TR(0x571ddf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B571de3:{NFSU2_TR(0x571de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B571de6:{NFSU2_TR(0x571de6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B571de8:{NFSU2_TR(0x571de8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B571dea:{NFSU2_TR(0x571dea);
if(r1(R+518)){{goto L571dff;}}
}
B571dec:L571dec:{c.instructions+=10;NFSU2_TR(0x571dec);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B571def:{NFSU2_TR(0x571def);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B571df1:{NFSU2_TR(0x571df1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571df2:{NFSU2_TR(0x571df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571df5:{NFSU2_TR(0x571df5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571df6:{NFSU2_TR(0x571df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571df9:{NFSU2_TR(0x571df9);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+0,u16(u32(r2(R+0))^u32(r2(R+0))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B571dfc:{NFSU2_TR(0x571dfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B571dfd:{NFSU2_TR(0x571dfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B571dfe:{NFSU2_TR(0x571dfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571dff:L571dff:{c.instructions+=4;NFSU2_TR(0x571dff);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B571e02:{NFSU2_TR(0x571e02);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B571e04:{NFSU2_TR(0x571e04);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571e05:{NFSU2_TR(0x571e05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L571e85;}}
}
B571e07:L571e07:{c.instructions+=6;NFSU2_TR(0x571e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571e0a:{NFSU2_TR(0x571e0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571e0d:{NFSU2_TR(0x571e0d);
w4(R+4,u32(m1(0x7fdd0a)));
}
B571e14:{NFSU2_TR(0x571e14);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B571e19:{NFSU2_TR(0x571e19);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B571e1b:{NFSU2_TR(0x571e1b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L571e3d;}}
}
B571e1d:L571e1d:{c.instructions+=2;NFSU2_TR(0x571e1d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B571e1f:{NFSU2_TR(0x571e1f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L571e3b;}}
}
B571e21:L571e21:{c.instructions+=11;NFSU2_TR(0x571e21);
__builtin_memmove((R+8),gp(0x865138),4);
}
B571e27:{NFSU2_TR(0x571e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571e2a:{NFSU2_TR(0x571e2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B571e2b:{NFSU2_TR(0x571e2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571e2c:{NFSU2_TR(0x571e2c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x19ull))));
}
B571e2f:{NFSU2_TR(0x571e2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571e30:{NFSU2_TR(0x571e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571e33:{NFSU2_TR(0x571e33);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x100ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B571e38:{NFSU2_TR(0x571e38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B571e39:{NFSU2_TR(0x571e39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B571e3a:{NFSU2_TR(0x571e3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571e3b:L571e3b:{c.instructions+=1;NFSU2_TR(0x571e3b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B571e3d:L571e3d:{c.instructions+=1;NFSU2_TR(0x571e3d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L571e4d;}}
}
B571e3f:L571e3f:{c.instructions+=2;NFSU2_TR(0x571e3f);
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
B571e41:{NFSU2_TR(0x571e41);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L571e4d;}}
}
B571e43:L571e43:{c.instructions+=7;NFSU2_TR(0x571e43);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B571e47:{NFSU2_TR(0x571e47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B571e48:{NFSU2_TR(0x571e48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571e49:{NFSU2_TR(0x571e49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571e4a:{NFSU2_TR(0x571e4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B571e4b:{NFSU2_TR(0x571e4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B571e4c:{NFSU2_TR(0x571e4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571e4d:L571e4d:{c.instructions+=2;NFSU2_TR(0x571e4d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B571e4f:{NFSU2_TR(0x571e4f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L571f64;}}
}
B571e55:L571e55:{c.instructions+=2;NFSU2_TR(0x571e55);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B571e57:{NFSU2_TR(0x571e57);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L571f64;}}
}
B571e5d:L571e5d:{c.instructions+=3;NFSU2_TR(0x571e5d);
__builtin_memmove((R+0),gp(0x865138),4);
}
B571e62:{NFSU2_TR(0x571e62);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B571e65:{NFSU2_TR(0x571e65);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L571f64;}}
}
B571e6b:L571e6b:{c.instructions+=11;NFSU2_TR(0x571e6b);
__builtin_memmove((R+4),gp(0x865138),4);
}
B571e71:{NFSU2_TR(0x571e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571e74:{NFSU2_TR(0x571e74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B571e75:{NFSU2_TR(0x571e75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571e76:{NFSU2_TR(0x571e76);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x6ull))));
}
B571e79:{NFSU2_TR(0x571e79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571e7a:{NFSU2_TR(0x571e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571e7d:{NFSU2_TR(0x571e7d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x100ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B571e82:{NFSU2_TR(0x571e82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B571e83:{NFSU2_TR(0x571e83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B571e84:{NFSU2_TR(0x571e84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571e85:L571e85:{c.instructions+=2;NFSU2_TR(0x571e85);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B571e88:{NFSU2_TR(0x571e88);
if(r1(R+518)){{goto L571e93;}}
}
B571e8a:L571e8a:{c.instructions+=2;NFSU2_TR(0x571e8a);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B571e8d:{NFSU2_TR(0x571e8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L571f64;}}
}
B571e93:L571e93:{c.instructions+=12;NFSU2_TR(0x571e93);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B571e97:{NFSU2_TR(0x571e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B571e9a:{NFSU2_TR(0x571e9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571e9e:{NFSU2_TR(0x571e9e);
__builtin_memmove((R+4),(R+8),4);
}
B571ea0:{NFSU2_TR(0x571ea0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B571ea3:{NFSU2_TR(0x571ea3);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffull))));
}
B571ea9:{NFSU2_TR(0x571ea9);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B571eab:{NFSU2_TR(0x571eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571eae:{NFSU2_TR(0x571eae);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B571eb1:{NFSU2_TR(0x571eb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571eb5:{NFSU2_TR(0x571eb5);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B571eb9:{NFSU2_TR(0x571eb9);
{goto L571ec0;}
}
B571ebb:L571ebb:{c.instructions+=2;NFSU2_TR(0x571ebb);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B571ebf:{NFSU2_TR(0x571ebf);
}
B571ec0:L571ec0:{c.instructions+=3;NFSU2_TR(0x571ec0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571ec4:{NFSU2_TR(0x571ec4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B571ec6:{NFSU2_TR(0x571ec6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L571ece;}}
}
B571ec8:L571ec8:{c.instructions+=3;NFSU2_TR(0x571ec8);
__builtin_memmove((R+0),(R+28),4);
}
B571eca:{NFSU2_TR(0x571eca);
__builtin_memmove((R+24),(R+12),4);
}
B571ecc:{NFSU2_TR(0x571ecc);
{goto L571ed4;}
}
B571ece:L571ece:{c.instructions+=2;NFSU2_TR(0x571ece);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B571ed2:{NFSU2_TR(0x571ed2);
__builtin_memmove((R+0),(R+8),4);
}
B571ed4:L571ed4:{c.instructions+=2;NFSU2_TR(0x571ed4);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B571ed7:{NFSU2_TR(0x571ed7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L571f21;}}
}
B571ed9:L571ed9:{c.instructions+=3;NFSU2_TR(0x571ed9);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B571ede:{NFSU2_TR(0x571ede);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B571ee0:{NFSU2_TR(0x571ee0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L571eee;}}
}
B571ee2:L571ee2:{c.instructions+=2;NFSU2_TR(0x571ee2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B571ee4:{NFSU2_TR(0x571ee4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571e21u);}goto L571e21;}}
}
B571eea:L571eea:{c.instructions+=2;NFSU2_TR(0x571eea);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B571eec:{NFSU2_TR(0x571eec);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L571f52;}}
}
B571eee:L571eee:{c.instructions+=2;NFSU2_TR(0x571eee);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B571ef0:{NFSU2_TR(0x571ef0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571e43u);}goto L571e43;}}
}
B571ef6:L571ef6:{c.instructions+=2;NFSU2_TR(0x571ef6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B571ef8:{NFSU2_TR(0x571ef8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L571f52;}}
}
B571efa:L571efa:{c.instructions+=2;NFSU2_TR(0x571efa);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B571efc:{NFSU2_TR(0x571efc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L571f52;}}
}
B571efe:L571efe:{c.instructions+=3;NFSU2_TR(0x571efe);
__builtin_memmove((R+0),gp(0x865138),4);
}
B571f03:{NFSU2_TR(0x571f03);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B571f06:{NFSU2_TR(0x571f06);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L571f52;}}
}
B571f08:L571f08:{c.instructions+=11;NFSU2_TR(0x571f08);
__builtin_memmove((R+0),gp(0x865138),4);
}
B571f0d:{NFSU2_TR(0x571f0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B571f0e:{NFSU2_TR(0x571f0e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
}
B571f11:{NFSU2_TR(0x571f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571f14:{NFSU2_TR(0x571f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571f17:{NFSU2_TR(0x571f17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571f18:{NFSU2_TR(0x571f18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571f19:{NFSU2_TR(0x571f19);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x100ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B571f1e:{NFSU2_TR(0x571f1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B571f1f:{NFSU2_TR(0x571f1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B571f20:{NFSU2_TR(0x571f20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571f21:L571f21:{c.instructions+=2;NFSU2_TR(0x571f21);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B571f24:{NFSU2_TR(0x571f24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L571f52;}}
}
B571f26:L571f26:{c.instructions+=3;NFSU2_TR(0x571f26);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B571f2b:{NFSU2_TR(0x571f2b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B571f2d:{NFSU2_TR(0x571f2d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L571f37;}}
}
B571f2f:L571f2f:{c.instructions+=2;NFSU2_TR(0x571f2f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B571f31:{NFSU2_TR(0x571f31);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L571f6d;}}
}
B571f33:L571f33:{c.instructions+=2;NFSU2_TR(0x571f33);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B571f35:{NFSU2_TR(0x571f35);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L571f52;}}
}
B571f37:L571f37:{c.instructions+=2;NFSU2_TR(0x571f37);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B571f39:{NFSU2_TR(0x571f39);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571e43u);}goto L571e43;}}
}
B571f3f:L571f3f:{c.instructions+=2;NFSU2_TR(0x571f3f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B571f41:{NFSU2_TR(0x571f41);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L571f52;}}
}
B571f43:L571f43:{c.instructions+=2;NFSU2_TR(0x571f43);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B571f45:{NFSU2_TR(0x571f45);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L571f52;}}
}
B571f47:L571f47:{c.instructions+=3;NFSU2_TR(0x571f47);
__builtin_memmove((R+4),gp(0x865138),4);
}
B571f4d:{NFSU2_TR(0x571f4d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B571f50:{NFSU2_TR(0x571f50);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L571f87;}}
}
B571f52:L571f52:{c.instructions+=5;NFSU2_TR(0x571f52);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571f56:{NFSU2_TR(0x571f56);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B571f57:{NFSU2_TR(0x571f57);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B571f5a:{NFSU2_TR(0x571f5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571f5e:{NFSU2_TR(0x571f5e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571ebbu);}goto L571ebb;}}
}
B571f64:L571f64:{c.instructions+=7;NFSU2_TR(0x571f64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B571f65:{NFSU2_TR(0x571f65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571f66:{NFSU2_TR(0x571f66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571f67:{NFSU2_TR(0x571f67);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+0,u16(u32(r2(R+0))^u32(r2(R+0))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B571f6a:{NFSU2_TR(0x571f6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B571f6b:{NFSU2_TR(0x571f6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B571f6c:{NFSU2_TR(0x571f6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571f6d:L571f6d:{c.instructions+=11;NFSU2_TR(0x571f6d);
__builtin_memmove((R+4),gp(0x865138),4);
}
B571f73:{NFSU2_TR(0x571f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571f76:{NFSU2_TR(0x571f76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B571f77:{NFSU2_TR(0x571f77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571f78:{NFSU2_TR(0x571f78);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x19ull))));
}
B571f7b:{NFSU2_TR(0x571f7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571f7c:{NFSU2_TR(0x571f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571f7f:{NFSU2_TR(0x571f7f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x100ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B571f84:{NFSU2_TR(0x571f84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B571f85:{NFSU2_TR(0x571f85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B571f86:{NFSU2_TR(0x571f86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571f87:L571f87:{c.instructions+=11;NFSU2_TR(0x571f87);
__builtin_memmove((R+8),gp(0x865138),4);
}
B571f8d:{NFSU2_TR(0x571f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571f90:{NFSU2_TR(0x571f90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B571f91:{NFSU2_TR(0x571f91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571f92:{NFSU2_TR(0x571f92);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x6ull))));
}
B571f95:{NFSU2_TR(0x571f95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571f96:{NFSU2_TR(0x571f96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571f99:{NFSU2_TR(0x571f99);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x100ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B571f9e:{NFSU2_TR(0x571f9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B571f9f:{NFSU2_TR(0x571f9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B571fa0:{NFSU2_TR(0x571fa0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571fb0:L571fb0:{c.instructions+=5;NFSU2_TR(0x571fb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B571fb4:{NFSU2_TR(0x571fb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B571fb8:{NFSU2_TR(0x571fb8);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x1c8ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B571fbe:{NFSU2_TR(0x571fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x865764ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B571fc4:{NFSU2_TR(0x571fc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571fd0:L571fd0:{c.instructions+=6;NFSU2_TR(0x571fd0);
__builtin_memmove((R+8),gp(0x7fe7f0),4);
}
B571fd6:{NFSU2_TR(0x571fd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571fd7:{NFSU2_TR(0x571fd7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B571fd9:{NFSU2_TR(0x571fd9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B571fdb:{NFSU2_TR(0x571fdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B571fdc:{NFSU2_TR(0x571fdc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L571ff3;}}
}
B571fde:L571fde:{c.instructions+=2;NFSU2_TR(0x571fde);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B571fe2:{NFSU2_TR(0x571fe2);
w4(R+4,u32(0x7fe778ull));
}
B571fe7:L571fe7:{c.instructions+=2;NFSU2_TR(0x571fe7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B571fe9:{NFSU2_TR(0x571fe9);
if(r1(R+518)){{goto L571ff8;}}
}
B571feb:L571feb:{c.instructions+=4;NFSU2_TR(0x571feb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B571fec:{NFSU2_TR(0x571fec);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B571fef:{NFSU2_TR(0x571fef);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B571ff1:{NFSU2_TR(0x571ff1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x571fe7u);}goto L571fe7;}}
}
B571ff3:L571ff3:{c.instructions+=4;NFSU2_TR(0x571ff3);
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
B571ff5:{NFSU2_TR(0x571ff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B571ff6:{NFSU2_TR(0x571ff6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B571ff7:{NFSU2_TR(0x571ff7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B571ff8:L571ff8:{c.instructions+=3;NFSU2_TR(0x571ff8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B571ffb:{NFSU2_TR(0x571ffb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B571fff:{NFSU2_TR(0x571fff);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
TAIL_STATIC(0x572003u,572);
}
XIT:NFSU2_TR_EXIT(0x571,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
