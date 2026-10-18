#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_703(u8* __restrict R,Cpu& c);
u32 body_704(u8* __restrict R,Cpu& c);
u32 body_707(u8* __restrict R,Cpu& c);
u32 body_709(u8* __restrict R,Cpu& c);
u32 body_70c(u8* __restrict R,Cpu& c);
u32 body_70d(u8* __restrict R,Cpu& c);
u32 body_719(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x708,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x708,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_708(u8* __restrict R,Cpu& c);
u32 page_708(Cpu& c){return body_708(c.regs.data(),c);}
__attribute__((noinline)) u32 body_708(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x708000:goto L708000;
case 0x708003:c.instructions+=3;goto B708003;
case 0x708004:c.instructions+=2;goto B708004;
case 0x70800a:c.instructions+=1;goto B70800a;
case 0x70800f:goto L70800f;
case 0x708010:c.instructions+=3;goto B708010;
case 0x708016:c.instructions+=2;goto B708016;
case 0x708018:c.instructions+=1;goto B708018;
case 0x70801a:goto L70801a;
case 0x70801d:c.instructions+=2;goto B70801d;
case 0x708020:c.instructions+=1;goto B708020;
case 0x708022:goto L708022;
case 0x708025:c.instructions+=2;goto B708025;
case 0x708028:c.instructions+=1;goto B708028;
case 0x70802a:goto L70802a;
case 0x708030:c.instructions+=9;goto B708030;
case 0x708036:c.instructions+=8;goto B708036;
case 0x708038:c.instructions+=7;goto B708038;
case 0x708039:c.instructions+=6;goto B708039;
case 0x70803b:c.instructions+=5;goto B70803b;
case 0x70803d:c.instructions+=4;goto B70803d;
case 0x708040:c.instructions+=3;goto B708040;
case 0x708042:c.instructions+=2;goto B708042;
case 0x708045:c.instructions+=1;goto B708045;
case 0x708047:goto L708047;
case 0x708049:goto L708049;
case 0x70804b:c.instructions+=1;goto B70804b;
case 0x70804e:goto L70804e;
case 0x708050:goto L708050;
case 0x708056:c.instructions+=11;goto B708056;
case 0x70805c:c.instructions+=10;goto B70805c;
case 0x708062:c.instructions+=9;goto B708062;
case 0x708064:c.instructions+=8;goto B708064;
case 0x708066:c.instructions+=7;goto B708066;
case 0x708069:c.instructions+=6;goto B708069;
case 0x70806b:c.instructions+=5;goto B70806b;
case 0x70806d:c.instructions+=4;goto B70806d;
case 0x70806f:c.instructions+=3;goto B70806f;
case 0x708071:c.instructions+=2;goto B708071;
case 0x708074:c.instructions+=1;goto B708074;
case 0x708079:goto L708079;
case 0x70807b:goto L70807b;
case 0x70807d:c.instructions+=1;goto B70807d;
case 0x708080:goto L708080;
case 0x708082:goto L708082;
case 0x708089:c.instructions+=1;goto B708089;
case 0x70808f:goto L70808f;
case 0x708094:c.instructions+=4;goto B708094;
case 0x708095:c.instructions+=3;goto B708095;
case 0x70809b:c.instructions+=2;goto B70809b;
case 0x70809c:c.instructions+=1;goto B70809c;
case 0x7080a1:goto L7080a1;
case 0x7080a3:c.instructions+=3;goto B7080a3;
case 0x7080a4:c.instructions+=2;goto B7080a4;
case 0x7080a5:c.instructions+=1;goto B7080a5;
case 0x7080a7:goto L7080a7;
case 0x7080a9:c.instructions+=3;goto B7080a9;
case 0x7080aa:c.instructions+=2;goto B7080aa;
case 0x7080b1:c.instructions+=1;goto B7080b1;
case 0x7080b6:goto L7080b6;
case 0x7080b9:c.instructions+=4;goto B7080b9;
case 0x7080bb:c.instructions+=3;goto B7080bb;
case 0x7080bc:c.instructions+=2;goto B7080bc;
case 0x7080c2:c.instructions+=1;goto B7080c2;
case 0x7080c7:goto L7080c7;
case 0x7080ca:c.instructions+=2;goto B7080ca;
case 0x7080d0:c.instructions+=1;goto B7080d0;
case 0x7080d5:goto L7080d5;
case 0x7080d6:c.instructions+=2;goto B7080d6;
case 0x7080d7:c.instructions+=1;goto B7080d7;
case 0x7080dc:goto L7080dc;
case 0x7080de:c.instructions+=5;goto B7080de;
case 0x7080df:c.instructions+=4;goto B7080df;
case 0x7080e2:c.instructions+=3;goto B7080e2;
case 0x7080e3:c.instructions+=2;goto B7080e3;
case 0x7080e9:c.instructions+=1;goto B7080e9;
case 0x7080ee:goto L7080ee;
case 0x7080f0:c.instructions+=1;goto B7080f0;
case 0x7080f2:goto L7080f2;
case 0x7080f8:c.instructions+=1;goto B7080f8;
case 0x7080fa:goto L7080fa;
case 0x7080fc:c.instructions+=5;goto B7080fc;
case 0x7080fd:c.instructions+=4;goto B7080fd;
case 0x708103:c.instructions+=3;goto B708103;
case 0x708104:c.instructions+=2;goto B708104;
case 0x708105:c.instructions+=1;goto B708105;
case 0x70810a:goto L70810a;
case 0x70810b:c.instructions+=2;goto B70810b;
case 0x70810c:c.instructions+=1;goto B70810c;
case 0x70810e:goto L70810e;
case 0x708110:c.instructions+=5;goto B708110;
case 0x708113:c.instructions+=4;goto B708113;
case 0x708119:c.instructions+=3;goto B708119;
case 0x70811a:c.instructions+=2;goto B70811a;
case 0x70811b:c.instructions+=1;goto B70811b;
case 0x708120:goto L708120;
case 0x708122:c.instructions+=2;goto B708122;
case 0x708123:c.instructions+=1;goto B708123;
case 0x708128:goto L708128;
case 0x70812b:c.instructions+=1;goto B70812b;
case 0x708131:goto L708131;
case 0x708137:c.instructions+=3;goto B708137;
case 0x70813c:c.instructions+=2;goto B70813c;
case 0x70813d:c.instructions+=1;goto B70813d;
case 0x708142:goto L708142;
case 0x708149:c.instructions+=4;goto B708149;
case 0x70814a:c.instructions+=3;goto B70814a;
case 0x70814b:c.instructions+=2;goto B70814b;
case 0x708151:c.instructions+=1;goto B708151;
case 0x708153:goto L708153;
case 0x708159:c.instructions+=3;goto B708159;
case 0x70815e:c.instructions+=2;goto B70815e;
case 0x70815f:c.instructions+=1;goto B70815f;
case 0x708164:goto L708164;
case 0x708166:c.instructions+=4;goto B708166;
case 0x708167:c.instructions+=3;goto B708167;
case 0x708168:c.instructions+=2;goto B708168;
case 0x70816e:c.instructions+=1;goto B70816e;
case 0x708170:goto L708170;
case 0x708176:c.instructions+=3;goto B708176;
case 0x70817b:c.instructions+=2;goto B70817b;
case 0x70817c:c.instructions+=1;goto B70817c;
case 0x708181:goto L708181;
case 0x708182:c.instructions+=5;goto B708182;
case 0x708183:c.instructions+=4;goto B708183;
case 0x708189:c.instructions+=3;goto B708189;
case 0x70818b:c.instructions+=2;goto B70818b;
case 0x70818d:c.instructions+=1;goto B70818d;
case 0x708193:goto L708193;
case 0x708199:c.instructions+=3;goto B708199;
case 0x70819e:c.instructions+=2;goto B70819e;
case 0x70819f:c.instructions+=1;goto B70819f;
case 0x7081a4:goto L7081a4;
case 0x7081a8:c.instructions+=12;goto B7081a8;
case 0x7081ae:c.instructions+=11;goto B7081ae;
case 0x7081b4:c.instructions+=10;goto B7081b4;
case 0x7081b6:c.instructions+=9;goto B7081b6;
case 0x7081b8:c.instructions+=8;goto B7081b8;
case 0x7081ba:c.instructions+=7;goto B7081ba;
case 0x7081be:c.instructions+=6;goto B7081be;
case 0x7081c1:c.instructions+=5;goto B7081c1;
case 0x7081c3:c.instructions+=4;goto B7081c3;
case 0x7081c9:c.instructions+=3;goto B7081c9;
case 0x7081ca:c.instructions+=2;goto B7081ca;
case 0x7081cc:c.instructions+=1;goto B7081cc;
case 0x7081d1:goto L7081d1;
case 0x7081d3:c.instructions+=6;goto B7081d3;
case 0x7081d6:c.instructions+=5;goto B7081d6;
case 0x7081d7:c.instructions+=4;goto B7081d7;
case 0x7081d8:c.instructions+=3;goto B7081d8;
case 0x7081d9:c.instructions+=2;goto B7081d9;
case 0x7081da:c.instructions+=1;goto B7081da;
case 0x7081db:goto L7081db;
case 0x7081dc:c.instructions+=7;goto B7081dc;
case 0x7081de:c.instructions+=6;goto B7081de;
case 0x7081df:c.instructions+=5;goto B7081df;
case 0x7081e2:c.instructions+=4;goto B7081e2;
case 0x7081e3:c.instructions+=3;goto B7081e3;
case 0x7081e5:c.instructions+=2;goto B7081e5;
case 0x7081e6:c.instructions+=1;goto B7081e6;
case 0x7081eb:goto L7081eb;
case 0x7081ed:c.instructions+=1;goto B7081ed;
case 0x7081ef:goto L7081ef;
case 0x7081f1:goto L7081f1;
case 0x7081f3:c.instructions+=4;goto B7081f3;
case 0x7081f4:c.instructions+=3;goto B7081f4;
case 0x7081f5:c.instructions+=2;goto B7081f5;
case 0x7081f6:c.instructions+=1;goto B7081f6;
case 0x7081f7:goto L7081f7;
case 0x7081f8:c.instructions+=6;goto B7081f8;
case 0x7081fa:c.instructions+=5;goto B7081fa;
case 0x7081fd:c.instructions+=4;goto B7081fd;
case 0x708200:c.instructions+=3;goto B708200;
case 0x708206:c.instructions+=2;goto B708206;
case 0x708207:c.instructions+=1;goto B708207;
case 0x708208:goto L708208;
case 0x708209:c.instructions+=5;goto B708209;
case 0x70820b:c.instructions+=4;goto B70820b;
case 0x70820e:c.instructions+=3;goto B70820e;
case 0x708214:c.instructions+=2;goto B708214;
case 0x708215:c.instructions+=1;goto B708215;
case 0x708216:goto L708216;
case 0x708217:c.instructions+=9;goto B708217;
case 0x708219:c.instructions+=8;goto B708219;
case 0x70821c:c.instructions+=7;goto B70821c;
case 0x70821f:c.instructions+=6;goto B70821f;
case 0x708220:c.instructions+=5;goto B708220;
case 0x708223:c.instructions+=4;goto B708223;
case 0x708224:c.instructions+=3;goto B708224;
case 0x708227:c.instructions+=2;goto B708227;
case 0x708228:c.instructions+=1;goto B708228;
case 0x70822d:goto L70822d;
case 0x708230:c.instructions+=2;goto B708230;
case 0x708234:c.instructions+=1;goto B708234;
case 0x70823a:goto L70823a;
case 0x70823f:goto L70823f;
case 0x708249:c.instructions+=28;goto B708249;
case 0x708253:c.instructions+=27;goto B708253;
case 0x70825d:c.instructions+=26;goto B70825d;
case 0x708267:c.instructions+=25;goto B708267;
case 0x708271:c.instructions+=24;goto B708271;
case 0x70827b:c.instructions+=23;goto B70827b;
case 0x708285:c.instructions+=22;goto B708285;
case 0x70828f:c.instructions+=21;goto B70828f;
case 0x708299:c.instructions+=20;goto B708299;
case 0x7082a3:c.instructions+=19;goto B7082a3;
case 0x7082ad:c.instructions+=18;goto B7082ad;
case 0x7082b7:c.instructions+=17;goto B7082b7;
case 0x7082c1:c.instructions+=16;goto B7082c1;
case 0x7082cb:c.instructions+=15;goto B7082cb;
case 0x7082d5:c.instructions+=14;goto B7082d5;
case 0x7082df:c.instructions+=13;goto B7082df;
case 0x7082e9:c.instructions+=12;goto B7082e9;
case 0x7082f3:c.instructions+=11;goto B7082f3;
case 0x7082fd:c.instructions+=10;goto B7082fd;
case 0x708307:c.instructions+=9;goto B708307;
case 0x708311:c.instructions+=8;goto B708311;
case 0x70831b:c.instructions+=7;goto B70831b;
case 0x708325:c.instructions+=6;goto B708325;
case 0x70832f:c.instructions+=5;goto B70832f;
case 0x708339:c.instructions+=4;goto B708339;
case 0x708343:c.instructions+=3;goto B708343;
case 0x70834d:c.instructions+=2;goto B70834d;
case 0x70834e:c.instructions+=1;goto B70834e;
case 0x70834f:goto L70834f;
case 0x708353:c.instructions+=1;goto B708353;
case 0x708359:goto L708359;
case 0x70835e:goto L70835e;
case 0x708368:c.instructions+=28;goto B708368;
case 0x708372:c.instructions+=27;goto B708372;
case 0x70837c:c.instructions+=26;goto B70837c;
case 0x708386:c.instructions+=25;goto B708386;
case 0x708390:c.instructions+=24;goto B708390;
case 0x70839a:c.instructions+=23;goto B70839a;
case 0x7083a4:c.instructions+=22;goto B7083a4;
case 0x7083ae:c.instructions+=21;goto B7083ae;
case 0x7083b8:c.instructions+=20;goto B7083b8;
case 0x7083c2:c.instructions+=19;goto B7083c2;
case 0x7083cc:c.instructions+=18;goto B7083cc;
case 0x7083d6:c.instructions+=17;goto B7083d6;
case 0x7083e0:c.instructions+=16;goto B7083e0;
case 0x7083ea:c.instructions+=15;goto B7083ea;
case 0x7083f4:c.instructions+=14;goto B7083f4;
case 0x7083fe:c.instructions+=13;goto B7083fe;
case 0x708408:c.instructions+=12;goto B708408;
case 0x708412:c.instructions+=11;goto B708412;
case 0x70841c:c.instructions+=10;goto B70841c;
case 0x708426:c.instructions+=9;goto B708426;
case 0x708430:c.instructions+=8;goto B708430;
case 0x70843a:c.instructions+=7;goto B70843a;
case 0x708444:c.instructions+=6;goto B708444;
case 0x70844e:c.instructions+=5;goto B70844e;
case 0x708458:c.instructions+=4;goto B708458;
case 0x708462:c.instructions+=3;goto B708462;
case 0x70846c:c.instructions+=2;goto B70846c;
case 0x70846d:c.instructions+=1;goto B70846d;
case 0x70846e:goto L70846e;
case 0x708478:c.instructions+=28;goto B708478;
case 0x708482:c.instructions+=27;goto B708482;
case 0x70848c:c.instructions+=26;goto B70848c;
case 0x708496:c.instructions+=25;goto B708496;
case 0x7084a0:c.instructions+=24;goto B7084a0;
case 0x7084aa:c.instructions+=23;goto B7084aa;
case 0x7084b4:c.instructions+=22;goto B7084b4;
case 0x7084be:c.instructions+=21;goto B7084be;
case 0x7084c8:c.instructions+=20;goto B7084c8;
case 0x7084d2:c.instructions+=19;goto B7084d2;
case 0x7084dc:c.instructions+=18;goto B7084dc;
case 0x7084e6:c.instructions+=17;goto B7084e6;
case 0x7084f0:c.instructions+=16;goto B7084f0;
case 0x7084fa:c.instructions+=15;goto B7084fa;
case 0x708504:c.instructions+=14;goto B708504;
case 0x70850e:c.instructions+=13;goto B70850e;
case 0x708518:c.instructions+=12;goto B708518;
case 0x708522:c.instructions+=11;goto B708522;
case 0x70852c:c.instructions+=10;goto B70852c;
case 0x708536:c.instructions+=9;goto B708536;
case 0x708540:c.instructions+=8;goto B708540;
case 0x70854a:c.instructions+=7;goto B70854a;
case 0x708554:c.instructions+=6;goto B708554;
case 0x70855e:c.instructions+=5;goto B70855e;
case 0x708568:c.instructions+=4;goto B708568;
case 0x708572:c.instructions+=3;goto B708572;
case 0x70857c:c.instructions+=2;goto B70857c;
case 0x70857d:c.instructions+=1;goto B70857d;
case 0x70857e:goto L70857e;
case 0x70857f:c.instructions+=13;goto B70857f;
case 0x708581:c.instructions+=12;goto B708581;
case 0x708582:c.instructions+=11;goto B708582;
case 0x708583:c.instructions+=10;goto B708583;
case 0x708586:c.instructions+=9;goto B708586;
case 0x708587:c.instructions+=8;goto B708587;
case 0x70858a:c.instructions+=7;goto B70858a;
case 0x70858b:c.instructions+=6;goto B70858b;
case 0x70858e:c.instructions+=5;goto B70858e;
case 0x708590:c.instructions+=4;goto B708590;
case 0x708593:c.instructions+=3;goto B708593;
case 0x708595:c.instructions+=2;goto B708595;
case 0x70859a:c.instructions+=1;goto B70859a;
case 0x7085a0:goto L7085a0;
case 0x7085a2:goto L7085a2;
case 0x7085a4:goto L7085a4;
case 0x7085a7:c.instructions+=10;goto B7085a7;
case 0x7085a9:c.instructions+=9;goto B7085a9;
case 0x7085ac:c.instructions+=8;goto B7085ac;
case 0x7085af:c.instructions+=7;goto B7085af;
case 0x7085b2:c.instructions+=6;goto B7085b2;
case 0x7085b4:c.instructions+=5;goto B7085b4;
case 0x7085b6:c.instructions+=4;goto B7085b6;
case 0x7085b8:c.instructions+=3;goto B7085b8;
case 0x7085bb:c.instructions+=2;goto B7085bb;
case 0x7085bd:c.instructions+=1;goto B7085bd;
case 0x7085be:goto L7085be;
case 0x7085c1:c.instructions+=16;goto B7085c1;
case 0x7085c4:c.instructions+=15;goto B7085c4;
case 0x7085c8:c.instructions+=14;goto B7085c8;
case 0x7085ca:c.instructions+=13;goto B7085ca;
case 0x7085cc:c.instructions+=12;goto B7085cc;
case 0x7085cf:c.instructions+=11;goto B7085cf;
case 0x7085d1:c.instructions+=10;goto B7085d1;
case 0x7085d4:c.instructions+=9;goto B7085d4;
case 0x7085d7:c.instructions+=8;goto B7085d7;
case 0x7085da:c.instructions+=7;goto B7085da;
case 0x7085de:c.instructions+=6;goto B7085de;
case 0x7085df:c.instructions+=5;goto B7085df;
case 0x7085e2:c.instructions+=4;goto B7085e2;
case 0x7085e5:c.instructions+=3;goto B7085e5;
case 0x7085e8:c.instructions+=2;goto B7085e8;
case 0x7085ea:c.instructions+=1;goto B7085ea;
case 0x7085ec:goto L7085ec;
case 0x7085ed:goto L7085ed;
case 0x7085ee:c.instructions+=4;goto B7085ee;
case 0x7085f0:c.instructions+=3;goto B7085f0;
case 0x7085f1:c.instructions+=2;goto B7085f1;
case 0x7085f2:c.instructions+=1;goto B7085f2;
case 0x7085f3:goto L7085f3;
case 0x7085f4:c.instructions+=9;goto B7085f4;
case 0x7085f6:c.instructions+=8;goto B7085f6;
case 0x7085fc:c.instructions+=7;goto B7085fc;
case 0x7085fd:c.instructions+=6;goto B7085fd;
case 0x708600:c.instructions+=5;goto B708600;
case 0x708603:c.instructions+=4;goto B708603;
case 0x708606:c.instructions+=3;goto B708606;
case 0x708609:c.instructions+=2;goto B708609;
case 0x70860a:c.instructions+=1;goto B70860a;
case 0x70860c:goto L70860c;
case 0x708611:goto L708611;
case 0x708613:goto L708613;
case 0x708619:goto L708619;
case 0x70861a:c.instructions+=5;goto B70861a;
case 0x70861b:c.instructions+=4;goto B70861b;
case 0x70861e:c.instructions+=3;goto B70861e;
case 0x70861f:c.instructions+=2;goto B70861f;
case 0x708620:c.instructions+=1;goto B708620;
case 0x708621:goto L708621;
case 0x708622:c.instructions+=9;goto B708622;
case 0x708624:c.instructions+=8;goto B708624;
case 0x708627:c.instructions+=7;goto B708627;
case 0x70862a:c.instructions+=6;goto B70862a;
case 0x70862d:c.instructions+=5;goto B70862d;
case 0x708631:c.instructions+=4;goto B708631;
case 0x708633:c.instructions+=3;goto B708633;
case 0x708636:c.instructions+=2;goto B708636;
case 0x708639:c.instructions+=1;goto B708639;
case 0x70863f:goto L70863f;
case 0x708642:c.instructions+=10;goto B708642;
case 0x708645:c.instructions+=9;goto B708645;
case 0x708648:c.instructions+=8;goto B708648;
case 0x70864b:c.instructions+=7;goto B70864b;
case 0x70864c:c.instructions+=6;goto B70864c;
case 0x70864f:c.instructions+=5;goto B70864f;
case 0x708652:c.instructions+=4;goto B708652;
case 0x708653:c.instructions+=3;goto B708653;
case 0x708656:c.instructions+=2;goto B708656;
case 0x708659:c.instructions+=1;goto B708659;
case 0x70865a:goto L70865a;
case 0x70865d:c.instructions+=13;goto B70865d;
case 0x708660:c.instructions+=12;goto B708660;
case 0x708663:c.instructions+=11;goto B708663;
case 0x708667:c.instructions+=10;goto B708667;
case 0x70866a:c.instructions+=9;goto B70866a;
case 0x70866d:c.instructions+=8;goto B70866d;
case 0x708670:c.instructions+=7;goto B708670;
case 0x708673:c.instructions+=6;goto B708673;
case 0x708676:c.instructions+=5;goto B708676;
case 0x708679:c.instructions+=4;goto B708679;
case 0x70867c:c.instructions+=3;goto B70867c;
case 0x70867f:c.instructions+=2;goto B70867f;
case 0x708682:c.instructions+=1;goto B708682;
case 0x708689:goto L708689;
case 0x70868c:c.instructions+=22;goto B70868c;
case 0x708690:c.instructions+=21;goto B708690;
case 0x708694:c.instructions+=20;goto B708694;
case 0x708698:c.instructions+=19;goto B708698;
case 0x70869b:c.instructions+=18;goto B70869b;
case 0x70869f:c.instructions+=17;goto B70869f;
case 0x7086a2:c.instructions+=16;goto B7086a2;
case 0x7086a5:c.instructions+=15;goto B7086a5;
case 0x7086a8:c.instructions+=14;goto B7086a8;
case 0x7086ac:c.instructions+=13;goto B7086ac;
case 0x7086af:c.instructions+=12;goto B7086af;
case 0x7086b3:c.instructions+=11;goto B7086b3;
case 0x7086b6:c.instructions+=10;goto B7086b6;
case 0x7086ba:c.instructions+=9;goto B7086ba;
case 0x7086bd:c.instructions+=8;goto B7086bd;
case 0x7086bf:c.instructions+=7;goto B7086bf;
case 0x7086c2:c.instructions+=6;goto B7086c2;
case 0x7086c5:c.instructions+=5;goto B7086c5;
case 0x7086c8:c.instructions+=4;goto B7086c8;
case 0x7086cb:c.instructions+=3;goto B7086cb;
case 0x7086ce:c.instructions+=2;goto B7086ce;
case 0x7086d1:c.instructions+=1;goto B7086d1;
case 0x7086d8:goto L7086d8;
case 0x7086db:c.instructions+=8;goto B7086db;
case 0x7086df:c.instructions+=7;goto B7086df;
case 0x7086e2:c.instructions+=6;goto B7086e2;
case 0x7086e4:c.instructions+=5;goto B7086e4;
case 0x7086e7:c.instructions+=4;goto B7086e7;
case 0x7086ea:c.instructions+=3;goto B7086ea;
case 0x7086ed:c.instructions+=2;goto B7086ed;
case 0x7086f1:c.instructions+=1;goto B7086f1;
case 0x7086f3:goto L7086f3;
case 0x7086fa:goto L7086fa;
case 0x7086fd:c.instructions+=8;goto B7086fd;
case 0x708701:c.instructions+=7;goto B708701;
case 0x708704:c.instructions+=6;goto B708704;
case 0x708706:c.instructions+=5;goto B708706;
case 0x708709:c.instructions+=4;goto B708709;
case 0x70870c:c.instructions+=3;goto B70870c;
case 0x70870f:c.instructions+=2;goto B70870f;
case 0x708713:c.instructions+=1;goto B708713;
case 0x708715:goto L708715;
case 0x708718:c.instructions+=26;goto B708718;
case 0x70871b:c.instructions+=25;goto B70871b;
case 0x70871d:c.instructions+=24;goto B70871d;
case 0x70871f:c.instructions+=23;goto B70871f;
case 0x708722:c.instructions+=22;goto B708722;
case 0x708725:c.instructions+=21;goto B708725;
case 0x708728:c.instructions+=20;goto B708728;
case 0x70872b:c.instructions+=19;goto B70872b;
case 0x70872d:c.instructions+=18;goto B70872d;
case 0x70872f:c.instructions+=17;goto B70872f;
case 0x708732:c.instructions+=16;goto B708732;
case 0x708735:c.instructions+=15;goto B708735;
case 0x708738:c.instructions+=14;goto B708738;
case 0x70873b:c.instructions+=13;goto B70873b;
case 0x70873e:c.instructions+=12;goto B70873e;
case 0x708741:c.instructions+=11;goto B708741;
case 0x708744:c.instructions+=10;goto B708744;
case 0x708746:c.instructions+=9;goto B708746;
case 0x708749:c.instructions+=8;goto B708749;
case 0x70874c:c.instructions+=7;goto B70874c;
case 0x70874f:c.instructions+=6;goto B70874f;
case 0x708753:c.instructions+=5;goto B708753;
case 0x708756:c.instructions+=4;goto B708756;
case 0x708758:c.instructions+=3;goto B708758;
case 0x70875b:c.instructions+=2;goto B70875b;
case 0x70875e:c.instructions+=1;goto B70875e;
case 0x708764:goto L708764;
case 0x708766:c.instructions+=1;goto B708766;
case 0x70876c:goto L70876c;
case 0x70876f:c.instructions+=3;goto B70876f;
case 0x708771:c.instructions+=2;goto B708771;
case 0x708774:c.instructions+=1;goto B708774;
case 0x70877a:goto L70877a;
case 0x70877c:c.instructions+=3;goto B70877c;
case 0x70877f:c.instructions+=2;goto B70877f;
case 0x708782:c.instructions+=1;goto B708782;
case 0x708788:goto L708788;
case 0x70878c:c.instructions+=4;goto B70878c;
case 0x708790:c.instructions+=3;goto B708790;
case 0x708792:c.instructions+=2;goto B708792;
case 0x708794:c.instructions+=1;goto B708794;
case 0x708796:goto L708796;
case 0x708798:c.instructions+=1;goto B708798;
case 0x70879a:goto L70879a;
case 0x70879e:c.instructions+=1;goto B70879e;
case 0x7087a0:goto L7087a0;
case 0x7087a3:c.instructions+=1;goto B7087a3;
case 0x7087a5:goto L7087a5;
case 0x7087a9:c.instructions+=1;goto B7087a9;
case 0x7087ab:goto L7087ab;
case 0x7087af:goto L7087af;
case 0x7087b3:c.instructions+=5;goto B7087b3;
case 0x7087b6:c.instructions+=4;goto B7087b6;
case 0x7087ba:c.instructions+=3;goto B7087ba;
case 0x7087bc:c.instructions+=2;goto B7087bc;
case 0x7087be:c.instructions+=1;goto B7087be;
case 0x7087c0:goto L7087c0;
case 0x7087c2:c.instructions+=1;goto B7087c2;
case 0x7087c4:goto L7087c4;
case 0x7087c8:c.instructions+=1;goto B7087c8;
case 0x7087ca:goto L7087ca;
case 0x7087cd:c.instructions+=1;goto B7087cd;
case 0x7087cf:goto L7087cf;
case 0x7087d3:c.instructions+=1;goto B7087d3;
case 0x7087d5:goto L7087d5;
case 0x7087d9:goto L7087d9;
case 0x7087dc:c.instructions+=83;goto B7087dc;
case 0x7087df:c.instructions+=82;goto B7087df;
case 0x7087e2:c.instructions+=81;goto B7087e2;
case 0x7087e5:c.instructions+=80;goto B7087e5;
case 0x7087e8:c.instructions+=79;goto B7087e8;
case 0x7087eb:c.instructions+=78;goto B7087eb;
case 0x7087ef:c.instructions+=77;goto B7087ef;
case 0x7087f1:c.instructions+=76;goto B7087f1;
case 0x7087f3:c.instructions+=75;goto B7087f3;
case 0x7087f5:c.instructions+=74;goto B7087f5;
case 0x7087f8:c.instructions+=73;goto B7087f8;
case 0x7087fb:c.instructions+=72;goto B7087fb;
case 0x7087fe:c.instructions+=71;goto B7087fe;
case 0x708801:c.instructions+=70;goto B708801;
case 0x708804:c.instructions+=69;goto B708804;
case 0x708806:c.instructions+=68;goto B708806;
case 0x708809:c.instructions+=67;goto B708809;
case 0x70880b:c.instructions+=66;goto B70880b;
case 0x70880d:c.instructions+=65;goto B70880d;
case 0x708810:c.instructions+=64;goto B708810;
case 0x708813:c.instructions+=63;goto B708813;
case 0x708816:c.instructions+=62;goto B708816;
case 0x708818:c.instructions+=61;goto B708818;
case 0x70881b:c.instructions+=60;goto B70881b;
case 0x70881e:c.instructions+=59;goto B70881e;
case 0x708820:c.instructions+=58;goto B708820;
case 0x708823:c.instructions+=57;goto B708823;
case 0x708825:c.instructions+=56;goto B708825;
case 0x708827:c.instructions+=55;goto B708827;
case 0x70882a:c.instructions+=54;goto B70882a;
case 0x70882d:c.instructions+=53;goto B70882d;
case 0x708830:c.instructions+=52;goto B708830;
case 0x708833:c.instructions+=51;goto B708833;
case 0x708836:c.instructions+=50;goto B708836;
case 0x708839:c.instructions+=49;goto B708839;
case 0x70883b:c.instructions+=48;goto B70883b;
case 0x70883e:c.instructions+=47;goto B70883e;
case 0x708840:c.instructions+=46;goto B708840;
case 0x708843:c.instructions+=45;goto B708843;
case 0x708846:c.instructions+=44;goto B708846;
case 0x708849:c.instructions+=43;goto B708849;
case 0x70884c:c.instructions+=42;goto B70884c;
case 0x70884f:c.instructions+=41;goto B70884f;
case 0x708852:c.instructions+=40;goto B708852;
case 0x708855:c.instructions+=39;goto B708855;
case 0x708858:c.instructions+=38;goto B708858;
case 0x70885a:c.instructions+=37;goto B70885a;
case 0x70885d:c.instructions+=36;goto B70885d;
case 0x70885f:c.instructions+=35;goto B70885f;
case 0x708861:c.instructions+=34;goto B708861;
case 0x708864:c.instructions+=33;goto B708864;
case 0x708867:c.instructions+=32;goto B708867;
case 0x70886a:c.instructions+=31;goto B70886a;
case 0x70886d:c.instructions+=30;goto B70886d;
case 0x708870:c.instructions+=29;goto B708870;
case 0x708873:c.instructions+=28;goto B708873;
case 0x708876:c.instructions+=27;goto B708876;
case 0x708879:c.instructions+=26;goto B708879;
case 0x70887b:c.instructions+=25;goto B70887b;
case 0x70887e:c.instructions+=24;goto B70887e;
case 0x708880:c.instructions+=23;goto B708880;
case 0x708882:c.instructions+=22;goto B708882;
case 0x708885:c.instructions+=21;goto B708885;
case 0x708888:c.instructions+=20;goto B708888;
case 0x70888b:c.instructions+=19;goto B70888b;
case 0x70888e:c.instructions+=18;goto B70888e;
case 0x708891:c.instructions+=17;goto B708891;
case 0x708894:c.instructions+=16;goto B708894;
case 0x708896:c.instructions+=15;goto B708896;
case 0x708899:c.instructions+=14;goto B708899;
case 0x70889b:c.instructions+=13;goto B70889b;
case 0x70889d:c.instructions+=12;goto B70889d;
case 0x70889f:c.instructions+=11;goto B70889f;
case 0x7088a2:c.instructions+=10;goto B7088a2;
case 0x7088a5:c.instructions+=9;goto B7088a5;
case 0x7088a8:c.instructions+=8;goto B7088a8;
case 0x7088ab:c.instructions+=7;goto B7088ab;
case 0x7088ad:c.instructions+=6;goto B7088ad;
case 0x7088b0:c.instructions+=5;goto B7088b0;
case 0x7088b2:c.instructions+=4;goto B7088b2;
case 0x7088b5:c.instructions+=3;goto B7088b5;
case 0x7088b7:c.instructions+=2;goto B7088b7;
case 0x7088ba:c.instructions+=1;goto B7088ba;
case 0x7088bd:goto L7088bd;
case 0x7088c0:c.instructions+=3;goto B7088c0;
case 0x7088c3:c.instructions+=2;goto B7088c3;
case 0x7088c6:c.instructions+=1;goto B7088c6;
case 0x7088cc:goto L7088cc;
case 0x7088cf:c.instructions+=5;goto B7088cf;
case 0x7088d2:c.instructions+=4;goto B7088d2;
case 0x7088d6:c.instructions+=3;goto B7088d6;
case 0x7088da:c.instructions+=2;goto B7088da;
case 0x7088dd:c.instructions+=1;goto B7088dd;
case 0x7088e3:goto L7088e3;
case 0x7088e4:c.instructions+=2;goto B7088e4;
case 0x7088e5:c.instructions+=1;goto B7088e5;
case 0x7088e6:goto L7088e6;
case 0x7088e7:c.instructions+=1;goto B7088e7;
case 0x7088e8:goto L7088e8;
case 0x7088e9:c.instructions+=18;goto B7088e9;
case 0x7088eb:c.instructions+=17;goto B7088eb;
case 0x7088f1:c.instructions+=16;goto B7088f1;
case 0x7088f4:c.instructions+=15;goto B7088f4;
case 0x7088f5:c.instructions+=14;goto B7088f5;
case 0x7088f8:c.instructions+=13;goto B7088f8;
case 0x7088f9:c.instructions+=12;goto B7088f9;
case 0x7088fc:c.instructions+=11;goto B7088fc;
case 0x7088fe:c.instructions+=10;goto B7088fe;
case 0x708900:c.instructions+=9;goto B708900;
case 0x708903:c.instructions+=8;goto B708903;
case 0x708906:c.instructions+=7;goto B708906;
case 0x708908:c.instructions+=6;goto B708908;
case 0x708909:c.instructions+=5;goto B708909;
case 0x70890c:c.instructions+=4;goto B70890c;
case 0x70890f:c.instructions+=3;goto B70890f;
case 0x708912:c.instructions+=2;goto B708912;
case 0x708915:c.instructions+=1;goto B708915;
case 0x70891b:goto L70891b;
case 0x70891e:c.instructions+=33;goto B70891e;
case 0x708921:c.instructions+=32;goto B708921;
case 0x708924:c.instructions+=31;goto B708924;
case 0x708927:c.instructions+=30;goto B708927;
case 0x70892a:c.instructions+=29;goto B70892a;
case 0x70892c:c.instructions+=28;goto B70892c;
case 0x70892f:c.instructions+=27;goto B70892f;
case 0x708932:c.instructions+=26;goto B708932;
case 0x708935:c.instructions+=25;goto B708935;
case 0x708938:c.instructions+=24;goto B708938;
case 0x70893b:c.instructions+=23;goto B70893b;
case 0x70893e:c.instructions+=22;goto B70893e;
case 0x708941:c.instructions+=21;goto B708941;
case 0x708944:c.instructions+=20;goto B708944;
case 0x708947:c.instructions+=19;goto B708947;
case 0x70894a:c.instructions+=18;goto B70894a;
case 0x70894d:c.instructions+=17;goto B70894d;
case 0x708950:c.instructions+=16;goto B708950;
case 0x708956:c.instructions+=15;goto B708956;
case 0x70895c:c.instructions+=14;goto B70895c;
case 0x70895f:c.instructions+=13;goto B70895f;
case 0x708962:c.instructions+=12;goto B708962;
case 0x708965:c.instructions+=11;goto B708965;
case 0x708968:c.instructions+=10;goto B708968;
case 0x70896b:c.instructions+=9;goto B70896b;
case 0x70896e:c.instructions+=8;goto B70896e;
case 0x708971:c.instructions+=7;goto B708971;
case 0x708974:c.instructions+=6;goto B708974;
case 0x708977:c.instructions+=5;goto B708977;
case 0x708979:c.instructions+=4;goto B708979;
case 0x70897b:c.instructions+=3;goto B70897b;
case 0x70897d:c.instructions+=2;goto B70897d;
case 0x70897f:c.instructions+=1;goto B70897f;
case 0x708982:goto L708982;
case 0x708985:c.instructions+=16;goto B708985;
case 0x708988:c.instructions+=15;goto B708988;
case 0x70898b:c.instructions+=14;goto B70898b;
case 0x70898e:c.instructions+=13;goto B70898e;
case 0x708991:c.instructions+=12;goto B708991;
case 0x708994:c.instructions+=11;goto B708994;
case 0x708997:c.instructions+=10;goto B708997;
case 0x70899a:c.instructions+=9;goto B70899a;
case 0x70899d:c.instructions+=8;goto B70899d;
case 0x7089a0:c.instructions+=7;goto B7089a0;
case 0x7089a3:c.instructions+=6;goto B7089a3;
case 0x7089a6:c.instructions+=5;goto B7089a6;
case 0x7089ac:c.instructions+=4;goto B7089ac;
case 0x7089af:c.instructions+=3;goto B7089af;
case 0x7089b1:c.instructions+=2;goto B7089b1;
case 0x7089b4:c.instructions+=1;goto B7089b4;
case 0x7089be:goto L7089be;
case 0x7089c1:c.instructions+=34;goto B7089c1;
case 0x7089c5:c.instructions+=33;goto B7089c5;
case 0x7089c8:c.instructions+=32;goto B7089c8;
case 0x7089cb:c.instructions+=31;goto B7089cb;
case 0x7089cf:c.instructions+=30;goto B7089cf;
case 0x7089d2:c.instructions+=29;goto B7089d2;
case 0x7089d5:c.instructions+=28;goto B7089d5;
case 0x7089d8:c.instructions+=27;goto B7089d8;
case 0x7089dc:c.instructions+=26;goto B7089dc;
case 0x7089df:c.instructions+=25;goto B7089df;
case 0x7089e2:c.instructions+=24;goto B7089e2;
case 0x7089e5:c.instructions+=23;goto B7089e5;
case 0x7089e8:c.instructions+=22;goto B7089e8;
case 0x7089eb:c.instructions+=21;goto B7089eb;
case 0x7089ee:c.instructions+=20;goto B7089ee;
case 0x7089f0:c.instructions+=19;goto B7089f0;
case 0x7089f3:c.instructions+=18;goto B7089f3;
case 0x7089f6:c.instructions+=17;goto B7089f6;
case 0x7089f8:c.instructions+=16;goto B7089f8;
case 0x7089fe:c.instructions+=15;goto B7089fe;
case 0x708a01:c.instructions+=14;goto B708a01;
case 0x708a04:c.instructions+=13;goto B708a04;
case 0x708a07:c.instructions+=12;goto B708a07;
case 0x708a0b:c.instructions+=11;goto B708a0b;
case 0x708a0e:c.instructions+=10;goto B708a0e;
case 0x708a11:c.instructions+=9;goto B708a11;
case 0x708a14:c.instructions+=8;goto B708a14;
case 0x708a17:c.instructions+=7;goto B708a17;
case 0x708a19:c.instructions+=6;goto B708a19;
case 0x708a1c:c.instructions+=5;goto B708a1c;
case 0x708a1f:c.instructions+=4;goto B708a1f;
case 0x708a22:c.instructions+=3;goto B708a22;
case 0x708a25:c.instructions+=2;goto B708a25;
case 0x708a28:c.instructions+=1;goto B708a28;
case 0x708a2f:goto L708a2f;
case 0x708a32:c.instructions+=8;goto B708a32;
case 0x708a36:c.instructions+=7;goto B708a36;
case 0x708a39:c.instructions+=6;goto B708a39;
case 0x708a3b:c.instructions+=5;goto B708a3b;
case 0x708a3e:c.instructions+=4;goto B708a3e;
case 0x708a41:c.instructions+=3;goto B708a41;
case 0x708a44:c.instructions+=2;goto B708a44;
case 0x708a48:c.instructions+=1;goto B708a48;
case 0x708a4a:goto L708a4a;
case 0x708a51:goto L708a51;
case 0x708a54:c.instructions+=8;goto B708a54;
case 0x708a58:c.instructions+=7;goto B708a58;
case 0x708a5b:c.instructions+=6;goto B708a5b;
case 0x708a5d:c.instructions+=5;goto B708a5d;
case 0x708a60:c.instructions+=4;goto B708a60;
case 0x708a63:c.instructions+=3;goto B708a63;
case 0x708a66:c.instructions+=2;goto B708a66;
case 0x708a6a:c.instructions+=1;goto B708a6a;
case 0x708a6c:goto L708a6c;
case 0x708a6f:c.instructions+=26;goto B708a6f;
case 0x708a72:c.instructions+=25;goto B708a72;
case 0x708a74:c.instructions+=24;goto B708a74;
case 0x708a76:c.instructions+=23;goto B708a76;
case 0x708a79:c.instructions+=22;goto B708a79;
case 0x708a7c:c.instructions+=21;goto B708a7c;
case 0x708a7f:c.instructions+=20;goto B708a7f;
case 0x708a82:c.instructions+=19;goto B708a82;
case 0x708a84:c.instructions+=18;goto B708a84;
case 0x708a86:c.instructions+=17;goto B708a86;
case 0x708a89:c.instructions+=16;goto B708a89;
case 0x708a8c:c.instructions+=15;goto B708a8c;
case 0x708a8f:c.instructions+=14;goto B708a8f;
case 0x708a92:c.instructions+=13;goto B708a92;
case 0x708a95:c.instructions+=12;goto B708a95;
case 0x708a98:c.instructions+=11;goto B708a98;
case 0x708a9b:c.instructions+=10;goto B708a9b;
case 0x708a9d:c.instructions+=9;goto B708a9d;
case 0x708aa0:c.instructions+=8;goto B708aa0;
case 0x708aa3:c.instructions+=7;goto B708aa3;
case 0x708aa6:c.instructions+=6;goto B708aa6;
case 0x708aa8:c.instructions+=5;goto B708aa8;
case 0x708aab:c.instructions+=4;goto B708aab;
case 0x708aad:c.instructions+=3;goto B708aad;
case 0x708ab3:c.instructions+=2;goto B708ab3;
case 0x708ab6:c.instructions+=1;goto B708ab6;
case 0x708abc:goto L708abc;
case 0x708abe:c.instructions+=1;goto B708abe;
case 0x708ac4:goto L708ac4;
case 0x708ac7:c.instructions+=3;goto B708ac7;
case 0x708aca:c.instructions+=2;goto B708aca;
case 0x708acd:c.instructions+=1;goto B708acd;
case 0x708ad3:goto L708ad3;
case 0x708ad6:c.instructions+=3;goto B708ad6;
case 0x708ad9:c.instructions+=2;goto B708ad9;
case 0x708adc:c.instructions+=1;goto B708adc;
case 0x708ae2:goto L708ae2;
case 0x708ae8:c.instructions+=6;goto B708ae8;
case 0x708aec:c.instructions+=5;goto B708aec;
case 0x708aef:c.instructions+=4;goto B708aef;
case 0x708af1:c.instructions+=3;goto B708af1;
case 0x708af3:c.instructions+=2;goto B708af3;
case 0x708af6:c.instructions+=1;goto B708af6;
case 0x708af8:goto L708af8;
case 0x708afa:c.instructions+=1;goto B708afa;
case 0x708afc:goto L708afc;
case 0x708aff:c.instructions+=1;goto B708aff;
case 0x708b01:goto L708b01;
case 0x708b04:c.instructions+=2;goto B708b04;
case 0x708b07:c.instructions+=1;goto B708b07;
case 0x708b09:goto L708b09;
case 0x708b0c:goto L708b0c;
case 0x708b0f:c.instructions+=9;goto B708b0f;
case 0x708b12:c.instructions+=8;goto B708b12;
case 0x708b15:c.instructions+=7;goto B708b15;
case 0x708b18:c.instructions+=6;goto B708b18;
case 0x708b1b:c.instructions+=5;goto B708b1b;
case 0x708b1e:c.instructions+=4;goto B708b1e;
case 0x708b20:c.instructions+=3;goto B708b20;
case 0x708b22:c.instructions+=2;goto B708b22;
case 0x708b25:c.instructions+=1;goto B708b25;
case 0x708b27:goto L708b27;
case 0x708b29:c.instructions+=1;goto B708b29;
case 0x708b2c:goto L708b2c;
case 0x708b2f:c.instructions+=2;goto B708b2f;
case 0x708b32:c.instructions+=1;goto B708b32;
case 0x708b34:goto L708b34;
case 0x708b37:goto L708b37;
case 0x708b3a:c.instructions+=93;goto B708b3a;
case 0x708b3d:c.instructions+=92;goto B708b3d;
case 0x708b40:c.instructions+=91;goto B708b40;
case 0x708b43:c.instructions+=90;goto B708b43;
case 0x708b45:c.instructions+=89;goto B708b45;
case 0x708b48:c.instructions+=88;goto B708b48;
case 0x708b4b:c.instructions+=87;goto B708b4b;
case 0x708b4e:c.instructions+=86;goto B708b4e;
case 0x708b52:c.instructions+=85;goto B708b52;
case 0x708b54:c.instructions+=84;goto B708b54;
case 0x708b56:c.instructions+=83;goto B708b56;
case 0x708b59:c.instructions+=82;goto B708b59;
case 0x708b5c:c.instructions+=81;goto B708b5c;
case 0x708b5f:c.instructions+=80;goto B708b5f;
case 0x708b62:c.instructions+=79;goto B708b62;
case 0x708b65:c.instructions+=78;goto B708b65;
case 0x708b68:c.instructions+=77;goto B708b68;
case 0x708b6b:c.instructions+=76;goto B708b6b;
case 0x708b6d:c.instructions+=75;goto B708b6d;
case 0x708b70:c.instructions+=74;goto B708b70;
case 0x708b72:c.instructions+=73;goto B708b72;
case 0x708b74:c.instructions+=72;goto B708b74;
case 0x708b77:c.instructions+=71;goto B708b77;
case 0x708b7a:c.instructions+=70;goto B708b7a;
case 0x708b7d:c.instructions+=69;goto B708b7d;
case 0x708b7f:c.instructions+=68;goto B708b7f;
case 0x708b82:c.instructions+=67;goto B708b82;
case 0x708b85:c.instructions+=66;goto B708b85;
case 0x708b87:c.instructions+=65;goto B708b87;
case 0x708b8a:c.instructions+=64;goto B708b8a;
case 0x708b8c:c.instructions+=63;goto B708b8c;
case 0x708b8e:c.instructions+=62;goto B708b8e;
case 0x708b91:c.instructions+=61;goto B708b91;
case 0x708b94:c.instructions+=60;goto B708b94;
case 0x708b97:c.instructions+=59;goto B708b97;
case 0x708b9a:c.instructions+=58;goto B708b9a;
case 0x708b9d:c.instructions+=57;goto B708b9d;
case 0x708ba0:c.instructions+=56;goto B708ba0;
case 0x708ba3:c.instructions+=55;goto B708ba3;
case 0x708ba5:c.instructions+=54;goto B708ba5;
case 0x708ba8:c.instructions+=53;goto B708ba8;
case 0x708baa:c.instructions+=52;goto B708baa;
case 0x708bac:c.instructions+=51;goto B708bac;
case 0x708baf:c.instructions+=50;goto B708baf;
case 0x708bb2:c.instructions+=49;goto B708bb2;
case 0x708bb5:c.instructions+=48;goto B708bb5;
case 0x708bb8:c.instructions+=47;goto B708bb8;
case 0x708bbb:c.instructions+=46;goto B708bbb;
case 0x708bbe:c.instructions+=45;goto B708bbe;
case 0x708bc1:c.instructions+=44;goto B708bc1;
case 0x708bc4:c.instructions+=43;goto B708bc4;
case 0x708bc7:c.instructions+=42;goto B708bc7;
case 0x708bc9:c.instructions+=41;goto B708bc9;
case 0x708bcc:c.instructions+=40;goto B708bcc;
case 0x708bce:c.instructions+=39;goto B708bce;
case 0x708bd0:c.instructions+=38;goto B708bd0;
case 0x708bd3:c.instructions+=37;goto B708bd3;
case 0x708bd6:c.instructions+=36;goto B708bd6;
case 0x708bd9:c.instructions+=35;goto B708bd9;
case 0x708bdc:c.instructions+=34;goto B708bdc;
case 0x708bdf:c.instructions+=33;goto B708bdf;
case 0x708be2:c.instructions+=32;goto B708be2;
case 0x708be5:c.instructions+=31;goto B708be5;
case 0x708be8:c.instructions+=30;goto B708be8;
case 0x708beb:c.instructions+=29;goto B708beb;
case 0x708bed:c.instructions+=28;goto B708bed;
case 0x708bf0:c.instructions+=27;goto B708bf0;
case 0x708bf2:c.instructions+=26;goto B708bf2;
case 0x708bf4:c.instructions+=25;goto B708bf4;
case 0x708bf7:c.instructions+=24;goto B708bf7;
case 0x708bfa:c.instructions+=23;goto B708bfa;
case 0x708bfd:c.instructions+=22;goto B708bfd;
case 0x708c00:c.instructions+=21;goto B708c00;
case 0x708c03:c.instructions+=20;goto B708c03;
case 0x708c06:c.instructions+=19;goto B708c06;
case 0x708c08:c.instructions+=18;goto B708c08;
case 0x708c0b:c.instructions+=17;goto B708c0b;
case 0x708c0d:c.instructions+=16;goto B708c0d;
case 0x708c0f:c.instructions+=15;goto B708c0f;
case 0x708c12:c.instructions+=14;goto B708c12;
case 0x708c15:c.instructions+=13;goto B708c15;
case 0x708c18:c.instructions+=12;goto B708c18;
case 0x708c1a:c.instructions+=11;goto B708c1a;
case 0x708c1d:c.instructions+=10;goto B708c1d;
case 0x708c1f:c.instructions+=9;goto B708c1f;
case 0x708c22:c.instructions+=8;goto B708c22;
case 0x708c25:c.instructions+=7;goto B708c25;
case 0x708c27:c.instructions+=6;goto B708c27;
case 0x708c2a:c.instructions+=5;goto B708c2a;
case 0x708c2d:c.instructions+=4;goto B708c2d;
case 0x708c30:c.instructions+=3;goto B708c30;
case 0x708c33:c.instructions+=2;goto B708c33;
case 0x708c36:c.instructions+=1;goto B708c36;
case 0x708c38:goto L708c38;
case 0x708c3a:c.instructions+=28;goto B708c3a;
case 0x708c3d:c.instructions+=27;goto B708c3d;
case 0x708c40:c.instructions+=26;goto B708c40;
case 0x708c43:c.instructions+=25;goto B708c43;
case 0x708c46:c.instructions+=24;goto B708c46;
case 0x708c49:c.instructions+=23;goto B708c49;
case 0x708c4b:c.instructions+=22;goto B708c4b;
case 0x708c4e:c.instructions+=21;goto B708c4e;
case 0x708c51:c.instructions+=20;goto B708c51;
case 0x708c54:c.instructions+=19;goto B708c54;
case 0x708c57:c.instructions+=18;goto B708c57;
case 0x708c5a:c.instructions+=17;goto B708c5a;
case 0x708c5d:c.instructions+=16;goto B708c5d;
case 0x708c60:c.instructions+=15;goto B708c60;
case 0x708c63:c.instructions+=14;goto B708c63;
case 0x708c66:c.instructions+=13;goto B708c66;
case 0x708c68:c.instructions+=12;goto B708c68;
case 0x708c6b:c.instructions+=11;goto B708c6b;
case 0x708c6e:c.instructions+=10;goto B708c6e;
case 0x708c74:c.instructions+=9;goto B708c74;
case 0x708c76:c.instructions+=8;goto B708c76;
case 0x708c79:c.instructions+=7;goto B708c79;
case 0x708c7c:c.instructions+=6;goto B708c7c;
case 0x708c7f:c.instructions+=5;goto B708c7f;
case 0x708c82:c.instructions+=4;goto B708c82;
case 0x708c84:c.instructions+=3;goto B708c84;
case 0x708c87:c.instructions+=2;goto B708c87;
case 0x708c89:c.instructions+=1;goto B708c89;
case 0x708c8c:goto L708c8c;
case 0x708c8f:c.instructions+=7;goto B708c8f;
case 0x708c92:c.instructions+=6;goto B708c92;
case 0x708c93:c.instructions+=5;goto B708c93;
case 0x708c96:c.instructions+=4;goto B708c96;
case 0x708c97:c.instructions+=3;goto B708c97;
case 0x708c98:c.instructions+=2;goto B708c98;
case 0x708c9e:c.instructions+=1;goto B708c9e;
case 0x708ca4:goto L708ca4;
case 0x708ca7:c.instructions+=5;goto B708ca7;
case 0x708caa:c.instructions+=4;goto B708caa;
case 0x708cae:c.instructions+=3;goto B708cae;
case 0x708cb2:c.instructions+=2;goto B708cb2;
case 0x708cb5:c.instructions+=1;goto B708cb5;
case 0x708cbb:goto L708cbb;
case 0x708cbe:goto L708cbe;
case 0x708cc1:c.instructions+=4;goto B708cc1;
case 0x708cc3:c.instructions+=3;goto B708cc3;
case 0x708cc6:c.instructions+=2;goto B708cc6;
case 0x708ccc:c.instructions+=1;goto B708ccc;
case 0x708cd2:goto L708cd2;
case 0x708cd4:c.instructions+=6;goto B708cd4;
case 0x708cd7:c.instructions+=5;goto B708cd7;
case 0x708cd9:c.instructions+=4;goto B708cd9;
case 0x708cdc:c.instructions+=3;goto B708cdc;
case 0x708cde:c.instructions+=2;goto B708cde;
case 0x708ce1:c.instructions+=1;goto B708ce1;
case 0x708ce4:goto L708ce4;
case 0x708ce7:c.instructions+=14;goto B708ce7;
case 0x708cea:c.instructions+=13;goto B708cea;
case 0x708ced:c.instructions+=12;goto B708ced;
case 0x708cf1:c.instructions+=11;goto B708cf1;
case 0x708cf4:c.instructions+=10;goto B708cf4;
case 0x708cf7:c.instructions+=9;goto B708cf7;
case 0x708cfa:c.instructions+=8;goto B708cfa;
case 0x708cfd:c.instructions+=7;goto B708cfd;
case 0x708d00:c.instructions+=6;goto B708d00;
case 0x708d03:c.instructions+=5;goto B708d03;
case 0x708d06:c.instructions+=4;goto B708d06;
case 0x708d0c:c.instructions+=3;goto B708d0c;
case 0x708d0f:c.instructions+=2;goto B708d0f;
case 0x708d12:c.instructions+=1;goto B708d12;
case 0x708d19:goto L708d19;
case 0x708d1d:c.instructions+=21;goto B708d1d;
case 0x708d21:c.instructions+=20;goto B708d21;
case 0x708d25:c.instructions+=19;goto B708d25;
case 0x708d28:c.instructions+=18;goto B708d28;
case 0x708d2b:c.instructions+=17;goto B708d2b;
case 0x708d2e:c.instructions+=16;goto B708d2e;
case 0x708d32:c.instructions+=15;goto B708d32;
case 0x708d35:c.instructions+=14;goto B708d35;
case 0x708d39:c.instructions+=13;goto B708d39;
case 0x708d3c:c.instructions+=12;goto B708d3c;
case 0x708d40:c.instructions+=11;goto B708d40;
case 0x708d43:c.instructions+=10;goto B708d43;
case 0x708d47:c.instructions+=9;goto B708d47;
case 0x708d4a:c.instructions+=8;goto B708d4a;
case 0x708d4c:c.instructions+=7;goto B708d4c;
case 0x708d4f:c.instructions+=6;goto B708d4f;
case 0x708d52:c.instructions+=5;goto B708d52;
case 0x708d55:c.instructions+=4;goto B708d55;
case 0x708d58:c.instructions+=3;goto B708d58;
case 0x708d5b:c.instructions+=2;goto B708d5b;
case 0x708d5e:c.instructions+=1;goto B708d5e;
case 0x708d65:goto L708d65;
case 0x708d68:c.instructions+=8;goto B708d68;
case 0x708d6c:c.instructions+=7;goto B708d6c;
case 0x708d6f:c.instructions+=6;goto B708d6f;
case 0x708d71:c.instructions+=5;goto B708d71;
case 0x708d74:c.instructions+=4;goto B708d74;
case 0x708d77:c.instructions+=3;goto B708d77;
case 0x708d7a:c.instructions+=2;goto B708d7a;
case 0x708d7e:c.instructions+=1;goto B708d7e;
case 0x708d80:goto L708d80;
case 0x708d87:goto L708d87;
case 0x708d8a:c.instructions+=8;goto B708d8a;
case 0x708d8e:c.instructions+=7;goto B708d8e;
case 0x708d91:c.instructions+=6;goto B708d91;
case 0x708d93:c.instructions+=5;goto B708d93;
case 0x708d96:c.instructions+=4;goto B708d96;
case 0x708d99:c.instructions+=3;goto B708d99;
case 0x708d9c:c.instructions+=2;goto B708d9c;
case 0x708da0:c.instructions+=1;goto B708da0;
case 0x708da2:goto L708da2;
case 0x708da5:c.instructions+=26;goto B708da5;
case 0x708da8:c.instructions+=25;goto B708da8;
case 0x708daa:c.instructions+=24;goto B708daa;
case 0x708dac:c.instructions+=23;goto B708dac;
case 0x708daf:c.instructions+=22;goto B708daf;
case 0x708db2:c.instructions+=21;goto B708db2;
case 0x708db5:c.instructions+=20;goto B708db5;
case 0x708db8:c.instructions+=19;goto B708db8;
case 0x708dba:c.instructions+=18;goto B708dba;
case 0x708dbc:c.instructions+=17;goto B708dbc;
case 0x708dbf:c.instructions+=16;goto B708dbf;
case 0x708dc2:c.instructions+=15;goto B708dc2;
case 0x708dc5:c.instructions+=14;goto B708dc5;
case 0x708dc8:c.instructions+=13;goto B708dc8;
case 0x708dcb:c.instructions+=12;goto B708dcb;
case 0x708dce:c.instructions+=11;goto B708dce;
case 0x708dd1:c.instructions+=10;goto B708dd1;
case 0x708dd3:c.instructions+=9;goto B708dd3;
case 0x708dd6:c.instructions+=8;goto B708dd6;
case 0x708dd9:c.instructions+=7;goto B708dd9;
case 0x708ddc:c.instructions+=6;goto B708ddc;
case 0x708de0:c.instructions+=5;goto B708de0;
case 0x708de3:c.instructions+=4;goto B708de3;
case 0x708de5:c.instructions+=3;goto B708de5;
case 0x708deb:c.instructions+=2;goto B708deb;
case 0x708dee:c.instructions+=1;goto B708dee;
case 0x708df4:goto L708df4;
case 0x708df6:c.instructions+=1;goto B708df6;
case 0x708dfc:goto L708dfc;
case 0x708dff:c.instructions+=3;goto B708dff;
case 0x708e01:c.instructions+=2;goto B708e01;
case 0x708e04:c.instructions+=1;goto B708e04;
case 0x708e0a:goto L708e0a;
case 0x708e0c:c.instructions+=3;goto B708e0c;
case 0x708e0f:c.instructions+=2;goto B708e0f;
case 0x708e12:c.instructions+=1;goto B708e12;
case 0x708e18:goto L708e18;
case 0x708e1c:c.instructions+=4;goto B708e1c;
case 0x708e20:c.instructions+=3;goto B708e20;
case 0x708e22:c.instructions+=2;goto B708e22;
case 0x708e24:c.instructions+=1;goto B708e24;
case 0x708e26:goto L708e26;
case 0x708e28:c.instructions+=1;goto B708e28;
case 0x708e2a:goto L708e2a;
case 0x708e2e:c.instructions+=1;goto B708e2e;
case 0x708e30:goto L708e30;
case 0x708e33:c.instructions+=1;goto B708e33;
case 0x708e35:goto L708e35;
case 0x708e39:c.instructions+=1;goto B708e39;
case 0x708e3b:goto L708e3b;
case 0x708e3f:goto L708e3f;
case 0x708e43:c.instructions+=5;goto B708e43;
case 0x708e46:c.instructions+=4;goto B708e46;
case 0x708e4a:c.instructions+=3;goto B708e4a;
case 0x708e4c:c.instructions+=2;goto B708e4c;
case 0x708e4e:c.instructions+=1;goto B708e4e;
case 0x708e50:goto L708e50;
case 0x708e52:c.instructions+=1;goto B708e52;
case 0x708e54:goto L708e54;
case 0x708e58:c.instructions+=1;goto B708e58;
case 0x708e5a:goto L708e5a;
case 0x708e5d:c.instructions+=1;goto B708e5d;
case 0x708e5f:goto L708e5f;
case 0x708e63:c.instructions+=1;goto B708e63;
case 0x708e65:goto L708e65;
case 0x708e69:goto L708e69;
case 0x708e6c:c.instructions+=91;goto B708e6c;
case 0x708e6f:c.instructions+=90;goto B708e6f;
case 0x708e72:c.instructions+=89;goto B708e72;
case 0x708e75:c.instructions+=88;goto B708e75;
case 0x708e78:c.instructions+=87;goto B708e78;
case 0x708e7b:c.instructions+=86;goto B708e7b;
case 0x708e7f:c.instructions+=85;goto B708e7f;
case 0x708e82:c.instructions+=84;goto B708e82;
case 0x708e84:c.instructions+=83;goto B708e84;
case 0x708e86:c.instructions+=82;goto B708e86;
case 0x708e89:c.instructions+=81;goto B708e89;
case 0x708e8c:c.instructions+=80;goto B708e8c;
case 0x708e8e:c.instructions+=79;goto B708e8e;
case 0x708e91:c.instructions+=78;goto B708e91;
case 0x708e93:c.instructions+=77;goto B708e93;
case 0x708e96:c.instructions+=76;goto B708e96;
case 0x708e98:c.instructions+=75;goto B708e98;
case 0x708e9b:c.instructions+=74;goto B708e9b;
case 0x708e9d:c.instructions+=73;goto B708e9d;
case 0x708ea0:c.instructions+=72;goto B708ea0;
case 0x708ea2:c.instructions+=71;goto B708ea2;
case 0x708ea5:c.instructions+=70;goto B708ea5;
case 0x708ea8:c.instructions+=69;goto B708ea8;
case 0x708eab:c.instructions+=68;goto B708eab;
case 0x708eae:c.instructions+=67;goto B708eae;
case 0x708eb0:c.instructions+=66;goto B708eb0;
case 0x708eb3:c.instructions+=65;goto B708eb3;
case 0x708eb5:c.instructions+=64;goto B708eb5;
case 0x708eb8:c.instructions+=63;goto B708eb8;
case 0x708eba:c.instructions+=62;goto B708eba;
case 0x708ebd:c.instructions+=61;goto B708ebd;
case 0x708ebf:c.instructions+=60;goto B708ebf;
case 0x708ec2:c.instructions+=59;goto B708ec2;
case 0x708ec5:c.instructions+=58;goto B708ec5;
case 0x708ec8:c.instructions+=57;goto B708ec8;
case 0x708ecb:c.instructions+=56;goto B708ecb;
case 0x708ecd:c.instructions+=55;goto B708ecd;
case 0x708ed0:c.instructions+=54;goto B708ed0;
case 0x708ed2:c.instructions+=53;goto B708ed2;
case 0x708ed5:c.instructions+=52;goto B708ed5;
case 0x708ed7:c.instructions+=51;goto B708ed7;
case 0x708ed9:c.instructions+=50;goto B708ed9;
case 0x708edc:c.instructions+=49;goto B708edc;
case 0x708edf:c.instructions+=48;goto B708edf;
case 0x708ee2:c.instructions+=47;goto B708ee2;
case 0x708ee5:c.instructions+=46;goto B708ee5;
case 0x708ee8:c.instructions+=45;goto B708ee8;
case 0x708eea:c.instructions+=44;goto B708eea;
case 0x708eed:c.instructions+=43;goto B708eed;
case 0x708ef0:c.instructions+=42;goto B708ef0;
case 0x708ef2:c.instructions+=41;goto B708ef2;
case 0x708ef5:c.instructions+=40;goto B708ef5;
case 0x708ef7:c.instructions+=39;goto B708ef7;
case 0x708efa:c.instructions+=38;goto B708efa;
case 0x708efc:c.instructions+=37;goto B708efc;
case 0x708eff:c.instructions+=36;goto B708eff;
case 0x708f02:c.instructions+=35;goto B708f02;
case 0x708f05:c.instructions+=34;goto B708f05;
case 0x708f08:c.instructions+=33;goto B708f08;
case 0x708f0b:c.instructions+=32;goto B708f0b;
case 0x708f0e:c.instructions+=31;goto B708f0e;
case 0x708f10:c.instructions+=30;goto B708f10;
case 0x708f13:c.instructions+=29;goto B708f13;
case 0x708f16:c.instructions+=28;goto B708f16;
case 0x708f18:c.instructions+=27;goto B708f18;
case 0x708f1b:c.instructions+=26;goto B708f1b;
case 0x708f1d:c.instructions+=25;goto B708f1d;
case 0x708f1f:c.instructions+=24;goto B708f1f;
case 0x708f21:c.instructions+=23;goto B708f21;
case 0x708f24:c.instructions+=22;goto B708f24;
case 0x708f27:c.instructions+=21;goto B708f27;
case 0x708f2a:c.instructions+=20;goto B708f2a;
case 0x708f2d:c.instructions+=19;goto B708f2d;
case 0x708f2f:c.instructions+=18;goto B708f2f;
case 0x708f32:c.instructions+=17;goto B708f32;
case 0x708f35:c.instructions+=16;goto B708f35;
case 0x708f37:c.instructions+=15;goto B708f37;
case 0x708f39:c.instructions+=14;goto B708f39;
case 0x708f3c:c.instructions+=13;goto B708f3c;
case 0x708f3e:c.instructions+=12;goto B708f3e;
case 0x708f40:c.instructions+=11;goto B708f40;
case 0x708f43:c.instructions+=10;goto B708f43;
case 0x708f46:c.instructions+=9;goto B708f46;
case 0x708f48:c.instructions+=8;goto B708f48;
case 0x708f4b:c.instructions+=7;goto B708f4b;
case 0x708f4e:c.instructions+=6;goto B708f4e;
case 0x708f50:c.instructions+=5;goto B708f50;
case 0x708f53:c.instructions+=4;goto B708f53;
case 0x708f56:c.instructions+=3;goto B708f56;
case 0x708f58:c.instructions+=2;goto B708f58;
case 0x708f5b:c.instructions+=1;goto B708f5b;
case 0x708f5e:goto L708f5e;
case 0x708f61:c.instructions+=3;goto B708f61;
case 0x708f63:c.instructions+=2;goto B708f63;
case 0x708f66:c.instructions+=1;goto B708f66;
case 0x708f6c:goto L708f6c;
case 0x708f6f:c.instructions+=4;goto B708f6f;
case 0x708f72:c.instructions+=3;goto B708f72;
case 0x708f76:c.instructions+=2;goto B708f76;
case 0x708f7c:c.instructions+=1;goto B708f7c;
case 0x708f82:goto L708f82;
case 0x708f83:c.instructions+=4;goto B708f83;
case 0x708f84:c.instructions+=3;goto B708f84;
case 0x708f85:c.instructions+=2;goto B708f85;
case 0x708f86:c.instructions+=1;goto B708f86;
case 0x708f87:goto L708f87;
case 0x708f88:c.instructions+=9;goto B708f88;
case 0x708f8a:c.instructions+=8;goto B708f8a;
case 0x708f8d:c.instructions+=7;goto B708f8d;
case 0x708f90:c.instructions+=6;goto B708f90;
case 0x708f93:c.instructions+=5;goto B708f93;
case 0x708f97:c.instructions+=4;goto B708f97;
case 0x708f99:c.instructions+=3;goto B708f99;
case 0x708f9c:c.instructions+=2;goto B708f9c;
case 0x708f9f:c.instructions+=1;goto B708f9f;
case 0x708fa5:goto L708fa5;
case 0x708fa8:c.instructions+=29;goto B708fa8;
case 0x708fab:c.instructions+=28;goto B708fab;
case 0x708fae:c.instructions+=27;goto B708fae;
case 0x708fb1:c.instructions+=26;goto B708fb1;
case 0x708fb2:c.instructions+=25;goto B708fb2;
case 0x708fb5:c.instructions+=24;goto B708fb5;
case 0x708fb8:c.instructions+=23;goto B708fb8;
case 0x708fb9:c.instructions+=22;goto B708fb9;
case 0x708fbc:c.instructions+=21;goto B708fbc;
case 0x708fbf:c.instructions+=20;goto B708fbf;
case 0x708fc0:c.instructions+=19;goto B708fc0;
case 0x708fc3:c.instructions+=18;goto B708fc3;
case 0x708fc6:c.instructions+=17;goto B708fc6;
case 0x708fc9:c.instructions+=16;goto B708fc9;
case 0x708fcd:c.instructions+=15;goto B708fcd;
case 0x708fd0:c.instructions+=14;goto B708fd0;
case 0x708fd3:c.instructions+=13;goto B708fd3;
case 0x708fd6:c.instructions+=12;goto B708fd6;
case 0x708fd9:c.instructions+=11;goto B708fd9;
case 0x708fdc:c.instructions+=10;goto B708fdc;
case 0x708fdf:c.instructions+=9;goto B708fdf;
case 0x708fe2:c.instructions+=8;goto B708fe2;
case 0x708fe5:c.instructions+=7;goto B708fe5;
case 0x708fe8:c.instructions+=6;goto B708fe8;
case 0x708fef:c.instructions+=5;goto B708fef;
case 0x708ff2:c.instructions+=4;goto B708ff2;
case 0x708ff6:c.instructions+=3;goto B708ff6;
case 0x708ffa:c.instructions+=2;goto B708ffa;
case 0x708ffd:c.instructions+=1;goto B708ffd;
default:missing_instruction(c.pc);}
B708000:L708000:{c.instructions+=4;NFSU2_TR(0x708000);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B708003:{NFSU2_TR(0x708003);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708004:{NFSU2_TR(0x708004);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70800a:{NFSU2_TR(0x70800a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70800full));
TAIL_STATIC(0x704b8bu,704);
}
B70800f:L70800f:{c.instructions+=4;NFSU2_TR(0x70800f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B708010:{NFSU2_TR(0x708010);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708016:{NFSU2_TR(0x708016);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B708018:{NFSU2_TR(0x708018);
if(r1(R+518)){{goto L708082;}}
}
B70801a:L70801a:{c.instructions+=3;NFSU2_TR(0x70801a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70801d:{NFSU2_TR(0x70801d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B708020:{NFSU2_TR(0x708020);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70802a;}}
}
B708022:L708022:{c.instructions+=3;NFSU2_TR(0x708022);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708025:{NFSU2_TR(0x708025);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B708028:{NFSU2_TR(0x708028);
if(r1(R+518)){{goto L708082;}}
}
B70802a:L70802a:{c.instructions+=10;NFSU2_TR(0x70802a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708030:{NFSU2_TR(0x708030);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708036:{NFSU2_TR(0x708036);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708038:{NFSU2_TR(0x708038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B708039:{NFSU2_TR(0x708039);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B70803b:{NFSU2_TR(0x70803b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70803d:{NFSU2_TR(0x70803d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B708040:{NFSU2_TR(0x708040);
__builtin_memmove((R+8),(R+4),4);
}
B708042:{NFSU2_TR(0x708042);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B708045:{NFSU2_TR(0x708045);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B708047:L708047:{c.instructions+=1;NFSU2_TR(0x708047);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L708049;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x708047u);}goto L708047;}
}
B708049:L708049:{c.instructions+=2;NFSU2_TR(0x708049);
__builtin_memmove((R+4),(R+8),4);
}
B70804b:{NFSU2_TR(0x70804b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B70804e:L70804e:{c.instructions+=1;NFSU2_TR(0x70804e);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L708050;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70804eu);}goto L70804e;}
}
B708050:L708050:{c.instructions+=12;NFSU2_TR(0x708050);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708056:{NFSU2_TR(0x708056);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70805c:{NFSU2_TR(0x70805c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708062:{NFSU2_TR(0x708062);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B708064:{NFSU2_TR(0x708064);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B708066:{NFSU2_TR(0x708066);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B708069:{NFSU2_TR(0x708069);
__builtin_memmove((R+4),(R+8),4);
}
B70806b:{NFSU2_TR(0x70806b);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B70806d:{NFSU2_TR(0x70806d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B70806f:{NFSU2_TR(0x70806f);
__builtin_memmove((R+8),(R+4),4);
}
B708071:{NFSU2_TR(0x708071);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B708074:{NFSU2_TR(0x708074);
w4(R+0,u32(0x80808080ull));
}
B708079:L708079:{c.instructions+=1;NFSU2_TR(0x708079);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L70807b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x708079u);}goto L708079;}
}
B70807b:L70807b:{c.instructions+=2;NFSU2_TR(0x70807b);
__builtin_memmove((R+4),(R+8),4);
}
B70807d:{NFSU2_TR(0x70807d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B708080:L708080:{c.instructions+=1;NFSU2_TR(0x708080);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L708082;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x708080u);}goto L708080;}
}
B708082:L708082:{c.instructions+=2;NFSU2_TR(0x708082);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B708089:{NFSU2_TR(0x708089);
if(r1(R+518)){{goto L708193;}}
}
B70808f:L70808f:{c.instructions+=5;NFSU2_TR(0x70808f);
w4(R+12,u32(0x80ull));
}
B708094:{NFSU2_TR(0x708094);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708095:{NFSU2_TR(0x708095);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70809b:{NFSU2_TR(0x70809b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70809c:{NFSU2_TR(0x70809c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7080a1ull));
TAIL_STATIC(0x70d801u,70d);
}
B7080a1:L7080a1:{c.instructions+=4;NFSU2_TR(0x7080a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7080a3:{NFSU2_TR(0x7080a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7080a4:{NFSU2_TR(0x7080a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7080a5:{NFSU2_TR(0x7080a5);
if(r1(R+518)){{goto L7080d5;}}
}
B7080a7:L7080a7:{c.instructions+=4;NFSU2_TR(0x7080a7);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7080a9:{NFSU2_TR(0x7080a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7080aa:{NFSU2_TR(0x7080aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x692ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7080b1:{NFSU2_TR(0x7080b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7080b6ull));
TAIL_STATIC(0x707c18u,707);
}
B7080b6:L7080b6:{c.instructions+=5;NFSU2_TR(0x7080b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7080b9:{NFSU2_TR(0x7080b9);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7080bb:{NFSU2_TR(0x7080bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7080bc:{NFSU2_TR(0x7080bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x694ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7080c2:{NFSU2_TR(0x7080c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7080c7ull));
TAIL_STATIC(0x707c18u,707);
}
B7080c7:L7080c7:{c.instructions+=3;NFSU2_TR(0x7080c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7080ca:{NFSU2_TR(0x7080ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x693ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7080d0:{NFSU2_TR(0x7080d0);
{goto L708193;}
}
B7080d5:L7080d5:{c.instructions+=3;NFSU2_TR(0x7080d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7080d6:{NFSU2_TR(0x7080d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7080d7:{NFSU2_TR(0x7080d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7080dcull));
TAIL_STATIC(0x70d801u,70d);
}
B7080dc:L7080dc:{c.instructions+=6;NFSU2_TR(0x7080dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7080de:{NFSU2_TR(0x7080de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7080df:{NFSU2_TR(0x7080df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B7080e2:{NFSU2_TR(0x7080e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7080e3:{NFSU2_TR(0x7080e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x692ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7080e9:{NFSU2_TR(0x7080e9);
{goto L708193;}
}
B7080ee:L7080ee:{c.instructions+=2;NFSU2_TR(0x7080ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7080f0:{NFSU2_TR(0x7080f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70810e;}}
}
B7080f2:L7080f2:{c.instructions+=2;NFSU2_TR(0x7080f2);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+0))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7080f8:{NFSU2_TR(0x7080f8);
if(r1(R+518)){{goto L70810e;}}
}
B7080fa:L7080fa:{c.instructions+=6;NFSU2_TR(0x7080fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7080fc:{NFSU2_TR(0x7080fc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7080fd:{NFSU2_TR(0x7080fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B708103:{NFSU2_TR(0x708103);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708104:{NFSU2_TR(0x708104);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708105:{NFSU2_TR(0x708105);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70810aull));
TAIL_STATIC(0x707bcau,707);
}
B70810a:L70810a:{c.instructions+=3;NFSU2_TR(0x70810a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70810b:{NFSU2_TR(0x70810b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70810c:{NFSU2_TR(0x70810c);
{goto L708131;}
}
B70810e:L70810e:{c.instructions+=6;NFSU2_TR(0x70810e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B708110:{NFSU2_TR(0x708110);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B708113:{NFSU2_TR(0x708113);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B708119:{NFSU2_TR(0x708119);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70811a:{NFSU2_TR(0x70811a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70811b:{NFSU2_TR(0x70811b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x708120ull));
TAIL_STATIC(0x707bcau,707);
}
B708120:L708120:{c.instructions+=3;NFSU2_TR(0x708120);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708122:{NFSU2_TR(0x708122);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708123:{NFSU2_TR(0x708123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x708128ull));
TAIL_STATIC(0x707c7au,707);
}
B708128:L708128:{c.instructions+=2;NFSU2_TR(0x708128);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70812b:{NFSU2_TR(0x70812b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x451cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708131:L708131:{c.instructions+=4;NFSU2_TR(0x708131);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B708137:{NFSU2_TR(0x708137);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70813c:{NFSU2_TR(0x70813c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70813d:{NFSU2_TR(0x70813d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x708142ull));
TAIL_STATIC(0x70d801u,70d);
}
B708142:L708142:{c.instructions+=5;NFSU2_TR(0x708142);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B708149:{NFSU2_TR(0x708149);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70814a:{NFSU2_TR(0x70814a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70814b:{NFSU2_TR(0x70814b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x698ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708151:{NFSU2_TR(0x708151);
if(r1(R+518)){{goto L708193;}}
}
B708153:L708153:{c.instructions+=4;NFSU2_TR(0x708153);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B708159:{NFSU2_TR(0x708159);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70815e:{NFSU2_TR(0x70815e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70815f:{NFSU2_TR(0x70815f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x708164ull));
TAIL_STATIC(0x70d801u,70d);
}
B708164:L708164:{c.instructions+=5;NFSU2_TR(0x708164);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B708166:{NFSU2_TR(0x708166);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B708167:{NFSU2_TR(0x708167);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B708168:{NFSU2_TR(0x708168);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4534ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70816e:{NFSU2_TR(0x70816e);
if(r1(R+518)){{goto L708193;}}
}
B708170:L708170:{c.instructions+=4;NFSU2_TR(0x708170);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B708176:{NFSU2_TR(0x708176);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70817b:{NFSU2_TR(0x70817b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70817c:{NFSU2_TR(0x70817c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x708181ull));
TAIL_STATIC(0x70d801u,70d);
}
B708181:L708181:{c.instructions+=6;NFSU2_TR(0x708181);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B708182:{NFSU2_TR(0x708182);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B708183:{NFSU2_TR(0x708183);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4534ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B708189:{NFSU2_TR(0x708189);
w1(R+4,shl<u8>(r1(R+4),u64(u32(0x1ull))));
}
B70818b:{NFSU2_TR(0x70818b);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+4))));
}
B70818d:{NFSU2_TR(0x70818d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4534ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B708193:L708193:{c.instructions+=4;NFSU2_TR(0x708193);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B708199:{NFSU2_TR(0x708199);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70819e:{NFSU2_TR(0x70819e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70819f:{NFSU2_TR(0x70819f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7081a4ull));
TAIL_STATIC(0x70d801u,70d);
}
B7081a4:L7081a4:{c.instructions+=13;NFSU2_TR(0x7081a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B7081a8:{NFSU2_TR(0x7081a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4520ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7081ae:{NFSU2_TR(0x7081ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((R+0),(U+0),4);
}
B7081b4:{NFSU2_TR(0x7081b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7081b6:{NFSU2_TR(0x7081b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B7081b8:{NFSU2_TR(0x7081b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7081ba:{NFSU2_TR(0x7081ba);
u8 U[16];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B7081be:{NFSU2_TR(0x7081be);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7081c1:{NFSU2_TR(0x7081c1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7081c3:{NFSU2_TR(0x7081c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7081c9:{NFSU2_TR(0x7081c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7081ca:{NFSU2_TR(0x7081ca);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B7081cc:{NFSU2_TR(0x7081cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7081d1ull));
TAIL_STATIC(0x7039d9u,703);
}
B7081d1:L7081d1:{c.instructions+=7;NFSU2_TR(0x7081d1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7081d3:{NFSU2_TR(0x7081d3);
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7081d6:{NFSU2_TR(0x7081d6);
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
B7081d7:{NFSU2_TR(0x7081d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7081d8:{NFSU2_TR(0x7081d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7081d9:{NFSU2_TR(0x7081d9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7081da:{NFSU2_TR(0x7081da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7081db:L7081db:{c.instructions+=8;NFSU2_TR(0x7081db);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7081dc:{NFSU2_TR(0x7081dc);
__builtin_memmove((R+20),(R+16),4);
}
B7081de:{NFSU2_TR(0x7081de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7081df:{NFSU2_TR(0x7081df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7081e2:{NFSU2_TR(0x7081e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7081e3:{NFSU2_TR(0x7081e3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7081e5:{NFSU2_TR(0x7081e5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7081e6:{NFSU2_TR(0x7081e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7081ebull));
TAIL_STATIC(0x707cf8u,707);
}
B7081eb:L7081eb:{c.instructions+=2;NFSU2_TR(0x7081eb);
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
B7081ed:{NFSU2_TR(0x7081ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7081f1;}}
}
B7081ef:L7081ef:{c.instructions+=1;NFSU2_TR(0x7081ef);
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
B7081f1:L7081f1:{c.instructions+=5;NFSU2_TR(0x7081f1);
__builtin_memmove((R+0),(R+28),4);
}
B7081f3:{NFSU2_TR(0x7081f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7081f4:{NFSU2_TR(0x7081f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7081f5:{NFSU2_TR(0x7081f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7081f6:{NFSU2_TR(0x7081f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7081f7:L7081f7:{c.instructions+=7;NFSU2_TR(0x7081f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7081f8:{NFSU2_TR(0x7081f8);
__builtin_memmove((R+20),(R+16),4);
}
B7081fa:{NFSU2_TR(0x7081fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7081fd:{NFSU2_TR(0x7081fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708200:{NFSU2_TR(0x708200);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1acull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B708206:{NFSU2_TR(0x708206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B708207:{NFSU2_TR(0x708207);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B708208:L708208:{c.instructions+=6;NFSU2_TR(0x708208);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708209:{NFSU2_TR(0x708209);
__builtin_memmove((R+20),(R+16),4);
}
B70820b:{NFSU2_TR(0x70820b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70820e:{NFSU2_TR(0x70820e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B708214:{NFSU2_TR(0x708214);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B708215:{NFSU2_TR(0x708215);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B708216:L708216:{c.instructions+=10;NFSU2_TR(0x708216);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708217:{NFSU2_TR(0x708217);
__builtin_memmove((R+20),(R+16),4);
}
B708219:{NFSU2_TR(0x708219);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B70821c:{NFSU2_TR(0x70821c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B70821f:{NFSU2_TR(0x70821f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708220:{NFSU2_TR(0x708220);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B708223:{NFSU2_TR(0x708223);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708224:{NFSU2_TR(0x708224);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B708227:{NFSU2_TR(0x708227);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708228:{NFSU2_TR(0x708228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70822dull));
TAIL_STATIC(0x70cf98u,70c);
}
B70822d:L70822d:{c.instructions+=3;NFSU2_TR(0x70822d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B708230:{NFSU2_TR(0x708230);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B708234:{NFSU2_TR(0x708234);
if(r1(R+518)){{goto L70834f;}}
}
B70823a:L70823a:{c.instructions+=1;NFSU2_TR(0x70823a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70823full));
TAIL_STATIC(0x719296u,719);
}
B70823f:L70823f:{c.instructions+=29;NFSU2_TR(0x70823f);
s4(0x8b9ef4,u32(0x71ae6eull));
}
B708249:{NFSU2_TR(0x708249);
s4(0x8b9f14,u32(0x71b095ull));
}
B708253:{NFSU2_TR(0x708253);
s4(0x8b9ec0,u32(0x71ae37ull));
}
B70825d:{NFSU2_TR(0x70825d);
s4(0x8b9ebc,u32(0x70f7dfull));
}
B708267:{NFSU2_TR(0x708267);
s4(0x8b9ef8,u32(0x71ab2eull));
}
B708271:{NFSU2_TR(0x708271);
s4(0x8b9f18,u32(0x71a831ull));
}
B70827b:{NFSU2_TR(0x70827b);
s4(0x8b9ee0,u32(0x717410ull));
}
B708285:{NFSU2_TR(0x708285);
s4(0x8b9eec,u32(0x718172ull));
}
B70828f:{NFSU2_TR(0x70828f);
s4(0x8b9f0c,u32(0x711f96ull));
}
B708299:{NFSU2_TR(0x708299);
s4(0x8b9edc,u32(0x71a3e7ull));
}
B7082a3:{NFSU2_TR(0x7082a3);
s4(0x8b9f1c,u32(0x71a689ull));
}
B7082ad:{NFSU2_TR(0x7082ad);
s4(0x8b9ed8,u32(0x71a326ull));
}
B7082b7:{NFSU2_TR(0x7082b7);
s4(0x8b9f08,u32(0x719be6ull));
}
B7082c1:{NFSU2_TR(0x7082c1);
s4(0x8b9eb4,u32(0x719cb0ull));
}
B7082cb:{NFSU2_TR(0x7082cb);
s4(0x8b9ec8,u32(0x71a2b1ull));
}
B7082d5:{NFSU2_TR(0x7082d5);
s4(0x8b9efc,u32(0x71a307ull));
}
B7082df:{NFSU2_TR(0x7082df);
s4(0x8b9f00,u32(0x71a01eull));
}
B7082e9:{NFSU2_TR(0x7082e9);
s4(0x8b9ee8,u32(0x71a18cull));
}
B7082f3:{NFSU2_TR(0x7082f3);
s4(0x8b9ed4,u32(0x719d98ull));
}
B7082fd:{NFSU2_TR(0x7082fd);
s4(0x8b9ed0,u32(0x719efeull));
}
B708307:{NFSU2_TR(0x708307);
s4(0x8b9f10,u32(0x7192caull));
}
B708311:{NFSU2_TR(0x708311);
s4(0x8b9ecc,u32(0x719537ull));
}
B70831b:{NFSU2_TR(0x70831b);
s4(0x8b9ee4,u32(0x719697ull));
}
B708325:{NFSU2_TR(0x708325);
s4(0x8b9ef0,u32(0x719a05ull));
}
B70832f:{NFSU2_TR(0x70832f);
s4(0x8b9ec4,u32(0x7191d6ull));
}
B708339:{NFSU2_TR(0x708339);
s4(0x8b9f04,u32(0x715d38ull));
}
B708343:{NFSU2_TR(0x708343);
s4(0x8b9eb8,u32(0x718ff7ull));
}
B70834d:{NFSU2_TR(0x70834d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70834e:{NFSU2_TR(0x70834e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70834f:L70834f:{c.instructions+=2;NFSU2_TR(0x70834f);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B708353:{NFSU2_TR(0x708353);
if(r1(R+518)){{goto L70846e;}}
}
B708359:L708359:{c.instructions+=1;NFSU2_TR(0x708359);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70835eull));
TAIL_STATIC(0x719296u,719);
}
B70835e:L70835e:{c.instructions+=29;NFSU2_TR(0x70835e);
s4(0x8b9ef4,u32(0x71ae6eull));
}
B708368:{NFSU2_TR(0x708368);
s4(0x8b9f14,u32(0x71b095ull));
}
B708372:{NFSU2_TR(0x708372);
s4(0x8b9ec0,u32(0x71ae37ull));
}
B70837c:{NFSU2_TR(0x70837c);
s4(0x8b9ebc,u32(0x70f7dfull));
}
B708386:{NFSU2_TR(0x708386);
s4(0x8b9ef8,u32(0x7169dfull));
}
B708390:{NFSU2_TR(0x708390);
s4(0x8b9f18,u32(0x715fbaull));
}
B70839a:{NFSU2_TR(0x70839a);
s4(0x8b9ee0,u32(0x70f816ull));
}
B7083a4:{NFSU2_TR(0x7083a4);
s4(0x8b9eec,u32(0x710abdull));
}
B7083ae:{NFSU2_TR(0x7083ae);
s4(0x8b9f0c,u32(0x711f96ull));
}
B7083b8:{NFSU2_TR(0x7083b8);
s4(0x8b9edc,u32(0x71a3e7ull));
}
B7083c2:{NFSU2_TR(0x7083c2);
s4(0x8b9f1c,u32(0x71a689ull));
}
B7083cc:{NFSU2_TR(0x7083cc);
s4(0x8b9ed8,u32(0x71a326ull));
}
B7083d6:{NFSU2_TR(0x7083d6);
s4(0x8b9f08,u32(0x719be6ull));
}
B7083e0:{NFSU2_TR(0x7083e0);
s4(0x8b9eb4,u32(0x719cb0ull));
}
B7083ea:{NFSU2_TR(0x7083ea);
s4(0x8b9ec8,u32(0x71a2b1ull));
}
B7083f4:{NFSU2_TR(0x7083f4);
s4(0x8b9efc,u32(0x71a307ull));
}
B7083fe:{NFSU2_TR(0x7083fe);
s4(0x8b9f00,u32(0x71a01eull));
}
B708408:{NFSU2_TR(0x708408);
s4(0x8b9ee8,u32(0x71a18cull));
}
B708412:{NFSU2_TR(0x708412);
s4(0x8b9ed4,u32(0x719d98ull));
}
B70841c:{NFSU2_TR(0x70841c);
s4(0x8b9ed0,u32(0x719efeull));
}
B708426:{NFSU2_TR(0x708426);
s4(0x8b9f10,u32(0x7192caull));
}
B708430:{NFSU2_TR(0x708430);
s4(0x8b9ecc,u32(0x719537ull));
}
B70843a:{NFSU2_TR(0x70843a);
s4(0x8b9ee4,u32(0x719697ull));
}
B708444:{NFSU2_TR(0x708444);
s4(0x8b9ef0,u32(0x719a05ull));
}
B70844e:{NFSU2_TR(0x70844e);
s4(0x8b9ec4,u32(0x715ed9ull));
}
B708458:{NFSU2_TR(0x708458);
s4(0x8b9f04,u32(0x715e0eull));
}
B708462:{NFSU2_TR(0x708462);
s4(0x8b9eb8,u32(0x712f3cull));
}
B70846c:{NFSU2_TR(0x70846c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70846d:{NFSU2_TR(0x70846d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70846e:L70846e:{c.instructions+=29;NFSU2_TR(0x70846e);
s4(0x8b9ef4,u32(0x70a7b5ull));
}
B708478:{NFSU2_TR(0x708478);
s4(0x8b9f14,u32(0x70a806ull));
}
B708482:{NFSU2_TR(0x708482);
s4(0x8b9ec0,u32(0x70a711ull));
}
B70848c:{NFSU2_TR(0x70848c);
s4(0x8b9ebc,u32(0x70857eull));
}
B708496:{NFSU2_TR(0x708496);
s4(0x8b9ef8,u32(0x70bbc2ull));
}
B7084a0:{NFSU2_TR(0x7084a0);
s4(0x8b9f18,u32(0x70b5dbull));
}
B7084aa:{NFSU2_TR(0x7084aa);
s4(0x8b9ee0,u32(0x7088e8ull));
}
B7084b4:{NFSU2_TR(0x7084b4);
s4(0x8b9eec,u32(0x7094c9ull));
}
B7084be:{NFSU2_TR(0x7084be);
s4(0x8b9f0c,u32(0x709c4dull));
}
B7084c8:{NFSU2_TR(0x7084c8);
s4(0x8b9edc,u32(0x70cbc4ull));
}
B7084d2:{NFSU2_TR(0x7084d2);
s4(0x8b9f1c,u32(0x70cc77ull));
}
B7084dc:{NFSU2_TR(0x7084dc);
s4(0x8b9ed8,u32(0x705803ull));
}
B7084e6:{NFSU2_TR(0x7084e6);
s4(0x8b9ec8,u32(0x705839ull));
}
B7084f0:{NFSU2_TR(0x7084f0);
s4(0x8b9efc,u32(0x705869ull));
}
B7084fa:{NFSU2_TR(0x7084fa);
s4(0x8b9f08,u32(0x7054eaull));
}
B708504:{NFSU2_TR(0x708504);
s4(0x8b9f00,u32(0x7055e8ull));
}
B70850e:{NFSU2_TR(0x70850e);
s4(0x8b9ee8,u32(0x705694ull));
}
B708518:{NFSU2_TR(0x708518);
s4(0x8b9eb4,u32(0x7051fdull));
}
B708522:{NFSU2_TR(0x708522);
s4(0x8b9ed4,u32(0x7052e7ull));
}
B70852c:{NFSU2_TR(0x70852c);
s4(0x8b9ed0,u32(0x70538aull));
}
B708536:{NFSU2_TR(0x708536);
s4(0x8b9f10,u32(0x70a86eull));
}
B708540:{NFSU2_TR(0x708540);
s4(0x8b9ecc,u32(0x70a8d9ull));
}
B70854a:{NFSU2_TR(0x70854a);
s4(0x8b9ee4,u32(0x70a958ull));
}
B708554:{NFSU2_TR(0x708554);
s4(0x8b9ef0,u32(0x70a9c3ull));
}
B70855e:{NFSU2_TR(0x70855e);
s4(0x8b9ec4,u32(0x70f733ull));
}
B708568:{NFSU2_TR(0x708568);
s4(0x8b9f04,u32(0x70f686ull));
}
B708572:{NFSU2_TR(0x708572);
s4(0x8b9eb8,u32(0x7033d4ull));
}
B70857c:{NFSU2_TR(0x70857c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70857d:{NFSU2_TR(0x70857d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70857e:L70857e:{c.instructions+=14;NFSU2_TR(0x70857e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70857f:{NFSU2_TR(0x70857f);
__builtin_memmove((R+20),(R+16),4);
}
B708581:{NFSU2_TR(0x708581);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708582:{NFSU2_TR(0x708582);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708583:{NFSU2_TR(0x708583);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708586:{NFSU2_TR(0x708586);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708587:{NFSU2_TR(0x708587);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70858a:{NFSU2_TR(0x70858a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70858b:{NFSU2_TR(0x70858b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70858e:{NFSU2_TR(0x70858e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B708590:{NFSU2_TR(0x708590);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B708593:{NFSU2_TR(0x708593);
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
B708595:{NFSU2_TR(0x708595);
w4(R+4,u32(0x200ull));
}
B70859a:{NFSU2_TR(0x70859a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7085a0:L7085a0:{c.instructions+=1;NFSU2_TR(0x7085a0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7085a2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7085a0u);}goto L7085a0;}
}
B7085a2:L7085a2:{c.instructions+=1;NFSU2_TR(0x7085a2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7085ed;}}
}
B7085a4:L7085a4:{c.instructions+=11;NFSU2_TR(0x7085a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7085a7:{NFSU2_TR(0x7085a7);
__builtin_memmove((R+28),(R+24),4);
}
B7085a9:{NFSU2_TR(0x7085a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B7085ac:{NFSU2_TR(0x7085ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7085af:{NFSU2_TR(0x7085af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7085b2:{NFSU2_TR(0x7085b2);
__builtin_memmove((R+0),(R+24),4);
}
B7085b4:{NFSU2_TR(0x7085b4);
__builtin_memmove((R+4),(R+8),4);
}
B7085b6:{NFSU2_TR(0x7085b6);
w4(R+0,u32(0-u32(r4(R+0))));
}
B7085b8:{NFSU2_TR(0x7085b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7085bb:{NFSU2_TR(0x7085bb);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B7085bd:{NFSU2_TR(0x7085bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7085be:L7085be:{c.instructions+=17;NFSU2_TR(0x7085be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7085c1:{NFSU2_TR(0x7085c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7085c4:{NFSU2_TR(0x7085c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7085c8:{NFSU2_TR(0x7085c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B7085ca:{NFSU2_TR(0x7085ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B7085cc:{NFSU2_TR(0x7085cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7085cf:{NFSU2_TR(0x7085cf);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B7085d1:{NFSU2_TR(0x7085d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7085d4:{NFSU2_TR(0x7085d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B7085d7:{NFSU2_TR(0x7085d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7085da:{NFSU2_TR(0x7085da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7085de:{NFSU2_TR(0x7085de);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7085df:{NFSU2_TR(0x7085df);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B7085e2:{NFSU2_TR(0x7085e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7085e5:{NFSU2_TR(0x7085e5);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B7085e8:{NFSU2_TR(0x7085e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B7085ea:{NFSU2_TR(0x7085ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7085beu);}goto L7085be;}}
}
B7085ec:L7085ec:{c.instructions+=1;NFSU2_TR(0x7085ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7085ed:L7085ed:{c.instructions+=5;NFSU2_TR(0x7085ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7085ee:{NFSU2_TR(0x7085ee);
__builtin_memmove((R+0),(R+8),4);
}
B7085f0:{NFSU2_TR(0x7085f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7085f1:{NFSU2_TR(0x7085f1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7085f2:{NFSU2_TR(0x7085f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7085f3:L7085f3:{c.instructions+=10;NFSU2_TR(0x7085f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7085f4:{NFSU2_TR(0x7085f4);
__builtin_memmove((R+20),(R+16),4);
}
B7085f6:{NFSU2_TR(0x7085f6);
__builtin_memmove((R+4),gp(0x8b9c4c),4);
}
B7085fc:{NFSU2_TR(0x7085fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7085fd:{NFSU2_TR(0x7085fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B708600:{NFSU2_TR(0x708600);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x2ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B708603:{NFSU2_TR(0x708603);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708606:{NFSU2_TR(0x708606);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B708609:{NFSU2_TR(0x708609);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70860a:{NFSU2_TR(0x70860a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L708613;}}
}
B70860c:L70860c:{c.instructions+=1;NFSU2_TR(0x70860c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x708611ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70857eu);}goto L70857e;}
}
B708611:L708611:{c.instructions+=1;NFSU2_TR(0x708611);
{goto L708619;}
}
B708613:L708613:{c.instructions+=1;NFSU2_TR(0x708613);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ebc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x708619ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B708619:L708619:{c.instructions+=6;NFSU2_TR(0x708619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70861a:{NFSU2_TR(0x70861a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70861b:{NFSU2_TR(0x70861b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70861e:{NFSU2_TR(0x70861e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70861f:{NFSU2_TR(0x70861f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B708620:{NFSU2_TR(0x708620);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B708621:L708621:{c.instructions+=10;NFSU2_TR(0x708621);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708622:{NFSU2_TR(0x708622);
__builtin_memmove((R+20),(R+16),4);
}
B708624:{NFSU2_TR(0x708624);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B708627:{NFSU2_TR(0x708627);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70862a:{NFSU2_TR(0x70862a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70862d:{NFSU2_TR(0x70862d);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B708631:{NFSU2_TR(0x708631);
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
B708633:{NFSU2_TR(0x708633);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708636:{NFSU2_TR(0x708636);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708639:{NFSU2_TR(0x708639);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7088e6;}}
}
B70863f:L70863f:{c.instructions+=11;NFSU2_TR(0x70863f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708642:{NFSU2_TR(0x708642);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708645:{NFSU2_TR(0x708645);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708648:{NFSU2_TR(0x708648);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70864b:{NFSU2_TR(0x70864b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70864c:{NFSU2_TR(0x70864c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B70864f:{NFSU2_TR(0x70864f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5ull))));
}
B708652:{NFSU2_TR(0x708652);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708653:{NFSU2_TR(0x708653);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708656:{NFSU2_TR(0x708656);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708659:{NFSU2_TR(0x708659);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70865a:L70865a:{c.instructions+=14;NFSU2_TR(0x70865a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70865d:{NFSU2_TR(0x70865d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708660:{NFSU2_TR(0x708660);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708663:{NFSU2_TR(0x708663);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B708667:{NFSU2_TR(0x708667);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70866a:{NFSU2_TR(0x70866a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B70866d:{NFSU2_TR(0x70866d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708670:{NFSU2_TR(0x708670);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B708673:{NFSU2_TR(0x708673);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708676:{NFSU2_TR(0x708676);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B708679:{NFSU2_TR(0x708679);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70867c:{NFSU2_TR(0x70867c);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B70867f:{NFSU2_TR(0x70867f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708682:{NFSU2_TR(0x708682);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B708689:L708689:{c.instructions+=23;NFSU2_TR(0x708689);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70868c:{NFSU2_TR(0x70868c);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B708690:{NFSU2_TR(0x708690);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B708694:{NFSU2_TR(0x708694);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B708698:{NFSU2_TR(0x708698);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70869b:{NFSU2_TR(0x70869b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70869f:{NFSU2_TR(0x70869f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7086a2:{NFSU2_TR(0x7086a2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+0,u32(r1(U+0)));
}
B7086a5:{NFSU2_TR(0x7086a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7086a8:{NFSU2_TR(0x7086a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7086ac:{NFSU2_TR(0x7086ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7086af:{NFSU2_TR(0x7086af);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7086b3:{NFSU2_TR(0x7086b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7086b6:{NFSU2_TR(0x7086b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7086ba:{NFSU2_TR(0x7086ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7086bd:{NFSU2_TR(0x7086bd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7086bf:{NFSU2_TR(0x7086bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7086c2:{NFSU2_TR(0x7086c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7086c5:{NFSU2_TR(0x7086c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7086c8:{NFSU2_TR(0x7086c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7086cb:{NFSU2_TR(0x7086cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7086ce:{NFSU2_TR(0x7086ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7086d1:{NFSU2_TR(0x7086d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7086d8:L7086d8:{c.instructions+=9;NFSU2_TR(0x7086d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7086db:{NFSU2_TR(0x7086db);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B7086df:{NFSU2_TR(0x7086df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7086e2:{NFSU2_TR(0x7086e2);
__builtin_memmove((R+12),(R+0),4);
}
B7086e4:{NFSU2_TR(0x7086e4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B7086e7:{NFSU2_TR(0x7086e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B7086ea:{NFSU2_TR(0x7086ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7086ed:{NFSU2_TR(0x7086ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7086f1:{NFSU2_TR(0x7086f1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7086d8u);}goto L7086d8;}}
}
B7086f3:L7086f3:{c.instructions+=1;NFSU2_TR(0x7086f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7086fa:L7086fa:{c.instructions+=9;NFSU2_TR(0x7086fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7086fd:{NFSU2_TR(0x7086fd);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B708701:{NFSU2_TR(0x708701);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B708704:{NFSU2_TR(0x708704);
__builtin_memmove((R+12),(R+0),4);
}
B708706:{NFSU2_TR(0x708706);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B708709:{NFSU2_TR(0x708709);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B70870c:{NFSU2_TR(0x70870c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70870f:{NFSU2_TR(0x70870f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x8ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B708713:{NFSU2_TR(0x708713);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7086fau);}goto L7086fa;}}
}
B708715:L708715:{c.instructions+=27;NFSU2_TR(0x708715);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708718:{NFSU2_TR(0x708718);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70871b:{NFSU2_TR(0x70871b);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70871d:{NFSU2_TR(0x70871d);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B70871f:{NFSU2_TR(0x70871f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B708722:{NFSU2_TR(0x708722);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B708725:{NFSU2_TR(0x708725);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708728:{NFSU2_TR(0x708728);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70872b:{NFSU2_TR(0x70872b);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70872d:{NFSU2_TR(0x70872d);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B70872f:{NFSU2_TR(0x70872f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B708732:{NFSU2_TR(0x708732);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B708735:{NFSU2_TR(0x708735);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708738:{NFSU2_TR(0x708738);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70873b:{NFSU2_TR(0x70873b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70873e:{NFSU2_TR(0x70873e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B708741:{NFSU2_TR(0x708741);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B708744:{NFSU2_TR(0x708744);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(R+0)),r4(U+0));
}
B708746:{NFSU2_TR(0x708746);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708749:{NFSU2_TR(0x708749);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70874c:{NFSU2_TR(0x70874c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70874f:{NFSU2_TR(0x70874f);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B708753:{NFSU2_TR(0x708753);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B708756:{NFSU2_TR(0x708756);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(R+0)),r4(U+0));
}
B708758:{NFSU2_TR(0x708758);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70875b:{NFSU2_TR(0x70875b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70875e:{NFSU2_TR(0x70875e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7088bd;}}
}
B708764:L708764:{c.instructions+=2;NFSU2_TR(0x708764);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B708766:{NFSU2_TR(0x708766);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7088bd;}}
}
B70876c:L70876c:{c.instructions+=4;NFSU2_TR(0x70876c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70876f:{NFSU2_TR(0x70876f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B708771:{NFSU2_TR(0x708771);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B708774:{NFSU2_TR(0x708774);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7088bd;}}
}
B70877a:L70877a:{c.instructions+=4;NFSU2_TR(0x70877a);
__builtin_memmove((R+0),(R+28),4);
}
B70877c:{NFSU2_TR(0x70877c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B70877f:{NFSU2_TR(0x70877f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B708782:{NFSU2_TR(0x708782);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7088bd;}}
}
B708788:L708788:{c.instructions+=5;NFSU2_TR(0x708788);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70878c:{NFSU2_TR(0x70878c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B708790:{NFSU2_TR(0x708790);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B708792:{NFSU2_TR(0x708792);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B708794:{NFSU2_TR(0x708794);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70879a;}}
}
B708796:L708796:{c.instructions+=2;NFSU2_TR(0x708796);
__builtin_memmove((R+0),(R+12),4);
}
B708798:{NFSU2_TR(0x708798);
{goto L7087a0;}
}
B70879a:L70879a:{c.instructions+=2;NFSU2_TR(0x70879a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B70879e:{NFSU2_TR(0x70879e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B7087a0:L7087a0:{c.instructions+=2;NFSU2_TR(0x7087a0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7087a3:{NFSU2_TR(0x7087a3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7087ab;}}
}
B7087a5:L7087a5:{c.instructions+=2;NFSU2_TR(0x7087a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7087a9:{NFSU2_TR(0x7087a9);
{goto L7087af;}
}
B7087ab:L7087ab:{c.instructions+=1;NFSU2_TR(0x7087ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7087af:L7087af:{c.instructions+=6;NFSU2_TR(0x7087af);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B7087b3:{NFSU2_TR(0x7087b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7087b6:{NFSU2_TR(0x7087b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7087ba:{NFSU2_TR(0x7087ba);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B7087bc:{NFSU2_TR(0x7087bc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7087be:{NFSU2_TR(0x7087be);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7087c4;}}
}
B7087c0:L7087c0:{c.instructions+=2;NFSU2_TR(0x7087c0);
__builtin_memmove((R+0),(R+12),4);
}
B7087c2:{NFSU2_TR(0x7087c2);
{goto L7087ca;}
}
B7087c4:L7087c4:{c.instructions+=2;NFSU2_TR(0x7087c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B7087c8:{NFSU2_TR(0x7087c8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B7087ca:L7087ca:{c.instructions+=2;NFSU2_TR(0x7087ca);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7087cd:{NFSU2_TR(0x7087cd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7087d5;}}
}
B7087cf:L7087cf:{c.instructions+=2;NFSU2_TR(0x7087cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7087d3:{NFSU2_TR(0x7087d3);
{goto L7087d9;}
}
B7087d5:L7087d5:{c.instructions+=1;NFSU2_TR(0x7087d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7087d9:L7087d9:{c.instructions+=84;NFSU2_TR(0x7087d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7087dc:{NFSU2_TR(0x7087dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7087df:{NFSU2_TR(0x7087df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7087e2:{NFSU2_TR(0x7087e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B7087e5:{NFSU2_TR(0x7087e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B7087e8:{NFSU2_TR(0x7087e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B7087eb:{NFSU2_TR(0x7087eb);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7087ef:{NFSU2_TR(0x7087ef);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B7087f1:{NFSU2_TR(0x7087f1);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B7087f3:{NFSU2_TR(0x7087f3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B7087f5:{NFSU2_TR(0x7087f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B7087f8:{NFSU2_TR(0x7087f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7087fb:{NFSU2_TR(0x7087fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7087fe:{NFSU2_TR(0x7087fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708801:{NFSU2_TR(0x708801);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708804:{NFSU2_TR(0x708804);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B708806:{NFSU2_TR(0x708806);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708809:{NFSU2_TR(0x708809);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B70880b:{NFSU2_TR(0x70880b);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B70880d:{NFSU2_TR(0x70880d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708810:{NFSU2_TR(0x708810);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B708813:{NFSU2_TR(0x708813);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B708816:{NFSU2_TR(0x708816);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B708818:{NFSU2_TR(0x708818);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70881b:{NFSU2_TR(0x70881b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70881e:{NFSU2_TR(0x70881e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B708820:{NFSU2_TR(0x708820);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708823:{NFSU2_TR(0x708823);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B708825:{NFSU2_TR(0x708825);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B708827:{NFSU2_TR(0x708827);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70882a:{NFSU2_TR(0x70882a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B70882d:{NFSU2_TR(0x70882d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B708830:{NFSU2_TR(0x708830);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B708833:{NFSU2_TR(0x708833);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708836:{NFSU2_TR(0x708836);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708839:{NFSU2_TR(0x708839);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B70883b:{NFSU2_TR(0x70883b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70883e:{NFSU2_TR(0x70883e);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B708840:{NFSU2_TR(0x708840);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708843:{NFSU2_TR(0x708843);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708846:{NFSU2_TR(0x708846);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B708849:{NFSU2_TR(0x708849);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B70884c:{NFSU2_TR(0x70884c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B70884f:{NFSU2_TR(0x70884f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B708852:{NFSU2_TR(0x708852);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708855:{NFSU2_TR(0x708855);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708858:{NFSU2_TR(0x708858);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B70885a:{NFSU2_TR(0x70885a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70885d:{NFSU2_TR(0x70885d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B70885f:{NFSU2_TR(0x70885f);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B708861:{NFSU2_TR(0x708861);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708864:{NFSU2_TR(0x708864);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708867:{NFSU2_TR(0x708867);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B70886a:{NFSU2_TR(0x70886a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B70886d:{NFSU2_TR(0x70886d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B708870:{NFSU2_TR(0x708870);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B708873:{NFSU2_TR(0x708873);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708876:{NFSU2_TR(0x708876);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708879:{NFSU2_TR(0x708879);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B70887b:{NFSU2_TR(0x70887b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70887e:{NFSU2_TR(0x70887e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B708880:{NFSU2_TR(0x708880);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B708882:{NFSU2_TR(0x708882);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708885:{NFSU2_TR(0x708885);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B708888:{NFSU2_TR(0x708888);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B70888b:{NFSU2_TR(0x70888b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70888e:{NFSU2_TR(0x70888e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708891:{NFSU2_TR(0x708891);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708894:{NFSU2_TR(0x708894);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B708896:{NFSU2_TR(0x708896);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708899:{NFSU2_TR(0x708899);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B70889b:{NFSU2_TR(0x70889b);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B70889d:{NFSU2_TR(0x70889d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B70889f:{NFSU2_TR(0x70889f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B7088a2:{NFSU2_TR(0x7088a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7088a5:{NFSU2_TR(0x7088a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7088a8:{NFSU2_TR(0x7088a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7088ab:{NFSU2_TR(0x7088ab);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B7088ad:{NFSU2_TR(0x7088ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B7088b0:{NFSU2_TR(0x7088b0);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B7088b2:{NFSU2_TR(0x7088b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B7088b5:{NFSU2_TR(0x7088b5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B7088b7:{NFSU2_TR(0x7088b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B7088ba:{NFSU2_TR(0x7088ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7088bd:L7088bd:{c.instructions+=4;NFSU2_TR(0x7088bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B7088c0:{NFSU2_TR(0x7088c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B7088c3:{NFSU2_TR(0x7088c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7088c6:{NFSU2_TR(0x7088c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x708689u);}goto L708689;}}
}
B7088cc:L7088cc:{c.instructions+=6;NFSU2_TR(0x7088cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7088cf:{NFSU2_TR(0x7088cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7088d2:{NFSU2_TR(0x7088d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7088d6:{NFSU2_TR(0x7088d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7088da:{NFSU2_TR(0x7088da);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
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
B7088dd:{NFSU2_TR(0x7088dd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70865au);}goto L70865a;}}
}
B7088e3:L7088e3:{c.instructions+=3;NFSU2_TR(0x7088e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7088e4:{NFSU2_TR(0x7088e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7088e5:{NFSU2_TR(0x7088e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7088e6:L7088e6:{c.instructions+=2;NFSU2_TR(0x7088e6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7088e7:{NFSU2_TR(0x7088e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7088e8:L7088e8:{c.instructions+=19;NFSU2_TR(0x7088e8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7088e9:{NFSU2_TR(0x7088e9);
__builtin_memmove((R+20),(R+16),4);
}
B7088eb:{NFSU2_TR(0x7088eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x90ull))));
}
B7088f1:{NFSU2_TR(0x7088f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7088f4:{NFSU2_TR(0x7088f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7088f5:{NFSU2_TR(0x7088f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7088f8:{NFSU2_TR(0x7088f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7088f9:{NFSU2_TR(0x7088f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7088fc:{NFSU2_TR(0x7088fc);
__builtin_memmove((R+4),(R+8),4);
}
B7088fe:{NFSU2_TR(0x7088fe);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B708900:{NFSU2_TR(0x708900);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B708903:{NFSU2_TR(0x708903);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B708906:{NFSU2_TR(0x708906);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B708908:{NFSU2_TR(0x708908);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708909:{NFSU2_TR(0x708909);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70890c:{NFSU2_TR(0x70890c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B70890f:{NFSU2_TR(0x70890f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708912:{NFSU2_TR(0x708912);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708915:{NFSU2_TR(0x708915);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L708cbe;}}
}
B70891b:L70891b:{c.instructions+=34;NFSU2_TR(0x70891b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70891e:{NFSU2_TR(0x70891e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708921:{NFSU2_TR(0x708921);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B708924:{NFSU2_TR(0x708924);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708927:{NFSU2_TR(0x708927);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B70892a:{NFSU2_TR(0x70892a);
__builtin_memmove((R+28),(R+24),4);
}
B70892c:{NFSU2_TR(0x70892c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B70892f:{NFSU2_TR(0x70892f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B708932:{NFSU2_TR(0x708932);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708935:{NFSU2_TR(0x708935);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B708938:{NFSU2_TR(0x708938);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70893b:{NFSU2_TR(0x70893b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70893e:{NFSU2_TR(0x70893e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708941:{NFSU2_TR(0x708941);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B708944:{NFSU2_TR(0x708944);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708947:{NFSU2_TR(0x708947);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B70894a:{NFSU2_TR(0x70894a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70894d:{NFSU2_TR(0x70894d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B708950:{NFSU2_TR(0x708950);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708956:{NFSU2_TR(0x708956);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B70895c:{NFSU2_TR(0x70895c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70895f:{NFSU2_TR(0x70895f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B708962:{NFSU2_TR(0x708962);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708965:{NFSU2_TR(0x708965);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B708968:{NFSU2_TR(0x708968);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70896b:{NFSU2_TR(0x70896b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B70896e:{NFSU2_TR(0x70896e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708971:{NFSU2_TR(0x708971);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708974:{NFSU2_TR(0x708974);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708977:{NFSU2_TR(0x708977);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B708979:{NFSU2_TR(0x708979);
__builtin_memmove((R+4),(R+8),4);
}
B70897b:{NFSU2_TR(0x70897b);
__builtin_memmove((R+28),(R+24),4);
}
B70897d:{NFSU2_TR(0x70897d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B70897f:{NFSU2_TR(0x70897f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B708982:L708982:{c.instructions+=17;NFSU2_TR(0x708982);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708985:{NFSU2_TR(0x708985);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B708988:{NFSU2_TR(0x708988);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70898b:{NFSU2_TR(0x70898b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70898e:{NFSU2_TR(0x70898e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708991:{NFSU2_TR(0x708991);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B708994:{NFSU2_TR(0x708994);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B708997:{NFSU2_TR(0x708997);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B70899a:{NFSU2_TR(0x70899a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70899d:{NFSU2_TR(0x70899d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B7089a0:{NFSU2_TR(0x7089a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7089a3:{NFSU2_TR(0x7089a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7089a6:{NFSU2_TR(0x7089a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7089ac:{NFSU2_TR(0x7089ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7089af:{NFSU2_TR(0x7089af);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B7089b1:{NFSU2_TR(0x7089b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7089b4:{NFSU2_TR(0x7089b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7089be:L7089be:{c.instructions+=35;NFSU2_TR(0x7089be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7089c1:{NFSU2_TR(0x7089c1);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B7089c5:{NFSU2_TR(0x7089c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7089c8:{NFSU2_TR(0x7089c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7089cb:{NFSU2_TR(0x7089cb);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B7089cf:{NFSU2_TR(0x7089cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7089d2:{NFSU2_TR(0x7089d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7089d5:{NFSU2_TR(0x7089d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7089d8:{NFSU2_TR(0x7089d8);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B7089dc:{NFSU2_TR(0x7089dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7089df:{NFSU2_TR(0x7089df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7089e2:{NFSU2_TR(0x7089e2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(r1(U+0)));
}
B7089e5:{NFSU2_TR(0x7089e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7089e8:{NFSU2_TR(0x7089e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7089eb:{NFSU2_TR(0x7089eb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+8,u32(r1(U+0)));
}
B7089ee:{NFSU2_TR(0x7089ee);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B7089f0:{NFSU2_TR(0x7089f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7089f3:{NFSU2_TR(0x7089f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7089f6:{NFSU2_TR(0x7089f6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B7089f8:{NFSU2_TR(0x7089f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7089fe:{NFSU2_TR(0x7089fe);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(r1(U+0)));
}
B708a01:{NFSU2_TR(0x708a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708a04:{NFSU2_TR(0x708a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708a07:{NFSU2_TR(0x708a07);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B708a0b:{NFSU2_TR(0x708a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708a0e:{NFSU2_TR(0x708a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708a11:{NFSU2_TR(0x708a11);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(r1(U+0)));
}
B708a14:{NFSU2_TR(0x708a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708a17:{NFSU2_TR(0x708a17);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B708a19:{NFSU2_TR(0x708a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708a1c:{NFSU2_TR(0x708a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708a1f:{NFSU2_TR(0x708a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708a22:{NFSU2_TR(0x708a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708a25:{NFSU2_TR(0x708a25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708a28:{NFSU2_TR(0x708a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B708a2f:L708a2f:{c.instructions+=9;NFSU2_TR(0x708a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708a32:{NFSU2_TR(0x708a32);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B708a36:{NFSU2_TR(0x708a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B708a39:{NFSU2_TR(0x708a39);
__builtin_memmove((R+12),(R+0),4);
}
B708a3b:{NFSU2_TR(0x708a3b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B708a3e:{NFSU2_TR(0x708a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B708a41:{NFSU2_TR(0x708a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B708a44:{NFSU2_TR(0x708a44);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B708a48:{NFSU2_TR(0x708a48);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x708a2fu);}goto L708a2f;}}
}
B708a4a:L708a4a:{c.instructions+=1;NFSU2_TR(0x708a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B708a51:L708a51:{c.instructions+=9;NFSU2_TR(0x708a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708a54:{NFSU2_TR(0x708a54);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B708a58:{NFSU2_TR(0x708a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B708a5b:{NFSU2_TR(0x708a5b);
__builtin_memmove((R+12),(R+0),4);
}
B708a5d:{NFSU2_TR(0x708a5d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B708a60:{NFSU2_TR(0x708a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B708a63:{NFSU2_TR(0x708a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B708a66:{NFSU2_TR(0x708a66);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x8ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B708a6a:{NFSU2_TR(0x708a6a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x708a51u);}goto L708a51;}}
}
B708a6c:L708a6c:{c.instructions+=27;NFSU2_TR(0x708a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708a6f:{NFSU2_TR(0x708a6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B708a72:{NFSU2_TR(0x708a72);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B708a74:{NFSU2_TR(0x708a74);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B708a76:{NFSU2_TR(0x708a76);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B708a79:{NFSU2_TR(0x708a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B708a7c:{NFSU2_TR(0x708a7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708a7f:{NFSU2_TR(0x708a7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B708a82:{NFSU2_TR(0x708a82);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B708a84:{NFSU2_TR(0x708a84);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B708a86:{NFSU2_TR(0x708a86);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B708a89:{NFSU2_TR(0x708a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B708a8c:{NFSU2_TR(0x708a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708a8f:{NFSU2_TR(0x708a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708a92:{NFSU2_TR(0x708a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B708a95:{NFSU2_TR(0x708a95);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B708a98:{NFSU2_TR(0x708a98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B708a9b:{NFSU2_TR(0x708a9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(R+0)),r4(U+0));
}
B708a9d:{NFSU2_TR(0x708a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708aa0:{NFSU2_TR(0x708aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708aa3:{NFSU2_TR(0x708aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B708aa6:{NFSU2_TR(0x708aa6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B708aa8:{NFSU2_TR(0x708aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B708aab:{NFSU2_TR(0x708aab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(R+0)),r4(U+0));
}
B708aad:{NFSU2_TR(0x708aad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708ab3:{NFSU2_TR(0x708ab3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B708ab6:{NFSU2_TR(0x708ab6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L708c38;}}
}
B708abc:L708abc:{c.instructions+=2;NFSU2_TR(0x708abc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B708abe:{NFSU2_TR(0x708abe);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L708c38;}}
}
B708ac4:L708ac4:{c.instructions+=4;NFSU2_TR(0x708ac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708ac7:{NFSU2_TR(0x708ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B708aca:{NFSU2_TR(0x708aca);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B708acd:{NFSU2_TR(0x708acd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L708c38;}}
}
B708ad3:L708ad3:{c.instructions+=4;NFSU2_TR(0x708ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708ad6:{NFSU2_TR(0x708ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B708ad9:{NFSU2_TR(0x708ad9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B708adc:{NFSU2_TR(0x708adc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L708c38;}}
}
B708ae2:L708ae2:{c.instructions+=7;NFSU2_TR(0x708ae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708ae8:{NFSU2_TR(0x708ae8);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B708aec:{NFSU2_TR(0x708aec);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+12,u32(r1(U+0)));
}
B708aef:{NFSU2_TR(0x708aef);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B708af1:{NFSU2_TR(0x708af1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B708af3:{NFSU2_TR(0x708af3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708af6:{NFSU2_TR(0x708af6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L708afc;}}
}
B708af8:L708af8:{c.instructions+=2;NFSU2_TR(0x708af8);
__builtin_memmove((R+0),(R+12),4);
}
B708afa:{NFSU2_TR(0x708afa);
{goto L708b01;}
}
B708afc:L708afc:{c.instructions+=2;NFSU2_TR(0x708afc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+12,u32(r1(U+0)));
}
B708aff:{NFSU2_TR(0x708aff);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B708b01:L708b01:{c.instructions+=3;NFSU2_TR(0x708b01);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B708b04:{NFSU2_TR(0x708b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708b07:{NFSU2_TR(0x708b07);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L708b0c;}}
}
B708b09:L708b09:{c.instructions+=1;NFSU2_TR(0x708b09);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B708b0c:L708b0c:{c.instructions+=10;NFSU2_TR(0x708b0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708b0f:{NFSU2_TR(0x708b0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708b12:{NFSU2_TR(0x708b12);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+12,u32(r1(U+0)));
}
B708b15:{NFSU2_TR(0x708b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708b18:{NFSU2_TR(0x708b18);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(r1(U+0)));
}
B708b1b:{NFSU2_TR(0x708b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708b1e:{NFSU2_TR(0x708b1e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B708b20:{NFSU2_TR(0x708b20);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B708b22:{NFSU2_TR(0x708b22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708b25:{NFSU2_TR(0x708b25);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L708b2c;}}
}
B708b27:L708b27:{c.instructions+=2;NFSU2_TR(0x708b27);
__builtin_memmove((R+0),(R+12),4);
}
B708b29:{NFSU2_TR(0x708b29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B708b2c:L708b2c:{c.instructions+=3;NFSU2_TR(0x708b2c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B708b2f:{NFSU2_TR(0x708b2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708b32:{NFSU2_TR(0x708b32);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L708b37;}}
}
B708b34:L708b34:{c.instructions+=1;NFSU2_TR(0x708b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708b37:L708b37:{c.instructions+=94;NFSU2_TR(0x708b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B708b3a:{NFSU2_TR(0x708b3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708b3d:{NFSU2_TR(0x708b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708b40:{NFSU2_TR(0x708b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B708b43:{NFSU2_TR(0x708b43);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B708b45:{NFSU2_TR(0x708b45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B708b48:{NFSU2_TR(0x708b48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B708b4b:{NFSU2_TR(0x708b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B708b4e:{NFSU2_TR(0x708b4e);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B708b52:{NFSU2_TR(0x708b52);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B708b54:{NFSU2_TR(0x708b54);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B708b56:{NFSU2_TR(0x708b56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708b59:{NFSU2_TR(0x708b59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B708b5c:{NFSU2_TR(0x708b5c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B708b5f:{NFSU2_TR(0x708b5f);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B708b62:{NFSU2_TR(0x708b62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708b65:{NFSU2_TR(0x708b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708b68:{NFSU2_TR(0x708b68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B708b6b:{NFSU2_TR(0x708b6b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B708b6d:{NFSU2_TR(0x708b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708b70:{NFSU2_TR(0x708b70);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B708b72:{NFSU2_TR(0x708b72);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B708b74:{NFSU2_TR(0x708b74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708b77:{NFSU2_TR(0x708b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B708b7a:{NFSU2_TR(0x708b7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B708b7d:{NFSU2_TR(0x708b7d);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B708b7f:{NFSU2_TR(0x708b7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708b82:{NFSU2_TR(0x708b82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708b85:{NFSU2_TR(0x708b85);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B708b87:{NFSU2_TR(0x708b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708b8a:{NFSU2_TR(0x708b8a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B708b8c:{NFSU2_TR(0x708b8c);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B708b8e:{NFSU2_TR(0x708b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708b91:{NFSU2_TR(0x708b91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B708b94:{NFSU2_TR(0x708b94);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B708b97:{NFSU2_TR(0x708b97);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B708b9a:{NFSU2_TR(0x708b9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708b9d:{NFSU2_TR(0x708b9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708ba0:{NFSU2_TR(0x708ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B708ba3:{NFSU2_TR(0x708ba3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B708ba5:{NFSU2_TR(0x708ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708ba8:{NFSU2_TR(0x708ba8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B708baa:{NFSU2_TR(0x708baa);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B708bac:{NFSU2_TR(0x708bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708baf:{NFSU2_TR(0x708baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708bb2:{NFSU2_TR(0x708bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B708bb5:{NFSU2_TR(0x708bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B708bb8:{NFSU2_TR(0x708bb8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B708bbb:{NFSU2_TR(0x708bbb);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B708bbe:{NFSU2_TR(0x708bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708bc1:{NFSU2_TR(0x708bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708bc4:{NFSU2_TR(0x708bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B708bc7:{NFSU2_TR(0x708bc7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B708bc9:{NFSU2_TR(0x708bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708bcc:{NFSU2_TR(0x708bcc);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B708bce:{NFSU2_TR(0x708bce);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B708bd0:{NFSU2_TR(0x708bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708bd3:{NFSU2_TR(0x708bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708bd6:{NFSU2_TR(0x708bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B708bd9:{NFSU2_TR(0x708bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B708bdc:{NFSU2_TR(0x708bdc);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B708bdf:{NFSU2_TR(0x708bdf);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B708be2:{NFSU2_TR(0x708be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708be5:{NFSU2_TR(0x708be5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708be8:{NFSU2_TR(0x708be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B708beb:{NFSU2_TR(0x708beb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B708bed:{NFSU2_TR(0x708bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708bf0:{NFSU2_TR(0x708bf0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B708bf2:{NFSU2_TR(0x708bf2);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B708bf4:{NFSU2_TR(0x708bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708bf7:{NFSU2_TR(0x708bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B708bfa:{NFSU2_TR(0x708bfa);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B708bfd:{NFSU2_TR(0x708bfd);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B708c00:{NFSU2_TR(0x708c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708c03:{NFSU2_TR(0x708c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708c06:{NFSU2_TR(0x708c06);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B708c08:{NFSU2_TR(0x708c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708c0b:{NFSU2_TR(0x708c0b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B708c0d:{NFSU2_TR(0x708c0d);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B708c0f:{NFSU2_TR(0x708c0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B708c12:{NFSU2_TR(0x708c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B708c15:{NFSU2_TR(0x708c15);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B708c18:{NFSU2_TR(0x708c18);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B708c1a:{NFSU2_TR(0x708c1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708c1d:{NFSU2_TR(0x708c1d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B708c1f:{NFSU2_TR(0x708c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B708c22:{NFSU2_TR(0x708c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708c25:{NFSU2_TR(0x708c25);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B708c27:{NFSU2_TR(0x708c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B708c2a:{NFSU2_TR(0x708c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B708c2d:{NFSU2_TR(0x708c2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B708c30:{NFSU2_TR(0x708c30);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B708c33:{NFSU2_TR(0x708c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708c36:{NFSU2_TR(0x708c36);
{goto L708c8c;}
}
B708c38:L708c38:{c.instructions+=29;NFSU2_TR(0x708c38);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B708c3a:{NFSU2_TR(0x708c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708c3d:{NFSU2_TR(0x708c3d);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B708c40:{NFSU2_TR(0x708c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708c43:{NFSU2_TR(0x708c43);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B708c46:{NFSU2_TR(0x708c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708c49:{NFSU2_TR(0x708c49);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B708c4b:{NFSU2_TR(0x708c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708c4e:{NFSU2_TR(0x708c4e);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B708c51:{NFSU2_TR(0x708c51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B708c54:{NFSU2_TR(0x708c54);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B708c57:{NFSU2_TR(0x708c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708c5a:{NFSU2_TR(0x708c5a);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B708c5d:{NFSU2_TR(0x708c5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708c60:{NFSU2_TR(0x708c60);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B708c63:{NFSU2_TR(0x708c63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708c66:{NFSU2_TR(0x708c66);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B708c68:{NFSU2_TR(0x708c68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708c6b:{NFSU2_TR(0x708c6b);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B708c6e:{NFSU2_TR(0x708c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708c74:{NFSU2_TR(0x708c74);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+8),(U+0),1);
}
B708c76:{NFSU2_TR(0x708c76);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B708c79:{NFSU2_TR(0x708c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708c7c:{NFSU2_TR(0x708c7c);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B708c7f:{NFSU2_TR(0x708c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B708c82:{NFSU2_TR(0x708c82);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B708c84:{NFSU2_TR(0x708c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708c87:{NFSU2_TR(0x708c87);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+8),(U+0),1);
}
B708c89:{NFSU2_TR(0x708c89);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B708c8c:L708c8c:{c.instructions+=8;NFSU2_TR(0x708c8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B708c8f:{NFSU2_TR(0x708c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708c92:{NFSU2_TR(0x708c92);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B708c93:{NFSU2_TR(0x708c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B708c96:{NFSU2_TR(0x708c96);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B708c97:{NFSU2_TR(0x708c97);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B708c98:{NFSU2_TR(0x708c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B708c9e:{NFSU2_TR(0x708c9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7089beu);}goto L7089be;}}
}
B708ca4:L708ca4:{c.instructions+=6;NFSU2_TR(0x708ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B708ca7:{NFSU2_TR(0x708ca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B708caa:{NFSU2_TR(0x708caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B708cae:{NFSU2_TR(0x708cae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B708cb2:{NFSU2_TR(0x708cb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B708cb5:{NFSU2_TR(0x708cb5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x708982u);}goto L708982;}}
}
B708cbb:L708cbb:{c.instructions+=1;NFSU2_TR(0x708cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B708cbe:L708cbe:{c.instructions+=5;NFSU2_TR(0x708cbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B708cc1:{NFSU2_TR(0x708cc1);
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
B708cc3:{NFSU2_TR(0x708cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708cc6:{NFSU2_TR(0x708cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708ccc:{NFSU2_TR(0x708ccc);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L708f82;}}
}
B708cd2:L708cd2:{c.instructions+=7;NFSU2_TR(0x708cd2);
__builtin_memmove((R+0),(R+8),4);
}
B708cd4:{NFSU2_TR(0x708cd4);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B708cd7:{NFSU2_TR(0x708cd7);
__builtin_memmove((R+4),(R+0),4);
}
B708cd9:{NFSU2_TR(0x708cd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708cdc:{NFSU2_TR(0x708cdc);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B708cde:{NFSU2_TR(0x708cde);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B708ce1:{NFSU2_TR(0x708ce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708ce4:L708ce4:{c.instructions+=15;NFSU2_TR(0x708ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708ce7:{NFSU2_TR(0x708ce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708cea:{NFSU2_TR(0x708cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B708ced:{NFSU2_TR(0x708ced);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B708cf1:{NFSU2_TR(0x708cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B708cf4:{NFSU2_TR(0x708cf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B708cf7:{NFSU2_TR(0x708cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708cfa:{NFSU2_TR(0x708cfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708cfd:{NFSU2_TR(0x708cfd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B708d00:{NFSU2_TR(0x708d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B708d03:{NFSU2_TR(0x708d03);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B708d06:{NFSU2_TR(0x708d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708d0c:{NFSU2_TR(0x708d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708d0f:{NFSU2_TR(0x708d0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B708d12:{NFSU2_TR(0x708d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B708d19:L708d19:{c.instructions+=22;NFSU2_TR(0x708d19);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B708d1d:{NFSU2_TR(0x708d1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B708d21:{NFSU2_TR(0x708d21);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B708d25:{NFSU2_TR(0x708d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708d28:{NFSU2_TR(0x708d28);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B708d2b:{NFSU2_TR(0x708d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708d2e:{NFSU2_TR(0x708d2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B708d32:{NFSU2_TR(0x708d32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708d35:{NFSU2_TR(0x708d35);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B708d39:{NFSU2_TR(0x708d39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708d3c:{NFSU2_TR(0x708d3c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B708d40:{NFSU2_TR(0x708d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708d43:{NFSU2_TR(0x708d43);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B708d47:{NFSU2_TR(0x708d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708d4a:{NFSU2_TR(0x708d4a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B708d4c:{NFSU2_TR(0x708d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708d4f:{NFSU2_TR(0x708d4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708d52:{NFSU2_TR(0x708d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708d55:{NFSU2_TR(0x708d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708d58:{NFSU2_TR(0x708d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708d5b:{NFSU2_TR(0x708d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708d5e:{NFSU2_TR(0x708d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B708d65:L708d65:{c.instructions+=9;NFSU2_TR(0x708d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708d68:{NFSU2_TR(0x708d68);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B708d6c:{NFSU2_TR(0x708d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B708d6f:{NFSU2_TR(0x708d6f);
__builtin_memmove((R+28),(R+4),4);
}
B708d71:{NFSU2_TR(0x708d71);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B708d74:{NFSU2_TR(0x708d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B708d77:{NFSU2_TR(0x708d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B708d7a:{NFSU2_TR(0x708d7a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B708d7e:{NFSU2_TR(0x708d7e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x708d65u);}goto L708d65;}}
}
B708d80:L708d80:{c.instructions+=1;NFSU2_TR(0x708d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B708d87:L708d87:{c.instructions+=9;NFSU2_TR(0x708d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708d8a:{NFSU2_TR(0x708d8a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B708d8e:{NFSU2_TR(0x708d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B708d91:{NFSU2_TR(0x708d91);
__builtin_memmove((R+28),(R+4),4);
}
B708d93:{NFSU2_TR(0x708d93);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B708d96:{NFSU2_TR(0x708d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B708d99:{NFSU2_TR(0x708d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B708d9c:{NFSU2_TR(0x708d9c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x8ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B708da0:{NFSU2_TR(0x708da0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x708d87u);}goto L708d87;}}
}
B708da2:L708da2:{c.instructions+=27;NFSU2_TR(0x708da2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708da5:{NFSU2_TR(0x708da5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B708da8:{NFSU2_TR(0x708da8);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B708daa:{NFSU2_TR(0x708daa);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B708dac:{NFSU2_TR(0x708dac);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B708daf:{NFSU2_TR(0x708daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B708db2:{NFSU2_TR(0x708db2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708db5:{NFSU2_TR(0x708db5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B708db8:{NFSU2_TR(0x708db8);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B708dba:{NFSU2_TR(0x708dba);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B708dbc:{NFSU2_TR(0x708dbc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B708dbf:{NFSU2_TR(0x708dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B708dc2:{NFSU2_TR(0x708dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708dc5:{NFSU2_TR(0x708dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708dc8:{NFSU2_TR(0x708dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708dcb:{NFSU2_TR(0x708dcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B708dce:{NFSU2_TR(0x708dce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708dd1:{NFSU2_TR(0x708dd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+28))));
s4(u32(r4(R+4)),r4(U+0));
}
B708dd3:{NFSU2_TR(0x708dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708dd6:{NFSU2_TR(0x708dd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708dd9:{NFSU2_TR(0x708dd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708ddc:{NFSU2_TR(0x708ddc);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B708de0:{NFSU2_TR(0x708de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708de3:{NFSU2_TR(0x708de3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+28))));
s4(u32(r4(R+4)),r4(U+0));
}
B708de5:{NFSU2_TR(0x708de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708deb:{NFSU2_TR(0x708deb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B708dee:{NFSU2_TR(0x708dee);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L708f5e;}}
}
B708df4:L708df4:{c.instructions+=2;NFSU2_TR(0x708df4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B708df6:{NFSU2_TR(0x708df6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L708f5e;}}
}
B708dfc:L708dfc:{c.instructions+=4;NFSU2_TR(0x708dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708dff:{NFSU2_TR(0x708dff);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B708e01:{NFSU2_TR(0x708e01);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B708e04:{NFSU2_TR(0x708e04);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L708f5e;}}
}
B708e0a:L708e0a:{c.instructions+=4;NFSU2_TR(0x708e0a);
__builtin_memmove((R+4),(R+24),4);
}
B708e0c:{NFSU2_TR(0x708e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B708e0f:{NFSU2_TR(0x708e0f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B708e12:{NFSU2_TR(0x708e12);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L708f5e;}}
}
B708e18:L708e18:{c.instructions+=5;NFSU2_TR(0x708e18);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B708e1c:{NFSU2_TR(0x708e1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B708e20:{NFSU2_TR(0x708e20);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B708e22:{NFSU2_TR(0x708e22);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B708e24:{NFSU2_TR(0x708e24);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L708e2a;}}
}
B708e26:L708e26:{c.instructions+=2;NFSU2_TR(0x708e26);
__builtin_memmove((R+4),(R+28),4);
}
B708e28:{NFSU2_TR(0x708e28);
{goto L708e30;}
}
B708e2a:L708e2a:{c.instructions+=2;NFSU2_TR(0x708e2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B708e2e:{NFSU2_TR(0x708e2e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B708e30:L708e30:{c.instructions+=2;NFSU2_TR(0x708e30);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B708e33:{NFSU2_TR(0x708e33);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L708e3b;}}
}
B708e35:L708e35:{c.instructions+=2;NFSU2_TR(0x708e35);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B708e39:{NFSU2_TR(0x708e39);
{goto L708e3f;}
}
B708e3b:L708e3b:{c.instructions+=1;NFSU2_TR(0x708e3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B708e3f:L708e3f:{c.instructions+=6;NFSU2_TR(0x708e3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B708e43:{NFSU2_TR(0x708e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708e46:{NFSU2_TR(0x708e46);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B708e4a:{NFSU2_TR(0x708e4a);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B708e4c:{NFSU2_TR(0x708e4c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B708e4e:{NFSU2_TR(0x708e4e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L708e54;}}
}
B708e50:L708e50:{c.instructions+=2;NFSU2_TR(0x708e50);
__builtin_memmove((R+4),(R+28),4);
}
B708e52:{NFSU2_TR(0x708e52);
{goto L708e5a;}
}
B708e54:L708e54:{c.instructions+=2;NFSU2_TR(0x708e54);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B708e58:{NFSU2_TR(0x708e58);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B708e5a:L708e5a:{c.instructions+=2;NFSU2_TR(0x708e5a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B708e5d:{NFSU2_TR(0x708e5d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L708e65;}}
}
B708e5f:L708e5f:{c.instructions+=2;NFSU2_TR(0x708e5f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B708e63:{NFSU2_TR(0x708e63);
{goto L708e69;}
}
B708e65:L708e65:{c.instructions+=1;NFSU2_TR(0x708e65);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B708e69:L708e69:{c.instructions+=92;NFSU2_TR(0x708e69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708e6c:{NFSU2_TR(0x708e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708e6f:{NFSU2_TR(0x708e6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B708e72:{NFSU2_TR(0x708e72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B708e75:{NFSU2_TR(0x708e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B708e78:{NFSU2_TR(0x708e78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B708e7b:{NFSU2_TR(0x708e7b);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B708e7f:{NFSU2_TR(0x708e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B708e82:{NFSU2_TR(0x708e82);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B708e84:{NFSU2_TR(0x708e84);
__builtin_memmove((R+12),(R+28),4);
}
B708e86:{NFSU2_TR(0x708e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708e89:{NFSU2_TR(0x708e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B708e8c:{NFSU2_TR(0x708e8c);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B708e8e:{NFSU2_TR(0x708e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B708e91:{NFSU2_TR(0x708e91);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B708e93:{NFSU2_TR(0x708e93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708e96:{NFSU2_TR(0x708e96);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B708e98:{NFSU2_TR(0x708e98);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B708e9b:{NFSU2_TR(0x708e9b);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B708e9d:{NFSU2_TR(0x708e9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B708ea0:{NFSU2_TR(0x708ea0);
__builtin_memmove((R+12),(R+28),4);
}
B708ea2:{NFSU2_TR(0x708ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B708ea5:{NFSU2_TR(0x708ea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708ea8:{NFSU2_TR(0x708ea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B708eab:{NFSU2_TR(0x708eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B708eae:{NFSU2_TR(0x708eae);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B708eb0:{NFSU2_TR(0x708eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708eb3:{NFSU2_TR(0x708eb3);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B708eb5:{NFSU2_TR(0x708eb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B708eb8:{NFSU2_TR(0x708eb8);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B708eba:{NFSU2_TR(0x708eba);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B708ebd:{NFSU2_TR(0x708ebd);
__builtin_memmove((R+12),(R+28),4);
}
B708ebf:{NFSU2_TR(0x708ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B708ec2:{NFSU2_TR(0x708ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708ec5:{NFSU2_TR(0x708ec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B708ec8:{NFSU2_TR(0x708ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B708ecb:{NFSU2_TR(0x708ecb);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B708ecd:{NFSU2_TR(0x708ecd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B708ed0:{NFSU2_TR(0x708ed0);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B708ed2:{NFSU2_TR(0x708ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B708ed5:{NFSU2_TR(0x708ed5);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B708ed7:{NFSU2_TR(0x708ed7);
__builtin_memmove((R+12),(R+28),4);
}
B708ed9:{NFSU2_TR(0x708ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B708edc:{NFSU2_TR(0x708edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708edf:{NFSU2_TR(0x708edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B708ee2:{NFSU2_TR(0x708ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B708ee5:{NFSU2_TR(0x708ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B708ee8:{NFSU2_TR(0x708ee8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B708eea:{NFSU2_TR(0x708eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B708eed:{NFSU2_TR(0x708eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708ef0:{NFSU2_TR(0x708ef0);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B708ef2:{NFSU2_TR(0x708ef2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B708ef5:{NFSU2_TR(0x708ef5);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B708ef7:{NFSU2_TR(0x708ef7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B708efa:{NFSU2_TR(0x708efa);
__builtin_memmove((R+12),(R+28),4);
}
B708efc:{NFSU2_TR(0x708efc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B708eff:{NFSU2_TR(0x708eff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708f02:{NFSU2_TR(0x708f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B708f05:{NFSU2_TR(0x708f05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B708f08:{NFSU2_TR(0x708f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B708f0b:{NFSU2_TR(0x708f0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B708f0e:{NFSU2_TR(0x708f0e);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+28)),r1(U+0));
}
B708f10:{NFSU2_TR(0x708f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708f13:{NFSU2_TR(0x708f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B708f16:{NFSU2_TR(0x708f16);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B708f18:{NFSU2_TR(0x708f18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708f1b:{NFSU2_TR(0x708f1b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B708f1d:{NFSU2_TR(0x708f1d);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B708f1f:{NFSU2_TR(0x708f1f);
__builtin_memmove((R+12),(R+28),4);
}
B708f21:{NFSU2_TR(0x708f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B708f24:{NFSU2_TR(0x708f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708f27:{NFSU2_TR(0x708f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B708f2a:{NFSU2_TR(0x708f2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B708f2d:{NFSU2_TR(0x708f2d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B708f2f:{NFSU2_TR(0x708f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708f32:{NFSU2_TR(0x708f32);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B708f35:{NFSU2_TR(0x708f35);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B708f37:{NFSU2_TR(0x708f37);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B708f39:{NFSU2_TR(0x708f39);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B708f3c:{NFSU2_TR(0x708f3c);
__builtin_memmove((R+12),(R+28),4);
}
B708f3e:{NFSU2_TR(0x708f3e);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B708f40:{NFSU2_TR(0x708f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B708f43:{NFSU2_TR(0x708f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B708f46:{NFSU2_TR(0x708f46);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B708f48:{NFSU2_TR(0x708f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B708f4b:{NFSU2_TR(0x708f4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B708f4e:{NFSU2_TR(0x708f4e);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B708f50:{NFSU2_TR(0x708f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B708f53:{NFSU2_TR(0x708f53);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B708f56:{NFSU2_TR(0x708f56);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B708f58:{NFSU2_TR(0x708f58);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B708f5b:{NFSU2_TR(0x708f5b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B708f5e:L708f5e:{c.instructions+=4;NFSU2_TR(0x708f5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B708f61:{NFSU2_TR(0x708f61);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B708f63:{NFSU2_TR(0x708f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B708f66:{NFSU2_TR(0x708f66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x708d19u);}goto L708d19;}}
}
B708f6c:L708f6c:{c.instructions+=5;NFSU2_TR(0x708f6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B708f6f:{NFSU2_TR(0x708f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708f72:{NFSU2_TR(0x708f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B708f76:{NFSU2_TR(0x708f76);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
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
B708f7c:{NFSU2_TR(0x708f7c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x708ce4u);}goto L708ce4;}}
}
B708f82:L708f82:{c.instructions+=5;NFSU2_TR(0x708f82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B708f83:{NFSU2_TR(0x708f83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B708f84:{NFSU2_TR(0x708f84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B708f85:{NFSU2_TR(0x708f85);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B708f86:{NFSU2_TR(0x708f86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B708f87:L708f87:{c.instructions+=10;NFSU2_TR(0x708f87);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708f88:{NFSU2_TR(0x708f88);
__builtin_memmove((R+20),(R+16),4);
}
B708f8a:{NFSU2_TR(0x708f8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B708f8d:{NFSU2_TR(0x708f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708f90:{NFSU2_TR(0x708f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708f93:{NFSU2_TR(0x708f93);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B708f97:{NFSU2_TR(0x708f97);
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
B708f99:{NFSU2_TR(0x708f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708f9c:{NFSU2_TR(0x708f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708f9f:{NFSU2_TR(0x708f9f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x709280u,709);}
}
B708fa5:L708fa5:{c.instructions+=30;NFSU2_TR(0x708fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708fa8:{NFSU2_TR(0x708fa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708fab:{NFSU2_TR(0x708fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708fae:{NFSU2_TR(0x708fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B708fb1:{NFSU2_TR(0x708fb1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708fb2:{NFSU2_TR(0x708fb2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B708fb5:{NFSU2_TR(0x708fb5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5ull))));
}
B708fb8:{NFSU2_TR(0x708fb8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708fb9:{NFSU2_TR(0x708fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708fbc:{NFSU2_TR(0x708fbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708fbf:{NFSU2_TR(0x708fbf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B708fc0:{NFSU2_TR(0x708fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708fc3:{NFSU2_TR(0x708fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708fc6:{NFSU2_TR(0x708fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708fc9:{NFSU2_TR(0x708fc9);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B708fcd:{NFSU2_TR(0x708fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B708fd0:{NFSU2_TR(0x708fd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B708fd3:{NFSU2_TR(0x708fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B708fd6:{NFSU2_TR(0x708fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B708fd9:{NFSU2_TR(0x708fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708fdc:{NFSU2_TR(0x708fdc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B708fdf:{NFSU2_TR(0x708fdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B708fe2:{NFSU2_TR(0x708fe2);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B708fe5:{NFSU2_TR(0x708fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B708fe8:{NFSU2_TR(0x708fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B708fef:{NFSU2_TR(0x708fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B708ff2:{NFSU2_TR(0x708ff2);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B708ff6:{NFSU2_TR(0x708ff6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B708ffa:{NFSU2_TR(0x708ffa);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+28,u32(r1(U+0)));
}
B708ffd:{NFSU2_TR(0x708ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x709000u,709);
}
XIT:NFSU2_TR_EXIT(0x708,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
