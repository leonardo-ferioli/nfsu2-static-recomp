#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_64f(u8* __restrict R,Cpu& c);
u32 body_650(u8* __restrict R,Cpu& c);
u32 body_651(u8* __restrict R,Cpu& c);
u32 body_653(u8* __restrict R,Cpu& c);
u32 body_654(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x652,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x652,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_652(u8* __restrict R,Cpu& c);
u32 page_652(Cpu& c){return body_652(c.regs.data(),c);}
__attribute__((noinline)) u32 body_652(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x652000:goto L652000;
case 0x652002:goto L652002;
case 0x652007:c.instructions+=4;goto B652007;
case 0x652008:c.instructions+=3;goto B652008;
case 0x65200b:c.instructions+=2;goto B65200b;
case 0x65200d:c.instructions+=1;goto B65200d;
case 0x652012:goto L652012;
case 0x652014:goto L652014;
case 0x652016:goto L652016;
case 0x652018:c.instructions+=1;goto B652018;
case 0x65201a:goto L65201a;
case 0x65201c:c.instructions+=1;goto B65201c;
case 0x65201e:goto L65201e;
case 0x652021:c.instructions+=3;goto B652021;
case 0x652022:c.instructions+=2;goto B652022;
case 0x652025:c.instructions+=1;goto B652025;
case 0x65202a:goto L65202a;
case 0x65202c:goto L65202c;
case 0x65202d:c.instructions+=4;goto B65202d;
case 0x65202e:c.instructions+=3;goto B65202e;
case 0x65202f:c.instructions+=2;goto B65202f;
case 0x652030:c.instructions+=1;goto B652030;
case 0x652033:goto L652033;
case 0x652035:c.instructions+=10;goto B652035;
case 0x652036:c.instructions+=9;goto B652036;
case 0x652038:c.instructions+=8;goto B652038;
case 0x652039:c.instructions+=7;goto B652039;
case 0x65203a:c.instructions+=6;goto B65203a;
case 0x65203b:c.instructions+=5;goto B65203b;
case 0x65203c:c.instructions+=4;goto B65203c;
case 0x65203f:c.instructions+=3;goto B65203f;
case 0x652040:c.instructions+=2;goto B652040;
case 0x652043:c.instructions+=1;goto B652043;
case 0x652045:goto L652045;
case 0x652048:goto L652048;
case 0x65204c:c.instructions+=1;goto B65204c;
case 0x65204e:goto L65204e;
case 0x652050:c.instructions+=1;goto B652050;
case 0x652055:goto L652055;
case 0x652057:c.instructions+=2;goto B652057;
case 0x652059:c.instructions+=1;goto B652059;
case 0x65205b:goto L65205b;
case 0x65205e:c.instructions+=8;goto B65205e;
case 0x65205f:c.instructions+=7;goto B65205f;
case 0x652061:c.instructions+=6;goto B652061;
case 0x652062:c.instructions+=5;goto B652062;
case 0x652063:c.instructions+=4;goto B652063;
case 0x652064:c.instructions+=3;goto B652064;
case 0x652065:c.instructions+=2;goto B652065;
case 0x652067:c.instructions+=1;goto B652067;
case 0x65206c:goto L65206c;
case 0x65206e:c.instructions+=2;goto B65206e;
case 0x652071:c.instructions+=1;goto B652071;
case 0x652073:goto L652073;
case 0x652076:c.instructions+=1;goto B652076;
case 0x652078:goto L652078;
case 0x65207a:c.instructions+=1;goto B65207a;
case 0x652080:goto L652080;
case 0x652083:c.instructions+=2;goto B652083;
case 0x652085:c.instructions+=1;goto B652085;
case 0x652087:goto L652087;
case 0x652089:c.instructions+=1;goto B652089;
case 0x65208c:goto L65208c;
case 0x65208e:c.instructions+=2;goto B65208e;
case 0x652091:c.instructions+=1;goto B652091;
case 0x652097:goto L652097;
case 0x65209a:c.instructions+=4;goto B65209a;
case 0x65209c:c.instructions+=3;goto B65209c;
case 0x65209f:c.instructions+=2;goto B65209f;
case 0x6520a2:c.instructions+=1;goto B6520a2;
case 0x6520a4:goto L6520a4;
case 0x6520a7:c.instructions+=2;goto B6520a7;
case 0x6520a8:c.instructions+=1;goto B6520a8;
case 0x6520ad:goto L6520ad;
case 0x6520af:goto L6520af;
case 0x6520b0:c.instructions+=4;goto B6520b0;
case 0x6520b1:c.instructions+=3;goto B6520b1;
case 0x6520b2:c.instructions+=2;goto B6520b2;
case 0x6520b3:c.instructions+=1;goto B6520b3;
case 0x6520b6:goto L6520b6;
case 0x6520b9:goto L6520b9;
case 0x6520bc:c.instructions+=2;goto B6520bc;
case 0x6520be:c.instructions+=1;goto B6520be;
case 0x6520c0:goto L6520c0;
case 0x6520c4:c.instructions+=1;goto B6520c4;
case 0x6520c6:goto L6520c6;
case 0x6520c9:c.instructions+=1;goto B6520c9;
case 0x6520cb:goto L6520cb;
case 0x6520cd:c.instructions+=1;goto B6520cd;
case 0x6520d2:goto L6520d2;
case 0x6520d4:c.instructions+=1;goto B6520d4;
case 0x6520d6:goto L6520d6;
case 0x6520db:c.instructions+=4;goto B6520db;
case 0x6520dc:c.instructions+=3;goto B6520dc;
case 0x6520dd:c.instructions+=2;goto B6520dd;
case 0x6520df:c.instructions+=1;goto B6520df;
case 0x6520e4:goto L6520e4;
case 0x6520e6:goto L6520e6;
case 0x6520e8:goto L6520e8;
case 0x6520ea:c.instructions+=2;goto B6520ea;
case 0x6520ec:c.instructions+=1;goto B6520ec;
case 0x6520ee:goto L6520ee;
case 0x6520f1:c.instructions+=1;goto B6520f1;
case 0x6520f6:goto L6520f6;
case 0x6520f8:c.instructions+=4;goto B6520f8;
case 0x6520fb:c.instructions+=3;goto B6520fb;
case 0x6520fd:c.instructions+=2;goto B6520fd;
case 0x652100:c.instructions+=1;goto B652100;
case 0x652102:goto L652102;
case 0x652105:c.instructions+=1;goto B652105;
case 0x652108:goto L652108;
case 0x65210b:c.instructions+=3;goto B65210b;
case 0x65210d:c.instructions+=2;goto B65210d;
case 0x652110:c.instructions+=1;goto B652110;
case 0x652112:goto L652112;
case 0x652115:c.instructions+=1;goto B652115;
case 0x652117:goto L652117;
case 0x652119:c.instructions+=1;goto B652119;
case 0x65211b:goto L65211b;
case 0x65211d:c.instructions+=11;goto B65211d;
case 0x65211e:c.instructions+=10;goto B65211e;
case 0x652120:c.instructions+=9;goto B652120;
case 0x652123:c.instructions+=8;goto B652123;
case 0x652126:c.instructions+=7;goto B652126;
case 0x652127:c.instructions+=6;goto B652127;
case 0x652128:c.instructions+=5;goto B652128;
case 0x65212a:c.instructions+=4;goto B65212a;
case 0x65212c:c.instructions+=3;goto B65212c;
case 0x65212d:c.instructions+=2;goto B65212d;
case 0x652130:c.instructions+=1;goto B652130;
case 0x652136:goto L652136;
case 0x65213a:c.instructions+=1;goto B65213a;
case 0x652140:goto L652140;
case 0x652143:c.instructions+=2;goto B652143;
case 0x652145:c.instructions+=1;goto B652145;
case 0x65214b:goto L65214b;
case 0x65214f:c.instructions+=1;goto B65214f;
case 0x652155:goto L652155;
case 0x652158:c.instructions+=5;goto B652158;
case 0x65215b:c.instructions+=4;goto B65215b;
case 0x65215d:c.instructions+=3;goto B65215d;
case 0x652160:c.instructions+=2;goto B652160;
case 0x652163:c.instructions+=1;goto B652163;
case 0x652168:goto L652168;
case 0x65216a:c.instructions+=1;goto B65216a;
case 0x65216c:goto L65216c;
case 0x65216d:c.instructions+=7;goto B65216d;
case 0x65216f:c.instructions+=6;goto B65216f;
case 0x652170:c.instructions+=5;goto B652170;
case 0x652171:c.instructions+=4;goto B652171;
case 0x652173:c.instructions+=3;goto B652173;
case 0x652174:c.instructions+=2;goto B652174;
case 0x652176:c.instructions+=1;goto B652176;
case 0x65217b:goto L65217b;
case 0x65217e:c.instructions+=1;goto B65217e;
case 0x652180:goto L652180;
case 0x652183:goto L652183;
case 0x652186:c.instructions+=1;goto B652186;
case 0x65218c:goto L65218c;
case 0x65218e:c.instructions+=1;goto B65218e;
case 0x652190:goto L652190;
case 0x652193:c.instructions+=2;goto B652193;
case 0x652196:c.instructions+=1;goto B652196;
case 0x65219c:goto L65219c;
case 0x65219f:c.instructions+=1;goto B65219f;
case 0x6521a2:goto L6521a2;
case 0x6521a5:c.instructions+=2;goto B6521a5;
case 0x6521a7:c.instructions+=1;goto B6521a7;
case 0x6521a9:goto L6521a9;
case 0x6521ad:c.instructions+=1;goto B6521ad;
case 0x6521af:goto L6521af;
case 0x6521b2:c.instructions+=3;goto B6521b2;
case 0x6521b5:c.instructions+=2;goto B6521b5;
case 0x6521b8:c.instructions+=1;goto B6521b8;
case 0x6521bb:goto L6521bb;
case 0x6521bd:c.instructions+=3;goto B6521bd;
case 0x6521bf:c.instructions+=2;goto B6521bf;
case 0x6521c1:c.instructions+=1;goto B6521c1;
case 0x6521c3:goto L6521c3;
case 0x6521c5:c.instructions+=1;goto B6521c5;
case 0x6521c7:goto L6521c7;
case 0x6521ca:c.instructions+=3;goto B6521ca;
case 0x6521cc:c.instructions+=2;goto B6521cc;
case 0x6521cf:c.instructions+=1;goto B6521cf;
case 0x6521d1:goto L6521d1;
case 0x6521d2:c.instructions+=5;goto B6521d2;
case 0x6521d3:c.instructions+=4;goto B6521d3;
case 0x6521d4:c.instructions+=3;goto B6521d4;
case 0x6521d5:c.instructions+=2;goto B6521d5;
case 0x6521d7:c.instructions+=1;goto B6521d7;
case 0x6521d9:goto L6521d9;
case 0x6521db:c.instructions+=1;goto B6521db;
case 0x6521dd:goto L6521dd;
case 0x6521df:c.instructions+=1;goto B6521df;
case 0x6521e2:goto L6521e2;
case 0x6521e4:c.instructions+=1;goto B6521e4;
case 0x6521e6:goto L6521e6;
case 0x6521e9:c.instructions+=2;goto B6521e9;
case 0x6521ec:c.instructions+=1;goto B6521ec;
case 0x6521f1:goto L6521f1;
case 0x6521f4:c.instructions+=2;goto B6521f4;
case 0x6521f7:c.instructions+=1;goto B6521f7;
case 0x6521f9:goto L6521f9;
case 0x6521fc:c.instructions+=3;goto B6521fc;
case 0x6521fe:c.instructions+=2;goto B6521fe;
case 0x652201:c.instructions+=1;goto B652201;
case 0x652203:goto L652203;
case 0x652206:c.instructions+=6;goto B652206;
case 0x652209:c.instructions+=5;goto B652209;
case 0x65220e:c.instructions+=4;goto B65220e;
case 0x652213:c.instructions+=3;goto B652213;
case 0x652214:c.instructions+=2;goto B652214;
case 0x652217:c.instructions+=1;goto B652217;
case 0x65221c:goto L65221c;
case 0x65221f:goto L65221f;
case 0x652221:goto L652221;
case 0x652222:c.instructions+=4;goto B652222;
case 0x652223:c.instructions+=3;goto B652223;
case 0x652224:c.instructions+=2;goto B652224;
case 0x652225:c.instructions+=1;goto B652225;
case 0x652228:goto L652228;
case 0x65222c:c.instructions+=1;goto B65222c;
case 0x65222e:goto L65222e;
case 0x652231:c.instructions+=2;goto B652231;
case 0x652233:c.instructions+=1;goto B652233;
case 0x652236:goto L652236;
case 0x652238:c.instructions+=3;goto B652238;
case 0x65223b:c.instructions+=2;goto B65223b;
case 0x65223e:c.instructions+=1;goto B65223e;
case 0x652240:goto L652240;
case 0x652242:c.instructions+=1;goto B652242;
case 0x652247:goto L652247;
case 0x652249:c.instructions+=1;goto B652249;
case 0x65224b:goto L65224b;
case 0x65224c:c.instructions+=4;goto B65224c;
case 0x65224f:c.instructions+=3;goto B65224f;
case 0x652251:c.instructions+=2;goto B652251;
case 0x652253:c.instructions+=1;goto B652253;
case 0x652258:goto L652258;
case 0x65225a:goto L65225a;
case 0x65225c:goto L65225c;
case 0x65225f:c.instructions+=2;goto B65225f;
case 0x652262:c.instructions+=1;goto B652262;
case 0x652267:goto L652267;
case 0x65226a:c.instructions+=1;goto B65226a;
case 0x65226c:goto L65226c;
case 0x65226f:c.instructions+=9;goto B65226f;
case 0x652272:c.instructions+=8;goto B652272;
case 0x652275:c.instructions+=7;goto B652275;
case 0x652278:c.instructions+=6;goto B652278;
case 0x65227b:c.instructions+=5;goto B65227b;
case 0x65227e:c.instructions+=4;goto B65227e;
case 0x652284:c.instructions+=3;goto B652284;
case 0x652286:c.instructions+=2;goto B652286;
case 0x652289:c.instructions+=1;goto B652289;
case 0x65228c:goto L65228c;
case 0x65228e:c.instructions+=3;goto B65228e;
case 0x65228f:c.instructions+=2;goto B65228f;
case 0x652291:c.instructions+=1;goto B652291;
case 0x652293:goto L652293;
case 0x652295:c.instructions+=7;goto B652295;
case 0x652298:c.instructions+=6;goto B652298;
case 0x65229a:c.instructions+=5;goto B65229a;
case 0x65229c:c.instructions+=4;goto B65229c;
case 0x65229e:c.instructions+=3;goto B65229e;
case 0x6522a1:c.instructions+=2;goto B6522a1;
case 0x6522a2:c.instructions+=1;goto B6522a2;
case 0x6522a4:goto L6522a4;
case 0x6522a6:c.instructions+=1;goto B6522a6;
case 0x6522ac:goto L6522ac;
case 0x6522ae:c.instructions+=1;goto B6522ae;
case 0x6522b0:goto L6522b0;
case 0x6522b2:c.instructions+=1;goto B6522b2;
case 0x6522b4:goto L6522b4;
case 0x6522b6:c.instructions+=1;goto B6522b6;
case 0x6522b8:goto L6522b8;
case 0x6522ba:c.instructions+=1;goto B6522ba;
case 0x6522c0:goto L6522c0;
case 0x6522c2:c.instructions+=1;goto B6522c2;
case 0x6522c8:goto L6522c8;
case 0x6522cb:c.instructions+=2;goto B6522cb;
case 0x6522cd:c.instructions+=1;goto B6522cd;
case 0x6522cf:goto L6522cf;
case 0x6522d2:c.instructions+=1;goto B6522d2;
case 0x6522d8:goto L6522d8;
case 0x6522dc:c.instructions+=1;goto B6522dc;
case 0x6522de:goto L6522de;
case 0x6522e1:c.instructions+=2;goto B6522e1;
case 0x6522e3:c.instructions+=1;goto B6522e3;
case 0x6522e5:goto L6522e5;
case 0x6522e8:c.instructions+=1;goto B6522e8;
case 0x6522ee:goto L6522ee;
case 0x6522f5:c.instructions+=1;goto B6522f5;
case 0x6522f7:goto L6522f7;
case 0x6522fa:c.instructions+=1;goto B6522fa;
case 0x652300:goto L652300;
case 0x652303:c.instructions+=2;goto B652303;
case 0x652305:c.instructions+=1;goto B652305;
case 0x652307:goto L652307;
case 0x65230a:c.instructions+=2;goto B65230a;
case 0x652311:c.instructions+=1;goto B652311;
case 0x652313:goto L652313;
case 0x652316:goto L652316;
case 0x652319:c.instructions+=5;goto B652319;
case 0x65231d:c.instructions+=4;goto B65231d;
case 0x652320:c.instructions+=3;goto B652320;
case 0x652322:c.instructions+=2;goto B652322;
case 0x652325:c.instructions+=1;goto B652325;
case 0x65232b:goto L65232b;
case 0x65232e:c.instructions+=5;goto B65232e;
case 0x652331:c.instructions+=4;goto B652331;
case 0x652334:c.instructions+=3;goto B652334;
case 0x652337:c.instructions+=2;goto B652337;
case 0x65233a:c.instructions+=1;goto B65233a;
case 0x65233d:goto L65233d;
case 0x652341:c.instructions+=1;goto B652341;
case 0x652347:goto L652347;
case 0x65234a:c.instructions+=2;goto B65234a;
case 0x65234d:c.instructions+=1;goto B65234d;
case 0x652353:goto L652353;
case 0x652354:c.instructions+=1;goto B652354;
case 0x65235a:goto L65235a;
case 0x65235b:c.instructions+=1;goto B65235b;
case 0x65235d:goto L65235d;
case 0x65235e:c.instructions+=1;goto B65235e;
case 0x652364:goto L652364;
case 0x652367:c.instructions+=2;goto B652367;
case 0x65236a:c.instructions+=1;goto B65236a;
case 0x652370:goto L652370;
case 0x652373:c.instructions+=1;goto B652373;
case 0x652379:goto L652379;
case 0x65237d:c.instructions+=1;goto B65237d;
case 0x652383:goto L652383;
case 0x652386:c.instructions+=3;goto B652386;
case 0x652388:c.instructions+=2;goto B652388;
case 0x65238b:c.instructions+=1;goto B65238b;
case 0x652391:goto L652391;
case 0x652394:c.instructions+=1;goto B652394;
case 0x65239a:goto L65239a;
case 0x65239d:c.instructions+=3;goto B65239d;
case 0x65239f:c.instructions+=2;goto B65239f;
case 0x6523a1:c.instructions+=1;goto B6523a1;
case 0x6523a7:goto L6523a7;
case 0x6523a9:c.instructions+=1;goto B6523a9;
case 0x6523af:goto L6523af;
case 0x6523b3:c.instructions+=7;goto B6523b3;
case 0x6523b6:c.instructions+=6;goto B6523b6;
case 0x6523b9:c.instructions+=5;goto B6523b9;
case 0x6523bc:c.instructions+=4;goto B6523bc;
case 0x6523bf:c.instructions+=3;goto B6523bf;
case 0x6523c2:c.instructions+=2;goto B6523c2;
case 0x6523c6:c.instructions+=1;goto B6523c6;
case 0x6523cb:goto L6523cb;
case 0x6523ce:c.instructions+=2;goto B6523ce;
case 0x6523d1:c.instructions+=1;goto B6523d1;
case 0x6523d7:goto L6523d7;
case 0x6523da:c.instructions+=1;goto B6523da;
case 0x6523e0:goto L6523e0;
case 0x6523e3:c.instructions+=2;goto B6523e3;
case 0x6523e6:c.instructions+=1;goto B6523e6;
case 0x6523ec:goto L6523ec;
case 0x6523ef:c.instructions+=1;goto B6523ef;
case 0x6523f5:goto L6523f5;
case 0x6523f8:c.instructions+=3;goto B6523f8;
case 0x6523fa:c.instructions+=2;goto B6523fa;
case 0x6523fc:c.instructions+=1;goto B6523fc;
case 0x652402:goto L652402;
case 0x652404:c.instructions+=1;goto B652404;
case 0x65240a:goto L65240a;
case 0x65240e:c.instructions+=7;goto B65240e;
case 0x652411:c.instructions+=6;goto B652411;
case 0x652414:c.instructions+=5;goto B652414;
case 0x652417:c.instructions+=4;goto B652417;
case 0x65241a:c.instructions+=3;goto B65241a;
case 0x65241d:c.instructions+=2;goto B65241d;
case 0x652421:c.instructions+=1;goto B652421;
case 0x652423:goto L652423;
case 0x652426:c.instructions+=2;goto B652426;
case 0x652429:c.instructions+=1;goto B652429;
case 0x65242b:goto L65242b;
case 0x65242c:c.instructions+=1;goto B65242c;
case 0x65242e:goto L65242e;
case 0x652431:c.instructions+=1;goto B652431;
case 0x652433:goto L652433;
case 0x652436:c.instructions+=1;goto B652436;
case 0x65243c:goto L65243c;
case 0x65243e:c.instructions+=1;goto B65243e;
case 0x652440:goto L652440;
case 0x652442:c.instructions+=2;goto B652442;
case 0x652443:c.instructions+=1;goto B652443;
case 0x652445:goto L652445;
case 0x652448:c.instructions+=2;goto B652448;
case 0x65244b:c.instructions+=1;goto B65244b;
case 0x65244d:goto L65244d;
case 0x65244e:c.instructions+=1;goto B65244e;
case 0x652450:goto L652450;
case 0x652451:c.instructions+=1;goto B652451;
case 0x652453:goto L652453;
case 0x652454:c.instructions+=1;goto B652454;
case 0x65245a:goto L65245a;
case 0x65245c:c.instructions+=1;goto B65245c;
case 0x65245e:goto L65245e;
case 0x652460:goto L652460;
case 0x652461:goto L652461;
case 0x652463:c.instructions+=3;goto B652463;
case 0x652464:c.instructions+=2;goto B652464;
case 0x652467:c.instructions+=1;goto B652467;
case 0x65246a:goto L65246a;
case 0x65246d:c.instructions+=1;goto B65246d;
case 0x652473:goto L652473;
case 0x652476:c.instructions+=1;goto B652476;
case 0x65247c:goto L65247c;
case 0x65247e:c.instructions+=5;goto B65247e;
case 0x652482:c.instructions+=4;goto B652482;
case 0x652484:c.instructions+=3;goto B652484;
case 0x652486:c.instructions+=2;goto B652486;
case 0x652489:c.instructions+=1;goto B652489;
case 0x65248e:goto L65248e;
case 0x652490:c.instructions+=1;goto B652490;
case 0x652492:goto L652492;
case 0x652497:c.instructions+=4;goto B652497;
case 0x652499:c.instructions+=3;goto B652499;
case 0x65249b:c.instructions+=2;goto B65249b;
case 0x65249d:c.instructions+=1;goto B65249d;
case 0x6524a2:goto L6524a2;
case 0x6524a4:goto L6524a4;
case 0x6524a6:goto L6524a6;
case 0x6524a8:c.instructions+=3;goto B6524a8;
case 0x6524ab:c.instructions+=2;goto B6524ab;
case 0x6524ad:c.instructions+=1;goto B6524ad;
case 0x6524b3:goto L6524b3;
case 0x6524b5:c.instructions+=1;goto B6524b5;
case 0x6524ba:goto L6524ba;
case 0x6524bc:c.instructions+=1;goto B6524bc;
case 0x6524be:goto L6524be;
case 0x6524c1:c.instructions+=4;goto B6524c1;
case 0x6524c3:c.instructions+=3;goto B6524c3;
case 0x6524c6:c.instructions+=2;goto B6524c6;
case 0x6524c8:c.instructions+=1;goto B6524c8;
case 0x6524cd:goto L6524cd;
case 0x6524cf:goto L6524cf;
case 0x6524d1:goto L6524d1;
case 0x6524d3:c.instructions+=4;goto B6524d3;
case 0x6524d6:c.instructions+=3;goto B6524d6;
case 0x6524d8:c.instructions+=2;goto B6524d8;
case 0x6524db:c.instructions+=1;goto B6524db;
case 0x6524e1:goto L6524e1;
case 0x6524e3:c.instructions+=5;goto B6524e3;
case 0x6524e6:c.instructions+=4;goto B6524e6;
case 0x6524e9:c.instructions+=3;goto B6524e9;
case 0x6524ec:c.instructions+=2;goto B6524ec;
case 0x6524ef:c.instructions+=1;goto B6524ef;
case 0x6524f5:goto L6524f5;
case 0x6524f8:c.instructions+=1;goto B6524f8;
case 0x6524fe:goto L6524fe;
case 0x652502:c.instructions+=1;goto B652502;
case 0x652508:goto L652508;
case 0x65250b:c.instructions+=1;goto B65250b;
case 0x65250e:goto L65250e;
case 0x652511:c.instructions+=3;goto B652511;
case 0x652514:c.instructions+=2;goto B652514;
case 0x652516:c.instructions+=1;goto B652516;
case 0x652518:goto L652518;
case 0x65251a:c.instructions+=1;goto B65251a;
case 0x65251c:goto L65251c;
case 0x65251f:c.instructions+=3;goto B65251f;
case 0x652521:c.instructions+=2;goto B652521;
case 0x652523:c.instructions+=1;goto B652523;
case 0x652525:goto L652525;
case 0x652528:c.instructions+=1;goto B652528;
case 0x65252b:goto L65252b;
case 0x65252e:c.instructions+=2;goto B65252e;
case 0x652531:c.instructions+=1;goto B652531;
case 0x652533:goto L652533;
case 0x652536:c.instructions+=2;goto B652536;
case 0x652538:c.instructions+=1;goto B652538;
case 0x65253a:goto L65253a;
case 0x65253c:goto L65253c;
case 0x65253e:c.instructions+=1;goto B65253e;
case 0x65253f:goto L65253f;
case 0x652541:goto L652541;
case 0x652543:c.instructions+=1;goto B652543;
case 0x652545:goto L652545;
case 0x652547:c.instructions+=1;goto B652547;
case 0x65254c:goto L65254c;
case 0x65254e:c.instructions+=1;goto B65254e;
case 0x652550:goto L652550;
case 0x652552:c.instructions+=12;goto B652552;
case 0x652554:c.instructions+=11;goto B652554;
case 0x652556:c.instructions+=10;goto B652556;
case 0x65255c:c.instructions+=9;goto B65255c;
case 0x652560:c.instructions+=8;goto B652560;
case 0x652561:c.instructions+=7;goto B652561;
case 0x652564:c.instructions+=6;goto B652564;
case 0x652567:c.instructions+=5;goto B652567;
case 0x652569:c.instructions+=4;goto B652569;
case 0x65256c:c.instructions+=3;goto B65256c;
case 0x65256d:c.instructions+=2;goto B65256d;
case 0x65256f:c.instructions+=1;goto B65256f;
case 0x652574:goto L652574;
case 0x652576:goto L652576;
case 0x652578:goto L652578;
case 0x65257b:c.instructions+=1;goto B65257b;
case 0x65257e:goto L65257e;
case 0x652580:c.instructions+=1;goto B652580;
case 0x652586:goto L652586;
case 0x652589:c.instructions+=2;goto B652589;
case 0x65258b:c.instructions+=1;goto B65258b;
case 0x65258e:goto L65258e;
case 0x652590:c.instructions+=3;goto B652590;
case 0x652593:c.instructions+=2;goto B652593;
case 0x652596:c.instructions+=1;goto B652596;
case 0x65259c:goto L65259c;
case 0x65259f:c.instructions+=2;goto B65259f;
case 0x6525a0:c.instructions+=1;goto B6525a0;
case 0x6525a5:goto L6525a5;
case 0x6525a7:c.instructions+=1;goto B6525a7;
case 0x6525ac:goto L6525ac;
case 0x6525ae:c.instructions+=11;goto B6525ae;
case 0x6525af:c.instructions+=10;goto B6525af;
case 0x6525b1:c.instructions+=9;goto B6525b1;
case 0x6525b2:c.instructions+=8;goto B6525b2;
case 0x6525b3:c.instructions+=7;goto B6525b3;
case 0x6525b4:c.instructions+=6;goto B6525b4;
case 0x6525b5:c.instructions+=5;goto B6525b5;
case 0x6525b8:c.instructions+=4;goto B6525b8;
case 0x6525ba:c.instructions+=3;goto B6525ba;
case 0x6525bc:c.instructions+=2;goto B6525bc;
case 0x6525bf:c.instructions+=1;goto B6525bf;
case 0x6525c5:goto L6525c5;
case 0x6525c9:c.instructions+=1;goto B6525c9;
case 0x6525cf:goto L6525cf;
case 0x6525d2:c.instructions+=2;goto B6525d2;
case 0x6525d4:c.instructions+=1;goto B6525d4;
case 0x6525da:goto L6525da;
case 0x6525de:c.instructions+=1;goto B6525de;
case 0x6525e4:goto L6525e4;
case 0x6525e6:c.instructions+=4;goto B6525e6;
case 0x6525eb:c.instructions+=3;goto B6525eb;
case 0x6525ed:c.instructions+=2;goto B6525ed;
case 0x6525f2:c.instructions+=1;goto B6525f2;
case 0x6525f4:goto L6525f4;
case 0x6525f9:c.instructions+=1;goto B6525f9;
case 0x6525fb:goto L6525fb;
case 0x652600:c.instructions+=1;goto B652600;
case 0x652602:goto L652602;
case 0x652604:c.instructions+=1;goto B652604;
case 0x65260a:goto L65260a;
case 0x652611:c.instructions+=1;goto B652611;
case 0x652613:goto L652613;
case 0x65261a:c.instructions+=1;goto B65261a;
case 0x65261c:goto L65261c;
case 0x652623:c.instructions+=1;goto B652623;
case 0x652625:goto L652625;
case 0x65262c:goto L65262c;
case 0x65262e:c.instructions+=1;goto B65262e;
case 0x652633:goto L652633;
case 0x652635:c.instructions+=1;goto B652635;
case 0x652637:goto L652637;
case 0x65263a:c.instructions+=8;goto B65263a;
case 0x65263b:c.instructions+=7;goto B65263b;
case 0x65263d:c.instructions+=6;goto B65263d;
case 0x65263e:c.instructions+=5;goto B65263e;
case 0x65263f:c.instructions+=4;goto B65263f;
case 0x652640:c.instructions+=3;goto B652640;
case 0x652641:c.instructions+=2;goto B652641;
case 0x652643:c.instructions+=1;goto B652643;
case 0x652648:goto L652648;
case 0x65264a:c.instructions+=1;goto B65264a;
case 0x65264c:goto L65264c;
case 0x65264e:goto L65264e;
case 0x652650:c.instructions+=1;goto B652650;
case 0x652656:goto L652656;
case 0x652658:c.instructions+=1;goto B652658;
case 0x65265d:goto L65265d;
case 0x65265f:c.instructions+=1;goto B65265f;
case 0x652661:goto L652661;
case 0x652666:c.instructions+=6;goto B652666;
case 0x652668:c.instructions+=5;goto B652668;
case 0x65266a:c.instructions+=4;goto B65266a;
case 0x65266d:c.instructions+=3;goto B65266d;
case 0x65266f:c.instructions+=2;goto B65266f;
case 0x652671:c.instructions+=1;goto B652671;
case 0x652676:goto L652676;
case 0x652678:goto L652678;
case 0x65267a:goto L65267a;
case 0x65267c:c.instructions+=2;goto B65267c;
case 0x65267f:c.instructions+=1;goto B65267f;
case 0x652681:goto L652681;
case 0x652683:c.instructions+=1;goto B652683;
case 0x652688:goto L652688;
case 0x65268a:c.instructions+=1;goto B65268a;
case 0x65268c:goto L65268c;
case 0x65268f:c.instructions+=6;goto B65268f;
case 0x652690:c.instructions+=5;goto B652690;
case 0x652693:c.instructions+=4;goto B652693;
case 0x652695:c.instructions+=3;goto B652695;
case 0x652698:c.instructions+=2;goto B652698;
case 0x65269a:c.instructions+=1;goto B65269a;
case 0x65269f:goto L65269f;
case 0x6526a1:goto L6526a1;
case 0x6526a3:goto L6526a3;
case 0x6526a5:c.instructions+=2;goto B6526a5;
case 0x6526a8:c.instructions+=1;goto B6526a8;
case 0x6526aa:goto L6526aa;
case 0x6526ac:c.instructions+=1;goto B6526ac;
case 0x6526b1:goto L6526b1;
case 0x6526b3:c.instructions+=1;goto B6526b3;
case 0x6526b5:goto L6526b5;
case 0x6526ba:c.instructions+=4;goto B6526ba;
case 0x6526bb:c.instructions+=3;goto B6526bb;
case 0x6526be:c.instructions+=2;goto B6526be;
case 0x6526c0:c.instructions+=1;goto B6526c0;
case 0x6526c5:goto L6526c5;
case 0x6526c7:goto L6526c7;
case 0x6526c9:goto L6526c9;
case 0x6526cb:c.instructions+=1;goto B6526cb;
case 0x6526cd:goto L6526cd;
case 0x6526d0:c.instructions+=3;goto B6526d0;
case 0x6526d1:c.instructions+=2;goto B6526d1;
case 0x6526d4:c.instructions+=1;goto B6526d4;
case 0x6526d9:goto L6526d9;
case 0x6526db:c.instructions+=1;goto B6526db;
case 0x6526dd:goto L6526dd;
case 0x6526df:goto L6526df;
case 0x6526e0:c.instructions+=4;goto B6526e0;
case 0x6526e1:c.instructions+=3;goto B6526e1;
case 0x6526e2:c.instructions+=2;goto B6526e2;
case 0x6526e3:c.instructions+=1;goto B6526e3;
case 0x6526e6:goto L6526e6;
case 0x6526e8:c.instructions+=10;goto B6526e8;
case 0x6526e9:c.instructions+=9;goto B6526e9;
case 0x6526eb:c.instructions+=8;goto B6526eb;
case 0x6526ec:c.instructions+=7;goto B6526ec;
case 0x6526ed:c.instructions+=6;goto B6526ed;
case 0x6526ee:c.instructions+=5;goto B6526ee;
case 0x6526ef:c.instructions+=4;goto B6526ef;
case 0x6526f1:c.instructions+=3;goto B6526f1;
case 0x6526f3:c.instructions+=2;goto B6526f3;
case 0x6526f6:c.instructions+=1;goto B6526f6;
case 0x6526fb:goto L6526fb;
case 0x6526fd:c.instructions+=2;goto B6526fd;
case 0x6526ff:c.instructions+=1;goto B6526ff;
case 0x652701:goto L652701;
case 0x652704:c.instructions+=8;goto B652704;
case 0x652705:c.instructions+=7;goto B652705;
case 0x652707:c.instructions+=6;goto B652707;
case 0x652708:c.instructions+=5;goto B652708;
case 0x652709:c.instructions+=4;goto B652709;
case 0x65270a:c.instructions+=3;goto B65270a;
case 0x65270b:c.instructions+=2;goto B65270b;
case 0x65270d:c.instructions+=1;goto B65270d;
case 0x652712:goto L652712;
case 0x652714:c.instructions+=1;goto B652714;
case 0x652716:goto L652716;
case 0x652718:goto L652718;
case 0x65271a:c.instructions+=1;goto B65271a;
case 0x652720:goto L652720;
case 0x652722:c.instructions+=1;goto B652722;
case 0x652727:goto L652727;
case 0x652729:c.instructions+=1;goto B652729;
case 0x65272b:goto L65272b;
case 0x652730:c.instructions+=6;goto B652730;
case 0x652732:c.instructions+=5;goto B652732;
case 0x652734:c.instructions+=4;goto B652734;
case 0x652736:c.instructions+=3;goto B652736;
case 0x652738:c.instructions+=2;goto B652738;
case 0x65273a:c.instructions+=1;goto B65273a;
case 0x65273f:goto L65273f;
case 0x652741:goto L652741;
case 0x652743:goto L652743;
case 0x652745:c.instructions+=2;goto B652745;
case 0x652748:c.instructions+=1;goto B652748;
case 0x65274a:goto L65274a;
case 0x65274c:c.instructions+=1;goto B65274c;
case 0x652751:goto L652751;
case 0x652753:c.instructions+=1;goto B652753;
case 0x652755:goto L652755;
case 0x652758:c.instructions+=5;goto B652758;
case 0x652759:c.instructions+=4;goto B652759;
case 0x65275a:c.instructions+=3;goto B65275a;
case 0x65275c:c.instructions+=2;goto B65275c;
case 0x65275e:c.instructions+=1;goto B65275e;
case 0x652763:goto L652763;
case 0x652765:c.instructions+=1;goto B652765;
case 0x652767:goto L652767;
case 0x652769:goto L652769;
case 0x65276b:c.instructions+=1;goto B65276b;
case 0x65276d:goto L65276d;
case 0x652770:c.instructions+=2;goto B652770;
case 0x652773:c.instructions+=1;goto B652773;
case 0x652775:goto L652775;
case 0x652778:c.instructions+=1;goto B652778;
case 0x65277d:goto L65277d;
case 0x65277f:c.instructions+=2;goto B65277f;
case 0x652782:c.instructions+=1;goto B652782;
case 0x652784:goto L652784;
case 0x652786:c.instructions+=1;goto B652786;
case 0x65278b:goto L65278b;
case 0x65278d:c.instructions+=1;goto B65278d;
case 0x65278f:goto L65278f;
case 0x652794:c.instructions+=4;goto B652794;
case 0x652795:c.instructions+=3;goto B652795;
case 0x652798:c.instructions+=2;goto B652798;
case 0x65279a:c.instructions+=1;goto B65279a;
case 0x65279f:goto L65279f;
case 0x6527a1:goto L6527a1;
case 0x6527a3:goto L6527a3;
case 0x6527a5:c.instructions+=1;goto B6527a5;
case 0x6527a7:goto L6527a7;
case 0x6527a9:c.instructions+=1;goto B6527a9;
case 0x6527ab:goto L6527ab;
case 0x6527ae:c.instructions+=3;goto B6527ae;
case 0x6527af:c.instructions+=2;goto B6527af;
case 0x6527b2:c.instructions+=1;goto B6527b2;
case 0x6527b7:goto L6527b7;
case 0x6527b9:goto L6527b9;
case 0x6527ba:c.instructions+=4;goto B6527ba;
case 0x6527bb:c.instructions+=3;goto B6527bb;
case 0x6527bc:c.instructions+=2;goto B6527bc;
case 0x6527bd:c.instructions+=1;goto B6527bd;
case 0x6527c0:goto L6527c0;
case 0x6527c2:c.instructions+=10;goto B6527c2;
case 0x6527c3:c.instructions+=9;goto B6527c3;
case 0x6527c5:c.instructions+=8;goto B6527c5;
case 0x6527c6:c.instructions+=7;goto B6527c6;
case 0x6527c7:c.instructions+=6;goto B6527c7;
case 0x6527c8:c.instructions+=5;goto B6527c8;
case 0x6527c9:c.instructions+=4;goto B6527c9;
case 0x6527cb:c.instructions+=3;goto B6527cb;
case 0x6527cd:c.instructions+=2;goto B6527cd;
case 0x6527d0:c.instructions+=1;goto B6527d0;
case 0x6527d5:goto L6527d5;
case 0x6527d7:c.instructions+=2;goto B6527d7;
case 0x6527d9:c.instructions+=1;goto B6527d9;
case 0x6527db:goto L6527db;
case 0x6527de:c.instructions+=8;goto B6527de;
case 0x6527df:c.instructions+=7;goto B6527df;
case 0x6527e1:c.instructions+=6;goto B6527e1;
case 0x6527e2:c.instructions+=5;goto B6527e2;
case 0x6527e3:c.instructions+=4;goto B6527e3;
case 0x6527e4:c.instructions+=3;goto B6527e4;
case 0x6527e5:c.instructions+=2;goto B6527e5;
case 0x6527e7:c.instructions+=1;goto B6527e7;
case 0x6527ec:goto L6527ec;
case 0x6527ee:c.instructions+=1;goto B6527ee;
case 0x6527f0:goto L6527f0;
case 0x6527f2:goto L6527f2;
case 0x6527f4:c.instructions+=1;goto B6527f4;
case 0x6527fa:goto L6527fa;
case 0x6527fc:c.instructions+=1;goto B6527fc;
case 0x652801:goto L652801;
case 0x652803:c.instructions+=1;goto B652803;
case 0x652805:goto L652805;
case 0x65280a:c.instructions+=6;goto B65280a;
case 0x65280c:c.instructions+=5;goto B65280c;
case 0x65280e:c.instructions+=4;goto B65280e;
case 0x652810:c.instructions+=3;goto B652810;
case 0x652812:c.instructions+=2;goto B652812;
case 0x652814:c.instructions+=1;goto B652814;
case 0x652819:goto L652819;
case 0x65281b:goto L65281b;
case 0x65281d:goto L65281d;
case 0x65281f:c.instructions+=2;goto B65281f;
case 0x652822:c.instructions+=1;goto B652822;
case 0x652824:goto L652824;
case 0x652826:c.instructions+=1;goto B652826;
case 0x65282b:goto L65282b;
case 0x65282d:c.instructions+=1;goto B65282d;
case 0x65282f:goto L65282f;
case 0x652832:c.instructions+=5;goto B652832;
case 0x652833:c.instructions+=4;goto B652833;
case 0x652834:c.instructions+=3;goto B652834;
case 0x652836:c.instructions+=2;goto B652836;
case 0x652838:c.instructions+=1;goto B652838;
case 0x65283d:goto L65283d;
case 0x65283f:c.instructions+=1;goto B65283f;
case 0x652841:goto L652841;
case 0x652843:goto L652843;
case 0x652845:c.instructions+=1;goto B652845;
case 0x652847:goto L652847;
case 0x65284a:c.instructions+=2;goto B65284a;
case 0x65284d:c.instructions+=1;goto B65284d;
case 0x65284f:goto L65284f;
case 0x652852:c.instructions+=1;goto B652852;
case 0x652857:goto L652857;
case 0x652859:c.instructions+=2;goto B652859;
case 0x65285c:c.instructions+=1;goto B65285c;
case 0x65285e:goto L65285e;
case 0x652860:c.instructions+=1;goto B652860;
case 0x652865:goto L652865;
case 0x652867:c.instructions+=1;goto B652867;
case 0x652869:goto L652869;
case 0x65286e:c.instructions+=4;goto B65286e;
case 0x65286f:c.instructions+=3;goto B65286f;
case 0x652872:c.instructions+=2;goto B652872;
case 0x652874:c.instructions+=1;goto B652874;
case 0x652879:goto L652879;
case 0x65287b:goto L65287b;
case 0x65287d:goto L65287d;
case 0x65287f:c.instructions+=1;goto B65287f;
case 0x652881:goto L652881;
case 0x652883:c.instructions+=1;goto B652883;
case 0x652885:goto L652885;
case 0x652888:c.instructions+=3;goto B652888;
case 0x652889:c.instructions+=2;goto B652889;
case 0x65288c:c.instructions+=1;goto B65288c;
case 0x652891:goto L652891;
case 0x652893:goto L652893;
case 0x652894:c.instructions+=4;goto B652894;
case 0x652895:c.instructions+=3;goto B652895;
case 0x652896:c.instructions+=2;goto B652896;
case 0x652897:c.instructions+=1;goto B652897;
case 0x65289a:goto L65289a;
case 0x65289c:c.instructions+=8;goto B65289c;
case 0x65289d:c.instructions+=7;goto B65289d;
case 0x65289f:c.instructions+=6;goto B65289f;
case 0x6528a0:c.instructions+=5;goto B6528a0;
case 0x6528a3:c.instructions+=4;goto B6528a3;
case 0x6528a5:c.instructions+=3;goto B6528a5;
case 0x6528a7:c.instructions+=2;goto B6528a7;
case 0x6528a9:c.instructions+=1;goto B6528a9;
case 0x6528af:goto L6528af;
case 0x6528b0:c.instructions+=1;goto B6528b0;
case 0x6528b6:goto L6528b6;
case 0x6528b7:c.instructions+=1;goto B6528b7;
case 0x6528bd:goto L6528bd;
case 0x6528be:c.instructions+=2;goto B6528be;
case 0x6528c1:c.instructions+=1;goto B6528c1;
case 0x6528c3:goto L6528c3;
case 0x6528c4:c.instructions+=3;goto B6528c4;
case 0x6528c6:c.instructions+=2;goto B6528c6;
case 0x6528c7:c.instructions+=1;goto B6528c7;
case 0x6528c9:goto L6528c9;
case 0x6528ca:c.instructions+=1;goto B6528ca;
case 0x6528cc:goto L6528cc;
case 0x6528d1:goto L6528d1;
case 0x6528d3:c.instructions+=1;goto B6528d3;
case 0x6528d5:goto L6528d5;
case 0x6528d7:c.instructions+=2;goto B6528d7;
case 0x6528d9:c.instructions+=1;goto B6528d9;
case 0x6528db:goto L6528db;
case 0x6528dc:c.instructions+=1;goto B6528dc;
case 0x6528e2:goto L6528e2;
case 0x6528e5:c.instructions+=4;goto B6528e5;
case 0x6528e8:c.instructions+=3;goto B6528e8;
case 0x6528eb:c.instructions+=2;goto B6528eb;
case 0x6528ee:c.instructions+=1;goto B6528ee;
case 0x6528f3:goto L6528f3;
case 0x6528f5:goto L6528f5;
case 0x6528f8:c.instructions+=1;goto B6528f8;
case 0x6528fd:goto L6528fd;
case 0x6528ff:c.instructions+=2;goto B6528ff;
case 0x652901:c.instructions+=1;goto B652901;
case 0x652903:goto L652903;
case 0x652904:c.instructions+=1;goto B652904;
case 0x652906:goto L652906;
case 0x652907:c.instructions+=1;goto B652907;
case 0x652909:goto L652909;
case 0x65290a:c.instructions+=1;goto B65290a;
case 0x652910:goto L652910;
case 0x652913:c.instructions+=1;goto B652913;
case 0x652915:goto L652915;
case 0x652918:c.instructions+=4;goto B652918;
case 0x65291a:c.instructions+=3;goto B65291a;
case 0x65291d:c.instructions+=2;goto B65291d;
case 0x652920:c.instructions+=1;goto B652920;
case 0x652922:goto L652922;
case 0x652928:c.instructions+=1;goto B652928;
case 0x65292a:goto L65292a;
case 0x65292d:c.instructions+=1;goto B65292d;
case 0x65292f:goto L65292f;
case 0x652931:c.instructions+=4;goto B652931;
case 0x652934:c.instructions+=3;goto B652934;
case 0x652937:c.instructions+=2;goto B652937;
case 0x65293a:c.instructions+=1;goto B65293a;
case 0x65293d:goto L65293d;
case 0x652940:c.instructions+=1;goto B652940;
case 0x652945:goto L652945;
case 0x65294b:goto L65294b;
case 0x652950:goto L652950;
case 0x652952:goto L652952;
case 0x652955:c.instructions+=1;goto B652955;
case 0x652957:goto L652957;
case 0x65295a:c.instructions+=3;goto B65295a;
case 0x65295c:c.instructions+=2;goto B65295c;
case 0x65295e:c.instructions+=1;goto B65295e;
case 0x652960:goto L652960;
case 0x652961:c.instructions+=1;goto B652961;
case 0x652963:goto L652963;
case 0x652964:c.instructions+=1;goto B652964;
case 0x652966:goto L652966;
case 0x652967:c.instructions+=1;goto B652967;
case 0x652969:goto L652969;
case 0x65296c:c.instructions+=5;goto B65296c;
case 0x652972:c.instructions+=4;goto B652972;
case 0x652975:c.instructions+=3;goto B652975;
case 0x652977:c.instructions+=2;goto B652977;
case 0x65297a:c.instructions+=1;goto B65297a;
case 0x65297c:goto L65297c;
case 0x652982:c.instructions+=1;goto B652982;
case 0x652984:goto L652984;
case 0x652986:c.instructions+=2;goto B652986;
case 0x652989:c.instructions+=1;goto B652989;
case 0x65298c:goto L65298c;
case 0x65298f:c.instructions+=1;goto B65298f;
case 0x652991:goto L652991;
case 0x652994:c.instructions+=3;goto B652994;
case 0x652996:c.instructions+=2;goto B652996;
case 0x652998:c.instructions+=1;goto B652998;
case 0x65299a:goto L65299a;
case 0x65299b:c.instructions+=1;goto B65299b;
case 0x65299d:goto L65299d;
case 0x65299e:c.instructions+=1;goto B65299e;
case 0x6529a0:goto L6529a0;
case 0x6529a1:c.instructions+=1;goto B6529a1;
case 0x6529a3:goto L6529a3;
case 0x6529a8:c.instructions+=1;goto B6529a8;
case 0x6529aa:goto L6529aa;
case 0x6529ad:c.instructions+=5;goto B6529ad;
case 0x6529b3:c.instructions+=4;goto B6529b3;
case 0x6529b5:c.instructions+=3;goto B6529b5;
case 0x6529b7:c.instructions+=2;goto B6529b7;
case 0x6529ba:c.instructions+=1;goto B6529ba;
case 0x6529bc:goto L6529bc;
case 0x6529be:c.instructions+=1;goto B6529be;
case 0x6529bf:goto L6529bf;
case 0x6529c2:c.instructions+=1;goto B6529c2;
case 0x6529c4:goto L6529c4;
case 0x6529c6:c.instructions+=3;goto B6529c6;
case 0x6529c9:c.instructions+=2;goto B6529c9;
case 0x6529cc:c.instructions+=1;goto B6529cc;
case 0x6529cf:goto L6529cf;
case 0x6529d1:goto L6529d1;
case 0x6529d2:c.instructions+=2;goto B6529d2;
case 0x6529d3:c.instructions+=1;goto B6529d3;
case 0x6529d6:goto L6529d6;
case 0x6529d8:c.instructions+=6;goto B6529d8;
case 0x6529d9:c.instructions+=5;goto B6529d9;
case 0x6529db:c.instructions+=4;goto B6529db;
case 0x6529de:c.instructions+=3;goto B6529de;
case 0x6529e0:c.instructions+=2;goto B6529e0;
case 0x6529e3:c.instructions+=1;goto B6529e3;
case 0x6529e5:goto L6529e5;
case 0x6529e6:c.instructions+=1;goto B6529e6;
case 0x6529e8:goto L6529e8;
case 0x6529e9:c.instructions+=1;goto B6529e9;
case 0x6529eb:goto L6529eb;
case 0x6529ec:c.instructions+=1;goto B6529ec;
case 0x6529ee:goto L6529ee;
case 0x6529f3:c.instructions+=1;goto B6529f3;
case 0x6529f5:goto L6529f5;
case 0x6529f8:c.instructions+=5;goto B6529f8;
case 0x6529fe:c.instructions+=4;goto B6529fe;
case 0x652a01:c.instructions+=3;goto B652a01;
case 0x652a03:c.instructions+=2;goto B652a03;
case 0x652a06:c.instructions+=1;goto B652a06;
case 0x652a08:goto L652a08;
case 0x652a0e:c.instructions+=1;goto B652a0e;
case 0x652a10:goto L652a10;
case 0x652a16:goto L652a16;
case 0x652a1b:goto L652a1b;
case 0x652a1d:goto L652a1d;
case 0x652a20:c.instructions+=1;goto B652a20;
case 0x652a22:goto L652a22;
case 0x652a24:c.instructions+=2;goto B652a24;
case 0x652a27:c.instructions+=1;goto B652a27;
case 0x652a2a:goto L652a2a;
case 0x652a2d:c.instructions+=2;goto B652a2d;
case 0x652a2f:c.instructions+=1;goto B652a2f;
case 0x652a31:goto L652a31;
case 0x652a32:c.instructions+=1;goto B652a32;
case 0x652a35:goto L652a35;
case 0x652a37:c.instructions+=7;goto B652a37;
case 0x652a38:c.instructions+=6;goto B652a38;
case 0x652a3a:c.instructions+=5;goto B652a3a;
case 0x652a3b:c.instructions+=4;goto B652a3b;
case 0x652a3e:c.instructions+=3;goto B652a3e;
case 0x652a40:c.instructions+=2;goto B652a40;
case 0x652a43:c.instructions+=1;goto B652a43;
case 0x652a45:goto L652a45;
case 0x652a46:c.instructions+=1;goto B652a46;
case 0x652a48:goto L652a48;
case 0x652a49:c.instructions+=1;goto B652a49;
case 0x652a4b:goto L652a4b;
case 0x652a4c:c.instructions+=1;goto B652a4c;
case 0x652a4e:goto L652a4e;
case 0x652a53:c.instructions+=1;goto B652a53;
case 0x652a55:goto L652a55;
case 0x652a58:c.instructions+=2;goto B652a58;
case 0x652a5b:c.instructions+=1;goto B652a5b;
case 0x652a5d:goto L652a5d;
case 0x652a60:c.instructions+=5;goto B652a60;
case 0x652a66:c.instructions+=4;goto B652a66;
case 0x652a69:c.instructions+=3;goto B652a69;
case 0x652a6b:c.instructions+=2;goto B652a6b;
case 0x652a6e:c.instructions+=1;goto B652a6e;
case 0x652a70:goto L652a70;
case 0x652a76:c.instructions+=1;goto B652a76;
case 0x652a78:goto L652a78;
case 0x652a7e:goto L652a7e;
case 0x652a83:goto L652a83;
case 0x652a85:goto L652a85;
case 0x652a88:c.instructions+=5;goto B652a88;
case 0x652a8e:c.instructions+=4;goto B652a8e;
case 0x652a90:c.instructions+=3;goto B652a90;
case 0x652a92:c.instructions+=2;goto B652a92;
case 0x652a95:c.instructions+=1;goto B652a95;
case 0x652a97:goto L652a97;
case 0x652a99:c.instructions+=2;goto B652a99;
case 0x652a9a:c.instructions+=1;goto B652a9a;
case 0x652a9c:goto L652a9c;
case 0x652a9e:goto L652a9e;
case 0x652aa1:goto L652aa1;
case 0x652aa3:goto L652aa3;
case 0x652aa4:c.instructions+=2;goto B652aa4;
case 0x652aa5:c.instructions+=1;goto B652aa5;
case 0x652aa8:goto L652aa8;
case 0x652aaa:c.instructions+=13;goto B652aaa;
case 0x652aab:c.instructions+=12;goto B652aab;
case 0x652aad:c.instructions+=11;goto B652aad;
case 0x652ab0:c.instructions+=10;goto B652ab0;
case 0x652ab1:c.instructions+=9;goto B652ab1;
case 0x652ab4:c.instructions+=8;goto B652ab4;
case 0x652ab5:c.instructions+=7;goto B652ab5;
case 0x652ab6:c.instructions+=6;goto B652ab6;
case 0x652ab9:c.instructions+=5;goto B652ab9;
case 0x652abb:c.instructions+=4;goto B652abb;
case 0x652abd:c.instructions+=3;goto B652abd;
case 0x652ac0:c.instructions+=2;goto B652ac0;
case 0x652ac3:c.instructions+=1;goto B652ac3;
case 0x652ac9:goto L652ac9;
case 0x652acc:c.instructions+=2;goto B652acc;
case 0x652ace:c.instructions+=1;goto B652ace;
case 0x652ad4:goto L652ad4;
case 0x652ad7:c.instructions+=4;goto B652ad7;
case 0x652ad8:c.instructions+=3;goto B652ad8;
case 0x652ad9:c.instructions+=2;goto B652ad9;
case 0x652adc:c.instructions+=1;goto B652adc;
case 0x652ae1:goto L652ae1;
case 0x652ae3:c.instructions+=1;goto B652ae3;
case 0x652ae5:goto L652ae5;
case 0x652ae8:c.instructions+=4;goto B652ae8;
case 0x652ae9:c.instructions+=3;goto B652ae9;
case 0x652aea:c.instructions+=2;goto B652aea;
case 0x652aed:c.instructions+=1;goto B652aed;
case 0x652af2:goto L652af2;
case 0x652af4:c.instructions+=1;goto B652af4;
case 0x652af6:goto L652af6;
case 0x652af9:c.instructions+=2;goto B652af9;
case 0x652afc:c.instructions+=1;goto B652afc;
case 0x652b02:goto L652b02;
case 0x652b04:c.instructions+=3;goto B652b04;
case 0x652b07:c.instructions+=2;goto B652b07;
case 0x652b0d:c.instructions+=1;goto B652b0d;
case 0x652b13:goto L652b13;
case 0x652b18:c.instructions+=2;goto B652b18;
case 0x652b1b:c.instructions+=1;goto B652b1b;
case 0x652b1d:goto L652b1d;
case 0x652b1f:c.instructions+=1;goto B652b1f;
case 0x652b25:goto L652b25;
case 0x652b27:c.instructions+=6;goto B652b27;
case 0x652b29:c.instructions+=5;goto B652b29;
case 0x652b2b:c.instructions+=4;goto B652b2b;
case 0x652b2c:c.instructions+=3;goto B652b2c;
case 0x652b2d:c.instructions+=2;goto B652b2d;
case 0x652b30:c.instructions+=1;goto B652b30;
case 0x652b32:goto L652b32;
case 0x652b35:c.instructions+=2;goto B652b35;
case 0x652b38:c.instructions+=1;goto B652b38;
case 0x652b3b:goto L652b3b;
case 0x652b3d:c.instructions+=3;goto B652b3d;
case 0x652b3f:c.instructions+=2;goto B652b3f;
case 0x652b41:c.instructions+=1;goto B652b41;
case 0x652b43:goto L652b43;
case 0x652b45:c.instructions+=1;goto B652b45;
case 0x652b47:goto L652b47;
case 0x652b4a:c.instructions+=3;goto B652b4a;
case 0x652b4c:c.instructions+=2;goto B652b4c;
case 0x652b4f:c.instructions+=1;goto B652b4f;
case 0x652b51:goto L652b51;
case 0x652b52:c.instructions+=5;goto B652b52;
case 0x652b53:c.instructions+=4;goto B652b53;
case 0x652b54:c.instructions+=3;goto B652b54;
case 0x652b55:c.instructions+=2;goto B652b55;
case 0x652b57:c.instructions+=1;goto B652b57;
case 0x652b59:goto L652b59;
case 0x652b5b:c.instructions+=1;goto B652b5b;
case 0x652b5d:goto L652b5d;
case 0x652b5f:c.instructions+=1;goto B652b5f;
case 0x652b62:goto L652b62;
case 0x652b64:c.instructions+=1;goto B652b64;
case 0x652b66:goto L652b66;
case 0x652b6b:goto L652b6b;
case 0x652b6d:c.instructions+=7;goto B652b6d;
case 0x652b70:c.instructions+=6;goto B652b70;
case 0x652b73:c.instructions+=5;goto B652b73;
case 0x652b75:c.instructions+=4;goto B652b75;
case 0x652b77:c.instructions+=3;goto B652b77;
case 0x652b7a:c.instructions+=2;goto B652b7a;
case 0x652b7c:c.instructions+=1;goto B652b7c;
case 0x652b7e:goto L652b7e;
case 0x652b85:goto L652b85;
case 0x652b88:c.instructions+=4;goto B652b88;
case 0x652b8a:c.instructions+=3;goto B652b8a;
case 0x652b8d:c.instructions+=2;goto B652b8d;
case 0x652b90:c.instructions+=1;goto B652b90;
case 0x652b96:goto L652b96;
case 0x652b99:c.instructions+=2;goto B652b99;
case 0x652b9c:c.instructions+=1;goto B652b9c;
case 0x652b9f:goto L652b9f;
case 0x652ba2:c.instructions+=4;goto B652ba2;
case 0x652ba5:c.instructions+=3;goto B652ba5;
case 0x652ba7:c.instructions+=2;goto B652ba7;
case 0x652ba9:c.instructions+=1;goto B652ba9;
case 0x652bab:goto L652bab;
case 0x652bae:c.instructions+=2;goto B652bae;
case 0x652bb2:c.instructions+=1;goto B652bb2;
case 0x652bb4:goto L652bb4;
case 0x652bb7:c.instructions+=1;goto B652bb7;
case 0x652bb8:goto L652bb8;
case 0x652bbc:c.instructions+=1;goto B652bbc;
case 0x652bbe:goto L652bbe;
case 0x652bc1:c.instructions+=2;goto B652bc1;
case 0x652bc5:c.instructions+=1;goto B652bc5;
case 0x652bcb:goto L652bcb;
case 0x652bce:c.instructions+=2;goto B652bce;
case 0x652bd0:c.instructions+=1;goto B652bd0;
case 0x652bd6:goto L652bd6;
case 0x652bd9:c.instructions+=4;goto B652bd9;
case 0x652bdc:c.instructions+=3;goto B652bdc;
case 0x652bde:c.instructions+=2;goto B652bde;
case 0x652be1:c.instructions+=1;goto B652be1;
case 0x652be3:goto L652be3;
case 0x652be6:c.instructions+=2;goto B652be6;
case 0x652be9:c.instructions+=1;goto B652be9;
case 0x652beb:goto L652beb;
case 0x652bef:goto L652bef;
case 0x652bf3:c.instructions+=1;goto B652bf3;
case 0x652bf5:goto L652bf5;
case 0x652bf8:c.instructions+=4;goto B652bf8;
case 0x652bfa:c.instructions+=3;goto B652bfa;
case 0x652bfd:c.instructions+=2;goto B652bfd;
case 0x652bfe:c.instructions+=1;goto B652bfe;
case 0x652c03:goto L652c03;
case 0x652c05:c.instructions+=1;goto B652c05;
case 0x652c07:goto L652c07;
case 0x652c0a:c.instructions+=3;goto B652c0a;
case 0x652c0d:c.instructions+=2;goto B652c0d;
case 0x652c0e:c.instructions+=1;goto B652c0e;
case 0x652c13:goto L652c13;
case 0x652c16:goto L652c16;
case 0x652c1a:c.instructions+=1;goto B652c1a;
case 0x652c1c:goto L652c1c;
case 0x652c1f:c.instructions+=2;goto B652c1f;
case 0x652c22:c.instructions+=1;goto B652c22;
case 0x652c27:goto L652c27;
case 0x652c29:c.instructions+=1;goto B652c29;
case 0x652c2b:goto L652c2b;
case 0x652c2e:c.instructions+=4;goto B652c2e;
case 0x652c2f:c.instructions+=3;goto B652c2f;
case 0x652c30:c.instructions+=2;goto B652c30;
case 0x652c33:c.instructions+=1;goto B652c33;
case 0x652c38:goto L652c38;
case 0x652c3a:c.instructions+=1;goto B652c3a;
case 0x652c3c:goto L652c3c;
case 0x652c3f:c.instructions+=3;goto B652c3f;
case 0x652c40:c.instructions+=2;goto B652c40;
case 0x652c43:c.instructions+=1;goto B652c43;
case 0x652c48:goto L652c48;
case 0x652c4b:goto L652c4b;
case 0x652c4e:c.instructions+=3;goto B652c4e;
case 0x652c51:c.instructions+=2;goto B652c51;
case 0x652c54:c.instructions+=1;goto B652c54;
case 0x652c56:goto L652c56;
case 0x652c58:c.instructions+=1;goto B652c58;
case 0x652c5a:goto L652c5a;
case 0x652c5c:c.instructions+=1;goto B652c5c;
case 0x652c62:goto L652c62;
case 0x652c66:c.instructions+=1;goto B652c66;
case 0x652c68:goto L652c68;
case 0x652c6b:c.instructions+=1;goto B652c6b;
case 0x652c6d:goto L652c6d;
case 0x652c70:goto L652c70;
case 0x652c71:c.instructions+=4;goto B652c71;
case 0x652c72:c.instructions+=3;goto B652c72;
case 0x652c73:c.instructions+=2;goto B652c73;
case 0x652c74:c.instructions+=1;goto B652c74;
case 0x652c77:goto L652c77;
case 0x652c79:c.instructions+=8;goto B652c79;
case 0x652c7a:c.instructions+=7;goto B652c7a;
case 0x652c7c:c.instructions+=6;goto B652c7c;
case 0x652c7d:c.instructions+=5;goto B652c7d;
case 0x652c7e:c.instructions+=4;goto B652c7e;
case 0x652c7f:c.instructions+=3;goto B652c7f;
case 0x652c81:c.instructions+=2;goto B652c81;
case 0x652c83:c.instructions+=1;goto B652c83;
case 0x652c88:goto L652c88;
case 0x652c8a:c.instructions+=2;goto B652c8a;
case 0x652c8c:c.instructions+=1;goto B652c8c;
case 0x652c8e:goto L652c8e;
case 0x652c93:c.instructions+=4;goto B652c93;
case 0x652c96:c.instructions+=3;goto B652c96;
case 0x652c98:c.instructions+=2;goto B652c98;
case 0x652c99:c.instructions+=1;goto B652c99;
case 0x652c9e:goto L652c9e;
case 0x652ca0:c.instructions+=1;goto B652ca0;
case 0x652ca2:goto L652ca2;
case 0x652ca4:goto L652ca4;
case 0x652ca6:c.instructions+=1;goto B652ca6;
case 0x652ca8:goto L652ca8;
case 0x652ca9:c.instructions+=2;goto B652ca9;
case 0x652cab:c.instructions+=1;goto B652cab;
case 0x652cad:goto L652cad;
case 0x652cb0:c.instructions+=2;goto B652cb0;
case 0x652cb3:c.instructions+=1;goto B652cb3;
case 0x652cb5:goto L652cb5;
case 0x652cb8:c.instructions+=1;goto B652cb8;
case 0x652cbd:goto L652cbd;
case 0x652cbf:c.instructions+=4;goto B652cbf;
case 0x652cc1:c.instructions+=3;goto B652cc1;
case 0x652cc4:c.instructions+=2;goto B652cc4;
case 0x652cc6:c.instructions+=1;goto B652cc6;
case 0x652cc8:goto L652cc8;
case 0x652cc9:goto L652cc9;
case 0x652cce:goto L652cce;
case 0x652cd3:c.instructions+=1;goto B652cd3;
case 0x652cd5:goto L652cd5;
case 0x652cd8:c.instructions+=2;goto B652cd8;
case 0x652cd9:c.instructions+=1;goto B652cd9;
case 0x652cde:goto L652cde;
case 0x652ce0:c.instructions+=1;goto B652ce0;
case 0x652ce2:goto L652ce2;
case 0x652ce6:goto L652ce6;
case 0x652ce8:goto L652ce8;
case 0x652ce9:c.instructions+=4;goto B652ce9;
case 0x652cea:c.instructions+=3;goto B652cea;
case 0x652ceb:c.instructions+=2;goto B652ceb;
case 0x652cec:c.instructions+=1;goto B652cec;
case 0x652cef:goto L652cef;
case 0x652cf1:c.instructions+=8;goto B652cf1;
case 0x652cf2:c.instructions+=7;goto B652cf2;
case 0x652cf4:c.instructions+=6;goto B652cf4;
case 0x652cf7:c.instructions+=5;goto B652cf7;
case 0x652cf8:c.instructions+=4;goto B652cf8;
case 0x652cfb:c.instructions+=3;goto B652cfb;
case 0x652cfd:c.instructions+=2;goto B652cfd;
case 0x652d00:c.instructions+=1;goto B652d00;
case 0x652d02:goto L652d02;
case 0x652d05:c.instructions+=1;goto B652d05;
case 0x652d0b:goto L652d0b;
case 0x652d0d:c.instructions+=1;goto B652d0d;
case 0x652d12:goto L652d12;
case 0x652d16:c.instructions+=1;goto B652d16;
case 0x652d1c:goto L652d1c;
case 0x652d1f:c.instructions+=4;goto B652d1f;
case 0x652d23:c.instructions+=3;goto B652d23;
case 0x652d27:c.instructions+=2;goto B652d27;
case 0x652d2a:c.instructions+=1;goto B652d2a;
case 0x652d30:goto L652d30;
case 0x652d32:c.instructions+=25;goto B652d32;
case 0x652d33:c.instructions+=24;goto B652d33;
case 0x652d34:c.instructions+=23;goto B652d34;
case 0x652d37:c.instructions+=22;goto B652d37;
case 0x652d38:c.instructions+=21;goto B652d38;
case 0x652d39:c.instructions+=20;goto B652d39;
case 0x652d3a:c.instructions+=19;goto B652d3a;
case 0x652d3b:c.instructions+=18;goto B652d3b;
case 0x652d3e:c.instructions+=17;goto B652d3e;
case 0x652d40:c.instructions+=16;goto B652d40;
case 0x652d43:c.instructions+=15;goto B652d43;
case 0x652d44:c.instructions+=14;goto B652d44;
case 0x652d45:c.instructions+=13;goto B652d45;
case 0x652d46:c.instructions+=12;goto B652d46;
case 0x652d47:c.instructions+=11;goto B652d47;
case 0x652d49:c.instructions+=10;goto B652d49;
case 0x652d4c:c.instructions+=9;goto B652d4c;
case 0x652d4d:c.instructions+=8;goto B652d4d;
case 0x652d4e:c.instructions+=7;goto B652d4e;
case 0x652d51:c.instructions+=6;goto B652d51;
case 0x652d54:c.instructions+=5;goto B652d54;
case 0x652d56:c.instructions+=4;goto B652d56;
case 0x652d57:c.instructions+=3;goto B652d57;
case 0x652d58:c.instructions+=2;goto B652d58;
case 0x652d5b:c.instructions+=1;goto B652d5b;
case 0x652d61:goto L652d61;
case 0x652d65:goto L652d65;
case 0x652d68:c.instructions+=3;goto B652d68;
case 0x652d6b:c.instructions+=2;goto B652d6b;
case 0x652d6d:c.instructions+=1;goto B652d6d;
case 0x652d73:goto L652d73;
case 0x652d77:c.instructions+=1;goto B652d77;
case 0x652d7d:goto L652d7d;
case 0x652d80:c.instructions+=9;goto B652d80;
case 0x652d84:c.instructions+=8;goto B652d84;
case 0x652d87:c.instructions+=7;goto B652d87;
case 0x652d8b:c.instructions+=6;goto B652d8b;
case 0x652d8d:c.instructions+=5;goto B652d8d;
case 0x652d90:c.instructions+=4;goto B652d90;
case 0x652d94:c.instructions+=3;goto B652d94;
case 0x652d95:c.instructions+=2;goto B652d95;
case 0x652d97:c.instructions+=1;goto B652d97;
case 0x652d9c:goto L652d9c;
case 0x652d9e:c.instructions+=5;goto B652d9e;
case 0x652da0:c.instructions+=4;goto B652da0;
case 0x652da3:c.instructions+=3;goto B652da3;
case 0x652da4:c.instructions+=2;goto B652da4;
case 0x652da8:c.instructions+=1;goto B652da8;
case 0x652dae:goto L652dae;
case 0x652db1:c.instructions+=3;goto B652db1;
case 0x652db2:c.instructions+=2;goto B652db2;
case 0x652db4:c.instructions+=1;goto B652db4;
case 0x652db9:goto L652db9;
case 0x652dbb:c.instructions+=2;goto B652dbb;
case 0x652dbd:c.instructions+=1;goto B652dbd;
case 0x652dc3:goto L652dc3;
case 0x652dc7:c.instructions+=2;goto B652dc7;
case 0x652dca:c.instructions+=1;goto B652dca;
case 0x652dcc:goto L652dcc;
case 0x652dcf:c.instructions+=3;goto B652dcf;
case 0x652dd2:c.instructions+=2;goto B652dd2;
case 0x652dd5:c.instructions+=1;goto B652dd5;
case 0x652dd8:goto L652dd8;
case 0x652ddb:c.instructions+=4;goto B652ddb;
case 0x652dde:c.instructions+=3;goto B652dde;
case 0x652ddf:c.instructions+=2;goto B652ddf;
case 0x652de0:c.instructions+=1;goto B652de0;
case 0x652de5:goto L652de5;
case 0x652de7:c.instructions+=2;goto B652de7;
case 0x652de9:c.instructions+=1;goto B652de9;
case 0x652def:goto L652def;
case 0x652df2:c.instructions+=6;goto B652df2;
case 0x652df5:c.instructions+=5;goto B652df5;
case 0x652dfb:c.instructions+=4;goto B652dfb;
case 0x652dfe:c.instructions+=3;goto B652dfe;
case 0x652e01:c.instructions+=2;goto B652e01;
case 0x652e03:c.instructions+=1;goto B652e03;
case 0x652e05:goto L652e05;
case 0x652e08:c.instructions+=5;goto B652e08;
case 0x652e0b:c.instructions+=4;goto B652e0b;
case 0x652e0f:c.instructions+=3;goto B652e0f;
case 0x652e11:c.instructions+=2;goto B652e11;
case 0x652e14:c.instructions+=1;goto B652e14;
case 0x652e1a:goto L652e1a;
case 0x652e1d:c.instructions+=1;goto B652e1d;
case 0x652e20:goto L652e20;
case 0x652e23:c.instructions+=4;goto B652e23;
case 0x652e26:c.instructions+=3;goto B652e26;
case 0x652e29:c.instructions+=2;goto B652e29;
case 0x652e2c:c.instructions+=1;goto B652e2c;
case 0x652e32:goto L652e32;
case 0x652e39:c.instructions+=2;goto B652e39;
case 0x652e3c:c.instructions+=1;goto B652e3c;
case 0x652e43:goto L652e43;
case 0x652e48:c.instructions+=1;goto B652e48;
case 0x652e4d:goto L652e4d;
case 0x652e4f:c.instructions+=1;goto B652e4f;
case 0x652e55:goto L652e55;
case 0x652e58:c.instructions+=3;goto B652e58;
case 0x652e5b:c.instructions+=2;goto B652e5b;
case 0x652e5d:c.instructions+=1;goto B652e5d;
case 0x652e5f:goto L652e5f;
case 0x652e62:c.instructions+=5;goto B652e62;
case 0x652e64:c.instructions+=4;goto B652e64;
case 0x652e66:c.instructions+=3;goto B652e66;
case 0x652e69:c.instructions+=2;goto B652e69;
case 0x652e6a:c.instructions+=1;goto B652e6a;
case 0x652e6c:goto L652e6c;
case 0x652e71:goto L652e71;
case 0x652e73:c.instructions+=1;goto B652e73;
case 0x652e79:goto L652e79;
case 0x652e7c:c.instructions+=4;goto B652e7c;
case 0x652e7e:c.instructions+=3;goto B652e7e;
case 0x652e81:c.instructions+=2;goto B652e81;
case 0x652e83:c.instructions+=1;goto B652e83;
case 0x652e86:goto L652e86;
case 0x652e88:c.instructions+=4;goto B652e88;
case 0x652e8e:c.instructions+=3;goto B652e8e;
case 0x652e90:c.instructions+=2;goto B652e90;
case 0x652e93:c.instructions+=1;goto B652e93;
case 0x652e95:goto L652e95;
case 0x652e97:c.instructions+=4;goto B652e97;
case 0x652e9d:c.instructions+=3;goto B652e9d;
case 0x652e9f:c.instructions+=2;goto B652e9f;
case 0x652ea2:c.instructions+=1;goto B652ea2;
case 0x652ea4:goto L652ea4;
case 0x652ea7:c.instructions+=6;goto B652ea7;
case 0x652eac:c.instructions+=5;goto B652eac;
case 0x652eb1:c.instructions+=4;goto B652eb1;
case 0x652eb4:c.instructions+=3;goto B652eb4;
case 0x652eb5:c.instructions+=2;goto B652eb5;
case 0x652eb8:c.instructions+=1;goto B652eb8;
case 0x652ebd:goto L652ebd;
case 0x652ec0:goto L652ec0;
case 0x652ec2:c.instructions+=1;goto B652ec2;
case 0x652ec7:goto L652ec7;
case 0x652eca:c.instructions+=3;goto B652eca;
case 0x652ecd:c.instructions+=2;goto B652ecd;
case 0x652ed0:c.instructions+=1;goto B652ed0;
case 0x652ed2:goto L652ed2;
case 0x652ed7:goto L652ed7;
case 0x652ed9:c.instructions+=4;goto B652ed9;
case 0x652edb:c.instructions+=3;goto B652edb;
case 0x652edd:c.instructions+=2;goto B652edd;
case 0x652ee0:c.instructions+=1;goto B652ee0;
case 0x652ee6:goto L652ee6;
case 0x652ee9:c.instructions+=1;goto B652ee9;
case 0x652eec:goto L652eec;
case 0x652ef2:c.instructions+=5;goto B652ef2;
case 0x652ef4:c.instructions+=4;goto B652ef4;
case 0x652ef6:c.instructions+=3;goto B652ef6;
case 0x652ef8:c.instructions+=2;goto B652ef8;
case 0x652efb:c.instructions+=1;goto B652efb;
case 0x652efd:goto L652efd;
case 0x652efe:c.instructions+=3;goto B652efe;
case 0x652f01:c.instructions+=2;goto B652f01;
case 0x652f03:c.instructions+=1;goto B652f03;
case 0x652f05:goto L652f05;
case 0x652f0a:goto L652f0a;
case 0x652f0c:c.instructions+=1;goto B652f0c;
case 0x652f11:goto L652f11;
case 0x652f13:c.instructions+=4;goto B652f13;
case 0x652f15:c.instructions+=3;goto B652f15;
case 0x652f17:c.instructions+=2;goto B652f17;
case 0x652f1a:c.instructions+=1;goto B652f1a;
case 0x652f20:goto L652f20;
case 0x652f23:c.instructions+=1;goto B652f23;
case 0x652f26:goto L652f26;
case 0x652f2c:c.instructions+=5;goto B652f2c;
case 0x652f2e:c.instructions+=4;goto B652f2e;
case 0x652f30:c.instructions+=3;goto B652f30;
case 0x652f32:c.instructions+=2;goto B652f32;
case 0x652f35:c.instructions+=1;goto B652f35;
case 0x652f37:goto L652f37;
case 0x652f38:c.instructions+=3;goto B652f38;
case 0x652f3b:c.instructions+=2;goto B652f3b;
case 0x652f3d:c.instructions+=1;goto B652f3d;
case 0x652f3f:goto L652f3f;
case 0x652f44:goto L652f44;
case 0x652f46:c.instructions+=1;goto B652f46;
case 0x652f4b:goto L652f4b;
case 0x652f4d:c.instructions+=1;goto B652f4d;
case 0x652f53:goto L652f53;
case 0x652f56:c.instructions+=4;goto B652f56;
case 0x652f58:c.instructions+=3;goto B652f58;
case 0x652f5b:c.instructions+=2;goto B652f5b;
case 0x652f5d:c.instructions+=1;goto B652f5d;
case 0x652f60:goto L652f60;
case 0x652f62:c.instructions+=4;goto B652f62;
case 0x652f68:c.instructions+=3;goto B652f68;
case 0x652f6a:c.instructions+=2;goto B652f6a;
case 0x652f6d:c.instructions+=1;goto B652f6d;
case 0x652f6f:goto L652f6f;
case 0x652f71:c.instructions+=4;goto B652f71;
case 0x652f77:c.instructions+=3;goto B652f77;
case 0x652f79:c.instructions+=2;goto B652f79;
case 0x652f7c:c.instructions+=1;goto B652f7c;
case 0x652f7e:goto L652f7e;
case 0x652f81:c.instructions+=6;goto B652f81;
case 0x652f86:c.instructions+=5;goto B652f86;
case 0x652f8b:c.instructions+=4;goto B652f8b;
case 0x652f8e:c.instructions+=3;goto B652f8e;
case 0x652f8f:c.instructions+=2;goto B652f8f;
case 0x652f92:c.instructions+=1;goto B652f92;
case 0x652f97:goto L652f97;
case 0x652f9a:goto L652f9a;
case 0x652f9c:c.instructions+=1;goto B652f9c;
case 0x652fa1:goto L652fa1;
case 0x652fa4:c.instructions+=3;goto B652fa4;
case 0x652fa7:c.instructions+=2;goto B652fa7;
case 0x652faa:c.instructions+=1;goto B652faa;
case 0x652fac:goto L652fac;
case 0x652fb1:goto L652fb1;
case 0x652fb3:c.instructions+=1;goto B652fb3;
case 0x652fb9:goto L652fb9;
case 0x652fbc:c.instructions+=3;goto B652fbc;
case 0x652fbf:c.instructions+=2;goto B652fbf;
case 0x652fc1:c.instructions+=1;goto B652fc1;
case 0x652fc3:goto L652fc3;
case 0x652fc6:c.instructions+=6;goto B652fc6;
case 0x652fc8:c.instructions+=5;goto B652fc8;
case 0x652fca:c.instructions+=4;goto B652fca;
case 0x652fcc:c.instructions+=3;goto B652fcc;
case 0x652fcf:c.instructions+=2;goto B652fcf;
case 0x652fd0:c.instructions+=1;goto B652fd0;
case 0x652fd2:goto L652fd2;
case 0x652fd7:goto L652fd7;
case 0x652fd9:c.instructions+=1;goto B652fd9;
case 0x652fdf:goto L652fdf;
case 0x652fe2:c.instructions+=6;goto B652fe2;
case 0x652fe5:c.instructions+=5;goto B652fe5;
case 0x652fe7:c.instructions+=4;goto B652fe7;
case 0x652fe9:c.instructions+=3;goto B652fe9;
case 0x652fec:c.instructions+=2;goto B652fec;
case 0x652fee:c.instructions+=1;goto B652fee;
case 0x652ff0:goto L652ff0;
case 0x652ff3:c.instructions+=6;goto B652ff3;
case 0x652ff5:c.instructions+=5;goto B652ff5;
case 0x652ff7:c.instructions+=4;goto B652ff7;
case 0x652ffa:c.instructions+=3;goto B652ffa;
case 0x652ffd:c.instructions+=2;goto B652ffd;
case 0x652ffe:c.instructions+=1;goto B652ffe;
default:missing_instruction(c.pc);}
B652000:L652000:{c.instructions+=1;NFSU2_TR(0x652000);
if(r1(R+518)){{goto L652014;}}
}
B652002:L652002:{c.instructions+=5;NFSU2_TR(0x652002);
u8 U[4];
w4(U+0,u32(0x7b4088ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652007:{NFSU2_TR(0x652007);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652008:{NFSU2_TR(0x652008);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65200b:{NFSU2_TR(0x65200b);
__builtin_memmove((R+4),(R+0),4);
}
B65200d:{NFSU2_TR(0x65200d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652012ull));
TAIL_STATIC(0x672498u,672);
}
B652012:L652012:{c.instructions+=1;NFSU2_TR(0x652012);
{goto L652016;}
}
B652014:L652014:{c.instructions+=1;NFSU2_TR(0x652014);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B652016:L652016:{c.instructions+=2;NFSU2_TR(0x652016);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652018:{NFSU2_TR(0x652018);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65201e;}}
}
B65201a:L65201a:{c.instructions+=2;NFSU2_TR(0x65201a);
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
B65201c:{NFSU2_TR(0x65201c);
{goto L65202c;}
}
B65201e:L65201e:{c.instructions+=4;NFSU2_TR(0x65201e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652021:{NFSU2_TR(0x652021);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652022:{NFSU2_TR(0x652022);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652025:{NFSU2_TR(0x652025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65202aull));
TAIL_STATIC(0x650571u,650);
}
B65202a:L65202a:{c.instructions+=1;NFSU2_TR(0x65202a);
__builtin_memmove((R+0),(R+24),4);
}
B65202c:L65202c:{c.instructions+=5;NFSU2_TR(0x65202c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65202d:{NFSU2_TR(0x65202d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65202e:{NFSU2_TR(0x65202e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65202f:{NFSU2_TR(0x65202f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B652030:{NFSU2_TR(0x652030);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B652033:L652033:{c.instructions+=11;NFSU2_TR(0x652033);
__builtin_memmove((R+28),(R+28),4);
}
B652035:{NFSU2_TR(0x652035);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652036:{NFSU2_TR(0x652036);
__builtin_memmove((R+20),(R+16),4);
}
B652038:{NFSU2_TR(0x652038);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652039:{NFSU2_TR(0x652039);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65203a:{NFSU2_TR(0x65203a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65203b:{NFSU2_TR(0x65203b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65203c:{NFSU2_TR(0x65203c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65203f:{NFSU2_TR(0x65203f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652040:{NFSU2_TR(0x652040);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652043:{NFSU2_TR(0x652043);
{goto L652048;}
}
B652045:L652045:{c.instructions+=1;NFSU2_TR(0x652045);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B652048:L652048:{c.instructions+=2;NFSU2_TR(0x652048);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65204c:{NFSU2_TR(0x65204c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652045u);}goto L652045;}}
}
B65204e:L65204e:{c.instructions+=2;NFSU2_TR(0x65204e);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652050:{NFSU2_TR(0x652050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652055ull));
TAIL_STATIC(0x645362u,645);
}
B652055:L652055:{c.instructions+=3;NFSU2_TR(0x652055);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B652057:{NFSU2_TR(0x652057);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652059:{NFSU2_TR(0x652059);
if(r1(R+518)){{goto L652073;}}
}
B65205b:L65205b:{c.instructions+=9;NFSU2_TR(0x65205b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B65205e:{NFSU2_TR(0x65205e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65205f:{NFSU2_TR(0x65205f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652061:{NFSU2_TR(0x652061);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652062:{NFSU2_TR(0x652062);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652063:{NFSU2_TR(0x652063);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652064:{NFSU2_TR(0x652064);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652065:{NFSU2_TR(0x652065);
__builtin_memmove((R+4),(R+0),4);
}
B652067:{NFSU2_TR(0x652067);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65206cull));
TAIL_STATIC(0x672d7bu,672);
}
B65206c:L65206c:{c.instructions+=3;NFSU2_TR(0x65206c);
__builtin_memmove((R+12),(R+0),4);
}
B65206e:{NFSU2_TR(0x65206e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652071:{NFSU2_TR(0x652071);
{goto L652078;}
}
B652073:L652073:{c.instructions+=2;NFSU2_TR(0x652073);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652076:{NFSU2_TR(0x652076);
__builtin_memmove((R+12),(R+28),4);
}
B652078:L652078:{c.instructions+=2;NFSU2_TR(0x652078);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65207a:{NFSU2_TR(0x65207a);
if(r1(R+518)){{goto L652117;}}
}
B652080:L652080:{c.instructions+=3;NFSU2_TR(0x652080);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652083:{NFSU2_TR(0x652083);
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
B652085:{NFSU2_TR(0x652085);
if(r1(R+518)){{goto L652097;}}
}
B652087:L652087:{c.instructions+=2;NFSU2_TR(0x652087);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B652089:{NFSU2_TR(0x652089);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65208cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65208c:L65208c:{c.instructions+=3;NFSU2_TR(0x65208c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65208e:{NFSU2_TR(0x65208e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652091:{NFSU2_TR(0x652091);
if(r1(R+518)){{goto L652117;}}
}
B652097:L652097:{c.instructions+=5;NFSU2_TR(0x652097);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65209a:{NFSU2_TR(0x65209a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65209c:{NFSU2_TR(0x65209c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65209f:{NFSU2_TR(0x65209f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6520a2:{NFSU2_TR(0x6520a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6520b9;}}
}
B6520a4:L6520a4:{c.instructions+=3;NFSU2_TR(0x6520a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6520a7:{NFSU2_TR(0x6520a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6520a8:{NFSU2_TR(0x6520a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6520adull));
TAIL_STATIC(0x650571u,650);
}
B6520ad:L6520ad:{c.instructions+=1;NFSU2_TR(0x6520ad);
__builtin_memmove((R+0),(R+12),4);
}
B6520af:L6520af:{c.instructions+=5;NFSU2_TR(0x6520af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6520b0:{NFSU2_TR(0x6520b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6520b1:{NFSU2_TR(0x6520b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6520b2:{NFSU2_TR(0x6520b2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6520b3:{NFSU2_TR(0x6520b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6520b6:L6520b6:{c.instructions+=1;NFSU2_TR(0x6520b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6520b9:L6520b9:{c.instructions+=3;NFSU2_TR(0x6520b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6520bc:{NFSU2_TR(0x6520bc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6520be:{NFSU2_TR(0x6520be);
if(r1(R+518)){{goto L652108;}}
}
B6520c0:L6520c0:{c.instructions+=2;NFSU2_TR(0x6520c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6520c4:{NFSU2_TR(0x6520c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L652108;}}
}
B6520c6:L6520c6:{c.instructions+=2;NFSU2_TR(0x6520c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6520c9:{NFSU2_TR(0x6520c9);
if(r1(R+518)){{goto L652108;}}
}
B6520cb:L6520cb:{c.instructions+=2;NFSU2_TR(0x6520cb);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6520cd:{NFSU2_TR(0x6520cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6520d2ull));
TAIL_STATIC(0x645362u,645);
}
B6520d2:L6520d2:{c.instructions+=2;NFSU2_TR(0x6520d2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6520d4:{NFSU2_TR(0x6520d4);
if(r1(R+518)){{goto L6520e6;}}
}
B6520d6:L6520d6:{c.instructions+=5;NFSU2_TR(0x6520d6);
u8 U[4];
w4(U+0,u32(0x7b4090ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6520db:{NFSU2_TR(0x6520db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6520dc:{NFSU2_TR(0x6520dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6520dd:{NFSU2_TR(0x6520dd);
__builtin_memmove((R+4),(R+0),4);
}
B6520df:{NFSU2_TR(0x6520df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6520e4ull));
TAIL_STATIC(0x672498u,672);
}
B6520e4:L6520e4:{c.instructions+=1;NFSU2_TR(0x6520e4);
{goto L6520e8;}
}
B6520e6:L6520e6:{c.instructions+=1;NFSU2_TR(0x6520e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6520e8:L6520e8:{c.instructions+=3;NFSU2_TR(0x6520e8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6520ea:{NFSU2_TR(0x6520ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6520ec:{NFSU2_TR(0x6520ec);
if(r1(R+518)){{goto L652117;}}
}
B6520ee:L6520ee:{c.instructions+=2;NFSU2_TR(0x6520ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6520f1:{NFSU2_TR(0x6520f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6520f6ull));
TAIL_STATIC(0x672440u,672);
}
B6520f6:L6520f6:{c.instructions+=5;NFSU2_TR(0x6520f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6520f8:{NFSU2_TR(0x6520f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6520fb:{NFSU2_TR(0x6520fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6520fd:{NFSU2_TR(0x6520fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B652100:{NFSU2_TR(0x652100);
if(r1(R+518)){{goto L652117;}}
}
B652102:L652102:{c.instructions+=2;NFSU2_TR(0x652102);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652105:{NFSU2_TR(0x652105);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B652108:L652108:{c.instructions+=4;NFSU2_TR(0x652108);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65210b:{NFSU2_TR(0x65210b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65210d:{NFSU2_TR(0x65210d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652110:{NFSU2_TR(0x652110);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6520b6u);}goto L6520b6;}}
}
B652112:L652112:{c.instructions+=2;NFSU2_TR(0x652112);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B652115:{NFSU2_TR(0x652115);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6520a4u);}goto L6520a4;}
}
B652117:L652117:{c.instructions+=2;NFSU2_TR(0x652117);
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
B652119:{NFSU2_TR(0x652119);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6520afu);}goto L6520af;}
}
B65211b:L65211b:{c.instructions+=12;NFSU2_TR(0x65211b);
__builtin_memmove((R+28),(R+28),4);
}
B65211d:{NFSU2_TR(0x65211d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65211e:{NFSU2_TR(0x65211e);
__builtin_memmove((R+20),(R+16),4);
}
B652120:{NFSU2_TR(0x652120);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B652123:{NFSU2_TR(0x652123);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652126:{NFSU2_TR(0x652126);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652127:{NFSU2_TR(0x652127);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652128:{NFSU2_TR(0x652128);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65212a:{NFSU2_TR(0x65212a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65212c:{NFSU2_TR(0x65212c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65212d:{NFSU2_TR(0x65212d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652130:{NFSU2_TR(0x652130);
if(r1(R+518)){{goto L65221f;}}
}
B652136:L652136:{c.instructions+=2;NFSU2_TR(0x652136);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65213a:{NFSU2_TR(0x65213a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65221f;}}
}
B652140:L652140:{c.instructions+=3;NFSU2_TR(0x652140);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652143:{NFSU2_TR(0x652143);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652145:{NFSU2_TR(0x652145);
if(r1(R+518)){{goto L65221f;}}
}
B65214b:L65214b:{c.instructions+=2;NFSU2_TR(0x65214b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65214f:{NFSU2_TR(0x65214f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65221f;}}
}
B652155:L652155:{c.instructions+=6;NFSU2_TR(0x652155);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B652158:{NFSU2_TR(0x652158);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B65215b:{NFSU2_TR(0x65215b);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65215d:{NFSU2_TR(0x65215d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652160:{NFSU2_TR(0x652160);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652163:{NFSU2_TR(0x652163);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652168ull));
TAIL_STATIC(0x645362u,645);
}
B652168:L652168:{c.instructions+=2;NFSU2_TR(0x652168);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65216a:{NFSU2_TR(0x65216a);
if(r1(R+518)){{goto L652180;}}
}
B65216c:L65216c:{c.instructions+=8;NFSU2_TR(0x65216c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65216d:{NFSU2_TR(0x65216d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65216f:{NFSU2_TR(0x65216f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652170:{NFSU2_TR(0x652170);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652171:{NFSU2_TR(0x652171);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652173:{NFSU2_TR(0x652173);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652174:{NFSU2_TR(0x652174);
__builtin_memmove((R+4),(R+0),4);
}
B652176:{NFSU2_TR(0x652176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65217bull));
TAIL_STATIC(0x672d7bu,672);
}
B65217b:L65217b:{c.instructions+=2;NFSU2_TR(0x65217b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65217e:{NFSU2_TR(0x65217e);
{goto L652183;}
}
B652180:L652180:{c.instructions+=1;NFSU2_TR(0x652180);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652183:L652183:{c.instructions+=2;NFSU2_TR(0x652183);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B652186:{NFSU2_TR(0x652186);
if(r1(R+518)){{goto L65221f;}}
}
B65218c:L65218c:{c.instructions+=2;NFSU2_TR(0x65218c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65218e:{NFSU2_TR(0x65218e);
if(r1(R+518)){{goto L652203;}}
}
B652190:L652190:{c.instructions+=3;NFSU2_TR(0x652190);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652193:{NFSU2_TR(0x652193);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652196:{NFSU2_TR(0x652196);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L652267;}}
}
B65219c:L65219c:{c.instructions+=2;NFSU2_TR(0x65219c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65219f:{NFSU2_TR(0x65219f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6521a2:L6521a2:{c.instructions+=3;NFSU2_TR(0x6521a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6521a5:{NFSU2_TR(0x6521a5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6521a7:{NFSU2_TR(0x6521a7);
if(r1(R+518)){{goto L6521f9;}}
}
B6521a9:L6521a9:{c.instructions+=2;NFSU2_TR(0x6521a9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6521ad:{NFSU2_TR(0x6521ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6521f9;}}
}
B6521af:L6521af:{c.instructions+=4;NFSU2_TR(0x6521af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6521b2:{NFSU2_TR(0x6521b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6521b5:{NFSU2_TR(0x6521b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6521b8:{NFSU2_TR(0x6521b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6521bb:L6521bb:{c.instructions+=4;NFSU2_TR(0x6521bb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6521bd:{NFSU2_TR(0x6521bd);
__builtin_memmove((R+4),(R+8),1);
}
B6521bf:{NFSU2_TR(0x6521bf);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6521c1:{NFSU2_TR(0x6521c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6521dd;}}
}
B6521c3:L6521c3:{c.instructions+=2;NFSU2_TR(0x6521c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6521c5:{NFSU2_TR(0x6521c5);
if(r1(R+518)){{goto L6521d9;}}
}
B6521c7:L6521c7:{c.instructions+=4;NFSU2_TR(0x6521c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6521ca:{NFSU2_TR(0x6521ca);
__builtin_memmove((R+4),(R+8),1);
}
B6521cc:{NFSU2_TR(0x6521cc);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6521cf:{NFSU2_TR(0x6521cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6521dd;}}
}
B6521d1:L6521d1:{c.instructions+=6;NFSU2_TR(0x6521d1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6521d2:{NFSU2_TR(0x6521d2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6521d3:{NFSU2_TR(0x6521d3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6521d4:{NFSU2_TR(0x6521d4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6521d5:{NFSU2_TR(0x6521d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6521d7:{NFSU2_TR(0x6521d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6521bbu);}goto L6521bb;}}
}
B6521d9:L6521d9:{c.instructions+=2;NFSU2_TR(0x6521d9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6521db:{NFSU2_TR(0x6521db);
{goto L6521e2;}
}
B6521dd:L6521dd:{c.instructions+=2;NFSU2_TR(0x6521dd);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6521df:{NFSU2_TR(0x6521df);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6521e2:L6521e2:{c.instructions+=2;NFSU2_TR(0x6521e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6521e4:{NFSU2_TR(0x6521e4);
if(r1(R+518)){{goto L652228;}}
}
B6521e6:L6521e6:{c.instructions+=3;NFSU2_TR(0x6521e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6521e9:{NFSU2_TR(0x6521e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6521ec:{NFSU2_TR(0x6521ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6521f1ull));
TAIL_STATIC(0x64fb5eu,64f);
}
B6521f1:L6521f1:{c.instructions+=3;NFSU2_TR(0x6521f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6521f4:{NFSU2_TR(0x6521f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6521f7:{NFSU2_TR(0x6521f7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6521f9:L6521f9:{c.instructions+=4;NFSU2_TR(0x6521f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6521fc:{NFSU2_TR(0x6521fc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6521fe:{NFSU2_TR(0x6521fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652201:{NFSU2_TR(0x652201);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6521a2u);}goto L6521a2;}}
}
B652203:L652203:{c.instructions+=7;NFSU2_TR(0x652203);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652206:{NFSU2_TR(0x652206);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652209:{NFSU2_TR(0x652209);
u8 U[4];
w4(U+0,u32(0x7b40a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65220e:{NFSU2_TR(0x65220e);
u8 U[4];
w4(U+0,u32(0xbcaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652213:{NFSU2_TR(0x652213);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652214:{NFSU2_TR(0x652214);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652217:{NFSU2_TR(0x652217);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65221cull));
TAIL_STATIC(0x64f52au,64f);
}
B65221c:L65221c:{c.instructions+=1;NFSU2_TR(0x65221c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B65221f:L65221f:{c.instructions+=1;NFSU2_TR(0x65221f);
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
B652221:L652221:{c.instructions+=5;NFSU2_TR(0x652221);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B652222:{NFSU2_TR(0x652222);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B652223:{NFSU2_TR(0x652223);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B652224:{NFSU2_TR(0x652224);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B652225:{NFSU2_TR(0x652225);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B652228:L652228:{c.instructions+=2;NFSU2_TR(0x652228);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
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
B65222c:{NFSU2_TR(0x65222c);
if(r1(R+518)){{goto L652240;}}
}
B65222e:L65222e:{c.instructions+=3;NFSU2_TR(0x65222e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652231:{NFSU2_TR(0x652231);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B652233:{NFSU2_TR(0x652233);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652236ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B652236:L652236:{c.instructions+=4;NFSU2_TR(0x652236);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652238:{NFSU2_TR(0x652238);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65223b:{NFSU2_TR(0x65223b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65223e:{NFSU2_TR(0x65223e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65221fu);}goto L65221f;}}
}
B652240:L652240:{c.instructions+=2;NFSU2_TR(0x652240);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652242:{NFSU2_TR(0x652242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652247ull));
TAIL_STATIC(0x645362u,645);
}
B652247:L652247:{c.instructions+=2;NFSU2_TR(0x652247);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652249:{NFSU2_TR(0x652249);
if(r1(R+518)){{goto L65225a;}}
}
B65224b:L65224b:{c.instructions+=5;NFSU2_TR(0x65224b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65224c:{NFSU2_TR(0x65224c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65224f:{NFSU2_TR(0x65224f);
__builtin_memmove((R+4),(R+0),4);
}
B652251:{NFSU2_TR(0x652251);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652253:{NFSU2_TR(0x652253);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652258ull));
TAIL_STATIC(0x672ec8u,672);
}
B652258:L652258:{c.instructions+=1;NFSU2_TR(0x652258);
{goto L65225c;}
}
B65225a:L65225a:{c.instructions+=1;NFSU2_TR(0x65225a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65225c:L65225c:{c.instructions+=3;NFSU2_TR(0x65225c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65225f:{NFSU2_TR(0x65225f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652262:{NFSU2_TR(0x652262);
{goto L65257e;}
}
B652267:L652267:{c.instructions+=2;NFSU2_TR(0x652267);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65226a:{NFSU2_TR(0x65226a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B65226c:L65226c:{c.instructions+=10;NFSU2_TR(0x65226c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65226f:{NFSU2_TR(0x65226f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B652272:{NFSU2_TR(0x652272);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B652275:{NFSU2_TR(0x652275);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652278:{NFSU2_TR(0x652278);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65227b:{NFSU2_TR(0x65227b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65227e:{NFSU2_TR(0x65227e);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x200ull))));
}
B652284:{NFSU2_TR(0x652284);
__builtin_memmove((R+0),(R+12),4);
}
B652286:{NFSU2_TR(0x652286);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652289:{NFSU2_TR(0x652289);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65228c:L65228c:{c.instructions+=4;NFSU2_TR(0x65228c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B65228e:{NFSU2_TR(0x65228e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B65228f:{NFSU2_TR(0x65228f);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B652291:{NFSU2_TR(0x652291);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65228cu);}goto L65228c;}}
}
B652293:L652293:{c.instructions+=8;NFSU2_TR(0x652293);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B652295:{NFSU2_TR(0x652295);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B652298:{NFSU2_TR(0x652298);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B65229a:{NFSU2_TR(0x65229a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65229c:{NFSU2_TR(0x65229c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65229e:{NFSU2_TR(0x65229e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6522a1:{NFSU2_TR(0x6522a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6522a2:{NFSU2_TR(0x6522a2);
if(r1(R+518)){{goto L6522f7;}}
}
B6522a4:L6522a4:{c.instructions+=2;NFSU2_TR(0x6522a4);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x60ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x60ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6522a6:{NFSU2_TR(0x6522a6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B6522ac:L6522ac:{c.instructions+=2;NFSU2_TR(0x6522ac);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x62ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x62ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6522ae:{NFSU2_TR(0x6522ae);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6522de;}}
}
B6522b0:L6522b0:{c.instructions+=2;NFSU2_TR(0x6522b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x67ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6522b2:{NFSU2_TR(0x6522b2);
if(r1(R+518)){{goto L6522de;}}
}
B6522b4:L6522b4:{c.instructions+=2;NFSU2_TR(0x6522b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x72ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6522b6:{NFSU2_TR(0x6522b6);
if(r1(R+518)){{goto L6522de;}}
}
B6522b8:L6522b8:{c.instructions+=2;NFSU2_TR(0x6522b8);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x76ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x76ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6522ba:{NFSU2_TR(0x6522ba);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B6522c0:L6522c0:{c.instructions+=2;NFSU2_TR(0x6522c0);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6522c2:{NFSU2_TR(0x6522c2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B6522c8:L6522c8:{c.instructions+=3;NFSU2_TR(0x6522c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6522cb:{NFSU2_TR(0x6522cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6522cd:{NFSU2_TR(0x6522cd);
if(r1(R+518)){{goto L6522d8;}}
}
B6522cf:L6522cf:{c.instructions+=2;NFSU2_TR(0x6522cf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6522d2:{NFSU2_TR(0x6522d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B6522d8:L6522d8:{c.instructions+=2;NFSU2_TR(0x6522d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6522dc:{NFSU2_TR(0x6522dc);
{goto L652316;}
}
B6522de:L6522de:{c.instructions+=3;NFSU2_TR(0x6522de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6522e1:{NFSU2_TR(0x6522e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6522e3:{NFSU2_TR(0x6522e3);
if(r1(R+518)){{goto L6522ee;}}
}
B6522e5:L6522e5:{c.instructions+=2;NFSU2_TR(0x6522e5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6522e8:{NFSU2_TR(0x6522e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B6522ee:L6522ee:{c.instructions+=2;NFSU2_TR(0x6522ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6522f5:{NFSU2_TR(0x6522f5);
{goto L652316;}
}
B6522f7:L6522f7:{c.instructions+=2;NFSU2_TR(0x6522f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6522fa:{NFSU2_TR(0x6522fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B652300:L652300:{c.instructions+=3;NFSU2_TR(0x652300);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B652303:{NFSU2_TR(0x652303);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B652305:{NFSU2_TR(0x652305);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L652313;}}
}
B652307:L652307:{c.instructions+=3;NFSU2_TR(0x652307);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x6dull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B65230a:{NFSU2_TR(0x65230a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B652311:{NFSU2_TR(0x652311);
if(r1(R+518)){{goto L652316;}}
}
B652313:L652313:{c.instructions+=1;NFSU2_TR(0x652313);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652316:L652316:{c.instructions+=6;NFSU2_TR(0x652316);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652319:{NFSU2_TR(0x652319);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65231d:{NFSU2_TR(0x65231d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B652320:{NFSU2_TR(0x652320);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B652322:{NFSU2_TR(0x652322);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652325:{NFSU2_TR(0x652325);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L65250e;}}
}
B65232b:L65232b:{c.instructions+=6;NFSU2_TR(0x65232b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65232e:{NFSU2_TR(0x65232e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B652331:{NFSU2_TR(0x652331);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B652334:{NFSU2_TR(0x652334);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652337:{NFSU2_TR(0x652337);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((R+0),(U+0),4);
}
B65233a:{NFSU2_TR(0x65233a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65233d:L65233d:{c.instructions+=2;NFSU2_TR(0x65233d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B652341:{NFSU2_TR(0x652341);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6524f5;}}
}
B652347:L652347:{c.instructions+=3;NFSU2_TR(0x652347);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65234a:{NFSU2_TR(0x65234a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65234d:{NFSU2_TR(0x65234d);
if(r1(R+518)){{goto L652445;}}
}
B652353:L652353:{c.instructions+=2;NFSU2_TR(0x652353);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B652354:{NFSU2_TR(0x652354);
if(r1(R+518)){{goto L652423;}}
}
B65235a:L65235a:{c.instructions+=2;NFSU2_TR(0x65235a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65235b:{NFSU2_TR(0x65235b);
if(r1(R+518)){{goto L6523cb;}}
}
B65235d:L65235d:{c.instructions+=2;NFSU2_TR(0x65235d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65235e:{NFSU2_TR(0x65235e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65246a;}}
}
B652364:L652364:{c.instructions+=3;NFSU2_TR(0x652364);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652367:{NFSU2_TR(0x652367);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B65236a:{NFSU2_TR(0x65236a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B652370:L652370:{c.instructions+=2;NFSU2_TR(0x652370);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B652373:{NFSU2_TR(0x652373);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B652379:L652379:{c.instructions+=2;NFSU2_TR(0x652379);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x6dull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B65237d:{NFSU2_TR(0x65237d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B652383:L652383:{c.instructions+=4;NFSU2_TR(0x652383);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652386:{NFSU2_TR(0x652386);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B652388:{NFSU2_TR(0x652388);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B65238b:{NFSU2_TR(0x65238b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B652391:L652391:{c.instructions+=2;NFSU2_TR(0x652391);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B652394:{NFSU2_TR(0x652394);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B65239a:L65239a:{c.instructions+=4;NFSU2_TR(0x65239a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65239d:{NFSU2_TR(0x65239d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B65239f:{NFSU2_TR(0x65239f);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6523a1:{NFSU2_TR(0x6523a1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B6523a7:L6523a7:{c.instructions+=2;NFSU2_TR(0x6523a7);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6523a9:{NFSU2_TR(0x6523a9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B6523af:L6523af:{c.instructions+=8;NFSU2_TR(0x6523af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6523b3:{NFSU2_TR(0x6523b3);
w4(R+24,u32(s32(s8(r1(R+4)))));
}
B6523b6:{NFSU2_TR(0x6523b6);
w4(R+28,u32(s32(s8(r1(R+0)))));
}
B6523b9:{NFSU2_TR(0x6523b9);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x30ull))));
}
B6523bc:{NFSU2_TR(0x6523bc);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x30ull))));
}
B6523bf:{NFSU2_TR(0x6523bf);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6523c2:{NFSU2_TR(0x6523c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6523c6:{NFSU2_TR(0x6523c6);
{goto L65246a;}
}
B6523cb:L6523cb:{c.instructions+=3;NFSU2_TR(0x6523cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6523ce:{NFSU2_TR(0x6523ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6523d1:{NFSU2_TR(0x6523d1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B6523d7:L6523d7:{c.instructions+=2;NFSU2_TR(0x6523d7);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6523da:{NFSU2_TR(0x6523da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B6523e0:L6523e0:{c.instructions+=3;NFSU2_TR(0x6523e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6523e3:{NFSU2_TR(0x6523e3);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x31ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x31ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B6523e6:{NFSU2_TR(0x6523e6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B6523ec:L6523ec:{c.instructions+=2;NFSU2_TR(0x6523ec);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6523ef:{NFSU2_TR(0x6523ef);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B6523f5:L6523f5:{c.instructions+=4;NFSU2_TR(0x6523f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6523f8:{NFSU2_TR(0x6523f8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6523fa:{NFSU2_TR(0x6523fa);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x31ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x31ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6523fc:{NFSU2_TR(0x6523fc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B652402:L652402:{c.instructions+=2;NFSU2_TR(0x652402);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B652404:{NFSU2_TR(0x652404);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B65240a:L65240a:{c.instructions+=8;NFSU2_TR(0x65240a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x3ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65240e:{NFSU2_TR(0x65240e);
w4(R+24,u32(s32(s8(r1(R+4)))));
}
B652411:{NFSU2_TR(0x652411);
w4(R+28,u32(s32(s8(r1(R+0)))));
}
B652414:{NFSU2_TR(0x652414);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x31ull))));
}
B652417:{NFSU2_TR(0x652417);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x31ull))));
}
B65241a:{NFSU2_TR(0x65241a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x3ull))));
}
B65241d:{NFSU2_TR(0x65241d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x3ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B652421:{NFSU2_TR(0x652421);
{goto L65246a;}
}
B652423:L652423:{c.instructions+=3;NFSU2_TR(0x652423);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B652426:{NFSU2_TR(0x652426);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x61ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B652429:{NFSU2_TR(0x652429);
if(r1(R+518)){{goto L65245e;}}
}
B65242b:L65242b:{c.instructions+=2;NFSU2_TR(0x65242b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65242c:{NFSU2_TR(0x65242c);
if(r1(R+518)){{goto L65245a;}}
}
B65242e:L65242e:{c.instructions+=2;NFSU2_TR(0x65242e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B652431:{NFSU2_TR(0x652431);
if(r1(R+518)){{goto L652440;}}
}
B652433:L652433:{c.instructions+=2;NFSU2_TR(0x652433);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B652436:{NFSU2_TR(0x652436);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B65243c:L65243c:{c.instructions+=2;NFSU2_TR(0x65243c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B65243e:{NFSU2_TR(0x65243e);
{goto L652461;}
}
B652440:L652440:{c.instructions+=3;NFSU2_TR(0x652440);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B652442:{NFSU2_TR(0x652442);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B652443:{NFSU2_TR(0x652443);
{goto L652461;}
}
B652445:L652445:{c.instructions+=3;NFSU2_TR(0x652445);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B652448:{NFSU2_TR(0x652448);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x77ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65244b:{NFSU2_TR(0x65244b);
if(r1(R+518)){{goto L65245e;}}
}
B65244d:L65244d:{c.instructions+=2;NFSU2_TR(0x65244d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65244e:{NFSU2_TR(0x65244e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65243cu);}goto L65243c;}}
}
B652450:L652450:{c.instructions+=2;NFSU2_TR(0x652450);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B652451:{NFSU2_TR(0x652451);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652440u);}goto L652440;}}
}
B652453:L652453:{c.instructions+=2;NFSU2_TR(0x652453);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B652454:{NFSU2_TR(0x652454);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B65245a:L65245a:{c.instructions+=2;NFSU2_TR(0x65245a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65245c:{NFSU2_TR(0x65245c);
{goto L652460;}
}
B65245e:L65245e:{c.instructions+=1;NFSU2_TR(0x65245e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652460:L652460:{c.instructions+=1;NFSU2_TR(0x652460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B652461:L652461:{c.instructions+=4;NFSU2_TR(0x652461);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B652463:{NFSU2_TR(0x652463);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B652464:{NFSU2_TR(0x652464);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B652467:{NFSU2_TR(0x652467);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65246a:L65246a:{c.instructions+=2;NFSU2_TR(0x65246a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B65246d:{NFSU2_TR(0x65246d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B652473:L652473:{c.instructions+=2;NFSU2_TR(0x652473);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B652476:{NFSU2_TR(0x652476);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B65247c:L65247c:{c.instructions+=6;NFSU2_TR(0x65247c);
__builtin_memmove((R+0),(R+24),4);
}
B65247e:{NFSU2_TR(0x65247e);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B652482:{NFSU2_TR(0x652482);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B652484:{NFSU2_TR(0x652484);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652486:{NFSU2_TR(0x652486);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652489:{NFSU2_TR(0x652489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65248eull));
TAIL_STATIC(0x645362u,645);
}
B65248e:L65248e:{c.instructions+=2;NFSU2_TR(0x65248e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652490:{NFSU2_TR(0x652490);
if(r1(R+518)){{goto L6524a4;}}
}
B652492:L652492:{c.instructions+=5;NFSU2_TR(0x652492);
u8 U[4];
w4(U+0,u32(0x7b4098ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652497:{NFSU2_TR(0x652497);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652499:{NFSU2_TR(0x652499);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65249b:{NFSU2_TR(0x65249b);
__builtin_memmove((R+4),(R+0),4);
}
B65249d:{NFSU2_TR(0x65249d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6524a2ull));
TAIL_STATIC(0x672498u,672);
}
B6524a2:L6524a2:{c.instructions+=1;NFSU2_TR(0x6524a2);
{goto L6524a6;}
}
B6524a4:L6524a4:{c.instructions+=1;NFSU2_TR(0x6524a4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6524a6:L6524a6:{c.instructions+=4;NFSU2_TR(0x6524a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6524a8:{NFSU2_TR(0x6524a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6524ab:{NFSU2_TR(0x6524ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6524ad:{NFSU2_TR(0x6524ad);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65221fu);}goto L65221f;}}
}
B6524b3:L6524b3:{c.instructions+=2;NFSU2_TR(0x6524b3);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6524b5:{NFSU2_TR(0x6524b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6524baull));
TAIL_STATIC(0x645362u,645);
}
B6524ba:L6524ba:{c.instructions+=2;NFSU2_TR(0x6524ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6524bc:{NFSU2_TR(0x6524bc);
if(r1(R+518)){{goto L6524cf;}}
}
B6524be:L6524be:{c.instructions+=5;NFSU2_TR(0x6524be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6524c1:{NFSU2_TR(0x6524c1);
__builtin_memmove((R+4),(R+0),4);
}
B6524c3:{NFSU2_TR(0x6524c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6524c6:{NFSU2_TR(0x6524c6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6524c8:{NFSU2_TR(0x6524c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6524cdull));
TAIL_STATIC(0x672ec8u,672);
}
B6524cd:L6524cd:{c.instructions+=1;NFSU2_TR(0x6524cd);
{goto L6524d1;}
}
B6524cf:L6524cf:{c.instructions+=1;NFSU2_TR(0x6524cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6524d1:L6524d1:{c.instructions+=5;NFSU2_TR(0x6524d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6524d3:{NFSU2_TR(0x6524d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6524d6:{NFSU2_TR(0x6524d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6524d8:{NFSU2_TR(0x6524d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6524db:{NFSU2_TR(0x6524db);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65221fu);}goto L65221f;}}
}
B6524e1:L6524e1:{c.instructions+=6;NFSU2_TR(0x6524e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6524e3:{NFSU2_TR(0x6524e3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6524e6:{NFSU2_TR(0x6524e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6524e9:{NFSU2_TR(0x6524e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6524ec:{NFSU2_TR(0x6524ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6524ef:{NFSU2_TR(0x6524ef);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65233du);}goto L65233d;}}
}
B6524f5:L6524f5:{c.instructions+=2;NFSU2_TR(0x6524f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6524f8:{NFSU2_TR(0x6524f8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B6524fe:L6524fe:{c.instructions+=2;NFSU2_TR(0x6524fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B652502:{NFSU2_TR(0x652502);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B652508:L652508:{c.instructions+=2;NFSU2_TR(0x652508);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B65250b:{NFSU2_TR(0x65250b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B65250e:L65250e:{c.instructions+=4;NFSU2_TR(0x65250e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652511:{NFSU2_TR(0x652511);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B652514:{NFSU2_TR(0x652514);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B652516:{NFSU2_TR(0x652516);
{goto L652541;}
}
B652518:L652518:{c.instructions+=2;NFSU2_TR(0x652518);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65251a:{NFSU2_TR(0x65251a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L652545;}}
}
B65251c:L65251c:{c.instructions+=4;NFSU2_TR(0x65251c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B65251f:{NFSU2_TR(0x65251f);
__builtin_memmove((R+4),(R+8),4);
}
B652521:{NFSU2_TR(0x652521);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652523:{NFSU2_TR(0x652523);
if(r1(R+518)){{goto L65253f;}}
}
B652525:L652525:{c.instructions+=2;NFSU2_TR(0x652525);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652528:{NFSU2_TR(0x652528);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65252b:L65252b:{c.instructions+=3;NFSU2_TR(0x65252b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B65252e:{NFSU2_TR(0x65252e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B652531:{NFSU2_TR(0x652531);
if(r1(R+518)){{goto L65253c;}}
}
B652533:L652533:{c.instructions+=3;NFSU2_TR(0x652533);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652536:{NFSU2_TR(0x652536);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652538:{NFSU2_TR(0x652538);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65252bu);}goto L65252b;}}
}
B65253a:L65253a:{c.instructions+=1;NFSU2_TR(0x65253a);
{goto L65253f;}
}
B65253c:L65253c:{c.instructions+=2;NFSU2_TR(0x65253c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65253e:{NFSU2_TR(0x65253e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B65253f:L65253f:{c.instructions+=1;NFSU2_TR(0x65253f);
__builtin_memmove((R+0),(R+8),4);
}
B652541:L652541:{c.instructions+=2;NFSU2_TR(0x652541);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652543:{NFSU2_TR(0x652543);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652518u);}goto L652518;}}
}
B652545:L652545:{c.instructions+=2;NFSU2_TR(0x652545);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652547:{NFSU2_TR(0x652547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65254cull));
TAIL_STATIC(0x645362u,645);
}
B65254c:L65254c:{c.instructions+=2;NFSU2_TR(0x65254c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65254e:{NFSU2_TR(0x65254e);
if(r1(R+518)){{goto L652576;}}
}
B652550:L652550:{c.instructions+=13;NFSU2_TR(0x652550);
w1(R+512,u8((r4(R+24))!=(u32(0x0ull))));
w4(R+24,u32(0-u32(r4(R+24))));
}
B652552:{NFSU2_TR(0x652552);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B652554:{NFSU2_TR(0x652554);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B652556:{NFSU2_TR(0x652556);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x200ull))));
}
B65255c:{NFSU2_TR(0x65255c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B652560:{NFSU2_TR(0x652560);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652561:{NFSU2_TR(0x652561);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652564:{NFSU2_TR(0x652564);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B652567:{NFSU2_TR(0x652567);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652569:{NFSU2_TR(0x652569);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65256c:{NFSU2_TR(0x65256c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65256d:{NFSU2_TR(0x65256d);
__builtin_memmove((R+4),(R+0),4);
}
B65256f:{NFSU2_TR(0x65256f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652574ull));
TAIL_STATIC(0x672a51u,672);
}
B652574:L652574:{c.instructions+=1;NFSU2_TR(0x652574);
{goto L652578;}
}
B652576:L652576:{c.instructions+=1;NFSU2_TR(0x652576);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B652578:L652578:{c.instructions+=2;NFSU2_TR(0x652578);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65257b:{NFSU2_TR(0x65257b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65257e:L65257e:{c.instructions+=2;NFSU2_TR(0x65257e);
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
B652580:{NFSU2_TR(0x652580);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65221fu);}goto L65221f;}}
}
B652586:L652586:{c.instructions+=3;NFSU2_TR(0x652586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652589:{NFSU2_TR(0x652589);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65258b:{NFSU2_TR(0x65258b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65258eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B65258e:L65258e:{c.instructions+=4;NFSU2_TR(0x65258e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652590:{NFSU2_TR(0x652590);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B652593:{NFSU2_TR(0x652593);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652596:{NFSU2_TR(0x652596);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652203u);}goto L652203;}}
}
B65259c:L65259c:{c.instructions+=3;NFSU2_TR(0x65259c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65259f:{NFSU2_TR(0x65259f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6525a0:{NFSU2_TR(0x6525a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6525a5ull));
TAIL_STATIC(0x650571u,650);
}
B6525a5:L6525a5:{c.instructions+=2;NFSU2_TR(0x6525a5);
__builtin_memmove((R+0),(R+24),4);
}
B6525a7:{NFSU2_TR(0x6525a7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652221u);}goto L652221;}
}
B6525ac:L6525ac:{c.instructions+=12;NFSU2_TR(0x6525ac);
__builtin_memmove((R+28),(R+28),4);
}
B6525ae:{NFSU2_TR(0x6525ae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6525af:{NFSU2_TR(0x6525af);
__builtin_memmove((R+20),(R+16),4);
}
B6525b1:{NFSU2_TR(0x6525b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6525b2:{NFSU2_TR(0x6525b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6525b3:{NFSU2_TR(0x6525b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6525b4:{NFSU2_TR(0x6525b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6525b5:{NFSU2_TR(0x6525b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6525b8:{NFSU2_TR(0x6525b8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6525ba:{NFSU2_TR(0x6525ba);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6525bc:{NFSU2_TR(0x6525bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6525bf:{NFSU2_TR(0x6525bf);
if(r1(R+518)){{goto L6526dd;}}
}
B6525c5:L6525c5:{c.instructions+=2;NFSU2_TR(0x6525c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6525c9:{NFSU2_TR(0x6525c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6526dd;}}
}
B6525cf:L6525cf:{c.instructions+=3;NFSU2_TR(0x6525cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6525d2:{NFSU2_TR(0x6525d2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6525d4:{NFSU2_TR(0x6525d4);
if(r1(R+518)){{goto L6526dd;}}
}
B6525da:L6525da:{c.instructions+=2;NFSU2_TR(0x6525da);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B6525de:{NFSU2_TR(0x6525de);
if(r1(R+512)){{goto L6526dd;}}
}
B6525e4:L6525e4:{c.instructions+=5;NFSU2_TR(0x6525e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6525e6:{NFSU2_TR(0x6525e6);
w4(R+4,u32(0xffff0000ull));
}
B6525eb:{NFSU2_TR(0x6525eb);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B6525ed:{NFSU2_TR(0x6525ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7ffe0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6525f2:{NFSU2_TR(0x6525f2);
if(r1(R+518)){{goto L652625;}}
}
B6525f4:L6525f4:{c.instructions+=2;NFSU2_TR(0x6525f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fff0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6525f9:{NFSU2_TR(0x6525f9);
if(r1(R+518)){{goto L65261c;}}
}
B6525fb:L6525fb:{c.instructions+=2;NFSU2_TR(0x6525fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652600:{NFSU2_TR(0x652600);
if(r1(R+518)){{goto L652613;}}
}
B652602:L652602:{c.instructions+=2;NFSU2_TR(0x652602);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652604:{NFSU2_TR(0x652604);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6526dd;}}
}
B65260a:L65260a:{c.instructions+=2;NFSU2_TR(0x65260a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x19ull));
s4(u32(r4(U+0)),r4(U+4));
}
B652611:{NFSU2_TR(0x652611);
{goto L65262c;}
}
B652613:L652613:{c.instructions+=2;NFSU2_TR(0x652613);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1aull));
s4(u32(r4(U+0)),r4(U+4));
}
B65261a:{NFSU2_TR(0x65261a);
{goto L65262c;}
}
B65261c:L65261c:{c.instructions+=2;NFSU2_TR(0x65261c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1bull));
s4(u32(r4(U+0)),r4(U+4));
}
B652623:{NFSU2_TR(0x652623);
{goto L65262c;}
}
B652625:L652625:{c.instructions+=1;NFSU2_TR(0x652625);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1cull));
s4(u32(r4(U+0)),r4(U+4));
}
B65262c:L65262c:{c.instructions+=2;NFSU2_TR(0x65262c);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65262e:{NFSU2_TR(0x65262e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652633ull));
TAIL_STATIC(0x645362u,645);
}
B652633:L652633:{c.instructions+=2;NFSU2_TR(0x652633);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652635:{NFSU2_TR(0x652635);
if(r1(R+518)){{goto L65264c;}}
}
B652637:L652637:{c.instructions+=9;NFSU2_TR(0x652637);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65263a:{NFSU2_TR(0x65263a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65263b:{NFSU2_TR(0x65263b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65263d:{NFSU2_TR(0x65263d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65263e:{NFSU2_TR(0x65263e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65263f:{NFSU2_TR(0x65263f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652640:{NFSU2_TR(0x652640);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652641:{NFSU2_TR(0x652641);
__builtin_memmove((R+4),(R+0),4);
}
B652643:{NFSU2_TR(0x652643);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652648ull));
TAIL_STATIC(0x672d7bu,672);
}
B652648:L652648:{c.instructions+=2;NFSU2_TR(0x652648);
__builtin_memmove((R+24),(R+0),4);
}
B65264a:{NFSU2_TR(0x65264a);
{goto L65264e;}
}
B65264c:L65264c:{c.instructions+=1;NFSU2_TR(0x65264c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65264e:L65264e:{c.instructions+=2;NFSU2_TR(0x65264e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652650:{NFSU2_TR(0x652650);
if(r1(R+518)){{goto L6526dd;}}
}
B652656:L652656:{c.instructions+=2;NFSU2_TR(0x652656);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652658:{NFSU2_TR(0x652658);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65265dull));
TAIL_STATIC(0x645362u,645);
}
B65265d:L65265d:{c.instructions+=2;NFSU2_TR(0x65265d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65265f:{NFSU2_TR(0x65265f);
if(r1(R+518)){{goto L652678;}}
}
B652661:L652661:{c.instructions+=7;NFSU2_TR(0x652661);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652666:{NFSU2_TR(0x652666);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652668:{NFSU2_TR(0x652668);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65266a:{NFSU2_TR(0x65266a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65266d:{NFSU2_TR(0x65266d);
__builtin_memmove((R+4),(R+0),4);
}
B65266f:{NFSU2_TR(0x65266f);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652671:{NFSU2_TR(0x652671);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652676ull));
TAIL_STATIC(0x672a51u,672);
}
B652676:L652676:{c.instructions+=1;NFSU2_TR(0x652676);
{goto L65267a;}
}
B652678:L652678:{c.instructions+=1;NFSU2_TR(0x652678);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65267a:L65267a:{c.instructions+=3;NFSU2_TR(0x65267a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65267c:{NFSU2_TR(0x65267c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65267f:{NFSU2_TR(0x65267f);
if(r1(R+518)){{goto L6526dd;}}
}
B652681:L652681:{c.instructions+=2;NFSU2_TR(0x652681);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652683:{NFSU2_TR(0x652683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652688ull));
TAIL_STATIC(0x645362u,645);
}
B652688:L652688:{c.instructions+=2;NFSU2_TR(0x652688);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65268a:{NFSU2_TR(0x65268a);
if(r1(R+518)){{goto L6526a1;}}
}
B65268c:L65268c:{c.instructions+=7;NFSU2_TR(0x65268c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65268f:{NFSU2_TR(0x65268f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652690:{NFSU2_TR(0x652690);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652693:{NFSU2_TR(0x652693);
__builtin_memmove((R+4),(R+0),4);
}
B652695:{NFSU2_TR(0x652695);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652698:{NFSU2_TR(0x652698);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65269a:{NFSU2_TR(0x65269a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65269full));
TAIL_STATIC(0x672f32u,672);
}
B65269f:L65269f:{c.instructions+=1;NFSU2_TR(0x65269f);
{goto L6526a3;}
}
B6526a1:L6526a1:{c.instructions+=1;NFSU2_TR(0x6526a1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6526a3:L6526a3:{c.instructions+=3;NFSU2_TR(0x6526a3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6526a5:{NFSU2_TR(0x6526a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6526a8:{NFSU2_TR(0x6526a8);
if(r1(R+518)){{goto L6526dd;}}
}
B6526aa:L6526aa:{c.instructions+=2;NFSU2_TR(0x6526aa);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6526ac:{NFSU2_TR(0x6526ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6526b1ull));
TAIL_STATIC(0x645362u,645);
}
B6526b1:L6526b1:{c.instructions+=2;NFSU2_TR(0x6526b1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6526b3:{NFSU2_TR(0x6526b3);
if(r1(R+518)){{goto L6526c7;}}
}
B6526b5:L6526b5:{c.instructions+=5;NFSU2_TR(0x6526b5);
u8 U[4];
w4(U+0,u32(0x7b4088ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6526ba:{NFSU2_TR(0x6526ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6526bb:{NFSU2_TR(0x6526bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6526be:{NFSU2_TR(0x6526be);
__builtin_memmove((R+4),(R+0),4);
}
B6526c0:{NFSU2_TR(0x6526c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6526c5ull));
TAIL_STATIC(0x672498u,672);
}
B6526c5:L6526c5:{c.instructions+=1;NFSU2_TR(0x6526c5);
{goto L6526c9;}
}
B6526c7:L6526c7:{c.instructions+=1;NFSU2_TR(0x6526c7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6526c9:L6526c9:{c.instructions+=2;NFSU2_TR(0x6526c9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6526cb:{NFSU2_TR(0x6526cb);
if(r1(R+518)){{goto L6526dd;}}
}
B6526cd:L6526cd:{c.instructions+=4;NFSU2_TR(0x6526cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6526d0:{NFSU2_TR(0x6526d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6526d1:{NFSU2_TR(0x6526d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6526d4:{NFSU2_TR(0x6526d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6526d9ull));
TAIL_STATIC(0x650571u,650);
}
B6526d9:L6526d9:{c.instructions+=2;NFSU2_TR(0x6526d9);
__builtin_memmove((R+0),(R+24),4);
}
B6526db:{NFSU2_TR(0x6526db);
{goto L6526df;}
}
B6526dd:L6526dd:{c.instructions+=1;NFSU2_TR(0x6526dd);
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
B6526df:L6526df:{c.instructions+=5;NFSU2_TR(0x6526df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6526e0:{NFSU2_TR(0x6526e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6526e1:{NFSU2_TR(0x6526e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6526e2:{NFSU2_TR(0x6526e2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6526e3:{NFSU2_TR(0x6526e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6526e6:L6526e6:{c.instructions+=11;NFSU2_TR(0x6526e6);
__builtin_memmove((R+28),(R+28),4);
}
B6526e8:{NFSU2_TR(0x6526e8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6526e9:{NFSU2_TR(0x6526e9);
__builtin_memmove((R+20),(R+16),4);
}
B6526eb:{NFSU2_TR(0x6526eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6526ec:{NFSU2_TR(0x6526ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6526ed:{NFSU2_TR(0x6526ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6526ee:{NFSU2_TR(0x6526ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6526ef:{NFSU2_TR(0x6526ef);
__builtin_memmove((R+24),(R+4),4);
}
B6526f1:{NFSU2_TR(0x6526f1);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6526f3:{NFSU2_TR(0x6526f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6526f6:{NFSU2_TR(0x6526f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6526fbull));
TAIL_STATIC(0x645362u,645);
}
B6526fb:L6526fb:{c.instructions+=3;NFSU2_TR(0x6526fb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6526fd:{NFSU2_TR(0x6526fd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6526ff:{NFSU2_TR(0x6526ff);
if(r1(R+518)){{goto L652716;}}
}
B652701:L652701:{c.instructions+=9;NFSU2_TR(0x652701);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B652704:{NFSU2_TR(0x652704);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652705:{NFSU2_TR(0x652705);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652707:{NFSU2_TR(0x652707);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652708:{NFSU2_TR(0x652708);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652709:{NFSU2_TR(0x652709);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65270a:{NFSU2_TR(0x65270a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65270b:{NFSU2_TR(0x65270b);
__builtin_memmove((R+4),(R+0),4);
}
B65270d:{NFSU2_TR(0x65270d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652712ull));
TAIL_STATIC(0x672d7bu,672);
}
B652712:L652712:{c.instructions+=2;NFSU2_TR(0x652712);
__builtin_memmove((R+28),(R+0),4);
}
B652714:{NFSU2_TR(0x652714);
{goto L652718;}
}
B652716:L652716:{c.instructions+=1;NFSU2_TR(0x652716);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B652718:L652718:{c.instructions+=2;NFSU2_TR(0x652718);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65271a:{NFSU2_TR(0x65271a);
if(r1(R+518)){{goto L6527a7;}}
}
B652720:L652720:{c.instructions+=2;NFSU2_TR(0x652720);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652722:{NFSU2_TR(0x652722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652727ull));
TAIL_STATIC(0x645362u,645);
}
B652727:L652727:{c.instructions+=2;NFSU2_TR(0x652727);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652729:{NFSU2_TR(0x652729);
if(r1(R+518)){{goto L652741;}}
}
B65272b:L65272b:{c.instructions+=7;NFSU2_TR(0x65272b);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652730:{NFSU2_TR(0x652730);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652732:{NFSU2_TR(0x652732);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652734:{NFSU2_TR(0x652734);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652736:{NFSU2_TR(0x652736);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652738:{NFSU2_TR(0x652738);
__builtin_memmove((R+4),(R+0),4);
}
B65273a:{NFSU2_TR(0x65273a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65273full));
TAIL_STATIC(0x672a51u,672);
}
B65273f:L65273f:{c.instructions+=1;NFSU2_TR(0x65273f);
{goto L652743;}
}
B652741:L652741:{c.instructions+=1;NFSU2_TR(0x652741);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B652743:L652743:{c.instructions+=3;NFSU2_TR(0x652743);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652745:{NFSU2_TR(0x652745);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652748:{NFSU2_TR(0x652748);
if(r1(R+518)){{goto L6527a7;}}
}
B65274a:L65274a:{c.instructions+=2;NFSU2_TR(0x65274a);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65274c:{NFSU2_TR(0x65274c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652751ull));
TAIL_STATIC(0x645362u,645);
}
B652751:L652751:{c.instructions+=2;NFSU2_TR(0x652751);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652753:{NFSU2_TR(0x652753);
if(r1(R+518)){{goto L652767;}}
}
B652755:L652755:{c.instructions+=6;NFSU2_TR(0x652755);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B652758:{NFSU2_TR(0x652758);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652759:{NFSU2_TR(0x652759);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65275a:{NFSU2_TR(0x65275a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65275c:{NFSU2_TR(0x65275c);
__builtin_memmove((R+4),(R+0),4);
}
B65275e:{NFSU2_TR(0x65275e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652763ull));
TAIL_STATIC(0x672ec8u,672);
}
B652763:L652763:{c.instructions+=2;NFSU2_TR(0x652763);
__builtin_memmove((R+24),(R+0),4);
}
B652765:{NFSU2_TR(0x652765);
{goto L652769;}
}
B652767:L652767:{c.instructions+=1;NFSU2_TR(0x652767);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B652769:L652769:{c.instructions+=2;NFSU2_TR(0x652769);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65276b:{NFSU2_TR(0x65276b);
if(r1(R+518)){{goto L6527a7;}}
}
B65276d:L65276d:{c.instructions+=3;NFSU2_TR(0x65276d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B652770:{NFSU2_TR(0x652770);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652773:{NFSU2_TR(0x652773);
if(r1(R+518)){{goto L652784;}}
}
B652775:L652775:{c.instructions+=2;NFSU2_TR(0x652775);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652778:{NFSU2_TR(0x652778);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65277dull));
TAIL_STATIC(0x672440u,672);
}
B65277d:L65277d:{c.instructions+=3;NFSU2_TR(0x65277d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65277f:{NFSU2_TR(0x65277f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652782:{NFSU2_TR(0x652782);
if(r1(R+518)){{goto L6527a7;}}
}
B652784:L652784:{c.instructions+=2;NFSU2_TR(0x652784);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652786:{NFSU2_TR(0x652786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65278bull));
TAIL_STATIC(0x645362u,645);
}
B65278b:L65278b:{c.instructions+=2;NFSU2_TR(0x65278b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65278d:{NFSU2_TR(0x65278d);
if(r1(R+518)){{goto L6527a1;}}
}
B65278f:L65278f:{c.instructions+=5;NFSU2_TR(0x65278f);
u8 U[4];
w4(U+0,u32(0x7b4088ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652794:{NFSU2_TR(0x652794);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652795:{NFSU2_TR(0x652795);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652798:{NFSU2_TR(0x652798);
__builtin_memmove((R+4),(R+0),4);
}
B65279a:{NFSU2_TR(0x65279a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65279full));
TAIL_STATIC(0x672498u,672);
}
B65279f:L65279f:{c.instructions+=1;NFSU2_TR(0x65279f);
{goto L6527a3;}
}
B6527a1:L6527a1:{c.instructions+=1;NFSU2_TR(0x6527a1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6527a3:L6527a3:{c.instructions+=2;NFSU2_TR(0x6527a3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6527a5:{NFSU2_TR(0x6527a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6527ab;}}
}
B6527a7:L6527a7:{c.instructions+=2;NFSU2_TR(0x6527a7);
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
B6527a9:{NFSU2_TR(0x6527a9);
{goto L6527b9;}
}
B6527ab:L6527ab:{c.instructions+=4;NFSU2_TR(0x6527ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6527ae:{NFSU2_TR(0x6527ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6527af:{NFSU2_TR(0x6527af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6527b2:{NFSU2_TR(0x6527b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6527b7ull));
TAIL_STATIC(0x650571u,650);
}
B6527b7:L6527b7:{c.instructions+=1;NFSU2_TR(0x6527b7);
__builtin_memmove((R+0),(R+28),4);
}
B6527b9:L6527b9:{c.instructions+=5;NFSU2_TR(0x6527b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6527ba:{NFSU2_TR(0x6527ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6527bb:{NFSU2_TR(0x6527bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6527bc:{NFSU2_TR(0x6527bc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6527bd:{NFSU2_TR(0x6527bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6527c0:L6527c0:{c.instructions+=11;NFSU2_TR(0x6527c0);
__builtin_memmove((R+28),(R+28),4);
}
B6527c2:{NFSU2_TR(0x6527c2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6527c3:{NFSU2_TR(0x6527c3);
__builtin_memmove((R+20),(R+16),4);
}
B6527c5:{NFSU2_TR(0x6527c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6527c6:{NFSU2_TR(0x6527c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6527c7:{NFSU2_TR(0x6527c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6527c8:{NFSU2_TR(0x6527c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6527c9:{NFSU2_TR(0x6527c9);
__builtin_memmove((R+24),(R+4),4);
}
B6527cb:{NFSU2_TR(0x6527cb);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6527cd:{NFSU2_TR(0x6527cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6527d0:{NFSU2_TR(0x6527d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6527d5ull));
TAIL_STATIC(0x645362u,645);
}
B6527d5:L6527d5:{c.instructions+=3;NFSU2_TR(0x6527d5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6527d7:{NFSU2_TR(0x6527d7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6527d9:{NFSU2_TR(0x6527d9);
if(r1(R+518)){{goto L6527f0;}}
}
B6527db:L6527db:{c.instructions+=9;NFSU2_TR(0x6527db);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6527de:{NFSU2_TR(0x6527de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6527df:{NFSU2_TR(0x6527df);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6527e1:{NFSU2_TR(0x6527e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6527e2:{NFSU2_TR(0x6527e2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6527e3:{NFSU2_TR(0x6527e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6527e4:{NFSU2_TR(0x6527e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6527e5:{NFSU2_TR(0x6527e5);
__builtin_memmove((R+4),(R+0),4);
}
B6527e7:{NFSU2_TR(0x6527e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6527ecull));
TAIL_STATIC(0x672d7bu,672);
}
B6527ec:L6527ec:{c.instructions+=2;NFSU2_TR(0x6527ec);
__builtin_memmove((R+28),(R+0),4);
}
B6527ee:{NFSU2_TR(0x6527ee);
{goto L6527f2;}
}
B6527f0:L6527f0:{c.instructions+=1;NFSU2_TR(0x6527f0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6527f2:L6527f2:{c.instructions+=2;NFSU2_TR(0x6527f2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6527f4:{NFSU2_TR(0x6527f4);
if(r1(R+518)){{goto L652881;}}
}
B6527fa:L6527fa:{c.instructions+=2;NFSU2_TR(0x6527fa);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6527fc:{NFSU2_TR(0x6527fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652801ull));
TAIL_STATIC(0x645362u,645);
}
B652801:L652801:{c.instructions+=2;NFSU2_TR(0x652801);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652803:{NFSU2_TR(0x652803);
if(r1(R+518)){{goto L65281b;}}
}
B652805:L652805:{c.instructions+=7;NFSU2_TR(0x652805);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65280a:{NFSU2_TR(0x65280a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65280c:{NFSU2_TR(0x65280c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65280e:{NFSU2_TR(0x65280e);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652810:{NFSU2_TR(0x652810);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652812:{NFSU2_TR(0x652812);
__builtin_memmove((R+4),(R+0),4);
}
B652814:{NFSU2_TR(0x652814);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652819ull));
TAIL_STATIC(0x672a51u,672);
}
B652819:L652819:{c.instructions+=1;NFSU2_TR(0x652819);
{goto L65281d;}
}
B65281b:L65281b:{c.instructions+=1;NFSU2_TR(0x65281b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65281d:L65281d:{c.instructions+=3;NFSU2_TR(0x65281d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65281f:{NFSU2_TR(0x65281f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652822:{NFSU2_TR(0x652822);
if(r1(R+518)){{goto L652881;}}
}
B652824:L652824:{c.instructions+=2;NFSU2_TR(0x652824);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652826:{NFSU2_TR(0x652826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65282bull));
TAIL_STATIC(0x645362u,645);
}
B65282b:L65282b:{c.instructions+=2;NFSU2_TR(0x65282b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65282d:{NFSU2_TR(0x65282d);
if(r1(R+518)){{goto L652841;}}
}
B65282f:L65282f:{c.instructions+=6;NFSU2_TR(0x65282f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B652832:{NFSU2_TR(0x652832);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652833:{NFSU2_TR(0x652833);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652834:{NFSU2_TR(0x652834);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652836:{NFSU2_TR(0x652836);
__builtin_memmove((R+4),(R+0),4);
}
B652838:{NFSU2_TR(0x652838);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65283dull));
TAIL_STATIC(0x672ec8u,672);
}
B65283d:L65283d:{c.instructions+=2;NFSU2_TR(0x65283d);
__builtin_memmove((R+24),(R+0),4);
}
B65283f:{NFSU2_TR(0x65283f);
{goto L652843;}
}
B652841:L652841:{c.instructions+=1;NFSU2_TR(0x652841);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B652843:L652843:{c.instructions+=2;NFSU2_TR(0x652843);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652845:{NFSU2_TR(0x652845);
if(r1(R+518)){{goto L652881;}}
}
B652847:L652847:{c.instructions+=3;NFSU2_TR(0x652847);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65284a:{NFSU2_TR(0x65284a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65284d:{NFSU2_TR(0x65284d);
if(r1(R+518)){{goto L65285e;}}
}
B65284f:L65284f:{c.instructions+=2;NFSU2_TR(0x65284f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652852:{NFSU2_TR(0x652852);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652857ull));
TAIL_STATIC(0x672440u,672);
}
B652857:L652857:{c.instructions+=3;NFSU2_TR(0x652857);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652859:{NFSU2_TR(0x652859);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65285c:{NFSU2_TR(0x65285c);
if(r1(R+518)){{goto L652881;}}
}
B65285e:L65285e:{c.instructions+=2;NFSU2_TR(0x65285e);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652860:{NFSU2_TR(0x652860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652865ull));
TAIL_STATIC(0x645362u,645);
}
B652865:L652865:{c.instructions+=2;NFSU2_TR(0x652865);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652867:{NFSU2_TR(0x652867);
if(r1(R+518)){{goto L65287b;}}
}
B652869:L652869:{c.instructions+=5;NFSU2_TR(0x652869);
u8 U[4];
w4(U+0,u32(0x7b4088ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65286e:{NFSU2_TR(0x65286e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65286f:{NFSU2_TR(0x65286f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652872:{NFSU2_TR(0x652872);
__builtin_memmove((R+4),(R+0),4);
}
B652874:{NFSU2_TR(0x652874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652879ull));
TAIL_STATIC(0x672498u,672);
}
B652879:L652879:{c.instructions+=1;NFSU2_TR(0x652879);
{goto L65287d;}
}
B65287b:L65287b:{c.instructions+=1;NFSU2_TR(0x65287b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65287d:L65287d:{c.instructions+=2;NFSU2_TR(0x65287d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65287f:{NFSU2_TR(0x65287f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L652885;}}
}
B652881:L652881:{c.instructions+=2;NFSU2_TR(0x652881);
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
B652883:{NFSU2_TR(0x652883);
{goto L652893;}
}
B652885:L652885:{c.instructions+=4;NFSU2_TR(0x652885);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652888:{NFSU2_TR(0x652888);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652889:{NFSU2_TR(0x652889);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65288c:{NFSU2_TR(0x65288c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652891ull));
TAIL_STATIC(0x650571u,650);
}
B652891:L652891:{c.instructions+=1;NFSU2_TR(0x652891);
__builtin_memmove((R+0),(R+28),4);
}
B652893:L652893:{c.instructions+=5;NFSU2_TR(0x652893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B652894:{NFSU2_TR(0x652894);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B652895:{NFSU2_TR(0x652895);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B652896:{NFSU2_TR(0x652896);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B652897:{NFSU2_TR(0x652897);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B65289a:L65289a:{c.instructions+=9;NFSU2_TR(0x65289a);
__builtin_memmove((R+28),(R+28),4);
}
B65289c:{NFSU2_TR(0x65289c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65289d:{NFSU2_TR(0x65289d);
__builtin_memmove((R+20),(R+16),4);
}
B65289f:{NFSU2_TR(0x65289f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6528a0:{NFSU2_TR(0x6528a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6528a3:{NFSU2_TR(0x6528a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6528a5:{NFSU2_TR(0x6528a5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6528a7:{NFSU2_TR(0x6528a7);
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6528a9:{NFSU2_TR(0x6528a9);
if(r1(R+518)){{goto L652991;}}
}
B6528af:L6528af:{c.instructions+=2;NFSU2_TR(0x6528af);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6528b0:{NFSU2_TR(0x6528b0);
if(r1(R+518)){{goto L652957;}}
}
B6528b6:L6528b6:{c.instructions+=2;NFSU2_TR(0x6528b6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6528b7:{NFSU2_TR(0x6528b7);
if(r1(R+518)){{goto L652957;}}
}
B6528bd:L6528bd:{c.instructions+=3;NFSU2_TR(0x6528bd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6528be:{NFSU2_TR(0x6528be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6528c1:{NFSU2_TR(0x6528c1);
if(r1(R+518)){{goto L6528fd;}}
}
B6528c3:L6528c3:{c.instructions+=4;NFSU2_TR(0x6528c3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6528c4:{NFSU2_TR(0x6528c4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6528c6:{NFSU2_TR(0x6528c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6528c7:{NFSU2_TR(0x6528c7);
if(r1(R+518)){{goto L6528d1;}}
}
B6528c9:L6528c9:{c.instructions+=2;NFSU2_TR(0x6528c9);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6528ca:{NFSU2_TR(0x6528ca);
if(r1(R+518)){{goto L6528d5;}}
}
B6528cc:L6528cc:{c.instructions+=1;NFSU2_TR(0x6528cc);
{goto L6529a3;}
}
B6528d1:L6528d1:{c.instructions+=2;NFSU2_TR(0x6528d1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6528d3:{NFSU2_TR(0x6528d3);
if(r1(R+518)){{goto L6528f5;}}
}
B6528d5:L6528d5:{c.instructions+=3;NFSU2_TR(0x6528d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6528d7:{NFSU2_TR(0x6528d7);
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6528d9:{NFSU2_TR(0x6528d9);
if(r1(R+518)){{goto L6528f3;}}
}
B6528db:L6528db:{c.instructions+=2;NFSU2_TR(0x6528db);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6528dc:{NFSU2_TR(0x6528dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6529a3;}}
}
B6528e2:L6528e2:{c.instructions+=5;NFSU2_TR(0x6528e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6528e5:{NFSU2_TR(0x6528e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6528e8:{NFSU2_TR(0x6528e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6528eb:{NFSU2_TR(0x6528eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6528ee:{NFSU2_TR(0x6528ee);
{goto L6529cf;}
}
B6528f3:L6528f3:{c.instructions+=1;NFSU2_TR(0x6528f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6528f5:L6528f5:{c.instructions+=2;NFSU2_TR(0x6528f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6528f8:{NFSU2_TR(0x6528f8);
{goto L65298c;}
}
B6528fd:L6528fd:{c.instructions+=3;NFSU2_TR(0x6528fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6528ff:{NFSU2_TR(0x6528ff);
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B652901:{NFSU2_TR(0x652901);
if(r1(R+518)){{goto L65292f;}}
}
B652903:L652903:{c.instructions+=2;NFSU2_TR(0x652903);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B652904:{NFSU2_TR(0x652904);
if(r1(R+518)){{goto L65292a;}}
}
B652906:L652906:{c.instructions+=2;NFSU2_TR(0x652906);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B652907:{NFSU2_TR(0x652907);
if(r1(R+518)){{goto L652915;}}
}
B652909:L652909:{c.instructions+=2;NFSU2_TR(0x652909);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65290a:{NFSU2_TR(0x65290a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6529a3;}}
}
B652910:L652910:{c.instructions+=2;NFSU2_TR(0x652910);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652913:{NFSU2_TR(0x652913);
{goto L65293d;}
}
B652915:L652915:{c.instructions+=5;NFSU2_TR(0x652915);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652918:{NFSU2_TR(0x652918);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65291a:{NFSU2_TR(0x65291a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65291d:{NFSU2_TR(0x65291d);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B652920:{NFSU2_TR(0x652920);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L65293d;}}
}
B652922:L652922:{c.instructions+=2;NFSU2_TR(0x652922);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B652928:{NFSU2_TR(0x652928);
{goto L65293d;}
}
B65292a:L65292a:{c.instructions+=2;NFSU2_TR(0x65292a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B65292d:{NFSU2_TR(0x65292d);
{goto L65293d;}
}
B65292f:L65292f:{c.instructions+=5;NFSU2_TR(0x65292f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B652931:{NFSU2_TR(0x652931);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B652934:{NFSU2_TR(0x652934);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B652937:{NFSU2_TR(0x652937);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65293a:{NFSU2_TR(0x65293a);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B65293d:L65293d:{c.instructions+=2;NFSU2_TR(0x65293d);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B652940:{NFSU2_TR(0x652940);
{goto L6529cf;}
}
B652945:L652945:{c.instructions+=1;NFSU2_TR(0x652945);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x20"::"a"(ea_):"memory");}
}
B65294b:L65294b:{c.instructions+=1;NFSU2_TR(0x65294b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652950ull));
TAIL_STATIC(0x75dd28u,75d);
}
B652950:L652950:{c.instructions+=1;NFSU2_TR(0x652950);
{goto L65298c;}
}
B652952:L652952:{c.instructions+=2;NFSU2_TR(0x652952);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652955:{NFSU2_TR(0x652955);
{goto L65298c;}
}
B652957:L652957:{c.instructions+=4;NFSU2_TR(0x652957);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65295a:{NFSU2_TR(0x65295a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65295c:{NFSU2_TR(0x65295c);
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B65295e:{NFSU2_TR(0x65295e);
if(r1(R+518)){{goto L652984;}}
}
B652960:L652960:{c.instructions+=2;NFSU2_TR(0x652960);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B652961:{NFSU2_TR(0x652961);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652952u);}goto L652952;}}
}
B652963:L652963:{c.instructions+=2;NFSU2_TR(0x652963);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B652964:{NFSU2_TR(0x652964);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652952u);}goto L652952;}}
}
B652966:L652966:{c.instructions+=2;NFSU2_TR(0x652966);
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
B652967:{NFSU2_TR(0x652967);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6529a3;}}
}
B652969:L652969:{c.instructions+=6;NFSU2_TR(0x652969);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B65296c:{NFSU2_TR(0x65296c);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B652972:{NFSU2_TR(0x652972);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652975:{NFSU2_TR(0x652975);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B652977:{NFSU2_TR(0x652977);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B65297a:{NFSU2_TR(0x65297a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652945u);}goto L652945;}}
}
B65297c:L65297c:{c.instructions+=2;NFSU2_TR(0x65297c);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B652982:{NFSU2_TR(0x652982);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65294bu);}goto L65294b;}
}
B652984:L652984:{c.instructions+=3;NFSU2_TR(0x652984);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B652986:{NFSU2_TR(0x652986);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B652989:{NFSU2_TR(0x652989);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B65298c:L65298c:{c.instructions+=2;NFSU2_TR(0x65298c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65298f:{NFSU2_TR(0x65298f);
{goto L6529cf;}
}
B652991:L652991:{c.instructions+=4;NFSU2_TR(0x652991);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652994:{NFSU2_TR(0x652994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B652996:{NFSU2_TR(0x652996);
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B652998:{NFSU2_TR(0x652998);
if(r1(R+518)){{goto L6529c4;}}
}
B65299a:L65299a:{c.instructions+=2;NFSU2_TR(0x65299a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B65299b:{NFSU2_TR(0x65299b);
if(r1(R+518)){{goto L6529c4;}}
}
B65299d:L65299d:{c.instructions+=2;NFSU2_TR(0x65299d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B65299e:{NFSU2_TR(0x65299e);
if(r1(R+518)){{goto L6529c4;}}
}
B6529a0:L6529a0:{c.instructions+=2;NFSU2_TR(0x6529a0);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6529a1:{NFSU2_TR(0x6529a1);
if(r1(R+518)){{goto L6529aa;}}
}
B6529a3:L6529a3:{c.instructions+=2;NFSU2_TR(0x6529a3);
w4(R+0,u32(0x80004005ull));
}
B6529a8:{NFSU2_TR(0x6529a8);
{goto L6529d1;}
}
B6529aa:L6529aa:{c.instructions+=6;NFSU2_TR(0x6529aa);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6529ad:{NFSU2_TR(0x6529ad);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6529b3:{NFSU2_TR(0x6529b3);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6529b5:{NFSU2_TR(0x6529b5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6529b7:{NFSU2_TR(0x6529b7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6529ba:{NFSU2_TR(0x6529ba);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6529bf;}}
}
B6529bc:L6529bc:{c.instructions+=2;NFSU2_TR(0x6529bc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6529be:{NFSU2_TR(0x6529be);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6529bf:L6529bf:{c.instructions+=2;NFSU2_TR(0x6529bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6529c2:{NFSU2_TR(0x6529c2);
{goto L6529cf;}
}
B6529c4:L6529c4:{c.instructions+=4;NFSU2_TR(0x6529c4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6529c6:{NFSU2_TR(0x6529c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6529c9:{NFSU2_TR(0x6529c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B6529cc:{NFSU2_TR(0x6529cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6529cf:L6529cf:{c.instructions+=1;NFSU2_TR(0x6529cf);
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
B6529d1:L6529d1:{c.instructions+=3;NFSU2_TR(0x6529d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6529d2:{NFSU2_TR(0x6529d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6529d3:{NFSU2_TR(0x6529d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6529d6:L6529d6:{c.instructions+=7;NFSU2_TR(0x6529d6);
__builtin_memmove((R+28),(R+28),4);
}
B6529d8:{NFSU2_TR(0x6529d8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6529d9:{NFSU2_TR(0x6529d9);
__builtin_memmove((R+20),(R+16),4);
}
B6529db:{NFSU2_TR(0x6529db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6529de:{NFSU2_TR(0x6529de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6529e0:{NFSU2_TR(0x6529e0);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6529e3:{NFSU2_TR(0x6529e3);
if(r1(R+518)){{goto L652a22;}}
}
B6529e5:L6529e5:{c.instructions+=2;NFSU2_TR(0x6529e5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6529e6:{NFSU2_TR(0x6529e6);
if(r1(R+518)){{goto L652a1d;}}
}
B6529e8:L6529e8:{c.instructions+=2;NFSU2_TR(0x6529e8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6529e9:{NFSU2_TR(0x6529e9);
if(r1(R+518)){{goto L652a1d;}}
}
B6529eb:L6529eb:{c.instructions+=2;NFSU2_TR(0x6529eb);
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
B6529ec:{NFSU2_TR(0x6529ec);
if(r1(R+518)){{goto L6529f5;}}
}
B6529ee:L6529ee:{c.instructions+=2;NFSU2_TR(0x6529ee);
w4(R+0,u32(0x80004005ull));
}
B6529f3:{NFSU2_TR(0x6529f3);
{goto L652a31;}
}
B6529f5:L6529f5:{c.instructions+=6;NFSU2_TR(0x6529f5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6529f8:{NFSU2_TR(0x6529f8);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6529fe:{NFSU2_TR(0x6529fe);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652a01:{NFSU2_TR(0x652a01);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B652a03:{NFSU2_TR(0x652a03);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B652a06:{NFSU2_TR(0x652a06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L652a10;}}
}
B652a08:L652a08:{c.instructions+=2;NFSU2_TR(0x652a08);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B652a0e:{NFSU2_TR(0x652a0e);
{goto L652a16;}
}
B652a10:L652a10:{c.instructions+=1;NFSU2_TR(0x652a10);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x20"::"a"(ea_):"memory");}
}
B652a16:L652a16:{c.instructions+=1;NFSU2_TR(0x652a16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652a1bull));
TAIL_STATIC(0x75dd28u,75d);
}
B652a1b:L652a1b:{c.instructions+=1;NFSU2_TR(0x652a1b);
{goto L652a2a;}
}
B652a1d:L652a1d:{c.instructions+=2;NFSU2_TR(0x652a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652a20:{NFSU2_TR(0x652a20);
{goto L652a2a;}
}
B652a22:L652a22:{c.instructions+=3;NFSU2_TR(0x652a22);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B652a24:{NFSU2_TR(0x652a24);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B652a27:{NFSU2_TR(0x652a27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B652a2a:L652a2a:{c.instructions+=3;NFSU2_TR(0x652a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652a2d:{NFSU2_TR(0x652a2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B652a2f:{NFSU2_TR(0x652a2f);
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
B652a31:L652a31:{c.instructions+=2;NFSU2_TR(0x652a31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B652a32:{NFSU2_TR(0x652a32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B652a35:L652a35:{c.instructions+=8;NFSU2_TR(0x652a35);
__builtin_memmove((R+28),(R+28),4);
}
B652a37:{NFSU2_TR(0x652a37);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652a38:{NFSU2_TR(0x652a38);
__builtin_memmove((R+20),(R+16),4);
}
B652a3a:{NFSU2_TR(0x652a3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652a3b:{NFSU2_TR(0x652a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B652a3e:{NFSU2_TR(0x652a3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B652a40:{NFSU2_TR(0x652a40);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B652a43:{NFSU2_TR(0x652a43);
if(r1(R+518)){{goto L652a85;}}
}
B652a45:L652a45:{c.instructions+=2;NFSU2_TR(0x652a45);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B652a46:{NFSU2_TR(0x652a46);
if(r1(R+518)){{goto L652a5d;}}
}
B652a48:L652a48:{c.instructions+=2;NFSU2_TR(0x652a48);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B652a49:{NFSU2_TR(0x652a49);
if(r1(R+518)){{goto L652a5d;}}
}
B652a4b:L652a4b:{c.instructions+=2;NFSU2_TR(0x652a4b);
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
B652a4c:{NFSU2_TR(0x652a4c);
if(r1(R+518)){{goto L652a55;}}
}
B652a4e:L652a4e:{c.instructions+=2;NFSU2_TR(0x652a4e);
w4(R+0,u32(0x80004005ull));
}
B652a53:{NFSU2_TR(0x652a53);
{goto L652aa3;}
}
B652a55:L652a55:{c.instructions+=3;NFSU2_TR(0x652a55);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652a58:{NFSU2_TR(0x652a58);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B652a5b:{NFSU2_TR(0x652a5b);
{goto L652aa1;}
}
B652a5d:L652a5d:{c.instructions+=6;NFSU2_TR(0x652a5d);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652a60:{NFSU2_TR(0x652a60);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B652a66:{NFSU2_TR(0x652a66);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652a69:{NFSU2_TR(0x652a69);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B652a6b:{NFSU2_TR(0x652a6b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B652a6e:{NFSU2_TR(0x652a6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L652a78;}}
}
B652a70:L652a70:{c.instructions+=2;NFSU2_TR(0x652a70);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B652a76:{NFSU2_TR(0x652a76);
{goto L652a7e;}
}
B652a78:L652a78:{c.instructions+=1;NFSU2_TR(0x652a78);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x20"::"a"(ea_):"memory");}
}
B652a7e:L652a7e:{c.instructions+=1;NFSU2_TR(0x652a7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652a83ull));
TAIL_STATIC(0x75dd28u,75d);
}
B652a83:L652a83:{c.instructions+=1;NFSU2_TR(0x652a83);
{goto L652a9e;}
}
B652a85:L652a85:{c.instructions+=6;NFSU2_TR(0x652a85);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652a88:{NFSU2_TR(0x652a88);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652a8e:{NFSU2_TR(0x652a8e);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B652a90:{NFSU2_TR(0x652a90);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B652a92:{NFSU2_TR(0x652a92);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B652a95:{NFSU2_TR(0x652a95);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L652a9c;}}
}
B652a97:L652a97:{c.instructions+=3;NFSU2_TR(0x652a97);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B652a99:{NFSU2_TR(0x652a99);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B652a9a:{NFSU2_TR(0x652a9a);
{goto L652a9e;}
}
B652a9c:L652a9c:{c.instructions+=1;NFSU2_TR(0x652a9c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B652a9e:L652a9e:{c.instructions+=1;NFSU2_TR(0x652a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652aa1:L652aa1:{c.instructions+=1;NFSU2_TR(0x652aa1);
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
B652aa3:L652aa3:{c.instructions+=3;NFSU2_TR(0x652aa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B652aa4:{NFSU2_TR(0x652aa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B652aa5:{NFSU2_TR(0x652aa5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B652aa8:L652aa8:{c.instructions+=14;NFSU2_TR(0x652aa8);
__builtin_memmove((R+28),(R+28),4);
}
B652aaa:{NFSU2_TR(0x652aaa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652aab:{NFSU2_TR(0x652aab);
__builtin_memmove((R+20),(R+16),4);
}
B652aad:{NFSU2_TR(0x652aad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B652ab0:{NFSU2_TR(0x652ab0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652ab1:{NFSU2_TR(0x652ab1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B652ab4:{NFSU2_TR(0x652ab4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652ab5:{NFSU2_TR(0x652ab5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652ab6:{NFSU2_TR(0x652ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B652ab9:{NFSU2_TR(0x652ab9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B652abb:{NFSU2_TR(0x652abb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652abd:{NFSU2_TR(0x652abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652ac0:{NFSU2_TR(0x652ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652ac3:{NFSU2_TR(0x652ac3);
if(r1(R+518)){{goto L652b6b;}}
}
B652ac9:L652ac9:{c.instructions+=3;NFSU2_TR(0x652ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652acc:{NFSU2_TR(0x652acc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652ace:{NFSU2_TR(0x652ace);
if(r1(R+518)){{goto L652b6b;}}
}
B652ad4:L652ad4:{c.instructions+=5;NFSU2_TR(0x652ad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B652ad7:{NFSU2_TR(0x652ad7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652ad8:{NFSU2_TR(0x652ad8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652ad9:{NFSU2_TR(0x652ad9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652adc:{NFSU2_TR(0x652adc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652ae1ull));
TAIL_STATIC(0x672277u,672);
}
B652ae1:L652ae1:{c.instructions+=2;NFSU2_TR(0x652ae1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B652ae3:{NFSU2_TR(0x652ae3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L652b32;}}
}
B652ae5:L652ae5:{c.instructions+=5;NFSU2_TR(0x652ae5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B652ae8:{NFSU2_TR(0x652ae8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652ae9:{NFSU2_TR(0x652ae9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652aea:{NFSU2_TR(0x652aea);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652aed:{NFSU2_TR(0x652aed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652af2ull));
TAIL_STATIC(0x672277u,672);
}
B652af2:L652af2:{c.instructions+=2;NFSU2_TR(0x652af2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B652af4:{NFSU2_TR(0x652af4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L652b32;}}
}
B652af6:L652af6:{c.instructions+=3;NFSU2_TR(0x652af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652af9:{NFSU2_TR(0x652af9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B652afc:{NFSU2_TR(0x652afc);
if(r1(R+518)){{goto L652b85;}}
}
B652b02:L652b02:{c.instructions+=4;NFSU2_TR(0x652b02);
__builtin_memmove((R+4),(R+0),4);
}
B652b04:{NFSU2_TR(0x652b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B652b07:{NFSU2_TR(0x652b07);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffff0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652b0d:{NFSU2_TR(0x652b0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L652c68;}}
}
B652b13:L652b13:{c.instructions+=3;NFSU2_TR(0x652b13);
w4(R+4,u32(0xffffull));
}
B652b18:{NFSU2_TR(0x652b18);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B652b1b:{NFSU2_TR(0x652b1b);
if(r1(R+518)){{goto L652b25;}}
}
B652b1d:L652b1d:{c.instructions+=2;NFSU2_TR(0x652b1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652b1f:{NFSU2_TR(0x652b1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L652c68;}}
}
B652b25:L652b25:{c.instructions+=7;NFSU2_TR(0x652b25);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B652b27:{NFSU2_TR(0x652b27);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B652b29:{NFSU2_TR(0x652b29);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B652b2b:{NFSU2_TR(0x652b2b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B652b2c:{NFSU2_TR(0x652b2c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B652b2d:{NFSU2_TR(0x652b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652b30:{NFSU2_TR(0x652b30);
{goto L652b85;}
}
B652b32:L652b32:{c.instructions+=3;NFSU2_TR(0x652b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652b35:{NFSU2_TR(0x652b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B652b38:{NFSU2_TR(0x652b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652b3b:L652b3b:{c.instructions+=4;NFSU2_TR(0x652b3b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B652b3d:{NFSU2_TR(0x652b3d);
__builtin_memmove((R+4),(R+8),1);
}
B652b3f:{NFSU2_TR(0x652b3f);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B652b41:{NFSU2_TR(0x652b41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L652b5d;}}
}
B652b43:L652b43:{c.instructions+=2;NFSU2_TR(0x652b43);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B652b45:{NFSU2_TR(0x652b45);
if(r1(R+518)){{goto L652b59;}}
}
B652b47:L652b47:{c.instructions+=4;NFSU2_TR(0x652b47);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B652b4a:{NFSU2_TR(0x652b4a);
__builtin_memmove((R+4),(R+8),1);
}
B652b4c:{NFSU2_TR(0x652b4c);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B652b4f:{NFSU2_TR(0x652b4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L652b5d;}}
}
B652b51:L652b51:{c.instructions+=6;NFSU2_TR(0x652b51);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B652b52:{NFSU2_TR(0x652b52);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B652b53:{NFSU2_TR(0x652b53);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B652b54:{NFSU2_TR(0x652b54);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B652b55:{NFSU2_TR(0x652b55);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B652b57:{NFSU2_TR(0x652b57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652b3bu);}goto L652b3b;}}
}
B652b59:L652b59:{c.instructions+=2;NFSU2_TR(0x652b59);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B652b5b:{NFSU2_TR(0x652b5b);
{goto L652b62;}
}
B652b5d:L652b5d:{c.instructions+=2;NFSU2_TR(0x652b5d);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B652b5f:{NFSU2_TR(0x652b5f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B652b62:L652b62:{c.instructions+=2;NFSU2_TR(0x652b62);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652b64:{NFSU2_TR(0x652b64);
if(r1(R+518)){{goto L652b85;}}
}
B652b66:L652b66:{c.instructions+=1;NFSU2_TR(0x652b66);
{goto L652c68;}
}
B652b6b:L652b6b:{c.instructions+=8;NFSU2_TR(0x652b6b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B652b6d:{NFSU2_TR(0x652b6d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B652b70:{NFSU2_TR(0x652b70);
__builtin_memmove((R+0),(R+518),1);
}
B652b73:{NFSU2_TR(0x652b73);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B652b75:{NFSU2_TR(0x652b75);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652b77:{NFSU2_TR(0x652b77);
__builtin_memmove((R+4),(R+518),1);
}
B652b7a:{NFSU2_TR(0x652b7a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652b7c:{NFSU2_TR(0x652b7c);
if(r1(R+518)){{goto L652b85;}}
}
B652b7e:L652b7e:{c.instructions+=1;NFSU2_TR(0x652b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B652b85:L652b85:{c.instructions+=5;NFSU2_TR(0x652b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B652b88:{NFSU2_TR(0x652b88);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652b8a:{NFSU2_TR(0x652b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652b8d:{NFSU2_TR(0x652b8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652b90:{NFSU2_TR(0x652b90);
if(r1(R+518)){{goto L652c62;}}
}
B652b96:L652b96:{c.instructions+=3;NFSU2_TR(0x652b96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652b99:{NFSU2_TR(0x652b99);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x10ull))));
}
B652b9c:{NFSU2_TR(0x652b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652b9f:L652b9f:{c.instructions+=5;NFSU2_TR(0x652b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652ba2:{NFSU2_TR(0x652ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B652ba5:{NFSU2_TR(0x652ba5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B652ba7:{NFSU2_TR(0x652ba7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652ba9:{NFSU2_TR(0x652ba9);
if(r1(R+518)){{goto L652bb8;}}
}
B652bab:L652bab:{c.instructions+=3;NFSU2_TR(0x652bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B652bae:{NFSU2_TR(0x652bae);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B652bb2:{NFSU2_TR(0x652bb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L652bb8;}}
}
B652bb4:L652bb4:{c.instructions+=2;NFSU2_TR(0x652bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B652bb7:{NFSU2_TR(0x652bb7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B652bb8:L652bb8:{c.instructions+=2;NFSU2_TR(0x652bb8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B652bbc:{NFSU2_TR(0x652bbc);
if(r1(R+518)){{goto L652bcb;}}
}
B652bbe:L652bbe:{c.instructions+=3;NFSU2_TR(0x652bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B652bc1:{NFSU2_TR(0x652bc1);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B652bc5:{NFSU2_TR(0x652bc5);
if(r1(R+518)){{goto L652c5a;}}
}
B652bcb:L652bcb:{c.instructions+=3;NFSU2_TR(0x652bcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B652bce:{NFSU2_TR(0x652bce);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652bd0:{NFSU2_TR(0x652bd0);
if(r1(R+518)){{goto L652c56;}}
}
B652bd6:L652bd6:{c.instructions+=5;NFSU2_TR(0x652bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B652bd9:{NFSU2_TR(0x652bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652bdc:{NFSU2_TR(0x652bdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652bde:{NFSU2_TR(0x652bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B652be1:{NFSU2_TR(0x652be1);
if(r1(R+518)){{goto L652beb;}}
}
B652be3:L652be3:{c.instructions+=3;NFSU2_TR(0x652be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652be6:{NFSU2_TR(0x652be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652be9:{NFSU2_TR(0x652be9);
{goto L652bef;}
}
B652beb:L652beb:{c.instructions+=1;NFSU2_TR(0x652beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B652bef:L652bef:{c.instructions+=2;NFSU2_TR(0x652bef);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B652bf3:{NFSU2_TR(0x652bf3);
if(r1(R+518)){{goto L652c16;}}
}
B652bf5:L652bf5:{c.instructions+=5;NFSU2_TR(0x652bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652bf8:{NFSU2_TR(0x652bf8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652bfa:{NFSU2_TR(0x652bfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652bfd:{NFSU2_TR(0x652bfd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652bfe:{NFSU2_TR(0x652bfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652c03ull));
TAIL_STATIC(0x65164au,651);
}
B652c03:L652c03:{c.instructions+=2;NFSU2_TR(0x652c03);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652c05:{NFSU2_TR(0x652c05);
if(r1(R+518)){{goto L652c68;}}
}
B652c07:L652c07:{c.instructions+=4;NFSU2_TR(0x652c07);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652c0a:{NFSU2_TR(0x652c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652c0d:{NFSU2_TR(0x652c0d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652c0e:{NFSU2_TR(0x652c0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652c13ull));
TAIL_STATIC(0x651474u,651);
}
B652c13:L652c13:{c.instructions+=1;NFSU2_TR(0x652c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B652c16:L652c16:{c.instructions+=2;NFSU2_TR(0x652c16);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B652c1a:{NFSU2_TR(0x652c1a);
if(r1(R+518)){{goto L652c4b;}}
}
B652c1c:L652c1c:{c.instructions+=3;NFSU2_TR(0x652c1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652c1f:{NFSU2_TR(0x652c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652c22:{NFSU2_TR(0x652c22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652c27ull));
TAIL_STATIC(0x64fa50u,64f);
}
B652c27:L652c27:{c.instructions+=2;NFSU2_TR(0x652c27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652c29:{NFSU2_TR(0x652c29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L652c68;}}
}
B652c2b:L652c2b:{c.instructions+=5;NFSU2_TR(0x652c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652c2e:{NFSU2_TR(0x652c2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652c2f:{NFSU2_TR(0x652c2f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652c30:{NFSU2_TR(0x652c30);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652c33:{NFSU2_TR(0x652c33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652c38ull));
TAIL_STATIC(0x65164au,651);
}
B652c38:L652c38:{c.instructions+=2;NFSU2_TR(0x652c38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652c3a:{NFSU2_TR(0x652c3a);
if(r1(R+518)){{goto L652c68;}}
}
B652c3c:L652c3c:{c.instructions+=4;NFSU2_TR(0x652c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652c3f:{NFSU2_TR(0x652c3f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652c40:{NFSU2_TR(0x652c40);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652c43:{NFSU2_TR(0x652c43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652c48ull));
TAIL_STATIC(0x651474u,651);
}
B652c48:L652c48:{c.instructions+=1;NFSU2_TR(0x652c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B652c4b:L652c4b:{c.instructions+=4;NFSU2_TR(0x652c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652c4e:{NFSU2_TR(0x652c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652c51:{NFSU2_TR(0x652c51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652c54:{NFSU2_TR(0x652c54);
{goto L652c5a;}
}
B652c56:L652c56:{c.instructions+=2;NFSU2_TR(0x652c56);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652c58:{NFSU2_TR(0x652c58);
if(r1(R+518)){{goto L652c68;}}
}
B652c5a:L652c5a:{c.instructions+=2;NFSU2_TR(0x652c5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652c5c:{NFSU2_TR(0x652c5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652b9fu);}goto L652b9f;}}
}
B652c62:L652c62:{c.instructions+=2;NFSU2_TR(0x652c62);
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
B652c66:{NFSU2_TR(0x652c66);
if(r1(R+518)){{goto L652c6d;}}
}
B652c68:L652c68:{c.instructions+=2;NFSU2_TR(0x652c68);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B652c6b:{NFSU2_TR(0x652c6b);
{goto L652c70;}
}
B652c6d:L652c6d:{c.instructions+=1;NFSU2_TR(0x652c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652c70:L652c70:{c.instructions+=5;NFSU2_TR(0x652c70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B652c71:{NFSU2_TR(0x652c71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B652c72:{NFSU2_TR(0x652c72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B652c73:{NFSU2_TR(0x652c73);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B652c74:{NFSU2_TR(0x652c74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B652c77:L652c77:{c.instructions+=9;NFSU2_TR(0x652c77);
__builtin_memmove((R+28),(R+28),4);
}
B652c79:{NFSU2_TR(0x652c79);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652c7a:{NFSU2_TR(0x652c7a);
__builtin_memmove((R+20),(R+16),4);
}
B652c7c:{NFSU2_TR(0x652c7c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652c7d:{NFSU2_TR(0x652c7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652c7e:{NFSU2_TR(0x652c7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652c7f:{NFSU2_TR(0x652c7f);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652c81:{NFSU2_TR(0x652c81);
__builtin_memmove((R+12),(R+4),4);
}
B652c83:{NFSU2_TR(0x652c83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652c88ull));
TAIL_STATIC(0x645362u,645);
}
B652c88:L652c88:{c.instructions+=3;NFSU2_TR(0x652c88);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B652c8a:{NFSU2_TR(0x652c8a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652c8c:{NFSU2_TR(0x652c8c);
if(r1(R+518)){{goto L652ca2;}}
}
B652c8e:L652c8e:{c.instructions+=5;NFSU2_TR(0x652c8e);
u8 U[4];
w4(U+0,u32(0x7b40b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652c93:{NFSU2_TR(0x652c93);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652c96:{NFSU2_TR(0x652c96);
__builtin_memmove((R+4),(R+0),4);
}
B652c98:{NFSU2_TR(0x652c98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652c99:{NFSU2_TR(0x652c99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652c9eull));
TAIL_STATIC(0x672498u,672);
}
B652c9e:L652c9e:{c.instructions+=2;NFSU2_TR(0x652c9e);
__builtin_memmove((R+28),(R+0),4);
}
B652ca0:{NFSU2_TR(0x652ca0);
{goto L652ca4;}
}
B652ca2:L652ca2:{c.instructions+=1;NFSU2_TR(0x652ca2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B652ca4:L652ca4:{c.instructions+=2;NFSU2_TR(0x652ca4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652ca6:{NFSU2_TR(0x652ca6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L652cad;}}
}
B652ca8:L652ca8:{c.instructions+=3;NFSU2_TR(0x652ca8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652ca9:{NFSU2_TR(0x652ca9);
__builtin_memmove((R+4),(R+12),4);
}
B652cab:{NFSU2_TR(0x652cab);
{goto L652cc9;}
}
B652cad:L652cad:{c.instructions+=3;NFSU2_TR(0x652cad);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B652cb0:{NFSU2_TR(0x652cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652cb3:{NFSU2_TR(0x652cb3);
if(r1(R+518)){{goto L652ce6;}}
}
B652cb5:L652cb5:{c.instructions+=2;NFSU2_TR(0x652cb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652cb8:{NFSU2_TR(0x652cb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652cbdull));
TAIL_STATIC(0x672440u,672);
}
B652cbd:L652cbd:{c.instructions+=5;NFSU2_TR(0x652cbd);
__builtin_memmove((R+24),(R+0),4);
}
B652cbf:{NFSU2_TR(0x652cbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652cc1:{NFSU2_TR(0x652cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652cc4:{NFSU2_TR(0x652cc4);
__builtin_memmove((R+4),(R+12),4);
}
B652cc6:{NFSU2_TR(0x652cc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L652cd5;}}
}
B652cc8:L652cc8:{c.instructions+=1;NFSU2_TR(0x652cc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652cc9:L652cc9:{c.instructions+=1;NFSU2_TR(0x652cc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652cceull));
TAIL_STATIC(0x64f625u,64f);
}
B652cce:L652cce:{c.instructions+=2;NFSU2_TR(0x652cce);
w4(R+0,u32(0x8007000eull));
}
B652cd3:{NFSU2_TR(0x652cd3);
{goto L652ce8;}
}
B652cd5:L652cd5:{c.instructions+=3;NFSU2_TR(0x652cd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652cd8:{NFSU2_TR(0x652cd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652cd9:{NFSU2_TR(0x652cd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652cdeull));
TAIL_STATIC(0x651597u,651);
}
B652cde:L652cde:{c.instructions+=2;NFSU2_TR(0x652cde);
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
B652ce0:{NFSU2_TR(0x652ce0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L652ce8;}}
}
B652ce2:L652ce2:{c.instructions+=1;NFSU2_TR(0x652ce2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xf1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B652ce6:L652ce6:{c.instructions+=1;NFSU2_TR(0x652ce6);
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
B652ce8:L652ce8:{c.instructions+=5;NFSU2_TR(0x652ce8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B652ce9:{NFSU2_TR(0x652ce9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B652cea:{NFSU2_TR(0x652cea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B652ceb:{NFSU2_TR(0x652ceb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B652cec:{NFSU2_TR(0x652cec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B652cef:L652cef:{c.instructions+=9;NFSU2_TR(0x652cef);
__builtin_memmove((R+28),(R+28),4);
}
B652cf1:{NFSU2_TR(0x652cf1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652cf2:{NFSU2_TR(0x652cf2);
__builtin_memmove((R+20),(R+16),4);
}
B652cf4:{NFSU2_TR(0x652cf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B652cf7:{NFSU2_TR(0x652cf7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652cf8:{NFSU2_TR(0x652cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B652cfb:{NFSU2_TR(0x652cfb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652cfd:{NFSU2_TR(0x652cfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652d00:{NFSU2_TR(0x652d00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L652d12;}}
}
B652d02:L652d02:{c.instructions+=2;NFSU2_TR(0x652d02);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B652d05:{NFSU2_TR(0x652d05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x653f8bu,653);}
}
B652d0b:L652d0b:{c.instructions+=2;NFSU2_TR(0x652d0b);
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
B652d0d:{NFSU2_TR(0x652d0d);
TAIL_STATIC(0x653f90u,653);
}
B652d12:L652d12:{c.instructions+=2;NFSU2_TR(0x652d12);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xdull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B652d16:{NFSU2_TR(0x652d16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x653f8bu,653);}
}
B652d1c:L652d1c:{c.instructions+=5;NFSU2_TR(0x652d1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B652d1f:{NFSU2_TR(0x652d1f);
u8 U[32];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B652d23:{NFSU2_TR(0x652d23);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1aull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1aull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1aull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B652d27:{NFSU2_TR(0x652d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652d2a:{NFSU2_TR(0x652d2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x653f8bu,653);}
}
B652d30:L652d30:{c.instructions+=26;NFSU2_TR(0x652d30);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B652d32:{NFSU2_TR(0x652d32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652d33:{NFSU2_TR(0x652d33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652d34:{NFSU2_TR(0x652d34);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+28),(U+0),4);
}
B652d37:{NFSU2_TR(0x652d37);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B652d38:{NFSU2_TR(0x652d38);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B652d39:{NFSU2_TR(0x652d39);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B652d3a:{NFSU2_TR(0x652d3a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B652d3b:{NFSU2_TR(0x652d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652d3e:{NFSU2_TR(0x652d3e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B652d40:{NFSU2_TR(0x652d40);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+28),(U+0),4);
}
B652d43:{NFSU2_TR(0x652d43);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B652d44:{NFSU2_TR(0x652d44);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B652d45:{NFSU2_TR(0x652d45);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B652d46:{NFSU2_TR(0x652d46);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B652d47:{NFSU2_TR(0x652d47);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B652d49:{NFSU2_TR(0x652d49);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+28),(U+0),4);
}
B652d4c:{NFSU2_TR(0x652d4c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B652d4d:{NFSU2_TR(0x652d4d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B652d4e:{NFSU2_TR(0x652d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652d51:{NFSU2_TR(0x652d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652d54:{NFSU2_TR(0x652d54);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652d56:{NFSU2_TR(0x652d56);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B652d57:{NFSU2_TR(0x652d57);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B652d58:{NFSU2_TR(0x652d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652d5b:{NFSU2_TR(0x652d5b);
if(r1(R+518)){{goto L652e20;}}
}
B652d61:L652d61:{c.instructions+=1;NFSU2_TR(0x652d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B652d65:L652d65:{c.instructions+=4;NFSU2_TR(0x652d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652d68:{NFSU2_TR(0x652d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652d6b:{NFSU2_TR(0x652d6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652d6d:{NFSU2_TR(0x652d6d);
if(r1(R+518)){{goto L652e05;}}
}
B652d73:L652d73:{c.instructions+=2;NFSU2_TR(0x652d73);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B652d77:{NFSU2_TR(0x652d77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L652e05;}}
}
B652d7d:L652d7d:{c.instructions+=10;NFSU2_TR(0x652d7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652d80:{NFSU2_TR(0x652d80);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B652d84:{NFSU2_TR(0x652d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B652d87:{NFSU2_TR(0x652d87);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B652d8b:{NFSU2_TR(0x652d8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B652d8d:{NFSU2_TR(0x652d8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B652d90:{NFSU2_TR(0x652d90);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B652d94:{NFSU2_TR(0x652d94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652d95:{NFSU2_TR(0x652d95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B652d97:{NFSU2_TR(0x652d97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652d9cull));
TAIL_STATIC(0x575620u,575);
}
B652d9c:L652d9c:{c.instructions+=6;NFSU2_TR(0x652d9c);
__builtin_memmove((R+28),(R+0),4);
}
B652d9e:{NFSU2_TR(0x652d9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652da0:{NFSU2_TR(0x652da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652da3:{NFSU2_TR(0x652da3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B652da4:{NFSU2_TR(0x652da4);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B652da8:{NFSU2_TR(0x652da8);
if(r1(R+518)){{goto L652e43;}}
}
B652dae:L652dae:{c.instructions+=4;NFSU2_TR(0x652dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652db1:{NFSU2_TR(0x652db1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652db2:{NFSU2_TR(0x652db2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B652db4:{NFSU2_TR(0x652db4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652db9ull));
TAIL_STATIC(0x654e3cu,654);
}
B652db9:L652db9:{c.instructions+=3;NFSU2_TR(0x652db9);
__builtin_memmove((R+24),(R+0),4);
}
B652dbb:{NFSU2_TR(0x652dbb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B652dbd:{NFSU2_TR(0x652dbd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x653f73u,653);}
}
B652dc3:L652dc3:{c.instructions+=3;NFSU2_TR(0x652dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B652dc7:{NFSU2_TR(0x652dc7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B652dca:{NFSU2_TR(0x652dca);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L652e05;}}
}
B652dcc:L652dcc:{c.instructions+=4;NFSU2_TR(0x652dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652dcf:{NFSU2_TR(0x652dcf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B652dd2:{NFSU2_TR(0x652dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652dd5:{NFSU2_TR(0x652dd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B652dd8:L652dd8:{c.instructions+=5;NFSU2_TR(0x652dd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652ddb:{NFSU2_TR(0x652ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652dde:{NFSU2_TR(0x652dde);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652ddf:{NFSU2_TR(0x652ddf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652de0:{NFSU2_TR(0x652de0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652de5ull));
TAIL_STATIC(0x650379u,650);
}
B652de5:L652de5:{c.instructions+=3;NFSU2_TR(0x652de5);
__builtin_memmove((R+24),(R+0),4);
}
B652de7:{NFSU2_TR(0x652de7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B652de9:{NFSU2_TR(0x652de9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x653f73u,653);}
}
B652def:L652def:{c.instructions+=7;NFSU2_TR(0x652def);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B652df2:{NFSU2_TR(0x652df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652df5:{NFSU2_TR(0x652df5);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+28)),r4(U+0));
}
B652dfb:{NFSU2_TR(0x652dfb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B652dfe:{NFSU2_TR(0x652dfe);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B652e01:{NFSU2_TR(0x652e01);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
}
B652e03:{NFSU2_TR(0x652e03);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652dd8u);}goto L652dd8;}}
}
B652e05:L652e05:{c.instructions+=6;NFSU2_TR(0x652e05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652e08:{NFSU2_TR(0x652e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652e0b:{NFSU2_TR(0x652e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B652e0f:{NFSU2_TR(0x652e0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652e11:{NFSU2_TR(0x652e11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652e14:{NFSU2_TR(0x652e14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652d65u);}goto L652d65;}}
}
B652e1a:L652e1a:{c.instructions+=2;NFSU2_TR(0x652e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B652e1d:{NFSU2_TR(0x652e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B652e20:L652e20:{c.instructions+=5;NFSU2_TR(0x652e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652e23:{NFSU2_TR(0x652e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652e26:{NFSU2_TR(0x652e26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652e29:{NFSU2_TR(0x652e29);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x59ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x59ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x59ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B652e2c:{NFSU2_TR(0x652e2c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x653f6eu,653);}
}
B652e32:L652e32:{c.instructions+=3;NFSU2_TR(0x652e32);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x654085ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B652e39:{NFSU2_TR(0x652e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B652e3c:{NFSU2_TR(0x652e3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x653f95ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B652e43:L652e43:{c.instructions+=2;NFSU2_TR(0x652e43);
w4(R+24,u32(0x8007000eull));
}
B652e48:{NFSU2_TR(0x652e48);
TAIL_STATIC(0x653f73u,653);
}
B652e4d:L652e4d:{c.instructions+=2;NFSU2_TR(0x652e4d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652e4f:{NFSU2_TR(0x652e4f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6532b2u,653);}
}
B652e55:L652e55:{c.instructions+=4;NFSU2_TR(0x652e55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652e58:{NFSU2_TR(0x652e58);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B652e5b:{NFSU2_TR(0x652e5b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B652e5d:{NFSU2_TR(0x652e5d);
__builtin_memmove((R+28),(R+8),4);
}
B652e5f:L652e5f:{c.instructions+=6;NFSU2_TR(0x652e5f);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652e62:{NFSU2_TR(0x652e62);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B652e64:{NFSU2_TR(0x652e64);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B652e66:{NFSU2_TR(0x652e66);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B652e69:{NFSU2_TR(0x652e69);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B652e6a:{NFSU2_TR(0x652e6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652e5fu);}goto L652e5f;}}
}
B652e6c:L652e6c:{c.instructions+=1;NFSU2_TR(0x652e6c);
TAIL_STATIC(0x6532b2u,653);
}
B652e71:L652e71:{c.instructions+=2;NFSU2_TR(0x652e71);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652e73:{NFSU2_TR(0x652e73);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6532b2u,653);}
}
B652e79:L652e79:{c.instructions+=5;NFSU2_TR(0x652e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652e7c:{NFSU2_TR(0x652e7c);
__builtin_memmove((R+12),(R+24),4);
}
B652e7e:{NFSU2_TR(0x652e7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B652e81:{NFSU2_TR(0x652e81);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B652e83:{NFSU2_TR(0x652e83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652e86:L652e86:{c.instructions+=5;NFSU2_TR(0x652e86);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652e88:{NFSU2_TR(0x652e88);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B652e8e:{NFSU2_TR(0x652e8e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B652e90:{NFSU2_TR(0x652e90);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B652e93:{NFSU2_TR(0x652e93);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L652ea4;}}
}
B652e95:L652e95:{c.instructions+=5;NFSU2_TR(0x652e95);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652e97:{NFSU2_TR(0x652e97);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B652e9d:{NFSU2_TR(0x652e9d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B652e9f:{NFSU2_TR(0x652e9f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B652ea2:{NFSU2_TR(0x652ea2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L652ec0;}}
}
B652ea4:L652ea4:{c.instructions+=7;NFSU2_TR(0x652ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652ea7:{NFSU2_TR(0x652ea7);
u8 U[4];
w4(U+0,u32(0x7b4158ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652eac:{NFSU2_TR(0x652eac);
u8 U[4];
w4(U+0,u32(0xbfeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652eb1:{NFSU2_TR(0x652eb1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B652eb4:{NFSU2_TR(0x652eb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652eb5:{NFSU2_TR(0x652eb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652eb8:{NFSU2_TR(0x652eb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652ebdull));
TAIL_STATIC(0x64f52au,64f);
}
B652ebd:L652ebd:{c.instructions+=1;NFSU2_TR(0x652ebd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B652ec0:L652ec0:{c.instructions+=2;NFSU2_TR(0x652ec0);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652ec2:{NFSU2_TR(0x652ec2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652ec7ull));
TAIL_STATIC(0x75db80u,75d);
}
B652ec7:L652ec7:{c.instructions+=4;NFSU2_TR(0x652ec7);
{u32 ea_=u32(r4(R+28)+r4(R+12));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B652eca:{NFSU2_TR(0x652eca);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B652ecd:{NFSU2_TR(0x652ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652ed0:{NFSU2_TR(0x652ed0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652e86u);}goto L652e86;}}
}
B652ed2:L652ed2:{c.instructions+=1;NFSU2_TR(0x652ed2);
TAIL_STATIC(0x653e93u,653);
}
B652ed7:L652ed7:{c.instructions+=5;NFSU2_TR(0x652ed7);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B652ed9:{NFSU2_TR(0x652ed9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B652edb:{NFSU2_TR(0x652edb);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652edd:{NFSU2_TR(0x652edd);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B652ee0:{NFSU2_TR(0x652ee0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6532b2u,653);}
}
B652ee6:L652ee6:{c.instructions+=2;NFSU2_TR(0x652ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652ee9:{NFSU2_TR(0x652ee9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B652eec:L652eec:{c.instructions+=6;NFSU2_TR(0x652eec);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652ef2:{NFSU2_TR(0x652ef2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652ef4:{NFSU2_TR(0x652ef4);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B652ef6:{NFSU2_TR(0x652ef6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B652ef8:{NFSU2_TR(0x652ef8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B652efb:{NFSU2_TR(0x652efb);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L652f0a;}}
}
B652efd:L652efd:{c.instructions+=4;NFSU2_TR(0x652efd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B652efe:{NFSU2_TR(0x652efe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B652f01:{NFSU2_TR(0x652f01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B652f03:{NFSU2_TR(0x652f03);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652eecu);}goto L652eec;}}
}
B652f05:L652f05:{c.instructions+=1;NFSU2_TR(0x652f05);
TAIL_STATIC(0x6532b2u,653);
}
B652f0a:L652f0a:{c.instructions+=2;NFSU2_TR(0x652f0a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B652f0c:{NFSU2_TR(0x652f0c);
TAIL_STATIC(0x65330bu,653);
}
B652f11:L652f11:{c.instructions+=5;NFSU2_TR(0x652f11);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B652f13:{NFSU2_TR(0x652f13);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B652f15:{NFSU2_TR(0x652f15);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652f17:{NFSU2_TR(0x652f17);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B652f1a:{NFSU2_TR(0x652f1a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6532b2u,653);}
}
B652f20:L652f20:{c.instructions+=2;NFSU2_TR(0x652f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652f23:{NFSU2_TR(0x652f23);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B652f26:L652f26:{c.instructions+=6;NFSU2_TR(0x652f26);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652f2c:{NFSU2_TR(0x652f2c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652f2e:{NFSU2_TR(0x652f2e);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B652f30:{NFSU2_TR(0x652f30);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B652f32:{NFSU2_TR(0x652f32);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B652f35:{NFSU2_TR(0x652f35);
if(r1(R+514)){{goto L652f44;}}
}
B652f37:L652f37:{c.instructions+=4;NFSU2_TR(0x652f37);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B652f38:{NFSU2_TR(0x652f38);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B652f3b:{NFSU2_TR(0x652f3b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B652f3d:{NFSU2_TR(0x652f3d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652f26u);}goto L652f26;}}
}
B652f3f:L652f3f:{c.instructions+=1;NFSU2_TR(0x652f3f);
TAIL_STATIC(0x6532b2u,653);
}
B652f44:L652f44:{c.instructions+=2;NFSU2_TR(0x652f44);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B652f46:{NFSU2_TR(0x652f46);
TAIL_STATIC(0x65330bu,653);
}
B652f4b:L652f4b:{c.instructions+=2;NFSU2_TR(0x652f4b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652f4d:{NFSU2_TR(0x652f4d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6532b2u,653);}
}
B652f53:L652f53:{c.instructions+=5;NFSU2_TR(0x652f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652f56:{NFSU2_TR(0x652f56);
__builtin_memmove((R+12),(R+24),4);
}
B652f58:{NFSU2_TR(0x652f58);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B652f5b:{NFSU2_TR(0x652f5b);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B652f5d:{NFSU2_TR(0x652f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B652f60:L652f60:{c.instructions+=5;NFSU2_TR(0x652f60);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652f62:{NFSU2_TR(0x652f62);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B652f68:{NFSU2_TR(0x652f68);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B652f6a:{NFSU2_TR(0x652f6a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B652f6d:{NFSU2_TR(0x652f6d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L652f7e;}}
}
B652f6f:L652f6f:{c.instructions+=5;NFSU2_TR(0x652f6f);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652f71:{NFSU2_TR(0x652f71);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B652f77:{NFSU2_TR(0x652f77);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B652f79:{NFSU2_TR(0x652f79);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B652f7c:{NFSU2_TR(0x652f7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L652f9a;}}
}
B652f7e:L652f7e:{c.instructions+=7;NFSU2_TR(0x652f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B652f81:{NFSU2_TR(0x652f81);
u8 U[4];
w4(U+0,u32(0x7b4148ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652f86:{NFSU2_TR(0x652f86);
u8 U[4];
w4(U+0,u32(0xbffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652f8b:{NFSU2_TR(0x652f8b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B652f8e:{NFSU2_TR(0x652f8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B652f8f:{NFSU2_TR(0x652f8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B652f92:{NFSU2_TR(0x652f92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652f97ull));
TAIL_STATIC(0x64f52au,64f);
}
B652f97:L652f97:{c.instructions+=1;NFSU2_TR(0x652f97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B652f9a:L652f9a:{c.instructions+=2;NFSU2_TR(0x652f9a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652f9c:{NFSU2_TR(0x652f9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x652fa1ull));
TAIL_STATIC(0x75eea0u,75e);
}
B652fa1:L652fa1:{c.instructions+=4;NFSU2_TR(0x652fa1);
{u32 ea_=u32(r4(R+12)+r4(R+28));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B652fa4:{NFSU2_TR(0x652fa4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B652fa7:{NFSU2_TR(0x652fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B652faa:{NFSU2_TR(0x652faa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652f60u);}goto L652f60;}}
}
B652fac:L652fac:{c.instructions+=1;NFSU2_TR(0x652fac);
TAIL_STATIC(0x653e93u,653);
}
B652fb1:L652fb1:{c.instructions+=2;NFSU2_TR(0x652fb1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652fb3:{NFSU2_TR(0x652fb3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6532b2u,653);}
}
B652fb9:L652fb9:{c.instructions+=4;NFSU2_TR(0x652fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652fbc:{NFSU2_TR(0x652fbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B652fbf:{NFSU2_TR(0x652fbf);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B652fc1:{NFSU2_TR(0x652fc1);
__builtin_memmove((R+28),(R+8),4);
}
B652fc3:L652fc3:{c.instructions+=7;NFSU2_TR(0x652fc3);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652fc6:{NFSU2_TR(0x652fc6);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B652fc8:{NFSU2_TR(0x652fc8);
__asm__ volatile(".byte 0xd9,0xf3":::"memory");
}
B652fca:{NFSU2_TR(0x652fca);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B652fcc:{NFSU2_TR(0x652fcc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B652fcf:{NFSU2_TR(0x652fcf);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B652fd0:{NFSU2_TR(0x652fd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652fc3u);}goto L652fc3;}}
}
B652fd2:L652fd2:{c.instructions+=1;NFSU2_TR(0x652fd2);
TAIL_STATIC(0x6532b2u,653);
}
B652fd7:L652fd7:{c.instructions+=2;NFSU2_TR(0x652fd7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B652fd9:{NFSU2_TR(0x652fd9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6532b2u,653);}
}
B652fdf:L652fdf:{c.instructions+=7;NFSU2_TR(0x652fdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B652fe2:{NFSU2_TR(0x652fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B652fe5:{NFSU2_TR(0x652fe5);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B652fe7:{NFSU2_TR(0x652fe7);
__builtin_memmove((R+12),(R+24),4);
}
B652fe9:{NFSU2_TR(0x652fe9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B652fec:{NFSU2_TR(0x652fec);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B652fee:{NFSU2_TR(0x652fee);
__builtin_memmove((R+28),(R+8),4);
}
B652ff0:L652ff0:{c.instructions+=7;NFSU2_TR(0x652ff0);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652ff3:{NFSU2_TR(0x652ff3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B652ff5:{NFSU2_TR(0x652ff5);
__asm__ volatile(".byte 0xd9,0xf3":::"memory");
}
B652ff7:{NFSU2_TR(0x652ff7);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B652ffa:{NFSU2_TR(0x652ffa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B652ffd:{NFSU2_TR(0x652ffd);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B652ffe:{NFSU2_TR(0x652ffe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x652ff0u);}goto L652ff0;}}
TAIL_STATIC(0x653000u,653);
}
XIT:NFSU2_TR_EXIT(0x652,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
