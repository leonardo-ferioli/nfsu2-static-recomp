#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_482(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_739(u8* __restrict R,Cpu& c);
u32 body_73b(u8* __restrict R,Cpu& c);
u32 body_73c(u8* __restrict R,Cpu& c);
u32 body_73e(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_744(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x73d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x73d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_73d(u8* __restrict R,Cpu& c);
u32 page_73d(Cpu& c){return body_73d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_73d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x73d002:goto L73d002;
case 0x73d00a:c.instructions+=1;goto B73d00a;
case 0x73d00c:goto L73d00c;
case 0x73d012:c.instructions+=16;goto B73d012;
case 0x73d016:c.instructions+=15;goto B73d016;
case 0x73d018:c.instructions+=14;goto B73d018;
case 0x73d01b:c.instructions+=13;goto B73d01b;
case 0x73d01d:c.instructions+=12;goto B73d01d;
case 0x73d01f:c.instructions+=11;goto B73d01f;
case 0x73d024:c.instructions+=10;goto B73d024;
case 0x73d026:c.instructions+=9;goto B73d026;
case 0x73d028:c.instructions+=8;goto B73d028;
case 0x73d02e:c.instructions+=7;goto B73d02e;
case 0x73d02f:c.instructions+=6;goto B73d02f;
case 0x73d030:c.instructions+=5;goto B73d030;
case 0x73d031:c.instructions+=4;goto B73d031;
case 0x73d036:c.instructions+=3;goto B73d036;
case 0x73d037:c.instructions+=2;goto B73d037;
case 0x73d03a:c.instructions+=1;goto B73d03a;
case 0x73d03b:goto L73d03b;
case 0x73d03f:c.instructions+=14;goto B73d03f;
case 0x73d042:c.instructions+=13;goto B73d042;
case 0x73d044:c.instructions+=12;goto B73d044;
case 0x73d045:c.instructions+=11;goto B73d045;
case 0x73d046:c.instructions+=10;goto B73d046;
case 0x73d04a:c.instructions+=9;goto B73d04a;
case 0x73d04b:c.instructions+=8;goto B73d04b;
case 0x73d04e:c.instructions+=7;goto B73d04e;
case 0x73d04f:c.instructions+=6;goto B73d04f;
case 0x73d052:c.instructions+=5;goto B73d052;
case 0x73d053:c.instructions+=4;goto B73d053;
case 0x73d054:c.instructions+=3;goto B73d054;
case 0x73d055:c.instructions+=2;goto B73d055;
case 0x73d05c:c.instructions+=1;goto B73d05c;
case 0x73d061:goto L73d061;
case 0x73d064:goto L73d064;
case 0x73d067:c.instructions+=4;goto B73d067;
case 0x73d06b:c.instructions+=3;goto B73d06b;
case 0x73d06d:c.instructions+=2;goto B73d06d;
case 0x73d074:c.instructions+=1;goto B73d074;
case 0x73d076:goto L73d076;
case 0x73d07a:c.instructions+=22;goto B73d07a;
case 0x73d07d:c.instructions+=21;goto B73d07d;
case 0x73d080:c.instructions+=20;goto B73d080;
case 0x73d082:c.instructions+=19;goto B73d082;
case 0x73d085:c.instructions+=18;goto B73d085;
case 0x73d088:c.instructions+=17;goto B73d088;
case 0x73d08b:c.instructions+=16;goto B73d08b;
case 0x73d08e:c.instructions+=15;goto B73d08e;
case 0x73d091:c.instructions+=14;goto B73d091;
case 0x73d093:c.instructions+=13;goto B73d093;
case 0x73d096:c.instructions+=12;goto B73d096;
case 0x73d099:c.instructions+=11;goto B73d099;
case 0x73d09c:c.instructions+=10;goto B73d09c;
case 0x73d09f:c.instructions+=9;goto B73d09f;
case 0x73d0a1:c.instructions+=8;goto B73d0a1;
case 0x73d0a3:c.instructions+=7;goto B73d0a3;
case 0x73d0a6:c.instructions+=6;goto B73d0a6;
case 0x73d0ab:c.instructions+=5;goto B73d0ab;
case 0x73d0ae:c.instructions+=4;goto B73d0ae;
case 0x73d0b0:c.instructions+=3;goto B73d0b0;
case 0x73d0b2:c.instructions+=2;goto B73d0b2;
case 0x73d0b5:c.instructions+=1;goto B73d0b5;
case 0x73d0b7:goto L73d0b7;
case 0x73d0bb:c.instructions+=1;goto B73d0bb;
case 0x73d0bd:goto L73d0bd;
case 0x73d0c2:c.instructions+=2;goto B73d0c2;
case 0x73d0c5:c.instructions+=1;goto B73d0c5;
case 0x73d0c7:goto L73d0c7;
case 0x73d0cb:c.instructions+=12;goto B73d0cb;
case 0x73d0cf:c.instructions+=11;goto B73d0cf;
case 0x73d0d1:c.instructions+=10;goto B73d0d1;
case 0x73d0d2:c.instructions+=9;goto B73d0d2;
case 0x73d0d3:c.instructions+=8;goto B73d0d3;
case 0x73d0d6:c.instructions+=7;goto B73d0d6;
case 0x73d0d7:c.instructions+=6;goto B73d0d7;
case 0x73d0d8:c.instructions+=5;goto B73d0d8;
case 0x73d0db:c.instructions+=4;goto B73d0db;
case 0x73d0dc:c.instructions+=3;goto B73d0dc;
case 0x73d0dd:c.instructions+=2;goto B73d0dd;
case 0x73d0de:c.instructions+=1;goto B73d0de;
case 0x73d0e3:goto L73d0e3;
case 0x73d0e6:c.instructions+=1;goto B73d0e6;
case 0x73d0e9:goto L73d0e9;
case 0x73d0ec:c.instructions+=2;goto B73d0ec;
case 0x73d0ee:c.instructions+=1;goto B73d0ee;
case 0x73d0f4:goto L73d0f4;
case 0x73d0f7:c.instructions+=35;goto B73d0f7;
case 0x73d0fd:c.instructions+=34;goto B73d0fd;
case 0x73d101:c.instructions+=33;goto B73d101;
case 0x73d103:c.instructions+=32;goto B73d103;
case 0x73d106:c.instructions+=31;goto B73d106;
case 0x73d109:c.instructions+=30;goto B73d109;
case 0x73d10c:c.instructions+=29;goto B73d10c;
case 0x73d10e:c.instructions+=28;goto B73d10e;
case 0x73d114:c.instructions+=27;goto B73d114;
case 0x73d117:c.instructions+=26;goto B73d117;
case 0x73d11c:c.instructions+=25;goto B73d11c;
case 0x73d11f:c.instructions+=24;goto B73d11f;
case 0x73d121:c.instructions+=23;goto B73d121;
case 0x73d125:c.instructions+=22;goto B73d125;
case 0x73d128:c.instructions+=21;goto B73d128;
case 0x73d12e:c.instructions+=20;goto B73d12e;
case 0x73d131:c.instructions+=19;goto B73d131;
case 0x73d134:c.instructions+=18;goto B73d134;
case 0x73d138:c.instructions+=17;goto B73d138;
case 0x73d13b:c.instructions+=16;goto B73d13b;
case 0x73d13f:c.instructions+=15;goto B73d13f;
case 0x73d142:c.instructions+=14;goto B73d142;
case 0x73d144:c.instructions+=13;goto B73d144;
case 0x73d14a:c.instructions+=12;goto B73d14a;
case 0x73d150:c.instructions+=11;goto B73d150;
case 0x73d152:c.instructions+=10;goto B73d152;
case 0x73d158:c.instructions+=9;goto B73d158;
case 0x73d15a:c.instructions+=8;goto B73d15a;
case 0x73d15c:c.instructions+=7;goto B73d15c;
case 0x73d15f:c.instructions+=6;goto B73d15f;
case 0x73d161:c.instructions+=5;goto B73d161;
case 0x73d167:c.instructions+=4;goto B73d167;
case 0x73d16d:c.instructions+=3;goto B73d16d;
case 0x73d16f:c.instructions+=2;goto B73d16f;
case 0x73d172:c.instructions+=1;goto B73d172;
case 0x73d174:goto L73d174;
case 0x73d175:c.instructions+=7;goto B73d175;
case 0x73d17b:c.instructions+=6;goto B73d17b;
case 0x73d17e:c.instructions+=5;goto B73d17e;
case 0x73d17f:c.instructions+=4;goto B73d17f;
case 0x73d180:c.instructions+=3;goto B73d180;
case 0x73d181:c.instructions+=2;goto B73d181;
case 0x73d184:c.instructions+=1;goto B73d184;
case 0x73d185:goto L73d185;
case 0x73d188:c.instructions+=5;goto B73d188;
case 0x73d18b:c.instructions+=4;goto B73d18b;
case 0x73d18f:c.instructions+=3;goto B73d18f;
case 0x73d196:c.instructions+=2;goto B73d196;
case 0x73d199:c.instructions+=1;goto B73d199;
case 0x73d19b:goto L73d19b;
case 0x73d19c:c.instructions+=5;goto B73d19c;
case 0x73d19d:c.instructions+=4;goto B73d19d;
case 0x73d19e:c.instructions+=3;goto B73d19e;
case 0x73d19f:c.instructions+=2;goto B73d19f;
case 0x73d1a2:c.instructions+=1;goto B73d1a2;
case 0x73d1b0:goto L73d1b0;
case 0x73d1b3:c.instructions+=11;goto B73d1b3;
case 0x73d1b7:c.instructions+=10;goto B73d1b7;
case 0x73d1bb:c.instructions+=9;goto B73d1bb;
case 0x73d1bc:c.instructions+=8;goto B73d1bc;
case 0x73d1bd:c.instructions+=7;goto B73d1bd;
case 0x73d1be:c.instructions+=6;goto B73d1be;
case 0x73d1bf:c.instructions+=5;goto B73d1bf;
case 0x73d1c3:c.instructions+=4;goto B73d1c3;
case 0x73d1c4:c.instructions+=3;goto B73d1c4;
case 0x73d1c5:c.instructions+=2;goto B73d1c5;
case 0x73d1c9:c.instructions+=1;goto B73d1c9;
case 0x73d1ce:goto L73d1ce;
case 0x73d1d4:c.instructions+=14;goto B73d1d4;
case 0x73d1d7:c.instructions+=13;goto B73d1d7;
case 0x73d1da:c.instructions+=12;goto B73d1da;
case 0x73d1dd:c.instructions+=11;goto B73d1dd;
case 0x73d1e1:c.instructions+=10;goto B73d1e1;
case 0x73d1e4:c.instructions+=9;goto B73d1e4;
case 0x73d1e6:c.instructions+=8;goto B73d1e6;
case 0x73d1e9:c.instructions+=7;goto B73d1e9;
case 0x73d1ec:c.instructions+=6;goto B73d1ec;
case 0x73d1ef:c.instructions+=5;goto B73d1ef;
case 0x73d1f3:c.instructions+=4;goto B73d1f3;
case 0x73d1f6:c.instructions+=3;goto B73d1f6;
case 0x73d1f9:c.instructions+=2;goto B73d1f9;
case 0x73d1fd:c.instructions+=1;goto B73d1fd;
case 0x73d203:goto L73d203;
case 0x73d209:goto L73d209;
case 0x73d20c:c.instructions+=3;goto B73d20c;
case 0x73d20f:c.instructions+=2;goto B73d20f;
case 0x73d212:c.instructions+=1;goto B73d212;
case 0x73d218:goto L73d218;
case 0x73d21a:c.instructions+=17;goto B73d21a;
case 0x73d21c:c.instructions+=16;goto B73d21c;
case 0x73d220:c.instructions+=15;goto B73d220;
case 0x73d224:c.instructions+=14;goto B73d224;
case 0x73d228:c.instructions+=13;goto B73d228;
case 0x73d22c:c.instructions+=12;goto B73d22c;
case 0x73d230:c.instructions+=11;goto B73d230;
case 0x73d234:c.instructions+=10;goto B73d234;
case 0x73d238:c.instructions+=9;goto B73d238;
case 0x73d23a:c.instructions+=8;goto B73d23a;
case 0x73d23e:c.instructions+=7;goto B73d23e;
case 0x73d241:c.instructions+=6;goto B73d241;
case 0x73d244:c.instructions+=5;goto B73d244;
case 0x73d247:c.instructions+=4;goto B73d247;
case 0x73d24a:c.instructions+=3;goto B73d24a;
case 0x73d24e:c.instructions+=2;goto B73d24e;
case 0x73d250:c.instructions+=1;goto B73d250;
case 0x73d252:goto L73d252;
case 0x73d257:c.instructions+=2;goto B73d257;
case 0x73d25a:c.instructions+=1;goto B73d25a;
case 0x73d25c:goto L73d25c;
case 0x73d261:goto L73d261;
case 0x73d264:c.instructions+=33;goto B73d264;
case 0x73d266:c.instructions+=32;goto B73d266;
case 0x73d26c:c.instructions+=31;goto B73d26c;
case 0x73d26e:c.instructions+=30;goto B73d26e;
case 0x73d273:c.instructions+=29;goto B73d273;
case 0x73d279:c.instructions+=28;goto B73d279;
case 0x73d27e:c.instructions+=27;goto B73d27e;
case 0x73d284:c.instructions+=26;goto B73d284;
case 0x73d288:c.instructions+=25;goto B73d288;
case 0x73d28c:c.instructions+=24;goto B73d28c;
case 0x73d28f:c.instructions+=23;goto B73d28f;
case 0x73d292:c.instructions+=22;goto B73d292;
case 0x73d295:c.instructions+=21;goto B73d295;
case 0x73d298:c.instructions+=20;goto B73d298;
case 0x73d299:c.instructions+=19;goto B73d299;
case 0x73d29b:c.instructions+=18;goto B73d29b;
case 0x73d2a1:c.instructions+=17;goto B73d2a1;
case 0x73d2a3:c.instructions+=16;goto B73d2a3;
case 0x73d2a9:c.instructions+=15;goto B73d2a9;
case 0x73d2af:c.instructions+=14;goto B73d2af;
case 0x73d2b3:c.instructions+=13;goto B73d2b3;
case 0x73d2b6:c.instructions+=12;goto B73d2b6;
case 0x73d2ba:c.instructions+=11;goto B73d2ba;
case 0x73d2bc:c.instructions+=10;goto B73d2bc;
case 0x73d2c0:c.instructions+=9;goto B73d2c0;
case 0x73d2c4:c.instructions+=8;goto B73d2c4;
case 0x73d2c5:c.instructions+=7;goto B73d2c5;
case 0x73d2c9:c.instructions+=6;goto B73d2c9;
case 0x73d2cf:c.instructions+=5;goto B73d2cf;
case 0x73d2d0:c.instructions+=4;goto B73d2d0;
case 0x73d2d4:c.instructions+=3;goto B73d2d4;
case 0x73d2dc:c.instructions+=2;goto B73d2dc;
case 0x73d2e0:c.instructions+=1;goto B73d2e0;
case 0x73d2e5:goto L73d2e5;
case 0x73d2e9:c.instructions+=2;goto B73d2e9;
case 0x73d2ea:c.instructions+=1;goto B73d2ea;
case 0x73d2ef:goto L73d2ef;
case 0x73d2f5:c.instructions+=3;goto B73d2f5;
case 0x73d2f6:c.instructions+=2;goto B73d2f6;
case 0x73d2f7:c.instructions+=1;goto B73d2f7;
case 0x73d2fc:goto L73d2fc;
case 0x73d300:c.instructions+=2;goto B73d300;
case 0x73d304:c.instructions+=1;goto B73d304;
case 0x73d307:goto L73d307;
case 0x73d30a:c.instructions+=3;goto B73d30a;
case 0x73d30f:c.instructions+=2;goto B73d30f;
case 0x73d314:c.instructions+=1;goto B73d314;
case 0x73d316:goto L73d316;
case 0x73d31b:c.instructions+=4;goto B73d31b;
case 0x73d321:c.instructions+=3;goto B73d321;
case 0x73d324:c.instructions+=2;goto B73d324;
case 0x73d326:c.instructions+=1;goto B73d326;
case 0x73d329:goto L73d329;
case 0x73d32e:c.instructions+=2;goto B73d32e;
case 0x73d330:c.instructions+=1;goto B73d330;
case 0x73d332:goto L73d332;
case 0x73d338:c.instructions+=3;goto B73d338;
case 0x73d339:c.instructions+=2;goto B73d339;
case 0x73d33a:c.instructions+=1;goto B73d33a;
case 0x73d33c:goto L73d33c;
case 0x73d33e:goto L73d33e;
case 0x73d342:c.instructions+=1;goto B73d342;
case 0x73d344:goto L73d344;
case 0x73d346:c.instructions+=3;goto B73d346;
case 0x73d349:c.instructions+=2;goto B73d349;
case 0x73d34b:c.instructions+=1;goto B73d34b;
case 0x73d34d:goto L73d34d;
case 0x73d351:c.instructions+=2;goto B73d351;
case 0x73d353:c.instructions+=1;goto B73d353;
case 0x73d355:goto L73d355;
case 0x73d358:c.instructions+=7;goto B73d358;
case 0x73d35b:c.instructions+=6;goto B73d35b;
case 0x73d35d:c.instructions+=5;goto B73d35d;
case 0x73d360:c.instructions+=4;goto B73d360;
case 0x73d362:c.instructions+=3;goto B73d362;
case 0x73d365:c.instructions+=2;goto B73d365;
case 0x73d369:c.instructions+=1;goto B73d369;
case 0x73d36b:goto L73d36b;
case 0x73d36f:c.instructions+=1;goto B73d36f;
case 0x73d371:goto L73d371;
case 0x73d376:c.instructions+=5;goto B73d376;
case 0x73d37c:c.instructions+=4;goto B73d37c;
case 0x73d37f:c.instructions+=3;goto B73d37f;
case 0x73d381:c.instructions+=2;goto B73d381;
case 0x73d384:c.instructions+=1;goto B73d384;
case 0x73d386:goto L73d386;
case 0x73d38a:c.instructions+=1;goto B73d38a;
case 0x73d38c:goto L73d38c;
case 0x73d38f:c.instructions+=9;goto B73d38f;
case 0x73d392:c.instructions+=8;goto B73d392;
case 0x73d395:c.instructions+=7;goto B73d395;
case 0x73d39a:c.instructions+=6;goto B73d39a;
case 0x73d39e:c.instructions+=5;goto B73d39e;
case 0x73d3a1:c.instructions+=4;goto B73d3a1;
case 0x73d3a4:c.instructions+=3;goto B73d3a4;
case 0x73d3a5:c.instructions+=2;goto B73d3a5;
case 0x73d3a6:c.instructions+=1;goto B73d3a6;
case 0x73d3ab:goto L73d3ab;
case 0x73d3ae:goto L73d3ae;
case 0x73d3af:c.instructions+=2;goto B73d3af;
case 0x73d3b0:c.instructions+=1;goto B73d3b0;
case 0x73d3b5:goto L73d3b5;
case 0x73d3b9:c.instructions+=3;goto B73d3b9;
case 0x73d3ba:c.instructions+=2;goto B73d3ba;
case 0x73d3bb:c.instructions+=1;goto B73d3bb;
case 0x73d3c0:goto L73d3c0;
case 0x73d3c6:c.instructions+=11;goto B73d3c6;
case 0x73d3c9:c.instructions+=10;goto B73d3c9;
case 0x73d3cd:c.instructions+=9;goto B73d3cd;
case 0x73d3d0:c.instructions+=8;goto B73d3d0;
case 0x73d3d3:c.instructions+=7;goto B73d3d3;
case 0x73d3d7:c.instructions+=6;goto B73d3d7;
case 0x73d3da:c.instructions+=5;goto B73d3da;
case 0x73d3dd:c.instructions+=4;goto B73d3dd;
case 0x73d3e0:c.instructions+=3;goto B73d3e0;
case 0x73d3e3:c.instructions+=2;goto B73d3e3;
case 0x73d3e7:c.instructions+=1;goto B73d3e7;
case 0x73d3ed:goto L73d3ed;
case 0x73d3f1:c.instructions+=3;goto B73d3f1;
case 0x73d3f2:c.instructions+=2;goto B73d3f2;
case 0x73d3f3:c.instructions+=1;goto B73d3f3;
case 0x73d3f8:goto L73d3f8;
case 0x73d3fb:c.instructions+=7;goto B73d3fb;
case 0x73d3fc:c.instructions+=6;goto B73d3fc;
case 0x73d3fd:c.instructions+=5;goto B73d3fd;
case 0x73d3fe:c.instructions+=4;goto B73d3fe;
case 0x73d401:c.instructions+=3;goto B73d401;
case 0x73d402:c.instructions+=2;goto B73d402;
case 0x73d405:c.instructions+=1;goto B73d405;
case 0x73d410:goto L73d410;
case 0x73d411:c.instructions+=15;goto B73d411;
case 0x73d413:c.instructions+=14;goto B73d413;
case 0x73d416:c.instructions+=13;goto B73d416;
case 0x73d41c:c.instructions+=12;goto B73d41c;
case 0x73d422:c.instructions+=11;goto B73d422;
case 0x73d425:c.instructions+=10;goto B73d425;
case 0x73d42b:c.instructions+=9;goto B73d42b;
case 0x73d42c:c.instructions+=8;goto B73d42c;
case 0x73d430:c.instructions+=7;goto B73d430;
case 0x73d431:c.instructions+=6;goto B73d431;
case 0x73d435:c.instructions+=5;goto B73d435;
case 0x73d439:c.instructions+=4;goto B73d439;
case 0x73d43a:c.instructions+=3;goto B73d43a;
case 0x73d43f:c.instructions+=2;goto B73d43f;
case 0x73d441:c.instructions+=1;goto B73d441;
case 0x73d445:goto L73d445;
case 0x73d447:goto L73d447;
case 0x73d44a:c.instructions+=15;goto B73d44a;
case 0x73d44e:c.instructions+=14;goto B73d44e;
case 0x73d451:c.instructions+=13;goto B73d451;
case 0x73d454:c.instructions+=12;goto B73d454;
case 0x73d457:c.instructions+=11;goto B73d457;
case 0x73d459:c.instructions+=10;goto B73d459;
case 0x73d45b:c.instructions+=9;goto B73d45b;
case 0x73d45e:c.instructions+=8;goto B73d45e;
case 0x73d461:c.instructions+=7;goto B73d461;
case 0x73d464:c.instructions+=6;goto B73d464;
case 0x73d467:c.instructions+=5;goto B73d467;
case 0x73d469:c.instructions+=4;goto B73d469;
case 0x73d471:c.instructions+=3;goto B73d471;
case 0x73d475:c.instructions+=2;goto B73d475;
case 0x73d479:c.instructions+=1;goto B73d479;
case 0x73d47b:goto L73d47b;
case 0x73d47f:c.instructions+=1;goto B73d47f;
case 0x73d481:goto L73d481;
case 0x73d484:c.instructions+=8;goto B73d484;
case 0x73d486:c.instructions+=7;goto B73d486;
case 0x73d489:c.instructions+=6;goto B73d489;
case 0x73d48c:c.instructions+=5;goto B73d48c;
case 0x73d48f:c.instructions+=4;goto B73d48f;
case 0x73d492:c.instructions+=3;goto B73d492;
case 0x73d495:c.instructions+=2;goto B73d495;
case 0x73d497:c.instructions+=1;goto B73d497;
case 0x73d499:goto L73d499;
case 0x73d49d:c.instructions+=3;goto B73d49d;
case 0x73d4a1:c.instructions+=2;goto B73d4a1;
case 0x73d4a5:c.instructions+=1;goto B73d4a5;
case 0x73d4a7:goto L73d4a7;
case 0x73d4ab:c.instructions+=2;goto B73d4ab;
case 0x73d4ad:c.instructions+=1;goto B73d4ad;
case 0x73d4af:goto L73d4af;
case 0x73d4b3:c.instructions+=3;goto B73d4b3;
case 0x73d4b4:c.instructions+=2;goto B73d4b4;
case 0x73d4b5:c.instructions+=1;goto B73d4b5;
case 0x73d4ba:goto L73d4ba;
case 0x73d4c0:c.instructions+=2;goto B73d4c0;
case 0x73d4c3:c.instructions+=1;goto B73d4c3;
case 0x73d4c7:goto L73d4c7;
case 0x73d4cb:c.instructions+=2;goto B73d4cb;
case 0x73d4cd:c.instructions+=1;goto B73d4cd;
case 0x73d4cf:goto L73d4cf;
case 0x73d4d3:c.instructions+=4;goto B73d4d3;
case 0x73d4d4:c.instructions+=3;goto B73d4d4;
case 0x73d4d5:c.instructions+=2;goto B73d4d5;
case 0x73d4d6:c.instructions+=1;goto B73d4d6;
case 0x73d4db:goto L73d4db;
case 0x73d4e1:c.instructions+=2;goto B73d4e1;
case 0x73d4e4:c.instructions+=1;goto B73d4e4;
case 0x73d4e8:goto L73d4e8;
case 0x73d4ec:goto L73d4ec;
case 0x73d4ef:c.instructions+=8;goto B73d4ef;
case 0x73d4f3:c.instructions+=7;goto B73d4f3;
case 0x73d4f7:c.instructions+=6;goto B73d4f7;
case 0x73d4fa:c.instructions+=5;goto B73d4fa;
case 0x73d4ff:c.instructions+=4;goto B73d4ff;
case 0x73d502:c.instructions+=3;goto B73d502;
case 0x73d506:c.instructions+=2;goto B73d506;
case 0x73d508:c.instructions+=1;goto B73d508;
case 0x73d50a:goto L73d50a;
case 0x73d50c:c.instructions+=1;goto B73d50c;
case 0x73d50e:goto L73d50e;
case 0x73d511:c.instructions+=10;goto B73d511;
case 0x73d514:c.instructions+=9;goto B73d514;
case 0x73d517:c.instructions+=8;goto B73d517;
case 0x73d519:c.instructions+=7;goto B73d519;
case 0x73d51f:c.instructions+=6;goto B73d51f;
case 0x73d521:c.instructions+=5;goto B73d521;
case 0x73d525:c.instructions+=4;goto B73d525;
case 0x73d526:c.instructions+=3;goto B73d526;
case 0x73d52c:c.instructions+=2;goto B73d52c;
case 0x73d52f:c.instructions+=1;goto B73d52f;
case 0x73d534:goto L73d534;
case 0x73d537:c.instructions+=6;goto B73d537;
case 0x73d538:c.instructions+=5;goto B73d538;
case 0x73d539:c.instructions+=4;goto B73d539;
case 0x73d53a:c.instructions+=3;goto B73d53a;
case 0x73d53c:c.instructions+=2;goto B73d53c;
case 0x73d53d:c.instructions+=1;goto B73d53d;
case 0x73d53e:goto L73d53e;
case 0x73d543:c.instructions+=10;goto B73d543;
case 0x73d546:c.instructions+=9;goto B73d546;
case 0x73d549:c.instructions+=8;goto B73d549;
case 0x73d54c:c.instructions+=7;goto B73d54c;
case 0x73d54e:c.instructions+=6;goto B73d54e;
case 0x73d554:c.instructions+=5;goto B73d554;
case 0x73d556:c.instructions+=4;goto B73d556;
case 0x73d557:c.instructions+=3;goto B73d557;
case 0x73d55b:c.instructions+=2;goto B73d55b;
case 0x73d55e:c.instructions+=1;goto B73d55e;
case 0x73d563:goto L73d563;
case 0x73d566:c.instructions+=2;goto B73d566;
case 0x73d568:c.instructions+=1;goto B73d568;
case 0x73d56a:goto L73d56a;
case 0x73d56f:c.instructions+=1;goto B73d56f;
case 0x73d571:goto L73d571;
case 0x73d575:c.instructions+=5;goto B73d575;
case 0x73d57a:c.instructions+=4;goto B73d57a;
case 0x73d580:c.instructions+=3;goto B73d580;
case 0x73d585:c.instructions+=2;goto B73d585;
case 0x73d589:c.instructions+=1;goto B73d589;
case 0x73d58b:goto L73d58b;
case 0x73d58d:goto L73d58d;
case 0x73d58e:c.instructions+=5;goto B73d58e;
case 0x73d58f:c.instructions+=4;goto B73d58f;
case 0x73d590:c.instructions+=3;goto B73d590;
case 0x73d592:c.instructions+=2;goto B73d592;
case 0x73d593:c.instructions+=1;goto B73d593;
case 0x73d5a0:goto L73d5a0;
case 0x73d5a1:c.instructions+=4;goto B73d5a1;
case 0x73d5a4:c.instructions+=3;goto B73d5a4;
case 0x73d5a7:c.instructions+=2;goto B73d5a7;
case 0x73d5a8:c.instructions+=1;goto B73d5a8;
case 0x73d5aa:goto L73d5aa;
case 0x73d5ac:c.instructions+=2;goto B73d5ac;
case 0x73d5af:c.instructions+=1;goto B73d5af;
case 0x73d5b1:goto L73d5b1;
case 0x73d5b3:goto L73d5b3;
case 0x73d5b6:c.instructions+=6;goto B73d5b6;
case 0x73d5b8:c.instructions+=5;goto B73d5b8;
case 0x73d5bb:c.instructions+=4;goto B73d5bb;
case 0x73d5bc:c.instructions+=3;goto B73d5bc;
case 0x73d5be:c.instructions+=2;goto B73d5be;
case 0x73d5c0:c.instructions+=1;goto B73d5c0;
case 0x73d5c2:goto L73d5c2;
case 0x73d5c4:c.instructions+=3;goto B73d5c4;
case 0x73d5c5:c.instructions+=2;goto B73d5c5;
case 0x73d5c7:c.instructions+=1;goto B73d5c7;
case 0x73d5c9:goto L73d5c9;
case 0x73d5cc:c.instructions+=1;goto B73d5cc;
case 0x73d5ce:goto L73d5ce;
case 0x73d5d3:goto L73d5d3;
case 0x73d5d6:c.instructions+=3;goto B73d5d6;
case 0x73d5dd:c.instructions+=2;goto B73d5dd;
case 0x73d5de:c.instructions+=1;goto B73d5de;
case 0x73d5e3:goto L73d5e3;
case 0x73d5e5:c.instructions+=4;goto B73d5e5;
case 0x73d5e8:c.instructions+=3;goto B73d5e8;
case 0x73d5ea:c.instructions+=2;goto B73d5ea;
case 0x73d5ec:c.instructions+=1;goto B73d5ec;
case 0x73d5f2:goto L73d5f2;
case 0x73d5f3:c.instructions+=5;goto B73d5f3;
case 0x73d5f5:c.instructions+=4;goto B73d5f5;
case 0x73d5f7:c.instructions+=3;goto B73d5f7;
case 0x73d5fa:c.instructions+=2;goto B73d5fa;
case 0x73d5fb:c.instructions+=1;goto B73d5fb;
case 0x73d5fd:goto L73d5fd;
case 0x73d5ff:goto L73d5ff;
case 0x73d601:c.instructions+=1;goto B73d601;
case 0x73d604:goto L73d604;
case 0x73d606:goto L73d606;
case 0x73d609:c.instructions+=7;goto B73d609;
case 0x73d60b:c.instructions+=6;goto B73d60b;
case 0x73d613:c.instructions+=5;goto B73d613;
case 0x73d616:c.instructions+=4;goto B73d616;
case 0x73d619:c.instructions+=3;goto B73d619;
case 0x73d61c:c.instructions+=2;goto B73d61c;
case 0x73d621:c.instructions+=1;goto B73d621;
case 0x73d623:goto L73d623;
case 0x73d625:goto L73d625;
case 0x73d628:c.instructions+=8;goto B73d628;
case 0x73d62a:c.instructions+=7;goto B73d62a;
case 0x73d62d:c.instructions+=6;goto B73d62d;
case 0x73d630:c.instructions+=5;goto B73d630;
case 0x73d632:c.instructions+=4;goto B73d632;
case 0x73d633:c.instructions+=3;goto B73d633;
case 0x73d635:c.instructions+=2;goto B73d635;
case 0x73d637:c.instructions+=1;goto B73d637;
case 0x73d639:goto L73d639;
case 0x73d63c:c.instructions+=9;goto B73d63c;
case 0x73d63f:c.instructions+=8;goto B73d63f;
case 0x73d642:c.instructions+=7;goto B73d642;
case 0x73d644:c.instructions+=6;goto B73d644;
case 0x73d646:c.instructions+=5;goto B73d646;
case 0x73d648:c.instructions+=4;goto B73d648;
case 0x73d64b:c.instructions+=3;goto B73d64b;
case 0x73d64c:c.instructions+=2;goto B73d64c;
case 0x73d64f:c.instructions+=1;goto B73d64f;
case 0x73d654:goto L73d654;
case 0x73d657:c.instructions+=4;goto B73d657;
case 0x73d65a:c.instructions+=3;goto B73d65a;
case 0x73d65c:c.instructions+=2;goto B73d65c;
case 0x73d660:c.instructions+=1;goto B73d660;
case 0x73d662:goto L73d662;
case 0x73d665:c.instructions+=4;goto B73d665;
case 0x73d668:c.instructions+=3;goto B73d668;
case 0x73d66a:c.instructions+=2;goto B73d66a;
case 0x73d66d:c.instructions+=1;goto B73d66d;
case 0x73d66f:goto L73d66f;
case 0x73d671:goto L73d671;
case 0x73d673:c.instructions+=1;goto B73d673;
case 0x73d676:goto L73d676;
case 0x73d678:goto L73d678;
case 0x73d67b:c.instructions+=2;goto B73d67b;
case 0x73d67c:c.instructions+=1;goto B73d67c;
case 0x73d681:goto L73d681;
case 0x73d685:c.instructions+=1;goto B73d685;
case 0x73d688:goto L73d688;
case 0x73d68b:c.instructions+=3;goto B73d68b;
case 0x73d68c:c.instructions+=2;goto B73d68c;
case 0x73d68f:c.instructions+=1;goto B73d68f;
case 0x73d690:goto L73d690;
case 0x73d691:c.instructions+=2;goto B73d691;
case 0x73d692:c.instructions+=1;goto B73d692;
case 0x73d6a0:goto L73d6a0;
case 0x73d6a4:c.instructions+=13;goto B73d6a4;
case 0x73d6a6:c.instructions+=12;goto B73d6a6;
case 0x73d6a8:c.instructions+=11;goto B73d6a8;
case 0x73d6ac:c.instructions+=10;goto B73d6ac;
case 0x73d6ae:c.instructions+=9;goto B73d6ae;
case 0x73d6b0:c.instructions+=8;goto B73d6b0;
case 0x73d6b1:c.instructions+=7;goto B73d6b1;
case 0x73d6b2:c.instructions+=6;goto B73d6b2;
case 0x73d6b6:c.instructions+=5;goto B73d6b6;
case 0x73d6b9:c.instructions+=4;goto B73d6b9;
case 0x73d6bc:c.instructions+=3;goto B73d6bc;
case 0x73d6bd:c.instructions+=2;goto B73d6bd;
case 0x73d6be:c.instructions+=1;goto B73d6be;
case 0x73d6c1:goto L73d6c1;
case 0x73d6c4:c.instructions+=1;goto B73d6c4;
case 0x73d6d0:goto L73d6d0;
case 0x73d6d1:c.instructions+=3;goto B73d6d1;
case 0x73d6d2:c.instructions+=2;goto B73d6d2;
case 0x73d6d4:c.instructions+=1;goto B73d6d4;
case 0x73d6d9:goto L73d6d9;
case 0x73d6db:c.instructions+=3;goto B73d6db;
case 0x73d6dd:c.instructions+=2;goto B73d6dd;
case 0x73d6e2:c.instructions+=1;goto B73d6e2;
case 0x73d6e4:goto L73d6e4;
case 0x73d6e6:goto L73d6e6;
case 0x73d6ea:c.instructions+=3;goto B73d6ea;
case 0x73d6ed:c.instructions+=2;goto B73d6ed;
case 0x73d6ef:c.instructions+=1;goto B73d6ef;
case 0x73d6f4:goto L73d6f4;
case 0x73d6f8:c.instructions+=7;goto B73d6f8;
case 0x73d6fc:c.instructions+=6;goto B73d6fc;
case 0x73d6fd:c.instructions+=5;goto B73d6fd;
case 0x73d6ff:c.instructions+=4;goto B73d6ff;
case 0x73d702:c.instructions+=3;goto B73d702;
case 0x73d704:c.instructions+=2;goto B73d704;
case 0x73d705:c.instructions+=1;goto B73d705;
case 0x73d710:goto L73d710;
case 0x73d711:c.instructions+=4;goto B73d711;
case 0x73d715:c.instructions+=3;goto B73d715;
case 0x73d718:c.instructions+=2;goto B73d718;
case 0x73d71a:c.instructions+=1;goto B73d71a;
case 0x73d71c:goto L73d71c;
case 0x73d720:goto L73d720;
case 0x73d723:c.instructions+=4;goto B73d723;
case 0x73d725:c.instructions+=3;goto B73d725;
case 0x73d726:c.instructions+=2;goto B73d726;
case 0x73d729:c.instructions+=1;goto B73d729;
case 0x73d72e:goto L73d72e;
case 0x73d731:c.instructions+=3;goto B73d731;
case 0x73d734:c.instructions+=2;goto B73d734;
case 0x73d736:c.instructions+=1;goto B73d736;
case 0x73d738:goto L73d738;
case 0x73d73b:c.instructions+=2;goto B73d73b;
case 0x73d73c:c.instructions+=1;goto B73d73c;
case 0x73d741:goto L73d741;
case 0x73d742:c.instructions+=1;goto B73d742;
case 0x73d747:goto L73d747;
case 0x73d74a:c.instructions+=2;goto B73d74a;
case 0x73d74b:c.instructions+=1;goto B73d74b;
case 0x73d750:goto L73d750;
case 0x73d751:c.instructions+=4;goto B73d751;
case 0x73d755:c.instructions+=3;goto B73d755;
case 0x73d758:c.instructions+=2;goto B73d758;
case 0x73d75a:c.instructions+=1;goto B73d75a;
case 0x73d75c:goto L73d75c;
case 0x73d761:goto L73d761;
case 0x73d764:c.instructions+=1;goto B73d764;
case 0x73d766:goto L73d766;
case 0x73d768:c.instructions+=2;goto B73d768;
case 0x73d769:c.instructions+=1;goto B73d769;
case 0x73d76a:goto L73d76a;
case 0x73d76e:c.instructions+=17;goto B73d76e;
case 0x73d76f:c.instructions+=16;goto B73d76f;
case 0x73d772:c.instructions+=15;goto B73d772;
case 0x73d774:c.instructions+=14;goto B73d774;
case 0x73d777:c.instructions+=13;goto B73d777;
case 0x73d779:c.instructions+=12;goto B73d779;
case 0x73d77c:c.instructions+=11;goto B73d77c;
case 0x73d77f:c.instructions+=10;goto B73d77f;
case 0x73d782:c.instructions+=9;goto B73d782;
case 0x73d785:c.instructions+=8;goto B73d785;
case 0x73d788:c.instructions+=7;goto B73d788;
case 0x73d789:c.instructions+=6;goto B73d789;
case 0x73d78c:c.instructions+=5;goto B73d78c;
case 0x73d78f:c.instructions+=4;goto B73d78f;
case 0x73d790:c.instructions+=3;goto B73d790;
case 0x73d792:c.instructions+=2;goto B73d792;
case 0x73d795:c.instructions+=1;goto B73d795;
case 0x73d797:goto L73d797;
case 0x73d799:c.instructions+=6;goto B73d799;
case 0x73d79c:c.instructions+=5;goto B73d79c;
case 0x73d79d:c.instructions+=4;goto B73d79d;
case 0x73d7a0:c.instructions+=3;goto B73d7a0;
case 0x73d7a1:c.instructions+=2;goto B73d7a1;
case 0x73d7a2:c.instructions+=1;goto B73d7a2;
case 0x73d7a4:goto L73d7a4;
case 0x73d7a7:c.instructions+=2;goto B73d7a7;
case 0x73d7a9:c.instructions+=1;goto B73d7a9;
case 0x73d7ab:goto L73d7ab;
case 0x73d7ae:goto L73d7ae;
case 0x73d7b0:c.instructions+=3;goto B73d7b0;
case 0x73d7b1:c.instructions+=2;goto B73d7b1;
case 0x73d7b2:c.instructions+=1;goto B73d7b2;
case 0x73d7c0:goto L73d7c0;
case 0x73d7c1:c.instructions+=8;goto B73d7c1;
case 0x73d7c5:c.instructions+=7;goto B73d7c5;
case 0x73d7c6:c.instructions+=6;goto B73d7c6;
case 0x73d7ca:c.instructions+=5;goto B73d7ca;
case 0x73d7cd:c.instructions+=4;goto B73d7cd;
case 0x73d7cf:c.instructions+=3;goto B73d7cf;
case 0x73d7d0:c.instructions+=2;goto B73d7d0;
case 0x73d7d4:c.instructions+=1;goto B73d7d4;
case 0x73d7d6:goto L73d7d6;
case 0x73d7d8:c.instructions+=2;goto B73d7d8;
case 0x73d7da:c.instructions+=1;goto B73d7da;
case 0x73d7dc:goto L73d7dc;
case 0x73d7df:c.instructions+=5;goto B73d7df;
case 0x73d7e0:c.instructions+=4;goto B73d7e0;
case 0x73d7e3:c.instructions+=3;goto B73d7e3;
case 0x73d7e4:c.instructions+=2;goto B73d7e4;
case 0x73d7e5:c.instructions+=1;goto B73d7e5;
case 0x73d7e7:goto L73d7e7;
case 0x73d7ea:c.instructions+=2;goto B73d7ea;
case 0x73d7ec:c.instructions+=1;goto B73d7ec;
case 0x73d7ee:goto L73d7ee;
case 0x73d7f1:c.instructions+=5;goto B73d7f1;
case 0x73d7f4:c.instructions+=4;goto B73d7f4;
case 0x73d7f5:c.instructions+=3;goto B73d7f5;
case 0x73d7f6:c.instructions+=2;goto B73d7f6;
case 0x73d7f7:c.instructions+=1;goto B73d7f7;
case 0x73d7fa:goto L73d7fa;
case 0x73d7fd:c.instructions+=2;goto B73d7fd;
case 0x73d7ff:c.instructions+=1;goto B73d7ff;
case 0x73d801:goto L73d801;
case 0x73d804:goto L73d804;
case 0x73d806:c.instructions+=4;goto B73d806;
case 0x73d807:c.instructions+=3;goto B73d807;
case 0x73d808:c.instructions+=2;goto B73d808;
case 0x73d809:c.instructions+=1;goto B73d809;
case 0x73d810:goto L73d810;
case 0x73d814:c.instructions+=2;goto B73d814;
case 0x73d816:c.instructions+=1;goto B73d816;
case 0x73d818:goto L73d818;
case 0x73d81a:c.instructions+=1;goto B73d81a;
case 0x73d81b:goto L73d81b;
case 0x73d81d:c.instructions+=1;goto B73d81d;
case 0x73d820:goto L73d820;
case 0x73d824:c.instructions+=5;goto B73d824;
case 0x73d828:c.instructions+=4;goto B73d828;
case 0x73d829:c.instructions+=3;goto B73d829;
case 0x73d82c:c.instructions+=2;goto B73d82c;
case 0x73d82e:c.instructions+=1;goto B73d82e;
case 0x73d830:goto L73d830;
case 0x73d832:c.instructions+=2;goto B73d832;
case 0x73d833:c.instructions+=1;goto B73d833;
case 0x73d834:goto L73d834;
case 0x73d837:c.instructions+=4;goto B73d837;
case 0x73d838:c.instructions+=3;goto B73d838;
case 0x73d83b:c.instructions+=2;goto B73d83b;
case 0x73d83d:c.instructions+=1;goto B73d83d;
case 0x73d83f:goto L73d83f;
case 0x73d840:c.instructions+=3;goto B73d840;
case 0x73d842:c.instructions+=2;goto B73d842;
case 0x73d843:c.instructions+=1;goto B73d843;
case 0x73d844:goto L73d844;
case 0x73d847:c.instructions+=2;goto B73d847;
case 0x73d849:c.instructions+=1;goto B73d849;
case 0x73d84b:goto L73d84b;
case 0x73d84c:c.instructions+=6;goto B73d84c;
case 0x73d84f:c.instructions+=5;goto B73d84f;
case 0x73d850:c.instructions+=4;goto B73d850;
case 0x73d851:c.instructions+=3;goto B73d851;
case 0x73d854:c.instructions+=2;goto B73d854;
case 0x73d857:c.instructions+=1;goto B73d857;
case 0x73d858:goto L73d858;
case 0x73d85b:c.instructions+=3;goto B73d85b;
case 0x73d85d:c.instructions+=2;goto B73d85d;
case 0x73d860:c.instructions+=1;goto B73d860;
case 0x73d862:goto L73d862;
case 0x73d865:c.instructions+=7;goto B73d865;
case 0x73d869:c.instructions+=6;goto B73d869;
case 0x73d86c:c.instructions+=5;goto B73d86c;
case 0x73d86e:c.instructions+=4;goto B73d86e;
case 0x73d871:c.instructions+=3;goto B73d871;
case 0x73d872:c.instructions+=2;goto B73d872;
case 0x73d874:c.instructions+=1;goto B73d874;
case 0x73d876:goto L73d876;
case 0x73d878:c.instructions+=9;goto B73d878;
case 0x73d87b:c.instructions+=8;goto B73d87b;
case 0x73d87d:c.instructions+=7;goto B73d87d;
case 0x73d880:c.instructions+=6;goto B73d880;
case 0x73d883:c.instructions+=5;goto B73d883;
case 0x73d884:c.instructions+=4;goto B73d884;
case 0x73d885:c.instructions+=3;goto B73d885;
case 0x73d888:c.instructions+=2;goto B73d888;
case 0x73d889:c.instructions+=1;goto B73d889;
case 0x73d890:goto L73d890;
case 0x73d891:c.instructions+=5;goto B73d891;
case 0x73d895:c.instructions+=4;goto B73d895;
case 0x73d898:c.instructions+=3;goto B73d898;
case 0x73d89a:c.instructions+=2;goto B73d89a;
case 0x73d89c:c.instructions+=1;goto B73d89c;
case 0x73d89e:goto L73d89e;
case 0x73d8a1:c.instructions+=2;goto B73d8a1;
case 0x73d8a2:c.instructions+=1;goto B73d8a2;
case 0x73d8a6:goto L73d8a6;
case 0x73d8a8:c.instructions+=1;goto B73d8a8;
case 0x73d8aa:goto L73d8aa;
case 0x73d8ab:c.instructions+=3;goto B73d8ab;
case 0x73d8ae:c.instructions+=2;goto B73d8ae;
case 0x73d8b0:c.instructions+=1;goto B73d8b0;
case 0x73d8b2:goto L73d8b2;
case 0x73d8b3:goto L73d8b3;
case 0x73d8b4:c.instructions+=2;goto B73d8b4;
case 0x73d8b5:c.instructions+=1;goto B73d8b5;
case 0x73d8ba:goto L73d8ba;
case 0x73d8bd:c.instructions+=2;goto B73d8bd;
case 0x73d8be:c.instructions+=1;goto B73d8be;
case 0x73d8c0:goto L73d8c0;
case 0x73d8c4:c.instructions+=2;goto B73d8c4;
case 0x73d8c7:c.instructions+=1;goto B73d8c7;
case 0x73d8d0:goto L73d8d0;
case 0x73d8d4:c.instructions+=2;goto B73d8d4;
case 0x73d8d7:c.instructions+=1;goto B73d8d7;
case 0x73d8e0:goto L73d8e0;
case 0x73d8e4:c.instructions+=2;goto B73d8e4;
case 0x73d8e6:c.instructions+=1;goto B73d8e6;
case 0x73d8e8:goto L73d8e8;
case 0x73d8ec:c.instructions+=2;goto B73d8ec;
case 0x73d8ee:c.instructions+=1;goto B73d8ee;
case 0x73d8f0:goto L73d8f0;
case 0x73d8f3:c.instructions+=1;goto B73d8f3;
case 0x73d8f5:goto L73d8f5;
case 0x73d8f8:c.instructions+=3;goto B73d8f8;
case 0x73d8fb:c.instructions+=2;goto B73d8fb;
case 0x73d8fd:c.instructions+=1;goto B73d8fd;
case 0x73d8fe:goto L73d8fe;
case 0x73d900:c.instructions+=1;goto B73d900;
case 0x73d910:goto L73d910;
case 0x73d914:c.instructions+=3;goto B73d914;
case 0x73d917:c.instructions+=2;goto B73d917;
case 0x73d919:c.instructions+=1;goto B73d919;
case 0x73d91b:goto L73d91b;
case 0x73d922:goto L73d922;
case 0x73d926:c.instructions+=6;goto B73d926;
case 0x73d92a:c.instructions+=5;goto B73d92a;
case 0x73d92d:c.instructions+=4;goto B73d92d;
case 0x73d931:c.instructions+=3;goto B73d931;
case 0x73d934:c.instructions+=2;goto B73d934;
case 0x73d937:c.instructions+=1;goto B73d937;
case 0x73d940:goto L73d940;
case 0x73d944:c.instructions+=3;goto B73d944;
case 0x73d947:c.instructions+=2;goto B73d947;
case 0x73d949:c.instructions+=1;goto B73d949;
case 0x73d94b:goto L73d94b;
case 0x73d952:goto L73d952;
case 0x73d956:c.instructions+=6;goto B73d956;
case 0x73d95a:c.instructions+=5;goto B73d95a;
case 0x73d95d:c.instructions+=4;goto B73d95d;
case 0x73d961:c.instructions+=3;goto B73d961;
case 0x73d964:c.instructions+=2;goto B73d964;
case 0x73d967:c.instructions+=1;goto B73d967;
case 0x73d970:goto L73d970;
case 0x73d974:c.instructions+=3;goto B73d974;
case 0x73d976:c.instructions+=2;goto B73d976;
case 0x73d97a:c.instructions+=1;goto B73d97a;
case 0x73d97c:goto L73d97c;
case 0x73d97f:goto L73d97f;
case 0x73d982:c.instructions+=5;goto B73d982;
case 0x73d984:c.instructions+=4;goto B73d984;
case 0x73d986:c.instructions+=3;goto B73d986;
case 0x73d989:c.instructions+=2;goto B73d989;
case 0x73d98b:c.instructions+=1;goto B73d98b;
case 0x73d990:goto L73d990;
case 0x73d994:c.instructions+=3;goto B73d994;
case 0x73d996:c.instructions+=2;goto B73d996;
case 0x73d99a:c.instructions+=1;goto B73d99a;
case 0x73d99c:goto L73d99c;
case 0x73d99f:goto L73d99f;
case 0x73d9a2:c.instructions+=5;goto B73d9a2;
case 0x73d9a4:c.instructions+=4;goto B73d9a4;
case 0x73d9a6:c.instructions+=3;goto B73d9a6;
case 0x73d9a9:c.instructions+=2;goto B73d9a9;
case 0x73d9ab:c.instructions+=1;goto B73d9ab;
case 0x73d9b0:goto L73d9b0;
case 0x73d9b1:c.instructions+=5;goto B73d9b1;
case 0x73d9b5:c.instructions+=4;goto B73d9b5;
case 0x73d9b8:c.instructions+=3;goto B73d9b8;
case 0x73d9bb:c.instructions+=2;goto B73d9bb;
case 0x73d9bd:c.instructions+=1;goto B73d9bd;
case 0x73d9bf:goto L73d9bf;
case 0x73d9c1:c.instructions+=2;goto B73d9c1;
case 0x73d9c2:c.instructions+=1;goto B73d9c2;
case 0x73d9c3:goto L73d9c3;
case 0x73d9c5:c.instructions+=1;goto B73d9c5;
case 0x73d9c7:goto L73d9c7;
case 0x73d9ca:c.instructions+=3;goto B73d9ca;
case 0x73d9cf:c.instructions+=2;goto B73d9cf;
case 0x73d9d0:c.instructions+=1;goto B73d9d0;
case 0x73d9d1:goto L73d9d1;
case 0x73d9d4:c.instructions+=8;goto B73d9d4;
case 0x73d9d5:c.instructions+=7;goto B73d9d5;
case 0x73d9d6:c.instructions+=6;goto B73d9d6;
case 0x73d9d7:c.instructions+=5;goto B73d9d7;
case 0x73d9da:c.instructions+=4;goto B73d9da;
case 0x73d9dd:c.instructions+=3;goto B73d9dd;
case 0x73d9df:c.instructions+=2;goto B73d9df;
case 0x73d9e1:c.instructions+=1;goto B73d9e1;
case 0x73d9e3:goto L73d9e3;
case 0x73d9e6:c.instructions+=2;goto B73d9e6;
case 0x73d9e8:c.instructions+=1;goto B73d9e8;
case 0x73d9ea:goto L73d9ea;
case 0x73d9ec:c.instructions+=7;goto B73d9ec;
case 0x73d9ee:c.instructions+=6;goto B73d9ee;
case 0x73d9f1:c.instructions+=5;goto B73d9f1;
case 0x73d9f2:c.instructions+=4;goto B73d9f2;
case 0x73d9f5:c.instructions+=3;goto B73d9f5;
case 0x73d9f6:c.instructions+=2;goto B73d9f6;
case 0x73d9f7:c.instructions+=1;goto B73d9f7;
case 0x73d9f9:goto L73d9f9;
case 0x73d9fc:c.instructions+=2;goto B73d9fc;
case 0x73d9fe:c.instructions+=1;goto B73d9fe;
case 0x73da00:goto L73da00;
case 0x73da02:c.instructions+=3;goto B73da02;
case 0x73da05:c.instructions+=2;goto B73da05;
case 0x73da08:c.instructions+=1;goto B73da08;
case 0x73da0a:goto L73da0a;
case 0x73da0c:c.instructions+=2;goto B73da0c;
case 0x73da0e:c.instructions+=1;goto B73da0e;
case 0x73da11:goto L73da11;
case 0x73da14:c.instructions+=5;goto B73da14;
case 0x73da17:c.instructions+=4;goto B73da17;
case 0x73da1a:c.instructions+=3;goto B73da1a;
case 0x73da1d:c.instructions+=2;goto B73da1d;
case 0x73da1f:c.instructions+=1;goto B73da1f;
case 0x73da21:goto L73da21;
case 0x73da24:c.instructions+=8;goto B73da24;
case 0x73da27:c.instructions+=7;goto B73da27;
case 0x73da29:c.instructions+=6;goto B73da29;
case 0x73da2b:c.instructions+=5;goto B73da2b;
case 0x73da2e:c.instructions+=4;goto B73da2e;
case 0x73da31:c.instructions+=3;goto B73da31;
case 0x73da33:c.instructions+=2;goto B73da33;
case 0x73da36:c.instructions+=1;goto B73da36;
case 0x73da38:goto L73da38;
case 0x73da3a:c.instructions+=5;goto B73da3a;
case 0x73da3c:c.instructions+=4;goto B73da3c;
case 0x73da3f:c.instructions+=3;goto B73da3f;
case 0x73da42:c.instructions+=2;goto B73da42;
case 0x73da44:c.instructions+=1;goto B73da44;
case 0x73da46:goto L73da46;
case 0x73da49:c.instructions+=9;goto B73da49;
case 0x73da4c:c.instructions+=8;goto B73da4c;
case 0x73da4e:c.instructions+=7;goto B73da4e;
case 0x73da51:c.instructions+=6;goto B73da51;
case 0x73da53:c.instructions+=5;goto B73da53;
case 0x73da56:c.instructions+=4;goto B73da56;
case 0x73da57:c.instructions+=3;goto B73da57;
case 0x73da58:c.instructions+=2;goto B73da58;
case 0x73da59:c.instructions+=1;goto B73da59;
case 0x73da5b:goto L73da5b;
case 0x73da5e:c.instructions+=6;goto B73da5e;
case 0x73da63:c.instructions+=5;goto B73da63;
case 0x73da65:c.instructions+=4;goto B73da65;
case 0x73da66:c.instructions+=3;goto B73da66;
case 0x73da67:c.instructions+=2;goto B73da67;
case 0x73da68:c.instructions+=1;goto B73da68;
case 0x73da6d:goto L73da6d;
case 0x73da70:goto L73da70;
case 0x73da72:c.instructions+=5;goto B73da72;
case 0x73da75:c.instructions+=4;goto B73da75;
case 0x73da78:c.instructions+=3;goto B73da78;
case 0x73da7d:c.instructions+=2;goto B73da7d;
case 0x73da7e:c.instructions+=1;goto B73da7e;
case 0x73da80:goto L73da80;
case 0x73da84:c.instructions+=3;goto B73da84;
case 0x73da88:c.instructions+=2;goto B73da88;
case 0x73da8b:c.instructions+=1;goto B73da8b;
case 0x73da90:goto L73da90;
case 0x73da94:c.instructions+=2;goto B73da94;
case 0x73da97:c.instructions+=1;goto B73da97;
case 0x73daa0:goto L73daa0;
case 0x73daa3:c.instructions+=12;goto B73daa3;
case 0x73daa8:c.instructions+=11;goto B73daa8;
case 0x73daa9:c.instructions+=10;goto B73daa9;
case 0x73daaa:c.instructions+=9;goto B73daaa;
case 0x73daab:c.instructions+=8;goto B73daab;
case 0x73dab0:c.instructions+=7;goto B73dab0;
case 0x73dab4:c.instructions+=6;goto B73dab4;
case 0x73dab6:c.instructions+=5;goto B73dab6;
case 0x73daba:c.instructions+=4;goto B73daba;
case 0x73dabb:c.instructions+=3;goto B73dabb;
case 0x73dac0:c.instructions+=2;goto B73dac0;
case 0x73dac1:c.instructions+=1;goto B73dac1;
case 0x73dac6:goto L73dac6;
case 0x73dac9:c.instructions+=2;goto B73dac9;
case 0x73daca:c.instructions+=1;goto B73daca;
case 0x73dacf:goto L73dacf;
case 0x73dad2:c.instructions+=2;goto B73dad2;
case 0x73dad4:c.instructions+=1;goto B73dad4;
case 0x73dae0:goto L73dae0;
case 0x73dae7:c.instructions+=2;goto B73dae7;
case 0x73daeb:c.instructions+=1;goto B73daeb;
case 0x73daf0:goto L73daf0;
case 0x73daf2:c.instructions+=4;goto B73daf2;
case 0x73daf4:c.instructions+=3;goto B73daf4;
case 0x73daf6:c.instructions+=2;goto B73daf6;
case 0x73daf8:c.instructions+=1;goto B73daf8;
case 0x73dafa:goto L73dafa;
case 0x73dafc:c.instructions+=1;goto B73dafc;
case 0x73dafe:goto L73dafe;
case 0x73db01:c.instructions+=4;goto B73db01;
case 0x73db04:c.instructions+=3;goto B73db04;
case 0x73db06:c.instructions+=2;goto B73db06;
case 0x73db08:c.instructions+=1;goto B73db08;
case 0x73db0a:goto L73db0a;
case 0x73db0d:c.instructions+=3;goto B73db0d;
case 0x73db10:c.instructions+=2;goto B73db10;
case 0x73db12:c.instructions+=1;goto B73db12;
case 0x73db14:goto L73db14;
case 0x73db16:c.instructions+=1;goto B73db16;
case 0x73db18:goto L73db18;
case 0x73db1a:c.instructions+=1;goto B73db1a;
case 0x73db1d:goto L73db1d;
case 0x73db1f:c.instructions+=1;goto B73db1f;
case 0x73db21:goto L73db21;
case 0x73db22:c.instructions+=2;goto B73db22;
case 0x73db25:c.instructions+=1;goto B73db25;
case 0x73db27:goto L73db27;
case 0x73db28:c.instructions+=5;goto B73db28;
case 0x73db29:c.instructions+=4;goto B73db29;
case 0x73db2c:c.instructions+=3;goto B73db2c;
case 0x73db2d:c.instructions+=2;goto B73db2d;
case 0x73db31:c.instructions+=1;goto B73db31;
case 0x73db36:goto L73db36;
case 0x73db39:c.instructions+=1;goto B73db39;
case 0x73db3a:goto L73db3a;
case 0x73db3e:c.instructions+=5;goto B73db3e;
case 0x73db40:c.instructions+=4;goto B73db40;
case 0x73db41:c.instructions+=3;goto B73db41;
case 0x73db42:c.instructions+=2;goto B73db42;
case 0x73db43:c.instructions+=1;goto B73db43;
case 0x73db48:goto L73db48;
case 0x73db4b:c.instructions+=1;goto B73db4b;
case 0x73db50:goto L73db50;
case 0x73db54:c.instructions+=4;goto B73db54;
case 0x73db57:c.instructions+=3;goto B73db57;
case 0x73db5a:c.instructions+=2;goto B73db5a;
case 0x73db5c:c.instructions+=1;goto B73db5c;
case 0x73db5e:goto L73db5e;
case 0x73db5f:c.instructions+=15;goto B73db5f;
case 0x73db63:c.instructions+=14;goto B73db63;
case 0x73db66:c.instructions+=13;goto B73db66;
case 0x73db6a:c.instructions+=12;goto B73db6a;
case 0x73db6d:c.instructions+=11;goto B73db6d;
case 0x73db70:c.instructions+=10;goto B73db70;
case 0x73db74:c.instructions+=9;goto B73db74;
case 0x73db77:c.instructions+=8;goto B73db77;
case 0x73db7b:c.instructions+=7;goto B73db7b;
case 0x73db7c:c.instructions+=6;goto B73db7c;
case 0x73db80:c.instructions+=5;goto B73db80;
case 0x73db81:c.instructions+=4;goto B73db81;
case 0x73db82:c.instructions+=3;goto B73db82;
case 0x73db8a:c.instructions+=2;goto B73db8a;
case 0x73db8e:c.instructions+=1;goto B73db8e;
case 0x73db91:goto L73db91;
case 0x73db94:c.instructions+=3;goto B73db94;
case 0x73db9b:c.instructions+=2;goto B73db9b;
case 0x73db9f:c.instructions+=1;goto B73db9f;
case 0x73dba0:goto L73dba0;
case 0x73dba3:c.instructions+=1;goto B73dba3;
case 0x73dbb0:goto L73dbb0;
case 0x73dbb6:c.instructions+=10;goto B73dbb6;
case 0x73dbbb:c.instructions+=9;goto B73dbbb;
case 0x73dbc2:c.instructions+=8;goto B73dbc2;
case 0x73dbc5:c.instructions+=7;goto B73dbc5;
case 0x73dbc6:c.instructions+=6;goto B73dbc6;
case 0x73dbcb:c.instructions+=5;goto B73dbcb;
case 0x73dbcf:c.instructions+=4;goto B73dbcf;
case 0x73dbd4:c.instructions+=3;goto B73dbd4;
case 0x73dbd5:c.instructions+=2;goto B73dbd5;
case 0x73dbda:c.instructions+=1;goto B73dbda;
case 0x73dbdf:goto L73dbdf;
case 0x73dbe6:c.instructions+=6;goto B73dbe6;
case 0x73dbe7:c.instructions+=5;goto B73dbe7;
case 0x73dbec:c.instructions+=4;goto B73dbec;
case 0x73dbf0:c.instructions+=3;goto B73dbf0;
case 0x73dbf5:c.instructions+=2;goto B73dbf5;
case 0x73dbf6:c.instructions+=1;goto B73dbf6;
case 0x73dbfb:goto L73dbfb;
case 0x73dbfe:c.instructions+=2;goto B73dbfe;
case 0x73dc00:c.instructions+=1;goto B73dc00;
case 0x73dc02:goto L73dc02;
case 0x73dc03:c.instructions+=5;goto B73dc03;
case 0x73dc08:c.instructions+=4;goto B73dc08;
case 0x73dc0c:c.instructions+=3;goto B73dc0c;
case 0x73dc11:c.instructions+=2;goto B73dc11;
case 0x73dc12:c.instructions+=1;goto B73dc12;
case 0x73dc17:goto L73dc17;
case 0x73dc1a:goto L73dc1a;
case 0x73dc1f:c.instructions+=6;goto B73dc1f;
case 0x73dc24:c.instructions+=5;goto B73dc24;
case 0x73dc2b:c.instructions+=4;goto B73dc2b;
case 0x73dc30:c.instructions+=3;goto B73dc30;
case 0x73dc31:c.instructions+=2;goto B73dc31;
case 0x73dc39:c.instructions+=1;goto B73dc39;
case 0x73dc3e:goto L73dc3e;
case 0x73dc45:c.instructions+=6;goto B73dc45;
case 0x73dc46:c.instructions+=5;goto B73dc46;
case 0x73dc4b:c.instructions+=4;goto B73dc4b;
case 0x73dc52:c.instructions+=3;goto B73dc52;
case 0x73dc57:c.instructions+=2;goto B73dc57;
case 0x73dc58:c.instructions+=1;goto B73dc58;
case 0x73dc5d:goto L73dc5d;
case 0x73dc61:c.instructions+=6;goto B73dc61;
case 0x73dc62:c.instructions+=5;goto B73dc62;
case 0x73dc67:c.instructions+=4;goto B73dc67;
case 0x73dc6e:c.instructions+=3;goto B73dc6e;
case 0x73dc73:c.instructions+=2;goto B73dc73;
case 0x73dc74:c.instructions+=1;goto B73dc74;
case 0x73dc79:goto L73dc79;
case 0x73dc7b:c.instructions+=7;goto B73dc7b;
case 0x73dc7c:c.instructions+=6;goto B73dc7c;
case 0x73dc81:c.instructions+=5;goto B73dc81;
case 0x73dc88:c.instructions+=4;goto B73dc88;
case 0x73dc89:c.instructions+=3;goto B73dc89;
case 0x73dc8e:c.instructions+=2;goto B73dc8e;
case 0x73dc8f:c.instructions+=1;goto B73dc8f;
case 0x73dc94:goto L73dc94;
case 0x73dc9b:c.instructions+=2;goto B73dc9b;
case 0x73dc9e:c.instructions+=1;goto B73dc9e;
case 0x73dca3:goto L73dca3;
case 0x73dca9:c.instructions+=1;goto B73dca9;
case 0x73dcb0:goto L73dcb0;
case 0x73dcb3:c.instructions+=11;goto B73dcb3;
case 0x73dcb8:c.instructions+=10;goto B73dcb8;
case 0x73dcb9:c.instructions+=9;goto B73dcb9;
case 0x73dcba:c.instructions+=8;goto B73dcba;
case 0x73dcbe:c.instructions+=7;goto B73dcbe;
case 0x73dcc2:c.instructions+=6;goto B73dcc2;
case 0x73dcc6:c.instructions+=5;goto B73dcc6;
case 0x73dccd:c.instructions+=4;goto B73dccd;
case 0x73dcd0:c.instructions+=3;goto B73dcd0;
case 0x73dcd2:c.instructions+=2;goto B73dcd2;
case 0x73dcd4:c.instructions+=1;goto B73dcd4;
case 0x73dcd6:goto L73dcd6;
case 0x73dcd9:c.instructions+=9;goto B73dcd9;
case 0x73dcda:c.instructions+=8;goto B73dcda;
case 0x73dcdb:c.instructions+=7;goto B73dcdb;
case 0x73dce0:c.instructions+=6;goto B73dce0;
case 0x73dce2:c.instructions+=5;goto B73dce2;
case 0x73dce6:c.instructions+=4;goto B73dce6;
case 0x73dce7:c.instructions+=3;goto B73dce7;
case 0x73dcec:c.instructions+=2;goto B73dcec;
case 0x73dced:c.instructions+=1;goto B73dced;
case 0x73dcf2:goto L73dcf2;
case 0x73dcf5:c.instructions+=2;goto B73dcf5;
case 0x73dcf6:c.instructions+=1;goto B73dcf6;
case 0x73dcfb:goto L73dcfb;
case 0x73dcfe:c.instructions+=4;goto B73dcfe;
case 0x73dd03:c.instructions+=3;goto B73dd03;
case 0x73dd07:c.instructions+=2;goto B73dd07;
case 0x73dd0c:c.instructions+=1;goto B73dd0c;
case 0x73dd0e:goto L73dd0e;
case 0x73dd10:goto L73dd10;
case 0x73dd12:goto L73dd12;
case 0x73dd17:c.instructions+=3;goto B73dd17;
case 0x73dd1b:c.instructions+=2;goto B73dd1b;
case 0x73dd20:c.instructions+=1;goto B73dd20;
case 0x73dd22:goto L73dd22;
case 0x73dd24:goto L73dd24;
case 0x73dd26:goto L73dd26;
case 0x73dd27:c.instructions+=7;goto B73dd27;
case 0x73dd28:c.instructions+=6;goto B73dd28;
case 0x73dd2b:c.instructions+=5;goto B73dd2b;
case 0x73dd2e:c.instructions+=4;goto B73dd2e;
case 0x73dd2f:c.instructions+=3;goto B73dd2f;
case 0x73dd30:c.instructions+=2;goto B73dd30;
case 0x73dd34:c.instructions+=1;goto B73dd34;
case 0x73dd39:goto L73dd39;
case 0x73dd3c:c.instructions+=1;goto B73dd3c;
case 0x73dd3d:goto L73dd3d;
case 0x73dd3e:c.instructions+=6;goto B73dd3e;
case 0x73dd3f:c.instructions+=5;goto B73dd3f;
case 0x73dd46:c.instructions+=4;goto B73dd46;
case 0x73dd47:c.instructions+=3;goto B73dd47;
case 0x73dd48:c.instructions+=2;goto B73dd48;
case 0x73dd4c:c.instructions+=1;goto B73dd4c;
case 0x73dd51:goto L73dd51;
case 0x73dd54:c.instructions+=1;goto B73dd54;
case 0x73dd55:goto L73dd55;
case 0x73dd58:c.instructions+=13;goto B73dd58;
case 0x73dd5c:c.instructions+=12;goto B73dd5c;
case 0x73dd5f:c.instructions+=11;goto B73dd5f;
case 0x73dd62:c.instructions+=10;goto B73dd62;
case 0x73dd66:c.instructions+=9;goto B73dd66;
case 0x73dd69:c.instructions+=8;goto B73dd69;
case 0x73dd6d:c.instructions+=7;goto B73dd6d;
case 0x73dd6e:c.instructions+=6;goto B73dd6e;
case 0x73dd72:c.instructions+=5;goto B73dd72;
case 0x73dd73:c.instructions+=4;goto B73dd73;
case 0x73dd74:c.instructions+=3;goto B73dd74;
case 0x73dd78:c.instructions+=2;goto B73dd78;
case 0x73dd7c:c.instructions+=1;goto B73dd7c;
case 0x73dd7f:goto L73dd7f;
case 0x73dd83:c.instructions+=6;goto B73dd83;
case 0x73dd86:c.instructions+=5;goto B73dd86;
case 0x73dd89:c.instructions+=4;goto B73dd89;
case 0x73dd8c:c.instructions+=3;goto B73dd8c;
case 0x73dd8d:c.instructions+=2;goto B73dd8d;
case 0x73dd8e:c.instructions+=1;goto B73dd8e;
case 0x73dd93:goto L73dd93;
case 0x73dd96:c.instructions+=1;goto B73dd96;
case 0x73dda0:goto L73dda0;
case 0x73dda6:c.instructions+=9;goto B73dda6;
case 0x73ddab:c.instructions+=8;goto B73ddab;
case 0x73ddb2:c.instructions+=7;goto B73ddb2;
case 0x73ddb5:c.instructions+=6;goto B73ddb5;
case 0x73ddb6:c.instructions+=5;goto B73ddb6;
case 0x73ddba:c.instructions+=4;goto B73ddba;
case 0x73ddbf:c.instructions+=3;goto B73ddbf;
case 0x73ddc0:c.instructions+=2;goto B73ddc0;
case 0x73ddc5:c.instructions+=1;goto B73ddc5;
case 0x73ddca:goto L73ddca;
case 0x73ddcd:c.instructions+=6;goto B73ddcd;
case 0x73ddce:c.instructions+=5;goto B73ddce;
case 0x73ddd3:c.instructions+=4;goto B73ddd3;
case 0x73ddd7:c.instructions+=3;goto B73ddd7;
case 0x73dddc:c.instructions+=2;goto B73dddc;
case 0x73dddd:c.instructions+=1;goto B73dddd;
case 0x73dde2:goto L73dde2;
case 0x73dde9:c.instructions+=6;goto B73dde9;
case 0x73ddea:c.instructions+=5;goto B73ddea;
case 0x73ddef:c.instructions+=4;goto B73ddef;
case 0x73ddf3:c.instructions+=3;goto B73ddf3;
case 0x73ddf8:c.instructions+=2;goto B73ddf8;
case 0x73ddf9:c.instructions+=1;goto B73ddf9;
case 0x73ddfe:goto L73ddfe;
case 0x73de00:c.instructions+=7;goto B73de00;
case 0x73de01:c.instructions+=6;goto B73de01;
case 0x73de06:c.instructions+=5;goto B73de06;
case 0x73de0a:c.instructions+=4;goto B73de0a;
case 0x73de0b:c.instructions+=3;goto B73de0b;
case 0x73de10:c.instructions+=2;goto B73de10;
case 0x73de11:c.instructions+=1;goto B73de11;
case 0x73de16:goto L73de16;
case 0x73de19:c.instructions+=2;goto B73de19;
case 0x73de1c:c.instructions+=1;goto B73de1c;
case 0x73de21:goto L73de21;
case 0x73de24:c.instructions+=3;goto B73de24;
case 0x73de26:c.instructions+=2;goto B73de26;
case 0x73de29:c.instructions+=1;goto B73de29;
case 0x73de2b:goto L73de2b;
case 0x73de32:goto L73de32;
case 0x73de39:c.instructions+=1;goto B73de39;
case 0x73de3e:goto L73de3e;
case 0x73de44:c.instructions+=1;goto B73de44;
case 0x73de50:goto L73de50;
case 0x73de56:c.instructions+=5;goto B73de56;
case 0x73de5b:c.instructions+=4;goto B73de5b;
case 0x73de62:c.instructions+=3;goto B73de62;
case 0x73de65:c.instructions+=2;goto B73de65;
case 0x73de68:c.instructions+=1;goto B73de68;
case 0x73de6a:goto L73de6a;
case 0x73de6d:c.instructions+=1;goto B73de6d;
case 0x73de6f:goto L73de6f;
case 0x73de74:c.instructions+=6;goto B73de74;
case 0x73de79:c.instructions+=5;goto B73de79;
case 0x73de7d:c.instructions+=4;goto B73de7d;
case 0x73de82:c.instructions+=3;goto B73de82;
case 0x73de83:c.instructions+=2;goto B73de83;
case 0x73de88:c.instructions+=1;goto B73de88;
case 0x73de8d:goto L73de8d;
case 0x73de8f:c.instructions+=7;goto B73de8f;
case 0x73de90:c.instructions+=6;goto B73de90;
case 0x73de95:c.instructions+=5;goto B73de95;
case 0x73de99:c.instructions+=4;goto B73de99;
case 0x73de9a:c.instructions+=3;goto B73de9a;
case 0x73de9f:c.instructions+=2;goto B73de9f;
case 0x73dea0:c.instructions+=1;goto B73dea0;
case 0x73dea5:goto L73dea5;
case 0x73dea8:goto L73dea8;
case 0x73deaf:c.instructions+=1;goto B73deaf;
case 0x73deb4:goto L73deb4;
case 0x73deba:c.instructions+=1;goto B73deba;
case 0x73dec0:goto L73dec0;
case 0x73dec6:c.instructions+=11;goto B73dec6;
case 0x73decb:c.instructions+=10;goto B73decb;
case 0x73decc:c.instructions+=9;goto B73decc;
case 0x73decd:c.instructions+=8;goto B73decd;
case 0x73ded4:c.instructions+=7;goto B73ded4;
case 0x73ded6:c.instructions+=6;goto B73ded6;
case 0x73ded7:c.instructions+=5;goto B73ded7;
case 0x73dede:c.instructions+=4;goto B73dede;
case 0x73dee1:c.instructions+=3;goto B73dee1;
case 0x73dee6:c.instructions+=2;goto B73dee6;
case 0x73dee7:c.instructions+=1;goto B73dee7;
case 0x73deec:goto L73deec;
case 0x73deef:c.instructions+=2;goto B73deef;
case 0x73def0:c.instructions+=1;goto B73def0;
case 0x73def5:goto L73def5;
case 0x73def8:c.instructions+=2;goto B73def8;
case 0x73defd:c.instructions+=1;goto B73defd;
case 0x73df03:goto L73df03;
case 0x73df06:c.instructions+=9;goto B73df06;
case 0x73df07:c.instructions+=8;goto B73df07;
case 0x73df08:c.instructions+=7;goto B73df08;
case 0x73df0d:c.instructions+=6;goto B73df0d;
case 0x73df0f:c.instructions+=5;goto B73df0f;
case 0x73df13:c.instructions+=4;goto B73df13;
case 0x73df14:c.instructions+=3;goto B73df14;
case 0x73df19:c.instructions+=2;goto B73df19;
case 0x73df1a:c.instructions+=1;goto B73df1a;
case 0x73df1f:goto L73df1f;
case 0x73df22:c.instructions+=2;goto B73df22;
case 0x73df23:c.instructions+=1;goto B73df23;
case 0x73df28:goto L73df28;
case 0x73df2f:c.instructions+=5;goto B73df2f;
case 0x73df32:c.instructions+=4;goto B73df32;
case 0x73df35:c.instructions+=3;goto B73df35;
case 0x73df38:c.instructions+=2;goto B73df38;
case 0x73df3a:c.instructions+=1;goto B73df3a;
case 0x73df3c:goto L73df3c;
case 0x73df40:c.instructions+=3;goto B73df40;
case 0x73df41:c.instructions+=2;goto B73df41;
case 0x73df42:c.instructions+=1;goto B73df42;
case 0x73df47:goto L73df47;
case 0x73df4a:c.instructions+=2;goto B73df4a;
case 0x73df4c:c.instructions+=1;goto B73df4c;
case 0x73df4e:goto L73df4e;
case 0x73df54:c.instructions+=5;goto B73df54;
case 0x73df55:c.instructions+=4;goto B73df55;
case 0x73df59:c.instructions+=3;goto B73df59;
case 0x73df5a:c.instructions+=2;goto B73df5a;
case 0x73df5c:c.instructions+=1;goto B73df5c;
case 0x73df61:goto L73df61;
case 0x73df64:c.instructions+=6;goto B73df64;
case 0x73df65:c.instructions+=5;goto B73df65;
case 0x73df66:c.instructions+=4;goto B73df66;
case 0x73df67:c.instructions+=3;goto B73df67;
case 0x73df68:c.instructions+=2;goto B73df68;
case 0x73df6f:c.instructions+=1;goto B73df6f;
case 0x73df74:goto L73df74;
case 0x73df7a:c.instructions+=1;goto B73df7a;
case 0x73df7b:goto L73df7b;
case 0x73df7e:c.instructions+=7;goto B73df7e;
case 0x73df83:c.instructions+=6;goto B73df83;
case 0x73df88:c.instructions+=5;goto B73df88;
case 0x73df8c:c.instructions+=4;goto B73df8c;
case 0x73df8d:c.instructions+=3;goto B73df8d;
case 0x73df92:c.instructions+=2;goto B73df92;
case 0x73df93:c.instructions+=1;goto B73df93;
case 0x73df98:goto L73df98;
case 0x73df9b:c.instructions+=2;goto B73df9b;
case 0x73df9c:c.instructions+=1;goto B73df9c;
case 0x73dfa1:goto L73dfa1;
case 0x73dfa4:c.instructions+=2;goto B73dfa4;
case 0x73dfa8:c.instructions+=1;goto B73dfa8;
case 0x73dfad:goto L73dfad;
case 0x73dfb0:c.instructions+=1;goto B73dfb0;
case 0x73dfb6:goto L73dfb6;
case 0x73dfb9:c.instructions+=2;goto B73dfb9;
case 0x73dfbc:c.instructions+=1;goto B73dfbc;
case 0x73dfbe:goto L73dfbe;
case 0x73dfc0:c.instructions+=1;goto B73dfc0;
case 0x73dfc2:goto L73dfc2;
case 0x73dfc8:c.instructions+=5;goto B73dfc8;
case 0x73dfc9:c.instructions+=4;goto B73dfc9;
case 0x73dfcd:c.instructions+=3;goto B73dfcd;
case 0x73dfce:c.instructions+=2;goto B73dfce;
case 0x73dfd0:c.instructions+=1;goto B73dfd0;
case 0x73dfd5:goto L73dfd5;
case 0x73dfd8:c.instructions+=6;goto B73dfd8;
case 0x73dfd9:c.instructions+=5;goto B73dfd9;
case 0x73dfda:c.instructions+=4;goto B73dfda;
case 0x73dfdb:c.instructions+=3;goto B73dfdb;
case 0x73dfdc:c.instructions+=2;goto B73dfdc;
case 0x73dfe3:c.instructions+=1;goto B73dfe3;
case 0x73dfe8:goto L73dfe8;
case 0x73dfee:c.instructions+=1;goto B73dfee;
case 0x73dfef:goto L73dfef;
case 0x73dff1:c.instructions+=1;goto B73dff1;
case 0x73dff7:goto L73dff7;
case 0x73dff9:c.instructions+=1;goto B73dff9;
case 0x73dfff:goto L73dfff;
default:missing_instruction(c.pc);}
B73d002:L73d002:{c.instructions+=2;NFSU2_TR(0x73d002);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73d00a:{NFSU2_TR(0x73d00a);
{goto L73d064;}
}
B73d00c:L73d00c:{c.instructions+=17;NFSU2_TR(0x73d00c);
__builtin_memmove((R+8),gp(0x8b7bc4),4);
}
B73d012:{NFSU2_TR(0x73d012);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d016:{NFSU2_TR(0x73d016);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B73d018:{NFSU2_TR(0x73d018);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d01b:{NFSU2_TR(0x73d01b);
__builtin_memmove((R+0),(R+4),4);
}
B73d01d:{NFSU2_TR(0x73d01d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B73d01f:{NFSU2_TR(0x73d01f);
w4(R+28,u32(0xaull));
}
B73d024:{NFSU2_TR(0x73d024);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x73d024);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x73d024);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B73d026:{NFSU2_TR(0x73d026);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B73d028:{NFSU2_TR(0x73d028);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d02e:{NFSU2_TR(0x73d02e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73d02f:{NFSU2_TR(0x73d02f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73d030:{NFSU2_TR(0x73d030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73d031:{NFSU2_TR(0x73d031);
w4(R+0,u32(0xffffd8f1ull));
}
B73d036:{NFSU2_TR(0x73d036);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73d037:{NFSU2_TR(0x73d037);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73d03a:{NFSU2_TR(0x73d03a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d03b:L73d03b:{c.instructions+=15;NFSU2_TR(0x73d03b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d03f:{NFSU2_TR(0x73d03f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d042:{NFSU2_TR(0x73d042);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d044:{NFSU2_TR(0x73d044);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d045:{NFSU2_TR(0x73d045);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d046:{NFSU2_TR(0x73d046);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d04a:{NFSU2_TR(0x73d04a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d04b:{NFSU2_TR(0x73d04b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d04e:{NFSU2_TR(0x73d04e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d04f:{NFSU2_TR(0x73d04f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+8),(U+0),4);
}
B73d052:{NFSU2_TR(0x73d052);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d053:{NFSU2_TR(0x73d053);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d054:{NFSU2_TR(0x73d054);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d055:{NFSU2_TR(0x73d055);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73d05c:{NFSU2_TR(0x73d05c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d061ull));
TAIL_STATIC(0x482750u,482);
}
B73d061:L73d061:{c.instructions+=1;NFSU2_TR(0x73d061);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d064:L73d064:{c.instructions+=5;NFSU2_TR(0x73d064);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B73d067:{NFSU2_TR(0x73d067);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d06b:{NFSU2_TR(0x73d06b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73d06d:{NFSU2_TR(0x73d06d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73d074:{NFSU2_TR(0x73d074);
if(r1(R+518)){{goto L73d0e9;}}
}
B73d076:L73d076:{c.instructions+=23;NFSU2_TR(0x73d076);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d07a:{NFSU2_TR(0x73d07a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d07d:{NFSU2_TR(0x73d07d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d080:{NFSU2_TR(0x73d080);
__builtin_memmove((R+28),(R+0),4);
}
B73d082:{NFSU2_TR(0x73d082);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73d085:{NFSU2_TR(0x73d085);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B73d088:{NFSU2_TR(0x73d088);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B73d08b:{NFSU2_TR(0x73d08b);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
}
B73d08e:{NFSU2_TR(0x73d08e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B73d091:{NFSU2_TR(0x73d091);
__builtin_memmove((R+0),(R+4),4);
}
B73d093:{NFSU2_TR(0x73d093);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B73d096:{NFSU2_TR(0x73d096);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B73d099:{NFSU2_TR(0x73d099);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B73d09c:{NFSU2_TR(0x73d09c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B73d09f:{NFSU2_TR(0x73d09f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B73d0a1:{NFSU2_TR(0x73d0a1);
__builtin_memmove((R+12),(R+4),4);
}
B73d0a3:{NFSU2_TR(0x73d0a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B73d0a6:{NFSU2_TR(0x73d0a6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1f0ull))));
}
B73d0ab:{NFSU2_TR(0x73d0ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B73d0ae:{NFSU2_TR(0x73d0ae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B73d0b0:{NFSU2_TR(0x73d0b0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73d0b2:{NFSU2_TR(0x73d0b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d0b5:{NFSU2_TR(0x73d0b5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73d0bd;}}
}
B73d0b7:L73d0b7:{c.instructions+=2;NFSU2_TR(0x73d0b7);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B73d0bb:{NFSU2_TR(0x73d0bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73d0e9;}}
}
B73d0bd:L73d0bd:{c.instructions+=3;NFSU2_TR(0x73d0bd);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffe0full))));
}
B73d0c2:{NFSU2_TR(0x73d0c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d0c5:{NFSU2_TR(0x73d0c5);
{goto L73d0e9;}
}
B73d0c7:L73d0c7:{c.instructions+=13;NFSU2_TR(0x73d0c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d0cb:{NFSU2_TR(0x73d0cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d0cf:{NFSU2_TR(0x73d0cf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d0d1:{NFSU2_TR(0x73d0d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d0d2:{NFSU2_TR(0x73d0d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d0d3:{NFSU2_TR(0x73d0d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d0d6:{NFSU2_TR(0x73d0d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d0d7:{NFSU2_TR(0x73d0d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d0d8:{NFSU2_TR(0x73d0d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+0),(U+0),4);
}
B73d0db:{NFSU2_TR(0x73d0db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d0dc:{NFSU2_TR(0x73d0dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d0dd:{NFSU2_TR(0x73d0dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d0de:{NFSU2_TR(0x73d0de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d0e3ull));
TAIL_STATIC(0x482750u,482);
}
B73d0e3:L73d0e3:{c.instructions+=2;NFSU2_TR(0x73d0e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B73d0e6:{NFSU2_TR(0x73d0e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d0e9:L73d0e9:{c.instructions+=3;NFSU2_TR(0x73d0e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d0ec:{NFSU2_TR(0x73d0ec);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73d0ee:{NFSU2_TR(0x73d0ee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73d19b;}}
}
B73d0f4:L73d0f4:{c.instructions+=36;NFSU2_TR(0x73d0f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d0f7:{NFSU2_TR(0x73d0f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73d0fd:{NFSU2_TR(0x73d0fd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B73d101:{NFSU2_TR(0x73d101);
__builtin_memmove((R+4),(R+8),4);
}
B73d103:{NFSU2_TR(0x73d103);
u8 U[4];
w4(U+0,u32(u32(u32(0x13ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73d106:{NFSU2_TR(0x73d106);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B73d109:{NFSU2_TR(0x73d109);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B73d10c:{NFSU2_TR(0x73d10c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B73d10e:{NFSU2_TR(0x73d10e);
__builtin_memmove((R+12),gp(0x8b7bb0),4);
}
B73d114:{NFSU2_TR(0x73d114);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73d117:{NFSU2_TR(0x73d117);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+20,u32(s32(s16(r2(U+8)))));
}
B73d11c:{NFSU2_TR(0x73d11c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73d11f:{NFSU2_TR(0x73d11f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B73d121:{NFSU2_TR(0x73d121);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(s32(s16(r2(U+8)))));
}
B73d125:{NFSU2_TR(0x73d125);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B73d128:{NFSU2_TR(0x73d128);
__builtin_memmove((R+12),gp(0x8b7bb0),4);
}
B73d12e:{NFSU2_TR(0x73d12e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73d131:{NFSU2_TR(0x73d131);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d134:{NFSU2_TR(0x73d134);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B73d138:{NFSU2_TR(0x73d138);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d13b:{NFSU2_TR(0x73d13b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73d13f:{NFSU2_TR(0x73d13f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d142:{NFSU2_TR(0x73d142);
__builtin_memmove((R+4),(R+8),4);
}
B73d144:{NFSU2_TR(0x73d144);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff80000ull))));
}
B73d14a:{NFSU2_TR(0x73d14a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x80000ull))));
}
B73d150:{NFSU2_TR(0x73d150);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+8))));
}
B73d152:{NFSU2_TR(0x73d152);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf80000ull))));
}
B73d158:{NFSU2_TR(0x73d158);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+8))));
}
B73d15a:{NFSU2_TR(0x73d15a);
__builtin_memmove((R+8),(R+4),4);
}
B73d15c:{NFSU2_TR(0x73d15c);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B73d15f:{NFSU2_TR(0x73d15f);
__builtin_memmove((R+28),(R+4),4);
}
B73d161:{NFSU2_TR(0x73d161);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7c000ull))));
}
B73d167:{NFSU2_TR(0x73d167);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7c000ull))));
}
B73d16d:{NFSU2_TR(0x73d16d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B73d16f:{NFSU2_TR(0x73d16f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d172:{NFSU2_TR(0x73d172);
if(r1(R+512)){{goto L73d19b;}}
}
B73d174:L73d174:{c.instructions+=8;NFSU2_TR(0x73d174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73d175:{NFSU2_TR(0x73d175);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xff07ffffull))));
}
B73d17b:{NFSU2_TR(0x73d17b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d17e:{NFSU2_TR(0x73d17e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73d17f:{NFSU2_TR(0x73d17f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73d180:{NFSU2_TR(0x73d180);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73d181:{NFSU2_TR(0x73d181);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73d184:{NFSU2_TR(0x73d184);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d185:L73d185:{c.instructions+=6;NFSU2_TR(0x73d185);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B73d188:{NFSU2_TR(0x73d188);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d18b:{NFSU2_TR(0x73d18b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73d18f:{NFSU2_TR(0x73d18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffe0full))));
s4(u32(r4(U+0)),r4(U+4));
}
B73d196:{NFSU2_TR(0x73d196);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d199:{NFSU2_TR(0x73d199);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73d19b:L73d19b:{c.instructions+=6;NFSU2_TR(0x73d19b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73d19c:{NFSU2_TR(0x73d19c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73d19d:{NFSU2_TR(0x73d19d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73d19e:{NFSU2_TR(0x73d19e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73d19f:{NFSU2_TR(0x73d19f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73d1a2:{NFSU2_TR(0x73d1a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d1b0:L73d1b0:{c.instructions+=12;NFSU2_TR(0x73d1b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B73d1b3:{NFSU2_TR(0x73d1b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d1b7:{NFSU2_TR(0x73d1b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d1bb:{NFSU2_TR(0x73d1bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d1bc:{NFSU2_TR(0x73d1bc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d1bd:{NFSU2_TR(0x73d1bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d1be:{NFSU2_TR(0x73d1be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d1bf:{NFSU2_TR(0x73d1bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73d1c3:{NFSU2_TR(0x73d1c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d1c4:{NFSU2_TR(0x73d1c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d1c5:{NFSU2_TR(0x73d1c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d1c9:{NFSU2_TR(0x73d1c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d1ceull));
TAIL_STATIC(0x73cb10u,73c);
}
B73d1ce:L73d1ce:{c.instructions+=15;NFSU2_TR(0x73d1ce);
__builtin_memmove((R+4),gp(0x8b7bb0),4);
}
B73d1d4:{NFSU2_TR(0x73d1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d1d7:{NFSU2_TR(0x73d1d7);
w4(R+20,u32(s32(s16(r2(R+0)))));
}
B73d1da:{NFSU2_TR(0x73d1da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d1dd:{NFSU2_TR(0x73d1dd);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B73d1e1:{NFSU2_TR(0x73d1e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B73d1e4:{NFSU2_TR(0x73d1e4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73d1e6:{NFSU2_TR(0x73d1e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B73d1e9:{NFSU2_TR(0x73d1e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73d1ec:{NFSU2_TR(0x73d1ec);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B73d1ef:{NFSU2_TR(0x73d1ef);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B73d1f3:{NFSU2_TR(0x73d1f3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+0),(U+0),2);
}
B73d1f6:{NFSU2_TR(0x73d1f6);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B73d1f9:{NFSU2_TR(0x73d1f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d1fd:{NFSU2_TR(0x73d1fd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73d3ed;}}
}
B73d203:L73d203:{c.instructions+=1;NFSU2_TR(0x73d203);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73d33e;}}
}
B73d209:L73d209:{c.instructions+=4;NFSU2_TR(0x73d209);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d20c:{NFSU2_TR(0x73d20c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d20f:{NFSU2_TR(0x73d20f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x7cull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73d212:{NFSU2_TR(0x73d212);
if(r1(R+518)){{goto L73d307;}}
}
B73d218:L73d218:{c.instructions+=18;NFSU2_TR(0x73d218);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73d21a:{NFSU2_TR(0x73d21a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B73d21c:{NFSU2_TR(0x73d21c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d220:{NFSU2_TR(0x73d220);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d224:{NFSU2_TR(0x73d224);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d228:{NFSU2_TR(0x73d228);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d22c:{NFSU2_TR(0x73d22c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d230:{NFSU2_TR(0x73d230);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d234:{NFSU2_TR(0x73d234);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d238:{NFSU2_TR(0x73d238);
__builtin_memmove((R+8),(R+0),4);
}
B73d23a:{NFSU2_TR(0x73d23a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d23e:{NFSU2_TR(0x73d23e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73d241:{NFSU2_TR(0x73d241);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d244:{NFSU2_TR(0x73d244);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B73d247:{NFSU2_TR(0x73d247);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x1full))));
}
B73d24a:{NFSU2_TR(0x73d24a);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B73d24e:{NFSU2_TR(0x73d24e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B73d250:{NFSU2_TR(0x73d250);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L73d25c;}}
}
B73d252:L73d252:{c.instructions+=3;NFSU2_TR(0x73d252);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff64ull))));
}
B73d257:{NFSU2_TR(0x73d257);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x64ull))));
}
B73d25a:{NFSU2_TR(0x73d25a);
{goto L73d261;}
}
B73d25c:L73d25c:{c.instructions+=1;NFSU2_TR(0x73d25c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff00ull))));
}
B73d261:L73d261:{c.instructions+=34;NFSU2_TR(0x73d261);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B73d264:{NFSU2_TR(0x73d264);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B73d266:{NFSU2_TR(0x73d266);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8000ull))));
}
B73d26c:{NFSU2_TR(0x73d26c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B73d26e:{NFSU2_TR(0x73d26e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B73d273:{NFSU2_TR(0x73d273);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffff06ffull))));
}
B73d279:{NFSU2_TR(0x73d279);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x25a00000ull))));
}
B73d27e:{NFSU2_TR(0x73d27e);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x600ull))));
}
B73d284:{NFSU2_TR(0x73d284);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d288:{NFSU2_TR(0x73d288);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d28c:{NFSU2_TR(0x73d28c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d28f:{NFSU2_TR(0x73d28f);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73d292:{NFSU2_TR(0x73d292);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B73d295:{NFSU2_TR(0x73d295);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B73d298:{NFSU2_TR(0x73d298);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B73d299:{NFSU2_TR(0x73d299);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B73d29b:{NFSU2_TR(0x73d29b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7f00ull))));
}
B73d2a1:{NFSU2_TR(0x73d2a1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B73d2a3:{NFSU2_TR(0x73d2a3);
__builtin_memmove((R+4),gp(0x8b7bc4),4);
}
B73d2a9:{NFSU2_TR(0x73d2a9);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffull))));
}
B73d2af:{NFSU2_TR(0x73d2af);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d2b3:{NFSU2_TR(0x73d2b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73d2b6:{NFSU2_TR(0x73d2b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d2ba:{NFSU2_TR(0x73d2ba);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B73d2bc:{NFSU2_TR(0x73d2bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73d2c0:{NFSU2_TR(0x73d2c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d2c4:{NFSU2_TR(0x73d2c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d2c5:{NFSU2_TR(0x73d2c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73d2c9:{NFSU2_TR(0x73d2c9);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff0fffull))));
}
B73d2cf:{NFSU2_TR(0x73d2cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d2d0:{NFSU2_TR(0x73d2d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d2d4:{NFSU2_TR(0x73d2d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1f000001ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73d2dc:{NFSU2_TR(0x73d2dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d2e0:{NFSU2_TR(0x73d2e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d2e5ull));
TAIL_STATIC(0x73b9d0u,73b);
}
B73d2e5:L73d2e5:{c.instructions+=3;NFSU2_TR(0x73d2e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73d2e9:{NFSU2_TR(0x73d2e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d2ea:{NFSU2_TR(0x73d2ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d2efull));
TAIL_STATIC(0x739540u,739);
}
B73d2ef:L73d2ef:{c.instructions+=4;NFSU2_TR(0x73d2ef);
__builtin_memmove((R+8),gp(0x8b5740),4);
}
B73d2f5:{NFSU2_TR(0x73d2f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d2f6:{NFSU2_TR(0x73d2f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d2f7:{NFSU2_TR(0x73d2f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d2fcull));
TAIL_STATIC(0x7393d0u,739);
}
B73d2fc:L73d2fc:{c.instructions+=3;NFSU2_TR(0x73d2fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73d300:{NFSU2_TR(0x73d300);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73d304:{NFSU2_TR(0x73d304);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B73d307:L73d307:{c.instructions+=4;NFSU2_TR(0x73d307);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d30a:{NFSU2_TR(0x73d30a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xe0000ull))));
}
B73d30f:{NFSU2_TR(0x73d30f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73d314:{NFSU2_TR(0x73d314);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73d329;}}
}
B73d316:L73d316:{c.instructions+=5;NFSU2_TR(0x73d316);
w4(R+0,u32(0xb21642c9ull));
}
B73d31b:{NFSU2_TR(0x73d31b);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(m4(0x8b7bc4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B73d321:{NFSU2_TR(0x73d321);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B73d324:{NFSU2_TR(0x73d324);
__builtin_memmove((R+28),(R+8),4);
}
B73d326:{NFSU2_TR(0x73d326);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7full))));
}
B73d329:L73d329:{c.instructions+=3;NFSU2_TR(0x73d329);
__builtin_memmove((R+0),gp(0x8b7bb4),4);
}
B73d32e:{NFSU2_TR(0x73d32e);
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
B73d330:{NFSU2_TR(0x73d330);
if(r1(R+518)){{goto L73d3ae;}}
}
B73d332:L73d332:{c.instructions+=4;NFSU2_TR(0x73d332);
__builtin_memmove((R+4),gp(0x8b7bc0),4);
}
B73d338:{NFSU2_TR(0x73d338);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d339:{NFSU2_TR(0x73d339);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d33a:{NFSU2_TR(0x73d33a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d33cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B73d33c:L73d33c:{c.instructions+=1;NFSU2_TR(0x73d33c);
{goto L73d3ab;}
}
B73d33e:L73d33e:{c.instructions+=2;NFSU2_TR(0x73d33e);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B73d342:{NFSU2_TR(0x73d342);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73d36b;}}
}
B73d344:L73d344:{c.instructions+=4;NFSU2_TR(0x73d344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B73d346:{NFSU2_TR(0x73d346);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B73d349:{NFSU2_TR(0x73d349);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73d34b:{NFSU2_TR(0x73d34b);
if(r1(R+518)){{goto L73d3ae;}}
}
B73d34d:L73d34d:{c.instructions+=3;NFSU2_TR(0x73d34d);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B73d351:{NFSU2_TR(0x73d351);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73d353:{NFSU2_TR(0x73d353);
if(r1(R+518)){{goto L73d3ae;}}
}
B73d355:L73d355:{c.instructions+=8;NFSU2_TR(0x73d355);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d358:{NFSU2_TR(0x73d358);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d35b:{NFSU2_TR(0x73d35b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+24))));
}
B73d35d:{NFSU2_TR(0x73d35d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B73d360:{NFSU2_TR(0x73d360);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B73d362:{NFSU2_TR(0x73d362);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d365:{NFSU2_TR(0x73d365);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73d369:{NFSU2_TR(0x73d369);
{goto L73d3ae;}
}
B73d36b:L73d36b:{c.instructions+=2;NFSU2_TR(0x73d36b);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xfffeull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B73d36f:{NFSU2_TR(0x73d36f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73d386;}}
}
B73d371:L73d371:{c.instructions+=6;NFSU2_TR(0x73d371);
w4(R+0,u32(0xb21642c9ull));
}
B73d376:{NFSU2_TR(0x73d376);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(m4(0x8b7bc4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B73d37c:{NFSU2_TR(0x73d37c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B73d37f:{NFSU2_TR(0x73d37f);
__builtin_memmove((R+28),(R+8),4);
}
B73d381:{NFSU2_TR(0x73d381);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7full))));
}
B73d384:{NFSU2_TR(0x73d384);
{goto L73d3ae;}
}
B73d386:L73d386:{c.instructions+=2;NFSU2_TR(0x73d386);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xfffdull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B73d38a:{NFSU2_TR(0x73d38a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73d3ae;}}
}
B73d38c:L73d38c:{c.instructions+=10;NFSU2_TR(0x73d38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d38f:{NFSU2_TR(0x73d38f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73d392:{NFSU2_TR(0x73d392);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73d395:{NFSU2_TR(0x73d395);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B73d39a:{NFSU2_TR(0x73d39a);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B73d39e:{NFSU2_TR(0x73d39e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B73d3a1:{NFSU2_TR(0x73d3a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d3a4:{NFSU2_TR(0x73d3a4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d3a5:{NFSU2_TR(0x73d3a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d3a6:{NFSU2_TR(0x73d3a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d3abull));
TAIL_STATIC(0x7393d0u,739);
}
B73d3ab:L73d3ab:{c.instructions+=1;NFSU2_TR(0x73d3ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73d3ae:L73d3ae:{c.instructions+=3;NFSU2_TR(0x73d3ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d3af:{NFSU2_TR(0x73d3af);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d3b0:{NFSU2_TR(0x73d3b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d3b5ull));
TAIL_STATIC(0x73ca50u,73c);
}
B73d3b5:L73d3b5:{c.instructions+=4;NFSU2_TR(0x73d3b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d3b9:{NFSU2_TR(0x73d3b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d3ba:{NFSU2_TR(0x73d3ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d3bb:{NFSU2_TR(0x73d3bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d3c0ull));
TAIL_STATIC(0x73cb10u,73c);
}
B73d3c0:L73d3c0:{c.instructions+=12;NFSU2_TR(0x73d3c0);
__builtin_memmove((R+4),gp(0x8b7bb0),4);
}
B73d3c6:{NFSU2_TR(0x73d3c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d3c9:{NFSU2_TR(0x73d3c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73d3cd:{NFSU2_TR(0x73d3cd);
w4(R+20,u32(s32(s16(r2(R+0)))));
}
B73d3d0:{NFSU2_TR(0x73d3d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d3d3:{NFSU2_TR(0x73d3d3);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B73d3d7:{NFSU2_TR(0x73d3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B73d3da:{NFSU2_TR(0x73d3da);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+0),(U+0),2);
}
B73d3dd:{NFSU2_TR(0x73d3dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73d3e0:{NFSU2_TR(0x73d3e0);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B73d3e3:{NFSU2_TR(0x73d3e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d3e7:{NFSU2_TR(0x73d3e7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73d203u);}goto L73d203;}}
}
B73d3ed:L73d3ed:{c.instructions+=4;NFSU2_TR(0x73d3ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d3f1:{NFSU2_TR(0x73d3f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d3f2:{NFSU2_TR(0x73d3f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d3f3:{NFSU2_TR(0x73d3f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d3f8ull));
TAIL_STATIC(0x73cb10u,73c);
}
B73d3f8:L73d3f8:{c.instructions+=8;NFSU2_TR(0x73d3f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73d3fb:{NFSU2_TR(0x73d3fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73d3fc:{NFSU2_TR(0x73d3fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73d3fd:{NFSU2_TR(0x73d3fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73d3fe:{NFSU2_TR(0x73d3fe);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B73d401:{NFSU2_TR(0x73d401);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73d402:{NFSU2_TR(0x73d402);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73d405:{NFSU2_TR(0x73d405);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d410:L73d410:{c.instructions+=16;NFSU2_TR(0x73d410);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d411:{NFSU2_TR(0x73d411);
__builtin_memmove((R+20),(R+16),4);
}
B73d413:{NFSU2_TR(0x73d413);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B73d416:{NFSU2_TR(0x73d416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x11cull))));
}
B73d41c:{NFSU2_TR(0x73d41c);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B73d422:{NFSU2_TR(0x73d422);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d425:{NFSU2_TR(0x73d425);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x91cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d42b:{NFSU2_TR(0x73d42b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d42c:{NFSU2_TR(0x73d42c);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B73d430:{NFSU2_TR(0x73d430);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d431:{NFSU2_TR(0x73d431);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d435:{NFSU2_TR(0x73d435);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B73d439:{NFSU2_TR(0x73d439);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d43a:{NFSU2_TR(0x73d43a);
w4(R+4,u32(0x44ull));
}
B73d43f:{NFSU2_TR(0x73d43f);
__builtin_memmove((R+24),(R+12),4);
}
B73d441:{NFSU2_TR(0x73d441);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B73d445:L73d445:{c.instructions+=1;NFSU2_TR(0x73d445);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L73d447;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73d445u);}goto L73d445;}
}
B73d447:L73d447:{c.instructions+=16;NFSU2_TR(0x73d447);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d44a:{NFSU2_TR(0x73d44a);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B73d44e:{NFSU2_TR(0x73d44e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d451:{NFSU2_TR(0x73d451);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B73d454:{NFSU2_TR(0x73d454);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B73d457:{NFSU2_TR(0x73d457);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73d459:{NFSU2_TR(0x73d459);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73d45b:{NFSU2_TR(0x73d45b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d45e:{NFSU2_TR(0x73d45e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B73d461:{NFSU2_TR(0x73d461);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B73d464:{NFSU2_TR(0x73d464);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B73d467:{NFSU2_TR(0x73d467);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73d469:{NFSU2_TR(0x73d469);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B73d471:{NFSU2_TR(0x73d471);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B73d475:{NFSU2_TR(0x73d475);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d479:{NFSU2_TR(0x73d479);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73d4a7;}}
}
B73d47b:L73d47b:{c.instructions+=2;NFSU2_TR(0x73d47b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B73d47f:{NFSU2_TR(0x73d47f);
if(r1(R+518)){{goto L73d4a7;}}
}
B73d481:L73d481:{c.instructions+=9;NFSU2_TR(0x73d481);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73d484:{NFSU2_TR(0x73d484);
__builtin_memmove((R+28),(R+24),4);
}
B73d486:{NFSU2_TR(0x73d486);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B73d489:{NFSU2_TR(0x73d489);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B73d48c:{NFSU2_TR(0x73d48c);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
}
B73d48f:{NFSU2_TR(0x73d48f);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfull))));
}
B73d492:{NFSU2_TR(0x73d492);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B73d495:{NFSU2_TR(0x73d495);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73d497:{NFSU2_TR(0x73d497);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73d4a7;}}
}
B73d499:L73d499:{c.instructions+=4;NFSU2_TR(0x73d499);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B73d49d:{NFSU2_TR(0x73d49d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d4a1:{NFSU2_TR(0x73d4a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d4a5:{NFSU2_TR(0x73d4a5);
{goto L73d4c7;}
}
B73d4a7:L73d4a7:{c.instructions+=3;NFSU2_TR(0x73d4a7);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B73d4ab:{NFSU2_TR(0x73d4ab);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73d4ad:{NFSU2_TR(0x73d4ad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73d4ec;}}
}
B73d4af:L73d4af:{c.instructions+=4;NFSU2_TR(0x73d4af);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B73d4b3:{NFSU2_TR(0x73d4b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d4b4:{NFSU2_TR(0x73d4b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d4b5:{NFSU2_TR(0x73d4b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d4baull));
TAIL_STATIC(0x73ca50u,73c);
}
B73d4ba:L73d4ba:{c.instructions+=3;NFSU2_TR(0x73d4ba);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B73d4c0:{NFSU2_TR(0x73d4c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73d4c3:{NFSU2_TR(0x73d4c3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d4c7:L73d4c7:{c.instructions+=3;NFSU2_TR(0x73d4c7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d4cb:{NFSU2_TR(0x73d4cb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73d4cd:{NFSU2_TR(0x73d4cd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73d4e8;}}
}
B73d4cf:L73d4cf:{c.instructions+=5;NFSU2_TR(0x73d4cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B73d4d3:{NFSU2_TR(0x73d4d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d4d4:{NFSU2_TR(0x73d4d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d4d5:{NFSU2_TR(0x73d4d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d4d6:{NFSU2_TR(0x73d4d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d4dbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73d1b0u);}goto L73d1b0;}
}
B73d4db:L73d4db:{c.instructions+=3;NFSU2_TR(0x73d4db);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B73d4e1:{NFSU2_TR(0x73d4e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73d4e4:{NFSU2_TR(0x73d4e4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d4e8:L73d4e8:{c.instructions+=1;NFSU2_TR(0x73d4e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d4ec:L73d4ec:{c.instructions+=9;NFSU2_TR(0x73d4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d4ef:{NFSU2_TR(0x73d4ef);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73d4f3:{NFSU2_TR(0x73d4f3);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B73d4f7:{NFSU2_TR(0x73d4f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73d4fa:{NFSU2_TR(0x73d4fa);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B73d4ff:{NFSU2_TR(0x73d4ff);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B73d502:{NFSU2_TR(0x73d502);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B73d506:{NFSU2_TR(0x73d506);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73d508:{NFSU2_TR(0x73d508);
if(r1(R+518)){{goto L73d53e;}}
}
B73d50a:L73d50a:{c.instructions+=2;NFSU2_TR(0x73d50a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73d50c:{NFSU2_TR(0x73d50c);
if(r1(R+518)){{goto L73d53e;}}
}
B73d50e:L73d50e:{c.instructions+=11;NFSU2_TR(0x73d50e);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B73d511:{NFSU2_TR(0x73d511);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d514:{NFSU2_TR(0x73d514);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B73d517:{NFSU2_TR(0x73d517);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B73d519:{NFSU2_TR(0x73d519);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1f0ull))));
}
B73d51f:{NFSU2_TR(0x73d51f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B73d521:{NFSU2_TR(0x73d521);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d525:{NFSU2_TR(0x73d525);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d526:{NFSU2_TR(0x73d526);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
w2(U+4,u16(0xffffull));
s2(u32(r4(U+0)),r2(U+4));
}
B73d52c:{NFSU2_TR(0x73d52c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d52f:{NFSU2_TR(0x73d52f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d534ull));
TAIL_STATIC(0x73cb80u,73c);
}
B73d534:L73d534:{c.instructions+=7;NFSU2_TR(0x73d534);
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
B73d537:{NFSU2_TR(0x73d537);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73d538:{NFSU2_TR(0x73d538);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73d539:{NFSU2_TR(0x73d539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73d53a:{NFSU2_TR(0x73d53a);
__builtin_memmove((R+16),(R+20),4);
}
B73d53c:{NFSU2_TR(0x73d53c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73d53d:{NFSU2_TR(0x73d53d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d53e:L73d53e:{c.instructions+=11;NFSU2_TR(0x73d53e);
u8 U[6];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B73d543:{NFSU2_TR(0x73d543);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B73d546:{NFSU2_TR(0x73d546);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d549:{NFSU2_TR(0x73d549);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B73d54c:{NFSU2_TR(0x73d54c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B73d54e:{NFSU2_TR(0x73d54e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1f0ull))));
}
B73d554:{NFSU2_TR(0x73d554);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B73d556:{NFSU2_TR(0x73d556);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d557:{NFSU2_TR(0x73d557);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73d55b:{NFSU2_TR(0x73d55b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d55e:{NFSU2_TR(0x73d55e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d563ull));
TAIL_STATIC(0x73ccc0u,73c);
}
B73d563:L73d563:{c.instructions+=3;NFSU2_TR(0x73d563);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73d566:{NFSU2_TR(0x73d566);
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
B73d568:{NFSU2_TR(0x73d568);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73d58d;}}
}
B73d56a:L73d56a:{c.instructions+=2;NFSU2_TR(0x73d56a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xffffd8f1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffd8f1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xffffd8f1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73d56f:{NFSU2_TR(0x73d56f);
if(r1(R+518)){{goto L73d58d;}}
}
B73d571:L73d571:{c.instructions+=6;NFSU2_TR(0x73d571);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d575:{NFSU2_TR(0x73d575);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73d57a:{NFSU2_TR(0x73d57a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x91cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d580:{NFSU2_TR(0x73d580);
w4(R+4,u32(0x44ull));
}
B73d585:{NFSU2_TR(0x73d585);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B73d589:{NFSU2_TR(0x73d589);
__builtin_memmove((R+28),(R+12),4);
}
B73d58b:L73d58b:{c.instructions+=1;NFSU2_TR(0x73d58b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L73d58d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73d58bu);}goto L73d58b;}
}
B73d58d:L73d58d:{c.instructions+=6;NFSU2_TR(0x73d58d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73d58e:{NFSU2_TR(0x73d58e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73d58f:{NFSU2_TR(0x73d58f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73d590:{NFSU2_TR(0x73d590);
__builtin_memmove((R+16),(R+20),4);
}
B73d592:{NFSU2_TR(0x73d592);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73d593:{NFSU2_TR(0x73d593);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d5a0:L73d5a0:{c.instructions+=5;NFSU2_TR(0x73d5a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d5a1:{NFSU2_TR(0x73d5a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d5a4:{NFSU2_TR(0x73d5a4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73d5a7:{NFSU2_TR(0x73d5a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d5a8:{NFSU2_TR(0x73d5a8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73d5b3;}}
}
B73d5aa:L73d5aa:{c.instructions+=3;NFSU2_TR(0x73d5aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73d5ac:{NFSU2_TR(0x73d5ac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73d5af:{NFSU2_TR(0x73d5af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73d5ce;}}
}
B73d5b1:L73d5b1:{c.instructions+=1;NFSU2_TR(0x73d5b1);
{goto L73d5c9;}
}
B73d5b3:L73d5b3:{c.instructions+=7;NFSU2_TR(0x73d5b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d5b6:{NFSU2_TR(0x73d5b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B73d5b8:{NFSU2_TR(0x73d5b8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B73d5bb:{NFSU2_TR(0x73d5bb);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B73d5bc:{NFSU2_TR(0x73d5bc);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x73d5bc);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x73d5bc);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B73d5be:{NFSU2_TR(0x73d5be);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73d5c0:{NFSU2_TR(0x73d5c0);
if(r1(R+518)){{goto L73d5c9;}}
}
B73d5c2:L73d5c2:{c.instructions+=4;NFSU2_TR(0x73d5c2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B73d5c4:{NFSU2_TR(0x73d5c4);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B73d5c5:{NFSU2_TR(0x73d5c5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B73d5c7:{NFSU2_TR(0x73d5c7);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B73d5c9:L73d5c9:{c.instructions+=2;NFSU2_TR(0x73d5c9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73d5cc:{NFSU2_TR(0x73d5cc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73d5d3;}}
}
B73d5ce:L73d5ce:{c.instructions+=1;NFSU2_TR(0x73d5ce);
w4(R+0,u32(0x2ull));
}
B73d5d3:L73d5d3:{c.instructions+=4;NFSU2_TR(0x73d5d3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B73d5d6:{NFSU2_TR(0x73d5d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B73d5dd:{NFSU2_TR(0x73d5dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d5de:{NFSU2_TR(0x73d5de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d5e3ull));
TAIL_STATIC(0x5836d0u,583);
}
B73d5e3:L73d5e3:{c.instructions+=5;NFSU2_TR(0x73d5e3);
__builtin_memmove((R+8),(R+0),4);
}
B73d5e5:{NFSU2_TR(0x73d5e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73d5e8:{NFSU2_TR(0x73d5e8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73d5ea:{NFSU2_TR(0x73d5ea);
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
B73d5ec:{NFSU2_TR(0x73d5ec);
if(r1(R+518)){{goto L73d690;}}
}
B73d5f2:L73d5f2:{c.instructions+=6;NFSU2_TR(0x73d5f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d5f3:{NFSU2_TR(0x73d5f3);
__builtin_memmove((R+4),(R+24),4);
}
B73d5f5:{NFSU2_TR(0x73d5f5);
__builtin_memmove((R+20),(R+4),4);
}
B73d5f7:{NFSU2_TR(0x73d5f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73d5fa:{NFSU2_TR(0x73d5fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d5fb:{NFSU2_TR(0x73d5fb);
__builtin_memmove((R+28),(R+8),4);
}
B73d5fd:L73d5fd:{c.instructions+=1;NFSU2_TR(0x73d5fd);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L73d5ff;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73d5fdu);}goto L73d5fd;}
}
B73d5ff:L73d5ff:{c.instructions+=2;NFSU2_TR(0x73d5ff);
__builtin_memmove((R+4),(R+20),4);
}
B73d601:{NFSU2_TR(0x73d601);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B73d604:L73d604:{c.instructions+=1;NFSU2_TR(0x73d604);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L73d606;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73d604u);}goto L73d604;}
}
B73d606:L73d606:{c.instructions+=8;NFSU2_TR(0x73d606);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d609:{NFSU2_TR(0x73d609);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B73d60b:{NFSU2_TR(0x73d60b);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0xffffffffull));
s4(u32(r4(U+8)),r4(U+12));
}
B73d613:{NFSU2_TR(0x73d613);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B73d616:{NFSU2_TR(0x73d616);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d619:{NFSU2_TR(0x73d619);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B73d61c:{NFSU2_TR(0x73d61c);
w4(R+20,u32(0x1ull));
}
B73d621:{NFSU2_TR(0x73d621);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73d639;}}
}
B73d623:L73d623:{c.instructions+=1;NFSU2_TR(0x73d623);
__builtin_memmove((R+4),(R+0),4);
}
B73d625:L73d625:{c.instructions+=9;NFSU2_TR(0x73d625);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d628:{NFSU2_TR(0x73d628);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B73d62a:{NFSU2_TR(0x73d62a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B73d62d:{NFSU2_TR(0x73d62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d630:{NFSU2_TR(0x73d630);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73d632:{NFSU2_TR(0x73d632);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B73d633:{NFSU2_TR(0x73d633);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73d635:{NFSU2_TR(0x73d635);
__builtin_memmove((R+4),(R+0),4);
}
B73d637:{NFSU2_TR(0x73d637);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73d625u);}goto L73d625;}}
}
B73d639:L73d639:{c.instructions+=10;NFSU2_TR(0x73d639);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73d63c:{NFSU2_TR(0x73d63c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d63f:{NFSU2_TR(0x73d63f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B73d642:{NFSU2_TR(0x73d642);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B73d644:{NFSU2_TR(0x73d644);
__builtin_memmove((R+0),(R+24),4);
}
B73d646:{NFSU2_TR(0x73d646);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B73d648:{NFSU2_TR(0x73d648);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B73d64b:{NFSU2_TR(0x73d64b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d64c:{NFSU2_TR(0x73d64c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d64f:{NFSU2_TR(0x73d64f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d654ull));
TAIL_STATIC(0x5836d0u,583);
}
B73d654:L73d654:{c.instructions+=5;NFSU2_TR(0x73d654);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73d657:{NFSU2_TR(0x73d657);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73d65a:{NFSU2_TR(0x73d65a);
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
B73d65c:{NFSU2_TR(0x73d65c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d660:{NFSU2_TR(0x73d660);
if(r1(R+518)){{goto L73d688;}}
}
B73d662:L73d662:{c.instructions+=5;NFSU2_TR(0x73d662);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d665:{NFSU2_TR(0x73d665);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B73d668:{NFSU2_TR(0x73d668);
__builtin_memmove((R+8),(R+4),4);
}
B73d66a:{NFSU2_TR(0x73d66a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73d66d:{NFSU2_TR(0x73d66d);
__builtin_memmove((R+28),(R+0),4);
}
B73d66f:L73d66f:{c.instructions+=1;NFSU2_TR(0x73d66f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L73d671;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73d66fu);}goto L73d66f;}
}
B73d671:L73d671:{c.instructions+=2;NFSU2_TR(0x73d671);
__builtin_memmove((R+4),(R+8),4);
}
B73d673:{NFSU2_TR(0x73d673);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B73d676:L73d676:{c.instructions+=1;NFSU2_TR(0x73d676);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L73d678;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73d676u);}goto L73d676;}
}
B73d678:L73d678:{c.instructions+=3;NFSU2_TR(0x73d678);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d67b:{NFSU2_TR(0x73d67b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d67c:{NFSU2_TR(0x73d67c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d681ull));
TAIL_STATIC(0x598ec0u,598);
}
B73d681:L73d681:{c.instructions+=2;NFSU2_TR(0x73d681);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d685:{NFSU2_TR(0x73d685);
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
B73d688:L73d688:{c.instructions+=4;NFSU2_TR(0x73d688);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d68b:{NFSU2_TR(0x73d68b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73d68c:{NFSU2_TR(0x73d68c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B73d68f:{NFSU2_TR(0x73d68f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73d690:L73d690:{c.instructions+=3;NFSU2_TR(0x73d690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73d691:{NFSU2_TR(0x73d691);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73d692:{NFSU2_TR(0x73d692);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d6a0:L73d6a0:{c.instructions+=14;NFSU2_TR(0x73d6a0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d6a4:{NFSU2_TR(0x73d6a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73d6a6:{NFSU2_TR(0x73d6a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73d6a8:{NFSU2_TR(0x73d6a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d6ac:{NFSU2_TR(0x73d6ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73d6ae:{NFSU2_TR(0x73d6ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73d6b0:{NFSU2_TR(0x73d6b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d6b1:{NFSU2_TR(0x73d6b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d6b2:{NFSU2_TR(0x73d6b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d6b6:{NFSU2_TR(0x73d6b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d6b9:{NFSU2_TR(0x73d6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d6bc:{NFSU2_TR(0x73d6bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d6bd:{NFSU2_TR(0x73d6bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d6be:{NFSU2_TR(0x73d6be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d6c1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73d6c1:L73d6c1:{c.instructions+=2;NFSU2_TR(0x73d6c1);
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
B73d6c4:{NFSU2_TR(0x73d6c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d6d0:L73d6d0:{c.instructions+=4;NFSU2_TR(0x73d6d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d6d1:{NFSU2_TR(0x73d6d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d6d2:{NFSU2_TR(0x73d6d2);
u8 U[4];
w4(U+0,u32(0x44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d6d4:{NFSU2_TR(0x73d6d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d6d9ull));
TAIL_STATIC(0x5836d0u,583);
}
B73d6d9:L73d6d9:{c.instructions+=4;NFSU2_TR(0x73d6d9);
__builtin_memmove((R+12),(R+0),4);
}
B73d6db:{NFSU2_TR(0x73d6db);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73d6dd:{NFSU2_TR(0x73d6dd);
w4(R+4,u32(0x11ull));
}
B73d6e2:{NFSU2_TR(0x73d6e2);
__builtin_memmove((R+28),(R+12),4);
}
B73d6e4:L73d6e4:{c.instructions+=1;NFSU2_TR(0x73d6e4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L73d6e6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73d6e4u);}goto L73d6e4;}
}
B73d6e6:L73d6e6:{c.instructions+=4;NFSU2_TR(0x73d6e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d6ea:{NFSU2_TR(0x73d6ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73d6ed:{NFSU2_TR(0x73d6ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B73d6ef:{NFSU2_TR(0x73d6ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d6f4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73d5a0u);}goto L73d5a0;}
}
B73d6f4:L73d6f4:{c.instructions+=8;NFSU2_TR(0x73d6f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d6f8:{NFSU2_TR(0x73d6f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d6fc:{NFSU2_TR(0x73d6fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73d6fd:{NFSU2_TR(0x73d6fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B73d6ff:{NFSU2_TR(0x73d6ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d702:{NFSU2_TR(0x73d702);
__builtin_memmove((R+0),(R+12),4);
}
B73d704:{NFSU2_TR(0x73d704);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73d705:{NFSU2_TR(0x73d705);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d710:L73d710:{c.instructions+=5;NFSU2_TR(0x73d710);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d711:{NFSU2_TR(0x73d711);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73d715:{NFSU2_TR(0x73d715);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d718:{NFSU2_TR(0x73d718);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73d71a:{NFSU2_TR(0x73d71a);
if(r1(R+518)){{goto L73d738;}}
}
B73d71c:L73d71c:{c.instructions+=1;NFSU2_TR(0x73d71c);
__builtin_memmove((R+16),(R+16),4);
}
B73d720:L73d720:{c.instructions+=5;NFSU2_TR(0x73d720);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d723:{NFSU2_TR(0x73d723);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73d725:{NFSU2_TR(0x73d725);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d726:{NFSU2_TR(0x73d726);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d729:{NFSU2_TR(0x73d729);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d72eull));
TAIL_STATIC(0x598ec0u,598);
}
B73d72e:L73d72e:{c.instructions+=4;NFSU2_TR(0x73d72e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d731:{NFSU2_TR(0x73d731);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73d734:{NFSU2_TR(0x73d734);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73d736:{NFSU2_TR(0x73d736);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73d720u);}goto L73d720;}}
}
B73d738:L73d738:{c.instructions+=3;NFSU2_TR(0x73d738);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d73b:{NFSU2_TR(0x73d73b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d73c:{NFSU2_TR(0x73d73c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d741ull));
TAIL_STATIC(0x598ec0u,598);
}
B73d741:L73d741:{c.instructions+=2;NFSU2_TR(0x73d741);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d742:{NFSU2_TR(0x73d742);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d747ull));
TAIL_STATIC(0x598ec0u,598);
}
B73d747:L73d747:{c.instructions+=3;NFSU2_TR(0x73d747);
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
B73d74a:{NFSU2_TR(0x73d74a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73d74b:{NFSU2_TR(0x73d74b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d750:L73d750:{c.instructions+=5;NFSU2_TR(0x73d750);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d751:{NFSU2_TR(0x73d751);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73d755:{NFSU2_TR(0x73d755);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d758:{NFSU2_TR(0x73d758);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73d75a:{NFSU2_TR(0x73d75a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73d76a;}}
}
B73d75c:L73d75c:{c.instructions+=1;NFSU2_TR(0x73d75c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d761ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73d5a0u);}goto L73d5a0;}
}
B73d761:L73d761:{c.instructions+=2;NFSU2_TR(0x73d761);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73d764:{NFSU2_TR(0x73d764);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73d76a;}}
}
B73d766:L73d766:{c.instructions+=3;NFSU2_TR(0x73d766);
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
B73d768:{NFSU2_TR(0x73d768);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73d769:{NFSU2_TR(0x73d769);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d76a:L73d76a:{c.instructions+=18;NFSU2_TR(0x73d76a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d76e:{NFSU2_TR(0x73d76e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d76f:{NFSU2_TR(0x73d76f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73d772:{NFSU2_TR(0x73d772);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73d774:{NFSU2_TR(0x73d774);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d777:{NFSU2_TR(0x73d777);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B73d779:{NFSU2_TR(0x73d779);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d77c:{NFSU2_TR(0x73d77c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d77f:{NFSU2_TR(0x73d77f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B73d782:{NFSU2_TR(0x73d782);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d785:{NFSU2_TR(0x73d785);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d788:{NFSU2_TR(0x73d788);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73d789:{NFSU2_TR(0x73d789);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d78c:{NFSU2_TR(0x73d78c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d78f:{NFSU2_TR(0x73d78f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B73d790:{NFSU2_TR(0x73d790);
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
B73d792:{NFSU2_TR(0x73d792);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d795:{NFSU2_TR(0x73d795);
if(r1(R+518)){{goto L73d7ab;}}
}
B73d797:L73d797:{c.instructions+=7;NFSU2_TR(0x73d797);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73d799:{NFSU2_TR(0x73d799);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d79c:{NFSU2_TR(0x73d79c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d79d:{NFSU2_TR(0x73d79d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d7a0:{NFSU2_TR(0x73d7a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d7a1:{NFSU2_TR(0x73d7a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d7a2:{NFSU2_TR(0x73d7a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d7a4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B73d7a4:L73d7a4:{c.instructions+=3;NFSU2_TR(0x73d7a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73d7a7:{NFSU2_TR(0x73d7a7);
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
B73d7a9:{NFSU2_TR(0x73d7a9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73d7ae;}}
}
B73d7ab:L73d7ab:{c.instructions+=1;NFSU2_TR(0x73d7ab);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B73d7ae:L73d7ae:{c.instructions+=4;NFSU2_TR(0x73d7ae);
__builtin_memmove((R+0),(R+24),4);
}
B73d7b0:{NFSU2_TR(0x73d7b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73d7b1:{NFSU2_TR(0x73d7b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73d7b2:{NFSU2_TR(0x73d7b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d7c0:L73d7c0:{c.instructions+=9;NFSU2_TR(0x73d7c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d7c1:{NFSU2_TR(0x73d7c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73d7c5:{NFSU2_TR(0x73d7c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d7c6:{NFSU2_TR(0x73d7c6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73d7ca:{NFSU2_TR(0x73d7ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d7cd:{NFSU2_TR(0x73d7cd);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73d7cf:{NFSU2_TR(0x73d7cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d7d0:{NFSU2_TR(0x73d7d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73d7d4:{NFSU2_TR(0x73d7d4);
if(r1(R+518)){{goto L73d801;}}
}
B73d7d6:L73d7d6:{c.instructions+=3;NFSU2_TR(0x73d7d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73d7d8:{NFSU2_TR(0x73d7d8);
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
B73d7da:{NFSU2_TR(0x73d7da);
if(r1(R+518)){{goto L73d801;}}
}
B73d7dc:L73d7dc:{c.instructions+=6;NFSU2_TR(0x73d7dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d7df:{NFSU2_TR(0x73d7df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d7e0:{NFSU2_TR(0x73d7e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d7e3:{NFSU2_TR(0x73d7e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d7e4:{NFSU2_TR(0x73d7e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d7e5:{NFSU2_TR(0x73d7e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d7e7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B73d7e7:L73d7e7:{c.instructions+=3;NFSU2_TR(0x73d7e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73d7ea:{NFSU2_TR(0x73d7ea);
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
B73d7ec:{NFSU2_TR(0x73d7ec);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73d801;}}
}
B73d7ee:L73d7ee:{c.instructions+=6;NFSU2_TR(0x73d7ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d7f1:{NFSU2_TR(0x73d7f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d7f4:{NFSU2_TR(0x73d7f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d7f5:{NFSU2_TR(0x73d7f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d7f6:{NFSU2_TR(0x73d7f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d7f7:{NFSU2_TR(0x73d7f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d7faull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73d7fa:L73d7fa:{c.instructions+=3;NFSU2_TR(0x73d7fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73d7fd:{NFSU2_TR(0x73d7fd);
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
B73d7ff:{NFSU2_TR(0x73d7ff);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73d804;}}
}
B73d801:L73d801:{c.instructions+=1;NFSU2_TR(0x73d801);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B73d804:L73d804:{c.instructions+=5;NFSU2_TR(0x73d804);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B73d806:{NFSU2_TR(0x73d806);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73d807:{NFSU2_TR(0x73d807);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73d808:{NFSU2_TR(0x73d808);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73d809:{NFSU2_TR(0x73d809);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d810:L73d810:{c.instructions+=3;NFSU2_TR(0x73d810);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d814:{NFSU2_TR(0x73d814);
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
B73d816:{NFSU2_TR(0x73d816);
if(r1(R+518)){{goto L73d81b;}}
}
B73d818:L73d818:{c.instructions+=2;NFSU2_TR(0x73d818);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73d81a:{NFSU2_TR(0x73d81a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d81b:L73d81b:{c.instructions+=2;NFSU2_TR(0x73d81b);
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
B73d81d:{NFSU2_TR(0x73d81d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d820:L73d820:{c.instructions+=6;NFSU2_TR(0x73d820);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d824:{NFSU2_TR(0x73d824);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d828:{NFSU2_TR(0x73d828);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d829:{NFSU2_TR(0x73d829);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73d82c:{NFSU2_TR(0x73d82c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73d82e:{NFSU2_TR(0x73d82e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73d834;}}
}
B73d830:L73d830:{c.instructions+=3;NFSU2_TR(0x73d830);
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
B73d832:{NFSU2_TR(0x73d832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73d833:{NFSU2_TR(0x73d833);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d834:L73d834:{c.instructions+=5;NFSU2_TR(0x73d834);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d837:{NFSU2_TR(0x73d837);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d838:{NFSU2_TR(0x73d838);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B73d83b:{NFSU2_TR(0x73d83b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73d83d:{NFSU2_TR(0x73d83d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73d844;}}
}
B73d83f:L73d83f:{c.instructions+=4;NFSU2_TR(0x73d83f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73d840:{NFSU2_TR(0x73d840);
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
B73d842:{NFSU2_TR(0x73d842);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73d843:{NFSU2_TR(0x73d843);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d844:L73d844:{c.instructions+=3;NFSU2_TR(0x73d844);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d847:{NFSU2_TR(0x73d847);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73d849:{NFSU2_TR(0x73d849);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73d858;}}
}
B73d84b:L73d84b:{c.instructions+=7;NFSU2_TR(0x73d84b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d84c:{NFSU2_TR(0x73d84c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73d84f:{NFSU2_TR(0x73d84f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B73d850:{NFSU2_TR(0x73d850);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B73d851:{NFSU2_TR(0x73d851);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d854:{NFSU2_TR(0x73d854);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d857:{NFSU2_TR(0x73d857);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73d858:L73d858:{c.instructions+=4;NFSU2_TR(0x73d858);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B73d85b:{NFSU2_TR(0x73d85b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73d85d:{NFSU2_TR(0x73d85d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d860:{NFSU2_TR(0x73d860);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73d876;}}
}
B73d862:L73d862:{c.instructions+=8;NFSU2_TR(0x73d862);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d865:{NFSU2_TR(0x73d865);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B73d869:{NFSU2_TR(0x73d869);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B73d86c:{NFSU2_TR(0x73d86c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B73d86e:{NFSU2_TR(0x73d86e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d871:{NFSU2_TR(0x73d871);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73d872:{NFSU2_TR(0x73d872);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73d874:{NFSU2_TR(0x73d874);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73d862u);}goto L73d862;}}
}
B73d876:L73d876:{c.instructions+=10;NFSU2_TR(0x73d876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73d878:{NFSU2_TR(0x73d878);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d87b:{NFSU2_TR(0x73d87b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B73d87d:{NFSU2_TR(0x73d87d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d880:{NFSU2_TR(0x73d880);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d883:{NFSU2_TR(0x73d883);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73d884:{NFSU2_TR(0x73d884);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73d885:{NFSU2_TR(0x73d885);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d888:{NFSU2_TR(0x73d888);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73d889:{NFSU2_TR(0x73d889);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d890:L73d890:{c.instructions+=6;NFSU2_TR(0x73d890);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d891:{NFSU2_TR(0x73d891);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73d895:{NFSU2_TR(0x73d895);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d898:{NFSU2_TR(0x73d898);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73d89a:{NFSU2_TR(0x73d89a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73d89c:{NFSU2_TR(0x73d89c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73d8b3;}}
}
B73d89e:L73d89e:{c.instructions+=3;NFSU2_TR(0x73d89e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d8a1:{NFSU2_TR(0x73d8a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d8a2:{NFSU2_TR(0x73d8a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73d8a6:L73d8a6:{c.instructions+=2;NFSU2_TR(0x73d8a6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B73d8a8:{NFSU2_TR(0x73d8a8);
if(r1(R+518)){{goto L73d8b2;}}
}
B73d8aa:L73d8aa:{c.instructions+=4;NFSU2_TR(0x73d8aa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73d8ab:{NFSU2_TR(0x73d8ab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B73d8ae:{NFSU2_TR(0x73d8ae);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73d8b0:{NFSU2_TR(0x73d8b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73d8a6u);}goto L73d8a6;}}
}
B73d8b2:L73d8b2:{c.instructions+=1;NFSU2_TR(0x73d8b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73d8b3:L73d8b3:{c.instructions+=3;NFSU2_TR(0x73d8b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d8b4:{NFSU2_TR(0x73d8b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d8b5:{NFSU2_TR(0x73d8b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d8baull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73d820u);}goto L73d820;}
}
B73d8ba:L73d8ba:{c.instructions+=3;NFSU2_TR(0x73d8ba);
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
B73d8bd:{NFSU2_TR(0x73d8bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73d8be:{NFSU2_TR(0x73d8be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d8c0:L73d8c0:{c.instructions+=3;NFSU2_TR(0x73d8c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d8c4:{NFSU2_TR(0x73d8c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d8c7:{NFSU2_TR(0x73d8c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d8d0:L73d8d0:{c.instructions+=3;NFSU2_TR(0x73d8d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d8d4:{NFSU2_TR(0x73d8d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d8d7:{NFSU2_TR(0x73d8d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d8e0:L73d8e0:{c.instructions+=3;NFSU2_TR(0x73d8e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d8e4:{NFSU2_TR(0x73d8e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73d8e6:{NFSU2_TR(0x73d8e6);
if(r1(R+518)){{goto L73d8fe;}}
}
B73d8e8:L73d8e8:{c.instructions+=3;NFSU2_TR(0x73d8e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d8ec:{NFSU2_TR(0x73d8ec);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73d8ee:{NFSU2_TR(0x73d8ee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73d8fe;}}
}
B73d8f0:L73d8f0:{c.instructions+=2;NFSU2_TR(0x73d8f0);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
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
B73d8f3:{NFSU2_TR(0x73d8f3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73d8fe;}}
}
B73d8f5:L73d8f5:{c.instructions+=4;NFSU2_TR(0x73d8f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d8f8:{NFSU2_TR(0x73d8f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B73d8fb:{NFSU2_TR(0x73d8fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73d8fd:{NFSU2_TR(0x73d8fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d8fe:L73d8fe:{c.instructions+=2;NFSU2_TR(0x73d8fe);
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
B73d900:{NFSU2_TR(0x73d900);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d910:L73d910:{c.instructions+=4;NFSU2_TR(0x73d910);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d914:{NFSU2_TR(0x73d914);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d917:{NFSU2_TR(0x73d917);
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
B73d919:{NFSU2_TR(0x73d919);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73d922;}}
}
B73d91b:L73d91b:{c.instructions+=1;NFSU2_TR(0x73d91b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73d922:L73d922:{c.instructions+=7;NFSU2_TR(0x73d922);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d926:{NFSU2_TR(0x73d926);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d92a:{NFSU2_TR(0x73d92a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d92d:{NFSU2_TR(0x73d92d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d931:{NFSU2_TR(0x73d931);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d934:{NFSU2_TR(0x73d934);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d937:{NFSU2_TR(0x73d937);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d940:L73d940:{c.instructions+=4;NFSU2_TR(0x73d940);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d944:{NFSU2_TR(0x73d944);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d947:{NFSU2_TR(0x73d947);
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
B73d949:{NFSU2_TR(0x73d949);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73d952;}}
}
B73d94b:L73d94b:{c.instructions+=1;NFSU2_TR(0x73d94b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73d952:L73d952:{c.instructions+=7;NFSU2_TR(0x73d952);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d956:{NFSU2_TR(0x73d956);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d95a:{NFSU2_TR(0x73d95a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d95d:{NFSU2_TR(0x73d95d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d961:{NFSU2_TR(0x73d961);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d964:{NFSU2_TR(0x73d964);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d967:{NFSU2_TR(0x73d967);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d970:L73d970:{c.instructions+=4;NFSU2_TR(0x73d970);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d974:{NFSU2_TR(0x73d974);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73d976:{NFSU2_TR(0x73d976);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d97a:{NFSU2_TR(0x73d97a);
if(r1(R+518)){{goto L73d97f;}}
}
B73d97c:L73d97c:{c.instructions+=1;NFSU2_TR(0x73d97c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B73d97f:L73d97f:{c.instructions+=6;NFSU2_TR(0x73d97f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d982:{NFSU2_TR(0x73d982);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73d984:{NFSU2_TR(0x73d984);
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
B73d986:{NFSU2_TR(0x73d986);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+4),(U+2),1);
}
B73d989:{NFSU2_TR(0x73d989);
__builtin_memmove((R+0),(R+4),4);
}
B73d98b:{NFSU2_TR(0x73d98b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d990:L73d990:{c.instructions+=4;NFSU2_TR(0x73d990);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d994:{NFSU2_TR(0x73d994);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73d996:{NFSU2_TR(0x73d996);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d99a:{NFSU2_TR(0x73d99a);
if(r1(R+518)){{goto L73d99f;}}
}
B73d99c:L73d99c:{c.instructions+=1;NFSU2_TR(0x73d99c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B73d99f:L73d99f:{c.instructions+=6;NFSU2_TR(0x73d99f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d9a2:{NFSU2_TR(0x73d9a2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73d9a4:{NFSU2_TR(0x73d9a4);
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
B73d9a6:{NFSU2_TR(0x73d9a6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+4),(U+2),1);
}
B73d9a9:{NFSU2_TR(0x73d9a9);
__builtin_memmove((R+0),(R+4),4);
}
B73d9ab:{NFSU2_TR(0x73d9ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d9b0:L73d9b0:{c.instructions+=6;NFSU2_TR(0x73d9b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d9b1:{NFSU2_TR(0x73d9b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73d9b5:{NFSU2_TR(0x73d9b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d9b8:{NFSU2_TR(0x73d9b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d9bb:{NFSU2_TR(0x73d9bb);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B73d9bd:{NFSU2_TR(0x73d9bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73d9c3;}}
}
B73d9bf:L73d9bf:{c.instructions+=3;NFSU2_TR(0x73d9bf);
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
B73d9c1:{NFSU2_TR(0x73d9c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73d9c2:{NFSU2_TR(0x73d9c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d9c3:L73d9c3:{c.instructions+=2;NFSU2_TR(0x73d9c3);
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
B73d9c5:{NFSU2_TR(0x73d9c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73d9d1;}}
}
B73d9c7:L73d9c7:{c.instructions+=4;NFSU2_TR(0x73d9c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73d9ca:{NFSU2_TR(0x73d9ca);
w4(R+0,u32(0x1ull));
}
B73d9cf:{NFSU2_TR(0x73d9cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73d9d0:{NFSU2_TR(0x73d9d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73d9d1:L73d9d1:{c.instructions+=9;NFSU2_TR(0x73d9d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d9d4:{NFSU2_TR(0x73d9d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d9d5:{NFSU2_TR(0x73d9d5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d9d6:{NFSU2_TR(0x73d9d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d9d7:{NFSU2_TR(0x73d9d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73d9da:{NFSU2_TR(0x73d9da);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B73d9dd:{NFSU2_TR(0x73d9dd);
__builtin_memmove((R+12),(R+28),4);
}
B73d9df:{NFSU2_TR(0x73d9df);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73d9e1:{NFSU2_TR(0x73d9e1);
if(r1(R+518)){{goto L73da21;}}
}
B73d9e3:L73d9e3:{c.instructions+=3;NFSU2_TR(0x73d9e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73d9e6:{NFSU2_TR(0x73d9e6);
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
B73d9e8:{NFSU2_TR(0x73d9e8);
if(r1(R+518)){{goto L73da0a;}}
}
B73d9ea:L73d9ea:{c.instructions+=8;NFSU2_TR(0x73d9ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73d9ec:{NFSU2_TR(0x73d9ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73d9ee:{NFSU2_TR(0x73d9ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73d9f1:{NFSU2_TR(0x73d9f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d9f2:{NFSU2_TR(0x73d9f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73d9f5:{NFSU2_TR(0x73d9f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d9f6:{NFSU2_TR(0x73d9f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73d9f7:{NFSU2_TR(0x73d9f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73d9f9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B73d9f9:L73d9f9:{c.instructions+=3;NFSU2_TR(0x73d9f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73d9fc:{NFSU2_TR(0x73d9fc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73d9fe:{NFSU2_TR(0x73d9fe);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73da0a;}}
}
B73da00:L73da00:{c.instructions+=4;NFSU2_TR(0x73da00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B73da02:{NFSU2_TR(0x73da02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B73da05:{NFSU2_TR(0x73da05);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B73da08:{NFSU2_TR(0x73da08);
{goto L73da11;}
}
B73da0a:L73da0a:{c.instructions+=3;NFSU2_TR(0x73da0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73da0c:{NFSU2_TR(0x73da0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B73da0e:{NFSU2_TR(0x73da0e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B73da11:L73da11:{c.instructions+=6;NFSU2_TR(0x73da11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73da14:{NFSU2_TR(0x73da14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73da17:{NFSU2_TR(0x73da17);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B73da1a:{NFSU2_TR(0x73da1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B73da1d:{NFSU2_TR(0x73da1d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73da1f:{NFSU2_TR(0x73da1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73d9e3u);}goto L73d9e3;}}
}
B73da21:L73da21:{c.instructions+=9;NFSU2_TR(0x73da21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73da24:{NFSU2_TR(0x73da24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73da27:{NFSU2_TR(0x73da27);
__builtin_memmove((R+8),(R+28),4);
}
B73da29:{NFSU2_TR(0x73da29);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B73da2b:{NFSU2_TR(0x73da2b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B73da2e:{NFSU2_TR(0x73da2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73da31:{NFSU2_TR(0x73da31);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73da33:{NFSU2_TR(0x73da33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73da36:{NFSU2_TR(0x73da36);
if(r1(R+518)){{goto L73da46;}}
}
B73da38:L73da38:{c.instructions+=6;NFSU2_TR(0x73da38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73da3a:{NFSU2_TR(0x73da3a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B73da3c:{NFSU2_TR(0x73da3c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B73da3f:{NFSU2_TR(0x73da3f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B73da42:{NFSU2_TR(0x73da42);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73da44:{NFSU2_TR(0x73da44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73da38u);}goto L73da38;}}
}
B73da46:L73da46:{c.instructions+=10;NFSU2_TR(0x73da46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73da49:{NFSU2_TR(0x73da49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73da4c:{NFSU2_TR(0x73da4c);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B73da4e:{NFSU2_TR(0x73da4e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B73da51:{NFSU2_TR(0x73da51);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73da53:{NFSU2_TR(0x73da53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73da56:{NFSU2_TR(0x73da56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73da57:{NFSU2_TR(0x73da57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73da58:{NFSU2_TR(0x73da58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73da59:{NFSU2_TR(0x73da59);
if(r1(R+518)){{goto L73da70;}}
}
B73da5b:L73da5b:{c.instructions+=7;NFSU2_TR(0x73da5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73da5e:{NFSU2_TR(0x73da5e);
u8 U[4];
w4(U+0,u32(0x73d6a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73da63:{NFSU2_TR(0x73da63);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73da65:{NFSU2_TR(0x73da65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73da66:{NFSU2_TR(0x73da66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73da67:{NFSU2_TR(0x73da67);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73da68:{NFSU2_TR(0x73da68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73da6dull));
TAIL_STATIC(0x74b330u,74b);
}
B73da6d:L73da6d:{c.instructions+=1;NFSU2_TR(0x73da6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B73da70:L73da70:{c.instructions+=6;NFSU2_TR(0x73da70);
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
B73da72:{NFSU2_TR(0x73da72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73da75:{NFSU2_TR(0x73da75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73da78:{NFSU2_TR(0x73da78);
w4(R+0,u32(0x2ull));
}
B73da7d:{NFSU2_TR(0x73da7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73da7e:{NFSU2_TR(0x73da7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73da80:L73da80:{c.instructions+=4;NFSU2_TR(0x73da80);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73da84:{NFSU2_TR(0x73da84);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73da88:{NFSU2_TR(0x73da88);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73da8b:{NFSU2_TR(0x73da8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73da90:L73da90:{c.instructions+=3;NFSU2_TR(0x73da90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73da94:{NFSU2_TR(0x73da94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73da97:{NFSU2_TR(0x73da97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73daa0:L73daa0:{c.instructions+=13;NFSU2_TR(0x73daa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B73daa3:{NFSU2_TR(0x73daa3);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B73daa8:{NFSU2_TR(0x73daa8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73daa9:{NFSU2_TR(0x73daa9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73daaa:{NFSU2_TR(0x73daaa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73daab:{NFSU2_TR(0x73daab);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dab0:{NFSU2_TR(0x73dab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73dab4:{NFSU2_TR(0x73dab4);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dab6:{NFSU2_TR(0x73dab6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73daba:{NFSU2_TR(0x73daba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dabb:{NFSU2_TR(0x73dabb);
u8 U[4];
w4(U+0,u32(0x7d2038ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dac0:{NFSU2_TR(0x73dac0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dac1:{NFSU2_TR(0x73dac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dac6ull));
TAIL_STATIC(0x7414a0u,741);
}
B73dac6:L73dac6:{c.instructions+=3;NFSU2_TR(0x73dac6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73dac9:{NFSU2_TR(0x73dac9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73daca:{NFSU2_TR(0x73daca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dacfull));
TAIL_STATIC(0x742360u,742);
}
B73dacf:L73dacf:{c.instructions+=3;NFSU2_TR(0x73dacf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73dad2:{NFSU2_TR(0x73dad2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B73dad4:{NFSU2_TR(0x73dad4);
{goto L73dae0;}
}
B73dae0:L73dae0:{c.instructions+=3;NFSU2_TR(0x73dae0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x819b48ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B73dae7:{NFSU2_TR(0x73dae7);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73daeb:{NFSU2_TR(0x73daeb);
{goto L73daf0;}
}
B73daf0:L73daf0:{c.instructions+=5;NFSU2_TR(0x73daf0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B73daf2:{NFSU2_TR(0x73daf2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B73daf4:{NFSU2_TR(0x73daf4);
__builtin_memmove((R+8),(R+0),1);
}
B73daf6:{NFSU2_TR(0x73daf6);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B73daf8:{NFSU2_TR(0x73daf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73db18;}}
}
B73dafa:L73dafa:{c.instructions+=2;NFSU2_TR(0x73dafa);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73dafc:{NFSU2_TR(0x73dafc);
if(r1(R+518)){{goto L73db14;}}
}
B73dafe:L73dafe:{c.instructions+=5;NFSU2_TR(0x73dafe);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B73db01:{NFSU2_TR(0x73db01);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B73db04:{NFSU2_TR(0x73db04);
__builtin_memmove((R+8),(R+0),1);
}
B73db06:{NFSU2_TR(0x73db06);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B73db08:{NFSU2_TR(0x73db08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73db18;}}
}
B73db0a:L73db0a:{c.instructions+=4;NFSU2_TR(0x73db0a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B73db0d:{NFSU2_TR(0x73db0d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B73db10:{NFSU2_TR(0x73db10);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73db12:{NFSU2_TR(0x73db12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73daf0u);}goto L73daf0;}}
}
B73db14:L73db14:{c.instructions+=2;NFSU2_TR(0x73db14);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73db16:{NFSU2_TR(0x73db16);
{goto L73db1d;}
}
B73db18:L73db18:{c.instructions+=2;NFSU2_TR(0x73db18);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+4))<(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B73db1a:{NFSU2_TR(0x73db1a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(u32(0xffffffffull))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B73db1d:L73db1d:{c.instructions+=2;NFSU2_TR(0x73db1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73db1f:{NFSU2_TR(0x73db1f);
if(r1(R+518)){{goto L73db3a;}}
}
B73db21:L73db21:{c.instructions+=3;NFSU2_TR(0x73db21);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B73db22:{NFSU2_TR(0x73db22);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73db25:{NFSU2_TR(0x73db25);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73dae0u);}goto L73dae0;}}
}
B73db27:L73db27:{c.instructions+=6;NFSU2_TR(0x73db27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73db28:{NFSU2_TR(0x73db28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73db29:{NFSU2_TR(0x73db29);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B73db2c:{NFSU2_TR(0x73db2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73db2d:{NFSU2_TR(0x73db2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73db31:{NFSU2_TR(0x73db31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73db36ull));
TAIL_STATIC(0x76115eu,761);
}
B73db36:L73db36:{c.instructions+=2;NFSU2_TR(0x73db36);
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
B73db39:{NFSU2_TR(0x73db39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73db3a:L73db3a:{c.instructions+=6;NFSU2_TR(0x73db3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73db3e:{NFSU2_TR(0x73db3e);
__builtin_memmove((R+0),(R+28),4);
}
B73db40:{NFSU2_TR(0x73db40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73db41:{NFSU2_TR(0x73db41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73db42:{NFSU2_TR(0x73db42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73db43:{NFSU2_TR(0x73db43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73db48ull));
TAIL_STATIC(0x76115eu,761);
}
B73db48:L73db48:{c.instructions+=2;NFSU2_TR(0x73db48);
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
B73db4b:{NFSU2_TR(0x73db4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73db50:L73db50:{c.instructions+=5;NFSU2_TR(0x73db50);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73db54:{NFSU2_TR(0x73db54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73db57:{NFSU2_TR(0x73db57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B73db5a:{NFSU2_TR(0x73db5a);
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
B73db5c:{NFSU2_TR(0x73db5c);
if(r1(R+518)){{goto L73dba0;}}
}
B73db5e:L73db5e:{c.instructions+=16;NFSU2_TR(0x73db5e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73db5f:{NFSU2_TR(0x73db5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73db63:{NFSU2_TR(0x73db63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73db66:{NFSU2_TR(0x73db66);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73db6a:{NFSU2_TR(0x73db6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73db6d:{NFSU2_TR(0x73db6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73db70:{NFSU2_TR(0x73db70);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73db74:{NFSU2_TR(0x73db74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73db77:{NFSU2_TR(0x73db77);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73db7b:{NFSU2_TR(0x73db7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73db7c:{NFSU2_TR(0x73db7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73db80:{NFSU2_TR(0x73db80);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73db81:{NFSU2_TR(0x73db81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73db82:{NFSU2_TR(0x73db82);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73db8a:{NFSU2_TR(0x73db8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73db8e:{NFSU2_TR(0x73db8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73db91ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73db91:L73db91:{c.instructions+=4;NFSU2_TR(0x73db91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73db94:{NFSU2_TR(0x73db94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73db9b:{NFSU2_TR(0x73db9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B73db9f:{NFSU2_TR(0x73db9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73dba0:L73dba0:{c.instructions+=2;NFSU2_TR(0x73dba0);
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
B73dba3:{NFSU2_TR(0x73dba3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73dbb0:L73dbb0:{c.instructions+=11;NFSU2_TR(0x73dbb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x584ull))));
}
B73dbb6:{NFSU2_TR(0x73dbb6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B73dbbb:{NFSU2_TR(0x73dbbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x580ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73dbc2:{NFSU2_TR(0x73dbc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73dbc5:{NFSU2_TR(0x73dbc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dbc6:{NFSU2_TR(0x73dbc6);
u8 U[4];
w4(U+0,u32(0x7a15f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dbcb:{NFSU2_TR(0x73dbcb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73dbcf:{NFSU2_TR(0x73dbcf);
u8 U[4];
w4(U+0,u32(0x280ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dbd4:{NFSU2_TR(0x73dbd4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dbd5:{NFSU2_TR(0x73dbd5);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B73dbda:{NFSU2_TR(0x73dbda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dbdfull));
TAIL_STATIC(0x741690u,741);
}
B73dbdf:L73dbdf:{c.instructions+=7;NFSU2_TR(0x73dbdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x59cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73dbe6:{NFSU2_TR(0x73dbe6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dbe7:{NFSU2_TR(0x73dbe7);
u8 U[4];
w4(U+0,u32(0x7d2038ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dbec:{NFSU2_TR(0x73dbec);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73dbf0:{NFSU2_TR(0x73dbf0);
u8 U[4];
w4(U+0,u32(0x280ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dbf5:{NFSU2_TR(0x73dbf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dbf6:{NFSU2_TR(0x73dbf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dbfbull));
TAIL_STATIC(0x741a50u,741);
}
B73dbfb:L73dbfb:{c.instructions+=3;NFSU2_TR(0x73dbfb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B73dbfe:{NFSU2_TR(0x73dbfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73dc00:{NFSU2_TR(0x73dc00);
if(r1(R+518)){{goto L73dc1a;}}
}
B73dc02:L73dc02:{c.instructions+=6;NFSU2_TR(0x73dc02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc03:{NFSU2_TR(0x73dc03);
u8 U[4];
w4(U+0,u32(0x7a15e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc08:{NFSU2_TR(0x73dc08);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73dc0c:{NFSU2_TR(0x73dc0c);
u8 U[4];
w4(U+0,u32(0x280ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc11:{NFSU2_TR(0x73dc11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc12:{NFSU2_TR(0x73dc12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dc17ull));
TAIL_STATIC(0x741a50u,741);
}
B73dc17:L73dc17:{c.instructions+=1;NFSU2_TR(0x73dc17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73dc1a:L73dc1a:{c.instructions+=7;NFSU2_TR(0x73dc1a);
u8 U[4];
w4(U+0,u32(0x1004020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc1f:{NFSU2_TR(0x73dc1f);
u8 U[4];
w4(U+0,u32(0x7a1578ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc24:{NFSU2_TR(0x73dc24);
u8 U[4];
w4(U+0,u32(u32(u32(0x288ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73dc2b:{NFSU2_TR(0x73dc2b);
u8 U[4];
w4(U+0,u32(0x300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc30:{NFSU2_TR(0x73dc30);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc31:{NFSU2_TR(0x73dc31);
u8 U[5];
w4(U+0,u32(u32(u32(0x290ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B73dc39:{NFSU2_TR(0x73dc39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dc3eull));
TAIL_STATIC(0x741760u,741);
}
B73dc3e:L73dc3e:{c.instructions+=7;NFSU2_TR(0x73dc3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x598ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73dc45:{NFSU2_TR(0x73dc45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc46:{NFSU2_TR(0x73dc46);
u8 U[4];
w4(U+0,u32(0x7a1580ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc4b:{NFSU2_TR(0x73dc4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x298ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73dc52:{NFSU2_TR(0x73dc52);
u8 U[4];
w4(U+0,u32(0x300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc57:{NFSU2_TR(0x73dc57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc58:{NFSU2_TR(0x73dc58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dc5dull));
TAIL_STATIC(0x741a50u,741);
}
B73dc5d:L73dc5d:{c.instructions+=7;NFSU2_TR(0x73dc5d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73dc61:{NFSU2_TR(0x73dc61);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc62:{NFSU2_TR(0x73dc62);
u8 U[4];
w4(U+0,u32(0x7a1588ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc67:{NFSU2_TR(0x73dc67);
u8 U[4];
w4(U+0,u32(u32(u32(0x2a8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73dc6e:{NFSU2_TR(0x73dc6e);
u8 U[4];
w4(U+0,u32(0x300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc73:{NFSU2_TR(0x73dc73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc74:{NFSU2_TR(0x73dc74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dc79ull));
TAIL_STATIC(0x741a50u,741);
}
B73dc79:L73dc79:{c.instructions+=8;NFSU2_TR(0x73dc79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73dc7b:{NFSU2_TR(0x73dc7b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc7c:{NFSU2_TR(0x73dc7c);
u8 U[4];
w4(U+0,u32(0x73db50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc81:{NFSU2_TR(0x73dc81);
u8 U[4];
w4(U+0,u32(u32(u32(0x2b8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73dc88:{NFSU2_TR(0x73dc88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc89:{NFSU2_TR(0x73dc89);
u8 U[4];
w4(U+0,u32(0x6d657367ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc8e:{NFSU2_TR(0x73dc8e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dc8f:{NFSU2_TR(0x73dc8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dc94ull));
TAIL_STATIC(0x7446c0u,744);
}
B73dc94:L73dc94:{c.instructions+=3;NFSU2_TR(0x73dc94);
u8 U[8];
w4(U+0,u32(u32(u32(0x5c4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73dc9b:{NFSU2_TR(0x73dc9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B73dc9e:{NFSU2_TR(0x73dc9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dca3ull));
TAIL_STATIC(0x76115eu,761);
}
B73dca3:L73dca3:{c.instructions+=2;NFSU2_TR(0x73dca3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x584ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x584ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x584ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73dca9:{NFSU2_TR(0x73dca9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73dcb0:L73dcb0:{c.instructions+=12;NFSU2_TR(0x73dcb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B73dcb3:{NFSU2_TR(0x73dcb3);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B73dcb8:{NFSU2_TR(0x73dcb8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dcb9:{NFSU2_TR(0x73dcb9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dcba:{NFSU2_TR(0x73dcba);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73dcbe:{NFSU2_TR(0x73dcbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73dcc2:{NFSU2_TR(0x73dcc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73dcc6:{NFSU2_TR(0x73dcc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B73dccd:{NFSU2_TR(0x73dccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73dcd0:{NFSU2_TR(0x73dcd0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B73dcd2:{NFSU2_TR(0x73dcd2);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B73dcd4:{NFSU2_TR(0x73dcd4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73dd55;}}
}
B73dcd6:L73dcd6:{c.instructions+=10;NFSU2_TR(0x73dcd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73dcd9:{NFSU2_TR(0x73dcd9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dcda:{NFSU2_TR(0x73dcda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dcdb:{NFSU2_TR(0x73dcdb);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dce0:{NFSU2_TR(0x73dce0);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dce2:{NFSU2_TR(0x73dce2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73dce6:{NFSU2_TR(0x73dce6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dce7:{NFSU2_TR(0x73dce7);
u8 U[4];
w4(U+0,u32(0x7d2050ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dcec:{NFSU2_TR(0x73dcec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dced:{NFSU2_TR(0x73dced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dcf2ull));
TAIL_STATIC(0x7414a0u,741);
}
B73dcf2:L73dcf2:{c.instructions+=3;NFSU2_TR(0x73dcf2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73dcf5:{NFSU2_TR(0x73dcf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dcf6:{NFSU2_TR(0x73dcf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dcfbull));
TAIL_STATIC(0x742360u,742);
}
B73dcfb:L73dcfb:{c.instructions+=5;NFSU2_TR(0x73dcfb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73dcfe:{NFSU2_TR(0x73dcfe);
w4(R+28,u32(0x7d2048ull));
}
B73dd03:{NFSU2_TR(0x73dd03);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B73dd07:{NFSU2_TR(0x73dd07);
w4(R+4,u32(0x5ull));
}
B73dd0c:{NFSU2_TR(0x73dd0c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73dd0e:L73dd0e:{c.instructions+=1;NFSU2_TR(0x73dd0e);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L73dd10;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73dd0eu);}goto L73dd0e;}}
}
B73dd10:L73dd10:{c.instructions+=1;NFSU2_TR(0x73dd10);
if(r1(R+518)){{goto L73dd3d;}}
}
B73dd12:L73dd12:{c.instructions+=4;NFSU2_TR(0x73dd12);
w4(R+28,u32(0x7d2040ull));
}
B73dd17:{NFSU2_TR(0x73dd17);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B73dd1b:{NFSU2_TR(0x73dd1b);
w4(R+4,u32(0x5ull));
}
B73dd20:{NFSU2_TR(0x73dd20);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B73dd22:L73dd22:{c.instructions+=1;NFSU2_TR(0x73dd22);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L73dd24;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73dd22u);}goto L73dd22;}}
}
B73dd24:L73dd24:{c.instructions+=1;NFSU2_TR(0x73dd24);
if(r1(R+518)){{goto L73dd3d;}}
}
B73dd26:L73dd26:{c.instructions+=8;NFSU2_TR(0x73dd26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73dd27:{NFSU2_TR(0x73dd27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73dd28:{NFSU2_TR(0x73dd28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73dd2b:{NFSU2_TR(0x73dd2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B73dd2e:{NFSU2_TR(0x73dd2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73dd2f:{NFSU2_TR(0x73dd2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73dd30:{NFSU2_TR(0x73dd30);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73dd34:{NFSU2_TR(0x73dd34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dd39ull));
TAIL_STATIC(0x76115eu,761);
}
B73dd39:L73dd39:{c.instructions+=2;NFSU2_TR(0x73dd39);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73dd3c:{NFSU2_TR(0x73dd3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73dd3d:L73dd3d:{c.instructions+=7;NFSU2_TR(0x73dd3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73dd3e:{NFSU2_TR(0x73dd3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73dd3f:{NFSU2_TR(0x73dd3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73dd46:{NFSU2_TR(0x73dd46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73dd47:{NFSU2_TR(0x73dd47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73dd48:{NFSU2_TR(0x73dd48);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73dd4c:{NFSU2_TR(0x73dd4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dd51ull));
TAIL_STATIC(0x76115eu,761);
}
B73dd51:L73dd51:{c.instructions+=2;NFSU2_TR(0x73dd51);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73dd54:{NFSU2_TR(0x73dd54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73dd55:L73dd55:{c.instructions+=14;NFSU2_TR(0x73dd55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73dd58:{NFSU2_TR(0x73dd58);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73dd5c:{NFSU2_TR(0x73dd5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73dd5f:{NFSU2_TR(0x73dd5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73dd62:{NFSU2_TR(0x73dd62);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73dd66:{NFSU2_TR(0x73dd66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73dd69:{NFSU2_TR(0x73dd69);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73dd6d:{NFSU2_TR(0x73dd6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dd6e:{NFSU2_TR(0x73dd6e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73dd72:{NFSU2_TR(0x73dd72);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dd73:{NFSU2_TR(0x73dd73);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dd74:{NFSU2_TR(0x73dd74);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73dd78:{NFSU2_TR(0x73dd78);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73dd7c:{NFSU2_TR(0x73dd7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dd7full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73dd7f:L73dd7f:{c.instructions+=7;NFSU2_TR(0x73dd7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73dd83:{NFSU2_TR(0x73dd83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73dd86:{NFSU2_TR(0x73dd86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73dd89:{NFSU2_TR(0x73dd89);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B73dd8c:{NFSU2_TR(0x73dd8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73dd8d:{NFSU2_TR(0x73dd8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73dd8e:{NFSU2_TR(0x73dd8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dd93ull));
TAIL_STATIC(0x76115eu,761);
}
B73dd93:L73dd93:{c.instructions+=2;NFSU2_TR(0x73dd93);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73dd96:{NFSU2_TR(0x73dd96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73dda0:L73dda0:{c.instructions+=10;NFSU2_TR(0x73dda0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B73dda6:{NFSU2_TR(0x73dda6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B73ddab:{NFSU2_TR(0x73ddab);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ddb2:{NFSU2_TR(0x73ddb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B73ddb5:{NFSU2_TR(0x73ddb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ddb6:{NFSU2_TR(0x73ddb6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73ddba:{NFSU2_TR(0x73ddba);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ddbf:{NFSU2_TR(0x73ddbf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ddc0:{NFSU2_TR(0x73ddc0);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B73ddc5:{NFSU2_TR(0x73ddc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ddcaull));
TAIL_STATIC(0x741650u,741);
}
B73ddca:L73ddca:{c.instructions+=7;NFSU2_TR(0x73ddca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+8),(U+0),4);
}
B73ddcd:{NFSU2_TR(0x73ddcd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ddce:{NFSU2_TR(0x73ddce);
u8 U[4];
w4(U+0,u32(0x7a13e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ddd3:{NFSU2_TR(0x73ddd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73ddd7:{NFSU2_TR(0x73ddd7);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dddc:{NFSU2_TR(0x73dddc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dddd:{NFSU2_TR(0x73dddd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dde2ull));
TAIL_STATIC(0x741a50u,741);
}
B73dde2:L73dde2:{c.instructions+=7;NFSU2_TR(0x73dde2);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73dde9:{NFSU2_TR(0x73dde9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ddea:{NFSU2_TR(0x73ddea);
u8 U[4];
w4(U+0,u32(0x7d2058ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ddef:{NFSU2_TR(0x73ddef);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73ddf3:{NFSU2_TR(0x73ddf3);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ddf8:{NFSU2_TR(0x73ddf8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ddf9:{NFSU2_TR(0x73ddf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73ddfeull));
TAIL_STATIC(0x741690u,741);
}
B73ddfe:L73ddfe:{c.instructions+=8;NFSU2_TR(0x73ddfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73de00:{NFSU2_TR(0x73de00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73de01:{NFSU2_TR(0x73de01);
u8 U[4];
w4(U+0,u32(0x73dcb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73de06:{NFSU2_TR(0x73de06);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73de0a:{NFSU2_TR(0x73de0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73de0b:{NFSU2_TR(0x73de0b);
u8 U[4];
w4(U+0,u32(0x6368616cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73de10:{NFSU2_TR(0x73de10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73de11:{NFSU2_TR(0x73de11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73de16ull));
TAIL_STATIC(0x7446c0u,744);
}
B73de16:L73de16:{c.instructions+=3;NFSU2_TR(0x73de16);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73de19:{NFSU2_TR(0x73de19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73de1c:{NFSU2_TR(0x73de1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73de21ull));
TAIL_STATIC(0x74b730u,74b);
}
B73de21:L73de21:{c.instructions+=4;NFSU2_TR(0x73de21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73de24:{NFSU2_TR(0x73de24);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73de26:{NFSU2_TR(0x73de26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73de29:{NFSU2_TR(0x73de29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73de32;}}
}
B73de2b:L73de2b:{c.instructions+=1;NFSU2_TR(0x73de2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73de32:L73de32:{c.instructions+=2;NFSU2_TR(0x73de32);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73de39:{NFSU2_TR(0x73de39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73de3eull));
TAIL_STATIC(0x76115eu,761);
}
B73de3e:L73de3e:{c.instructions+=2;NFSU2_TR(0x73de3e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73de44:{NFSU2_TR(0x73de44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73de50:L73de50:{c.instructions+=6;NFSU2_TR(0x73de50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B73de56:{NFSU2_TR(0x73de56);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B73de5b:{NFSU2_TR(0x73de5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73de62:{NFSU2_TR(0x73de62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73de65:{NFSU2_TR(0x73de65);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73de68:{NFSU2_TR(0x73de68);
if(r1(R+518)){{goto L73de6f;}}
}
B73de6a:L73de6a:{c.instructions+=2;NFSU2_TR(0x73de6a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73de6d:{NFSU2_TR(0x73de6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73dea8;}}
}
B73de6f:L73de6f:{c.instructions+=7;NFSU2_TR(0x73de6f);
u8 U[4];
w4(U+0,u32(0x79656cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73de74:{NFSU2_TR(0x73de74);
u8 U[4];
w4(U+0,u32(0x7a13e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73de79:{NFSU2_TR(0x73de79);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73de7d:{NFSU2_TR(0x73de7d);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73de82:{NFSU2_TR(0x73de82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73de83:{NFSU2_TR(0x73de83);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B73de88:{NFSU2_TR(0x73de88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73de8dull));
TAIL_STATIC(0x741a50u,741);
}
B73de8d:L73de8d:{c.instructions+=8;NFSU2_TR(0x73de8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73de8f:{NFSU2_TR(0x73de8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73de90:{NFSU2_TR(0x73de90);
u8 U[4];
w4(U+0,u32(0x73dcb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73de95:{NFSU2_TR(0x73de95);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73de99:{NFSU2_TR(0x73de99);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73de9a:{NFSU2_TR(0x73de9a);
u8 U[4];
w4(U+0,u32(0x6368616cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73de9f:{NFSU2_TR(0x73de9f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dea0:{NFSU2_TR(0x73dea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dea5ull));
TAIL_STATIC(0x7446c0u,744);
}
B73dea5:L73dea5:{c.instructions+=1;NFSU2_TR(0x73dea5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B73dea8:L73dea8:{c.instructions+=2;NFSU2_TR(0x73dea8);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73deaf:{NFSU2_TR(0x73deaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73deb4ull));
TAIL_STATIC(0x76115eu,761);
}
B73deb4:L73deb4:{c.instructions+=2;NFSU2_TR(0x73deb4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x84ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x84ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x84ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73deba:{NFSU2_TR(0x73deba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73dec0:L73dec0:{c.instructions+=12;NFSU2_TR(0x73dec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x528ull))));
}
B73dec6:{NFSU2_TR(0x73dec6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B73decb:{NFSU2_TR(0x73decb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73decc:{NFSU2_TR(0x73decc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73decd:{NFSU2_TR(0x73decd);
u8 U[8];
w4(U+0,u32(u32(u32(0x538ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73ded4:{NFSU2_TR(0x73ded4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B73ded6:{NFSU2_TR(0x73ded6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ded7:{NFSU2_TR(0x73ded7);
u8 U[8];
w4(U+0,u32(u32(u32(0x530ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73dede:{NFSU2_TR(0x73dede);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73dee1:{NFSU2_TR(0x73dee1);
u8 U[4];
w4(U+0,u32(0x7a0bb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dee6:{NFSU2_TR(0x73dee6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dee7:{NFSU2_TR(0x73dee7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73deecull));
TAIL_STATIC(0x7414a0u,741);
}
B73deec:L73deec:{c.instructions+=3;NFSU2_TR(0x73deec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73deef:{NFSU2_TR(0x73deef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73def0:{NFSU2_TR(0x73def0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73def5ull));
TAIL_STATIC(0x742100u,742);
}
B73def5:L73def5:{c.instructions+=3;NFSU2_TR(0x73def5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73def8:{NFSU2_TR(0x73def8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x1000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73defd:{NFSU2_TR(0x73defd);
if(r1(R+518)){TAIL_STATIC(0x73e24bu,73e);}
}
B73df03:L73df03:{c.instructions+=10;NFSU2_TR(0x73df03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73df06:{NFSU2_TR(0x73df06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73df07:{NFSU2_TR(0x73df07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73df08:{NFSU2_TR(0x73df08);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73df0d:{NFSU2_TR(0x73df0d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73df0f:{NFSU2_TR(0x73df0f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73df13:{NFSU2_TR(0x73df13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73df14:{NFSU2_TR(0x73df14);
u8 U[4];
w4(U+0,u32(0x7a15f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73df19:{NFSU2_TR(0x73df19);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73df1a:{NFSU2_TR(0x73df1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73df1full));
TAIL_STATIC(0x7414a0u,741);
}
B73df1f:L73df1f:{c.instructions+=3;NFSU2_TR(0x73df1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73df22:{NFSU2_TR(0x73df22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73df23:{NFSU2_TR(0x73df23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73df28ull));
TAIL_STATIC(0x742360u,742);
}
B73df28:L73df28:{c.instructions+=6;NFSU2_TR(0x73df28);
u8 U[8];
w4(U+0,u32(u32(u32(0x554ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73df2f:{NFSU2_TR(0x73df2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B73df32:{NFSU2_TR(0x73df32);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+28),(U+0),4);
}
B73df35:{NFSU2_TR(0x73df35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73df38:{NFSU2_TR(0x73df38);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B73df3a:{NFSU2_TR(0x73df3a);
if(r1(R+518)){{goto L73df7b;}}
}
B73df3c:L73df3c:{c.instructions+=4;NFSU2_TR(0x73df3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73df40:{NFSU2_TR(0x73df40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73df41:{NFSU2_TR(0x73df41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73df42:{NFSU2_TR(0x73df42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73df47ull));
TAIL_STATIC(0x74bb90u,74b);
}
B73df47:L73df47:{c.instructions+=3;NFSU2_TR(0x73df47);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73df4a:{NFSU2_TR(0x73df4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73df4c:{NFSU2_TR(0x73df4c);
if(r1(R+518)){{goto L73df7b;}}
}
B73df4e:L73df4e:{c.instructions+=6;NFSU2_TR(0x73df4e);
__builtin_memmove((R+4),gp(0x819b5c),4);
}
B73df54:{NFSU2_TR(0x73df54);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73df55:{NFSU2_TR(0x73df55);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73df59:{NFSU2_TR(0x73df59);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73df5a:{NFSU2_TR(0x73df5a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B73df5c:{NFSU2_TR(0x73df5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73df61ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73dbb0u);}goto L73dbb0;}
}
B73df61:L73df61:{c.instructions+=7;NFSU2_TR(0x73df61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73df64:{NFSU2_TR(0x73df64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73df65:{NFSU2_TR(0x73df65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73df66:{NFSU2_TR(0x73df66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73df67:{NFSU2_TR(0x73df67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73df68:{NFSU2_TR(0x73df68);
u8 U[8];
w4(U+0,u32(u32(u32(0x524ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73df6f:{NFSU2_TR(0x73df6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73df74ull));
TAIL_STATIC(0x76115eu,761);
}
B73df74:L73df74:{c.instructions+=2;NFSU2_TR(0x73df74);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x528ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x528ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x528ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73df7a:{NFSU2_TR(0x73df7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73df7b:L73df7b:{c.instructions+=8;NFSU2_TR(0x73df7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73df7e:{NFSU2_TR(0x73df7e);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73df83:{NFSU2_TR(0x73df83);
u8 U[4];
w4(U+0,u32(0x280ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73df88:{NFSU2_TR(0x73df88);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73df8c:{NFSU2_TR(0x73df8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73df8d:{NFSU2_TR(0x73df8d);
u8 U[4];
w4(U+0,u32(0x7a1784ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73df92:{NFSU2_TR(0x73df92);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73df93:{NFSU2_TR(0x73df93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73df98ull));
TAIL_STATIC(0x7414a0u,741);
}
B73df98:L73df98:{c.instructions+=3;NFSU2_TR(0x73df98);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73df9b:{NFSU2_TR(0x73df9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73df9c:{NFSU2_TR(0x73df9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dfa1ull));
TAIL_STATIC(0x742360u,742);
}
B73dfa1:L73dfa1:{c.instructions+=3;NFSU2_TR(0x73dfa1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73dfa4:{NFSU2_TR(0x73dfa4);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73dfa8:{NFSU2_TR(0x73dfa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dfadull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73daa0u);}goto L73daa0;}
}
B73dfad:L73dfad:{c.instructions+=2;NFSU2_TR(0x73dfad);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73dfb0:{NFSU2_TR(0x73dfb0);
if(r1(R+518)){TAIL_STATIC(0x73e249u,73e);}
}
B73dfb6:L73dfb6:{c.instructions+=3;NFSU2_TR(0x73dfb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73dfb9:{NFSU2_TR(0x73dfb9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73dfbc:{NFSU2_TR(0x73dfbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73dfef;}}
}
B73dfbe:L73dfbe:{c.instructions+=2;NFSU2_TR(0x73dfbe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73dfc0:{NFSU2_TR(0x73dfc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73dfef;}}
}
B73dfc2:L73dfc2:{c.instructions+=6;NFSU2_TR(0x73dfc2);
__builtin_memmove((R+8),gp(0x819b5c),4);
}
B73dfc8:{NFSU2_TR(0x73dfc8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dfc9:{NFSU2_TR(0x73dfc9);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B73dfcd:{NFSU2_TR(0x73dfcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73dfce:{NFSU2_TR(0x73dfce);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B73dfd0:{NFSU2_TR(0x73dfd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dfd5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73dbb0u);}goto L73dbb0;}
}
B73dfd5:L73dfd5:{c.instructions+=7;NFSU2_TR(0x73dfd5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73dfd8:{NFSU2_TR(0x73dfd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73dfd9:{NFSU2_TR(0x73dfd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73dfda:{NFSU2_TR(0x73dfda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73dfdb:{NFSU2_TR(0x73dfdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73dfdc:{NFSU2_TR(0x73dfdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x524ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73dfe3:{NFSU2_TR(0x73dfe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73dfe8ull));
TAIL_STATIC(0x76115eu,761);
}
B73dfe8:L73dfe8:{c.instructions+=2;NFSU2_TR(0x73dfe8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x528ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x528ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x528ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73dfee:{NFSU2_TR(0x73dfee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73dfef:L73dfef:{c.instructions+=2;NFSU2_TR(0x73dfef);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73dff1:{NFSU2_TR(0x73dff1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x73e0d8u,73e);}
}
B73dff7:L73dff7:{c.instructions+=2;NFSU2_TR(0x73dff7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73dff9:{NFSU2_TR(0x73dff9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x73e0d8u,73e);}
}
B73dfff:L73dfff:{c.instructions+=1;NFSU2_TR(0x73dfff);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x73e001u,73e);
}
XIT:NFSU2_TR_EXIT(0x73d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
