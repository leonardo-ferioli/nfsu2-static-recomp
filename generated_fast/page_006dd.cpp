#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_6da(u8* __restrict R,Cpu& c);
u32 body_6db(u8* __restrict R,Cpu& c);
u32 body_6dc(u8* __restrict R,Cpu& c);
u32 body_6de(u8* __restrict R,Cpu& c);
u32 body_6e1(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6dd,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6dd,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6dd(u8* __restrict R,Cpu& c);
u32 page_6dd(Cpu& c){return body_6dd(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6dd(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6dd002:goto L6dd002;
case 0x6dd009:c.instructions+=1;goto B6dd009;
case 0x6dd010:goto L6dd010;
case 0x6dd020:goto L6dd020;
case 0x6dd021:c.instructions+=13;goto B6dd021;
case 0x6dd022:c.instructions+=12;goto B6dd022;
case 0x6dd023:c.instructions+=11;goto B6dd023;
case 0x6dd027:c.instructions+=10;goto B6dd027;
case 0x6dd02c:c.instructions+=9;goto B6dd02c;
case 0x6dd030:c.instructions+=8;goto B6dd030;
case 0x6dd031:c.instructions+=7;goto B6dd031;
case 0x6dd033:c.instructions+=6;goto B6dd033;
case 0x6dd035:c.instructions+=5;goto B6dd035;
case 0x6dd037:c.instructions+=4;goto B6dd037;
case 0x6dd038:c.instructions+=3;goto B6dd038;
case 0x6dd03a:c.instructions+=2;goto B6dd03a;
case 0x6dd03b:c.instructions+=1;goto B6dd03b;
case 0x6dd03e:goto L6dd03e;
case 0x6dd042:c.instructions+=5;goto B6dd042;
case 0x6dd046:c.instructions+=4;goto B6dd046;
case 0x6dd047:c.instructions+=3;goto B6dd047;
case 0x6dd048:c.instructions+=2;goto B6dd048;
case 0x6dd049:c.instructions+=1;goto B6dd049;
case 0x6dd04e:goto L6dd04e;
case 0x6dd050:c.instructions+=4;goto B6dd050;
case 0x6dd052:c.instructions+=3;goto B6dd052;
case 0x6dd055:c.instructions+=2;goto B6dd055;
case 0x6dd056:c.instructions+=1;goto B6dd056;
case 0x6dd059:goto L6dd059;
case 0x6dd05c:c.instructions+=5;goto B6dd05c;
case 0x6dd05d:c.instructions+=4;goto B6dd05d;
case 0x6dd060:c.instructions+=3;goto B6dd060;
case 0x6dd061:c.instructions+=2;goto B6dd061;
case 0x6dd062:c.instructions+=1;goto B6dd062;
case 0x6dd070:goto L6dd070;
case 0x6dd071:c.instructions+=4;goto B6dd071;
case 0x6dd075:c.instructions+=3;goto B6dd075;
case 0x6dd077:c.instructions+=2;goto B6dd077;
case 0x6dd079:c.instructions+=1;goto B6dd079;
case 0x6dd07b:goto L6dd07b;
case 0x6dd081:c.instructions+=1;goto B6dd081;
case 0x6dd083:goto L6dd083;
case 0x6dd08d:goto L6dd08d;
case 0x6dd093:c.instructions+=5;goto B6dd093;
case 0x6dd094:c.instructions+=4;goto B6dd094;
case 0x6dd095:c.instructions+=3;goto B6dd095;
case 0x6dd097:c.instructions+=2;goto B6dd097;
case 0x6dd099:c.instructions+=1;goto B6dd099;
case 0x6dd09b:goto L6dd09b;
case 0x6dd09d:c.instructions+=1;goto B6dd09d;
case 0x6dd0a2:goto L6dd0a2;
case 0x6dd0a5:c.instructions+=1;goto B6dd0a5;
case 0x6dd0a7:goto L6dd0a7;
case 0x6dd0a8:c.instructions+=2;goto B6dd0a8;
case 0x6dd0aa:c.instructions+=1;goto B6dd0aa;
case 0x6dd0ac:goto L6dd0ac;
case 0x6dd0ad:c.instructions+=3;goto B6dd0ad;
case 0x6dd0ae:c.instructions+=2;goto B6dd0ae;
case 0x6dd0af:c.instructions+=1;goto B6dd0af;
case 0x6dd0b0:goto L6dd0b0;
case 0x6dd0b2:c.instructions+=1;goto B6dd0b2;
case 0x6dd0b4:goto L6dd0b4;
case 0x6dd0b6:c.instructions+=2;goto B6dd0b6;
case 0x6dd0b8:c.instructions+=1;goto B6dd0b8;
case 0x6dd0ba:goto L6dd0ba;
case 0x6dd0bc:c.instructions+=2;goto B6dd0bc;
case 0x6dd0bd:c.instructions+=1;goto B6dd0bd;
case 0x6dd0c0:goto L6dd0c0;
case 0x6dd0c2:c.instructions+=4;goto B6dd0c2;
case 0x6dd0c3:c.instructions+=3;goto B6dd0c3;
case 0x6dd0c9:c.instructions+=2;goto B6dd0c9;
case 0x6dd0d0:c.instructions+=1;goto B6dd0d0;
case 0x6dd0d6:goto L6dd0d6;
case 0x6dd0d9:goto L6dd0d9;
case 0x6dd0df:c.instructions+=3;goto B6dd0df;
case 0x6dd0e5:c.instructions+=2;goto B6dd0e5;
case 0x6dd0ec:c.instructions+=1;goto B6dd0ec;
case 0x6dd0f2:goto L6dd0f2;
case 0x6dd0f3:c.instructions+=1;goto B6dd0f3;
case 0x6dd0f4:goto L6dd0f4;
case 0x6dd0f5:c.instructions+=1;goto B6dd0f5;
case 0x6dd100:goto L6dd100;
case 0x6dd101:c.instructions+=3;goto B6dd101;
case 0x6dd107:c.instructions+=2;goto B6dd107;
case 0x6dd109:c.instructions+=1;goto B6dd109;
case 0x6dd10b:goto L6dd10b;
case 0x6dd110:goto L6dd110;
case 0x6dd112:c.instructions+=3;goto B6dd112;
case 0x6dd115:c.instructions+=2;goto B6dd115;
case 0x6dd117:c.instructions+=1;goto B6dd117;
case 0x6dd119:goto L6dd119;
case 0x6dd11b:c.instructions+=2;goto B6dd11b;
case 0x6dd11c:c.instructions+=1;goto B6dd11c;
case 0x6dd11f:goto L6dd11f;
case 0x6dd121:c.instructions+=1;goto B6dd121;
case 0x6dd128:goto L6dd128;
case 0x6dd12b:c.instructions+=2;goto B6dd12b;
case 0x6dd12d:c.instructions+=1;goto B6dd12d;
case 0x6dd12f:goto L6dd12f;
case 0x6dd130:c.instructions+=1;goto B6dd130;
case 0x6dd140:goto L6dd140;
case 0x6dd145:c.instructions+=4;goto B6dd145;
case 0x6dd146:c.instructions+=3;goto B6dd146;
case 0x6dd148:c.instructions+=2;goto B6dd148;
case 0x6dd14a:c.instructions+=1;goto B6dd14a;
case 0x6dd14c:goto L6dd14c;
case 0x6dd14d:c.instructions+=1;goto B6dd14d;
case 0x6dd150:goto L6dd150;
case 0x6dd153:c.instructions+=4;goto B6dd153;
case 0x6dd155:c.instructions+=3;goto B6dd155;
case 0x6dd158:c.instructions+=2;goto B6dd158;
case 0x6dd15b:c.instructions+=1;goto B6dd15b;
case 0x6dd15d:goto L6dd15d;
case 0x6dd160:c.instructions+=2;goto B6dd160;
case 0x6dd162:c.instructions+=1;goto B6dd162;
case 0x6dd164:goto L6dd164;
case 0x6dd167:c.instructions+=2;goto B6dd167;
case 0x6dd169:c.instructions+=1;goto B6dd169;
case 0x6dd16b:goto L6dd16b;
case 0x6dd16d:c.instructions+=6;goto B6dd16d;
case 0x6dd16f:c.instructions+=5;goto B6dd16f;
case 0x6dd172:c.instructions+=4;goto B6dd172;
case 0x6dd173:c.instructions+=3;goto B6dd173;
case 0x6dd174:c.instructions+=2;goto B6dd174;
case 0x6dd175:c.instructions+=1;goto B6dd175;
case 0x6dd178:goto L6dd178;
case 0x6dd17a:goto L6dd17a;
case 0x6dd17c:c.instructions+=1;goto B6dd17c;
case 0x6dd17e:goto L6dd17e;
case 0x6dd181:goto L6dd181;
case 0x6dd184:c.instructions+=2;goto B6dd184;
case 0x6dd186:c.instructions+=1;goto B6dd186;
case 0x6dd188:goto L6dd188;
case 0x6dd18b:goto L6dd18b;
case 0x6dd191:c.instructions+=1;goto B6dd191;
case 0x6dd193:goto L6dd193;
case 0x6dd199:goto L6dd199;
case 0x6dd19b:c.instructions+=6;goto B6dd19b;
case 0x6dd19c:c.instructions+=5;goto B6dd19c;
case 0x6dd19e:c.instructions+=4;goto B6dd19e;
case 0x6dd1a1:c.instructions+=3;goto B6dd1a1;
case 0x6dd1a4:c.instructions+=2;goto B6dd1a4;
case 0x6dd1a7:c.instructions+=1;goto B6dd1a7;
case 0x6dd1ad:goto L6dd1ad;
case 0x6dd1b0:goto L6dd1b0;
case 0x6dd1b2:c.instructions+=2;goto B6dd1b2;
case 0x6dd1b4:c.instructions+=1;goto B6dd1b4;
case 0x6dd1b6:goto L6dd1b6;
case 0x6dd1b7:goto L6dd1b7;
case 0x6dd1b8:c.instructions+=1;goto B6dd1b8;
case 0x6dd1c0:goto L6dd1c0;
case 0x6dd1c5:c.instructions+=4;goto B6dd1c5;
case 0x6dd1c6:c.instructions+=3;goto B6dd1c6;
case 0x6dd1c8:c.instructions+=2;goto B6dd1c8;
case 0x6dd1ca:c.instructions+=1;goto B6dd1ca;
case 0x6dd1cc:goto L6dd1cc;
case 0x6dd1d0:goto L6dd1d0;
case 0x6dd1d3:c.instructions+=2;goto B6dd1d3;
case 0x6dd1d5:c.instructions+=1;goto B6dd1d5;
case 0x6dd1d7:goto L6dd1d7;
case 0x6dd1da:c.instructions+=3;goto B6dd1da;
case 0x6dd1dd:c.instructions+=2;goto B6dd1dd;
case 0x6dd1df:c.instructions+=1;goto B6dd1df;
case 0x6dd1e1:goto L6dd1e1;
case 0x6dd1e3:c.instructions+=2;goto B6dd1e3;
case 0x6dd1e6:c.instructions+=1;goto B6dd1e6;
case 0x6dd1e8:goto L6dd1e8;
case 0x6dd1eb:c.instructions+=2;goto B6dd1eb;
case 0x6dd1ed:c.instructions+=1;goto B6dd1ed;
case 0x6dd1ef:goto L6dd1ef;
case 0x6dd1f2:c.instructions+=1;goto B6dd1f2;
case 0x6dd1f5:goto L6dd1f5;
case 0x6dd1f8:c.instructions+=2;goto B6dd1f8;
case 0x6dd1fa:c.instructions+=1;goto B6dd1fa;
case 0x6dd1fc:goto L6dd1fc;
case 0x6dd1ff:c.instructions+=1;goto B6dd1ff;
case 0x6dd202:goto L6dd202;
case 0x6dd208:c.instructions+=1;goto B6dd208;
case 0x6dd20a:goto L6dd20a;
case 0x6dd20d:c.instructions+=1;goto B6dd20d;
case 0x6dd213:goto L6dd213;
case 0x6dd215:c.instructions+=6;goto B6dd215;
case 0x6dd216:c.instructions+=5;goto B6dd216;
case 0x6dd218:c.instructions+=4;goto B6dd218;
case 0x6dd21b:c.instructions+=3;goto B6dd21b;
case 0x6dd21e:c.instructions+=2;goto B6dd21e;
case 0x6dd221:c.instructions+=1;goto B6dd221;
case 0x6dd227:goto L6dd227;
case 0x6dd22a:c.instructions+=1;goto B6dd22a;
case 0x6dd22c:goto L6dd22c;
case 0x6dd22f:c.instructions+=2;goto B6dd22f;
case 0x6dd231:c.instructions+=1;goto B6dd231;
case 0x6dd233:goto L6dd233;
case 0x6dd234:c.instructions+=1;goto B6dd234;
case 0x6dd240:goto L6dd240;
case 0x6dd241:c.instructions+=6;goto B6dd241;
case 0x6dd243:c.instructions+=5;goto B6dd243;
case 0x6dd244:c.instructions+=4;goto B6dd244;
case 0x6dd246:c.instructions+=3;goto B6dd246;
case 0x6dd248:c.instructions+=2;goto B6dd248;
case 0x6dd24d:c.instructions+=1;goto B6dd24d;
case 0x6dd252:goto L6dd252;
case 0x6dd254:c.instructions+=1;goto B6dd254;
case 0x6dd256:goto L6dd256;
case 0x6dd25c:c.instructions+=1;goto B6dd25c;
case 0x6dd25e:goto L6dd25e;
case 0x6dd261:goto L6dd261;
case 0x6dd263:c.instructions+=4;goto B6dd263;
case 0x6dd267:c.instructions+=3;goto B6dd267;
case 0x6dd26b:c.instructions+=2;goto B6dd26b;
case 0x6dd26f:c.instructions+=1;goto B6dd26f;
case 0x6dd271:goto L6dd271;
case 0x6dd277:c.instructions+=1;goto B6dd277;
case 0x6dd279:goto L6dd279;
case 0x6dd280:goto L6dd280;
case 0x6dd287:c.instructions+=14;goto B6dd287;
case 0x6dd28e:c.instructions+=13;goto B6dd28e;
case 0x6dd295:c.instructions+=12;goto B6dd295;
case 0x6dd29c:c.instructions+=11;goto B6dd29c;
case 0x6dd2a3:c.instructions+=10;goto B6dd2a3;
case 0x6dd2aa:c.instructions+=9;goto B6dd2aa;
case 0x6dd2b1:c.instructions+=8;goto B6dd2b1;
case 0x6dd2b8:c.instructions+=7;goto B6dd2b8;
case 0x6dd2bf:c.instructions+=6;goto B6dd2bf;
case 0x6dd2c6:c.instructions+=5;goto B6dd2c6;
case 0x6dd2cd:c.instructions+=4;goto B6dd2cd;
case 0x6dd2d4:c.instructions+=3;goto B6dd2d4;
case 0x6dd2d5:c.instructions+=2;goto B6dd2d5;
case 0x6dd2d8:c.instructions+=1;goto B6dd2d8;
case 0x6dd2de:goto L6dd2de;
case 0x6dd2df:c.instructions+=3;goto B6dd2df;
case 0x6dd2e5:c.instructions+=2;goto B6dd2e5;
case 0x6dd2e6:c.instructions+=1;goto B6dd2e6;
case 0x6dd2f0:goto L6dd2f0;
case 0x6dd2f3:c.instructions+=3;goto B6dd2f3;
case 0x6dd2f4:c.instructions+=2;goto B6dd2f4;
case 0x6dd2f6:c.instructions+=1;goto B6dd2f6;
case 0x6dd2fb:goto L6dd2fb;
case 0x6dd2fd:c.instructions+=1;goto B6dd2fd;
case 0x6dd303:goto L6dd303;
case 0x6dd308:c.instructions+=49;goto B6dd308;
case 0x6dd30a:c.instructions+=48;goto B6dd30a;
case 0x6dd30e:c.instructions+=47;goto B6dd30e;
case 0x6dd313:c.instructions+=46;goto B6dd313;
case 0x6dd315:c.instructions+=45;goto B6dd315;
case 0x6dd319:c.instructions+=44;goto B6dd319;
case 0x6dd31e:c.instructions+=43;goto B6dd31e;
case 0x6dd320:c.instructions+=42;goto B6dd320;
case 0x6dd324:c.instructions+=41;goto B6dd324;
case 0x6dd329:c.instructions+=40;goto B6dd329;
case 0x6dd32b:c.instructions+=39;goto B6dd32b;
case 0x6dd32f:c.instructions+=38;goto B6dd32f;
case 0x6dd334:c.instructions+=37;goto B6dd334;
case 0x6dd336:c.instructions+=36;goto B6dd336;
case 0x6dd33a:c.instructions+=35;goto B6dd33a;
case 0x6dd33f:c.instructions+=34;goto B6dd33f;
case 0x6dd341:c.instructions+=33;goto B6dd341;
case 0x6dd345:c.instructions+=32;goto B6dd345;
case 0x6dd34a:c.instructions+=31;goto B6dd34a;
case 0x6dd34c:c.instructions+=30;goto B6dd34c;
case 0x6dd350:c.instructions+=29;goto B6dd350;
case 0x6dd355:c.instructions+=28;goto B6dd355;
case 0x6dd357:c.instructions+=27;goto B6dd357;
case 0x6dd35b:c.instructions+=26;goto B6dd35b;
case 0x6dd360:c.instructions+=25;goto B6dd360;
case 0x6dd362:c.instructions+=24;goto B6dd362;
case 0x6dd366:c.instructions+=23;goto B6dd366;
case 0x6dd36b:c.instructions+=22;goto B6dd36b;
case 0x6dd36d:c.instructions+=21;goto B6dd36d;
case 0x6dd371:c.instructions+=20;goto B6dd371;
case 0x6dd376:c.instructions+=19;goto B6dd376;
case 0x6dd378:c.instructions+=18;goto B6dd378;
case 0x6dd37c:c.instructions+=17;goto B6dd37c;
case 0x6dd381:c.instructions+=16;goto B6dd381;
case 0x6dd383:c.instructions+=15;goto B6dd383;
case 0x6dd387:c.instructions+=14;goto B6dd387;
case 0x6dd388:c.instructions+=13;goto B6dd388;
case 0x6dd38d:c.instructions+=12;goto B6dd38d;
case 0x6dd38f:c.instructions+=11;goto B6dd38f;
case 0x6dd390:c.instructions+=10;goto B6dd390;
case 0x6dd394:c.instructions+=9;goto B6dd394;
case 0x6dd399:c.instructions+=8;goto B6dd399;
case 0x6dd39a:c.instructions+=7;goto B6dd39a;
case 0x6dd39f:c.instructions+=6;goto B6dd39f;
case 0x6dd3a1:c.instructions+=5;goto B6dd3a1;
case 0x6dd3a3:c.instructions+=4;goto B6dd3a3;
case 0x6dd3a5:c.instructions+=3;goto B6dd3a5;
case 0x6dd3a8:c.instructions+=2;goto B6dd3a8;
case 0x6dd3ac:c.instructions+=1;goto B6dd3ac;
case 0x6dd3b0:goto L6dd3b0;
case 0x6dd3b3:c.instructions+=2;goto B6dd3b3;
case 0x6dd3ba:c.instructions+=1;goto B6dd3ba;
case 0x6dd3bc:goto L6dd3bc;
case 0x6dd3c3:c.instructions+=8;goto B6dd3c3;
case 0x6dd3c6:c.instructions+=7;goto B6dd3c6;
case 0x6dd3cb:c.instructions+=6;goto B6dd3cb;
case 0x6dd3cd:c.instructions+=5;goto B6dd3cd;
case 0x6dd3ce:c.instructions+=4;goto B6dd3ce;
case 0x6dd3d0:c.instructions+=3;goto B6dd3d0;
case 0x6dd3d1:c.instructions+=2;goto B6dd3d1;
case 0x6dd3d2:c.instructions+=1;goto B6dd3d2;
case 0x6dd3d8:goto L6dd3d8;
case 0x6dd3db:c.instructions+=2;goto B6dd3db;
case 0x6dd3de:c.instructions+=1;goto B6dd3de;
case 0x6dd3e0:goto L6dd3e0;
case 0x6dd3e3:c.instructions+=1;goto B6dd3e3;
case 0x6dd3e5:goto L6dd3e5;
case 0x6dd3e8:c.instructions+=1;goto B6dd3e8;
case 0x6dd3ea:goto L6dd3ea;
case 0x6dd3ed:c.instructions+=2;goto B6dd3ed;
case 0x6dd3ef:c.instructions+=1;goto B6dd3ef;
case 0x6dd3f1:goto L6dd3f1;
case 0x6dd3f6:c.instructions+=6;goto B6dd3f6;
case 0x6dd3f8:c.instructions+=5;goto B6dd3f8;
case 0x6dd3f9:c.instructions+=4;goto B6dd3f9;
case 0x6dd404:c.instructions+=3;goto B6dd404;
case 0x6dd406:c.instructions+=2;goto B6dd406;
case 0x6dd407:c.instructions+=1;goto B6dd407;
case 0x6dd40d:goto L6dd40d;
case 0x6dd410:c.instructions+=2;goto B6dd410;
case 0x6dd417:c.instructions+=1;goto B6dd417;
case 0x6dd419:goto L6dd419;
case 0x6dd420:c.instructions+=8;goto B6dd420;
case 0x6dd423:c.instructions+=7;goto B6dd423;
case 0x6dd428:c.instructions+=6;goto B6dd428;
case 0x6dd42a:c.instructions+=5;goto B6dd42a;
case 0x6dd42b:c.instructions+=4;goto B6dd42b;
case 0x6dd42d:c.instructions+=3;goto B6dd42d;
case 0x6dd42e:c.instructions+=2;goto B6dd42e;
case 0x6dd42f:c.instructions+=1;goto B6dd42f;
case 0x6dd435:goto L6dd435;
case 0x6dd437:c.instructions+=2;goto B6dd437;
case 0x6dd43a:c.instructions+=1;goto B6dd43a;
case 0x6dd43c:goto L6dd43c;
case 0x6dd43f:c.instructions+=8;goto B6dd43f;
case 0x6dd441:c.instructions+=7;goto B6dd441;
case 0x6dd446:c.instructions+=6;goto B6dd446;
case 0x6dd448:c.instructions+=5;goto B6dd448;
case 0x6dd449:c.instructions+=4;goto B6dd449;
case 0x6dd44b:c.instructions+=3;goto B6dd44b;
case 0x6dd44c:c.instructions+=2;goto B6dd44c;
case 0x6dd44d:c.instructions+=1;goto B6dd44d;
case 0x6dd453:goto L6dd453;
case 0x6dd457:c.instructions+=3;goto B6dd457;
case 0x6dd45a:c.instructions+=2;goto B6dd45a;
case 0x6dd45d:c.instructions+=1;goto B6dd45d;
case 0x6dd45f:goto L6dd45f;
case 0x6dd462:c.instructions+=8;goto B6dd462;
case 0x6dd465:c.instructions+=7;goto B6dd465;
case 0x6dd46a:c.instructions+=6;goto B6dd46a;
case 0x6dd46c:c.instructions+=5;goto B6dd46c;
case 0x6dd46d:c.instructions+=4;goto B6dd46d;
case 0x6dd46f:c.instructions+=3;goto B6dd46f;
case 0x6dd470:c.instructions+=2;goto B6dd470;
case 0x6dd471:c.instructions+=1;goto B6dd471;
case 0x6dd477:goto L6dd477;
case 0x6dd47b:c.instructions+=3;goto B6dd47b;
case 0x6dd47e:c.instructions+=2;goto B6dd47e;
case 0x6dd481:c.instructions+=1;goto B6dd481;
case 0x6dd483:goto L6dd483;
case 0x6dd486:c.instructions+=8;goto B6dd486;
case 0x6dd489:c.instructions+=7;goto B6dd489;
case 0x6dd48e:c.instructions+=6;goto B6dd48e;
case 0x6dd490:c.instructions+=5;goto B6dd490;
case 0x6dd491:c.instructions+=4;goto B6dd491;
case 0x6dd493:c.instructions+=3;goto B6dd493;
case 0x6dd494:c.instructions+=2;goto B6dd494;
case 0x6dd495:c.instructions+=1;goto B6dd495;
case 0x6dd49b:goto L6dd49b;
case 0x6dd49f:c.instructions+=3;goto B6dd49f;
case 0x6dd4a2:c.instructions+=2;goto B6dd4a2;
case 0x6dd4a5:c.instructions+=1;goto B6dd4a5;
case 0x6dd4a7:goto L6dd4a7;
case 0x6dd4aa:c.instructions+=8;goto B6dd4aa;
case 0x6dd4ad:c.instructions+=7;goto B6dd4ad;
case 0x6dd4b2:c.instructions+=6;goto B6dd4b2;
case 0x6dd4b4:c.instructions+=5;goto B6dd4b4;
case 0x6dd4b5:c.instructions+=4;goto B6dd4b5;
case 0x6dd4b7:c.instructions+=3;goto B6dd4b7;
case 0x6dd4b8:c.instructions+=2;goto B6dd4b8;
case 0x6dd4b9:c.instructions+=1;goto B6dd4b9;
case 0x6dd4bf:goto L6dd4bf;
case 0x6dd4c3:c.instructions+=3;goto B6dd4c3;
case 0x6dd4c9:c.instructions+=2;goto B6dd4c9;
case 0x6dd4cc:c.instructions+=1;goto B6dd4cc;
case 0x6dd4ce:goto L6dd4ce;
case 0x6dd4d1:c.instructions+=8;goto B6dd4d1;
case 0x6dd4d7:c.instructions+=7;goto B6dd4d7;
case 0x6dd4dc:c.instructions+=6;goto B6dd4dc;
case 0x6dd4de:c.instructions+=5;goto B6dd4de;
case 0x6dd4df:c.instructions+=4;goto B6dd4df;
case 0x6dd4e1:c.instructions+=3;goto B6dd4e1;
case 0x6dd4e2:c.instructions+=2;goto B6dd4e2;
case 0x6dd4e3:c.instructions+=1;goto B6dd4e3;
case 0x6dd4e9:goto L6dd4e9;
case 0x6dd4ed:c.instructions+=3;goto B6dd4ed;
case 0x6dd4f3:c.instructions+=2;goto B6dd4f3;
case 0x6dd4f6:c.instructions+=1;goto B6dd4f6;
case 0x6dd4f8:goto L6dd4f8;
case 0x6dd4fb:c.instructions+=8;goto B6dd4fb;
case 0x6dd501:c.instructions+=7;goto B6dd501;
case 0x6dd506:c.instructions+=6;goto B6dd506;
case 0x6dd508:c.instructions+=5;goto B6dd508;
case 0x6dd509:c.instructions+=4;goto B6dd509;
case 0x6dd50b:c.instructions+=3;goto B6dd50b;
case 0x6dd50c:c.instructions+=2;goto B6dd50c;
case 0x6dd50d:c.instructions+=1;goto B6dd50d;
case 0x6dd513:goto L6dd513;
case 0x6dd517:c.instructions+=3;goto B6dd517;
case 0x6dd51d:c.instructions+=2;goto B6dd51d;
case 0x6dd520:c.instructions+=1;goto B6dd520;
case 0x6dd522:goto L6dd522;
case 0x6dd525:c.instructions+=8;goto B6dd525;
case 0x6dd52b:c.instructions+=7;goto B6dd52b;
case 0x6dd530:c.instructions+=6;goto B6dd530;
case 0x6dd532:c.instructions+=5;goto B6dd532;
case 0x6dd533:c.instructions+=4;goto B6dd533;
case 0x6dd535:c.instructions+=3;goto B6dd535;
case 0x6dd536:c.instructions+=2;goto B6dd536;
case 0x6dd537:c.instructions+=1;goto B6dd537;
case 0x6dd53d:goto L6dd53d;
case 0x6dd541:c.instructions+=3;goto B6dd541;
case 0x6dd547:c.instructions+=2;goto B6dd547;
case 0x6dd54a:c.instructions+=1;goto B6dd54a;
case 0x6dd54c:goto L6dd54c;
case 0x6dd54f:c.instructions+=8;goto B6dd54f;
case 0x6dd555:c.instructions+=7;goto B6dd555;
case 0x6dd55a:c.instructions+=6;goto B6dd55a;
case 0x6dd55c:c.instructions+=5;goto B6dd55c;
case 0x6dd55d:c.instructions+=4;goto B6dd55d;
case 0x6dd55f:c.instructions+=3;goto B6dd55f;
case 0x6dd560:c.instructions+=2;goto B6dd560;
case 0x6dd561:c.instructions+=1;goto B6dd561;
case 0x6dd567:goto L6dd567;
case 0x6dd56b:c.instructions+=3;goto B6dd56b;
case 0x6dd571:c.instructions+=2;goto B6dd571;
case 0x6dd574:c.instructions+=1;goto B6dd574;
case 0x6dd576:goto L6dd576;
case 0x6dd579:c.instructions+=8;goto B6dd579;
case 0x6dd57f:c.instructions+=7;goto B6dd57f;
case 0x6dd584:c.instructions+=6;goto B6dd584;
case 0x6dd586:c.instructions+=5;goto B6dd586;
case 0x6dd587:c.instructions+=4;goto B6dd587;
case 0x6dd589:c.instructions+=3;goto B6dd589;
case 0x6dd58a:c.instructions+=2;goto B6dd58a;
case 0x6dd58b:c.instructions+=1;goto B6dd58b;
case 0x6dd591:goto L6dd591;
case 0x6dd595:c.instructions+=3;goto B6dd595;
case 0x6dd59b:c.instructions+=2;goto B6dd59b;
case 0x6dd59e:c.instructions+=1;goto B6dd59e;
case 0x6dd5a0:goto L6dd5a0;
case 0x6dd5a3:c.instructions+=8;goto B6dd5a3;
case 0x6dd5a9:c.instructions+=7;goto B6dd5a9;
case 0x6dd5ae:c.instructions+=6;goto B6dd5ae;
case 0x6dd5b0:c.instructions+=5;goto B6dd5b0;
case 0x6dd5b1:c.instructions+=4;goto B6dd5b1;
case 0x6dd5b3:c.instructions+=3;goto B6dd5b3;
case 0x6dd5b4:c.instructions+=2;goto B6dd5b4;
case 0x6dd5b5:c.instructions+=1;goto B6dd5b5;
case 0x6dd5bb:goto L6dd5bb;
case 0x6dd5bf:c.instructions+=3;goto B6dd5bf;
case 0x6dd5c5:c.instructions+=2;goto B6dd5c5;
case 0x6dd5c8:c.instructions+=1;goto B6dd5c8;
case 0x6dd5ca:goto L6dd5ca;
case 0x6dd5cd:c.instructions+=8;goto B6dd5cd;
case 0x6dd5d3:c.instructions+=7;goto B6dd5d3;
case 0x6dd5d8:c.instructions+=6;goto B6dd5d8;
case 0x6dd5da:c.instructions+=5;goto B6dd5da;
case 0x6dd5db:c.instructions+=4;goto B6dd5db;
case 0x6dd5dd:c.instructions+=3;goto B6dd5dd;
case 0x6dd5de:c.instructions+=2;goto B6dd5de;
case 0x6dd5df:c.instructions+=1;goto B6dd5df;
case 0x6dd5e5:goto L6dd5e5;
case 0x6dd5e9:c.instructions+=3;goto B6dd5e9;
case 0x6dd5ef:c.instructions+=2;goto B6dd5ef;
case 0x6dd5f2:c.instructions+=1;goto B6dd5f2;
case 0x6dd5f4:goto L6dd5f4;
case 0x6dd5f7:c.instructions+=8;goto B6dd5f7;
case 0x6dd5fd:c.instructions+=7;goto B6dd5fd;
case 0x6dd602:c.instructions+=6;goto B6dd602;
case 0x6dd604:c.instructions+=5;goto B6dd604;
case 0x6dd605:c.instructions+=4;goto B6dd605;
case 0x6dd607:c.instructions+=3;goto B6dd607;
case 0x6dd608:c.instructions+=2;goto B6dd608;
case 0x6dd609:c.instructions+=1;goto B6dd609;
case 0x6dd60f:goto L6dd60f;
case 0x6dd613:c.instructions+=3;goto B6dd613;
case 0x6dd619:c.instructions+=2;goto B6dd619;
case 0x6dd61c:c.instructions+=1;goto B6dd61c;
case 0x6dd61e:goto L6dd61e;
case 0x6dd621:c.instructions+=8;goto B6dd621;
case 0x6dd627:c.instructions+=7;goto B6dd627;
case 0x6dd62c:c.instructions+=6;goto B6dd62c;
case 0x6dd62e:c.instructions+=5;goto B6dd62e;
case 0x6dd62f:c.instructions+=4;goto B6dd62f;
case 0x6dd631:c.instructions+=3;goto B6dd631;
case 0x6dd632:c.instructions+=2;goto B6dd632;
case 0x6dd633:c.instructions+=1;goto B6dd633;
case 0x6dd639:goto L6dd639;
case 0x6dd63d:c.instructions+=3;goto B6dd63d;
case 0x6dd643:c.instructions+=2;goto B6dd643;
case 0x6dd646:c.instructions+=1;goto B6dd646;
case 0x6dd648:goto L6dd648;
case 0x6dd64b:c.instructions+=8;goto B6dd64b;
case 0x6dd651:c.instructions+=7;goto B6dd651;
case 0x6dd656:c.instructions+=6;goto B6dd656;
case 0x6dd658:c.instructions+=5;goto B6dd658;
case 0x6dd659:c.instructions+=4;goto B6dd659;
case 0x6dd65b:c.instructions+=3;goto B6dd65b;
case 0x6dd65c:c.instructions+=2;goto B6dd65c;
case 0x6dd65d:c.instructions+=1;goto B6dd65d;
case 0x6dd663:goto L6dd663;
case 0x6dd667:c.instructions+=3;goto B6dd667;
case 0x6dd66d:c.instructions+=2;goto B6dd66d;
case 0x6dd670:c.instructions+=1;goto B6dd670;
case 0x6dd672:goto L6dd672;
case 0x6dd675:c.instructions+=8;goto B6dd675;
case 0x6dd67b:c.instructions+=7;goto B6dd67b;
case 0x6dd680:c.instructions+=6;goto B6dd680;
case 0x6dd682:c.instructions+=5;goto B6dd682;
case 0x6dd683:c.instructions+=4;goto B6dd683;
case 0x6dd685:c.instructions+=3;goto B6dd685;
case 0x6dd686:c.instructions+=2;goto B6dd686;
case 0x6dd687:c.instructions+=1;goto B6dd687;
case 0x6dd68d:goto L6dd68d;
case 0x6dd693:c.instructions+=4;goto B6dd693;
case 0x6dd694:c.instructions+=3;goto B6dd694;
case 0x6dd697:c.instructions+=2;goto B6dd697;
case 0x6dd699:c.instructions+=1;goto B6dd699;
case 0x6dd69f:goto L6dd69f;
case 0x6dd6a2:c.instructions+=1;goto B6dd6a2;
case 0x6dd6a8:goto L6dd6a8;
case 0x6dd6b0:goto L6dd6b0;
case 0x6dd6b7:c.instructions+=3;goto B6dd6b7;
case 0x6dd6bc:c.instructions+=2;goto B6dd6bc;
case 0x6dd6be:c.instructions+=1;goto B6dd6be;
case 0x6dd6c0:goto L6dd6c0;
case 0x6dd6c5:c.instructions+=7;goto B6dd6c5;
case 0x6dd6c6:c.instructions+=6;goto B6dd6c6;
case 0x6dd6c7:c.instructions+=5;goto B6dd6c7;
case 0x6dd6c8:c.instructions+=4;goto B6dd6c8;
case 0x6dd6cf:c.instructions+=3;goto B6dd6cf;
case 0x6dd6d1:c.instructions+=2;goto B6dd6d1;
case 0x6dd6d2:c.instructions+=1;goto B6dd6d2;
case 0x6dd6d8:goto L6dd6d8;
case 0x6dd6df:c.instructions+=1;goto B6dd6df;
case 0x6dd6e1:goto L6dd6e1;
case 0x6dd6e6:c.instructions+=7;goto B6dd6e6;
case 0x6dd6e7:c.instructions+=6;goto B6dd6e7;
case 0x6dd6e9:c.instructions+=5;goto B6dd6e9;
case 0x6dd6ea:c.instructions+=4;goto B6dd6ea;
case 0x6dd6f1:c.instructions+=3;goto B6dd6f1;
case 0x6dd6f3:c.instructions+=2;goto B6dd6f3;
case 0x6dd6f4:c.instructions+=1;goto B6dd6f4;
case 0x6dd6fa:goto L6dd6fa;
case 0x6dd701:c.instructions+=2;goto B6dd701;
case 0x6dd703:c.instructions+=1;goto B6dd703;
case 0x6dd705:goto L6dd705;
case 0x6dd70a:c.instructions+=7;goto B6dd70a;
case 0x6dd70c:c.instructions+=6;goto B6dd70c;
case 0x6dd70e:c.instructions+=5;goto B6dd70e;
case 0x6dd70f:c.instructions+=4;goto B6dd70f;
case 0x6dd71a:c.instructions+=3;goto B6dd71a;
case 0x6dd71c:c.instructions+=2;goto B6dd71c;
case 0x6dd71d:c.instructions+=1;goto B6dd71d;
case 0x6dd723:goto L6dd723;
case 0x6dd72a:c.instructions+=1;goto B6dd72a;
case 0x6dd72c:goto L6dd72c;
case 0x6dd731:c.instructions+=7;goto B6dd731;
case 0x6dd732:c.instructions+=6;goto B6dd732;
case 0x6dd734:c.instructions+=5;goto B6dd734;
case 0x6dd735:c.instructions+=4;goto B6dd735;
case 0x6dd73c:c.instructions+=3;goto B6dd73c;
case 0x6dd73e:c.instructions+=2;goto B6dd73e;
case 0x6dd73f:c.instructions+=1;goto B6dd73f;
case 0x6dd745:goto L6dd745;
case 0x6dd746:c.instructions+=2;goto B6dd746;
case 0x6dd749:c.instructions+=1;goto B6dd749;
case 0x6dd74f:goto L6dd74f;
case 0x6dd750:c.instructions+=2;goto B6dd750;
case 0x6dd751:c.instructions+=1;goto B6dd751;
case 0x6dd752:goto L6dd752;
case 0x6dd753:c.instructions+=2;goto B6dd753;
case 0x6dd756:c.instructions+=1;goto B6dd756;
case 0x6dd760:goto L6dd760;
case 0x6dd763:c.instructions+=8;goto B6dd763;
case 0x6dd764:c.instructions+=7;goto B6dd764;
case 0x6dd765:c.instructions+=6;goto B6dd765;
case 0x6dd766:c.instructions+=5;goto B6dd766;
case 0x6dd768:c.instructions+=4;goto B6dd768;
case 0x6dd76d:c.instructions+=3;goto B6dd76d;
case 0x6dd76e:c.instructions+=2;goto B6dd76e;
case 0x6dd773:c.instructions+=1;goto B6dd773;
case 0x6dd778:goto L6dd778;
case 0x6dd77b:c.instructions+=1;goto B6dd77b;
case 0x6dd780:goto L6dd780;
case 0x6dd786:c.instructions+=4;goto B6dd786;
case 0x6dd787:c.instructions+=3;goto B6dd787;
case 0x6dd78b:c.instructions+=2;goto B6dd78b;
case 0x6dd790:c.instructions+=1;goto B6dd790;
case 0x6dd796:goto L6dd796;
case 0x6dd79b:c.instructions+=46;goto B6dd79b;
case 0x6dd79d:c.instructions+=45;goto B6dd79d;
case 0x6dd7a1:c.instructions+=44;goto B6dd7a1;
case 0x6dd7a6:c.instructions+=43;goto B6dd7a6;
case 0x6dd7a8:c.instructions+=42;goto B6dd7a8;
case 0x6dd7ac:c.instructions+=41;goto B6dd7ac;
case 0x6dd7b1:c.instructions+=40;goto B6dd7b1;
case 0x6dd7b3:c.instructions+=39;goto B6dd7b3;
case 0x6dd7b7:c.instructions+=38;goto B6dd7b7;
case 0x6dd7bc:c.instructions+=37;goto B6dd7bc;
case 0x6dd7be:c.instructions+=36;goto B6dd7be;
case 0x6dd7c2:c.instructions+=35;goto B6dd7c2;
case 0x6dd7c7:c.instructions+=34;goto B6dd7c7;
case 0x6dd7c9:c.instructions+=33;goto B6dd7c9;
case 0x6dd7cd:c.instructions+=32;goto B6dd7cd;
case 0x6dd7d2:c.instructions+=31;goto B6dd7d2;
case 0x6dd7d4:c.instructions+=30;goto B6dd7d4;
case 0x6dd7d8:c.instructions+=29;goto B6dd7d8;
case 0x6dd7dd:c.instructions+=28;goto B6dd7dd;
case 0x6dd7df:c.instructions+=27;goto B6dd7df;
case 0x6dd7e3:c.instructions+=26;goto B6dd7e3;
case 0x6dd7e8:c.instructions+=25;goto B6dd7e8;
case 0x6dd7ea:c.instructions+=24;goto B6dd7ea;
case 0x6dd7ee:c.instructions+=23;goto B6dd7ee;
case 0x6dd7f3:c.instructions+=22;goto B6dd7f3;
case 0x6dd7f5:c.instructions+=21;goto B6dd7f5;
case 0x6dd7f9:c.instructions+=20;goto B6dd7f9;
case 0x6dd7fe:c.instructions+=19;goto B6dd7fe;
case 0x6dd800:c.instructions+=18;goto B6dd800;
case 0x6dd804:c.instructions+=17;goto B6dd804;
case 0x6dd809:c.instructions+=16;goto B6dd809;
case 0x6dd80b:c.instructions+=15;goto B6dd80b;
case 0x6dd80f:c.instructions+=14;goto B6dd80f;
case 0x6dd814:c.instructions+=13;goto B6dd814;
case 0x6dd816:c.instructions+=12;goto B6dd816;
case 0x6dd81a:c.instructions+=11;goto B6dd81a;
case 0x6dd81f:c.instructions+=10;goto B6dd81f;
case 0x6dd821:c.instructions+=9;goto B6dd821;
case 0x6dd822:c.instructions+=8;goto B6dd822;
case 0x6dd826:c.instructions+=7;goto B6dd826;
case 0x6dd82b:c.instructions+=6;goto B6dd82b;
case 0x6dd830:c.instructions+=5;goto B6dd830;
case 0x6dd832:c.instructions+=4;goto B6dd832;
case 0x6dd834:c.instructions+=3;goto B6dd834;
case 0x6dd837:c.instructions+=2;goto B6dd837;
case 0x6dd83b:c.instructions+=1;goto B6dd83b;
case 0x6dd840:goto L6dd840;
case 0x6dd843:c.instructions+=9;goto B6dd843;
case 0x6dd84a:c.instructions+=8;goto B6dd84a;
case 0x6dd84d:c.instructions+=7;goto B6dd84d;
case 0x6dd852:c.instructions+=6;goto B6dd852;
case 0x6dd854:c.instructions+=5;goto B6dd854;
case 0x6dd855:c.instructions+=4;goto B6dd855;
case 0x6dd857:c.instructions+=3;goto B6dd857;
case 0x6dd858:c.instructions+=2;goto B6dd858;
case 0x6dd859:c.instructions+=1;goto B6dd859;
case 0x6dd85f:goto L6dd85f;
case 0x6dd862:c.instructions+=9;goto B6dd862;
case 0x6dd869:c.instructions+=8;goto B6dd869;
case 0x6dd86c:c.instructions+=7;goto B6dd86c;
case 0x6dd871:c.instructions+=6;goto B6dd871;
case 0x6dd873:c.instructions+=5;goto B6dd873;
case 0x6dd874:c.instructions+=4;goto B6dd874;
case 0x6dd876:c.instructions+=3;goto B6dd876;
case 0x6dd877:c.instructions+=2;goto B6dd877;
case 0x6dd878:c.instructions+=1;goto B6dd878;
case 0x6dd87e:goto L6dd87e;
case 0x6dd880:c.instructions+=9;goto B6dd880;
case 0x6dd883:c.instructions+=8;goto B6dd883;
case 0x6dd885:c.instructions+=7;goto B6dd885;
case 0x6dd88a:c.instructions+=6;goto B6dd88a;
case 0x6dd88c:c.instructions+=5;goto B6dd88c;
case 0x6dd88d:c.instructions+=4;goto B6dd88d;
case 0x6dd88f:c.instructions+=3;goto B6dd88f;
case 0x6dd890:c.instructions+=2;goto B6dd890;
case 0x6dd891:c.instructions+=1;goto B6dd891;
case 0x6dd897:goto L6dd897;
case 0x6dd89a:c.instructions+=10;goto B6dd89a;
case 0x6dd89e:c.instructions+=9;goto B6dd89e;
case 0x6dd8a1:c.instructions+=8;goto B6dd8a1;
case 0x6dd8a4:c.instructions+=7;goto B6dd8a4;
case 0x6dd8a9:c.instructions+=6;goto B6dd8a9;
case 0x6dd8ab:c.instructions+=5;goto B6dd8ab;
case 0x6dd8ac:c.instructions+=4;goto B6dd8ac;
case 0x6dd8ae:c.instructions+=3;goto B6dd8ae;
case 0x6dd8af:c.instructions+=2;goto B6dd8af;
case 0x6dd8b0:c.instructions+=1;goto B6dd8b0;
case 0x6dd8b6:goto L6dd8b6;
case 0x6dd8b9:c.instructions+=10;goto B6dd8b9;
case 0x6dd8bd:c.instructions+=9;goto B6dd8bd;
case 0x6dd8c0:c.instructions+=8;goto B6dd8c0;
case 0x6dd8c3:c.instructions+=7;goto B6dd8c3;
case 0x6dd8c8:c.instructions+=6;goto B6dd8c8;
case 0x6dd8ca:c.instructions+=5;goto B6dd8ca;
case 0x6dd8cb:c.instructions+=4;goto B6dd8cb;
case 0x6dd8cd:c.instructions+=3;goto B6dd8cd;
case 0x6dd8ce:c.instructions+=2;goto B6dd8ce;
case 0x6dd8cf:c.instructions+=1;goto B6dd8cf;
case 0x6dd8d5:goto L6dd8d5;
case 0x6dd8d8:c.instructions+=10;goto B6dd8d8;
case 0x6dd8dc:c.instructions+=9;goto B6dd8dc;
case 0x6dd8df:c.instructions+=8;goto B6dd8df;
case 0x6dd8e2:c.instructions+=7;goto B6dd8e2;
case 0x6dd8e7:c.instructions+=6;goto B6dd8e7;
case 0x6dd8e9:c.instructions+=5;goto B6dd8e9;
case 0x6dd8ea:c.instructions+=4;goto B6dd8ea;
case 0x6dd8ec:c.instructions+=3;goto B6dd8ec;
case 0x6dd8ed:c.instructions+=2;goto B6dd8ed;
case 0x6dd8ee:c.instructions+=1;goto B6dd8ee;
case 0x6dd8f4:goto L6dd8f4;
case 0x6dd8fa:c.instructions+=10;goto B6dd8fa;
case 0x6dd8fe:c.instructions+=9;goto B6dd8fe;
case 0x6dd901:c.instructions+=8;goto B6dd901;
case 0x6dd907:c.instructions+=7;goto B6dd907;
case 0x6dd90c:c.instructions+=6;goto B6dd90c;
case 0x6dd90e:c.instructions+=5;goto B6dd90e;
case 0x6dd90f:c.instructions+=4;goto B6dd90f;
case 0x6dd911:c.instructions+=3;goto B6dd911;
case 0x6dd912:c.instructions+=2;goto B6dd912;
case 0x6dd913:c.instructions+=1;goto B6dd913;
case 0x6dd919:goto L6dd919;
case 0x6dd91f:c.instructions+=10;goto B6dd91f;
case 0x6dd923:c.instructions+=9;goto B6dd923;
case 0x6dd926:c.instructions+=8;goto B6dd926;
case 0x6dd92b:c.instructions+=7;goto B6dd92b;
case 0x6dd931:c.instructions+=6;goto B6dd931;
case 0x6dd933:c.instructions+=5;goto B6dd933;
case 0x6dd934:c.instructions+=4;goto B6dd934;
case 0x6dd936:c.instructions+=3;goto B6dd936;
case 0x6dd937:c.instructions+=2;goto B6dd937;
case 0x6dd938:c.instructions+=1;goto B6dd938;
case 0x6dd93e:goto L6dd93e;
case 0x6dd944:c.instructions+=10;goto B6dd944;
case 0x6dd948:c.instructions+=9;goto B6dd948;
case 0x6dd94b:c.instructions+=8;goto B6dd94b;
case 0x6dd951:c.instructions+=7;goto B6dd951;
case 0x6dd956:c.instructions+=6;goto B6dd956;
case 0x6dd958:c.instructions+=5;goto B6dd958;
case 0x6dd959:c.instructions+=4;goto B6dd959;
case 0x6dd95b:c.instructions+=3;goto B6dd95b;
case 0x6dd95c:c.instructions+=2;goto B6dd95c;
case 0x6dd95d:c.instructions+=1;goto B6dd95d;
case 0x6dd963:goto L6dd963;
case 0x6dd969:c.instructions+=10;goto B6dd969;
case 0x6dd96d:c.instructions+=9;goto B6dd96d;
case 0x6dd970:c.instructions+=8;goto B6dd970;
case 0x6dd976:c.instructions+=7;goto B6dd976;
case 0x6dd97b:c.instructions+=6;goto B6dd97b;
case 0x6dd97d:c.instructions+=5;goto B6dd97d;
case 0x6dd97e:c.instructions+=4;goto B6dd97e;
case 0x6dd980:c.instructions+=3;goto B6dd980;
case 0x6dd981:c.instructions+=2;goto B6dd981;
case 0x6dd982:c.instructions+=1;goto B6dd982;
case 0x6dd988:goto L6dd988;
case 0x6dd98e:c.instructions+=10;goto B6dd98e;
case 0x6dd992:c.instructions+=9;goto B6dd992;
case 0x6dd995:c.instructions+=8;goto B6dd995;
case 0x6dd99b:c.instructions+=7;goto B6dd99b;
case 0x6dd9a0:c.instructions+=6;goto B6dd9a0;
case 0x6dd9a2:c.instructions+=5;goto B6dd9a2;
case 0x6dd9a3:c.instructions+=4;goto B6dd9a3;
case 0x6dd9a5:c.instructions+=3;goto B6dd9a5;
case 0x6dd9a6:c.instructions+=2;goto B6dd9a6;
case 0x6dd9a7:c.instructions+=1;goto B6dd9a7;
case 0x6dd9ad:goto L6dd9ad;
case 0x6dd9b3:c.instructions+=10;goto B6dd9b3;
case 0x6dd9b7:c.instructions+=9;goto B6dd9b7;
case 0x6dd9ba:c.instructions+=8;goto B6dd9ba;
case 0x6dd9c0:c.instructions+=7;goto B6dd9c0;
case 0x6dd9c5:c.instructions+=6;goto B6dd9c5;
case 0x6dd9c7:c.instructions+=5;goto B6dd9c7;
case 0x6dd9c8:c.instructions+=4;goto B6dd9c8;
case 0x6dd9ca:c.instructions+=3;goto B6dd9ca;
case 0x6dd9cb:c.instructions+=2;goto B6dd9cb;
case 0x6dd9cc:c.instructions+=1;goto B6dd9cc;
case 0x6dd9d2:goto L6dd9d2;
case 0x6dd9d8:c.instructions+=10;goto B6dd9d8;
case 0x6dd9dc:c.instructions+=9;goto B6dd9dc;
case 0x6dd9df:c.instructions+=8;goto B6dd9df;
case 0x6dd9e5:c.instructions+=7;goto B6dd9e5;
case 0x6dd9ea:c.instructions+=6;goto B6dd9ea;
case 0x6dd9ec:c.instructions+=5;goto B6dd9ec;
case 0x6dd9ed:c.instructions+=4;goto B6dd9ed;
case 0x6dd9ef:c.instructions+=3;goto B6dd9ef;
case 0x6dd9f0:c.instructions+=2;goto B6dd9f0;
case 0x6dd9f1:c.instructions+=1;goto B6dd9f1;
case 0x6dd9f7:goto L6dd9f7;
case 0x6dd9fd:c.instructions+=10;goto B6dd9fd;
case 0x6dda01:c.instructions+=9;goto B6dda01;
case 0x6dda04:c.instructions+=8;goto B6dda04;
case 0x6dda0a:c.instructions+=7;goto B6dda0a;
case 0x6dda0f:c.instructions+=6;goto B6dda0f;
case 0x6dda11:c.instructions+=5;goto B6dda11;
case 0x6dda12:c.instructions+=4;goto B6dda12;
case 0x6dda14:c.instructions+=3;goto B6dda14;
case 0x6dda15:c.instructions+=2;goto B6dda15;
case 0x6dda16:c.instructions+=1;goto B6dda16;
case 0x6dda1c:goto L6dda1c;
case 0x6dda22:c.instructions+=10;goto B6dda22;
case 0x6dda26:c.instructions+=9;goto B6dda26;
case 0x6dda29:c.instructions+=8;goto B6dda29;
case 0x6dda2f:c.instructions+=7;goto B6dda2f;
case 0x6dda34:c.instructions+=6;goto B6dda34;
case 0x6dda36:c.instructions+=5;goto B6dda36;
case 0x6dda37:c.instructions+=4;goto B6dda37;
case 0x6dda39:c.instructions+=3;goto B6dda39;
case 0x6dda3a:c.instructions+=2;goto B6dda3a;
case 0x6dda3b:c.instructions+=1;goto B6dda3b;
case 0x6dda41:goto L6dda41;
case 0x6dda47:c.instructions+=10;goto B6dda47;
case 0x6dda4b:c.instructions+=9;goto B6dda4b;
case 0x6dda4e:c.instructions+=8;goto B6dda4e;
case 0x6dda54:c.instructions+=7;goto B6dda54;
case 0x6dda59:c.instructions+=6;goto B6dda59;
case 0x6dda5b:c.instructions+=5;goto B6dda5b;
case 0x6dda5c:c.instructions+=4;goto B6dda5c;
case 0x6dda5e:c.instructions+=3;goto B6dda5e;
case 0x6dda5f:c.instructions+=2;goto B6dda5f;
case 0x6dda60:c.instructions+=1;goto B6dda60;
case 0x6dda66:goto L6dda66;
case 0x6dda6c:c.instructions+=10;goto B6dda6c;
case 0x6dda70:c.instructions+=9;goto B6dda70;
case 0x6dda73:c.instructions+=8;goto B6dda73;
case 0x6dda79:c.instructions+=7;goto B6dda79;
case 0x6dda7e:c.instructions+=6;goto B6dda7e;
case 0x6dda80:c.instructions+=5;goto B6dda80;
case 0x6dda81:c.instructions+=4;goto B6dda81;
case 0x6dda83:c.instructions+=3;goto B6dda83;
case 0x6dda84:c.instructions+=2;goto B6dda84;
case 0x6dda85:c.instructions+=1;goto B6dda85;
case 0x6dda8b:goto L6dda8b;
case 0x6dda8f:c.instructions+=4;goto B6dda8f;
case 0x6dda90:c.instructions+=3;goto B6dda90;
case 0x6dda93:c.instructions+=2;goto B6dda93;
case 0x6dda95:c.instructions+=1;goto B6dda95;
case 0x6dda9b:goto L6dda9b;
case 0x6dda9e:c.instructions+=2;goto B6dda9e;
case 0x6dda9f:c.instructions+=1;goto B6dda9f;
case 0x6ddaa1:goto L6ddaa1;
case 0x6ddaa6:c.instructions+=8;goto B6ddaa6;
case 0x6ddaab:c.instructions+=7;goto B6ddaab;
case 0x6ddaac:c.instructions+=6;goto B6ddaac;
case 0x6ddaad:c.instructions+=5;goto B6ddaad;
case 0x6ddaae:c.instructions+=4;goto B6ddaae;
case 0x6ddab5:c.instructions+=3;goto B6ddab5;
case 0x6ddab7:c.instructions+=2;goto B6ddab7;
case 0x6ddab8:c.instructions+=1;goto B6ddab8;
case 0x6ddabe:goto L6ddabe;
case 0x6ddac3:c.instructions+=7;goto B6ddac3;
case 0x6ddac4:c.instructions+=6;goto B6ddac4;
case 0x6ddac6:c.instructions+=5;goto B6ddac6;
case 0x6ddac7:c.instructions+=4;goto B6ddac7;
case 0x6ddace:c.instructions+=3;goto B6ddace;
case 0x6ddad0:c.instructions+=2;goto B6ddad0;
case 0x6ddad1:c.instructions+=1;goto B6ddad1;
case 0x6ddad7:goto L6ddad7;
case 0x6ddadc:c.instructions+=7;goto B6ddadc;
case 0x6ddadd:c.instructions+=6;goto B6ddadd;
case 0x6ddadf:c.instructions+=5;goto B6ddadf;
case 0x6ddae0:c.instructions+=4;goto B6ddae0;
case 0x6ddae7:c.instructions+=3;goto B6ddae7;
case 0x6ddae9:c.instructions+=2;goto B6ddae9;
case 0x6ddaea:c.instructions+=1;goto B6ddaea;
case 0x6ddaf0:goto L6ddaf0;
case 0x6ddaf1:c.instructions+=2;goto B6ddaf1;
case 0x6ddaf4:c.instructions+=1;goto B6ddaf4;
case 0x6ddaf6:goto L6ddaf6;
case 0x6ddaf7:c.instructions+=4;goto B6ddaf7;
case 0x6ddaf8:c.instructions+=3;goto B6ddaf8;
case 0x6ddaf9:c.instructions+=2;goto B6ddaf9;
case 0x6ddafc:c.instructions+=1;goto B6ddafc;
case 0x6ddb00:goto L6ddb00;
case 0x6ddb01:c.instructions+=5;goto B6ddb01;
case 0x6ddb03:c.instructions+=4;goto B6ddb03;
case 0x6ddb05:c.instructions+=3;goto B6ddb05;
case 0x6ddb0a:c.instructions+=2;goto B6ddb0a;
case 0x6ddb0f:c.instructions+=1;goto B6ddb0f;
case 0x6ddb10:goto L6ddb10;
case 0x6ddb12:c.instructions+=1;goto B6ddb12;
case 0x6ddb14:goto L6ddb14;
case 0x6ddb1e:c.instructions+=1;goto B6ddb1e;
case 0x6ddb20:goto L6ddb20;
case 0x6ddb27:goto L6ddb27;
case 0x6ddb29:c.instructions+=4;goto B6ddb29;
case 0x6ddb30:c.instructions+=3;goto B6ddb30;
case 0x6ddb37:c.instructions+=2;goto B6ddb37;
case 0x6ddb3e:c.instructions+=1;goto B6ddb3e;
case 0x6ddb40:goto L6ddb40;
case 0x6ddb46:c.instructions+=1;goto B6ddb46;
case 0x6ddb48:goto L6ddb48;
case 0x6ddb4f:goto L6ddb4f;
case 0x6ddb56:c.instructions+=14;goto B6ddb56;
case 0x6ddb5d:c.instructions+=13;goto B6ddb5d;
case 0x6ddb64:c.instructions+=12;goto B6ddb64;
case 0x6ddb6b:c.instructions+=11;goto B6ddb6b;
case 0x6ddb72:c.instructions+=10;goto B6ddb72;
case 0x6ddb79:c.instructions+=9;goto B6ddb79;
case 0x6ddb80:c.instructions+=8;goto B6ddb80;
case 0x6ddb87:c.instructions+=7;goto B6ddb87;
case 0x6ddb8e:c.instructions+=6;goto B6ddb8e;
case 0x6ddb95:c.instructions+=5;goto B6ddb95;
case 0x6ddb9c:c.instructions+=4;goto B6ddb9c;
case 0x6ddba3:c.instructions+=3;goto B6ddba3;
case 0x6ddba4:c.instructions+=2;goto B6ddba4;
case 0x6ddba7:c.instructions+=1;goto B6ddba7;
case 0x6ddbad:goto L6ddbad;
case 0x6ddbb3:c.instructions+=3;goto B6ddbb3;
case 0x6ddbb8:c.instructions+=2;goto B6ddbb8;
case 0x6ddbb9:c.instructions+=1;goto B6ddbb9;
case 0x6ddbc0:goto L6ddbc0;
case 0x6ddbc6:c.instructions+=7;goto B6ddbc6;
case 0x6ddbca:c.instructions+=6;goto B6ddbca;
case 0x6ddbcd:c.instructions+=5;goto B6ddbcd;
case 0x6ddbd1:c.instructions+=4;goto B6ddbd1;
case 0x6ddbd3:c.instructions+=3;goto B6ddbd3;
case 0x6ddbd9:c.instructions+=2;goto B6ddbd9;
case 0x6ddbdd:c.instructions+=1;goto B6ddbdd;
case 0x6ddbdf:goto L6ddbdf;
case 0x6ddbe5:goto L6ddbe5;
case 0x6ddbe8:c.instructions+=11;goto B6ddbe8;
case 0x6ddbee:c.instructions+=10;goto B6ddbee;
case 0x6ddbf4:c.instructions+=9;goto B6ddbf4;
case 0x6ddbfa:c.instructions+=8;goto B6ddbfa;
case 0x6ddc01:c.instructions+=7;goto B6ddc01;
case 0x6ddc07:c.instructions+=6;goto B6ddc07;
case 0x6ddc0b:c.instructions+=5;goto B6ddc0b;
case 0x6ddc12:c.instructions+=4;goto B6ddc12;
case 0x6ddc16:c.instructions+=3;goto B6ddc16;
case 0x6ddc1c:c.instructions+=2;goto B6ddc1c;
case 0x6ddc22:c.instructions+=1;goto B6ddc22;
case 0x6ddc30:goto L6ddc30;
case 0x6ddc31:c.instructions+=4;goto B6ddc31;
case 0x6ddc37:c.instructions+=3;goto B6ddc37;
case 0x6ddc3d:c.instructions+=2;goto B6ddc3d;
case 0x6ddc3f:c.instructions+=1;goto B6ddc3f;
case 0x6ddc41:goto L6ddc41;
case 0x6ddc47:goto L6ddc47;
case 0x6ddc49:c.instructions+=2;goto B6ddc49;
case 0x6ddc51:c.instructions+=1;goto B6ddc51;
case 0x6ddc53:goto L6ddc53;
case 0x6ddc59:c.instructions+=3;goto B6ddc59;
case 0x6ddc5b:c.instructions+=2;goto B6ddc5b;
case 0x6ddc5e:c.instructions+=1;goto B6ddc5e;
case 0x6ddc60:goto L6ddc60;
case 0x6ddc61:c.instructions+=2;goto B6ddc61;
case 0x6ddc67:c.instructions+=1;goto B6ddc67;
case 0x6ddc69:goto L6ddc69;
case 0x6ddc6f:c.instructions+=1;goto B6ddc6f;
case 0x6ddc71:goto L6ddc71;
case 0x6ddc77:goto L6ddc77;
case 0x6ddc7b:c.instructions+=4;goto B6ddc7b;
case 0x6ddc7f:c.instructions+=3;goto B6ddc7f;
case 0x6ddc81:c.instructions+=2;goto B6ddc81;
case 0x6ddc8b:c.instructions+=1;goto B6ddc8b;
case 0x6ddc8d:goto L6ddc8d;
case 0x6ddc93:goto L6ddc93;
case 0x6ddc95:c.instructions+=8;goto B6ddc95;
case 0x6ddc9b:c.instructions+=7;goto B6ddc9b;
case 0x6ddc9f:c.instructions+=6;goto B6ddc9f;
case 0x6ddca1:c.instructions+=5;goto B6ddca1;
case 0x6ddca5:c.instructions+=4;goto B6ddca5;
case 0x6ddcab:c.instructions+=3;goto B6ddcab;
case 0x6ddcad:c.instructions+=2;goto B6ddcad;
case 0x6ddcb0:c.instructions+=1;goto B6ddcb0;
case 0x6ddcb2:goto L6ddcb2;
case 0x6ddcb6:c.instructions+=1;goto B6ddcb6;
case 0x6ddcbc:goto L6ddcbc;
case 0x6ddcc1:c.instructions+=6;goto B6ddcc1;
case 0x6ddcc2:c.instructions+=5;goto B6ddcc2;
case 0x6ddcc6:c.instructions+=4;goto B6ddcc6;
case 0x6ddcc7:c.instructions+=3;goto B6ddcc7;
case 0x6ddcc8:c.instructions+=2;goto B6ddcc8;
case 0x6ddccb:c.instructions+=1;goto B6ddccb;
case 0x6ddcd0:goto L6ddcd0;
case 0x6ddcd1:c.instructions+=1;goto B6ddcd1;
case 0x6ddce0:goto L6ddce0;
case 0x6ddce3:c.instructions+=12;goto B6ddce3;
case 0x6ddce7:c.instructions+=11;goto B6ddce7;
case 0x6ddce8:c.instructions+=10;goto B6ddce8;
case 0x6ddcee:c.instructions+=9;goto B6ddcee;
case 0x6ddcf0:c.instructions+=8;goto B6ddcf0;
case 0x6ddcf6:c.instructions+=7;goto B6ddcf6;
case 0x6ddcfa:c.instructions+=6;goto B6ddcfa;
case 0x6ddcfc:c.instructions+=5;goto B6ddcfc;
case 0x6ddd04:c.instructions+=4;goto B6ddd04;
case 0x6ddd06:c.instructions+=3;goto B6ddd06;
case 0x6ddd08:c.instructions+=2;goto B6ddd08;
case 0x6ddd0b:c.instructions+=1;goto B6ddd0b;
case 0x6ddd11:goto L6ddd11;
case 0x6ddd15:c.instructions+=14;goto B6ddd15;
case 0x6ddd17:c.instructions+=13;goto B6ddd17;
case 0x6ddd18:c.instructions+=12;goto B6ddd18;
case 0x6ddd1c:c.instructions+=11;goto B6ddd1c;
case 0x6ddd1d:c.instructions+=10;goto B6ddd1d;
case 0x6ddd21:c.instructions+=9;goto B6ddd21;
case 0x6ddd22:c.instructions+=8;goto B6ddd22;
case 0x6ddd26:c.instructions+=7;goto B6ddd26;
case 0x6ddd27:c.instructions+=6;goto B6ddd27;
case 0x6ddd2b:c.instructions+=5;goto B6ddd2b;
case 0x6ddd2c:c.instructions+=4;goto B6ddd2c;
case 0x6ddd32:c.instructions+=3;goto B6ddd32;
case 0x6ddd36:c.instructions+=2;goto B6ddd36;
case 0x6ddd37:c.instructions+=1;goto B6ddd37;
case 0x6ddd3c:goto L6ddd3c;
case 0x6ddd42:c.instructions+=7;goto B6ddd42;
case 0x6ddd48:c.instructions+=6;goto B6ddd48;
case 0x6ddd4c:c.instructions+=5;goto B6ddd4c;
case 0x6ddd50:c.instructions+=4;goto B6ddd50;
case 0x6ddd54:c.instructions+=3;goto B6ddd54;
case 0x6ddd56:c.instructions+=2;goto B6ddd56;
case 0x6ddd59:c.instructions+=1;goto B6ddd59;
case 0x6ddd5b:goto L6ddd5b;
case 0x6ddd5f:c.instructions+=8;goto B6ddd5f;
case 0x6ddd65:c.instructions+=7;goto B6ddd65;
case 0x6ddd69:c.instructions+=6;goto B6ddd69;
case 0x6ddd6d:c.instructions+=5;goto B6ddd6d;
case 0x6ddd71:c.instructions+=4;goto B6ddd71;
case 0x6ddd77:c.instructions+=3;goto B6ddd77;
case 0x6ddd7b:c.instructions+=2;goto B6ddd7b;
case 0x6ddd7f:c.instructions+=1;goto B6ddd7f;
case 0x6ddd80:goto L6ddd80;
case 0x6ddd86:c.instructions+=4;goto B6ddd86;
case 0x6ddd8a:c.instructions+=3;goto B6ddd8a;
case 0x6ddd8c:c.instructions+=2;goto B6ddd8c;
case 0x6ddd8f:c.instructions+=1;goto B6ddd8f;
case 0x6ddd91:goto L6ddd91;
case 0x6ddd97:c.instructions+=1;goto B6ddd97;
case 0x6ddd99:goto L6ddd99;
case 0x6ddd9f:goto L6ddd9f;
case 0x6ddda1:c.instructions+=7;goto B6ddda1;
case 0x6ddda5:c.instructions+=6;goto B6ddda5;
case 0x6ddda7:c.instructions+=5;goto B6ddda7;
case 0x6ddda9:c.instructions+=4;goto B6ddda9;
case 0x6dddad:c.instructions+=3;goto B6dddad;
case 0x6dddaf:c.instructions+=2;goto B6dddaf;
case 0x6dddb2:c.instructions+=1;goto B6dddb2;
case 0x6dddb4:goto L6dddb4;
case 0x6dddb8:c.instructions+=5;goto B6dddb8;
case 0x6dddba:c.instructions+=4;goto B6dddba;
case 0x6dddbe:c.instructions+=3;goto B6dddbe;
case 0x6dddc0:c.instructions+=2;goto B6dddc0;
case 0x6dddc4:c.instructions+=1;goto B6dddc4;
case 0x6dddc6:goto L6dddc6;
case 0x6dddca:goto L6dddca;
case 0x6dddce:goto L6dddce;
case 0x6dddd2:c.instructions+=12;goto B6dddd2;
case 0x6dddd4:c.instructions+=11;goto B6dddd4;
case 0x6dddda:c.instructions+=10;goto B6dddda;
case 0x6dddde:c.instructions+=9;goto B6dddde;
case 0x6ddde0:c.instructions+=8;goto B6ddde0;
case 0x6ddde1:c.instructions+=7;goto B6ddde1;
case 0x6ddde5:c.instructions+=6;goto B6ddde5;
case 0x6ddded:c.instructions+=5;goto B6ddded;
case 0x6dddf5:c.instructions+=4;goto B6dddf5;
case 0x6dddfd:c.instructions+=3;goto B6dddfd;
case 0x6dde05:c.instructions+=2;goto B6dde05;
case 0x6dde0a:c.instructions+=1;goto B6dde0a;
case 0x6dde0c:goto L6dde0c;
case 0x6dde11:c.instructions+=2;goto B6dde11;
case 0x6dde13:c.instructions+=1;goto B6dde13;
case 0x6dde15:goto L6dde15;
case 0x6dde19:c.instructions+=13;goto B6dde19;
case 0x6dde1a:c.instructions+=12;goto B6dde1a;
case 0x6dde1e:c.instructions+=11;goto B6dde1e;
case 0x6dde1f:c.instructions+=10;goto B6dde1f;
case 0x6dde23:c.instructions+=9;goto B6dde23;
case 0x6dde24:c.instructions+=8;goto B6dde24;
case 0x6dde28:c.instructions+=7;goto B6dde28;
case 0x6dde30:c.instructions+=6;goto B6dde30;
case 0x6dde32:c.instructions+=5;goto B6dde32;
case 0x6dde33:c.instructions+=4;goto B6dde33;
case 0x6dde34:c.instructions+=3;goto B6dde34;
case 0x6dde35:c.instructions+=2;goto B6dde35;
case 0x6dde37:c.instructions+=1;goto B6dde37;
case 0x6dde3c:goto L6dde3c;
case 0x6dde40:c.instructions+=2;goto B6dde40;
case 0x6dde43:c.instructions+=1;goto B6dde43;
case 0x6dde45:goto L6dde45;
case 0x6dde49:goto L6dde49;
case 0x6dde4f:c.instructions+=2;goto B6dde4f;
case 0x6dde51:c.instructions+=1;goto B6dde51;
case 0x6dde53:goto L6dde53;
case 0x6dde54:c.instructions+=1;goto B6dde54;
case 0x6dde59:goto L6dde59;
case 0x6dde5d:c.instructions+=6;goto B6dde5d;
case 0x6dde63:c.instructions+=5;goto B6dde63;
case 0x6dde65:c.instructions+=4;goto B6dde65;
case 0x6dde67:c.instructions+=3;goto B6dde67;
case 0x6dde6d:c.instructions+=2;goto B6dde6d;
case 0x6dde6e:c.instructions+=1;goto B6dde6e;
case 0x6dde70:goto L6dde70;
case 0x6dde7a:c.instructions+=2;goto B6dde7a;
case 0x6dde7e:c.instructions+=1;goto B6dde7e;
case 0x6dde80:goto L6dde80;
case 0x6dde82:c.instructions+=1;goto B6dde82;
case 0x6dde84:goto L6dde84;
case 0x6dde8c:goto L6dde8c;
case 0x6dde90:c.instructions+=4;goto B6dde90;
case 0x6dde92:c.instructions+=3;goto B6dde92;
case 0x6dde9a:c.instructions+=2;goto B6dde9a;
case 0x6ddea2:c.instructions+=1;goto B6ddea2;
case 0x6ddea8:goto L6ddea8;
case 0x6ddeae:c.instructions+=2;goto B6ddeae;
case 0x6ddeb0:c.instructions+=1;goto B6ddeb0;
case 0x6ddeb5:goto L6ddeb5;
case 0x6ddeb9:c.instructions+=9;goto B6ddeb9;
case 0x6ddebd:c.instructions+=8;goto B6ddebd;
case 0x6ddec1:c.instructions+=7;goto B6ddec1;
case 0x6ddec5:c.instructions+=6;goto B6ddec5;
case 0x6ddec6:c.instructions+=5;goto B6ddec6;
case 0x6ddeca:c.instructions+=4;goto B6ddeca;
case 0x6ddece:c.instructions+=3;goto B6ddece;
case 0x6dded4:c.instructions+=2;goto B6dded4;
case 0x6dded5:c.instructions+=1;goto B6dded5;
case 0x6ddeda:goto L6ddeda;
case 0x6ddede:c.instructions+=9;goto B6ddede;
case 0x6ddee4:c.instructions+=8;goto B6ddee4;
case 0x6ddee8:c.instructions+=7;goto B6ddee8;
case 0x6ddee9:c.instructions+=6;goto B6ddee9;
case 0x6ddeef:c.instructions+=5;goto B6ddeef;
case 0x6ddef3:c.instructions+=4;goto B6ddef3;
case 0x6ddef7:c.instructions+=3;goto B6ddef7;
case 0x6ddef8:c.instructions+=2;goto B6ddef8;
case 0x6ddefc:c.instructions+=1;goto B6ddefc;
case 0x6ddf01:goto L6ddf01;
case 0x6ddf05:c.instructions+=10;goto B6ddf05;
case 0x6ddf0b:c.instructions+=9;goto B6ddf0b;
case 0x6ddf0f:c.instructions+=8;goto B6ddf0f;
case 0x6ddf13:c.instructions+=7;goto B6ddf13;
case 0x6ddf14:c.instructions+=6;goto B6ddf14;
case 0x6ddf1a:c.instructions+=5;goto B6ddf1a;
case 0x6ddf1e:c.instructions+=4;goto B6ddf1e;
case 0x6ddf22:c.instructions+=3;goto B6ddf22;
case 0x6ddf23:c.instructions+=2;goto B6ddf23;
case 0x6ddf27:c.instructions+=1;goto B6ddf27;
case 0x6ddf2c:goto L6ddf2c;
case 0x6ddf30:c.instructions+=7;goto B6ddf30;
case 0x6ddf34:c.instructions+=6;goto B6ddf34;
case 0x6ddf35:c.instructions+=5;goto B6ddf35;
case 0x6ddf3b:c.instructions+=4;goto B6ddf3b;
case 0x6ddf3f:c.instructions+=3;goto B6ddf3f;
case 0x6ddf40:c.instructions+=2;goto B6ddf40;
case 0x6ddf44:c.instructions+=1;goto B6ddf44;
case 0x6ddf49:goto L6ddf49;
case 0x6ddf4f:c.instructions+=1;goto B6ddf4f;
case 0x6ddf54:goto L6ddf54;
case 0x6ddf56:c.instructions+=1;goto B6ddf56;
case 0x6ddf5c:goto L6ddf5c;
case 0x6ddf61:c.instructions+=2;goto B6ddf61;
case 0x6ddf63:c.instructions+=1;goto B6ddf63;
case 0x6ddf69:goto L6ddf69;
case 0x6ddf6f:c.instructions+=5;goto B6ddf6f;
case 0x6ddf75:c.instructions+=4;goto B6ddf75;
case 0x6ddf79:c.instructions+=3;goto B6ddf79;
case 0x6ddf7b:c.instructions+=2;goto B6ddf7b;
case 0x6ddf7e:c.instructions+=1;goto B6ddf7e;
case 0x6ddf80:goto L6ddf80;
case 0x6ddf86:c.instructions+=3;goto B6ddf86;
case 0x6ddf8a:c.instructions+=2;goto B6ddf8a;
case 0x6ddf8e:c.instructions+=1;goto B6ddf8e;
case 0x6ddf92:goto L6ddf92;
case 0x6ddf98:c.instructions+=2;goto B6ddf98;
case 0x6ddf9a:c.instructions+=1;goto B6ddf9a;
case 0x6ddf9f:goto L6ddf9f;
case 0x6ddfa3:c.instructions+=13;goto B6ddfa3;
case 0x6ddfa7:c.instructions+=12;goto B6ddfa7;
case 0x6ddfab:c.instructions+=11;goto B6ddfab;
case 0x6ddfac:c.instructions+=10;goto B6ddfac;
case 0x6ddfb0:c.instructions+=9;goto B6ddfb0;
case 0x6ddfb4:c.instructions+=8;goto B6ddfb4;
case 0x6ddfb5:c.instructions+=7;goto B6ddfb5;
case 0x6ddfb9:c.instructions+=6;goto B6ddfb9;
case 0x6ddfbf:c.instructions+=5;goto B6ddfbf;
case 0x6ddfc3:c.instructions+=4;goto B6ddfc3;
case 0x6ddfc7:c.instructions+=3;goto B6ddfc7;
case 0x6ddfcd:c.instructions+=2;goto B6ddfcd;
case 0x6ddfd1:c.instructions+=1;goto B6ddfd1;
case 0x6ddfd6:goto L6ddfd6;
case 0x6ddfda:c.instructions+=10;goto B6ddfda;
case 0x6ddfe0:c.instructions+=9;goto B6ddfe0;
case 0x6ddfe4:c.instructions+=8;goto B6ddfe4;
case 0x6ddfe8:c.instructions+=7;goto B6ddfe8;
case 0x6ddfe9:c.instructions+=6;goto B6ddfe9;
case 0x6ddfed:c.instructions+=5;goto B6ddfed;
case 0x6ddff1:c.instructions+=4;goto B6ddff1;
case 0x6ddff2:c.instructions+=3;goto B6ddff2;
case 0x6ddff6:c.instructions+=2;goto B6ddff6;
case 0x6ddffa:c.instructions+=1;goto B6ddffa;
case 0x6ddfff:goto L6ddfff;
default:missing_instruction(c.pc);}
B6dd002:L6dd002:{c.instructions+=2;NFSU2_TR(0x6dd002);
s1(0x8a8108,u8(0x0ull));
}
B6dd009:{NFSU2_TR(0x6dd009);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dd010:L6dd010:{c.instructions+=1;NFSU2_TR(0x6dd010);
TAIL_STATIC(0x6dce70u,6dc);
}
B6dd020:L6dd020:{c.instructions+=14;NFSU2_TR(0x6dd020);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd021:{NFSU2_TR(0x6dd021);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd022:{NFSU2_TR(0x6dd022);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd023:{NFSU2_TR(0x6dd023);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6dd027:{NFSU2_TR(0x6dd027);
u8 U[4];
w4(U+0,u32(0x2000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd02c:{NFSU2_TR(0x6dd02c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dd030:{NFSU2_TR(0x6dd030);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd031:{NFSU2_TR(0x6dd031);
__builtin_memmove((R+24),(R+4),4);
}
B6dd033:{NFSU2_TR(0x6dd033);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dd035:{NFSU2_TR(0x6dd035);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dd037:{NFSU2_TR(0x6dd037);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd038:{NFSU2_TR(0x6dd038);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd03a:{NFSU2_TR(0x6dd03a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd03b:{NFSU2_TR(0x6dd03b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd03eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd03e:L6dd03e:{c.instructions+=6;NFSU2_TR(0x6dd03e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6dd042:{NFSU2_TR(0x6dd042);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd046:{NFSU2_TR(0x6dd046);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd047:{NFSU2_TR(0x6dd047);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd048:{NFSU2_TR(0x6dd048);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd049:{NFSU2_TR(0x6dd049);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd04eull));
TAIL_STATIC(0x401000u,401);
}
B6dd04e:L6dd04e:{c.instructions+=5;NFSU2_TR(0x6dd04e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dd050:{NFSU2_TR(0x6dd050);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dd052:{NFSU2_TR(0x6dd052);
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
B6dd055:{NFSU2_TR(0x6dd055);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd056:{NFSU2_TR(0x6dd056);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd059ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd059:L6dd059:{c.instructions+=6;NFSU2_TR(0x6dd059);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd05c:{NFSU2_TR(0x6dd05c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dd05d:{NFSU2_TR(0x6dd05d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd060:{NFSU2_TR(0x6dd060);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dd061:{NFSU2_TR(0x6dd061);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dd062:{NFSU2_TR(0x6dd062);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dd070:L6dd070:{c.instructions+=5;NFSU2_TR(0x6dd070);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd071:{NFSU2_TR(0x6dd071);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6dd075:{NFSU2_TR(0x6dd075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dd077:{NFSU2_TR(0x6dd077);
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
B6dd079:{NFSU2_TR(0x6dd079);
if(r1(R+518)){{goto L6dd0f4;}}
}
B6dd07b:L6dd07b:{c.instructions+=2;NFSU2_TR(0x6dd07b);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a806c),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dd081:{NFSU2_TR(0x6dd081);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dd08d;}}
}
B6dd083:L6dd083:{c.instructions+=1;NFSU2_TR(0x6dd083);
s4(0x8a806c,u32(0x0ull));
}
B6dd08d:L6dd08d:{c.instructions+=6;NFSU2_TR(0x6dd08d);
__builtin_memmove((R+4),gp(0x80f00c),4);
}
B6dd093:{NFSU2_TR(0x6dd093);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd094:{NFSU2_TR(0x6dd094);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd095:{NFSU2_TR(0x6dd095);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6dd097:{NFSU2_TR(0x6dd097);
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
B6dd099:{NFSU2_TR(0x6dd099);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dd0f2;}}
}
B6dd09b:L6dd09b:{c.instructions+=2;NFSU2_TR(0x6dd09b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6dd09d:{NFSU2_TR(0x6dd09d);
__builtin_memmove((R+0),gp(0x8a80f4),4);
}
B6dd0a2:L6dd0a2:{c.instructions+=2;NFSU2_TR(0x6dd0a2);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+24))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6dd0a5:{NFSU2_TR(0x6dd0a5);
if(r1(R+518)){{goto L6dd0b0;}}
}
B6dd0a7:L6dd0a7:{c.instructions+=3;NFSU2_TR(0x6dd0a7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6dd0a8:{NFSU2_TR(0x6dd0a8);
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
B6dd0aa:{NFSU2_TR(0x6dd0aa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dd0a2u);}goto L6dd0a2;}}
}
B6dd0ac:L6dd0ac:{c.instructions+=4;NFSU2_TR(0x6dd0ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dd0ad:{NFSU2_TR(0x6dd0ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dd0ae:{NFSU2_TR(0x6dd0ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dd0af:{NFSU2_TR(0x6dd0af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dd0b0:L6dd0b0:{c.instructions+=2;NFSU2_TR(0x6dd0b0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dd0b2:{NFSU2_TR(0x6dd0b2);
if(r1(R+518)){{goto L6dd0d9;}}
}
B6dd0b4:L6dd0b4:{c.instructions+=3;NFSU2_TR(0x6dd0b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dd0b6:{NFSU2_TR(0x6dd0b6);
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
B6dd0b8:{NFSU2_TR(0x6dd0b8);
if(r1(R+518)){{goto L6dd0c0;}}
}
B6dd0ba:L6dd0ba:{c.instructions+=3;NFSU2_TR(0x6dd0ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dd0bc:{NFSU2_TR(0x6dd0bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd0bd:{NFSU2_TR(0x6dd0bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd0c0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd0c0:L6dd0c0:{c.instructions+=5;NFSU2_TR(0x6dd0c0);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd0c2:{NFSU2_TR(0x6dd0c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd0c3:{NFSU2_TR(0x6dd0c3);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6dd0c9:{NFSU2_TR(0x6dd0c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dd0d0:{NFSU2_TR(0x6dd0d0);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd0d6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dd0d6:L6dd0d6:{c.instructions+=1;NFSU2_TR(0x6dd0d6);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dd0d9:L6dd0d9:{c.instructions+=4;NFSU2_TR(0x6dd0d9);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B6dd0df:{NFSU2_TR(0x6dd0df);
__builtin_memmove((R+8),gp(0x8a80f4),4);
}
B6dd0e5:{NFSU2_TR(0x6dd0e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B6dd0ec:{NFSU2_TR(0x6dd0ec);
u8 U[6];
w1(R+523,sborrow<u32>(m4(0x8a8104),u32(0x1ull)));
s4(0x8a8104,u32(u32(m4(0x8a8104))-u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8a8104))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8a8104))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8a8104))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dd0f2:L6dd0f2:{c.instructions+=2;NFSU2_TR(0x6dd0f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dd0f3:{NFSU2_TR(0x6dd0f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dd0f4:L6dd0f4:{c.instructions+=2;NFSU2_TR(0x6dd0f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dd0f5:{NFSU2_TR(0x6dd0f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dd100:L6dd100:{c.instructions+=4;NFSU2_TR(0x6dd100);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd101:{NFSU2_TR(0x6dd101);
__builtin_memmove((R+24),gp(0x8a8130),4);
}
B6dd107:{NFSU2_TR(0x6dd107);
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
B6dd109:{NFSU2_TR(0x6dd109);
if(r1(R+518)){{goto L6dd12f;}}
}
B6dd10b:L6dd10b:{c.instructions+=1;NFSU2_TR(0x6dd10b);
{goto L6dd110;}
}
B6dd110:L6dd110:{c.instructions+=4;NFSU2_TR(0x6dd110);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dd112:{NFSU2_TR(0x6dd112);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd115:{NFSU2_TR(0x6dd115);
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
B6dd117:{NFSU2_TR(0x6dd117);
if(r1(R+518)){{goto L6dd128;}}
}
B6dd119:L6dd119:{c.instructions+=3;NFSU2_TR(0x6dd119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dd11b:{NFSU2_TR(0x6dd11b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd11c:{NFSU2_TR(0x6dd11c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd11full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd11f:L6dd11f:{c.instructions+=2;NFSU2_TR(0x6dd11f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd121:{NFSU2_TR(0x6dd121);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dd128:L6dd128:{c.instructions+=3;NFSU2_TR(0x6dd128);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6dd12b:{NFSU2_TR(0x6dd12b);
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
B6dd12d:{NFSU2_TR(0x6dd12d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dd110u);}goto L6dd110;}}
}
B6dd12f:L6dd12f:{c.instructions+=2;NFSU2_TR(0x6dd12f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dd130:{NFSU2_TR(0x6dd130);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dd140:L6dd140:{c.instructions+=5;NFSU2_TR(0x6dd140);
__builtin_memmove((R+0),gp(0x8a8130),4);
}
B6dd145:{NFSU2_TR(0x6dd145);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd146:{NFSU2_TR(0x6dd146);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6dd148:{NFSU2_TR(0x6dd148);
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
B6dd14a:{NFSU2_TR(0x6dd14a);
if(r1(R+518)){{goto L6dd1b7;}}
}
B6dd14c:L6dd14c:{c.instructions+=2;NFSU2_TR(0x6dd14c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd14d:{NFSU2_TR(0x6dd14d);
__builtin_memmove((R+4),(R+4),4);
}
B6dd150:L6dd150:{c.instructions+=5;NFSU2_TR(0x6dd150);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd153:{NFSU2_TR(0x6dd153);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dd155:{NFSU2_TR(0x6dd155);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6dd158:{NFSU2_TR(0x6dd158);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dd15b:{NFSU2_TR(0x6dd15b);
if(r1(R+518)){{goto L6dd1b0;}}
}
B6dd15d:L6dd15d:{c.instructions+=3;NFSU2_TR(0x6dd15d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd160:{NFSU2_TR(0x6dd160);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dd162:{NFSU2_TR(0x6dd162);
if(r1(R+518)){{goto L6dd17a;}}
}
B6dd164:L6dd164:{c.instructions+=3;NFSU2_TR(0x6dd164);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd167:{NFSU2_TR(0x6dd167);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dd169:{NFSU2_TR(0x6dd169);
if(r1(R+518)){{goto L6dd17a;}}
}
B6dd16b:L6dd16b:{c.instructions+=7;NFSU2_TR(0x6dd16b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dd16d:{NFSU2_TR(0x6dd16d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd16f:{NFSU2_TR(0x6dd16f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x44ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dd172:{NFSU2_TR(0x6dd172);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd173:{NFSU2_TR(0x6dd173);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd174:{NFSU2_TR(0x6dd174);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd175:{NFSU2_TR(0x6dd175);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd178ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd178:L6dd178:{c.instructions+=1;NFSU2_TR(0x6dd178);
{goto L6dd1b0;}
}
B6dd17a:L6dd17a:{c.instructions+=2;NFSU2_TR(0x6dd17a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dd17c:{NFSU2_TR(0x6dd17c);
if(r1(R+518)){{goto L6dd181;}}
}
B6dd17e:L6dd17e:{c.instructions+=1;NFSU2_TR(0x6dd17e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd181:L6dd181:{c.instructions+=3;NFSU2_TR(0x6dd181);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd184:{NFSU2_TR(0x6dd184);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dd186:{NFSU2_TR(0x6dd186);
if(r1(R+518)){{goto L6dd18b;}}
}
B6dd188:L6dd188:{c.instructions+=1;NFSU2_TR(0x6dd188);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd18b:L6dd18b:{c.instructions+=2;NFSU2_TR(0x6dd18b);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a8130),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dd191:{NFSU2_TR(0x6dd191);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dd199;}}
}
B6dd193:L6dd193:{c.instructions+=1;NFSU2_TR(0x6dd193);
__builtin_memmove(gp(0x8a8130),(R+24),4);
}
B6dd199:L6dd199:{c.instructions+=7;NFSU2_TR(0x6dd199);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd19b:{NFSU2_TR(0x6dd19b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd19c:{NFSU2_TR(0x6dd19c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6dd19e:{NFSU2_TR(0x6dd19e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd1a1:{NFSU2_TR(0x6dd1a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd1a4:{NFSU2_TR(0x6dd1a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd1a7:{NFSU2_TR(0x6dd1a7);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd1adull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dd1ad:L6dd1ad:{c.instructions+=1;NFSU2_TR(0x6dd1ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dd1b0:L6dd1b0:{c.instructions+=3;NFSU2_TR(0x6dd1b0);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6dd1b2:{NFSU2_TR(0x6dd1b2);
__builtin_memmove((R+0),(R+24),4);
}
B6dd1b4:{NFSU2_TR(0x6dd1b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dd150u);}goto L6dd150;}}
}
B6dd1b6:L6dd1b6:{c.instructions+=1;NFSU2_TR(0x6dd1b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dd1b7:L6dd1b7:{c.instructions+=2;NFSU2_TR(0x6dd1b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dd1b8:{NFSU2_TR(0x6dd1b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dd1c0:L6dd1c0:{c.instructions+=5;NFSU2_TR(0x6dd1c0);
__builtin_memmove((R+0),gp(0x8a8134),4);
}
B6dd1c5:{NFSU2_TR(0x6dd1c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd1c6:{NFSU2_TR(0x6dd1c6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6dd1c8:{NFSU2_TR(0x6dd1c8);
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
B6dd1ca:{NFSU2_TR(0x6dd1ca);
if(r1(R+518)){{goto L6dd233;}}
}
B6dd1cc:L6dd1cc:{c.instructions+=1;NFSU2_TR(0x6dd1cc);
__builtin_memmove((R+16),(R+16),4);
}
B6dd1d0:L6dd1d0:{c.instructions+=3;NFSU2_TR(0x6dd1d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd1d3:{NFSU2_TR(0x6dd1d3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dd1d5:{NFSU2_TR(0x6dd1d5);
if(r1(R+518)){{goto L6dd22c;}}
}
B6dd1d7:L6dd1d7:{c.instructions+=4;NFSU2_TR(0x6dd1d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd1da:{NFSU2_TR(0x6dd1da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd1dd:{NFSU2_TR(0x6dd1dd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dd1df:{NFSU2_TR(0x6dd1df);
if(r1(R+518)){{goto L6dd1e8;}}
}
B6dd1e1:L6dd1e1:{c.instructions+=3;NFSU2_TR(0x6dd1e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd1e3:{NFSU2_TR(0x6dd1e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd1e6:{NFSU2_TR(0x6dd1e6);
{goto L6dd22c;}
}
B6dd1e8:L6dd1e8:{c.instructions+=3;NFSU2_TR(0x6dd1e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd1eb:{NFSU2_TR(0x6dd1eb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dd1ed:{NFSU2_TR(0x6dd1ed);
if(r1(R+518)){{goto L6dd1f5;}}
}
B6dd1ef:L6dd1ef:{c.instructions+=2;NFSU2_TR(0x6dd1ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dd1f2:{NFSU2_TR(0x6dd1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd1f5:L6dd1f5:{c.instructions+=3;NFSU2_TR(0x6dd1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd1f8:{NFSU2_TR(0x6dd1f8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dd1fa:{NFSU2_TR(0x6dd1fa);
if(r1(R+518)){{goto L6dd202;}}
}
B6dd1fc:L6dd1fc:{c.instructions+=2;NFSU2_TR(0x6dd1fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dd1ff:{NFSU2_TR(0x6dd1ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd202:L6dd202:{c.instructions+=2;NFSU2_TR(0x6dd202);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a8134),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dd208:{NFSU2_TR(0x6dd208);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dd213;}}
}
B6dd20a:L6dd20a:{c.instructions+=2;NFSU2_TR(0x6dd20a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd20d:{NFSU2_TR(0x6dd20d);
__builtin_memmove(gp(0x8a8134),(R+4),4);
}
B6dd213:L6dd213:{c.instructions+=7;NFSU2_TR(0x6dd213);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd215:{NFSU2_TR(0x6dd215);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd216:{NFSU2_TR(0x6dd216);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6dd218:{NFSU2_TR(0x6dd218);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd21b:{NFSU2_TR(0x6dd21b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd21e:{NFSU2_TR(0x6dd21e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd221:{NFSU2_TR(0x6dd221);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd227ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dd227:L6dd227:{c.instructions+=2;NFSU2_TR(0x6dd227);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dd22a:{NFSU2_TR(0x6dd22a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6dd22c:L6dd22c:{c.instructions+=3;NFSU2_TR(0x6dd22c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd22f:{NFSU2_TR(0x6dd22f);
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
B6dd231:{NFSU2_TR(0x6dd231);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dd1d0u);}goto L6dd1d0;}}
}
B6dd233:L6dd233:{c.instructions+=2;NFSU2_TR(0x6dd233);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dd234:{NFSU2_TR(0x6dd234);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dd240:L6dd240:{c.instructions+=7;NFSU2_TR(0x6dd240);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd241:{NFSU2_TR(0x6dd241);
__builtin_memmove((R+0),(R+4),4);
}
B6dd243:{NFSU2_TR(0x6dd243);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd244:{NFSU2_TR(0x6dd244);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6dd246:{NFSU2_TR(0x6dd246);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6dd248:{NFSU2_TR(0x6dd248);
w4(R+24,u32(0x1ull));
}
B6dd24d:{NFSU2_TR(0x6dd24d);
w4(R+28,u32(0x2ull));
}
B6dd252:L6dd252:{c.instructions+=2;NFSU2_TR(0x6dd252);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dd254:{NFSU2_TR(0x6dd254);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dd25e;}}
}
B6dd256:L6dd256:{c.instructions+=2;NFSU2_TR(0x6dd256);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6dd25c:{NFSU2_TR(0x6dd25c);
{goto L6dd261;}
}
B6dd25e:L6dd25e:{c.instructions+=1;NFSU2_TR(0x6dd25e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd261:L6dd261:{c.instructions+=5;NFSU2_TR(0x6dd261);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dd263:{NFSU2_TR(0x6dd263);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6dd267:{NFSU2_TR(0x6dd267);
u8 U[16];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6dd26b:{NFSU2_TR(0x6dd26b);
u8 U[16];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6dd26f:{NFSU2_TR(0x6dd26f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dd279;}}
}
B6dd271:L6dd271:{c.instructions+=2;NFSU2_TR(0x6dd271);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd277:{NFSU2_TR(0x6dd277);
{goto L6dd280;}
}
B6dd279:L6dd279:{c.instructions+=1;NFSU2_TR(0x6dd279);
u8 U[16];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6dd280:L6dd280:{c.instructions+=15;NFSU2_TR(0x6dd280);
u8 U[16];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6dd287:{NFSU2_TR(0x6dd287);
u8 U[16];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6dd28e:{NFSU2_TR(0x6dd28e);
u8 U[16];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6dd295:{NFSU2_TR(0x6dd295);
u8 U[16];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6dd29c:{NFSU2_TR(0x6dd29c);
u8 U[16];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6dd2a3:{NFSU2_TR(0x6dd2a3);
u8 U[16];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6dd2aa:{NFSU2_TR(0x6dd2aa);
u8 U[16];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6dd2b1:{NFSU2_TR(0x6dd2b1);
u8 U[16];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6dd2b8:{NFSU2_TR(0x6dd2b8);
u8 U[16];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6dd2bf:{NFSU2_TR(0x6dd2bf);
u8 U[16];
w4(U+0,u32(u32(u32(0x1c0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6dd2c6:{NFSU2_TR(0x6dd2c6);
u8 U[16];
w4(U+0,u32(u32(u32(0x1e0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6dd2cd:{NFSU2_TR(0x6dd2cd);
u8 U[16];
w4(U+0,u32(u32(u32(0x200ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6dd2d4:{NFSU2_TR(0x6dd2d4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6dd2d5:{NFSU2_TR(0x6dd2d5);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B6dd2d8:{NFSU2_TR(0x6dd2d8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dd252u);}goto L6dd252;}}
}
B6dd2de:L6dd2de:{c.instructions+=4;NFSU2_TR(0x6dd2de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dd2df:{NFSU2_TR(0x6dd2df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd2e5:{NFSU2_TR(0x6dd2e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dd2e6:{NFSU2_TR(0x6dd2e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dd2f0:L6dd2f0:{c.instructions+=4;NFSU2_TR(0x6dd2f0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x38ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dd2f3:{NFSU2_TR(0x6dd2f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd2f4:{NFSU2_TR(0x6dd2f4);
__builtin_memmove((R+12),(R+4),4);
}
B6dd2f6:{NFSU2_TR(0x6dd2f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd2fbull));
TAIL_STATIC(0x6dc2f0u,6dc);
}
B6dd2fb:L6dd2fb:{c.instructions+=2;NFSU2_TR(0x6dd2fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dd2fd:{NFSU2_TR(0x6dd2fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dd752;}}
}
B6dd303:L6dd303:{c.instructions+=50;NFSU2_TR(0x6dd303);
w4(R+0,u32(0x8a83b0ull));
}
B6dd308:{NFSU2_TR(0x6dd308);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd30a:{NFSU2_TR(0x6dd30a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd30e:{NFSU2_TR(0x6dd30e);
w4(R+0,u32(0x8a83d0ull));
}
B6dd313:{NFSU2_TR(0x6dd313);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd315:{NFSU2_TR(0x6dd315);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd319:{NFSU2_TR(0x6dd319);
w4(R+0,u32(0x8a83f0ull));
}
B6dd31e:{NFSU2_TR(0x6dd31e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd320:{NFSU2_TR(0x6dd320);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd324:{NFSU2_TR(0x6dd324);
w4(R+0,u32(0x8a8410ull));
}
B6dd329:{NFSU2_TR(0x6dd329);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd32b:{NFSU2_TR(0x6dd32b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd32f:{NFSU2_TR(0x6dd32f);
w4(R+0,u32(0x8a8430ull));
}
B6dd334:{NFSU2_TR(0x6dd334);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd336:{NFSU2_TR(0x6dd336);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd33a:{NFSU2_TR(0x6dd33a);
w4(R+0,u32(0x8a8450ull));
}
B6dd33f:{NFSU2_TR(0x6dd33f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd341:{NFSU2_TR(0x6dd341);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd345:{NFSU2_TR(0x6dd345);
w4(R+0,u32(0x8a8470ull));
}
B6dd34a:{NFSU2_TR(0x6dd34a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd34c:{NFSU2_TR(0x6dd34c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd350:{NFSU2_TR(0x6dd350);
w4(R+0,u32(0x8a8490ull));
}
B6dd355:{NFSU2_TR(0x6dd355);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd357:{NFSU2_TR(0x6dd357);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd35b:{NFSU2_TR(0x6dd35b);
w4(R+0,u32(0x8a84b0ull));
}
B6dd360:{NFSU2_TR(0x6dd360);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd362:{NFSU2_TR(0x6dd362);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd366:{NFSU2_TR(0x6dd366);
w4(R+0,u32(0x8a84d0ull));
}
B6dd36b:{NFSU2_TR(0x6dd36b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd36d:{NFSU2_TR(0x6dd36d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd371:{NFSU2_TR(0x6dd371);
w4(R+0,u32(0x8a84f0ull));
}
B6dd376:{NFSU2_TR(0x6dd376);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd378:{NFSU2_TR(0x6dd378);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd37c:{NFSU2_TR(0x6dd37c);
w4(R+0,u32(0x8a8510ull));
}
B6dd381:{NFSU2_TR(0x6dd381);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd383:{NFSU2_TR(0x6dd383);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd387:{NFSU2_TR(0x6dd387);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd388:{NFSU2_TR(0x6dd388);
w4(R+0,u32(0x8a8530ull));
}
B6dd38d:{NFSU2_TR(0x6dd38d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd38f:{NFSU2_TR(0x6dd38f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd390:{NFSU2_TR(0x6dd390);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd394:{NFSU2_TR(0x6dd394);
w4(R+20,u32(0x8a8390ull));
}
B6dd399:{NFSU2_TR(0x6dd399);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd39a:{NFSU2_TR(0x6dd39a);
w4(R+0,u32(0x8a8550ull));
}
B6dd39f:{NFSU2_TR(0x6dd39f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6dd3a1:{NFSU2_TR(0x6dd3a1);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+12))));
}
B6dd3a3:{NFSU2_TR(0x6dd3a3);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd3a5:{NFSU2_TR(0x6dd3a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dd3a8:{NFSU2_TR(0x6dd3a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd3ac:{NFSU2_TR(0x6dd3ac);
__builtin_memmove((R+16),(R+16),4);
}
B6dd3b0:L6dd3b0:{c.instructions+=3;NFSU2_TR(0x6dd3b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd3b3:{NFSU2_TR(0x6dd3b3);
u8 U[26];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8390ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+18)));
w4(U+22,u32(u32(r4(R+0))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd3ba:{NFSU2_TR(0x6dd3ba);
if(r1(R+518)){{goto L6dd40d;}}
}
B6dd3bc:L6dd3bc:{c.instructions+=9;NFSU2_TR(0x6dd3bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8390ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd3c3:{NFSU2_TR(0x6dd3c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dd3c6:{NFSU2_TR(0x6dd3c6);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd3cb:{NFSU2_TR(0x6dd3cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dd3cd:{NFSU2_TR(0x6dd3cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd3ce:{NFSU2_TR(0x6dd3ce);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd3d0:{NFSU2_TR(0x6dd3d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd3d1:{NFSU2_TR(0x6dd3d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd3d2:{NFSU2_TR(0x6dd3d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd3d8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd3d8:L6dd3d8:{c.instructions+=3;NFSU2_TR(0x6dd3d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd3db:{NFSU2_TR(0x6dd3db);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dd3de:{NFSU2_TR(0x6dd3de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dd3e5;}}
}
B6dd3e0:L6dd3e0:{c.instructions+=2;NFSU2_TR(0x6dd3e0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
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
B6dd3e3:{NFSU2_TR(0x6dd3e3);
if(r1(R+518)){{goto L6dd3f1;}}
}
B6dd3e5:L6dd3e5:{c.instructions+=2;NFSU2_TR(0x6dd3e5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dd3e8:{NFSU2_TR(0x6dd3e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dd40d;}}
}
B6dd3ea:L6dd3ea:{c.instructions+=3;NFSU2_TR(0x6dd3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd3ed:{NFSU2_TR(0x6dd3ed);
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
B6dd3ef:{NFSU2_TR(0x6dd3ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dd40d;}}
}
B6dd3f1:L6dd3f1:{c.instructions+=7;NFSU2_TR(0x6dd3f1);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd3f6:{NFSU2_TR(0x6dd3f6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd3f8:{NFSU2_TR(0x6dd3f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd3f9:{NFSU2_TR(0x6dd3f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a7ad4ull))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B6dd404:{NFSU2_TR(0x6dd404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dd406:{NFSU2_TR(0x6dd406);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd407:{NFSU2_TR(0x6dd407);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd40dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd40d:L6dd40d:{c.instructions+=3;NFSU2_TR(0x6dd40d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd410:{NFSU2_TR(0x6dd410);
u8 U[26];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a83b0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+18)));
w4(U+22,u32(u32(r4(R+0))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd417:{NFSU2_TR(0x6dd417);
if(r1(R+518)){{goto L6dd435;}}
}
B6dd419:L6dd419:{c.instructions+=9;NFSU2_TR(0x6dd419);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a83b0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd420:{NFSU2_TR(0x6dd420);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd423:{NFSU2_TR(0x6dd423);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd428:{NFSU2_TR(0x6dd428);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd42a:{NFSU2_TR(0x6dd42a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd42b:{NFSU2_TR(0x6dd42b);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd42d:{NFSU2_TR(0x6dd42d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd42e:{NFSU2_TR(0x6dd42e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd42f:{NFSU2_TR(0x6dd42f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd435ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd435:L6dd435:{c.instructions+=3;NFSU2_TR(0x6dd435);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dd437:{NFSU2_TR(0x6dd437);
u8 U[26];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+18)));
w4(U+22,u32(u32(r4(R+0))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd43a:{NFSU2_TR(0x6dd43a);
if(r1(R+518)){{goto L6dd453;}}
}
B6dd43c:L6dd43c:{c.instructions+=9;NFSU2_TR(0x6dd43c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd43f:{NFSU2_TR(0x6dd43f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dd441:{NFSU2_TR(0x6dd441);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd446:{NFSU2_TR(0x6dd446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd448:{NFSU2_TR(0x6dd448);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd449:{NFSU2_TR(0x6dd449);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd44b:{NFSU2_TR(0x6dd44b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd44c:{NFSU2_TR(0x6dd44c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd44d:{NFSU2_TR(0x6dd44d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd453ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd453:L6dd453:{c.instructions+=4;NFSU2_TR(0x6dd453);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd457:{NFSU2_TR(0x6dd457);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd45a:{NFSU2_TR(0x6dd45a);
u8 U[26];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+18)));
w4(U+22,u32(u32(r4(R+0))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd45d:{NFSU2_TR(0x6dd45d);
if(r1(R+518)){{goto L6dd477;}}
}
B6dd45f:L6dd45f:{c.instructions+=9;NFSU2_TR(0x6dd45f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd462:{NFSU2_TR(0x6dd462);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd465:{NFSU2_TR(0x6dd465);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd46a:{NFSU2_TR(0x6dd46a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd46c:{NFSU2_TR(0x6dd46c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd46d:{NFSU2_TR(0x6dd46d);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd46f:{NFSU2_TR(0x6dd46f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd470:{NFSU2_TR(0x6dd470);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd471:{NFSU2_TR(0x6dd471);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd477ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd477:L6dd477:{c.instructions+=4;NFSU2_TR(0x6dd477);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd47b:{NFSU2_TR(0x6dd47b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd47e:{NFSU2_TR(0x6dd47e);
u8 U[26];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+18)));
w4(U+22,u32(u32(r4(R+0))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd481:{NFSU2_TR(0x6dd481);
if(r1(R+518)){{goto L6dd49b;}}
}
B6dd483:L6dd483:{c.instructions+=9;NFSU2_TR(0x6dd483);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd486:{NFSU2_TR(0x6dd486);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd489:{NFSU2_TR(0x6dd489);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd48e:{NFSU2_TR(0x6dd48e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd490:{NFSU2_TR(0x6dd490);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd491:{NFSU2_TR(0x6dd491);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd493:{NFSU2_TR(0x6dd493);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd494:{NFSU2_TR(0x6dd494);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd495:{NFSU2_TR(0x6dd495);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd49bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd49b:L6dd49b:{c.instructions+=4;NFSU2_TR(0x6dd49b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd49f:{NFSU2_TR(0x6dd49f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd4a2:{NFSU2_TR(0x6dd4a2);
u8 U[26];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+18)));
w4(U+22,u32(u32(r4(R+0))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd4a5:{NFSU2_TR(0x6dd4a5);
if(r1(R+518)){{goto L6dd4bf;}}
}
B6dd4a7:L6dd4a7:{c.instructions+=9;NFSU2_TR(0x6dd4a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd4aa:{NFSU2_TR(0x6dd4aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd4ad:{NFSU2_TR(0x6dd4ad);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd4b2:{NFSU2_TR(0x6dd4b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd4b4:{NFSU2_TR(0x6dd4b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd4b5:{NFSU2_TR(0x6dd4b5);
u8 U[4];
w4(U+0,u32(0x1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd4b7:{NFSU2_TR(0x6dd4b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd4b8:{NFSU2_TR(0x6dd4b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd4b9:{NFSU2_TR(0x6dd4b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd4bfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd4bf:L6dd4bf:{c.instructions+=4;NFSU2_TR(0x6dd4bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd4c3:{NFSU2_TR(0x6dd4c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd4c9:{NFSU2_TR(0x6dd4c9);
u8 U[26];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+18)));
w4(U+22,u32(u32(r4(R+0))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd4cc:{NFSU2_TR(0x6dd4cc);
if(r1(R+518)){{goto L6dd4e9;}}
}
B6dd4ce:L6dd4ce:{c.instructions+=9;NFSU2_TR(0x6dd4ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd4d1:{NFSU2_TR(0x6dd4d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd4d7:{NFSU2_TR(0x6dd4d7);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd4dc:{NFSU2_TR(0x6dd4dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd4de:{NFSU2_TR(0x6dd4de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd4df:{NFSU2_TR(0x6dd4df);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd4e1:{NFSU2_TR(0x6dd4e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd4e2:{NFSU2_TR(0x6dd4e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd4e3:{NFSU2_TR(0x6dd4e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd4e9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd4e9:L6dd4e9:{c.instructions+=4;NFSU2_TR(0x6dd4e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd4ed:{NFSU2_TR(0x6dd4ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd4f3:{NFSU2_TR(0x6dd4f3);
u8 U[26];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+18)));
w4(U+22,u32(u32(r4(R+0))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd4f6:{NFSU2_TR(0x6dd4f6);
if(r1(R+518)){{goto L6dd513;}}
}
B6dd4f8:L6dd4f8:{c.instructions+=9;NFSU2_TR(0x6dd4f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd4fb:{NFSU2_TR(0x6dd4fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd501:{NFSU2_TR(0x6dd501);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd506:{NFSU2_TR(0x6dd506);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd508:{NFSU2_TR(0x6dd508);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd509:{NFSU2_TR(0x6dd509);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd50b:{NFSU2_TR(0x6dd50b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd50c:{NFSU2_TR(0x6dd50c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd50d:{NFSU2_TR(0x6dd50d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd513ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd513:L6dd513:{c.instructions+=4;NFSU2_TR(0x6dd513);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd517:{NFSU2_TR(0x6dd517);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd51d:{NFSU2_TR(0x6dd51d);
u8 U[26];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+18)));
w4(U+22,u32(u32(r4(R+0))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd520:{NFSU2_TR(0x6dd520);
if(r1(R+518)){{goto L6dd53d;}}
}
B6dd522:L6dd522:{c.instructions+=9;NFSU2_TR(0x6dd522);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd525:{NFSU2_TR(0x6dd525);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd52b:{NFSU2_TR(0x6dd52b);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd530:{NFSU2_TR(0x6dd530);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd532:{NFSU2_TR(0x6dd532);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd533:{NFSU2_TR(0x6dd533);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd535:{NFSU2_TR(0x6dd535);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd536:{NFSU2_TR(0x6dd536);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd537:{NFSU2_TR(0x6dd537);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd53dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd53d:L6dd53d:{c.instructions+=4;NFSU2_TR(0x6dd53d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd541:{NFSU2_TR(0x6dd541);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd547:{NFSU2_TR(0x6dd547);
u8 U[26];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+18)));
w4(U+22,u32(u32(r4(R+0))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd54a:{NFSU2_TR(0x6dd54a);
if(r1(R+518)){{goto L6dd567;}}
}
B6dd54c:L6dd54c:{c.instructions+=9;NFSU2_TR(0x6dd54c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd54f:{NFSU2_TR(0x6dd54f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd555:{NFSU2_TR(0x6dd555);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd55a:{NFSU2_TR(0x6dd55a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd55c:{NFSU2_TR(0x6dd55c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd55d:{NFSU2_TR(0x6dd55d);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd55f:{NFSU2_TR(0x6dd55f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd560:{NFSU2_TR(0x6dd560);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd561:{NFSU2_TR(0x6dd561);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd567ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd567:L6dd567:{c.instructions+=4;NFSU2_TR(0x6dd567);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd56b:{NFSU2_TR(0x6dd56b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd571:{NFSU2_TR(0x6dd571);
u8 U[26];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+18)));
w4(U+22,u32(u32(r4(R+0))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd574:{NFSU2_TR(0x6dd574);
if(r1(R+518)){{goto L6dd591;}}
}
B6dd576:L6dd576:{c.instructions+=9;NFSU2_TR(0x6dd576);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd579:{NFSU2_TR(0x6dd579);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd57f:{NFSU2_TR(0x6dd57f);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd584:{NFSU2_TR(0x6dd584);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd586:{NFSU2_TR(0x6dd586);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd587:{NFSU2_TR(0x6dd587);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd589:{NFSU2_TR(0x6dd589);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd58a:{NFSU2_TR(0x6dd58a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd58b:{NFSU2_TR(0x6dd58b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd591ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd591:L6dd591:{c.instructions+=4;NFSU2_TR(0x6dd591);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd595:{NFSU2_TR(0x6dd595);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd59b:{NFSU2_TR(0x6dd59b);
u8 U[26];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+18)));
w4(U+22,u32(u32(r4(R+0))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd59e:{NFSU2_TR(0x6dd59e);
if(r1(R+518)){{goto L6dd5bb;}}
}
B6dd5a0:L6dd5a0:{c.instructions+=9;NFSU2_TR(0x6dd5a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd5a3:{NFSU2_TR(0x6dd5a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd5a9:{NFSU2_TR(0x6dd5a9);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd5ae:{NFSU2_TR(0x6dd5ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd5b0:{NFSU2_TR(0x6dd5b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd5b1:{NFSU2_TR(0x6dd5b1);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd5b3:{NFSU2_TR(0x6dd5b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd5b4:{NFSU2_TR(0x6dd5b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd5b5:{NFSU2_TR(0x6dd5b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd5bbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd5bb:L6dd5bb:{c.instructions+=4;NFSU2_TR(0x6dd5bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd5bf:{NFSU2_TR(0x6dd5bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd5c5:{NFSU2_TR(0x6dd5c5);
u8 U[26];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+18)));
w4(U+22,u32(u32(r4(R+0))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd5c8:{NFSU2_TR(0x6dd5c8);
if(r1(R+518)){{goto L6dd5e5;}}
}
B6dd5ca:L6dd5ca:{c.instructions+=9;NFSU2_TR(0x6dd5ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd5cd:{NFSU2_TR(0x6dd5cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd5d3:{NFSU2_TR(0x6dd5d3);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd5d8:{NFSU2_TR(0x6dd5d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd5da:{NFSU2_TR(0x6dd5da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd5db:{NFSU2_TR(0x6dd5db);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd5dd:{NFSU2_TR(0x6dd5dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd5de:{NFSU2_TR(0x6dd5de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd5df:{NFSU2_TR(0x6dd5df);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd5e5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd5e5:L6dd5e5:{c.instructions+=4;NFSU2_TR(0x6dd5e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd5e9:{NFSU2_TR(0x6dd5e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd5ef:{NFSU2_TR(0x6dd5ef);
u8 U[26];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+18)));
w4(U+22,u32(u32(r4(R+0))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd5f2:{NFSU2_TR(0x6dd5f2);
if(r1(R+518)){{goto L6dd60f;}}
}
B6dd5f4:L6dd5f4:{c.instructions+=9;NFSU2_TR(0x6dd5f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd5f7:{NFSU2_TR(0x6dd5f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd5fd:{NFSU2_TR(0x6dd5fd);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd602:{NFSU2_TR(0x6dd602);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd604:{NFSU2_TR(0x6dd604);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd605:{NFSU2_TR(0x6dd605);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd607:{NFSU2_TR(0x6dd607);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd608:{NFSU2_TR(0x6dd608);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd609:{NFSU2_TR(0x6dd609);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd60full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd60f:L6dd60f:{c.instructions+=4;NFSU2_TR(0x6dd60f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd613:{NFSU2_TR(0x6dd613);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd619:{NFSU2_TR(0x6dd619);
u8 U[26];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+18)));
w4(U+22,u32(u32(r4(R+0))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd61c:{NFSU2_TR(0x6dd61c);
if(r1(R+518)){{goto L6dd639;}}
}
B6dd61e:L6dd61e:{c.instructions+=9;NFSU2_TR(0x6dd61e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd621:{NFSU2_TR(0x6dd621);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd627:{NFSU2_TR(0x6dd627);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd62c:{NFSU2_TR(0x6dd62c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd62e:{NFSU2_TR(0x6dd62e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd62f:{NFSU2_TR(0x6dd62f);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd631:{NFSU2_TR(0x6dd631);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd632:{NFSU2_TR(0x6dd632);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd633:{NFSU2_TR(0x6dd633);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd639ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd639:L6dd639:{c.instructions+=4;NFSU2_TR(0x6dd639);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd63d:{NFSU2_TR(0x6dd63d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd643:{NFSU2_TR(0x6dd643);
u8 U[26];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+18)));
w4(U+22,u32(u32(r4(R+0))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd646:{NFSU2_TR(0x6dd646);
if(r1(R+518)){{goto L6dd663;}}
}
B6dd648:L6dd648:{c.instructions+=9;NFSU2_TR(0x6dd648);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd64b:{NFSU2_TR(0x6dd64b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd651:{NFSU2_TR(0x6dd651);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd656:{NFSU2_TR(0x6dd656);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd658:{NFSU2_TR(0x6dd658);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd659:{NFSU2_TR(0x6dd659);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd65b:{NFSU2_TR(0x6dd65b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd65c:{NFSU2_TR(0x6dd65c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd65d:{NFSU2_TR(0x6dd65d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd663ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd663:L6dd663:{c.instructions+=4;NFSU2_TR(0x6dd663);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd667:{NFSU2_TR(0x6dd667);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd66d:{NFSU2_TR(0x6dd66d);
u8 U[26];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+18)));
w4(U+22,u32(u32(r4(R+0))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd670:{NFSU2_TR(0x6dd670);
if(r1(R+518)){{goto L6dd68d;}}
}
B6dd672:L6dd672:{c.instructions+=9;NFSU2_TR(0x6dd672);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd675:{NFSU2_TR(0x6dd675);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd67b:{NFSU2_TR(0x6dd67b);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd680:{NFSU2_TR(0x6dd680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd682:{NFSU2_TR(0x6dd682);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd683:{NFSU2_TR(0x6dd683);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd685:{NFSU2_TR(0x6dd685);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd686:{NFSU2_TR(0x6dd686);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd687:{NFSU2_TR(0x6dd687);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd68dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd68d:L6dd68d:{c.instructions+=5;NFSU2_TR(0x6dd68d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd693:{NFSU2_TR(0x6dd693);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6dd694:{NFSU2_TR(0x6dd694);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6dd697:{NFSU2_TR(0x6dd697);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dd699:{NFSU2_TR(0x6dd699);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dd3b0u);}goto L6dd3b0;}}
}
B6dd69f:L6dd69f:{c.instructions+=2;NFSU2_TR(0x6dd69f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B6dd6a2:{NFSU2_TR(0x6dd6a2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6dd74f;}}
}
B6dd6a8:L6dd6a8:{c.instructions+=1;NFSU2_TR(0x6dd6a8);
{goto L6dd6b0;}
}
B6dd6b0:L6dd6b0:{c.instructions+=4;NFSU2_TR(0x6dd6b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8390ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6dd6b7:{NFSU2_TR(0x6dd6b7);
w4(R+24,u32(0x1ull));
}
B6dd6bc:{NFSU2_TR(0x6dd6bc);
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
B6dd6be:{NFSU2_TR(0x6dd6be);
if(r1(R+518)){{goto L6dd6d8;}}
}
B6dd6c0:L6dd6c0:{c.instructions+=8;NFSU2_TR(0x6dd6c0);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd6c5:{NFSU2_TR(0x6dd6c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd6c6:{NFSU2_TR(0x6dd6c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd6c7:{NFSU2_TR(0x6dd6c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd6c8:{NFSU2_TR(0x6dd6c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8390ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd6cf:{NFSU2_TR(0x6dd6cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd6d1:{NFSU2_TR(0x6dd6d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd6d2:{NFSU2_TR(0x6dd6d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd6d8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd6d8:L6dd6d8:{c.instructions+=2;NFSU2_TR(0x6dd6d8);
u8 U[26];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8410ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+24)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd6df:{NFSU2_TR(0x6dd6df);
if(r1(R+518)){{goto L6dd6fa;}}
}
B6dd6e1:L6dd6e1:{c.instructions+=8;NFSU2_TR(0x6dd6e1);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd6e6:{NFSU2_TR(0x6dd6e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd6e7:{NFSU2_TR(0x6dd6e7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd6e9:{NFSU2_TR(0x6dd6e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd6ea:{NFSU2_TR(0x6dd6ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8410ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd6f1:{NFSU2_TR(0x6dd6f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dd6f3:{NFSU2_TR(0x6dd6f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd6f4:{NFSU2_TR(0x6dd6f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd6faull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd6fa:L6dd6fa:{c.instructions+=3;NFSU2_TR(0x6dd6fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8590ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6dd701:{NFSU2_TR(0x6dd701);
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
B6dd703:{NFSU2_TR(0x6dd703);
if(r1(R+518)){{goto L6dd723;}}
}
B6dd705:L6dd705:{c.instructions+=8;NFSU2_TR(0x6dd705);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd70a:{NFSU2_TR(0x6dd70a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd70c:{NFSU2_TR(0x6dd70c);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd70e:{NFSU2_TR(0x6dd70e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd70f:{NFSU2_TR(0x6dd70f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8590ull))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B6dd71a:{NFSU2_TR(0x6dd71a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd71c:{NFSU2_TR(0x6dd71c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd71d:{NFSU2_TR(0x6dd71d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd723ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd723:L6dd723:{c.instructions+=2;NFSU2_TR(0x6dd723);
u8 U[26];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8530ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+28)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dd72a:{NFSU2_TR(0x6dd72a);
if(r1(R+518)){{goto L6dd745;}}
}
B6dd72c:L6dd72c:{c.instructions+=8;NFSU2_TR(0x6dd72c);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd731:{NFSU2_TR(0x6dd731);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd732:{NFSU2_TR(0x6dd732);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd734:{NFSU2_TR(0x6dd734);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd735:{NFSU2_TR(0x6dd735);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8530ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd73c:{NFSU2_TR(0x6dd73c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dd73e:{NFSU2_TR(0x6dd73e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd73f:{NFSU2_TR(0x6dd73f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd745ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd745:L6dd745:{c.instructions+=3;NFSU2_TR(0x6dd745);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6dd746:{NFSU2_TR(0x6dd746);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B6dd749:{NFSU2_TR(0x6dd749);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dd6b0u);}goto L6dd6b0;}}
}
B6dd74f:L6dd74f:{c.instructions+=3;NFSU2_TR(0x6dd74f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dd750:{NFSU2_TR(0x6dd750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dd751:{NFSU2_TR(0x6dd751);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6dd752:L6dd752:{c.instructions+=3;NFSU2_TR(0x6dd752);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dd753:{NFSU2_TR(0x6dd753);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dd756:{NFSU2_TR(0x6dd756);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dd760:L6dd760:{c.instructions+=9;NFSU2_TR(0x6dd760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B6dd763:{NFSU2_TR(0x6dd763);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd764:{NFSU2_TR(0x6dd764);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd765:{NFSU2_TR(0x6dd765);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd766:{NFSU2_TR(0x6dd766);
__builtin_memmove((R+12),(R+4),4);
}
B6dd768:{NFSU2_TR(0x6dd768);
u8 U[4];
w4(U+0,u32(0x224ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd76d:{NFSU2_TR(0x6dd76d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd76e:{NFSU2_TR(0x6dd76e);
u8 U[4];
w4(U+0,u32(0x8a8150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd773:{NFSU2_TR(0x6dd773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd778ull));
TAIL_STATIC(0x401000u,401);
}
B6dd778:L6dd778:{c.instructions+=2;NFSU2_TR(0x6dd778);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6dd77b:{NFSU2_TR(0x6dd77b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd780ull));
TAIL_STATIC(0x6da260u,6da);
}
B6dd780:L6dd780:{c.instructions+=5;NFSU2_TR(0x6dd780);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd786:{NFSU2_TR(0x6dd786);
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
B6dd787:{NFSU2_TR(0x6dd787);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd78b:{NFSU2_TR(0x6dd78b);
w4(R+28,u32(0x0ull));
}
B6dd790:{NFSU2_TR(0x6dd790);
if(r1(R+519)){{goto L6ddaa1;}}
}
B6dd796:L6dd796:{c.instructions+=47;NFSU2_TR(0x6dd796);
w4(R+0,u32(0x8a83b0ull));
}
B6dd79b:{NFSU2_TR(0x6dd79b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd79d:{NFSU2_TR(0x6dd79d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd7a1:{NFSU2_TR(0x6dd7a1);
w4(R+0,u32(0x8a83d0ull));
}
B6dd7a6:{NFSU2_TR(0x6dd7a6);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd7a8:{NFSU2_TR(0x6dd7a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd7ac:{NFSU2_TR(0x6dd7ac);
w4(R+0,u32(0x8a83f0ull));
}
B6dd7b1:{NFSU2_TR(0x6dd7b1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd7b3:{NFSU2_TR(0x6dd7b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd7b7:{NFSU2_TR(0x6dd7b7);
w4(R+0,u32(0x8a8410ull));
}
B6dd7bc:{NFSU2_TR(0x6dd7bc);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd7be:{NFSU2_TR(0x6dd7be);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd7c2:{NFSU2_TR(0x6dd7c2);
w4(R+0,u32(0x8a8430ull));
}
B6dd7c7:{NFSU2_TR(0x6dd7c7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd7c9:{NFSU2_TR(0x6dd7c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd7cd:{NFSU2_TR(0x6dd7cd);
w4(R+0,u32(0x8a8450ull));
}
B6dd7d2:{NFSU2_TR(0x6dd7d2);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd7d4:{NFSU2_TR(0x6dd7d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd7d8:{NFSU2_TR(0x6dd7d8);
w4(R+0,u32(0x8a8470ull));
}
B6dd7dd:{NFSU2_TR(0x6dd7dd);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd7df:{NFSU2_TR(0x6dd7df);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd7e3:{NFSU2_TR(0x6dd7e3);
w4(R+0,u32(0x8a8490ull));
}
B6dd7e8:{NFSU2_TR(0x6dd7e8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd7ea:{NFSU2_TR(0x6dd7ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd7ee:{NFSU2_TR(0x6dd7ee);
w4(R+0,u32(0x8a84b0ull));
}
B6dd7f3:{NFSU2_TR(0x6dd7f3);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd7f5:{NFSU2_TR(0x6dd7f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd7f9:{NFSU2_TR(0x6dd7f9);
w4(R+0,u32(0x8a84d0ull));
}
B6dd7fe:{NFSU2_TR(0x6dd7fe);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd800:{NFSU2_TR(0x6dd800);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd804:{NFSU2_TR(0x6dd804);
w4(R+0,u32(0x8a84f0ull));
}
B6dd809:{NFSU2_TR(0x6dd809);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd80b:{NFSU2_TR(0x6dd80b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd80f:{NFSU2_TR(0x6dd80f);
w4(R+0,u32(0x8a8510ull));
}
B6dd814:{NFSU2_TR(0x6dd814);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd816:{NFSU2_TR(0x6dd816);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd81a:{NFSU2_TR(0x6dd81a);
w4(R+0,u32(0x8a8530ull));
}
B6dd81f:{NFSU2_TR(0x6dd81f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B6dd821:{NFSU2_TR(0x6dd821);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd822:{NFSU2_TR(0x6dd822);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd826:{NFSU2_TR(0x6dd826);
w4(R+20,u32(0x8a8390ull));
}
B6dd82b:{NFSU2_TR(0x6dd82b);
w4(R+0,u32(0x8a8550ull));
}
B6dd830:{NFSU2_TR(0x6dd830);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+12))));
}
B6dd832:{NFSU2_TR(0x6dd832);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dd834:{NFSU2_TR(0x6dd834);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dd837:{NFSU2_TR(0x6dd837);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dd83b:{NFSU2_TR(0x6dd83b);
{goto L6dd840;}
}
B6dd840:L6dd840:{c.instructions+=10;NFSU2_TR(0x6dd840);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd843:{NFSU2_TR(0x6dd843);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8390ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd84a:{NFSU2_TR(0x6dd84a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dd84d:{NFSU2_TR(0x6dd84d);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd852:{NFSU2_TR(0x6dd852);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dd854:{NFSU2_TR(0x6dd854);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd855:{NFSU2_TR(0x6dd855);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd857:{NFSU2_TR(0x6dd857);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd858:{NFSU2_TR(0x6dd858);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd859:{NFSU2_TR(0x6dd859);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd85full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd85f:L6dd85f:{c.instructions+=10;NFSU2_TR(0x6dd85f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd862:{NFSU2_TR(0x6dd862);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a83b0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd869:{NFSU2_TR(0x6dd869);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dd86c:{NFSU2_TR(0x6dd86c);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd871:{NFSU2_TR(0x6dd871);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dd873:{NFSU2_TR(0x6dd873);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd874:{NFSU2_TR(0x6dd874);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd876:{NFSU2_TR(0x6dd876);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd877:{NFSU2_TR(0x6dd877);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd878:{NFSU2_TR(0x6dd878);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd87eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd87e:L6dd87e:{c.instructions+=10;NFSU2_TR(0x6dd87e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dd880:{NFSU2_TR(0x6dd880);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd883:{NFSU2_TR(0x6dd883);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd885:{NFSU2_TR(0x6dd885);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd88a:{NFSU2_TR(0x6dd88a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dd88c:{NFSU2_TR(0x6dd88c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd88d:{NFSU2_TR(0x6dd88d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd88f:{NFSU2_TR(0x6dd88f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd890:{NFSU2_TR(0x6dd890);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd891:{NFSU2_TR(0x6dd891);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd897ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd897:L6dd897:{c.instructions+=11;NFSU2_TR(0x6dd897);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd89a:{NFSU2_TR(0x6dd89a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd89e:{NFSU2_TR(0x6dd89e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd8a1:{NFSU2_TR(0x6dd8a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd8a4:{NFSU2_TR(0x6dd8a4);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd8a9:{NFSU2_TR(0x6dd8a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd8ab:{NFSU2_TR(0x6dd8ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd8ac:{NFSU2_TR(0x6dd8ac);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd8ae:{NFSU2_TR(0x6dd8ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd8af:{NFSU2_TR(0x6dd8af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd8b0:{NFSU2_TR(0x6dd8b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd8b6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd8b6:L6dd8b6:{c.instructions+=11;NFSU2_TR(0x6dd8b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dd8b9:{NFSU2_TR(0x6dd8b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd8bd:{NFSU2_TR(0x6dd8bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd8c0:{NFSU2_TR(0x6dd8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dd8c3:{NFSU2_TR(0x6dd8c3);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd8c8:{NFSU2_TR(0x6dd8c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dd8ca:{NFSU2_TR(0x6dd8ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd8cb:{NFSU2_TR(0x6dd8cb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd8cd:{NFSU2_TR(0x6dd8cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd8ce:{NFSU2_TR(0x6dd8ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd8cf:{NFSU2_TR(0x6dd8cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd8d5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd8d5:L6dd8d5:{c.instructions+=11;NFSU2_TR(0x6dd8d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd8d8:{NFSU2_TR(0x6dd8d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd8dc:{NFSU2_TR(0x6dd8dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd8df:{NFSU2_TR(0x6dd8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd8e2:{NFSU2_TR(0x6dd8e2);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd8e7:{NFSU2_TR(0x6dd8e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd8e9:{NFSU2_TR(0x6dd8e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd8ea:{NFSU2_TR(0x6dd8ea);
u8 U[4];
w4(U+0,u32(0x1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd8ec:{NFSU2_TR(0x6dd8ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd8ed:{NFSU2_TR(0x6dd8ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd8ee:{NFSU2_TR(0x6dd8ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd8f4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd8f4:L6dd8f4:{c.instructions+=11;NFSU2_TR(0x6dd8f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dd8fa:{NFSU2_TR(0x6dd8fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd8fe:{NFSU2_TR(0x6dd8fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd901:{NFSU2_TR(0x6dd901);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dd907:{NFSU2_TR(0x6dd907);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd90c:{NFSU2_TR(0x6dd90c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dd90e:{NFSU2_TR(0x6dd90e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd90f:{NFSU2_TR(0x6dd90f);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd911:{NFSU2_TR(0x6dd911);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd912:{NFSU2_TR(0x6dd912);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd913:{NFSU2_TR(0x6dd913);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd919ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd919:L6dd919:{c.instructions+=11;NFSU2_TR(0x6dd919);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd91f:{NFSU2_TR(0x6dd91f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd923:{NFSU2_TR(0x6dd923);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd926:{NFSU2_TR(0x6dd926);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd92b:{NFSU2_TR(0x6dd92b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd931:{NFSU2_TR(0x6dd931);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd933:{NFSU2_TR(0x6dd933);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd934:{NFSU2_TR(0x6dd934);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd936:{NFSU2_TR(0x6dd936);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd937:{NFSU2_TR(0x6dd937);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd938:{NFSU2_TR(0x6dd938);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd93eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd93e:L6dd93e:{c.instructions+=11;NFSU2_TR(0x6dd93e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dd944:{NFSU2_TR(0x6dd944);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd948:{NFSU2_TR(0x6dd948);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd94b:{NFSU2_TR(0x6dd94b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dd951:{NFSU2_TR(0x6dd951);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd956:{NFSU2_TR(0x6dd956);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dd958:{NFSU2_TR(0x6dd958);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd959:{NFSU2_TR(0x6dd959);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd95b:{NFSU2_TR(0x6dd95b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd95c:{NFSU2_TR(0x6dd95c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd95d:{NFSU2_TR(0x6dd95d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd963ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd963:L6dd963:{c.instructions+=11;NFSU2_TR(0x6dd963);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd969:{NFSU2_TR(0x6dd969);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd96d:{NFSU2_TR(0x6dd96d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd970:{NFSU2_TR(0x6dd970);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd976:{NFSU2_TR(0x6dd976);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd97b:{NFSU2_TR(0x6dd97b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd97d:{NFSU2_TR(0x6dd97d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd97e:{NFSU2_TR(0x6dd97e);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd980:{NFSU2_TR(0x6dd980);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd981:{NFSU2_TR(0x6dd981);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd982:{NFSU2_TR(0x6dd982);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd988ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd988:L6dd988:{c.instructions+=11;NFSU2_TR(0x6dd988);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dd98e:{NFSU2_TR(0x6dd98e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd992:{NFSU2_TR(0x6dd992);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd995:{NFSU2_TR(0x6dd995);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dd99b:{NFSU2_TR(0x6dd99b);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd9a0:{NFSU2_TR(0x6dd9a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dd9a2:{NFSU2_TR(0x6dd9a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd9a3:{NFSU2_TR(0x6dd9a3);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd9a5:{NFSU2_TR(0x6dd9a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd9a6:{NFSU2_TR(0x6dd9a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd9a7:{NFSU2_TR(0x6dd9a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd9adull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd9ad:L6dd9ad:{c.instructions+=11;NFSU2_TR(0x6dd9ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd9b3:{NFSU2_TR(0x6dd9b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd9b7:{NFSU2_TR(0x6dd9b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd9ba:{NFSU2_TR(0x6dd9ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dd9c0:{NFSU2_TR(0x6dd9c0);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd9c5:{NFSU2_TR(0x6dd9c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dd9c7:{NFSU2_TR(0x6dd9c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd9c8:{NFSU2_TR(0x6dd9c8);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd9ca:{NFSU2_TR(0x6dd9ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd9cb:{NFSU2_TR(0x6dd9cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd9cc:{NFSU2_TR(0x6dd9cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd9d2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd9d2:L6dd9d2:{c.instructions+=11;NFSU2_TR(0x6dd9d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dd9d8:{NFSU2_TR(0x6dd9d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd9dc:{NFSU2_TR(0x6dd9dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dd9df:{NFSU2_TR(0x6dd9df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dd9e5:{NFSU2_TR(0x6dd9e5);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dd9ea:{NFSU2_TR(0x6dd9ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dd9ec:{NFSU2_TR(0x6dd9ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd9ed:{NFSU2_TR(0x6dd9ed);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd9ef:{NFSU2_TR(0x6dd9ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd9f0:{NFSU2_TR(0x6dd9f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dd9f1:{NFSU2_TR(0x6dd9f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dd9f7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dd9f7:L6dd9f7:{c.instructions+=11;NFSU2_TR(0x6dd9f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dd9fd:{NFSU2_TR(0x6dd9fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dda01:{NFSU2_TR(0x6dda01);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dda04:{NFSU2_TR(0x6dda04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dda0a:{NFSU2_TR(0x6dda0a);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dda0f:{NFSU2_TR(0x6dda0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dda11:{NFSU2_TR(0x6dda11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dda12:{NFSU2_TR(0x6dda12);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dda14:{NFSU2_TR(0x6dda14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dda15:{NFSU2_TR(0x6dda15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dda16:{NFSU2_TR(0x6dda16);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dda1cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dda1c:L6dda1c:{c.instructions+=11;NFSU2_TR(0x6dda1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dda22:{NFSU2_TR(0x6dda22);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dda26:{NFSU2_TR(0x6dda26);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dda29:{NFSU2_TR(0x6dda29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dda2f:{NFSU2_TR(0x6dda2f);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dda34:{NFSU2_TR(0x6dda34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dda36:{NFSU2_TR(0x6dda36);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dda37:{NFSU2_TR(0x6dda37);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dda39:{NFSU2_TR(0x6dda39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dda3a:{NFSU2_TR(0x6dda3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dda3b:{NFSU2_TR(0x6dda3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dda41ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dda41:L6dda41:{c.instructions+=11;NFSU2_TR(0x6dda41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dda47:{NFSU2_TR(0x6dda47);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dda4b:{NFSU2_TR(0x6dda4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dda4e:{NFSU2_TR(0x6dda4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dda54:{NFSU2_TR(0x6dda54);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dda59:{NFSU2_TR(0x6dda59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dda5b:{NFSU2_TR(0x6dda5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dda5c:{NFSU2_TR(0x6dda5c);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dda5e:{NFSU2_TR(0x6dda5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dda5f:{NFSU2_TR(0x6dda5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dda60:{NFSU2_TR(0x6dda60);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dda66ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dda66:L6dda66:{c.instructions+=11;NFSU2_TR(0x6dda66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dda6c:{NFSU2_TR(0x6dda6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dda70:{NFSU2_TR(0x6dda70);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dda73:{NFSU2_TR(0x6dda73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dda79:{NFSU2_TR(0x6dda79);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dda7e:{NFSU2_TR(0x6dda7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dda80:{NFSU2_TR(0x6dda80);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dda81:{NFSU2_TR(0x6dda81);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dda83:{NFSU2_TR(0x6dda83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dda84:{NFSU2_TR(0x6dda84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dda85:{NFSU2_TR(0x6dda85);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dda8bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dda8b:L6dda8b:{c.instructions+=5;NFSU2_TR(0x6dda8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dda8f:{NFSU2_TR(0x6dda8f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6dda90:{NFSU2_TR(0x6dda90);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6dda93:{NFSU2_TR(0x6dda93);
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
B6dda95:{NFSU2_TR(0x6dda95);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dd840u);}goto L6dd840;}}
}
B6dda9b:L6dda9b:{c.instructions+=3;NFSU2_TR(0x6dda9b);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6dda9e:{NFSU2_TR(0x6dda9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6dda9f:{NFSU2_TR(0x6dda9f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ddaf6;}}
}
B6ddaa1:L6ddaa1:{c.instructions+=9;NFSU2_TR(0x6ddaa1);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6ddaa6:{NFSU2_TR(0x6ddaa6);
w4(R+24,u32(0x1ull));
}
B6ddaab:{NFSU2_TR(0x6ddaab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddaac:{NFSU2_TR(0x6ddaac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddaad:{NFSU2_TR(0x6ddaad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddaae:{NFSU2_TR(0x6ddaae);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8390ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddab5:{NFSU2_TR(0x6ddab5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ddab7:{NFSU2_TR(0x6ddab7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddab8:{NFSU2_TR(0x6ddab8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ddabeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ddabe:L6ddabe:{c.instructions+=8;NFSU2_TR(0x6ddabe);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6ddac3:{NFSU2_TR(0x6ddac3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddac4:{NFSU2_TR(0x6ddac4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddac6:{NFSU2_TR(0x6ddac6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddac7:{NFSU2_TR(0x6ddac7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8410ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddace:{NFSU2_TR(0x6ddace);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ddad0:{NFSU2_TR(0x6ddad0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddad1:{NFSU2_TR(0x6ddad1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ddad7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ddad7:L6ddad7:{c.instructions+=8;NFSU2_TR(0x6ddad7);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6ddadc:{NFSU2_TR(0x6ddadc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddadd:{NFSU2_TR(0x6ddadd);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddadf:{NFSU2_TR(0x6ddadf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddae0:{NFSU2_TR(0x6ddae0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8530ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddae7:{NFSU2_TR(0x6ddae7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ddae9:{NFSU2_TR(0x6ddae9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddaea:{NFSU2_TR(0x6ddaea);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ddaf0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ddaf0:L6ddaf0:{c.instructions+=3;NFSU2_TR(0x6ddaf0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ddaf1:{NFSU2_TR(0x6ddaf1);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6ddaf4:{NFSU2_TR(0x6ddaf4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ddaa1u);}goto L6ddaa1;}}
}
B6ddaf6:L6ddaf6:{c.instructions+=5;NFSU2_TR(0x6ddaf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ddaf7:{NFSU2_TR(0x6ddaf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ddaf8:{NFSU2_TR(0x6ddaf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ddaf9:{NFSU2_TR(0x6ddaf9);
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
B6ddafc:{NFSU2_TR(0x6ddafc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ddb00:L6ddb00:{c.instructions+=6;NFSU2_TR(0x6ddb00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddb01:{NFSU2_TR(0x6ddb01);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ddb03:{NFSU2_TR(0x6ddb03);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ddb05:{NFSU2_TR(0x6ddb05);
w4(R+8,u32(0x1ull));
}
B6ddb0a:{NFSU2_TR(0x6ddb0a);
w4(R+24,u32(0x2ull));
}
B6ddb0f:{NFSU2_TR(0x6ddb0f);
}
B6ddb10:L6ddb10:{c.instructions+=2;NFSU2_TR(0x6ddb10);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ddb12:{NFSU2_TR(0x6ddb12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ddb20;}}
}
B6ddb14:L6ddb14:{c.instructions+=2;NFSU2_TR(0x6ddb14);
s4(0x8a8390,u32(0x4ull));
}
B6ddb1e:{NFSU2_TR(0x6ddb1e);
{goto L6ddb27;}
}
B6ddb20:L6ddb20:{c.instructions+=1;NFSU2_TR(0x6ddb20);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8390ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddb27:L6ddb27:{c.instructions+=5;NFSU2_TR(0x6ddb27);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ddb29:{NFSU2_TR(0x6ddb29);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a83b0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddb30:{NFSU2_TR(0x6ddb30);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a83d0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddb37:{NFSU2_TR(0x6ddb37);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a83f0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddb3e:{NFSU2_TR(0x6ddb3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ddb48;}}
}
B6ddb40:L6ddb40:{c.instructions+=2;NFSU2_TR(0x6ddb40);
__builtin_memmove(gp(0x8a8410),(R+24),4);
}
B6ddb46:{NFSU2_TR(0x6ddb46);
{goto L6ddb4f;}
}
B6ddb48:L6ddb48:{c.instructions+=1;NFSU2_TR(0x6ddb48);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8410ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddb4f:L6ddb4f:{c.instructions+=15;NFSU2_TR(0x6ddb4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8430ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddb56:{NFSU2_TR(0x6ddb56);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8450ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddb5d:{NFSU2_TR(0x6ddb5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8470ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddb64:{NFSU2_TR(0x6ddb64);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8490ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddb6b:{NFSU2_TR(0x6ddb6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a84b0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddb72:{NFSU2_TR(0x6ddb72);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a84d0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddb79:{NFSU2_TR(0x6ddb79);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a84f0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddb80:{NFSU2_TR(0x6ddb80);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8510ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddb87:{NFSU2_TR(0x6ddb87);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8530ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddb8e:{NFSU2_TR(0x6ddb8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8550ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddb95:{NFSU2_TR(0x6ddb95);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8570ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddb9c:{NFSU2_TR(0x6ddb9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a8590ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ddba3:{NFSU2_TR(0x6ddba3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ddba4:{NFSU2_TR(0x6ddba4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ddba7:{NFSU2_TR(0x6ddba7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ddb10u);}goto L6ddb10;}}
}
B6ddbad:L6ddbad:{c.instructions+=4;NFSU2_TR(0x6ddbad);
__builtin_memmove(gp(0x8a85b0),(R+4),4);
}
B6ddbb3:{NFSU2_TR(0x6ddbb3);
w4(R+4,u32(0x8a8390ull));
}
B6ddbb8:{NFSU2_TR(0x6ddbb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ddbb9:{NFSU2_TR(0x6ddbb9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dd760u);}goto L6dd760;}
}
B6ddbc0:L6ddbc0:{c.instructions+=8;NFSU2_TR(0x6ddbc0);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddbc6:{NFSU2_TR(0x6ddbc6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ddbca:{NFSU2_TR(0x6ddbca);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ddbcd:{NFSU2_TR(0x6ddbcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ddbd1:{NFSU2_TR(0x6ddbd1);
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
B6ddbd3:{NFSU2_TR(0x6ddbd3);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ddbd9:{NFSU2_TR(0x6ddbd9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ddbdd:{NFSU2_TR(0x6ddbdd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ddbe5;}}
}
B6ddbdf:L6ddbdf:{c.instructions+=1;NFSU2_TR(0x6ddbdf);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ddbe5:L6ddbe5:{c.instructions+=12;NFSU2_TR(0x6ddbe5);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6ddbe8:{NFSU2_TR(0x6ddbe8);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ddbee:{NFSU2_TR(0x6ddbee);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ddbf4:{NFSU2_TR(0x6ddbf4);
{u32 ea_=u32(r4(R+4)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddbfa:{NFSU2_TR(0x6ddbfa);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ddc01:{NFSU2_TR(0x6ddc01);
{u32 ea_=u32(r4(R+4)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ddc07:{NFSU2_TR(0x6ddc07);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddc0b:{NFSU2_TR(0x6ddc0b);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ddc12:{NFSU2_TR(0x6ddc12);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddc16:{NFSU2_TR(0x6ddc16);
{u32 ea_=u32(r4(R+4)+u32(260u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ddc1c:{NFSU2_TR(0x6ddc1c);
{u32 ea_=u32(r4(R+4)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ddc22:{NFSU2_TR(0x6ddc22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ddc30:L6ddc30:{c.instructions+=5;NFSU2_TR(0x6ddc30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddc31:{NFSU2_TR(0x6ddc31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ddc37:{NFSU2_TR(0x6ddc37);
{u32 ea_=u32(r4(R+4)+u32(272u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ddc3d:{NFSU2_TR(0x6ddc3d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ddc3f:{NFSU2_TR(0x6ddc3f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ddc47;}}
}
B6ddc41:L6ddc41:{c.instructions+=1;NFSU2_TR(0x6ddc41);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ddc47:L6ddc47:{c.instructions+=3;NFSU2_TR(0x6ddc47);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ddc49:{NFSU2_TR(0x6ddc49);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddc51:{NFSU2_TR(0x6ddc51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ddc69;}}
}
B6ddc53:L6ddc53:{c.instructions+=4;NFSU2_TR(0x6ddc53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ddc59:{NFSU2_TR(0x6ddc59);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ddc5b:{NFSU2_TR(0x6ddc5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x20ull))));
}
B6ddc5e:{NFSU2_TR(0x6ddc5e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ddcbc;}}
}
B6ddc60:L6ddc60:{c.instructions+=3;NFSU2_TR(0x6ddc60);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ddc61:{NFSU2_TR(0x6ddc61);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ddc67:{NFSU2_TR(0x6ddc67);
{goto L6ddcbc;}
}
B6ddc69:L6ddc69:{c.instructions+=2;NFSU2_TR(0x6ddc69);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ddc6f:{NFSU2_TR(0x6ddc6f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ddc77;}}
}
B6ddc71:L6ddc71:{c.instructions+=1;NFSU2_TR(0x6ddc71);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ddc77:L6ddc77:{c.instructions+=5;NFSU2_TR(0x6ddc77);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ddc7b:{NFSU2_TR(0x6ddc7b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ddc7f:{NFSU2_TR(0x6ddc7f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ddc81:{NFSU2_TR(0x6ddc81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ddc8b:{NFSU2_TR(0x6ddc8b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ddc93;}}
}
B6ddc8d:L6ddc8d:{c.instructions+=1;NFSU2_TR(0x6ddc8d);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ddc93:L6ddc93:{c.instructions+=9;NFSU2_TR(0x6ddc93);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B6ddc95:{NFSU2_TR(0x6ddc95);
{u32 ea_=u32(u32(7890136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ddc9b:{NFSU2_TR(0x6ddc9b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ddc9f:{NFSU2_TR(0x6ddc9f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ddca1:{NFSU2_TR(0x6ddca1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddca5:{NFSU2_TR(0x6ddca5);
{u32 ea_=u32(r4(R+4)+u32(280u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ddcab:{NFSU2_TR(0x6ddcab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ddcad:{NFSU2_TR(0x6ddcad);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ddcb0:{NFSU2_TR(0x6ddcb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ddcbc;}}
}
B6ddcb2:L6ddcb2:{c.instructions+=2;NFSU2_TR(0x6ddcb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ddcb6:{NFSU2_TR(0x6ddcb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ddcbc:L6ddcbc:{c.instructions+=7;NFSU2_TR(0x6ddcbc);
__builtin_memmove((R+0),gp(0x8a85b8),4);
}
B6ddcc1:{NFSU2_TR(0x6ddcc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddcc2:{NFSU2_TR(0x6ddcc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ddcc6:{NFSU2_TR(0x6ddcc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddcc7:{NFSU2_TR(0x6ddcc7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddcc8:{NFSU2_TR(0x6ddcc8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6ddccb:{NFSU2_TR(0x6ddccb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ddcd0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ddbc0u);}goto L6ddbc0;}
}
B6ddcd0:L6ddcd0:{c.instructions+=2;NFSU2_TR(0x6ddcd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ddcd1:{NFSU2_TR(0x6ddcd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ddce0:L6ddce0:{c.instructions+=13;NFSU2_TR(0x6ddce0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B6ddce3:{NFSU2_TR(0x6ddce3);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddce7:{NFSU2_TR(0x6ddce7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddce8:{NFSU2_TR(0x6ddce8);
{u32 ea_=u32(u32(9078216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddcee:{NFSU2_TR(0x6ddcee);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B6ddcf0:{NFSU2_TR(0x6ddcf0);
{u32 ea_=u32(u32(7894452u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ddcf6:{NFSU2_TR(0x6ddcf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ddcfa:{NFSU2_TR(0x6ddcfa);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ddcfc:{NFSU2_TR(0x6ddcfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ddd04:{NFSU2_TR(0x6ddd04);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B6ddd06:{NFSU2_TR(0x6ddd06);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ddd08:{NFSU2_TR(0x6ddd08);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ddd0b:{NFSU2_TR(0x6ddd0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dddca;}}
}
B6ddd11:L6ddd11:{c.instructions+=15;NFSU2_TR(0x6ddd11);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ddd15:{NFSU2_TR(0x6ddd15);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ddd17:{NFSU2_TR(0x6ddd17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddd18:{NFSU2_TR(0x6ddd18);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ddd1c:{NFSU2_TR(0x6ddd1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddd1d:{NFSU2_TR(0x6ddd1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ddd21:{NFSU2_TR(0x6ddd21);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddd22:{NFSU2_TR(0x6ddd22);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ddd26:{NFSU2_TR(0x6ddd26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddd27:{NFSU2_TR(0x6ddd27);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ddd2b:{NFSU2_TR(0x6ddd2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddd2c:{NFSU2_TR(0x6ddd2c);
__builtin_memmove((R+4),gp(0x8a85d0),4);
}
B6ddd32:{NFSU2_TR(0x6ddd32);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ddd36:{NFSU2_TR(0x6ddd36);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddd37:{NFSU2_TR(0x6ddd37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ddd3cull));
TAIL_STATIC(0x6e1350u,6e1);
}
B6ddd3c:L6ddd3c:{c.instructions+=8;NFSU2_TR(0x6ddd3c);
{u32 ea_=u32(u32(9078216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddd42:{NFSU2_TR(0x6ddd42);
{u32 ea_=u32(u32(7894452u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ddd48:{NFSU2_TR(0x6ddd48);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ddd4c:{NFSU2_TR(0x6ddd4c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddd50:{NFSU2_TR(0x6ddd50);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6ddd54:{NFSU2_TR(0x6ddd54);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ddd56:{NFSU2_TR(0x6ddd56);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ddd59:{NFSU2_TR(0x6ddd59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dddc6;}}
}
B6ddd5b:L6ddd5b:{c.instructions+=9;NFSU2_TR(0x6ddd5b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddd5f:{NFSU2_TR(0x6ddd5f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ddd65:{NFSU2_TR(0x6ddd65);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ddd69:{NFSU2_TR(0x6ddd69);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ddd6d:{NFSU2_TR(0x6ddd6d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddd71:{NFSU2_TR(0x6ddd71);
{u32 ea_=u32(u32(8450196u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ddd77:{NFSU2_TR(0x6ddd77);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ddd7b:{NFSU2_TR(0x6ddd7b);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddd7f:{NFSU2_TR(0x6ddd7f);
}
B6ddd80:L6ddd80:{c.instructions+=5;NFSU2_TR(0x6ddd80);
{u32 ea_=u32(u32(8450200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddd86:{NFSU2_TR(0x6ddd86);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ddd8a:{NFSU2_TR(0x6ddd8a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ddd8c:{NFSU2_TR(0x6ddd8c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ddd8f:{NFSU2_TR(0x6ddd8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ddd99;}}
}
B6ddd91:L6ddd91:{c.instructions+=2;NFSU2_TR(0x6ddd91);
{u32 ea_=u32(u32(8130516u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ddd97:{NFSU2_TR(0x6ddd97);
{goto L6ddd9f;}
}
B6ddd99:L6ddd99:{c.instructions+=1;NFSU2_TR(0x6ddd99);
{u32 ea_=u32(u32(8130516u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ddd9f:L6ddd9f:{c.instructions+=8;NFSU2_TR(0x6ddd9f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6ddda1:{NFSU2_TR(0x6ddda1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ddda5:{NFSU2_TR(0x6ddda5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6ddda7:{NFSU2_TR(0x6ddda7);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ddda9:{NFSU2_TR(0x6ddda9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6dddad:{NFSU2_TR(0x6dddad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6dddaf:{NFSU2_TR(0x6dddaf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6dddb2:{NFSU2_TR(0x6dddb2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ddd80u);}goto L6ddd80;}}
}
B6dddb4:L6dddb4:{c.instructions+=6;NFSU2_TR(0x6dddb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dddb8:{NFSU2_TR(0x6dddb8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6dddba:{NFSU2_TR(0x6dddba);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6dddbe:{NFSU2_TR(0x6dddbe);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6dddc0:{NFSU2_TR(0x6dddc0);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6dddc4:{NFSU2_TR(0x6dddc4);
{goto L6dddce;}
}
B6dddc6:L6dddc6:{c.instructions+=1;NFSU2_TR(0x6dddc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dddca:L6dddca:{c.instructions+=1;NFSU2_TR(0x6dddca);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6dddce:L6dddce:{c.instructions+=13;NFSU2_TR(0x6dddce);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dddd2:{NFSU2_TR(0x6dddd2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6dddd4:{NFSU2_TR(0x6dddd4);
__builtin_memmove((R+8),gp(0x8a85c4),4);
}
B6dddda:{NFSU2_TR(0x6dddda);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dddde:{NFSU2_TR(0x6dddde);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ddde0:{NFSU2_TR(0x6ddde0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddde1:{NFSU2_TR(0x6ddde1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ddde5:{NFSU2_TR(0x6ddde5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ddded:{NFSU2_TR(0x6ddded);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dddf5:{NFSU2_TR(0x6dddf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dddfd:{NFSU2_TR(0x6dddfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dde05:{NFSU2_TR(0x6dde05);
w4(R+24,u32(0xff000000ull));
}
B6dde0a:{NFSU2_TR(0x6dde0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dde45;}}
}
B6dde0c:L6dde0c:{c.instructions+=3;NFSU2_TR(0x6dde0c);
__builtin_memmove((R+0),gp(0x4022c0),4);
}
B6dde11:{NFSU2_TR(0x6dde11);
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
B6dde13:{NFSU2_TR(0x6dde13);
if(r1(R+518)){{goto L6dde45;}}
}
B6dde15:L6dde15:{c.instructions+=14;NFSU2_TR(0x6dde15);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dde19:{NFSU2_TR(0x6dde19);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dde1a:{NFSU2_TR(0x6dde1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dde1e:{NFSU2_TR(0x6dde1e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dde1f:{NFSU2_TR(0x6dde1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dde23:{NFSU2_TR(0x6dde23);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dde24:{NFSU2_TR(0x6dde24);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dde28:{NFSU2_TR(0x6dde28);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xff505050ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dde30:{NFSU2_TR(0x6dde30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dde32:{NFSU2_TR(0x6dde32);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dde33:{NFSU2_TR(0x6dde33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dde34:{NFSU2_TR(0x6dde34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dde35:{NFSU2_TR(0x6dde35);
w1(R+12,u8(0x1ull));
}
B6dde37:{NFSU2_TR(0x6dde37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dde3cull));
TAIL_STATIC(0x4022c0u,402);
}
B6dde3c:L6dde3c:{c.instructions+=3;NFSU2_TR(0x6dde3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dde40:{NFSU2_TR(0x6dde40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6dde43:{NFSU2_TR(0x6dde43);
{goto L6dde49;}
}
B6dde45:L6dde45:{c.instructions+=1;NFSU2_TR(0x6dde45);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dde49:L6dde49:{c.instructions+=3;NFSU2_TR(0x6dde49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dde4f:{NFSU2_TR(0x6dde4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dde51:{NFSU2_TR(0x6dde51);
if(r1(R+518)){{goto L6dde8c;}}
}
B6dde53:L6dde53:{c.instructions+=2;NFSU2_TR(0x6dde53);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dde54:{NFSU2_TR(0x6dde54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dde59ull));
TAIL_STATIC(0x50d510u,50d);
}
B6dde59:L6dde59:{c.instructions+=7;NFSU2_TR(0x6dde59);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dde5d:{NFSU2_TR(0x6dde5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6dde63:{NFSU2_TR(0x6dde63);
__builtin_memmove((R+8),(R+0),4);
}
B6dde65:{NFSU2_TR(0x6dde65);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+20))));
}
B6dde67:{NFSU2_TR(0x6dde67);
u8 U[4];
__builtin_memmove((U+0),gp(0x4022c0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6dde6d:{NFSU2_TR(0x6dde6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6dde6e:{NFSU2_TR(0x6dde6e);
if(r1(R+512)){{goto L6dde80;}}
}
B6dde70:L6dde70:{c.instructions+=3;NFSU2_TR(0x6dde70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dde7a:{NFSU2_TR(0x6dde7a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dde7e:{NFSU2_TR(0x6dde7e);
{goto L6dde8c;}
}
B6dde80:L6dde80:{c.instructions+=2;NFSU2_TR(0x6dde80);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6dde82:{NFSU2_TR(0x6dde82);
if(r1(R+518)){{goto L6dde8c;}}
}
B6dde84:L6dde84:{c.instructions+=1;NFSU2_TR(0x6dde84);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffaa0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dde8c:L6dde8c:{c.instructions+=5;NFSU2_TR(0x6dde8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dde90:{NFSU2_TR(0x6dde90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dde92:{NFSU2_TR(0x6dde92);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dde9a:{NFSU2_TR(0x6dde9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ddea2:{NFSU2_TR(0x6ddea2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6de07au,6de);}
}
B6ddea8:L6ddea8:{c.instructions+=3;NFSU2_TR(0x6ddea8);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6ddeae:{NFSU2_TR(0x6ddeae);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddeb0:{NFSU2_TR(0x6ddeb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ddeb5ull));
TAIL_STATIC(0x6dbcf0u,6db);
}
B6ddeb5:L6ddeb5:{c.instructions+=10;NFSU2_TR(0x6ddeb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ddeb9:{NFSU2_TR(0x6ddeb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ddebd:{NFSU2_TR(0x6ddebd);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ddec1:{NFSU2_TR(0x6ddec1);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ddec5:{NFSU2_TR(0x6ddec5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddec6:{NFSU2_TR(0x6ddec6);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ddeca:{NFSU2_TR(0x6ddeca);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ddece:{NFSU2_TR(0x6ddece);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6dded4:{NFSU2_TR(0x6dded4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dded5:{NFSU2_TR(0x6dded5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ddedaull));
TAIL_STATIC(0x6dbd50u,6db);
}
B6ddeda:L6ddeda:{c.instructions+=10;NFSU2_TR(0x6ddeda);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddede:{NFSU2_TR(0x6ddede);
{u32 ea_=u32(u32(7894452u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ddee4:{NFSU2_TR(0x6ddee4);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ddee8:{NFSU2_TR(0x6ddee8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddee9:{NFSU2_TR(0x6ddee9);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6ddeef:{NFSU2_TR(0x6ddeef);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ddef3:{NFSU2_TR(0x6ddef3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6ddef7:{NFSU2_TR(0x6ddef7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddef8:{NFSU2_TR(0x6ddef8);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ddefc:{NFSU2_TR(0x6ddefc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ddf01ull));
TAIL_STATIC(0x6dbd50u,6db);
}
B6ddf01:L6ddf01:{c.instructions+=11;NFSU2_TR(0x6ddf01);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddf05:{NFSU2_TR(0x6ddf05);
{u32 ea_=u32(u32(7890136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ddf0b:{NFSU2_TR(0x6ddf0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ddf0f:{NFSU2_TR(0x6ddf0f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ddf13:{NFSU2_TR(0x6ddf13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddf14:{NFSU2_TR(0x6ddf14);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6ddf1a:{NFSU2_TR(0x6ddf1a);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ddf1e:{NFSU2_TR(0x6ddf1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ddf22:{NFSU2_TR(0x6ddf22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddf23:{NFSU2_TR(0x6ddf23);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ddf27:{NFSU2_TR(0x6ddf27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ddf2cull));
TAIL_STATIC(0x6dbd50u,6db);
}
B6ddf2c:L6ddf2c:{c.instructions+=8;NFSU2_TR(0x6ddf2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ddf30:{NFSU2_TR(0x6ddf30);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ddf34:{NFSU2_TR(0x6ddf34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddf35:{NFSU2_TR(0x6ddf35);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6ddf3b:{NFSU2_TR(0x6ddf3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ddf3f:{NFSU2_TR(0x6ddf3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddf40:{NFSU2_TR(0x6ddf40);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ddf44:{NFSU2_TR(0x6ddf44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ddf49ull));
TAIL_STATIC(0x6dbd50u,6db);
}
B6ddf49:L6ddf49:{c.instructions+=2;NFSU2_TR(0x6ddf49);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6ddf4f:{NFSU2_TR(0x6ddf4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ddf54ull));
TAIL_STATIC(0x6dbd20u,6db);
}
B6ddf54:L6ddf54:{c.instructions+=2;NFSU2_TR(0x6ddf54);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ddf56:{NFSU2_TR(0x6ddf56);
if(r1(R+518)){TAIL_STATIC(0x6de064u,6de);}
}
B6ddf5c:L6ddf5c:{c.instructions+=3;NFSU2_TR(0x6ddf5c);
__builtin_memmove((R+0),gp(0x4022c0),4);
}
B6ddf61:{NFSU2_TR(0x6ddf61);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ddf63:{NFSU2_TR(0x6ddf63);
if(r1(R+518)){TAIL_STATIC(0x6de064u,6de);}
}
B6ddf69:L6ddf69:{c.instructions+=6;NFSU2_TR(0x6ddf69);
{u32 ea_=u32(u32(9078216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddf6f:{NFSU2_TR(0x6ddf6f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ddf75:{NFSU2_TR(0x6ddf75);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ddf79:{NFSU2_TR(0x6ddf79);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ddf7b:{NFSU2_TR(0x6ddf7b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ddf7e:{NFSU2_TR(0x6ddf7e);
if(r1(R+514)){{goto L6ddf92;}}
}
B6ddf80:L6ddf80:{c.instructions+=4;NFSU2_TR(0x6ddf80);
{u32 ea_=u32(u32(7894452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddf86:{NFSU2_TR(0x6ddf86);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ddf8a:{NFSU2_TR(0x6ddf8a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ddf8e:{NFSU2_TR(0x6ddf8e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ddf92:L6ddf92:{c.instructions+=3;NFSU2_TR(0x6ddf92);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6ddf98:{NFSU2_TR(0x6ddf98);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddf9a:{NFSU2_TR(0x6ddf9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ddf9full));
TAIL_STATIC(0x6dbcf0u,6db);
}
B6ddf9f:L6ddf9f:{c.instructions+=14;NFSU2_TR(0x6ddf9f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddfa3:{NFSU2_TR(0x6ddfa3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ddfa7:{NFSU2_TR(0x6ddfa7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ddfab:{NFSU2_TR(0x6ddfab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddfac:{NFSU2_TR(0x6ddfac);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ddfb0:{NFSU2_TR(0x6ddfb0);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ddfb4:{NFSU2_TR(0x6ddfb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddfb5:{NFSU2_TR(0x6ddfb5);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddfb9:{NFSU2_TR(0x6ddfb9);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6ddfbf:{NFSU2_TR(0x6ddfbf);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ddfc3:{NFSU2_TR(0x6ddfc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ddfc7:{NFSU2_TR(0x6ddfc7);
{u32 ea_=u32(u32(8130512u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ddfcd:{NFSU2_TR(0x6ddfcd);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ddfd1:{NFSU2_TR(0x6ddfd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ddfd6ull));
TAIL_STATIC(0x6dbd50u,6db);
}
B6ddfd6:L6ddfd6:{c.instructions+=11;NFSU2_TR(0x6ddfd6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ddfda:{NFSU2_TR(0x6ddfda);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6ddfe0:{NFSU2_TR(0x6ddfe0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ddfe4:{NFSU2_TR(0x6ddfe4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ddfe8:{NFSU2_TR(0x6ddfe8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddfe9:{NFSU2_TR(0x6ddfe9);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ddfed:{NFSU2_TR(0x6ddfed);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ddff1:{NFSU2_TR(0x6ddff1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ddff2:{NFSU2_TR(0x6ddff2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ddff6:{NFSU2_TR(0x6ddff6);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ddffa:{NFSU2_TR(0x6ddffa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ddfffull));
TAIL_STATIC(0x6dbd50u,6db);
}
B6ddfff:L6ddfff:{c.instructions+=1;NFSU2_TR(0x6ddfff);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x6de003u,6de);
}
XIT:NFSU2_TR_EXIT(0x6dd,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
