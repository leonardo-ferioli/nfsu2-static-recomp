#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_744(u8* __restrict R,Cpu& c);
u32 body_746(u8* __restrict R,Cpu& c);
u32 body_747(u8* __restrict R,Cpu& c);
u32 body_74a(u8* __restrict R,Cpu& c);
u32 body_754(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x745,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x745,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_745(u8* __restrict R,Cpu& c);
u32 page_745(Cpu& c){return body_745(c.regs.data(),c);}
__attribute__((noinline)) u32 body_745(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x745000:goto L745000;
case 0x745002:c.instructions+=1;goto B745002;
case 0x745008:goto L745008;
case 0x745009:c.instructions+=3;goto B745009;
case 0x74500b:c.instructions+=2;goto B74500b;
case 0x745010:c.instructions+=1;goto B745010;
case 0x745012:goto L745012;
case 0x745014:goto L745014;
case 0x745018:c.instructions+=2;goto B745018;
case 0x74501a:c.instructions+=1;goto B74501a;
case 0x74501c:goto L74501c;
case 0x74501e:c.instructions+=2;goto B74501e;
case 0x74501f:c.instructions+=1;goto B74501f;
case 0x745024:goto L745024;
case 0x745027:c.instructions+=3;goto B745027;
case 0x745029:c.instructions+=2;goto B745029;
case 0x74502a:c.instructions+=1;goto B74502a;
case 0x74502c:goto L74502c;
case 0x74502f:c.instructions+=3;goto B74502f;
case 0x745034:c.instructions+=2;goto B745034;
case 0x745035:c.instructions+=1;goto B745035;
case 0x74503a:goto L74503a;
case 0x74503d:c.instructions+=1;goto B74503d;
case 0x74503f:goto L74503f;
case 0x745044:c.instructions+=4;goto B745044;
case 0x745047:c.instructions+=3;goto B745047;
case 0x74504c:c.instructions+=2;goto B74504c;
case 0x74504d:c.instructions+=1;goto B74504d;
case 0x745052:goto L745052;
case 0x745055:goto L745055;
case 0x74505a:c.instructions+=1;goto B74505a;
case 0x74505f:goto L74505f;
case 0x745062:c.instructions+=4;goto B745062;
case 0x745064:c.instructions+=3;goto B745064;
case 0x745066:c.instructions+=2;goto B745066;
case 0x745067:c.instructions+=1;goto B745067;
case 0x745069:goto L745069;
case 0x74506a:c.instructions+=1;goto B74506a;
case 0x74506f:goto L74506f;
case 0x745072:c.instructions+=3;goto B745072;
case 0x745074:c.instructions+=2;goto B745074;
case 0x745075:c.instructions+=1;goto B745075;
case 0x745076:goto L745076;
case 0x74507b:c.instructions+=1;goto B74507b;
case 0x745080:goto L745080;
case 0x745083:c.instructions+=3;goto B745083;
case 0x745085:c.instructions+=2;goto B745085;
case 0x745088:c.instructions+=1;goto B745088;
case 0x74508a:goto L74508a;
case 0x74508c:c.instructions+=2;goto B74508c;
case 0x74508d:c.instructions+=1;goto B74508d;
case 0x745092:goto L745092;
case 0x745093:c.instructions+=1;goto B745093;
case 0x745098:goto L745098;
case 0x74509b:c.instructions+=3;goto B74509b;
case 0x74509d:c.instructions+=2;goto B74509d;
case 0x74509e:c.instructions+=1;goto B74509e;
case 0x74509f:goto L74509f;
case 0x7450a3:c.instructions+=8;goto B7450a3;
case 0x7450a7:c.instructions+=7;goto B7450a7;
case 0x7450ad:c.instructions+=6;goto B7450ad;
case 0x7450b3:c.instructions+=5;goto B7450b3;
case 0x7450ba:c.instructions+=4;goto B7450ba;
case 0x7450c1:c.instructions+=3;goto B7450c1;
case 0x7450c8:c.instructions+=2;goto B7450c8;
case 0x7450ce:c.instructions+=1;goto B7450ce;
case 0x7450d3:goto L7450d3;
case 0x7450d9:c.instructions+=3;goto B7450d9;
case 0x7450dc:c.instructions+=2;goto B7450dc;
case 0x7450dd:c.instructions+=1;goto B7450dd;
case 0x7450df:goto L7450df;
case 0x7450e1:c.instructions+=2;goto B7450e1;
case 0x7450e2:c.instructions+=1;goto B7450e2;
case 0x7450e7:goto L7450e7;
case 0x7450e9:c.instructions+=2;goto B7450e9;
case 0x7450eb:c.instructions+=1;goto B7450eb;
case 0x7450f0:goto L7450f0;
case 0x7450f3:c.instructions+=1;goto B7450f3;
case 0x7450f9:goto L7450f9;
case 0x7450fb:c.instructions+=2;goto B7450fb;
case 0x7450fc:c.instructions+=1;goto B7450fc;
case 0x745100:goto L745100;
case 0x745101:c.instructions+=6;goto B745101;
case 0x745105:c.instructions+=5;goto B745105;
case 0x745106:c.instructions+=4;goto B745106;
case 0x745107:c.instructions+=3;goto B745107;
case 0x74510c:c.instructions+=2;goto B74510c;
case 0x74510d:c.instructions+=1;goto B74510d;
case 0x745112:goto L745112;
case 0x745115:c.instructions+=2;goto B745115;
case 0x74511b:c.instructions+=1;goto B74511b;
case 0x745120:goto L745120;
case 0x745122:c.instructions+=2;goto B745122;
case 0x745124:c.instructions+=1;goto B745124;
case 0x745126:goto L745126;
case 0x745127:c.instructions+=1;goto B745127;
case 0x74512c:goto L74512c;
case 0x74512f:c.instructions+=2;goto B74512f;
case 0x745130:c.instructions+=1;goto B745130;
case 0x745135:goto L745135;
case 0x745138:goto L745138;
case 0x74513b:c.instructions+=2;goto B74513b;
case 0x74513c:c.instructions+=1;goto B74513c;
case 0x74513e:goto L74513e;
case 0x745141:c.instructions+=2;goto B745141;
case 0x745142:c.instructions+=1;goto B745142;
case 0x745147:goto L745147;
case 0x745149:c.instructions+=2;goto B745149;
case 0x74514a:c.instructions+=1;goto B74514a;
case 0x74514f:goto L74514f;
case 0x745150:c.instructions+=1;goto B745150;
case 0x745155:goto L745155;
case 0x745158:c.instructions+=4;goto B745158;
case 0x745159:c.instructions+=3;goto B745159;
case 0x74515a:c.instructions+=2;goto B74515a;
case 0x74515b:c.instructions+=1;goto B74515b;
case 0x745160:goto L745160;
case 0x745164:c.instructions+=12;goto B745164;
case 0x745165:c.instructions+=11;goto B745165;
case 0x745166:c.instructions+=10;goto B745166;
case 0x74516a:c.instructions+=9;goto B74516a;
case 0x745170:c.instructions+=8;goto B745170;
case 0x745176:c.instructions+=7;goto B745176;
case 0x74517a:c.instructions+=6;goto B74517a;
case 0x74517b:c.instructions+=5;goto B74517b;
case 0x74517d:c.instructions+=4;goto B74517d;
case 0x74517f:c.instructions+=3;goto B74517f;
case 0x745185:c.instructions+=2;goto B745185;
case 0x745188:c.instructions+=1;goto B745188;
case 0x74518d:goto L74518d;
case 0x745191:c.instructions+=6;goto B745191;
case 0x745193:c.instructions+=5;goto B745193;
case 0x745199:c.instructions+=4;goto B745199;
case 0x74519c:c.instructions+=3;goto B74519c;
case 0x7451a3:c.instructions+=2;goto B7451a3;
case 0x7451a6:c.instructions+=1;goto B7451a6;
case 0x7451a8:goto L7451a8;
case 0x7451ac:c.instructions+=5;goto B7451ac;
case 0x7451ad:c.instructions+=4;goto B7451ad;
case 0x7451ae:c.instructions+=3;goto B7451ae;
case 0x7451b0:c.instructions+=2;goto B7451b0;
case 0x7451b1:c.instructions+=1;goto B7451b1;
case 0x7451b6:goto L7451b6;
case 0x7451b8:c.instructions+=3;goto B7451b8;
case 0x7451bb:c.instructions+=2;goto B7451bb;
case 0x7451bd:c.instructions+=1;goto B7451bd;
case 0x7451bf:goto L7451bf;
case 0x7451c3:c.instructions+=5;goto B7451c3;
case 0x7451c5:c.instructions+=4;goto B7451c5;
case 0x7451c6:c.instructions+=3;goto B7451c6;
case 0x7451cc:c.instructions+=2;goto B7451cc;
case 0x7451cd:c.instructions+=1;goto B7451cd;
case 0x7451d2:goto L7451d2;
case 0x7451d5:c.instructions+=2;goto B7451d5;
case 0x7451db:c.instructions+=1;goto B7451db;
case 0x7451e2:goto L7451e2;
case 0x7451e4:c.instructions+=4;goto B7451e4;
case 0x7451e5:c.instructions+=3;goto B7451e5;
case 0x7451e6:c.instructions+=2;goto B7451e6;
case 0x7451e7:c.instructions+=1;goto B7451e7;
case 0x7451f0:goto L7451f0;
case 0x7451f1:c.instructions+=4;goto B7451f1;
case 0x7451f5:c.instructions+=3;goto B7451f5;
case 0x7451f7:c.instructions+=2;goto B7451f7;
case 0x7451fd:c.instructions+=1;goto B7451fd;
case 0x7451ff:goto L7451ff;
case 0x745203:c.instructions+=3;goto B745203;
case 0x745205:c.instructions+=2;goto B745205;
case 0x745206:c.instructions+=1;goto B745206;
case 0x74520b:goto L74520b;
case 0x74520f:c.instructions+=4;goto B74520f;
case 0x745215:c.instructions+=3;goto B745215;
case 0x74521b:c.instructions+=2;goto B74521b;
case 0x74521d:c.instructions+=1;goto B74521d;
case 0x74521f:goto L74521f;
case 0x745220:goto L745220;
case 0x745223:c.instructions+=1;goto B745223;
case 0x745225:goto L745225;
case 0x745228:c.instructions+=1;goto B745228;
case 0x74522a:goto L74522a;
case 0x745231:c.instructions+=1;goto B745231;
case 0x745236:goto L745236;
case 0x745238:c.instructions+=4;goto B745238;
case 0x74523b:c.instructions+=3;goto B74523b;
case 0x74523e:c.instructions+=2;goto B74523e;
case 0x745240:c.instructions+=1;goto B745240;
case 0x745242:goto L745242;
case 0x745243:c.instructions+=1;goto B745243;
case 0x745250:goto L745250;
case 0x745251:c.instructions+=8;goto B745251;
case 0x745252:c.instructions+=7;goto B745252;
case 0x745253:c.instructions+=6;goto B745253;
case 0x745257:c.instructions+=5;goto B745257;
case 0x745258:c.instructions+=4;goto B745258;
case 0x74525a:c.instructions+=3;goto B74525a;
case 0x74525b:c.instructions+=2;goto B74525b;
case 0x745260:c.instructions+=1;goto B745260;
case 0x745262:goto L745262;
case 0x745264:goto L745264;
case 0x745268:c.instructions+=3;goto B745268;
case 0x74526d:c.instructions+=2;goto B74526d;
case 0x74526e:c.instructions+=1;goto B74526e;
case 0x745273:goto L745273;
case 0x745276:c.instructions+=2;goto B745276;
case 0x745277:c.instructions+=1;goto B745277;
case 0x74527c:goto L74527c;
case 0x74527f:c.instructions+=8;goto B74527f;
case 0x745284:c.instructions+=7;goto B745284;
case 0x745286:c.instructions+=6;goto B745286;
case 0x745288:c.instructions+=5;goto B745288;
case 0x74528b:c.instructions+=4;goto B74528b;
case 0x74528c:c.instructions+=3;goto B74528c;
case 0x745291:c.instructions+=2;goto B745291;
case 0x745292:c.instructions+=1;goto B745292;
case 0x745297:goto L745297;
case 0x74529a:c.instructions+=2;goto B74529a;
case 0x74529b:c.instructions+=1;goto B74529b;
case 0x7452a0:goto L7452a0;
case 0x7452a3:c.instructions+=4;goto B7452a3;
case 0x7452a5:c.instructions+=3;goto B7452a5;
case 0x7452aa:c.instructions+=2;goto B7452aa;
case 0x7452ab:c.instructions+=1;goto B7452ab;
case 0x7452b0:goto L7452b0;
case 0x7452b3:c.instructions+=2;goto B7452b3;
case 0x7452b4:c.instructions+=1;goto B7452b4;
case 0x7452b9:goto L7452b9;
case 0x7452bc:c.instructions+=7;goto B7452bc;
case 0x7452be:c.instructions+=6;goto B7452be;
case 0x7452c3:c.instructions+=5;goto B7452c3;
case 0x7452c6:c.instructions+=4;goto B7452c6;
case 0x7452c7:c.instructions+=3;goto B7452c7;
case 0x7452ca:c.instructions+=2;goto B7452ca;
case 0x7452ce:c.instructions+=1;goto B7452ce;
case 0x7452d3:goto L7452d3;
case 0x7452d6:c.instructions+=2;goto B7452d6;
case 0x7452d7:c.instructions+=1;goto B7452d7;
case 0x7452dc:goto L7452dc;
case 0x7452df:c.instructions+=8;goto B7452df;
case 0x7452e4:c.instructions+=7;goto B7452e4;
case 0x7452e6:c.instructions+=6;goto B7452e6;
case 0x7452e9:c.instructions+=5;goto B7452e9;
case 0x7452ea:c.instructions+=4;goto B7452ea;
case 0x7452ef:c.instructions+=3;goto B7452ef;
case 0x7452f0:c.instructions+=2;goto B7452f0;
case 0x7452f2:c.instructions+=1;goto B7452f2;
case 0x7452f7:goto L7452f7;
case 0x7452fa:c.instructions+=2;goto B7452fa;
case 0x7452fb:c.instructions+=1;goto B7452fb;
case 0x745300:goto L745300;
case 0x745303:c.instructions+=7;goto B745303;
case 0x745308:c.instructions+=6;goto B745308;
case 0x74530d:c.instructions+=5;goto B74530d;
case 0x745310:c.instructions+=4;goto B745310;
case 0x745311:c.instructions+=3;goto B745311;
case 0x745316:c.instructions+=2;goto B745316;
case 0x745317:c.instructions+=1;goto B745317;
case 0x74531c:goto L74531c;
case 0x74531f:c.instructions+=2;goto B74531f;
case 0x745320:c.instructions+=1;goto B745320;
case 0x745325:goto L745325;
case 0x745328:c.instructions+=7;goto B745328;
case 0x74532d:c.instructions+=6;goto B74532d;
case 0x745332:c.instructions+=5;goto B745332;
case 0x745338:c.instructions+=4;goto B745338;
case 0x745339:c.instructions+=3;goto B745339;
case 0x74533e:c.instructions+=2;goto B74533e;
case 0x74533f:c.instructions+=1;goto B74533f;
case 0x745344:goto L745344;
case 0x745347:c.instructions+=2;goto B745347;
case 0x745348:c.instructions+=1;goto B745348;
case 0x74534d:goto L74534d;
case 0x745350:c.instructions+=4;goto B745350;
case 0x745352:c.instructions+=3;goto B745352;
case 0x745357:c.instructions+=2;goto B745357;
case 0x745358:c.instructions+=1;goto B745358;
case 0x74535d:goto L74535d;
case 0x745360:c.instructions+=2;goto B745360;
case 0x745361:c.instructions+=1;goto B745361;
case 0x745366:goto L745366;
case 0x745369:c.instructions+=5;goto B745369;
case 0x74536b:c.instructions+=4;goto B74536b;
case 0x745370:c.instructions+=3;goto B745370;
case 0x745371:c.instructions+=2;goto B745371;
case 0x745377:c.instructions+=1;goto B745377;
case 0x74537c:goto L74537c;
case 0x74537f:c.instructions+=2;goto B74537f;
case 0x745380:c.instructions+=1;goto B745380;
case 0x745385:goto L745385;
case 0x745388:c.instructions+=5;goto B745388;
case 0x74538a:c.instructions+=4;goto B74538a;
case 0x74538f:c.instructions+=3;goto B74538f;
case 0x745390:c.instructions+=2;goto B745390;
case 0x745396:c.instructions+=1;goto B745396;
case 0x74539b:goto L74539b;
case 0x74539e:c.instructions+=2;goto B74539e;
case 0x74539f:c.instructions+=1;goto B74539f;
case 0x7453a4:goto L7453a4;
case 0x7453a5:c.instructions+=3;goto B7453a5;
case 0x7453ab:c.instructions+=2;goto B7453ab;
case 0x7453ac:c.instructions+=1;goto B7453ac;
case 0x7453b1:goto L7453b1;
case 0x7453b4:c.instructions+=4;goto B7453b4;
case 0x7453b6:c.instructions+=3;goto B7453b6;
case 0x7453bb:c.instructions+=2;goto B7453bb;
case 0x7453bc:c.instructions+=1;goto B7453bc;
case 0x7453c1:goto L7453c1;
case 0x7453c4:c.instructions+=2;goto B7453c4;
case 0x7453c5:c.instructions+=1;goto B7453c5;
case 0x7453ca:goto L7453ca;
case 0x7453cd:c.instructions+=5;goto B7453cd;
case 0x7453cf:c.instructions+=4;goto B7453cf;
case 0x7453d4:c.instructions+=3;goto B7453d4;
case 0x7453d5:c.instructions+=2;goto B7453d5;
case 0x7453db:c.instructions+=1;goto B7453db;
case 0x7453e0:goto L7453e0;
case 0x7453e3:c.instructions+=2;goto B7453e3;
case 0x7453e4:c.instructions+=1;goto B7453e4;
case 0x7453e9:goto L7453e9;
case 0x7453ec:c.instructions+=5;goto B7453ec;
case 0x7453ee:c.instructions+=4;goto B7453ee;
case 0x7453f3:c.instructions+=3;goto B7453f3;
case 0x7453f4:c.instructions+=2;goto B7453f4;
case 0x7453fa:c.instructions+=1;goto B7453fa;
case 0x7453ff:goto L7453ff;
case 0x745402:c.instructions+=2;goto B745402;
case 0x745403:c.instructions+=1;goto B745403;
case 0x745408:goto L745408;
case 0x74540b:c.instructions+=5;goto B74540b;
case 0x74540d:c.instructions+=4;goto B74540d;
case 0x745412:c.instructions+=3;goto B745412;
case 0x745413:c.instructions+=2;goto B745413;
case 0x745419:c.instructions+=1;goto B745419;
case 0x74541e:goto L74541e;
case 0x745421:c.instructions+=2;goto B745421;
case 0x745422:c.instructions+=1;goto B745422;
case 0x745427:goto L745427;
case 0x74542a:c.instructions+=5;goto B74542a;
case 0x74542c:c.instructions+=4;goto B74542c;
case 0x745431:c.instructions+=3;goto B745431;
case 0x745432:c.instructions+=2;goto B745432;
case 0x745438:c.instructions+=1;goto B745438;
case 0x74543d:goto L74543d;
case 0x745440:c.instructions+=2;goto B745440;
case 0x745441:c.instructions+=1;goto B745441;
case 0x745446:goto L745446;
case 0x745449:c.instructions+=3;goto B745449;
case 0x74544c:c.instructions+=2;goto B74544c;
case 0x74544e:c.instructions+=1;goto B74544e;
case 0x745454:goto L745454;
case 0x745456:c.instructions+=7;goto B745456;
case 0x745457:c.instructions+=6;goto B745457;
case 0x74545c:c.instructions+=5;goto B74545c;
case 0x74545e:c.instructions+=4;goto B74545e;
case 0x74545f:c.instructions+=3;goto B74545f;
case 0x745464:c.instructions+=2;goto B745464;
case 0x745465:c.instructions+=1;goto B745465;
case 0x74546a:goto L74546a;
case 0x74546d:c.instructions+=2;goto B74546d;
case 0x74546e:c.instructions+=1;goto B74546e;
case 0x745473:goto L745473;
case 0x745475:c.instructions+=3;goto B745475;
case 0x745478:c.instructions+=2;goto B745478;
case 0x74547a:c.instructions+=1;goto B74547a;
case 0x74547c:goto L74547c;
case 0x74547d:c.instructions+=3;goto B74547d;
case 0x745480:c.instructions+=2;goto B745480;
case 0x745483:c.instructions+=1;goto B745483;
case 0x745485:goto L745485;
case 0x745487:c.instructions+=3;goto B745487;
case 0x74548c:c.instructions+=2;goto B74548c;
case 0x74548d:c.instructions+=1;goto B74548d;
case 0x745492:goto L745492;
case 0x745495:c.instructions+=2;goto B745495;
case 0x745496:c.instructions+=1;goto B745496;
case 0x74549b:goto L74549b;
case 0x74549e:c.instructions+=5;goto B74549e;
case 0x7454a0:c.instructions+=4;goto B7454a0;
case 0x7454a5:c.instructions+=3;goto B7454a5;
case 0x7454a6:c.instructions+=2;goto B7454a6;
case 0x7454ac:c.instructions+=1;goto B7454ac;
case 0x7454b1:goto L7454b1;
case 0x7454b4:c.instructions+=2;goto B7454b4;
case 0x7454b5:c.instructions+=1;goto B7454b5;
case 0x7454ba:goto L7454ba;
case 0x7454bb:c.instructions+=5;goto B7454bb;
case 0x7454c1:c.instructions+=4;goto B7454c1;
case 0x7454c6:c.instructions+=3;goto B7454c6;
case 0x7454c7:c.instructions+=2;goto B7454c7;
case 0x7454cd:c.instructions+=1;goto B7454cd;
case 0x7454d2:goto L7454d2;
case 0x7454d5:c.instructions+=7;goto B7454d5;
case 0x7454da:c.instructions+=6;goto B7454da;
case 0x7454dc:c.instructions+=5;goto B7454dc;
case 0x7454e2:c.instructions+=4;goto B7454e2;
case 0x7454e3:c.instructions+=3;goto B7454e3;
case 0x7454e8:c.instructions+=2;goto B7454e8;
case 0x7454e9:c.instructions+=1;goto B7454e9;
case 0x7454ee:goto L7454ee;
case 0x7454f1:c.instructions+=2;goto B7454f1;
case 0x7454f2:c.instructions+=1;goto B7454f2;
case 0x7454f7:goto L7454f7;
case 0x7454fa:c.instructions+=4;goto B7454fa;
case 0x7454fc:c.instructions+=3;goto B7454fc;
case 0x745501:c.instructions+=2;goto B745501;
case 0x745502:c.instructions+=1;goto B745502;
case 0x745507:goto L745507;
case 0x74550a:c.instructions+=2;goto B74550a;
case 0x74550b:c.instructions+=1;goto B74550b;
case 0x745510:goto L745510;
case 0x745516:c.instructions+=4;goto B745516;
case 0x745518:c.instructions+=3;goto B745518;
case 0x74551b:c.instructions+=2;goto B74551b;
case 0x74551d:c.instructions+=1;goto B74551d;
case 0x74551f:goto L74551f;
case 0x745523:c.instructions+=3;goto B745523;
case 0x745524:c.instructions+=2;goto B745524;
case 0x745525:c.instructions+=1;goto B745525;
case 0x74552a:goto L74552a;
case 0x74552d:goto L74552d;
case 0x74552e:c.instructions+=4;goto B74552e;
case 0x74552f:c.instructions+=3;goto B74552f;
case 0x745530:c.instructions+=2;goto B745530;
case 0x745531:c.instructions+=1;goto B745531;
case 0x745540:goto L745540;
case 0x745546:c.instructions+=8;goto B745546;
case 0x74554b:c.instructions+=7;goto B74554b;
case 0x74554c:c.instructions+=6;goto B74554c;
case 0x745553:c.instructions+=5;goto B745553;
case 0x745554:c.instructions+=4;goto B745554;
case 0x745556:c.instructions+=3;goto B745556;
case 0x745558:c.instructions+=2;goto B745558;
case 0x74555f:c.instructions+=1;goto B74555f;
case 0x745565:goto L745565;
case 0x74556c:c.instructions+=3;goto B74556c;
case 0x74556d:c.instructions+=2;goto B74556d;
case 0x74556e:c.instructions+=1;goto B74556e;
case 0x745574:goto L745574;
case 0x74557a:c.instructions+=8;goto B74557a;
case 0x745580:c.instructions+=7;goto B745580;
case 0x745582:c.instructions+=6;goto B745582;
case 0x745585:c.instructions+=5;goto B745585;
case 0x745588:c.instructions+=4;goto B745588;
case 0x74558e:c.instructions+=3;goto B74558e;
case 0x745590:c.instructions+=2;goto B745590;
case 0x745592:c.instructions+=1;goto B745592;
case 0x745594:goto L745594;
case 0x745596:goto L745596;
case 0x745597:c.instructions+=1;goto B745597;
case 0x74559c:goto L74559c;
case 0x74559f:c.instructions+=2;goto B74559f;
case 0x7455a1:c.instructions+=1;goto B7455a1;
case 0x7455a3:goto L7455a3;
case 0x7455a5:c.instructions+=3;goto B7455a5;
case 0x7455aa:c.instructions+=2;goto B7455aa;
case 0x7455ab:c.instructions+=1;goto B7455ab;
case 0x7455b0:goto L7455b0;
case 0x7455b3:c.instructions+=2;goto B7455b3;
case 0x7455b5:c.instructions+=1;goto B7455b5;
case 0x7455b7:goto L7455b7;
case 0x7455bd:c.instructions+=7;goto B7455bd;
case 0x7455bf:c.instructions+=6;goto B7455bf;
case 0x7455c0:c.instructions+=5;goto B7455c0;
case 0x7455c1:c.instructions+=4;goto B7455c1;
case 0x7455c3:c.instructions+=3;goto B7455c3;
case 0x7455c4:c.instructions+=2;goto B7455c4;
case 0x7455c5:c.instructions+=1;goto B7455c5;
case 0x7455ca:goto L7455ca;
case 0x7455cc:c.instructions+=3;goto B7455cc;
case 0x7455ce:c.instructions+=2;goto B7455ce;
case 0x7455cf:c.instructions+=1;goto B7455cf;
case 0x7455d4:goto L7455d4;
case 0x7455d7:c.instructions+=1;goto B7455d7;
case 0x7455d9:goto L7455d9;
case 0x7455df:c.instructions+=6;goto B7455df;
case 0x7455e1:c.instructions+=5;goto B7455e1;
case 0x7455e2:c.instructions+=4;goto B7455e2;
case 0x7455e4:c.instructions+=3;goto B7455e4;
case 0x7455e5:c.instructions+=2;goto B7455e5;
case 0x7455e6:c.instructions+=1;goto B7455e6;
case 0x7455eb:goto L7455eb;
case 0x7455ee:goto L7455ee;
case 0x7455f0:c.instructions+=3;goto B7455f0;
case 0x7455f1:c.instructions+=2;goto B7455f1;
case 0x7455f8:c.instructions+=1;goto B7455f8;
case 0x7455fd:goto L7455fd;
case 0x745600:c.instructions+=3;goto B745600;
case 0x745603:c.instructions+=2;goto B745603;
case 0x745605:c.instructions+=1;goto B745605;
case 0x745608:goto L745608;
case 0x74560a:c.instructions+=2;goto B74560a;
case 0x74560b:c.instructions+=1;goto B74560b;
case 0x745610:goto L745610;
case 0x745612:c.instructions+=5;goto B745612;
case 0x745615:c.instructions+=4;goto B745615;
case 0x745618:c.instructions+=3;goto B745618;
case 0x74561d:c.instructions+=2;goto B74561d;
case 0x745621:c.instructions+=1;goto B745621;
case 0x745623:goto L745623;
case 0x745626:c.instructions+=2;goto B745626;
case 0x745628:c.instructions+=1;goto B745628;
case 0x74562a:goto L74562a;
case 0x74562c:c.instructions+=3;goto B74562c;
case 0x74562e:c.instructions+=2;goto B74562e;
case 0x745634:c.instructions+=1;goto B745634;
case 0x745636:goto L745636;
case 0x745638:c.instructions+=2;goto B745638;
case 0x74563a:c.instructions+=1;goto B74563a;
case 0x74563d:goto L74563d;
case 0x745640:c.instructions+=2;goto B745640;
case 0x745642:c.instructions+=1;goto B745642;
case 0x745644:goto L745644;
case 0x745649:c.instructions+=2;goto B745649;
case 0x74564a:c.instructions+=1;goto B74564a;
case 0x74564f:goto L74564f;
case 0x745652:goto L745652;
case 0x745658:c.instructions+=2;goto B745658;
case 0x74565a:c.instructions+=1;goto B74565a;
case 0x74565c:goto L74565c;
case 0x74565f:c.instructions+=5;goto B74565f;
case 0x745662:c.instructions+=4;goto B745662;
case 0x745664:c.instructions+=3;goto B745664;
case 0x745666:c.instructions+=2;goto B745666;
case 0x745668:c.instructions+=1;goto B745668;
case 0x74566a:goto L74566a;
case 0x74566f:c.instructions+=2;goto B74566f;
case 0x745670:c.instructions+=1;goto B745670;
case 0x745675:goto L745675;
case 0x745678:goto L745678;
case 0x74567e:c.instructions+=3;goto B74567e;
case 0x745680:c.instructions+=2;goto B745680;
case 0x745683:c.instructions+=1;goto B745683;
case 0x745685:goto L745685;
case 0x74568b:goto L74568b;
case 0x745691:c.instructions+=17;goto B745691;
case 0x745697:c.instructions+=16;goto B745697;
case 0x745699:c.instructions+=15;goto B745699;
case 0x74569b:c.instructions+=14;goto B74569b;
case 0x74569d:c.instructions+=13;goto B74569d;
case 0x74569f:c.instructions+=12;goto B74569f;
case 0x7456a1:c.instructions+=11;goto B7456a1;
case 0x7456a6:c.instructions+=10;goto B7456a6;
case 0x7456a8:c.instructions+=9;goto B7456a8;
case 0x7456ae:c.instructions+=8;goto B7456ae;
case 0x7456b4:c.instructions+=7;goto B7456b4;
case 0x7456ba:c.instructions+=6;goto B7456ba;
case 0x7456bc:c.instructions+=5;goto B7456bc;
case 0x7456bf:c.instructions+=4;goto B7456bf;
case 0x7456c4:c.instructions+=3;goto B7456c4;
case 0x7456ca:c.instructions+=2;goto B7456ca;
case 0x7456d0:c.instructions+=1;goto B7456d0;
case 0x7456d6:goto L7456d6;
case 0x7456db:c.instructions+=1;goto B7456db;
case 0x7456e1:goto L7456e1;
case 0x7456e3:c.instructions+=1;goto B7456e3;
case 0x7456e8:goto L7456e8;
case 0x7456ec:c.instructions+=8;goto B7456ec;
case 0x7456ed:c.instructions+=7;goto B7456ed;
case 0x7456ef:c.instructions+=6;goto B7456ef;
case 0x7456f3:c.instructions+=5;goto B7456f3;
case 0x7456f4:c.instructions+=4;goto B7456f4;
case 0x7456f8:c.instructions+=3;goto B7456f8;
case 0x7456f9:c.instructions+=2;goto B7456f9;
case 0x7456fa:c.instructions+=1;goto B7456fa;
case 0x7456ff:goto L7456ff;
case 0x745701:c.instructions+=3;goto B745701;
case 0x745704:c.instructions+=2;goto B745704;
case 0x745706:c.instructions+=1;goto B745706;
case 0x74570c:goto L74570c;
case 0x745710:c.instructions+=6;goto B745710;
case 0x745713:c.instructions+=5;goto B745713;
case 0x745717:c.instructions+=4;goto B745717;
case 0x74571a:c.instructions+=3;goto B74571a;
case 0x74571e:c.instructions+=2;goto B74571e;
case 0x745723:c.instructions+=1;goto B745723;
case 0x745729:goto L745729;
case 0x74572d:c.instructions+=1;goto B74572d;
case 0x74572f:goto L74572f;
case 0x745733:c.instructions+=5;goto B745733;
case 0x745734:c.instructions+=4;goto B745734;
case 0x745738:c.instructions+=3;goto B745738;
case 0x74573d:c.instructions+=2;goto B74573d;
case 0x74573e:c.instructions+=1;goto B74573e;
case 0x745743:goto L745743;
case 0x745746:c.instructions+=6;goto B745746;
case 0x745747:c.instructions+=5;goto B745747;
case 0x74574c:c.instructions+=4;goto B74574c;
case 0x745750:c.instructions+=3;goto B745750;
case 0x745755:c.instructions+=2;goto B745755;
case 0x745756:c.instructions+=1;goto B745756;
case 0x74575b:goto L74575b;
case 0x74575f:c.instructions+=3;goto B74575f;
case 0x745762:c.instructions+=2;goto B745762;
case 0x745766:c.instructions+=1;goto B745766;
case 0x745769:goto L745769;
case 0x74576d:c.instructions+=5;goto B74576d;
case 0x74576f:c.instructions+=4;goto B74576f;
case 0x745770:c.instructions+=3;goto B745770;
case 0x745775:c.instructions+=2;goto B745775;
case 0x745776:c.instructions+=1;goto B745776;
case 0x74577b:goto L74577b;
case 0x74577e:c.instructions+=2;goto B74577e;
case 0x74577f:c.instructions+=1;goto B74577f;
case 0x745784:goto L745784;
case 0x745788:c.instructions+=12;goto B745788;
case 0x74578c:c.instructions+=11;goto B74578c;
case 0x74578d:c.instructions+=10;goto B74578d;
case 0x74578e:c.instructions+=9;goto B74578e;
case 0x74578f:c.instructions+=8;goto B74578f;
case 0x745795:c.instructions+=7;goto B745795;
case 0x745797:c.instructions+=6;goto B745797;
case 0x745798:c.instructions+=5;goto B745798;
case 0x745799:c.instructions+=4;goto B745799;
case 0x74579f:c.instructions+=3;goto B74579f;
case 0x7457a5:c.instructions+=2;goto B7457a5;
case 0x7457a9:c.instructions+=1;goto B7457a9;
case 0x7457ae:goto L7457ae;
case 0x7457b1:c.instructions+=1;goto B7457b1;
case 0x7457b6:goto L7457b6;
case 0x7457bd:c.instructions+=1;goto B7457bd;
case 0x7457c2:goto L7457c2;
case 0x7457c9:c.instructions+=12;goto B7457c9;
case 0x7457cd:c.instructions+=11;goto B7457cd;
case 0x7457d1:c.instructions+=10;goto B7457d1;
case 0x7457d5:c.instructions+=9;goto B7457d5;
case 0x7457d9:c.instructions+=8;goto B7457d9;
case 0x7457db:c.instructions+=7;goto B7457db;
case 0x7457dc:c.instructions+=6;goto B7457dc;
case 0x7457e0:c.instructions+=5;goto B7457e0;
case 0x7457e4:c.instructions+=4;goto B7457e4;
case 0x7457e8:c.instructions+=3;goto B7457e8;
case 0x7457ec:c.instructions+=2;goto B7457ec;
case 0x7457f0:c.instructions+=1;goto B7457f0;
case 0x7457f5:goto L7457f5;
case 0x7457fc:c.instructions+=3;goto B7457fc;
case 0x7457ff:c.instructions+=2;goto B7457ff;
case 0x745801:c.instructions+=1;goto B745801;
case 0x745803:goto L745803;
case 0x74580a:c.instructions+=5;goto B74580a;
case 0x74580b:c.instructions+=4;goto B74580b;
case 0x74580d:c.instructions+=3;goto B74580d;
case 0x74580e:c.instructions+=2;goto B74580e;
case 0x74580f:c.instructions+=1;goto B74580f;
case 0x745811:goto L745811;
case 0x745814:goto L745814;
case 0x74581b:c.instructions+=1;goto B74581b;
case 0x745821:goto L745821;
case 0x745825:c.instructions+=3;goto B745825;
case 0x745828:c.instructions+=2;goto B745828;
case 0x74582a:c.instructions+=1;goto B74582a;
case 0x74582c:goto L74582c;
case 0x745830:c.instructions+=1;goto B745830;
case 0x745836:goto L745836;
case 0x745839:c.instructions+=5;goto B745839;
case 0x74583a:c.instructions+=4;goto B74583a;
case 0x74583e:c.instructions+=3;goto B74583e;
case 0x745843:c.instructions+=2;goto B745843;
case 0x745844:c.instructions+=1;goto B745844;
case 0x745849:goto L745849;
case 0x74584b:c.instructions+=6;goto B74584b;
case 0x74584c:c.instructions+=5;goto B74584c;
case 0x745851:c.instructions+=4;goto B745851;
case 0x745852:c.instructions+=3;goto B745852;
case 0x745857:c.instructions+=2;goto B745857;
case 0x745858:c.instructions+=1;goto B745858;
case 0x74585d:goto L74585d;
case 0x74585f:c.instructions+=7;goto B74585f;
case 0x745860:c.instructions+=6;goto B745860;
case 0x745867:c.instructions+=5;goto B745867;
case 0x745868:c.instructions+=4;goto B745868;
case 0x745869:c.instructions+=3;goto B745869;
case 0x74586e:c.instructions+=2;goto B74586e;
case 0x74586f:c.instructions+=1;goto B74586f;
case 0x745874:goto L745874;
case 0x745877:goto L745877;
case 0x74587f:c.instructions+=1;goto B74587f;
case 0x745881:goto L745881;
case 0x745885:c.instructions+=5;goto B745885;
case 0x745887:c.instructions+=4;goto B745887;
case 0x745888:c.instructions+=3;goto B745888;
case 0x745889:c.instructions+=2;goto B745889;
case 0x74588a:c.instructions+=1;goto B74588a;
case 0x74588f:goto L74588f;
case 0x745892:goto L745892;
case 0x74589a:c.instructions+=1;goto B74589a;
case 0x7458a0:goto L7458a0;
case 0x7458a2:c.instructions+=3;goto B7458a2;
case 0x7458a7:c.instructions+=2;goto B7458a7;
case 0x7458a8:c.instructions+=1;goto B7458a8;
case 0x7458ad:goto L7458ad;
case 0x7458b1:c.instructions+=4;goto B7458b1;
case 0x7458b6:c.instructions+=3;goto B7458b6;
case 0x7458b7:c.instructions+=2;goto B7458b7;
case 0x7458bd:c.instructions+=1;goto B7458bd;
case 0x7458c2:goto L7458c2;
case 0x7458c5:c.instructions+=2;goto B7458c5;
case 0x7458c7:c.instructions+=1;goto B7458c7;
case 0x7458c9:goto L7458c9;
case 0x7458cd:c.instructions+=4;goto B7458cd;
case 0x7458ce:c.instructions+=3;goto B7458ce;
case 0x7458d3:c.instructions+=2;goto B7458d3;
case 0x7458d4:c.instructions+=1;goto B7458d4;
case 0x7458d9:goto L7458d9;
case 0x7458dc:c.instructions+=2;goto B7458dc;
case 0x7458dd:c.instructions+=1;goto B7458dd;
case 0x7458e2:goto L7458e2;
case 0x7458e5:c.instructions+=6;goto B7458e5;
case 0x7458e6:c.instructions+=5;goto B7458e6;
case 0x7458ec:c.instructions+=4;goto B7458ec;
case 0x7458f0:c.instructions+=3;goto B7458f0;
case 0x7458f5:c.instructions+=2;goto B7458f5;
case 0x7458f6:c.instructions+=1;goto B7458f6;
case 0x7458fb:goto L7458fb;
case 0x7458fe:c.instructions+=2;goto B7458fe;
case 0x7458ff:c.instructions+=1;goto B7458ff;
case 0x745904:goto L745904;
case 0x745907:c.instructions+=1;goto B745907;
case 0x74590d:goto L74590d;
case 0x745911:c.instructions+=4;goto B745911;
case 0x745912:c.instructions+=3;goto B745912;
case 0x745917:c.instructions+=2;goto B745917;
case 0x745918:c.instructions+=1;goto B745918;
case 0x74591d:goto L74591d;
case 0x745920:c.instructions+=2;goto B745920;
case 0x745921:c.instructions+=1;goto B745921;
case 0x745926:goto L745926;
case 0x745929:c.instructions+=9;goto B745929;
case 0x74592e:c.instructions+=8;goto B74592e;
case 0x745930:c.instructions+=7;goto B745930;
case 0x745936:c.instructions+=6;goto B745936;
case 0x745937:c.instructions+=5;goto B745937;
case 0x74593d:c.instructions+=4;goto B74593d;
case 0x745941:c.instructions+=3;goto B745941;
case 0x745946:c.instructions+=2;goto B745946;
case 0x745947:c.instructions+=1;goto B745947;
case 0x74594c:goto L74594c;
case 0x74594f:c.instructions+=2;goto B74594f;
case 0x745950:c.instructions+=1;goto B745950;
case 0x745955:goto L745955;
case 0x745957:c.instructions+=2;goto B745957;
case 0x745958:c.instructions+=1;goto B745958;
case 0x74595d:goto L74595d;
case 0x745963:c.instructions+=3;goto B745963;
case 0x745966:c.instructions+=2;goto B745966;
case 0x745968:c.instructions+=1;goto B745968;
case 0x74596e:goto L74596e;
case 0x745972:c.instructions+=7;goto B745972;
case 0x745977:c.instructions+=6;goto B745977;
case 0x74597c:c.instructions+=5;goto B74597c;
case 0x745980:c.instructions+=4;goto B745980;
case 0x745981:c.instructions+=3;goto B745981;
case 0x745986:c.instructions+=2;goto B745986;
case 0x745987:c.instructions+=1;goto B745987;
case 0x74598c:goto L74598c;
case 0x74598f:c.instructions+=2;goto B74598f;
case 0x745990:c.instructions+=1;goto B745990;
case 0x745995:goto L745995;
case 0x745999:c.instructions+=8;goto B745999;
case 0x74599a:c.instructions+=7;goto B74599a;
case 0x74599e:c.instructions+=6;goto B74599e;
case 0x7459a2:c.instructions+=5;goto B7459a2;
case 0x7459aa:c.instructions+=4;goto B7459aa;
case 0x7459b2:c.instructions+=3;goto B7459b2;
case 0x7459ba:c.instructions+=2;goto B7459ba;
case 0x7459be:c.instructions+=1;goto B7459be;
case 0x7459c3:goto L7459c3;
case 0x7459c6:goto L7459c6;
case 0x7459cb:c.instructions+=1;goto B7459cb;
case 0x7459cd:goto L7459cd;
case 0x7459d5:c.instructions+=1;goto B7459d5;
case 0x7459d7:goto L7459d7;
case 0x7459d9:c.instructions+=3;goto B7459d9;
case 0x7459de:c.instructions+=2;goto B7459de;
case 0x7459df:c.instructions+=1;goto B7459df;
case 0x7459e4:goto L7459e4;
case 0x7459e7:c.instructions+=2;goto B7459e7;
case 0x7459e9:c.instructions+=1;goto B7459e9;
case 0x7459ef:goto L7459ef;
case 0x7459f3:c.instructions+=1;goto B7459f3;
case 0x7459f8:goto L7459f8;
case 0x7459fc:c.instructions+=3;goto B7459fc;
case 0x7459ff:c.instructions+=2;goto B7459ff;
case 0x745a01:c.instructions+=1;goto B745a01;
case 0x745a07:goto L745a07;
case 0x745a0b:c.instructions+=1;goto B745a0b;
case 0x745a11:goto L745a11;
case 0x745a13:c.instructions+=3;goto B745a13;
case 0x745a18:c.instructions+=2;goto B745a18;
case 0x745a19:c.instructions+=1;goto B745a19;
case 0x745a1e:goto L745a1e;
case 0x745a24:c.instructions+=8;goto B745a24;
case 0x745a25:c.instructions+=7;goto B745a25;
case 0x745a2a:c.instructions+=6;goto B745a2a;
case 0x745a2e:c.instructions+=5;goto B745a2e;
case 0x745a33:c.instructions+=4;goto B745a33;
case 0x745a34:c.instructions+=3;goto B745a34;
case 0x745a36:c.instructions+=2;goto B745a36;
case 0x745a3b:c.instructions+=1;goto B745a3b;
case 0x745a40:goto L745a40;
case 0x745a41:c.instructions+=5;goto B745a41;
case 0x745a46:c.instructions+=4;goto B745a46;
case 0x745a4d:c.instructions+=3;goto B745a4d;
case 0x745a52:c.instructions+=2;goto B745a52;
case 0x745a53:c.instructions+=1;goto B745a53;
case 0x745a58:goto L745a58;
case 0x745a5a:c.instructions+=7;goto B745a5a;
case 0x745a5c:c.instructions+=6;goto B745a5c;
case 0x745a63:c.instructions+=5;goto B745a63;
case 0x745a64:c.instructions+=4;goto B745a64;
case 0x745a65:c.instructions+=3;goto B745a65;
case 0x745a6a:c.instructions+=2;goto B745a6a;
case 0x745a6b:c.instructions+=1;goto B745a6b;
case 0x745a70:goto L745a70;
case 0x745a72:c.instructions+=7;goto B745a72;
case 0x745a77:c.instructions+=6;goto B745a77;
case 0x745a7c:c.instructions+=5;goto B745a7c;
case 0x745a83:c.instructions+=4;goto B745a83;
case 0x745a88:c.instructions+=3;goto B745a88;
case 0x745a89:c.instructions+=2;goto B745a89;
case 0x745a91:c.instructions+=1;goto B745a91;
case 0x745a96:goto L745a96;
case 0x745a98:c.instructions+=8;goto B745a98;
case 0x745a9b:c.instructions+=7;goto B745a9b;
case 0x745a9d:c.instructions+=6;goto B745a9d;
case 0x745aa1:c.instructions+=5;goto B745aa1;
case 0x745aa2:c.instructions+=4;goto B745aa2;
case 0x745aa3:c.instructions+=3;goto B745aa3;
case 0x745aa8:c.instructions+=2;goto B745aa8;
case 0x745aa9:c.instructions+=1;goto B745aa9;
case 0x745aae:goto L745aae;
case 0x745aaf:c.instructions+=7;goto B745aaf;
case 0x745ab4:c.instructions+=6;goto B745ab4;
case 0x745ab9:c.instructions+=5;goto B745ab9;
case 0x745ac3:c.instructions+=4;goto B745ac3;
case 0x745aca:c.instructions+=3;goto B745aca;
case 0x745ad2:c.instructions+=2;goto B745ad2;
case 0x745ad6:c.instructions+=1;goto B745ad6;
case 0x745adb:goto L745adb;
case 0x745ade:c.instructions+=2;goto B745ade;
case 0x745ae0:c.instructions+=1;goto B745ae0;
case 0x745ae2:goto L745ae2;
case 0x745ae4:c.instructions+=6;goto B745ae4;
case 0x745ae6:c.instructions+=5;goto B745ae6;
case 0x745aeb:c.instructions+=4;goto B745aeb;
case 0x745aed:c.instructions+=3;goto B745aed;
case 0x745af2:c.instructions+=2;goto B745af2;
case 0x745af3:c.instructions+=1;goto B745af3;
case 0x745af8:goto L745af8;
case 0x745afb:goto L745afb;
case 0x745afd:goto L745afd;
case 0x745b00:c.instructions+=3;goto B745b00;
case 0x745b05:c.instructions+=2;goto B745b05;
case 0x745b09:c.instructions+=1;goto B745b09;
case 0x745b0b:goto L745b0b;
case 0x745b0d:c.instructions+=1;goto B745b0d;
case 0x745b0f:goto L745b0f;
case 0x745b15:c.instructions+=1;goto B745b15;
case 0x745b17:goto L745b17;
case 0x745b1b:c.instructions+=1;goto B745b1b;
case 0x745b1d:goto L745b1d;
case 0x745b23:c.instructions+=1;goto B745b23;
case 0x745b25:goto L745b25;
case 0x745b29:c.instructions+=6;goto B745b29;
case 0x745b2b:c.instructions+=5;goto B745b2b;
case 0x745b2e:c.instructions+=4;goto B745b2e;
case 0x745b2f:c.instructions+=3;goto B745b2f;
case 0x745b34:c.instructions+=2;goto B745b34;
case 0x745b35:c.instructions+=1;goto B745b35;
case 0x745b3a:goto L745b3a;
case 0x745b3d:c.instructions+=2;goto B745b3d;
case 0x745b3e:c.instructions+=1;goto B745b3e;
case 0x745b43:goto L745b43;
case 0x745b46:goto L745b46;
case 0x745b4a:c.instructions+=6;goto B745b4a;
case 0x745b4f:c.instructions+=5;goto B745b4f;
case 0x745b56:c.instructions+=4;goto B745b56;
case 0x745b5a:c.instructions+=3;goto B745b5a;
case 0x745b5e:c.instructions+=2;goto B745b5e;
case 0x745b61:c.instructions+=1;goto B745b61;
case 0x745b66:goto L745b66;
case 0x745b69:c.instructions+=1;goto B745b69;
case 0x745b6b:goto L745b6b;
case 0x745b73:c.instructions+=1;goto B745b73;
case 0x745b75:goto L745b75;
case 0x745b7a:c.instructions+=1;goto B745b7a;
case 0x745b80:goto L745b80;
case 0x745b85:c.instructions+=2;goto B745b85;
case 0x745b86:c.instructions+=1;goto B745b86;
case 0x745b8b:goto L745b8b;
case 0x745b8e:goto L745b8e;
case 0x745b92:c.instructions+=3;goto B745b92;
case 0x745b97:c.instructions+=2;goto B745b97;
case 0x745b99:c.instructions+=1;goto B745b99;
case 0x745b9b:goto L745b9b;
case 0x745b9c:c.instructions+=2;goto B745b9c;
case 0x745b9d:c.instructions+=1;goto B745b9d;
case 0x745ba2:goto L745ba2;
case 0x745ba5:goto L745ba5;
case 0x745ba9:c.instructions+=1;goto B745ba9;
case 0x745bab:goto L745bab;
case 0x745baf:c.instructions+=1;goto B745baf;
case 0x745bb5:goto L745bb5;
case 0x745bb9:c.instructions+=8;goto B745bb9;
case 0x745bbe:c.instructions+=7;goto B745bbe;
case 0x745bc0:c.instructions+=6;goto B745bc0;
case 0x745bc6:c.instructions+=5;goto B745bc6;
case 0x745bc7:c.instructions+=4;goto B745bc7;
case 0x745bcc:c.instructions+=3;goto B745bcc;
case 0x745bcd:c.instructions+=2;goto B745bcd;
case 0x745bd0:c.instructions+=1;goto B745bd0;
case 0x745bd5:goto L745bd5;
case 0x745bd8:c.instructions+=2;goto B745bd8;
case 0x745bd9:c.instructions+=1;goto B745bd9;
case 0x745bde:goto L745bde;
case 0x745be2:c.instructions+=5;goto B745be2;
case 0x745be5:c.instructions+=4;goto B745be5;
case 0x745be6:c.instructions+=3;goto B745be6;
case 0x745beb:c.instructions+=2;goto B745beb;
case 0x745bec:c.instructions+=1;goto B745bec;
case 0x745bf1:goto L745bf1;
case 0x745bf4:c.instructions+=2;goto B745bf4;
case 0x745bf5:c.instructions+=1;goto B745bf5;
case 0x745bfa:goto L745bfa;
case 0x745bfd:c.instructions+=1;goto B745bfd;
case 0x745c03:goto L745c03;
case 0x745c07:c.instructions+=2;goto B745c07;
case 0x745c0d:c.instructions+=1;goto B745c0d;
case 0x745c0f:goto L745c0f;
case 0x745c13:c.instructions+=1;goto B745c13;
case 0x745c19:goto L745c19;
case 0x745c1c:c.instructions+=1;goto B745c1c;
case 0x745c21:goto L745c21;
case 0x745c27:c.instructions+=1;goto B745c27;
case 0x745c29:goto L745c29;
case 0x745c2f:c.instructions+=1;goto B745c2f;
case 0x745c35:goto L745c35;
case 0x745c39:c.instructions+=1;goto B745c39;
case 0x745c3f:goto L745c3f;
case 0x745c43:c.instructions+=4;goto B745c43;
case 0x745c44:c.instructions+=3;goto B745c44;
case 0x745c49:c.instructions+=2;goto B745c49;
case 0x745c4a:c.instructions+=1;goto B745c4a;
case 0x745c4f:goto L745c4f;
case 0x745c52:c.instructions+=2;goto B745c52;
case 0x745c53:c.instructions+=1;goto B745c53;
case 0x745c58:goto L745c58;
case 0x745c5b:c.instructions+=1;goto B745c5b;
case 0x745c61:goto L745c61;
case 0x745c65:c.instructions+=1;goto B745c65;
case 0x745c67:goto L745c67;
case 0x745c6b:c.instructions+=5;goto B745c6b;
case 0x745c6c:c.instructions+=4;goto B745c6c;
case 0x745c72:c.instructions+=3;goto B745c72;
case 0x745c77:c.instructions+=2;goto B745c77;
case 0x745c78:c.instructions+=1;goto B745c78;
case 0x745c7d:goto L745c7d;
case 0x745c80:goto L745c80;
case 0x745c88:c.instructions+=1;goto B745c88;
case 0x745c8a:goto L745c8a;
case 0x745c8e:c.instructions+=5;goto B745c8e;
case 0x745c8f:c.instructions+=4;goto B745c8f;
case 0x745c95:c.instructions+=3;goto B745c95;
case 0x745c9a:c.instructions+=2;goto B745c9a;
case 0x745c9b:c.instructions+=1;goto B745c9b;
case 0x745ca0:goto L745ca0;
case 0x745ca3:goto L745ca3;
case 0x745ca7:c.instructions+=2;goto B745ca7;
case 0x745cad:c.instructions+=1;goto B745cad;
case 0x745cb3:goto L745cb3;
case 0x745cb7:c.instructions+=1;goto B745cb7;
case 0x745cbd:goto L745cbd;
case 0x745cc1:c.instructions+=4;goto B745cc1;
case 0x745cc2:c.instructions+=3;goto B745cc2;
case 0x745cc7:c.instructions+=2;goto B745cc7;
case 0x745cc8:c.instructions+=1;goto B745cc8;
case 0x745ccd:goto L745ccd;
case 0x745cd0:c.instructions+=2;goto B745cd0;
case 0x745cd1:c.instructions+=1;goto B745cd1;
case 0x745cd6:goto L745cd6;
case 0x745cda:c.instructions+=6;goto B745cda;
case 0x745cdd:c.instructions+=5;goto B745cdd;
case 0x745cde:c.instructions+=4;goto B745cde;
case 0x745ce3:c.instructions+=3;goto B745ce3;
case 0x745ce4:c.instructions+=2;goto B745ce4;
case 0x745cea:c.instructions+=1;goto B745cea;
case 0x745cef:goto L745cef;
case 0x745cf2:c.instructions+=2;goto B745cf2;
case 0x745cf3:c.instructions+=1;goto B745cf3;
case 0x745cf8:goto L745cf8;
case 0x745cfc:c.instructions+=6;goto B745cfc;
case 0x745cff:c.instructions+=5;goto B745cff;
case 0x745d00:c.instructions+=4;goto B745d00;
case 0x745d05:c.instructions+=3;goto B745d05;
case 0x745d06:c.instructions+=2;goto B745d06;
case 0x745d0c:c.instructions+=1;goto B745d0c;
case 0x745d11:goto L745d11;
case 0x745d14:c.instructions+=2;goto B745d14;
case 0x745d15:c.instructions+=1;goto B745d15;
case 0x745d1a:goto L745d1a;
case 0x745d1d:c.instructions+=2;goto B745d1d;
case 0x745d1f:c.instructions+=1;goto B745d1f;
case 0x745d21:goto L745d21;
case 0x745d27:c.instructions+=2;goto B745d27;
case 0x745d2d:c.instructions+=1;goto B745d2d;
case 0x745d2f:goto L745d2f;
case 0x745d35:c.instructions+=1;goto B745d35;
case 0x745d37:goto L745d37;
case 0x745d3d:goto L745d3d;
case 0x745d47:goto L745d47;
case 0x745d4b:c.instructions+=2;goto B745d4b;
case 0x745d51:c.instructions+=1;goto B745d51;
case 0x745d53:goto L745d53;
case 0x745d57:c.instructions+=1;goto B745d57;
case 0x745d5d:goto L745d5d;
case 0x745d61:c.instructions+=7;goto B745d61;
case 0x745d66:c.instructions+=6;goto B745d66;
case 0x745d68:c.instructions+=5;goto B745d68;
case 0x745d6e:c.instructions+=4;goto B745d6e;
case 0x745d6f:c.instructions+=3;goto B745d6f;
case 0x745d74:c.instructions+=2;goto B745d74;
case 0x745d75:c.instructions+=1;goto B745d75;
case 0x745d7a:goto L745d7a;
case 0x745d7d:c.instructions+=2;goto B745d7d;
case 0x745d7e:c.instructions+=1;goto B745d7e;
case 0x745d83:goto L745d83;
case 0x745d87:c.instructions+=2;goto B745d87;
case 0x745d8a:c.instructions+=1;goto B745d8a;
case 0x745d8d:goto L745d8d;
case 0x745d95:c.instructions+=1;goto B745d95;
case 0x745d97:goto L745d97;
case 0x745d9b:c.instructions+=8;goto B745d9b;
case 0x745d9c:c.instructions+=7;goto B745d9c;
case 0x745da0:c.instructions+=6;goto B745da0;
case 0x745da4:c.instructions+=5;goto B745da4;
case 0x745dac:c.instructions+=4;goto B745dac;
case 0x745db4:c.instructions+=3;goto B745db4;
case 0x745db8:c.instructions+=2;goto B745db8;
case 0x745dbc:c.instructions+=1;goto B745dbc;
case 0x745dc1:goto L745dc1;
case 0x745dc4:goto L745dc4;
case 0x745dcc:c.instructions+=1;goto B745dcc;
case 0x745dce:goto L745dce;
case 0x745dd2:c.instructions+=8;goto B745dd2;
case 0x745dd3:c.instructions+=7;goto B745dd3;
case 0x745dd7:c.instructions+=6;goto B745dd7;
case 0x745ddb:c.instructions+=5;goto B745ddb;
case 0x745de3:c.instructions+=4;goto B745de3;
case 0x745deb:c.instructions+=3;goto B745deb;
case 0x745def:c.instructions+=2;goto B745def;
case 0x745df3:c.instructions+=1;goto B745df3;
case 0x745df8:goto L745df8;
case 0x745dfb:goto L745dfb;
case 0x745e03:c.instructions+=1;goto B745e03;
case 0x745e05:goto L745e05;
case 0x745e09:c.instructions+=9;goto B745e09;
case 0x745e0a:c.instructions+=8;goto B745e0a;
case 0x745e0f:c.instructions+=7;goto B745e0f;
case 0x745e10:c.instructions+=6;goto B745e10;
case 0x745e14:c.instructions+=5;goto B745e14;
case 0x745e1c:c.instructions+=4;goto B745e1c;
case 0x745e24:c.instructions+=3;goto B745e24;
case 0x745e28:c.instructions+=2;goto B745e28;
case 0x745e2c:c.instructions+=1;goto B745e2c;
case 0x745e31:goto L745e31;
case 0x745e34:c.instructions+=2;goto B745e34;
case 0x745e35:c.instructions+=1;goto B745e35;
case 0x745e3a:goto L745e3a;
case 0x745e3d:c.instructions+=3;goto B745e3d;
case 0x745e3f:c.instructions+=2;goto B745e3f;
case 0x745e43:c.instructions+=1;goto B745e43;
case 0x745e45:goto L745e45;
case 0x745e4d:goto L745e4d;
case 0x745e52:c.instructions+=1;goto B745e52;
case 0x745e54:goto L745e54;
case 0x745e5c:goto L745e5c;
case 0x745e5d:c.instructions+=2;goto B745e5d;
case 0x745e61:c.instructions+=1;goto B745e61;
case 0x745e66:goto L745e66;
case 0x745e69:goto L745e69;
case 0x745e71:c.instructions+=1;goto B745e71;
case 0x745e77:goto L745e77;
case 0x745e7b:c.instructions+=4;goto B745e7b;
case 0x745e7c:c.instructions+=3;goto B745e7c;
case 0x745e82:c.instructions+=2;goto B745e82;
case 0x745e83:c.instructions+=1;goto B745e83;
case 0x745e88:goto L745e88;
case 0x745e8c:c.instructions+=8;goto B745e8c;
case 0x745e8f:c.instructions+=7;goto B745e8f;
case 0x745e94:c.instructions+=6;goto B745e94;
case 0x745e96:c.instructions+=5;goto B745e96;
case 0x745e9c:c.instructions+=4;goto B745e9c;
case 0x745e9d:c.instructions+=3;goto B745e9d;
case 0x745ea2:c.instructions+=2;goto B745ea2;
case 0x745ea3:c.instructions+=1;goto B745ea3;
case 0x745ea8:goto L745ea8;
case 0x745eab:c.instructions+=2;goto B745eab;
case 0x745eac:c.instructions+=1;goto B745eac;
case 0x745eb1:goto L745eb1;
case 0x745eb5:c.instructions+=6;goto B745eb5;
case 0x745eb8:c.instructions+=5;goto B745eb8;
case 0x745eba:c.instructions+=4;goto B745eba;
case 0x745ebb:c.instructions+=3;goto B745ebb;
case 0x745ec0:c.instructions+=2;goto B745ec0;
case 0x745ec1:c.instructions+=1;goto B745ec1;
case 0x745ec6:goto L745ec6;
case 0x745ec9:c.instructions+=2;goto B745ec9;
case 0x745eca:c.instructions+=1;goto B745eca;
case 0x745ecf:goto L745ecf;
case 0x745ed3:c.instructions+=6;goto B745ed3;
case 0x745ed6:c.instructions+=5;goto B745ed6;
case 0x745ed7:c.instructions+=4;goto B745ed7;
case 0x745edc:c.instructions+=3;goto B745edc;
case 0x745edd:c.instructions+=2;goto B745edd;
case 0x745edf:c.instructions+=1;goto B745edf;
case 0x745ee4:goto L745ee4;
case 0x745ee7:c.instructions+=2;goto B745ee7;
case 0x745ee8:c.instructions+=1;goto B745ee8;
case 0x745eed:goto L745eed;
case 0x745ef1:c.instructions+=9;goto B745ef1;
case 0x745ef5:c.instructions+=8;goto B745ef5;
case 0x745ef9:c.instructions+=7;goto B745ef9;
case 0x745efa:c.instructions+=6;goto B745efa;
case 0x745efe:c.instructions+=5;goto B745efe;
case 0x745f00:c.instructions+=4;goto B745f00;
case 0x745f08:c.instructions+=3;goto B745f08;
case 0x745f10:c.instructions+=2;goto B745f10;
case 0x745f14:c.instructions+=1;goto B745f14;
case 0x745f19:goto L745f19;
case 0x745f1f:c.instructions+=3;goto B745f1f;
case 0x745f22:c.instructions+=2;goto B745f22;
case 0x745f24:c.instructions+=1;goto B745f24;
case 0x745f26:goto L745f26;
case 0x745f2a:c.instructions+=7;goto B745f2a;
case 0x745f2f:c.instructions+=6;goto B745f2f;
case 0x745f31:c.instructions+=5;goto B745f31;
case 0x745f35:c.instructions+=4;goto B745f35;
case 0x745f36:c.instructions+=3;goto B745f36;
case 0x745f3b:c.instructions+=2;goto B745f3b;
case 0x745f3c:c.instructions+=1;goto B745f3c;
case 0x745f41:goto L745f41;
case 0x745f44:c.instructions+=2;goto B745f44;
case 0x745f45:c.instructions+=1;goto B745f45;
case 0x745f4a:goto L745f4a;
case 0x745f4e:c.instructions+=5;goto B745f4e;
case 0x745f51:c.instructions+=4;goto B745f51;
case 0x745f53:c.instructions+=3;goto B745f53;
case 0x745f58:c.instructions+=2;goto B745f58;
case 0x745f59:c.instructions+=1;goto B745f59;
case 0x745f5e:goto L745f5e;
case 0x745f61:c.instructions+=2;goto B745f61;
case 0x745f62:c.instructions+=1;goto B745f62;
case 0x745f67:goto L745f67;
case 0x745f68:c.instructions+=6;goto B745f68;
case 0x745f6c:c.instructions+=5;goto B745f6c;
case 0x745f6d:c.instructions+=4;goto B745f6d;
case 0x745f6f:c.instructions+=3;goto B745f6f;
case 0x745f71:c.instructions+=2;goto B745f71;
case 0x745f73:c.instructions+=1;goto B745f73;
case 0x745f78:goto L745f78;
case 0x745f7b:goto L745f7b;
case 0x745f7f:c.instructions+=2;goto B745f7f;
case 0x745f85:c.instructions+=1;goto B745f85;
case 0x745f8b:goto L745f8b;
case 0x745f91:c.instructions+=2;goto B745f91;
case 0x745f93:c.instructions+=1;goto B745f93;
case 0x745f99:goto L745f99;
case 0x745f9d:c.instructions+=4;goto B745f9d;
case 0x745f9f:c.instructions+=3;goto B745f9f;
case 0x745fa4:c.instructions+=2;goto B745fa4;
case 0x745fa5:c.instructions+=1;goto B745fa5;
case 0x745faa:goto L745faa;
case 0x745fad:c.instructions+=2;goto B745fad;
case 0x745fae:c.instructions+=1;goto B745fae;
case 0x745fb3:goto L745fb3;
case 0x745fb5:c.instructions+=3;goto B745fb5;
case 0x745fb8:c.instructions+=2;goto B745fb8;
case 0x745fba:c.instructions+=1;goto B745fba;
case 0x745fc0:goto L745fc0;
case 0x745fc4:c.instructions+=3;goto B745fc4;
case 0x745fc9:c.instructions+=2;goto B745fc9;
case 0x745fca:c.instructions+=1;goto B745fca;
case 0x745fcf:goto L745fcf;
case 0x745fd2:c.instructions+=2;goto B745fd2;
case 0x745fd4:c.instructions+=1;goto B745fd4;
case 0x745fda:goto L745fda;
case 0x745fdf:c.instructions+=1;goto B745fdf;
case 0x745fe4:goto L745fe4;
case 0x745fe6:c.instructions+=5;goto B745fe6;
case 0x745fe9:c.instructions+=4;goto B745fe9;
case 0x745feb:c.instructions+=3;goto B745feb;
case 0x745ff0:c.instructions+=2;goto B745ff0;
case 0x745ff5:c.instructions+=1;goto B745ff5;
case 0x745ff7:goto L745ff7;
case 0x745ff9:goto L745ff9;
case 0x745ffb:c.instructions+=3;goto B745ffb;
case 0x745ffe:c.instructions+=2;goto B745ffe;
case 0x745fff:c.instructions+=1;goto B745fff;
default:missing_instruction(c.pc);}
B745000:L745000:{c.instructions+=2;NFSU2_TR(0x745000);
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
B745002:{NFSU2_TR(0x745002);
if(r1(R+518)){{goto L7450f9;}}
}
B745008:L745008:{c.instructions+=4;NFSU2_TR(0x745008);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745009:{NFSU2_TR(0x745009);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74500b:{NFSU2_TR(0x74500b);
w4(R+4,u32(0x662ull));
}
B745010:{NFSU2_TR(0x745010);
__builtin_memmove((R+28),(R+24),4);
}
B745012:L745012:{c.instructions+=1;NFSU2_TR(0x745012);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L745014;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x745012u);}goto L745012;}
}
B745014:L745014:{c.instructions+=3;NFSU2_TR(0x745014);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B745018:{NFSU2_TR(0x745018);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74501a:{NFSU2_TR(0x74501a);
if(r1(R+518)){{goto L745055;}}
}
B74501c:L74501c:{c.instructions+=3;NFSU2_TR(0x74501c);
u8 U[4];
w4(U+0,u32(0x3dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74501e:{NFSU2_TR(0x74501e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74501f:{NFSU2_TR(0x74501f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745024ull));
TAIL_STATIC(0x75cf10u,75c);
}
B745024:L745024:{c.instructions+=4;NFSU2_TR(0x745024);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745027:{NFSU2_TR(0x745027);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B745029:{NFSU2_TR(0x745029);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74502a:{NFSU2_TR(0x74502a);
if(r1(R+518)){{goto L74503f;}}
}
B74502c:L74502c:{c.instructions+=4;NFSU2_TR(0x74502c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74502f:{NFSU2_TR(0x74502f);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745034:{NFSU2_TR(0x745034);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745035:{NFSU2_TR(0x745035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74503aull));
TAIL_STATIC(0x741650u,741);
}
B74503a:L74503a:{c.instructions+=2;NFSU2_TR(0x74503a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74503d:{NFSU2_TR(0x74503d);
{goto L745055;}
}
B74503f:L74503f:{c.instructions+=5;NFSU2_TR(0x74503f);
u8 U[4];
w4(U+0,u32(0x7a1498ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745044:{NFSU2_TR(0x745044);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B745047:{NFSU2_TR(0x745047);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74504c:{NFSU2_TR(0x74504c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74504d:{NFSU2_TR(0x74504d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745052ull));
TAIL_STATIC(0x741a50u,741);
}
B745052:L745052:{c.instructions+=1;NFSU2_TR(0x745052);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B745055:L745055:{c.instructions+=2;NFSU2_TR(0x745055);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74505a:{NFSU2_TR(0x74505a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74505full));
TAIL_STATIC(0x754230u,754);
}
B74505f:L74505f:{c.instructions+=5;NFSU2_TR(0x74505f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B745062:{NFSU2_TR(0x745062);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B745064:{NFSU2_TR(0x745064);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B745066:{NFSU2_TR(0x745066);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B745067:{NFSU2_TR(0x745067);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745076;}}
}
B745069:L745069:{c.instructions+=2;NFSU2_TR(0x745069);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74506a:{NFSU2_TR(0x74506a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74506full));
TAIL_STATIC(0x598ec0u,598);
}
B74506f:L74506f:{c.instructions+=4;NFSU2_TR(0x74506f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B745072:{NFSU2_TR(0x745072);
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
B745074:{NFSU2_TR(0x745074);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B745075:{NFSU2_TR(0x745075);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B745076:L745076:{c.instructions+=2;NFSU2_TR(0x745076);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74507b:{NFSU2_TR(0x74507b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745080ull));
TAIL_STATIC(0x74ae50u,74a);
}
B745080:L745080:{c.instructions+=4;NFSU2_TR(0x745080);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B745083:{NFSU2_TR(0x745083);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B745085:{NFSU2_TR(0x745085);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745088:{NFSU2_TR(0x745088);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74509f;}}
}
B74508a:L74508a:{c.instructions+=3;NFSU2_TR(0x74508a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B74508c:{NFSU2_TR(0x74508c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74508d:{NFSU2_TR(0x74508d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745092ull));
TAIL_STATIC(0x7542c0u,754);
}
B745092:L745092:{c.instructions+=2;NFSU2_TR(0x745092);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745093:{NFSU2_TR(0x745093);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745098ull));
TAIL_STATIC(0x598ec0u,598);
}
B745098:L745098:{c.instructions+=4;NFSU2_TR(0x745098);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74509b:{NFSU2_TR(0x74509b);
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
B74509d:{NFSU2_TR(0x74509d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74509e:{NFSU2_TR(0x74509e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74509f:L74509f:{c.instructions+=9;NFSU2_TR(0x74509f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7450a3:{NFSU2_TR(0x7450a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7450a7:{NFSU2_TR(0x7450a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1620ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7450ad:{NFSU2_TR(0x7450ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1624ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7450b3:{NFSU2_TR(0x7450b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x1d4c0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7450ba:{NFSU2_TR(0x7450ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xea60ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7450c1:{NFSU2_TR(0x7450c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x7530ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7450c8:{NFSU2_TR(0x7450c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1498ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7450ce:{NFSU2_TR(0x7450ce);
w4(R+4,u32(0x20ull));
}
B7450d3:L7450d3:{c.instructions+=4;NFSU2_TR(0x7450d3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+0)),r4(U+0));
}
B7450d9:{NFSU2_TR(0x7450d9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B7450dc:{NFSU2_TR(0x7450dc);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B7450dd:{NFSU2_TR(0x7450dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7450d3u);}goto L7450d3;}}
}
B7450df:L7450df:{c.instructions+=3;NFSU2_TR(0x7450df);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7450e1:{NFSU2_TR(0x7450e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7450e2:{NFSU2_TR(0x7450e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7450e7ull));
TAIL_STATIC(0x744310u,744);
}
B7450e7:L7450e7:{c.instructions+=3;NFSU2_TR(0x7450e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7450e9:{NFSU2_TR(0x7450e9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7450eb:{NFSU2_TR(0x7450eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7450f0ull));
TAIL_STATIC(0x742860u,742);
}
B7450f0:L7450f0:{c.instructions+=2;NFSU2_TR(0x7450f0);
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
B7450f3:{NFSU2_TR(0x7450f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x162cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7450f9:L7450f9:{c.instructions+=3;NFSU2_TR(0x7450f9);
__builtin_memmove((R+0),(R+24),4);
}
B7450fb:{NFSU2_TR(0x7450fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7450fc:{NFSU2_TR(0x7450fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B745100:L745100:{c.instructions+=7;NFSU2_TR(0x745100);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745101:{NFSU2_TR(0x745101);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B745105:{NFSU2_TR(0x745105);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745106:{NFSU2_TR(0x745106);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745107:{NFSU2_TR(0x745107);
u8 U[4];
w4(U+0,u32(0x7465726dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74510c:{NFSU2_TR(0x74510c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74510d:{NFSU2_TR(0x74510d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745112ull));
TAIL_STATIC(0x744310u,744);
}
B745112:L745112:{c.instructions+=3;NFSU2_TR(0x745112);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745115:{NFSU2_TR(0x745115);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1160ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74511b:{NFSU2_TR(0x74511b);
w4(R+28,u32(0x24ull));
}
B745120:L745120:{c.instructions+=3;NFSU2_TR(0x745120);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B745122:{NFSU2_TR(0x745122);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B745124:{NFSU2_TR(0x745124);
if(r1(R+518)){{goto L745138;}}
}
B745126:L745126:{c.instructions+=2;NFSU2_TR(0x745126);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745127:{NFSU2_TR(0x745127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74512cull));
TAIL_STATIC(0x754d70u,754);
}
B74512c:L74512c:{c.instructions+=3;NFSU2_TR(0x74512c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74512f:{NFSU2_TR(0x74512f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745130:{NFSU2_TR(0x745130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745135ull));
TAIL_STATIC(0x73d710u,73d);
}
B745135:L745135:{c.instructions+=1;NFSU2_TR(0x745135);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745138:L745138:{c.instructions+=3;NFSU2_TR(0x745138);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B74513b:{NFSU2_TR(0x74513b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B74513c:{NFSU2_TR(0x74513c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x745120u);}goto L745120;}}
}
B74513e:L74513e:{c.instructions+=3;NFSU2_TR(0x74513e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745141:{NFSU2_TR(0x745141);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745142:{NFSU2_TR(0x745142);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745147ull));
TAIL_STATIC(0x74aed0u,74a);
}
B745147:L745147:{c.instructions+=3;NFSU2_TR(0x745147);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B745149:{NFSU2_TR(0x745149);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74514a:{NFSU2_TR(0x74514a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74514full));
TAIL_STATIC(0x7542c0u,754);
}
B74514f:L74514f:{c.instructions+=2;NFSU2_TR(0x74514f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745150:{NFSU2_TR(0x745150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745155ull));
TAIL_STATIC(0x598ec0u,598);
}
B745155:L745155:{c.instructions+=5;NFSU2_TR(0x745155);
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
B745158:{NFSU2_TR(0x745158);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B745159:{NFSU2_TR(0x745159);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74515a:{NFSU2_TR(0x74515a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74515b:{NFSU2_TR(0x74515b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B745160:L745160:{c.instructions+=13;NFSU2_TR(0x745160);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745164:{NFSU2_TR(0x745164);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745165:{NFSU2_TR(0x745165);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745166:{NFSU2_TR(0x745166);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74516a:{NFSU2_TR(0x74516a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1430ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745170:{NFSU2_TR(0x745170);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1438ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745176:{NFSU2_TR(0x745176);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74517a:{NFSU2_TR(0x74517a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74517b:{NFSU2_TR(0x74517b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B74517d:{NFSU2_TR(0x74517d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B74517f:{NFSU2_TR(0x74517f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1434ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745185:{NFSU2_TR(0x745185);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745188:{NFSU2_TR(0x745188);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74518dull));
TAIL_STATIC(0x743cd0u,743);
}
B74518d:L74518d:{c.instructions+=7;NFSU2_TR(0x74518d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745191:{NFSU2_TR(0x745191);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B745193:{NFSU2_TR(0x745193);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1490ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745199:{NFSU2_TR(0x745199);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74519c:{NFSU2_TR(0x74519c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B7451a3:{NFSU2_TR(0x7451a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7451a6:{NFSU2_TR(0x7451a6);
if(r1(R+518)){{goto L7451bf;}}
}
B7451a8:L7451a8:{c.instructions+=6;NFSU2_TR(0x7451a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7451ac:{NFSU2_TR(0x7451ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7451ad:{NFSU2_TR(0x7451ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7451ae:{NFSU2_TR(0x7451ae);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7451b0:{NFSU2_TR(0x7451b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7451b1:{NFSU2_TR(0x7451b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7451b6ull));
TAIL_STATIC(0x744f40u,744);
}
B7451b6:L7451b6:{c.instructions+=4;NFSU2_TR(0x7451b6);
__builtin_memmove((R+28),(R+0),4);
}
B7451b8:{NFSU2_TR(0x7451b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7451bb:{NFSU2_TR(0x7451bb);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B7451bd:{NFSU2_TR(0x7451bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7451e2;}}
}
B7451bf:L7451bf:{c.instructions+=6;NFSU2_TR(0x7451bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7451c3:{NFSU2_TR(0x7451c3);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7451c5:{NFSU2_TR(0x7451c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7451c6:{NFSU2_TR(0x7451c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1948ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7451cc:{NFSU2_TR(0x7451cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7451cd:{NFSU2_TR(0x7451cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7451d2ull));
TAIL_STATIC(0x75c840u,75c);
}
B7451d2:L7451d2:{c.instructions+=3;NFSU2_TR(0x7451d2);
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
B7451d5:{NFSU2_TR(0x7451d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1987ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7451db:{NFSU2_TR(0x7451db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x696e6974ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7451e2:L7451e2:{c.instructions+=5;NFSU2_TR(0x7451e2);
__builtin_memmove((R+0),(R+28),4);
}
B7451e4:{NFSU2_TR(0x7451e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7451e5:{NFSU2_TR(0x7451e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7451e6:{NFSU2_TR(0x7451e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7451e7:{NFSU2_TR(0x7451e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7451f0:L7451f0:{c.instructions+=5;NFSU2_TR(0x7451f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7451f1:{NFSU2_TR(0x7451f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7451f5:{NFSU2_TR(0x7451f5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7451f7:{NFSU2_TR(0x7451f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(u32(0x1000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7451fd:{NFSU2_TR(0x7451fd);
if(r1(R+518)){{goto L74520b;}}
}
B7451ff:L7451ff:{c.instructions+=4;NFSU2_TR(0x7451ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745203:{NFSU2_TR(0x745203);
__builtin_memmove((R+0),(R+24),4);
}
B745205:{NFSU2_TR(0x745205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B745206:{NFSU2_TR(0x745206);
TAIL_STATIC(0x744fa0u,744);
}
B74520b:L74520b:{c.instructions+=5;NFSU2_TR(0x74520b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74520f:{NFSU2_TR(0x74520f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745215:{NFSU2_TR(0x745215);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1618ull))));
}
B74521b:{NFSU2_TR(0x74521b);
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
B74521d:{NFSU2_TR(0x74521d);
if(r1(R+518)){{goto L745242;}}
}
B74521f:L74521f:{c.instructions+=1;NFSU2_TR(0x74521f);
}
B745220:L745220:{c.instructions+=2;NFSU2_TR(0x745220);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B745223:{NFSU2_TR(0x745223);
if(r1(R+518)){{goto L74522a;}}
}
B745225:L745225:{c.instructions+=2;NFSU2_TR(0x745225);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B745228:{NFSU2_TR(0x745228);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745236;}}
}
B74522a:L74522a:{c.instructions+=2;NFSU2_TR(0x74522a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B745231:{NFSU2_TR(0x745231);
w4(R+0,u32(0x1ull));
}
B745236:L745236:{c.instructions+=5;NFSU2_TR(0x745236);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B745238:{NFSU2_TR(0x745238);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74523b:{NFSU2_TR(0x74523b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x58ull))));
}
B74523e:{NFSU2_TR(0x74523e);
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
B745240:{NFSU2_TR(0x745240);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x745220u);}goto L745220;}}
}
B745242:L745242:{c.instructions+=2;NFSU2_TR(0x745242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B745243:{NFSU2_TR(0x745243);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B745250:L745250:{c.instructions+=9;NFSU2_TR(0x745250);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745251:{NFSU2_TR(0x745251);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745252:{NFSU2_TR(0x745252);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745253:{NFSU2_TR(0x745253);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B745257:{NFSU2_TR(0x745257);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745258:{NFSU2_TR(0x745258);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74525a:{NFSU2_TR(0x74525a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74525b:{NFSU2_TR(0x74525b);
w4(R+4,u32(0xecull));
}
B745260:{NFSU2_TR(0x745260);
__builtin_memmove((R+28),(R+24),4);
}
B745262:L745262:{c.instructions+=1;NFSU2_TR(0x745262);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L745264;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x745262u);}goto L745262;}
}
B745264:L745264:{c.instructions+=4;NFSU2_TR(0x745264);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B745268:{NFSU2_TR(0x745268);
u8 U[4];
w4(U+0,u32(0x7b3b88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74526d:{NFSU2_TR(0x74526d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74526e:{NFSU2_TR(0x74526e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745273ull));
TAIL_STATIC(0x7414a0u,741);
}
B745273:L745273:{c.instructions+=3;NFSU2_TR(0x745273);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745276:{NFSU2_TR(0x745276);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745277:{NFSU2_TR(0x745277);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74527cull));
TAIL_STATIC(0x7420b0u,742);
}
B74527c:L74527c:{c.instructions+=9;NFSU2_TR(0x74527c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74527f:{NFSU2_TR(0x74527f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745284:{NFSU2_TR(0x745284);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B745286:{NFSU2_TR(0x745286);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745288:{NFSU2_TR(0x745288);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74528b:{NFSU2_TR(0x74528b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74528c:{NFSU2_TR(0x74528c);
u8 U[4];
w4(U+0,u32(0x7a15f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745291:{NFSU2_TR(0x745291);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745292:{NFSU2_TR(0x745292);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745297ull));
TAIL_STATIC(0x7414a0u,741);
}
B745297:L745297:{c.instructions+=3;NFSU2_TR(0x745297);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74529a:{NFSU2_TR(0x74529a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74529b:{NFSU2_TR(0x74529b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7452a0ull));
TAIL_STATIC(0x742360u,742);
}
B7452a0:L7452a0:{c.instructions+=5;NFSU2_TR(0x7452a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7452a3:{NFSU2_TR(0x7452a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7452a5:{NFSU2_TR(0x7452a5);
u8 U[4];
w4(U+0,u32(0x7a0bb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7452aa:{NFSU2_TR(0x7452aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7452ab:{NFSU2_TR(0x7452ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7452b0ull));
TAIL_STATIC(0x7414a0u,741);
}
B7452b0:L7452b0:{c.instructions+=3;NFSU2_TR(0x7452b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7452b3:{NFSU2_TR(0x7452b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7452b4:{NFSU2_TR(0x7452b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7452b9ull));
TAIL_STATIC(0x742100u,742);
}
B7452b9:L7452b9:{c.instructions+=8;NFSU2_TR(0x7452b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7452bc:{NFSU2_TR(0x7452bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7452be:{NFSU2_TR(0x7452be);
u8 U[4];
w4(U+0,u32(0x7c34b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7452c3:{NFSU2_TR(0x7452c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7452c6:{NFSU2_TR(0x7452c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7452c7:{NFSU2_TR(0x7452c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7452ca:{NFSU2_TR(0x7452ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7452ce:{NFSU2_TR(0x7452ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7452d3ull));
TAIL_STATIC(0x7414a0u,741);
}
B7452d3:L7452d3:{c.instructions+=3;NFSU2_TR(0x7452d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7452d6:{NFSU2_TR(0x7452d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7452d7:{NFSU2_TR(0x7452d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7452dcull));
TAIL_STATIC(0x742140u,742);
}
B7452dc:L7452dc:{c.instructions+=9;NFSU2_TR(0x7452dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7452df:{NFSU2_TR(0x7452df);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7452e4:{NFSU2_TR(0x7452e4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7452e6:{NFSU2_TR(0x7452e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7452e9:{NFSU2_TR(0x7452e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7452ea:{NFSU2_TR(0x7452ea);
u8 U[4];
w4(U+0,u32(0x7d28e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7452ef:{NFSU2_TR(0x7452ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7452f0:{NFSU2_TR(0x7452f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B7452f2:{NFSU2_TR(0x7452f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7452f7ull));
TAIL_STATIC(0x7414a0u,741);
}
B7452f7:L7452f7:{c.instructions+=3;NFSU2_TR(0x7452f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7452fa:{NFSU2_TR(0x7452fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7452fb:{NFSU2_TR(0x7452fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745300ull));
TAIL_STATIC(0x742360u,742);
}
B745300:L745300:{c.instructions+=8;NFSU2_TR(0x745300);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B745303:{NFSU2_TR(0x745303);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745308:{NFSU2_TR(0x745308);
u8 U[4];
w4(U+0,u32(0x104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74530d:{NFSU2_TR(0x74530d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+8),(U+0),4);
}
B745310:{NFSU2_TR(0x745310);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745311:{NFSU2_TR(0x745311);
u8 U[4];
w4(U+0,u32(0x7d28ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745316:{NFSU2_TR(0x745316);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745317:{NFSU2_TR(0x745317);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74531cull));
TAIL_STATIC(0x7414a0u,741);
}
B74531c:L74531c:{c.instructions+=3;NFSU2_TR(0x74531c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74531f:{NFSU2_TR(0x74531f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745320:{NFSU2_TR(0x745320);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745325ull));
TAIL_STATIC(0x742360u,742);
}
B745325:L745325:{c.instructions+=8;NFSU2_TR(0x745325);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B745328:{NFSU2_TR(0x745328);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74532d:{NFSU2_TR(0x74532d);
u8 U[4];
w4(U+0,u32(0x204ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745332:{NFSU2_TR(0x745332);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((R+0),(U+0),4);
}
B745338:{NFSU2_TR(0x745338);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745339:{NFSU2_TR(0x745339);
u8 U[4];
w4(U+0,u32(0x7c34e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74533e:{NFSU2_TR(0x74533e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74533f:{NFSU2_TR(0x74533f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745344ull));
TAIL_STATIC(0x7414a0u,741);
}
B745344:L745344:{c.instructions+=3;NFSU2_TR(0x745344);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745347:{NFSU2_TR(0x745347);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745348:{NFSU2_TR(0x745348);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74534dull));
TAIL_STATIC(0x742360u,742);
}
B74534d:L74534d:{c.instructions+=5;NFSU2_TR(0x74534d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B745350:{NFSU2_TR(0x745350);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745352:{NFSU2_TR(0x745352);
u8 U[4];
w4(U+0,u32(0x7c34acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745357:{NFSU2_TR(0x745357);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745358:{NFSU2_TR(0x745358);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74535dull));
TAIL_STATIC(0x7414a0u,741);
}
B74535d:L74535d:{c.instructions+=3;NFSU2_TR(0x74535d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745360:{NFSU2_TR(0x745360);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745361:{NFSU2_TR(0x745361);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745366ull));
TAIL_STATIC(0x7420b0u,742);
}
B745366:L745366:{c.instructions+=6;NFSU2_TR(0x745366);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745369:{NFSU2_TR(0x745369);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74536b:{NFSU2_TR(0x74536b);
u8 U[4];
w4(U+0,u32(0x7d29c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745370:{NFSU2_TR(0x745370);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745371:{NFSU2_TR(0x745371);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x330ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745377:{NFSU2_TR(0x745377);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74537cull));
TAIL_STATIC(0x7414a0u,741);
}
B74537c:L74537c:{c.instructions+=3;NFSU2_TR(0x74537c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74537f:{NFSU2_TR(0x74537f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745380:{NFSU2_TR(0x745380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745385ull));
TAIL_STATIC(0x742100u,742);
}
B745385:L745385:{c.instructions+=6;NFSU2_TR(0x745385);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745388:{NFSU2_TR(0x745388);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74538a:{NFSU2_TR(0x74538a);
u8 U[4];
w4(U+0,u32(0x7d29c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74538f:{NFSU2_TR(0x74538f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745390:{NFSU2_TR(0x745390);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x334ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745396:{NFSU2_TR(0x745396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74539bull));
TAIL_STATIC(0x7414a0u,741);
}
B74539b:L74539b:{c.instructions+=3;NFSU2_TR(0x74539b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74539e:{NFSU2_TR(0x74539e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74539f:{NFSU2_TR(0x74539f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7453a4ull));
TAIL_STATIC(0x7420b0u,742);
}
B7453a4:L7453a4:{c.instructions+=4;NFSU2_TR(0x7453a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7453a5:{NFSU2_TR(0x7453a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x338ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7453ab:{NFSU2_TR(0x7453ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7453ac:{NFSU2_TR(0x7453ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7453b1ull));
TAIL_STATIC(0x744e80u,744);
}
B7453b1:L7453b1:{c.instructions+=5;NFSU2_TR(0x7453b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7453b4:{NFSU2_TR(0x7453b4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7453b6:{NFSU2_TR(0x7453b6);
u8 U[4];
w4(U+0,u32(0x7d29bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7453bb:{NFSU2_TR(0x7453bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7453bc:{NFSU2_TR(0x7453bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7453c1ull));
TAIL_STATIC(0x7414a0u,741);
}
B7453c1:L7453c1:{c.instructions+=3;NFSU2_TR(0x7453c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7453c4:{NFSU2_TR(0x7453c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7453c5:{NFSU2_TR(0x7453c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7453caull));
TAIL_STATIC(0x7420b0u,742);
}
B7453ca:L7453ca:{c.instructions+=6;NFSU2_TR(0x7453ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7453cd:{NFSU2_TR(0x7453cd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7453cf:{NFSU2_TR(0x7453cf);
u8 U[4];
w4(U+0,u32(0x7d29b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7453d4:{NFSU2_TR(0x7453d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7453d5:{NFSU2_TR(0x7453d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7453db:{NFSU2_TR(0x7453db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7453e0ull));
TAIL_STATIC(0x7414a0u,741);
}
B7453e0:L7453e0:{c.instructions+=3;NFSU2_TR(0x7453e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7453e3:{NFSU2_TR(0x7453e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7453e4:{NFSU2_TR(0x7453e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7453e9ull));
TAIL_STATIC(0x7420b0u,742);
}
B7453e9:L7453e9:{c.instructions+=6;NFSU2_TR(0x7453e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7453ec:{NFSU2_TR(0x7453ec);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7453ee:{NFSU2_TR(0x7453ee);
u8 U[4];
w4(U+0,u32(0x7d29b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7453f3:{NFSU2_TR(0x7453f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7453f4:{NFSU2_TR(0x7453f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x340ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7453fa:{NFSU2_TR(0x7453fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7453ffull));
TAIL_STATIC(0x7414a0u,741);
}
B7453ff:L7453ff:{c.instructions+=3;NFSU2_TR(0x7453ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745402:{NFSU2_TR(0x745402);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745403:{NFSU2_TR(0x745403);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745408ull));
TAIL_STATIC(0x7420b0u,742);
}
B745408:L745408:{c.instructions+=6;NFSU2_TR(0x745408);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74540b:{NFSU2_TR(0x74540b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74540d:{NFSU2_TR(0x74540d);
u8 U[4];
w4(U+0,u32(0x7d29b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745412:{NFSU2_TR(0x745412);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745413:{NFSU2_TR(0x745413);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745419:{NFSU2_TR(0x745419);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74541eull));
TAIL_STATIC(0x7414a0u,741);
}
B74541e:L74541e:{c.instructions+=3;NFSU2_TR(0x74541e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745421:{NFSU2_TR(0x745421);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745422:{NFSU2_TR(0x745422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745427ull));
TAIL_STATIC(0x7420b0u,742);
}
B745427:L745427:{c.instructions+=6;NFSU2_TR(0x745427);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74542a:{NFSU2_TR(0x74542a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74542c:{NFSU2_TR(0x74542c);
u8 U[4];
w4(U+0,u32(0x7a1104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745431:{NFSU2_TR(0x745431);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745432:{NFSU2_TR(0x745432);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x348ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745438:{NFSU2_TR(0x745438);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74543dull));
TAIL_STATIC(0x7414a0u,741);
}
B74543d:L74543d:{c.instructions+=3;NFSU2_TR(0x74543d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745440:{NFSU2_TR(0x745440);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745441:{NFSU2_TR(0x745441);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745446ull));
TAIL_STATIC(0x7420b0u,742);
}
B745446:L745446:{c.instructions+=4;NFSU2_TR(0x745446);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745449:{NFSU2_TR(0x745449);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74544c:{NFSU2_TR(0x74544c);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B74544e:{NFSU2_TR(0x74544e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34cull))));
__builtin_memmove((R+12),(U+0),4);
}
B745454:L745454:{c.instructions+=8;NFSU2_TR(0x745454);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745456:{NFSU2_TR(0x745456);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745457:{NFSU2_TR(0x745457);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74545c:{NFSU2_TR(0x74545c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74545e:{NFSU2_TR(0x74545e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74545f:{NFSU2_TR(0x74545f);
u8 U[4];
w4(U+0,u32(0x7a03d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745464:{NFSU2_TR(0x745464);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745465:{NFSU2_TR(0x745465);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74546aull));
TAIL_STATIC(0x7414a0u,741);
}
B74546a:L74546a:{c.instructions+=3;NFSU2_TR(0x74546a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74546d:{NFSU2_TR(0x74546d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74546e:{NFSU2_TR(0x74546e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745473ull));
TAIL_STATIC(0x7421d0u,742);
}
B745473:L745473:{c.instructions+=4;NFSU2_TR(0x745473);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B745475:{NFSU2_TR(0x745475);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B745478:{NFSU2_TR(0x745478);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74547a:{NFSU2_TR(0x74547a);
if(r1(R+518)){{goto L745485;}}
}
B74547c:L74547c:{c.instructions+=4;NFSU2_TR(0x74547c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B74547d:{NFSU2_TR(0x74547d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B745480:{NFSU2_TR(0x745480);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B745483:{NFSU2_TR(0x745483);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x745454u);}goto L745454;}}
}
B745485:L745485:{c.instructions+=4;NFSU2_TR(0x745485);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745487:{NFSU2_TR(0x745487);
u8 U[4];
w4(U+0,u32(0x7d29acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74548c:{NFSU2_TR(0x74548c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74548d:{NFSU2_TR(0x74548d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745492ull));
TAIL_STATIC(0x7414a0u,741);
}
B745492:L745492:{c.instructions+=3;NFSU2_TR(0x745492);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745495:{NFSU2_TR(0x745495);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745496:{NFSU2_TR(0x745496);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74549bull));
TAIL_STATIC(0x7420b0u,742);
}
B74549b:L74549b:{c.instructions+=6;NFSU2_TR(0x74549b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74549e:{NFSU2_TR(0x74549e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7454a0:{NFSU2_TR(0x7454a0);
u8 U[4];
w4(U+0,u32(0x7d29a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7454a5:{NFSU2_TR(0x7454a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7454a6:{NFSU2_TR(0x7454a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7454ac:{NFSU2_TR(0x7454ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7454b1ull));
TAIL_STATIC(0x7414a0u,741);
}
B7454b1:L7454b1:{c.instructions+=3;NFSU2_TR(0x7454b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7454b4:{NFSU2_TR(0x7454b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7454b5:{NFSU2_TR(0x7454b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7454baull));
TAIL_STATIC(0x7420b0u,742);
}
B7454ba:L7454ba:{c.instructions+=6;NFSU2_TR(0x7454ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7454bb:{NFSU2_TR(0x7454bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x394ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7454c1:{NFSU2_TR(0x7454c1);
u8 U[4];
w4(U+0,u32(0x7d29a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7454c6:{NFSU2_TR(0x7454c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7454c7:{NFSU2_TR(0x7454c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x390ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7454cd:{NFSU2_TR(0x7454cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7454d2ull));
TAIL_STATIC(0x75c784u,75c);
}
B7454d2:L7454d2:{c.instructions+=8;NFSU2_TR(0x7454d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B7454d5:{NFSU2_TR(0x7454d5);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7454da:{NFSU2_TR(0x7454da);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7454dc:{NFSU2_TR(0x7454dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x398ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7454e2:{NFSU2_TR(0x7454e2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7454e3:{NFSU2_TR(0x7454e3);
u8 U[4];
w4(U+0,u32(0x7d299cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7454e8:{NFSU2_TR(0x7454e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7454e9:{NFSU2_TR(0x7454e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7454eeull));
TAIL_STATIC(0x7414a0u,741);
}
B7454ee:L7454ee:{c.instructions+=3;NFSU2_TR(0x7454ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7454f1:{NFSU2_TR(0x7454f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7454f2:{NFSU2_TR(0x7454f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7454f7ull));
TAIL_STATIC(0x742360u,742);
}
B7454f7:L7454f7:{c.instructions+=5;NFSU2_TR(0x7454f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7454fa:{NFSU2_TR(0x7454fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7454fc:{NFSU2_TR(0x7454fc);
u8 U[4];
w4(U+0,u32(0x7d2998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745501:{NFSU2_TR(0x745501);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745502:{NFSU2_TR(0x745502);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745507ull));
TAIL_STATIC(0x7414a0u,741);
}
B745507:L745507:{c.instructions+=3;NFSU2_TR(0x745507);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74550a:{NFSU2_TR(0x74550a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74550b:{NFSU2_TR(0x74550b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745510ull));
TAIL_STATIC(0x742140u,742);
}
B745510:L745510:{c.instructions+=5;NFSU2_TR(0x745510);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3acull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745516:{NFSU2_TR(0x745516);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B745518:{NFSU2_TR(0x745518);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74551b:{NFSU2_TR(0x74551b);
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
B74551d:{NFSU2_TR(0x74551d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74552d;}}
}
B74551f:L74551f:{c.instructions+=4;NFSU2_TR(0x74551f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745523:{NFSU2_TR(0x745523);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745524:{NFSU2_TR(0x745524);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745525:{NFSU2_TR(0x745525);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74552aull));
TAIL_STATIC(0x742e60u,742);
}
B74552a:L74552a:{c.instructions+=1;NFSU2_TR(0x74552a);
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
B74552d:L74552d:{c.instructions+=5;NFSU2_TR(0x74552d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74552e:{NFSU2_TR(0x74552e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74552f:{NFSU2_TR(0x74552f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B745530:{NFSU2_TR(0x745530);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B745531:{NFSU2_TR(0x745531);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B745540:L745540:{c.instructions+=9;NFSU2_TR(0x745540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3b0ull))));
}
B745546:{NFSU2_TR(0x745546);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74554b:{NFSU2_TR(0x74554b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74554c:{NFSU2_TR(0x74554c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3b8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B745553:{NFSU2_TR(0x745553);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745554:{NFSU2_TR(0x745554);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+20),(U+0),4);
}
B745556:{NFSU2_TR(0x745556);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B745558:{NFSU2_TR(0x745558);
u8 U[8];
w4(U+0,u32(u32(u32(0x3b4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74555f:{NFSU2_TR(0x74555f);
if(r1(R+518)){TAIL_STATIC(0x7471a2u,747);}
}
B745565:L745565:{c.instructions+=4;NFSU2_TR(0x745565);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x696e6974ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x696e6974ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x696e6974ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B74556c:{NFSU2_TR(0x74556c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74556d:{NFSU2_TR(0x74556d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74556e:{NFSU2_TR(0x74556e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745608;}}
}
B745574:L745574:{c.instructions+=9;NFSU2_TR(0x745574);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1948ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B74557a:{NFSU2_TR(0x74557a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1948ull))));
__builtin_memmove((R+0),(U+0),4);
}
B745580:{NFSU2_TR(0x745580);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B745582:{NFSU2_TR(0x745582);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2aull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B745585:{NFSU2_TR(0x745585);
__builtin_memmove((R+4),(R+518),1);
}
B745588:{NFSU2_TR(0x745588);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1949ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74558e:{NFSU2_TR(0x74558e);
__builtin_memmove((R+24),(R+4),4);
}
B745590:{NFSU2_TR(0x745590);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B745592:{NFSU2_TR(0x745592);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745596;}}
}
B745594:L745594:{c.instructions+=1;NFSU2_TR(0x745594);
__builtin_memmove((R+28),(R+0),4);
}
B745596:L745596:{c.instructions+=2;NFSU2_TR(0x745596);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745597:{NFSU2_TR(0x745597);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74559cull));
TAIL_STATIC(0x7543d0u,754);
}
B74559c:L74559c:{c.instructions+=3;NFSU2_TR(0x74559c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74559f:{NFSU2_TR(0x74559f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7455a1:{NFSU2_TR(0x7455a1);
if(r1(R+518)){{goto L7455d9;}}
}
B7455a3:L7455a3:{c.instructions+=4;NFSU2_TR(0x7455a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7455a5:{NFSU2_TR(0x7455a5);
u8 U[4];
w4(U+0,u32(0x63727970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7455aa:{NFSU2_TR(0x7455aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7455ab:{NFSU2_TR(0x7455ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7455b0ull));
TAIL_STATIC(0x754310u,754);
}
B7455b0:L7455b0:{c.instructions+=3;NFSU2_TR(0x7455b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7455b3:{NFSU2_TR(0x7455b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7455b5:{NFSU2_TR(0x7455b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7455d9;}}
}
B7455b7:L7455b7:{c.instructions+=8;NFSU2_TR(0x7455b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1438ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7455bd:{NFSU2_TR(0x7455bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7455bf:{NFSU2_TR(0x7455bf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7455c0:{NFSU2_TR(0x7455c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7455c1:{NFSU2_TR(0x7455c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7455c3:{NFSU2_TR(0x7455c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7455c4:{NFSU2_TR(0x7455c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7455c5:{NFSU2_TR(0x7455c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7455caull));
TAIL_STATIC(0x754c50u,754);
}
B7455ca:L7455ca:{c.instructions+=4;NFSU2_TR(0x7455ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7455cc:{NFSU2_TR(0x7455cc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7455ce:{NFSU2_TR(0x7455ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7455cf:{NFSU2_TR(0x7455cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7455d4ull));
TAIL_STATIC(0x754410u,754);
}
B7455d4:L7455d4:{c.instructions+=2;NFSU2_TR(0x7455d4);
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
B7455d7:{NFSU2_TR(0x7455d7);
{goto L7455ee;}
}
B7455d9:L7455d9:{c.instructions+=7;NFSU2_TR(0x7455d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1438ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7455df:{NFSU2_TR(0x7455df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7455e1:{NFSU2_TR(0x7455e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7455e2:{NFSU2_TR(0x7455e2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7455e4:{NFSU2_TR(0x7455e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7455e5:{NFSU2_TR(0x7455e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7455e6:{NFSU2_TR(0x7455e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7455ebull));
TAIL_STATIC(0x754c50u,754);
}
B7455eb:L7455eb:{c.instructions+=1;NFSU2_TR(0x7455eb);
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
B7455ee:L7455ee:{c.instructions+=4;NFSU2_TR(0x7455ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7455f0:{NFSU2_TR(0x7455f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7455f1:{NFSU2_TR(0x7455f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
w4(U+4,u32(0x72646972ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7455f8:{NFSU2_TR(0x7455f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7455fdull));
TAIL_STATIC(0x754c40u,754);
}
B7455fd:L7455fd:{c.instructions+=4;NFSU2_TR(0x7455fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745600:{NFSU2_TR(0x745600);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B745603:{NFSU2_TR(0x745603);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B745605:{NFSU2_TR(0x745605);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745608:L745608:{c.instructions+=3;NFSU2_TR(0x745608);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B74560a:{NFSU2_TR(0x74560a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74560b:{NFSU2_TR(0x74560b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745610ull));
TAIL_STATIC(0x754c40u,754);
}
B745610:L745610:{c.instructions+=6;NFSU2_TR(0x745610);
__builtin_memmove((R+28),(R+0),4);
}
B745612:{NFSU2_TR(0x745612);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745615:{NFSU2_TR(0x745615);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B745618:{NFSU2_TR(0x745618);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6f66666cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74561d:{NFSU2_TR(0x74561d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745621:{NFSU2_TR(0x745621);
if(r1(R+518)){{goto L745678;}}
}
B745623:L745623:{c.instructions+=3;NFSU2_TR(0x745623);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745626:{NFSU2_TR(0x745626);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B745628:{NFSU2_TR(0x745628);
if(r1(R+518)){{goto L74563d;}}
}
B74562a:L74562a:{c.instructions+=4;NFSU2_TR(0x74562a);
__builtin_memmove((R+4),(R+28),4);
}
B74562c:{NFSU2_TR(0x74562c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B74562e:{NFSU2_TR(0x74562e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1388ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1388ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B745634:{NFSU2_TR(0x745634);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74563d;}}
}
B745636:L745636:{c.instructions+=3;NFSU2_TR(0x745636);
__builtin_memmove((R+8),(R+28),4);
}
B745638:{NFSU2_TR(0x745638);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B74563a:{NFSU2_TR(0x74563a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B74563d:L74563d:{c.instructions+=3;NFSU2_TR(0x74563d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745640:{NFSU2_TR(0x745640);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B745642:{NFSU2_TR(0x745642);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L745652;}}
}
B745644:L745644:{c.instructions+=3;NFSU2_TR(0x745644);
u8 U[4];
w4(U+0,u32(0x74696d65ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745649:{NFSU2_TR(0x745649);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74564a:{NFSU2_TR(0x74564a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74564full));
TAIL_STATIC(0x744310u,744);
}
B74564f:L74564f:{c.instructions+=1;NFSU2_TR(0x74564f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745652:L745652:{c.instructions+=3;NFSU2_TR(0x745652);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745658:{NFSU2_TR(0x745658);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74565a:{NFSU2_TR(0x74565a);
if(r1(R+518)){{goto L745678;}}
}
B74565c:L74565c:{c.instructions+=6;NFSU2_TR(0x74565c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74565f:{NFSU2_TR(0x74565f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745662:{NFSU2_TR(0x745662);
__builtin_memmove((R+4),(R+28),4);
}
B745664:{NFSU2_TR(0x745664);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B745666:{NFSU2_TR(0x745666);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B745668:{NFSU2_TR(0x745668);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L745678;}}
}
B74566a:L74566a:{c.instructions+=3;NFSU2_TR(0x74566a);
u8 U[4];
w4(U+0,u32(0x74696d65ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74566f:{NFSU2_TR(0x74566f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745670:{NFSU2_TR(0x745670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745675ull));
TAIL_STATIC(0x744310u,744);
}
B745675:L745675:{c.instructions+=1;NFSU2_TR(0x745675);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745678:L745678:{c.instructions+=4;NFSU2_TR(0x745678);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1630ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74567e:{NFSU2_TR(0x74567e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B745680:{NFSU2_TR(0x745680);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745683:{NFSU2_TR(0x745683);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74568b;}}
}
B745685:L745685:{c.instructions+=1;NFSU2_TR(0x745685);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1630ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74568b:L74568b:{c.instructions+=18;NFSU2_TR(0x74568b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1630ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745691:{NFSU2_TR(0x745691);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1634ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B745697:{NFSU2_TR(0x745697);
__builtin_memmove((R+8),(R+28),4);
}
B745699:{NFSU2_TR(0x745699);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B74569b:{NFSU2_TR(0x74569b);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+8))));
}
B74569d:{NFSU2_TR(0x74569d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B74569f:{NFSU2_TR(0x74569f);
__builtin_memmove((R+0),(R+20),4);
}
B7456a1:{NFSU2_TR(0x7456a1);
w4(R+4,u32(0x3e8ull));
}
B7456a6:{NFSU2_TR(0x7456a6);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7456a6);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7456a6);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B7456a8:{NFSU2_TR(0x7456a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x162cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7456ae:{NFSU2_TR(0x7456ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1634ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7456b4:{NFSU2_TR(0x7456b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1630ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7456ba:{NFSU2_TR(0x7456ba);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B7456bc:{NFSU2_TR(0x7456bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7456bf:{NFSU2_TR(0x7456bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7465726dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7456c4:{NFSU2_TR(0x7456c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x162cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7456ca:{NFSU2_TR(0x7456ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1634ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7456d0:{NFSU2_TR(0x7456d0);
if(r1(R+518)){TAIL_STATIC(0x7471a0u,747);}
}
B7456d6:L7456d6:{c.instructions+=2;NFSU2_TR(0x7456d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6f66666cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7456db:{NFSU2_TR(0x7456db);
if(r1(R+518)){TAIL_STATIC(0x7471a0u,747);}
}
B7456e1:L7456e1:{c.instructions+=2;NFSU2_TR(0x7456e1);
__builtin_memmove((R+24),(R+12),4);
}
B7456e3:{NFSU2_TR(0x7456e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7456e8ull));
TAIL_STATIC(0x743e40u,743);
}
B7456e8:L7456e8:{c.instructions+=9;NFSU2_TR(0x7456e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7456ec:{NFSU2_TR(0x7456ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7456ed:{NFSU2_TR(0x7456ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7456ef:{NFSU2_TR(0x7456ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7456f3:{NFSU2_TR(0x7456f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7456f4:{NFSU2_TR(0x7456f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7456f8:{NFSU2_TR(0x7456f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7456f9:{NFSU2_TR(0x7456f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7456fa:{NFSU2_TR(0x7456fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7456ffull));
TAIL_STATIC(0x754b10u,754);
}
B7456ff:L7456ff:{c.instructions+=4;NFSU2_TR(0x7456ff);
__builtin_memmove((R+20),(R+0),4);
}
B745701:{NFSU2_TR(0x745701);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B745704:{NFSU2_TR(0x745704);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B745706:{NFSU2_TR(0x745706);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x747147u,747);}
}
B74570c:L74570c:{c.instructions+=7;NFSU2_TR(0x74570c);
__builtin_memmove((R+16),(R+16),4);
}
B745710:{NFSU2_TR(0x745710);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745713:{NFSU2_TR(0x745713);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B745717:{NFSU2_TR(0x745717);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74571a:{NFSU2_TR(0x74571a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74571e:{NFSU2_TR(0x74571e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7e706e67ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B745723:{NFSU2_TR(0x745723);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7457b6;}}
}
B745729:L745729:{c.instructions+=2;NFSU2_TR(0x745729);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74572d:{NFSU2_TR(0x74572d);
if(r1(R+518)){{goto L745769;}}
}
B74572f:L74572f:{c.instructions+=6;NFSU2_TR(0x74572f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745733:{NFSU2_TR(0x745733);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745734:{NFSU2_TR(0x745734);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B745738:{NFSU2_TR(0x745738);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74573d:{NFSU2_TR(0x74573d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74573e:{NFSU2_TR(0x74573e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745743ull));
TAIL_STATIC(0x741650u,741);
}
B745743:L745743:{c.instructions+=7;NFSU2_TR(0x745743);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745746:{NFSU2_TR(0x745746);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745747:{NFSU2_TR(0x745747);
u8 U[4];
w4(U+0,u32(0x7a16b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74574c:{NFSU2_TR(0x74574c);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B745750:{NFSU2_TR(0x745750);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745755:{NFSU2_TR(0x745755);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745756:{NFSU2_TR(0x745756);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74575bull));
TAIL_STATIC(0x741690u,741);
}
B74575b:L74575b:{c.instructions+=4;NFSU2_TR(0x74575b);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74575f:{NFSU2_TR(0x74575f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B745762:{NFSU2_TR(0x745762);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745766:{NFSU2_TR(0x745766);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B745769:L745769:{c.instructions+=6;NFSU2_TR(0x745769);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74576d:{NFSU2_TR(0x74576d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74576f:{NFSU2_TR(0x74576f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745770:{NFSU2_TR(0x745770);
u8 U[4];
w4(U+0,u32(0x7d2a7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745775:{NFSU2_TR(0x745775);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745776:{NFSU2_TR(0x745776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74577bull));
TAIL_STATIC(0x7414a0u,741);
}
B74577b:L74577b:{c.instructions+=3;NFSU2_TR(0x74577b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74577e:{NFSU2_TR(0x74577e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74577f:{NFSU2_TR(0x74577f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745784ull));
TAIL_STATIC(0x742860u,742);
}
B745784:L745784:{c.instructions+=13;NFSU2_TR(0x745784);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745788:{NFSU2_TR(0x745788);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74578c:{NFSU2_TR(0x74578c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74578d:{NFSU2_TR(0x74578d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74578e:{NFSU2_TR(0x74578e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74578f:{NFSU2_TR(0x74578f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x162cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745795:{NFSU2_TR(0x745795);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B745797:{NFSU2_TR(0x745797);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745798:{NFSU2_TR(0x745798);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745799:{NFSU2_TR(0x745799);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1630ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74579f:{NFSU2_TR(0x74579f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1634ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7457a5:{NFSU2_TR(0x7457a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7457a9:{NFSU2_TR(0x7457a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7457aeull));
TAIL_STATIC(0x7549f0u,754);
}
B7457ae:L7457ae:{c.instructions+=2;NFSU2_TR(0x7457ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B7457b1:{NFSU2_TR(0x7457b1);
TAIL_STATIC(0x74710fu,747);
}
B7457b6:L7457b6:{c.instructions+=2;NFSU2_TR(0x7457b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7457bd:{NFSU2_TR(0x7457bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7457c2ull));
TAIL_STATIC(0x743be0u,743);
}
B7457c2:L7457c2:{c.instructions+=13;NFSU2_TR(0x7457c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7457c9:{NFSU2_TR(0x7457c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7457cd:{NFSU2_TR(0x7457cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7457d1:{NFSU2_TR(0x7457d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7457d5:{NFSU2_TR(0x7457d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7457d9:{NFSU2_TR(0x7457d9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7457db:{NFSU2_TR(0x7457db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7457dc:{NFSU2_TR(0x7457dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B7457e0:{NFSU2_TR(0x7457e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7457e4:{NFSU2_TR(0x7457e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7457e8:{NFSU2_TR(0x7457e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7457ec:{NFSU2_TR(0x7457ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7457f0:{NFSU2_TR(0x7457f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7457f5ull));
TAIL_STATIC(0x743d90u,743);
}
B7457f5:L7457f5:{c.instructions+=4;NFSU2_TR(0x7457f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1b4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7457fc:{NFSU2_TR(0x7457fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7457ff:{NFSU2_TR(0x7457ff);
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
B745801:{NFSU2_TR(0x745801);
if(r1(R+518)){{goto L745814;}}
}
B745803:L745803:{c.instructions+=6;NFSU2_TR(0x745803);
u8 U[8];
w4(U+0,u32(u32(u32(0x1b4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74580a:{NFSU2_TR(0x74580a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74580b:{NFSU2_TR(0x74580b);
__builtin_memmove((R+4),(R+28),4);
}
B74580d:{NFSU2_TR(0x74580d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74580e:{NFSU2_TR(0x74580e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74580f:{NFSU2_TR(0x74580f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745811ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B745811:L745811:{c.instructions+=1;NFSU2_TR(0x745811);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B745814:L745814:{c.instructions+=2;NFSU2_TR(0x745814);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x72646972ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74581b:{NFSU2_TR(0x74581b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7459f8;}}
}
B745821:L745821:{c.instructions+=4;NFSU2_TR(0x745821);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745825:{NFSU2_TR(0x745825);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B745828:{NFSU2_TR(0x745828);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74582a:{NFSU2_TR(0x74582a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745877;}}
}
B74582c:L74582c:{c.instructions+=2;NFSU2_TR(0x74582c);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B745830:{NFSU2_TR(0x745830);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7459cd;}}
}
B745836:L745836:{c.instructions+=6;NFSU2_TR(0x745836);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B745839:{NFSU2_TR(0x745839);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74583a:{NFSU2_TR(0x74583a);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74583e:{NFSU2_TR(0x74583e);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745843:{NFSU2_TR(0x745843);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745844:{NFSU2_TR(0x745844);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745849ull));
TAIL_STATIC(0x741650u,741);
}
B745849:L745849:{c.instructions+=7;NFSU2_TR(0x745849);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B74584b:{NFSU2_TR(0x74584b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74584c:{NFSU2_TR(0x74584c);
u8 U[4];
w4(U+0,u32(0x7d2a70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745851:{NFSU2_TR(0x745851);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745852:{NFSU2_TR(0x745852);
u8 U[4];
w4(U+0,u32(0x40746963ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745857:{NFSU2_TR(0x745857);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745858:{NFSU2_TR(0x745858);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74585dull));
TAIL_STATIC(0x7549f0u,754);
}
B74585d:L74585d:{c.instructions+=8;NFSU2_TR(0x74585d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B74585f:{NFSU2_TR(0x74585f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745860:{NFSU2_TR(0x745860);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B745867:{NFSU2_TR(0x745867);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745868:{NFSU2_TR(0x745868);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745869:{NFSU2_TR(0x745869);
u8 U[4];
w4(U+0,u32(0x40646972ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74586e:{NFSU2_TR(0x74586e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74586f:{NFSU2_TR(0x74586f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745874ull));
TAIL_STATIC(0x7549f0u,754);
}
B745874:L745874:{c.instructions+=1;NFSU2_TR(0x745874);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B745877:L745877:{c.instructions+=2;NFSU2_TR(0x745877);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x40746963ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74587f:{NFSU2_TR(0x74587f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745892;}}
}
B745881:L745881:{c.instructions+=6;NFSU2_TR(0x745881);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745885:{NFSU2_TR(0x745885);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B745887:{NFSU2_TR(0x745887);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745888:{NFSU2_TR(0x745888);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745889:{NFSU2_TR(0x745889);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74588a:{NFSU2_TR(0x74588a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74588full));
TAIL_STATIC(0x754430u,754);
}
B74588f:L74588f:{c.instructions+=1;NFSU2_TR(0x74588f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B745892:L745892:{c.instructions+=2;NFSU2_TR(0x745892);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x40646972ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74589a:{NFSU2_TR(0x74589a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7459c6;}}
}
B7458a0:L7458a0:{c.instructions+=4;NFSU2_TR(0x7458a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7458a2:{NFSU2_TR(0x7458a2);
u8 U[4];
w4(U+0,u32(0x6c616472ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7458a7:{NFSU2_TR(0x7458a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7458a8:{NFSU2_TR(0x7458a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7458adull));
TAIL_STATIC(0x754310u,754);
}
B7458ad:L7458ad:{c.instructions+=5;NFSU2_TR(0x7458ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7458b1:{NFSU2_TR(0x7458b1);
u8 U[4];
w4(U+0,u32(0x7d2a68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7458b6:{NFSU2_TR(0x7458b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7458b7:{NFSU2_TR(0x7458b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1484ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7458bd:{NFSU2_TR(0x7458bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7458c2ull));
TAIL_STATIC(0x7414a0u,741);
}
B7458c2:L7458c2:{c.instructions+=3;NFSU2_TR(0x7458c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7458c5:{NFSU2_TR(0x7458c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7458c7:{NFSU2_TR(0x7458c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74590d;}}
}
B7458c9:L7458c9:{c.instructions+=5;NFSU2_TR(0x7458c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7458cd:{NFSU2_TR(0x7458cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7458ce:{NFSU2_TR(0x7458ce);
u8 U[4];
w4(U+0,u32(0x7a12ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7458d3:{NFSU2_TR(0x7458d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7458d4:{NFSU2_TR(0x7458d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7458d9ull));
TAIL_STATIC(0x7414a0u,741);
}
B7458d9:L7458d9:{c.instructions+=3;NFSU2_TR(0x7458d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7458dc:{NFSU2_TR(0x7458dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7458dd:{NFSU2_TR(0x7458dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7458e2ull));
TAIL_STATIC(0x742140u,742);
}
B7458e2:L7458e2:{c.instructions+=7;NFSU2_TR(0x7458e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7458e5:{NFSU2_TR(0x7458e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7458e6:{NFSU2_TR(0x7458e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1434ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7458ec:{NFSU2_TR(0x7458ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7458f0:{NFSU2_TR(0x7458f0);
u8 U[4];
w4(U+0,u32(0x7d2a60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7458f5:{NFSU2_TR(0x7458f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7458f6:{NFSU2_TR(0x7458f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7458fbull));
TAIL_STATIC(0x7414a0u,741);
}
B7458fb:L7458fb:{c.instructions+=3;NFSU2_TR(0x7458fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7458fe:{NFSU2_TR(0x7458fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7458ff:{NFSU2_TR(0x7458ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745904ull));
TAIL_STATIC(0x7420b0u,742);
}
B745904:L745904:{c.instructions+=2;NFSU2_TR(0x745904);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745907:{NFSU2_TR(0x745907);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1430ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74590d:L74590d:{c.instructions+=5;NFSU2_TR(0x74590d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745911:{NFSU2_TR(0x745911);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745912:{NFSU2_TR(0x745912);
u8 U[4];
w4(U+0,u32(0x7d2910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745917:{NFSU2_TR(0x745917);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745918:{NFSU2_TR(0x745918);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74591dull));
TAIL_STATIC(0x7414a0u,741);
}
B74591d:L74591d:{c.instructions+=3;NFSU2_TR(0x74591d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745920:{NFSU2_TR(0x745920);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745921:{NFSU2_TR(0x745921);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745926ull));
TAIL_STATIC(0x7420b0u,742);
}
B745926:L745926:{c.instructions+=10;NFSU2_TR(0x745926);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745929:{NFSU2_TR(0x745929);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74592e:{NFSU2_TR(0x74592e);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745930:{NFSU2_TR(0x745930);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1440ull))));
__builtin_memmove((R+8),(U+0),4);
}
B745936:{NFSU2_TR(0x745936);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745937:{NFSU2_TR(0x745937);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x143cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74593d:{NFSU2_TR(0x74593d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745941:{NFSU2_TR(0x745941);
u8 U[4];
w4(U+0,u32(0x7d28fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745946:{NFSU2_TR(0x745946);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745947:{NFSU2_TR(0x745947);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74594cull));
TAIL_STATIC(0x7414a0u,741);
}
B74594c:L74594c:{c.instructions+=3;NFSU2_TR(0x74594c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74594f:{NFSU2_TR(0x74594f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745950:{NFSU2_TR(0x745950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745955ull));
TAIL_STATIC(0x742360u,742);
}
B745955:L745955:{c.instructions+=3;NFSU2_TR(0x745955);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B745957:{NFSU2_TR(0x745957);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745958:{NFSU2_TR(0x745958);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74595dull));
TAIL_STATIC(0x7543d0u,754);
}
B74595d:L74595d:{c.instructions+=4;NFSU2_TR(0x74595d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745963:{NFSU2_TR(0x745963);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B745966:{NFSU2_TR(0x745966);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B745968:{NFSU2_TR(0x745968);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x7471b7u,747);}
}
B74596e:L74596e:{c.instructions+=8;NFSU2_TR(0x74596e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745972:{NFSU2_TR(0x745972);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745977:{NFSU2_TR(0x745977);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74597c:{NFSU2_TR(0x74597c);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B745980:{NFSU2_TR(0x745980);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745981:{NFSU2_TR(0x745981);
u8 U[4];
w4(U+0,u32(0x7d2a58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745986:{NFSU2_TR(0x745986);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745987:{NFSU2_TR(0x745987);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74598cull));
TAIL_STATIC(0x7414a0u,741);
}
B74598c:L74598c:{c.instructions+=3;NFSU2_TR(0x74598c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74598f:{NFSU2_TR(0x74598f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745990:{NFSU2_TR(0x745990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745995ull));
TAIL_STATIC(0x742360u,742);
}
B745995:L745995:{c.instructions+=9;NFSU2_TR(0x745995);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B745999:{NFSU2_TR(0x745999);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74599a:{NFSU2_TR(0x74599a);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B74599e:{NFSU2_TR(0x74599e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7459a2:{NFSU2_TR(0x7459a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7459aa:{NFSU2_TR(0x7459aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x64697363ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7459b2:{NFSU2_TR(0x7459b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x646f776eull));
s4(u32(r4(U+0)),r4(U+4));
}
B7459ba:{NFSU2_TR(0x7459ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7459be:{NFSU2_TR(0x7459be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7459c3ull));
TAIL_STATIC(0x743d90u,743);
}
B7459c3:L7459c3:{c.instructions+=1;NFSU2_TR(0x7459c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B7459c6:L7459c6:{c.instructions+=2;NFSU2_TR(0x7459c6);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7459cb:{NFSU2_TR(0x7459cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7459ef;}}
}
B7459cd:L7459cd:{c.instructions+=2;NFSU2_TR(0x7459cd);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xfefefefeull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7459d5:{NFSU2_TR(0x7459d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7459ef;}}
}
B7459d7:L7459d7:{c.instructions+=4;NFSU2_TR(0x7459d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7459d9:{NFSU2_TR(0x7459d9);
u8 U[4];
w4(U+0,u32(0x63727970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7459de:{NFSU2_TR(0x7459de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7459df:{NFSU2_TR(0x7459df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7459e4ull));
TAIL_STATIC(0x754310u,754);
}
B7459e4:L7459e4:{c.instructions+=3;NFSU2_TR(0x7459e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7459e7:{NFSU2_TR(0x7459e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7459e9:{NFSU2_TR(0x7459e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x7471e4u,747);}
}
B7459ef:L7459ef:{c.instructions+=2;NFSU2_TR(0x7459ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7459f3:{NFSU2_TR(0x7459f3);
{goto L745afd;}
}
B7459f8:L7459f8:{c.instructions+=4;NFSU2_TR(0x7459f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7459fc:{NFSU2_TR(0x7459fc);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B7459ff:{NFSU2_TR(0x7459ff);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B745a01:{NFSU2_TR(0x745a01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745afd;}}
}
B745a07:L745a07:{c.instructions+=2;NFSU2_TR(0x745a07);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B745a0b:{NFSU2_TR(0x745a0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745afd;}}
}
B745a11:L745a11:{c.instructions+=4;NFSU2_TR(0x745a11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B745a13:{NFSU2_TR(0x745a13);
u8 U[4];
w4(U+0,u32(0x6c707274ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a18:{NFSU2_TR(0x745a18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a19:{NFSU2_TR(0x745a19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745a1eull));
TAIL_STATIC(0x754310u,754);
}
B745a1e:L745a1e:{c.instructions+=9;NFSU2_TR(0x745a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1484ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745a24:{NFSU2_TR(0x745a24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a25:{NFSU2_TR(0x745a25);
u8 U[4];
w4(U+0,u32(0x7a12ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a2a:{NFSU2_TR(0x745a2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B745a2e:{NFSU2_TR(0x745a2e);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a33:{NFSU2_TR(0x745a33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a34:{NFSU2_TR(0x745a34);
__builtin_memmove((R+28),(R+0),4);
}
B745a36:{NFSU2_TR(0x745a36);
u8 U[5];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B745a3b:{NFSU2_TR(0x745a3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745a40ull));
TAIL_STATIC(0x741810u,741);
}
B745a40:L745a40:{c.instructions+=6;NFSU2_TR(0x745a40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a41:{NFSU2_TR(0x745a41);
u8 U[4];
w4(U+0,u32(0x7d2a60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a46:{NFSU2_TR(0x745a46);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B745a4d:{NFSU2_TR(0x745a4d);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a52:{NFSU2_TR(0x745a52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a53:{NFSU2_TR(0x745a53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745a58ull));
TAIL_STATIC(0x741690u,741);
}
B745a58:L745a58:{c.instructions+=8;NFSU2_TR(0x745a58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B745a5a:{NFSU2_TR(0x745a5a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a5c:{NFSU2_TR(0x745a5c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B745a63:{NFSU2_TR(0x745a63);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a64:{NFSU2_TR(0x745a64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a65:{NFSU2_TR(0x745a65);
u8 U[4];
w4(U+0,u32(0x61646472ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a6a:{NFSU2_TR(0x745a6a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a6b:{NFSU2_TR(0x745a6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745a70ull));
TAIL_STATIC(0x7549f0u,754);
}
B745a70:L745a70:{c.instructions+=8;NFSU2_TR(0x745a70);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a72:{NFSU2_TR(0x745a72);
u8 U[4];
w4(U+0,u32(0x7d2a4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a77:{NFSU2_TR(0x745a77);
u8 U[4];
w4(U+0,u32(0x7d2a44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a7c:{NFSU2_TR(0x745a7c);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B745a83:{NFSU2_TR(0x745a83);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a88:{NFSU2_TR(0x745a88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a89:{NFSU2_TR(0x745a89);
u8 U[5];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B745a91:{NFSU2_TR(0x745a91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745a96ull));
TAIL_STATIC(0x741bd0u,741);
}
B745a96:L745a96:{c.instructions+=9;NFSU2_TR(0x745a96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B745a98:{NFSU2_TR(0x745a98);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
}
B745a9b:{NFSU2_TR(0x745a9b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745a9d:{NFSU2_TR(0x745a9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B745aa1:{NFSU2_TR(0x745aa1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745aa2:{NFSU2_TR(0x745aa2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745aa3:{NFSU2_TR(0x745aa3);
u8 U[4];
w4(U+0,u32(0x736b6579ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745aa8:{NFSU2_TR(0x745aa8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745aa9:{NFSU2_TR(0x745aa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745aaeull));
TAIL_STATIC(0x7549f0u,754);
}
B745aae:L745aae:{c.instructions+=8;NFSU2_TR(0x745aae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745aaf:{NFSU2_TR(0x745aaf);
u8 U[4];
w4(U+0,u32(0x7442a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745ab4:{NFSU2_TR(0x745ab4);
u8 U[4];
w4(U+0,u32(0x6e657773ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745ab9:{NFSU2_TR(0x745ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1488ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B745ac3:{NFSU2_TR(0x745ac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
w4(U+4,u32(0x736b6579ull));
s4(u32(r4(U+0)),r4(U+4));
}
B745aca:{NFSU2_TR(0x745aca);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x636f6e6eull));
s4(u32(r4(U+0)),r4(U+4));
}
B745ad2:{NFSU2_TR(0x745ad2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745ad6:{NFSU2_TR(0x745ad6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745adbull));
TAIL_STATIC(0x743b50u,743);
}
B745adb:L745adb:{c.instructions+=3;NFSU2_TR(0x745adb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B745ade:{NFSU2_TR(0x745ade);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B745ae0:{NFSU2_TR(0x745ae0);
if(r1(R+518)){{goto L745afb;}}
}
B745ae2:L745ae2:{c.instructions+=7;NFSU2_TR(0x745ae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B745ae4:{NFSU2_TR(0x745ae4);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745ae6:{NFSU2_TR(0x745ae6);
u8 U[4];
w4(U+0,u32(0x7d2a3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745aeb:{NFSU2_TR(0x745aeb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745aed:{NFSU2_TR(0x745aed);
u8 U[4];
w4(U+0,u32(0x6e657773ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745af2:{NFSU2_TR(0x745af2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745af3:{NFSU2_TR(0x745af3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745af8ull));
TAIL_STATIC(0x7549f0u,754);
}
B745af8:L745af8:{c.instructions+=1;NFSU2_TR(0x745af8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B745afb:L745afb:{c.instructions+=1;NFSU2_TR(0x745afb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B745afd:L745afd:{c.instructions+=4;NFSU2_TR(0x745afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745b00:{NFSU2_TR(0x745b00);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x736b6579ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B745b05:{NFSU2_TR(0x745b05);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745b09:{NFSU2_TR(0x745b09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745b66;}}
}
B745b0b:L745b0b:{c.instructions+=2;NFSU2_TR(0x745b0b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B745b0d:{NFSU2_TR(0x745b0d);
if(r1(R+518)){{goto L745b17;}}
}
B745b0f:L745b0f:{c.instructions+=2;NFSU2_TR(0x745b0f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73656c65ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B745b15:{NFSU2_TR(0x745b15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745b66;}}
}
B745b17:L745b17:{c.instructions+=2;NFSU2_TR(0x745b17);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B745b1b:{NFSU2_TR(0x745b1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745b66;}}
}
B745b1d:L745b1d:{c.instructions+=2;NFSU2_TR(0x745b1d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x736b6579ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B745b23:{NFSU2_TR(0x745b23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745b46;}}
}
B745b25:L745b25:{c.instructions+=7;NFSU2_TR(0x745b25);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B745b29:{NFSU2_TR(0x745b29);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745b2b:{NFSU2_TR(0x745b2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B745b2e:{NFSU2_TR(0x745b2e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745b2f:{NFSU2_TR(0x745b2f);
u8 U[4];
w4(U+0,u32(0x7d2a44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745b34:{NFSU2_TR(0x745b34);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745b35:{NFSU2_TR(0x745b35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745b3aull));
TAIL_STATIC(0x7414a0u,741);
}
B745b3a:L745b3a:{c.instructions+=3;NFSU2_TR(0x745b3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745b3d:{NFSU2_TR(0x745b3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745b3e:{NFSU2_TR(0x745b3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745b43ull));
TAIL_STATIC(0x7424f0u,742);
}
B745b43:L745b43:{c.instructions+=1;NFSU2_TR(0x745b43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B745b46:L745b46:{c.instructions+=7;NFSU2_TR(0x745b46);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745b4a:{NFSU2_TR(0x745b4a);
w4(R+4,u32(0x636f6e6eull));
}
B745b4f:{NFSU2_TR(0x745b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
w4(U+4,u32(0x69646c65ull));
s4(u32(r4(U+0)),r4(U+4));
}
B745b56:{NFSU2_TR(0x745b56);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745b5a:{NFSU2_TR(0x745b5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745b5e:{NFSU2_TR(0x745b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745b61:{NFSU2_TR(0x745b61);
TAIL_STATIC(0x7470b2u,747);
}
B745b66:L745b66:{c.instructions+=2;NFSU2_TR(0x745b66);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B745b69:{NFSU2_TR(0x745b69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745b8e;}}
}
B745b6b:L745b6b:{c.instructions+=2;NFSU2_TR(0x745b6b);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xfefefefeull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B745b73:{NFSU2_TR(0x745b73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745b8e;}}
}
B745b75:L745b75:{c.instructions+=2;NFSU2_TR(0x745b75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x636f6e6eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B745b7a:{NFSU2_TR(0x745b7a);
if(r1(R+518)){TAIL_STATIC(0x7470b2u,747);}
}
B745b80:L745b80:{c.instructions+=3;NFSU2_TR(0x745b80);
u8 U[4];
w4(U+0,u32(0x73657276ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745b85:{NFSU2_TR(0x745b85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745b86:{NFSU2_TR(0x745b86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745b8bull));
TAIL_STATIC(0x744310u,744);
}
B745b8b:L745b8b:{c.instructions+=1;NFSU2_TR(0x745b8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745b8e:L745b8e:{c.instructions+=4;NFSU2_TR(0x745b8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745b92:{NFSU2_TR(0x745b92);
w4(R+28,u32(0x61757468ull));
}
B745b97:{NFSU2_TR(0x745b97);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B745b99:{NFSU2_TR(0x745b99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745ba5;}}
}
B745b9b:L745b9b:{c.instructions+=3;NFSU2_TR(0x745b9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745b9c:{NFSU2_TR(0x745b9c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745b9d:{NFSU2_TR(0x745b9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745ba2ull));
TAIL_STATIC(0x744310u,744);
}
B745ba2:L745ba2:{c.instructions+=1;NFSU2_TR(0x745ba2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745ba5:L745ba5:{c.instructions+=2;NFSU2_TR(0x745ba5);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B745ba9:{NFSU2_TR(0x745ba9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745c03;}}
}
B745bab:L745bab:{c.instructions+=2;NFSU2_TR(0x745bab);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B745baf:{NFSU2_TR(0x745baf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745c67;}}
}
B745bb5:L745bb5:{c.instructions+=9;NFSU2_TR(0x745bb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B745bb9:{NFSU2_TR(0x745bb9);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745bbe:{NFSU2_TR(0x745bbe);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745bc0:{NFSU2_TR(0x745bc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd44ull))));
__builtin_memmove((R+4),(U+0),4);
}
B745bc6:{NFSU2_TR(0x745bc6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745bc7:{NFSU2_TR(0x745bc7);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745bcc:{NFSU2_TR(0x745bcc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745bcd:{NFSU2_TR(0x745bcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745bd0:{NFSU2_TR(0x745bd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745bd5ull));
TAIL_STATIC(0x7414a0u,741);
}
B745bd5:L745bd5:{c.instructions+=3;NFSU2_TR(0x745bd5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745bd8:{NFSU2_TR(0x745bd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745bd9:{NFSU2_TR(0x745bd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745bdeull));
TAIL_STATIC(0x742360u,742);
}
B745bde:L745bde:{c.instructions+=6;NFSU2_TR(0x745bde);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745be2:{NFSU2_TR(0x745be2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B745be5:{NFSU2_TR(0x745be5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745be6:{NFSU2_TR(0x745be6);
u8 U[4];
w4(U+0,u32(0x7a12ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745beb:{NFSU2_TR(0x745beb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745bec:{NFSU2_TR(0x745bec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745bf1ull));
TAIL_STATIC(0x7414a0u,741);
}
B745bf1:L745bf1:{c.instructions+=3;NFSU2_TR(0x745bf1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745bf4:{NFSU2_TR(0x745bf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745bf5:{NFSU2_TR(0x745bf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745bfaull));
TAIL_STATIC(0x742140u,742);
}
B745bfa:L745bfa:{c.instructions+=2;NFSU2_TR(0x745bfa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745bfd:{NFSU2_TR(0x745bfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1480ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745c03:L745c03:{c.instructions+=3;NFSU2_TR(0x745c03);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745c07:{NFSU2_TR(0x745c07);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61636374ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B745c0d:{NFSU2_TR(0x745c0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745c21;}}
}
B745c0f:L745c0f:{c.instructions+=2;NFSU2_TR(0x745c0f);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B745c13:{NFSU2_TR(0x745c13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x7470b2u,747);}
}
B745c19:L745c19:{c.instructions+=2;NFSU2_TR(0x745c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745c1c:{NFSU2_TR(0x745c1c);
TAIL_STATIC(0x7470b2u,747);
}
B745c21:L745c21:{c.instructions+=2;NFSU2_TR(0x745c21);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x736e6170ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B745c27:{NFSU2_TR(0x745c27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745c61;}}
}
B745c29:L745c29:{c.instructions+=2;NFSU2_TR(0x745c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1490ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B745c2f:{NFSU2_TR(0x745c2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x7470b2u,747);}
}
B745c35:L745c35:{c.instructions+=2;NFSU2_TR(0x745c35);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B745c39:{NFSU2_TR(0x745c39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x7470b2u,747);}
}
B745c3f:L745c3f:{c.instructions+=5;NFSU2_TR(0x745c3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745c43:{NFSU2_TR(0x745c43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745c44:{NFSU2_TR(0x745c44);
u8 U[4];
w4(U+0,u32(0x7a14f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745c49:{NFSU2_TR(0x745c49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745c4a:{NFSU2_TR(0x745c4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745c4full));
TAIL_STATIC(0x7414a0u,741);
}
B745c4f:L745c4f:{c.instructions+=3;NFSU2_TR(0x745c4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745c52:{NFSU2_TR(0x745c52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745c53:{NFSU2_TR(0x745c53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745c58ull));
TAIL_STATIC(0x7420b0u,742);
}
B745c58:L745c58:{c.instructions+=2;NFSU2_TR(0x745c58);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745c5b:{NFSU2_TR(0x745c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x148cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745c61:L745c61:{c.instructions+=2;NFSU2_TR(0x745c61);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B745c65:{NFSU2_TR(0x745c65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745c80;}}
}
B745c67:L745c67:{c.instructions+=6;NFSU2_TR(0x745c67);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B745c6b:{NFSU2_TR(0x745c6b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745c6c:{NFSU2_TR(0x745c6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x140ull))));
__builtin_memmove((R+0),(U+0),4);
}
B745c72:{NFSU2_TR(0x745c72);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745c77:{NFSU2_TR(0x745c77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745c78:{NFSU2_TR(0x745c78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745c7dull));
TAIL_STATIC(0x741650u,741);
}
B745c7d:L745c7d:{c.instructions+=1;NFSU2_TR(0x745c7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B745c80:L745c80:{c.instructions+=2;NFSU2_TR(0x745c80);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x70657273ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B745c88:{NFSU2_TR(0x745c88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745ca3;}}
}
B745c8a:L745c8a:{c.instructions+=6;NFSU2_TR(0x745c8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745c8e:{NFSU2_TR(0x745c8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745c8f:{NFSU2_TR(0x745c8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x340ull))));
__builtin_memmove((R+8),(U+0),4);
}
B745c95:{NFSU2_TR(0x745c95);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745c9a:{NFSU2_TR(0x745c9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745c9b:{NFSU2_TR(0x745c9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745ca0ull));
TAIL_STATIC(0x741650u,741);
}
B745ca0:L745ca0:{c.instructions+=1;NFSU2_TR(0x745ca0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B745ca3:L745ca3:{c.instructions+=3;NFSU2_TR(0x745ca3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745ca7:{NFSU2_TR(0x745ca7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73656c65ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B745cad:{NFSU2_TR(0x745cad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745d47;}}
}
B745cb3:L745cb3:{c.instructions+=2;NFSU2_TR(0x745cb3);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B745cb7:{NFSU2_TR(0x745cb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x7470b2u,747);}
}
B745cbd:L745cbd:{c.instructions+=5;NFSU2_TR(0x745cbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745cc1:{NFSU2_TR(0x745cc1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745cc2:{NFSU2_TR(0x745cc2);
u8 U[4];
w4(U+0,u32(0x7d2a34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745cc7:{NFSU2_TR(0x745cc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745cc8:{NFSU2_TR(0x745cc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745ccdull));
TAIL_STATIC(0x7414a0u,741);
}
B745ccd:L745ccd:{c.instructions+=3;NFSU2_TR(0x745ccd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745cd0:{NFSU2_TR(0x745cd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745cd1:{NFSU2_TR(0x745cd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745cd6ull));
TAIL_STATIC(0x7420b0u,742);
}
B745cd6:L745cd6:{c.instructions+=7;NFSU2_TR(0x745cd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745cda:{NFSU2_TR(0x745cda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745cdd:{NFSU2_TR(0x745cdd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745cde:{NFSU2_TR(0x745cde);
u8 U[4];
w4(U+0,u32(0x7d2a2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745ce3:{NFSU2_TR(0x745ce3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745ce4:{NFSU2_TR(0x745ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1488ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745cea:{NFSU2_TR(0x745cea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745cefull));
TAIL_STATIC(0x7414a0u,741);
}
B745cef:L745cef:{c.instructions+=3;NFSU2_TR(0x745cef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745cf2:{NFSU2_TR(0x745cf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745cf3:{NFSU2_TR(0x745cf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745cf8ull));
TAIL_STATIC(0x7420b0u,742);
}
B745cf8:L745cf8:{c.instructions+=7;NFSU2_TR(0x745cf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B745cfc:{NFSU2_TR(0x745cfc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745cff:{NFSU2_TR(0x745cff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745d00:{NFSU2_TR(0x745d00);
u8 U[4];
w4(U+0,u32(0x7d2a24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745d05:{NFSU2_TR(0x745d05);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745d06:{NFSU2_TR(0x745d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1494ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745d0c:{NFSU2_TR(0x745d0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745d11ull));
TAIL_STATIC(0x7414a0u,741);
}
B745d11:L745d11:{c.instructions+=3;NFSU2_TR(0x745d11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745d14:{NFSU2_TR(0x745d14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745d15:{NFSU2_TR(0x745d15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745d1aull));
TAIL_STATIC(0x7420b0u,742);
}
B745d1a:L745d1a:{c.instructions+=3;NFSU2_TR(0x745d1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745d1d:{NFSU2_TR(0x745d1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B745d1f:{NFSU2_TR(0x745d1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745d2f;}}
}
B745d21:L745d21:{c.instructions+=3;NFSU2_TR(0x745d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x192cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745d27:{NFSU2_TR(0x745d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1928ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745d2d:{NFSU2_TR(0x745d2d);
{goto L745d47;}
}
B745d2f:L745d2f:{c.instructions+=2;NFSU2_TR(0x745d2f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1928ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B745d35:{NFSU2_TR(0x745d35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745d3d;}}
}
B745d37:L745d37:{c.instructions+=1;NFSU2_TR(0x745d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x192cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745d3d:L745d3d:{c.instructions+=1;NFSU2_TR(0x745d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1928ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B745d47:L745d47:{c.instructions+=3;NFSU2_TR(0x745d47);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745d4b:{NFSU2_TR(0x745d4b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x70657273ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B745d51:{NFSU2_TR(0x745d51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745d8d;}}
}
B745d53:L745d53:{c.instructions+=2;NFSU2_TR(0x745d53);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B745d57:{NFSU2_TR(0x745d57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x7470b2u,747);}
}
B745d5d:L745d5d:{c.instructions+=8;NFSU2_TR(0x745d5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745d61:{NFSU2_TR(0x745d61);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745d66:{NFSU2_TR(0x745d66);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745d68:{NFSU2_TR(0x745d68);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B745d6e:{NFSU2_TR(0x745d6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745d6f:{NFSU2_TR(0x745d6f);
u8 U[4];
w4(U+0,u32(0x7a13e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745d74:{NFSU2_TR(0x745d74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745d75:{NFSU2_TR(0x745d75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745d7aull));
TAIL_STATIC(0x7414a0u,741);
}
B745d7a:L745d7a:{c.instructions+=3;NFSU2_TR(0x745d7a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745d7d:{NFSU2_TR(0x745d7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745d7e:{NFSU2_TR(0x745d7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745d83ull));
TAIL_STATIC(0x742360u,742);
}
B745d83:L745d83:{c.instructions+=3;NFSU2_TR(0x745d83);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B745d87:{NFSU2_TR(0x745d87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B745d8a:{NFSU2_TR(0x745d8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745d8d:L745d8d:{c.instructions+=2;NFSU2_TR(0x745d8d);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2b736573ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B745d95:{NFSU2_TR(0x745d95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745dc4;}}
}
B745d97:L745d97:{c.instructions+=9;NFSU2_TR(0x745d97);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745d9b:{NFSU2_TR(0x745d9b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745d9c:{NFSU2_TR(0x745d9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B745da0:{NFSU2_TR(0x745da0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745da4:{NFSU2_TR(0x745da4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B745dac:{NFSU2_TR(0x745dac);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x706c6179ull));
s4(u32(r4(U+0)),r4(U+4));
}
B745db4:{NFSU2_TR(0x745db4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745db8:{NFSU2_TR(0x745db8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745dbc:{NFSU2_TR(0x745dbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745dc1ull));
TAIL_STATIC(0x743d90u,743);
}
B745dc1:L745dc1:{c.instructions+=1;NFSU2_TR(0x745dc1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B745dc4:L745dc4:{c.instructions+=2;NFSU2_TR(0x745dc4);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2b6d676dull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B745dcc:{NFSU2_TR(0x745dcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745dfb;}}
}
B745dce:L745dce:{c.instructions+=9;NFSU2_TR(0x745dce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745dd2:{NFSU2_TR(0x745dd2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745dd3:{NFSU2_TR(0x745dd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B745dd7:{NFSU2_TR(0x745dd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745ddb:{NFSU2_TR(0x745ddb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B745de3:{NFSU2_TR(0x745de3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x67616d65ull));
s4(u32(r4(U+0)),r4(U+4));
}
B745deb:{NFSU2_TR(0x745deb);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745def:{NFSU2_TR(0x745def);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745df3:{NFSU2_TR(0x745df3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745df8ull));
TAIL_STATIC(0x743d90u,743);
}
B745df8:L745df8:{c.instructions+=1;NFSU2_TR(0x745df8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B745dfb:L745dfb:{c.instructions+=2;NFSU2_TR(0x745dfb);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2b6d7367ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B745e03:{NFSU2_TR(0x745e03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745e69;}}
}
B745e05:L745e05:{c.instructions+=10;NFSU2_TR(0x745e05);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745e09:{NFSU2_TR(0x745e09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745e0a:{NFSU2_TR(0x745e0a);
u8 U[4];
w4(U+0,u32(0x7a0bb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745e0f:{NFSU2_TR(0x745e0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745e10:{NFSU2_TR(0x745e10);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745e14:{NFSU2_TR(0x745e14);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B745e1c:{NFSU2_TR(0x745e1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x63686174ull));
s4(u32(r4(U+0)),r4(U+4));
}
B745e24:{NFSU2_TR(0x745e24);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745e28:{NFSU2_TR(0x745e28);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745e2c:{NFSU2_TR(0x745e2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745e31ull));
TAIL_STATIC(0x7414a0u,741);
}
B745e31:L745e31:{c.instructions+=3;NFSU2_TR(0x745e31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745e34:{NFSU2_TR(0x745e34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745e35:{NFSU2_TR(0x745e35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745e3aull));
TAIL_STATIC(0x742100u,742);
}
B745e3a:L745e3a:{c.instructions+=4;NFSU2_TR(0x745e3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745e3d:{NFSU2_TR(0x745e3d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B745e3f:{NFSU2_TR(0x745e3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745e43:{NFSU2_TR(0x745e43);
if(r1(R+518)){{goto L745e4d;}}
}
B745e45:L745e45:{c.instructions+=1;NFSU2_TR(0x745e45);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x63617374ull));
s4(u32(r4(U+0)),r4(U+4));
}
B745e4d:L745e4d:{c.instructions+=2;NFSU2_TR(0x745e4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B745e52:{NFSU2_TR(0x745e52);
if(r1(R+518)){{goto L745e5c;}}
}
B745e54:L745e54:{c.instructions+=1;NFSU2_TR(0x745e54);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x70726976ull));
s4(u32(r4(U+0)),r4(U+4));
}
B745e5c:L745e5c:{c.instructions+=3;NFSU2_TR(0x745e5c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745e5d:{NFSU2_TR(0x745e5d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B745e61:{NFSU2_TR(0x745e61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745e66ull));
TAIL_STATIC(0x743d90u,743);
}
B745e66:L745e66:{c.instructions+=1;NFSU2_TR(0x745e66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B745e69:L745e69:{c.instructions+=2;NFSU2_TR(0x745e69);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2b77686full))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B745e71:{NFSU2_TR(0x745e71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L745f7b;}}
}
B745e77:L745e77:{c.instructions+=5;NFSU2_TR(0x745e77);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B745e7b:{NFSU2_TR(0x745e7b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745e7c:{NFSU2_TR(0x745e7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B745e82:{NFSU2_TR(0x745e82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745e83:{NFSU2_TR(0x745e83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745e88ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x745250u);}goto L745250;}
}
B745e88:L745e88:{c.instructions+=9;NFSU2_TR(0x745e88);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B745e8c:{NFSU2_TR(0x745e8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745e8f:{NFSU2_TR(0x745e8f);
u8 U[4];
w4(U+0,u32(0x794e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745e94:{NFSU2_TR(0x745e94);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745e96:{NFSU2_TR(0x745e96);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1134ull))));
__builtin_memmove((R+4),(U+0),4);
}
B745e9c:{NFSU2_TR(0x745e9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745e9d:{NFSU2_TR(0x745e9d);
u8 U[4];
w4(U+0,u32(0x7a1314ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745ea2:{NFSU2_TR(0x745ea2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745ea3:{NFSU2_TR(0x745ea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745ea8ull));
TAIL_STATIC(0x7414a0u,741);
}
B745ea8:L745ea8:{c.instructions+=3;NFSU2_TR(0x745ea8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745eab:{NFSU2_TR(0x745eab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745eac:{NFSU2_TR(0x745eac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745eb1ull));
TAIL_STATIC(0x7425d0u,742);
}
B745eb1:L745eb1:{c.instructions+=7;NFSU2_TR(0x745eb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745eb5:{NFSU2_TR(0x745eb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B745eb8:{NFSU2_TR(0x745eb8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B745eba:{NFSU2_TR(0x745eba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745ebb:{NFSU2_TR(0x745ebb);
u8 U[4];
w4(U+0,u32(0x7d2a20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745ec0:{NFSU2_TR(0x745ec0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745ec1:{NFSU2_TR(0x745ec1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745ec6ull));
TAIL_STATIC(0x7414a0u,741);
}
B745ec6:L745ec6:{c.instructions+=3;NFSU2_TR(0x745ec6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745ec9:{NFSU2_TR(0x745ec9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745eca:{NFSU2_TR(0x745eca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745ecfull));
TAIL_STATIC(0x7420b0u,742);
}
B745ecf:L745ecf:{c.instructions+=7;NFSU2_TR(0x745ecf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745ed3:{NFSU2_TR(0x745ed3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745ed6:{NFSU2_TR(0x745ed6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745ed7:{NFSU2_TR(0x745ed7);
u8 U[4];
w4(U+0,u32(0x7d2a1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745edc:{NFSU2_TR(0x745edc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745edd:{NFSU2_TR(0x745edd);
__builtin_memmove((R+20),(R+0),4);
}
B745edf:{NFSU2_TR(0x745edf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745ee4ull));
TAIL_STATIC(0x7414a0u,741);
}
B745ee4:L745ee4:{c.instructions+=3;NFSU2_TR(0x745ee4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745ee7:{NFSU2_TR(0x745ee7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745ee8:{NFSU2_TR(0x745ee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745eedull));
TAIL_STATIC(0x7420b0u,742);
}
B745eed:L745eed:{c.instructions+=10;NFSU2_TR(0x745eed);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B745ef1:{NFSU2_TR(0x745ef1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745ef5:{NFSU2_TR(0x745ef5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745ef9:{NFSU2_TR(0x745ef9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745efa:{NFSU2_TR(0x745efa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B745efe:{NFSU2_TR(0x745efe);
__builtin_memmove((R+24),(R+0),4);
}
B745f00:{NFSU2_TR(0x745f00);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B745f08:{NFSU2_TR(0x745f08);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x75736572ull));
s4(u32(r4(U+0)),r4(U+4));
}
B745f10:{NFSU2_TR(0x745f10);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B745f14:{NFSU2_TR(0x745f14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745f19ull));
TAIL_STATIC(0x743d90u,743);
}
B745f19:L745f19:{c.instructions+=4;NFSU2_TR(0x745f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745f1f:{NFSU2_TR(0x745f1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B745f22:{NFSU2_TR(0x745f22);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B745f24:{NFSU2_TR(0x745f24);
if(r1(R+518)){{goto L745f7b;}}
}
B745f26:L745f26:{c.instructions+=8;NFSU2_TR(0x745f26);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745f2a:{NFSU2_TR(0x745f2a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745f2f:{NFSU2_TR(0x745f2f);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745f31:{NFSU2_TR(0x745f31);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B745f35:{NFSU2_TR(0x745f35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745f36:{NFSU2_TR(0x745f36);
u8 U[4];
w4(U+0,u32(0x7d2a18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745f3b:{NFSU2_TR(0x745f3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745f3c:{NFSU2_TR(0x745f3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745f41ull));
TAIL_STATIC(0x7414a0u,741);
}
B745f41:L745f41:{c.instructions+=3;NFSU2_TR(0x745f41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745f44:{NFSU2_TR(0x745f44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745f45:{NFSU2_TR(0x745f45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745f4aull));
TAIL_STATIC(0x742360u,742);
}
B745f4a:L745f4a:{c.instructions+=6;NFSU2_TR(0x745f4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B745f4e:{NFSU2_TR(0x745f4e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B745f51:{NFSU2_TR(0x745f51);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745f53:{NFSU2_TR(0x745f53);
u8 U[4];
w4(U+0,u32(0x7d2a14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745f58:{NFSU2_TR(0x745f58);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745f59:{NFSU2_TR(0x745f59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745f5eull));
TAIL_STATIC(0x7414a0u,741);
}
B745f5e:L745f5e:{c.instructions+=3;NFSU2_TR(0x745f5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745f61:{NFSU2_TR(0x745f61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745f62:{NFSU2_TR(0x745f62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745f67ull));
TAIL_STATIC(0x742100u,742);
}
B745f67:L745f67:{c.instructions+=7;NFSU2_TR(0x745f67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745f68:{NFSU2_TR(0x745f68);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B745f6c:{NFSU2_TR(0x745f6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745f6d:{NFSU2_TR(0x745f6d);
__builtin_memmove((R+0),(R+24),4);
}
B745f6f:{NFSU2_TR(0x745f6f);
__builtin_memmove((R+4),(R+20),4);
}
B745f71:{NFSU2_TR(0x745f71);
__builtin_memmove((R+8),(R+12),4);
}
B745f73:{NFSU2_TR(0x745f73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745f78ull));
TAIL_STATIC(0x744090u,744);
}
B745f78:L745f78:{c.instructions+=1;NFSU2_TR(0x745f78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B745f7b:L745f7b:{c.instructions+=3;NFSU2_TR(0x745f7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745f7f:{NFSU2_TR(0x745f7f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2b726f6dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B745f85:{NFSU2_TR(0x745f85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x74624cu,746);}
}
B745f8b:L745f8b:{c.instructions+=3;NFSU2_TR(0x745f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B745f91:{NFSU2_TR(0x745f91);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B745f93:{NFSU2_TR(0x745f93);
if(r1(R+518)){TAIL_STATIC(0x7470b2u,747);}
}
B745f99:L745f99:{c.instructions+=5;NFSU2_TR(0x745f99);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B745f9d:{NFSU2_TR(0x745f9d);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745f9f:{NFSU2_TR(0x745f9f);
u8 U[4];
w4(U+0,u32(0x7b3b88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745fa4:{NFSU2_TR(0x745fa4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745fa5:{NFSU2_TR(0x745fa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745faaull));
TAIL_STATIC(0x7414a0u,741);
}
B745faa:L745faa:{c.instructions+=3;NFSU2_TR(0x745faa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745fad:{NFSU2_TR(0x745fad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745fae:{NFSU2_TR(0x745fae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745fb3ull));
TAIL_STATIC(0x7420b0u,742);
}
B745fb3:L745fb3:{c.instructions+=4;NFSU2_TR(0x745fb3);
__builtin_memmove((R+20),(R+0),4);
}
B745fb5:{NFSU2_TR(0x745fb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745fb8:{NFSU2_TR(0x745fb8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B745fba:{NFSU2_TR(0x745fba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x74624cu,746);}
}
B745fc0:L745fc0:{c.instructions+=4;NFSU2_TR(0x745fc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B745fc4:{NFSU2_TR(0x745fc4);
u8 U[4];
w4(U+0,u32(0x7a15f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745fc9:{NFSU2_TR(0x745fc9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745fca:{NFSU2_TR(0x745fca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745fcfull));
TAIL_STATIC(0x7414a0u,741);
}
B745fcf:L745fcf:{c.instructions+=3;NFSU2_TR(0x745fcf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B745fd2:{NFSU2_TR(0x745fd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B745fd4:{NFSU2_TR(0x745fd4);
if(r1(R+518)){TAIL_STATIC(0x746213u,746);}
}
B745fda:L745fda:{c.instructions+=2;NFSU2_TR(0x745fda);
u8 U[4];
w4(U+0,u32(0x10cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745fdf:{NFSU2_TR(0x745fdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x745fe4ull));
TAIL_STATIC(0x5836d0u,583);
}
B745fe4:L745fe4:{c.instructions+=6;NFSU2_TR(0x745fe4);
__builtin_memmove((R+24),(R+0),4);
}
B745fe6:{NFSU2_TR(0x745fe6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B745fe9:{NFSU2_TR(0x745fe9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B745feb:{NFSU2_TR(0x745feb);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745ff0:{NFSU2_TR(0x745ff0);
w4(R+4,u32(0x43ull));
}
B745ff5:{NFSU2_TR(0x745ff5);
__builtin_memmove((R+28),(R+24),4);
}
B745ff7:L745ff7:{c.instructions+=1;NFSU2_TR(0x745ff7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L745ff9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x745ff7u);}goto L745ff7;}
}
B745ff9:L745ff9:{c.instructions+=4;NFSU2_TR(0x745ff9);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745ffb:{NFSU2_TR(0x745ffb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B745ffe:{NFSU2_TR(0x745ffe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B745fff:{NFSU2_TR(0x745fff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
TAIL_STATIC(0x746001u,746);
}
XIT:NFSU2_TR_EXIT(0x745,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
