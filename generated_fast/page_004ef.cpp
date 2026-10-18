#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_497(u8* __restrict R,Cpu& c);
u32 body_498(u8* __restrict R,Cpu& c);
u32 body_4a0(u8* __restrict R,Cpu& c);
u32 body_4b2(u8* __restrict R,Cpu& c);
u32 body_4b8(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4cd(u8* __restrict R,Cpu& c);
u32 body_4ce(u8* __restrict R,Cpu& c);
u32 body_4cf(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4e2(u8* __restrict R,Cpu& c);
u32 body_4e3(u8* __restrict R,Cpu& c);
u32 body_4ee(u8* __restrict R,Cpu& c);
u32 body_4f0(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_556(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4ef,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4ef,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4ef(u8* __restrict R,Cpu& c);
u32 page_4ef(Cpu& c){return body_4ef(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4ef(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4ef000:goto L4ef000;
case 0x4ef003:c.instructions+=5;goto B4ef003;
case 0x4ef009:c.instructions+=4;goto B4ef009;
case 0x4ef00c:c.instructions+=3;goto B4ef00c;
case 0x4ef00d:c.instructions+=2;goto B4ef00d;
case 0x4ef012:c.instructions+=1;goto B4ef012;
case 0x4ef017:goto L4ef017;
case 0x4ef018:c.instructions+=2;goto B4ef018;
case 0x4ef01a:c.instructions+=1;goto B4ef01a;
case 0x4ef01f:goto L4ef01f;
case 0x4ef024:c.instructions+=3;goto B4ef024;
case 0x4ef027:c.instructions+=2;goto B4ef027;
case 0x4ef028:c.instructions+=1;goto B4ef028;
case 0x4ef02a:goto L4ef02a;
case 0x4ef02f:c.instructions+=1;goto B4ef02f;
case 0x4ef031:goto L4ef031;
case 0x4ef038:c.instructions+=4;goto B4ef038;
case 0x4ef03b:c.instructions+=3;goto B4ef03b;
case 0x4ef040:c.instructions+=2;goto B4ef040;
case 0x4ef041:c.instructions+=1;goto B4ef041;
case 0x4ef043:goto L4ef043;
case 0x4ef048:goto L4ef048;
case 0x4ef049:c.instructions+=1;goto B4ef049;
case 0x4ef04e:goto L4ef04e;
case 0x4ef051:c.instructions+=3;goto B4ef051;
case 0x4ef056:c.instructions+=2;goto B4ef056;
case 0x4ef057:c.instructions+=1;goto B4ef057;
case 0x4ef05c:goto L4ef05c;
case 0x4ef05d:c.instructions+=1;goto B4ef05d;
case 0x4ef062:goto L4ef062;
case 0x4ef065:c.instructions+=2;goto B4ef065;
case 0x4ef066:c.instructions+=1;goto B4ef066;
case 0x4ef069:goto L4ef069;
case 0x4ef06e:goto L4ef06e;
case 0x4ef06f:c.instructions+=1;goto B4ef06f;
case 0x4ef074:goto L4ef074;
case 0x4ef077:c.instructions+=3;goto B4ef077;
case 0x4ef07c:c.instructions+=2;goto B4ef07c;
case 0x4ef07d:c.instructions+=1;goto B4ef07d;
case 0x4ef082:goto L4ef082;
case 0x4ef083:c.instructions+=1;goto B4ef083;
case 0x4ef088:goto L4ef088;
case 0x4ef08b:goto L4ef08b;
case 0x4ef08c:c.instructions+=1;goto B4ef08c;
case 0x4ef090:goto L4ef090;
case 0x4ef091:c.instructions+=6;goto B4ef091;
case 0x4ef092:c.instructions+=5;goto B4ef092;
case 0x4ef094:c.instructions+=4;goto B4ef094;
case 0x4ef097:c.instructions+=3;goto B4ef097;
case 0x4ef099:c.instructions+=2;goto B4ef099;
case 0x4ef09a:c.instructions+=1;goto B4ef09a;
case 0x4ef09c:goto L4ef09c;
case 0x4ef09f:c.instructions+=1;goto B4ef09f;
case 0x4ef0a1:goto L4ef0a1;
case 0x4ef0a7:c.instructions+=3;goto B4ef0a7;
case 0x4ef0ac:c.instructions+=2;goto B4ef0ac;
case 0x4ef0ae:c.instructions+=1;goto B4ef0ae;
case 0x4ef0b0:goto L4ef0b0;
case 0x4ef0b2:goto L4ef0b2;
case 0x4ef0b5:c.instructions+=4;goto B4ef0b5;
case 0x4ef0bb:c.instructions+=3;goto B4ef0bb;
case 0x4ef0bc:c.instructions+=2;goto B4ef0bc;
case 0x4ef0be:c.instructions+=1;goto B4ef0be;
case 0x4ef0c3:goto L4ef0c3;
case 0x4ef0c5:c.instructions+=1;goto B4ef0c5;
case 0x4ef0cb:goto L4ef0cb;
case 0x4ef0cc:c.instructions+=2;goto B4ef0cc;
case 0x4ef0ce:c.instructions+=1;goto B4ef0ce;
case 0x4ef0d3:goto L4ef0d3;
case 0x4ef0d5:c.instructions+=1;goto B4ef0d5;
case 0x4ef0db:goto L4ef0db;
case 0x4ef0df:c.instructions+=3;goto B4ef0df;
case 0x4ef0e0:c.instructions+=2;goto B4ef0e0;
case 0x4ef0e3:c.instructions+=1;goto B4ef0e3;
case 0x4ef0e5:goto L4ef0e5;
case 0x4ef0e8:c.instructions+=2;goto B4ef0e8;
case 0x4ef0ea:c.instructions+=1;goto B4ef0ea;
case 0x4ef0ec:goto L4ef0ec;
case 0x4ef0ef:c.instructions+=1;goto B4ef0ef;
case 0x4ef0f1:goto L4ef0f1;
case 0x4ef0f3:goto L4ef0f3;
case 0x4ef0f5:c.instructions+=2;goto B4ef0f5;
case 0x4ef0f7:c.instructions+=1;goto B4ef0f7;
case 0x4ef0f9:goto L4ef0f9;
case 0x4ef0fe:c.instructions+=1;goto B4ef0fe;
case 0x4ef100:goto L4ef100;
case 0x4ef105:goto L4ef105;
case 0x4ef10a:goto L4ef10a;
case 0x4ef10b:c.instructions+=2;goto B4ef10b;
case 0x4ef10d:c.instructions+=1;goto B4ef10d;
case 0x4ef112:goto L4ef112;
case 0x4ef114:c.instructions+=1;goto B4ef114;
case 0x4ef116:goto L4ef116;
case 0x4ef119:c.instructions+=1;goto B4ef119;
case 0x4ef11b:goto L4ef11b;
case 0x4ef11d:goto L4ef11d;
case 0x4ef11f:c.instructions+=6;goto B4ef11f;
case 0x4ef122:c.instructions+=5;goto B4ef122;
case 0x4ef124:c.instructions+=4;goto B4ef124;
case 0x4ef127:c.instructions+=3;goto B4ef127;
case 0x4ef12a:c.instructions+=2;goto B4ef12a;
case 0x4ef12c:c.instructions+=1;goto B4ef12c;
case 0x4ef12e:goto L4ef12e;
case 0x4ef130:c.instructions+=2;goto B4ef130;
case 0x4ef132:c.instructions+=1;goto B4ef132;
case 0x4ef134:goto L4ef134;
case 0x4ef137:c.instructions+=8;goto B4ef137;
case 0x4ef138:c.instructions+=7;goto B4ef138;
case 0x4ef139:c.instructions+=6;goto B4ef139;
case 0x4ef13a:c.instructions+=5;goto B4ef13a;
case 0x4ef13d:c.instructions+=4;goto B4ef13d;
case 0x4ef13f:c.instructions+=3;goto B4ef13f;
case 0x4ef140:c.instructions+=2;goto B4ef140;
case 0x4ef141:c.instructions+=1;goto B4ef141;
case 0x4ef146:goto L4ef146;
case 0x4ef147:c.instructions+=2;goto B4ef147;
case 0x4ef149:c.instructions+=1;goto B4ef149;
case 0x4ef14e:goto L4ef14e;
case 0x4ef150:c.instructions+=1;goto B4ef150;
case 0x4ef152:goto L4ef152;
case 0x4ef155:c.instructions+=1;goto B4ef155;
case 0x4ef157:goto L4ef157;
case 0x4ef159:goto L4ef159;
case 0x4ef15b:c.instructions+=6;goto B4ef15b;
case 0x4ef15e:c.instructions+=5;goto B4ef15e;
case 0x4ef160:c.instructions+=4;goto B4ef160;
case 0x4ef163:c.instructions+=3;goto B4ef163;
case 0x4ef166:c.instructions+=2;goto B4ef166;
case 0x4ef168:c.instructions+=1;goto B4ef168;
case 0x4ef16a:goto L4ef16a;
case 0x4ef16c:c.instructions+=2;goto B4ef16c;
case 0x4ef16e:c.instructions+=1;goto B4ef16e;
case 0x4ef170:goto L4ef170;
case 0x4ef176:c.instructions+=6;goto B4ef176;
case 0x4ef17c:c.instructions+=5;goto B4ef17c;
case 0x4ef181:c.instructions+=4;goto B4ef181;
case 0x4ef187:c.instructions+=3;goto B4ef187;
case 0x4ef189:c.instructions+=2;goto B4ef189;
case 0x4ef18e:c.instructions+=1;goto B4ef18e;
case 0x4ef193:goto L4ef193;
case 0x4ef194:c.instructions+=5;goto B4ef194;
case 0x4ef195:c.instructions+=4;goto B4ef195;
case 0x4ef197:c.instructions+=3;goto B4ef197;
case 0x4ef198:c.instructions+=2;goto B4ef198;
case 0x4ef199:c.instructions+=1;goto B4ef199;
case 0x4ef19e:goto L4ef19e;
case 0x4ef19f:c.instructions+=3;goto B4ef19f;
case 0x4ef1a0:c.instructions+=2;goto B4ef1a0;
case 0x4ef1a1:c.instructions+=1;goto B4ef1a1;
case 0x4ef1b0:goto L4ef1b0;
case 0x4ef1b2:c.instructions+=8;goto B4ef1b2;
case 0x4ef1b7:c.instructions+=7;goto B4ef1b7;
case 0x4ef1bd:c.instructions+=6;goto B4ef1bd;
case 0x4ef1be:c.instructions+=5;goto B4ef1be;
case 0x4ef1c5:c.instructions+=4;goto B4ef1c5;
case 0x4ef1c6:c.instructions+=3;goto B4ef1c6;
case 0x4ef1cb:c.instructions+=2;goto B4ef1cb;
case 0x4ef1cd:c.instructions+=1;goto B4ef1cd;
case 0x4ef1cf:goto L4ef1cf;
case 0x4ef1d4:c.instructions+=6;goto B4ef1d4;
case 0x4ef1d7:c.instructions+=5;goto B4ef1d7;
case 0x4ef1d8:c.instructions+=4;goto B4ef1d8;
case 0x4ef1de:c.instructions+=3;goto B4ef1de;
case 0x4ef1df:c.instructions+=2;goto B4ef1df;
case 0x4ef1e5:c.instructions+=1;goto B4ef1e5;
case 0x4ef1e7:goto L4ef1e7;
case 0x4ef1ec:c.instructions+=1;goto B4ef1ec;
case 0x4ef1ee:goto L4ef1ee;
case 0x4ef1f4:c.instructions+=1;goto B4ef1f4;
case 0x4ef1fa:goto L4ef1fa;
case 0x4ef1fc:c.instructions+=1;goto B4ef1fc;
case 0x4ef201:goto L4ef201;
case 0x4ef204:c.instructions+=4;goto B4ef204;
case 0x4ef208:c.instructions+=3;goto B4ef208;
case 0x4ef20a:c.instructions+=2;goto B4ef20a;
case 0x4ef212:c.instructions+=1;goto B4ef212;
case 0x4ef214:goto L4ef214;
case 0x4ef215:c.instructions+=3;goto B4ef215;
case 0x4ef216:c.instructions+=2;goto B4ef216;
case 0x4ef218:c.instructions+=1;goto B4ef218;
case 0x4ef21d:goto L4ef21d;
case 0x4ef21f:goto L4ef21f;
case 0x4ef221:goto L4ef221;
case 0x4ef227:c.instructions+=5;goto B4ef227;
case 0x4ef228:c.instructions+=4;goto B4ef228;
case 0x4ef22a:c.instructions+=3;goto B4ef22a;
case 0x4ef232:c.instructions+=2;goto B4ef232;
case 0x4ef237:c.instructions+=1;goto B4ef237;
case 0x4ef23c:goto L4ef23c;
case 0x4ef242:c.instructions+=3;goto B4ef242;
case 0x4ef243:c.instructions+=2;goto B4ef243;
case 0x4ef246:c.instructions+=1;goto B4ef246;
case 0x4ef247:goto L4ef247;
case 0x4ef24b:c.instructions+=3;goto B4ef24b;
case 0x4ef252:c.instructions+=2;goto B4ef252;
case 0x4ef255:c.instructions+=1;goto B4ef255;
case 0x4ef260:goto L4ef260;
case 0x4ef261:c.instructions+=2;goto B4ef261;
case 0x4ef263:c.instructions+=1;goto B4ef263;
case 0x4ef268:goto L4ef268;
case 0x4ef26d:c.instructions+=1;goto B4ef26d;
case 0x4ef26f:goto L4ef26f;
case 0x4ef270:c.instructions+=1;goto B4ef270;
case 0x4ef275:goto L4ef275;
case 0x4ef278:goto L4ef278;
case 0x4ef27a:c.instructions+=2;goto B4ef27a;
case 0x4ef27b:c.instructions+=1;goto B4ef27b;
case 0x4ef280:goto L4ef280;
case 0x4ef281:c.instructions+=12;goto B4ef281;
case 0x4ef283:c.instructions+=11;goto B4ef283;
case 0x4ef286:c.instructions+=10;goto B4ef286;
case 0x4ef288:c.instructions+=9;goto B4ef288;
case 0x4ef28d:c.instructions+=8;goto B4ef28d;
case 0x4ef293:c.instructions+=7;goto B4ef293;
case 0x4ef294:c.instructions+=6;goto B4ef294;
case 0x4ef29b:c.instructions+=5;goto B4ef29b;
case 0x4ef2a1:c.instructions+=4;goto B4ef2a1;
case 0x4ef2a6:c.instructions+=3;goto B4ef2a6;
case 0x4ef2a8:c.instructions+=2;goto B4ef2a8;
case 0x4ef2a9:c.instructions+=1;goto B4ef2a9;
case 0x4ef2af:goto L4ef2af;
case 0x4ef2b4:goto L4ef2b4;
case 0x4ef2b8:c.instructions+=1;goto B4ef2b8;
case 0x4ef2bd:goto L4ef2bd;
case 0x4ef2bf:c.instructions+=6;goto B4ef2bf;
case 0x4ef2c3:c.instructions+=5;goto B4ef2c3;
case 0x4ef2c4:c.instructions+=4;goto B4ef2c4;
case 0x4ef2c6:c.instructions+=3;goto B4ef2c6;
case 0x4ef2cb:c.instructions+=2;goto B4ef2cb;
case 0x4ef2d6:c.instructions+=1;goto B4ef2d6;
case 0x4ef2db:goto L4ef2db;
case 0x4ef2e0:c.instructions+=1;goto B4ef2e0;
case 0x4ef2e5:goto L4ef2e5;
case 0x4ef2e8:c.instructions+=2;goto B4ef2e8;
case 0x4ef2ea:c.instructions+=1;goto B4ef2ea;
case 0x4ef2ec:goto L4ef2ec;
case 0x4ef2f1:c.instructions+=1;goto B4ef2f1;
case 0x4ef2f6:goto L4ef2f6;
case 0x4ef2f9:c.instructions+=2;goto B4ef2f9;
case 0x4ef2fb:c.instructions+=1;goto B4ef2fb;
case 0x4ef2fd:goto L4ef2fd;
case 0x4ef302:c.instructions+=1;goto B4ef302;
case 0x4ef307:goto L4ef307;
case 0x4ef30a:c.instructions+=2;goto B4ef30a;
case 0x4ef30c:c.instructions+=1;goto B4ef30c;
case 0x4ef30e:goto L4ef30e;
case 0x4ef313:c.instructions+=1;goto B4ef313;
case 0x4ef318:goto L4ef318;
case 0x4ef31b:c.instructions+=2;goto B4ef31b;
case 0x4ef31d:c.instructions+=1;goto B4ef31d;
case 0x4ef31f:goto L4ef31f;
case 0x4ef322:c.instructions+=1;goto B4ef322;
case 0x4ef324:goto L4ef324;
case 0x4ef326:goto L4ef326;
case 0x4ef32a:c.instructions+=3;goto B4ef32a;
case 0x4ef32b:c.instructions+=2;goto B4ef32b;
case 0x4ef330:c.instructions+=1;goto B4ef330;
case 0x4ef335:goto L4ef335;
case 0x4ef337:c.instructions+=2;goto B4ef337;
case 0x4ef341:c.instructions+=1;goto B4ef341;
case 0x4ef343:goto L4ef343;
case 0x4ef345:c.instructions+=3;goto B4ef345;
case 0x4ef34a:c.instructions+=2;goto B4ef34a;
case 0x4ef34c:c.instructions+=1;goto B4ef34c;
case 0x4ef351:goto L4ef351;
case 0x4ef356:c.instructions+=1;goto B4ef356;
case 0x4ef35b:goto L4ef35b;
case 0x4ef35e:c.instructions+=2;goto B4ef35e;
case 0x4ef360:c.instructions+=1;goto B4ef360;
case 0x4ef362:goto L4ef362;
case 0x4ef364:c.instructions+=5;goto B4ef364;
case 0x4ef366:c.instructions+=4;goto B4ef366;
case 0x4ef368:c.instructions+=3;goto B4ef368;
case 0x4ef36d:c.instructions+=2;goto B4ef36d;
case 0x4ef36f:c.instructions+=1;goto B4ef36f;
case 0x4ef374:goto L4ef374;
case 0x4ef377:goto L4ef377;
case 0x4ef37e:c.instructions+=2;goto B4ef37e;
case 0x4ef389:c.instructions+=1;goto B4ef389;
case 0x4ef38e:goto L4ef38e;
case 0x4ef393:c.instructions+=1;goto B4ef393;
case 0x4ef398:goto L4ef398;
case 0x4ef39b:c.instructions+=4;goto B4ef39b;
case 0x4ef39f:c.instructions+=3;goto B4ef39f;
case 0x4ef3a1:c.instructions+=2;goto B4ef3a1;
case 0x4ef3ac:c.instructions+=1;goto B4ef3ac;
case 0x4ef3ae:goto L4ef3ae;
case 0x4ef3b1:c.instructions+=3;goto B4ef3b1;
case 0x4ef3b2:c.instructions+=2;goto B4ef3b2;
case 0x4ef3b4:c.instructions+=1;goto B4ef3b4;
case 0x4ef3b9:goto L4ef3b9;
case 0x4ef3c0:c.instructions+=5;goto B4ef3c0;
case 0x4ef3c7:c.instructions+=4;goto B4ef3c7;
case 0x4ef3c8:c.instructions+=3;goto B4ef3c8;
case 0x4ef3ca:c.instructions+=2;goto B4ef3ca;
case 0x4ef3cb:c.instructions+=1;goto B4ef3cb;
case 0x4ef3cc:goto L4ef3cc;
case 0x4ef3d3:c.instructions+=6;goto B4ef3d3;
case 0x4ef3d5:c.instructions+=5;goto B4ef3d5;
case 0x4ef3dc:c.instructions+=4;goto B4ef3dc;
case 0x4ef3dd:c.instructions+=3;goto B4ef3dd;
case 0x4ef3df:c.instructions+=2;goto B4ef3df;
case 0x4ef3e0:c.instructions+=1;goto B4ef3e0;
case 0x4ef3f0:goto L4ef3f0;
case 0x4ef3f2:c.instructions+=12;goto B4ef3f2;
case 0x4ef3f7:c.instructions+=11;goto B4ef3f7;
case 0x4ef3fd:c.instructions+=10;goto B4ef3fd;
case 0x4ef3fe:c.instructions+=9;goto B4ef3fe;
case 0x4ef405:c.instructions+=8;goto B4ef405;
case 0x4ef406:c.instructions+=7;goto B4ef406;
case 0x4ef40a:c.instructions+=6;goto B4ef40a;
case 0x4ef40b:c.instructions+=5;goto B4ef40b;
case 0x4ef40c:c.instructions+=4;goto B4ef40c;
case 0x4ef40e:c.instructions+=3;goto B4ef40e;
case 0x4ef40f:c.instructions+=2;goto B4ef40f;
case 0x4ef413:c.instructions+=1;goto B4ef413;
case 0x4ef418:goto L4ef418;
case 0x4ef41a:c.instructions+=10;goto B4ef41a;
case 0x4ef41c:c.instructions+=9;goto B4ef41c;
case 0x4ef420:c.instructions+=8;goto B4ef420;
case 0x4ef426:c.instructions+=7;goto B4ef426;
case 0x4ef42c:c.instructions+=6;goto B4ef42c;
case 0x4ef432:c.instructions+=5;goto B4ef432;
case 0x4ef438:c.instructions+=4;goto B4ef438;
case 0x4ef43e:c.instructions+=3;goto B4ef43e;
case 0x4ef444:c.instructions+=2;goto B4ef444;
case 0x4ef44a:c.instructions+=1;goto B4ef44a;
case 0x4ef44f:goto L4ef44f;
case 0x4ef454:c.instructions+=2;goto B4ef454;
case 0x4ef457:c.instructions+=1;goto B4ef457;
case 0x4ef45d:goto L4ef45d;
case 0x4ef462:c.instructions+=1;goto B4ef462;
case 0x4ef468:goto L4ef468;
case 0x4ef46b:c.instructions+=1;goto B4ef46b;
case 0x4ef46d:goto L4ef46d;
case 0x4ef474:c.instructions+=1;goto B4ef474;
case 0x4ef476:goto L4ef476;
case 0x4ef47d:goto L4ef47d;
case 0x4ef480:c.instructions+=4;goto B4ef480;
case 0x4ef485:c.instructions+=3;goto B4ef485;
case 0x4ef48a:c.instructions+=2;goto B4ef48a;
case 0x4ef48b:c.instructions+=1;goto B4ef48b;
case 0x4ef490:goto L4ef490;
case 0x4ef493:c.instructions+=2;goto B4ef493;
case 0x4ef494:c.instructions+=1;goto B4ef494;
case 0x4ef499:goto L4ef499;
case 0x4ef49c:c.instructions+=5;goto B4ef49c;
case 0x4ef49e:c.instructions+=4;goto B4ef49e;
case 0x4ef4a3:c.instructions+=3;goto B4ef4a3;
case 0x4ef4a8:c.instructions+=2;goto B4ef4a8;
case 0x4ef4a9:c.instructions+=1;goto B4ef4a9;
case 0x4ef4ae:goto L4ef4ae;
case 0x4ef4b1:c.instructions+=3;goto B4ef4b1;
case 0x4ef4b6:c.instructions+=2;goto B4ef4b6;
case 0x4ef4b7:c.instructions+=1;goto B4ef4b7;
case 0x4ef4bc:goto L4ef4bc;
case 0x4ef4bd:c.instructions+=1;goto B4ef4bd;
case 0x4ef4c2:goto L4ef4c2;
case 0x4ef4c5:c.instructions+=1;goto B4ef4c5;
case 0x4ef4ca:goto L4ef4ca;
case 0x4ef4cd:c.instructions+=4;goto B4ef4cd;
case 0x4ef4d2:c.instructions+=3;goto B4ef4d2;
case 0x4ef4d7:c.instructions+=2;goto B4ef4d7;
case 0x4ef4d8:c.instructions+=1;goto B4ef4d8;
case 0x4ef4dd:goto L4ef4dd;
case 0x4ef4e0:c.instructions+=2;goto B4ef4e0;
case 0x4ef4e1:c.instructions+=1;goto B4ef4e1;
case 0x4ef4e6:goto L4ef4e6;
case 0x4ef4e9:c.instructions+=5;goto B4ef4e9;
case 0x4ef4eb:c.instructions+=4;goto B4ef4eb;
case 0x4ef4f0:c.instructions+=3;goto B4ef4f0;
case 0x4ef4f5:c.instructions+=2;goto B4ef4f5;
case 0x4ef4f6:c.instructions+=1;goto B4ef4f6;
case 0x4ef4fb:goto L4ef4fb;
case 0x4ef4fe:c.instructions+=3;goto B4ef4fe;
case 0x4ef503:c.instructions+=2;goto B4ef503;
case 0x4ef504:c.instructions+=1;goto B4ef504;
case 0x4ef509:goto L4ef509;
case 0x4ef50a:c.instructions+=1;goto B4ef50a;
case 0x4ef50f:goto L4ef50f;
case 0x4ef512:c.instructions+=1;goto B4ef512;
case 0x4ef517:goto L4ef517;
case 0x4ef51e:c.instructions+=5;goto B4ef51e;
case 0x4ef523:c.instructions+=4;goto B4ef523;
case 0x4ef529:c.instructions+=3;goto B4ef529;
case 0x4ef52e:c.instructions+=2;goto B4ef52e;
case 0x4ef531:c.instructions+=1;goto B4ef531;
case 0x4ef533:goto L4ef533;
case 0x4ef538:c.instructions+=1;goto B4ef538;
case 0x4ef53a:goto L4ef53a;
case 0x4ef53f:goto L4ef53f;
case 0x4ef544:c.instructions+=2;goto B4ef544;
case 0x4ef545:c.instructions+=1;goto B4ef545;
case 0x4ef54a:goto L4ef54a;
case 0x4ef54d:c.instructions+=2;goto B4ef54d;
case 0x4ef54e:c.instructions+=1;goto B4ef54e;
case 0x4ef553:goto L4ef553;
case 0x4ef558:c.instructions+=3;goto B4ef558;
case 0x4ef55b:c.instructions+=2;goto B4ef55b;
case 0x4ef55e:c.instructions+=1;goto B4ef55e;
case 0x4ef560:goto L4ef560;
case 0x4ef563:c.instructions+=5;goto B4ef563;
case 0x4ef565:c.instructions+=4;goto B4ef565;
case 0x4ef56a:c.instructions+=3;goto B4ef56a;
case 0x4ef56f:c.instructions+=2;goto B4ef56f;
case 0x4ef570:c.instructions+=1;goto B4ef570;
case 0x4ef575:goto L4ef575;
case 0x4ef578:goto L4ef578;
case 0x4ef57b:c.instructions+=5;goto B4ef57b;
case 0x4ef57d:c.instructions+=4;goto B4ef57d;
case 0x4ef582:c.instructions+=3;goto B4ef582;
case 0x4ef587:c.instructions+=2;goto B4ef587;
case 0x4ef588:c.instructions+=1;goto B4ef588;
case 0x4ef58d:goto L4ef58d;
case 0x4ef590:c.instructions+=3;goto B4ef590;
case 0x4ef595:c.instructions+=2;goto B4ef595;
case 0x4ef596:c.instructions+=1;goto B4ef596;
case 0x4ef59b:goto L4ef59b;
case 0x4ef59c:c.instructions+=1;goto B4ef59c;
case 0x4ef5a1:goto L4ef5a1;
case 0x4ef5a4:c.instructions+=3;goto B4ef5a4;
case 0x4ef5a9:c.instructions+=2;goto B4ef5a9;
case 0x4ef5aa:c.instructions+=1;goto B4ef5aa;
case 0x4ef5af:goto L4ef5af;
case 0x4ef5b0:c.instructions+=1;goto B4ef5b0;
case 0x4ef5b5:goto L4ef5b5;
case 0x4ef5b8:c.instructions+=7;goto B4ef5b8;
case 0x4ef5bb:c.instructions+=6;goto B4ef5bb;
case 0x4ef5c1:c.instructions+=5;goto B4ef5c1;
case 0x4ef5c4:c.instructions+=4;goto B4ef5c4;
case 0x4ef5c5:c.instructions+=3;goto B4ef5c5;
case 0x4ef5ca:c.instructions+=2;goto B4ef5ca;
case 0x4ef5cb:c.instructions+=1;goto B4ef5cb;
case 0x4ef5d0:goto L4ef5d0;
case 0x4ef5d4:c.instructions+=6;goto B4ef5d4;
case 0x4ef5d6:c.instructions+=5;goto B4ef5d6;
case 0x4ef5d7:c.instructions+=4;goto B4ef5d7;
case 0x4ef5d8:c.instructions+=3;goto B4ef5d8;
case 0x4ef5df:c.instructions+=2;goto B4ef5df;
case 0x4ef5e2:c.instructions+=1;goto B4ef5e2;
case 0x4ef5f0:goto L4ef5f0;
case 0x4ef5f1:c.instructions+=2;goto B4ef5f1;
case 0x4ef5f3:c.instructions+=1;goto B4ef5f3;
case 0x4ef5f8:goto L4ef5f8;
case 0x4ef5fd:c.instructions+=1;goto B4ef5fd;
case 0x4ef5ff:goto L4ef5ff;
case 0x4ef600:c.instructions+=1;goto B4ef600;
case 0x4ef605:goto L4ef605;
case 0x4ef608:goto L4ef608;
case 0x4ef60a:c.instructions+=2;goto B4ef60a;
case 0x4ef60b:c.instructions+=1;goto B4ef60b;
case 0x4ef610:goto L4ef610;
case 0x4ef616:c.instructions+=1;goto B4ef616;
case 0x4ef620:goto L4ef620;
case 0x4ef624:c.instructions+=13;goto B4ef624;
case 0x4ef628:c.instructions+=12;goto B4ef628;
case 0x4ef629:c.instructions+=11;goto B4ef629;
case 0x4ef62a:c.instructions+=10;goto B4ef62a;
case 0x4ef62b:c.instructions+=9;goto B4ef62b;
case 0x4ef62f:c.instructions+=8;goto B4ef62f;
case 0x4ef631:c.instructions+=7;goto B4ef631;
case 0x4ef635:c.instructions+=6;goto B4ef635;
case 0x4ef636:c.instructions+=5;goto B4ef636;
case 0x4ef637:c.instructions+=4;goto B4ef637;
case 0x4ef638:c.instructions+=3;goto B4ef638;
case 0x4ef639:c.instructions+=2;goto B4ef639;
case 0x4ef63b:c.instructions+=1;goto B4ef63b;
case 0x4ef640:goto L4ef640;
case 0x4ef646:c.instructions+=1;goto B4ef646;
case 0x4ef64c:goto L4ef64c;
case 0x4ef652:goto L4ef652;
case 0x4ef658:c.instructions+=1;goto B4ef658;
case 0x4ef65e:goto L4ef65e;
case 0x4ef664:goto L4ef664;
case 0x4ef66a:c.instructions+=1;goto B4ef66a;
case 0x4ef670:goto L4ef670;
case 0x4ef676:c.instructions+=1;goto B4ef676;
case 0x4ef67c:goto L4ef67c;
case 0x4ef681:c.instructions+=2;goto B4ef681;
case 0x4ef684:c.instructions+=1;goto B4ef684;
case 0x4ef686:goto L4ef686;
case 0x4ef68b:c.instructions+=1;goto B4ef68b;
case 0x4ef68d:goto L4ef68d;
case 0x4ef690:c.instructions+=7;goto B4ef690;
case 0x4ef695:c.instructions+=6;goto B4ef695;
case 0x4ef696:c.instructions+=5;goto B4ef696;
case 0x4ef69b:c.instructions+=4;goto B4ef69b;
case 0x4ef6a0:c.instructions+=3;goto B4ef6a0;
case 0x4ef6a1:c.instructions+=2;goto B4ef6a1;
case 0x4ef6a7:c.instructions+=1;goto B4ef6a7;
case 0x4ef6ac:goto L4ef6ac;
case 0x4ef6af:c.instructions+=4;goto B4ef6af;
case 0x4ef6b0:c.instructions+=3;goto B4ef6b0;
case 0x4ef6b1:c.instructions+=2;goto B4ef6b1;
case 0x4ef6b2:c.instructions+=1;goto B4ef6b2;
case 0x4ef6b5:goto L4ef6b5;
case 0x4ef6bb:c.instructions+=4;goto B4ef6bb;
case 0x4ef6be:c.instructions+=3;goto B4ef6be;
case 0x4ef6bf:c.instructions+=2;goto B4ef6bf;
case 0x4ef6c1:c.instructions+=1;goto B4ef6c1;
case 0x4ef6c6:goto L4ef6c6;
case 0x4ef6c8:c.instructions+=1;goto B4ef6c8;
case 0x4ef6ce:goto L4ef6ce;
case 0x4ef6d4:c.instructions+=4;goto B4ef6d4;
case 0x4ef6d7:c.instructions+=3;goto B4ef6d7;
case 0x4ef6d8:c.instructions+=2;goto B4ef6d8;
case 0x4ef6da:c.instructions+=1;goto B4ef6da;
case 0x4ef6df:goto L4ef6df;
case 0x4ef6e1:c.instructions+=1;goto B4ef6e1;
case 0x4ef6e7:goto L4ef6e7;
case 0x4ef6ec:c.instructions+=1;goto B4ef6ec;
case 0x4ef6f1:goto L4ef6f1;
case 0x4ef6f4:c.instructions+=3;goto B4ef6f4;
case 0x4ef6f7:c.instructions+=2;goto B4ef6f7;
case 0x4ef6fc:c.instructions+=1;goto B4ef6fc;
case 0x4ef6fe:goto L4ef6fe;
case 0x4ef703:c.instructions+=1;goto B4ef703;
case 0x4ef708:goto L4ef708;
case 0x4ef70b:c.instructions+=2;goto B4ef70b;
case 0x4ef70e:c.instructions+=1;goto B4ef70e;
case 0x4ef710:goto L4ef710;
case 0x4ef716:c.instructions+=1;goto B4ef716;
case 0x4ef718:goto L4ef718;
case 0x4ef71b:c.instructions+=6;goto B4ef71b;
case 0x4ef71d:c.instructions+=5;goto B4ef71d;
case 0x4ef71f:c.instructions+=4;goto B4ef71f;
case 0x4ef724:c.instructions+=3;goto B4ef724;
case 0x4ef729:c.instructions+=2;goto B4ef729;
case 0x4ef72a:c.instructions+=1;goto B4ef72a;
case 0x4ef72f:goto L4ef72f;
case 0x4ef732:c.instructions+=4;goto B4ef732;
case 0x4ef733:c.instructions+=3;goto B4ef733;
case 0x4ef734:c.instructions+=2;goto B4ef734;
case 0x4ef735:c.instructions+=1;goto B4ef735;
case 0x4ef738:goto L4ef738;
case 0x4ef73d:c.instructions+=2;goto B4ef73d;
case 0x4ef742:c.instructions+=1;goto B4ef742;
case 0x4ef747:goto L4ef747;
case 0x4ef74a:c.instructions+=2;goto B4ef74a;
case 0x4ef74c:c.instructions+=1;goto B4ef74c;
case 0x4ef74e:goto L4ef74e;
case 0x4ef754:c.instructions+=1;goto B4ef754;
case 0x4ef756:goto L4ef756;
case 0x4ef759:c.instructions+=4;goto B4ef759;
case 0x4ef75e:c.instructions+=3;goto B4ef75e;
case 0x4ef763:c.instructions+=2;goto B4ef763;
case 0x4ef764:c.instructions+=1;goto B4ef764;
case 0x4ef769:goto L4ef769;
case 0x4ef76c:c.instructions+=5;goto B4ef76c;
case 0x4ef76d:c.instructions+=4;goto B4ef76d;
case 0x4ef773:c.instructions+=3;goto B4ef773;
case 0x4ef774:c.instructions+=2;goto B4ef774;
case 0x4ef775:c.instructions+=1;goto B4ef775;
case 0x4ef778:goto L4ef778;
case 0x4ef77a:c.instructions+=1;goto B4ef77a;
case 0x4ef77f:goto L4ef77f;
case 0x4ef780:c.instructions+=3;goto B4ef780;
case 0x4ef781:c.instructions+=2;goto B4ef781;
case 0x4ef782:c.instructions+=1;goto B4ef782;
case 0x4ef785:goto L4ef785;
case 0x4ef788:c.instructions+=2;goto B4ef788;
case 0x4ef789:c.instructions+=1;goto B4ef789;
case 0x4ef78e:goto L4ef78e;
case 0x4ef791:c.instructions+=4;goto B4ef791;
case 0x4ef792:c.instructions+=3;goto B4ef792;
case 0x4ef793:c.instructions+=2;goto B4ef793;
case 0x4ef794:c.instructions+=1;goto B4ef794;
case 0x4ef797:goto L4ef797;
case 0x4ef79d:c.instructions+=1;goto B4ef79d;
case 0x4ef7a3:goto L4ef7a3;
case 0x4ef7a9:c.instructions+=1;goto B4ef7a9;
case 0x4ef7af:goto L4ef7af;
case 0x4ef7b1:c.instructions+=1;goto B4ef7b1;
case 0x4ef7b6:goto L4ef7b6;
case 0x4ef7bb:c.instructions+=4;goto B4ef7bb;
case 0x4ef7bc:c.instructions+=3;goto B4ef7bc;
case 0x4ef7c2:c.instructions+=2;goto B4ef7c2;
case 0x4ef7c7:c.instructions+=1;goto B4ef7c7;
case 0x4ef7cc:goto L4ef7cc;
case 0x4ef7cf:c.instructions+=5;goto B4ef7cf;
case 0x4ef7d4:c.instructions+=4;goto B4ef7d4;
case 0x4ef7d9:c.instructions+=3;goto B4ef7d9;
case 0x4ef7da:c.instructions+=2;goto B4ef7da;
case 0x4ef7e4:c.instructions+=1;goto B4ef7e4;
case 0x4ef7e9:goto L4ef7e9;
case 0x4ef7ec:c.instructions+=2;goto B4ef7ec;
case 0x4ef7ee:c.instructions+=1;goto B4ef7ee;
case 0x4ef7f4:goto L4ef7f4;
case 0x4ef7f7:c.instructions+=5;goto B4ef7f7;
case 0x4ef7f9:c.instructions+=4;goto B4ef7f9;
case 0x4ef7fe:c.instructions+=3;goto B4ef7fe;
case 0x4ef803:c.instructions+=2;goto B4ef803;
case 0x4ef804:c.instructions+=1;goto B4ef804;
case 0x4ef809:goto L4ef809;
case 0x4ef80c:c.instructions+=4;goto B4ef80c;
case 0x4ef80d:c.instructions+=3;goto B4ef80d;
case 0x4ef80e:c.instructions+=2;goto B4ef80e;
case 0x4ef80f:c.instructions+=1;goto B4ef80f;
case 0x4ef812:goto L4ef812;
case 0x4ef818:c.instructions+=1;goto B4ef818;
case 0x4ef81e:goto L4ef81e;
case 0x4ef824:goto L4ef824;
case 0x4ef82a:c.instructions+=1;goto B4ef82a;
case 0x4ef830:goto L4ef830;
case 0x4ef836:c.instructions+=1;goto B4ef836;
case 0x4ef83c:goto L4ef83c;
case 0x4ef841:c.instructions+=2;goto B4ef841;
case 0x4ef844:c.instructions+=1;goto B4ef844;
case 0x4ef846:goto L4ef846;
case 0x4ef84b:c.instructions+=1;goto B4ef84b;
case 0x4ef84d:goto L4ef84d;
case 0x4ef84f:c.instructions+=1;goto B4ef84f;
case 0x4ef854:goto L4ef854;
case 0x4ef856:c.instructions+=1;goto B4ef856;
case 0x4ef85b:goto L4ef85b;
case 0x4ef860:goto L4ef860;
case 0x4ef863:c.instructions+=1;goto B4ef863;
case 0x4ef869:goto L4ef869;
case 0x4ef86f:c.instructions+=2;goto B4ef86f;
case 0x4ef871:c.instructions+=1;goto B4ef871;
case 0x4ef877:goto L4ef877;
case 0x4ef87e:c.instructions+=1;goto B4ef87e;
case 0x4ef884:goto L4ef884;
case 0x4ef885:c.instructions+=2;goto B4ef885;
case 0x4ef887:c.instructions+=1;goto B4ef887;
case 0x4ef88c:goto L4ef88c;
case 0x4ef88e:c.instructions+=1;goto B4ef88e;
case 0x4ef893:goto L4ef893;
case 0x4ef89a:c.instructions+=1;goto B4ef89a;
case 0x4ef8a0:goto L4ef8a0;
case 0x4ef8a6:c.instructions+=3;goto B4ef8a6;
case 0x4ef8a7:c.instructions+=2;goto B4ef8a7;
case 0x4ef8a9:c.instructions+=1;goto B4ef8a9;
case 0x4ef8ae:goto L4ef8ae;
case 0x4ef8b0:c.instructions+=1;goto B4ef8b0;
case 0x4ef8b5:goto L4ef8b5;
case 0x4ef8bb:goto L4ef8bb;
case 0x4ef8bd:c.instructions+=1;goto B4ef8bd;
case 0x4ef8c2:goto L4ef8c2;
case 0x4ef8c3:c.instructions+=3;goto B4ef8c3;
case 0x4ef8c4:c.instructions+=2;goto B4ef8c4;
case 0x4ef8c5:c.instructions+=1;goto B4ef8c5;
case 0x4ef8c8:goto L4ef8c8;
case 0x4ef8ce:c.instructions+=2;goto B4ef8ce;
case 0x4ef8d0:c.instructions+=1;goto B4ef8d0;
case 0x4ef8d2:goto L4ef8d2;
case 0x4ef8d3:c.instructions+=1;goto B4ef8d3;
case 0x4ef8d8:goto L4ef8d8;
case 0x4ef8db:c.instructions+=2;goto B4ef8db;
case 0x4ef8e5:c.instructions+=1;goto B4ef8e5;
case 0x4ef8e7:goto L4ef8e7;
case 0x4ef8ed:c.instructions+=4;goto B4ef8ed;
case 0x4ef8f0:c.instructions+=3;goto B4ef8f0;
case 0x4ef8f1:c.instructions+=2;goto B4ef8f1;
case 0x4ef8f3:c.instructions+=1;goto B4ef8f3;
case 0x4ef8f8:goto L4ef8f8;
case 0x4ef8fe:c.instructions+=4;goto B4ef8fe;
case 0x4ef8ff:c.instructions+=3;goto B4ef8ff;
case 0x4ef901:c.instructions+=2;goto B4ef901;
case 0x4ef903:c.instructions+=1;goto B4ef903;
case 0x4ef908:goto L4ef908;
case 0x4ef90a:c.instructions+=1;goto B4ef90a;
case 0x4ef90c:goto L4ef90c;
case 0x4ef90e:c.instructions+=4;goto B4ef90e;
case 0x4ef911:c.instructions+=3;goto B4ef911;
case 0x4ef912:c.instructions+=2;goto B4ef912;
case 0x4ef917:c.instructions+=1;goto B4ef917;
case 0x4ef91c:goto L4ef91c;
case 0x4ef91f:c.instructions+=4;goto B4ef91f;
case 0x4ef920:c.instructions+=3;goto B4ef920;
case 0x4ef921:c.instructions+=2;goto B4ef921;
case 0x4ef922:c.instructions+=1;goto B4ef922;
case 0x4ef925:goto L4ef925;
case 0x4ef927:c.instructions+=1;goto B4ef927;
case 0x4ef929:goto L4ef929;
case 0x4ef92c:c.instructions+=3;goto B4ef92c;
case 0x4ef92d:c.instructions+=2;goto B4ef92d;
case 0x4ef932:c.instructions+=1;goto B4ef932;
case 0x4ef937:goto L4ef937;
case 0x4ef938:c.instructions+=3;goto B4ef938;
case 0x4ef939:c.instructions+=2;goto B4ef939;
case 0x4ef93a:c.instructions+=1;goto B4ef93a;
case 0x4ef93d:goto L4ef93d;
case 0x4ef943:c.instructions+=1;goto B4ef943;
case 0x4ef945:goto L4ef945;
case 0x4ef94b:c.instructions+=1;goto B4ef94b;
case 0x4ef94d:goto L4ef94d;
case 0x4ef94f:c.instructions+=1;goto B4ef94f;
case 0x4ef954:goto L4ef954;
case 0x4ef957:c.instructions+=3;goto B4ef957;
case 0x4ef95c:c.instructions+=2;goto B4ef95c;
case 0x4ef95d:c.instructions+=1;goto B4ef95d;
case 0x4ef962:goto L4ef962;
case 0x4ef965:c.instructions+=4;goto B4ef965;
case 0x4ef966:c.instructions+=3;goto B4ef966;
case 0x4ef967:c.instructions+=2;goto B4ef967;
case 0x4ef968:c.instructions+=1;goto B4ef968;
case 0x4ef96b:goto L4ef96b;
case 0x4ef971:c.instructions+=2;goto B4ef971;
case 0x4ef976:c.instructions+=1;goto B4ef976;
case 0x4ef978:goto L4ef978;
case 0x4ef97d:c.instructions+=1;goto B4ef97d;
case 0x4ef97f:goto L4ef97f;
case 0x4ef985:c.instructions+=1;goto B4ef985;
case 0x4ef98a:goto L4ef98a;
case 0x4ef98b:c.instructions+=3;goto B4ef98b;
case 0x4ef98c:c.instructions+=2;goto B4ef98c;
case 0x4ef98d:c.instructions+=1;goto B4ef98d;
case 0x4ef990:goto L4ef990;
case 0x4ef996:c.instructions+=2;goto B4ef996;
case 0x4ef998:c.instructions+=1;goto B4ef998;
case 0x4ef99a:goto L4ef99a;
case 0x4ef9a0:c.instructions+=1;goto B4ef9a0;
case 0x4ef9a5:goto L4ef9a5;
case 0x4ef9a6:c.instructions+=3;goto B4ef9a6;
case 0x4ef9a7:c.instructions+=2;goto B4ef9a7;
case 0x4ef9a8:c.instructions+=1;goto B4ef9a8;
case 0x4ef9b0:goto L4ef9b0;
case 0x4ef9b2:c.instructions+=7;goto B4ef9b2;
case 0x4ef9b7:c.instructions+=6;goto B4ef9b7;
case 0x4ef9bd:c.instructions+=5;goto B4ef9bd;
case 0x4ef9be:c.instructions+=4;goto B4ef9be;
case 0x4ef9c5:c.instructions+=3;goto B4ef9c5;
case 0x4ef9c6:c.instructions+=2;goto B4ef9c6;
case 0x4ef9cb:c.instructions+=1;goto B4ef9cb;
case 0x4ef9d0:goto L4ef9d0;
case 0x4ef9d3:c.instructions+=4;goto B4ef9d3;
case 0x4ef9d7:c.instructions+=3;goto B4ef9d7;
case 0x4ef9d9:c.instructions+=2;goto B4ef9d9;
case 0x4ef9e1:c.instructions+=1;goto B4ef9e1;
case 0x4ef9e3:goto L4ef9e3;
case 0x4ef9e7:c.instructions+=3;goto B4ef9e7;
case 0x4ef9e8:c.instructions+=2;goto B4ef9e8;
case 0x4ef9ea:c.instructions+=1;goto B4ef9ea;
case 0x4ef9ef:goto L4ef9ef;
case 0x4ef9f3:c.instructions+=3;goto B4ef9f3;
case 0x4ef9fa:c.instructions+=2;goto B4ef9fa;
case 0x4ef9fd:c.instructions+=1;goto B4ef9fd;
case 0x4ef9fe:goto L4ef9fe;
case 0x4efa02:c.instructions+=4;goto B4efa02;
case 0x4efa04:c.instructions+=3;goto B4efa04;
case 0x4efa0b:c.instructions+=2;goto B4efa0b;
case 0x4efa0e:c.instructions+=1;goto B4efa0e;
case 0x4efa10:goto L4efa10;
case 0x4efa11:c.instructions+=5;goto B4efa11;
case 0x4efa12:c.instructions+=4;goto B4efa12;
case 0x4efa16:c.instructions+=3;goto B4efa16;
case 0x4efa1c:c.instructions+=2;goto B4efa1c;
case 0x4efa1e:c.instructions+=1;goto B4efa1e;
case 0x4efa24:goto L4efa24;
case 0x4efa2a:goto L4efa2a;
case 0x4efa30:c.instructions+=1;goto B4efa30;
case 0x4efa36:goto L4efa36;
case 0x4efa38:goto L4efa38;
case 0x4efa3e:c.instructions+=1;goto B4efa3e;
case 0x4efa40:goto L4efa40;
case 0x4efa46:c.instructions+=1;goto B4efa46;
case 0x4efa4c:goto L4efa4c;
case 0x4efa4f:c.instructions+=3;goto B4efa4f;
case 0x4efa52:c.instructions+=2;goto B4efa52;
case 0x4efa59:c.instructions+=1;goto B4efa59;
case 0x4efa5f:goto L4efa5f;
case 0x4efa62:c.instructions+=3;goto B4efa62;
case 0x4efa67:c.instructions+=2;goto B4efa67;
case 0x4efa68:c.instructions+=1;goto B4efa68;
case 0x4efa6d:goto L4efa6d;
case 0x4efa70:c.instructions+=4;goto B4efa70;
case 0x4efa71:c.instructions+=3;goto B4efa71;
case 0x4efa78:c.instructions+=2;goto B4efa78;
case 0x4efa79:c.instructions+=1;goto B4efa79;
case 0x4efa7c:goto L4efa7c;
case 0x4efa7e:c.instructions+=1;goto B4efa7e;
case 0x4efa83:goto L4efa83;
case 0x4efa86:goto L4efa86;
case 0x4efa87:c.instructions+=3;goto B4efa87;
case 0x4efa8b:c.instructions+=2;goto B4efa8b;
case 0x4efa8c:c.instructions+=1;goto B4efa8c;
case 0x4efa91:goto L4efa91;
case 0x4efa94:c.instructions+=2;goto B4efa94;
case 0x4efa96:c.instructions+=1;goto B4efa96;
case 0x4efa98:goto L4efa98;
case 0x4efa99:c.instructions+=1;goto B4efa99;
case 0x4efa9e:goto L4efa9e;
case 0x4efaa1:c.instructions+=1;goto B4efaa1;
case 0x4efaa6:goto L4efaa6;
case 0x4efaa9:c.instructions+=4;goto B4efaa9;
case 0x4efaac:c.instructions+=3;goto B4efaac;
case 0x4efaae:c.instructions+=2;goto B4efaae;
case 0x4efaaf:c.instructions+=1;goto B4efaaf;
case 0x4efab5:goto L4efab5;
case 0x4efab8:c.instructions+=3;goto B4efab8;
case 0x4efabb:c.instructions+=2;goto B4efabb;
case 0x4efabd:c.instructions+=1;goto B4efabd;
case 0x4efac3:goto L4efac3;
case 0x4efac6:c.instructions+=5;goto B4efac6;
case 0x4efac8:c.instructions+=4;goto B4efac8;
case 0x4efacd:c.instructions+=3;goto B4efacd;
case 0x4efad2:c.instructions+=2;goto B4efad2;
case 0x4efad3:c.instructions+=1;goto B4efad3;
case 0x4efad8:goto L4efad8;
case 0x4efadb:c.instructions+=4;goto B4efadb;
case 0x4efae1:c.instructions+=3;goto B4efae1;
case 0x4efae2:c.instructions+=2;goto B4efae2;
case 0x4efae3:c.instructions+=1;goto B4efae3;
case 0x4efae6:goto L4efae6;
case 0x4efaec:c.instructions+=1;goto B4efaec;
case 0x4efaf2:goto L4efaf2;
case 0x4efaf3:c.instructions+=2;goto B4efaf3;
case 0x4efaf4:c.instructions+=1;goto B4efaf4;
case 0x4efaf7:goto L4efaf7;
case 0x4efafa:c.instructions+=2;goto B4efafa;
case 0x4efafd:c.instructions+=1;goto B4efafd;
case 0x4efaff:goto L4efaff;
case 0x4efb02:goto L4efb02;
case 0x4efb05:c.instructions+=1;goto B4efb05;
case 0x4efb0b:goto L4efb0b;
case 0x4efb0e:c.instructions+=3;goto B4efb0e;
case 0x4efb11:c.instructions+=2;goto B4efb11;
case 0x4efb13:c.instructions+=1;goto B4efb13;
case 0x4efb15:goto L4efb15;
case 0x4efb18:c.instructions+=1;goto B4efb18;
case 0x4efb1a:goto L4efb1a;
case 0x4efb21:goto L4efb21;
case 0x4efb24:c.instructions+=4;goto B4efb24;
case 0x4efb25:c.instructions+=3;goto B4efb25;
case 0x4efb26:c.instructions+=2;goto B4efb26;
case 0x4efb28:c.instructions+=1;goto B4efb28;
case 0x4efb2d:goto L4efb2d;
case 0x4efb30:c.instructions+=3;goto B4efb30;
case 0x4efb33:c.instructions+=2;goto B4efb33;
case 0x4efb35:c.instructions+=1;goto B4efb35;
case 0x4efb37:goto L4efb37;
case 0x4efb3a:c.instructions+=1;goto B4efb3a;
case 0x4efb3c:goto L4efb3c;
case 0x4efb43:goto L4efb43;
case 0x4efb44:c.instructions+=2;goto B4efb44;
case 0x4efb47:c.instructions+=1;goto B4efb47;
case 0x4efb4c:goto L4efb4c;
case 0x4efb4e:c.instructions+=1;goto B4efb4e;
case 0x4efb53:goto L4efb53;
case 0x4efb58:c.instructions+=4;goto B4efb58;
case 0x4efb59:c.instructions+=3;goto B4efb59;
case 0x4efb5f:c.instructions+=2;goto B4efb5f;
case 0x4efb60:c.instructions+=1;goto B4efb60;
case 0x4efb63:goto L4efb63;
case 0x4efb69:c.instructions+=1;goto B4efb69;
case 0x4efb6f:goto L4efb6f;
case 0x4efb75:goto L4efb75;
case 0x4efb7b:c.instructions+=1;goto B4efb7b;
case 0x4efb7d:goto L4efb7d;
case 0x4efb83:c.instructions+=1;goto B4efb83;
case 0x4efb89:goto L4efb89;
case 0x4efb8b:c.instructions+=2;goto B4efb8b;
case 0x4efb8d:c.instructions+=1;goto B4efb8d;
case 0x4efb92:goto L4efb92;
case 0x4efb93:c.instructions+=2;goto B4efb93;
case 0x4efb94:c.instructions+=1;goto B4efb94;
case 0x4efb97:goto L4efb97;
case 0x4efb9d:c.instructions+=1;goto B4efb9d;
case 0x4efba2:goto L4efba2;
case 0x4efba8:c.instructions+=3;goto B4efba8;
case 0x4efbab:c.instructions+=2;goto B4efbab;
case 0x4efbae:c.instructions+=1;goto B4efbae;
case 0x4efbb4:goto L4efbb4;
case 0x4efbbb:c.instructions+=1;goto B4efbbb;
case 0x4efbc2:goto L4efbc2;
case 0x4efbc3:c.instructions+=2;goto B4efbc3;
case 0x4efbc5:c.instructions+=1;goto B4efbc5;
case 0x4efbca:goto L4efbca;
case 0x4efbcc:c.instructions+=1;goto B4efbcc;
case 0x4efbd1:goto L4efbd1;
case 0x4efbd2:c.instructions+=2;goto B4efbd2;
case 0x4efbd3:c.instructions+=1;goto B4efbd3;
case 0x4efbd6:goto L4efbd6;
case 0x4efbdb:c.instructions+=3;goto B4efbdb;
case 0x4efbdd:c.instructions+=2;goto B4efbdd;
case 0x4efbdf:c.instructions+=1;goto B4efbdf;
case 0x4efbe5:goto L4efbe5;
case 0x4efbe7:c.instructions+=2;goto B4efbe7;
case 0x4efbe9:c.instructions+=1;goto B4efbe9;
case 0x4efbee:goto L4efbee;
case 0x4efbf3:c.instructions+=3;goto B4efbf3;
case 0x4efbf4:c.instructions+=2;goto B4efbf4;
case 0x4efbf6:c.instructions+=1;goto B4efbf6;
case 0x4efbf8:goto L4efbf8;
case 0x4efbf9:c.instructions+=2;goto B4efbf9;
case 0x4efbfa:c.instructions+=1;goto B4efbfa;
case 0x4efbfd:goto L4efbfd;
case 0x4efc02:c.instructions+=3;goto B4efc02;
case 0x4efc04:c.instructions+=2;goto B4efc04;
case 0x4efc06:c.instructions+=1;goto B4efc06;
case 0x4efc0c:goto L4efc0c;
case 0x4efc10:goto L4efc10;
case 0x4efc12:c.instructions+=2;goto B4efc12;
case 0x4efc14:c.instructions+=1;goto B4efc14;
case 0x4efc19:goto L4efc19;
case 0x4efc1e:c.instructions+=3;goto B4efc1e;
case 0x4efc1f:c.instructions+=2;goto B4efc1f;
case 0x4efc21:c.instructions+=1;goto B4efc21;
case 0x4efc23:goto L4efc23;
case 0x4efc24:c.instructions+=2;goto B4efc24;
case 0x4efc25:c.instructions+=1;goto B4efc25;
case 0x4efc28:goto L4efc28;
case 0x4efc2b:c.instructions+=1;goto B4efc2b;
case 0x4efc30:goto L4efc30;
case 0x4efc36:c.instructions+=2;goto B4efc36;
case 0x4efc38:c.instructions+=1;goto B4efc38;
case 0x4efc3a:goto L4efc3a;
case 0x4efc3f:c.instructions+=1;goto B4efc3f;
case 0x4efc41:goto L4efc41;
case 0x4efc47:c.instructions+=8;goto B4efc47;
case 0x4efc49:c.instructions+=7;goto B4efc49;
case 0x4efc4d:c.instructions+=6;goto B4efc4d;
case 0x4efc51:c.instructions+=5;goto B4efc51;
case 0x4efc57:c.instructions+=4;goto B4efc57;
case 0x4efc5d:c.instructions+=3;goto B4efc5d;
case 0x4efc5f:c.instructions+=2;goto B4efc5f;
case 0x4efc62:c.instructions+=1;goto B4efc62;
case 0x4efc68:goto L4efc68;
case 0x4efc6b:c.instructions+=3;goto B4efc6b;
case 0x4efc6c:c.instructions+=2;goto B4efc6c;
case 0x4efc72:c.instructions+=1;goto B4efc72;
case 0x4efc77:goto L4efc77;
case 0x4efc78:c.instructions+=3;goto B4efc78;
case 0x4efc82:c.instructions+=2;goto B4efc82;
case 0x4efc83:c.instructions+=1;goto B4efc83;
case 0x4efc86:goto L4efc86;
case 0x4efc8c:c.instructions+=1;goto B4efc8c;
case 0x4efc91:goto L4efc91;
case 0x4efc92:c.instructions+=2;goto B4efc92;
case 0x4efc93:c.instructions+=1;goto B4efc93;
case 0x4efc96:goto L4efc96;
case 0x4efc9c:c.instructions+=1;goto B4efc9c;
case 0x4efc9e:goto L4efc9e;
case 0x4efca4:c.instructions+=2;goto B4efca4;
case 0x4efca9:c.instructions+=1;goto B4efca9;
case 0x4efcab:goto L4efcab;
case 0x4efcb0:c.instructions+=1;goto B4efcb0;
case 0x4efcb2:goto L4efcb2;
case 0x4efcb7:c.instructions+=1;goto B4efcb7;
case 0x4efcb9:goto L4efcb9;
case 0x4efcbf:c.instructions+=1;goto B4efcbf;
case 0x4efcc4:goto L4efcc4;
case 0x4efcc6:goto L4efcc6;
case 0x4efccc:c.instructions+=1;goto B4efccc;
case 0x4efcd1:goto L4efcd1;
case 0x4efcd4:c.instructions+=5;goto B4efcd4;
case 0x4efcd9:c.instructions+=4;goto B4efcd9;
case 0x4efcde:c.instructions+=3;goto B4efcde;
case 0x4efcdf:c.instructions+=2;goto B4efcdf;
case 0x4efce5:c.instructions+=1;goto B4efce5;
case 0x4efcea:goto L4efcea;
case 0x4efced:c.instructions+=2;goto B4efced;
case 0x4efcef:c.instructions+=1;goto B4efcef;
case 0x4efcf1:goto L4efcf1;
case 0x4efcf4:c.instructions+=5;goto B4efcf4;
case 0x4efcf6:c.instructions+=4;goto B4efcf6;
case 0x4efcfb:c.instructions+=3;goto B4efcfb;
case 0x4efd00:c.instructions+=2;goto B4efd00;
case 0x4efd01:c.instructions+=1;goto B4efd01;
case 0x4efd06:goto L4efd06;
case 0x4efd08:c.instructions+=1;goto B4efd08;
case 0x4efd0d:goto L4efd0d;
case 0x4efd10:goto L4efd10;
case 0x4efd11:c.instructions+=2;goto B4efd11;
case 0x4efd12:c.instructions+=1;goto B4efd12;
case 0x4efd40:goto L4efd40;
case 0x4efd42:c.instructions+=7;goto B4efd42;
case 0x4efd47:c.instructions+=6;goto B4efd47;
case 0x4efd4d:c.instructions+=5;goto B4efd4d;
case 0x4efd4e:c.instructions+=4;goto B4efd4e;
case 0x4efd55:c.instructions+=3;goto B4efd55;
case 0x4efd56:c.instructions+=2;goto B4efd56;
case 0x4efd5b:c.instructions+=1;goto B4efd5b;
case 0x4efd60:goto L4efd60;
case 0x4efd63:c.instructions+=4;goto B4efd63;
case 0x4efd67:c.instructions+=3;goto B4efd67;
case 0x4efd69:c.instructions+=2;goto B4efd69;
case 0x4efd71:c.instructions+=1;goto B4efd71;
case 0x4efd73:goto L4efd73;
case 0x4efd77:c.instructions+=3;goto B4efd77;
case 0x4efd78:c.instructions+=2;goto B4efd78;
case 0x4efd7a:c.instructions+=1;goto B4efd7a;
case 0x4efd7f:goto L4efd7f;
case 0x4efd83:c.instructions+=3;goto B4efd83;
case 0x4efd8a:c.instructions+=2;goto B4efd8a;
case 0x4efd8d:c.instructions+=1;goto B4efd8d;
case 0x4efd8e:goto L4efd8e;
case 0x4efd92:c.instructions+=4;goto B4efd92;
case 0x4efd94:c.instructions+=3;goto B4efd94;
case 0x4efd9b:c.instructions+=2;goto B4efd9b;
case 0x4efd9e:c.instructions+=1;goto B4efd9e;
case 0x4efda0:goto L4efda0;
case 0x4efda4:c.instructions+=4;goto B4efda4;
case 0x4efda5:c.instructions+=3;goto B4efda5;
case 0x4efda6:c.instructions+=2;goto B4efda6;
case 0x4efda8:c.instructions+=1;goto B4efda8;
case 0x4efdad:goto L4efdad;
case 0x4efdaf:c.instructions+=2;goto B4efdaf;
case 0x4efdb0:c.instructions+=1;goto B4efdb0;
case 0x4efdb5:goto L4efdb5;
case 0x4efdb6:c.instructions+=1;goto B4efdb6;
case 0x4efdc0:goto L4efdc0;
case 0x4efdc6:c.instructions+=2;goto B4efdc6;
case 0x4efdc8:c.instructions+=1;goto B4efdc8;
case 0x4efdca:goto L4efdca;
case 0x4efdcc:c.instructions+=1;goto B4efdcc;
case 0x4efdd1:goto L4efdd1;
case 0x4efde0:goto L4efde0;
case 0x4efde2:c.instructions+=7;goto B4efde2;
case 0x4efde7:c.instructions+=6;goto B4efde7;
case 0x4efded:c.instructions+=5;goto B4efded;
case 0x4efdee:c.instructions+=4;goto B4efdee;
case 0x4efdf5:c.instructions+=3;goto B4efdf5;
case 0x4efdf6:c.instructions+=2;goto B4efdf6;
case 0x4efdfb:c.instructions+=1;goto B4efdfb;
case 0x4efe00:goto L4efe00;
case 0x4efe03:c.instructions+=4;goto B4efe03;
case 0x4efe07:c.instructions+=3;goto B4efe07;
case 0x4efe09:c.instructions+=2;goto B4efe09;
case 0x4efe11:c.instructions+=1;goto B4efe11;
case 0x4efe13:goto L4efe13;
case 0x4efe17:c.instructions+=3;goto B4efe17;
case 0x4efe18:c.instructions+=2;goto B4efe18;
case 0x4efe1a:c.instructions+=1;goto B4efe1a;
case 0x4efe1f:goto L4efe1f;
case 0x4efe23:c.instructions+=3;goto B4efe23;
case 0x4efe2a:c.instructions+=2;goto B4efe2a;
case 0x4efe2d:c.instructions+=1;goto B4efe2d;
case 0x4efe2e:goto L4efe2e;
case 0x4efe32:c.instructions+=4;goto B4efe32;
case 0x4efe34:c.instructions+=3;goto B4efe34;
case 0x4efe3b:c.instructions+=2;goto B4efe3b;
case 0x4efe3e:c.instructions+=1;goto B4efe3e;
case 0x4efe40:goto L4efe40;
case 0x4efe44:c.instructions+=4;goto B4efe44;
case 0x4efe49:c.instructions+=3;goto B4efe49;
case 0x4efe4a:c.instructions+=2;goto B4efe4a;
case 0x4efe4c:c.instructions+=1;goto B4efe4c;
case 0x4efe52:goto L4efe52;
case 0x4efe54:goto L4efe54;
case 0x4efe59:c.instructions+=1;goto B4efe59;
case 0x4efe5b:goto L4efe5b;
case 0x4efe60:c.instructions+=1;goto B4efe60;
case 0x4efe62:goto L4efe62;
case 0x4efe67:c.instructions+=1;goto B4efe67;
case 0x4efe6d:goto L4efe6d;
case 0x4efe70:c.instructions+=2;goto B4efe70;
case 0x4efe72:c.instructions+=1;goto B4efe72;
case 0x4efe78:goto L4efe78;
case 0x4efe7c:c.instructions+=2;goto B4efe7c;
case 0x4efe7d:c.instructions+=1;goto B4efe7d;
case 0x4efe82:goto L4efe82;
case 0x4efe83:c.instructions+=1;goto B4efe83;
case 0x4efe86:goto L4efe86;
case 0x4efe88:c.instructions+=2;goto B4efe88;
case 0x4efe8a:c.instructions+=1;goto B4efe8a;
case 0x4efe8c:goto L4efe8c;
case 0x4efe8d:c.instructions+=1;goto B4efe8d;
case 0x4efe92:goto L4efe92;
case 0x4efe95:c.instructions+=1;goto B4efe95;
case 0x4efe9b:goto L4efe9b;
case 0x4efe9d:c.instructions+=1;goto B4efe9d;
case 0x4efea2:goto L4efea2;
case 0x4efea4:c.instructions+=2;goto B4efea4;
case 0x4efea5:c.instructions+=1;goto B4efea5;
case 0x4efea8:goto L4efea8;
case 0x4efeaa:c.instructions+=2;goto B4efeaa;
case 0x4efeac:c.instructions+=1;goto B4efeac;
case 0x4efeae:goto L4efeae;
case 0x4efeaf:c.instructions+=1;goto B4efeaf;
case 0x4efeb4:goto L4efeb4;
case 0x4efeb7:c.instructions+=1;goto B4efeb7;
case 0x4efebd:goto L4efebd;
case 0x4efebf:c.instructions+=1;goto B4efebf;
case 0x4efec4:goto L4efec4;
case 0x4efec8:c.instructions+=4;goto B4efec8;
case 0x4efecb:c.instructions+=3;goto B4efecb;
case 0x4efecd:c.instructions+=2;goto B4efecd;
case 0x4efece:c.instructions+=1;goto B4efece;
case 0x4efed1:goto L4efed1;
case 0x4efed4:c.instructions+=2;goto B4efed4;
case 0x4efed6:c.instructions+=1;goto B4efed6;
case 0x4efed8:goto L4efed8;
case 0x4efeda:c.instructions+=2;goto B4efeda;
case 0x4efede:c.instructions+=1;goto B4efede;
case 0x4efee3:goto L4efee3;
case 0x4efee5:c.instructions+=2;goto B4efee5;
case 0x4efee6:c.instructions+=1;goto B4efee6;
case 0x4efee9:goto L4efee9;
case 0x4efeee:c.instructions+=1;goto B4efeee;
case 0x4efef0:goto L4efef0;
case 0x4efef5:c.instructions+=1;goto B4efef5;
case 0x4efef7:goto L4efef7;
case 0x4efefb:c.instructions+=3;goto B4efefb;
case 0x4efefd:c.instructions+=2;goto B4efefd;
case 0x4efefe:c.instructions+=1;goto B4efefe;
case 0x4eff01:goto L4eff01;
case 0x4eff03:c.instructions+=3;goto B4eff03;
case 0x4eff05:c.instructions+=2;goto B4eff05;
case 0x4eff09:c.instructions+=1;goto B4eff09;
case 0x4eff0b:goto L4eff0b;
case 0x4eff0c:c.instructions+=1;goto B4eff0c;
case 0x4eff11:goto L4eff11;
case 0x4eff14:c.instructions+=1;goto B4eff14;
case 0x4eff1a:goto L4eff1a;
case 0x4eff1f:c.instructions+=1;goto B4eff1f;
case 0x4eff24:goto L4eff24;
case 0x4eff27:c.instructions+=7;goto B4eff27;
case 0x4eff2a:c.instructions+=6;goto B4eff2a;
case 0x4eff2b:c.instructions+=5;goto B4eff2b;
case 0x4eff30:c.instructions+=4;goto B4eff30;
case 0x4eff35:c.instructions+=3;goto B4eff35;
case 0x4eff3a:c.instructions+=2;goto B4eff3a;
case 0x4eff3b:c.instructions+=1;goto B4eff3b;
case 0x4eff40:goto L4eff40;
case 0x4eff43:c.instructions+=1;goto B4eff43;
case 0x4eff45:goto L4eff45;
case 0x4eff47:c.instructions+=2;goto B4eff47;
case 0x4eff48:c.instructions+=1;goto B4eff48;
case 0x4eff50:goto L4eff50;
case 0x4eff51:c.instructions+=5;goto B4eff51;
case 0x4eff52:c.instructions+=4;goto B4eff52;
case 0x4eff56:c.instructions+=3;goto B4eff56;
case 0x4eff5c:c.instructions+=2;goto B4eff5c;
case 0x4eff5e:c.instructions+=1;goto B4eff5e;
case 0x4eff60:goto L4eff60;
case 0x4eff66:c.instructions+=1;goto B4eff66;
case 0x4eff68:goto L4eff68;
case 0x4eff6b:c.instructions+=2;goto B4eff6b;
case 0x4eff6d:c.instructions+=1;goto B4eff6d;
case 0x4eff6f:goto L4eff6f;
case 0x4eff72:c.instructions+=2;goto B4eff72;
case 0x4eff73:c.instructions+=1;goto B4eff73;
case 0x4eff78:goto L4eff78;
case 0x4eff7a:c.instructions+=2;goto B4eff7a;
case 0x4eff7f:c.instructions+=1;goto B4eff7f;
case 0x4eff84:goto L4eff84;
case 0x4eff87:c.instructions+=1;goto B4eff87;
case 0x4eff89:goto L4eff89;
case 0x4eff8b:c.instructions+=2;goto B4eff8b;
case 0x4eff90:c.instructions+=1;goto B4eff90;
case 0x4eff95:goto L4eff95;
case 0x4eff98:goto L4eff98;
case 0x4eff9b:c.instructions+=2;goto B4eff9b;
case 0x4eff9d:c.instructions+=1;goto B4eff9d;
case 0x4eff9f:goto L4eff9f;
case 0x4effa3:c.instructions+=9;goto B4effa3;
case 0x4effa7:c.instructions+=8;goto B4effa7;
case 0x4effab:c.instructions+=7;goto B4effab;
case 0x4effad:c.instructions+=6;goto B4effad;
case 0x4effae:c.instructions+=5;goto B4effae;
case 0x4effaf:c.instructions+=4;goto B4effaf;
case 0x4effb0:c.instructions+=3;goto B4effb0;
case 0x4effb1:c.instructions+=2;goto B4effb1;
case 0x4effb4:c.instructions+=1;goto B4effb4;
case 0x4effb9:goto L4effb9;
case 0x4effbc:c.instructions+=1;goto B4effbc;
case 0x4effbe:goto L4effbe;
case 0x4effc2:c.instructions+=1;goto B4effc2;
case 0x4effc5:goto L4effc5;
case 0x4effc6:c.instructions+=2;goto B4effc6;
case 0x4effc7:c.instructions+=1;goto B4effc7;
case 0x4effd0:goto L4effd0;
case 0x4effd2:c.instructions+=11;goto B4effd2;
case 0x4effd7:c.instructions+=10;goto B4effd7;
case 0x4effdd:c.instructions+=9;goto B4effdd;
case 0x4effde:c.instructions+=8;goto B4effde;
case 0x4effe5:c.instructions+=7;goto B4effe5;
case 0x4effe6:c.instructions+=6;goto B4effe6;
case 0x4effe7:c.instructions+=5;goto B4effe7;
case 0x4effed:c.instructions+=4;goto B4effed;
case 0x4effee:c.instructions+=3;goto B4effee;
case 0x4efff4:c.instructions+=2;goto B4efff4;
case 0x4efff9:c.instructions+=1;goto B4efff9;
case 0x4efffe:goto L4efffe;
default:missing_instruction(c.pc);}
B4ef000:L4ef000:{c.instructions+=6;NFSU2_TR(0x4ef000);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef003:{NFSU2_TR(0x4ef003);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef009:{NFSU2_TR(0x4ef009);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ef00c:{NFSU2_TR(0x4ef00c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef00d:{NFSU2_TR(0x4ef00d);
w4(R+4,u32(0x83ad90ull));
}
B4ef012:{NFSU2_TR(0x4ef012);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef017ull));
TAIL_STATIC(0x503510u,503);
}
B4ef017:L4ef017:{c.instructions+=3;NFSU2_TR(0x4ef017);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef018:{NFSU2_TR(0x4ef018);
__builtin_memmove((R+4),(R+24),4);
}
B4ef01a:{NFSU2_TR(0x4ef01a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef01full));
TAIL_STATIC(0x497f20u,497);
}
B4ef01f:L4ef01f:{c.instructions+=4;NFSU2_TR(0x4ef01f);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ef024:{NFSU2_TR(0x4ef024);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef027:{NFSU2_TR(0x4ef027);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ef028:{NFSU2_TR(0x4ef028);
if(r1(R+518)){{goto L4ef031;}}
}
B4ef02a:L4ef02a:{c.instructions+=2;NFSU2_TR(0x4ef02a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x100ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ef02f:{NFSU2_TR(0x4ef02f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef08b;}}
}
B4ef031:L4ef031:{c.instructions+=5;NFSU2_TR(0x4ef031);
u8 U[8];
__builtin_memmove((U+0),gp(0x7f444c),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef038:{NFSU2_TR(0x4ef038);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef03b:{NFSU2_TR(0x4ef03b);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef040:{NFSU2_TR(0x4ef040);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef041:{NFSU2_TR(0x4ef041);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef069;}}
}
B4ef043:L4ef043:{c.instructions+=1;NFSU2_TR(0x4ef043);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef048ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ef048:L4ef048:{c.instructions+=2;NFSU2_TR(0x4ef048);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef049:{NFSU2_TR(0x4ef049);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef04eull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ef04e:L4ef04e:{c.instructions+=4;NFSU2_TR(0x4ef04e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ef051:{NFSU2_TR(0x4ef051);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef056:{NFSU2_TR(0x4ef056);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef057:{NFSU2_TR(0x4ef057);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef05cull));
TAIL_STATIC(0x5379c0u,537);
}
B4ef05c:L4ef05c:{c.instructions+=2;NFSU2_TR(0x4ef05c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef05d:{NFSU2_TR(0x4ef05d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef062ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ef062:L4ef062:{c.instructions+=3;NFSU2_TR(0x4ef062);
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
B4ef065:{NFSU2_TR(0x4ef065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef066:{NFSU2_TR(0x4ef066);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef069:L4ef069:{c.instructions+=1;NFSU2_TR(0x4ef069);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef06eull));
TAIL_STATIC(0x5379c0u,537);
}
B4ef06e:L4ef06e:{c.instructions+=2;NFSU2_TR(0x4ef06e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef06f:{NFSU2_TR(0x4ef06f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef074ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ef074:L4ef074:{c.instructions+=4;NFSU2_TR(0x4ef074);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ef077:{NFSU2_TR(0x4ef077);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef07c:{NFSU2_TR(0x4ef07c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef07d:{NFSU2_TR(0x4ef07d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef082ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ef082:L4ef082:{c.instructions+=2;NFSU2_TR(0x4ef082);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef083:{NFSU2_TR(0x4ef083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef088ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ef088:L4ef088:{c.instructions+=1;NFSU2_TR(0x4ef088);
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
B4ef08b:L4ef08b:{c.instructions+=2;NFSU2_TR(0x4ef08b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef08c:{NFSU2_TR(0x4ef08c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef090:L4ef090:{c.instructions+=7;NFSU2_TR(0x4ef090);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef091:{NFSU2_TR(0x4ef091);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef092:{NFSU2_TR(0x4ef092);
__builtin_memmove((R+20),(R+4),4);
}
B4ef094:{NFSU2_TR(0x4ef094);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef097:{NFSU2_TR(0x4ef097);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4ef099:{NFSU2_TR(0x4ef099);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef09a:{NFSU2_TR(0x4ef09a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4ef0b0;}}
}
B4ef09c:L4ef09c:{c.instructions+=2;NFSU2_TR(0x4ef09c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ef09f:{NFSU2_TR(0x4ef09f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4ef0b0;}}
}
B4ef0a1:L4ef0a1:{c.instructions+=4;NFSU2_TR(0x4ef0a1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4ef0a7:{NFSU2_TR(0x4ef0a7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x83ad90ull))));
}
B4ef0ac:{NFSU2_TR(0x4ef0ac);
__builtin_memmove((R+28),(R+0),4);
}
B4ef0ae:{NFSU2_TR(0x4ef0ae);
{goto L4ef0b2;}
}
B4ef0b0:L4ef0b0:{c.instructions+=1;NFSU2_TR(0x4ef0b0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4ef0b2:L4ef0b2:{c.instructions+=5;NFSU2_TR(0x4ef0b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef0b5:{NFSU2_TR(0x4ef0b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ef0bb:{NFSU2_TR(0x4ef0bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef0bc:{NFSU2_TR(0x4ef0bc);
__builtin_memmove((R+4),(R+28),4);
}
B4ef0be:{NFSU2_TR(0x4ef0be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef0c3ull));
TAIL_STATIC(0x5163a0u,516);
}
B4ef0c3:L4ef0c3:{c.instructions+=2;NFSU2_TR(0x4ef0c3);
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
B4ef0c5:{NFSU2_TR(0x4ef0c5);
if(r1(R+518)){{goto L4ef19e;}}
}
B4ef0cb:L4ef0cb:{c.instructions+=3;NFSU2_TR(0x4ef0cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef0cc:{NFSU2_TR(0x4ef0cc);
__builtin_memmove((R+4),(R+28),4);
}
B4ef0ce:{NFSU2_TR(0x4ef0ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef0d3ull));
TAIL_STATIC(0x516340u,516);
}
B4ef0d3:L4ef0d3:{c.instructions+=2;NFSU2_TR(0x4ef0d3);
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
B4ef0d5:{NFSU2_TR(0x4ef0d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef19e;}}
}
B4ef0db:L4ef0db:{c.instructions+=4;NFSU2_TR(0x4ef0db);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ef0df:{NFSU2_TR(0x4ef0df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef0e0:{NFSU2_TR(0x4ef0e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ef0e3:{NFSU2_TR(0x4ef0e3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ef146;}}
}
B4ef0e5:L4ef0e5:{c.instructions+=3;NFSU2_TR(0x4ef0e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef0e8:{NFSU2_TR(0x4ef0e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ef0ea:{NFSU2_TR(0x4ef0ea);
if(r1(R+518)){{goto L4ef0f1;}}
}
B4ef0ec:L4ef0ec:{c.instructions+=2;NFSU2_TR(0x4ef0ec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4ef0ef:{NFSU2_TR(0x4ef0ef);
{goto L4ef0f3;}
}
B4ef0f1:L4ef0f1:{c.instructions+=1;NFSU2_TR(0x4ef0f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ef0f3:L4ef0f3:{c.instructions+=3;NFSU2_TR(0x4ef0f3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef0f5:{NFSU2_TR(0x4ef0f5);
__builtin_memmove((R+4),(R+20),4);
}
B4ef0f7:{NFSU2_TR(0x4ef0f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef100;}}
}
B4ef0f9:L4ef0f9:{c.instructions+=2;NFSU2_TR(0x4ef0f9);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef0fe:{NFSU2_TR(0x4ef0fe);
{goto L4ef105;}
}
B4ef100:L4ef100:{c.instructions+=1;NFSU2_TR(0x4ef100);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef105:L4ef105:{c.instructions+=1;NFSU2_TR(0x4ef105);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef10aull));
TAIL_STATIC(0x4e2590u,4e2);
}
B4ef10a:L4ef10a:{c.instructions+=3;NFSU2_TR(0x4ef10a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef10b:{NFSU2_TR(0x4ef10b);
__builtin_memmove((R+4),(R+28),4);
}
B4ef10d:{NFSU2_TR(0x4ef10d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef112ull));
TAIL_STATIC(0x52a6c0u,52a);
}
B4ef112:L4ef112:{c.instructions+=2;NFSU2_TR(0x4ef112);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ef114:{NFSU2_TR(0x4ef114);
if(r1(R+518)){{goto L4ef11b;}}
}
B4ef116:L4ef116:{c.instructions+=2;NFSU2_TR(0x4ef116);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ef119:{NFSU2_TR(0x4ef119);
{goto L4ef11d;}
}
B4ef11b:L4ef11b:{c.instructions+=1;NFSU2_TR(0x4ef11b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ef11d:L4ef11d:{c.instructions+=7;NFSU2_TR(0x4ef11d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ef11f:{NFSU2_TR(0x4ef11f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ef122:{NFSU2_TR(0x4ef122);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4ef124:{NFSU2_TR(0x4ef124);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef127:{NFSU2_TR(0x4ef127);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ef12a:{NFSU2_TR(0x4ef12a);
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
B4ef12c:{NFSU2_TR(0x4ef12c);
if(r1(R+518)){{goto L4ef134;}}
}
B4ef12e:L4ef12e:{c.instructions+=3;NFSU2_TR(0x4ef12e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ef130:{NFSU2_TR(0x4ef130);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef132:{NFSU2_TR(0x4ef132);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef134ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4ef134:L4ef134:{c.instructions+=9;NFSU2_TR(0x4ef134);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef137:{NFSU2_TR(0x4ef137);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef138:{NFSU2_TR(0x4ef138);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4ef139:{NFSU2_TR(0x4ef139);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ef13a:{NFSU2_TR(0x4ef13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef13d:{NFSU2_TR(0x4ef13d);
__builtin_memmove((R+4),(R+20),4);
}
B4ef13f:{NFSU2_TR(0x4ef13f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ef140:{NFSU2_TR(0x4ef140);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ef141:{NFSU2_TR(0x4ef141);
TAIL_STATIC(0x4b2310u,4b2);
}
B4ef146:L4ef146:{c.instructions+=3;NFSU2_TR(0x4ef146);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef147:{NFSU2_TR(0x4ef147);
__builtin_memmove((R+4),(R+28),4);
}
B4ef149:{NFSU2_TR(0x4ef149);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef14eull));
TAIL_STATIC(0x52a6c0u,52a);
}
B4ef14e:L4ef14e:{c.instructions+=2;NFSU2_TR(0x4ef14e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ef150:{NFSU2_TR(0x4ef150);
if(r1(R+518)){{goto L4ef157;}}
}
B4ef152:L4ef152:{c.instructions+=2;NFSU2_TR(0x4ef152);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ef155:{NFSU2_TR(0x4ef155);
{goto L4ef159;}
}
B4ef157:L4ef157:{c.instructions+=1;NFSU2_TR(0x4ef157);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ef159:L4ef159:{c.instructions+=7;NFSU2_TR(0x4ef159);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ef15b:{NFSU2_TR(0x4ef15b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ef15e:{NFSU2_TR(0x4ef15e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4ef160:{NFSU2_TR(0x4ef160);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef163:{NFSU2_TR(0x4ef163);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ef166:{NFSU2_TR(0x4ef166);
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
B4ef168:{NFSU2_TR(0x4ef168);
if(r1(R+518)){{goto L4ef170;}}
}
B4ef16a:L4ef16a:{c.instructions+=3;NFSU2_TR(0x4ef16a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ef16c:{NFSU2_TR(0x4ef16c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef16e:{NFSU2_TR(0x4ef16e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef170ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4ef170:L4ef170:{c.instructions+=7;NFSU2_TR(0x4ef170);
__builtin_memmove((R+4),gp(0x85ad28),4);
}
B4ef176:{NFSU2_TR(0x4ef176);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ef17c:{NFSU2_TR(0x4ef17c);
w4(R+0,u32(0x3ull));
}
B4ef181:{NFSU2_TR(0x4ef181);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x83aac0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef187:{NFSU2_TR(0x4ef187);
__builtin_memmove((R+4),(R+20),4);
}
B4ef189:{NFSU2_TR(0x4ef189);
__builtin_memmove(gp(0x7f444c),(R+0),4);
}
B4ef18e:{NFSU2_TR(0x4ef18e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef193ull));
TAIL_STATIC(0x4eec90u,4ee);
}
B4ef193:L4ef193:{c.instructions+=6;NFSU2_TR(0x4ef193);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef194:{NFSU2_TR(0x4ef194);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ef195:{NFSU2_TR(0x4ef195);
__builtin_memmove((R+4),(R+20),4);
}
B4ef197:{NFSU2_TR(0x4ef197);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ef198:{NFSU2_TR(0x4ef198);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ef199:{NFSU2_TR(0x4ef199);
TAIL_STATIC(0x4b2310u,4b2);
}
B4ef19e:L4ef19e:{c.instructions+=4;NFSU2_TR(0x4ef19e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ef19f:{NFSU2_TR(0x4ef19f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ef1a0:{NFSU2_TR(0x4ef1a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ef1a1:{NFSU2_TR(0x4ef1a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef1b0:L4ef1b0:{c.instructions+=9;NFSU2_TR(0x4ef1b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef1b2:{NFSU2_TR(0x4ef1b2);
u8 U[4];
w4(U+0,u32(0x776464ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef1b7:{NFSU2_TR(0x4ef1b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef1bd:{NFSU2_TR(0x4ef1bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef1be:{NFSU2_TR(0x4ef1be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef1c5:{NFSU2_TR(0x4ef1c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef1c6:{NFSU2_TR(0x4ef1c6);
__builtin_memmove((R+0),gp(0x836340),4);
}
B4ef1cb:{NFSU2_TR(0x4ef1cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ef1cd:{NFSU2_TR(0x4ef1cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef247;}}
}
B4ef1cf:L4ef1cf:{c.instructions+=7;NFSU2_TR(0x4ef1cf);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ef1d4:{NFSU2_TR(0x4ef1d4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef1d7:{NFSU2_TR(0x4ef1d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef1d8:{NFSU2_TR(0x4ef1d8);
__builtin_memmove((R+24),gp(0x7f446c),4);
}
B4ef1de:{NFSU2_TR(0x4ef1de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef1df:{NFSU2_TR(0x4ef1df);
__builtin_memmove((R+28),gp(0x7f4468),4);
}
B4ef1e5:{NFSU2_TR(0x4ef1e5);
if(r1(R+518)){{goto L4ef1ee;}}
}
B4ef1e7:L4ef1e7:{c.instructions+=2;NFSU2_TR(0x4ef1e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ef1ec:{NFSU2_TR(0x4ef1ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef1fa;}}
}
B4ef1ee:L4ef1ee:{c.instructions+=2;NFSU2_TR(0x4ef1ee);
__builtin_memmove((R+24),gp(0x7f4470),4);
}
B4ef1f4:{NFSU2_TR(0x4ef1f4);
__builtin_memmove((R+28),gp(0x7f4478),4);
}
B4ef1fa:L4ef1fa:{c.instructions+=2;NFSU2_TR(0x4ef1fa);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef1fc:{NFSU2_TR(0x4ef1fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef201ull));
TAIL_STATIC(0x575620u,575);
}
B4ef201:L4ef201:{c.instructions+=5;NFSU2_TR(0x4ef201);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ef204:{NFSU2_TR(0x4ef204);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef208:{NFSU2_TR(0x4ef208);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ef20a:{NFSU2_TR(0x4ef20a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ef212:{NFSU2_TR(0x4ef212);
if(r1(R+518)){{goto L4ef21f;}}
}
B4ef214:L4ef214:{c.instructions+=4;NFSU2_TR(0x4ef214);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef215:{NFSU2_TR(0x4ef215);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef216:{NFSU2_TR(0x4ef216);
__builtin_memmove((R+4),(R+0),4);
}
B4ef218:{NFSU2_TR(0x4ef218);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef21dull));
TAIL_STATIC(0x4e2900u,4e2);
}
B4ef21d:L4ef21d:{c.instructions+=1;NFSU2_TR(0x4ef21d);
{goto L4ef221;}
}
B4ef21f:L4ef21f:{c.instructions+=1;NFSU2_TR(0x4ef21f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ef221:L4ef221:{c.instructions+=6;NFSU2_TR(0x4ef221);
__builtin_memmove((R+4),gp(0x7f445c),4);
}
B4ef227:{NFSU2_TR(0x4ef227);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef228:{NFSU2_TR(0x4ef228);
__builtin_memmove((R+4),(R+0),4);
}
B4ef22a:{NFSU2_TR(0x4ef22a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ef232:{NFSU2_TR(0x4ef232);
__builtin_memmove(gp(0x836340),(R+0),4);
}
B4ef237:{NFSU2_TR(0x4ef237);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef23cull));
TAIL_STATIC(0x4b2960u,4b2);
}
B4ef23c:L4ef23c:{c.instructions+=4;NFSU2_TR(0x4ef23c);
__builtin_memmove((R+8),gp(0x836340),4);
}
B4ef242:{NFSU2_TR(0x4ef242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ef243:{NFSU2_TR(0x4ef243);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef246:{NFSU2_TR(0x4ef246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef247:L4ef247:{c.instructions+=4;NFSU2_TR(0x4ef247);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ef24b:{NFSU2_TR(0x4ef24b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef252:{NFSU2_TR(0x4ef252);
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
B4ef255:{NFSU2_TR(0x4ef255);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef260:L4ef260:{c.instructions+=3;NFSU2_TR(0x4ef260);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef261:{NFSU2_TR(0x4ef261);
__builtin_memmove((R+24),(R+4),4);
}
B4ef263:{NFSU2_TR(0x4ef263);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef268ull));
TAIL_STATIC(0x4e2a20u,4e2);
}
B4ef268:L4ef268:{c.instructions+=2;NFSU2_TR(0x4ef268);
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
B4ef26d:{NFSU2_TR(0x4ef26d);
if(r1(R+518)){{goto L4ef278;}}
}
B4ef26f:L4ef26f:{c.instructions+=2;NFSU2_TR(0x4ef26f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef270:{NFSU2_TR(0x4ef270);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef275ull));
TAIL_STATIC(0x575630u,575);
}
B4ef275:L4ef275:{c.instructions+=1;NFSU2_TR(0x4ef275);
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
B4ef278:L4ef278:{c.instructions+=3;NFSU2_TR(0x4ef278);
__builtin_memmove((R+0),(R+24),4);
}
B4ef27a:{NFSU2_TR(0x4ef27a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef27b:{NFSU2_TR(0x4ef27b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef280:L4ef280:{c.instructions+=13;NFSU2_TR(0x4ef280);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef281:{NFSU2_TR(0x4ef281);
__builtin_memmove((R+20),(R+16),4);
}
B4ef283:{NFSU2_TR(0x4ef283);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4ef286:{NFSU2_TR(0x4ef286);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef288:{NFSU2_TR(0x4ef288);
u8 U[4];
w4(U+0,u32(0x776492ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef28d:{NFSU2_TR(0x4ef28d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef293:{NFSU2_TR(0x4ef293);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef294:{NFSU2_TR(0x4ef294);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef29b:{NFSU2_TR(0x4ef29b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x900ull))));
}
B4ef2a1:{NFSU2_TR(0x4ef2a1);
__builtin_memmove((R+0),gp(0x836340),4);
}
B4ef2a6:{NFSU2_TR(0x4ef2a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ef2a8:{NFSU2_TR(0x4ef2a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef2a9:{NFSU2_TR(0x4ef2a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef38e;}}
}
B4ef2af:L4ef2af:{c.instructions+=1;NFSU2_TR(0x4ef2af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef2b4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ef1b0u);}goto L4ef1b0;}
}
B4ef2b4:L4ef2b4:{c.instructions+=2;NFSU2_TR(0x4ef2b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ef2b8:{NFSU2_TR(0x4ef2b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef2bdull));
TAIL_STATIC(0x40c910u,40c);
}
B4ef2bd:L4ef2bd:{c.instructions+=7;NFSU2_TR(0x4ef2bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef2bf:{NFSU2_TR(0x4ef2bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4ef2c3:{NFSU2_TR(0x4ef2c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef2c4:{NFSU2_TR(0x4ef2c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef2c6:{NFSU2_TR(0x4ef2c6);
w4(R+4,u32(0x83a9d0ull));
}
B4ef2cb:{NFSU2_TR(0x4ef2cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x918ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ef2d6:{NFSU2_TR(0x4ef2d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef2dbull));
TAIL_STATIC(0x515d00u,515);
}
B4ef2db:L4ef2db:{c.instructions+=2;NFSU2_TR(0x4ef2db);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef2e0:{NFSU2_TR(0x4ef2e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef2e5ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4ef2e5:L4ef2e5:{c.instructions+=3;NFSU2_TR(0x4ef2e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ef2e8:{NFSU2_TR(0x4ef2e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ef2ea:{NFSU2_TR(0x4ef2ea);
if(r1(R+518)){{goto L4ef2fd;}}
}
B4ef2ec:L4ef2ec:{c.instructions+=2;NFSU2_TR(0x4ef2ec);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef2f1:{NFSU2_TR(0x4ef2f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef2f6ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4ef2f6:L4ef2f6:{c.instructions+=3;NFSU2_TR(0x4ef2f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ef2f9:{NFSU2_TR(0x4ef2f9);
__builtin_memmove((R+24),(R+0),4);
}
B4ef2fb:{NFSU2_TR(0x4ef2fb);
{goto L4ef326;}
}
B4ef2fd:L4ef2fd:{c.instructions+=2;NFSU2_TR(0x4ef2fd);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef302:{NFSU2_TR(0x4ef302);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef307ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4ef307:L4ef307:{c.instructions+=3;NFSU2_TR(0x4ef307);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ef30a:{NFSU2_TR(0x4ef30a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ef30c:{NFSU2_TR(0x4ef30c);
if(r1(R+518)){{goto L4ef324;}}
}
B4ef30e:L4ef30e:{c.instructions+=2;NFSU2_TR(0x4ef30e);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef313:{NFSU2_TR(0x4ef313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef318ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4ef318:L4ef318:{c.instructions+=3;NFSU2_TR(0x4ef318);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ef31b:{NFSU2_TR(0x4ef31b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ef31d:{NFSU2_TR(0x4ef31d);
if(r1(R+518)){{goto L4ef324;}}
}
B4ef31f:L4ef31f:{c.instructions+=2;NFSU2_TR(0x4ef31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ef322:{NFSU2_TR(0x4ef322);
{goto L4ef326;}
}
B4ef324:L4ef324:{c.instructions+=1;NFSU2_TR(0x4ef324);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4ef326:L4ef326:{c.instructions+=4;NFSU2_TR(0x4ef326);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ef32a:{NFSU2_TR(0x4ef32a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef32b:{NFSU2_TR(0x4ef32b);
w4(R+4,u32(0x8371b0ull));
}
B4ef330:{NFSU2_TR(0x4ef330);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef335ull));
TAIL_STATIC(0x413440u,413);
}
B4ef335:L4ef335:{c.instructions+=3;NFSU2_TR(0x4ef335);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ef337:{NFSU2_TR(0x4ef337);
s4(0x83623c,u32(0x2ull));
}
B4ef341:{NFSU2_TR(0x4ef341);
if(r1(R+518)){{goto L4ef351;}}
}
B4ef343:L4ef343:{c.instructions+=4;NFSU2_TR(0x4ef343);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef345:{NFSU2_TR(0x4ef345);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef34a:{NFSU2_TR(0x4ef34a);
__builtin_memmove((R+4),(R+24),4);
}
B4ef34c:{NFSU2_TR(0x4ef34c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef351ull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4ef351:L4ef351:{c.instructions+=2;NFSU2_TR(0x4ef351);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef356:{NFSU2_TR(0x4ef356);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef35bull));
TAIL_STATIC(0x52cf60u,52c);
}
B4ef35b:L4ef35b:{c.instructions+=3;NFSU2_TR(0x4ef35b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ef35e:{NFSU2_TR(0x4ef35e);
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
B4ef360:{NFSU2_TR(0x4ef360);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef377;}}
}
B4ef362:L4ef362:{c.instructions+=6;NFSU2_TR(0x4ef362);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef364:{NFSU2_TR(0x4ef364);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef366:{NFSU2_TR(0x4ef366);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef368:{NFSU2_TR(0x4ef368);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef36d:{NFSU2_TR(0x4ef36d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef36f:{NFSU2_TR(0x4ef36f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef374ull));
TAIL_STATIC(0x555f50u,555);
}
B4ef374:L4ef374:{c.instructions+=1;NFSU2_TR(0x4ef374);
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
B4ef377:L4ef377:{c.instructions+=3;NFSU2_TR(0x4ef377);
u8 U[4];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ef37e:{NFSU2_TR(0x4ef37e);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ef389:{NFSU2_TR(0x4ef389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef38eull));
TAIL_STATIC(0x4022c0u,402);
}
B4ef38e:L4ef38e:{c.instructions+=2;NFSU2_TR(0x4ef38e);
u8 U[4];
w4(U+0,u32(0x150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef393:{NFSU2_TR(0x4ef393);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef398ull));
TAIL_STATIC(0x575620u,575);
}
B4ef398:L4ef398:{c.instructions+=5;NFSU2_TR(0x4ef398);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ef39b:{NFSU2_TR(0x4ef39b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef39f:{NFSU2_TR(0x4ef39f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ef3a1:{NFSU2_TR(0x4ef3a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ef3ac:{NFSU2_TR(0x4ef3ac);
if(r1(R+518)){{goto L4ef3cc;}}
}
B4ef3ae:L4ef3ae:{c.instructions+=4;NFSU2_TR(0x4ef3ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ef3b1:{NFSU2_TR(0x4ef3b1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef3b2:{NFSU2_TR(0x4ef3b2);
__builtin_memmove((R+4),(R+0),4);
}
B4ef3b4:{NFSU2_TR(0x4ef3b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef3b9ull));
TAIL_STATIC(0x4e2a50u,4e2);
}
B4ef3b9:L4ef3b9:{c.instructions+=6;NFSU2_TR(0x4ef3b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ef3c0:{NFSU2_TR(0x4ef3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef3c7:{NFSU2_TR(0x4ef3c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef3c8:{NFSU2_TR(0x4ef3c8);
__builtin_memmove((R+16),(R+20),4);
}
B4ef3ca:{NFSU2_TR(0x4ef3ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ef3cb:{NFSU2_TR(0x4ef3cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef3cc:L4ef3cc:{c.instructions+=7;NFSU2_TR(0x4ef3cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ef3d3:{NFSU2_TR(0x4ef3d3);
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
B4ef3d5:{NFSU2_TR(0x4ef3d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef3dc:{NFSU2_TR(0x4ef3dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef3dd:{NFSU2_TR(0x4ef3dd);
__builtin_memmove((R+16),(R+20),4);
}
B4ef3df:{NFSU2_TR(0x4ef3df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ef3e0:{NFSU2_TR(0x4ef3e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef3f0:L4ef3f0:{c.instructions+=13;NFSU2_TR(0x4ef3f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef3f2:{NFSU2_TR(0x4ef3f2);
u8 U[4];
w4(U+0,u32(0x776e28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef3f7:{NFSU2_TR(0x4ef3f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef3fd:{NFSU2_TR(0x4ef3fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef3fe:{NFSU2_TR(0x4ef3fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef405:{NFSU2_TR(0x4ef405);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef406:{NFSU2_TR(0x4ef406);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef40a:{NFSU2_TR(0x4ef40a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef40b:{NFSU2_TR(0x4ef40b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef40c:{NFSU2_TR(0x4ef40c);
__builtin_memmove((R+24),(R+4),4);
}
B4ef40e:{NFSU2_TR(0x4ef40e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef40f:{NFSU2_TR(0x4ef40f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef413:{NFSU2_TR(0x4ef413);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef418ull));
TAIL_STATIC(0x552780u,552);
}
B4ef418:L4ef418:{c.instructions+=11;NFSU2_TR(0x4ef418);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4ef41a:{NFSU2_TR(0x4ef41a);
__builtin_memmove((R+4),(R+24),4);
}
B4ef41c:{NFSU2_TR(0x4ef41c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef420:{NFSU2_TR(0x4ef420);
u8 U[4];
w4(U+0,u32(0x798014ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4ef426:{NFSU2_TR(0x4ef426);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef42c:{NFSU2_TR(0x4ef42c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef432:{NFSU2_TR(0x4ef432);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef438:{NFSU2_TR(0x4ef438);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ef43e:{NFSU2_TR(0x4ef43e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef444:{NFSU2_TR(0x4ef444);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef44a:{NFSU2_TR(0x4ef44a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef44full));
TAIL_STATIC(0x4e2c70u,4e2);
}
B4ef44f:L4ef44f:{c.instructions+=3;NFSU2_TR(0x4ef44f);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ef454:{NFSU2_TR(0x4ef454);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef457:{NFSU2_TR(0x4ef457);
if(r1(R+518)){{goto L4ef517;}}
}
B4ef45d:L4ef45d:{c.instructions+=2;NFSU2_TR(0x4ef45d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ef462:{NFSU2_TR(0x4ef462);
if(r1(R+518)){{goto L4ef517;}}
}
B4ef468:L4ef468:{c.instructions+=2;NFSU2_TR(0x4ef468);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef46b:{NFSU2_TR(0x4ef46b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef4ca;}}
}
B4ef46d:L4ef46d:{c.instructions+=2;NFSU2_TR(0x4ef46d);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef474:{NFSU2_TR(0x4ef474);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef47d;}}
}
B4ef476:L4ef476:{c.instructions+=1;NFSU2_TR(0x4ef476);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xd3f5f29ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ef47d:L4ef47d:{c.instructions+=5;NFSU2_TR(0x4ef47d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef480:{NFSU2_TR(0x4ef480);
u8 U[4];
w4(U+0,u32(0x7d7a6e0eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef485:{NFSU2_TR(0x4ef485);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef48a:{NFSU2_TR(0x4ef48a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef48b:{NFSU2_TR(0x4ef48b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef490ull));
TAIL_STATIC(0x537a10u,537);
}
B4ef490:L4ef490:{c.instructions+=3;NFSU2_TR(0x4ef490);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ef493:{NFSU2_TR(0x4ef493);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef494:{NFSU2_TR(0x4ef494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef499ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ef499:L4ef499:{c.instructions+=6;NFSU2_TR(0x4ef499);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ef49c:{NFSU2_TR(0x4ef49c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef49e:{NFSU2_TR(0x4ef49e);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef4a3:{NFSU2_TR(0x4ef4a3);
u8 U[4];
w4(U+0,u32(0x2bac0ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef4a8:{NFSU2_TR(0x4ef4a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef4a9:{NFSU2_TR(0x4ef4a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef4aeull));
TAIL_STATIC(0x537c00u,537);
}
B4ef4ae:L4ef4ae:{c.instructions+=4;NFSU2_TR(0x4ef4ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef4b1:{NFSU2_TR(0x4ef4b1);
u8 U[4];
w4(U+0,u32(0x4fd28546ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef4b6:{NFSU2_TR(0x4ef4b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef4b7:{NFSU2_TR(0x4ef4b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef4bcull));
TAIL_STATIC(0x5379c0u,537);
}
B4ef4bc:L4ef4bc:{c.instructions+=2;NFSU2_TR(0x4ef4bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef4bd:{NFSU2_TR(0x4ef4bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef4c2ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ef4c2:L4ef4c2:{c.instructions+=2;NFSU2_TR(0x4ef4c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4ef4c5:{NFSU2_TR(0x4ef4c5);
{goto L4ef5d0;}
}
B4ef4ca:L4ef4ca:{c.instructions+=5;NFSU2_TR(0x4ef4ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef4cd:{NFSU2_TR(0x4ef4cd);
u8 U[4];
w4(U+0,u32(0x47597606ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef4d2:{NFSU2_TR(0x4ef4d2);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef4d7:{NFSU2_TR(0x4ef4d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef4d8:{NFSU2_TR(0x4ef4d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef4ddull));
TAIL_STATIC(0x537a10u,537);
}
B4ef4dd:L4ef4dd:{c.instructions+=3;NFSU2_TR(0x4ef4dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ef4e0:{NFSU2_TR(0x4ef4e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef4e1:{NFSU2_TR(0x4ef4e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef4e6ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ef4e6:L4ef4e6:{c.instructions+=6;NFSU2_TR(0x4ef4e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ef4e9:{NFSU2_TR(0x4ef4e9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef4eb:{NFSU2_TR(0x4ef4eb);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef4f0:{NFSU2_TR(0x4ef4f0);
u8 U[4];
w4(U+0,u32(0x2bac0ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef4f5:{NFSU2_TR(0x4ef4f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef4f6:{NFSU2_TR(0x4ef4f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef4fbull));
TAIL_STATIC(0x537c00u,537);
}
B4ef4fb:L4ef4fb:{c.instructions+=4;NFSU2_TR(0x4ef4fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef4fe:{NFSU2_TR(0x4ef4fe);
u8 U[4];
w4(U+0,u32(0x4fd28546ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef503:{NFSU2_TR(0x4ef503);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef504:{NFSU2_TR(0x4ef504);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef509ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ef509:L4ef509:{c.instructions+=2;NFSU2_TR(0x4ef509);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef50a:{NFSU2_TR(0x4ef50a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef50full));
TAIL_STATIC(0x50ca00u,50c);
}
B4ef50f:L4ef50f:{c.instructions+=2;NFSU2_TR(0x4ef50f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4ef512:{NFSU2_TR(0x4ef512);
{goto L4ef5d0;}
}
B4ef517:L4ef517:{c.instructions+=6;NFSU2_TR(0x4ef517);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xf4ea444bull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ef51e:{NFSU2_TR(0x4ef51e);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ef523:{NFSU2_TR(0x4ef523);
__builtin_memmove(gp(0x8500c8),(R+12),1);
}
B4ef529:{NFSU2_TR(0x4ef529);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ef52e:{NFSU2_TR(0x4ef52e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef531:{NFSU2_TR(0x4ef531);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef53a;}}
}
B4ef533:L4ef533:{c.instructions+=2;NFSU2_TR(0x4ef533);
u8 U[4];
w4(U+0,u32(0x245448dbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef538:{NFSU2_TR(0x4ef538);
{goto L4ef53f;}
}
B4ef53a:L4ef53a:{c.instructions+=1;NFSU2_TR(0x4ef53a);
u8 U[4];
w4(U+0,u32(0x5d2b0b43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef53f:L4ef53f:{c.instructions+=3;NFSU2_TR(0x4ef53f);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef544:{NFSU2_TR(0x4ef544);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef545:{NFSU2_TR(0x4ef545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef54aull));
TAIL_STATIC(0x537a10u,537);
}
B4ef54a:L4ef54a:{c.instructions+=3;NFSU2_TR(0x4ef54a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ef54d:{NFSU2_TR(0x4ef54d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef54e:{NFSU2_TR(0x4ef54e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef553ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ef553:L4ef553:{c.instructions+=4;NFSU2_TR(0x4ef553);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ef558:{NFSU2_TR(0x4ef558);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ef55b:{NFSU2_TR(0x4ef55b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef55e:{NFSU2_TR(0x4ef55e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef578;}}
}
B4ef560:L4ef560:{c.instructions+=6;NFSU2_TR(0x4ef560);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef563:{NFSU2_TR(0x4ef563);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef565:{NFSU2_TR(0x4ef565);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef56a:{NFSU2_TR(0x4ef56a);
u8 U[4];
w4(U+0,u32(0x797720ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef56f:{NFSU2_TR(0x4ef56f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef570:{NFSU2_TR(0x4ef570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef575ull));
TAIL_STATIC(0x5426c0u,542);
}
B4ef575:L4ef575:{c.instructions+=1;NFSU2_TR(0x4ef575);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ef578:L4ef578:{c.instructions+=6;NFSU2_TR(0x4ef578);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ef57b:{NFSU2_TR(0x4ef57b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef57d:{NFSU2_TR(0x4ef57d);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef582:{NFSU2_TR(0x4ef582);
u8 U[4];
w4(U+0,u32(0x2bac0ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef587:{NFSU2_TR(0x4ef587);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef588:{NFSU2_TR(0x4ef588);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef58dull));
TAIL_STATIC(0x537c00u,537);
}
B4ef58d:L4ef58d:{c.instructions+=4;NFSU2_TR(0x4ef58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef590:{NFSU2_TR(0x4ef590);
u8 U[4];
w4(U+0,u32(0x4fd28546ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef595:{NFSU2_TR(0x4ef595);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef596:{NFSU2_TR(0x4ef596);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef59bull));
TAIL_STATIC(0x5379c0u,537);
}
B4ef59b:L4ef59b:{c.instructions+=2;NFSU2_TR(0x4ef59b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef59c:{NFSU2_TR(0x4ef59c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef5a1ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ef5a1:L4ef5a1:{c.instructions+=4;NFSU2_TR(0x4ef5a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef5a4:{NFSU2_TR(0x4ef5a4);
u8 U[4];
w4(U+0,u32(0xeb406fecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef5a9:{NFSU2_TR(0x4ef5a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef5aa:{NFSU2_TR(0x4ef5aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef5afull));
TAIL_STATIC(0x5379c0u,537);
}
B4ef5af:L4ef5af:{c.instructions+=2;NFSU2_TR(0x4ef5af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef5b0:{NFSU2_TR(0x4ef5b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef5b5ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ef5b5:L4ef5b5:{c.instructions+=8;NFSU2_TR(0x4ef5b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ef5b8:{NFSU2_TR(0x4ef5b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef5bb:{NFSU2_TR(0x4ef5bb);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4ef5c1:{NFSU2_TR(0x4ef5c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4ef5c4:{NFSU2_TR(0x4ef5c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef5c5:{NFSU2_TR(0x4ef5c5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x4000ull))));
}
B4ef5ca:{NFSU2_TR(0x4ef5ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef5cb:{NFSU2_TR(0x4ef5cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef5d0ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4ef5d0:L4ef5d0:{c.instructions+=7;NFSU2_TR(0x4ef5d0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ef5d4:{NFSU2_TR(0x4ef5d4);
__builtin_memmove((R+0),(R+24),4);
}
B4ef5d6:{NFSU2_TR(0x4ef5d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef5d7:{NFSU2_TR(0x4ef5d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ef5d8:{NFSU2_TR(0x4ef5d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef5df:{NFSU2_TR(0x4ef5df);
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
B4ef5e2:{NFSU2_TR(0x4ef5e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef5f0:L4ef5f0:{c.instructions+=3;NFSU2_TR(0x4ef5f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef5f1:{NFSU2_TR(0x4ef5f1);
__builtin_memmove((R+24),(R+4),4);
}
B4ef5f3:{NFSU2_TR(0x4ef5f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef5f8ull));
{goto L4ef610;}
}
B4ef5f8:L4ef5f8:{c.instructions+=2;NFSU2_TR(0x4ef5f8);
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
B4ef5fd:{NFSU2_TR(0x4ef5fd);
if(r1(R+518)){{goto L4ef608;}}
}
B4ef5ff:L4ef5ff:{c.instructions+=2;NFSU2_TR(0x4ef5ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef600:{NFSU2_TR(0x4ef600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef605ull));
TAIL_STATIC(0x575630u,575);
}
B4ef605:L4ef605:{c.instructions+=1;NFSU2_TR(0x4ef605);
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
B4ef608:L4ef608:{c.instructions+=3;NFSU2_TR(0x4ef608);
__builtin_memmove((R+0),(R+24),4);
}
B4ef60a:{NFSU2_TR(0x4ef60a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef60b:{NFSU2_TR(0x4ef60b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef610:L4ef610:{c.instructions+=2;NFSU2_TR(0x4ef610);
u8 U[4];
w4(U+0,u32(0x798014ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4ef616:{NFSU2_TR(0x4ef616);
TAIL_STATIC(0x4cbc30u,4cb);
}
B4ef620:L4ef620:{c.instructions+=14;NFSU2_TR(0x4ef620);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef624:{NFSU2_TR(0x4ef624);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ef628:{NFSU2_TR(0x4ef628);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef629:{NFSU2_TR(0x4ef629);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef62a:{NFSU2_TR(0x4ef62a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef62b:{NFSU2_TR(0x4ef62b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ef62f:{NFSU2_TR(0x4ef62f);
__builtin_memmove((R+24),(R+4),4);
}
B4ef631:{NFSU2_TR(0x4ef631);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ef635:{NFSU2_TR(0x4ef635);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef636:{NFSU2_TR(0x4ef636);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef637:{NFSU2_TR(0x4ef637);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef638:{NFSU2_TR(0x4ef638);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef639:{NFSU2_TR(0x4ef639);
__builtin_memmove((R+4),(R+24),4);
}
B4ef63b:{NFSU2_TR(0x4ef63b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef640ull));
TAIL_STATIC(0x556020u,556);
}
B4ef640:L4ef640:{c.instructions+=2;NFSU2_TR(0x4ef640);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef646:{NFSU2_TR(0x4ef646);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4ef812;}}
}
B4ef64c:L4ef64c:{c.instructions+=1;NFSU2_TR(0x4ef64c);
if(r1(R+518)){{goto L4ef7cc;}}
}
B4ef652:L4ef652:{c.instructions+=2;NFSU2_TR(0x4ef652);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x2c0e485aull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2c0e485aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef658:{NFSU2_TR(0x4ef658);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4ef797;}}
}
B4ef65e:L4ef65e:{c.instructions+=1;NFSU2_TR(0x4ef65e);
if(r1(R+518)){{goto L4ef785;}}
}
B4ef664:L4ef664:{c.instructions+=2;NFSU2_TR(0x4ef664);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x153e234ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef66a:{NFSU2_TR(0x4ef66a);
if(r1(R+518)){{goto L4ef8bb;}}
}
B4ef670:L4ef670:{c.instructions+=2;NFSU2_TR(0x4ef670);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc407210ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ef676:{NFSU2_TR(0x4ef676);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef9a5;}}
}
B4ef67c:L4ef67c:{c.instructions+=3;NFSU2_TR(0x4ef67c);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ef681:{NFSU2_TR(0x4ef681);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef684:{NFSU2_TR(0x4ef684);
if(r1(R+518)){{goto L4ef6b5;}}
}
B4ef686:L4ef686:{c.instructions+=2;NFSU2_TR(0x4ef686);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ef68b:{NFSU2_TR(0x4ef68b);
if(r1(R+518)){{goto L4ef6b5;}}
}
B4ef68d:L4ef68d:{c.instructions+=8;NFSU2_TR(0x4ef68d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef690:{NFSU2_TR(0x4ef690);
w4(R+12,u32(0x1ull));
}
B4ef695:{NFSU2_TR(0x4ef695);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef696:{NFSU2_TR(0x4ef696);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef69b:{NFSU2_TR(0x4ef69b);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef6a0:{NFSU2_TR(0x4ef6a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef6a1:{NFSU2_TR(0x4ef6a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ef6a7:{NFSU2_TR(0x4ef6a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef6acull));
TAIL_STATIC(0x537c00u,537);
}
B4ef6ac:L4ef6ac:{c.instructions+=5;NFSU2_TR(0x4ef6ac);
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
B4ef6af:{NFSU2_TR(0x4ef6af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ef6b0:{NFSU2_TR(0x4ef6b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef6b1:{NFSU2_TR(0x4ef6b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ef6b2:{NFSU2_TR(0x4ef6b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef6b5:L4ef6b5:{c.instructions+=5;NFSU2_TR(0x4ef6b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ef6bb:{NFSU2_TR(0x4ef6bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ef6be:{NFSU2_TR(0x4ef6be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef6bf:{NFSU2_TR(0x4ef6bf);
__builtin_memmove((R+4),(R+24),4);
}
B4ef6c1:{NFSU2_TR(0x4ef6c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef6c6ull));
TAIL_STATIC(0x51fe70u,51f);
}
B4ef6c6:L4ef6c6:{c.instructions+=2;NFSU2_TR(0x4ef6c6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4ef6c8:{NFSU2_TR(0x4ef6c8);
if(r1(R+518)){{goto L4ef9a5;}}
}
B4ef6ce:L4ef6ce:{c.instructions+=5;NFSU2_TR(0x4ef6ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ef6d4:{NFSU2_TR(0x4ef6d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ef6d7:{NFSU2_TR(0x4ef6d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef6d8:{NFSU2_TR(0x4ef6d8);
__builtin_memmove((R+4),(R+24),4);
}
B4ef6da:{NFSU2_TR(0x4ef6da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef6dfull));
TAIL_STATIC(0x51fe70u,51f);
}
B4ef6df:L4ef6df:{c.instructions+=2;NFSU2_TR(0x4ef6df);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4ef6e1:{NFSU2_TR(0x4ef6e1);
if(r1(R+518)){{goto L4ef9a5;}}
}
B4ef6e7:L4ef6e7:{c.instructions+=2;NFSU2_TR(0x4ef6e7);
u8 U[4];
w4(U+0,u32(0x85009cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef6ec:{NFSU2_TR(0x4ef6ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef6f1ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4ef6f1:L4ef6f1:{c.instructions+=4;NFSU2_TR(0x4ef6f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ef6f4:{NFSU2_TR(0x4ef6f4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ef6f7:{NFSU2_TR(0x4ef6f7);
w4(R+12,u32(0x1ull));
}
B4ef6fc:{NFSU2_TR(0x4ef6fc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4ef710;}}
}
B4ef6fe:L4ef6fe:{c.instructions+=2;NFSU2_TR(0x4ef6fe);
u8 U[4];
w4(U+0,u32(0x85009cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef703:{NFSU2_TR(0x4ef703);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef708ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4ef708:L4ef708:{c.instructions+=3;NFSU2_TR(0x4ef708);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ef70b:{NFSU2_TR(0x4ef70b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef70e:{NFSU2_TR(0x4ef70e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ef738;}}
}
B4ef710:L4ef710:{c.instructions+=2;NFSU2_TR(0x4ef710);
u8 U[2];
__builtin_memmove((U+0),gp(0x85009b),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4ef716:{NFSU2_TR(0x4ef716);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef738;}}
}
B4ef718:L4ef718:{c.instructions+=7;NFSU2_TR(0x4ef718);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef71b:{NFSU2_TR(0x4ef71b);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef71d:{NFSU2_TR(0x4ef71d);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef71f:{NFSU2_TR(0x4ef71f);
u8 U[4];
w4(U+0,u32(0xd29a1a18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef724:{NFSU2_TR(0x4ef724);
u8 U[4];
w4(U+0,u32(0x78fd7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef729:{NFSU2_TR(0x4ef729);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef72a:{NFSU2_TR(0x4ef72a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef72full));
TAIL_STATIC(0x558430u,558);
}
B4ef72f:L4ef72f:{c.instructions+=5;NFSU2_TR(0x4ef72f);
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
B4ef732:{NFSU2_TR(0x4ef732);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ef733:{NFSU2_TR(0x4ef733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef734:{NFSU2_TR(0x4ef734);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ef735:{NFSU2_TR(0x4ef735);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef738:L4ef738:{c.instructions+=3;NFSU2_TR(0x4ef738);
u8 U[4];
w4(U+0,u32(0x85009cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef73d:{NFSU2_TR(0x4ef73d);
u8 U[4];
w4(U+0,u32(0x8500a9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef742:{NFSU2_TR(0x4ef742);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef747ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4ef747:L4ef747:{c.instructions+=3;NFSU2_TR(0x4ef747);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ef74a:{NFSU2_TR(0x4ef74a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ef74c:{NFSU2_TR(0x4ef74c);
if(r1(R+518)){{goto L4ef778;}}
}
B4ef74e:L4ef74e:{c.instructions+=2;NFSU2_TR(0x4ef74e);
u8 U[2];
__builtin_memmove((U+0),gp(0x85009b),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4ef754:{NFSU2_TR(0x4ef754);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef778;}}
}
B4ef756:L4ef756:{c.instructions+=5;NFSU2_TR(0x4ef756);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef759:{NFSU2_TR(0x4ef759);
u8 U[4];
w4(U+0,u32(0xff99d845ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef75e:{NFSU2_TR(0x4ef75e);
u8 U[4];
w4(U+0,u32(0x78fd7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef763:{NFSU2_TR(0x4ef763);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef764:{NFSU2_TR(0x4ef764);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef769ull));
TAIL_STATIC(0x558430u,558);
}
B4ef769:L4ef769:{c.instructions+=6;NFSU2_TR(0x4ef769);
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
B4ef76c:{NFSU2_TR(0x4ef76c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ef76d:{NFSU2_TR(0x4ef76d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef773:{NFSU2_TR(0x4ef773);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef774:{NFSU2_TR(0x4ef774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ef775:{NFSU2_TR(0x4ef775);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef778:L4ef778:{c.instructions+=2;NFSU2_TR(0x4ef778);
__builtin_memmove((R+4),(R+24),4);
}
B4ef77a:{NFSU2_TR(0x4ef77a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef77full));
TAIL_STATIC(0x498440u,498);
}
B4ef77f:L4ef77f:{c.instructions+=4;NFSU2_TR(0x4ef77f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ef780:{NFSU2_TR(0x4ef780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef781:{NFSU2_TR(0x4ef781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ef782:{NFSU2_TR(0x4ef782);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef785:L4ef785:{c.instructions+=3;NFSU2_TR(0x4ef785);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ef788:{NFSU2_TR(0x4ef788);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef789:{NFSU2_TR(0x4ef789);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef78eull));
TAIL_STATIC(0x4a0140u,4a0);
}
B4ef78e:L4ef78e:{c.instructions+=5;NFSU2_TR(0x4ef78e);
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
B4ef791:{NFSU2_TR(0x4ef791);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ef792:{NFSU2_TR(0x4ef792);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef793:{NFSU2_TR(0x4ef793);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ef794:{NFSU2_TR(0x4ef794);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef797:L4ef797:{c.instructions+=2;NFSU2_TR(0x4ef797);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34dc1becull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef79d:{NFSU2_TR(0x4ef79d);
if(r1(R+518)){{goto L4ef8c8;}}
}
B4ef7a3:L4ef7a3:{c.instructions+=2;NFSU2_TR(0x4ef7a3);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x59337816ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x59337816ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x59337816ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ef7a9:{NFSU2_TR(0x4ef7a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef9a5;}}
}
B4ef7af:L4ef7af:{c.instructions+=2;NFSU2_TR(0x4ef7af);
__builtin_memmove((R+4),(R+24),4);
}
B4ef7b1:{NFSU2_TR(0x4ef7b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef7b6ull));
TAIL_STATIC(0x4e2dc0u,4e2);
}
B4ef7b6:L4ef7b6:{c.instructions+=5;NFSU2_TR(0x4ef7b6);
w4(R+12,u32(0x1ull));
}
B4ef7bb:{NFSU2_TR(0x4ef7bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef7bc:{NFSU2_TR(0x4ef7bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ef7c2:{NFSU2_TR(0x4ef7c2);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef7c7:{NFSU2_TR(0x4ef7c7);
{goto L4ef954;}
}
B4ef7cc:L4ef7cc:{c.instructions+=6;NFSU2_TR(0x4ef7cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef7cf:{NFSU2_TR(0x4ef7cf);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef7d4:{NFSU2_TR(0x4ef7d4);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef7d9:{NFSU2_TR(0x4ef7d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef7da:{NFSU2_TR(0x4ef7da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
w4(U+4,u32(0x911ab364ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ef7e4:{NFSU2_TR(0x4ef7e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef7e9ull));
TAIL_STATIC(0x537d40u,537);
}
B4ef7e9:L4ef7e9:{c.instructions+=3;NFSU2_TR(0x4ef7e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ef7ec:{NFSU2_TR(0x4ef7ec);
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
B4ef7ee:{NFSU2_TR(0x4ef7ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef9a5;}}
}
B4ef7f4:L4ef7f4:{c.instructions+=6;NFSU2_TR(0x4ef7f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef7f7:{NFSU2_TR(0x4ef7f7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef7f9:{NFSU2_TR(0x4ef7f9);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef7fe:{NFSU2_TR(0x4ef7fe);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef803:{NFSU2_TR(0x4ef803);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef804:{NFSU2_TR(0x4ef804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef809ull));
TAIL_STATIC(0x537c60u,537);
}
B4ef809:L4ef809:{c.instructions+=5;NFSU2_TR(0x4ef809);
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
B4ef80c:{NFSU2_TR(0x4ef80c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ef80d:{NFSU2_TR(0x4ef80d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef80e:{NFSU2_TR(0x4ef80e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ef80f:{NFSU2_TR(0x4ef80f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef812:L4ef812:{c.instructions+=2;NFSU2_TR(0x4ef812);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xda5b8712ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xda5b8712ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef818:{NFSU2_TR(0x4ef818);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4ef93d;}}
}
B4ef81e:L4ef81e:{c.instructions+=1;NFSU2_TR(0x4ef81e);
if(r1(R+518)){{goto L4ef8e7;}}
}
B4ef824:L4ef824:{c.instructions+=2;NFSU2_TR(0x4ef824);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb4edeb6dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef82a:{NFSU2_TR(0x4ef82a);
if(r1(R+518)){{goto L4ef8c8;}}
}
B4ef830:L4ef830:{c.instructions+=2;NFSU2_TR(0x4ef830);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc98356baull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ef836:{NFSU2_TR(0x4ef836);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef9a5;}}
}
B4ef83c:L4ef83c:{c.instructions+=3;NFSU2_TR(0x4ef83c);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ef841:{NFSU2_TR(0x4ef841);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef844:{NFSU2_TR(0x4ef844);
if(r1(R+518)){{goto L4ef84d;}}
}
B4ef846:L4ef846:{c.instructions+=2;NFSU2_TR(0x4ef846);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ef84b:{NFSU2_TR(0x4ef84b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef860;}}
}
B4ef84d:L4ef84d:{c.instructions+=2;NFSU2_TR(0x4ef84d);
__builtin_memmove((R+4),(R+24),4);
}
B4ef84f:{NFSU2_TR(0x4ef84f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef854ull));
TAIL_STATIC(0x4982c0u,498);
}
B4ef854:L4ef854:{c.instructions+=2;NFSU2_TR(0x4ef854);
__builtin_memmove((R+4),(R+24),4);
}
B4ef856:{NFSU2_TR(0x4ef856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef85bull));
TAIL_STATIC(0x51ff40u,51f);
}
B4ef85b:L4ef85b:{c.instructions+=1;NFSU2_TR(0x4ef85b);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ef860:L4ef860:{c.instructions+=2;NFSU2_TR(0x4ef860);
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
B4ef863:{NFSU2_TR(0x4ef863);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef9a5;}}
}
B4ef869:L4ef869:{c.instructions+=3;NFSU2_TR(0x4ef869);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef86f:{NFSU2_TR(0x4ef86f);
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
B4ef871:{NFSU2_TR(0x4ef871);
if(r1(R+518)){{goto L4ef9a5;}}
}
B4ef877:L4ef877:{c.instructions+=2;NFSU2_TR(0x4ef877);
u8 U[5];
__builtin_memmove((U+3),gp(0x850098),1);
w1(R+512,u8((r1(U+3))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x1ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ef87e:{NFSU2_TR(0x4ef87e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef9a5;}}
}
B4ef884:L4ef884:{c.instructions+=3;NFSU2_TR(0x4ef884);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef885:{NFSU2_TR(0x4ef885);
__builtin_memmove((R+4),(R+24),4);
}
B4ef887:{NFSU2_TR(0x4ef887);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef88cull));
TAIL_STATIC(0x51fe70u,51f);
}
B4ef88c:L4ef88c:{c.instructions+=2;NFSU2_TR(0x4ef88c);
__builtin_memmove((R+4),(R+0),4);
}
B4ef88e:{NFSU2_TR(0x4ef88e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef893ull));
TAIL_STATIC(0x498400u,498);
}
B4ef893:L4ef893:{c.instructions+=2;NFSU2_TR(0x4ef893);
u8 U[8];
__builtin_memmove((U+4),gp(0x8500ba),2);
w1(R+512,u8((r2(U+4))<(r2(R+0))));
w1(R+523,sborrow<u16>(r2(U+4),r2(R+0)));
w2(U+6,u16(u32(r2(U+4))-u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B4ef89a:{NFSU2_TR(0x4ef89a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4ef9a5;}}
}
B4ef8a0:L4ef8a0:{c.instructions+=4;NFSU2_TR(0x4ef8a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ef8a6:{NFSU2_TR(0x4ef8a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef8a7:{NFSU2_TR(0x4ef8a7);
__builtin_memmove((R+4),(R+24),4);
}
B4ef8a9:{NFSU2_TR(0x4ef8a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef8aeull));
TAIL_STATIC(0x51fe70u,51f);
}
B4ef8ae:L4ef8ae:{c.instructions+=2;NFSU2_TR(0x4ef8ae);
__builtin_memmove((R+4),(R+0),4);
}
B4ef8b0:{NFSU2_TR(0x4ef8b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef8b5ull));
TAIL_STATIC(0x498400u,498);
}
B4ef8b5:L4ef8b5:{c.instructions+=1;NFSU2_TR(0x4ef8b5);
__builtin_memmove(gp(0x8500ba),(R+0),2);
}
B4ef8bb:L4ef8bb:{c.instructions+=2;NFSU2_TR(0x4ef8bb);
__builtin_memmove((R+4),(R+24),4);
}
B4ef8bd:{NFSU2_TR(0x4ef8bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef8c2ull));
TAIL_STATIC(0x51ff40u,51f);
}
B4ef8c2:L4ef8c2:{c.instructions+=4;NFSU2_TR(0x4ef8c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ef8c3:{NFSU2_TR(0x4ef8c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef8c4:{NFSU2_TR(0x4ef8c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ef8c5:{NFSU2_TR(0x4ef8c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef8c8:L4ef8c8:{c.instructions+=3;NFSU2_TR(0x4ef8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef8ce:{NFSU2_TR(0x4ef8ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ef8d0:{NFSU2_TR(0x4ef8d0);
if(r1(R+518)){{goto L4ef94d;}}
}
B4ef8d2:L4ef8d2:{c.instructions+=2;NFSU2_TR(0x4ef8d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef8d3:{NFSU2_TR(0x4ef8d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef8d8ull));
TAIL_STATIC(0x540a60u,540);
}
B4ef8d8:L4ef8d8:{c.instructions+=3;NFSU2_TR(0x4ef8d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ef8db:{NFSU2_TR(0x4ef8db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ef8e5:{NFSU2_TR(0x4ef8e5);
{goto L4ef94d;}
}
B4ef8e7:L4ef8e7:{c.instructions+=5;NFSU2_TR(0x4ef8e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef8ed:{NFSU2_TR(0x4ef8ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ef8f0:{NFSU2_TR(0x4ef8f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef8f1:{NFSU2_TR(0x4ef8f1);
__builtin_memmove((R+4),(R+24),4);
}
B4ef8f3:{NFSU2_TR(0x4ef8f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef8f8ull));
TAIL_STATIC(0x51fe70u,51f);
}
B4ef8f8:L4ef8f8:{c.instructions+=5;NFSU2_TR(0x4ef8f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ef8fe:{NFSU2_TR(0x4ef8fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef8ff:{NFSU2_TR(0x4ef8ff);
__builtin_memmove((R+4),(R+24),4);
}
B4ef901:{NFSU2_TR(0x4ef901);
__builtin_memmove((R+12),(R+0),4);
}
B4ef903:{NFSU2_TR(0x4ef903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef908ull));
TAIL_STATIC(0x51fe70u,51f);
}
B4ef908:L4ef908:{c.instructions+=2;NFSU2_TR(0x4ef908);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef90a:{NFSU2_TR(0x4ef90a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef925;}}
}
B4ef90c:L4ef90c:{c.instructions+=5;NFSU2_TR(0x4ef90c);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef90e:{NFSU2_TR(0x4ef90e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4cull))));
}
B4ef911:{NFSU2_TR(0x4ef911);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef912:{NFSU2_TR(0x4ef912);
u8 U[4];
w4(U+0,u32(0x85009cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef917:{NFSU2_TR(0x4ef917);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef91cull));
TAIL_STATIC(0x43dc00u,43d);
}
B4ef91c:L4ef91c:{c.instructions+=5;NFSU2_TR(0x4ef91c);
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
B4ef91f:{NFSU2_TR(0x4ef91f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ef920:{NFSU2_TR(0x4ef920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef921:{NFSU2_TR(0x4ef921);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ef922:{NFSU2_TR(0x4ef922);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef925:L4ef925:{c.instructions+=2;NFSU2_TR(0x4ef925);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4ef927:{NFSU2_TR(0x4ef927);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef9a5;}}
}
B4ef929:L4ef929:{c.instructions+=4;NFSU2_TR(0x4ef929);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4cull))));
}
B4ef92c:{NFSU2_TR(0x4ef92c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef92d:{NFSU2_TR(0x4ef92d);
w4(R+4,u32(0x850080ull));
}
B4ef932:{NFSU2_TR(0x4ef932);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef937ull));
TAIL_STATIC(0x495220u,495);
}
B4ef937:L4ef937:{c.instructions+=4;NFSU2_TR(0x4ef937);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ef938:{NFSU2_TR(0x4ef938);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef939:{NFSU2_TR(0x4ef939);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ef93a:{NFSU2_TR(0x4ef93a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef93d:L4ef93d:{c.instructions+=2;NFSU2_TR(0x4ef93d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xe1fde1d1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ef943:{NFSU2_TR(0x4ef943);
if(r1(R+518)){{goto L4ef96b;}}
}
B4ef945:L4ef945:{c.instructions+=2;NFSU2_TR(0x4ef945);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xfaf20a02ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfaf20a02ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfaf20a02ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ef94b:{NFSU2_TR(0x4ef94b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef9a5;}}
}
B4ef94d:L4ef94d:{c.instructions+=2;NFSU2_TR(0x4ef94d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef94f:{NFSU2_TR(0x4ef94f);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef954:L4ef954:{c.instructions+=4;NFSU2_TR(0x4ef954);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ef957:{NFSU2_TR(0x4ef957);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef95c:{NFSU2_TR(0x4ef95c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef95d:{NFSU2_TR(0x4ef95d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef962ull));
TAIL_STATIC(0x537c00u,537);
}
B4ef962:L4ef962:{c.instructions+=5;NFSU2_TR(0x4ef962);
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
B4ef965:{NFSU2_TR(0x4ef965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ef966:{NFSU2_TR(0x4ef966);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef967:{NFSU2_TR(0x4ef967);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ef968:{NFSU2_TR(0x4ef968);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef96b:L4ef96b:{c.instructions+=3;NFSU2_TR(0x4ef96b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef971:{NFSU2_TR(0x4ef971);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ef976:{NFSU2_TR(0x4ef976);
if(r1(R+518)){{goto L4ef990;}}
}
B4ef978:L4ef978:{c.instructions+=2;NFSU2_TR(0x4ef978);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ef97d:{NFSU2_TR(0x4ef97d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ef9a5;}}
}
B4ef97f:L4ef97f:{c.instructions+=2;NFSU2_TR(0x4ef97f);
__builtin_memmove((R+4),gp(0x836340),4);
}
B4ef985:{NFSU2_TR(0x4ef985);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef98aull));
TAIL_STATIC(0x4b2a00u,4b2);
}
B4ef98a:L4ef98a:{c.instructions+=4;NFSU2_TR(0x4ef98a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ef98b:{NFSU2_TR(0x4ef98b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef98c:{NFSU2_TR(0x4ef98c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ef98d:{NFSU2_TR(0x4ef98d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef990:L4ef990:{c.instructions+=3;NFSU2_TR(0x4ef990);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ef996:{NFSU2_TR(0x4ef996);
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
B4ef998:{NFSU2_TR(0x4ef998);
if(r1(R+518)){{goto L4ef9a5;}}
}
B4ef99a:L4ef99a:{c.instructions+=2;NFSU2_TR(0x4ef99a);
__builtin_memmove((R+4),gp(0x836340),4);
}
B4ef9a0:{NFSU2_TR(0x4ef9a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef9a5ull));
TAIL_STATIC(0x4b29a0u,4b2);
}
B4ef9a5:L4ef9a5:{c.instructions+=4;NFSU2_TR(0x4ef9a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ef9a6:{NFSU2_TR(0x4ef9a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ef9a7:{NFSU2_TR(0x4ef9a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ef9a8:{NFSU2_TR(0x4ef9a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef9b0:L4ef9b0:{c.instructions+=8;NFSU2_TR(0x4ef9b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef9b2:{NFSU2_TR(0x4ef9b2);
u8 U[4];
w4(U+0,u32(0x7764b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef9b7:{NFSU2_TR(0x4ef9b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ef9bd:{NFSU2_TR(0x4ef9bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef9be:{NFSU2_TR(0x4ef9be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef9c5:{NFSU2_TR(0x4ef9c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef9c6:{NFSU2_TR(0x4ef9c6);
u8 U[4];
w4(U+0,u32(0x160ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef9cb:{NFSU2_TR(0x4ef9cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef9d0ull));
TAIL_STATIC(0x575620u,575);
}
B4ef9d0:L4ef9d0:{c.instructions+=5;NFSU2_TR(0x4ef9d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ef9d3:{NFSU2_TR(0x4ef9d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4ef9d7:{NFSU2_TR(0x4ef9d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ef9d9:{NFSU2_TR(0x4ef9d9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ef9e1:{NFSU2_TR(0x4ef9e1);
if(r1(R+518)){{goto L4ef9fe;}}
}
B4ef9e3:L4ef9e3:{c.instructions+=4;NFSU2_TR(0x4ef9e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ef9e7:{NFSU2_TR(0x4ef9e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ef9e8:{NFSU2_TR(0x4ef9e8);
__builtin_memmove((R+4),(R+0),4);
}
B4ef9ea:{NFSU2_TR(0x4ef9ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ef9efull));
TAIL_STATIC(0x4e2f30u,4e2);
}
B4ef9ef:L4ef9ef:{c.instructions+=4;NFSU2_TR(0x4ef9ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ef9f3:{NFSU2_TR(0x4ef9f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ef9fa:{NFSU2_TR(0x4ef9fa);
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
B4ef9fd:{NFSU2_TR(0x4ef9fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ef9fe:L4ef9fe:{c.instructions+=5;NFSU2_TR(0x4ef9fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4efa02:{NFSU2_TR(0x4efa02);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4efa04:{NFSU2_TR(0x4efa04);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4efa0b:{NFSU2_TR(0x4efa0b);
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
B4efa0e:{NFSU2_TR(0x4efa0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efa10:L4efa10:{c.instructions+=6;NFSU2_TR(0x4efa10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efa11:{NFSU2_TR(0x4efa11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efa12:{NFSU2_TR(0x4efa12);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4efa16:{NFSU2_TR(0x4efa16);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x9120409eull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4efa1c:{NFSU2_TR(0x4efa1c);
__builtin_memmove((R+24),(R+4),4);
}
B4efa1e:{NFSU2_TR(0x4efa1e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4efb63;}}
}
B4efa24:L4efa24:{c.instructions+=1;NFSU2_TR(0x4efa24);
if(r1(R+518)){{goto L4efaf7;}}
}
B4efa2a:L4efa2a:{c.instructions+=2;NFSU2_TR(0x4efa2a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x406415e3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4efa30:{NFSU2_TR(0x4efa30);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4efae6;}}
}
B4efa36:L4efa36:{c.instructions+=1;NFSU2_TR(0x4efa36);
if(r1(R+518)){{goto L4efa86;}}
}
B4efa38:L4efa38:{c.instructions+=2;NFSU2_TR(0x4efa38);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4efa3e:{NFSU2_TR(0x4efa3e);
if(r1(R+518)){{goto L4efa7c;}}
}
B4efa40:L4efa40:{c.instructions+=2;NFSU2_TR(0x4efa40);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x35f8620bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4efa46:{NFSU2_TR(0x4efa46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4efd10;}}
}
B4efa4c:L4efa4c:{c.instructions+=4;NFSU2_TR(0x4efa4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4efa4f:{NFSU2_TR(0x4efa4f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
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
B4efa52:{NFSU2_TR(0x4efa52);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4efa59:{NFSU2_TR(0x4efa59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4efd10;}}
}
B4efa5f:L4efa5f:{c.instructions+=4;NFSU2_TR(0x4efa5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4efa62:{NFSU2_TR(0x4efa62);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efa67:{NFSU2_TR(0x4efa67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efa68:{NFSU2_TR(0x4efa68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efa6dull));
TAIL_STATIC(0x4954e0u,495);
}
B4efa6d:L4efa6d:{c.instructions+=5;NFSU2_TR(0x4efa6d);
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
B4efa70:{NFSU2_TR(0x4efa70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4efa71:{NFSU2_TR(0x4efa71);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4efa78:{NFSU2_TR(0x4efa78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4efa79:{NFSU2_TR(0x4efa79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efa7c:L4efa7c:{c.instructions+=2;NFSU2_TR(0x4efa7c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efa7e:{NFSU2_TR(0x4efa7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efa83ull));
TAIL_STATIC(0x50d180u,50d);
}
B4efa83:L4efa83:{c.instructions+=1;NFSU2_TR(0x4efa83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4efa86:L4efa86:{c.instructions+=4;NFSU2_TR(0x4efa86);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efa87:{NFSU2_TR(0x4efa87);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4efa8b:{NFSU2_TR(0x4efa8b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efa8c:{NFSU2_TR(0x4efa8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efa91ull));
TAIL_STATIC(0x50d2a0u,50d);
}
B4efa91:L4efa91:{c.instructions+=3;NFSU2_TR(0x4efa91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4efa94:{NFSU2_TR(0x4efa94);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4efa96:{NFSU2_TR(0x4efa96);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4efaa6;}}
}
B4efa98:L4efa98:{c.instructions+=2;NFSU2_TR(0x4efa98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efa99:{NFSU2_TR(0x4efa99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efa9eull));
TAIL_STATIC(0x50d2a0u,50d);
}
B4efa9e:L4efa9e:{c.instructions+=2;NFSU2_TR(0x4efa9e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4efaa1:{NFSU2_TR(0x4efaa1);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B4efaa6:L4efaa6:{c.instructions+=5;NFSU2_TR(0x4efaa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4efaa9:{NFSU2_TR(0x4efaa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4efaac:{NFSU2_TR(0x4efaac);
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
B4efaae:{NFSU2_TR(0x4efaae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4efaaf:{NFSU2_TR(0x4efaaf);
if(r1(R+518)){{goto L4efd10;}}
}
B4efab5:L4efab5:{c.instructions+=4;NFSU2_TR(0x4efab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4efab8:{NFSU2_TR(0x4efab8);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4efabb:{NFSU2_TR(0x4efabb);
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
B4efabd:{NFSU2_TR(0x4efabd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4efd10;}}
}
B4efac3:L4efac3:{c.instructions+=6;NFSU2_TR(0x4efac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4efac6:{NFSU2_TR(0x4efac6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efac8:{NFSU2_TR(0x4efac8);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efacd:{NFSU2_TR(0x4efacd);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efad2:{NFSU2_TR(0x4efad2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efad3:{NFSU2_TR(0x4efad3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efad8ull));
TAIL_STATIC(0x537c00u,537);
}
B4efad8:L4efad8:{c.instructions+=5;NFSU2_TR(0x4efad8);
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
B4efadb:{NFSU2_TR(0x4efadb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4efae1:{NFSU2_TR(0x4efae1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4efae2:{NFSU2_TR(0x4efae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4efae3:{NFSU2_TR(0x4efae3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efae6:L4efae6:{c.instructions+=2;NFSU2_TR(0x4efae6);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4efaec:{NFSU2_TR(0x4efaec);
if(r1(R+518)){{goto L4efcd1;}}
}
B4efaf2:L4efaf2:{c.instructions+=3;NFSU2_TR(0x4efaf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4efaf3:{NFSU2_TR(0x4efaf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4efaf4:{NFSU2_TR(0x4efaf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efaf7:L4efaf7:{c.instructions+=3;NFSU2_TR(0x4efaf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4efafa:{NFSU2_TR(0x4efafa);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4efafd:{NFSU2_TR(0x4efafd);
if(r1(R+518)){{goto L4efb02;}}
}
B4efaff:L4efaff:{c.instructions+=1;NFSU2_TR(0x4efaff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4efb02:L4efb02:{c.instructions+=2;NFSU2_TR(0x4efb02);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
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
B4efb05:{NFSU2_TR(0x4efb05);
if(r1(R+518)){{goto L4efd10;}}
}
B4efb0b:L4efb0b:{c.instructions+=4;NFSU2_TR(0x4efb0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4efb0e:{NFSU2_TR(0x4efb0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4efb11:{NFSU2_TR(0x4efb11);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4efb13:{NFSU2_TR(0x4efb13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4efb1a;}}
}
B4efb15:L4efb15:{c.instructions+=2;NFSU2_TR(0x4efb15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4efb18:{NFSU2_TR(0x4efb18);
{goto L4efb21;}
}
B4efb1a:L4efb1a:{c.instructions+=1;NFSU2_TR(0x4efb1a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4efb21:L4efb21:{c.instructions+=5;NFSU2_TR(0x4efb21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4efb24:{NFSU2_TR(0x4efb24);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efb25:{NFSU2_TR(0x4efb25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efb26:{NFSU2_TR(0x4efb26);
__builtin_memmove((R+4),(R+24),4);
}
B4efb28:{NFSU2_TR(0x4efb28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efb2dull));
TAIL_STATIC(0x498740u,498);
}
B4efb2d:L4efb2d:{c.instructions+=4;NFSU2_TR(0x4efb2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4efb30:{NFSU2_TR(0x4efb30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4efb33:{NFSU2_TR(0x4efb33);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4efb35:{NFSU2_TR(0x4efb35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4efb3c;}}
}
B4efb37:L4efb37:{c.instructions+=2;NFSU2_TR(0x4efb37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4efb3a:{NFSU2_TR(0x4efb3a);
{goto L4efb43;}
}
B4efb3c:L4efb3c:{c.instructions+=1;NFSU2_TR(0x4efb3c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4efb43:L4efb43:{c.instructions+=3;NFSU2_TR(0x4efb43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efb44:{NFSU2_TR(0x4efb44);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4efb47:{NFSU2_TR(0x4efb47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efb4cull));
TAIL_STATIC(0x52ee40u,52e);
}
B4efb4c:L4efb4c:{c.instructions+=2;NFSU2_TR(0x4efb4c);
__builtin_memmove((R+4),(R+24),4);
}
B4efb4e:{NFSU2_TR(0x4efb4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efb53ull));
TAIL_STATIC(0x4ce170u,4ce);
}
B4efb53:L4efb53:{c.instructions+=5;NFSU2_TR(0x4efb53);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4efb58:{NFSU2_TR(0x4efb58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4efb59:{NFSU2_TR(0x4efb59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4efb5f:{NFSU2_TR(0x4efb5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4efb60:{NFSU2_TR(0x4efb60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efb63:L4efb63:{c.instructions+=2;NFSU2_TR(0x4efb63);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xc98356baull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4efb69:{NFSU2_TR(0x4efb69);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4efc96;}}
}
B4efb6f:L4efb6f:{c.instructions+=1;NFSU2_TR(0x4efb6f);
if(r1(R+518)){{goto L4efc28;}}
}
B4efb75:L4efb75:{c.instructions+=2;NFSU2_TR(0x4efb75);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4efb7b:{NFSU2_TR(0x4efb7b);
if(r1(R+518)){{goto L4efb97;}}
}
B4efb7d:L4efb7d:{c.instructions+=2;NFSU2_TR(0x4efb7d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5971bf1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4efb83:{NFSU2_TR(0x4efb83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4efd10;}}
}
B4efb89:L4efb89:{c.instructions+=3;NFSU2_TR(0x4efb89);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efb8b:{NFSU2_TR(0x4efb8b);
__builtin_memmove((R+4),(R+24),4);
}
B4efb8d:{NFSU2_TR(0x4efb8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efb92ull));
TAIL_STATIC(0x4e3270u,4e3);
}
B4efb92:L4efb92:{c.instructions+=3;NFSU2_TR(0x4efb92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4efb93:{NFSU2_TR(0x4efb93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4efb94:{NFSU2_TR(0x4efb94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efb97:L4efb97:{c.instructions+=2;NFSU2_TR(0x4efb97);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4efb9d:{NFSU2_TR(0x4efb9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efba2ull));
TAIL_STATIC(0x538130u,538);
}
B4efba2:L4efba2:{c.instructions+=4;NFSU2_TR(0x4efba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4efba8:{NFSU2_TR(0x4efba8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((R+4),(U+0),4);
}
B4efbab:{NFSU2_TR(0x4efbab);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B4efbae:{NFSU2_TR(0x4efbae);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4efd10;}}
}
B4efbb4:L4efbb4:{c.instructions+=2;NFSU2_TR(0x4efbb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4efd28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4efbbb:{NFSU2_TR(0x4efbbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4efd18ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4efbc2:L4efbc2:{c.instructions+=3;NFSU2_TR(0x4efbc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efbc3:{NFSU2_TR(0x4efbc3);
__builtin_memmove((R+4),(R+24),4);
}
B4efbc5:{NFSU2_TR(0x4efbc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efbcaull));
TAIL_STATIC(0x4e3270u,4e3);
}
B4efbca:L4efbca:{c.instructions+=2;NFSU2_TR(0x4efbca);
__builtin_memmove((R+4),(R+24),4);
}
B4efbcc:{NFSU2_TR(0x4efbcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efbd1ull));
TAIL_STATIC(0x4ce170u,4ce);
}
B4efbd1:L4efbd1:{c.instructions+=3;NFSU2_TR(0x4efbd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4efbd2:{NFSU2_TR(0x4efbd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4efbd3:{NFSU2_TR(0x4efbd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efbd6:L4efbd6:{c.instructions+=4;NFSU2_TR(0x4efbd6);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4efbdb:{NFSU2_TR(0x4efbdb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4efbdd:{NFSU2_TR(0x4efbdd);
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
B4efbdf:{NFSU2_TR(0x4efbdf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4efd10;}}
}
B4efbe5:L4efbe5:{c.instructions+=3;NFSU2_TR(0x4efbe5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efbe7:{NFSU2_TR(0x4efbe7);
__builtin_memmove((R+4),(R+24),4);
}
B4efbe9:{NFSU2_TR(0x4efbe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efbeeull));
TAIL_STATIC(0x4e3270u,4e3);
}
B4efbee:L4efbee:{c.instructions+=4;NFSU2_TR(0x4efbee);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4efbf3:{NFSU2_TR(0x4efbf3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4efbf4:{NFSU2_TR(0x4efbf4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4efbf6:{NFSU2_TR(0x4efbf6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4efbe5u);}goto L4efbe5;}}
}
B4efbf8:L4efbf8:{c.instructions+=3;NFSU2_TR(0x4efbf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4efbf9:{NFSU2_TR(0x4efbf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4efbfa:{NFSU2_TR(0x4efbfa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efbfd:L4efbfd:{c.instructions+=4;NFSU2_TR(0x4efbfd);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4efc02:{NFSU2_TR(0x4efc02);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4efc04:{NFSU2_TR(0x4efc04);
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
B4efc06:{NFSU2_TR(0x4efc06);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4efd10;}}
}
B4efc0c:L4efc0c:{c.instructions+=1;NFSU2_TR(0x4efc0c);
__builtin_memmove((R+16),(R+16),4);
}
B4efc10:L4efc10:{c.instructions+=3;NFSU2_TR(0x4efc10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efc12:{NFSU2_TR(0x4efc12);
__builtin_memmove((R+4),(R+24),4);
}
B4efc14:{NFSU2_TR(0x4efc14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efc19ull));
TAIL_STATIC(0x4e3270u,4e3);
}
B4efc19:L4efc19:{c.instructions+=4;NFSU2_TR(0x4efc19);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4efc1e:{NFSU2_TR(0x4efc1e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4efc1f:{NFSU2_TR(0x4efc1f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4efc21:{NFSU2_TR(0x4efc21);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4efc10u);}goto L4efc10;}}
}
B4efc23:L4efc23:{c.instructions+=3;NFSU2_TR(0x4efc23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4efc24:{NFSU2_TR(0x4efc24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4efc25:{NFSU2_TR(0x4efc25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efc28:L4efc28:{c.instructions+=2;NFSU2_TR(0x4efc28);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4efc2b:{NFSU2_TR(0x4efc2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efc30ull));
TAIL_STATIC(0x538760u,538);
}
B4efc30:L4efc30:{c.instructions+=3;NFSU2_TR(0x4efc30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4efc36:{NFSU2_TR(0x4efc36);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4efc38:{NFSU2_TR(0x4efc38);
if(r1(R+518)){{goto L4efc86;}}
}
B4efc3a:L4efc3a:{c.instructions+=2;NFSU2_TR(0x4efc3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4efc3f:{NFSU2_TR(0x4efc3f);
if(r1(R+518)){{goto L4efc86;}}
}
B4efc41:L4efc41:{c.instructions+=9;NFSU2_TR(0x4efc41);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B4efc47:{NFSU2_TR(0x4efc47);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B4efc49:{NFSU2_TR(0x4efc49);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4efc4d:{NFSU2_TR(0x4efc4d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4efc51:{NFSU2_TR(0x4efc51);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4efc57:{NFSU2_TR(0x4efc57);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4efc5d:{NFSU2_TR(0x4efc5d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4efc5f:{NFSU2_TR(0x4efc5f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4efc62:{NFSU2_TR(0x4efc62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4efd10;}}
}
B4efc68:L4efc68:{c.instructions+=4;NFSU2_TR(0x4efc68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4efc6b:{NFSU2_TR(0x4efc6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efc6c:{NFSU2_TR(0x4efc6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4efc72:{NFSU2_TR(0x4efc72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efc77ull));
TAIL_STATIC(0x498600u,498);
}
B4efc77:L4efc77:{c.instructions+=4;NFSU2_TR(0x4efc77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4efc78:{NFSU2_TR(0x4efc78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4efc82:{NFSU2_TR(0x4efc82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4efc83:{NFSU2_TR(0x4efc83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efc86:L4efc86:{c.instructions+=2;NFSU2_TR(0x4efc86);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4efc8c:{NFSU2_TR(0x4efc8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efc91ull));
TAIL_STATIC(0x4cdd40u,4cd);
}
B4efc91:L4efc91:{c.instructions+=3;NFSU2_TR(0x4efc91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4efc92:{NFSU2_TR(0x4efc92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4efc93:{NFSU2_TR(0x4efc93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efc96:L4efc96:{c.instructions+=2;NFSU2_TR(0x4efc96);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4efc9c:{NFSU2_TR(0x4efc9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4efd10;}}
}
B4efc9e:L4efc9e:{c.instructions+=3;NFSU2_TR(0x4efc9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4efca4:{NFSU2_TR(0x4efca4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4efca9:{NFSU2_TR(0x4efca9);
if(r1(R+518)){{goto L4efcc6;}}
}
B4efcab:L4efcab:{c.instructions+=2;NFSU2_TR(0x4efcab);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x406415e3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x406415e3ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4efcb0:{NFSU2_TR(0x4efcb0);
if(r1(R+518)){{goto L4efcc6;}}
}
B4efcb2:L4efcb2:{c.instructions+=2;NFSU2_TR(0x4efcb2);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4efcb7:{NFSU2_TR(0x4efcb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4efcd1;}}
}
B4efcb9:L4efcb9:{c.instructions+=2;NFSU2_TR(0x4efcb9);
__builtin_memmove((R+4),gp(0x836340),4);
}
B4efcbf:{NFSU2_TR(0x4efcbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efcc4ull));
TAIL_STATIC(0x4b2a00u,4b2);
}
B4efcc4:L4efcc4:{c.instructions+=1;NFSU2_TR(0x4efcc4);
{goto L4efcd1;}
}
B4efcc6:L4efcc6:{c.instructions+=2;NFSU2_TR(0x4efcc6);
__builtin_memmove((R+4),gp(0x836340),4);
}
B4efccc:{NFSU2_TR(0x4efccc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efcd1ull));
TAIL_STATIC(0x4b29a0u,4b2);
}
B4efcd1:L4efcd1:{c.instructions+=6;NFSU2_TR(0x4efcd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4efcd4:{NFSU2_TR(0x4efcd4);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efcd9:{NFSU2_TR(0x4efcd9);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efcde:{NFSU2_TR(0x4efcde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efcdf:{NFSU2_TR(0x4efcdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4efce5:{NFSU2_TR(0x4efce5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efceaull));
TAIL_STATIC(0x537d40u,537);
}
B4efcea:L4efcea:{c.instructions+=3;NFSU2_TR(0x4efcea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4efced:{NFSU2_TR(0x4efced);
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
B4efcef:{NFSU2_TR(0x4efcef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4efd10;}}
}
B4efcf1:L4efcf1:{c.instructions+=6;NFSU2_TR(0x4efcf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4efcf4:{NFSU2_TR(0x4efcf4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efcf6:{NFSU2_TR(0x4efcf6);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efcfb:{NFSU2_TR(0x4efcfb);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efd00:{NFSU2_TR(0x4efd00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efd01:{NFSU2_TR(0x4efd01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efd06ull));
TAIL_STATIC(0x537c60u,537);
}
B4efd06:L4efd06:{c.instructions+=2;NFSU2_TR(0x4efd06);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efd08:{NFSU2_TR(0x4efd08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efd0dull));
TAIL_STATIC(0x50d180u,50d);
}
B4efd0d:L4efd0d:{c.instructions+=1;NFSU2_TR(0x4efd0d);
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
B4efd10:L4efd10:{c.instructions+=3;NFSU2_TR(0x4efd10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4efd11:{NFSU2_TR(0x4efd11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4efd12:{NFSU2_TR(0x4efd12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efd40:L4efd40:{c.instructions+=8;NFSU2_TR(0x4efd40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efd42:{NFSU2_TR(0x4efd42);
u8 U[4];
w4(U+0,u32(0x7764d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efd47:{NFSU2_TR(0x4efd47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4efd4d:{NFSU2_TR(0x4efd4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efd4e:{NFSU2_TR(0x4efd4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4efd55:{NFSU2_TR(0x4efd55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efd56:{NFSU2_TR(0x4efd56);
u8 U[4];
w4(U+0,u32(0x21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efd5b:{NFSU2_TR(0x4efd5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efd60ull));
TAIL_STATIC(0x575620u,575);
}
B4efd60:L4efd60:{c.instructions+=5;NFSU2_TR(0x4efd60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4efd63:{NFSU2_TR(0x4efd63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4efd67:{NFSU2_TR(0x4efd67);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4efd69:{NFSU2_TR(0x4efd69);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4efd71:{NFSU2_TR(0x4efd71);
if(r1(R+518)){{goto L4efd8e;}}
}
B4efd73:L4efd73:{c.instructions+=4;NFSU2_TR(0x4efd73);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4efd77:{NFSU2_TR(0x4efd77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efd78:{NFSU2_TR(0x4efd78);
__builtin_memmove((R+4),(R+0),4);
}
B4efd7a:{NFSU2_TR(0x4efd7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efd7full));
TAIL_STATIC(0x4e3300u,4e3);
}
B4efd7f:L4efd7f:{c.instructions+=4;NFSU2_TR(0x4efd7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4efd83:{NFSU2_TR(0x4efd83);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4efd8a:{NFSU2_TR(0x4efd8a);
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
B4efd8d:{NFSU2_TR(0x4efd8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efd8e:L4efd8e:{c.instructions+=5;NFSU2_TR(0x4efd8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4efd92:{NFSU2_TR(0x4efd92);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4efd94:{NFSU2_TR(0x4efd94);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4efd9b:{NFSU2_TR(0x4efd9b);
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
B4efd9e:{NFSU2_TR(0x4efd9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efda0:L4efda0:{c.instructions+=5;NFSU2_TR(0x4efda0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4efda4:{NFSU2_TR(0x4efda4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efda5:{NFSU2_TR(0x4efda5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efda6:{NFSU2_TR(0x4efda6);
__builtin_memmove((R+24),(R+4),4);
}
B4efda8:{NFSU2_TR(0x4efda8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efdadull));
TAIL_STATIC(0x498bf0u,498);
}
B4efdad:L4efdad:{c.instructions+=3;NFSU2_TR(0x4efdad);
__builtin_memmove((R+4),(R+24),4);
}
B4efdaf:{NFSU2_TR(0x4efdaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efdb0:{NFSU2_TR(0x4efdb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efdb5ull));
TAIL_STATIC(0x4e3390u,4e3);
}
B4efdb5:L4efdb5:{c.instructions+=2;NFSU2_TR(0x4efdb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4efdb6:{NFSU2_TR(0x4efdb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efdc0:L4efdc0:{c.instructions+=3;NFSU2_TR(0x4efdc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4efdc6:{NFSU2_TR(0x4efdc6);
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
B4efdc8:{NFSU2_TR(0x4efdc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4efdd1;}}
}
B4efdca:L4efdca:{c.instructions+=2;NFSU2_TR(0x4efdca);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efdcc:{NFSU2_TR(0x4efdcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efdd1ull));
TAIL_STATIC(0x4e3390u,4e3);
}
B4efdd1:L4efdd1:{c.instructions+=1;NFSU2_TR(0x4efdd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efde0:L4efde0:{c.instructions+=8;NFSU2_TR(0x4efde0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efde2:{NFSU2_TR(0x4efde2);
u8 U[4];
w4(U+0,u32(0x7764f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efde7:{NFSU2_TR(0x4efde7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4efded:{NFSU2_TR(0x4efded);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efdee:{NFSU2_TR(0x4efdee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4efdf5:{NFSU2_TR(0x4efdf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efdf6:{NFSU2_TR(0x4efdf6);
u8 U[4];
w4(U+0,u32(0x150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efdfb:{NFSU2_TR(0x4efdfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efe00ull));
TAIL_STATIC(0x575620u,575);
}
B4efe00:L4efe00:{c.instructions+=5;NFSU2_TR(0x4efe00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4efe03:{NFSU2_TR(0x4efe03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4efe07:{NFSU2_TR(0x4efe07);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4efe09:{NFSU2_TR(0x4efe09);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4efe11:{NFSU2_TR(0x4efe11);
if(r1(R+518)){{goto L4efe2e;}}
}
B4efe13:L4efe13:{c.instructions+=4;NFSU2_TR(0x4efe13);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4efe17:{NFSU2_TR(0x4efe17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efe18:{NFSU2_TR(0x4efe18);
__builtin_memmove((R+4),(R+0),4);
}
B4efe1a:{NFSU2_TR(0x4efe1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efe1full));
TAIL_STATIC(0x4e3560u,4e3);
}
B4efe1f:L4efe1f:{c.instructions+=4;NFSU2_TR(0x4efe1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4efe23:{NFSU2_TR(0x4efe23);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4efe2a:{NFSU2_TR(0x4efe2a);
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
B4efe2d:{NFSU2_TR(0x4efe2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efe2e:L4efe2e:{c.instructions+=5;NFSU2_TR(0x4efe2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4efe32:{NFSU2_TR(0x4efe32);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4efe34:{NFSU2_TR(0x4efe34);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4efe3b:{NFSU2_TR(0x4efe3b);
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
B4efe3e:{NFSU2_TR(0x4efe3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efe40:L4efe40:{c.instructions+=5;NFSU2_TR(0x4efe40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4efe44:{NFSU2_TR(0x4efe44);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xca4c311bull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xca4c311bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4efe49:{NFSU2_TR(0x4efe49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efe4a:{NFSU2_TR(0x4efe4a);
__builtin_memmove((R+24),(R+4),4);
}
B4efe4c:{NFSU2_TR(0x4efe4c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4efee9;}}
}
B4efe52:L4efe52:{c.instructions+=1;NFSU2_TR(0x4efe52);
if(r1(R+518)){{goto L4efed1;}}
}
B4efe54:L4efe54:{c.instructions+=2;NFSU2_TR(0x4efe54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6e57aa10ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4efe59:{NFSU2_TR(0x4efe59);
if(r1(R+518)){{goto L4efea8;}}
}
B4efe5b:L4efe5b:{c.instructions+=2;NFSU2_TR(0x4efe5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73c044ecull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4efe60:{NFSU2_TR(0x4efe60);
if(r1(R+518)){{goto L4efe86;}}
}
B4efe62:L4efe62:{c.instructions+=2;NFSU2_TR(0x4efe62);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4efe67:{NFSU2_TR(0x4efe67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eff45;}}
}
B4efe6d:L4efe6d:{c.instructions+=3;NFSU2_TR(0x4efe6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4efe70:{NFSU2_TR(0x4efe70);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4efe72:{NFSU2_TR(0x4efe72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eff45;}}
}
B4efe78:L4efe78:{c.instructions+=3;NFSU2_TR(0x4efe78);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4efe7c:{NFSU2_TR(0x4efe7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efe7d:{NFSU2_TR(0x4efe7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efe82ull));
TAIL_STATIC(0x4e37d0u,4e3);
}
B4efe82:L4efe82:{c.instructions+=2;NFSU2_TR(0x4efe82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4efe83:{NFSU2_TR(0x4efe83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efe86:L4efe86:{c.instructions+=3;NFSU2_TR(0x4efe86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4efe88:{NFSU2_TR(0x4efe88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4efe8a:{NFSU2_TR(0x4efe8a);
if(r1(R+518)){{goto L4efe9b;}}
}
B4efe8c:L4efe8c:{c.instructions+=2;NFSU2_TR(0x4efe8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efe8d:{NFSU2_TR(0x4efe8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efe92ull));
TAIL_STATIC(0x540a60u,540);
}
B4efe92:L4efe92:{c.instructions+=2;NFSU2_TR(0x4efe92);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4efe95:{NFSU2_TR(0x4efe95);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4efe9b:L4efe9b:{c.instructions+=2;NFSU2_TR(0x4efe9b);
__builtin_memmove((R+4),(R+24),4);
}
B4efe9d:{NFSU2_TR(0x4efe9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efea2ull));
TAIL_STATIC(0x4cfe10u,4cf);
}
B4efea2:L4efea2:{c.instructions+=3;NFSU2_TR(0x4efea2);
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
B4efea4:{NFSU2_TR(0x4efea4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4efea5:{NFSU2_TR(0x4efea5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efea8:L4efea8:{c.instructions+=3;NFSU2_TR(0x4efea8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4efeaa:{NFSU2_TR(0x4efeaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4efeac:{NFSU2_TR(0x4efeac);
if(r1(R+518)){{goto L4efebd;}}
}
B4efeae:L4efeae:{c.instructions+=2;NFSU2_TR(0x4efeae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efeaf:{NFSU2_TR(0x4efeaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efeb4ull));
TAIL_STATIC(0x540a60u,540);
}
B4efeb4:L4efeb4:{c.instructions+=2;NFSU2_TR(0x4efeb4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4efeb7:{NFSU2_TR(0x4efeb7);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4efebd:L4efebd:{c.instructions+=2;NFSU2_TR(0x4efebd);
__builtin_memmove((R+4),(R+24),4);
}
B4efebf:{NFSU2_TR(0x4efebf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efec4ull));
TAIL_STATIC(0x4cfe10u,4cf);
}
B4efec4:L4efec4:{c.instructions+=5;NFSU2_TR(0x4efec4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4efec8:{NFSU2_TR(0x4efec8);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+4)),r1(U+0));
}
B4efecb:{NFSU2_TR(0x4efecb);
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
B4efecd:{NFSU2_TR(0x4efecd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4efece:{NFSU2_TR(0x4efece);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efed1:L4efed1:{c.instructions+=3;NFSU2_TR(0x4efed1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4efed4:{NFSU2_TR(0x4efed4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4efed6:{NFSU2_TR(0x4efed6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eff45;}}
}
B4efed8:L4efed8:{c.instructions+=3;NFSU2_TR(0x4efed8);
__builtin_memmove((R+4),(R+24),4);
}
B4efeda:{NFSU2_TR(0x4efeda);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4efede:{NFSU2_TR(0x4efede);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efee3ull));
TAIL_STATIC(0x4b8f40u,4b8);
}
B4efee3:L4efee3:{c.instructions+=3;NFSU2_TR(0x4efee3);
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
B4efee5:{NFSU2_TR(0x4efee5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4efee6:{NFSU2_TR(0x4efee6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4efee9:L4efee9:{c.instructions+=2;NFSU2_TR(0x4efee9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xca4c3140ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4efeee:{NFSU2_TR(0x4efeee);
if(r1(R+518)){{goto L4eff01;}}
}
B4efef0:L4efef0:{c.instructions+=2;NFSU2_TR(0x4efef0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xcea5ea10ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4efef5:{NFSU2_TR(0x4efef5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eff45;}}
}
B4efef7:L4efef7:{c.instructions+=4;NFSU2_TR(0x4efef7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4efefb:{NFSU2_TR(0x4efefb);
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
B4efefd:{NFSU2_TR(0x4efefd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4efefe:{NFSU2_TR(0x4efefe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eff01:L4eff01:{c.instructions+=4;NFSU2_TR(0x4eff01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4eff03:{NFSU2_TR(0x4eff03);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eff05:{NFSU2_TR(0x4eff05);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4eff09:{NFSU2_TR(0x4eff09);
if(r1(R+518)){{goto L4eff1a;}}
}
B4eff0b:L4eff0b:{c.instructions+=2;NFSU2_TR(0x4eff0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eff0c:{NFSU2_TR(0x4eff0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eff11ull));
TAIL_STATIC(0x540a60u,540);
}
B4eff11:L4eff11:{c.instructions+=2;NFSU2_TR(0x4eff11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4eff14:{NFSU2_TR(0x4eff14);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4eff1a:L4eff1a:{c.instructions+=2;NFSU2_TR(0x4eff1a);
u8 U[4];
w4(U+0,u32(0x23e142ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eff1f:{NFSU2_TR(0x4eff1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eff24ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4eff24:L4eff24:{c.instructions+=8;NFSU2_TR(0x4eff24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eff27:{NFSU2_TR(0x4eff27);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eff2a:{NFSU2_TR(0x4eff2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eff2b:{NFSU2_TR(0x4eff2b);
u8 U[4];
w4(U+0,u32(0xca4c311bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eff30:{NFSU2_TR(0x4eff30);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eff35:{NFSU2_TR(0x4eff35);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eff3a:{NFSU2_TR(0x4eff3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eff3b:{NFSU2_TR(0x4eff3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eff40ull));
TAIL_STATIC(0x5585e0u,558);
}
B4eff40:L4eff40:{c.instructions+=2;NFSU2_TR(0x4eff40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4eff43:{NFSU2_TR(0x4eff43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4eff45:L4eff45:{c.instructions+=3;NFSU2_TR(0x4eff45);
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
B4eff47:{NFSU2_TR(0x4eff47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eff48:{NFSU2_TR(0x4eff48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eff50:L4eff50:{c.instructions+=6;NFSU2_TR(0x4eff50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eff51:{NFSU2_TR(0x4eff51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eff52:{NFSU2_TR(0x4eff52);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4eff56:{NFSU2_TR(0x4eff56);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x6e57aa10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6e57aa10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6e57aa10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4eff5c:{NFSU2_TR(0x4eff5c);
__builtin_memmove((R+24),(R+4),4);
}
B4eff5e:{NFSU2_TR(0x4eff5e);
if(r1(R+518)){{goto L4effc5;}}
}
B4eff60:L4eff60:{c.instructions+=2;NFSU2_TR(0x4eff60);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4eff66:{NFSU2_TR(0x4eff66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eff98;}}
}
B4eff68:L4eff68:{c.instructions+=3;NFSU2_TR(0x4eff68);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4eff6b:{NFSU2_TR(0x4eff6b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4eff6d:{NFSU2_TR(0x4eff6d);
if(r1(R+518)){{goto L4eff89;}}
}
B4eff6f:L4eff6f:{c.instructions+=3;NFSU2_TR(0x4eff6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eff72:{NFSU2_TR(0x4eff72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eff73:{NFSU2_TR(0x4eff73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eff78ull));
TAIL_STATIC(0x5379a0u,537);
}
B4eff78:L4eff78:{c.instructions+=3;NFSU2_TR(0x4eff78);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eff7a:{NFSU2_TR(0x4eff7a);
u8 U[4];
w4(U+0,u32(0xd25504ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eff7f:{NFSU2_TR(0x4eff7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eff84ull));
TAIL_STATIC(0x55dde0u,55d);
}
B4eff84:L4eff84:{c.instructions+=2;NFSU2_TR(0x4eff84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4eff87:{NFSU2_TR(0x4eff87);
{goto L4eff98;}
}
B4eff89:L4eff89:{c.instructions+=3;NFSU2_TR(0x4eff89);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eff8b:{NFSU2_TR(0x4eff8b);
u8 U[4];
w4(U+0,u32(0xd15c0666ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eff90:{NFSU2_TR(0x4eff90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eff95ull));
TAIL_STATIC(0x55dde0u,55d);
}
B4eff95:L4eff95:{c.instructions+=1;NFSU2_TR(0x4eff95);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4eff98:L4eff98:{c.instructions+=3;NFSU2_TR(0x4eff98);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4eff9b:{NFSU2_TR(0x4eff9b);
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
B4eff9d:{NFSU2_TR(0x4eff9d);
if(r1(R+518)){{goto L4effc5;}}
}
B4eff9f:L4eff9f:{c.instructions+=10;NFSU2_TR(0x4eff9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4effa3:{NFSU2_TR(0x4effa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4effa7:{NFSU2_TR(0x4effa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4effab:{NFSU2_TR(0x4effab);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4effad:{NFSU2_TR(0x4effad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4effae:{NFSU2_TR(0x4effae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4effaf:{NFSU2_TR(0x4effaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4effb0:{NFSU2_TR(0x4effb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4effb1:{NFSU2_TR(0x4effb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4effb4:{NFSU2_TR(0x4effb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4effb9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4efe40u);}goto L4efe40;}
}
B4effb9:L4effb9:{c.instructions+=2;NFSU2_TR(0x4effb9);
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
B4effbc:{NFSU2_TR(0x4effbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4effc5;}}
}
B4effbe:L4effbe:{c.instructions+=2;NFSU2_TR(0x4effbe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4effc2:{NFSU2_TR(0x4effc2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4effc5:L4effc5:{c.instructions+=3;NFSU2_TR(0x4effc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4effc6:{NFSU2_TR(0x4effc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4effc7:{NFSU2_TR(0x4effc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4effd0:L4effd0:{c.instructions+=12;NFSU2_TR(0x4effd0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4effd2:{NFSU2_TR(0x4effd2);
u8 U[4];
w4(U+0,u32(0x776514ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4effd7:{NFSU2_TR(0x4effd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4effdd:{NFSU2_TR(0x4effdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4effde:{NFSU2_TR(0x4effde);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4effe5:{NFSU2_TR(0x4effe5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4effe6:{NFSU2_TR(0x4effe6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4effe7:{NFSU2_TR(0x4effe7);
__builtin_memmove((R+24),gp(0x7f44b0),4);
}
B4effed:{NFSU2_TR(0x4effed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4effee:{NFSU2_TR(0x4effee);
__builtin_memmove((R+28),gp(0x7f44ac),4);
}
B4efff4:{NFSU2_TR(0x4efff4);
u8 U[4];
w4(U+0,u32(0x154ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4efff9:{NFSU2_TR(0x4efff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4efffeull));
TAIL_STATIC(0x575620u,575);
}
B4efffe:L4efffe:{c.instructions+=1;NFSU2_TR(0x4efffe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
TAIL_STATIC(0x4f0001u,4f0);
}
XIT:NFSU2_TR_EXIT(0x4ef,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
