#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_410(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_417(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5e2(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x418,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x418,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_418(u8* __restrict R,Cpu& c);
u32 page_418(Cpu& c){return body_418(c.regs.data(),c);}
__attribute__((noinline)) u32 body_418(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x418000:goto L418000;
case 0x418004:c.instructions+=25;goto B418004;
case 0x418007:c.instructions+=24;goto B418007;
case 0x418008:c.instructions+=23;goto B418008;
case 0x41800b:c.instructions+=22;goto B41800b;
case 0x41800f:c.instructions+=21;goto B41800f;
case 0x418010:c.instructions+=20;goto B418010;
case 0x418014:c.instructions+=19;goto B418014;
case 0x418016:c.instructions+=18;goto B418016;
case 0x418018:c.instructions+=17;goto B418018;
case 0x41801c:c.instructions+=16;goto B41801c;
case 0x41801e:c.instructions+=15;goto B41801e;
case 0x418022:c.instructions+=14;goto B418022;
case 0x418024:c.instructions+=13;goto B418024;
case 0x418026:c.instructions+=12;goto B418026;
case 0x41802a:c.instructions+=11;goto B41802a;
case 0x41802c:c.instructions+=10;goto B41802c;
case 0x41802e:c.instructions+=9;goto B41802e;
case 0x418032:c.instructions+=8;goto B418032;
case 0x418034:c.instructions+=7;goto B418034;
case 0x418038:c.instructions+=6;goto B418038;
case 0x41803a:c.instructions+=5;goto B41803a;
case 0x41803c:c.instructions+=4;goto B41803c;
case 0x418040:c.instructions+=3;goto B418040;
case 0x418042:c.instructions+=2;goto B418042;
case 0x418044:c.instructions+=1;goto B418044;
case 0x418049:goto L418049;
case 0x41804c:c.instructions+=2;goto B41804c;
case 0x41804e:c.instructions+=1;goto B41804e;
case 0x418050:goto L418050;
case 0x418051:c.instructions+=7;goto B418051;
case 0x418055:c.instructions+=6;goto B418055;
case 0x418056:c.instructions+=5;goto B418056;
case 0x41805a:c.instructions+=4;goto B41805a;
case 0x41805b:c.instructions+=3;goto B41805b;
case 0x41805f:c.instructions+=2;goto B41805f;
case 0x418060:c.instructions+=1;goto B418060;
case 0x418065:goto L418065;
case 0x418068:c.instructions+=2;goto B418068;
case 0x41806a:c.instructions+=1;goto B41806a;
case 0x41806c:goto L41806c;
case 0x41806e:c.instructions+=13;goto B41806e;
case 0x418070:c.instructions+=12;goto B418070;
case 0x418073:c.instructions+=11;goto B418073;
case 0x418076:c.instructions+=10;goto B418076;
case 0x418078:c.instructions+=9;goto B418078;
case 0x41807a:c.instructions+=8;goto B41807a;
case 0x41807c:c.instructions+=7;goto B41807c;
case 0x41807e:c.instructions+=6;goto B41807e;
case 0x418080:c.instructions+=5;goto B418080;
case 0x418082:c.instructions+=4;goto B418082;
case 0x418084:c.instructions+=3;goto B418084;
case 0x418086:c.instructions+=2;goto B418086;
case 0x41808c:c.instructions+=1;goto B41808c;
case 0x418091:goto L418091;
case 0x418094:c.instructions+=1;goto B418094;
case 0x418096:goto L418096;
case 0x41809b:goto L41809b;
case 0x41809f:c.instructions+=6;goto B41809f;
case 0x4180a3:c.instructions+=5;goto B4180a3;
case 0x4180a5:c.instructions+=4;goto B4180a5;
case 0x4180a9:c.instructions+=3;goto B4180a9;
case 0x4180ab:c.instructions+=2;goto B4180ab;
case 0x4180af:c.instructions+=1;goto B4180af;
case 0x4180b5:goto L4180b5;
case 0x4180b7:goto L4180b7;
case 0x4180bb:c.instructions+=3;goto B4180bb;
case 0x4180be:c.instructions+=2;goto B4180be;
case 0x4180c0:c.instructions+=1;goto B4180c0;
case 0x4180c5:goto L4180c5;
case 0x4180c9:c.instructions+=7;goto B4180c9;
case 0x4180cd:c.instructions+=6;goto B4180cd;
case 0x4180ce:c.instructions+=5;goto B4180ce;
case 0x4180d1:c.instructions+=4;goto B4180d1;
case 0x4180d3:c.instructions+=3;goto B4180d3;
case 0x4180d6:c.instructions+=2;goto B4180d6;
case 0x4180da:c.instructions+=1;goto B4180da;
case 0x4180de:goto L4180de;
case 0x4180e2:c.instructions+=6;goto B4180e2;
case 0x4180e6:c.instructions+=5;goto B4180e6;
case 0x4180e9:c.instructions+=4;goto B4180e9;
case 0x4180ea:c.instructions+=3;goto B4180ea;
case 0x4180ec:c.instructions+=2;goto B4180ec;
case 0x4180f0:c.instructions+=1;goto B4180f0;
case 0x4180f6:goto L4180f6;
case 0x4180f7:c.instructions+=6;goto B4180f7;
case 0x4180f8:c.instructions+=5;goto B4180f8;
case 0x4180fa:c.instructions+=4;goto B4180fa;
case 0x4180fb:c.instructions+=3;goto B4180fb;
case 0x4180fd:c.instructions+=2;goto B4180fd;
case 0x4180fe:c.instructions+=1;goto B4180fe;
case 0x418110:goto L418110;
case 0x418111:c.instructions+=8;goto B418111;
case 0x418116:c.instructions+=7;goto B418116;
case 0x418117:c.instructions+=6;goto B418117;
case 0x418118:c.instructions+=5;goto B418118;
case 0x418119:c.instructions+=4;goto B418119;
case 0x41811a:c.instructions+=3;goto B41811a;
case 0x41811b:c.instructions+=2;goto B41811b;
case 0x41811d:c.instructions+=1;goto B41811d;
case 0x418122:goto L418122;
case 0x418128:c.instructions+=5;goto B418128;
case 0x41812f:c.instructions+=4;goto B41812f;
case 0x418133:c.instructions+=3;goto B418133;
case 0x418136:c.instructions+=2;goto B418136;
case 0x418138:c.instructions+=1;goto B418138;
case 0x41813a:goto L41813a;
case 0x41813f:c.instructions+=2;goto B41813f;
case 0x418141:c.instructions+=1;goto B418141;
case 0x418143:goto L418143;
case 0x418149:c.instructions+=2;goto B418149;
case 0x41814b:c.instructions+=1;goto B41814b;
case 0x41814d:goto L41814d;
case 0x41814f:c.instructions+=1;goto B41814f;
case 0x418154:goto L418154;
case 0x41815a:c.instructions+=3;goto B41815a;
case 0x41815c:c.instructions+=2;goto B41815c;
case 0x41815f:c.instructions+=1;goto B41815f;
case 0x418161:goto L418161;
case 0x418167:c.instructions+=15;goto B418167;
case 0x41816e:c.instructions+=14;goto B41816e;
case 0x418175:c.instructions+=13;goto B418175;
case 0x418178:c.instructions+=12;goto B418178;
case 0x41817c:c.instructions+=11;goto B41817c;
case 0x41817f:c.instructions+=10;goto B41817f;
case 0x418186:c.instructions+=9;goto B418186;
case 0x418187:c.instructions+=8;goto B418187;
case 0x41818d:c.instructions+=7;goto B41818d;
case 0x41818f:c.instructions+=6;goto B41818f;
case 0x418193:c.instructions+=5;goto B418193;
case 0x418199:c.instructions+=4;goto B418199;
case 0x41819e:c.instructions+=3;goto B41819e;
case 0x4181a1:c.instructions+=2;goto B4181a1;
case 0x4181a2:c.instructions+=1;goto B4181a2;
case 0x4181a7:goto L4181a7;
case 0x4181ab:c.instructions+=3;goto B4181ab;
case 0x4181ad:c.instructions+=2;goto B4181ad;
case 0x4181b0:c.instructions+=1;goto B4181b0;
case 0x4181b2:goto L4181b2;
case 0x4181b5:c.instructions+=1;goto B4181b5;
case 0x4181ba:goto L4181ba;
case 0x4181bc:c.instructions+=1;goto B4181bc;
case 0x4181be:goto L4181be;
case 0x4181c1:c.instructions+=6;goto B4181c1;
case 0x4181c4:c.instructions+=5;goto B4181c4;
case 0x4181c6:c.instructions+=4;goto B4181c6;
case 0x4181ca:c.instructions+=3;goto B4181ca;
case 0x4181cb:c.instructions+=2;goto B4181cb;
case 0x4181cd:c.instructions+=1;goto B4181cd;
case 0x4181d2:goto L4181d2;
case 0x4181d4:c.instructions+=1;goto B4181d4;
case 0x4181d6:goto L4181d6;
case 0x4181d9:c.instructions+=9;goto B4181d9;
case 0x4181dc:c.instructions+=8;goto B4181dc;
case 0x4181e0:c.instructions+=7;goto B4181e0;
case 0x4181e4:c.instructions+=6;goto B4181e4;
case 0x4181e5:c.instructions+=5;goto B4181e5;
case 0x4181e6:c.instructions+=4;goto B4181e6;
case 0x4181ea:c.instructions+=3;goto B4181ea;
case 0x4181eb:c.instructions+=2;goto B4181eb;
case 0x4181ed:c.instructions+=1;goto B4181ed;
case 0x4181f2:goto L4181f2;
case 0x4181f4:goto L4181f4;
case 0x4181f7:c.instructions+=3;goto B4181f7;
case 0x4181f8:c.instructions+=2;goto B4181f8;
case 0x4181fa:c.instructions+=1;goto B4181fa;
case 0x4181ff:goto L4181ff;
case 0x418201:c.instructions+=1;goto B418201;
case 0x418203:goto L418203;
case 0x418207:c.instructions+=7;goto B418207;
case 0x41820a:c.instructions+=6;goto B41820a;
case 0x41820b:c.instructions+=5;goto B41820b;
case 0x41820f:c.instructions+=4;goto B41820f;
case 0x418210:c.instructions+=3;goto B418210;
case 0x418211:c.instructions+=2;goto B418211;
case 0x418212:c.instructions+=1;goto B418212;
case 0x418217:goto L418217;
case 0x41821a:goto L41821a;
case 0x41821c:c.instructions+=1;goto B41821c;
case 0x41821e:goto L41821e;
case 0x41821f:c.instructions+=6;goto B41821f;
case 0x418220:c.instructions+=5;goto B418220;
case 0x418221:c.instructions+=4;goto B418221;
case 0x418226:c.instructions+=3;goto B418226;
case 0x418227:c.instructions+=2;goto B418227;
case 0x418228:c.instructions+=1;goto B418228;
case 0x41822b:goto L41822b;
case 0x41822c:c.instructions+=6;goto B41822c;
case 0x41822d:c.instructions+=5;goto B41822d;
case 0x41822e:c.instructions+=4;goto B41822e;
case 0x418230:c.instructions+=3;goto B418230;
case 0x418231:c.instructions+=2;goto B418231;
case 0x418232:c.instructions+=1;goto B418232;
case 0x418240:goto L418240;
case 0x418241:c.instructions+=12;goto B418241;
case 0x418242:c.instructions+=11;goto B418242;
case 0x418246:c.instructions+=10;goto B418246;
case 0x418247:c.instructions+=9;goto B418247;
case 0x418248:c.instructions+=8;goto B418248;
case 0x41824a:c.instructions+=7;goto B41824a;
case 0x41824c:c.instructions+=6;goto B41824c;
case 0x41824f:c.instructions+=5;goto B41824f;
case 0x418251:c.instructions+=4;goto B418251;
case 0x418252:c.instructions+=3;goto B418252;
case 0x418257:c.instructions+=2;goto B418257;
case 0x41825f:c.instructions+=1;goto B41825f;
case 0x418264:goto L418264;
case 0x418266:c.instructions+=2;goto B418266;
case 0x418268:c.instructions+=1;goto B418268;
case 0x41826a:goto L41826a;
case 0x41826b:c.instructions+=2;goto B41826b;
case 0x41826d:c.instructions+=1;goto B41826d;
case 0x418272:goto L418272;
case 0x418274:c.instructions+=1;goto B418274;
case 0x418276:goto L418276;
case 0x41827c:c.instructions+=10;goto B41827c;
case 0x418280:c.instructions+=9;goto B418280;
case 0x418285:c.instructions+=8;goto B418285;
case 0x41828c:c.instructions+=7;goto B41828c;
case 0x41828d:c.instructions+=6;goto B41828d;
case 0x418293:c.instructions+=5;goto B418293;
case 0x418297:c.instructions+=4;goto B418297;
case 0x41829e:c.instructions+=3;goto B41829e;
case 0x4182a2:c.instructions+=2;goto B4182a2;
case 0x4182a5:c.instructions+=1;goto B4182a5;
case 0x4182aa:goto L4182aa;
case 0x4182ae:c.instructions+=5;goto B4182ae;
case 0x4182af:c.instructions+=4;goto B4182af;
case 0x4182b0:c.instructions+=3;goto B4182b0;
case 0x4182b1:c.instructions+=2;goto B4182b1;
case 0x4182b2:c.instructions+=1;goto B4182b2;
case 0x4182b5:goto L4182b5;
case 0x4182b9:c.instructions+=5;goto B4182b9;
case 0x4182ba:c.instructions+=4;goto B4182ba;
case 0x4182bb:c.instructions+=3;goto B4182bb;
case 0x4182bc:c.instructions+=2;goto B4182bc;
case 0x4182bd:c.instructions+=1;goto B4182bd;
case 0x4182c0:goto L4182c0;
case 0x4182c3:c.instructions+=9;goto B4182c3;
case 0x4182c9:c.instructions+=8;goto B4182c9;
case 0x4182ca:c.instructions+=7;goto B4182ca;
case 0x4182cb:c.instructions+=6;goto B4182cb;
case 0x4182cc:c.instructions+=5;goto B4182cc;
case 0x4182ce:c.instructions+=4;goto B4182ce;
case 0x4182d1:c.instructions+=3;goto B4182d1;
case 0x4182d2:c.instructions+=2;goto B4182d2;
case 0x4182d8:c.instructions+=1;goto B4182d8;
case 0x4182dd:goto L4182dd;
case 0x4182de:c.instructions+=7;goto B4182de;
case 0x4182e3:c.instructions+=6;goto B4182e3;
case 0x4182e5:c.instructions+=5;goto B4182e5;
case 0x4182e7:c.instructions+=4;goto B4182e7;
case 0x4182e9:c.instructions+=3;goto B4182e9;
case 0x4182eb:c.instructions+=2;goto B4182eb;
case 0x4182ec:c.instructions+=1;goto B4182ec;
case 0x4182ef:goto L4182ef;
case 0x4182f1:c.instructions+=5;goto B4182f1;
case 0x4182f5:c.instructions+=4;goto B4182f5;
case 0x4182fd:c.instructions+=3;goto B4182fd;
case 0x4182ff:c.instructions+=2;goto B4182ff;
case 0x418302:c.instructions+=1;goto B418302;
case 0x418304:goto L418304;
case 0x418308:c.instructions+=6;goto B418308;
case 0x41830c:c.instructions+=5;goto B41830c;
case 0x41830d:c.instructions+=4;goto B41830d;
case 0x41830e:c.instructions+=3;goto B41830e;
case 0x41830f:c.instructions+=2;goto B41830f;
case 0x418311:c.instructions+=1;goto B418311;
case 0x418316:goto L418316;
case 0x41831a:c.instructions+=11;goto B41831a;
case 0x41831e:c.instructions+=10;goto B41831e;
case 0x418322:c.instructions+=9;goto B418322;
case 0x418326:c.instructions+=8;goto B418326;
case 0x41832a:c.instructions+=7;goto B41832a;
case 0x41832e:c.instructions+=6;goto B41832e;
case 0x418332:c.instructions+=5;goto B418332;
case 0x418336:c.instructions+=4;goto B418336;
case 0x418338:c.instructions+=3;goto B418338;
case 0x41833a:c.instructions+=2;goto B41833a;
case 0x41833d:c.instructions+=1;goto B41833d;
case 0x41833f:goto L41833f;
case 0x418341:c.instructions+=1;goto B418341;
case 0x418345:goto L418345;
case 0x418349:c.instructions+=4;goto B418349;
case 0x41834b:c.instructions+=3;goto B41834b;
case 0x41834d:c.instructions+=2;goto B41834d;
case 0x418350:c.instructions+=1;goto B418350;
case 0x418352:goto L418352;
case 0x418354:c.instructions+=1;goto B418354;
case 0x418358:goto L418358;
case 0x41835c:goto L41835c;
case 0x418362:c.instructions+=8;goto B418362;
case 0x418366:c.instructions+=7;goto B418366;
case 0x41836a:c.instructions+=6;goto B41836a;
case 0x418370:c.instructions+=5;goto B418370;
case 0x418374:c.instructions+=4;goto B418374;
case 0x418378:c.instructions+=3;goto B418378;
case 0x418379:c.instructions+=2;goto B418379;
case 0x41837a:c.instructions+=1;goto B41837a;
case 0x41837f:goto L41837f;
case 0x418381:c.instructions+=1;goto B418381;
case 0x418384:goto L418384;
case 0x418386:c.instructions+=1;goto B418386;
case 0x418388:goto L418388;
case 0x41838c:c.instructions+=4;goto B41838c;
case 0x41838d:c.instructions+=3;goto B41838d;
case 0x418390:c.instructions+=2;goto B418390;
case 0x418392:c.instructions+=1;goto B418392;
case 0x418397:goto L418397;
case 0x418398:c.instructions+=3;goto B418398;
case 0x41839b:c.instructions+=2;goto B41839b;
case 0x41839e:c.instructions+=1;goto B41839e;
case 0x4183a0:goto L4183a0;
case 0x4183a4:c.instructions+=4;goto B4183a4;
case 0x4183aa:c.instructions+=3;goto B4183aa;
case 0x4183ac:c.instructions+=2;goto B4183ac;
case 0x4183af:c.instructions+=1;goto B4183af;
case 0x4183b1:goto L4183b1;
case 0x4183b5:c.instructions+=1;goto B4183b5;
case 0x4183b7:goto L4183b7;
case 0x4183bd:goto L4183bd;
case 0x4183c1:c.instructions+=9;goto B4183c1;
case 0x4183c5:c.instructions+=8;goto B4183c5;
case 0x4183c8:c.instructions+=7;goto B4183c8;
case 0x4183c9:c.instructions+=6;goto B4183c9;
case 0x4183ca:c.instructions+=5;goto B4183ca;
case 0x4183cd:c.instructions+=4;goto B4183cd;
case 0x4183cf:c.instructions+=3;goto B4183cf;
case 0x4183d2:c.instructions+=2;goto B4183d2;
case 0x4183d4:c.instructions+=1;goto B4183d4;
case 0x4183d9:goto L4183d9;
case 0x4183dd:c.instructions+=7;goto B4183dd;
case 0x4183de:c.instructions+=6;goto B4183de;
case 0x4183e1:c.instructions+=5;goto B4183e1;
case 0x4183e2:c.instructions+=4;goto B4183e2;
case 0x4183e3:c.instructions+=3;goto B4183e3;
case 0x4183e4:c.instructions+=2;goto B4183e4;
case 0x4183e7:c.instructions+=1;goto B4183e7;
case 0x4183f0:goto L4183f0;
case 0x4183f1:c.instructions+=11;goto B4183f1;
case 0x4183f5:c.instructions+=10;goto B4183f5;
case 0x4183f9:c.instructions+=9;goto B4183f9;
case 0x4183fd:c.instructions+=8;goto B4183fd;
case 0x4183fe:c.instructions+=7;goto B4183fe;
case 0x418400:c.instructions+=6;goto B418400;
case 0x418403:c.instructions+=5;goto B418403;
case 0x418405:c.instructions+=4;goto B418405;
case 0x418409:c.instructions+=3;goto B418409;
case 0x41840a:c.instructions+=2;goto B41840a;
case 0x41840f:c.instructions+=1;goto B41840f;
case 0x418411:goto L418411;
case 0x418414:c.instructions+=2;goto B418414;
case 0x418418:c.instructions+=1;goto B418418;
case 0x41841a:goto L41841a;
case 0x41841e:goto L41841e;
case 0x418420:c.instructions+=1;goto B418420;
case 0x418422:goto L418422;
case 0x418425:c.instructions+=2;goto B418425;
case 0x418429:c.instructions+=1;goto B418429;
case 0x41842b:goto L41842b;
case 0x41842f:goto L41842f;
case 0x418433:c.instructions+=9;goto B418433;
case 0x418437:c.instructions+=8;goto B418437;
case 0x41843b:c.instructions+=7;goto B41843b;
case 0x41843f:c.instructions+=6;goto B41843f;
case 0x418440:c.instructions+=5;goto B418440;
case 0x418441:c.instructions+=4;goto B418441;
case 0x418442:c.instructions+=3;goto B418442;
case 0x418443:c.instructions+=2;goto B418443;
case 0x418449:c.instructions+=1;goto B418449;
case 0x41844e:goto L41844e;
case 0x418454:c.instructions+=8;goto B418454;
case 0x418458:c.instructions+=7;goto B418458;
case 0x418459:c.instructions+=6;goto B418459;
case 0x41845d:c.instructions+=5;goto B41845d;
case 0x41845e:c.instructions+=4;goto B41845e;
case 0x41845f:c.instructions+=3;goto B41845f;
case 0x418462:c.instructions+=2;goto B418462;
case 0x418464:c.instructions+=1;goto B418464;
case 0x418469:goto L418469;
case 0x41846a:c.instructions+=3;goto B41846a;
case 0x41846b:c.instructions+=2;goto B41846b;
case 0x41846c:c.instructions+=1;goto B41846c;
case 0x418470:goto L418470;
case 0x418472:c.instructions+=11;goto B418472;
case 0x418477:c.instructions+=10;goto B418477;
case 0x41847d:c.instructions+=9;goto B41847d;
case 0x41847e:c.instructions+=8;goto B41847e;
case 0x418485:c.instructions+=7;goto B418485;
case 0x418486:c.instructions+=6;goto B418486;
case 0x41848a:c.instructions+=5;goto B41848a;
case 0x41848b:c.instructions+=4;goto B41848b;
case 0x41848d:c.instructions+=3;goto B41848d;
case 0x41848e:c.instructions+=2;goto B41848e;
case 0x418492:c.instructions+=1;goto B418492;
case 0x418497:goto L418497;
case 0x418499:c.instructions+=8;goto B418499;
case 0x41849b:c.instructions+=7;goto B41849b;
case 0x41849d:c.instructions+=6;goto B41849d;
case 0x4184a1:c.instructions+=5;goto B4184a1;
case 0x4184a7:c.instructions+=4;goto B4184a7;
case 0x4184aa:c.instructions+=3;goto B4184aa;
case 0x4184ad:c.instructions+=2;goto B4184ad;
case 0x4184b0:c.instructions+=1;goto B4184b0;
case 0x4184b5:goto L4184b5;
case 0x4184b9:c.instructions+=5;goto B4184b9;
case 0x4184bb:c.instructions+=4;goto B4184bb;
case 0x4184bc:c.instructions+=3;goto B4184bc;
case 0x4184c3:c.instructions+=2;goto B4184c3;
case 0x4184c6:c.instructions+=1;goto B4184c6;
case 0x4184d0:goto L4184d0;
case 0x4184d1:c.instructions+=2;goto B4184d1;
case 0x4184d3:c.instructions+=1;goto B4184d3;
case 0x4184d8:goto L4184d8;
case 0x4184dd:c.instructions+=1;goto B4184dd;
case 0x4184df:goto L4184df;
case 0x4184e0:c.instructions+=1;goto B4184e0;
case 0x4184e5:goto L4184e5;
case 0x4184e8:goto L4184e8;
case 0x4184ea:c.instructions+=2;goto B4184ea;
case 0x4184eb:c.instructions+=1;goto B4184eb;
case 0x4184f0:goto L4184f0;
case 0x4184f2:c.instructions+=13;goto B4184f2;
case 0x4184f7:c.instructions+=12;goto B4184f7;
case 0x4184fd:c.instructions+=11;goto B4184fd;
case 0x4184fe:c.instructions+=10;goto B4184fe;
case 0x418505:c.instructions+=9;goto B418505;
case 0x418506:c.instructions+=8;goto B418506;
case 0x418507:c.instructions+=7;goto B418507;
case 0x418509:c.instructions+=6;goto B418509;
case 0x41850d:c.instructions+=5;goto B41850d;
case 0x418513:c.instructions+=4;goto B418513;
case 0x418516:c.instructions+=3;goto B418516;
case 0x418518:c.instructions+=2;goto B418518;
case 0x418520:c.instructions+=1;goto B418520;
case 0x418522:goto L418522;
case 0x418524:c.instructions+=2;goto B418524;
case 0x418526:c.instructions+=1;goto B418526;
case 0x418528:goto L418528;
case 0x41852e:c.instructions+=2;goto B41852e;
case 0x418533:c.instructions+=1;goto B418533;
case 0x418538:goto L418538;
case 0x41853b:c.instructions+=2;goto B41853b;
case 0x418540:c.instructions+=1;goto B418540;
case 0x418545:goto L418545;
case 0x418549:c.instructions+=5;goto B418549;
case 0x41854f:c.instructions+=4;goto B41854f;
case 0x418550:c.instructions+=3;goto B418550;
case 0x418557:c.instructions+=2;goto B418557;
case 0x41855a:c.instructions+=1;goto B41855a;
case 0x418560:goto L418560;
case 0x418563:c.instructions+=1;goto B418563;
case 0x418570:goto L418570;
case 0x418573:c.instructions+=2;goto B418573;
case 0x418574:c.instructions+=1;goto B418574;
case 0x418579:goto L418579;
case 0x418580:goto L418580;
case 0x418581:c.instructions+=7;goto B418581;
case 0x418585:c.instructions+=6;goto B418585;
case 0x418586:c.instructions+=5;goto B418586;
case 0x41858b:c.instructions+=4;goto B41858b;
case 0x41858d:c.instructions+=3;goto B41858d;
case 0x41858f:c.instructions+=2;goto B41858f;
case 0x418591:c.instructions+=1;goto B418591;
case 0x418596:goto L418596;
case 0x41859c:c.instructions+=4;goto B41859c;
case 0x41859d:c.instructions+=3;goto B41859d;
case 0x41859e:c.instructions+=2;goto B41859e;
case 0x4185a3:c.instructions+=1;goto B4185a3;
case 0x4185a8:goto L4185a8;
case 0x4185a9:c.instructions+=2;goto B4185a9;
case 0x4185ac:c.instructions+=1;goto B4185ac;
case 0x4185b1:goto L4185b1;
case 0x4185b6:c.instructions+=3;goto B4185b6;
case 0x4185b8:c.instructions+=2;goto B4185b8;
case 0x4185ba:c.instructions+=1;goto B4185ba;
case 0x4185bf:goto L4185bf;
case 0x4185c0:c.instructions+=2;goto B4185c0;
case 0x4185c2:c.instructions+=1;goto B4185c2;
case 0x4185c7:goto L4185c7;
case 0x4185ca:c.instructions+=3;goto B4185ca;
case 0x4185cb:c.instructions+=2;goto B4185cb;
case 0x4185cd:c.instructions+=1;goto B4185cd;
case 0x4185d2:goto L4185d2;
case 0x4185d5:c.instructions+=3;goto B4185d5;
case 0x4185d6:c.instructions+=2;goto B4185d6;
case 0x4185d8:c.instructions+=1;goto B4185d8;
case 0x4185dd:goto L4185dd;
case 0x4185e0:c.instructions+=3;goto B4185e0;
case 0x4185e1:c.instructions+=2;goto B4185e1;
case 0x4185e3:c.instructions+=1;goto B4185e3;
case 0x4185e8:goto L4185e8;
case 0x4185ea:c.instructions+=1;goto B4185ea;
case 0x4185ef:goto L4185ef;
case 0x4185f5:c.instructions+=3;goto B4185f5;
case 0x4185f6:c.instructions+=2;goto B4185f6;
case 0x4185f8:c.instructions+=1;goto B4185f8;
case 0x4185fd:goto L4185fd;
case 0x418603:c.instructions+=3;goto B418603;
case 0x418604:c.instructions+=2;goto B418604;
case 0x418606:c.instructions+=1;goto B418606;
case 0x41860b:goto L41860b;
case 0x41860d:c.instructions+=1;goto B41860d;
case 0x418612:goto L418612;
case 0x418613:c.instructions+=2;goto B418613;
case 0x418614:c.instructions+=1;goto B418614;
case 0x418620:goto L418620;
case 0x418621:c.instructions+=15;goto B418621;
case 0x418623:c.instructions+=14;goto B418623;
case 0x418626:c.instructions+=13;goto B418626;
case 0x418629:c.instructions+=12;goto B418629;
case 0x41862a:c.instructions+=11;goto B41862a;
case 0x41862b:c.instructions+=10;goto B41862b;
case 0x41862c:c.instructions+=9;goto B41862c;
case 0x41862d:c.instructions+=8;goto B41862d;
case 0x41862f:c.instructions+=7;goto B41862f;
case 0x418635:c.instructions+=6;goto B418635;
case 0x418637:c.instructions+=5;goto B418637;
case 0x418639:c.instructions+=4;goto B418639;
case 0x41863d:c.instructions+=3;goto B41863d;
case 0x418641:c.instructions+=2;goto B418641;
case 0x418645:c.instructions+=1;goto B418645;
case 0x41864b:goto L41864b;
case 0x41864f:c.instructions+=1;goto B41864f;
case 0x418650:goto L418650;
case 0x418655:c.instructions+=4;goto B418655;
case 0x418659:c.instructions+=3;goto B418659;
case 0x41865c:c.instructions+=2;goto B41865c;
case 0x41865e:c.instructions+=1;goto B41865e;
case 0x418663:goto L418663;
case 0x418665:c.instructions+=2;goto B418665;
case 0x418667:c.instructions+=1;goto B418667;
case 0x41866c:goto L41866c;
case 0x41866e:c.instructions+=2;goto B41866e;
case 0x418670:c.instructions+=1;goto B418670;
case 0x418676:goto L418676;
case 0x418678:c.instructions+=1;goto B418678;
case 0x41867e:goto L41867e;
case 0x418681:c.instructions+=9;goto B418681;
case 0x418687:c.instructions+=8;goto B418687;
case 0x418689:c.instructions+=7;goto B418689;
case 0x41868b:c.instructions+=6;goto B41868b;
case 0x41868c:c.instructions+=5;goto B41868c;
case 0x418690:c.instructions+=4;goto B418690;
case 0x418691:c.instructions+=3;goto B418691;
case 0x418696:c.instructions+=2;goto B418696;
case 0x41869a:c.instructions+=1;goto B41869a;
case 0x41869f:goto L41869f;
case 0x4186a4:c.instructions+=2;goto B4186a4;
case 0x4186a6:c.instructions+=1;goto B4186a6;
case 0x4186a8:goto L4186a8;
case 0x4186aa:goto L4186aa;
case 0x4186b0:c.instructions+=3;goto B4186b0;
case 0x4186b2:c.instructions+=2;goto B4186b2;
case 0x4186b5:c.instructions+=1;goto B4186b5;
case 0x4186b7:goto L4186b7;
case 0x4186bd:c.instructions+=3;goto B4186bd;
case 0x4186bf:c.instructions+=2;goto B4186bf;
case 0x4186c2:c.instructions+=1;goto B4186c2;
case 0x4186c4:goto L4186c4;
case 0x4186c9:c.instructions+=1;goto B4186c9;
case 0x4186cb:goto L4186cb;
case 0x4186cd:goto L4186cd;
case 0x4186d2:goto L4186d2;
case 0x4186d5:c.instructions+=5;goto B4186d5;
case 0x4186d8:c.instructions+=4;goto B4186d8;
case 0x4186da:c.instructions+=3;goto B4186da;
case 0x4186db:c.instructions+=2;goto B4186db;
case 0x4186dd:c.instructions+=1;goto B4186dd;
case 0x4186e2:goto L4186e2;
case 0x4186e8:c.instructions+=3;goto B4186e8;
case 0x4186ea:c.instructions+=2;goto B4186ea;
case 0x4186ed:c.instructions+=1;goto B4186ed;
case 0x4186ef:goto L4186ef;
case 0x4186f2:c.instructions+=5;goto B4186f2;
case 0x4186f4:c.instructions+=4;goto B4186f4;
case 0x4186f7:c.instructions+=3;goto B4186f7;
case 0x4186f8:c.instructions+=2;goto B4186f8;
case 0x4186fa:c.instructions+=1;goto B4186fa;
case 0x4186ff:goto L4186ff;
case 0x418705:c.instructions+=3;goto B418705;
case 0x418707:c.instructions+=2;goto B418707;
case 0x41870a:c.instructions+=1;goto B41870a;
case 0x41870c:goto L41870c;
case 0x41870e:c.instructions+=1;goto B41870e;
case 0x418710:goto L418710;
case 0x418712:goto L418712;
case 0x418716:c.instructions+=2;goto B418716;
case 0x418718:c.instructions+=1;goto B418718;
case 0x41871e:goto L41871e;
case 0x418720:c.instructions+=1;goto B418720;
case 0x418726:goto L418726;
case 0x418729:c.instructions+=5;goto B418729;
case 0x41872f:c.instructions+=4;goto B41872f;
case 0x418735:c.instructions+=3;goto B418735;
case 0x418737:c.instructions+=2;goto B418737;
case 0x41873a:c.instructions+=1;goto B41873a;
case 0x418740:goto L418740;
case 0x418743:c.instructions+=4;goto B418743;
case 0x418744:c.instructions+=3;goto B418744;
case 0x418748:c.instructions+=2;goto B418748;
case 0x418749:c.instructions+=1;goto B418749;
case 0x41874e:goto L41874e;
case 0x418751:c.instructions+=5;goto B418751;
case 0x418753:c.instructions+=4;goto B418753;
case 0x418757:c.instructions+=3;goto B418757;
case 0x418758:c.instructions+=2;goto B418758;
case 0x41875a:c.instructions+=1;goto B41875a;
case 0x41875f:goto L41875f;
case 0x418763:c.instructions+=10;goto B418763;
case 0x418766:c.instructions+=9;goto B418766;
case 0x418768:c.instructions+=8;goto B418768;
case 0x41876c:c.instructions+=7;goto B41876c;
case 0x418770:c.instructions+=6;goto B418770;
case 0x418772:c.instructions+=5;goto B418772;
case 0x418773:c.instructions+=4;goto B418773;
case 0x418775:c.instructions+=3;goto B418775;
case 0x418777:c.instructions+=2;goto B418777;
case 0x41877b:c.instructions+=1;goto B41877b;
case 0x418780:goto L418780;
case 0x418784:c.instructions+=8;goto B418784;
case 0x418787:c.instructions+=7;goto B418787;
case 0x41878b:c.instructions+=6;goto B41878b;
case 0x41878d:c.instructions+=5;goto B41878d;
case 0x41878f:c.instructions+=4;goto B41878f;
case 0x418793:c.instructions+=3;goto B418793;
case 0x418795:c.instructions+=2;goto B418795;
case 0x418798:c.instructions+=1;goto B418798;
case 0x41879a:goto L41879a;
case 0x41879e:c.instructions+=2;goto B41879e;
case 0x4187a2:c.instructions+=1;goto B4187a2;
case 0x4187a4:goto L4187a4;
case 0x4187a6:goto L4187a6;
case 0x4187aa:c.instructions+=4;goto B4187aa;
case 0x4187ae:c.instructions+=3;goto B4187ae;
case 0x4187b0:c.instructions+=2;goto B4187b0;
case 0x4187b3:c.instructions+=1;goto B4187b3;
case 0x4187b5:goto L4187b5;
case 0x4187b9:c.instructions+=2;goto B4187b9;
case 0x4187bd:c.instructions+=1;goto B4187bd;
case 0x4187c1:goto L4187c1;
case 0x4187c5:c.instructions+=8;goto B4187c5;
case 0x4187c9:c.instructions+=7;goto B4187c9;
case 0x4187cf:c.instructions+=6;goto B4187cf;
case 0x4187d0:c.instructions+=5;goto B4187d0;
case 0x4187d3:c.instructions+=4;goto B4187d3;
case 0x4187d5:c.instructions+=3;goto B4187d5;
case 0x4187d9:c.instructions+=2;goto B4187d9;
case 0x4187dd:c.instructions+=1;goto B4187dd;
case 0x4187e3:goto L4187e3;
case 0x4187e7:c.instructions+=2;goto B4187e7;
case 0x4187e9:c.instructions+=1;goto B4187e9;
case 0x4187ef:goto L4187ef;
case 0x4187f2:c.instructions+=2;goto B4187f2;
case 0x4187f4:c.instructions+=1;goto B4187f4;
case 0x4187f6:goto L4187f6;
case 0x4187f9:c.instructions+=4;goto B4187f9;
case 0x4187ff:c.instructions+=3;goto B4187ff;
case 0x418806:c.instructions+=2;goto B418806;
case 0x418808:c.instructions+=1;goto B418808;
case 0x41880a:goto L41880a;
case 0x41880e:c.instructions+=1;goto B41880e;
case 0x418810:goto L418810;
case 0x418813:goto L418813;
case 0x418816:c.instructions+=3;goto B418816;
case 0x41881c:c.instructions+=2;goto B41881c;
case 0x41881e:c.instructions+=1;goto B41881e;
case 0x418824:goto L418824;
case 0x418829:goto L418829;
case 0x41882c:c.instructions+=7;goto B41882c;
case 0x41882e:c.instructions+=6;goto B41882e;
case 0x418830:c.instructions+=5;goto B418830;
case 0x418833:c.instructions+=4;goto B418833;
case 0x418838:c.instructions+=3;goto B418838;
case 0x418839:c.instructions+=2;goto B418839;
case 0x41883b:c.instructions+=1;goto B41883b;
case 0x418840:goto L418840;
case 0x418842:c.instructions+=2;goto B418842;
case 0x418844:c.instructions+=1;goto B418844;
case 0x418846:goto L418846;
case 0x418849:c.instructions+=4;goto B418849;
case 0x41884c:c.instructions+=3;goto B41884c;
case 0x41884d:c.instructions+=2;goto B41884d;
case 0x41884f:c.instructions+=1;goto B41884f;
case 0x418854:goto L418854;
case 0x41885a:c.instructions+=3;goto B41885a;
case 0x41885c:c.instructions+=2;goto B41885c;
case 0x41885f:c.instructions+=1;goto B41885f;
case 0x418861:goto L418861;
case 0x418865:c.instructions+=10;goto B418865;
case 0x418868:c.instructions+=9;goto B418868;
case 0x41886c:c.instructions+=8;goto B41886c;
case 0x418870:c.instructions+=7;goto B418870;
case 0x418876:c.instructions+=6;goto B418876;
case 0x418879:c.instructions+=5;goto B418879;
case 0x41887b:c.instructions+=4;goto B41887b;
case 0x418881:c.instructions+=3;goto B418881;
case 0x418883:c.instructions+=2;goto B418883;
case 0x418886:c.instructions+=1;goto B418886;
case 0x418888:goto L418888;
case 0x41888b:c.instructions+=3;goto B41888b;
case 0x41888c:c.instructions+=2;goto B41888c;
case 0x41888e:c.instructions+=1;goto B41888e;
case 0x418891:goto L418891;
case 0x418894:c.instructions+=1;goto B418894;
case 0x418899:goto L418899;
case 0x41889c:c.instructions+=1;goto B41889c;
case 0x4188a1:goto L4188a1;
case 0x4188a4:c.instructions+=3;goto B4188a4;
case 0x4188a7:c.instructions+=2;goto B4188a7;
case 0x4188a8:c.instructions+=1;goto B4188a8;
case 0x4188aa:goto L4188aa;
case 0x4188ab:c.instructions+=6;goto B4188ab;
case 0x4188ac:c.instructions+=5;goto B4188ac;
case 0x4188ad:c.instructions+=4;goto B4188ad;
case 0x4188ae:c.instructions+=3;goto B4188ae;
case 0x4188b0:c.instructions+=2;goto B4188b0;
case 0x4188b1:c.instructions+=1;goto B4188b1;
case 0x4188c0:goto L4188c0;
case 0x4188c3:c.instructions+=6;goto B4188c3;
case 0x4188c4:c.instructions+=5;goto B4188c4;
case 0x4188c7:c.instructions+=4;goto B4188c7;
case 0x4188ca:c.instructions+=3;goto B4188ca;
case 0x4188cc:c.instructions+=2;goto B4188cc;
case 0x4188cf:c.instructions+=1;goto B4188cf;
case 0x4188d1:goto L4188d1;
case 0x4188d6:c.instructions+=1;goto B4188d6;
case 0x4188d8:goto L4188d8;
case 0x4188db:c.instructions+=1;goto B4188db;
case 0x4188dd:goto L4188dd;
case 0x4188e2:goto L4188e2;
case 0x4188e3:c.instructions+=10;goto B4188e3;
case 0x4188e5:c.instructions+=9;goto B4188e5;
case 0x4188e6:c.instructions+=8;goto B4188e6;
case 0x4188ec:c.instructions+=7;goto B4188ec;
case 0x4188ed:c.instructions+=6;goto B4188ed;
case 0x4188f3:c.instructions+=5;goto B4188f3;
case 0x4188f4:c.instructions+=4;goto B4188f4;
case 0x4188f7:c.instructions+=3;goto B4188f7;
case 0x4188f8:c.instructions+=2;goto B4188f8;
case 0x4188fd:c.instructions+=1;goto B4188fd;
case 0x418902:goto L418902;
case 0x418903:c.instructions+=1;goto B418903;
case 0x418910:goto L418910;
case 0x418912:c.instructions+=6;goto B418912;
case 0x418913:c.instructions+=5;goto B418913;
case 0x418914:c.instructions+=4;goto B418914;
case 0x418918:c.instructions+=3;goto B418918;
case 0x418919:c.instructions+=2;goto B418919;
case 0x41891b:c.instructions+=1;goto B41891b;
case 0x41891e:goto L41891e;
case 0x418920:c.instructions+=1;goto B418920;
case 0x418922:goto L418922;
case 0x418923:c.instructions+=3;goto B418923;
case 0x418925:c.instructions+=2;goto B418925;
case 0x418926:c.instructions+=1;goto B418926;
case 0x418929:goto L418929;
case 0x41892c:c.instructions+=5;goto B41892c;
case 0x41892e:c.instructions+=4;goto B41892e;
case 0x418930:c.instructions+=3;goto B418930;
case 0x418933:c.instructions+=2;goto B418933;
case 0x418936:c.instructions+=1;goto B418936;
case 0x418938:goto L418938;
case 0x41893b:c.instructions+=1;goto B41893b;
case 0x41893d:goto L41893d;
case 0x41893e:c.instructions+=3;goto B41893e;
case 0x418940:c.instructions+=2;goto B418940;
case 0x418941:c.instructions+=1;goto B418941;
case 0x418944:goto L418944;
case 0x418946:c.instructions+=2;goto B418946;
case 0x418948:c.instructions+=1;goto B418948;
case 0x41894a:goto L41894a;
case 0x41894c:c.instructions+=2;goto B41894c;
case 0x41894e:c.instructions+=1;goto B41894e;
case 0x418950:goto L418950;
case 0x418952:goto L418952;
case 0x418953:c.instructions+=2;goto B418953;
case 0x418954:c.instructions+=1;goto B418954;
case 0x418960:goto L418960;
case 0x418961:c.instructions+=8;goto B418961;
case 0x418962:c.instructions+=7;goto B418962;
case 0x418966:c.instructions+=6;goto B418966;
case 0x418969:c.instructions+=5;goto B418969;
case 0x41896b:c.instructions+=4;goto B41896b;
case 0x41896e:c.instructions+=3;goto B41896e;
case 0x418971:c.instructions+=2;goto B418971;
case 0x418972:c.instructions+=1;goto B418972;
case 0x418974:goto L418974;
case 0x418975:c.instructions+=4;goto B418975;
case 0x418976:c.instructions+=3;goto B418976;
case 0x418978:c.instructions+=2;goto B418978;
case 0x418979:c.instructions+=1;goto B418979;
case 0x41897c:goto L41897c;
case 0x41897f:c.instructions+=1;goto B41897f;
case 0x418981:goto L418981;
case 0x418984:c.instructions+=2;goto B418984;
case 0x418987:c.instructions+=1;goto B418987;
case 0x418989:goto L418989;
case 0x41898c:c.instructions+=1;goto B41898c;
case 0x41898e:goto L41898e;
case 0x418995:c.instructions+=3;goto B418995;
case 0x418997:c.instructions+=2;goto B418997;
case 0x418999:c.instructions+=1;goto B418999;
case 0x41899b:goto L41899b;
case 0x4189a1:c.instructions+=3;goto B4189a1;
case 0x4189a4:c.instructions+=2;goto B4189a4;
case 0x4189aa:c.instructions+=1;goto B4189aa;
case 0x4189b0:goto L4189b0;
case 0x4189b2:c.instructions+=4;goto B4189b2;
case 0x4189b5:c.instructions+=3;goto B4189b5;
case 0x4189bb:c.instructions+=2;goto B4189bb;
case 0x4189be:c.instructions+=1;goto B4189be;
case 0x4189c0:goto L4189c0;
case 0x4189c1:c.instructions+=3;goto B4189c1;
case 0x4189c4:c.instructions+=2;goto B4189c4;
case 0x4189c6:c.instructions+=1;goto B4189c6;
case 0x4189c8:goto L4189c8;
case 0x4189c9:c.instructions+=4;goto B4189c9;
case 0x4189ca:c.instructions+=3;goto B4189ca;
case 0x4189cc:c.instructions+=2;goto B4189cc;
case 0x4189cd:c.instructions+=1;goto B4189cd;
case 0x4189d0:goto L4189d0;
case 0x4189d2:c.instructions+=7;goto B4189d2;
case 0x4189da:c.instructions+=6;goto B4189da;
case 0x4189db:c.instructions+=5;goto B4189db;
case 0x4189dc:c.instructions+=4;goto B4189dc;
case 0x4189dd:c.instructions+=3;goto B4189dd;
case 0x4189e2:c.instructions+=2;goto B4189e2;
case 0x4189e5:c.instructions+=1;goto B4189e5;
case 0x4189f0:goto L4189f0;
case 0x4189f1:c.instructions+=6;goto B4189f1;
case 0x4189f3:c.instructions+=5;goto B4189f3;
case 0x4189f4:c.instructions+=4;goto B4189f4;
case 0x4189f6:c.instructions+=3;goto B4189f6;
case 0x4189fc:c.instructions+=2;goto B4189fc;
case 0x418a01:c.instructions+=1;goto B418a01;
case 0x418a03:goto L418a03;
case 0x418a05:goto L418a05;
case 0x418a0b:c.instructions+=4;goto B418a0b;
case 0x418a0f:c.instructions+=3;goto B418a0f;
case 0x418a11:c.instructions+=2;goto B418a11;
case 0x418a17:c.instructions+=1;goto B418a17;
case 0x418a1c:goto L418a1c;
case 0x418a1d:c.instructions+=3;goto B418a1d;
case 0x418a1f:c.instructions+=2;goto B418a1f;
case 0x418a20:c.instructions+=1;goto B418a20;
case 0x418a30:goto L418a30;
case 0x418a31:c.instructions+=2;goto B418a31;
case 0x418a33:c.instructions+=1;goto B418a33;
case 0x418a38:goto L418a38;
case 0x418a3d:c.instructions+=1;goto B418a3d;
case 0x418a3f:goto L418a3f;
case 0x418a40:c.instructions+=1;goto B418a40;
case 0x418a45:goto L418a45;
case 0x418a48:goto L418a48;
case 0x418a4a:c.instructions+=2;goto B418a4a;
case 0x418a4b:c.instructions+=1;goto B418a4b;
case 0x418a50:goto L418a50;
case 0x418a51:c.instructions+=3;goto B418a51;
case 0x418a53:c.instructions+=2;goto B418a53;
case 0x418a57:c.instructions+=1;goto B418a57;
case 0x418a59:goto L418a59;
case 0x418a5a:c.instructions+=4;goto B418a5a;
case 0x418a5e:c.instructions+=3;goto B418a5e;
case 0x418a60:c.instructions+=2;goto B418a60;
case 0x418a61:c.instructions+=1;goto B418a61;
case 0x418a63:goto L418a63;
case 0x418a6a:c.instructions+=1;goto B418a6a;
case 0x418a6c:goto L418a6c;
case 0x418a6e:goto L418a6e;
case 0x418a72:c.instructions+=8;goto B418a72;
case 0x418a76:c.instructions+=7;goto B418a76;
case 0x418a78:c.instructions+=6;goto B418a78;
case 0x418a7b:c.instructions+=5;goto B418a7b;
case 0x418a7c:c.instructions+=4;goto B418a7c;
case 0x418a83:c.instructions+=3;goto B418a83;
case 0x418a84:c.instructions+=2;goto B418a84;
case 0x418a86:c.instructions+=1;goto B418a86;
case 0x418a8b:goto L418a8b;
case 0x418a8f:c.instructions+=23;goto B418a8f;
case 0x418a93:c.instructions+=22;goto B418a93;
case 0x418a96:c.instructions+=21;goto B418a96;
case 0x418a9a:c.instructions+=20;goto B418a9a;
case 0x418a9d:c.instructions+=19;goto B418a9d;
case 0x418aa1:c.instructions+=18;goto B418aa1;
case 0x418aa4:c.instructions+=17;goto B418aa4;
case 0x418aa8:c.instructions+=16;goto B418aa8;
case 0x418aac:c.instructions+=15;goto B418aac;
case 0x418aae:c.instructions+=14;goto B418aae;
case 0x418ab1:c.instructions+=13;goto B418ab1;
case 0x418ab5:c.instructions+=12;goto B418ab5;
case 0x418ab7:c.instructions+=11;goto B418ab7;
case 0x418aba:c.instructions+=10;goto B418aba;
case 0x418abc:c.instructions+=9;goto B418abc;
case 0x418abf:c.instructions+=8;goto B418abf;
case 0x418ac2:c.instructions+=7;goto B418ac2;
case 0x418ac5:c.instructions+=6;goto B418ac5;
case 0x418ac8:c.instructions+=5;goto B418ac8;
case 0x418acb:c.instructions+=4;goto B418acb;
case 0x418ace:c.instructions+=3;goto B418ace;
case 0x418acf:c.instructions+=2;goto B418acf;
case 0x418ad1:c.instructions+=1;goto B418ad1;
case 0x418ad6:goto L418ad6;
case 0x418ad7:c.instructions+=1;goto B418ad7;
case 0x418ad8:goto L418ad8;
case 0x418ad9:c.instructions+=1;goto B418ad9;
case 0x418ae0:goto L418ae0;
case 0x418ae3:c.instructions+=22;goto B418ae3;
case 0x418ae6:c.instructions+=21;goto B418ae6;
case 0x418ae7:c.instructions+=20;goto B418ae7;
case 0x418ae8:c.instructions+=19;goto B418ae8;
case 0x418aea:c.instructions+=18;goto B418aea;
case 0x418af0:c.instructions+=17;goto B418af0;
case 0x418af6:c.instructions+=16;goto B418af6;
case 0x418afd:c.instructions+=15;goto B418afd;
case 0x418b07:c.instructions+=14;goto B418b07;
case 0x418b0c:c.instructions+=13;goto B418b0c;
case 0x418b12:c.instructions+=12;goto B418b12;
case 0x418b18:c.instructions+=11;goto B418b18;
case 0x418b1e:c.instructions+=10;goto B418b1e;
case 0x418b24:c.instructions+=9;goto B418b24;
case 0x418b2b:c.instructions+=8;goto B418b2b;
case 0x418b2d:c.instructions+=7;goto B418b2d;
case 0x418b2f:c.instructions+=6;goto B418b2f;
case 0x418b32:c.instructions+=5;goto B418b32;
case 0x418b33:c.instructions+=4;goto B418b33;
case 0x418b35:c.instructions+=3;goto B418b35;
case 0x418b38:c.instructions+=2;goto B418b38;
case 0x418b3c:c.instructions+=1;goto B418b3c;
case 0x418b42:goto L418b42;
case 0x418b46:c.instructions+=4;goto B418b46;
case 0x418b47:c.instructions+=3;goto B418b47;
case 0x418b4b:c.instructions+=2;goto B418b4b;
case 0x418b4c:c.instructions+=1;goto B418b4c;
case 0x418b50:goto L418b50;
case 0x418b54:c.instructions+=5;goto B418b54;
case 0x418b57:c.instructions+=4;goto B418b57;
case 0x418b5b:c.instructions+=3;goto B418b5b;
case 0x418b5f:c.instructions+=2;goto B418b5f;
case 0x418b62:c.instructions+=1;goto B418b62;
case 0x418b64:goto L418b64;
case 0x418b68:c.instructions+=2;goto B418b68;
case 0x418b6c:c.instructions+=1;goto B418b6c;
case 0x418b6e:goto L418b6e;
case 0x418b70:c.instructions+=1;goto B418b70;
case 0x418b72:goto L418b72;
case 0x418b79:c.instructions+=4;goto B418b79;
case 0x418b7c:c.instructions+=3;goto B418b7c;
case 0x418b7f:c.instructions+=2;goto B418b7f;
case 0x418b86:c.instructions+=1;goto B418b86;
case 0x418b88:goto L418b88;
case 0x418b8b:c.instructions+=4;goto B418b8b;
case 0x418b8d:c.instructions+=3;goto B418b8d;
case 0x418b90:c.instructions+=2;goto B418b90;
case 0x418b97:c.instructions+=1;goto B418b97;
case 0x418b99:goto L418b99;
case 0x418b9b:goto L418b9b;
case 0x418b9f:c.instructions+=1;goto B418b9f;
case 0x418ba1:goto L418ba1;
case 0x418ba5:c.instructions+=4;goto B418ba5;
case 0x418ba7:c.instructions+=3;goto B418ba7;
case 0x418bab:c.instructions+=2;goto B418bab;
case 0x418bad:c.instructions+=1;goto B418bad;
case 0x418baf:goto L418baf;
case 0x418bb3:c.instructions+=4;goto B418bb3;
case 0x418bb4:c.instructions+=3;goto B418bb4;
case 0x418bb5:c.instructions+=2;goto B418bb5;
case 0x418bb7:c.instructions+=1;goto B418bb7;
case 0x418bbc:goto L418bbc;
case 0x418bbe:c.instructions+=1;goto B418bbe;
case 0x418bc3:goto L418bc3;
case 0x418bc5:c.instructions+=1;goto B418bc5;
case 0x418bc7:goto L418bc7;
case 0x418bce:c.instructions+=1;goto B418bce;
case 0x418bd0:goto L418bd0;
case 0x418bd6:goto L418bd6;
case 0x418bd8:c.instructions+=2;goto B418bd8;
case 0x418bda:c.instructions+=1;goto B418bda;
case 0x418bdf:goto L418bdf;
case 0x418be1:c.instructions+=1;goto B418be1;
case 0x418be3:goto L418be3;
case 0x418be4:c.instructions+=2;goto B418be4;
case 0x418be6:c.instructions+=1;goto B418be6;
case 0x418beb:goto L418beb;
case 0x418bee:c.instructions+=3;goto B418bee;
case 0x418bf1:c.instructions+=2;goto B418bf1;
case 0x418bf4:c.instructions+=1;goto B418bf4;
case 0x418bf6:goto L418bf6;
case 0x418bfd:c.instructions+=1;goto B418bfd;
case 0x418bff:goto L418bff;
case 0x418c05:goto L418c05;
case 0x418c08:c.instructions+=3;goto B418c08;
case 0x418c0b:c.instructions+=2;goto B418c0b;
case 0x418c0e:c.instructions+=1;goto B418c0e;
case 0x418c10:goto L418c10;
case 0x418c16:c.instructions+=2;goto B418c16;
case 0x418c18:c.instructions+=1;goto B418c18;
case 0x418c1a:goto L418c1a;
case 0x418c21:goto L418c21;
case 0x418c23:c.instructions+=2;goto B418c23;
case 0x418c24:c.instructions+=1;goto B418c24;
case 0x418c29:goto L418c29;
case 0x418c2b:c.instructions+=1;goto B418c2b;
case 0x418c2d:goto L418c2d;
case 0x418c31:c.instructions+=6;goto B418c31;
case 0x418c34:c.instructions+=5;goto B418c34;
case 0x418c35:c.instructions+=4;goto B418c35;
case 0x418c38:c.instructions+=3;goto B418c38;
case 0x418c3a:c.instructions+=2;goto B418c3a;
case 0x418c3e:c.instructions+=1;goto B418c3e;
case 0x418c44:goto L418c44;
case 0x418c45:c.instructions+=1;goto B418c45;
case 0x418c46:goto L418c46;
case 0x418c47:c.instructions+=3;goto B418c47;
case 0x418c48:c.instructions+=2;goto B418c48;
case 0x418c4b:c.instructions+=1;goto B418c4b;
case 0x418c50:goto L418c50;
case 0x418c51:c.instructions+=10;goto B418c51;
case 0x418c53:c.instructions+=9;goto B418c53;
case 0x418c56:c.instructions+=8;goto B418c56;
case 0x418c59:c.instructions+=7;goto B418c59;
case 0x418c5a:c.instructions+=6;goto B418c5a;
case 0x418c5b:c.instructions+=5;goto B418c5b;
case 0x418c5d:c.instructions+=4;goto B418c5d;
case 0x418c5e:c.instructions+=3;goto B418c5e;
case 0x418c61:c.instructions+=2;goto B418c61;
case 0x418c63:c.instructions+=1;goto B418c63;
case 0x418c69:goto L418c69;
case 0x418c6c:c.instructions+=6;goto B418c6c;
case 0x418c70:c.instructions+=5;goto B418c70;
case 0x418c74:c.instructions+=4;goto B418c74;
case 0x418c78:c.instructions+=3;goto B418c78;
case 0x418c7d:c.instructions+=2;goto B418c7d;
case 0x418c81:c.instructions+=1;goto B418c81;
case 0x418c83:goto L418c83;
case 0x418c87:c.instructions+=2;goto B418c87;
case 0x418c8b:c.instructions+=1;goto B418c8b;
case 0x418c8d:goto L418c8d;
case 0x418c90:c.instructions+=2;goto B418c90;
case 0x418c92:c.instructions+=1;goto B418c92;
case 0x418c94:goto L418c94;
case 0x418c9b:c.instructions+=4;goto B418c9b;
case 0x418c9e:c.instructions+=3;goto B418c9e;
case 0x418ca1:c.instructions+=2;goto B418ca1;
case 0x418ca8:c.instructions+=1;goto B418ca8;
case 0x418caa:goto L418caa;
case 0x418cad:c.instructions+=4;goto B418cad;
case 0x418caf:c.instructions+=3;goto B418caf;
case 0x418cb2:c.instructions+=2;goto B418cb2;
case 0x418cb9:c.instructions+=1;goto B418cb9;
case 0x418cbb:goto L418cbb;
case 0x418cbd:goto L418cbd;
case 0x418cc3:c.instructions+=1;goto B418cc3;
case 0x418cc9:goto L418cc9;
case 0x418ccc:c.instructions+=3;goto B418ccc;
case 0x418cd1:c.instructions+=2;goto B418cd1;
case 0x418cd6:c.instructions+=1;goto B418cd6;
case 0x418cdc:goto L418cdc;
case 0x418ce0:c.instructions+=2;goto B418ce0;
case 0x418ce2:c.instructions+=1;goto B418ce2;
case 0x418ce8:goto L418ce8;
case 0x418ceb:c.instructions+=2;goto B418ceb;
case 0x418cef:c.instructions+=1;goto B418cef;
case 0x418cf4:goto L418cf4;
case 0x418cf7:c.instructions+=14;goto B418cf7;
case 0x418cf9:c.instructions+=13;goto B418cf9;
case 0x418cfb:c.instructions+=12;goto B418cfb;
case 0x418cfe:c.instructions+=11;goto B418cfe;
case 0x418d02:c.instructions+=10;goto B418d02;
case 0x418d03:c.instructions+=9;goto B418d03;
case 0x418d05:c.instructions+=8;goto B418d05;
case 0x418d07:c.instructions+=7;goto B418d07;
case 0x418d08:c.instructions+=6;goto B418d08;
case 0x418d0a:c.instructions+=5;goto B418d0a;
case 0x418d0b:c.instructions+=4;goto B418d0b;
case 0x418d0e:c.instructions+=3;goto B418d0e;
case 0x418d0f:c.instructions+=2;goto B418d0f;
case 0x418d11:c.instructions+=1;goto B418d11;
case 0x418d16:goto L418d16;
case 0x418d1a:c.instructions+=11;goto B418d1a;
case 0x418d1e:c.instructions+=10;goto B418d1e;
case 0x418d1f:c.instructions+=9;goto B418d1f;
case 0x418d23:c.instructions+=8;goto B418d23;
case 0x418d27:c.instructions+=7;goto B418d27;
case 0x418d2a:c.instructions+=6;goto B418d2a;
case 0x418d2c:c.instructions+=5;goto B418d2c;
case 0x418d2d:c.instructions+=4;goto B418d2d;
case 0x418d31:c.instructions+=3;goto B418d31;
case 0x418d32:c.instructions+=2;goto B418d32;
case 0x418d34:c.instructions+=1;goto B418d34;
case 0x418d39:goto L418d39;
case 0x418d3c:c.instructions+=5;goto B418d3c;
case 0x418d40:c.instructions+=4;goto B418d40;
case 0x418d44:c.instructions+=3;goto B418d44;
case 0x418d45:c.instructions+=2;goto B418d45;
case 0x418d47:c.instructions+=1;goto B418d47;
case 0x418d4c:goto L418d4c;
case 0x418d50:c.instructions+=3;goto B418d50;
case 0x418d55:c.instructions+=2;goto B418d55;
case 0x418d57:c.instructions+=1;goto B418d57;
case 0x418d59:goto L418d59;
case 0x418d5e:c.instructions+=2;goto B418d5e;
case 0x418d60:c.instructions+=1;goto B418d60;
case 0x418d62:goto L418d62;
case 0x418d68:c.instructions+=3;goto B418d68;
case 0x418d6a:c.instructions+=2;goto B418d6a;
case 0x418d6d:c.instructions+=1;goto B418d6d;
case 0x418d6f:goto L418d6f;
case 0x418d71:c.instructions+=6;goto B418d71;
case 0x418d72:c.instructions+=5;goto B418d72;
case 0x418d73:c.instructions+=4;goto B418d73;
case 0x418d74:c.instructions+=3;goto B418d74;
case 0x418d76:c.instructions+=2;goto B418d76;
case 0x418d77:c.instructions+=1;goto B418d77;
case 0x418d7a:goto L418d7a;
case 0x418d80:c.instructions+=3;goto B418d80;
case 0x418d82:c.instructions+=2;goto B418d82;
case 0x418d85:c.instructions+=1;goto B418d85;
case 0x418d87:goto L418d87;
case 0x418d89:c.instructions+=6;goto B418d89;
case 0x418d8a:c.instructions+=5;goto B418d8a;
case 0x418d8b:c.instructions+=4;goto B418d8b;
case 0x418d8c:c.instructions+=3;goto B418d8c;
case 0x418d8e:c.instructions+=2;goto B418d8e;
case 0x418d8f:c.instructions+=1;goto B418d8f;
case 0x418d92:goto L418d92;
case 0x418d93:c.instructions+=6;goto B418d93;
case 0x418d94:c.instructions+=5;goto B418d94;
case 0x418d96:c.instructions+=4;goto B418d96;
case 0x418d97:c.instructions+=3;goto B418d97;
case 0x418d99:c.instructions+=2;goto B418d99;
case 0x418d9a:c.instructions+=1;goto B418d9a;
case 0x418da0:goto L418da0;
case 0x418da1:c.instructions+=10;goto B418da1;
case 0x418da3:c.instructions+=9;goto B418da3;
case 0x418da6:c.instructions+=8;goto B418da6;
case 0x418dac:c.instructions+=7;goto B418dac;
case 0x418dad:c.instructions+=6;goto B418dad;
case 0x418dae:c.instructions+=5;goto B418dae;
case 0x418db0:c.instructions+=4;goto B418db0;
case 0x418db3:c.instructions+=3;goto B418db3;
case 0x418db5:c.instructions+=2;goto B418db5;
case 0x418db6:c.instructions+=1;goto B418db6;
case 0x418dbc:goto L418dbc;
case 0x418dc0:c.instructions+=9;goto B418dc0;
case 0x418dc3:c.instructions+=8;goto B418dc3;
case 0x418dc6:c.instructions+=7;goto B418dc6;
case 0x418dc9:c.instructions+=6;goto B418dc9;
case 0x418dcc:c.instructions+=5;goto B418dcc;
case 0x418dcf:c.instructions+=4;goto B418dcf;
case 0x418dd2:c.instructions+=3;goto B418dd2;
case 0x418dda:c.instructions+=2;goto B418dda;
case 0x418dde:c.instructions+=1;goto B418dde;
case 0x418de3:goto L418de3;
case 0x418de6:c.instructions+=1;goto B418de6;
case 0x418deb:goto L418deb;
case 0x418dee:c.instructions+=7;goto B418dee;
case 0x418df0:c.instructions+=6;goto B418df0;
case 0x418df2:c.instructions+=5;goto B418df2;
case 0x418df3:c.instructions+=4;goto B418df3;
case 0x418df7:c.instructions+=3;goto B418df7;
case 0x418df8:c.instructions+=2;goto B418df8;
case 0x418dfa:c.instructions+=1;goto B418dfa;
case 0x418dff:goto L418dff;
case 0x418e02:c.instructions+=7;goto B418e02;
case 0x418e04:c.instructions+=6;goto B418e04;
case 0x418e06:c.instructions+=5;goto B418e06;
case 0x418e07:c.instructions+=4;goto B418e07;
case 0x418e0b:c.instructions+=3;goto B418e0b;
case 0x418e0c:c.instructions+=2;goto B418e0c;
case 0x418e0e:c.instructions+=1;goto B418e0e;
case 0x418e13:goto L418e13;
case 0x418e1b:c.instructions+=2;goto B418e1b;
case 0x418e1d:c.instructions+=1;goto B418e1d;
case 0x418e25:goto L418e25;
case 0x418e29:c.instructions+=8;goto B418e29;
case 0x418e2c:c.instructions+=7;goto B418e2c;
case 0x418e2d:c.instructions+=6;goto B418e2d;
case 0x418e2f:c.instructions+=5;goto B418e2f;
case 0x418e30:c.instructions+=4;goto B418e30;
case 0x418e34:c.instructions+=3;goto B418e34;
case 0x418e35:c.instructions+=2;goto B418e35;
case 0x418e37:c.instructions+=1;goto B418e37;
case 0x418e3c:goto L418e3c;
case 0x418e40:c.instructions+=12;goto B418e40;
case 0x418e44:c.instructions+=11;goto B418e44;
case 0x418e48:c.instructions+=10;goto B418e48;
case 0x418e4b:c.instructions+=9;goto B418e4b;
case 0x418e4f:c.instructions+=8;goto B418e4f;
case 0x418e52:c.instructions+=7;goto B418e52;
case 0x418e56:c.instructions+=6;goto B418e56;
case 0x418e57:c.instructions+=5;goto B418e57;
case 0x418e59:c.instructions+=4;goto B418e59;
case 0x418e5a:c.instructions+=3;goto B418e5a;
case 0x418e5e:c.instructions+=2;goto B418e5e;
case 0x418e5f:c.instructions+=1;goto B418e5f;
case 0x418e64:goto L418e64;
case 0x418e68:c.instructions+=11;goto B418e68;
case 0x418e6c:c.instructions+=10;goto B418e6c;
case 0x418e70:c.instructions+=9;goto B418e70;
case 0x418e74:c.instructions+=8;goto B418e74;
case 0x418e78:c.instructions+=7;goto B418e78;
case 0x418e7c:c.instructions+=6;goto B418e7c;
case 0x418e7d:c.instructions+=5;goto B418e7d;
case 0x418e80:c.instructions+=4;goto B418e80;
case 0x418e81:c.instructions+=3;goto B418e81;
case 0x418e85:c.instructions+=2;goto B418e85;
case 0x418e89:c.instructions+=1;goto B418e89;
case 0x418e8b:goto L418e8b;
case 0x418e8f:c.instructions+=2;goto B418e8f;
case 0x418e95:c.instructions+=1;goto B418e95;
case 0x418e9a:goto L418e9a;
case 0x418e9b:c.instructions+=4;goto B418e9b;
case 0x418e9d:c.instructions+=3;goto B418e9d;
case 0x418ea1:c.instructions+=2;goto B418ea1;
case 0x418ea9:c.instructions+=1;goto B418ea9;
case 0x418eaf:goto L418eaf;
case 0x418eb0:goto L418eb0;
case 0x418eb4:c.instructions+=1;goto B418eb4;
case 0x418eba:goto L418eba;
case 0x418ebe:c.instructions+=15;goto B418ebe;
case 0x418ec4:c.instructions+=14;goto B418ec4;
case 0x418ec8:c.instructions+=13;goto B418ec8;
case 0x418ecb:c.instructions+=12;goto B418ecb;
case 0x418ecd:c.instructions+=11;goto B418ecd;
case 0x418ed1:c.instructions+=10;goto B418ed1;
case 0x418ed5:c.instructions+=9;goto B418ed5;
case 0x418ed9:c.instructions+=8;goto B418ed9;
case 0x418edb:c.instructions+=7;goto B418edb;
case 0x418ee3:c.instructions+=6;goto B418ee3;
case 0x418eeb:c.instructions+=5;goto B418eeb;
case 0x418ef3:c.instructions+=4;goto B418ef3;
case 0x418efb:c.instructions+=3;goto B418efb;
case 0x418f03:c.instructions+=2;goto B418f03;
case 0x418f07:c.instructions+=1;goto B418f07;
case 0x418f0a:goto L418f0a;
case 0x418f0d:c.instructions+=5;goto B418f0d;
case 0x418f10:c.instructions+=4;goto B418f10;
case 0x418f14:c.instructions+=3;goto B418f14;
case 0x418f17:c.instructions+=2;goto B418f17;
case 0x418f1b:c.instructions+=1;goto B418f1b;
case 0x418f21:goto L418f21;
case 0x418f25:c.instructions+=2;goto B418f25;
case 0x418f27:c.instructions+=1;goto B418f27;
case 0x418f29:goto L418f29;
case 0x418f30:c.instructions+=1;goto B418f30;
case 0x418f32:goto L418f32;
case 0x418f34:goto L418f34;
case 0x418f35:c.instructions+=6;goto B418f35;
case 0x418f37:c.instructions+=5;goto B418f37;
case 0x418f3a:c.instructions+=4;goto B418f3a;
case 0x418f41:c.instructions+=3;goto B418f41;
case 0x418f42:c.instructions+=2;goto B418f42;
case 0x418f44:c.instructions+=1;goto B418f44;
case 0x418f49:goto L418f49;
case 0x418f4e:c.instructions+=22;goto B418f4e;
case 0x418f52:c.instructions+=21;goto B418f52;
case 0x418f56:c.instructions+=20;goto B418f56;
case 0x418f5a:c.instructions+=19;goto B418f5a;
case 0x418f5e:c.instructions+=18;goto B418f5e;
case 0x418f62:c.instructions+=17;goto B418f62;
case 0x418f65:c.instructions+=16;goto B418f65;
case 0x418f68:c.instructions+=15;goto B418f68;
case 0x418f6b:c.instructions+=14;goto B418f6b;
case 0x418f6f:c.instructions+=13;goto B418f6f;
case 0x418f72:c.instructions+=12;goto B418f72;
case 0x418f74:c.instructions+=11;goto B418f74;
case 0x418f78:c.instructions+=10;goto B418f78;
case 0x418f7b:c.instructions+=9;goto B418f7b;
case 0x418f7f:c.instructions+=8;goto B418f7f;
case 0x418f82:c.instructions+=7;goto B418f82;
case 0x418f86:c.instructions+=6;goto B418f86;
case 0x418f8a:c.instructions+=5;goto B418f8a;
case 0x418f91:c.instructions+=4;goto B418f91;
case 0x418f94:c.instructions+=3;goto B418f94;
case 0x418f97:c.instructions+=2;goto B418f97;
case 0x418f9a:c.instructions+=1;goto B418f9a;
case 0x418f9c:goto L418f9c;
case 0x418fa0:c.instructions+=3;goto B418fa0;
case 0x418fa3:c.instructions+=2;goto B418fa3;
case 0x418fa5:c.instructions+=1;goto B418fa5;
case 0x418fa7:goto L418fa7;
case 0x418fab:c.instructions+=6;goto B418fab;
case 0x418faf:c.instructions+=5;goto B418faf;
case 0x418fb2:c.instructions+=4;goto B418fb2;
case 0x418fb5:c.instructions+=3;goto B418fb5;
case 0x418fb9:c.instructions+=2;goto B418fb9;
case 0x418fbd:c.instructions+=1;goto B418fbd;
case 0x418fc0:goto L418fc0;
case 0x418fc3:c.instructions+=1;goto B418fc3;
case 0x418fc5:goto L418fc5;
case 0x418fc7:c.instructions+=3;goto B418fc7;
case 0x418fc9:c.instructions+=2;goto B418fc9;
case 0x418fcb:c.instructions+=1;goto B418fcb;
case 0x418fcd:goto L418fcd;
case 0x418fd0:c.instructions+=8;goto B418fd0;
case 0x418fd4:c.instructions+=7;goto B418fd4;
case 0x418fd8:c.instructions+=6;goto B418fd8;
case 0x418fdc:c.instructions+=5;goto B418fdc;
case 0x418fe0:c.instructions+=4;goto B418fe0;
case 0x418fe1:c.instructions+=3;goto B418fe1;
case 0x418fe3:c.instructions+=2;goto B418fe3;
case 0x418fe7:c.instructions+=1;goto B418fe7;
case 0x418fed:goto L418fed;
case 0x418fee:c.instructions+=5;goto B418fee;
case 0x418fef:c.instructions+=4;goto B418fef;
case 0x418ff0:c.instructions+=3;goto B418ff0;
case 0x418ff2:c.instructions+=2;goto B418ff2;
case 0x418ff3:c.instructions+=1;goto B418ff3;
default:missing_instruction(c.pc);}
B418000:L418000:{c.instructions+=26;NFSU2_TR(0x418000);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B418004:{NFSU2_TR(0x418004);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418007:{NFSU2_TR(0x418007);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418008:{NFSU2_TR(0x418008);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41800b:{NFSU2_TR(0x41800b);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41800f:{NFSU2_TR(0x41800f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418010:{NFSU2_TR(0x418010);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B418014:{NFSU2_TR(0x418014);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418016:{NFSU2_TR(0x418016);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B418018:{NFSU2_TR(0x418018);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41801c:{NFSU2_TR(0x41801c);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B41801e:{NFSU2_TR(0x41801e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418022:{NFSU2_TR(0x418022);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B418024:{NFSU2_TR(0x418024);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B418026:{NFSU2_TR(0x418026);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41802a:{NFSU2_TR(0x41802a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41802c:{NFSU2_TR(0x41802c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41802e:{NFSU2_TR(0x41802e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418032:{NFSU2_TR(0x418032);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B418034:{NFSU2_TR(0x418034);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418038:{NFSU2_TR(0x418038);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B41803a:{NFSU2_TR(0x41803a);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B41803c:{NFSU2_TR(0x41803c);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B418040:{NFSU2_TR(0x418040);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B418042:{NFSU2_TR(0x418042);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B418044:{NFSU2_TR(0x418044);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418049ull));
TAIL_STATIC(0x43d410u,43d);
}
B418049:L418049:{c.instructions+=3;NFSU2_TR(0x418049);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B41804c:{NFSU2_TR(0x41804c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41804e:{NFSU2_TR(0x41804e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4180b7;}}
}
B418050:L418050:{c.instructions+=8;NFSU2_TR(0x418050);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418051:{NFSU2_TR(0x418051);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B418055:{NFSU2_TR(0x418055);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418056:{NFSU2_TR(0x418056);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41805a:{NFSU2_TR(0x41805a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41805b:{NFSU2_TR(0x41805b);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41805f:{NFSU2_TR(0x41805f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418060:{NFSU2_TR(0x418060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418065ull));
TAIL_STATIC(0x43d410u,43d);
}
B418065:L418065:{c.instructions+=3;NFSU2_TR(0x418065);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B418068:{NFSU2_TR(0x418068);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41806a:{NFSU2_TR(0x41806a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4180b7;}}
}
B41806c:L41806c:{c.instructions+=14;NFSU2_TR(0x41806c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41806e:{NFSU2_TR(0x41806e);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B418070:{NFSU2_TR(0x418070);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418073:{NFSU2_TR(0x418073);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B418076:{NFSU2_TR(0x418076);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B418078:{NFSU2_TR(0x418078);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B41807a:{NFSU2_TR(0x41807a);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B41807c:{NFSU2_TR(0x41807c);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B41807e:{NFSU2_TR(0x41807e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B418080:{NFSU2_TR(0x418080);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B418082:{NFSU2_TR(0x418082);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B418084:{NFSU2_TR(0x418084);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B418086:{NFSU2_TR(0x418086);
{u32 ea_=u32(u32(7885248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41808c:{NFSU2_TR(0x41808c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418091ull));
TAIL_STATIC(0x75bed4u,75b);
}
B418091:L418091:{c.instructions+=2;NFSU2_TR(0x418091);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B418094:{NFSU2_TR(0x418094);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41809b;}}
}
B418096:L418096:{c.instructions+=1;NFSU2_TR(0x418096);
w4(R+0,u32(0x1ull));
}
B41809b:L41809b:{c.instructions+=7;NFSU2_TR(0x41809b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41809f:{NFSU2_TR(0x41809f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4180a3:{NFSU2_TR(0x4180a3);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B4180a5:{NFSU2_TR(0x4180a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4180a9:{NFSU2_TR(0x4180a9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4180ab:{NFSU2_TR(0x4180ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4180af:{NFSU2_TR(0x4180af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x417f24u,417);}
}
B4180b5:L4180b5:{c.instructions+=1;NFSU2_TR(0x4180b5);
{goto L4180de;}
}
B4180b7:L4180b7:{c.instructions+=4;NFSU2_TR(0x4180b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4180bb:{NFSU2_TR(0x4180bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4180be:{NFSU2_TR(0x4180be);
__builtin_memmove((R+4),(R+24),4);
}
B4180c0:{NFSU2_TR(0x4180c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4180c5ull));
TAIL_STATIC(0x5d8990u,5d8);
}
B4180c5:L4180c5:{c.instructions+=8;NFSU2_TR(0x4180c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4180c9:{NFSU2_TR(0x4180c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4180cd:{NFSU2_TR(0x4180cd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4180ce:{NFSU2_TR(0x4180ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4180d1:{NFSU2_TR(0x4180d1);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+4)),r1(U+0));
}
B4180d3:{NFSU2_TR(0x4180d3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B4180d6:{NFSU2_TR(0x4180d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4180da:{NFSU2_TR(0x4180da);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4180de:L4180de:{c.instructions+=7;NFSU2_TR(0x4180de);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4180e2:{NFSU2_TR(0x4180e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4180e6:{NFSU2_TR(0x4180e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4180e9:{NFSU2_TR(0x4180e9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4180ea:{NFSU2_TR(0x4180ea);
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
B4180ec:{NFSU2_TR(0x4180ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4180f0:{NFSU2_TR(0x4180f0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x417ed0u,417);}
}
B4180f6:L4180f6:{c.instructions+=7;NFSU2_TR(0x4180f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4180f7:{NFSU2_TR(0x4180f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4180f8:{NFSU2_TR(0x4180f8);
__builtin_memmove((R+0),(R+12),4);
}
B4180fa:{NFSU2_TR(0x4180fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4180fb:{NFSU2_TR(0x4180fb);
__builtin_memmove((R+16),(R+20),4);
}
B4180fd:{NFSU2_TR(0x4180fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4180fe:{NFSU2_TR(0x4180fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B418110:L418110:{c.instructions+=9;NFSU2_TR(0x418110);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418111:{NFSU2_TR(0x418111);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B418116:{NFSU2_TR(0x418116);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418117:{NFSU2_TR(0x418117);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418118:{NFSU2_TR(0x418118);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418119:{NFSU2_TR(0x418119);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41811a:{NFSU2_TR(0x41811a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41811b:{NFSU2_TR(0x41811b);
__builtin_memmove((R+28),(R+4),4);
}
B41811d:{NFSU2_TR(0x41811d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418122ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B418122:L418122:{c.instructions+=6;NFSU2_TR(0x418122);
__builtin_memmove((R+20),gp(0x89e7a4),4);
}
B418128:{NFSU2_TR(0x418128);
u8 U[13];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B41812f:{NFSU2_TR(0x41812f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B418133:{NFSU2_TR(0x418133);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B418136:{NFSU2_TR(0x418136);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B418138:{NFSU2_TR(0x418138);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4181b2;}}
}
B41813a:L41813a:{c.instructions+=3;NFSU2_TR(0x41813a);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B41813f:{NFSU2_TR(0x41813f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B418141:{NFSU2_TR(0x418141);
if(r1(R+518)){{goto L4181b2;}}
}
B418143:L418143:{c.instructions+=3;NFSU2_TR(0x418143);
__builtin_memmove((R+12),gp(0x890118),4);
}
B418149:{NFSU2_TR(0x418149);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41814b:{NFSU2_TR(0x41814b);
if(r1(R+518)){{goto L418161;}}
}
B41814d:L41814d:{c.instructions+=2;NFSU2_TR(0x41814d);
__builtin_memmove((R+4),(R+12),4);
}
B41814f:{NFSU2_TR(0x41814f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418154ull));
TAIL_STATIC(0x402000u,402);
}
B418154:L418154:{c.instructions+=4;NFSU2_TR(0x418154);
{u32 ea_=u32(u32(7879596u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41815a:{NFSU2_TR(0x41815a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41815c:{NFSU2_TR(0x41815c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41815f:{NFSU2_TR(0x41815f);
if(r1(R+514)){{goto L4181b2;}}
}
B418161:L418161:{c.instructions+=16;NFSU2_TR(0x418161);
__builtin_memmove((R+4),gp(0x883dac),4);
}
B418167:{NFSU2_TR(0x418167);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+4)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41816e:{NFSU2_TR(0x41816e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B418175:{NFSU2_TR(0x418175);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418178:{NFSU2_TR(0x418178);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41817c:{NFSU2_TR(0x41817c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41817f:{NFSU2_TR(0x41817f);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+12)+u32(3064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418186:{NFSU2_TR(0x418186);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418187:{NFSU2_TR(0x418187);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41818d:{NFSU2_TR(0x41818d);
__builtin_memmove((R+8),(R+4),4);
}
B41818f:{NFSU2_TR(0x41818f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418193:{NFSU2_TR(0x418193);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B418199:{NFSU2_TR(0x418199);
w4(R+4,u32(0x88f298ull));
}
B41819e:{NFSU2_TR(0x41819e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4181a1:{NFSU2_TR(0x4181a1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4181a2:{NFSU2_TR(0x4181a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4181a7ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B4181a7:L4181a7:{c.instructions+=4;NFSU2_TR(0x4181a7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4181ab:{NFSU2_TR(0x4181ab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4181ad:{NFSU2_TR(0x4181ad);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4181b0:{NFSU2_TR(0x4181b0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41822b;}}
}
B4181b2:L4181b2:{c.instructions+=2;NFSU2_TR(0x4181b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4181b5:{NFSU2_TR(0x4181b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4181baull));
TAIL_STATIC(0x5dcc80u,5dc);
}
B4181ba:L4181ba:{c.instructions+=2;NFSU2_TR(0x4181ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4181bc:{NFSU2_TR(0x4181bc);
if(r1(R+518)){{goto L4181f4;}}
}
B4181be:L4181be:{c.instructions+=7;NFSU2_TR(0x4181be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4181c1:{NFSU2_TR(0x4181c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4181c4:{NFSU2_TR(0x4181c4);
__builtin_memmove((R+8),(R+4),4);
}
B4181c6:{NFSU2_TR(0x4181c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4181ca:{NFSU2_TR(0x4181ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4181cb:{NFSU2_TR(0x4181cb);
__builtin_memmove((R+4),(R+28),4);
}
B4181cd:{NFSU2_TR(0x4181cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4181d2ull));
TAIL_STATIC(0x409890u,409);
}
B4181d2:L4181d2:{c.instructions+=2;NFSU2_TR(0x4181d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4181d4:{NFSU2_TR(0x4181d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41822b;}}
}
B4181d6:L4181d6:{c.instructions+=10;NFSU2_TR(0x4181d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4181d9:{NFSU2_TR(0x4181d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4181dc:{NFSU2_TR(0x4181dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4181e0:{NFSU2_TR(0x4181e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4181e4:{NFSU2_TR(0x4181e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4181e5:{NFSU2_TR(0x4181e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4181e6:{NFSU2_TR(0x4181e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4181ea:{NFSU2_TR(0x4181ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4181eb:{NFSU2_TR(0x4181eb);
__builtin_memmove((R+4),(R+28),4);
}
B4181ed:{NFSU2_TR(0x4181ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4181f2ull));
TAIL_STATIC(0x411060u,411);
}
B4181f2:L4181f2:{c.instructions+=1;NFSU2_TR(0x4181f2);
{goto L41821a;}
}
B4181f4:L4181f4:{c.instructions+=4;NFSU2_TR(0x4181f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4181f7:{NFSU2_TR(0x4181f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4181f8:{NFSU2_TR(0x4181f8);
__builtin_memmove((R+4),(R+28),4);
}
B4181fa:{NFSU2_TR(0x4181fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4181ffull));
TAIL_STATIC(0x409840u,409);
}
B4181ff:L4181ff:{c.instructions+=2;NFSU2_TR(0x4181ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B418201:{NFSU2_TR(0x418201);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41822b;}}
}
B418203:L418203:{c.instructions+=8;NFSU2_TR(0x418203);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418207:{NFSU2_TR(0x418207);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41820a:{NFSU2_TR(0x41820a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41820b:{NFSU2_TR(0x41820b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41820f:{NFSU2_TR(0x41820f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418210:{NFSU2_TR(0x418210);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418211:{NFSU2_TR(0x418211);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418212:{NFSU2_TR(0x418212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418217ull));
TAIL_STATIC(0x410fc0u,410);
}
B418217:L418217:{c.instructions+=1;NFSU2_TR(0x418217);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B41821a:L41821a:{c.instructions+=2;NFSU2_TR(0x41821a);
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
B41821c:{NFSU2_TR(0x41821c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41822b;}}
}
B41821e:L41821e:{c.instructions+=7;NFSU2_TR(0x41821e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41821f:{NFSU2_TR(0x41821f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B418220:{NFSU2_TR(0x418220);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B418221:{NFSU2_TR(0x418221);
w4(R+0,u32(0x1ull));
}
B418226:{NFSU2_TR(0x418226);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B418227:{NFSU2_TR(0x418227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B418228:{NFSU2_TR(0x418228);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41822b:L41822b:{c.instructions+=7;NFSU2_TR(0x41822b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41822c:{NFSU2_TR(0x41822c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41822d:{NFSU2_TR(0x41822d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41822e:{NFSU2_TR(0x41822e);
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
B418230:{NFSU2_TR(0x418230);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B418231:{NFSU2_TR(0x418231);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B418232:{NFSU2_TR(0x418232);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B418240:L418240:{c.instructions+=13;NFSU2_TR(0x418240);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418241:{NFSU2_TR(0x418241);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418242:{NFSU2_TR(0x418242);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B418246:{NFSU2_TR(0x418246);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418247:{NFSU2_TR(0x418247);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418248:{NFSU2_TR(0x418248);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41824a:{NFSU2_TR(0x41824a);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41824c:{NFSU2_TR(0x41824c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41824f:{NFSU2_TR(0x41824f);
__builtin_memmove((R+28),(R+4),4);
}
B418251:{NFSU2_TR(0x418251);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418252:{NFSU2_TR(0x418252);
w4(R+4,u32(0x88f298ull));
}
B418257:{NFSU2_TR(0x418257);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41825f:{NFSU2_TR(0x41825f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418264ull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B418264:L418264:{c.instructions+=3;NFSU2_TR(0x418264);
__builtin_memmove((R+24),(R+0),4);
}
B418266:{NFSU2_TR(0x418266);
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
B418268:{NFSU2_TR(0x418268);
if(r1(R+518)){{goto L4182b5;}}
}
B41826a:L41826a:{c.instructions+=3;NFSU2_TR(0x41826a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41826b:{NFSU2_TR(0x41826b);
__builtin_memmove((R+4),(R+28),4);
}
B41826d:{NFSU2_TR(0x41826d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418272ull));
TAIL_STATIC(0x4112a0u,411);
}
B418272:L418272:{c.instructions+=2;NFSU2_TR(0x418272);
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
B418274:{NFSU2_TR(0x418274);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4182b5;}}
}
B418276:L418276:{c.instructions+=11;NFSU2_TR(0x418276);
__builtin_memmove((R+4),gp(0x89e7a8),4);
}
B41827c:{NFSU2_TR(0x41827c);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B418280:{NFSU2_TR(0x418280);
__builtin_memmove((R+0),gp(0x81cb60),4);
}
B418285:{NFSU2_TR(0x418285);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+0)+u32(2700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41828c:{NFSU2_TR(0x41828c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41828d:{NFSU2_TR(0x41828d);
__builtin_memmove((R+4),gp(0x890080),4);
}
B418293:{NFSU2_TR(0x418293);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B418297:{NFSU2_TR(0x418297);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+0)+u32(2704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41829e:{NFSU2_TR(0x41829e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4182a2:{NFSU2_TR(0x4182a2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4182a5:{NFSU2_TR(0x4182a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4182aaull));
TAIL_STATIC(0x5ea500u,5ea);
}
B4182aa:L4182aa:{c.instructions+=6;NFSU2_TR(0x4182aa);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4182ae:{NFSU2_TR(0x4182ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4182af:{NFSU2_TR(0x4182af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4182b0:{NFSU2_TR(0x4182b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4182b1:{NFSU2_TR(0x4182b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4182b2:{NFSU2_TR(0x4182b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4182b5:L4182b5:{c.instructions+=6;NFSU2_TR(0x4182b5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4182b9:{NFSU2_TR(0x4182b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4182ba:{NFSU2_TR(0x4182ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4182bb:{NFSU2_TR(0x4182bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4182bc:{NFSU2_TR(0x4182bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4182bd:{NFSU2_TR(0x4182bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4182c0:L4182c0:{c.instructions+=10;NFSU2_TR(0x4182c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4182c3:{NFSU2_TR(0x4182c3);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4182c9:{NFSU2_TR(0x4182c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4182ca:{NFSU2_TR(0x4182ca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4182cb:{NFSU2_TR(0x4182cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4182cc:{NFSU2_TR(0x4182cc);
__builtin_memmove((R+24),(R+4),4);
}
B4182ce:{NFSU2_TR(0x4182ce);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4182d1:{NFSU2_TR(0x4182d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4182d2:{NFSU2_TR(0x4182d2);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4182d8:{NFSU2_TR(0x4182d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4182ddull));
TAIL_STATIC(0x75bed4u,75b);
}
B4182dd:L4182dd:{c.instructions+=8;NFSU2_TR(0x4182dd);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4182de:{NFSU2_TR(0x4182de);
w4(R+4,u32(0x3ull));
}
B4182e3:{NFSU2_TR(0x4182e3);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4182e3);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4182e3);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B4182e5:{NFSU2_TR(0x4182e5);
__builtin_memmove((R+4),(R+24),4);
}
B4182e7:{NFSU2_TR(0x4182e7);
__builtin_memmove((R+12),(R+8),4);
}
B4182e9:{NFSU2_TR(0x4182e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4182eb:{NFSU2_TR(0x4182eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4182ec:{NFSU2_TR(0x4182ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4182efull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4182ef:L4182ef:{c.instructions+=6;NFSU2_TR(0x4182ef);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4182f1:{NFSU2_TR(0x4182f1);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4182f5:{NFSU2_TR(0x4182f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4182fd:{NFSU2_TR(0x4182fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4182ff:{NFSU2_TR(0x4182ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B418302:{NFSU2_TR(0x418302);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41835c;}}
}
B418304:L418304:{c.instructions+=7;NFSU2_TR(0x418304);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418308:{NFSU2_TR(0x418308);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41830c:{NFSU2_TR(0x41830c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41830d:{NFSU2_TR(0x41830d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41830e:{NFSU2_TR(0x41830e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41830f:{NFSU2_TR(0x41830f);
__builtin_memmove((R+4),(R+24),4);
}
B418311:{NFSU2_TR(0x418311);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418316ull));
TAIL_STATIC(0x411390u,411);
}
B418316:L418316:{c.instructions+=12;NFSU2_TR(0x418316);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41831a:{NFSU2_TR(0x41831a);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41831e:{NFSU2_TR(0x41831e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B418322:{NFSU2_TR(0x418322);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418326:{NFSU2_TR(0x418326);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41832a:{NFSU2_TR(0x41832a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41832e:{NFSU2_TR(0x41832e);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B418332:{NFSU2_TR(0x418332);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B418336:{NFSU2_TR(0x418336);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B418338:{NFSU2_TR(0x418338);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41833a:{NFSU2_TR(0x41833a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41833d:{NFSU2_TR(0x41833d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L418345;}}
}
B41833f:L41833f:{c.instructions+=2;NFSU2_TR(0x41833f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B418341:{NFSU2_TR(0x418341);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418345:L418345:{c.instructions+=5;NFSU2_TR(0x418345);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418349:{NFSU2_TR(0x418349);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41834b:{NFSU2_TR(0x41834b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41834d:{NFSU2_TR(0x41834d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B418350:{NFSU2_TR(0x418350);
if(r1(R+514)){{goto L418358;}}
}
B418352:L418352:{c.instructions+=2;NFSU2_TR(0x418352);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B418354:{NFSU2_TR(0x418354);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418358:L418358:{c.instructions+=1;NFSU2_TR(0x418358);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41835c:L41835c:{c.instructions+=9;NFSU2_TR(0x41835c);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B418362:{NFSU2_TR(0x418362);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418366:{NFSU2_TR(0x418366);
u8 U[16];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B41836a:{NFSU2_TR(0x41836a);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B418370:{NFSU2_TR(0x418370);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B418374:{NFSU2_TR(0x418374);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B418378:{NFSU2_TR(0x418378);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418379:{NFSU2_TR(0x418379);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41837a:{NFSU2_TR(0x41837a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41837full));
TAIL_STATIC(0x576aa0u,576);
}
B41837f:L41837f:{c.instructions+=2;NFSU2_TR(0x41837f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B418381:{NFSU2_TR(0x418381);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+20),(U+0),4);
}
B418384:L418384:{c.instructions+=2;NFSU2_TR(0x418384);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B418386:{NFSU2_TR(0x418386);
if(r1(R+518)){{goto L418397;}}
}
B418388:L418388:{c.instructions+=5;NFSU2_TR(0x418388);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41838c:{NFSU2_TR(0x41838c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41838d:{NFSU2_TR(0x41838d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B418390:{NFSU2_TR(0x418390);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418392:{NFSU2_TR(0x418392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418397ull));
TAIL_STATIC(0x576aa0u,576);
}
B418397:L418397:{c.instructions+=4;NFSU2_TR(0x418397);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B418398:{NFSU2_TR(0x418398);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B41839b:{NFSU2_TR(0x41839b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41839e:{NFSU2_TR(0x41839e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x418384u);}goto L418384;}}
}
B4183a0:L4183a0:{c.instructions+=5;NFSU2_TR(0x4183a0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4183a4:{NFSU2_TR(0x4183a4);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4183aa:{NFSU2_TR(0x4183aa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4183ac:{NFSU2_TR(0x4183ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4183af:{NFSU2_TR(0x4183af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4183b7;}}
}
B4183b1:L4183b1:{c.instructions+=2;NFSU2_TR(0x4183b1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4183b5:{NFSU2_TR(0x4183b5);
{goto L4183bd;}
}
B4183b7:L4183b7:{c.instructions+=1;NFSU2_TR(0x4183b7);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4183bd:L4183bd:{c.instructions+=10;NFSU2_TR(0x4183bd);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4183c1:{NFSU2_TR(0x4183c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4183c5:{NFSU2_TR(0x4183c5);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4183c8:{NFSU2_TR(0x4183c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4183c9:{NFSU2_TR(0x4183c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4183ca:{NFSU2_TR(0x4183ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4183cd:{NFSU2_TR(0x4183cd);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B4183cf:{NFSU2_TR(0x4183cf);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4183d2:{NFSU2_TR(0x4183d2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4183d4:{NFSU2_TR(0x4183d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4183d9ull));
TAIL_STATIC(0x576aa0u,576);
}
B4183d9:L4183d9:{c.instructions+=8;NFSU2_TR(0x4183d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4183dd:{NFSU2_TR(0x4183dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4183de:{NFSU2_TR(0x4183de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4183e1:{NFSU2_TR(0x4183e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4183e2:{NFSU2_TR(0x4183e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4183e3:{NFSU2_TR(0x4183e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4183e4:{NFSU2_TR(0x4183e4);
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
B4183e7:{NFSU2_TR(0x4183e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4183f0:L4183f0:{c.instructions+=12;NFSU2_TR(0x4183f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4183f1:{NFSU2_TR(0x4183f1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4183f5:{NFSU2_TR(0x4183f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4183f9:{NFSU2_TR(0x4183f9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4183fd:{NFSU2_TR(0x4183fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4183fe:{NFSU2_TR(0x4183fe);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B418400:{NFSU2_TR(0x418400);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B418403:{NFSU2_TR(0x418403);
__builtin_memmove((R+24),(R+4),4);
}
B418405:{NFSU2_TR(0x418405);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B418409:{NFSU2_TR(0x418409);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41840a:{NFSU2_TR(0x41840a);
w4(R+4,u32(0x1ull));
}
B41840f:{NFSU2_TR(0x41840f);
if(r1(R+518)){{goto L41841a;}}
}
B418411:L418411:{c.instructions+=3;NFSU2_TR(0x418411);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B418414:{NFSU2_TR(0x418414);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B418418:{NFSU2_TR(0x418418);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41841e;}}
}
B41841a:L41841a:{c.instructions+=1;NFSU2_TR(0x41841a);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41841e:L41841e:{c.instructions+=2;NFSU2_TR(0x41841e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B418420:{NFSU2_TR(0x418420);
if(r1(R+518)){{goto L41842b;}}
}
B418422:L418422:{c.instructions+=3;NFSU2_TR(0x418422);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B418425:{NFSU2_TR(0x418425);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B418429:{NFSU2_TR(0x418429);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41842f;}}
}
B41842b:L41842b:{c.instructions+=1;NFSU2_TR(0x41842b);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41842f:L41842f:{c.instructions+=10;NFSU2_TR(0x41842f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418433:{NFSU2_TR(0x418433);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418437:{NFSU2_TR(0x418437);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41843b:{NFSU2_TR(0x41843b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41843f:{NFSU2_TR(0x41843f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418440:{NFSU2_TR(0x418440);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418441:{NFSU2_TR(0x418441);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418442:{NFSU2_TR(0x418442);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418443:{NFSU2_TR(0x418443);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B418449:{NFSU2_TR(0x418449);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41844eull));
TAIL_STATIC(0x576bb0u,576);
}
B41844e:L41844e:{c.instructions+=9;NFSU2_TR(0x41844e);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418454:{NFSU2_TR(0x418454);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418458:{NFSU2_TR(0x418458);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418459:{NFSU2_TR(0x418459);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41845d:{NFSU2_TR(0x41845d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41845e:{NFSU2_TR(0x41845e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41845f:{NFSU2_TR(0x41845f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B418462:{NFSU2_TR(0x418462);
__builtin_memmove((R+4),(R+24),4);
}
B418464:{NFSU2_TR(0x418464);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418469ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4182c0u);}goto L4182c0;}
}
B418469:L418469:{c.instructions+=4;NFSU2_TR(0x418469);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41846a:{NFSU2_TR(0x41846a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41846b:{NFSU2_TR(0x41846b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41846c:{NFSU2_TR(0x41846c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B418470:L418470:{c.instructions+=12;NFSU2_TR(0x418470);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418472:{NFSU2_TR(0x418472);
u8 U[4];
w4(U+0,u32(0x7713c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418477:{NFSU2_TR(0x418477);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41847d:{NFSU2_TR(0x41847d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41847e:{NFSU2_TR(0x41847e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418485:{NFSU2_TR(0x418485);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418486:{NFSU2_TR(0x418486);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41848a:{NFSU2_TR(0x41848a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41848b:{NFSU2_TR(0x41848b);
__builtin_memmove((R+24),(R+4),4);
}
B41848d:{NFSU2_TR(0x41848d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41848e:{NFSU2_TR(0x41848e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418492:{NFSU2_TR(0x418492);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418497ull));
TAIL_STATIC(0x40f630u,40f);
}
B418497:L418497:{c.instructions+=9;NFSU2_TR(0x418497);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B418499:{NFSU2_TR(0x418499);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41849b:{NFSU2_TR(0x41849b);
__builtin_memmove((R+4),(R+24),4);
}
B41849d:{NFSU2_TR(0x41849d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4184a1:{NFSU2_TR(0x4184a1);
u8 U[4];
w4(U+0,u32(0x7851c8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4184a7:{NFSU2_TR(0x4184a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4184aa:{NFSU2_TR(0x4184aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4184ad:{NFSU2_TR(0x4184ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4184b0:{NFSU2_TR(0x4184b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4184b5ull));
TAIL_STATIC(0x411490u,411);
}
B4184b5:L4184b5:{c.instructions+=6;NFSU2_TR(0x4184b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4184b9:{NFSU2_TR(0x4184b9);
__builtin_memmove((R+0),(R+24),4);
}
B4184bb:{NFSU2_TR(0x4184bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4184bc:{NFSU2_TR(0x4184bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4184c3:{NFSU2_TR(0x4184c3);
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
B4184c6:{NFSU2_TR(0x4184c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4184d0:L4184d0:{c.instructions+=3;NFSU2_TR(0x4184d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4184d1:{NFSU2_TR(0x4184d1);
__builtin_memmove((R+24),(R+4),4);
}
B4184d3:{NFSU2_TR(0x4184d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4184d8ull));
TAIL_STATIC(0x4047e0u,404);
}
B4184d8:L4184d8:{c.instructions+=2;NFSU2_TR(0x4184d8);
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
B4184dd:{NFSU2_TR(0x4184dd);
if(r1(R+518)){{goto L4184e8;}}
}
B4184df:L4184df:{c.instructions+=2;NFSU2_TR(0x4184df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4184e0:{NFSU2_TR(0x4184e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4184e5ull));
TAIL_STATIC(0x575630u,575);
}
B4184e5:L4184e5:{c.instructions+=1;NFSU2_TR(0x4184e5);
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
B4184e8:L4184e8:{c.instructions+=3;NFSU2_TR(0x4184e8);
__builtin_memmove((R+0),(R+24),4);
}
B4184ea:{NFSU2_TR(0x4184ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4184eb:{NFSU2_TR(0x4184eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4184f0:L4184f0:{c.instructions+=14;NFSU2_TR(0x4184f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4184f2:{NFSU2_TR(0x4184f2);
u8 U[4];
w4(U+0,u32(0x771511ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4184f7:{NFSU2_TR(0x4184f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4184fd:{NFSU2_TR(0x4184fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4184fe:{NFSU2_TR(0x4184fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418505:{NFSU2_TR(0x418505);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418506:{NFSU2_TR(0x418506);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418507:{NFSU2_TR(0x418507);
__builtin_memmove((R+24),(R+4),4);
}
B418509:{NFSU2_TR(0x418509);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41850d:{NFSU2_TR(0x41850d);
u8 U[4];
w4(U+0,u32(0x785230ull));
s4(u32(r4(R+24)),r4(U+0));
}
B418513:{NFSU2_TR(0x418513);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418516:{NFSU2_TR(0x418516);
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
B418518:{NFSU2_TR(0x418518);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B418520:{NFSU2_TR(0x418520);
if(r1(R+518)){{goto L418528;}}
}
B418522:L418522:{c.instructions+=3;NFSU2_TR(0x418522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B418524:{NFSU2_TR(0x418524);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418526:{NFSU2_TR(0x418526);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418528ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B418528:L418528:{c.instructions+=3;NFSU2_TR(0x418528);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41852e:{NFSU2_TR(0x41852e);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B418533:{NFSU2_TR(0x418533);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418538ull));
TAIL_STATIC(0x411740u,411);
}
B418538:L418538:{c.instructions+=3;NFSU2_TR(0x418538);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41853b:{NFSU2_TR(0x41853b);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B418540:{NFSU2_TR(0x418540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418545ull));
TAIL_STATIC(0x411740u,411);
}
B418545:L418545:{c.instructions+=6;NFSU2_TR(0x418545);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418549:{NFSU2_TR(0x418549);
u8 U[4];
w4(U+0,u32(0x7843f0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B41854f:{NFSU2_TR(0x41854f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B418550:{NFSU2_TR(0x418550);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418557:{NFSU2_TR(0x418557);
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
B41855a:{NFSU2_TR(0x41855a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B418560:L418560:{c.instructions+=2;NFSU2_TR(0x418560);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B418563:{NFSU2_TR(0x418563);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B418570:L418570:{c.instructions+=3;NFSU2_TR(0x418570);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418573:{NFSU2_TR(0x418573);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418574:{NFSU2_TR(0x418574);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418579ull));
TAIL_STATIC(0x4116a0u,411);
}
B418579:L418579:{c.instructions+=1;NFSU2_TR(0x418579);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B418580:L418580:{c.instructions+=8;NFSU2_TR(0x418580);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418581:{NFSU2_TR(0x418581);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B418585:{NFSU2_TR(0x418585);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418586:{NFSU2_TR(0x418586);
u8 U[4];
w4(U+0,u32(0x785298ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41858b:{NFSU2_TR(0x41858b);
__builtin_memmove((R+28),(R+4),4);
}
B41858d:{NFSU2_TR(0x41858d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41858f:{NFSU2_TR(0x41858f);
__builtin_memmove((R+4),(R+24),4);
}
B418591:{NFSU2_TR(0x418591);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418596ull));
TAIL_STATIC(0x578ce0u,578);
}
B418596:L418596:{c.instructions+=5;NFSU2_TR(0x418596);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3e0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41859c:{NFSU2_TR(0x41859c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41859d:{NFSU2_TR(0x41859d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41859e:{NFSU2_TR(0x41859e);
w4(R+4,u32(0x88a320ull));
}
B4185a3:{NFSU2_TR(0x4185a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4185a8ull));
TAIL_STATIC(0x5d9530u,5d9);
}
B4185a8:L4185a8:{c.instructions+=3;NFSU2_TR(0x4185a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4185a9:{NFSU2_TR(0x4185a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4185ac:{NFSU2_TR(0x4185ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4185b1ull));
TAIL_STATIC(0x411790u,411);
}
B4185b1:L4185b1:{c.instructions+=4;NFSU2_TR(0x4185b1);
u8 U[4];
w4(U+0,u32(0x78466cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4185b6:{NFSU2_TR(0x4185b6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4185b8:{NFSU2_TR(0x4185b8);
__builtin_memmove((R+4),(R+24),4);
}
B4185ba:{NFSU2_TR(0x4185ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4185bfull));
TAIL_STATIC(0x578ce0u,578);
}
B4185bf:L4185bf:{c.instructions+=3;NFSU2_TR(0x4185bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4185c0:{NFSU2_TR(0x4185c0);
__builtin_memmove((R+4),(R+28),4);
}
B4185c2:{NFSU2_TR(0x4185c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4185c7ull));
TAIL_STATIC(0x404820u,404);
}
B4185c7:L4185c7:{c.instructions+=4;NFSU2_TR(0x4185c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4185ca:{NFSU2_TR(0x4185ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4185cb:{NFSU2_TR(0x4185cb);
__builtin_memmove((R+4),(R+24),4);
}
B4185cd:{NFSU2_TR(0x4185cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4185d2ull));
TAIL_STATIC(0x571770u,571);
}
B4185d2:L4185d2:{c.instructions+=4;NFSU2_TR(0x4185d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4185d5:{NFSU2_TR(0x4185d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4185d6:{NFSU2_TR(0x4185d6);
__builtin_memmove((R+4),(R+24),4);
}
B4185d8:{NFSU2_TR(0x4185d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4185ddull));
TAIL_STATIC(0x571770u,571);
}
B4185dd:L4185dd:{c.instructions+=4;NFSU2_TR(0x4185dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4185e0:{NFSU2_TR(0x4185e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4185e1:{NFSU2_TR(0x4185e1);
__builtin_memmove((R+4),(R+24),4);
}
B4185e3:{NFSU2_TR(0x4185e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4185e8ull));
TAIL_STATIC(0x571770u,571);
}
B4185e8:L4185e8:{c.instructions+=2;NFSU2_TR(0x4185e8);
__builtin_memmove((R+4),(R+24),4);
}
B4185ea:{NFSU2_TR(0x4185ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4185efull));
TAIL_STATIC(0x578d90u,578);
}
B4185ef:L4185ef:{c.instructions+=4;NFSU2_TR(0x4185ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3d8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4185f5:{NFSU2_TR(0x4185f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4185f6:{NFSU2_TR(0x4185f6);
__builtin_memmove((R+4),(R+24),4);
}
B4185f8:{NFSU2_TR(0x4185f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4185fdull));
TAIL_STATIC(0x571770u,571);
}
B4185fd:L4185fd:{c.instructions+=4;NFSU2_TR(0x4185fd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3dcull))));
}
B418603:{NFSU2_TR(0x418603);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418604:{NFSU2_TR(0x418604);
__builtin_memmove((R+4),(R+24),4);
}
B418606:{NFSU2_TR(0x418606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41860bull));
TAIL_STATIC(0x571770u,571);
}
B41860b:L41860b:{c.instructions+=2;NFSU2_TR(0x41860b);
__builtin_memmove((R+4),(R+24),4);
}
B41860d:{NFSU2_TR(0x41860d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418612ull));
TAIL_STATIC(0x578d90u,578);
}
B418612:L418612:{c.instructions+=3;NFSU2_TR(0x418612);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B418613:{NFSU2_TR(0x418613);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B418614:{NFSU2_TR(0x418614);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B418620:L418620:{c.instructions+=16;NFSU2_TR(0x418620);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418621:{NFSU2_TR(0x418621);
__builtin_memmove((R+20),(R+16),4);
}
B418623:{NFSU2_TR(0x418623);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B418626:{NFSU2_TR(0x418626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B418629:{NFSU2_TR(0x418629);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41862a:{NFSU2_TR(0x41862a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41862b:{NFSU2_TR(0x41862b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41862c:{NFSU2_TR(0x41862c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41862d:{NFSU2_TR(0x41862d);
__builtin_memmove((R+20),(R+4),4);
}
B41862f:{NFSU2_TR(0x41862f);
__builtin_memmove((R+4),gp(0x883db4),4);
}
B418635:{NFSU2_TR(0x418635);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B418637:{NFSU2_TR(0x418637);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B418639:{NFSU2_TR(0x418639);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41863d:{NFSU2_TR(0x41863d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418641:{NFSU2_TR(0x418641);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418645:{NFSU2_TR(0x418645);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4188aa;}}
}
B41864b:L41864b:{c.instructions+=2;NFSU2_TR(0x41864b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41864f:{NFSU2_TR(0x41864f);
}
B418650:L418650:{c.instructions+=5;NFSU2_TR(0x418650);
__builtin_memmove((R+0),gp(0x883db0),4);
}
B418655:{NFSU2_TR(0x418655);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418659:{NFSU2_TR(0x418659);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B41865c:{NFSU2_TR(0x41865c);
__builtin_memmove((R+4),(R+24),4);
}
B41865e:{NFSU2_TR(0x41865e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418663ull));
TAIL_STATIC(0x5d3fb0u,5d3);
}
B418663:L418663:{c.instructions+=3;NFSU2_TR(0x418663);
__builtin_memmove((R+4),(R+24),4);
}
B418665:{NFSU2_TR(0x418665);
__builtin_memmove((R+28),(R+0),4);
}
B418667:{NFSU2_TR(0x418667);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41866cull));
TAIL_STATIC(0x5d3ff0u,5d3);
}
B41866c:L41866c:{c.instructions+=3;NFSU2_TR(0x41866c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41866e:{NFSU2_TR(0x41866e);
__builtin_memmove((R+12),(R+0),4);
}
B418670:{NFSU2_TR(0x418670);
if(r1(R+518)){{goto L4187c1;}}
}
B418676:L418676:{c.instructions+=2;NFSU2_TR(0x418676);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B418678:{NFSU2_TR(0x418678);
if(r1(R+518)){{goto L4187c1;}}
}
B41867e:L41867e:{c.instructions+=10;NFSU2_TR(0x41867e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418681:{NFSU2_TR(0x418681);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418687:{NFSU2_TR(0x418687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B418689:{NFSU2_TR(0x418689);
__builtin_memmove((R+0),(R+4),4);
}
B41868b:{NFSU2_TR(0x41868b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41868c:{NFSU2_TR(0x41868c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418690:{NFSU2_TR(0x418690);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418691:{NFSU2_TR(0x418691);
w4(R+4,u32(0x88f298ull));
}
B418696:{NFSU2_TR(0x418696);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41869a:{NFSU2_TR(0x41869a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41869full));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B41869f:L41869f:{c.instructions+=3;NFSU2_TR(0x41869f);
__builtin_memmove((R+0),gp(0x89e7a4),4);
}
B4186a4:{NFSU2_TR(0x4186a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4186a6:{NFSU2_TR(0x4186a6);
if(r1(R+518)){{goto L4186aa;}}
}
B4186a8:L4186a8:{c.instructions+=1;NFSU2_TR(0x4186a8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4186aa:L4186aa:{c.instructions+=4;NFSU2_TR(0x4186aa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4186b0:{NFSU2_TR(0x4186b0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4186b2:{NFSU2_TR(0x4186b2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4186b5:{NFSU2_TR(0x4186b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4186cb;}}
}
B4186b7:L4186b7:{c.instructions+=4;NFSU2_TR(0x4186b7);
{u32 ea_=u32(u32(7885480u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4186bd:{NFSU2_TR(0x4186bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4186bf:{NFSU2_TR(0x4186bf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4186c2:{NFSU2_TR(0x4186c2);
if(r1(R+514)){{goto L4186cd;}}
}
B4186c4:L4186c4:{c.instructions+=2;NFSU2_TR(0x4186c4);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4186c9:{NFSU2_TR(0x4186c9);
{goto L4186d2;}
}
B4186cb:L4186cb:{c.instructions+=1;NFSU2_TR(0x4186cb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4186cd:L4186cd:{c.instructions+=1;NFSU2_TR(0x4186cd);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4186d2:L4186d2:{c.instructions+=6;NFSU2_TR(0x4186d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4186d5:{NFSU2_TR(0x4186d5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
}
B4186d8:{NFSU2_TR(0x4186d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4186da:{NFSU2_TR(0x4186da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4186db:{NFSU2_TR(0x4186db);
__builtin_memmove((R+4),(R+28),4);
}
B4186dd:{NFSU2_TR(0x4186dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4186e2ull));
TAIL_STATIC(0x40cbc0u,40c);
}
B4186e2:L4186e2:{c.instructions+=4;NFSU2_TR(0x4186e2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4186e8:{NFSU2_TR(0x4186e8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4186ea:{NFSU2_TR(0x4186ea);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4186ed:{NFSU2_TR(0x4186ed);
if(r1(R+514)){{goto L418710;}}
}
B4186ef:L4186ef:{c.instructions+=6;NFSU2_TR(0x4186ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4186f2:{NFSU2_TR(0x4186f2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4186f4:{NFSU2_TR(0x4186f4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x60ull))));
}
B4186f7:{NFSU2_TR(0x4186f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4186f8:{NFSU2_TR(0x4186f8);
__builtin_memmove((R+4),(R+12),4);
}
B4186fa:{NFSU2_TR(0x4186fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4186ffull));
TAIL_STATIC(0x40cbc0u,40c);
}
B4186ff:L4186ff:{c.instructions+=4;NFSU2_TR(0x4186ff);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B418705:{NFSU2_TR(0x418705);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B418707:{NFSU2_TR(0x418707);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41870a:{NFSU2_TR(0x41870a);
if(r1(R+514)){{goto L418710;}}
}
B41870c:L41870c:{c.instructions+=2;NFSU2_TR(0x41870c);
w1(R+0,u8(0x1ull));
}
B41870e:{NFSU2_TR(0x41870e);
{goto L418712;}
}
B418710:L418710:{c.instructions+=1;NFSU2_TR(0x418710);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B418712:L418712:{c.instructions+=3;NFSU2_TR(0x418712);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B418716:{NFSU2_TR(0x418716);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B418718:{NFSU2_TR(0x418718);
if(r1(R+518)){{goto L4187c1;}}
}
B41871e:L41871e:{c.instructions+=2;NFSU2_TR(0x41871e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B418720:{NFSU2_TR(0x418720);
if(r1(R+518)){{goto L4187c1;}}
}
B418726:L418726:{c.instructions+=6;NFSU2_TR(0x418726);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418729:{NFSU2_TR(0x418729);
{u32 ea_=u32(r4(R+4)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41872f:{NFSU2_TR(0x41872f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B418735:{NFSU2_TR(0x418735);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B418737:{NFSU2_TR(0x418737);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41873a:{NFSU2_TR(0x41873a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4187c1;}}
}
B418740:L418740:{c.instructions+=5;NFSU2_TR(0x418740);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x70ull))));
}
B418743:{NFSU2_TR(0x418743);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418744:{NFSU2_TR(0x418744);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B418748:{NFSU2_TR(0x418748);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418749:{NFSU2_TR(0x418749);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41874eull));
TAIL_STATIC(0x43ce50u,43c);
}
B41874e:L41874e:{c.instructions+=6;NFSU2_TR(0x41874e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B418751:{NFSU2_TR(0x418751);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418753:{NFSU2_TR(0x418753);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B418757:{NFSU2_TR(0x418757);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418758:{NFSU2_TR(0x418758);
__builtin_memmove((R+4),(R+12),4);
}
B41875a:{NFSU2_TR(0x41875a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41875full));
TAIL_STATIC(0x401b20u,401);
}
B41875f:L41875f:{c.instructions+=11;NFSU2_TR(0x41875f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418763:{NFSU2_TR(0x418763);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B418766:{NFSU2_TR(0x418766);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418768:{NFSU2_TR(0x418768);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41876c:{NFSU2_TR(0x41876c);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B418770:{NFSU2_TR(0x418770);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B418772:{NFSU2_TR(0x418772);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418773:{NFSU2_TR(0x418773);
__builtin_memmove((R+4),(R+28),4);
}
B418775:{NFSU2_TR(0x418775);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B418777:{NFSU2_TR(0x418777);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41877b:{NFSU2_TR(0x41877b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418780ull));
TAIL_STATIC(0x401b20u,401);
}
B418780:L418780:{c.instructions+=9;NFSU2_TR(0x418780);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418784:{NFSU2_TR(0x418784);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B418787:{NFSU2_TR(0x418787);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41878b:{NFSU2_TR(0x41878b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41878d:{NFSU2_TR(0x41878d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41878f:{NFSU2_TR(0x41878f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B418793:{NFSU2_TR(0x418793);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B418795:{NFSU2_TR(0x418795);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B418798:{NFSU2_TR(0x418798);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4187a4;}}
}
B41879a:L41879a:{c.instructions+=3;NFSU2_TR(0x41879a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41879e:{NFSU2_TR(0x41879e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4187a2:{NFSU2_TR(0x4187a2);
{goto L4187a6;}
}
B4187a4:L4187a4:{c.instructions+=1;NFSU2_TR(0x4187a4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4187a6:L4187a6:{c.instructions+=5;NFSU2_TR(0x4187a6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4187aa:{NFSU2_TR(0x4187aa);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4187ae:{NFSU2_TR(0x4187ae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4187b0:{NFSU2_TR(0x4187b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4187b3:{NFSU2_TR(0x4187b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4187c1;}}
}
B4187b5:L4187b5:{c.instructions+=3;NFSU2_TR(0x4187b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4187b9:{NFSU2_TR(0x4187b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4187bd:{NFSU2_TR(0x4187bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4187c1:L4187c1:{c.instructions+=9;NFSU2_TR(0x4187c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4187c5:{NFSU2_TR(0x4187c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4187c9:{NFSU2_TR(0x4187c9);
__builtin_memmove((R+4),gp(0x883db4),4);
}
B4187cf:{NFSU2_TR(0x4187cf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4187d0:{NFSU2_TR(0x4187d0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B4187d3:{NFSU2_TR(0x4187d3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4187d5:{NFSU2_TR(0x4187d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4187d9:{NFSU2_TR(0x4187d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4187dd:{NFSU2_TR(0x4187dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x418650u);}goto L418650;}}
}
B4187e3:L4187e3:{c.instructions+=3;NFSU2_TR(0x4187e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4187e7:{NFSU2_TR(0x4187e7);
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
B4187e9:{NFSU2_TR(0x4187e9);
if(r1(R+518)){{goto L4188aa;}}
}
B4187ef:L4187ef:{c.instructions+=3;NFSU2_TR(0x4187ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4187f2:{NFSU2_TR(0x4187f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4187f4:{NFSU2_TR(0x4187f4);
if(r1(R+518)){{goto L418810;}}
}
B4187f6:L4187f6:{c.instructions+=5;NFSU2_TR(0x4187f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4187f9:{NFSU2_TR(0x4187f9);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ffull))));
}
B4187ff:{NFSU2_TR(0x4187ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B418806:{NFSU2_TR(0x418806);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B418808:{NFSU2_TR(0x418808);
if(r1(R+518)){{goto L418810;}}
}
B41880a:L41880a:{c.instructions+=2;NFSU2_TR(0x41880a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B41880e:{NFSU2_TR(0x41880e);
{goto L418813;}
}
B418810:L418810:{c.instructions+=1;NFSU2_TR(0x418810);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B418813:L418813:{c.instructions+=4;NFSU2_TR(0x418813);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B418816:{NFSU2_TR(0x418816);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ffull))));
}
B41881c:{NFSU2_TR(0x41881c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B41881e:{NFSU2_TR(0x41881e);
if(r1(R+518)){{goto L4188aa;}}
}
B418824:L418824:{c.instructions+=1;NFSU2_TR(0x418824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418829ull));
TAIL_STATIC(0x5d8990u,5d8);
}
B418829:L418829:{c.instructions+=8;NFSU2_TR(0x418829);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41882c:{NFSU2_TR(0x41882c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41882e:{NFSU2_TR(0x41882e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418830:{NFSU2_TR(0x418830);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
}
B418833:{NFSU2_TR(0x418833);
u8 U[4];
w4(U+0,u32(0x47c34f80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418838:{NFSU2_TR(0x418838);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418839:{NFSU2_TR(0x418839);
__builtin_memmove((R+4),(R+0),4);
}
B41883b:{NFSU2_TR(0x41883b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418840ull));
TAIL_STATIC(0x5e2e40u,5e2);
}
B418840:L418840:{c.instructions+=3;NFSU2_TR(0x418840);
__builtin_memmove((R+24),(R+0),4);
}
B418842:{NFSU2_TR(0x418842);
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
B418844:{NFSU2_TR(0x418844);
if(r1(R+518)){{goto L4188aa;}}
}
B418846:L418846:{c.instructions+=5;NFSU2_TR(0x418846);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B418849:{NFSU2_TR(0x418849);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B41884c:{NFSU2_TR(0x41884c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41884d:{NFSU2_TR(0x41884d);
__builtin_memmove((R+4),(R+24),4);
}
B41884f:{NFSU2_TR(0x41884f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418854ull));
TAIL_STATIC(0x40cd00u,40c);
}
B418854:L418854:{c.instructions+=4;NFSU2_TR(0x418854);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41885a:{NFSU2_TR(0x41885a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41885c:{NFSU2_TR(0x41885c);
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
B41885f:{NFSU2_TR(0x41885f);
if(r1(R+514)){{goto L4188aa;}}
}
B418861:L418861:{c.instructions+=11;NFSU2_TR(0x418861);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B418865:{NFSU2_TR(0x418865);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B418868:{NFSU2_TR(0x418868);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41886c:{NFSU2_TR(0x41886c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B418870:{NFSU2_TR(0x418870);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B418876:{NFSU2_TR(0x418876);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B418879:{NFSU2_TR(0x418879);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41887b:{NFSU2_TR(0x41887b);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B418881:{NFSU2_TR(0x418881);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B418883:{NFSU2_TR(0x418883);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B418886:{NFSU2_TR(0x418886);
if(r1(R+514)){{goto L4188aa;}}
}
B418888:L418888:{c.instructions+=4;NFSU2_TR(0x418888);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41888b:{NFSU2_TR(0x41888b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41888c:{NFSU2_TR(0x41888c);
__builtin_memmove((R+4),(R+20),4);
}
B41888e:{NFSU2_TR(0x41888e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418891ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B418891:L418891:{c.instructions+=2;NFSU2_TR(0x418891);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B418894:{NFSU2_TR(0x418894);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418899ull));
TAIL_STATIC(0x411be0u,411);
}
B418899:L418899:{c.instructions+=2;NFSU2_TR(0x418899);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41889c:{NFSU2_TR(0x41889c);
w4(R+4,u32(0x10ull));
}
B4188a1:L4188a1:{c.instructions+=4;NFSU2_TR(0x4188a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffffcull))));
s4(u32(r4(R+0)),r4(U+0));
}
B4188a4:{NFSU2_TR(0x4188a4);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4188a7:{NFSU2_TR(0x4188a7);
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
B4188a8:{NFSU2_TR(0x4188a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4188a1u);}goto L4188a1;}}
}
B4188aa:L4188aa:{c.instructions+=7;NFSU2_TR(0x4188aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4188ab:{NFSU2_TR(0x4188ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4188ac:{NFSU2_TR(0x4188ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4188ad:{NFSU2_TR(0x4188ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4188ae:{NFSU2_TR(0x4188ae);
__builtin_memmove((R+16),(R+20),4);
}
B4188b0:{NFSU2_TR(0x4188b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4188b1:{NFSU2_TR(0x4188b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4188c0:L4188c0:{c.instructions+=7;NFSU2_TR(0x4188c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4188c3:{NFSU2_TR(0x4188c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4188c4:{NFSU2_TR(0x4188c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4188c7:{NFSU2_TR(0x4188c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4188ca:{NFSU2_TR(0x4188ca);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4188cc:{NFSU2_TR(0x4188cc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4188cf:{NFSU2_TR(0x4188cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4188d8;}}
}
B4188d1:L4188d1:{c.instructions+=2;NFSU2_TR(0x4188d1);
w4(R+8,u32(0x2ull));
}
B4188d6:{NFSU2_TR(0x4188d6);
{goto L4188e2;}
}
B4188d8:L4188d8:{c.instructions+=2;NFSU2_TR(0x4188d8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4188db:{NFSU2_TR(0x4188db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4188e2;}}
}
B4188dd:L4188dd:{c.instructions+=1;NFSU2_TR(0x4188dd);
w4(R+8,u32(0x1ull));
}
B4188e2:L4188e2:{c.instructions+=11;NFSU2_TR(0x4188e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4188e3:{NFSU2_TR(0x4188e3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4188e5:{NFSU2_TR(0x4188e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4188e6:{NFSU2_TR(0x4188e6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x400ull))));
}
B4188ec:{NFSU2_TR(0x4188ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4188ed:{NFSU2_TR(0x4188ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4188f3:{NFSU2_TR(0x4188f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4188f4:{NFSU2_TR(0x4188f4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B4188f7:{NFSU2_TR(0x4188f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4188f8:{NFSU2_TR(0x4188f8);
w4(R+4,u32(0x81cbc0ull));
}
B4188fd:{NFSU2_TR(0x4188fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418902ull));
TAIL_STATIC(0x40c440u,40c);
}
B418902:L418902:{c.instructions+=2;NFSU2_TR(0x418902);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B418903:{NFSU2_TR(0x418903);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B418910:L418910:{c.instructions+=7;NFSU2_TR(0x418910);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B418912:{NFSU2_TR(0x418912);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418913:{NFSU2_TR(0x418913);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418914:{NFSU2_TR(0x418914);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B418918:{NFSU2_TR(0x418918);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418919:{NFSU2_TR(0x418919);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41891b:{NFSU2_TR(0x41891b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41891eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41891e:L41891e:{c.instructions+=2;NFSU2_TR(0x41891e);
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
B418920:{NFSU2_TR(0x418920);
if(r1(R+518)){{goto L418929;}}
}
B418922:L418922:{c.instructions+=4;NFSU2_TR(0x418922);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B418923:{NFSU2_TR(0x418923);
w1(R+0,u8(0x1ull));
}
B418925:{NFSU2_TR(0x418925);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B418926:{NFSU2_TR(0x418926);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B418929:L418929:{c.instructions+=6;NFSU2_TR(0x418929);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41892c:{NFSU2_TR(0x41892c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41892e:{NFSU2_TR(0x41892e);
__builtin_memmove((R+4),(R+0),1);
}
B418930:{NFSU2_TR(0x418930);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B418933:{NFSU2_TR(0x418933);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B418936:{NFSU2_TR(0x418936);
if(r1(R+518)){{goto L41893d;}}
}
B418938:L418938:{c.instructions+=2;NFSU2_TR(0x418938);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41893b:{NFSU2_TR(0x41893b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L418944;}}
}
B41893d:L41893d:{c.instructions+=4;NFSU2_TR(0x41893d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41893e:{NFSU2_TR(0x41893e);
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
B418940:{NFSU2_TR(0x418940);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B418941:{NFSU2_TR(0x418941);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B418944:L418944:{c.instructions+=3;NFSU2_TR(0x418944);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B418946:{NFSU2_TR(0x418946);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B418948:{NFSU2_TR(0x418948);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41893du);}goto L41893d;}}
}
B41894a:L41894a:{c.instructions+=3;NFSU2_TR(0x41894a);
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
B41894c:{NFSU2_TR(0x41894c);
w1(R+0,u8(0x1ull));
}
B41894e:{NFSU2_TR(0x41894e);
if(r1(R+518)){{goto L418952;}}
}
B418950:L418950:{c.instructions+=1;NFSU2_TR(0x418950);
__builtin_memmove((R+0),(R+12),1);
}
B418952:L418952:{c.instructions+=3;NFSU2_TR(0x418952);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B418953:{NFSU2_TR(0x418953);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B418954:{NFSU2_TR(0x418954);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B418960:L418960:{c.instructions+=9;NFSU2_TR(0x418960);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418961:{NFSU2_TR(0x418961);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418962:{NFSU2_TR(0x418962);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B418966:{NFSU2_TR(0x418966);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418969:{NFSU2_TR(0x418969);
__builtin_memmove((R+8),(R+0),1);
}
B41896b:{NFSU2_TR(0x41896b);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B41896e:{NFSU2_TR(0x41896e);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x2ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B418971:{NFSU2_TR(0x418971);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418972:{NFSU2_TR(0x418972);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41897c;}}
}
B418974:L418974:{c.instructions+=5;NFSU2_TR(0x418974);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B418975:{NFSU2_TR(0x418975);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B418976:{NFSU2_TR(0x418976);
w1(R+0,u8(0x1ull));
}
B418978:{NFSU2_TR(0x418978);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B418979:{NFSU2_TR(0x418979);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41897c:L41897c:{c.instructions+=2;NFSU2_TR(0x41897c);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B41897f:{NFSU2_TR(0x41897f);
if(r1(R+518)){{goto L4189c8;}}
}
B418981:L418981:{c.instructions+=3;NFSU2_TR(0x418981);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B418984:{NFSU2_TR(0x418984);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B418987:{NFSU2_TR(0x418987);
if(r1(R+518)){{goto L4189c8;}}
}
B418989:L418989:{c.instructions+=2;NFSU2_TR(0x418989);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41898c:{NFSU2_TR(0x41898c);
if(r1(R+518)){{goto L4189c8;}}
}
B41898e:L41898e:{c.instructions+=4;NFSU2_TR(0x41898e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4a9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B418995:{NFSU2_TR(0x418995);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B418997:{NFSU2_TR(0x418997);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B418999:{NFSU2_TR(0x418999);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4189c8;}}
}
B41899b:L41899b:{c.instructions+=4;NFSU2_TR(0x41899b);
w4(R+24,u32(u32(r4(R+24))-u32(m4(0x883db0))));
}
B4189a1:{NFSU2_TR(0x4189a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B4189a4:{NFSU2_TR(0x4189a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x428ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4189aa:{NFSU2_TR(0x4189aa);
__builtin_memmove((R+12),(R+12),4);
}
B4189b0:L4189b0:{c.instructions+=5;NFSU2_TR(0x4189b0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4189b2:{NFSU2_TR(0x4189b2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+12),(U+0),2);
}
B4189b5:{NFSU2_TR(0x4189b5);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x1fffull))));
}
B4189bb:{NFSU2_TR(0x4189bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(R+12))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B4189be:{NFSU2_TR(0x4189be);
if(r1(R+518)){{goto L4189d0;}}
}
B4189c0:L4189c0:{c.instructions+=4;NFSU2_TR(0x4189c0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4189c1:{NFSU2_TR(0x4189c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B4189c4:{NFSU2_TR(0x4189c4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4189c6:{NFSU2_TR(0x4189c6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4189b0u);}goto L4189b0;}}
}
B4189c8:L4189c8:{c.instructions+=5;NFSU2_TR(0x4189c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4189c9:{NFSU2_TR(0x4189c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4189ca:{NFSU2_TR(0x4189ca);
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
B4189cc:{NFSU2_TR(0x4189cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4189cd:{NFSU2_TR(0x4189cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4189d0:L4189d0:{c.instructions+=8;NFSU2_TR(0x4189d0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4189d2:{NFSU2_TR(0x4189d2);
u8 U[14];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B4189da:{NFSU2_TR(0x4189da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4189db:{NFSU2_TR(0x4189db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4189dc:{NFSU2_TR(0x4189dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4189dd:{NFSU2_TR(0x4189dd);
u8 U[6];
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4189e2:{NFSU2_TR(0x4189e2);
u8 U[48];
w4(U+40,u32(u32(u32(0xdull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
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
B4189e5:{NFSU2_TR(0x4189e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4189f0:L4189f0:{c.instructions+=7;NFSU2_TR(0x4189f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4189f1:{NFSU2_TR(0x4189f1);
__builtin_memmove((R+24),(R+4),4);
}
B4189f3:{NFSU2_TR(0x4189f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4189f4:{NFSU2_TR(0x4189f4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4189f6:{NFSU2_TR(0x4189f6);
u8 U[4];
w4(U+0,u32(0x785064ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4189fc:{NFSU2_TR(0x4189fc);
w4(R+4,u32(0xdcull));
}
B418a01:{NFSU2_TR(0x418a01);
__builtin_memmove((R+28),(R+24),4);
}
B418a03:L418a03:{c.instructions+=1;NFSU2_TR(0x418a03);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L418a05;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x418a03u);}goto L418a03;}
}
B418a05:L418a05:{c.instructions+=5;NFSU2_TR(0x418a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418a0b:{NFSU2_TR(0x418a0b);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B418a0f:{NFSU2_TR(0x418a0f);
__builtin_memmove((R+4),(R+24),4);
}
B418a11:{NFSU2_TR(0x418a11);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B418a17:{NFSU2_TR(0x418a17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418a1cull));
TAIL_STATIC(0x411be0u,411);
}
B418a1c:L418a1c:{c.instructions+=4;NFSU2_TR(0x418a1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B418a1d:{NFSU2_TR(0x418a1d);
__builtin_memmove((R+0),(R+24),4);
}
B418a1f:{NFSU2_TR(0x418a1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B418a20:{NFSU2_TR(0x418a20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B418a30:L418a30:{c.instructions+=3;NFSU2_TR(0x418a30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418a31:{NFSU2_TR(0x418a31);
__builtin_memmove((R+24),(R+4),4);
}
B418a33:{NFSU2_TR(0x418a33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418a38ull));
TAIL_STATIC(0x411740u,411);
}
B418a38:L418a38:{c.instructions+=2;NFSU2_TR(0x418a38);
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
B418a3d:{NFSU2_TR(0x418a3d);
if(r1(R+518)){{goto L418a48;}}
}
B418a3f:L418a3f:{c.instructions+=2;NFSU2_TR(0x418a3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418a40:{NFSU2_TR(0x418a40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418a45ull));
TAIL_STATIC(0x575630u,575);
}
B418a45:L418a45:{c.instructions+=1;NFSU2_TR(0x418a45);
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
B418a48:L418a48:{c.instructions+=3;NFSU2_TR(0x418a48);
__builtin_memmove((R+0),(R+24),4);
}
B418a4a:{NFSU2_TR(0x418a4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B418a4b:{NFSU2_TR(0x418a4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B418a50:L418a50:{c.instructions+=4;NFSU2_TR(0x418a50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418a51:{NFSU2_TR(0x418a51);
__builtin_memmove((R+28),(R+4),4);
}
B418a53:{NFSU2_TR(0x418a53);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x28ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x28ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B418a57:{NFSU2_TR(0x418a57);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L418ad8;}}
}
B418a59:L418a59:{c.instructions+=5;NFSU2_TR(0x418a59);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418a5a:{NFSU2_TR(0x418a5a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B418a5e:{NFSU2_TR(0x418a5e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B418a60:{NFSU2_TR(0x418a60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418a61:{NFSU2_TR(0x418a61);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L418a6c;}}
}
B418a63:L418a63:{c.instructions+=2;NFSU2_TR(0x418a63);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B418a6a:{NFSU2_TR(0x418a6a);
{goto L418a6e;}
}
B418a6c:L418a6c:{c.instructions+=1;NFSU2_TR(0x418a6c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B418a6e:L418a6e:{c.instructions+=9;NFSU2_TR(0x418a6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B418a72:{NFSU2_TR(0x418a72);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418a76:{NFSU2_TR(0x418a76);
__builtin_memmove((R+8),(R+24),4);
}
B418a78:{NFSU2_TR(0x418a78);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B418a7b:{NFSU2_TR(0x418a7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418a7c:{NFSU2_TR(0x418a7c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B418a83:{NFSU2_TR(0x418a83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418a84:{NFSU2_TR(0x418a84);
__builtin_memmove((R+4),(R+28),4);
}
B418a86:{NFSU2_TR(0x418a86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418a8bull));
TAIL_STATIC(0x411b50u,411);
}
B418a8b:L418a8b:{c.instructions+=24;NFSU2_TR(0x418a8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418a8f:{NFSU2_TR(0x418a8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B418a93:{NFSU2_TR(0x418a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418a96:{NFSU2_TR(0x418a96);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B418a9a:{NFSU2_TR(0x418a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418a9d:{NFSU2_TR(0x418a9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418aa1:{NFSU2_TR(0x418aa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418aa4:{NFSU2_TR(0x418aa4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B418aa8:{NFSU2_TR(0x418aa8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B418aac:{NFSU2_TR(0x418aac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B418aae:{NFSU2_TR(0x418aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418ab1:{NFSU2_TR(0x418ab1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418ab5:{NFSU2_TR(0x418ab5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B418ab7:{NFSU2_TR(0x418ab7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B418aba:{NFSU2_TR(0x418aba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B418abc:{NFSU2_TR(0x418abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B418abf:{NFSU2_TR(0x418abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418ac2:{NFSU2_TR(0x418ac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B418ac5:{NFSU2_TR(0x418ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418ac8:{NFSU2_TR(0x418ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418acb:{NFSU2_TR(0x418acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418ace:{NFSU2_TR(0x418ace);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418acf:{NFSU2_TR(0x418acf);
__builtin_memmove((R+4),(R+28),4);
}
B418ad1:{NFSU2_TR(0x418ad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418ad6ull));
TAIL_STATIC(0x40a5d0u,40a);
}
B418ad6:L418ad6:{c.instructions+=2;NFSU2_TR(0x418ad6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B418ad7:{NFSU2_TR(0x418ad7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B418ad8:L418ad8:{c.instructions+=2;NFSU2_TR(0x418ad8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B418ad9:{NFSU2_TR(0x418ad9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B418ae0:L418ae0:{c.instructions+=23;NFSU2_TR(0x418ae0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B418ae3:{NFSU2_TR(0x418ae3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B418ae6:{NFSU2_TR(0x418ae6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418ae7:{NFSU2_TR(0x418ae7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418ae8:{NFSU2_TR(0x418ae8);
__builtin_memmove((R+24),(R+4),4);
}
B418aea:{NFSU2_TR(0x418aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418af0:{NFSU2_TR(0x418af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418af6:{NFSU2_TR(0x418af6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B418afd:{NFSU2_TR(0x418afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B418b07:{NFSU2_TR(0x418b07);
w4(R+0,u32(0x47c34f80ull));
}
B418b0c:{NFSU2_TR(0x418b0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418b12:{NFSU2_TR(0x418b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418b18:{NFSU2_TR(0x418b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418b1e:{NFSU2_TR(0x418b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418b24:{NFSU2_TR(0x418b24);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xadull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B418b2b:{NFSU2_TR(0x418b2b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B418b2d:{NFSU2_TR(0x418b2d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B418b2f:{NFSU2_TR(0x418b2f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+12),(U+1),1);
}
B418b32:{NFSU2_TR(0x418b32);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B418b33:{NFSU2_TR(0x418b33);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+0))));
}
B418b35:{NFSU2_TR(0x418b35);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B418b38:{NFSU2_TR(0x418b38);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418b3c:{NFSU2_TR(0x418b3c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L418c46;}}
}
B418b42:L418b42:{c.instructions+=5;NFSU2_TR(0x418b42);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B418b46:{NFSU2_TR(0x418b46);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418b47:{NFSU2_TR(0x418b47);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418b4b:{NFSU2_TR(0x418b4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418b4c:{NFSU2_TR(0x418b4c);
__builtin_memmove((R+16),(R+16),4);
}
B418b50:L418b50:{c.instructions+=6;NFSU2_TR(0x418b50);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B418b54:{NFSU2_TR(0x418b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418b57:{NFSU2_TR(0x418b57);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B418b5b:{NFSU2_TR(0x418b5b);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B418b5f:{NFSU2_TR(0x418b5f);
w4(R+28,u32(s32(s16(r2(R+0)))));
}
B418b62:{NFSU2_TR(0x418b62);
if(r1(R+518)){{goto L418b99;}}
}
B418b64:L418b64:{c.instructions+=3;NFSU2_TR(0x418b64);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B418b68:{NFSU2_TR(0x418b68);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B418b6c:{NFSU2_TR(0x418b6c);
if(r1(R+518)){{goto L418b99;}}
}
B418b6e:L418b6e:{c.instructions+=2;NFSU2_TR(0x418b6e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B418b70:{NFSU2_TR(0x418b70);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L418b88;}}
}
B418b72:L418b72:{c.instructions+=5;NFSU2_TR(0x418b72);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B418b79:{NFSU2_TR(0x418b79);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B418b7c:{NFSU2_TR(0x418b7c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B418b7f:{NFSU2_TR(0x418b7f);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B418b86:{NFSU2_TR(0x418b86);
{goto L418b9b;}
}
B418b88:L418b88:{c.instructions+=5;NFSU2_TR(0x418b88);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B418b8b:{NFSU2_TR(0x418b8b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B418b8d:{NFSU2_TR(0x418b8d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B418b90:{NFSU2_TR(0x418b90);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B418b97:{NFSU2_TR(0x418b97);
{goto L418b9b;}
}
B418b99:L418b99:{c.instructions+=1;NFSU2_TR(0x418b99);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B418b9b:L418b9b:{c.instructions+=2;NFSU2_TR(0x418b9b);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B418b9f:{NFSU2_TR(0x418b9f);
if(r1(R+518)){{goto L418baf;}}
}
B418ba1:L418ba1:{c.instructions+=5;NFSU2_TR(0x418ba1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418ba5:{NFSU2_TR(0x418ba5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B418ba7:{NFSU2_TR(0x418ba7);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B418bab:{NFSU2_TR(0x418bab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B418bad:{NFSU2_TR(0x418bad);
if(r1(R+518)){{goto L418bbc;}}
}
B418baf:L418baf:{c.instructions+=5;NFSU2_TR(0x418baf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B418bb3:{NFSU2_TR(0x418bb3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418bb4:{NFSU2_TR(0x418bb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418bb5:{NFSU2_TR(0x418bb5);
__builtin_memmove((R+4),(R+24),4);
}
B418bb7:{NFSU2_TR(0x418bb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418bbcull));
TAIL_STATIC(0x411ce0u,411);
}
B418bbc:L418bbc:{c.instructions+=2;NFSU2_TR(0x418bbc);
__builtin_memmove((R+4),(R+20),4);
}
B418bbe:{NFSU2_TR(0x418bbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418bc3ull));
TAIL_STATIC(0x5d8920u,5d8);
}
B418bc3:L418bc3:{c.instructions+=2;NFSU2_TR(0x418bc3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B418bc5:{NFSU2_TR(0x418bc5);
if(r1(R+518)){{goto L418bd6;}}
}
B418bc7:L418bc7:{c.instructions+=2;NFSU2_TR(0x418bc7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B418bce:{NFSU2_TR(0x418bce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L418bd6;}}
}
B418bd0:L418bd0:{c.instructions+=1;NFSU2_TR(0x418bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418bd6:L418bd6:{c.instructions+=3;NFSU2_TR(0x418bd6);
__builtin_memmove((R+4),(R+20),4);
}
B418bd8:{NFSU2_TR(0x418bd8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B418bda:{NFSU2_TR(0x418bda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418bdfull));
TAIL_STATIC(0x5d4380u,5d4);
}
B418bdf:L418bdf:{c.instructions+=2;NFSU2_TR(0x418bdf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B418be1:{NFSU2_TR(0x418be1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L418c2d;}}
}
B418be3:L418be3:{c.instructions+=3;NFSU2_TR(0x418be3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418be4:{NFSU2_TR(0x418be4);
__builtin_memmove((R+4),(R+20),4);
}
B418be6:{NFSU2_TR(0x418be6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418bebull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B418beb:L418beb:{c.instructions+=4;NFSU2_TR(0x418beb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B418bee:{NFSU2_TR(0x418bee);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B418bf1:{NFSU2_TR(0x418bf1);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B418bf4:{NFSU2_TR(0x418bf4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L418c05;}}
}
B418bf6:L418bf6:{c.instructions+=2;NFSU2_TR(0x418bf6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B418bfd:{NFSU2_TR(0x418bfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L418c05;}}
}
B418bff:L418bff:{c.instructions+=1;NFSU2_TR(0x418bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418c05:L418c05:{c.instructions+=4;NFSU2_TR(0x418c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B418c08:{NFSU2_TR(0x418c08);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B418c0b:{NFSU2_TR(0x418c0b);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B418c0e:{NFSU2_TR(0x418c0e);
if(r1(R+518)){{goto L418c21;}}
}
B418c10:L418c10:{c.instructions+=3;NFSU2_TR(0x418c10);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B418c16:{NFSU2_TR(0x418c16);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B418c18:{NFSU2_TR(0x418c18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L418c21;}}
}
B418c1a:L418c1a:{c.instructions+=1;NFSU2_TR(0x418c1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B418c21:L418c21:{c.instructions+=3;NFSU2_TR(0x418c21);
__builtin_memmove((R+4),(R+20),4);
}
B418c23:{NFSU2_TR(0x418c23);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B418c24:{NFSU2_TR(0x418c24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418c29ull));
TAIL_STATIC(0x5d4380u,5d4);
}
B418c29:L418c29:{c.instructions+=2;NFSU2_TR(0x418c29);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B418c2b:{NFSU2_TR(0x418c2b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x418be3u);}goto L418be3;}}
}
B418c2d:L418c2d:{c.instructions+=7;NFSU2_TR(0x418c2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418c31:{NFSU2_TR(0x418c31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418c34:{NFSU2_TR(0x418c34);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B418c35:{NFSU2_TR(0x418c35);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B418c38:{NFSU2_TR(0x418c38);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B418c3a:{NFSU2_TR(0x418c3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418c3e:{NFSU2_TR(0x418c3e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x418b50u);}goto L418b50;}}
}
B418c44:L418c44:{c.instructions+=2;NFSU2_TR(0x418c44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B418c45:{NFSU2_TR(0x418c45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B418c46:L418c46:{c.instructions+=4;NFSU2_TR(0x418c46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B418c47:{NFSU2_TR(0x418c47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B418c48:{NFSU2_TR(0x418c48);
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
B418c4b:{NFSU2_TR(0x418c4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B418c50:L418c50:{c.instructions+=11;NFSU2_TR(0x418c50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418c51:{NFSU2_TR(0x418c51);
__builtin_memmove((R+20),(R+16),4);
}
B418c53:{NFSU2_TR(0x418c53);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B418c56:{NFSU2_TR(0x418c56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B418c59:{NFSU2_TR(0x418c59);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418c5a:{NFSU2_TR(0x418c5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418c5b:{NFSU2_TR(0x418c5b);
__builtin_memmove((R+24),(R+4),4);
}
B418c5d:{NFSU2_TR(0x418c5d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418c5e:{NFSU2_TR(0x418c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B418c61:{NFSU2_TR(0x418c61);
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
B418c63:{NFSU2_TR(0x418c63);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L418d92;}}
}
B418c69:L418c69:{c.instructions+=7;NFSU2_TR(0x418c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B418c6c:{NFSU2_TR(0x418c6c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B418c70:{NFSU2_TR(0x418c70);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B418c74:{NFSU2_TR(0x418c74);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+8))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B418c78:{NFSU2_TR(0x418c78);
u8 U[6];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+5,u8(!(r1(R+518))));
__builtin_memmove((U+4),(U+5),1);
s1(u32(r4(U+0)),r1(U+4));
}
B418c7d:{NFSU2_TR(0x418c7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B418c81:{NFSU2_TR(0x418c81);
if(r1(R+518)){{goto L418cbb;}}
}
B418c83:L418c83:{c.instructions+=3;NFSU2_TR(0x418c83);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B418c87:{NFSU2_TR(0x418c87);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B418c8b:{NFSU2_TR(0x418c8b);
if(r1(R+518)){{goto L418cbb;}}
}
B418c8d:L418c8d:{c.instructions+=3;NFSU2_TR(0x418c8d);
w4(R+4,u32(s32(s16(r2(R+8)))));
}
B418c90:{NFSU2_TR(0x418c90);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B418c92:{NFSU2_TR(0x418c92);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L418caa;}}
}
B418c94:L418c94:{c.instructions+=5;NFSU2_TR(0x418c94);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B418c9b:{NFSU2_TR(0x418c9b);
w4(R+8,u32(s32(s16(r2(R+0)))));
}
B418c9e:{NFSU2_TR(0x418c9e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B418ca1:{NFSU2_TR(0x418ca1);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B418ca8:{NFSU2_TR(0x418ca8);
{goto L418cbd;}
}
B418caa:L418caa:{c.instructions+=5;NFSU2_TR(0x418caa);
w4(R+8,u32(s32(s16(r2(R+0)))));
}
B418cad:{NFSU2_TR(0x418cad);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B418caf:{NFSU2_TR(0x418caf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B418cb2:{NFSU2_TR(0x418cb2);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B418cb9:{NFSU2_TR(0x418cb9);
{goto L418cbd;}
}
B418cbb:L418cbb:{c.instructions+=1;NFSU2_TR(0x418cbb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B418cbd:L418cbd:{c.instructions+=2;NFSU2_TR(0x418cbd);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0xffffull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B418cc3:{NFSU2_TR(0x418cc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L418d92;}}
}
B418cc9:L418cc9:{c.instructions+=4;NFSU2_TR(0x418cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418ccc:{NFSU2_TR(0x418ccc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1f80000ull))));
}
B418cd1:{NFSU2_TR(0x418cd1);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1f80000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1f80000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1f80000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B418cd6:{NFSU2_TR(0x418cd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L418d92;}}
}
B418cdc:L418cdc:{c.instructions+=3;NFSU2_TR(0x418cdc);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B418ce0:{NFSU2_TR(0x418ce0);
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
B418ce2:{NFSU2_TR(0x418ce2);
if(r1(R+518)){{goto L418d92;}}
}
B418ce8:L418ce8:{c.instructions+=3;NFSU2_TR(0x418ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418ceb:{NFSU2_TR(0x418ceb);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B418cef:{NFSU2_TR(0x418cef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418cf4ull));
TAIL_STATIC(0x5ec0d0u,5ec);
}
B418cf4:L418cf4:{c.instructions+=15;NFSU2_TR(0x418cf4);
{u32 ea_=u32(r4(R+12)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418cf7:{NFSU2_TR(0x418cf7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B418cf9:{NFSU2_TR(0x418cf9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B418cfb:{NFSU2_TR(0x418cfb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B418cfe:{NFSU2_TR(0x418cfe);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B418d02:{NFSU2_TR(0x418d02);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B418d03:{NFSU2_TR(0x418d03);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B418d05:{NFSU2_TR(0x418d05);
__builtin_memmove((R+28),(R+4),4);
}
B418d07:{NFSU2_TR(0x418d07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418d08:{NFSU2_TR(0x418d08);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418d0a:{NFSU2_TR(0x418d0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418d0b:{NFSU2_TR(0x418d0b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B418d0e:{NFSU2_TR(0x418d0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418d0f:{NFSU2_TR(0x418d0f);
__builtin_memmove((R+4),(R+12),4);
}
B418d11:{NFSU2_TR(0x418d11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418d16ull));
TAIL_STATIC(0x4122c0u,412);
}
B418d16:L418d16:{c.instructions+=12;NFSU2_TR(0x418d16);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418d1a:{NFSU2_TR(0x418d1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418d1e:{NFSU2_TR(0x418d1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418d1f:{NFSU2_TR(0x418d1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418d23:{NFSU2_TR(0x418d23);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418d27:{NFSU2_TR(0x418d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B418d2a:{NFSU2_TR(0x418d2a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418d2c:{NFSU2_TR(0x418d2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418d2d:{NFSU2_TR(0x418d2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B418d31:{NFSU2_TR(0x418d31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418d32:{NFSU2_TR(0x418d32);
__builtin_memmove((R+4),(R+24),4);
}
B418d34:{NFSU2_TR(0x418d34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418d39ull));
TAIL_STATIC(0x4122c0u,412);
}
B418d39:L418d39:{c.instructions+=6;NFSU2_TR(0x418d39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418d3c:{NFSU2_TR(0x418d3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B418d40:{NFSU2_TR(0x418d40);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418d44:{NFSU2_TR(0x418d44);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418d45:{NFSU2_TR(0x418d45);
__builtin_memmove((R+4),(R+24),4);
}
B418d47:{NFSU2_TR(0x418d47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418d4cull));
TAIL_STATIC(0x40ae30u,40a);
}
B418d4c:L418d4c:{c.instructions+=4;NFSU2_TR(0x418d4c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B418d50:{NFSU2_TR(0x418d50);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B418d55:{NFSU2_TR(0x418d55);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B418d57:{NFSU2_TR(0x418d57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L418d62;}}
}
B418d59:L418d59:{c.instructions+=3;NFSU2_TR(0x418d59);
__builtin_memmove((R+0),gp(0x890108),4);
}
B418d5e:{NFSU2_TR(0x418d5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B418d60:{NFSU2_TR(0x418d60);
if(r1(R+518)){{goto L418d7a;}}
}
B418d62:L418d62:{c.instructions+=4;NFSU2_TR(0x418d62);
{u32 ea_=u32(u32(7879788u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B418d68:{NFSU2_TR(0x418d68);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B418d6a:{NFSU2_TR(0x418d6a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B418d6d:{NFSU2_TR(0x418d6d);
if(r1(R+518)){{goto L418d92;}}
}
B418d6f:L418d6f:{c.instructions+=7;NFSU2_TR(0x418d6f);
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
B418d71:{NFSU2_TR(0x418d71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B418d72:{NFSU2_TR(0x418d72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B418d73:{NFSU2_TR(0x418d73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B418d74:{NFSU2_TR(0x418d74);
__builtin_memmove((R+16),(R+20),4);
}
B418d76:{NFSU2_TR(0x418d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B418d77:{NFSU2_TR(0x418d77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B418d7a:L418d7a:{c.instructions+=4;NFSU2_TR(0x418d7a);
{u32 ea_=u32(u32(7879792u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B418d80:{NFSU2_TR(0x418d80);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B418d82:{NFSU2_TR(0x418d82);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B418d85:{NFSU2_TR(0x418d85);
if(r1(R+518)){{goto L418d92;}}
}
B418d87:L418d87:{c.instructions+=7;NFSU2_TR(0x418d87);
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
B418d89:{NFSU2_TR(0x418d89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B418d8a:{NFSU2_TR(0x418d8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B418d8b:{NFSU2_TR(0x418d8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B418d8c:{NFSU2_TR(0x418d8c);
__builtin_memmove((R+16),(R+20),4);
}
B418d8e:{NFSU2_TR(0x418d8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B418d8f:{NFSU2_TR(0x418d8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B418d92:L418d92:{c.instructions+=7;NFSU2_TR(0x418d92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B418d93:{NFSU2_TR(0x418d93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B418d94:{NFSU2_TR(0x418d94);
w1(R+0,u8(0x1ull));
}
B418d96:{NFSU2_TR(0x418d96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B418d97:{NFSU2_TR(0x418d97);
__builtin_memmove((R+16),(R+20),4);
}
B418d99:{NFSU2_TR(0x418d99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B418d9a:{NFSU2_TR(0x418d9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B418da0:L418da0:{c.instructions+=11;NFSU2_TR(0x418da0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418da1:{NFSU2_TR(0x418da1);
__builtin_memmove((R+20),(R+16),4);
}
B418da3:{NFSU2_TR(0x418da3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B418da6:{NFSU2_TR(0x418da6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B418dac:{NFSU2_TR(0x418dac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418dad:{NFSU2_TR(0x418dad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418dae:{NFSU2_TR(0x418dae);
__builtin_memmove((R+24),(R+4),4);
}
B418db0:{NFSU2_TR(0x418db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418db3:{NFSU2_TR(0x418db3);
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
B418db5:{NFSU2_TR(0x418db5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418db6:{NFSU2_TR(0x418db6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L418fed;}}
}
B418dbc:L418dbc:{c.instructions+=10;NFSU2_TR(0x418dbc);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B418dc0:{NFSU2_TR(0x418dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B418dc3:{NFSU2_TR(0x418dc3);
{u32 ea_=u32(r4(R+12)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418dc6:{NFSU2_TR(0x418dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418dc9:{NFSU2_TR(0x418dc9);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B418dcc:{NFSU2_TR(0x418dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418dcf:{NFSU2_TR(0x418dcf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B418dd2:{NFSU2_TR(0x418dd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B418dda:{NFSU2_TR(0x418dda);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B418dde:{NFSU2_TR(0x418dde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418de3ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B418de3:L418de3:{c.instructions+=2;NFSU2_TR(0x418de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418de6:{NFSU2_TR(0x418de6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418debull));
TAIL_STATIC(0x5ec0d0u,5ec);
}
B418deb:L418deb:{c.instructions+=8;NFSU2_TR(0x418deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418dee:{NFSU2_TR(0x418dee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418df0:{NFSU2_TR(0x418df0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418df2:{NFSU2_TR(0x418df2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418df3:{NFSU2_TR(0x418df3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B418df7:{NFSU2_TR(0x418df7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418df8:{NFSU2_TR(0x418df8);
__builtin_memmove((R+4),(R+28),4);
}
B418dfa:{NFSU2_TR(0x418dfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418dffull));
TAIL_STATIC(0x4122c0u,412);
}
B418dff:L418dff:{c.instructions+=8;NFSU2_TR(0x418dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418e02:{NFSU2_TR(0x418e02);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418e04:{NFSU2_TR(0x418e04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418e06:{NFSU2_TR(0x418e06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418e07:{NFSU2_TR(0x418e07);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B418e0b:{NFSU2_TR(0x418e0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418e0c:{NFSU2_TR(0x418e0c);
__builtin_memmove((R+4),(R+12),4);
}
B418e0e:{NFSU2_TR(0x418e0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418e13ull));
TAIL_STATIC(0x4122c0u,412);
}
B418e13:L418e13:{c.instructions+=3;NFSU2_TR(0x418e13);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B418e1b:{NFSU2_TR(0x418e1b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B418e1d:{NFSU2_TR(0x418e1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B418e25:L418e25:{c.instructions+=9;NFSU2_TR(0x418e25);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B418e29:{NFSU2_TR(0x418e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418e2c:{NFSU2_TR(0x418e2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418e2d:{NFSU2_TR(0x418e2d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418e2f:{NFSU2_TR(0x418e2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418e30:{NFSU2_TR(0x418e30);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B418e34:{NFSU2_TR(0x418e34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418e35:{NFSU2_TR(0x418e35);
__builtin_memmove((R+4),(R+28),4);
}
B418e37:{NFSU2_TR(0x418e37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418e3cull));
TAIL_STATIC(0x4122c0u,412);
}
B418e3c:L418e3c:{c.instructions+=13;NFSU2_TR(0x418e3c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418e40:{NFSU2_TR(0x418e40);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B418e44:{NFSU2_TR(0x418e44);
{u32 ea_=u32(r4(R+12)+r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B418e48:{NFSU2_TR(0x418e48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418e4b:{NFSU2_TR(0x418e4b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418e4f:{NFSU2_TR(0x418e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418e52:{NFSU2_TR(0x418e52);
{u32 ea_=u32(r4(R+12)+r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B418e56:{NFSU2_TR(0x418e56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418e57:{NFSU2_TR(0x418e57);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418e59:{NFSU2_TR(0x418e59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418e5a:{NFSU2_TR(0x418e5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B418e5e:{NFSU2_TR(0x418e5e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418e5f:{NFSU2_TR(0x418e5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418e64ull));
TAIL_STATIC(0x4122c0u,412);
}
B418e64:L418e64:{c.instructions+=12;NFSU2_TR(0x418e64);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418e68:{NFSU2_TR(0x418e68);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B418e6c:{NFSU2_TR(0x418e6c);
{u32 ea_=u32(r4(R+12)+r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B418e70:{NFSU2_TR(0x418e70);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418e74:{NFSU2_TR(0x418e74);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418e78:{NFSU2_TR(0x418e78);
{u32 ea_=u32(r4(R+12)+r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B418e7c:{NFSU2_TR(0x418e7c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B418e7d:{NFSU2_TR(0x418e7d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B418e80:{NFSU2_TR(0x418e80);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B418e81:{NFSU2_TR(0x418e81);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418e85:{NFSU2_TR(0x418e85);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418e89:{NFSU2_TR(0x418e89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x418e25u);}goto L418e25;}}
}
B418e8b:L418e8b:{c.instructions+=3;NFSU2_TR(0x418e8b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418e8f:{NFSU2_TR(0x418e8f);
{u32 ea_=u32(u32(7879784u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B418e95:{NFSU2_TR(0x418e95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418e9aull));
TAIL_STATIC(0x75bed4u,75b);
}
B418e9a:L418e9a:{c.instructions+=5;NFSU2_TR(0x418e9a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B418e9b:{NFSU2_TR(0x418e9b);
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
B418e9d:{NFSU2_TR(0x418e9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418ea1:{NFSU2_TR(0x418ea1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B418ea9:{NFSU2_TR(0x418ea9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L418fed;}}
}
B418eaf:L418eaf:{c.instructions+=1;NFSU2_TR(0x418eaf);
}
B418eb0:L418eb0:{c.instructions+=2;NFSU2_TR(0x418eb0);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x28ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x28ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B418eb4:{NFSU2_TR(0x418eb4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L418fed;}}
}
B418eba:L418eba:{c.instructions+=16;NFSU2_TR(0x418eba);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B418ebe:{NFSU2_TR(0x418ebe);
{u32 ea_=u32(u32(7879784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418ec4:{NFSU2_TR(0x418ec4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B418ec8:{NFSU2_TR(0x418ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418ecb:{NFSU2_TR(0x418ecb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B418ecd:{NFSU2_TR(0x418ecd);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B418ed1:{NFSU2_TR(0x418ed1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B418ed5:{NFSU2_TR(0x418ed5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418ed9:{NFSU2_TR(0x418ed9);
__builtin_memmove((R+4),(R+28),4);
}
B418edb:{NFSU2_TR(0x418edb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B418ee3:{NFSU2_TR(0x418ee3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B418eeb:{NFSU2_TR(0x418eeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B418ef3:{NFSU2_TR(0x418ef3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B418efb:{NFSU2_TR(0x418efb);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B418f03:{NFSU2_TR(0x418f03);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418f07:{NFSU2_TR(0x418f07);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418f0aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B418f0a:L418f0a:{c.instructions+=6;NFSU2_TR(0x418f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418f0d:{NFSU2_TR(0x418f0d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x28ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B418f10:{NFSU2_TR(0x418f10);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418f14:{NFSU2_TR(0x418f14);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B418f17:{NFSU2_TR(0x418f17);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B418f1b:{NFSU2_TR(0x418f1b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L418fcd;}}
}
B418f21:L418f21:{c.instructions+=3;NFSU2_TR(0x418f21);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418f25:{NFSU2_TR(0x418f25);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B418f27:{NFSU2_TR(0x418f27);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L418f32;}}
}
B418f29:L418f29:{c.instructions+=2;NFSU2_TR(0x418f29);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B418f30:{NFSU2_TR(0x418f30);
{goto L418f34;}
}
B418f32:L418f32:{c.instructions+=1;NFSU2_TR(0x418f32);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B418f34:L418f34:{c.instructions+=7;NFSU2_TR(0x418f34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418f35:{NFSU2_TR(0x418f35);
__builtin_memmove((R+0),(R+12),4);
}
B418f37:{NFSU2_TR(0x418f37);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B418f3a:{NFSU2_TR(0x418f3a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B418f41:{NFSU2_TR(0x418f41);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418f42:{NFSU2_TR(0x418f42);
__builtin_memmove((R+4),(R+24),4);
}
B418f44:{NFSU2_TR(0x418f44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418f49ull));
TAIL_STATIC(0x411b50u,411);
}
B418f49:L418f49:{c.instructions+=23;NFSU2_TR(0x418f49);
u8 U[6];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B418f4e:{NFSU2_TR(0x418f4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418f52:{NFSU2_TR(0x418f52);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B418f56:{NFSU2_TR(0x418f56);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B418f5a:{NFSU2_TR(0x418f5a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B418f5e:{NFSU2_TR(0x418f5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B418f62:{NFSU2_TR(0x418f62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418f65:{NFSU2_TR(0x418f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418f68:{NFSU2_TR(0x418f68);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B418f6b:{NFSU2_TR(0x418f6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B418f6f:{NFSU2_TR(0x418f6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B418f72:{NFSU2_TR(0x418f72);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B418f74:{NFSU2_TR(0x418f74);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B418f78:{NFSU2_TR(0x418f78);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418f7b:{NFSU2_TR(0x418f7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B418f7f:{NFSU2_TR(0x418f7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418f82:{NFSU2_TR(0x418f82);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B418f86:{NFSU2_TR(0x418f86);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B418f8a:{NFSU2_TR(0x418f8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B418f91:{NFSU2_TR(0x418f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418f94:{NFSU2_TR(0x418f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418f97:{NFSU2_TR(0x418f97);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x28ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x28ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B418f9a:{NFSU2_TR(0x418f9a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L418fc5;}}
}
B418f9c:L418f9c:{c.instructions+=4;NFSU2_TR(0x418f9c);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B418fa0:{NFSU2_TR(0x418fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418fa3:{NFSU2_TR(0x418fa3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B418fa5:{NFSU2_TR(0x418fa5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L418fc0;}}
}
B418fa7:L418fa7:{c.instructions+=7;NFSU2_TR(0x418fa7);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B418fab:{NFSU2_TR(0x418fab);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B418faf:{NFSU2_TR(0x418faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418fb2:{NFSU2_TR(0x418fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418fb5:{NFSU2_TR(0x418fb5);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B418fb9:{NFSU2_TR(0x418fb9);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B418fbd:{NFSU2_TR(0x418fbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418fc0:L418fc0:{c.instructions+=2;NFSU2_TR(0x418fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B418fc3:{NFSU2_TR(0x418fc3);
{goto L418fcd;}
}
B418fc5:L418fc5:{c.instructions+=4;NFSU2_TR(0x418fc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B418fc7:{NFSU2_TR(0x418fc7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B418fc9:{NFSU2_TR(0x418fc9);
__builtin_memmove((R+4),(R+0),4);
}
B418fcb:{NFSU2_TR(0x418fcb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x418fcdull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B418fcd:L418fcd:{c.instructions+=9;NFSU2_TR(0x418fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418fd0:{NFSU2_TR(0x418fd0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B418fd4:{NFSU2_TR(0x418fd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B418fd8:{NFSU2_TR(0x418fd8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B418fdc:{NFSU2_TR(0x418fdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B418fe0:{NFSU2_TR(0x418fe0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B418fe1:{NFSU2_TR(0x418fe1);
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
B418fe3:{NFSU2_TR(0x418fe3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B418fe7:{NFSU2_TR(0x418fe7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x418eb0u);}goto L418eb0;}}
}
B418fed:L418fed:{c.instructions+=6;NFSU2_TR(0x418fed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B418fee:{NFSU2_TR(0x418fee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B418fef:{NFSU2_TR(0x418fef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B418ff0:{NFSU2_TR(0x418ff0);
__builtin_memmove((R+16),(R+20),4);
}
B418ff2:{NFSU2_TR(0x418ff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B418ff3:{NFSU2_TR(0x418ff3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x418,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
