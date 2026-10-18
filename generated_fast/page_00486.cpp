#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45b(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_47f(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_484(u8* __restrict R,Cpu& c);
u32 body_485(u8* __restrict R,Cpu& c);
u32 body_487(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f6(u8* __restrict R,Cpu& c);
u32 body_6f7(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_736(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x486,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x486,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_486(u8* __restrict R,Cpu& c);
u32 page_486(Cpu& c){return body_486(c.regs.data(),c);}
__attribute__((noinline)) u32 body_486(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x486001:goto L486001;
case 0x486003:goto L486003;
case 0x486006:c.instructions+=1;goto B486006;
case 0x486008:goto L486008;
case 0x48600a:goto L48600a;
case 0x48600d:c.instructions+=6;goto B48600d;
case 0x486010:c.instructions+=5;goto B486010;
case 0x486013:c.instructions+=4;goto B486013;
case 0x486016:c.instructions+=3;goto B486016;
case 0x486019:c.instructions+=2;goto B486019;
case 0x48601d:c.instructions+=1;goto B48601d;
case 0x48601f:goto L48601f;
case 0x486022:c.instructions+=1;goto B486022;
case 0x486024:goto L486024;
case 0x486026:goto L486026;
case 0x486029:c.instructions+=6;goto B486029;
case 0x48602c:c.instructions+=5;goto B48602c;
case 0x48602f:c.instructions+=4;goto B48602f;
case 0x486032:c.instructions+=3;goto B486032;
case 0x486035:c.instructions+=2;goto B486035;
case 0x486039:c.instructions+=1;goto B486039;
case 0x48603b:goto L48603b;
case 0x48603e:c.instructions+=1;goto B48603e;
case 0x486040:goto L486040;
case 0x486042:goto L486042;
case 0x486045:c.instructions+=6;goto B486045;
case 0x486048:c.instructions+=5;goto B486048;
case 0x48604b:c.instructions+=4;goto B48604b;
case 0x48604e:c.instructions+=3;goto B48604e;
case 0x486051:c.instructions+=2;goto B486051;
case 0x486055:c.instructions+=1;goto B486055;
case 0x486057:goto L486057;
case 0x48605a:c.instructions+=1;goto B48605a;
case 0x48605c:goto L48605c;
case 0x48605e:goto L48605e;
case 0x486061:c.instructions+=6;goto B486061;
case 0x486064:c.instructions+=5;goto B486064;
case 0x486067:c.instructions+=4;goto B486067;
case 0x48606a:c.instructions+=3;goto B48606a;
case 0x48606d:c.instructions+=2;goto B48606d;
case 0x486071:c.instructions+=1;goto B486071;
case 0x486073:goto L486073;
case 0x486076:c.instructions+=1;goto B486076;
case 0x486078:goto L486078;
case 0x48607a:goto L48607a;
case 0x48607d:c.instructions+=6;goto B48607d;
case 0x486080:c.instructions+=5;goto B486080;
case 0x486083:c.instructions+=4;goto B486083;
case 0x486086:c.instructions+=3;goto B486086;
case 0x486089:c.instructions+=2;goto B486089;
case 0x48608d:c.instructions+=1;goto B48608d;
case 0x48608f:goto L48608f;
case 0x486092:c.instructions+=1;goto B486092;
case 0x486094:goto L486094;
case 0x486096:goto L486096;
case 0x486099:c.instructions+=6;goto B486099;
case 0x48609c:c.instructions+=5;goto B48609c;
case 0x48609f:c.instructions+=4;goto B48609f;
case 0x4860a2:c.instructions+=3;goto B4860a2;
case 0x4860a5:c.instructions+=2;goto B4860a5;
case 0x4860a9:c.instructions+=1;goto B4860a9;
case 0x4860ab:goto L4860ab;
case 0x4860ae:c.instructions+=1;goto B4860ae;
case 0x4860b0:goto L4860b0;
case 0x4860b2:goto L4860b2;
case 0x4860b5:c.instructions+=3;goto B4860b5;
case 0x4860b8:c.instructions+=2;goto B4860b8;
case 0x4860bb:c.instructions+=1;goto B4860bb;
case 0x4860c0:goto L4860c0;
case 0x4860c6:c.instructions+=3;goto B4860c6;
case 0x4860c9:c.instructions+=2;goto B4860c9;
case 0x4860cb:c.instructions+=1;goto B4860cb;
case 0x4860cd:goto L4860cd;
case 0x4860d0:c.instructions+=2;goto B4860d0;
case 0x4860d4:c.instructions+=1;goto B4860d4;
case 0x4860d6:goto L4860d6;
case 0x4860da:goto L4860da;
case 0x4860dd:c.instructions+=2;goto B4860dd;
case 0x4860e2:c.instructions+=1;goto B4860e2;
case 0x4860e4:goto L4860e4;
case 0x4860e6:c.instructions+=1;goto B4860e6;
case 0x4860e8:goto L4860e8;
case 0x4860ea:c.instructions+=1;goto B4860ea;
case 0x4860f0:goto L4860f0;
case 0x4860f2:c.instructions+=2;goto B4860f2;
case 0x4860f4:c.instructions+=1;goto B4860f4;
case 0x4860f6:goto L4860f6;
case 0x4860f9:c.instructions+=4;goto B4860f9;
case 0x4860fa:c.instructions+=3;goto B4860fa;
case 0x4860fb:c.instructions+=2;goto B4860fb;
case 0x4860fc:c.instructions+=1;goto B4860fc;
case 0x486101:goto L486101;
case 0x486103:c.instructions+=3;goto B486103;
case 0x486104:c.instructions+=2;goto B486104;
case 0x486106:c.instructions+=1;goto B486106;
case 0x486108:goto L486108;
case 0x486109:c.instructions+=3;goto B486109;
case 0x48610c:c.instructions+=2;goto B48610c;
case 0x48610f:c.instructions+=1;goto B48610f;
case 0x486111:goto L486111;
case 0x486114:c.instructions+=2;goto B486114;
case 0x486116:c.instructions+=1;goto B486116;
case 0x48611b:goto L48611b;
case 0x48611d:c.instructions+=1;goto B48611d;
case 0x486122:goto L486122;
case 0x486123:c.instructions+=4;goto B486123;
case 0x486124:c.instructions+=3;goto B486124;
case 0x486125:c.instructions+=2;goto B486125;
case 0x486126:c.instructions+=1;goto B486126;
case 0x486130:goto L486130;
case 0x486135:c.instructions+=2;goto B486135;
case 0x486137:c.instructions+=1;goto B486137;
case 0x486139:goto L486139;
case 0x48613a:c.instructions+=6;goto B48613a;
case 0x48613d:c.instructions+=5;goto B48613d;
case 0x48613f:c.instructions+=4;goto B48613f;
case 0x486144:c.instructions+=3;goto B486144;
case 0x486146:c.instructions+=2;goto B486146;
case 0x48614b:c.instructions+=1;goto B48614b;
case 0x486150:goto L486150;
case 0x486153:c.instructions+=4;goto B486153;
case 0x486154:c.instructions+=3;goto B486154;
case 0x486156:c.instructions+=2;goto B486156;
case 0x486158:c.instructions+=1;goto B486158;
case 0x48615d:goto L48615d;
case 0x48615e:goto L48615e;
case 0x486160:goto L486160;
case 0x486164:c.instructions+=7;goto B486164;
case 0x486165:c.instructions+=6;goto B486165;
case 0x486166:c.instructions+=5;goto B486166;
case 0x48616b:c.instructions+=4;goto B48616b;
case 0x486170:c.instructions+=3;goto B486170;
case 0x486175:c.instructions+=2;goto B486175;
case 0x48617b:c.instructions+=1;goto B48617b;
case 0x486180:goto L486180;
case 0x486185:c.instructions+=5;goto B486185;
case 0x48618a:c.instructions+=4;goto B48618a;
case 0x48618d:c.instructions+=3;goto B48618d;
case 0x486197:c.instructions+=2;goto B486197;
case 0x486199:c.instructions+=1;goto B486199;
case 0x4861a0:goto L4861a0;
case 0x4861a1:c.instructions+=2;goto B4861a1;
case 0x4861a5:c.instructions+=1;goto B4861a5;
case 0x4861aa:goto L4861aa;
case 0x4861af:c.instructions+=5;goto B4861af;
case 0x4861b2:c.instructions+=4;goto B4861b2;
case 0x4861b3:c.instructions+=3;goto B4861b3;
case 0x4861b6:c.instructions+=2;goto B4861b6;
case 0x4861b8:c.instructions+=1;goto B4861b8;
case 0x4861ba:goto L4861ba;
case 0x4861bf:c.instructions+=1;goto B4861bf;
case 0x4861c4:goto L4861c4;
case 0x4861c9:c.instructions+=2;goto B4861c9;
case 0x4861ce:c.instructions+=1;goto B4861ce;
case 0x4861d3:goto L4861d3;
case 0x4861d8:c.instructions+=2;goto B4861d8;
case 0x4861dd:c.instructions+=1;goto B4861dd;
case 0x4861e2:goto L4861e2;
case 0x4861e7:c.instructions+=2;goto B4861e7;
case 0x4861ec:c.instructions+=1;goto B4861ec;
case 0x4861f1:goto L4861f1;
case 0x4861f6:c.instructions+=2;goto B4861f6;
case 0x4861fb:c.instructions+=1;goto B4861fb;
case 0x486200:goto L486200;
case 0x486205:c.instructions+=2;goto B486205;
case 0x48620a:c.instructions+=1;goto B48620a;
case 0x48620f:goto L48620f;
case 0x486212:c.instructions+=4;goto B486212;
case 0x486213:c.instructions+=3;goto B486213;
case 0x486218:c.instructions+=2;goto B486218;
case 0x486219:c.instructions+=1;goto B486219;
case 0x486220:goto L486220;
case 0x486224:c.instructions+=12;goto B486224;
case 0x486225:c.instructions+=11;goto B486225;
case 0x486226:c.instructions+=10;goto B486226;
case 0x486227:c.instructions+=9;goto B486227;
case 0x486228:c.instructions+=8;goto B486228;
case 0x48622a:c.instructions+=7;goto B48622a;
case 0x48622c:c.instructions+=6;goto B48622c;
case 0x48622e:c.instructions+=5;goto B48622e;
case 0x486230:c.instructions+=4;goto B486230;
case 0x486235:c.instructions+=3;goto B486235;
case 0x486238:c.instructions+=2;goto B486238;
case 0x48623b:c.instructions+=1;goto B48623b;
case 0x486240:goto L486240;
case 0x486243:c.instructions+=2;goto B486243;
case 0x486245:c.instructions+=1;goto B486245;
case 0x48624a:goto L48624a;
case 0x48624c:c.instructions+=2;goto B48624c;
case 0x486252:c.instructions+=1;goto B486252;
case 0x486254:goto L486254;
case 0x486259:c.instructions+=2;goto B486259;
case 0x48625b:c.instructions+=1;goto B48625b;
case 0x486260:goto L486260;
case 0x486263:c.instructions+=1;goto B486263;
case 0x486265:goto L486265;
case 0x48626a:c.instructions+=1;goto B48626a;
case 0x48626b:goto L48626b;
case 0x486270:c.instructions+=2;goto B486270;
case 0x486275:c.instructions+=1;goto B486275;
case 0x48627a:goto L48627a;
case 0x48627f:c.instructions+=3;goto B48627f;
case 0x486282:c.instructions+=2;goto B486282;
case 0x486284:c.instructions+=1;goto B486284;
case 0x486286:goto L486286;
case 0x486288:goto L486288;
case 0x486289:c.instructions+=3;goto B486289;
case 0x48628a:c.instructions+=2;goto B48628a;
case 0x48628f:c.instructions+=1;goto B48628f;
case 0x486294:goto L486294;
case 0x486299:c.instructions+=4;goto B486299;
case 0x48629e:c.instructions+=3;goto B48629e;
case 0x4862a4:c.instructions+=2;goto B4862a4;
case 0x4862ab:c.instructions+=1;goto B4862ab;
case 0x4862b0:goto L4862b0;
case 0x4862b5:c.instructions+=1;goto B4862b5;
case 0x4862ba:goto L4862ba;
case 0x4862bd:c.instructions+=3;goto B4862bd;
case 0x4862c0:c.instructions+=2;goto B4862c0;
case 0x4862c1:c.instructions+=1;goto B4862c1;
case 0x4862c7:goto L4862c7;
case 0x4862c8:c.instructions+=1;goto B4862c8;
case 0x4862ce:goto L4862ce;
case 0x4862d1:c.instructions+=3;goto B4862d1;
case 0x4862d7:c.instructions+=2;goto B4862d7;
case 0x4862d8:c.instructions+=1;goto B4862d8;
case 0x4862dd:goto L4862dd;
case 0x4862e0:c.instructions+=2;goto B4862e0;
case 0x4862e5:c.instructions+=1;goto B4862e5;
case 0x4862e7:goto L4862e7;
case 0x4862ed:c.instructions+=5;goto B4862ed;
case 0x4862f0:c.instructions+=4;goto B4862f0;
case 0x4862f6:c.instructions+=3;goto B4862f6;
case 0x4862f7:c.instructions+=2;goto B4862f7;
case 0x4862f9:c.instructions+=1;goto B4862f9;
case 0x4862fe:goto L4862fe;
case 0x486301:c.instructions+=2;goto B486301;
case 0x486303:c.instructions+=1;goto B486303;
case 0x486305:goto L486305;
case 0x486307:c.instructions+=1;goto B486307;
case 0x48630c:goto L48630c;
case 0x48630e:goto L48630e;
case 0x486310:goto L486310;
case 0x486313:c.instructions+=3;goto B486313;
case 0x486318:c.instructions+=2;goto B486318;
case 0x486319:c.instructions+=1;goto B486319;
case 0x48631e:goto L48631e;
case 0x486321:c.instructions+=2;goto B486321;
case 0x486326:c.instructions+=1;goto B486326;
case 0x486328:goto L486328;
case 0x48632e:c.instructions+=5;goto B48632e;
case 0x486331:c.instructions+=4;goto B486331;
case 0x486337:c.instructions+=3;goto B486337;
case 0x486338:c.instructions+=2;goto B486338;
case 0x48633d:c.instructions+=1;goto B48633d;
case 0x486342:goto L486342;
case 0x486345:c.instructions+=2;goto B486345;
case 0x486347:c.instructions+=1;goto B486347;
case 0x486349:goto L486349;
case 0x48634b:c.instructions+=1;goto B48634b;
case 0x486350:goto L486350;
case 0x486353:c.instructions+=4;goto B486353;
case 0x486355:c.instructions+=3;goto B486355;
case 0x486356:c.instructions+=2;goto B486356;
case 0x486358:c.instructions+=1;goto B486358;
case 0x48635b:goto L48635b;
case 0x48635c:c.instructions+=4;goto B48635c;
case 0x48635d:c.instructions+=3;goto B48635d;
case 0x48635e:c.instructions+=2;goto B48635e;
case 0x48635f:c.instructions+=1;goto B48635f;
case 0x486362:goto L486362;
case 0x486364:c.instructions+=5;goto B486364;
case 0x486367:c.instructions+=4;goto B486367;
case 0x486369:c.instructions+=3;goto B486369;
case 0x48636a:c.instructions+=2;goto B48636a;
case 0x48636c:c.instructions+=1;goto B48636c;
case 0x48636f:goto L48636f;
case 0x486370:c.instructions+=4;goto B486370;
case 0x486371:c.instructions+=3;goto B486371;
case 0x486372:c.instructions+=2;goto B486372;
case 0x486373:c.instructions+=1;goto B486373;
case 0x486376:goto L486376;
case 0x486379:c.instructions+=3;goto B486379;
case 0x48637e:c.instructions+=2;goto B48637e;
case 0x48637f:c.instructions+=1;goto B48637f;
case 0x486384:goto L486384;
case 0x486387:c.instructions+=2;goto B486387;
case 0x48638c:c.instructions+=1;goto B48638c;
case 0x48638e:goto L48638e;
case 0x486394:c.instructions+=5;goto B486394;
case 0x486397:c.instructions+=4;goto B486397;
case 0x48639d:c.instructions+=3;goto B48639d;
case 0x48639e:c.instructions+=2;goto B48639e;
case 0x4863a0:c.instructions+=1;goto B4863a0;
case 0x4863a5:goto L4863a5;
case 0x4863a8:c.instructions+=2;goto B4863a8;
case 0x4863aa:c.instructions+=1;goto B4863aa;
case 0x4863ac:goto L4863ac;
case 0x4863ae:c.instructions+=1;goto B4863ae;
case 0x4863b3:goto L4863b3;
case 0x4863b5:goto L4863b5;
case 0x4863b7:goto L4863b7;
case 0x4863ba:c.instructions+=3;goto B4863ba;
case 0x4863c0:c.instructions+=2;goto B4863c0;
case 0x4863c1:c.instructions+=1;goto B4863c1;
case 0x4863c6:goto L4863c6;
case 0x4863c9:c.instructions+=2;goto B4863c9;
case 0x4863ce:c.instructions+=1;goto B4863ce;
case 0x4863d0:goto L4863d0;
case 0x4863d5:c.instructions+=5;goto B4863d5;
case 0x4863d8:c.instructions+=4;goto B4863d8;
case 0x4863dd:c.instructions+=3;goto B4863dd;
case 0x4863de:c.instructions+=2;goto B4863de;
case 0x4863e3:c.instructions+=1;goto B4863e3;
case 0x4863e8:goto L4863e8;
case 0x4863eb:c.instructions+=2;goto B4863eb;
case 0x4863ed:c.instructions+=1;goto B4863ed;
case 0x4863ef:goto L4863ef;
case 0x4863f1:c.instructions+=1;goto B4863f1;
case 0x4863f6:goto L4863f6;
case 0x4863f8:goto L4863f8;
case 0x4863fa:goto L4863fa;
case 0x4863fd:c.instructions+=4;goto B4863fd;
case 0x4863ff:c.instructions+=3;goto B4863ff;
case 0x486400:c.instructions+=2;goto B486400;
case 0x486402:c.instructions+=1;goto B486402;
case 0x486405:goto L486405;
case 0x48640a:c.instructions+=2;goto B48640a;
case 0x48640b:c.instructions+=1;goto B48640b;
case 0x486410:goto L486410;
case 0x486413:c.instructions+=2;goto B486413;
case 0x486418:c.instructions+=1;goto B486418;
case 0x48641a:goto L48641a;
case 0x486420:c.instructions+=5;goto B486420;
case 0x486423:c.instructions+=4;goto B486423;
case 0x486429:c.instructions+=3;goto B486429;
case 0x48642a:c.instructions+=2;goto B48642a;
case 0x48642c:c.instructions+=1;goto B48642c;
case 0x486431:goto L486431;
case 0x486434:c.instructions+=2;goto B486434;
case 0x486436:c.instructions+=1;goto B486436;
case 0x486438:goto L486438;
case 0x48643a:c.instructions+=1;goto B48643a;
case 0x48643f:goto L48643f;
case 0x486441:goto L486441;
case 0x486443:goto L486443;
case 0x486446:c.instructions+=4;goto B486446;
case 0x486449:c.instructions+=3;goto B486449;
case 0x48644f:c.instructions+=2;goto B48644f;
case 0x486450:c.instructions+=1;goto B486450;
case 0x486455:goto L486455;
case 0x486458:c.instructions+=2;goto B486458;
case 0x48645d:c.instructions+=1;goto B48645d;
case 0x48645f:goto L48645f;
case 0x486464:c.instructions+=5;goto B486464;
case 0x486467:c.instructions+=4;goto B486467;
case 0x48646c:c.instructions+=3;goto B48646c;
case 0x48646d:c.instructions+=2;goto B48646d;
case 0x486472:c.instructions+=1;goto B486472;
case 0x486477:goto L486477;
case 0x48647a:c.instructions+=2;goto B48647a;
case 0x48647c:c.instructions+=1;goto B48647c;
case 0x48647e:goto L48647e;
case 0x486480:c.instructions+=1;goto B486480;
case 0x486485:goto L486485;
case 0x486487:goto L486487;
case 0x486489:goto L486489;
case 0x48648a:c.instructions+=8;goto B48648a;
case 0x48648d:c.instructions+=7;goto B48648d;
case 0x48648f:c.instructions+=6;goto B48648f;
case 0x486490:c.instructions+=5;goto B486490;
case 0x486491:c.instructions+=4;goto B486491;
case 0x486492:c.instructions+=3;goto B486492;
case 0x48649a:c.instructions+=2;goto B48649a;
case 0x48649c:c.instructions+=1;goto B48649c;
case 0x4864a0:goto L4864a0;
case 0x4864a1:c.instructions+=2;goto B4864a1;
case 0x4864a3:c.instructions+=1;goto B4864a3;
case 0x4864a8:goto L4864a8;
case 0x4864ad:c.instructions+=1;goto B4864ad;
case 0x4864af:goto L4864af;
case 0x4864b0:c.instructions+=1;goto B4864b0;
case 0x4864b5:goto L4864b5;
case 0x4864b8:goto L4864b8;
case 0x4864ba:c.instructions+=2;goto B4864ba;
case 0x4864bb:c.instructions+=1;goto B4864bb;
case 0x4864c0:goto L4864c0;
case 0x4864c1:c.instructions+=2;goto B4864c1;
case 0x4864c3:c.instructions+=1;goto B4864c3;
case 0x4864c8:goto L4864c8;
case 0x4864cd:c.instructions+=1;goto B4864cd;
case 0x4864cf:goto L4864cf;
case 0x4864d0:c.instructions+=1;goto B4864d0;
case 0x4864d5:goto L4864d5;
case 0x4864d8:goto L4864d8;
case 0x4864da:c.instructions+=2;goto B4864da;
case 0x4864db:c.instructions+=1;goto B4864db;
case 0x4864e0:goto L4864e0;
case 0x4864e1:c.instructions+=2;goto B4864e1;
case 0x4864e3:c.instructions+=1;goto B4864e3;
case 0x4864e8:goto L4864e8;
case 0x4864ed:c.instructions+=1;goto B4864ed;
case 0x4864ef:goto L4864ef;
case 0x4864f0:c.instructions+=1;goto B4864f0;
case 0x4864f5:goto L4864f5;
case 0x4864f8:goto L4864f8;
case 0x4864fa:c.instructions+=2;goto B4864fa;
case 0x4864fb:c.instructions+=1;goto B4864fb;
case 0x486500:goto L486500;
case 0x486504:c.instructions+=3;goto B486504;
case 0x486507:c.instructions+=2;goto B486507;
case 0x486508:c.instructions+=1;goto B486508;
case 0x48650d:goto L48650d;
case 0x486510:goto L486510;
case 0x486513:c.instructions+=7;goto B486513;
case 0x486514:c.instructions+=6;goto B486514;
case 0x486515:c.instructions+=5;goto B486515;
case 0x486519:c.instructions+=4;goto B486519;
case 0x48651e:c.instructions+=3;goto B48651e;
case 0x48651f:c.instructions+=2;goto B48651f;
case 0x486521:c.instructions+=1;goto B486521;
case 0x486526:goto L486526;
case 0x48652a:c.instructions+=2;goto B48652a;
case 0x48652b:c.instructions+=1;goto B48652b;
case 0x486530:goto L486530;
case 0x486532:c.instructions+=2;goto B486532;
case 0x486534:c.instructions+=1;goto B486534;
case 0x486539:goto L486539;
case 0x48653a:c.instructions+=1;goto B48653a;
case 0x48653f:goto L48653f;
case 0x486540:c.instructions+=4;goto B486540;
case 0x486542:c.instructions+=3;goto B486542;
case 0x486544:c.instructions+=2;goto B486544;
case 0x486547:c.instructions+=1;goto B486547;
case 0x48654c:goto L48654c;
case 0x48654e:c.instructions+=2;goto B48654e;
case 0x48654f:c.instructions+=1;goto B48654f;
case 0x486554:goto L486554;
case 0x486557:c.instructions+=5;goto B486557;
case 0x48655a:c.instructions+=4;goto B48655a;
case 0x48655c:c.instructions+=3;goto B48655c;
case 0x48655e:c.instructions+=2;goto B48655e;
case 0x486560:c.instructions+=1;goto B486560;
case 0x486563:goto L486563;
case 0x486564:c.instructions+=1;goto B486564;
case 0x486569:goto L486569;
case 0x48656c:c.instructions+=5;goto B48656c;
case 0x48656e:c.instructions+=4;goto B48656e;
case 0x486572:c.instructions+=3;goto B486572;
case 0x486573:c.instructions+=2;goto B486573;
case 0x486575:c.instructions+=1;goto B486575;
case 0x48657a:goto L48657a;
case 0x48657d:c.instructions+=4;goto B48657d;
case 0x486580:c.instructions+=3;goto B486580;
case 0x486585:c.instructions+=2;goto B486585;
case 0x486587:c.instructions+=1;goto B486587;
case 0x48658d:goto L48658d;
case 0x486592:c.instructions+=2;goto B486592;
case 0x486594:c.instructions+=1;goto B486594;
case 0x486596:goto L486596;
case 0x48659b:c.instructions+=2;goto B48659b;
case 0x4865a0:c.instructions+=1;goto B4865a0;
case 0x4865a5:goto L4865a5;
case 0x4865a8:c.instructions+=2;goto B4865a8;
case 0x4865aa:c.instructions+=1;goto B4865aa;
case 0x4865ac:goto L4865ac;
case 0x4865ae:c.instructions+=1;goto B4865ae;
case 0x4865b3:goto L4865b3;
case 0x4865b5:goto L4865b5;
case 0x4865b7:goto L4865b7;
case 0x4865bd:c.instructions+=4;goto B4865bd;
case 0x4865be:c.instructions+=3;goto B4865be;
case 0x4865c0:c.instructions+=2;goto B4865c0;
case 0x4865c6:c.instructions+=1;goto B4865c6;
case 0x4865cb:goto L4865cb;
case 0x4865d1:c.instructions+=2;goto B4865d1;
case 0x4865d2:c.instructions+=1;goto B4865d2;
case 0x4865d7:goto L4865d7;
case 0x4865da:c.instructions+=2;goto B4865da;
case 0x4865df:c.instructions+=1;goto B4865df;
case 0x4865e1:goto L4865e1;
case 0x4865e6:c.instructions+=5;goto B4865e6;
case 0x4865e9:c.instructions+=4;goto B4865e9;
case 0x4865ee:c.instructions+=3;goto B4865ee;
case 0x4865ef:c.instructions+=2;goto B4865ef;
case 0x4865f4:c.instructions+=1;goto B4865f4;
case 0x4865f9:goto L4865f9;
case 0x4865fc:c.instructions+=2;goto B4865fc;
case 0x4865fe:c.instructions+=1;goto B4865fe;
case 0x486600:goto L486600;
case 0x486602:c.instructions+=1;goto B486602;
case 0x486607:goto L486607;
case 0x486609:goto L486609;
case 0x48660b:goto L48660b;
case 0x48660e:c.instructions+=4;goto B48660e;
case 0x486613:c.instructions+=3;goto B486613;
case 0x48661d:c.instructions+=2;goto B48661d;
case 0x48661f:c.instructions+=1;goto B48661f;
case 0x486620:goto L486620;
case 0x486623:c.instructions+=3;goto B486623;
case 0x486625:c.instructions+=2;goto B486625;
case 0x486626:c.instructions+=1;goto B486626;
case 0x48662b:goto L48662b;
case 0x48662c:c.instructions+=2;goto B48662c;
case 0x48662f:c.instructions+=1;goto B48662f;
case 0x486631:goto L486631;
case 0x486636:goto L486636;
case 0x48663b:goto L48663b;
case 0x48663c:c.instructions+=3;goto B48663c;
case 0x48663d:c.instructions+=2;goto B48663d;
case 0x486640:c.instructions+=1;goto B486640;
case 0x486645:goto L486645;
case 0x486646:c.instructions+=3;goto B486646;
case 0x486647:c.instructions+=2;goto B486647;
case 0x48664a:c.instructions+=1;goto B48664a;
case 0x486650:goto L486650;
case 0x486652:c.instructions+=11;goto B486652;
case 0x486657:c.instructions+=10;goto B486657;
case 0x48665d:c.instructions+=9;goto B48665d;
case 0x48665e:c.instructions+=8;goto B48665e;
case 0x486665:c.instructions+=7;goto B486665;
case 0x486666:c.instructions+=6;goto B486666;
case 0x486667:c.instructions+=5;goto B486667;
case 0x486668:c.instructions+=4;goto B486668;
case 0x48666a:c.instructions+=3;goto B48666a;
case 0x48666b:c.instructions+=2;goto B48666b;
case 0x48666d:c.instructions+=1;goto B48666d;
case 0x486672:goto L486672;
case 0x486677:c.instructions+=3;goto B486677;
case 0x48667a:c.instructions+=2;goto B48667a;
case 0x48667c:c.instructions+=1;goto B48667c;
case 0x486682:goto L486682;
case 0x486684:c.instructions+=4;goto B486684;
case 0x486687:c.instructions+=3;goto B486687;
case 0x48668a:c.instructions+=2;goto B48668a;
case 0x48668d:c.instructions+=1;goto B48668d;
case 0x486692:goto L486692;
case 0x486695:c.instructions+=2;goto B486695;
case 0x486697:c.instructions+=1;goto B486697;
case 0x486699:goto L486699;
case 0x48669f:c.instructions+=4;goto B48669f;
case 0x4866a2:c.instructions+=3;goto B4866a2;
case 0x4866a5:c.instructions+=2;goto B4866a5;
case 0x4866a8:c.instructions+=1;goto B4866a8;
case 0x4866aa:goto L4866aa;
case 0x4866ac:goto L4866ac;
case 0x4866b1:c.instructions+=2;goto B4866b1;
case 0x4866b4:c.instructions+=1;goto B4866b4;
case 0x4866b9:goto L4866b9;
case 0x4866bc:c.instructions+=4;goto B4866bc;
case 0x4866c0:c.instructions+=3;goto B4866c0;
case 0x4866c2:c.instructions+=2;goto B4866c2;
case 0x4866c6:c.instructions+=1;goto B4866c6;
case 0x4866c8:goto L4866c8;
case 0x4866ca:c.instructions+=1;goto B4866ca;
case 0x4866cf:goto L4866cf;
case 0x4866d1:goto L4866d1;
case 0x4866d3:goto L4866d3;
case 0x4866d6:c.instructions+=6;goto B4866d6;
case 0x4866dc:c.instructions+=5;goto B4866dc;
case 0x4866dd:c.instructions+=4;goto B4866dd;
case 0x4866e0:c.instructions+=3;goto B4866e0;
case 0x4866e2:c.instructions+=2;goto B4866e2;
case 0x4866e6:c.instructions+=1;goto B4866e6;
case 0x4866e8:goto L4866e8;
case 0x4866ea:c.instructions+=1;goto B4866ea;
case 0x4866ef:goto L4866ef;
case 0x4866f0:c.instructions+=1;goto B4866f0;
case 0x4866f5:goto L4866f5;
case 0x4866fa:c.instructions+=5;goto B4866fa;
case 0x486700:c.instructions+=4;goto B486700;
case 0x486703:c.instructions+=3;goto B486703;
case 0x486705:c.instructions+=2;goto B486705;
case 0x48670c:c.instructions+=1;goto B48670c;
case 0x48670e:goto L48670e;
case 0x486714:c.instructions+=3;goto B486714;
case 0x486716:c.instructions+=2;goto B486716;
case 0x486717:c.instructions+=1;goto B486717;
case 0x48671a:goto L48671a;
case 0x486720:c.instructions+=2;goto B486720;
case 0x486722:c.instructions+=1;goto B486722;
case 0x486725:goto L486725;
case 0x48672b:c.instructions+=3;goto B48672b;
case 0x48672e:c.instructions+=2;goto B48672e;
case 0x486730:c.instructions+=1;goto B486730;
case 0x486732:goto L486732;
case 0x486737:goto L486737;
case 0x48673a:c.instructions+=112;goto B48673a;
case 0x48673d:c.instructions+=111;goto B48673d;
case 0x486743:c.instructions+=110;goto B486743;
case 0x486746:c.instructions+=109;goto B486746;
case 0x486749:c.instructions+=108;goto B486749;
case 0x48674e:c.instructions+=107;goto B48674e;
case 0x486754:c.instructions+=106;goto B486754;
case 0x486757:c.instructions+=105;goto B486757;
case 0x48675a:c.instructions+=104;goto B48675a;
case 0x486760:c.instructions+=103;goto B486760;
case 0x486766:c.instructions+=102;goto B486766;
case 0x486769:c.instructions+=101;goto B486769;
case 0x48676c:c.instructions+=100;goto B48676c;
case 0x486772:c.instructions+=99;goto B486772;
case 0x486778:c.instructions+=98;goto B486778;
case 0x48677b:c.instructions+=97;goto B48677b;
case 0x48677e:c.instructions+=96;goto B48677e;
case 0x486784:c.instructions+=95;goto B486784;
case 0x486787:c.instructions+=94;goto B486787;
case 0x48678a:c.instructions+=93;goto B48678a;
case 0x486790:c.instructions+=92;goto B486790;
case 0x486793:c.instructions+=91;goto B486793;
case 0x486796:c.instructions+=90;goto B486796;
case 0x48679c:c.instructions+=89;goto B48679c;
case 0x48679f:c.instructions+=88;goto B48679f;
case 0x4867a2:c.instructions+=87;goto B4867a2;
case 0x4867a8:c.instructions+=86;goto B4867a8;
case 0x4867ab:c.instructions+=85;goto B4867ab;
case 0x4867ae:c.instructions+=84;goto B4867ae;
case 0x4867b4:c.instructions+=83;goto B4867b4;
case 0x4867b7:c.instructions+=82;goto B4867b7;
case 0x4867ba:c.instructions+=81;goto B4867ba;
case 0x4867c0:c.instructions+=80;goto B4867c0;
case 0x4867c3:c.instructions+=79;goto B4867c3;
case 0x4867c6:c.instructions+=78;goto B4867c6;
case 0x4867cc:c.instructions+=77;goto B4867cc;
case 0x4867cf:c.instructions+=76;goto B4867cf;
case 0x4867d0:c.instructions+=75;goto B4867d0;
case 0x4867d3:c.instructions+=74;goto B4867d3;
case 0x4867d6:c.instructions+=73;goto B4867d6;
case 0x4867dc:c.instructions+=72;goto B4867dc;
case 0x4867df:c.instructions+=71;goto B4867df;
case 0x4867e2:c.instructions+=70;goto B4867e2;
case 0x4867e8:c.instructions+=69;goto B4867e8;
case 0x4867eb:c.instructions+=68;goto B4867eb;
case 0x4867f1:c.instructions+=67;goto B4867f1;
case 0x4867f4:c.instructions+=66;goto B4867f4;
case 0x4867fa:c.instructions+=65;goto B4867fa;
case 0x4867fd:c.instructions+=64;goto B4867fd;
case 0x486803:c.instructions+=63;goto B486803;
case 0x486806:c.instructions+=62;goto B486806;
case 0x48680c:c.instructions+=61;goto B48680c;
case 0x48680f:c.instructions+=60;goto B48680f;
case 0x486812:c.instructions+=59;goto B486812;
case 0x486818:c.instructions+=58;goto B486818;
case 0x48681b:c.instructions+=57;goto B48681b;
case 0x48681e:c.instructions+=56;goto B48681e;
case 0x486824:c.instructions+=55;goto B486824;
case 0x486827:c.instructions+=54;goto B486827;
case 0x48682a:c.instructions+=53;goto B48682a;
case 0x486830:c.instructions+=52;goto B486830;
case 0x486833:c.instructions+=51;goto B486833;
case 0x486836:c.instructions+=50;goto B486836;
case 0x48683c:c.instructions+=49;goto B48683c;
case 0x48683f:c.instructions+=48;goto B48683f;
case 0x486842:c.instructions+=47;goto B486842;
case 0x486848:c.instructions+=46;goto B486848;
case 0x48684b:c.instructions+=45;goto B48684b;
case 0x48684e:c.instructions+=44;goto B48684e;
case 0x486854:c.instructions+=43;goto B486854;
case 0x486857:c.instructions+=42;goto B486857;
case 0x48685a:c.instructions+=41;goto B48685a;
case 0x486860:c.instructions+=40;goto B486860;
case 0x486863:c.instructions+=39;goto B486863;
case 0x486864:c.instructions+=38;goto B486864;
case 0x486866:c.instructions+=37;goto B486866;
case 0x486869:c.instructions+=36;goto B486869;
case 0x48686c:c.instructions+=35;goto B48686c;
case 0x486876:c.instructions+=34;goto B486876;
case 0x486879:c.instructions+=33;goto B486879;
case 0x48687c:c.instructions+=32;goto B48687c;
case 0x486882:c.instructions+=31;goto B486882;
case 0x486885:c.instructions+=30;goto B486885;
case 0x48688b:c.instructions+=29;goto B48688b;
case 0x48688e:c.instructions+=28;goto B48688e;
case 0x486894:c.instructions+=27;goto B486894;
case 0x486897:c.instructions+=26;goto B486897;
case 0x48689c:c.instructions+=25;goto B48689c;
case 0x48689f:c.instructions+=24;goto B48689f;
case 0x4868a5:c.instructions+=23;goto B4868a5;
case 0x4868a8:c.instructions+=22;goto B4868a8;
case 0x4868ab:c.instructions+=21;goto B4868ab;
case 0x4868b1:c.instructions+=20;goto B4868b1;
case 0x4868b4:c.instructions+=19;goto B4868b4;
case 0x4868b7:c.instructions+=18;goto B4868b7;
case 0x4868bd:c.instructions+=17;goto B4868bd;
case 0x4868c0:c.instructions+=16;goto B4868c0;
case 0x4868c3:c.instructions+=15;goto B4868c3;
case 0x4868c9:c.instructions+=14;goto B4868c9;
case 0x4868cc:c.instructions+=13;goto B4868cc;
case 0x4868cf:c.instructions+=12;goto B4868cf;
case 0x4868d5:c.instructions+=11;goto B4868d5;
case 0x4868d8:c.instructions+=10;goto B4868d8;
case 0x4868db:c.instructions+=9;goto B4868db;
case 0x4868e1:c.instructions+=8;goto B4868e1;
case 0x4868e4:c.instructions+=7;goto B4868e4;
case 0x4868e7:c.instructions+=6;goto B4868e7;
case 0x4868ed:c.instructions+=5;goto B4868ed;
case 0x4868f0:c.instructions+=4;goto B4868f0;
case 0x4868f3:c.instructions+=3;goto B4868f3;
case 0x4868f9:c.instructions+=2;goto B4868f9;
case 0x4868fc:c.instructions+=1;goto B4868fc;
case 0x4868fd:goto L4868fd;
case 0x486901:c.instructions+=5;goto B486901;
case 0x486902:c.instructions+=4;goto B486902;
case 0x486903:c.instructions+=3;goto B486903;
case 0x48690a:c.instructions+=2;goto B48690a;
case 0x48690d:c.instructions+=1;goto B48690d;
case 0x486910:goto L486910;
case 0x486916:c.instructions+=1;goto B486916;
case 0x486920:goto L486920;
case 0x486921:c.instructions+=5;goto B486921;
case 0x486922:c.instructions+=4;goto B486922;
case 0x486923:c.instructions+=3;goto B486923;
case 0x486928:c.instructions+=2;goto B486928;
case 0x48692a:c.instructions+=1;goto B48692a;
case 0x48692f:goto L48692f;
case 0x486932:c.instructions+=2;goto B486932;
case 0x486934:c.instructions+=1;goto B486934;
case 0x486936:goto L486936;
case 0x48693c:c.instructions+=3;goto B48693c;
case 0x486943:c.instructions+=2;goto B486943;
case 0x48694a:c.instructions+=1;goto B48694a;
case 0x48694c:goto L48694c;
case 0x48694e:goto L48694e;
case 0x486951:c.instructions+=4;goto B486951;
case 0x486955:c.instructions+=3;goto B486955;
case 0x48695c:c.instructions+=2;goto B48695c;
case 0x48695d:c.instructions+=1;goto B48695d;
case 0x486962:goto L486962;
case 0x486965:c.instructions+=5;goto B486965;
case 0x486967:c.instructions+=4;goto B486967;
case 0x48696c:c.instructions+=3;goto B48696c;
case 0x48696d:c.instructions+=2;goto B48696d;
case 0x48696f:c.instructions+=1;goto B48696f;
case 0x486974:goto L486974;
case 0x486975:c.instructions+=8;goto B486975;
case 0x48697a:c.instructions+=7;goto B48697a;
case 0x48697b:c.instructions+=6;goto B48697b;
case 0x48697d:c.instructions+=5;goto B48697d;
case 0x48697e:c.instructions+=4;goto B48697e;
case 0x48697f:c.instructions+=3;goto B48697f;
case 0x486982:c.instructions+=2;goto B486982;
case 0x486989:c.instructions+=1;goto B486989;
case 0x48698e:goto L48698e;
case 0x486991:c.instructions+=4;goto B486991;
case 0x486992:c.instructions+=3;goto B486992;
case 0x486993:c.instructions+=2;goto B486993;
case 0x486994:c.instructions+=1;goto B486994;
case 0x4869a0:goto L4869a0;
case 0x4869a5:c.instructions+=6;goto B4869a5;
case 0x4869a6:c.instructions+=5;goto B4869a6;
case 0x4869a8:c.instructions+=4;goto B4869a8;
case 0x4869aa:c.instructions+=3;goto B4869aa;
case 0x4869ab:c.instructions+=2;goto B4869ab;
case 0x4869ad:c.instructions+=1;goto B4869ad;
case 0x4869b3:goto L4869b3;
case 0x4869b4:c.instructions+=2;goto B4869b4;
case 0x4869b7:c.instructions+=1;goto B4869b7;
case 0x4869bc:goto L4869bc;
case 0x4869be:c.instructions+=1;goto B4869be;
case 0x4869c3:goto L4869c3;
case 0x4869c6:c.instructions+=2;goto B4869c6;
case 0x4869c8:c.instructions+=1;goto B4869c8;
case 0x4869ca:goto L4869ca;
case 0x4869d0:c.instructions+=4;goto B4869d0;
case 0x4869d3:c.instructions+=3;goto B4869d3;
case 0x4869d6:c.instructions+=2;goto B4869d6;
case 0x4869d9:c.instructions+=1;goto B4869d9;
case 0x4869db:goto L4869db;
case 0x4869dd:goto L4869dd;
case 0x4869e0:c.instructions+=3;goto B4869e0;
case 0x4869e5:c.instructions+=2;goto B4869e5;
case 0x4869e6:c.instructions+=1;goto B4869e6;
case 0x4869eb:goto L4869eb;
case 0x4869ee:c.instructions+=2;goto B4869ee;
case 0x4869f3:c.instructions+=1;goto B4869f3;
case 0x4869f5:goto L4869f5;
case 0x4869fb:c.instructions+=5;goto B4869fb;
case 0x4869fe:c.instructions+=4;goto B4869fe;
case 0x486a04:c.instructions+=3;goto B486a04;
case 0x486a05:c.instructions+=2;goto B486a05;
case 0x486a07:c.instructions+=1;goto B486a07;
case 0x486a0c:goto L486a0c;
case 0x486a0f:c.instructions+=2;goto B486a0f;
case 0x486a11:c.instructions+=1;goto B486a11;
case 0x486a13:goto L486a13;
case 0x486a15:c.instructions+=1;goto B486a15;
case 0x486a1a:goto L486a1a;
case 0x486a1c:goto L486a1c;
case 0x486a1e:goto L486a1e;
case 0x486a21:c.instructions+=4;goto B486a21;
case 0x486a24:c.instructions+=3;goto B486a24;
case 0x486a26:c.instructions+=2;goto B486a26;
case 0x486a27:c.instructions+=1;goto B486a27;
case 0x486a2a:goto L486a2a;
case 0x486a2c:c.instructions+=1;goto B486a2c;
case 0x486a31:goto L486a31;
case 0x486a36:c.instructions+=8;goto B486a36;
case 0x486a39:c.instructions+=7;goto B486a39;
case 0x486a3c:c.instructions+=6;goto B486a3c;
case 0x486a3e:c.instructions+=5;goto B486a3e;
case 0x486a43:c.instructions+=4;goto B486a43;
case 0x486a48:c.instructions+=3;goto B486a48;
case 0x486a4d:c.instructions+=2;goto B486a4d;
case 0x486a52:c.instructions+=1;goto B486a52;
case 0x486a57:goto L486a57;
case 0x486a59:goto L486a59;
case 0x486a5f:c.instructions+=4;goto B486a5f;
case 0x486a62:c.instructions+=3;goto B486a62;
case 0x486a64:c.instructions+=2;goto B486a64;
case 0x486a69:c.instructions+=1;goto B486a69;
case 0x486a6b:goto L486a6b;
case 0x486a6d:c.instructions+=1;goto B486a6d;
case 0x486a72:goto L486a72;
case 0x486a78:c.instructions+=3;goto B486a78;
case 0x486a79:c.instructions+=2;goto B486a79;
case 0x486a7b:c.instructions+=1;goto B486a7b;
case 0x486a80:goto L486a80;
case 0x486a82:c.instructions+=2;goto B486a82;
case 0x486a84:c.instructions+=1;goto B486a84;
case 0x486a86:goto L486a86;
case 0x486a8c:c.instructions+=3;goto B486a8c;
case 0x486a8e:c.instructions+=2;goto B486a8e;
case 0x486a8f:c.instructions+=1;goto B486a8f;
case 0x486a92:goto L486a92;
case 0x486a95:c.instructions+=2;goto B486a95;
case 0x486a96:c.instructions+=1;goto B486a96;
case 0x486a98:goto L486a98;
case 0x486a9a:c.instructions+=2;goto B486a9a;
case 0x486a9f:c.instructions+=1;goto B486a9f;
case 0x486aa0:goto L486aa0;
case 0x486aa2:c.instructions+=2;goto B486aa2;
case 0x486aa4:c.instructions+=1;goto B486aa4;
case 0x486aa6:goto L486aa6;
case 0x486aa8:c.instructions+=3;goto B486aa8;
case 0x486aab:c.instructions+=2;goto B486aab;
case 0x486aac:c.instructions+=1;goto B486aac;
case 0x486aaf:goto L486aaf;
case 0x486ab2:c.instructions+=2;goto B486ab2;
case 0x486ab3:c.instructions+=1;goto B486ab3;
case 0x486ab5:goto L486ab5;
case 0x486aba:c.instructions+=3;goto B486aba;
case 0x486abc:c.instructions+=2;goto B486abc;
case 0x486abd:c.instructions+=1;goto B486abd;
case 0x486abf:goto L486abf;
case 0x486ac4:c.instructions+=2;goto B486ac4;
case 0x486ac6:c.instructions+=1;goto B486ac6;
case 0x486ac8:goto L486ac8;
case 0x486ace:c.instructions+=3;goto B486ace;
case 0x486ad3:c.instructions+=2;goto B486ad3;
case 0x486ad4:c.instructions+=1;goto B486ad4;
case 0x486ad9:goto L486ad9;
case 0x486ada:c.instructions+=2;goto B486ada;
case 0x486adb:c.instructions+=1;goto B486adb;
case 0x486adc:goto L486adc;
case 0x486ae1:c.instructions+=2;goto B486ae1;
case 0x486ae3:c.instructions+=1;goto B486ae3;
case 0x486ae5:goto L486ae5;
case 0x486aeb:c.instructions+=3;goto B486aeb;
case 0x486af0:c.instructions+=2;goto B486af0;
case 0x486af1:c.instructions+=1;goto B486af1;
case 0x486af6:goto L486af6;
case 0x486af7:c.instructions+=2;goto B486af7;
case 0x486af8:c.instructions+=1;goto B486af8;
case 0x486af9:goto L486af9;
case 0x486afe:c.instructions+=2;goto B486afe;
case 0x486b00:c.instructions+=1;goto B486b00;
case 0x486b02:goto L486b02;
case 0x486b07:c.instructions+=2;goto B486b07;
case 0x486b09:c.instructions+=1;goto B486b09;
case 0x486b0b:goto L486b0b;
case 0x486b11:c.instructions+=3;goto B486b11;
case 0x486b16:c.instructions+=2;goto B486b16;
case 0x486b17:c.instructions+=1;goto B486b17;
case 0x486b1c:goto L486b1c;
case 0x486b1d:c.instructions+=2;goto B486b1d;
case 0x486b1e:c.instructions+=1;goto B486b1e;
case 0x486b1f:goto L486b1f;
case 0x486b25:c.instructions+=3;goto B486b25;
case 0x486b27:c.instructions+=2;goto B486b27;
case 0x486b28:c.instructions+=1;goto B486b28;
case 0x486b2d:goto L486b2d;
case 0x486b2e:c.instructions+=2;goto B486b2e;
case 0x486b2f:c.instructions+=1;goto B486b2f;
case 0x486b30:goto L486b30;
case 0x486b35:c.instructions+=4;goto B486b35;
case 0x486b37:c.instructions+=3;goto B486b37;
case 0x486b38:c.instructions+=2;goto B486b38;
case 0x486b3a:c.instructions+=1;goto B486b3a;
case 0x486b40:goto L486b40;
case 0x486b45:c.instructions+=2;goto B486b45;
case 0x486b4f:c.instructions+=1;goto B486b4f;
case 0x486b54:goto L486b54;
case 0x486b56:c.instructions+=2;goto B486b56;
case 0x486b60:c.instructions+=1;goto B486b60;
case 0x486b65:goto L486b65;
case 0x486b68:c.instructions+=2;goto B486b68;
case 0x486b6a:c.instructions+=1;goto B486b6a;
case 0x486b6d:goto L486b6d;
case 0x486b70:c.instructions+=2;goto B486b70;
case 0x486b72:c.instructions+=1;goto B486b72;
case 0x486b75:goto L486b75;
case 0x486b7b:c.instructions+=2;goto B486b7b;
case 0x486b7d:c.instructions+=1;goto B486b7d;
case 0x486b82:goto L486b82;
case 0x486b85:c.instructions+=2;goto B486b85;
case 0x486b88:c.instructions+=1;goto B486b88;
case 0x486b8a:goto L486b8a;
case 0x486b90:goto L486b90;
case 0x486b93:c.instructions+=6;goto B486b93;
case 0x486b96:c.instructions+=5;goto B486b96;
case 0x486b99:c.instructions+=4;goto B486b99;
case 0x486b9b:c.instructions+=3;goto B486b9b;
case 0x486ba1:c.instructions+=2;goto B486ba1;
case 0x486ba2:c.instructions+=1;goto B486ba2;
case 0x486ba7:goto L486ba7;
case 0x486baa:c.instructions+=6;goto B486baa;
case 0x486bab:c.instructions+=5;goto B486bab;
case 0x486bae:c.instructions+=4;goto B486bae;
case 0x486bb1:c.instructions+=3;goto B486bb1;
case 0x486bb3:c.instructions+=2;goto B486bb3;
case 0x486bb5:c.instructions+=1;goto B486bb5;
case 0x486bb7:goto L486bb7;
case 0x486bbb:c.instructions+=2;goto B486bbb;
case 0x486bbc:c.instructions+=1;goto B486bbc;
case 0x486bc0:goto L486bc0;
case 0x486bc5:c.instructions+=3;goto B486bc5;
case 0x486bc8:c.instructions+=2;goto B486bc8;
case 0x486bca:c.instructions+=1;goto B486bca;
case 0x486bcc:goto L486bcc;
case 0x486bd2:c.instructions+=2;goto B486bd2;
case 0x486bd4:c.instructions+=1;goto B486bd4;
case 0x486bd6:goto L486bd6;
case 0x486bdc:c.instructions+=2;goto B486bdc;
case 0x486bde:c.instructions+=1;goto B486bde;
case 0x486be0:goto L486be0;
case 0x486be2:c.instructions+=1;goto B486be2;
case 0x486be5:goto L486be5;
case 0x486beb:c.instructions+=2;goto B486beb;
case 0x486bed:c.instructions+=1;goto B486bed;
case 0x486bef:goto L486bef;
case 0x486bf1:c.instructions+=1;goto B486bf1;
case 0x486bf4:goto L486bf4;
case 0x486bf9:goto L486bf9;
case 0x486bfe:goto L486bfe;
case 0x486c04:goto L486c04;
case 0x486c05:c.instructions+=1;goto B486c05;
case 0x486c10:goto L486c10;
case 0x486c15:c.instructions+=4;goto B486c15;
case 0x486c17:c.instructions+=3;goto B486c17;
case 0x486c18:c.instructions+=2;goto B486c18;
case 0x486c1a:c.instructions+=1;goto B486c1a;
case 0x486c20:goto L486c20;
case 0x486c25:c.instructions+=7;goto B486c25;
case 0x486c2f:c.instructions+=6;goto B486c2f;
case 0x486c36:c.instructions+=5;goto B486c36;
case 0x486c3c:c.instructions+=4;goto B486c3c;
case 0x486c43:c.instructions+=3;goto B486c43;
case 0x486c49:c.instructions+=2;goto B486c49;
case 0x486c4b:c.instructions+=1;goto B486c4b;
case 0x486c4d:goto L486c4d;
case 0x486c53:c.instructions+=4;goto B486c53;
case 0x486c56:c.instructions+=3;goto B486c56;
case 0x486c5c:c.instructions+=2;goto B486c5c;
case 0x486c5e:c.instructions+=1;goto B486c5e;
case 0x486c60:goto L486c60;
case 0x486c63:c.instructions+=2;goto B486c63;
case 0x486c66:c.instructions+=1;goto B486c66;
case 0x486c68:goto L486c68;
case 0x486c6a:c.instructions+=2;goto B486c6a;
case 0x486c6b:c.instructions+=1;goto B486c6b;
case 0x486c6d:goto L486c6d;
case 0x486c6f:goto L486c6f;
case 0x486c74:goto L486c74;
case 0x486c77:goto L486c77;
case 0x486c7c:goto L486c7c;
case 0x486c81:c.instructions+=2;goto B486c81;
case 0x486c83:c.instructions+=1;goto B486c83;
case 0x486c85:goto L486c85;
case 0x486c8a:c.instructions+=2;goto B486c8a;
case 0x486c8c:c.instructions+=1;goto B486c8c;
case 0x486c8e:goto L486c8e;
case 0x486c94:c.instructions+=1;goto B486c94;
case 0x486c9e:goto L486c9e;
case 0x486ca3:c.instructions+=2;goto B486ca3;
case 0x486ca5:c.instructions+=1;goto B486ca5;
case 0x486ca7:goto L486ca7;
case 0x486cac:c.instructions+=2;goto B486cac;
case 0x486cae:c.instructions+=1;goto B486cae;
case 0x486cb0:goto L486cb0;
case 0x486cb5:c.instructions+=1;goto B486cb5;
case 0x486cbf:goto L486cbf;
case 0x486cc4:c.instructions+=2;goto B486cc4;
case 0x486cc6:c.instructions+=1;goto B486cc6;
case 0x486cc8:goto L486cc8;
case 0x486ccd:c.instructions+=2;goto B486ccd;
case 0x486ccf:c.instructions+=1;goto B486ccf;
case 0x486cd1:goto L486cd1;
case 0x486cd7:c.instructions+=1;goto B486cd7;
case 0x486ce1:goto L486ce1;
case 0x486ce3:c.instructions+=2;goto B486ce3;
case 0x486ced:c.instructions+=1;goto B486ced;
case 0x486cf2:goto L486cf2;
case 0x486cf5:c.instructions+=16;goto B486cf5;
case 0x486cf9:c.instructions+=15;goto B486cf9;
case 0x486cfd:c.instructions+=14;goto B486cfd;
case 0x486cfe:c.instructions+=13;goto B486cfe;
case 0x486d01:c.instructions+=12;goto B486d01;
case 0x486d04:c.instructions+=11;goto B486d04;
case 0x486d0a:c.instructions+=10;goto B486d0a;
case 0x486d0d:c.instructions+=9;goto B486d0d;
case 0x486d10:c.instructions+=8;goto B486d10;
case 0x486d16:c.instructions+=7;goto B486d16;
case 0x486d19:c.instructions+=6;goto B486d19;
case 0x486d1c:c.instructions+=5;goto B486d1c;
case 0x486d1d:c.instructions+=4;goto B486d1d;
case 0x486d1f:c.instructions+=3;goto B486d1f;
case 0x486d21:c.instructions+=2;goto B486d21;
case 0x486d24:c.instructions+=1;goto B486d24;
case 0x486d26:goto L486d26;
case 0x486d29:c.instructions+=6;goto B486d29;
case 0x486d2c:c.instructions+=5;goto B486d2c;
case 0x486d2f:c.instructions+=4;goto B486d2f;
case 0x486d31:c.instructions+=3;goto B486d31;
case 0x486d37:c.instructions+=2;goto B486d37;
case 0x486d38:c.instructions+=1;goto B486d38;
case 0x486d3d:goto L486d3d;
case 0x486d40:c.instructions+=6;goto B486d40;
case 0x486d41:c.instructions+=5;goto B486d41;
case 0x486d44:c.instructions+=4;goto B486d44;
case 0x486d47:c.instructions+=3;goto B486d47;
case 0x486d49:c.instructions+=2;goto B486d49;
case 0x486d4b:c.instructions+=1;goto B486d4b;
case 0x486d4d:goto L486d4d;
case 0x486d53:c.instructions+=3;goto B486d53;
case 0x486d55:c.instructions+=2;goto B486d55;
case 0x486d5f:c.instructions+=1;goto B486d5f;
case 0x486d61:goto L486d61;
case 0x486d64:c.instructions+=2;goto B486d64;
case 0x486d66:c.instructions+=1;goto B486d66;
case 0x486d68:goto L486d68;
case 0x486d6d:c.instructions+=1;goto B486d6d;
case 0x486d70:goto L486d70;
case 0x486d73:c.instructions+=1;goto B486d73;
case 0x486d75:goto L486d75;
case 0x486d78:c.instructions+=2;goto B486d78;
case 0x486d7a:c.instructions+=1;goto B486d7a;
case 0x486d7c:goto L486d7c;
case 0x486d81:goto L486d81;
case 0x486d87:c.instructions+=2;goto B486d87;
case 0x486d88:c.instructions+=1;goto B486d88;
case 0x486d8b:goto L486d8b;
case 0x486d8d:c.instructions+=1;goto B486d8d;
case 0x486d8f:goto L486d8f;
case 0x486d95:goto L486d95;
case 0x486d9a:goto L486d9a;
case 0x486da0:goto L486da0;
case 0x486da1:c.instructions+=1;goto B486da1;
case 0x486db0:goto L486db0;
case 0x486db5:c.instructions+=4;goto B486db5;
case 0x486db7:c.instructions+=3;goto B486db7;
case 0x486db8:c.instructions+=2;goto B486db8;
case 0x486dba:c.instructions+=1;goto B486dba;
case 0x486dc0:goto L486dc0;
case 0x486dc5:c.instructions+=2;goto B486dc5;
case 0x486dc7:c.instructions+=1;goto B486dc7;
case 0x486dcd:goto L486dcd;
case 0x486dce:c.instructions+=4;goto B486dce;
case 0x486dcf:c.instructions+=3;goto B486dcf;
case 0x486dd5:c.instructions+=2;goto B486dd5;
case 0x486dda:c.instructions+=1;goto B486dda;
case 0x486de0:goto L486de0;
case 0x486de2:c.instructions+=2;goto B486de2;
case 0x486de4:c.instructions+=1;goto B486de4;
case 0x486de6:goto L486de6;
case 0x486dec:c.instructions+=3;goto B486dec;
case 0x486dee:c.instructions+=2;goto B486dee;
case 0x486def:c.instructions+=1;goto B486def;
case 0x486df2:goto L486df2;
case 0x486df5:c.instructions+=2;goto B486df5;
case 0x486df6:c.instructions+=1;goto B486df6;
case 0x486df8:goto L486df8;
case 0x486dfe:c.instructions+=4;goto B486dfe;
case 0x486e00:c.instructions+=3;goto B486e00;
case 0x486e01:c.instructions+=2;goto B486e01;
case 0x486e02:c.instructions+=1;goto B486e02;
case 0x486e04:goto L486e04;
case 0x486e09:c.instructions+=2;goto B486e09;
case 0x486e0b:c.instructions+=1;goto B486e0b;
case 0x486e0d:goto L486e0d;
case 0x486e12:c.instructions+=2;goto B486e12;
case 0x486e14:c.instructions+=1;goto B486e14;
case 0x486e16:goto L486e16;
case 0x486e1b:c.instructions+=3;goto B486e1b;
case 0x486e1c:c.instructions+=2;goto B486e1c;
case 0x486e1e:c.instructions+=1;goto B486e1e;
case 0x486e23:goto L486e23;
case 0x486e24:c.instructions+=1;goto B486e24;
case 0x486e25:goto L486e25;
case 0x486e2a:c.instructions+=2;goto B486e2a;
case 0x486e2c:c.instructions+=1;goto B486e2c;
case 0x486e2e:goto L486e2e;
case 0x486e33:c.instructions+=3;goto B486e33;
case 0x486e34:c.instructions+=2;goto B486e34;
case 0x486e36:c.instructions+=1;goto B486e36;
case 0x486e3b:goto L486e3b;
case 0x486e3c:c.instructions+=1;goto B486e3c;
case 0x486e3d:goto L486e3d;
case 0x486e42:c.instructions+=2;goto B486e42;
case 0x486e44:c.instructions+=1;goto B486e44;
case 0x486e46:goto L486e46;
case 0x486e4b:c.instructions+=2;goto B486e4b;
case 0x486e4d:c.instructions+=1;goto B486e4d;
case 0x486e4f:goto L486e4f;
case 0x486e54:c.instructions+=3;goto B486e54;
case 0x486e55:c.instructions+=2;goto B486e55;
case 0x486e57:c.instructions+=1;goto B486e57;
case 0x486e5c:goto L486e5c;
case 0x486e5d:c.instructions+=1;goto B486e5d;
case 0x486e5e:goto L486e5e;
case 0x486e60:c.instructions+=3;goto B486e60;
case 0x486e61:c.instructions+=2;goto B486e61;
case 0x486e63:c.instructions+=1;goto B486e63;
case 0x486e68:goto L486e68;
case 0x486e69:c.instructions+=1;goto B486e69;
case 0x486e70:goto L486e70;
case 0x486e77:c.instructions+=1;goto B486e77;
case 0x486e79:goto L486e79;
case 0x486e7d:c.instructions+=5;goto B486e7d;
case 0x486e81:c.instructions+=4;goto B486e81;
case 0x486e82:c.instructions+=3;goto B486e82;
case 0x486e83:c.instructions+=2;goto B486e83;
case 0x486e89:c.instructions+=1;goto B486e89;
case 0x486e8e:goto L486e8e;
case 0x486e8f:goto L486e8f;
case 0x486e93:c.instructions+=2;goto B486e93;
case 0x486e94:c.instructions+=1;goto B486e94;
case 0x486e98:goto L486e98;
case 0x486e99:c.instructions+=1;goto B486e99;
case 0x486ea0:goto L486ea0;
case 0x486ea7:c.instructions+=1;goto B486ea7;
case 0x486ea9:goto L486ea9;
case 0x486ead:c.instructions+=5;goto B486ead;
case 0x486eb1:c.instructions+=4;goto B486eb1;
case 0x486eb2:c.instructions+=3;goto B486eb2;
case 0x486eb3:c.instructions+=2;goto B486eb3;
case 0x486eb9:c.instructions+=1;goto B486eb9;
case 0x486ebe:goto L486ebe;
case 0x486ebf:goto L486ebf;
case 0x486ec3:c.instructions+=2;goto B486ec3;
case 0x486ec4:c.instructions+=1;goto B486ec4;
case 0x486ec8:goto L486ec8;
case 0x486ec9:c.instructions+=1;goto B486ec9;
case 0x486ed0:goto L486ed0;
case 0x486ed4:c.instructions+=5;goto B486ed4;
case 0x486ed5:c.instructions+=4;goto B486ed5;
case 0x486ed7:c.instructions+=3;goto B486ed7;
case 0x486ed8:c.instructions+=2;goto B486ed8;
case 0x486eda:c.instructions+=1;goto B486eda;
case 0x486edf:goto L486edf;
case 0x486ee2:c.instructions+=5;goto B486ee2;
case 0x486ee4:c.instructions+=4;goto B486ee4;
case 0x486ee6:c.instructions+=3;goto B486ee6;
case 0x486ee9:c.instructions+=2;goto B486ee9;
case 0x486eea:c.instructions+=1;goto B486eea;
case 0x486ef0:goto L486ef0;
case 0x486ef4:c.instructions+=4;goto B486ef4;
case 0x486efa:c.instructions+=3;goto B486efa;
case 0x486efb:c.instructions+=2;goto B486efb;
case 0x486efc:c.instructions+=1;goto B486efc;
case 0x486f01:goto L486f01;
case 0x486f04:c.instructions+=1;goto B486f04;
case 0x486f10:goto L486f10;
case 0x486f14:c.instructions+=4;goto B486f14;
case 0x486f1a:c.instructions+=3;goto B486f1a;
case 0x486f1b:c.instructions+=2;goto B486f1b;
case 0x486f1c:c.instructions+=1;goto B486f1c;
case 0x486f21:goto L486f21;
case 0x486f24:c.instructions+=1;goto B486f24;
case 0x486f30:goto L486f30;
case 0x486f34:c.instructions+=4;goto B486f34;
case 0x486f3a:c.instructions+=3;goto B486f3a;
case 0x486f3b:c.instructions+=2;goto B486f3b;
case 0x486f3c:c.instructions+=1;goto B486f3c;
case 0x486f41:goto L486f41;
case 0x486f44:c.instructions+=1;goto B486f44;
case 0x486f50:goto L486f50;
case 0x486f51:c.instructions+=60;goto B486f51;
case 0x486f53:c.instructions+=59;goto B486f53;
case 0x486f56:c.instructions+=58;goto B486f56;
case 0x486f59:c.instructions+=57;goto B486f59;
case 0x486f5c:c.instructions+=56;goto B486f5c;
case 0x486f5f:c.instructions+=55;goto B486f5f;
case 0x486f62:c.instructions+=54;goto B486f62;
case 0x486f65:c.instructions+=53;goto B486f65;
case 0x486f68:c.instructions+=52;goto B486f68;
case 0x486f6b:c.instructions+=51;goto B486f6b;
case 0x486f6d:c.instructions+=50;goto B486f6d;
case 0x486f70:c.instructions+=49;goto B486f70;
case 0x486f73:c.instructions+=48;goto B486f73;
case 0x486f75:c.instructions+=47;goto B486f75;
case 0x486f77:c.instructions+=46;goto B486f77;
case 0x486f79:c.instructions+=45;goto B486f79;
case 0x486f7b:c.instructions+=44;goto B486f7b;
case 0x486f7e:c.instructions+=43;goto B486f7e;
case 0x486f81:c.instructions+=42;goto B486f81;
case 0x486f84:c.instructions+=41;goto B486f84;
case 0x486f86:c.instructions+=40;goto B486f86;
case 0x486f88:c.instructions+=39;goto B486f88;
case 0x486f8b:c.instructions+=38;goto B486f8b;
case 0x486f8e:c.instructions+=37;goto B486f8e;
case 0x486f90:c.instructions+=36;goto B486f90;
case 0x486f93:c.instructions+=35;goto B486f93;
case 0x486f96:c.instructions+=34;goto B486f96;
case 0x486f98:c.instructions+=33;goto B486f98;
case 0x486f9b:c.instructions+=32;goto B486f9b;
case 0x486f9e:c.instructions+=31;goto B486f9e;
case 0x486fa1:c.instructions+=30;goto B486fa1;
case 0x486fa3:c.instructions+=29;goto B486fa3;
case 0x486fa5:c.instructions+=28;goto B486fa5;
case 0x486fa8:c.instructions+=27;goto B486fa8;
case 0x486fab:c.instructions+=26;goto B486fab;
case 0x486fad:c.instructions+=25;goto B486fad;
case 0x486fb0:c.instructions+=24;goto B486fb0;
case 0x486fb3:c.instructions+=23;goto B486fb3;
case 0x486fb5:c.instructions+=22;goto B486fb5;
case 0x486fb8:c.instructions+=21;goto B486fb8;
case 0x486fbb:c.instructions+=20;goto B486fbb;
case 0x486fbe:c.instructions+=19;goto B486fbe;
case 0x486fc0:c.instructions+=18;goto B486fc0;
case 0x486fc2:c.instructions+=17;goto B486fc2;
case 0x486fc5:c.instructions+=16;goto B486fc5;
case 0x486fc8:c.instructions+=15;goto B486fc8;
case 0x486fca:c.instructions+=14;goto B486fca;
case 0x486fcd:c.instructions+=13;goto B486fcd;
case 0x486fd0:c.instructions+=12;goto B486fd0;
case 0x486fd3:c.instructions+=11;goto B486fd3;
case 0x486fd5:c.instructions+=10;goto B486fd5;
case 0x486fd9:c.instructions+=9;goto B486fd9;
case 0x486fdd:c.instructions+=8;goto B486fdd;
case 0x486fdf:c.instructions+=7;goto B486fdf;
case 0x486fe2:c.instructions+=6;goto B486fe2;
case 0x486fe4:c.instructions+=5;goto B486fe4;
case 0x486fe7:c.instructions+=4;goto B486fe7;
case 0x486fea:c.instructions+=3;goto B486fea;
case 0x486fec:c.instructions+=2;goto B486fec;
case 0x486fed:c.instructions+=1;goto B486fed;
case 0x486ff0:goto L486ff0;
case 0x486ff3:c.instructions+=4;goto B486ff3;
case 0x486ff5:c.instructions+=3;goto B486ff5;
case 0x486ff9:c.instructions+=2;goto B486ff9;
case 0x486ffd:c.instructions+=1;goto B486ffd;
default:missing_instruction(c.pc);}
B486001:L486001:{c.instructions+=1;NFSU2_TR(0x486001);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L486008;}}
}
B486003:L486003:{c.instructions+=2;NFSU2_TR(0x486003);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486006:{NFSU2_TR(0x486006);
{goto L48600a;}
}
B486008:L486008:{c.instructions+=1;NFSU2_TR(0x486008);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48600a:L48600a:{c.instructions+=7;NFSU2_TR(0x48600a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48600d:{NFSU2_TR(0x48600d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486010:{NFSU2_TR(0x486010);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486013:{NFSU2_TR(0x486013);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486016:{NFSU2_TR(0x486016);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486019:{NFSU2_TR(0x486019);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x3ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48601d:{NFSU2_TR(0x48601d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L486024;}}
}
B48601f:L48601f:{c.instructions+=2;NFSU2_TR(0x48601f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486022:{NFSU2_TR(0x486022);
{goto L486026;}
}
B486024:L486024:{c.instructions+=1;NFSU2_TR(0x486024);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B486026:L486026:{c.instructions+=7;NFSU2_TR(0x486026);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486029:{NFSU2_TR(0x486029);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48602c:{NFSU2_TR(0x48602c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48602f:{NFSU2_TR(0x48602f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486032:{NFSU2_TR(0x486032);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486035:{NFSU2_TR(0x486035);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B486039:{NFSU2_TR(0x486039);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L486040;}}
}
B48603b:L48603b:{c.instructions+=2;NFSU2_TR(0x48603b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48603e:{NFSU2_TR(0x48603e);
{goto L486042;}
}
B486040:L486040:{c.instructions+=1;NFSU2_TR(0x486040);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B486042:L486042:{c.instructions+=7;NFSU2_TR(0x486042);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486045:{NFSU2_TR(0x486045);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486048:{NFSU2_TR(0x486048);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48604b:{NFSU2_TR(0x48604b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48604e:{NFSU2_TR(0x48604e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486051:{NFSU2_TR(0x486051);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x5ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B486055:{NFSU2_TR(0x486055);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48605c;}}
}
B486057:L486057:{c.instructions+=2;NFSU2_TR(0x486057);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48605a:{NFSU2_TR(0x48605a);
{goto L48605e;}
}
B48605c:L48605c:{c.instructions+=1;NFSU2_TR(0x48605c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48605e:L48605e:{c.instructions+=7;NFSU2_TR(0x48605e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486061:{NFSU2_TR(0x486061);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486064:{NFSU2_TR(0x486064);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486067:{NFSU2_TR(0x486067);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48606a:{NFSU2_TR(0x48606a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48606d:{NFSU2_TR(0x48606d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x6ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B486071:{NFSU2_TR(0x486071);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L486078;}}
}
B486073:L486073:{c.instructions+=2;NFSU2_TR(0x486073);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486076:{NFSU2_TR(0x486076);
{goto L48607a;}
}
B486078:L486078:{c.instructions+=1;NFSU2_TR(0x486078);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48607a:L48607a:{c.instructions+=7;NFSU2_TR(0x48607a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48607d:{NFSU2_TR(0x48607d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486080:{NFSU2_TR(0x486080);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486083:{NFSU2_TR(0x486083);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486086:{NFSU2_TR(0x486086);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486089:{NFSU2_TR(0x486089);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x7ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48608d:{NFSU2_TR(0x48608d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L486094;}}
}
B48608f:L48608f:{c.instructions+=2;NFSU2_TR(0x48608f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486092:{NFSU2_TR(0x486092);
{goto L486096;}
}
B486094:L486094:{c.instructions+=1;NFSU2_TR(0x486094);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B486096:L486096:{c.instructions+=7;NFSU2_TR(0x486096);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486099:{NFSU2_TR(0x486099);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48609c:{NFSU2_TR(0x48609c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48609f:{NFSU2_TR(0x48609f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4860a2:{NFSU2_TR(0x4860a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4860a5:{NFSU2_TR(0x4860a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x8ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4860a9:{NFSU2_TR(0x4860a9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4860b0;}}
}
B4860ab:L4860ab:{c.instructions+=2;NFSU2_TR(0x4860ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4860ae:{NFSU2_TR(0x4860ae);
{goto L4860b2;}
}
B4860b0:L4860b0:{c.instructions+=1;NFSU2_TR(0x4860b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4860b2:L4860b2:{c.instructions+=4;NFSU2_TR(0x4860b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4860b5:{NFSU2_TR(0x4860b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4860b8:{NFSU2_TR(0x4860b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4860bb:{NFSU2_TR(0x4860bb);
w4(R+0,u32(0xa8ull));
}
B4860c0:L4860c0:{c.instructions+=4;NFSU2_TR(0x4860c0);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4860c6:{NFSU2_TR(0x4860c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4860c9:{NFSU2_TR(0x4860c9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4860cb:{NFSU2_TR(0x4860cb);
if(r1(R+518)){{goto L4860d6;}}
}
B4860cd:L4860cd:{c.instructions+=3;NFSU2_TR(0x4860cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4860d0:{NFSU2_TR(0x4860d0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4860d4:{NFSU2_TR(0x4860d4);
{goto L4860da;}
}
B4860d6:L4860d6:{c.instructions+=1;NFSU2_TR(0x4860d6);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4860da:L4860da:{c.instructions+=3;NFSU2_TR(0x4860da);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4860dd:{NFSU2_TR(0x4860dd);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xccull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xccull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4860e2:{NFSU2_TR(0x4860e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4860c0u);}goto L4860c0;}}
}
B4860e4:L4860e4:{c.instructions+=2;NFSU2_TR(0x4860e4);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4860e6:{NFSU2_TR(0x4860e6);
{goto L4860f0;}
}
B4860e8:L4860e8:{c.instructions+=2;NFSU2_TR(0x4860e8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4860ea:{NFSU2_TR(0x4860ea);
__builtin_memmove((R+12),(R+12),4);
}
B4860f0:L4860f0:{c.instructions+=3;NFSU2_TR(0x4860f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4860f2:{NFSU2_TR(0x4860f2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4860f4:{NFSU2_TR(0x4860f4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L486108;}}
}
B4860f6:L4860f6:{c.instructions+=5;NFSU2_TR(0x4860f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4860f9:{NFSU2_TR(0x4860f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4860fa:{NFSU2_TR(0x4860fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4860fb:{NFSU2_TR(0x4860fb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4860fc:{NFSU2_TR(0x4860fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486101ull));
TAIL_STATIC(0x4837c0u,483);
}
B486101:L486101:{c.instructions+=4;NFSU2_TR(0x486101);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B486103:{NFSU2_TR(0x486103);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B486104:{NFSU2_TR(0x486104);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B486106:{NFSU2_TR(0x486106);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4860f6u);}goto L4860f6;}}
}
B486108:L486108:{c.instructions+=4;NFSU2_TR(0x486108);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B486109:{NFSU2_TR(0x486109);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B48610c:{NFSU2_TR(0x48610c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48610f:{NFSU2_TR(0x48610f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4860e8u);}goto L4860e8;}}
}
B486111:L486111:{c.instructions+=3;NFSU2_TR(0x486111);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B486114:{NFSU2_TR(0x486114);
__builtin_memmove((R+4),(R+24),4);
}
B486116:{NFSU2_TR(0x486116);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48611bull));
TAIL_STATIC(0x483900u,483);
}
B48611b:L48611b:{c.instructions+=2;NFSU2_TR(0x48611b);
__builtin_memmove((R+4),(R+24),4);
}
B48611d:{NFSU2_TR(0x48611d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486122ull));
TAIL_STATIC(0x485e90u,485);
}
B486122:L486122:{c.instructions+=5;NFSU2_TR(0x486122);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B486123:{NFSU2_TR(0x486123);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B486124:{NFSU2_TR(0x486124);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B486125:{NFSU2_TR(0x486125);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B486126:{NFSU2_TR(0x486126);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486130:L486130:{c.instructions+=3;NFSU2_TR(0x486130);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B486135:{NFSU2_TR(0x486135);
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
B486137:{NFSU2_TR(0x486137);
if(r1(R+518)){{goto L48615e;}}
}
B486139:L486139:{c.instructions+=7;NFSU2_TR(0x486139);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48613a:{NFSU2_TR(0x48613a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48613d:{NFSU2_TR(0x48613d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48613f:{NFSU2_TR(0x48613f);
u8 U[4];
w4(U+0,u32(0x469d20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486144:{NFSU2_TR(0x486144);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486146:{NFSU2_TR(0x486146);
u8 U[4];
w4(U+0,u32(0x78c17cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48614b:{NFSU2_TR(0x48614b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486150ull));
TAIL_STATIC(0x43db50u,43d);
}
B486150:L486150:{c.instructions+=5;NFSU2_TR(0x486150);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B486153:{NFSU2_TR(0x486153);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486154:{NFSU2_TR(0x486154);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486156:{NFSU2_TR(0x486156);
__builtin_memmove((R+4),(R+24),4);
}
B486158:{NFSU2_TR(0x486158);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48615dull));
TAIL_STATIC(0x484510u,484);
}
B48615d:L48615d:{c.instructions+=1;NFSU2_TR(0x48615d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48615e:L48615e:{c.instructions+=1;NFSU2_TR(0x48615e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486160:L486160:{c.instructions+=8;NFSU2_TR(0x486160);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486164:{NFSU2_TR(0x486164);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486165:{NFSU2_TR(0x486165);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486166:{NFSU2_TR(0x486166);
u8 U[4];
w4(U+0,u32(0x20000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48616b:{NFSU2_TR(0x48616b);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486170:{NFSU2_TR(0x486170);
__builtin_memmove(gp(0x82b9bc),(R+0),4);
}
B486175:{NFSU2_TR(0x486175);
__builtin_memmove(gp(0x82b9c8),(R+4),4);
}
B48617b:{NFSU2_TR(0x48617b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486180ull));
TAIL_STATIC(0x5e02b0u,5e0);
}
B486180:L486180:{c.instructions+=6;NFSU2_TR(0x486180);
w4(R+24,u32(0x2ull));
}
B486185:{NFSU2_TR(0x486185);
w4(R+28,u32(0x82b9b4ull));
}
B48618a:{NFSU2_TR(0x48618a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48618d:{NFSU2_TR(0x48618d);
s4(0x82b9b8,u32(0x1ull));
}
B486197:{NFSU2_TR(0x486197);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B486199:{NFSU2_TR(0x486199);
__builtin_memmove((R+16),(R+16),4);
}
B4861a0:L4861a0:{c.instructions+=3;NFSU2_TR(0x4861a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4861a1:{NFSU2_TR(0x4861a1);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B4861a5:{NFSU2_TR(0x4861a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4861aaull));
TAIL_STATIC(0x485a50u,485);
}
B4861aa:L4861aa:{c.instructions+=6;NFSU2_TR(0x4861aa);
__builtin_memmove((R+0),gp(0x82b9b8),4);
}
B4861af:{NFSU2_TR(0x4861af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4861b2:{NFSU2_TR(0x4861b2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4861b3:{NFSU2_TR(0x4861b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B4861b6:{NFSU2_TR(0x4861b6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4861b8:{NFSU2_TR(0x4861b8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4861a0u);}goto L4861a0;}}
}
B4861ba:L4861ba:{c.instructions+=2;NFSU2_TR(0x4861ba);
u8 U[4];
w4(U+0,u32(0x789df0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4861bf:{NFSU2_TR(0x4861bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4861c4ull));
TAIL_STATIC(0x43db50u,43d);
}
B4861c4:L4861c4:{c.instructions+=3;NFSU2_TR(0x4861c4);
u8 U[4];
w4(U+0,u32(0x789de8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4861c9:{NFSU2_TR(0x4861c9);
__builtin_memmove(gp(0x82b9e4),(R+0),4);
}
B4861ce:{NFSU2_TR(0x4861ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4861d3ull));
TAIL_STATIC(0x43db50u,43d);
}
B4861d3:L4861d3:{c.instructions+=3;NFSU2_TR(0x4861d3);
u8 U[4];
w4(U+0,u32(0x789ddcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4861d8:{NFSU2_TR(0x4861d8);
__builtin_memmove(gp(0x82b9e8),(R+0),4);
}
B4861dd:{NFSU2_TR(0x4861dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4861e2ull));
TAIL_STATIC(0x43db50u,43d);
}
B4861e2:L4861e2:{c.instructions+=3;NFSU2_TR(0x4861e2);
u8 U[4];
w4(U+0,u32(0x789dd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4861e7:{NFSU2_TR(0x4861e7);
__builtin_memmove(gp(0x82b9ec),(R+0),4);
}
B4861ec:{NFSU2_TR(0x4861ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4861f1ull));
TAIL_STATIC(0x43db50u,43d);
}
B4861f1:L4861f1:{c.instructions+=3;NFSU2_TR(0x4861f1);
u8 U[4];
w4(U+0,u32(0x789dc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4861f6:{NFSU2_TR(0x4861f6);
__builtin_memmove(gp(0x82b9f0),(R+0),4);
}
B4861fb:{NFSU2_TR(0x4861fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486200ull));
TAIL_STATIC(0x43db50u,43d);
}
B486200:L486200:{c.instructions+=3;NFSU2_TR(0x486200);
u8 U[4];
w4(U+0,u32(0x789db8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486205:{NFSU2_TR(0x486205);
__builtin_memmove(gp(0x82b9f4),(R+0),4);
}
B48620a:{NFSU2_TR(0x48620a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48620full));
TAIL_STATIC(0x43db50u,43d);
}
B48620f:L48620f:{c.instructions+=5;NFSU2_TR(0x48620f);
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
B486212:{NFSU2_TR(0x486212);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B486213:{NFSU2_TR(0x486213);
__builtin_memmove(gp(0x82b9f8),(R+0),4);
}
B486218:{NFSU2_TR(0x486218);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B486219:{NFSU2_TR(0x486219);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486220:L486220:{c.instructions+=13;NFSU2_TR(0x486220);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486224:{NFSU2_TR(0x486224);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486225:{NFSU2_TR(0x486225);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486226:{NFSU2_TR(0x486226);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486227:{NFSU2_TR(0x486227);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486228:{NFSU2_TR(0x486228);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48622a:{NFSU2_TR(0x48622a);
__builtin_memmove((R+24),(R+4),4);
}
B48622c:{NFSU2_TR(0x48622c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48622e:{NFSU2_TR(0x48622e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B486230:{NFSU2_TR(0x486230);
u8 U[4];
w4(U+0,u32(0x5622ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486235:{NFSU2_TR(0x486235);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486238:{NFSU2_TR(0x486238);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48623b:{NFSU2_TR(0x48623b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486240ull));
TAIL_STATIC(0x7360f0u,736);
}
B486240:L486240:{c.instructions+=3;NFSU2_TR(0x486240);
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
B486243:{NFSU2_TR(0x486243);
__builtin_memmove((R+12),(R+0),4);
}
B486245:{NFSU2_TR(0x486245);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48624aull));
TAIL_STATIC(0x736dc0u,736);
}
B48624a:L48624a:{c.instructions+=3;NFSU2_TR(0x48624a);
__builtin_memmove((R+28),(R+0),4);
}
B48624c:{NFSU2_TR(0x48624c);
u8 U[8];
__builtin_memmove((U+0),gp(0x82ba34),4);
w1(R+512,u8((r4(U+0))<(r4(R+20))));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B486252:{NFSU2_TR(0x486252);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L486265;}}
}
B486254:L486254:{c.instructions+=3;NFSU2_TR(0x486254);
u8 U[4];
w4(U+0,u32(0x82b8b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486259:{NFSU2_TR(0x486259);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48625b:{NFSU2_TR(0x48625b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486260ull));
TAIL_STATIC(0x43c140u,43c);
}
B486260:L486260:{c.instructions+=2;NFSU2_TR(0x486260);
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
B486263:{NFSU2_TR(0x486263);
{goto L48626b;}
}
B486265:L486265:{c.instructions+=2;NFSU2_TR(0x486265);
__builtin_memmove((R+0),gp(0x82ba34),4);
}
B48626a:{NFSU2_TR(0x48626a);
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
B48626b:L48626b:{c.instructions+=3;NFSU2_TR(0x48626b);
u8 U[4];
w4(U+0,u32(0x82c694ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486270:{NFSU2_TR(0x486270);
__builtin_memmove(gp(0x82ba34),(R+0),4);
}
B486275:{NFSU2_TR(0x486275);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48627aull));
TAIL_STATIC(0x736050u,736);
}
B48627a:L48627a:{c.instructions+=4;NFSU2_TR(0x48627a);
__builtin_memmove((R+0),gp(0x82ba34),4);
}
B48627f:{NFSU2_TR(0x48627f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B486282:{NFSU2_TR(0x486282);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B486284:{NFSU2_TR(0x486284);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L486288;}}
}
B486286:L486286:{c.instructions+=1;NFSU2_TR(0x486286);
w4(R+0,u32(0-u32(r4(R+0))));
}
B486288:L486288:{c.instructions+=4;NFSU2_TR(0x486288);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486289:{NFSU2_TR(0x486289);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48628a:{NFSU2_TR(0x48628a);
u8 U[4];
w4(U+0,u32(0x485b10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48628f:{NFSU2_TR(0x48628f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486294ull));
TAIL_STATIC(0x736180u,736);
}
B486294:L486294:{c.instructions+=5;NFSU2_TR(0x486294);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486299:{NFSU2_TR(0x486299);
u8 U[4];
w4(U+0,u32(0x50d510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48629e:{NFSU2_TR(0x48629e);
u8 U[4];
w4(U+0,u32(0x45aa10ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4862a4:{NFSU2_TR(0x4862a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w4(U+4,u32(0x45abc0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4862ab:{NFSU2_TR(0x4862ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4862b0ull));
TAIL_STATIC(0x736140u,736);
}
B4862b0:L4862b0:{c.instructions+=2;NFSU2_TR(0x4862b0);
u8 U[4];
w4(U+0,u32(0x40cb20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4862b5:{NFSU2_TR(0x4862b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4862baull));
TAIL_STATIC(0x736160u,736);
}
B4862ba:L4862ba:{c.instructions+=4;NFSU2_TR(0x4862ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4862bd:{NFSU2_TR(0x4862bd);
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4862c0:{NFSU2_TR(0x4862c0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4862c1:{NFSU2_TR(0x4862c1);
if(r1(R+518)){{goto L486376;}}
}
B4862c7:L4862c7:{c.instructions+=2;NFSU2_TR(0x4862c7);
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
B4862c8:{NFSU2_TR(0x4862c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48636f;}}
}
B4862ce:L4862ce:{c.instructions+=4;NFSU2_TR(0x4862ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4862d1:{NFSU2_TR(0x4862d1);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B4862d7:{NFSU2_TR(0x4862d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4862d8:{NFSU2_TR(0x4862d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4862ddull));
TAIL_STATIC(0x43e910u,43e);
}
B4862dd:L4862dd:{c.instructions+=3;NFSU2_TR(0x4862dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4862e0:{NFSU2_TR(0x4862e0);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x404ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x404ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4862e5:{NFSU2_TR(0x4862e5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L48630e;}}
}
B4862e7:L4862e7:{c.instructions+=6;NFSU2_TR(0x4862e7);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B4862ed:{NFSU2_TR(0x4862ed);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B4862f0:{NFSU2_TR(0x4862f0);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B4862f6:{NFSU2_TR(0x4862f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4862f7:{NFSU2_TR(0x4862f7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4862f9:{NFSU2_TR(0x4862f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4862feull));
TAIL_STATIC(0x440820u,440);
}
B4862fe:L4862fe:{c.instructions+=3;NFSU2_TR(0x4862fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B486301:{NFSU2_TR(0x486301);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B486303:{NFSU2_TR(0x486303);
if(r1(R+518)){{goto L48630e;}}
}
B486305:L486305:{c.instructions+=2;NFSU2_TR(0x486305);
__builtin_memmove((R+4),(R+0),4);
}
B486307:{NFSU2_TR(0x486307);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48630cull));
TAIL_STATIC(0x45b470u,45b);
}
B48630c:L48630c:{c.instructions+=1;NFSU2_TR(0x48630c);
{goto L486310;}
}
B48630e:L48630e:{c.instructions+=1;NFSU2_TR(0x48630e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B486310:L486310:{c.instructions+=4;NFSU2_TR(0x486310);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486313:{NFSU2_TR(0x486313);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B486318:{NFSU2_TR(0x486318);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486319:{NFSU2_TR(0x486319);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48631eull));
TAIL_STATIC(0x43e910u,43e);
}
B48631e:L48631e:{c.instructions+=3;NFSU2_TR(0x48631e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B486321:{NFSU2_TR(0x486321);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x530ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x530ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B486326:{NFSU2_TR(0x486326);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L486362;}}
}
B486328:L486328:{c.instructions+=6;NFSU2_TR(0x486328);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B48632e:{NFSU2_TR(0x48632e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B486331:{NFSU2_TR(0x486331);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B486337:{NFSU2_TR(0x486337);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486338:{NFSU2_TR(0x486338);
u8 U[4];
w4(U+0,u32(0x130ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48633d:{NFSU2_TR(0x48633d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486342ull));
TAIL_STATIC(0x440820u,440);
}
B486342:L486342:{c.instructions+=3;NFSU2_TR(0x486342);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B486345:{NFSU2_TR(0x486345);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B486347:{NFSU2_TR(0x486347);
if(r1(R+518)){{goto L486362;}}
}
B486349:L486349:{c.instructions+=2;NFSU2_TR(0x486349);
__builtin_memmove((R+4),(R+0),4);
}
B48634b:{NFSU2_TR(0x48634b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486350ull));
TAIL_STATIC(0x485c00u,485);
}
B486350:L486350:{c.instructions+=5;NFSU2_TR(0x486350);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486353:{NFSU2_TR(0x486353);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B486355:{NFSU2_TR(0x486355);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486356:{NFSU2_TR(0x486356);
__builtin_memmove((R+4),(R+0),4);
}
B486358:{NFSU2_TR(0x486358);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48635bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48635b:L48635b:{c.instructions+=5;NFSU2_TR(0x48635b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48635c:{NFSU2_TR(0x48635c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48635d:{NFSU2_TR(0x48635d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48635e:{NFSU2_TR(0x48635e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48635f:{NFSU2_TR(0x48635f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486362:L486362:{c.instructions+=6;NFSU2_TR(0x486362);
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
B486364:{NFSU2_TR(0x486364);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486367:{NFSU2_TR(0x486367);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B486369:{NFSU2_TR(0x486369);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48636a:{NFSU2_TR(0x48636a);
__builtin_memmove((R+4),(R+0),4);
}
B48636c:{NFSU2_TR(0x48636c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48636full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48636f:L48636f:{c.instructions+=5;NFSU2_TR(0x48636f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B486370:{NFSU2_TR(0x486370);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B486371:{NFSU2_TR(0x486371);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B486372:{NFSU2_TR(0x486372);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B486373:{NFSU2_TR(0x486373);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486376:L486376:{c.instructions+=4;NFSU2_TR(0x486376);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486379:{NFSU2_TR(0x486379);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B48637e:{NFSU2_TR(0x48637e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48637f:{NFSU2_TR(0x48637f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486384ull));
TAIL_STATIC(0x43e910u,43e);
}
B486384:L486384:{c.instructions+=3;NFSU2_TR(0x486384);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B486387:{NFSU2_TR(0x486387);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x404ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x404ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B48638c:{NFSU2_TR(0x48638c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4863b5;}}
}
B48638e:L48638e:{c.instructions+=6;NFSU2_TR(0x48638e);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B486394:{NFSU2_TR(0x486394);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B486397:{NFSU2_TR(0x486397);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B48639d:{NFSU2_TR(0x48639d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48639e:{NFSU2_TR(0x48639e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4863a0:{NFSU2_TR(0x4863a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4863a5ull));
TAIL_STATIC(0x440820u,440);
}
B4863a5:L4863a5:{c.instructions+=3;NFSU2_TR(0x4863a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4863a8:{NFSU2_TR(0x4863a8);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B4863aa:{NFSU2_TR(0x4863aa);
if(r1(R+518)){{goto L4863b5;}}
}
B4863ac:L4863ac:{c.instructions+=2;NFSU2_TR(0x4863ac);
__builtin_memmove((R+4),(R+0),4);
}
B4863ae:{NFSU2_TR(0x4863ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4863b3ull));
TAIL_STATIC(0x45b470u,45b);
}
B4863b3:L4863b3:{c.instructions+=1;NFSU2_TR(0x4863b3);
{goto L4863b7;}
}
B4863b5:L4863b5:{c.instructions+=1;NFSU2_TR(0x4863b5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4863b7:L4863b7:{c.instructions+=4;NFSU2_TR(0x4863b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4863ba:{NFSU2_TR(0x4863ba);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B4863c0:{NFSU2_TR(0x4863c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4863c1:{NFSU2_TR(0x4863c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4863c6ull));
TAIL_STATIC(0x43e910u,43e);
}
B4863c6:L4863c6:{c.instructions+=3;NFSU2_TR(0x4863c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4863c9:{NFSU2_TR(0x4863c9);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x530ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x530ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4863ce:{NFSU2_TR(0x4863ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4863f8;}}
}
B4863d0:L4863d0:{c.instructions+=6;NFSU2_TR(0x4863d0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4863d5:{NFSU2_TR(0x4863d5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B4863d8:{NFSU2_TR(0x4863d8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B4863dd:{NFSU2_TR(0x4863dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4863de:{NFSU2_TR(0x4863de);
u8 U[4];
w4(U+0,u32(0x130ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4863e3:{NFSU2_TR(0x4863e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4863e8ull));
TAIL_STATIC(0x440820u,440);
}
B4863e8:L4863e8:{c.instructions+=3;NFSU2_TR(0x4863e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4863eb:{NFSU2_TR(0x4863eb);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4863ed:{NFSU2_TR(0x4863ed);
if(r1(R+518)){{goto L4863f8;}}
}
B4863ef:L4863ef:{c.instructions+=2;NFSU2_TR(0x4863ef);
__builtin_memmove((R+4),(R+0),4);
}
B4863f1:{NFSU2_TR(0x4863f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4863f6ull));
TAIL_STATIC(0x485c00u,485);
}
B4863f6:L4863f6:{c.instructions+=1;NFSU2_TR(0x4863f6);
{goto L4863fa;}
}
B4863f8:L4863f8:{c.instructions+=1;NFSU2_TR(0x4863f8);
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
B4863fa:L4863fa:{c.instructions+=5;NFSU2_TR(0x4863fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4863fd:{NFSU2_TR(0x4863fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4863ff:{NFSU2_TR(0x4863ff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486400:{NFSU2_TR(0x486400);
__builtin_memmove((R+4),(R+0),4);
}
B486402:{NFSU2_TR(0x486402);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486405ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B486405:L486405:{c.instructions+=3;NFSU2_TR(0x486405);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B48640a:{NFSU2_TR(0x48640a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48640b:{NFSU2_TR(0x48640b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486410ull));
TAIL_STATIC(0x43e910u,43e);
}
B486410:L486410:{c.instructions+=3;NFSU2_TR(0x486410);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B486413:{NFSU2_TR(0x486413);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x418ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x418ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B486418:{NFSU2_TR(0x486418);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L486441;}}
}
B48641a:L48641a:{c.instructions+=6;NFSU2_TR(0x48641a);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B486420:{NFSU2_TR(0x486420);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B486423:{NFSU2_TR(0x486423);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B486429:{NFSU2_TR(0x486429);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48642a:{NFSU2_TR(0x48642a);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48642c:{NFSU2_TR(0x48642c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486431ull));
TAIL_STATIC(0x440820u,440);
}
B486431:L486431:{c.instructions+=3;NFSU2_TR(0x486431);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B486434:{NFSU2_TR(0x486434);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B486436:{NFSU2_TR(0x486436);
if(r1(R+518)){{goto L486441;}}
}
B486438:L486438:{c.instructions+=2;NFSU2_TR(0x486438);
__builtin_memmove((R+4),(R+0),4);
}
B48643a:{NFSU2_TR(0x48643a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48643full));
TAIL_STATIC(0x46ccb0u,46c);
}
B48643f:L48643f:{c.instructions+=1;NFSU2_TR(0x48643f);
{goto L486443;}
}
B486441:L486441:{c.instructions+=1;NFSU2_TR(0x486441);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B486443:L486443:{c.instructions+=5;NFSU2_TR(0x486443);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486446:{NFSU2_TR(0x486446);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486449:{NFSU2_TR(0x486449);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B48644f:{NFSU2_TR(0x48644f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486450:{NFSU2_TR(0x486450);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486455ull));
TAIL_STATIC(0x43e910u,43e);
}
B486455:L486455:{c.instructions+=3;NFSU2_TR(0x486455);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B486458:{NFSU2_TR(0x486458);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x52cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x52cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B48645d:{NFSU2_TR(0x48645d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L486487;}}
}
B48645f:L48645f:{c.instructions+=6;NFSU2_TR(0x48645f);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B486464:{NFSU2_TR(0x486464);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B486467:{NFSU2_TR(0x486467);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B48646c:{NFSU2_TR(0x48646c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48646d:{NFSU2_TR(0x48646d);
u8 U[4];
w4(U+0,u32(0x12cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486472:{NFSU2_TR(0x486472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486477ull));
TAIL_STATIC(0x440820u,440);
}
B486477:L486477:{c.instructions+=3;NFSU2_TR(0x486477);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48647a:{NFSU2_TR(0x48647a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48647c:{NFSU2_TR(0x48647c);
if(r1(R+518)){{goto L486487;}}
}
B48647e:L48647e:{c.instructions+=2;NFSU2_TR(0x48647e);
__builtin_memmove((R+4),(R+0),4);
}
B486480:{NFSU2_TR(0x486480);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486485ull));
TAIL_STATIC(0x485d50u,485);
}
B486485:L486485:{c.instructions+=1;NFSU2_TR(0x486485);
{goto L486489;}
}
B486487:L486487:{c.instructions+=1;NFSU2_TR(0x486487);
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
B486489:L486489:{c.instructions+=9;NFSU2_TR(0x486489);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48648a:{NFSU2_TR(0x48648a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48648d:{NFSU2_TR(0x48648d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48648f:{NFSU2_TR(0x48648f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B486490:{NFSU2_TR(0x486490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B486491:{NFSU2_TR(0x486491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B486492:{NFSU2_TR(0x486492);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48649a:{NFSU2_TR(0x48649a);
__builtin_memmove((R+4),(R+0),4);
}
B48649c:{NFSU2_TR(0x48649c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4864a0:L4864a0:{c.instructions+=3;NFSU2_TR(0x4864a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4864a1:{NFSU2_TR(0x4864a1);
__builtin_memmove((R+24),(R+4),4);
}
B4864a3:{NFSU2_TR(0x4864a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4864a8ull));
TAIL_STATIC(0x485b50u,485);
}
B4864a8:L4864a8:{c.instructions+=2;NFSU2_TR(0x4864a8);
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
B4864ad:{NFSU2_TR(0x4864ad);
if(r1(R+518)){{goto L4864b8;}}
}
B4864af:L4864af:{c.instructions+=2;NFSU2_TR(0x4864af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4864b0:{NFSU2_TR(0x4864b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4864b5ull));
TAIL_STATIC(0x440540u,440);
}
B4864b5:L4864b5:{c.instructions+=1;NFSU2_TR(0x4864b5);
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
B4864b8:L4864b8:{c.instructions+=3;NFSU2_TR(0x4864b8);
__builtin_memmove((R+0),(R+24),4);
}
B4864ba:{NFSU2_TR(0x4864ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4864bb:{NFSU2_TR(0x4864bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4864c0:L4864c0:{c.instructions+=3;NFSU2_TR(0x4864c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4864c1:{NFSU2_TR(0x4864c1);
__builtin_memmove((R+24),(R+4),4);
}
B4864c3:{NFSU2_TR(0x4864c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4864c8ull));
TAIL_STATIC(0x485c80u,485);
}
B4864c8:L4864c8:{c.instructions+=2;NFSU2_TR(0x4864c8);
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
B4864cd:{NFSU2_TR(0x4864cd);
if(r1(R+518)){{goto L4864d8;}}
}
B4864cf:L4864cf:{c.instructions+=2;NFSU2_TR(0x4864cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4864d0:{NFSU2_TR(0x4864d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4864d5ull));
TAIL_STATIC(0x440540u,440);
}
B4864d5:L4864d5:{c.instructions+=1;NFSU2_TR(0x4864d5);
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
B4864d8:L4864d8:{c.instructions+=3;NFSU2_TR(0x4864d8);
__builtin_memmove((R+0),(R+24),4);
}
B4864da:{NFSU2_TR(0x4864da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4864db:{NFSU2_TR(0x4864db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4864e0:L4864e0:{c.instructions+=3;NFSU2_TR(0x4864e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4864e1:{NFSU2_TR(0x4864e1);
__builtin_memmove((R+24),(R+4),4);
}
B4864e3:{NFSU2_TR(0x4864e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4864e8ull));
TAIL_STATIC(0x485dd0u,485);
}
B4864e8:L4864e8:{c.instructions+=2;NFSU2_TR(0x4864e8);
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
B4864ed:{NFSU2_TR(0x4864ed);
if(r1(R+518)){{goto L4864f8;}}
}
B4864ef:L4864ef:{c.instructions+=2;NFSU2_TR(0x4864ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4864f0:{NFSU2_TR(0x4864f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4864f5ull));
TAIL_STATIC(0x440540u,440);
}
B4864f5:L4864f5:{c.instructions+=1;NFSU2_TR(0x4864f5);
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
B4864f8:L4864f8:{c.instructions+=3;NFSU2_TR(0x4864f8);
__builtin_memmove((R+0),(R+24),4);
}
B4864fa:{NFSU2_TR(0x4864fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4864fb:{NFSU2_TR(0x4864fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486500:L486500:{c.instructions+=4;NFSU2_TR(0x486500);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486504:{NFSU2_TR(0x486504);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486507:{NFSU2_TR(0x486507);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486508:{NFSU2_TR(0x486508);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48650dull));
TAIL_STATIC(0x485fa0u,485);
}
B48650d:L48650d:{c.instructions+=1;NFSU2_TR(0x48650d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486510:L486510:{c.instructions+=8;NFSU2_TR(0x486510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B486513:{NFSU2_TR(0x486513);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486514:{NFSU2_TR(0x486514);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486515:{NFSU2_TR(0x486515);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B486519:{NFSU2_TR(0x486519);
u8 U[4];
w4(U+0,u32(0x78c20cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48651e:{NFSU2_TR(0x48651e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48651f:{NFSU2_TR(0x48651f);
__builtin_memmove((R+24),(R+4),4);
}
B486521:{NFSU2_TR(0x486521);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486526ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B486526:L486526:{c.instructions+=3;NFSU2_TR(0x486526);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48652a:{NFSU2_TR(0x48652a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48652b:{NFSU2_TR(0x48652b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486530ull));
TAIL_STATIC(0x458890u,458);
}
B486530:L486530:{c.instructions+=3;NFSU2_TR(0x486530);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486532:{NFSU2_TR(0x486532);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486534:{NFSU2_TR(0x486534);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486539ull));
TAIL_STATIC(0x6f6628u,6f6);
}
B486539:L486539:{c.instructions+=2;NFSU2_TR(0x486539);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48653a:{NFSU2_TR(0x48653a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48653full));
TAIL_STATIC(0x575620u,575);
}
B48653f:L48653f:{c.instructions+=5;NFSU2_TR(0x48653f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486540:{NFSU2_TR(0x486540);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486542:{NFSU2_TR(0x486542);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486544:{NFSU2_TR(0x486544);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486547:{NFSU2_TR(0x486547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48654cull));
TAIL_STATIC(0x6f6750u,6f6);
}
B48654c:L48654c:{c.instructions+=3;NFSU2_TR(0x48654c);
__builtin_memmove((R+28),(R+0),4);
}
B48654e:{NFSU2_TR(0x48654e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48654f:{NFSU2_TR(0x48654f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486554ull));
TAIL_STATIC(0x6f7266u,6f7);
}
B486554:L486554:{c.instructions+=6;NFSU2_TR(0x486554);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B486557:{NFSU2_TR(0x486557);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48655a:{NFSU2_TR(0x48655a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48655c:{NFSU2_TR(0x48655c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48655e:{NFSU2_TR(0x48655e);
__builtin_memmove((R+4),(R+28),4);
}
B486560:{NFSU2_TR(0x486560);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486563ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B486563:L486563:{c.instructions+=2;NFSU2_TR(0x486563);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486564:{NFSU2_TR(0x486564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486569ull));
TAIL_STATIC(0x6f6e7au,6f6);
}
B486569:L486569:{c.instructions+=6;NFSU2_TR(0x486569);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48656c:{NFSU2_TR(0x48656c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48656e:{NFSU2_TR(0x48656e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B486572:{NFSU2_TR(0x486572);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486573:{NFSU2_TR(0x486573);
__builtin_memmove((R+4),(R+28),4);
}
B486575:{NFSU2_TR(0x486575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48657aull));
TAIL_STATIC(0x6f67d7u,6f6);
}
B48657a:L48657a:{c.instructions+=5;NFSU2_TR(0x48657a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48657d:{NFSU2_TR(0x48657d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486580:{NFSU2_TR(0x486580);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B486585:{NFSU2_TR(0x486585);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B486587:{NFSU2_TR(0x486587);
if(r1(R+518)){{goto L486645;}}
}
B48658d:L48658d:{c.instructions+=3;NFSU2_TR(0x48658d);
__builtin_memmove((R+0),gp(0x7faaac),4);
}
B486592:{NFSU2_TR(0x486592);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B486594:{NFSU2_TR(0x486594);
if(r1(R+518)){{goto L4865cb;}}
}
B486596:L486596:{c.instructions+=3;NFSU2_TR(0x486596);
u8 U[4];
w4(U+0,u32(0x78c1f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48659b:{NFSU2_TR(0x48659b);
u8 U[4];
w4(U+0,u32(0xd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4865a0:{NFSU2_TR(0x4865a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4865a5ull));
TAIL_STATIC(0x457aa0u,457);
}
B4865a5:L4865a5:{c.instructions+=3;NFSU2_TR(0x4865a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4865a8:{NFSU2_TR(0x4865a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4865aa:{NFSU2_TR(0x4865aa);
if(r1(R+518)){{goto L4865b5;}}
}
B4865ac:L4865ac:{c.instructions+=2;NFSU2_TR(0x4865ac);
__builtin_memmove((R+4),(R+0),4);
}
B4865ae:{NFSU2_TR(0x4865ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4865b3ull));
TAIL_STATIC(0x459b80u,459);
}
B4865b3:L4865b3:{c.instructions+=1;NFSU2_TR(0x4865b3);
{goto L4865b7;}
}
B4865b5:L4865b5:{c.instructions+=1;NFSU2_TR(0x4865b5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4865b7:L4865b7:{c.instructions+=5;NFSU2_TR(0x4865b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4865bd:{NFSU2_TR(0x4865bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4865be:{NFSU2_TR(0x4865be);
__builtin_memmove((R+4),(R+0),4);
}
B4865c0:{NFSU2_TR(0x4865c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4865c6:{NFSU2_TR(0x4865c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4865cbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486160u);}goto L486160;}
}
B4865cb:L4865cb:{c.instructions+=3;NFSU2_TR(0x4865cb);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B4865d1:{NFSU2_TR(0x4865d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4865d2:{NFSU2_TR(0x4865d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4865d7ull));
TAIL_STATIC(0x43e910u,43e);
}
B4865d7:L4865d7:{c.instructions+=3;NFSU2_TR(0x4865d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4865da:{NFSU2_TR(0x4865da);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4a8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4a8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4865df:{NFSU2_TR(0x4865df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L486609;}}
}
B4865e1:L4865e1:{c.instructions+=6;NFSU2_TR(0x4865e1);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4865e6:{NFSU2_TR(0x4865e6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B4865e9:{NFSU2_TR(0x4865e9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B4865ee:{NFSU2_TR(0x4865ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4865ef:{NFSU2_TR(0x4865ef);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4865f4:{NFSU2_TR(0x4865f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4865f9ull));
TAIL_STATIC(0x440820u,440);
}
B4865f9:L4865f9:{c.instructions+=3;NFSU2_TR(0x4865f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4865fc:{NFSU2_TR(0x4865fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4865fe:{NFSU2_TR(0x4865fe);
if(r1(R+518)){{goto L486609;}}
}
B486600:L486600:{c.instructions+=2;NFSU2_TR(0x486600);
__builtin_memmove((R+4),(R+0),4);
}
B486602:{NFSU2_TR(0x486602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486607ull));
TAIL_STATIC(0x458960u,458);
}
B486607:L486607:{c.instructions+=1;NFSU2_TR(0x486607);
{goto L48660b;}
}
B486609:L486609:{c.instructions+=1;NFSU2_TR(0x486609);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48660b:L48660b:{c.instructions+=5;NFSU2_TR(0x48660b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48660e:{NFSU2_TR(0x48660e);
__builtin_memmove(gp(0x82b068),(R+0),4);
}
B486613:{NFSU2_TR(0x486613);
s4(0x82b918,u32(0x0ull));
}
B48661d:{NFSU2_TR(0x48661d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B48661f:{NFSU2_TR(0x48661f);
}
B486620:L486620:{c.instructions+=4;NFSU2_TR(0x486620);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486623:{NFSU2_TR(0x486623);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486625:{NFSU2_TR(0x486625);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486626:{NFSU2_TR(0x486626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48662bull));
TAIL_STATIC(0x469200u,469);
}
B48662b:L48662b:{c.instructions+=3;NFSU2_TR(0x48662b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B48662c:{NFSU2_TR(0x48662c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48662f:{NFSU2_TR(0x48662f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486620u);}goto L486620;}}
}
B486631:L486631:{c.instructions+=1;NFSU2_TR(0x486631);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486636ull));
TAIL_STATIC(0x4835f0u,483);
}
B486636:L486636:{c.instructions+=1;NFSU2_TR(0x486636);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48663bull));
TAIL_STATIC(0x47fb80u,47f);
}
B48663b:L48663b:{c.instructions+=4;NFSU2_TR(0x48663b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48663c:{NFSU2_TR(0x48663c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48663d:{NFSU2_TR(0x48663d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B486640:{NFSU2_TR(0x486640);
TAIL_STATIC(0x47f830u,47f);
}
B486645:L486645:{c.instructions+=4;NFSU2_TR(0x486645);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B486646:{NFSU2_TR(0x486646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B486647:{NFSU2_TR(0x486647);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48664a:{NFSU2_TR(0x48664a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486650:L486650:{c.instructions+=12;NFSU2_TR(0x486650);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486652:{NFSU2_TR(0x486652);
u8 U[4];
w4(U+0,u32(0x772794ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486657:{NFSU2_TR(0x486657);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48665d:{NFSU2_TR(0x48665d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48665e:{NFSU2_TR(0x48665e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486665:{NFSU2_TR(0x486665);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486666:{NFSU2_TR(0x486666);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486667:{NFSU2_TR(0x486667);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486668:{NFSU2_TR(0x486668);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B48666a:{NFSU2_TR(0x48666a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48666b:{NFSU2_TR(0x48666b);
__builtin_memmove((R+24),(R+4),4);
}
B48666d:{NFSU2_TR(0x48666d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486672ull));
TAIL_STATIC(0x50d510u,50d);
}
B486672:L486672:{c.instructions+=4;NFSU2_TR(0x486672);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B486677:{NFSU2_TR(0x486677);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48667a:{NFSU2_TR(0x48667a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48667c:{NFSU2_TR(0x48667c);
if(r1(R+518)){{goto L4868fd;}}
}
B486682:L486682:{c.instructions+=5;NFSU2_TR(0x486682);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486684:{NFSU2_TR(0x486684);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486687:{NFSU2_TR(0x486687);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48668a:{NFSU2_TR(0x48668a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48668d:{NFSU2_TR(0x48668d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486692ull));
TAIL_STATIC(0x575620u,575);
}
B486692:L486692:{c.instructions+=3;NFSU2_TR(0x486692);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B486695:{NFSU2_TR(0x486695);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B486697:{NFSU2_TR(0x486697);
if(r1(R+518)){{goto L4866aa;}}
}
B486699:L486699:{c.instructions+=5;NFSU2_TR(0x486699);
u8 U[4];
w4(U+0,u32(0x789d24ull));
s4(u32(r4(R+0)),r4(U+0));
}
B48669f:{NFSU2_TR(0x48669f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4866a2:{NFSU2_TR(0x4866a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4866a5:{NFSU2_TR(0x4866a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4866a8:{NFSU2_TR(0x4866a8);
{goto L4866ac;}
}
B4866aa:L4866aa:{c.instructions+=1;NFSU2_TR(0x4866aa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4866ac:L4866ac:{c.instructions+=3;NFSU2_TR(0x4866ac);
u8 U[4];
w4(U+0,u32(0xf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4866b1:{NFSU2_TR(0x4866b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4866b4:{NFSU2_TR(0x4866b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4866b9ull));
TAIL_STATIC(0x575620u,575);
}
B4866b9:L4866b9:{c.instructions+=5;NFSU2_TR(0x4866b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4866bc:{NFSU2_TR(0x4866bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4866c0:{NFSU2_TR(0x4866c0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4866c2:{NFSU2_TR(0x4866c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4866c6:{NFSU2_TR(0x4866c6);
if(r1(R+518)){{goto L4866d1;}}
}
B4866c8:L4866c8:{c.instructions+=2;NFSU2_TR(0x4866c8);
__builtin_memmove((R+4),(R+0),4);
}
B4866ca:{NFSU2_TR(0x4866ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4866cfull));
TAIL_STATIC(0x469330u,469);
}
B4866cf:L4866cf:{c.instructions+=1;NFSU2_TR(0x4866cf);
{goto L4866d3;}
}
B4866d1:L4866d1:{c.instructions+=1;NFSU2_TR(0x4866d1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4866d3:L4866d3:{c.instructions+=7;NFSU2_TR(0x4866d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4866d6:{NFSU2_TR(0x4866d6);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B4866dc:{NFSU2_TR(0x4866dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4866dd:{NFSU2_TR(0x4866dd);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B4866e0:{NFSU2_TR(0x4866e0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4866e2:{NFSU2_TR(0x4866e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4866e6:{NFSU2_TR(0x4866e6);
if(r1(R+518)){{goto L4866ef;}}
}
B4866e8:L4866e8:{c.instructions+=2;NFSU2_TR(0x4866e8);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4866ea:{NFSU2_TR(0x4866ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4866efull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486220u);}goto L486220;}
}
B4866ef:L4866ef:{c.instructions+=2;NFSU2_TR(0x4866ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4866f0:{NFSU2_TR(0x4866f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4866f5ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B4866f5:L4866f5:{c.instructions+=6;NFSU2_TR(0x4866f5);
__builtin_memmove(gp(0x82b8b4),(R+0),4);
}
B4866fa:{NFSU2_TR(0x4866fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486700:{NFSU2_TR(0x486700);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B486703:{NFSU2_TR(0x486703);
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
B486705:{NFSU2_TR(0x486705);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x83aa28ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48670c:{NFSU2_TR(0x48670c);
if(r1(R+518)){{goto L486725;}}
}
B48670e:L48670e:{c.instructions+=4;NFSU2_TR(0x48670e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486714:{NFSU2_TR(0x486714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B486716:{NFSU2_TR(0x486716);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486717:{NFSU2_TR(0x486717);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48671aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48671a:L48671a:{c.instructions+=3;NFSU2_TR(0x48671a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486720:{NFSU2_TR(0x486720);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B486722:{NFSU2_TR(0x486722);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486725ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B486725:L486725:{c.instructions+=4;NFSU2_TR(0x486725);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48672b:{NFSU2_TR(0x48672b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48672e:{NFSU2_TR(0x48672e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B486730:{NFSU2_TR(0x486730);
if(r1(R+518)){{goto L486737;}}
}
B486732:L486732:{c.instructions+=1;NFSU2_TR(0x486732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486737ull));
TAIL_STATIC(0x485e90u,485);
}
B486737:L486737:{c.instructions+=113;NFSU2_TR(0x486737);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48673a:{NFSU2_TR(0x48673a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B48673d:{NFSU2_TR(0x48673d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b098ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486743:{NFSU2_TR(0x486743);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486746:{NFSU2_TR(0x486746);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B486749:{NFSU2_TR(0x486749);
w4(R+4,u32(0x1ull));
}
B48674e:{NFSU2_TR(0x48674e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b09cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486754:{NFSU2_TR(0x486754);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486757:{NFSU2_TR(0x486757);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B48675a:{NFSU2_TR(0x48675a);
__builtin_memmove((R+8),gp(0x7ed190),4);
}
B486760:{NFSU2_TR(0x486760);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486766:{NFSU2_TR(0x486766);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486769:{NFSU2_TR(0x486769);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B48676c:{NFSU2_TR(0x48676c);
__builtin_memmove((R+8),gp(0x7ed16c),4);
}
B486772:{NFSU2_TR(0x486772);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486778:{NFSU2_TR(0x486778);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48677b:{NFSU2_TR(0x48677b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B48677e:{NFSU2_TR(0x48677e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486784:{NFSU2_TR(0x486784);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486787:{NFSU2_TR(0x486787);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B48678a:{NFSU2_TR(0x48678a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486790:{NFSU2_TR(0x486790);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486793:{NFSU2_TR(0x486793);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B486796:{NFSU2_TR(0x486796);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48679c:{NFSU2_TR(0x48679c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48679f:{NFSU2_TR(0x48679f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4867a2:{NFSU2_TR(0x4867a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4867a8:{NFSU2_TR(0x4867a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4867ab:{NFSU2_TR(0x4867ab);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4867ae:{NFSU2_TR(0x4867ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4867b4:{NFSU2_TR(0x4867b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4867b7:{NFSU2_TR(0x4867b7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4867ba:{NFSU2_TR(0x4867ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4867c0:{NFSU2_TR(0x4867c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4867c3:{NFSU2_TR(0x4867c3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4867c6:{NFSU2_TR(0x4867c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0c0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4867cc:{NFSU2_TR(0x4867cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4867cf:{NFSU2_TR(0x4867cf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4867d0:{NFSU2_TR(0x4867d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4867d3:{NFSU2_TR(0x4867d3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4867d6:{NFSU2_TR(0x4867d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b098ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4867dc:{NFSU2_TR(0x4867dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4867df:{NFSU2_TR(0x4867df);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4867e2:{NFSU2_TR(0x4867e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b09cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4867e8:{NFSU2_TR(0x4867e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4867eb:{NFSU2_TR(0x4867eb);
__builtin_memmove((R+8),gp(0x7ed194),4);
}
B4867f1:{NFSU2_TR(0x4867f1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4867f4:{NFSU2_TR(0x4867f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4867fa:{NFSU2_TR(0x4867fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4867fd:{NFSU2_TR(0x4867fd);
__builtin_memmove((R+8),gp(0x7ed170),4);
}
B486803:{NFSU2_TR(0x486803);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B486806:{NFSU2_TR(0x486806);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48680c:{NFSU2_TR(0x48680c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48680f:{NFSU2_TR(0x48680f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B486812:{NFSU2_TR(0x486812);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486818:{NFSU2_TR(0x486818);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48681b:{NFSU2_TR(0x48681b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B48681e:{NFSU2_TR(0x48681e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486824:{NFSU2_TR(0x486824);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486827:{NFSU2_TR(0x486827);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B48682a:{NFSU2_TR(0x48682a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486830:{NFSU2_TR(0x486830);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486833:{NFSU2_TR(0x486833);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B486836:{NFSU2_TR(0x486836);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48683c:{NFSU2_TR(0x48683c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48683f:{NFSU2_TR(0x48683f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B486842:{NFSU2_TR(0x486842);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486848:{NFSU2_TR(0x486848);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48684b:{NFSU2_TR(0x48684b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B48684e:{NFSU2_TR(0x48684e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486854:{NFSU2_TR(0x486854);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486857:{NFSU2_TR(0x486857);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B48685a:{NFSU2_TR(0x48685a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0c0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486860:{NFSU2_TR(0x486860);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486863:{NFSU2_TR(0x486863);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B486864:{NFSU2_TR(0x486864);
__builtin_memmove((R+0),(R+8),4);
}
B486866:{NFSU2_TR(0x486866);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B486869:{NFSU2_TR(0x486869);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48686c:{NFSU2_TR(0x48686c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b098ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B486876:{NFSU2_TR(0x486876);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486879:{NFSU2_TR(0x486879);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B48687c:{NFSU2_TR(0x48687c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b09cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486882:{NFSU2_TR(0x486882);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486885:{NFSU2_TR(0x486885);
__builtin_memmove((R+4),gp(0x7ed1a0),4);
}
B48688b:{NFSU2_TR(0x48688b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B48688e:{NFSU2_TR(0x48688e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486894:{NFSU2_TR(0x486894);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486897:{NFSU2_TR(0x486897);
__builtin_memmove((R+0),gp(0x7ed178),4);
}
B48689c:{NFSU2_TR(0x48689c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B48689f:{NFSU2_TR(0x48689f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4868a5:{NFSU2_TR(0x4868a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4868a8:{NFSU2_TR(0x4868a8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4868ab:{NFSU2_TR(0x4868ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4868b1:{NFSU2_TR(0x4868b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4868b4:{NFSU2_TR(0x4868b4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4868b7:{NFSU2_TR(0x4868b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4868bd:{NFSU2_TR(0x4868bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4868c0:{NFSU2_TR(0x4868c0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4868c3:{NFSU2_TR(0x4868c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4868c9:{NFSU2_TR(0x4868c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4868cc:{NFSU2_TR(0x4868cc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4868cf:{NFSU2_TR(0x4868cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0b4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4868d5:{NFSU2_TR(0x4868d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4868d8:{NFSU2_TR(0x4868d8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4868db:{NFSU2_TR(0x4868db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4868e1:{NFSU2_TR(0x4868e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4868e4:{NFSU2_TR(0x4868e4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4868e7:{NFSU2_TR(0x4868e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4868ed:{NFSU2_TR(0x4868ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4868f0:{NFSU2_TR(0x4868f0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4868f3:{NFSU2_TR(0x4868f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82b0c0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4868f9:{NFSU2_TR(0x4868f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4868fc:{NFSU2_TR(0x4868fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4868fd:L4868fd:{c.instructions+=6;NFSU2_TR(0x4868fd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486901:{NFSU2_TR(0x486901);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B486902:{NFSU2_TR(0x486902);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B486903:{NFSU2_TR(0x486903);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48690a:{NFSU2_TR(0x48690a);
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
B48690d:{NFSU2_TR(0x48690d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486910:L486910:{c.instructions+=2;NFSU2_TR(0x486910);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B486916:{NFSU2_TR(0x486916);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486510u);}goto L486510;}
}
B486920:L486920:{c.instructions+=6;NFSU2_TR(0x486920);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486921:{NFSU2_TR(0x486921);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486922:{NFSU2_TR(0x486922);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486923:{NFSU2_TR(0x486923);
u8 U[4];
w4(U+0,u32(0xb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486928:{NFSU2_TR(0x486928);
__builtin_memmove((R+24),(R+4),4);
}
B48692a:{NFSU2_TR(0x48692a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48692full));
TAIL_STATIC(0x575620u,575);
}
B48692f:L48692f:{c.instructions+=3;NFSU2_TR(0x48692f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B486932:{NFSU2_TR(0x486932);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B486934:{NFSU2_TR(0x486934);
if(r1(R+518)){{goto L48694c;}}
}
B486936:L486936:{c.instructions+=4;NFSU2_TR(0x486936);
u8 U[4];
w4(U+0,u32(0x78a600ull));
s4(u32(r4(R+0)),r4(U+0));
}
B48693c:{NFSU2_TR(0x48693c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B486943:{NFSU2_TR(0x486943);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48694a:{NFSU2_TR(0x48694a);
{goto L48694e;}
}
B48694c:L48694c:{c.instructions+=1;NFSU2_TR(0x48694c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48694e:L48694e:{c.instructions+=5;NFSU2_TR(0x48694e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486951:{NFSU2_TR(0x486951);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486955:{NFSU2_TR(0x486955);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ede4cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B48695c:{NFSU2_TR(0x48695c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48695d:{NFSU2_TR(0x48695d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486962ull));
TAIL_STATIC(0x57d900u,57d);
}
B486962:L486962:{c.instructions+=6;NFSU2_TR(0x486962);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B486965:{NFSU2_TR(0x486965);
__builtin_memmove((R+12),(R+0),4);
}
B486967:{NFSU2_TR(0x486967);
u8 U[4];
w4(U+0,u32(0x78c22cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48696c:{NFSU2_TR(0x48696c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48696d:{NFSU2_TR(0x48696d);
__builtin_memmove((R+4),(R+24),4);
}
B48696f:{NFSU2_TR(0x48696f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486974ull));
TAIL_STATIC(0x457a60u,457);
}
B486974:L486974:{c.instructions+=9;NFSU2_TR(0x486974);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486975:{NFSU2_TR(0x486975);
u8 U[4];
w4(U+0,u32(0x486500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48697a:{NFSU2_TR(0x48697a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48697b:{NFSU2_TR(0x48697b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48697d:{NFSU2_TR(0x48697d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48697e:{NFSU2_TR(0x48697e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48697f:{NFSU2_TR(0x48697f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486982:{NFSU2_TR(0x486982);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B486989:{NFSU2_TR(0x486989);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48698eull));
TAIL_STATIC(0x57b4a0u,57b);
}
B48698e:L48698e:{c.instructions+=5;NFSU2_TR(0x48698e);
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
B486991:{NFSU2_TR(0x486991);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B486992:{NFSU2_TR(0x486992);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B486993:{NFSU2_TR(0x486993);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B486994:{NFSU2_TR(0x486994);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4869a0:L4869a0:{c.instructions+=7;NFSU2_TR(0x4869a0);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B4869a5:{NFSU2_TR(0x4869a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4869a6:{NFSU2_TR(0x4869a6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4869a8:{NFSU2_TR(0x4869a8);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B4869aa:{NFSU2_TR(0x4869aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4869ab:{NFSU2_TR(0x4869ab);
__builtin_memmove((R+24),(R+4),4);
}
B4869ad:{NFSU2_TR(0x4869ad);
if(r1(R+518)){{goto L486b2d;}}
}
B4869b3:L4869b3:{c.instructions+=3;NFSU2_TR(0x4869b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4869b4:{NFSU2_TR(0x4869b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4869b7:{NFSU2_TR(0x4869b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4869bcull));
TAIL_STATIC(0x50d510u,50d);
}
B4869bc:L4869bc:{c.instructions+=2;NFSU2_TR(0x4869bc);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4869be:{NFSU2_TR(0x4869be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4869c3ull));
TAIL_STATIC(0x575620u,575);
}
B4869c3:L4869c3:{c.instructions+=3;NFSU2_TR(0x4869c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4869c6:{NFSU2_TR(0x4869c6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4869c8:{NFSU2_TR(0x4869c8);
if(r1(R+518)){{goto L4869db;}}
}
B4869ca:L4869ca:{c.instructions+=5;NFSU2_TR(0x4869ca);
u8 U[4];
w4(U+0,u32(0x789d24ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4869d0:{NFSU2_TR(0x4869d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4869d3:{NFSU2_TR(0x4869d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4869d6:{NFSU2_TR(0x4869d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4869d9:{NFSU2_TR(0x4869d9);
{goto L4869dd;}
}
B4869db:L4869db:{c.instructions+=1;NFSU2_TR(0x4869db);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4869dd:L4869dd:{c.instructions+=4;NFSU2_TR(0x4869dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4869e0:{NFSU2_TR(0x4869e0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4869e5:{NFSU2_TR(0x4869e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4869e6:{NFSU2_TR(0x4869e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4869ebull));
TAIL_STATIC(0x43e910u,43e);
}
B4869eb:L4869eb:{c.instructions+=3;NFSU2_TR(0x4869eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4869ee:{NFSU2_TR(0x4869ee);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x44cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x44cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4869f3:{NFSU2_TR(0x4869f3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L486a1c;}}
}
B4869f5:L4869f5:{c.instructions+=6;NFSU2_TR(0x4869f5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B4869fb:{NFSU2_TR(0x4869fb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B4869fe:{NFSU2_TR(0x4869fe);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B486a04:{NFSU2_TR(0x486a04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486a05:{NFSU2_TR(0x486a05);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486a07:{NFSU2_TR(0x486a07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486a0cull));
TAIL_STATIC(0x440820u,440);
}
B486a0c:L486a0c:{c.instructions+=3;NFSU2_TR(0x486a0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B486a0f:{NFSU2_TR(0x486a0f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B486a11:{NFSU2_TR(0x486a11);
if(r1(R+518)){{goto L486a1c;}}
}
B486a13:L486a13:{c.instructions+=2;NFSU2_TR(0x486a13);
__builtin_memmove((R+4),(R+0),4);
}
B486a15:{NFSU2_TR(0x486a15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486a1aull));
TAIL_STATIC(0x483f20u,483);
}
B486a1a:L486a1a:{c.instructions+=1;NFSU2_TR(0x486a1a);
{goto L486a1e;}
}
B486a1c:L486a1c:{c.instructions+=1;NFSU2_TR(0x486a1c);
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
B486a1e:L486a1e:{c.instructions+=5;NFSU2_TR(0x486a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486a21:{NFSU2_TR(0x486a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486a24:{NFSU2_TR(0x486a24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B486a26:{NFSU2_TR(0x486a26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486a27:{NFSU2_TR(0x486a27);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486a2aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B486a2a:L486a2a:{c.instructions+=2;NFSU2_TR(0x486a2a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486a2c:{NFSU2_TR(0x486a2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486a31ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B486a31:L486a31:{c.instructions+=9;NFSU2_TR(0x486a31);
__builtin_memmove(gp(0x82b8b4),(R+0),4);
}
B486a36:{NFSU2_TR(0x486a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486a39:{NFSU2_TR(0x486a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486a3c:{NFSU2_TR(0x486a3c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B486a3e:{NFSU2_TR(0x486a3e);
__builtin_memmove(gp(0x82b07c),(R+0),4);
}
B486a43:{NFSU2_TR(0x486a43);
__builtin_memmove(gp(0x82b080),(R+0),4);
}
B486a48:{NFSU2_TR(0x486a48);
__builtin_memmove(gp(0x82b084),(R+0),4);
}
B486a4d:{NFSU2_TR(0x486a4d);
w4(R+4,u32(0x160ull));
}
B486a52:{NFSU2_TR(0x486a52);
w4(R+28,u32(0x82b098ull));
}
B486a57:L486a57:{c.instructions+=1;NFSU2_TR(0x486a57);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L486a59;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486a57u);}goto L486a57;}
}
B486a59:L486a59:{c.instructions+=5;NFSU2_TR(0x486a59);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B486a5f:{NFSU2_TR(0x486a5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B486a62:{NFSU2_TR(0x486a62);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B486a64:{NFSU2_TR(0x486a64);
__builtin_memmove(gp(0x82b088),(R+0),4);
}
B486a69:{NFSU2_TR(0x486a69);
if(r1(R+518)){{goto L486a72;}}
}
B486a6b:L486a6b:{c.instructions+=2;NFSU2_TR(0x486a6b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486a6d:{NFSU2_TR(0x486a6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486a72ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486220u);}goto L486220;}
}
B486a72:L486a72:{c.instructions+=4;NFSU2_TR(0x486a72);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B486a78:{NFSU2_TR(0x486a78);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486a79:{NFSU2_TR(0x486a79);
__builtin_memmove((R+28),(R+12),4);
}
B486a7b:{NFSU2_TR(0x486a7b);
w4(R+20,u32(0x9ull));
}
B486a80:L486a80:{c.instructions+=3;NFSU2_TR(0x486a80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B486a82:{NFSU2_TR(0x486a82);
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
B486a84:{NFSU2_TR(0x486a84);
if(r1(R+518)){{goto L486a92;}}
}
B486a86:L486a86:{c.instructions+=4;NFSU2_TR(0x486a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486a8c:{NFSU2_TR(0x486a8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B486a8e:{NFSU2_TR(0x486a8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486a8f:{NFSU2_TR(0x486a8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486a92ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B486a92:L486a92:{c.instructions+=3;NFSU2_TR(0x486a92);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B486a95:{NFSU2_TR(0x486a95);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B486a96:{NFSU2_TR(0x486a96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486a80u);}goto L486a80;}}
}
B486a98:L486a98:{c.instructions+=3;NFSU2_TR(0x486a98);
__builtin_memmove((R+28),(R+12),4);
}
B486a9a:{NFSU2_TR(0x486a9a);
w4(R+12,u32(0x9ull));
}
B486a9f:{NFSU2_TR(0x486a9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B486aa0:L486aa0:{c.instructions+=3;NFSU2_TR(0x486aa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B486aa2:{NFSU2_TR(0x486aa2);
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
B486aa4:{NFSU2_TR(0x486aa4);
if(r1(R+518)){{goto L486aaf;}}
}
B486aa6:L486aa6:{c.instructions+=4;NFSU2_TR(0x486aa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B486aa8:{NFSU2_TR(0x486aa8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B486aab:{NFSU2_TR(0x486aab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486aac:{NFSU2_TR(0x486aac);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486aafull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B486aaf:L486aaf:{c.instructions+=3;NFSU2_TR(0x486aaf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B486ab2:{NFSU2_TR(0x486ab2);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B486ab3:{NFSU2_TR(0x486ab3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486aa0u);}goto L486aa0;}}
}
B486ab5:L486ab5:{c.instructions+=4;NFSU2_TR(0x486ab5);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B486aba:{NFSU2_TR(0x486aba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B486abc:{NFSU2_TR(0x486abc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B486abd:{NFSU2_TR(0x486abd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L486ac8;}}
}
B486abf:L486abf:{c.instructions+=3;NFSU2_TR(0x486abf);
__builtin_memmove((R+0),gp(0x890108),4);
}
B486ac4:{NFSU2_TR(0x486ac4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B486ac6:{NFSU2_TR(0x486ac6);
if(r1(R+518)){{goto L486adc;}}
}
B486ac8:L486ac8:{c.instructions+=4;NFSU2_TR(0x486ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486ace:{NFSU2_TR(0x486ace);
w4(R+0,u32(0x2ull));
}
B486ad3:{NFSU2_TR(0x486ad3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486ad4:{NFSU2_TR(0x486ad4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486ad9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486920u);}goto L486920;}
}
B486ad9:L486ad9:{c.instructions+=3;NFSU2_TR(0x486ad9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B486ada:{NFSU2_TR(0x486ada);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B486adb:{NFSU2_TR(0x486adb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486adc:L486adc:{c.instructions+=3;NFSU2_TR(0x486adc);
__builtin_memmove((R+0),gp(0x89e7e1),1);
}
B486ae1:{NFSU2_TR(0x486ae1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B486ae3:{NFSU2_TR(0x486ae3);
if(r1(R+518)){{goto L486af9;}}
}
B486ae5:L486ae5:{c.instructions+=4;NFSU2_TR(0x486ae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486aeb:{NFSU2_TR(0x486aeb);
w4(R+0,u32(0x3ull));
}
B486af0:{NFSU2_TR(0x486af0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486af1:{NFSU2_TR(0x486af1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486af6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486920u);}goto L486920;}
}
B486af6:L486af6:{c.instructions+=3;NFSU2_TR(0x486af6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B486af7:{NFSU2_TR(0x486af7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B486af8:{NFSU2_TR(0x486af8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486af9:L486af9:{c.instructions+=3;NFSU2_TR(0x486af9);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B486afe:{NFSU2_TR(0x486afe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B486b00:{NFSU2_TR(0x486b00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L486b0b;}}
}
B486b02:L486b02:{c.instructions+=3;NFSU2_TR(0x486b02);
__builtin_memmove((R+0),gp(0x890104),4);
}
B486b07:{NFSU2_TR(0x486b07);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B486b09:{NFSU2_TR(0x486b09);
if(r1(R+518)){{goto L486b1f;}}
}
B486b0b:L486b0b:{c.instructions+=4;NFSU2_TR(0x486b0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486b11:{NFSU2_TR(0x486b11);
w4(R+0,u32(0x1ull));
}
B486b16:{NFSU2_TR(0x486b16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486b17:{NFSU2_TR(0x486b17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486b1cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486920u);}goto L486920;}
}
B486b1c:L486b1c:{c.instructions+=3;NFSU2_TR(0x486b1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B486b1d:{NFSU2_TR(0x486b1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B486b1e:{NFSU2_TR(0x486b1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486b1f:L486b1f:{c.instructions+=4;NFSU2_TR(0x486b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486b25:{NFSU2_TR(0x486b25);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B486b27:{NFSU2_TR(0x486b27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486b28:{NFSU2_TR(0x486b28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486b2dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486920u);}goto L486920;}
}
B486b2d:L486b2d:{c.instructions+=3;NFSU2_TR(0x486b2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B486b2e:{NFSU2_TR(0x486b2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B486b2f:{NFSU2_TR(0x486b2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486b30:L486b30:{c.instructions+=5;NFSU2_TR(0x486b30);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B486b35:{NFSU2_TR(0x486b35);
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
B486b37:{NFSU2_TR(0x486b37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486b38:{NFSU2_TR(0x486b38);
__builtin_memmove((R+24),(R+4),4);
}
B486b3a:{NFSU2_TR(0x486b3a);
if(r1(R+518)){{goto L486c04;}}
}
B486b40:L486b40:{c.instructions+=3;NFSU2_TR(0x486b40);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B486b45:{NFSU2_TR(0x486b45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B486b4f:{NFSU2_TR(0x486b4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486b54ull));
TAIL_STATIC(0x6f56bdu,6f5);
}
B486b54:L486b54:{c.instructions+=3;NFSU2_TR(0x486b54);
__builtin_memmove((R+4),(R+24),4);
}
B486b56:{NFSU2_TR(0x486b56);
s4(0x82b918,u32(0x0ull));
}
B486b60:{NFSU2_TR(0x486b60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486b65ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486650u);}goto L486650;}
}
B486b65:L486b65:{c.instructions+=3;NFSU2_TR(0x486b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486b68:{NFSU2_TR(0x486b68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B486b6a:{NFSU2_TR(0x486b6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486b6dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B486b6d:L486b6d:{c.instructions+=3;NFSU2_TR(0x486b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486b70:{NFSU2_TR(0x486b70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B486b72:{NFSU2_TR(0x486b72);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486b75ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B486b75:L486b75:{c.instructions+=3;NFSU2_TR(0x486b75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486b7b:{NFSU2_TR(0x486b7b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486b7d:{NFSU2_TR(0x486b7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486b82ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486920u);}goto L486920;}
}
B486b82:L486b82:{c.instructions+=3;NFSU2_TR(0x486b82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486b85:{NFSU2_TR(0x486b85);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B486b88:{NFSU2_TR(0x486b88);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L486bb7;}}
}
B486b8a:L486b8a:{c.instructions+=1;NFSU2_TR(0x486b8a);
__builtin_memmove((R+12),(R+12),4);
}
B486b90:L486b90:{c.instructions+=7;NFSU2_TR(0x486b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486b93:{NFSU2_TR(0x486b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486b96:{NFSU2_TR(0x486b96);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B486b99:{NFSU2_TR(0x486b99);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486b9b:{NFSU2_TR(0x486b9b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x82b098ull))));
}
B486ba1:{NFSU2_TR(0x486ba1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486ba2:{NFSU2_TR(0x486ba2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486ba7ull));
TAIL_STATIC(0x4792f0u,479);
}
B486ba7:L486ba7:{c.instructions+=7;NFSU2_TR(0x486ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486baa:{NFSU2_TR(0x486baa);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B486bab:{NFSU2_TR(0x486bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486bae:{NFSU2_TR(0x486bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486bb1:{NFSU2_TR(0x486bb1);
__builtin_memmove((R+0),(R+8),4);
}
B486bb3:{NFSU2_TR(0x486bb3);
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
B486bb5:{NFSU2_TR(0x486bb5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486b90u);}goto L486b90;}}
}
B486bb7:L486bb7:{c.instructions+=3;NFSU2_TR(0x486bb7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486bbb:{NFSU2_TR(0x486bbb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486bbc:{NFSU2_TR(0x486bbc);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486bc0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B486bc0:L486bc0:{c.instructions+=4;NFSU2_TR(0x486bc0);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B486bc5:{NFSU2_TR(0x486bc5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B486bc8:{NFSU2_TR(0x486bc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B486bca:{NFSU2_TR(0x486bca);
if(r1(R+518)){{goto L486bf4;}}
}
B486bcc:L486bcc:{c.instructions+=3;NFSU2_TR(0x486bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486bd2:{NFSU2_TR(0x486bd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B486bd4:{NFSU2_TR(0x486bd4);
if(r1(R+518)){{goto L486bf4;}}
}
B486bd6:L486bd6:{c.instructions+=3;NFSU2_TR(0x486bd6);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B486bdc:{NFSU2_TR(0x486bdc);
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
B486bde:{NFSU2_TR(0x486bde);
if(r1(R+518)){{goto L486be5;}}
}
B486be0:L486be0:{c.instructions+=2;NFSU2_TR(0x486be0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B486be2:{NFSU2_TR(0x486be2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486be5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B486be5:L486be5:{c.instructions+=3;NFSU2_TR(0x486be5);
__builtin_memmove((R+4),gp(0x82b978),4);
}
B486beb:{NFSU2_TR(0x486beb);
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
B486bed:{NFSU2_TR(0x486bed);
if(r1(R+518)){{goto L486bf4;}}
}
B486bef:L486bef:{c.instructions+=2;NFSU2_TR(0x486bef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B486bf1:{NFSU2_TR(0x486bf1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486bf4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B486bf4:L486bf4:{c.instructions+=1;NFSU2_TR(0x486bf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486bf9ull));
TAIL_STATIC(0x6f56bdu,6f5);
}
B486bf9:L486bf9:{c.instructions+=1;NFSU2_TR(0x486bf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486bfeull));
TAIL_STATIC(0x43bdf0u,43b);
}
B486bfe:L486bfe:{c.instructions+=1;NFSU2_TR(0x486bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486c04:L486c04:{c.instructions+=2;NFSU2_TR(0x486c04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B486c05:{NFSU2_TR(0x486c05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486c10:L486c10:{c.instructions+=5;NFSU2_TR(0x486c10);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B486c15:{NFSU2_TR(0x486c15);
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
B486c17:{NFSU2_TR(0x486c17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486c18:{NFSU2_TR(0x486c18);
__builtin_memmove((R+24),(R+4),4);
}
B486c1a:{NFSU2_TR(0x486c1a);
if(r1(R+518)){{goto L486da0;}}
}
B486c20:L486c20:{c.instructions+=8;NFSU2_TR(0x486c20);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B486c25:{NFSU2_TR(0x486c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B486c2f:{NFSU2_TR(0x486c2f);
s1(0x82b90c,u8(0x1ull));
}
B486c36:{NFSU2_TR(0x486c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486c3c:{NFSU2_TR(0x486c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x83aa28ull));
s4(u32(r4(U+0)),r4(U+4));
}
B486c43:{NFSU2_TR(0x486c43);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B486c49:{NFSU2_TR(0x486c49);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B486c4b:{NFSU2_TR(0x486c4b);
if(r1(R+518)){{goto L486c7c;}}
}
B486c4d:L486c4d:{c.instructions+=5;NFSU2_TR(0x486c4d);
__builtin_memmove((R+4),gp(0x83aa50),4);
}
B486c53:{NFSU2_TR(0x486c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486c56:{NFSU2_TR(0x486c56);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B486c5c:{NFSU2_TR(0x486c5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B486c5e:{NFSU2_TR(0x486c5e);
if(r1(R+518)){{goto L486c77;}}
}
B486c60:L486c60:{c.instructions+=3;NFSU2_TR(0x486c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486c63:{NFSU2_TR(0x486c63);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B486c66:{NFSU2_TR(0x486c66);
if(r1(R+518)){{goto L486c6d;}}
}
B486c68:L486c68:{c.instructions+=3;NFSU2_TR(0x486c68);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486c6a:{NFSU2_TR(0x486c6a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B486c6b:{NFSU2_TR(0x486c6b);
{goto L486c6f;}
}
B486c6d:L486c6d:{c.instructions+=1;NFSU2_TR(0x486c6d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486c6f:L486c6f:{c.instructions+=1;NFSU2_TR(0x486c6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486c74ull));
TAIL_STATIC(0x721681u,721);
}
B486c74:L486c74:{c.instructions+=1;NFSU2_TR(0x486c74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B486c77:L486c77:{c.instructions+=1;NFSU2_TR(0x486c77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486c7cull));
TAIL_STATIC(0x72183au,721);
}
B486c7c:L486c7c:{c.instructions+=3;NFSU2_TR(0x486c7c);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B486c81:{NFSU2_TR(0x486c81);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B486c83:{NFSU2_TR(0x486c83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L486c8e;}}
}
B486c85:L486c85:{c.instructions+=3;NFSU2_TR(0x486c85);
__builtin_memmove((R+0),gp(0x890108),4);
}
B486c8a:{NFSU2_TR(0x486c8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B486c8c:{NFSU2_TR(0x486c8c);
if(r1(R+518)){{goto L486c9e;}}
}
B486c8e:L486c8e:{c.instructions+=2;NFSU2_TR(0x486c8e);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B486c94:{NFSU2_TR(0x486c94);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B486c9e:L486c9e:{c.instructions+=3;NFSU2_TR(0x486c9e);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B486ca3:{NFSU2_TR(0x486ca3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B486ca5:{NFSU2_TR(0x486ca5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L486cb0;}}
}
B486ca7:L486ca7:{c.instructions+=3;NFSU2_TR(0x486ca7);
__builtin_memmove((R+0),gp(0x890104),4);
}
B486cac:{NFSU2_TR(0x486cac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B486cae:{NFSU2_TR(0x486cae);
if(r1(R+518)){{goto L486cbf;}}
}
B486cb0:L486cb0:{c.instructions+=2;NFSU2_TR(0x486cb0);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B486cb5:{NFSU2_TR(0x486cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B486cbf:L486cbf:{c.instructions+=3;NFSU2_TR(0x486cbf);
__builtin_memmove((R+0),gp(0x89e7e2),1);
}
B486cc4:{NFSU2_TR(0x486cc4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B486cc6:{NFSU2_TR(0x486cc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L486cd1;}}
}
B486cc8:L486cc8:{c.instructions+=3;NFSU2_TR(0x486cc8);
__builtin_memmove((R+0),gp(0x890100),4);
}
B486ccd:{NFSU2_TR(0x486ccd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B486ccf:{NFSU2_TR(0x486ccf);
if(r1(R+518)){{goto L486ce1;}}
}
B486cd1:L486cd1:{c.instructions+=2;NFSU2_TR(0x486cd1);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B486cd7:{NFSU2_TR(0x486cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B486ce1:L486ce1:{c.instructions+=3;NFSU2_TR(0x486ce1);
__builtin_memmove((R+4),(R+24),4);
}
B486ce3:{NFSU2_TR(0x486ce3);
s4(0x82b918,u32(0x0ull));
}
B486ced:{NFSU2_TR(0x486ced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486cf2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4869a0u);}goto L4869a0;}
}
B486cf2:L486cf2:{c.instructions+=17;NFSU2_TR(0x486cf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486cf5:{NFSU2_TR(0x486cf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486cf9:{NFSU2_TR(0x486cf9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486cfd:{NFSU2_TR(0x486cfd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B486cfe:{NFSU2_TR(0x486cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486d01:{NFSU2_TR(0x486d01);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B486d04:{NFSU2_TR(0x486d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0b8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486d0a:{NFSU2_TR(0x486d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486d0d:{NFSU2_TR(0x486d0d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B486d10:{NFSU2_TR(0x486d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x82b0bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486d16:{NFSU2_TR(0x486d16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486d19:{NFSU2_TR(0x486d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486d1c:{NFSU2_TR(0x486d1c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B486d1d:{NFSU2_TR(0x486d1d);
__builtin_memmove((R+0),(R+8),4);
}
B486d1f:{NFSU2_TR(0x486d1f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B486d21:{NFSU2_TR(0x486d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486d24:{NFSU2_TR(0x486d24);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L486d4d;}}
}
B486d26:L486d26:{c.instructions+=7;NFSU2_TR(0x486d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486d29:{NFSU2_TR(0x486d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486d2c:{NFSU2_TR(0x486d2c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B486d2f:{NFSU2_TR(0x486d2f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486d31:{NFSU2_TR(0x486d31);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x82b098ull))));
}
B486d37:{NFSU2_TR(0x486d37);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486d38:{NFSU2_TR(0x486d38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486d3dull));
TAIL_STATIC(0x4792f0u,479);
}
B486d3d:L486d3d:{c.instructions+=7;NFSU2_TR(0x486d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486d40:{NFSU2_TR(0x486d40);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B486d41:{NFSU2_TR(0x486d41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486d44:{NFSU2_TR(0x486d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486d47:{NFSU2_TR(0x486d47);
__builtin_memmove((R+0),(R+8),4);
}
B486d49:{NFSU2_TR(0x486d49);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B486d4b:{NFSU2_TR(0x486d4b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486d26u);}goto L486d26;}}
}
B486d4d:L486d4d:{c.instructions+=4;NFSU2_TR(0x486d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486d53:{NFSU2_TR(0x486d53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B486d55:{NFSU2_TR(0x486d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B486d5f:{NFSU2_TR(0x486d5f);
if(r1(R+518)){{goto L486d95;}}
}
B486d61:L486d61:{c.instructions+=3;NFSU2_TR(0x486d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486d64:{NFSU2_TR(0x486d64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B486d66:{NFSU2_TR(0x486d66);
if(r1(R+518)){{goto L486d95;}}
}
B486d68:L486d68:{c.instructions+=2;NFSU2_TR(0x486d68);
w4(R+4,u32(0x1ull));
}
B486d6d:{NFSU2_TR(0x486d6d);
__builtin_memmove((R+4),(R+4),4);
}
B486d70:L486d70:{c.instructions+=2;NFSU2_TR(0x486d70);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B486d73:{NFSU2_TR(0x486d73);
if(r1(R+518)){{goto L486d8b;}}
}
B486d75:L486d75:{c.instructions+=3;NFSU2_TR(0x486d75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486d78:{NFSU2_TR(0x486d78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B486d7a:{NFSU2_TR(0x486d7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486d70u);}goto L486d70;}}
}
B486d7c:L486d7c:{c.instructions+=1;NFSU2_TR(0x486d7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486d81ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B486d81:L486d81:{c.instructions+=3;NFSU2_TR(0x486d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486d87:{NFSU2_TR(0x486d87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B486d88:{NFSU2_TR(0x486d88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486d8b:L486d8b:{c.instructions+=2;NFSU2_TR(0x486d8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B486d8d:{NFSU2_TR(0x486d8d);
if(r1(R+518)){{goto L486d95;}}
}
B486d8f:L486d8f:{c.instructions+=1;NFSU2_TR(0x486d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486d95:L486d95:{c.instructions+=1;NFSU2_TR(0x486d95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486d9aull));
TAIL_STATIC(0x43bdf0u,43b);
}
B486d9a:L486d9a:{c.instructions+=1;NFSU2_TR(0x486d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486da0:L486da0:{c.instructions+=2;NFSU2_TR(0x486da0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B486da1:{NFSU2_TR(0x486da1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486db0:L486db0:{c.instructions+=5;NFSU2_TR(0x486db0);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B486db5:{NFSU2_TR(0x486db5);
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
B486db7:{NFSU2_TR(0x486db7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486db8:{NFSU2_TR(0x486db8);
__builtin_memmove((R+28),(R+4),4);
}
B486dba:{NFSU2_TR(0x486dba);
if(r1(R+518)){{goto L486e68;}}
}
B486dc0:L486dc0:{c.instructions+=3;NFSU2_TR(0x486dc0);
__builtin_memmove((R+0),gp(0x82b90c),1);
}
B486dc5:{NFSU2_TR(0x486dc5);
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
B486dc7:{NFSU2_TR(0x486dc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L486e68;}}
}
B486dcd:L486dcd:{c.instructions+=5;NFSU2_TR(0x486dcd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486dce:{NFSU2_TR(0x486dce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486dcf:{NFSU2_TR(0x486dcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xacull))));
__builtin_memmove((R+24),(U+0),4);
}
B486dd5:{NFSU2_TR(0x486dd5);
w4(R+12,u32(0x8ull));
}
B486dda:{NFSU2_TR(0x486dda);
__builtin_memmove((R+12),(R+12),4);
}
B486de0:L486de0:{c.instructions+=3;NFSU2_TR(0x486de0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B486de2:{NFSU2_TR(0x486de2);
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
B486de4:{NFSU2_TR(0x486de4);
if(r1(R+518)){{goto L486df2;}}
}
B486de6:L486de6:{c.instructions+=4;NFSU2_TR(0x486de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486dec:{NFSU2_TR(0x486dec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B486dee:{NFSU2_TR(0x486dee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486def:{NFSU2_TR(0x486def);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486df2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B486df2:L486df2:{c.instructions+=3;NFSU2_TR(0x486df2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B486df5:{NFSU2_TR(0x486df5);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B486df6:{NFSU2_TR(0x486df6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486de0u);}goto L486de0;}}
}
B486df8:L486df8:{c.instructions+=5;NFSU2_TR(0x486df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B486dfe:{NFSU2_TR(0x486dfe);
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
B486e00:{NFSU2_TR(0x486e00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B486e01:{NFSU2_TR(0x486e01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B486e02:{NFSU2_TR(0x486e02);
if(r1(R+518)){{goto L486e68;}}
}
B486e04:L486e04:{c.instructions+=3;NFSU2_TR(0x486e04);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B486e09:{NFSU2_TR(0x486e09);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B486e0b:{NFSU2_TR(0x486e0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L486e16;}}
}
B486e0d:L486e0d:{c.instructions+=3;NFSU2_TR(0x486e0d);
__builtin_memmove((R+0),gp(0x890108),4);
}
B486e12:{NFSU2_TR(0x486e12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B486e14:{NFSU2_TR(0x486e14);
if(r1(R+518)){{goto L486e25;}}
}
B486e16:L486e16:{c.instructions+=4;NFSU2_TR(0x486e16);
w4(R+0,u32(0x2ull));
}
B486e1b:{NFSU2_TR(0x486e1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486e1c:{NFSU2_TR(0x486e1c);
__builtin_memmove((R+4),(R+28),4);
}
B486e1e:{NFSU2_TR(0x486e1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486e23ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486920u);}goto L486920;}
}
B486e23:L486e23:{c.instructions+=2;NFSU2_TR(0x486e23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B486e24:{NFSU2_TR(0x486e24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486e25:L486e25:{c.instructions+=3;NFSU2_TR(0x486e25);
__builtin_memmove((R+0),gp(0x89e7e1),1);
}
B486e2a:{NFSU2_TR(0x486e2a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B486e2c:{NFSU2_TR(0x486e2c);
if(r1(R+518)){{goto L486e3d;}}
}
B486e2e:L486e2e:{c.instructions+=4;NFSU2_TR(0x486e2e);
w4(R+0,u32(0x3ull));
}
B486e33:{NFSU2_TR(0x486e33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486e34:{NFSU2_TR(0x486e34);
__builtin_memmove((R+4),(R+28),4);
}
B486e36:{NFSU2_TR(0x486e36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486e3bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486920u);}goto L486920;}
}
B486e3b:L486e3b:{c.instructions+=2;NFSU2_TR(0x486e3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B486e3c:{NFSU2_TR(0x486e3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486e3d:L486e3d:{c.instructions+=3;NFSU2_TR(0x486e3d);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B486e42:{NFSU2_TR(0x486e42);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B486e44:{NFSU2_TR(0x486e44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L486e4f;}}
}
B486e46:L486e46:{c.instructions+=3;NFSU2_TR(0x486e46);
__builtin_memmove((R+0),gp(0x890104),4);
}
B486e4b:{NFSU2_TR(0x486e4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B486e4d:{NFSU2_TR(0x486e4d);
if(r1(R+518)){{goto L486e5e;}}
}
B486e4f:L486e4f:{c.instructions+=4;NFSU2_TR(0x486e4f);
w4(R+0,u32(0x1ull));
}
B486e54:{NFSU2_TR(0x486e54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486e55:{NFSU2_TR(0x486e55);
__builtin_memmove((R+4),(R+28),4);
}
B486e57:{NFSU2_TR(0x486e57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486e5cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486920u);}goto L486920;}
}
B486e5c:L486e5c:{c.instructions+=2;NFSU2_TR(0x486e5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B486e5d:{NFSU2_TR(0x486e5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486e5e:L486e5e:{c.instructions+=4;NFSU2_TR(0x486e5e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B486e60:{NFSU2_TR(0x486e60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486e61:{NFSU2_TR(0x486e61);
__builtin_memmove((R+4),(R+28),4);
}
B486e63:{NFSU2_TR(0x486e63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486e68ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486920u);}goto L486920;}
}
B486e68:L486e68:{c.instructions+=2;NFSU2_TR(0x486e68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B486e69:{NFSU2_TR(0x486e69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486e70:L486e70:{c.instructions+=2;NFSU2_TR(0x486e70);
u8 U[14];
__builtin_memmove((U+6),gp(0x7faaa8),4);
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
B486e77:{NFSU2_TR(0x486e77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L486e8f;}}
}
B486e79:L486e79:{c.instructions+=6;NFSU2_TR(0x486e79);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486e7d:{NFSU2_TR(0x486e7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486e81:{NFSU2_TR(0x486e81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486e82:{NFSU2_TR(0x486e82);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486e83:{NFSU2_TR(0x486e83);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B486e89:{NFSU2_TR(0x486e89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486e8eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486b30u);}goto L486b30;}
}
B486e8e:L486e8e:{c.instructions+=1;NFSU2_TR(0x486e8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486e8f:L486e8f:{c.instructions+=3;NFSU2_TR(0x486e8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486e93:{NFSU2_TR(0x486e93);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486e94:{NFSU2_TR(0x486e94);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486e98ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B486e98:L486e98:{c.instructions+=2;NFSU2_TR(0x486e98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B486e99:{NFSU2_TR(0x486e99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486ea0:L486ea0:{c.instructions+=2;NFSU2_TR(0x486ea0);
u8 U[14];
__builtin_memmove((U+6),gp(0x7faaa8),4);
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
B486ea7:{NFSU2_TR(0x486ea7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L486ebf;}}
}
B486ea9:L486ea9:{c.instructions+=6;NFSU2_TR(0x486ea9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486ead:{NFSU2_TR(0x486ead);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486eb1:{NFSU2_TR(0x486eb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486eb2:{NFSU2_TR(0x486eb2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486eb3:{NFSU2_TR(0x486eb3);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B486eb9:{NFSU2_TR(0x486eb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486ebeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x486c10u);}goto L486c10;}
}
B486ebe:L486ebe:{c.instructions+=1;NFSU2_TR(0x486ebe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486ebf:L486ebf:{c.instructions+=3;NFSU2_TR(0x486ebf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B486ec3:{NFSU2_TR(0x486ec3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486ec4:{NFSU2_TR(0x486ec4);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486ec8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B486ec8:L486ec8:{c.instructions+=2;NFSU2_TR(0x486ec8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B486ec9:{NFSU2_TR(0x486ec9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486ed0:L486ed0:{c.instructions+=6;NFSU2_TR(0x486ed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486ed4:{NFSU2_TR(0x486ed4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486ed5:{NFSU2_TR(0x486ed5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486ed7:{NFSU2_TR(0x486ed7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486ed8:{NFSU2_TR(0x486ed8);
__builtin_memmove((R+24),(R+4),4);
}
B486eda:{NFSU2_TR(0x486eda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486edfull));
TAIL_STATIC(0x5e68d0u,5e6);
}
B486edf:L486edf:{c.instructions+=6;NFSU2_TR(0x486edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486ee2:{NFSU2_TR(0x486ee2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B486ee4:{NFSU2_TR(0x486ee4);
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
B486ee6:{NFSU2_TR(0x486ee6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B486ee9:{NFSU2_TR(0x486ee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B486eea:{NFSU2_TR(0x486eea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486ef0:L486ef0:{c.instructions+=5;NFSU2_TR(0x486ef0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486ef4:{NFSU2_TR(0x486ef4);
__builtin_memmove((R+4),gp(0x82da88),4);
}
B486efa:{NFSU2_TR(0x486efa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486efb:{NFSU2_TR(0x486efb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486efc:{NFSU2_TR(0x486efc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486f01ull));
TAIL_STATIC(0x43f920u,43f);
}
B486f01:L486f01:{c.instructions+=2;NFSU2_TR(0x486f01);
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
B486f04:{NFSU2_TR(0x486f04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486f10:L486f10:{c.instructions+=5;NFSU2_TR(0x486f10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486f14:{NFSU2_TR(0x486f14);
__builtin_memmove((R+4),gp(0x82db0c),4);
}
B486f1a:{NFSU2_TR(0x486f1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486f1b:{NFSU2_TR(0x486f1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486f1c:{NFSU2_TR(0x486f1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486f21ull));
TAIL_STATIC(0x43f920u,43f);
}
B486f21:L486f21:{c.instructions+=2;NFSU2_TR(0x486f21);
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
B486f24:{NFSU2_TR(0x486f24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486f30:L486f30:{c.instructions+=5;NFSU2_TR(0x486f30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486f34:{NFSU2_TR(0x486f34);
__builtin_memmove((R+4),gp(0x82da3c),4);
}
B486f3a:{NFSU2_TR(0x486f3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486f3b:{NFSU2_TR(0x486f3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486f3c:{NFSU2_TR(0x486f3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x486f41ull));
TAIL_STATIC(0x43f920u,43f);
}
B486f41:L486f41:{c.instructions+=2;NFSU2_TR(0x486f41);
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
B486f44:{NFSU2_TR(0x486f44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486f50:L486f50:{c.instructions+=61;NFSU2_TR(0x486f50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B486f51:{NFSU2_TR(0x486f51);
__builtin_memmove((R+20),(R+16),4);
}
B486f53:{NFSU2_TR(0x486f53);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B486f56:{NFSU2_TR(0x486f56);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B486f59:{NFSU2_TR(0x486f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486f5c:{NFSU2_TR(0x486f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486f5f:{NFSU2_TR(0x486f5f);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B486f62:{NFSU2_TR(0x486f62);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B486f65:{NFSU2_TR(0x486f65);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B486f68:{NFSU2_TR(0x486f68);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B486f6b:{NFSU2_TR(0x486f6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B486f6d:{NFSU2_TR(0x486f6d);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B486f70:{NFSU2_TR(0x486f70);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B486f73:{NFSU2_TR(0x486f73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B486f75:{NFSU2_TR(0x486f75);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B486f77:{NFSU2_TR(0x486f77);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B486f79:{NFSU2_TR(0x486f79);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B486f7b:{NFSU2_TR(0x486f7b);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B486f7e:{NFSU2_TR(0x486f7e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B486f81:{NFSU2_TR(0x486f81);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B486f84:{NFSU2_TR(0x486f84);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B486f86:{NFSU2_TR(0x486f86);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B486f88:{NFSU2_TR(0x486f88);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B486f8b:{NFSU2_TR(0x486f8b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B486f8e:{NFSU2_TR(0x486f8e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B486f90:{NFSU2_TR(0x486f90);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B486f93:{NFSU2_TR(0x486f93);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B486f96:{NFSU2_TR(0x486f96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B486f98:{NFSU2_TR(0x486f98);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B486f9b:{NFSU2_TR(0x486f9b);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B486f9e:{NFSU2_TR(0x486f9e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B486fa1:{NFSU2_TR(0x486fa1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B486fa3:{NFSU2_TR(0x486fa3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B486fa5:{NFSU2_TR(0x486fa5);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B486fa8:{NFSU2_TR(0x486fa8);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B486fab:{NFSU2_TR(0x486fab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B486fad:{NFSU2_TR(0x486fad);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B486fb0:{NFSU2_TR(0x486fb0);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B486fb3:{NFSU2_TR(0x486fb3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B486fb5:{NFSU2_TR(0x486fb5);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B486fb8:{NFSU2_TR(0x486fb8);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B486fbb:{NFSU2_TR(0x486fbb);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B486fbe:{NFSU2_TR(0x486fbe);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B486fc0:{NFSU2_TR(0x486fc0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B486fc2:{NFSU2_TR(0x486fc2);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B486fc5:{NFSU2_TR(0x486fc5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B486fc8:{NFSU2_TR(0x486fc8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B486fca:{NFSU2_TR(0x486fca);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B486fcd:{NFSU2_TR(0x486fcd);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B486fd0:{NFSU2_TR(0x486fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486fd3:{NFSU2_TR(0x486fd3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B486fd5:{NFSU2_TR(0x486fd5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B486fd9:{NFSU2_TR(0x486fd9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B486fdd:{NFSU2_TR(0x486fdd);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B486fdf:{NFSU2_TR(0x486fdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B486fe2:{NFSU2_TR(0x486fe2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B486fe4:{NFSU2_TR(0x486fe4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B486fe7:{NFSU2_TR(0x486fe7);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B486fea:{NFSU2_TR(0x486fea);
__builtin_memmove((R+16),(R+20),4);
}
B486fec:{NFSU2_TR(0x486fec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B486fed:{NFSU2_TR(0x486fed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B486ff0:L486ff0:{c.instructions+=5;NFSU2_TR(0x486ff0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B486ff3:{NFSU2_TR(0x486ff3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B486ff5:{NFSU2_TR(0x486ff5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B486ff9:{NFSU2_TR(0x486ff9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B486ffd:{NFSU2_TR(0x486ffd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x487001u,487);
}
XIT:NFSU2_TR_EXIT(0x486,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
