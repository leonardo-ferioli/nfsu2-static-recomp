#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_704(u8* __restrict R,Cpu& c);
u32 body_706(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x705,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x705,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_705(u8* __restrict R,Cpu& c);
u32 page_705(Cpu& c){return body_705(c.regs.data(),c);}
__attribute__((noinline)) u32 body_705(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x705001:goto L705001;
case 0x705003:goto L705003;
case 0x705006:goto L705006;
case 0x705009:c.instructions+=8;goto B705009;
case 0x70500c:c.instructions+=7;goto B70500c;
case 0x70500e:c.instructions+=6;goto B70500e;
case 0x705010:c.instructions+=5;goto B705010;
case 0x705012:c.instructions+=4;goto B705012;
case 0x705015:c.instructions+=3;goto B705015;
case 0x705017:c.instructions+=2;goto B705017;
case 0x70501a:c.instructions+=1;goto B70501a;
case 0x70501d:goto L70501d;
case 0x70501f:goto L70501f;
case 0x705021:c.instructions+=1;goto B705021;
case 0x705024:goto L705024;
case 0x705026:goto L705026;
case 0x705029:c.instructions+=9;goto B705029;
case 0x70502c:c.instructions+=8;goto B70502c;
case 0x70502f:c.instructions+=7;goto B70502f;
case 0x705031:c.instructions+=6;goto B705031;
case 0x705033:c.instructions+=5;goto B705033;
case 0x705035:c.instructions+=4;goto B705035;
case 0x705038:c.instructions+=3;goto B705038;
case 0x70503a:c.instructions+=2;goto B70503a;
case 0x70503d:c.instructions+=1;goto B70503d;
case 0x705040:goto L705040;
case 0x705042:goto L705042;
case 0x705044:c.instructions+=2;goto B705044;
case 0x705047:c.instructions+=1;goto B705047;
case 0x70504a:goto L70504a;
case 0x70504c:goto L70504c;
case 0x70504f:c.instructions+=9;goto B70504f;
case 0x705052:c.instructions+=8;goto B705052;
case 0x705055:c.instructions+=7;goto B705055;
case 0x705058:c.instructions+=6;goto B705058;
case 0x70505a:c.instructions+=5;goto B70505a;
case 0x70505c:c.instructions+=4;goto B70505c;
case 0x70505f:c.instructions+=3;goto B70505f;
case 0x705062:c.instructions+=2;goto B705062;
case 0x705065:c.instructions+=1;goto B705065;
case 0x705067:goto L705067;
case 0x70506a:goto L70506a;
case 0x70506d:c.instructions+=13;goto B70506d;
case 0x70506f:c.instructions+=12;goto B70506f;
case 0x705075:c.instructions+=11;goto B705075;
case 0x70507b:c.instructions+=10;goto B70507b;
case 0x705082:c.instructions+=9;goto B705082;
case 0x705085:c.instructions+=8;goto B705085;
case 0x705087:c.instructions+=7;goto B705087;
case 0x705089:c.instructions+=6;goto B705089;
case 0x70508c:c.instructions+=5;goto B70508c;
case 0x70508f:c.instructions+=4;goto B70508f;
case 0x705091:c.instructions+=3;goto B705091;
case 0x705094:c.instructions+=2;goto B705094;
case 0x705097:c.instructions+=1;goto B705097;
case 0x705099:goto L705099;
case 0x70509c:c.instructions+=2;goto B70509c;
case 0x70509f:c.instructions+=1;goto B70509f;
case 0x7050a2:goto L7050a2;
case 0x7050a5:c.instructions+=4;goto B7050a5;
case 0x7050a8:c.instructions+=3;goto B7050a8;
case 0x7050aa:c.instructions+=2;goto B7050aa;
case 0x7050ac:c.instructions+=1;goto B7050ac;
case 0x7050af:goto L7050af;
case 0x7050b1:goto L7050b1;
case 0x7050b3:c.instructions+=3;goto B7050b3;
case 0x7050b6:c.instructions+=2;goto B7050b6;
case 0x7050b9:c.instructions+=1;goto B7050b9;
case 0x7050bc:goto L7050bc;
case 0x7050be:goto L7050be;
case 0x7050c1:c.instructions+=5;goto B7050c1;
case 0x7050c3:c.instructions+=4;goto B7050c3;
case 0x7050c5:c.instructions+=3;goto B7050c5;
case 0x7050c7:c.instructions+=2;goto B7050c7;
case 0x7050ca:c.instructions+=1;goto B7050ca;
case 0x7050cc:goto L7050cc;
case 0x7050ce:goto L7050ce;
case 0x7050d0:c.instructions+=2;goto B7050d0;
case 0x7050d3:c.instructions+=1;goto B7050d3;
case 0x7050d6:goto L7050d6;
case 0x7050d8:goto L7050d8;
case 0x7050da:goto L7050da;
case 0x7050db:c.instructions+=4;goto B7050db;
case 0x7050dc:c.instructions+=3;goto B7050dc;
case 0x7050dd:c.instructions+=2;goto B7050dd;
case 0x7050de:c.instructions+=1;goto B7050de;
case 0x7050df:goto L7050df;
case 0x7050e0:c.instructions+=15;goto B7050e0;
case 0x7050e2:c.instructions+=14;goto B7050e2;
case 0x7050e3:c.instructions+=13;goto B7050e3;
case 0x7050e6:c.instructions+=12;goto B7050e6;
case 0x7050e9:c.instructions+=11;goto B7050e9;
case 0x7050ed:c.instructions+=10;goto B7050ed;
case 0x7050ee:c.instructions+=9;goto B7050ee;
case 0x7050ef:c.instructions+=8;goto B7050ef;
case 0x7050f2:c.instructions+=7;goto B7050f2;
case 0x7050f3:c.instructions+=6;goto B7050f3;
case 0x7050f6:c.instructions+=5;goto B7050f6;
case 0x7050f9:c.instructions+=4;goto B7050f9;
case 0x7050fd:c.instructions+=3;goto B7050fd;
case 0x705100:c.instructions+=2;goto B705100;
case 0x705103:c.instructions+=1;goto B705103;
case 0x705105:goto L705105;
case 0x705107:c.instructions+=2;goto B705107;
case 0x705109:c.instructions+=1;goto B705109;
case 0x70510c:goto L70510c;
case 0x70510e:goto L70510e;
case 0x705110:c.instructions+=1;goto B705110;
case 0x705113:goto L705113;
case 0x705115:goto L705115;
case 0x705118:c.instructions+=9;goto B705118;
case 0x70511b:c.instructions+=8;goto B70511b;
case 0x70511e:c.instructions+=7;goto B70511e;
case 0x705124:c.instructions+=6;goto B705124;
case 0x705127:c.instructions+=5;goto B705127;
case 0x70512a:c.instructions+=4;goto B70512a;
case 0x70512d:c.instructions+=3;goto B70512d;
case 0x705130:c.instructions+=2;goto B705130;
case 0x705133:c.instructions+=1;goto B705133;
case 0x705135:goto L705135;
case 0x705138:c.instructions+=7;goto B705138;
case 0x70513b:c.instructions+=6;goto B70513b;
case 0x70513e:c.instructions+=5;goto B70513e;
case 0x705142:c.instructions+=4;goto B705142;
case 0x705146:c.instructions+=3;goto B705146;
case 0x705149:c.instructions+=2;goto B705149;
case 0x70514c:c.instructions+=1;goto B70514c;
case 0x70514e:goto L70514e;
case 0x705151:c.instructions+=2;goto B705151;
case 0x705153:c.instructions+=1;goto B705153;
case 0x705156:goto L705156;
case 0x705158:goto L705158;
case 0x70515a:c.instructions+=1;goto B70515a;
case 0x70515d:goto L70515d;
case 0x70515f:goto L70515f;
case 0x705162:c.instructions+=9;goto B705162;
case 0x705165:c.instructions+=8;goto B705165;
case 0x705168:c.instructions+=7;goto B705168;
case 0x70516e:c.instructions+=6;goto B70516e;
case 0x705171:c.instructions+=5;goto B705171;
case 0x705174:c.instructions+=4;goto B705174;
case 0x705177:c.instructions+=3;goto B705177;
case 0x70517a:c.instructions+=2;goto B70517a;
case 0x70517d:c.instructions+=1;goto B70517d;
case 0x70517f:goto L70517f;
case 0x705185:c.instructions+=7;goto B705185;
case 0x705188:c.instructions+=6;goto B705188;
case 0x70518b:c.instructions+=5;goto B70518b;
case 0x70518f:c.instructions+=4;goto B70518f;
case 0x705193:c.instructions+=3;goto B705193;
case 0x705196:c.instructions+=2;goto B705196;
case 0x705199:c.instructions+=1;goto B705199;
case 0x70519b:goto L70519b;
case 0x70519e:c.instructions+=2;goto B70519e;
case 0x7051a0:c.instructions+=1;goto B7051a0;
case 0x7051a3:goto L7051a3;
case 0x7051a5:goto L7051a5;
case 0x7051a7:c.instructions+=1;goto B7051a7;
case 0x7051aa:goto L7051aa;
case 0x7051ac:goto L7051ac;
case 0x7051af:c.instructions+=9;goto B7051af;
case 0x7051b2:c.instructions+=8;goto B7051b2;
case 0x7051b5:c.instructions+=7;goto B7051b5;
case 0x7051bb:c.instructions+=6;goto B7051bb;
case 0x7051be:c.instructions+=5;goto B7051be;
case 0x7051c1:c.instructions+=4;goto B7051c1;
case 0x7051c4:c.instructions+=3;goto B7051c4;
case 0x7051c7:c.instructions+=2;goto B7051c7;
case 0x7051ca:c.instructions+=1;goto B7051ca;
case 0x7051cc:goto L7051cc;
case 0x7051cf:c.instructions+=2;goto B7051cf;
case 0x7051d0:c.instructions+=1;goto B7051d0;
case 0x7051d5:goto L7051d5;
case 0x7051d6:c.instructions+=6;goto B7051d6;
case 0x7051d7:c.instructions+=5;goto B7051d7;
case 0x7051d8:c.instructions+=4;goto B7051d8;
case 0x7051d9:c.instructions+=3;goto B7051d9;
case 0x7051da:c.instructions+=2;goto B7051da;
case 0x7051db:c.instructions+=1;goto B7051db;
case 0x7051dc:goto L7051dc;
case 0x7051dd:c.instructions+=8;goto B7051dd;
case 0x7051df:c.instructions+=7;goto B7051df;
case 0x7051e2:c.instructions+=6;goto B7051e2;
case 0x7051e3:c.instructions+=5;goto B7051e3;
case 0x7051e6:c.instructions+=4;goto B7051e6;
case 0x7051e8:c.instructions+=3;goto B7051e8;
case 0x7051e9:c.instructions+=2;goto B7051e9;
case 0x7051ec:c.instructions+=1;goto B7051ec;
case 0x7051ef:goto L7051ef;
case 0x7051f1:goto L7051f1;
case 0x7051f3:c.instructions+=1;goto B7051f3;
case 0x7051f6:goto L7051f6;
case 0x7051f8:goto L7051f8;
case 0x7051f9:c.instructions+=3;goto B7051f9;
case 0x7051fa:c.instructions+=2;goto B7051fa;
case 0x7051fb:c.instructions+=1;goto B7051fb;
case 0x7051fc:goto L7051fc;
case 0x7051fd:goto L7051fd;
case 0x7051fe:c.instructions+=9;goto B7051fe;
case 0x705200:c.instructions+=8;goto B705200;
case 0x705203:c.instructions+=7;goto B705203;
case 0x705206:c.instructions+=6;goto B705206;
case 0x705209:c.instructions+=5;goto B705209;
case 0x70520c:c.instructions+=4;goto B70520c;
case 0x70520d:c.instructions+=3;goto B70520d;
case 0x70520e:c.instructions+=2;goto B70520e;
case 0x70520f:c.instructions+=1;goto B70520f;
case 0x705211:goto L705211;
case 0x705212:c.instructions+=3;goto B705212;
case 0x705215:c.instructions+=2;goto B705215;
case 0x705216:c.instructions+=1;goto B705216;
case 0x705219:goto L705219;
case 0x70521d:c.instructions+=30;goto B70521d;
case 0x705220:c.instructions+=29;goto B705220;
case 0x705222:c.instructions+=28;goto B705222;
case 0x705225:c.instructions+=27;goto B705225;
case 0x705227:c.instructions+=26;goto B705227;
case 0x70522a:c.instructions+=25;goto B70522a;
case 0x705230:c.instructions+=24;goto B705230;
case 0x705237:c.instructions+=23;goto B705237;
case 0x70523a:c.instructions+=22;goto B70523a;
case 0x70523d:c.instructions+=21;goto B70523d;
case 0x705241:c.instructions+=20;goto B705241;
case 0x705245:c.instructions+=19;goto B705245;
case 0x70524b:c.instructions+=18;goto B70524b;
case 0x705252:c.instructions+=17;goto B705252;
case 0x705254:c.instructions+=16;goto B705254;
case 0x70525a:c.instructions+=15;goto B70525a;
case 0x70525d:c.instructions+=14;goto B70525d;
case 0x705260:c.instructions+=13;goto B705260;
case 0x705263:c.instructions+=12;goto B705263;
case 0x70526a:c.instructions+=11;goto B70526a;
case 0x70526d:c.instructions+=10;goto B70526d;
case 0x705270:c.instructions+=9;goto B705270;
case 0x705273:c.instructions+=8;goto B705273;
case 0x705276:c.instructions+=7;goto B705276;
case 0x705279:c.instructions+=6;goto B705279;
case 0x705280:c.instructions+=5;goto B705280;
case 0x705283:c.instructions+=4;goto B705283;
case 0x705286:c.instructions+=3;goto B705286;
case 0x705289:c.instructions+=2;goto B705289;
case 0x70528c:c.instructions+=1;goto B70528c;
case 0x70528e:goto L70528e;
case 0x705292:c.instructions+=26;goto B705292;
case 0x705295:c.instructions+=25;goto B705295;
case 0x705297:c.instructions+=24;goto B705297;
case 0x70529a:c.instructions+=23;goto B70529a;
case 0x70529c:c.instructions+=22;goto B70529c;
case 0x70529f:c.instructions+=21;goto B70529f;
case 0x7052a5:c.instructions+=20;goto B7052a5;
case 0x7052ac:c.instructions+=19;goto B7052ac;
case 0x7052af:c.instructions+=18;goto B7052af;
case 0x7052b2:c.instructions+=17;goto B7052b2;
case 0x7052b6:c.instructions+=16;goto B7052b6;
case 0x7052ba:c.instructions+=15;goto B7052ba;
case 0x7052c0:c.instructions+=14;goto B7052c0;
case 0x7052c7:c.instructions+=13;goto B7052c7;
case 0x7052c9:c.instructions+=12;goto B7052c9;
case 0x7052cc:c.instructions+=11;goto B7052cc;
case 0x7052cf:c.instructions+=10;goto B7052cf;
case 0x7052d6:c.instructions+=9;goto B7052d6;
case 0x7052d7:c.instructions+=8;goto B7052d7;
case 0x7052da:c.instructions+=7;goto B7052da;
case 0x7052db:c.instructions+=6;goto B7052db;
case 0x7052de:c.instructions+=5;goto B7052de;
case 0x7052e1:c.instructions+=4;goto B7052e1;
case 0x7052e4:c.instructions+=3;goto B7052e4;
case 0x7052e5:c.instructions+=2;goto B7052e5;
case 0x7052e6:c.instructions+=1;goto B7052e6;
case 0x7052e7:goto L7052e7;
case 0x7052e8:c.instructions+=7;goto B7052e8;
case 0x7052ea:c.instructions+=6;goto B7052ea;
case 0x7052ed:c.instructions+=5;goto B7052ed;
case 0x7052f0:c.instructions+=4;goto B7052f0;
case 0x7052f2:c.instructions+=3;goto B7052f2;
case 0x7052f4:c.instructions+=2;goto B7052f4;
case 0x7052f7:c.instructions+=1;goto B7052f7;
case 0x7052fd:goto L7052fd;
case 0x7052fe:c.instructions+=6;goto B7052fe;
case 0x7052ff:c.instructions+=5;goto B7052ff;
case 0x705302:c.instructions+=4;goto B705302;
case 0x705305:c.instructions+=3;goto B705305;
case 0x705306:c.instructions+=2;goto B705306;
case 0x705308:c.instructions+=1;goto B705308;
case 0x70530b:goto L70530b;
case 0x70530f:c.instructions+=33;goto B70530f;
case 0x705312:c.instructions+=32;goto B705312;
case 0x705314:c.instructions+=31;goto B705314;
case 0x705317:c.instructions+=30;goto B705317;
case 0x70531a:c.instructions+=29;goto B70531a;
case 0x705320:c.instructions+=28;goto B705320;
case 0x705327:c.instructions+=27;goto B705327;
case 0x70532a:c.instructions+=26;goto B70532a;
case 0x70532d:c.instructions+=25;goto B70532d;
case 0x705331:c.instructions+=24;goto B705331;
case 0x705334:c.instructions+=23;goto B705334;
case 0x70533a:c.instructions+=22;goto B70533a;
case 0x705341:c.instructions+=21;goto B705341;
case 0x705344:c.instructions+=20;goto B705344;
case 0x705347:c.instructions+=19;goto B705347;
case 0x70534a:c.instructions+=18;goto B70534a;
case 0x70534c:c.instructions+=17;goto B70534c;
case 0x705352:c.instructions+=16;goto B705352;
case 0x705355:c.instructions+=15;goto B705355;
case 0x70535c:c.instructions+=14;goto B70535c;
case 0x70535f:c.instructions+=13;goto B70535f;
case 0x705361:c.instructions+=12;goto B705361;
case 0x705364:c.instructions+=11;goto B705364;
case 0x705367:c.instructions+=10;goto B705367;
case 0x70536b:c.instructions+=9;goto B70536b;
case 0x70536e:c.instructions+=8;goto B70536e;
case 0x705375:c.instructions+=7;goto B705375;
case 0x705378:c.instructions+=6;goto B705378;
case 0x705379:c.instructions+=5;goto B705379;
case 0x70537c:c.instructions+=4;goto B70537c;
case 0x70537d:c.instructions+=3;goto B70537d;
case 0x705380:c.instructions+=2;goto B705380;
case 0x705383:c.instructions+=1;goto B705383;
case 0x705385:goto L705385;
case 0x705386:c.instructions+=2;goto B705386;
case 0x705387:c.instructions+=1;goto B705387;
case 0x705388:goto L705388;
case 0x705389:c.instructions+=1;goto B705389;
case 0x70538a:goto L70538a;
case 0x70538b:c.instructions+=5;goto B70538b;
case 0x70538d:c.instructions+=4;goto B70538d;
case 0x705390:c.instructions+=3;goto B705390;
case 0x705392:c.instructions+=2;goto B705392;
case 0x705395:c.instructions+=1;goto B705395;
case 0x705397:goto L705397;
case 0x705398:c.instructions+=6;goto B705398;
case 0x705399:c.instructions+=5;goto B705399;
case 0x70539a:c.instructions+=4;goto B70539a;
case 0x70539d:c.instructions+=3;goto B70539d;
case 0x7053a0:c.instructions+=2;goto B7053a0;
case 0x7053a2:c.instructions+=1;goto B7053a2;
case 0x7053a5:goto L7053a5;
case 0x7053a9:c.instructions+=26;goto B7053a9;
case 0x7053ac:c.instructions+=25;goto B7053ac;
case 0x7053af:c.instructions+=24;goto B7053af;
case 0x7053b1:c.instructions+=23;goto B7053b1;
case 0x7053b4:c.instructions+=22;goto B7053b4;
case 0x7053ba:c.instructions+=21;goto B7053ba;
case 0x7053c1:c.instructions+=20;goto B7053c1;
case 0x7053c4:c.instructions+=19;goto B7053c4;
case 0x7053c7:c.instructions+=18;goto B7053c7;
case 0x7053cb:c.instructions+=17;goto B7053cb;
case 0x7053ce:c.instructions+=16;goto B7053ce;
case 0x7053d4:c.instructions+=15;goto B7053d4;
case 0x7053d7:c.instructions+=14;goto B7053d7;
case 0x7053de:c.instructions+=13;goto B7053de;
case 0x7053e1:c.instructions+=12;goto B7053e1;
case 0x7053e4:c.instructions+=11;goto B7053e4;
case 0x7053e7:c.instructions+=10;goto B7053e7;
case 0x7053ee:c.instructions+=9;goto B7053ee;
case 0x7053f1:c.instructions+=8;goto B7053f1;
case 0x7053f4:c.instructions+=7;goto B7053f4;
case 0x7053f6:c.instructions+=6;goto B7053f6;
case 0x7053f9:c.instructions+=5;goto B7053f9;
case 0x7053fa:c.instructions+=4;goto B7053fa;
case 0x7053fd:c.instructions+=3;goto B7053fd;
case 0x7053fe:c.instructions+=2;goto B7053fe;
case 0x705401:c.instructions+=1;goto B705401;
case 0x705403:goto L705403;
case 0x705404:c.instructions+=2;goto B705404;
case 0x705405:c.instructions+=1;goto B705405;
case 0x705406:goto L705406;
case 0x705407:c.instructions+=1;goto B705407;
case 0x705408:goto L705408;
case 0x705409:c.instructions+=12;goto B705409;
case 0x70540b:c.instructions+=11;goto B70540b;
case 0x70540e:c.instructions+=10;goto B70540e;
case 0x70540f:c.instructions+=9;goto B70540f;
case 0x705412:c.instructions+=8;goto B705412;
case 0x705413:c.instructions+=7;goto B705413;
case 0x705414:c.instructions+=6;goto B705414;
case 0x705417:c.instructions+=5;goto B705417;
case 0x70541a:c.instructions+=4;goto B70541a;
case 0x70541b:c.instructions+=3;goto B70541b;
case 0x70541e:c.instructions+=2;goto B70541e;
case 0x70541f:c.instructions+=1;goto B70541f;
case 0x705425:goto L705425;
case 0x705428:c.instructions+=8;goto B705428;
case 0x70542b:c.instructions+=7;goto B70542b;
case 0x70542d:c.instructions+=6;goto B70542d;
case 0x70542f:c.instructions+=5;goto B70542f;
case 0x705430:c.instructions+=4;goto B705430;
case 0x705432:c.instructions+=3;goto B705432;
case 0x705435:c.instructions+=2;goto B705435;
case 0x705436:c.instructions+=1;goto B705436;
case 0x705438:goto L705438;
case 0x70543b:goto L70543b;
case 0x70543e:c.instructions+=5;goto B70543e;
case 0x705440:c.instructions+=4;goto B705440;
case 0x705443:c.instructions+=3;goto B705443;
case 0x705446:c.instructions+=2;goto B705446;
case 0x705449:c.instructions+=1;goto B705449;
case 0x705450:goto L705450;
case 0x705453:c.instructions+=4;goto B705453;
case 0x705456:c.instructions+=3;goto B705456;
case 0x705459:c.instructions+=2;goto B705459;
case 0x70545c:c.instructions+=1;goto B70545c;
case 0x705462:goto L705462;
case 0x705465:c.instructions+=5;goto B705465;
case 0x705468:c.instructions+=4;goto B705468;
case 0x70546b:c.instructions+=3;goto B70546b;
case 0x70546e:c.instructions+=2;goto B70546e;
case 0x705471:c.instructions+=1;goto B705471;
case 0x705473:goto L705473;
case 0x705476:c.instructions+=9;goto B705476;
case 0x705479:c.instructions+=8;goto B705479;
case 0x70547c:c.instructions+=7;goto B70547c;
case 0x70547e:c.instructions+=6;goto B70547e;
case 0x70547f:c.instructions+=5;goto B70547f;
case 0x705482:c.instructions+=4;goto B705482;
case 0x705485:c.instructions+=3;goto B705485;
case 0x705486:c.instructions+=2;goto B705486;
case 0x705489:c.instructions+=1;goto B705489;
case 0x70548f:goto L70548f;
case 0x705492:c.instructions+=3;goto B705492;
case 0x705493:c.instructions+=2;goto B705493;
case 0x705494:c.instructions+=1;goto B705494;
case 0x70549a:goto L70549a;
case 0x70549d:c.instructions+=3;goto B70549d;
case 0x7054a0:c.instructions+=2;goto B7054a0;
case 0x7054a3:c.instructions+=1;goto B7054a3;
case 0x7054a5:goto L7054a5;
case 0x7054a8:c.instructions+=4;goto B7054a8;
case 0x7054aa:c.instructions+=3;goto B7054aa;
case 0x7054ad:c.instructions+=2;goto B7054ad;
case 0x7054b0:c.instructions+=1;goto B7054b0;
case 0x7054b7:goto L7054b7;
case 0x7054ba:c.instructions+=4;goto B7054ba;
case 0x7054bb:c.instructions+=3;goto B7054bb;
case 0x7054be:c.instructions+=2;goto B7054be;
case 0x7054c1:c.instructions+=1;goto B7054c1;
case 0x7054c7:goto L7054c7;
case 0x7054ca:c.instructions+=5;goto B7054ca;
case 0x7054cd:c.instructions+=4;goto B7054cd;
case 0x7054d0:c.instructions+=3;goto B7054d0;
case 0x7054d2:c.instructions+=2;goto B7054d2;
case 0x7054d5:c.instructions+=1;goto B7054d5;
case 0x7054d7:goto L7054d7;
case 0x7054da:c.instructions+=3;goto B7054da;
case 0x7054db:c.instructions+=2;goto B7054db;
case 0x7054dc:c.instructions+=1;goto B7054dc;
case 0x7054e2:goto L7054e2;
case 0x7054e5:c.instructions+=5;goto B7054e5;
case 0x7054e6:c.instructions+=4;goto B7054e6;
case 0x7054e7:c.instructions+=3;goto B7054e7;
case 0x7054e8:c.instructions+=2;goto B7054e8;
case 0x7054e9:c.instructions+=1;goto B7054e9;
case 0x7054ea:goto L7054ea;
case 0x7054eb:c.instructions+=9;goto B7054eb;
case 0x7054ed:c.instructions+=8;goto B7054ed;
case 0x7054f0:c.instructions+=7;goto B7054f0;
case 0x7054f3:c.instructions+=6;goto B7054f3;
case 0x7054f6:c.instructions+=5;goto B7054f6;
case 0x7054f7:c.instructions+=4;goto B7054f7;
case 0x7054f8:c.instructions+=3;goto B7054f8;
case 0x7054fb:c.instructions+=2;goto B7054fb;
case 0x7054fc:c.instructions+=1;goto B7054fc;
case 0x705502:goto L705502;
case 0x705504:c.instructions+=6;goto B705504;
case 0x705505:c.instructions+=5;goto B705505;
case 0x705507:c.instructions+=4;goto B705507;
case 0x705508:c.instructions+=3;goto B705508;
case 0x70550a:c.instructions+=2;goto B70550a;
case 0x70550b:c.instructions+=1;goto B70550b;
case 0x70550e:goto L70550e;
case 0x705512:c.instructions+=32;goto B705512;
case 0x705515:c.instructions+=31;goto B705515;
case 0x705517:c.instructions+=30;goto B705517;
case 0x70551a:c.instructions+=29;goto B70551a;
case 0x70551c:c.instructions+=28;goto B70551c;
case 0x705522:c.instructions+=27;goto B705522;
case 0x705529:c.instructions+=26;goto B705529;
case 0x70552c:c.instructions+=25;goto B70552c;
case 0x70552f:c.instructions+=24;goto B70552f;
case 0x705533:c.instructions+=23;goto B705533;
case 0x705535:c.instructions+=22;goto B705535;
case 0x705538:c.instructions+=21;goto B705538;
case 0x70553e:c.instructions+=20;goto B70553e;
case 0x705540:c.instructions+=19;goto B705540;
case 0x705543:c.instructions+=18;goto B705543;
case 0x70554a:c.instructions+=17;goto B70554a;
case 0x70554d:c.instructions+=16;goto B70554d;
case 0x705550:c.instructions+=15;goto B705550;
case 0x705552:c.instructions+=14;goto B705552;
case 0x705558:c.instructions+=13;goto B705558;
case 0x70555e:c.instructions+=12;goto B70555e;
case 0x705565:c.instructions+=11;goto B705565;
case 0x705568:c.instructions+=10;goto B705568;
case 0x70556b:c.instructions+=9;goto B70556b;
case 0x70556e:c.instructions+=8;goto B70556e;
case 0x705571:c.instructions+=7;goto B705571;
case 0x705574:c.instructions+=6;goto B705574;
case 0x70557b:c.instructions+=5;goto B70557b;
case 0x70557e:c.instructions+=4;goto B70557e;
case 0x705581:c.instructions+=3;goto B705581;
case 0x705584:c.instructions+=2;goto B705584;
case 0x705587:c.instructions+=1;goto B705587;
case 0x705589:goto L705589;
case 0x70558d:c.instructions+=28;goto B70558d;
case 0x705590:c.instructions+=27;goto B705590;
case 0x705592:c.instructions+=26;goto B705592;
case 0x705594:c.instructions+=25;goto B705594;
case 0x70559a:c.instructions+=24;goto B70559a;
case 0x70559d:c.instructions+=23;goto B70559d;
case 0x7055a4:c.instructions+=22;goto B7055a4;
case 0x7055a7:c.instructions+=21;goto B7055a7;
case 0x7055aa:c.instructions+=20;goto B7055aa;
case 0x7055ae:c.instructions+=19;goto B7055ae;
case 0x7055b0:c.instructions+=18;goto B7055b0;
case 0x7055b3:c.instructions+=17;goto B7055b3;
case 0x7055b9:c.instructions+=16;goto B7055b9;
case 0x7055bb:c.instructions+=15;goto B7055bb;
case 0x7055be:c.instructions+=14;goto B7055be;
case 0x7055c5:c.instructions+=13;goto B7055c5;
case 0x7055c7:c.instructions+=12;goto B7055c7;
case 0x7055cd:c.instructions+=11;goto B7055cd;
case 0x7055d0:c.instructions+=10;goto B7055d0;
case 0x7055d7:c.instructions+=9;goto B7055d7;
case 0x7055d8:c.instructions+=8;goto B7055d8;
case 0x7055db:c.instructions+=7;goto B7055db;
case 0x7055dc:c.instructions+=6;goto B7055dc;
case 0x7055df:c.instructions+=5;goto B7055df;
case 0x7055e2:c.instructions+=4;goto B7055e2;
case 0x7055e5:c.instructions+=3;goto B7055e5;
case 0x7055e6:c.instructions+=2;goto B7055e6;
case 0x7055e7:c.instructions+=1;goto B7055e7;
case 0x7055e8:goto L7055e8;
case 0x7055e9:c.instructions+=8;goto B7055e9;
case 0x7055eb:c.instructions+=7;goto B7055eb;
case 0x7055ec:c.instructions+=6;goto B7055ec;
case 0x7055ef:c.instructions+=5;goto B7055ef;
case 0x7055f1:c.instructions+=4;goto B7055f1;
case 0x7055f2:c.instructions+=3;goto B7055f2;
case 0x7055f5:c.instructions+=2;goto B7055f5;
case 0x7055f8:c.instructions+=1;goto B7055f8;
case 0x7055fe:goto L7055fe;
case 0x7055ff:c.instructions+=6;goto B7055ff;
case 0x705600:c.instructions+=5;goto B705600;
case 0x705603:c.instructions+=4;goto B705603;
case 0x705606:c.instructions+=3;goto B705606;
case 0x705609:c.instructions+=2;goto B705609;
case 0x70560c:c.instructions+=1;goto B70560c;
case 0x70560f:goto L70560f;
case 0x705612:c.instructions+=36;goto B705612;
case 0x705615:c.instructions+=35;goto B705615;
case 0x705618:c.instructions+=34;goto B705618;
case 0x70561b:c.instructions+=33;goto B70561b;
case 0x70561e:c.instructions+=32;goto B70561e;
case 0x705620:c.instructions+=31;goto B705620;
case 0x705626:c.instructions+=30;goto B705626;
case 0x70562d:c.instructions+=29;goto B70562d;
case 0x705630:c.instructions+=28;goto B705630;
case 0x705632:c.instructions+=27;goto B705632;
case 0x705635:c.instructions+=26;goto B705635;
case 0x705637:c.instructions+=25;goto B705637;
case 0x70563a:c.instructions+=24;goto B70563a;
case 0x705640:c.instructions+=23;goto B705640;
case 0x705642:c.instructions+=22;goto B705642;
case 0x705645:c.instructions+=21;goto B705645;
case 0x70564c:c.instructions+=20;goto B70564c;
case 0x70564f:c.instructions+=19;goto B70564f;
case 0x705651:c.instructions+=18;goto B705651;
case 0x705653:c.instructions+=17;goto B705653;
case 0x705659:c.instructions+=16;goto B705659;
case 0x70565f:c.instructions+=15;goto B70565f;
case 0x705666:c.instructions+=14;goto B705666;
case 0x705669:c.instructions+=13;goto B705669;
case 0x70566c:c.instructions+=12;goto B70566c;
case 0x70566f:c.instructions+=11;goto B70566f;
case 0x705673:c.instructions+=10;goto B705673;
case 0x705676:c.instructions+=9;goto B705676;
case 0x70567d:c.instructions+=8;goto B70567d;
case 0x705680:c.instructions+=7;goto B705680;
case 0x705683:c.instructions+=6;goto B705683;
case 0x705684:c.instructions+=5;goto B705684;
case 0x705686:c.instructions+=4;goto B705686;
case 0x705687:c.instructions+=3;goto B705687;
case 0x70568a:c.instructions+=2;goto B70568a;
case 0x70568d:c.instructions+=1;goto B70568d;
case 0x70568f:goto L70568f;
case 0x705690:c.instructions+=1;goto B705690;
case 0x705691:goto L705691;
case 0x705692:c.instructions+=2;goto B705692;
case 0x705693:c.instructions+=1;goto B705693;
case 0x705694:goto L705694;
case 0x705695:c.instructions+=6;goto B705695;
case 0x705697:c.instructions+=5;goto B705697;
case 0x70569a:c.instructions+=4;goto B70569a;
case 0x70569c:c.instructions+=3;goto B70569c;
case 0x70569d:c.instructions+=2;goto B70569d;
case 0x7056a0:c.instructions+=1;goto B7056a0;
case 0x7056a2:goto L7056a2;
case 0x7056a3:c.instructions+=4;goto B7056a3;
case 0x7056a4:c.instructions+=3;goto B7056a4;
case 0x7056a7:c.instructions+=2;goto B7056a7;
case 0x7056aa:c.instructions+=1;goto B7056aa;
case 0x7056ad:goto L7056ad;
case 0x7056b1:c.instructions+=27;goto B7056b1;
case 0x7056b4:c.instructions+=26;goto B7056b4;
case 0x7056b7:c.instructions+=25;goto B7056b7;
case 0x7056b9:c.instructions+=24;goto B7056b9;
case 0x7056bf:c.instructions+=23;goto B7056bf;
case 0x7056c6:c.instructions+=22;goto B7056c6;
case 0x7056c9:c.instructions+=21;goto B7056c9;
case 0x7056cc:c.instructions+=20;goto B7056cc;
case 0x7056cf:c.instructions+=19;goto B7056cf;
case 0x7056d1:c.instructions+=18;goto B7056d1;
case 0x7056d4:c.instructions+=17;goto B7056d4;
case 0x7056da:c.instructions+=16;goto B7056da;
case 0x7056dd:c.instructions+=15;goto B7056dd;
case 0x7056e0:c.instructions+=14;goto B7056e0;
case 0x7056e7:c.instructions+=13;goto B7056e7;
case 0x7056ea:c.instructions+=12;goto B7056ea;
case 0x7056ec:c.instructions+=11;goto B7056ec;
case 0x7056ef:c.instructions+=10;goto B7056ef;
case 0x7056f1:c.instructions+=9;goto B7056f1;
case 0x7056f7:c.instructions+=8;goto B7056f7;
case 0x7056fe:c.instructions+=7;goto B7056fe;
case 0x705701:c.instructions+=6;goto B705701;
case 0x705704:c.instructions+=5;goto B705704;
case 0x705707:c.instructions+=4;goto B705707;
case 0x705708:c.instructions+=3;goto B705708;
case 0x705709:c.instructions+=2;goto B705709;
case 0x70570c:c.instructions+=1;goto B70570c;
case 0x70570e:goto L70570e;
case 0x70570f:c.instructions+=1;goto B70570f;
case 0x705710:goto L705710;
case 0x705711:c.instructions+=2;goto B705711;
case 0x705712:c.instructions+=1;goto B705712;
case 0x705713:goto L705713;
case 0x705714:c.instructions+=11;goto B705714;
case 0x705716:c.instructions+=10;goto B705716;
case 0x705719:c.instructions+=9;goto B705719;
case 0x70571a:c.instructions+=8;goto B70571a;
case 0x70571b:c.instructions+=7;goto B70571b;
case 0x70571c:c.instructions+=6;goto B70571c;
case 0x70571f:c.instructions+=5;goto B70571f;
case 0x705722:c.instructions+=4;goto B705722;
case 0x705723:c.instructions+=3;goto B705723;
case 0x705726:c.instructions+=2;goto B705726;
case 0x705729:c.instructions+=1;goto B705729;
case 0x70572f:goto L70572f;
case 0x705732:c.instructions+=9;goto B705732;
case 0x705735:c.instructions+=8;goto B705735;
case 0x705737:c.instructions+=7;goto B705737;
case 0x705739:c.instructions+=6;goto B705739;
case 0x70573a:c.instructions+=5;goto B70573a;
case 0x70573c:c.instructions+=4;goto B70573c;
case 0x70573f:c.instructions+=3;goto B70573f;
case 0x705742:c.instructions+=2;goto B705742;
case 0x705743:c.instructions+=1;goto B705743;
case 0x705745:goto L705745;
case 0x705748:goto L705748;
case 0x70574b:c.instructions+=5;goto B70574b;
case 0x70574d:c.instructions+=4;goto B70574d;
case 0x705750:c.instructions+=3;goto B705750;
case 0x705753:c.instructions+=2;goto B705753;
case 0x705756:c.instructions+=1;goto B705756;
case 0x70575d:goto L70575d;
case 0x705760:c.instructions+=4;goto B705760;
case 0x705763:c.instructions+=3;goto B705763;
case 0x705766:c.instructions+=2;goto B705766;
case 0x705769:c.instructions+=1;goto B705769;
case 0x70576f:goto L70576f;
case 0x705772:c.instructions+=4;goto B705772;
case 0x705775:c.instructions+=3;goto B705775;
case 0x705778:c.instructions+=2;goto B705778;
case 0x70577b:c.instructions+=1;goto B70577b;
case 0x70577d:goto L70577d;
case 0x705780:c.instructions+=11;goto B705780;
case 0x705783:c.instructions+=10;goto B705783;
case 0x705786:c.instructions+=9;goto B705786;
case 0x705789:c.instructions+=8;goto B705789;
case 0x70578a:c.instructions+=7;goto B70578a;
case 0x70578d:c.instructions+=6;goto B70578d;
case 0x705790:c.instructions+=5;goto B705790;
case 0x705792:c.instructions+=4;goto B705792;
case 0x705793:c.instructions+=3;goto B705793;
case 0x705796:c.instructions+=2;goto B705796;
case 0x705799:c.instructions+=1;goto B705799;
case 0x70579f:goto L70579f;
case 0x7057a2:c.instructions+=3;goto B7057a2;
case 0x7057a3:c.instructions+=2;goto B7057a3;
case 0x7057a4:c.instructions+=1;goto B7057a4;
case 0x7057aa:goto L7057aa;
case 0x7057ad:c.instructions+=5;goto B7057ad;
case 0x7057b0:c.instructions+=4;goto B7057b0;
case 0x7057b3:c.instructions+=3;goto B7057b3;
case 0x7057b6:c.instructions+=2;goto B7057b6;
case 0x7057b9:c.instructions+=1;goto B7057b9;
case 0x7057bb:goto L7057bb;
case 0x7057be:c.instructions+=5;goto B7057be;
case 0x7057c0:c.instructions+=4;goto B7057c0;
case 0x7057c3:c.instructions+=3;goto B7057c3;
case 0x7057c6:c.instructions+=2;goto B7057c6;
case 0x7057c9:c.instructions+=1;goto B7057c9;
case 0x7057d0:goto L7057d0;
case 0x7057d3:c.instructions+=4;goto B7057d3;
case 0x7057d6:c.instructions+=3;goto B7057d6;
case 0x7057d9:c.instructions+=2;goto B7057d9;
case 0x7057dc:c.instructions+=1;goto B7057dc;
case 0x7057e2:goto L7057e2;
case 0x7057e5:c.instructions+=4;goto B7057e5;
case 0x7057e8:c.instructions+=3;goto B7057e8;
case 0x7057eb:c.instructions+=2;goto B7057eb;
case 0x7057ee:c.instructions+=1;goto B7057ee;
case 0x7057f0:goto L7057f0;
case 0x7057f3:c.instructions+=3;goto B7057f3;
case 0x7057f4:c.instructions+=2;goto B7057f4;
case 0x7057f5:c.instructions+=1;goto B7057f5;
case 0x7057fb:goto L7057fb;
case 0x7057fe:c.instructions+=5;goto B7057fe;
case 0x7057ff:c.instructions+=4;goto B7057ff;
case 0x705800:c.instructions+=3;goto B705800;
case 0x705801:c.instructions+=2;goto B705801;
case 0x705802:c.instructions+=1;goto B705802;
case 0x705803:goto L705803;
case 0x705804:c.instructions+=6;goto B705804;
case 0x705806:c.instructions+=5;goto B705806;
case 0x705809:c.instructions+=4;goto B705809;
case 0x70580a:c.instructions+=3;goto B70580a;
case 0x70580d:c.instructions+=2;goto B70580d;
case 0x705810:c.instructions+=1;goto B705810;
case 0x705812:goto L705812;
case 0x705813:c.instructions+=2;goto B705813;
case 0x705814:c.instructions+=1;goto B705814;
case 0x705816:goto L705816;
case 0x705819:c.instructions+=10;goto B705819;
case 0x70581a:c.instructions+=9;goto B70581a;
case 0x70581d:c.instructions+=8;goto B70581d;
case 0x70581f:c.instructions+=7;goto B70581f;
case 0x705823:c.instructions+=6;goto B705823;
case 0x705825:c.instructions+=5;goto B705825;
case 0x705828:c.instructions+=4;goto B705828;
case 0x705829:c.instructions+=3;goto B705829;
case 0x70582a:c.instructions+=2;goto B70582a;
case 0x70582b:c.instructions+=1;goto B70582b;
case 0x70582d:goto L70582d;
case 0x70582e:c.instructions+=1;goto B70582e;
case 0x70582f:goto L70582f;
case 0x705832:c.instructions+=4;goto B705832;
case 0x705834:c.instructions+=3;goto B705834;
case 0x705837:c.instructions+=2;goto B705837;
case 0x705838:c.instructions+=1;goto B705838;
case 0x705839:goto L705839;
case 0x70583a:c.instructions+=8;goto B70583a;
case 0x70583c:c.instructions+=7;goto B70583c;
case 0x70583f:c.instructions+=6;goto B70583f;
case 0x705840:c.instructions+=5;goto B705840;
case 0x705841:c.instructions+=4;goto B705841;
case 0x705844:c.instructions+=3;goto B705844;
case 0x705846:c.instructions+=2;goto B705846;
case 0x705848:c.instructions+=1;goto B705848;
case 0x70584a:goto L70584a;
case 0x70584d:c.instructions+=2;goto B70584d;
case 0x70584f:c.instructions+=1;goto B70584f;
case 0x705850:goto L705850;
case 0x705854:c.instructions+=8;goto B705854;
case 0x705857:c.instructions+=7;goto B705857;
case 0x70585b:c.instructions+=6;goto B70585b;
case 0x70585d:c.instructions+=5;goto B70585d;
case 0x70585e:c.instructions+=4;goto B70585e;
case 0x705860:c.instructions+=3;goto B705860;
case 0x705861:c.instructions+=2;goto B705861;
case 0x705862:c.instructions+=1;goto B705862;
case 0x705864:goto L705864;
case 0x705865:goto L705865;
case 0x705866:c.instructions+=3;goto B705866;
case 0x705867:c.instructions+=2;goto B705867;
case 0x705868:c.instructions+=1;goto B705868;
case 0x705869:goto L705869;
case 0x70586a:c.instructions+=5;goto B70586a;
case 0x70586c:c.instructions+=4;goto B70586c;
case 0x70586f:c.instructions+=3;goto B70586f;
case 0x705871:c.instructions+=2;goto B705871;
case 0x705874:c.instructions+=1;goto B705874;
case 0x705876:goto L705876;
case 0x705877:goto L705877;
case 0x705879:c.instructions+=5;goto B705879;
case 0x70587c:c.instructions+=4;goto B70587c;
case 0x70587f:c.instructions+=3;goto B70587f;
case 0x705880:c.instructions+=2;goto B705880;
case 0x705881:c.instructions+=1;goto B705881;
case 0x705883:goto L705883;
case 0x705884:goto L705884;
case 0x705885:c.instructions+=1;goto B705885;
case 0x705886:goto L705886;
case 0x705887:c.instructions+=20;goto B705887;
case 0x705889:c.instructions+=19;goto B705889;
case 0x70588c:c.instructions+=18;goto B70588c;
case 0x70588f:c.instructions+=17;goto B70588f;
case 0x705891:c.instructions+=16;goto B705891;
case 0x705894:c.instructions+=15;goto B705894;
case 0x705898:c.instructions+=14;goto B705898;
case 0x70589c:c.instructions+=13;goto B70589c;
case 0x70589d:c.instructions+=12;goto B70589d;
case 0x7058a0:c.instructions+=11;goto B7058a0;
case 0x7058a4:c.instructions+=10;goto B7058a4;
case 0x7058a7:c.instructions+=9;goto B7058a7;
case 0x7058aa:c.instructions+=8;goto B7058aa;
case 0x7058ab:c.instructions+=7;goto B7058ab;
case 0x7058ad:c.instructions+=6;goto B7058ad;
case 0x7058af:c.instructions+=5;goto B7058af;
case 0x7058b1:c.instructions+=4;goto B7058b1;
case 0x7058b3:c.instructions+=3;goto B7058b3;
case 0x7058b5:c.instructions+=2;goto B7058b5;
case 0x7058b8:c.instructions+=1;goto B7058b8;
case 0x7058ba:goto L7058ba;
case 0x7058bb:goto L7058bb;
case 0x7058bf:c.instructions+=16;goto B7058bf;
case 0x7058c3:c.instructions+=15;goto B7058c3;
case 0x7058c7:c.instructions+=14;goto B7058c7;
case 0x7058ca:c.instructions+=13;goto B7058ca;
case 0x7058cc:c.instructions+=12;goto B7058cc;
case 0x7058ce:c.instructions+=11;goto B7058ce;
case 0x7058d0:c.instructions+=10;goto B7058d0;
case 0x7058d3:c.instructions+=9;goto B7058d3;
case 0x7058d6:c.instructions+=8;goto B7058d6;
case 0x7058d9:c.instructions+=7;goto B7058d9;
case 0x7058dc:c.instructions+=6;goto B7058dc;
case 0x7058df:c.instructions+=5;goto B7058df;
case 0x7058e2:c.instructions+=4;goto B7058e2;
case 0x7058e5:c.instructions+=3;goto B7058e5;
case 0x7058e7:c.instructions+=2;goto B7058e7;
case 0x7058ea:c.instructions+=1;goto B7058ea;
case 0x7058ec:goto L7058ec;
case 0x7058ee:c.instructions+=8;goto B7058ee;
case 0x7058f1:c.instructions+=7;goto B7058f1;
case 0x7058f4:c.instructions+=6;goto B7058f4;
case 0x7058f7:c.instructions+=5;goto B7058f7;
case 0x7058f9:c.instructions+=4;goto B7058f9;
case 0x7058fc:c.instructions+=3;goto B7058fc;
case 0x7058fe:c.instructions+=2;goto B7058fe;
case 0x705901:c.instructions+=1;goto B705901;
case 0x705903:goto L705903;
case 0x705906:c.instructions+=4;goto B705906;
case 0x705909:c.instructions+=3;goto B705909;
case 0x70590b:c.instructions+=2;goto B70590b;
case 0x70590e:c.instructions+=1;goto B70590e;
case 0x705910:goto L705910;
case 0x705911:goto L705911;
case 0x705912:c.instructions+=3;goto B705912;
case 0x705913:c.instructions+=2;goto B705913;
case 0x705914:c.instructions+=1;goto B705914;
case 0x705915:goto L705915;
case 0x705916:c.instructions+=15;goto B705916;
case 0x705918:c.instructions+=14;goto B705918;
case 0x70591b:c.instructions+=13;goto B70591b;
case 0x70591d:c.instructions+=12;goto B70591d;
case 0x705920:c.instructions+=11;goto B705920;
case 0x705921:c.instructions+=10;goto B705921;
case 0x705924:c.instructions+=9;goto B705924;
case 0x705926:c.instructions+=8;goto B705926;
case 0x705929:c.instructions+=7;goto B705929;
case 0x70592a:c.instructions+=6;goto B70592a;
case 0x70592c:c.instructions+=5;goto B70592c;
case 0x705930:c.instructions+=4;goto B705930;
case 0x705932:c.instructions+=3;goto B705932;
case 0x705934:c.instructions+=2;goto B705934;
case 0x705937:c.instructions+=1;goto B705937;
case 0x705939:goto L705939;
case 0x70593c:c.instructions+=2;goto B70593c;
case 0x70593f:c.instructions+=1;goto B70593f;
case 0x705940:goto L705940;
case 0x705943:c.instructions+=18;goto B705943;
case 0x705946:c.instructions+=17;goto B705946;
case 0x705949:c.instructions+=16;goto B705949;
case 0x70594c:c.instructions+=15;goto B70594c;
case 0x70594f:c.instructions+=14;goto B70594f;
case 0x705951:c.instructions+=13;goto B705951;
case 0x705954:c.instructions+=12;goto B705954;
case 0x705957:c.instructions+=11;goto B705957;
case 0x70595a:c.instructions+=10;goto B70595a;
case 0x70595e:c.instructions+=9;goto B70595e;
case 0x705961:c.instructions+=8;goto B705961;
case 0x705964:c.instructions+=7;goto B705964;
case 0x705967:c.instructions+=6;goto B705967;
case 0x70596a:c.instructions+=5;goto B70596a;
case 0x70596d:c.instructions+=4;goto B70596d;
case 0x70596f:c.instructions+=3;goto B70596f;
case 0x705971:c.instructions+=2;goto B705971;
case 0x705974:c.instructions+=1;goto B705974;
case 0x705976:goto L705976;
case 0x705977:goto L705977;
case 0x705978:c.instructions+=3;goto B705978;
case 0x705979:c.instructions+=2;goto B705979;
case 0x70597a:c.instructions+=1;goto B70597a;
case 0x70597b:goto L70597b;
case 0x70597c:c.instructions+=9;goto B70597c;
case 0x70597e:c.instructions+=8;goto B70597e;
case 0x705981:c.instructions+=7;goto B705981;
case 0x705985:c.instructions+=6;goto B705985;
case 0x705986:c.instructions+=5;goto B705986;
case 0x705989:c.instructions+=4;goto B705989;
case 0x70598b:c.instructions+=3;goto B70598b;
case 0x70598d:c.instructions+=2;goto B70598d;
case 0x70598f:c.instructions+=1;goto B70598f;
case 0x705991:goto L705991;
case 0x705992:c.instructions+=2;goto B705992;
case 0x705993:c.instructions+=1;goto B705993;
case 0x705996:goto L705996;
case 0x705998:c.instructions+=6;goto B705998;
case 0x70599b:c.instructions+=5;goto B70599b;
case 0x70599e:c.instructions+=4;goto B70599e;
case 0x7059a1:c.instructions+=3;goto B7059a1;
case 0x7059a3:c.instructions+=2;goto B7059a3;
case 0x7059a5:c.instructions+=1;goto B7059a5;
case 0x7059a7:goto L7059a7;
case 0x7059a8:c.instructions+=1;goto B7059a8;
case 0x7059a9:goto L7059a9;
case 0x7059aa:c.instructions+=2;goto B7059aa;
case 0x7059ab:c.instructions+=1;goto B7059ab;
case 0x7059ac:goto L7059ac;
case 0x7059ad:c.instructions+=8;goto B7059ad;
case 0x7059af:c.instructions+=7;goto B7059af;
case 0x7059b2:c.instructions+=6;goto B7059b2;
case 0x7059b6:c.instructions+=5;goto B7059b6;
case 0x7059bb:c.instructions+=4;goto B7059bb;
case 0x7059be:c.instructions+=3;goto B7059be;
case 0x7059c1:c.instructions+=2;goto B7059c1;
case 0x7059c6:c.instructions+=1;goto B7059c6;
case 0x7059c8:goto L7059c8;
case 0x7059cc:c.instructions+=1;goto B7059cc;
case 0x7059ce:goto L7059ce;
case 0x7059d1:goto L7059d1;
case 0x7059d5:c.instructions+=1;goto B7059d5;
case 0x7059d7:goto L7059d7;
case 0x7059db:c.instructions+=1;goto B7059db;
case 0x7059dd:goto L7059dd;
case 0x7059e1:c.instructions+=2;goto B7059e1;
case 0x7059e4:c.instructions+=1;goto B7059e4;
case 0x7059e6:goto L7059e6;
case 0x7059ed:goto L7059ed;
case 0x7059ee:c.instructions+=5;goto B7059ee;
case 0x7059f1:c.instructions+=4;goto B7059f1;
case 0x7059f4:c.instructions+=3;goto B7059f4;
case 0x7059f5:c.instructions+=2;goto B7059f5;
case 0x7059f6:c.instructions+=1;goto B7059f6;
case 0x7059f8:goto L7059f8;
case 0x7059fa:c.instructions+=1;goto B7059fa;
case 0x705a00:goto L705a00;
case 0x705a03:c.instructions+=4;goto B705a03;
case 0x705a06:c.instructions+=3;goto B705a06;
case 0x705a09:c.instructions+=2;goto B705a09;
case 0x705a0c:c.instructions+=1;goto B705a0c;
case 0x705a0d:goto L705a0d;
case 0x705a10:c.instructions+=8;goto B705a10;
case 0x705a13:c.instructions+=7;goto B705a13;
case 0x705a15:c.instructions+=6;goto B705a15;
case 0x705a16:c.instructions+=5;goto B705a16;
case 0x705a17:c.instructions+=4;goto B705a17;
case 0x705a1a:c.instructions+=3;goto B705a1a;
case 0x705a1c:c.instructions+=2;goto B705a1c;
case 0x705a1d:c.instructions+=1;goto B705a1d;
case 0x705a20:goto L705a20;
case 0x705a23:c.instructions+=4;goto B705a23;
case 0x705a26:c.instructions+=3;goto B705a26;
case 0x705a29:c.instructions+=2;goto B705a29;
case 0x705a2c:c.instructions+=1;goto B705a2c;
case 0x705a2e:goto L705a2e;
case 0x705a33:goto L705a33;
case 0x705a35:goto L705a35;
case 0x705a39:c.instructions+=8;goto B705a39;
case 0x705a3a:c.instructions+=7;goto B705a3a;
case 0x705a3c:c.instructions+=6;goto B705a3c;
case 0x705a40:c.instructions+=5;goto B705a40;
case 0x705a42:c.instructions+=4;goto B705a42;
case 0x705a44:c.instructions+=3;goto B705a44;
case 0x705a47:c.instructions+=2;goto B705a47;
case 0x705a4a:c.instructions+=1;goto B705a4a;
case 0x705a4c:goto L705a4c;
case 0x705a50:c.instructions+=7;goto B705a50;
case 0x705a51:c.instructions+=6;goto B705a51;
case 0x705a54:c.instructions+=5;goto B705a54;
case 0x705a58:c.instructions+=4;goto B705a58;
case 0x705a5a:c.instructions+=3;goto B705a5a;
case 0x705a5d:c.instructions+=2;goto B705a5d;
case 0x705a60:c.instructions+=1;goto B705a60;
case 0x705a62:goto L705a62;
case 0x705a65:c.instructions+=12;goto B705a65;
case 0x705a68:c.instructions+=11;goto B705a68;
case 0x705a6b:c.instructions+=10;goto B705a6b;
case 0x705a6e:c.instructions+=9;goto B705a6e;
case 0x705a70:c.instructions+=8;goto B705a70;
case 0x705a71:c.instructions+=7;goto B705a71;
case 0x705a72:c.instructions+=6;goto B705a72;
case 0x705a73:c.instructions+=5;goto B705a73;
case 0x705a76:c.instructions+=4;goto B705a76;
case 0x705a79:c.instructions+=3;goto B705a79;
case 0x705a7b:c.instructions+=2;goto B705a7b;
case 0x705a7e:c.instructions+=1;goto B705a7e;
case 0x705a81:goto L705a81;
case 0x705a83:c.instructions+=5;goto B705a83;
case 0x705a87:c.instructions+=4;goto B705a87;
case 0x705a89:c.instructions+=3;goto B705a89;
case 0x705a8c:c.instructions+=2;goto B705a8c;
case 0x705a8e:c.instructions+=1;goto B705a8e;
case 0x705a94:goto L705a94;
case 0x705a97:c.instructions+=20;goto B705a97;
case 0x705a99:c.instructions+=19;goto B705a99;
case 0x705a9d:c.instructions+=18;goto B705a9d;
case 0x705a9f:c.instructions+=17;goto B705a9f;
case 0x705aa2:c.instructions+=16;goto B705aa2;
case 0x705aa5:c.instructions+=15;goto B705aa5;
case 0x705aa8:c.instructions+=14;goto B705aa8;
case 0x705aab:c.instructions+=13;goto B705aab;
case 0x705aae:c.instructions+=12;goto B705aae;
case 0x705ab0:c.instructions+=11;goto B705ab0;
case 0x705ab4:c.instructions+=10;goto B705ab4;
case 0x705ab7:c.instructions+=9;goto B705ab7;
case 0x705aba:c.instructions+=8;goto B705aba;
case 0x705abc:c.instructions+=7;goto B705abc;
case 0x705abe:c.instructions+=6;goto B705abe;
case 0x705ac0:c.instructions+=5;goto B705ac0;
case 0x705ac1:c.instructions+=4;goto B705ac1;
case 0x705ac4:c.instructions+=3;goto B705ac4;
case 0x705ac7:c.instructions+=2;goto B705ac7;
case 0x705aca:c.instructions+=1;goto B705aca;
case 0x705acc:goto L705acc;
case 0x705acf:c.instructions+=1;goto B705acf;
case 0x705ad2:goto L705ad2;
case 0x705ad5:c.instructions+=3;goto B705ad5;
case 0x705ad6:c.instructions+=2;goto B705ad6;
case 0x705ad9:c.instructions+=1;goto B705ad9;
case 0x705adb:goto L705adb;
case 0x705ade:c.instructions+=7;goto B705ade;
case 0x705ae1:c.instructions+=6;goto B705ae1;
case 0x705ae3:c.instructions+=5;goto B705ae3;
case 0x705ae4:c.instructions+=4;goto B705ae4;
case 0x705ae7:c.instructions+=3;goto B705ae7;
case 0x705aea:c.instructions+=2;goto B705aea;
case 0x705aed:c.instructions+=1;goto B705aed;
case 0x705af0:goto L705af0;
case 0x705af3:c.instructions+=2;goto B705af3;
case 0x705af6:c.instructions+=1;goto B705af6;
case 0x705af8:goto L705af8;
case 0x705afb:c.instructions+=8;goto B705afb;
case 0x705afe:c.instructions+=7;goto B705afe;
case 0x705b00:c.instructions+=6;goto B705b00;
case 0x705b03:c.instructions+=5;goto B705b03;
case 0x705b06:c.instructions+=4;goto B705b06;
case 0x705b09:c.instructions+=3;goto B705b09;
case 0x705b0b:c.instructions+=2;goto B705b0b;
case 0x705b0e:c.instructions+=1;goto B705b0e;
case 0x705b11:goto L705b11;
case 0x705b14:c.instructions+=1;goto B705b14;
case 0x705b16:goto L705b16;
case 0x705b19:c.instructions+=4;goto B705b19;
case 0x705b1c:c.instructions+=3;goto B705b1c;
case 0x705b1f:c.instructions+=2;goto B705b1f;
case 0x705b21:c.instructions+=1;goto B705b21;
case 0x705b24:goto L705b24;
case 0x705b26:goto L705b26;
case 0x705b28:c.instructions+=1;goto B705b28;
case 0x705b2b:goto L705b2b;
case 0x705b2d:goto L705b2d;
case 0x705b30:c.instructions+=1;goto B705b30;
case 0x705b33:goto L705b33;
case 0x705b36:c.instructions+=7;goto B705b36;
case 0x705b39:c.instructions+=6;goto B705b39;
case 0x705b3c:c.instructions+=5;goto B705b3c;
case 0x705b3f:c.instructions+=4;goto B705b3f;
case 0x705b42:c.instructions+=3;goto B705b42;
case 0x705b45:c.instructions+=2;goto B705b45;
case 0x705b48:c.instructions+=1;goto B705b48;
case 0x705b4a:goto L705b4a;
case 0x705b4d:c.instructions+=2;goto B705b4d;
case 0x705b4f:c.instructions+=1;goto B705b4f;
case 0x705b51:goto L705b51;
case 0x705b54:c.instructions+=1;goto B705b54;
case 0x705b57:goto L705b57;
case 0x705b5a:c.instructions+=12;goto B705b5a;
case 0x705b5b:c.instructions+=11;goto B705b5b;
case 0x705b5e:c.instructions+=10;goto B705b5e;
case 0x705b61:c.instructions+=9;goto B705b61;
case 0x705b64:c.instructions+=8;goto B705b64;
case 0x705b65:c.instructions+=7;goto B705b65;
case 0x705b68:c.instructions+=6;goto B705b68;
case 0x705b69:c.instructions+=5;goto B705b69;
case 0x705b6a:c.instructions+=4;goto B705b6a;
case 0x705b6d:c.instructions+=3;goto B705b6d;
case 0x705b70:c.instructions+=2;goto B705b70;
case 0x705b71:c.instructions+=1;goto B705b71;
case 0x705b74:goto L705b74;
case 0x705b77:c.instructions+=3;goto B705b77;
case 0x705b7a:c.instructions+=2;goto B705b7a;
case 0x705b7d:c.instructions+=1;goto B705b7d;
case 0x705b7f:goto L705b7f;
case 0x705b82:c.instructions+=6;goto B705b82;
case 0x705b85:c.instructions+=5;goto B705b85;
case 0x705b88:c.instructions+=4;goto B705b88;
case 0x705b8b:c.instructions+=3;goto B705b8b;
case 0x705b8e:c.instructions+=2;goto B705b8e;
case 0x705b90:c.instructions+=1;goto B705b90;
case 0x705b93:goto L705b93;
case 0x705b95:goto L705b95;
case 0x705b97:c.instructions+=1;goto B705b97;
case 0x705b9a:goto L705b9a;
case 0x705b9c:goto L705b9c;
case 0x705b9f:c.instructions+=5;goto B705b9f;
case 0x705ba2:c.instructions+=4;goto B705ba2;
case 0x705ba5:c.instructions+=3;goto B705ba5;
case 0x705ba8:c.instructions+=2;goto B705ba8;
case 0x705bab:c.instructions+=1;goto B705bab;
case 0x705bb1:goto L705bb1;
case 0x705bb2:c.instructions+=4;goto B705bb2;
case 0x705bb3:c.instructions+=3;goto B705bb3;
case 0x705bb4:c.instructions+=2;goto B705bb4;
case 0x705bb5:c.instructions+=1;goto B705bb5;
case 0x705bb6:goto L705bb6;
case 0x705bb7:c.instructions+=39;goto B705bb7;
case 0x705bb9:c.instructions+=38;goto B705bb9;
case 0x705bbc:c.instructions+=37;goto B705bbc;
case 0x705bbd:c.instructions+=36;goto B705bbd;
case 0x705bbe:c.instructions+=35;goto B705bbe;
case 0x705bc1:c.instructions+=34;goto B705bc1;
case 0x705bc3:c.instructions+=33;goto B705bc3;
case 0x705bc4:c.instructions+=32;goto B705bc4;
case 0x705bc7:c.instructions+=31;goto B705bc7;
case 0x705bc9:c.instructions+=30;goto B705bc9;
case 0x705bcd:c.instructions+=29;goto B705bcd;
case 0x705bd1:c.instructions+=28;goto B705bd1;
case 0x705bd3:c.instructions+=27;goto B705bd3;
case 0x705bd5:c.instructions+=26;goto B705bd5;
case 0x705bd8:c.instructions+=25;goto B705bd8;
case 0x705bdb:c.instructions+=24;goto B705bdb;
case 0x705bde:c.instructions+=23;goto B705bde;
case 0x705be1:c.instructions+=22;goto B705be1;
case 0x705be4:c.instructions+=21;goto B705be4;
case 0x705be7:c.instructions+=20;goto B705be7;
case 0x705bea:c.instructions+=19;goto B705bea;
case 0x705bed:c.instructions+=18;goto B705bed;
case 0x705bf0:c.instructions+=17;goto B705bf0;
case 0x705bf3:c.instructions+=16;goto B705bf3;
case 0x705bf6:c.instructions+=15;goto B705bf6;
case 0x705bf8:c.instructions+=14;goto B705bf8;
case 0x705bfc:c.instructions+=13;goto B705bfc;
case 0x705c00:c.instructions+=12;goto B705c00;
case 0x705c02:c.instructions+=11;goto B705c02;
case 0x705c05:c.instructions+=10;goto B705c05;
case 0x705c06:c.instructions+=9;goto B705c06;
case 0x705c09:c.instructions+=8;goto B705c09;
case 0x705c0c:c.instructions+=7;goto B705c0c;
case 0x705c0f:c.instructions+=6;goto B705c0f;
case 0x705c12:c.instructions+=5;goto B705c12;
case 0x705c13:c.instructions+=4;goto B705c13;
case 0x705c14:c.instructions+=3;goto B705c14;
case 0x705c17:c.instructions+=2;goto B705c17;
case 0x705c1a:c.instructions+=1;goto B705c1a;
case 0x705c1f:goto L705c1f;
case 0x705c22:c.instructions+=3;goto B705c22;
case 0x705c25:c.instructions+=2;goto B705c25;
case 0x705c27:c.instructions+=1;goto B705c27;
case 0x705c29:goto L705c29;
case 0x705c2d:c.instructions+=2;goto B705c2d;
case 0x705c31:c.instructions+=1;goto B705c31;
case 0x705c33:goto L705c33;
case 0x705c36:c.instructions+=18;goto B705c36;
case 0x705c3a:c.instructions+=17;goto B705c3a;
case 0x705c3d:c.instructions+=16;goto B705c3d;
case 0x705c40:c.instructions+=15;goto B705c40;
case 0x705c43:c.instructions+=14;goto B705c43;
case 0x705c47:c.instructions+=13;goto B705c47;
case 0x705c49:c.instructions+=12;goto B705c49;
case 0x705c4c:c.instructions+=11;goto B705c4c;
case 0x705c4f:c.instructions+=10;goto B705c4f;
case 0x705c51:c.instructions+=9;goto B705c51;
case 0x705c53:c.instructions+=8;goto B705c53;
case 0x705c54:c.instructions+=7;goto B705c54;
case 0x705c57:c.instructions+=6;goto B705c57;
case 0x705c59:c.instructions+=5;goto B705c59;
case 0x705c5c:c.instructions+=4;goto B705c5c;
case 0x705c5e:c.instructions+=3;goto B705c5e;
case 0x705c61:c.instructions+=2;goto B705c61;
case 0x705c64:c.instructions+=1;goto B705c64;
case 0x705c67:goto L705c67;
case 0x705c69:goto L705c69;
case 0x705c6b:c.instructions+=2;goto B705c6b;
case 0x705c6e:c.instructions+=1;goto B705c6e;
case 0x705c71:goto L705c71;
case 0x705c73:goto L705c73;
case 0x705c76:c.instructions+=2;goto B705c76;
case 0x705c79:c.instructions+=1;goto B705c79;
case 0x705c7b:goto L705c7b;
case 0x705c7e:goto L705c7e;
case 0x705c81:c.instructions+=3;goto B705c81;
case 0x705c84:c.instructions+=2;goto B705c84;
case 0x705c86:c.instructions+=1;goto B705c86;
case 0x705c88:goto L705c88;
case 0x705c8b:c.instructions+=2;goto B705c8b;
case 0x705c8d:c.instructions+=1;goto B705c8d;
case 0x705c8f:goto L705c8f;
case 0x705c92:c.instructions+=1;goto B705c92;
case 0x705c95:goto L705c95;
case 0x705c98:c.instructions+=10;goto B705c98;
case 0x705c9b:c.instructions+=9;goto B705c9b;
case 0x705c9d:c.instructions+=8;goto B705c9d;
case 0x705c9f:c.instructions+=7;goto B705c9f;
case 0x705ca2:c.instructions+=6;goto B705ca2;
case 0x705ca6:c.instructions+=5;goto B705ca6;
case 0x705ca7:c.instructions+=4;goto B705ca7;
case 0x705ca9:c.instructions+=3;goto B705ca9;
case 0x705cab:c.instructions+=2;goto B705cab;
case 0x705cad:c.instructions+=1;goto B705cad;
case 0x705cb0:goto L705cb0;
case 0x705cb2:goto L705cb2;
case 0x705cb4:c.instructions+=2;goto B705cb4;
case 0x705cb7:c.instructions+=1;goto B705cb7;
case 0x705cb8:goto L705cb8;
case 0x705cba:goto L705cba;
case 0x705cbd:c.instructions+=1;goto B705cbd;
case 0x705cbf:goto L705cbf;
case 0x705cc2:goto L705cc2;
case 0x705cc5:c.instructions+=26;goto B705cc5;
case 0x705cc8:c.instructions+=25;goto B705cc8;
case 0x705ccb:c.instructions+=24;goto B705ccb;
case 0x705ccc:c.instructions+=23;goto B705ccc;
case 0x705ccf:c.instructions+=22;goto B705ccf;
case 0x705cd1:c.instructions+=21;goto B705cd1;
case 0x705cd4:c.instructions+=20;goto B705cd4;
case 0x705cd7:c.instructions+=19;goto B705cd7;
case 0x705cda:c.instructions+=18;goto B705cda;
case 0x705cdd:c.instructions+=17;goto B705cdd;
case 0x705ce0:c.instructions+=16;goto B705ce0;
case 0x705ce3:c.instructions+=15;goto B705ce3;
case 0x705ce6:c.instructions+=14;goto B705ce6;
case 0x705ce7:c.instructions+=13;goto B705ce7;
case 0x705cea:c.instructions+=12;goto B705cea;
case 0x705cec:c.instructions+=11;goto B705cec;
case 0x705cee:c.instructions+=10;goto B705cee;
case 0x705cf0:c.instructions+=9;goto B705cf0;
case 0x705cf1:c.instructions+=8;goto B705cf1;
case 0x705cf4:c.instructions+=7;goto B705cf4;
case 0x705cf7:c.instructions+=6;goto B705cf7;
case 0x705cfa:c.instructions+=5;goto B705cfa;
case 0x705cfd:c.instructions+=4;goto B705cfd;
case 0x705d00:c.instructions+=3;goto B705d00;
case 0x705d03:c.instructions+=2;goto B705d03;
case 0x705d06:c.instructions+=1;goto B705d06;
case 0x705d0b:goto L705d0b;
case 0x705d0e:c.instructions+=2;goto B705d0e;
case 0x705d11:c.instructions+=1;goto B705d11;
case 0x705d13:goto L705d13;
case 0x705d17:c.instructions+=2;goto B705d17;
case 0x705d1b:c.instructions+=1;goto B705d1b;
case 0x705d1d:goto L705d1d;
case 0x705d20:c.instructions+=17;goto B705d20;
case 0x705d24:c.instructions+=16;goto B705d24;
case 0x705d27:c.instructions+=15;goto B705d27;
case 0x705d2a:c.instructions+=14;goto B705d2a;
case 0x705d2d:c.instructions+=13;goto B705d2d;
case 0x705d31:c.instructions+=12;goto B705d31;
case 0x705d34:c.instructions+=11;goto B705d34;
case 0x705d36:c.instructions+=10;goto B705d36;
case 0x705d38:c.instructions+=9;goto B705d38;
case 0x705d3a:c.instructions+=8;goto B705d3a;
case 0x705d3b:c.instructions+=7;goto B705d3b;
case 0x705d3e:c.instructions+=6;goto B705d3e;
case 0x705d40:c.instructions+=5;goto B705d40;
case 0x705d43:c.instructions+=4;goto B705d43;
case 0x705d45:c.instructions+=3;goto B705d45;
case 0x705d48:c.instructions+=2;goto B705d48;
case 0x705d4b:c.instructions+=1;goto B705d4b;
case 0x705d4e:goto L705d4e;
case 0x705d50:goto L705d50;
case 0x705d52:c.instructions+=2;goto B705d52;
case 0x705d55:c.instructions+=1;goto B705d55;
case 0x705d58:goto L705d58;
case 0x705d5a:goto L705d5a;
case 0x705d5d:c.instructions+=3;goto B705d5d;
case 0x705d60:c.instructions+=2;goto B705d60;
case 0x705d63:c.instructions+=1;goto B705d63;
case 0x705d65:goto L705d65;
case 0x705d68:goto L705d68;
case 0x705d6b:c.instructions+=2;goto B705d6b;
case 0x705d6e:c.instructions+=1;goto B705d6e;
case 0x705d70:goto L705d70;
case 0x705d73:c.instructions+=7;goto B705d73;
case 0x705d76:c.instructions+=6;goto B705d76;
case 0x705d79:c.instructions+=5;goto B705d79;
case 0x705d7a:c.instructions+=4;goto B705d7a;
case 0x705d7c:c.instructions+=3;goto B705d7c;
case 0x705d7e:c.instructions+=2;goto B705d7e;
case 0x705d81:c.instructions+=1;goto B705d81;
case 0x705d83:goto L705d83;
case 0x705d86:c.instructions+=11;goto B705d86;
case 0x705d89:c.instructions+=10;goto B705d89;
case 0x705d8c:c.instructions+=9;goto B705d8c;
case 0x705d8f:c.instructions+=8;goto B705d8f;
case 0x705d91:c.instructions+=7;goto B705d91;
case 0x705d95:c.instructions+=6;goto B705d95;
case 0x705d98:c.instructions+=5;goto B705d98;
case 0x705d9b:c.instructions+=4;goto B705d9b;
case 0x705d9d:c.instructions+=3;goto B705d9d;
case 0x705d9f:c.instructions+=2;goto B705d9f;
case 0x705da1:c.instructions+=1;goto B705da1;
case 0x705da4:goto L705da4;
case 0x705da6:goto L705da6;
case 0x705da8:c.instructions+=2;goto B705da8;
case 0x705dab:c.instructions+=1;goto B705dab;
case 0x705dae:goto L705dae;
case 0x705db0:goto L705db0;
case 0x705db3:c.instructions+=5;goto B705db3;
case 0x705db4:c.instructions+=4;goto B705db4;
case 0x705db6:c.instructions+=3;goto B705db6;
case 0x705db8:c.instructions+=2;goto B705db8;
case 0x705dbb:c.instructions+=1;goto B705dbb;
case 0x705dbd:goto L705dbd;
case 0x705dc0:c.instructions+=2;goto B705dc0;
case 0x705dc3:c.instructions+=1;goto B705dc3;
case 0x705dc6:goto L705dc6;
case 0x705dc9:c.instructions+=15;goto B705dc9;
case 0x705dcc:c.instructions+=14;goto B705dcc;
case 0x705dcf:c.instructions+=13;goto B705dcf;
case 0x705dd2:c.instructions+=12;goto B705dd2;
case 0x705dd5:c.instructions+=11;goto B705dd5;
case 0x705dd8:c.instructions+=10;goto B705dd8;
case 0x705ddb:c.instructions+=9;goto B705ddb;
case 0x705ddc:c.instructions+=8;goto B705ddc;
case 0x705ddd:c.instructions+=7;goto B705ddd;
case 0x705de0:c.instructions+=6;goto B705de0;
case 0x705de3:c.instructions+=5;goto B705de3;
case 0x705de6:c.instructions+=4;goto B705de6;
case 0x705de9:c.instructions+=3;goto B705de9;
case 0x705dec:c.instructions+=2;goto B705dec;
case 0x705def:c.instructions+=1;goto B705def;
case 0x705df4:goto L705df4;
case 0x705df7:c.instructions+=2;goto B705df7;
case 0x705dfa:c.instructions+=1;goto B705dfa;
case 0x705dfc:goto L705dfc;
case 0x705e00:c.instructions+=2;goto B705e00;
case 0x705e04:c.instructions+=1;goto B705e04;
case 0x705e06:goto L705e06;
case 0x705e08:goto L705e08;
case 0x705e0b:goto L705e0b;
case 0x705e0e:c.instructions+=17;goto B705e0e;
case 0x705e12:c.instructions+=16;goto B705e12;
case 0x705e15:c.instructions+=15;goto B705e15;
case 0x705e18:c.instructions+=14;goto B705e18;
case 0x705e1b:c.instructions+=13;goto B705e1b;
case 0x705e1f:c.instructions+=12;goto B705e1f;
case 0x705e22:c.instructions+=11;goto B705e22;
case 0x705e24:c.instructions+=10;goto B705e24;
case 0x705e26:c.instructions+=9;goto B705e26;
case 0x705e28:c.instructions+=8;goto B705e28;
case 0x705e29:c.instructions+=7;goto B705e29;
case 0x705e2c:c.instructions+=6;goto B705e2c;
case 0x705e2e:c.instructions+=5;goto B705e2e;
case 0x705e31:c.instructions+=4;goto B705e31;
case 0x705e33:c.instructions+=3;goto B705e33;
case 0x705e36:c.instructions+=2;goto B705e36;
case 0x705e39:c.instructions+=1;goto B705e39;
case 0x705e3c:goto L705e3c;
case 0x705e3e:goto L705e3e;
case 0x705e40:c.instructions+=2;goto B705e40;
case 0x705e43:c.instructions+=1;goto B705e43;
case 0x705e46:goto L705e46;
case 0x705e48:goto L705e48;
case 0x705e4b:c.instructions+=2;goto B705e4b;
case 0x705e4e:c.instructions+=1;goto B705e4e;
case 0x705e50:goto L705e50;
case 0x705e53:c.instructions+=2;goto B705e53;
case 0x705e56:c.instructions+=1;goto B705e56;
case 0x705e58:goto L705e58;
case 0x705e5b:c.instructions+=7;goto B705e5b;
case 0x705e5c:c.instructions+=6;goto B705e5c;
case 0x705e5e:c.instructions+=5;goto B705e5e;
case 0x705e61:c.instructions+=4;goto B705e61;
case 0x705e63:c.instructions+=3;goto B705e63;
case 0x705e65:c.instructions+=2;goto B705e65;
case 0x705e68:c.instructions+=1;goto B705e68;
case 0x705e6a:goto L705e6a;
case 0x705e6d:c.instructions+=1;goto B705e6d;
case 0x705e70:goto L705e70;
case 0x705e73:c.instructions+=9;goto B705e73;
case 0x705e76:c.instructions+=8;goto B705e76;
case 0x705e79:c.instructions+=7;goto B705e79;
case 0x705e7b:c.instructions+=6;goto B705e7b;
case 0x705e7f:c.instructions+=5;goto B705e7f;
case 0x705e83:c.instructions+=4;goto B705e83;
case 0x705e85:c.instructions+=3;goto B705e85;
case 0x705e87:c.instructions+=2;goto B705e87;
case 0x705e89:c.instructions+=1;goto B705e89;
case 0x705e8c:goto L705e8c;
case 0x705e8e:goto L705e8e;
case 0x705e90:c.instructions+=2;goto B705e90;
case 0x705e93:c.instructions+=1;goto B705e93;
case 0x705e96:goto L705e96;
case 0x705e98:goto L705e98;
case 0x705e9b:c.instructions+=5;goto B705e9b;
case 0x705e9c:c.instructions+=4;goto B705e9c;
case 0x705e9e:c.instructions+=3;goto B705e9e;
case 0x705ea0:c.instructions+=2;goto B705ea0;
case 0x705ea3:c.instructions+=1;goto B705ea3;
case 0x705ea5:goto L705ea5;
case 0x705ea6:c.instructions+=4;goto B705ea6;
case 0x705ea7:c.instructions+=3;goto B705ea7;
case 0x705ea8:c.instructions+=2;goto B705ea8;
case 0x705ea9:c.instructions+=1;goto B705ea9;
case 0x705eaa:goto L705eaa;
case 0x705eab:c.instructions+=28;goto B705eab;
case 0x705ead:c.instructions+=27;goto B705ead;
case 0x705eae:c.instructions+=26;goto B705eae;
case 0x705eaf:c.instructions+=25;goto B705eaf;
case 0x705eb0:c.instructions+=24;goto B705eb0;
case 0x705eb1:c.instructions+=23;goto B705eb1;
case 0x705eb4:c.instructions+=22;goto B705eb4;
case 0x705eb7:c.instructions+=21;goto B705eb7;
case 0x705eba:c.instructions+=20;goto B705eba;
case 0x705ebb:c.instructions+=19;goto B705ebb;
case 0x705ebe:c.instructions+=18;goto B705ebe;
case 0x705ec1:c.instructions+=17;goto B705ec1;
case 0x705ec3:c.instructions+=16;goto B705ec3;
case 0x705ec4:c.instructions+=15;goto B705ec4;
case 0x705ec5:c.instructions+=14;goto B705ec5;
case 0x705ec6:c.instructions+=13;goto B705ec6;
case 0x705ec9:c.instructions+=12;goto B705ec9;
case 0x705ecc:c.instructions+=11;goto B705ecc;
case 0x705ecd:c.instructions+=10;goto B705ecd;
case 0x705ece:c.instructions+=9;goto B705ece;
case 0x705ed1:c.instructions+=8;goto B705ed1;
case 0x705ed2:c.instructions+=7;goto B705ed2;
case 0x705ed5:c.instructions+=6;goto B705ed5;
case 0x705ed8:c.instructions+=5;goto B705ed8;
case 0x705edb:c.instructions+=4;goto B705edb;
case 0x705edc:c.instructions+=3;goto B705edc;
case 0x705edd:c.instructions+=2;goto B705edd;
case 0x705ee0:c.instructions+=1;goto B705ee0;
case 0x705ee5:goto L705ee5;
case 0x705ee8:c.instructions+=17;goto B705ee8;
case 0x705eeb:c.instructions+=16;goto B705eeb;
case 0x705eee:c.instructions+=15;goto B705eee;
case 0x705ef1:c.instructions+=14;goto B705ef1;
case 0x705ef4:c.instructions+=13;goto B705ef4;
case 0x705ef7:c.instructions+=12;goto B705ef7;
case 0x705ef9:c.instructions+=11;goto B705ef9;
case 0x705efc:c.instructions+=10;goto B705efc;
case 0x705eff:c.instructions+=9;goto B705eff;
case 0x705f02:c.instructions+=8;goto B705f02;
case 0x705f05:c.instructions+=7;goto B705f05;
case 0x705f06:c.instructions+=6;goto B705f06;
case 0x705f07:c.instructions+=5;goto B705f07;
case 0x705f0a:c.instructions+=4;goto B705f0a;
case 0x705f0d:c.instructions+=3;goto B705f0d;
case 0x705f0e:c.instructions+=2;goto B705f0e;
case 0x705f0f:c.instructions+=1;goto B705f0f;
case 0x705f14:goto L705f14;
case 0x705f1a:c.instructions+=12;goto B705f1a;
case 0x705f1d:c.instructions+=11;goto B705f1d;
case 0x705f20:c.instructions+=10;goto B705f20;
case 0x705f23:c.instructions+=9;goto B705f23;
case 0x705f26:c.instructions+=8;goto B705f26;
case 0x705f29:c.instructions+=7;goto B705f29;
case 0x705f2c:c.instructions+=6;goto B705f2c;
case 0x705f2f:c.instructions+=5;goto B705f2f;
case 0x705f30:c.instructions+=4;goto B705f30;
case 0x705f33:c.instructions+=3;goto B705f33;
case 0x705f34:c.instructions+=2;goto B705f34;
case 0x705f35:c.instructions+=1;goto B705f35;
case 0x705f3a:goto L705f3a;
case 0x705f3d:c.instructions+=5;goto B705f3d;
case 0x705f3e:c.instructions+=4;goto B705f3e;
case 0x705f3f:c.instructions+=3;goto B705f3f;
case 0x705f40:c.instructions+=2;goto B705f40;
case 0x705f41:c.instructions+=1;goto B705f41;
case 0x705f42:goto L705f42;
case 0x705f43:c.instructions+=28;goto B705f43;
case 0x705f45:c.instructions+=27;goto B705f45;
case 0x705f46:c.instructions+=26;goto B705f46;
case 0x705f47:c.instructions+=25;goto B705f47;
case 0x705f48:c.instructions+=24;goto B705f48;
case 0x705f49:c.instructions+=23;goto B705f49;
case 0x705f4c:c.instructions+=22;goto B705f4c;
case 0x705f4f:c.instructions+=21;goto B705f4f;
case 0x705f52:c.instructions+=20;goto B705f52;
case 0x705f53:c.instructions+=19;goto B705f53;
case 0x705f56:c.instructions+=18;goto B705f56;
case 0x705f59:c.instructions+=17;goto B705f59;
case 0x705f5b:c.instructions+=16;goto B705f5b;
case 0x705f5c:c.instructions+=15;goto B705f5c;
case 0x705f5d:c.instructions+=14;goto B705f5d;
case 0x705f5e:c.instructions+=13;goto B705f5e;
case 0x705f61:c.instructions+=12;goto B705f61;
case 0x705f64:c.instructions+=11;goto B705f64;
case 0x705f65:c.instructions+=10;goto B705f65;
case 0x705f66:c.instructions+=9;goto B705f66;
case 0x705f69:c.instructions+=8;goto B705f69;
case 0x705f6a:c.instructions+=7;goto B705f6a;
case 0x705f6d:c.instructions+=6;goto B705f6d;
case 0x705f70:c.instructions+=5;goto B705f70;
case 0x705f73:c.instructions+=4;goto B705f73;
case 0x705f74:c.instructions+=3;goto B705f74;
case 0x705f75:c.instructions+=2;goto B705f75;
case 0x705f78:c.instructions+=1;goto B705f78;
case 0x705f7d:goto L705f7d;
case 0x705f80:c.instructions+=17;goto B705f80;
case 0x705f83:c.instructions+=16;goto B705f83;
case 0x705f86:c.instructions+=15;goto B705f86;
case 0x705f89:c.instructions+=14;goto B705f89;
case 0x705f8c:c.instructions+=13;goto B705f8c;
case 0x705f8f:c.instructions+=12;goto B705f8f;
case 0x705f91:c.instructions+=11;goto B705f91;
case 0x705f94:c.instructions+=10;goto B705f94;
case 0x705f97:c.instructions+=9;goto B705f97;
case 0x705f9a:c.instructions+=8;goto B705f9a;
case 0x705f9d:c.instructions+=7;goto B705f9d;
case 0x705f9e:c.instructions+=6;goto B705f9e;
case 0x705f9f:c.instructions+=5;goto B705f9f;
case 0x705fa2:c.instructions+=4;goto B705fa2;
case 0x705fa5:c.instructions+=3;goto B705fa5;
case 0x705fa6:c.instructions+=2;goto B705fa6;
case 0x705fa7:c.instructions+=1;goto B705fa7;
case 0x705fac:goto L705fac;
case 0x705fb2:c.instructions+=12;goto B705fb2;
case 0x705fb5:c.instructions+=11;goto B705fb5;
case 0x705fb8:c.instructions+=10;goto B705fb8;
case 0x705fbb:c.instructions+=9;goto B705fbb;
case 0x705fbe:c.instructions+=8;goto B705fbe;
case 0x705fc1:c.instructions+=7;goto B705fc1;
case 0x705fc4:c.instructions+=6;goto B705fc4;
case 0x705fc7:c.instructions+=5;goto B705fc7;
case 0x705fc8:c.instructions+=4;goto B705fc8;
case 0x705fcb:c.instructions+=3;goto B705fcb;
case 0x705fcc:c.instructions+=2;goto B705fcc;
case 0x705fcd:c.instructions+=1;goto B705fcd;
case 0x705fd2:goto L705fd2;
case 0x705fd5:c.instructions+=5;goto B705fd5;
case 0x705fd6:c.instructions+=4;goto B705fd6;
case 0x705fd7:c.instructions+=3;goto B705fd7;
case 0x705fd8:c.instructions+=2;goto B705fd8;
case 0x705fd9:c.instructions+=1;goto B705fd9;
case 0x705fda:goto L705fda;
case 0x705fdb:c.instructions+=16;goto B705fdb;
case 0x705fdd:c.instructions+=15;goto B705fdd;
case 0x705fe0:c.instructions+=14;goto B705fe0;
case 0x705fe3:c.instructions+=13;goto B705fe3;
case 0x705fe6:c.instructions+=12;goto B705fe6;
case 0x705fe9:c.instructions+=11;goto B705fe9;
case 0x705feb:c.instructions+=10;goto B705feb;
case 0x705fec:c.instructions+=9;goto B705fec;
case 0x705fef:c.instructions+=8;goto B705fef;
case 0x705ff3:c.instructions+=7;goto B705ff3;
case 0x705ff4:c.instructions+=6;goto B705ff4;
case 0x705ff5:c.instructions+=5;goto B705ff5;
case 0x705ff8:c.instructions+=4;goto B705ff8;
case 0x705ff9:c.instructions+=3;goto B705ff9;
case 0x705ffc:c.instructions+=2;goto B705ffc;
case 0x705ffe:c.instructions+=1;goto B705ffe;
default:missing_instruction(c.pc);}
B705001:L705001:{c.instructions+=1;NFSU2_TR(0x705001);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70506a;}}
}
B705003:L705003:{c.instructions+=1;NFSU2_TR(0x705003);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705006:L705006:{c.instructions+=9;NFSU2_TR(0x705006);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B705009:{NFSU2_TR(0x705009);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70500c:{NFSU2_TR(0x70500c);
__builtin_memmove((R+12),(R+0),1);
}
B70500e:{NFSU2_TR(0x70500e);
__builtin_memmove((R+13),(R+12),1);
}
B705010:{NFSU2_TR(0x705010);
__builtin_memmove((R+24),(R+4),4);
}
B705012:{NFSU2_TR(0x705012);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B705015:{NFSU2_TR(0x705015);
__builtin_memmove((R+0),(R+12),4);
}
B705017:{NFSU2_TR(0x705017);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70501a:{NFSU2_TR(0x70501a);
__builtin_memmove((R+0),(R+12),2);
}
B70501d:L70501d:{c.instructions+=1;NFSU2_TR(0x70501d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L70501f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70501du);}goto L70501d;}
}
B70501f:L70501f:{c.instructions+=2;NFSU2_TR(0x70501f);
__builtin_memmove((R+4),(R+24),4);
}
B705021:{NFSU2_TR(0x705021);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B705024:L705024:{c.instructions+=1;NFSU2_TR(0x705024);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L705026;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705024u);}goto L705024;}
}
B705026:L705026:{c.instructions+=10;NFSU2_TR(0x705026);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705029:{NFSU2_TR(0x705029);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(r1(U+0)));
}
B70502c:{NFSU2_TR(0x70502c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70502f:{NFSU2_TR(0x70502f);
__builtin_memmove((R+12),(R+0),1);
}
B705031:{NFSU2_TR(0x705031);
__builtin_memmove((R+13),(R+12),1);
}
B705033:{NFSU2_TR(0x705033);
__builtin_memmove((R+4),(R+24),4);
}
B705035:{NFSU2_TR(0x705035);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B705038:{NFSU2_TR(0x705038);
__builtin_memmove((R+0),(R+12),4);
}
B70503a:{NFSU2_TR(0x70503a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70503d:{NFSU2_TR(0x70503d);
__builtin_memmove((R+0),(R+12),2);
}
B705040:L705040:{c.instructions+=1;NFSU2_TR(0x705040);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L705042;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705040u);}goto L705040;}
}
B705042:L705042:{c.instructions+=3;NFSU2_TR(0x705042);
__builtin_memmove((R+4),(R+24),4);
}
B705044:{NFSU2_TR(0x705044);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705047:{NFSU2_TR(0x705047);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B70504a:L70504a:{c.instructions+=1;NFSU2_TR(0x70504a);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L70504c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70504au);}goto L70504a;}
}
B70504c:L70504c:{c.instructions+=10;NFSU2_TR(0x70504c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70504f:{NFSU2_TR(0x70504f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705052:{NFSU2_TR(0x705052);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B705055:{NFSU2_TR(0x705055);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B705058:{NFSU2_TR(0x705058);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B70505a:{NFSU2_TR(0x70505a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B70505c:{NFSU2_TR(0x70505c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70505f:{NFSU2_TR(0x70505f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705062:{NFSU2_TR(0x705062);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705065:{NFSU2_TR(0x705065);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705006u);}goto L705006;}}
}
B705067:L705067:{c.instructions+=1;NFSU2_TR(0x705067);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70506a:L70506a:{c.instructions+=14;NFSU2_TR(0x70506a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70506d:{NFSU2_TR(0x70506d);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70506f:{NFSU2_TR(0x70506f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B705075:{NFSU2_TR(0x705075);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70507b:{NFSU2_TR(0x70507b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0xffffffffull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B705082:{NFSU2_TR(0x705082);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B705085:{NFSU2_TR(0x705085);
__builtin_memmove((R+4),(R+12),4);
}
B705087:{NFSU2_TR(0x705087);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B705089:{NFSU2_TR(0x705089);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70508c:{NFSU2_TR(0x70508c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B70508f:{NFSU2_TR(0x70508f);
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
B705091:{NFSU2_TR(0x705091);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705094:{NFSU2_TR(0x705094);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B705097:{NFSU2_TR(0x705097);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7050da;}}
}
B705099:L705099:{c.instructions+=3;NFSU2_TR(0x705099);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70509c:{NFSU2_TR(0x70509c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70509f:{NFSU2_TR(0x70509f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7050a2:L7050a2:{c.instructions+=5;NFSU2_TR(0x7050a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7050a5:{NFSU2_TR(0x7050a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7050a8:{NFSU2_TR(0x7050a8);
__builtin_memmove((R+4),(R+0),4);
}
B7050aa:{NFSU2_TR(0x7050aa);
__builtin_memmove((R+12),(R+4),4);
}
B7050ac:{NFSU2_TR(0x7050ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7050af:L7050af:{c.instructions+=1;NFSU2_TR(0x7050af);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7050b1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7050afu);}goto L7050af;}
}
B7050b1:L7050b1:{c.instructions+=4;NFSU2_TR(0x7050b1);
__builtin_memmove((R+4),(R+12),4);
}
B7050b3:{NFSU2_TR(0x7050b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7050b6:{NFSU2_TR(0x7050b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7050b9:{NFSU2_TR(0x7050b9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7050bc:L7050bc:{c.instructions+=1;NFSU2_TR(0x7050bc);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7050be;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7050bcu);}goto L7050bc;}
}
B7050be:L7050be:{c.instructions+=6;NFSU2_TR(0x7050be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7050c1:{NFSU2_TR(0x7050c1);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B7050c3:{NFSU2_TR(0x7050c3);
__builtin_memmove((R+4),(R+0),4);
}
B7050c5:{NFSU2_TR(0x7050c5);
__builtin_memmove((R+12),(R+4),4);
}
B7050c7:{NFSU2_TR(0x7050c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7050ca:{NFSU2_TR(0x7050ca);
__builtin_memmove((R+24),(R+8),4);
}
B7050cc:L7050cc:{c.instructions+=1;NFSU2_TR(0x7050cc);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7050ce;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7050ccu);}goto L7050cc;}
}
B7050ce:L7050ce:{c.instructions+=3;NFSU2_TR(0x7050ce);
__builtin_memmove((R+4),(R+12),4);
}
B7050d0:{NFSU2_TR(0x7050d0);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7050d3:{NFSU2_TR(0x7050d3);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B7050d6:L7050d6:{c.instructions+=1;NFSU2_TR(0x7050d6);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7050d8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7050d6u);}goto L7050d6;}
}
B7050d8:L7050d8:{c.instructions+=1;NFSU2_TR(0x7050d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7050a2u);}goto L7050a2;}}
}
B7050da:L7050da:{c.instructions+=5;NFSU2_TR(0x7050da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7050db:{NFSU2_TR(0x7050db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7050dc:{NFSU2_TR(0x7050dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7050dd:{NFSU2_TR(0x7050dd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7050de:{NFSU2_TR(0x7050de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7050df:L7050df:{c.instructions+=16;NFSU2_TR(0x7050df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7050e0:{NFSU2_TR(0x7050e0);
__builtin_memmove((R+20),(R+16),4);
}
B7050e2:{NFSU2_TR(0x7050e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7050e3:{NFSU2_TR(0x7050e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7050e6:{NFSU2_TR(0x7050e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7050e9:{NFSU2_TR(0x7050e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7050ed:{NFSU2_TR(0x7050ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7050ee:{NFSU2_TR(0x7050ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7050ef:{NFSU2_TR(0x7050ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7050f2:{NFSU2_TR(0x7050f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7050f3:{NFSU2_TR(0x7050f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7050f6:{NFSU2_TR(0x7050f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B7050f9:{NFSU2_TR(0x7050f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7050fd:{NFSU2_TR(0x7050fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705100:{NFSU2_TR(0x705100);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705103:{NFSU2_TR(0x705103);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L705135;}}
}
B705105:L705105:{c.instructions+=3;NFSU2_TR(0x705105);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B705107:{NFSU2_TR(0x705107);
__builtin_memmove((R+12),(R+4),4);
}
B705109:{NFSU2_TR(0x705109);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B70510c:L70510c:{c.instructions+=1;NFSU2_TR(0x70510c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L70510e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70510cu);}goto L70510c;}
}
B70510e:L70510e:{c.instructions+=2;NFSU2_TR(0x70510e);
__builtin_memmove((R+4),(R+12),4);
}
B705110:{NFSU2_TR(0x705110);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B705113:L705113:{c.instructions+=1;NFSU2_TR(0x705113);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L705115;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705113u);}goto L705113;}
}
B705115:L705115:{c.instructions+=10;NFSU2_TR(0x705115);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705118:{NFSU2_TR(0x705118);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70511b:{NFSU2_TR(0x70511b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B70511e:{NFSU2_TR(0x70511e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B705124:{NFSU2_TR(0x705124);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705127:{NFSU2_TR(0x705127);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70512a:{NFSU2_TR(0x70512a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70512d:{NFSU2_TR(0x70512d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705130:{NFSU2_TR(0x705130);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705133:{NFSU2_TR(0x705133);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705105u);}goto L705105;}}
}
B705135:L705135:{c.instructions+=8;NFSU2_TR(0x705135);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705138:{NFSU2_TR(0x705138);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B70513b:{NFSU2_TR(0x70513b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70513e:{NFSU2_TR(0x70513e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705142:{NFSU2_TR(0x705142);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B705146:{NFSU2_TR(0x705146);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705149:{NFSU2_TR(0x705149);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70514c:{NFSU2_TR(0x70514c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70517f;}}
}
B70514e:L70514e:{c.instructions+=3;NFSU2_TR(0x70514e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705151:{NFSU2_TR(0x705151);
__builtin_memmove((R+12),(R+4),4);
}
B705153:{NFSU2_TR(0x705153);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B705156:L705156:{c.instructions+=1;NFSU2_TR(0x705156);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L705158;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705156u);}goto L705156;}
}
B705158:L705158:{c.instructions+=2;NFSU2_TR(0x705158);
__builtin_memmove((R+4),(R+12),4);
}
B70515a:{NFSU2_TR(0x70515a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B70515d:L70515d:{c.instructions+=1;NFSU2_TR(0x70515d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L70515f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70515du);}goto L70515d;}
}
B70515f:L70515f:{c.instructions+=10;NFSU2_TR(0x70515f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705162:{NFSU2_TR(0x705162);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705165:{NFSU2_TR(0x705165);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B705168:{NFSU2_TR(0x705168);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B70516e:{NFSU2_TR(0x70516e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705171:{NFSU2_TR(0x705171);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705174:{NFSU2_TR(0x705174);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B705177:{NFSU2_TR(0x705177);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70517a:{NFSU2_TR(0x70517a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70517d:{NFSU2_TR(0x70517d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70514eu);}goto L70514e;}}
}
B70517f:L70517f:{c.instructions+=8;NFSU2_TR(0x70517f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705185:{NFSU2_TR(0x705185);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B705188:{NFSU2_TR(0x705188);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70518b:{NFSU2_TR(0x70518b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70518f:{NFSU2_TR(0x70518f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B705193:{NFSU2_TR(0x705193);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705196:{NFSU2_TR(0x705196);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705199:{NFSU2_TR(0x705199);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7051cc;}}
}
B70519b:L70519b:{c.instructions+=3;NFSU2_TR(0x70519b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70519e:{NFSU2_TR(0x70519e);
__builtin_memmove((R+12),(R+4),4);
}
B7051a0:{NFSU2_TR(0x7051a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7051a3:L7051a3:{c.instructions+=1;NFSU2_TR(0x7051a3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7051a5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7051a3u);}goto L7051a3;}
}
B7051a5:L7051a5:{c.instructions+=2;NFSU2_TR(0x7051a5);
__builtin_memmove((R+4),(R+12),4);
}
B7051a7:{NFSU2_TR(0x7051a7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7051aa:L7051aa:{c.instructions+=1;NFSU2_TR(0x7051aa);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7051ac;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7051aau);}goto L7051aa;}
}
B7051ac:L7051ac:{c.instructions+=10;NFSU2_TR(0x7051ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7051af:{NFSU2_TR(0x7051af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7051b2:{NFSU2_TR(0x7051b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B7051b5:{NFSU2_TR(0x7051b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B7051bb:{NFSU2_TR(0x7051bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7051be:{NFSU2_TR(0x7051be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7051c1:{NFSU2_TR(0x7051c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7051c4:{NFSU2_TR(0x7051c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7051c7:{NFSU2_TR(0x7051c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7051ca:{NFSU2_TR(0x7051ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70519bu);}goto L70519b;}}
}
B7051cc:L7051cc:{c.instructions+=3;NFSU2_TR(0x7051cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7051cf:{NFSU2_TR(0x7051cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7051d0:{NFSU2_TR(0x7051d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7051d5ull));
TAIL_STATIC(0x704d87u,704);
}
B7051d5:L7051d5:{c.instructions+=7;NFSU2_TR(0x7051d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7051d6:{NFSU2_TR(0x7051d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7051d7:{NFSU2_TR(0x7051d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7051d8:{NFSU2_TR(0x7051d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7051d9:{NFSU2_TR(0x7051d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7051da:{NFSU2_TR(0x7051da);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7051db:{NFSU2_TR(0x7051db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7051dc:L7051dc:{c.instructions+=9;NFSU2_TR(0x7051dc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7051dd:{NFSU2_TR(0x7051dd);
__builtin_memmove((R+20),(R+16),4);
}
B7051df:{NFSU2_TR(0x7051df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7051e2:{NFSU2_TR(0x7051e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7051e3:{NFSU2_TR(0x7051e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7051e6:{NFSU2_TR(0x7051e6);
__builtin_memmove((R+0),(R+4),4);
}
B7051e8:{NFSU2_TR(0x7051e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7051e9:{NFSU2_TR(0x7051e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7051ec:{NFSU2_TR(0x7051ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7051ef:L7051ef:{c.instructions+=1;NFSU2_TR(0x7051ef);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7051f1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7051efu);}goto L7051ef;}
}
B7051f1:L7051f1:{c.instructions+=2;NFSU2_TR(0x7051f1);
__builtin_memmove((R+4),(R+0),4);
}
B7051f3:{NFSU2_TR(0x7051f3);
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
B7051f6:L7051f6:{c.instructions+=1;NFSU2_TR(0x7051f6);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7051f8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7051f6u);}goto L7051f6;}
}
B7051f8:L7051f8:{c.instructions+=4;NFSU2_TR(0x7051f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7051f9:{NFSU2_TR(0x7051f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7051fa:{NFSU2_TR(0x7051fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7051fb:{NFSU2_TR(0x7051fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7051fc:L7051fc:{c.instructions+=1;NFSU2_TR(0x7051fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7051fd:L7051fd:{c.instructions+=10;NFSU2_TR(0x7051fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7051fe:{NFSU2_TR(0x7051fe);
__builtin_memmove((R+20),(R+16),4);
}
B705200:{NFSU2_TR(0x705200);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B705203:{NFSU2_TR(0x705203);
u8 U[6];
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B705206:{NFSU2_TR(0x705206);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705209:{NFSU2_TR(0x705209);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70520c:{NFSU2_TR(0x70520c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70520d:{NFSU2_TR(0x70520d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70520e:{NFSU2_TR(0x70520e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70520f:{NFSU2_TR(0x70520f);
if(r1(R+518)){{goto L70528e;}}
}
B705211:L705211:{c.instructions+=4;NFSU2_TR(0x705211);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B705212:{NFSU2_TR(0x705212);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B705215:{NFSU2_TR(0x705215);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B705216:{NFSU2_TR(0x705216);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705219:L705219:{c.instructions+=31;NFSU2_TR(0x705219);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70521d:{NFSU2_TR(0x70521d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B705220:{NFSU2_TR(0x705220);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B705222:{NFSU2_TR(0x705222);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x33ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B705225:{NFSU2_TR(0x705225);
__builtin_memmove((R+24),(R+28),4);
}
B705227:{NFSU2_TR(0x705227);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x66ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70522a:{NFSU2_TR(0x70522a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xcdull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B705230:{NFSU2_TR(0x705230);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B705237:{NFSU2_TR(0x705237);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B70523a:{NFSU2_TR(0x70523a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70523d:{NFSU2_TR(0x70523d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B705241:{NFSU2_TR(0x705241);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B705245:{NFSU2_TR(0x705245);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x9aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B70524b:{NFSU2_TR(0x70524b);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B705252:{NFSU2_TR(0x705252);
__builtin_memmove((R+28),(R+8),4);
}
B705254:{NFSU2_TR(0x705254);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xcdull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B70525a:{NFSU2_TR(0x70525a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x66ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70525d:{NFSU2_TR(0x70525d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B705260:{NFSU2_TR(0x705260);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B705263:{NFSU2_TR(0x705263);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B70526a:{NFSU2_TR(0x70526a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B70526d:{NFSU2_TR(0x70526d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B705270:{NFSU2_TR(0x705270);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B705273:{NFSU2_TR(0x705273);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+24,u32(r1(U+0)));
}
B705276:{NFSU2_TR(0x705276);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x33ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B705279:{NFSU2_TR(0x705279);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B705280:{NFSU2_TR(0x705280);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B705283:{NFSU2_TR(0x705283);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B705286:{NFSU2_TR(0x705286);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
}
B705289:{NFSU2_TR(0x705289);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B70528c:{NFSU2_TR(0x70528c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705219u);}goto L705219;}}
}
B70528e:L70528e:{c.instructions+=27;NFSU2_TR(0x70528e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B705292:{NFSU2_TR(0x705292);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B705295:{NFSU2_TR(0x705295);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B705297:{NFSU2_TR(0x705297);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x33ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B70529a:{NFSU2_TR(0x70529a);
__builtin_memmove((R+28),(R+24),4);
}
B70529c:{NFSU2_TR(0x70529c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x66ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B70529f:{NFSU2_TR(0x70529f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0xcdull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B7052a5:{NFSU2_TR(0x7052a5);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7052ac:{NFSU2_TR(0x7052ac);
u8 U[23];
w4(U+19,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+19))));
w1(U+0,u8((r4(U+19))!=(u32(0x0ull))));
w1(U+1,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+519))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+519,u8(u32(r1(U+3))|u32(r1(U+4))));
w1(U+5,u8((r4(R+8))==(u32(0x0ull))));
w1(U+6,u8(!(r1(U+0))));
w1(U+7,u8(u32(r1(U+6))&u32(r1(R+518))));
w1(U+8,u8(u32(r1(U+0))&u32(r1(U+5))));
w1(R+518,u8(u32(r1(U+7))|u32(r1(U+8))));
w4(U+9,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+13,u8(__builtin_popcountll(u64(r4(U+9)))));
w1(U+14,u8(u32(r1(U+13))&u32(u8(0x1ull))));
w1(U+15,u8((r1(U+14))==(u8(0x0ull))));
w1(U+16,u8(!(r1(U+0))));
w1(U+17,u8(u32(r1(U+16))&u32(r1(R+514))));
w1(U+18,u8(u32(r1(U+0))&u32(r1(U+15))));
w1(R+514,u8(u32(r1(U+17))|u32(r1(U+18))));
}
B7052af:{NFSU2_TR(0x7052af);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7052b2:{NFSU2_TR(0x7052b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7052b6:{NFSU2_TR(0x7052b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B7052ba:{NFSU2_TR(0x7052ba);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x9aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B7052c0:{NFSU2_TR(0x7052c0);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B7052c7:{NFSU2_TR(0x7052c7);
__builtin_memmove((R+24),(R+4),4);
}
B7052c9:{NFSU2_TR(0x7052c9);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(s64(s32(u32(0x66ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+24)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B7052cc:{NFSU2_TR(0x7052cc);
u8 U[46];
w4(U+38,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(R+12),4);
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+12))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B7052cf:{NFSU2_TR(0x7052cf);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7052d6:{NFSU2_TR(0x7052d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7052d7:{NFSU2_TR(0x7052d7);
u8 U[48];
w4(U+40,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+8),4);
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+40))));
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
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B7052da:{NFSU2_TR(0x7052da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7052db:{NFSU2_TR(0x7052db);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7052de:{NFSU2_TR(0x7052de);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7052e1:{NFSU2_TR(0x7052e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7052e4:{NFSU2_TR(0x7052e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7052e5:{NFSU2_TR(0x7052e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7052e6:{NFSU2_TR(0x7052e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7052e7:L7052e7:{c.instructions+=8;NFSU2_TR(0x7052e7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7052e8:{NFSU2_TR(0x7052e8);
__builtin_memmove((R+20),(R+16),4);
}
B7052ea:{NFSU2_TR(0x7052ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7052ed:{NFSU2_TR(0x7052ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7052f0:{NFSU2_TR(0x7052f0);
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
B7052f2:{NFSU2_TR(0x7052f2);
__builtin_memmove((R+4),(R+0),4);
}
B7052f4:{NFSU2_TR(0x7052f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7052f7:{NFSU2_TR(0x7052f7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L705388;}}
}
B7052fd:L7052fd:{c.instructions+=7;NFSU2_TR(0x7052fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7052fe:{NFSU2_TR(0x7052fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7052ff:{NFSU2_TR(0x7052ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705302:{NFSU2_TR(0x705302);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B705305:{NFSU2_TR(0x705305);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705306:{NFSU2_TR(0x705306);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B705308:{NFSU2_TR(0x705308);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70530b:L70530b:{c.instructions+=34;NFSU2_TR(0x70530b);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B70530f:{NFSU2_TR(0x70530f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B705312:{NFSU2_TR(0x705312);
__builtin_memmove((R+12),(R+28),4);
}
B705314:{NFSU2_TR(0x705314);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x33ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B705317:{NFSU2_TR(0x705317);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x66ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70531a:{NFSU2_TR(0x70531a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0xcdull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B705320:{NFSU2_TR(0x705320);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B705327:{NFSU2_TR(0x705327);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B70532a:{NFSU2_TR(0x70532a);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70532d:{NFSU2_TR(0x70532d);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B705331:{NFSU2_TR(0x705331);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B705334:{NFSU2_TR(0x705334);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x9aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B70533a:{NFSU2_TR(0x70533a);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B705341:{NFSU2_TR(0x705341);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705344:{NFSU2_TR(0x705344);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B705347:{NFSU2_TR(0x705347);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70534a:{NFSU2_TR(0x70534a);
__builtin_memmove((R+28),(R+8),4);
}
B70534c:{NFSU2_TR(0x70534c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xcdull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B705352:{NFSU2_TR(0x705352);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x66ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B705355:{NFSU2_TR(0x705355);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B70535c:{NFSU2_TR(0x70535c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B70535f:{NFSU2_TR(0x70535f);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B705361:{NFSU2_TR(0x705361);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705364:{NFSU2_TR(0x705364);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B705367:{NFSU2_TR(0x705367);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B70536b:{NFSU2_TR(0x70536b);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(s64(s32(u32(0x33ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+28)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B70536e:{NFSU2_TR(0x70536e);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B705375:{NFSU2_TR(0x705375);
u8 U[27];
w4(U+19,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+23),(R+8),4);
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+19))));
w1(U+5,u8((r4(U+19))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+19))-u32(u32(0x1ull))));
w4(U+10,shr<u32>(r4(U+23),u64(r4(U+6))));
w4(U+14,u32(u32(r4(U+10))&u32(u32(0x1ull))));
w1(U+18,u8((r4(U+14))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+18))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B705378:{NFSU2_TR(0x705378);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B705379:{NFSU2_TR(0x705379);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70537c:{NFSU2_TR(0x70537c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70537d:{NFSU2_TR(0x70537d);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B705380:{NFSU2_TR(0x705380);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705383:{NFSU2_TR(0x705383);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70530bu);}goto L70530b;}}
}
B705385:L705385:{c.instructions+=3;NFSU2_TR(0x705385);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B705386:{NFSU2_TR(0x705386);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B705387:{NFSU2_TR(0x705387);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B705388:L705388:{c.instructions+=2;NFSU2_TR(0x705388);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B705389:{NFSU2_TR(0x705389);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70538a:L70538a:{c.instructions+=6;NFSU2_TR(0x70538a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70538b:{NFSU2_TR(0x70538b);
__builtin_memmove((R+20),(R+16),4);
}
B70538d:{NFSU2_TR(0x70538d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705390:{NFSU2_TR(0x705390);
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
B705392:{NFSU2_TR(0x705392);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B705395:{NFSU2_TR(0x705395);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L705406;}}
}
B705397:L705397:{c.instructions+=7;NFSU2_TR(0x705397);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705398:{NFSU2_TR(0x705398);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705399:{NFSU2_TR(0x705399);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70539a:{NFSU2_TR(0x70539a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70539d:{NFSU2_TR(0x70539d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7053a0:{NFSU2_TR(0x7053a0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B7053a2:{NFSU2_TR(0x7053a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7053a5:L7053a5:{c.instructions+=27;NFSU2_TR(0x7053a5);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+24,u32(r1(U+8)));
}
B7053a9:{NFSU2_TR(0x7053a9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+4,u32(r1(U+0)));
}
B7053ac:{NFSU2_TR(0x7053ac);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x33ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B7053af:{NFSU2_TR(0x7053af);
__builtin_memmove((R+12),(R+24),4);
}
B7053b1:{NFSU2_TR(0x7053b1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x66ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B7053b4:{NFSU2_TR(0x7053b4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0xcdull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B7053ba:{NFSU2_TR(0x7053ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B7053c1:{NFSU2_TR(0x7053c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7053c4:{NFSU2_TR(0x7053c4);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7053c7:{NFSU2_TR(0x7053c7);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B7053cb:{NFSU2_TR(0x7053cb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+12,u32(r1(U+0)));
}
B7053ce:{NFSU2_TR(0x7053ce);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x9aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B7053d4:{NFSU2_TR(0x7053d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7053d7:{NFSU2_TR(0x7053d7);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B7053de:{NFSU2_TR(0x7053de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7053e1:{NFSU2_TR(0x7053e1);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(s64(s32(u32(0x66ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+24)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B7053e4:{NFSU2_TR(0x7053e4);
u8 U[27];
w4(U+19,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+23),(R+12),4);
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+19))));
w1(U+5,u8((r4(U+19))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+19))-u32(u32(0x1ull))));
w4(U+10,shr<u32>(r4(U+23),u64(r4(U+6))));
w4(U+14,u32(u32(r4(U+10))&u32(u32(0x1ull))));
w1(U+18,u8((r4(U+14))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+18))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B7053e7:{NFSU2_TR(0x7053e7);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B7053ee:{NFSU2_TR(0x7053ee);
u8 U[27];
w4(U+19,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+23),(R+4),4);
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+19))));
w1(U+5,u8((r4(U+19))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+19))-u32(u32(0x1ull))));
w4(U+10,shr<u32>(r4(U+23),u64(r4(U+6))));
w4(U+14,u32(u32(r4(U+10))&u32(u32(0x1ull))));
w1(U+18,u8((r4(U+14))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+18))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B7053f1:{NFSU2_TR(0x7053f1);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7053f4:{NFSU2_TR(0x7053f4);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B7053f6:{NFSU2_TR(0x7053f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7053f9:{NFSU2_TR(0x7053f9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7053fa:{NFSU2_TR(0x7053fa);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7053fd:{NFSU2_TR(0x7053fd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7053fe:{NFSU2_TR(0x7053fe);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B705401:{NFSU2_TR(0x705401);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7053a5u);}goto L7053a5;}}
}
B705403:L705403:{c.instructions+=3;NFSU2_TR(0x705403);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B705404:{NFSU2_TR(0x705404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B705405:{NFSU2_TR(0x705405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B705406:L705406:{c.instructions+=2;NFSU2_TR(0x705406);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B705407:{NFSU2_TR(0x705407);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B705408:L705408:{c.instructions+=13;NFSU2_TR(0x705408);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705409:{NFSU2_TR(0x705409);
__builtin_memmove((R+20),(R+16),4);
}
B70540b:{NFSU2_TR(0x70540b);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70540e:{NFSU2_TR(0x70540e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70540f:{NFSU2_TR(0x70540f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B705412:{NFSU2_TR(0x705412);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705413:{NFSU2_TR(0x705413);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705414:{NFSU2_TR(0x705414);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705417:{NFSU2_TR(0x705417);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70541a:{NFSU2_TR(0x70541a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70541b:{NFSU2_TR(0x70541b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70541e:{NFSU2_TR(0x70541e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70541f:{NFSU2_TR(0x70541f);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9eb4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x705425ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B705425:L705425:{c.instructions+=9;NFSU2_TR(0x705425);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705428:{NFSU2_TR(0x705428);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70542b:{NFSU2_TR(0x70542b);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70542d:{NFSU2_TR(0x70542d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70542f:{NFSU2_TR(0x70542f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B705430:{NFSU2_TR(0x705430);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x705430);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x705430);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B705432:{NFSU2_TR(0x705432);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705435:{NFSU2_TR(0x705435);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B705436:{NFSU2_TR(0x705436);
if(r1(R+518)){{goto L7054a5;}}
}
B705438:L705438:{c.instructions+=1;NFSU2_TR(0x705438);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70543b:L70543b:{c.instructions+=6;NFSU2_TR(0x70543b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70543e:{NFSU2_TR(0x70543e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B705440:{NFSU2_TR(0x705440);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705443:{NFSU2_TR(0x705443);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B705446:{NFSU2_TR(0x705446);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705449:{NFSU2_TR(0x705449);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B705450:L705450:{c.instructions+=5;NFSU2_TR(0x705450);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705453:{NFSU2_TR(0x705453);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705456:{NFSU2_TR(0x705456);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705459:{NFSU2_TR(0x705459);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70545c:{NFSU2_TR(0x70545c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9eb4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x705462ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B705462:L705462:{c.instructions+=6;NFSU2_TR(0x705462);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705465:{NFSU2_TR(0x705465);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B705468:{NFSU2_TR(0x705468);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70546b:{NFSU2_TR(0x70546b);
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70546e:{NFSU2_TR(0x70546e);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B705471:{NFSU2_TR(0x705471);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705450u);}goto L705450;}}
}
B705473:L705473:{c.instructions+=10;NFSU2_TR(0x705473);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705476:{NFSU2_TR(0x705476);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705479:{NFSU2_TR(0x705479);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70547c:{NFSU2_TR(0x70547c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70547e:{NFSU2_TR(0x70547e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70547f:{NFSU2_TR(0x70547f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705482:{NFSU2_TR(0x705482);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B705485:{NFSU2_TR(0x705485);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705486:{NFSU2_TR(0x705486);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705489:{NFSU2_TR(0x705489);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9eb4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70548full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70548f:L70548f:{c.instructions+=4;NFSU2_TR(0x70548f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705492:{NFSU2_TR(0x705492);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705493:{NFSU2_TR(0x705493);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705494:{NFSU2_TR(0x705494);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ed4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70549aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70549a:L70549a:{c.instructions+=4;NFSU2_TR(0x70549a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70549d:{NFSU2_TR(0x70549d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B7054a0:{NFSU2_TR(0x7054a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7054a3:{NFSU2_TR(0x7054a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70543bu);}goto L70543b;}}
}
B7054a5:L7054a5:{c.instructions+=5;NFSU2_TR(0x7054a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7054a8:{NFSU2_TR(0x7054a8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+12),r4(R+0)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7054aa:{NFSU2_TR(0x7054aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7054ad:{NFSU2_TR(0x7054ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B7054b0:{NFSU2_TR(0x7054b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7054b7:L7054b7:{c.instructions+=5;NFSU2_TR(0x7054b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7054ba:{NFSU2_TR(0x7054ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7054bb:{NFSU2_TR(0x7054bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7054be:{NFSU2_TR(0x7054be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7054c1:{NFSU2_TR(0x7054c1);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9eb4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7054c7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7054c7:L7054c7:{c.instructions+=6;NFSU2_TR(0x7054c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7054ca:{NFSU2_TR(0x7054ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7054cd:{NFSU2_TR(0x7054cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7054d0:{NFSU2_TR(0x7054d0);
w1(R+512,carry<u32>(r4(R+12),r4(R+24)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B7054d2:{NFSU2_TR(0x7054d2);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B7054d5:{NFSU2_TR(0x7054d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7054b7u);}goto L7054b7;}}
}
B7054d7:L7054d7:{c.instructions+=4;NFSU2_TR(0x7054d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7054da:{NFSU2_TR(0x7054da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7054db:{NFSU2_TR(0x7054db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7054dc:{NFSU2_TR(0x7054dc);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ed0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7054e2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7054e2:L7054e2:{c.instructions+=6;NFSU2_TR(0x7054e2);
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
B7054e5:{NFSU2_TR(0x7054e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7054e6:{NFSU2_TR(0x7054e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7054e7:{NFSU2_TR(0x7054e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7054e8:{NFSU2_TR(0x7054e8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7054e9:{NFSU2_TR(0x7054e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7054ea:L7054ea:{c.instructions+=10;NFSU2_TR(0x7054ea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7054eb:{NFSU2_TR(0x7054eb);
__builtin_memmove((R+20),(R+16),4);
}
B7054ed:{NFSU2_TR(0x7054ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7054f0:{NFSU2_TR(0x7054f0);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7054f3:{NFSU2_TR(0x7054f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7054f6:{NFSU2_TR(0x7054f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7054f7:{NFSU2_TR(0x7054f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7054f8:{NFSU2_TR(0x7054f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7054fb:{NFSU2_TR(0x7054fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7054fc:{NFSU2_TR(0x7054fc);
if(r1(R+518)){{goto L705589;}}
}
B705502:L705502:{c.instructions+=7;NFSU2_TR(0x705502);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705504:{NFSU2_TR(0x705504);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B705505:{NFSU2_TR(0x705505);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B705507:{NFSU2_TR(0x705507);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B705508:{NFSU2_TR(0x705508);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x705508);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x705508);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B70550a:{NFSU2_TR(0x70550a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70550b:{NFSU2_TR(0x70550b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70550e:L70550e:{c.instructions+=33;NFSU2_TR(0x70550e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B705512:{NFSU2_TR(0x705512);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+8,u32(r1(U+0)));
}
B705515:{NFSU2_TR(0x705515);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B705517:{NFSU2_TR(0x705517);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x66ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B70551a:{NFSU2_TR(0x70551a);
__builtin_memmove((R+0),(R+28),4);
}
B70551c:{NFSU2_TR(0x70551c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x9aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B705522:{NFSU2_TR(0x705522);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B705529:{NFSU2_TR(0x705529);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B70552c:{NFSU2_TR(0x70552c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70552f:{NFSU2_TR(0x70552f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B705533:{NFSU2_TR(0x705533);
__builtin_memmove((R+0),(R+28),4);
}
B705535:{NFSU2_TR(0x705535);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x33ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B705538:{NFSU2_TR(0x705538);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xcdull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70553e:{NFSU2_TR(0x70553e);
__builtin_memmove((R+12),(R+8),4);
}
B705540:{NFSU2_TR(0x705540);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x33ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B705543:{NFSU2_TR(0x705543);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70554a:{NFSU2_TR(0x70554a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B70554d:{NFSU2_TR(0x70554d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B705550:{NFSU2_TR(0x705550);
__builtin_memmove((R+0),(R+8),4);
}
B705552:{NFSU2_TR(0x705552);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x9aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B705558:{NFSU2_TR(0x705558);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xcdull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70555e:{NFSU2_TR(0x70555e);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B705565:{NFSU2_TR(0x705565);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B705568:{NFSU2_TR(0x705568);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70556b:{NFSU2_TR(0x70556b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3ull))));
}
B70556e:{NFSU2_TR(0x70556e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B705571:{NFSU2_TR(0x705571);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x66ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B705574:{NFSU2_TR(0x705574);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70557b:{NFSU2_TR(0x70557b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B70557e:{NFSU2_TR(0x70557e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B705581:{NFSU2_TR(0x705581);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5ull))));
}
B705584:{NFSU2_TR(0x705584);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B705587:{NFSU2_TR(0x705587);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70550eu);}goto L70550e;}}
}
B705589:L705589:{c.instructions+=29;NFSU2_TR(0x705589);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B70558d:{NFSU2_TR(0x70558d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B705590:{NFSU2_TR(0x705590);
__builtin_memmove((R+28),(R+8),4);
}
B705592:{NFSU2_TR(0x705592);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B705594:{NFSU2_TR(0x705594);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x9aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B70559a:{NFSU2_TR(0x70559a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x66ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70559d:{NFSU2_TR(0x70559d);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7055a4:{NFSU2_TR(0x7055a4);
u8 U[23];
w4(U+19,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+19))));
w1(U+0,u8((r4(U+19))!=(u32(0x0ull))));
w1(U+1,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+519))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+519,u8(u32(r1(U+3))|u32(r1(U+4))));
w1(U+5,u8((r4(R+0))==(u32(0x0ull))));
w1(U+6,u8(!(r1(U+0))));
w1(U+7,u8(u32(r1(U+6))&u32(r1(R+518))));
w1(U+8,u8(u32(r1(U+0))&u32(r1(U+5))));
w1(R+518,u8(u32(r1(U+7))|u32(r1(U+8))));
w4(U+9,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+13,u8(__builtin_popcountll(u64(r4(U+9)))));
w1(U+14,u8(u32(r1(U+13))&u32(u8(0x1ull))));
w1(U+15,u8((r1(U+14))==(u8(0x0ull))));
w1(U+16,u8(!(r1(U+0))));
w1(U+17,u8(u32(r1(U+16))&u32(r1(R+514))));
w1(U+18,u8(u32(r1(U+0))&u32(r1(U+15))));
w1(R+514,u8(u32(r1(U+17))|u32(r1(U+18))));
}
B7055a7:{NFSU2_TR(0x7055a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7055aa:{NFSU2_TR(0x7055aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7055ae:{NFSU2_TR(0x7055ae);
__builtin_memmove((R+24),(R+8),4);
}
B7055b0:{NFSU2_TR(0x7055b0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x33ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B7055b3:{NFSU2_TR(0x7055b3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xcdull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B7055b9:{NFSU2_TR(0x7055b9);
__builtin_memmove((R+28),(R+0),4);
}
B7055bb:{NFSU2_TR(0x7055bb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x33ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B7055be:{NFSU2_TR(0x7055be);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B7055c5:{NFSU2_TR(0x7055c5);
__builtin_memmove((R+24),(R+0),4);
}
B7055c7:{NFSU2_TR(0x7055c7);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(s64(s32(u32(0xcdull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+24)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B7055cd:{NFSU2_TR(0x7055cd);
u8 U[46];
w4(U+38,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(R+12),4);
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+12))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B7055d0:{NFSU2_TR(0x7055d0);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7055d7:{NFSU2_TR(0x7055d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7055d8:{NFSU2_TR(0x7055d8);
u8 U[48];
w4(U+40,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+8),4);
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+40))));
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
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B7055db:{NFSU2_TR(0x7055db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7055dc:{NFSU2_TR(0x7055dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7055df:{NFSU2_TR(0x7055df);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7055e2:{NFSU2_TR(0x7055e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7055e5:{NFSU2_TR(0x7055e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7055e6:{NFSU2_TR(0x7055e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7055e7:{NFSU2_TR(0x7055e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7055e8:L7055e8:{c.instructions+=9;NFSU2_TR(0x7055e8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7055e9:{NFSU2_TR(0x7055e9);
__builtin_memmove((R+20),(R+16),4);
}
B7055eb:{NFSU2_TR(0x7055eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7055ec:{NFSU2_TR(0x7055ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7055ef:{NFSU2_TR(0x7055ef);
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
B7055f1:{NFSU2_TR(0x7055f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7055f2:{NFSU2_TR(0x7055f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7055f5:{NFSU2_TR(0x7055f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7055f8:{NFSU2_TR(0x7055f8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L705691;}}
}
B7055fe:L7055fe:{c.instructions+=7;NFSU2_TR(0x7055fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7055ff:{NFSU2_TR(0x7055ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705600:{NFSU2_TR(0x705600);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705603:{NFSU2_TR(0x705603);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B705606:{NFSU2_TR(0x705606);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705609:{NFSU2_TR(0x705609);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B70560c:{NFSU2_TR(0x70560c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70560f:L70560f:{c.instructions+=37;NFSU2_TR(0x70560f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B705612:{NFSU2_TR(0x705612);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B705615:{NFSU2_TR(0x705615);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+8,u32(r1(U+0)));
}
B705618:{NFSU2_TR(0x705618);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+0,u32(r1(U+0)));
}
B70561b:{NFSU2_TR(0x70561b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x66ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B70561e:{NFSU2_TR(0x70561e);
__builtin_memmove((R+12),(R+0),4);
}
B705620:{NFSU2_TR(0x705620);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x9aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B705626:{NFSU2_TR(0x705626);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B70562d:{NFSU2_TR(0x70562d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B705630:{NFSU2_TR(0x705630);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B705632:{NFSU2_TR(0x705632);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B705635:{NFSU2_TR(0x705635);
__builtin_memmove((R+8),(R+0),4);
}
B705637:{NFSU2_TR(0x705637);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x33ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70563a:{NFSU2_TR(0x70563a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xcdull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B705640:{NFSU2_TR(0x705640);
__builtin_memmove((R+12),(R+4),4);
}
B705642:{NFSU2_TR(0x705642);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x33ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B705645:{NFSU2_TR(0x705645);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B70564c:{NFSU2_TR(0x70564c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B70564f:{NFSU2_TR(0x70564f);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+28)),r1(U+0));
}
B705651:{NFSU2_TR(0x705651);
__builtin_memmove((R+8),(R+4),4);
}
B705653:{NFSU2_TR(0x705653);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x9aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B705659:{NFSU2_TR(0x705659);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xcdull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B70565f:{NFSU2_TR(0x70565f);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B705666:{NFSU2_TR(0x705666);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B705669:{NFSU2_TR(0x705669);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70566c:{NFSU2_TR(0x70566c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70566f:{NFSU2_TR(0x70566f);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B705673:{NFSU2_TR(0x705673);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x66ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B705676:{NFSU2_TR(0x705676);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B70567d:{NFSU2_TR(0x70567d);
u8 U[27];
w4(U+19,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+23),(R+4),4);
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+19))));
w1(U+5,u8((r4(U+19))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+19))-u32(u32(0x1ull))));
w4(U+10,shr<u32>(r4(U+23),u64(r4(U+6))));
w4(U+14,u32(u32(r4(U+10))&u32(u32(0x1ull))));
w1(U+18,u8((r4(U+14))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+18))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B705680:{NFSU2_TR(0x705680);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705683:{NFSU2_TR(0x705683);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B705684:{NFSU2_TR(0x705684);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B705686:{NFSU2_TR(0x705686);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B705687:{NFSU2_TR(0x705687);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B70568a:{NFSU2_TR(0x70568a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70568d:{NFSU2_TR(0x70568d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70560fu);}goto L70560f;}}
}
B70568f:L70568f:{c.instructions+=2;NFSU2_TR(0x70568f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B705690:{NFSU2_TR(0x705690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B705691:L705691:{c.instructions+=3;NFSU2_TR(0x705691);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B705692:{NFSU2_TR(0x705692);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B705693:{NFSU2_TR(0x705693);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B705694:L705694:{c.instructions+=7;NFSU2_TR(0x705694);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705695:{NFSU2_TR(0x705695);
__builtin_memmove((R+20),(R+16),4);
}
B705697:{NFSU2_TR(0x705697);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70569a:{NFSU2_TR(0x70569a);
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
B70569c:{NFSU2_TR(0x70569c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70569d:{NFSU2_TR(0x70569d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7056a0:{NFSU2_TR(0x7056a0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L705710;}}
}
B7056a2:L7056a2:{c.instructions+=5;NFSU2_TR(0x7056a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7056a3:{NFSU2_TR(0x7056a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7056a4:{NFSU2_TR(0x7056a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7056a7:{NFSU2_TR(0x7056a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7056aa:{NFSU2_TR(0x7056aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7056ad:L7056ad:{c.instructions+=28;NFSU2_TR(0x7056ad);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B7056b1:{NFSU2_TR(0x7056b1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+8,u32(r1(U+0)));
}
B7056b4:{NFSU2_TR(0x7056b4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x66ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B7056b7:{NFSU2_TR(0x7056b7);
__builtin_memmove((R+12),(R+0),4);
}
B7056b9:{NFSU2_TR(0x7056b9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x9aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B7056bf:{NFSU2_TR(0x7056bf);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7056c6:{NFSU2_TR(0x7056c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B7056c9:{NFSU2_TR(0x7056c9);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7056cc:{NFSU2_TR(0x7056cc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B7056cf:{NFSU2_TR(0x7056cf);
__builtin_memmove((R+12),(R+0),4);
}
B7056d1:{NFSU2_TR(0x7056d1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x33ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7056d4:{NFSU2_TR(0x7056d4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0xcdull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B7056da:{NFSU2_TR(0x7056da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7056dd:{NFSU2_TR(0x7056dd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x33ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B7056e0:{NFSU2_TR(0x7056e0);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7056e7:{NFSU2_TR(0x7056e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B7056ea:{NFSU2_TR(0x7056ea);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B7056ec:{NFSU2_TR(0x7056ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7056ef:{NFSU2_TR(0x7056ef);
__builtin_memmove((R+12),(R+8),4);
}
B7056f1:{NFSU2_TR(0x7056f1);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(s64(s32(u32(0xcdull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+12)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B7056f7:{NFSU2_TR(0x7056f7);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7056fe:{NFSU2_TR(0x7056fe);
u8 U[27];
w4(U+19,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+23),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+19))));
w1(U+5,u8((r4(U+19))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+19))-u32(u32(0x1ull))));
w4(U+10,shr<u32>(r4(U+23),u64(r4(U+6))));
w4(U+14,u32(u32(r4(U+10))&u32(u32(0x1ull))));
w1(U+18,u8((r4(U+14))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+18))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B705701:{NFSU2_TR(0x705701);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B705704:{NFSU2_TR(0x705704);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B705707:{NFSU2_TR(0x705707);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B705708:{NFSU2_TR(0x705708);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B705709:{NFSU2_TR(0x705709);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B70570c:{NFSU2_TR(0x70570c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7056adu);}goto L7056ad;}}
}
B70570e:L70570e:{c.instructions+=2;NFSU2_TR(0x70570e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70570f:{NFSU2_TR(0x70570f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B705710:L705710:{c.instructions+=3;NFSU2_TR(0x705710);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B705711:{NFSU2_TR(0x705711);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B705712:{NFSU2_TR(0x705712);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B705713:L705713:{c.instructions+=12;NFSU2_TR(0x705713);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705714:{NFSU2_TR(0x705714);
__builtin_memmove((R+20),(R+16),4);
}
B705716:{NFSU2_TR(0x705716);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B705719:{NFSU2_TR(0x705719);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70571a:{NFSU2_TR(0x70571a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70571b:{NFSU2_TR(0x70571b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70571c:{NFSU2_TR(0x70571c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70571f:{NFSU2_TR(0x70571f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705722:{NFSU2_TR(0x705722);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705723:{NFSU2_TR(0x705723);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705726:{NFSU2_TR(0x705726);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705729:{NFSU2_TR(0x705729);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f08),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70572full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70572f:L70572f:{c.instructions+=10;NFSU2_TR(0x70572f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705732:{NFSU2_TR(0x705732);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B705735:{NFSU2_TR(0x705735);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705737:{NFSU2_TR(0x705737);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B705739:{NFSU2_TR(0x705739);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70573a:{NFSU2_TR(0x70573a);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70573a);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x70573a);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B70573c:{NFSU2_TR(0x70573c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70573f:{NFSU2_TR(0x70573f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B705742:{NFSU2_TR(0x705742);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B705743:{NFSU2_TR(0x705743);
if(r1(R+518)){{goto L7057bb;}}
}
B705745:L705745:{c.instructions+=1;NFSU2_TR(0x705745);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705748:L705748:{c.instructions+=6;NFSU2_TR(0x705748);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70574b:{NFSU2_TR(0x70574b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70574d:{NFSU2_TR(0x70574d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705750:{NFSU2_TR(0x705750);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B705753:{NFSU2_TR(0x705753);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705756:{NFSU2_TR(0x705756);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70575d:L70575d:{c.instructions+=5;NFSU2_TR(0x70575d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705760:{NFSU2_TR(0x705760);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705763:{NFSU2_TR(0x705763);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705766:{NFSU2_TR(0x705766);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705769:{NFSU2_TR(0x705769);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f08),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70576full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70576f:L70576f:{c.instructions+=5;NFSU2_TR(0x70576f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B705772:{NFSU2_TR(0x705772);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B705775:{NFSU2_TR(0x705775);
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B705778:{NFSU2_TR(0x705778);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B70577b:{NFSU2_TR(0x70577b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70575du);}goto L70575d;}}
}
B70577d:L70577d:{c.instructions+=12;NFSU2_TR(0x70577d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705780:{NFSU2_TR(0x705780);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B705783:{NFSU2_TR(0x705783);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B705786:{NFSU2_TR(0x705786);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B705789:{NFSU2_TR(0x705789);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70578a:{NFSU2_TR(0x70578a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70578d:{NFSU2_TR(0x70578d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B705790:{NFSU2_TR(0x705790);
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
B705792:{NFSU2_TR(0x705792);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705793:{NFSU2_TR(0x705793);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705796:{NFSU2_TR(0x705796);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705799:{NFSU2_TR(0x705799);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f08),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70579full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70579f:L70579f:{c.instructions+=4;NFSU2_TR(0x70579f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7057a2:{NFSU2_TR(0x7057a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7057a3:{NFSU2_TR(0x7057a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7057a4:{NFSU2_TR(0x7057a4);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f00),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7057aaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7057aa:L7057aa:{c.instructions+=6;NFSU2_TR(0x7057aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7057ad:{NFSU2_TR(0x7057ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7057b0:{NFSU2_TR(0x7057b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B7057b3:{NFSU2_TR(0x7057b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7057b6:{NFSU2_TR(0x7057b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7057b9:{NFSU2_TR(0x7057b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705748u);}goto L705748;}}
}
B7057bb:L7057bb:{c.instructions+=6;NFSU2_TR(0x7057bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7057be:{NFSU2_TR(0x7057be);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7057c0:{NFSU2_TR(0x7057c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7057c3:{NFSU2_TR(0x7057c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7057c6:{NFSU2_TR(0x7057c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7057c9:{NFSU2_TR(0x7057c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7057d0:L7057d0:{c.instructions+=5;NFSU2_TR(0x7057d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7057d3:{NFSU2_TR(0x7057d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7057d6:{NFSU2_TR(0x7057d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7057d9:{NFSU2_TR(0x7057d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7057dc:{NFSU2_TR(0x7057dc);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f08),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7057e2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7057e2:L7057e2:{c.instructions+=5;NFSU2_TR(0x7057e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B7057e5:{NFSU2_TR(0x7057e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B7057e8:{NFSU2_TR(0x7057e8);
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7057eb:{NFSU2_TR(0x7057eb);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B7057ee:{NFSU2_TR(0x7057ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7057d0u);}goto L7057d0;}}
}
B7057f0:L7057f0:{c.instructions+=4;NFSU2_TR(0x7057f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7057f3:{NFSU2_TR(0x7057f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7057f4:{NFSU2_TR(0x7057f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7057f5:{NFSU2_TR(0x7057f5);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ee8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7057fbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7057fb:L7057fb:{c.instructions+=6;NFSU2_TR(0x7057fb);
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
B7057fe:{NFSU2_TR(0x7057fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7057ff:{NFSU2_TR(0x7057ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B705800:{NFSU2_TR(0x705800);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B705801:{NFSU2_TR(0x705801);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B705802:{NFSU2_TR(0x705802);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B705803:L705803:{c.instructions+=7;NFSU2_TR(0x705803);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705804:{NFSU2_TR(0x705804);
__builtin_memmove((R+20),(R+16),4);
}
B705806:{NFSU2_TR(0x705806);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B705809:{NFSU2_TR(0x705809);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70580a:{NFSU2_TR(0x70580a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70580d:{NFSU2_TR(0x70580d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705810:{NFSU2_TR(0x705810);
if(r1(R+518)){{goto L70582f;}}
}
B705812:L705812:{c.instructions+=3;NFSU2_TR(0x705812);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705813:{NFSU2_TR(0x705813);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705814:{NFSU2_TR(0x705814);
__builtin_memmove((R+28),(R+8),4);
}
B705816:L705816:{c.instructions+=11;NFSU2_TR(0x705816);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B705819:{NFSU2_TR(0x705819);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70581a:{NFSU2_TR(0x70581a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+24,u32(r1(U+0)));
}
B70581d:{NFSU2_TR(0x70581d);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B70581f:{NFSU2_TR(0x70581f);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B705823:{NFSU2_TR(0x705823);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+0))!=(u32(0x0ull))));
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B705825:{NFSU2_TR(0x705825);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B705828:{NFSU2_TR(0x705828);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B705829:{NFSU2_TR(0x705829);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70582a:{NFSU2_TR(0x70582a);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70582b:{NFSU2_TR(0x70582b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705816u);}goto L705816;}}
}
B70582d:L70582d:{c.instructions+=2;NFSU2_TR(0x70582d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70582e:{NFSU2_TR(0x70582e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70582f:L70582f:{c.instructions+=5;NFSU2_TR(0x70582f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+4,u32(r1(U+0)));
}
B705832:{NFSU2_TR(0x705832);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B705834:{NFSU2_TR(0x705834);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B705837:{NFSU2_TR(0x705837);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B705838:{NFSU2_TR(0x705838);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B705839:L705839:{c.instructions+=9;NFSU2_TR(0x705839);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70583a:{NFSU2_TR(0x70583a);
__builtin_memmove((R+20),(R+16),4);
}
B70583c:{NFSU2_TR(0x70583c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70583f:{NFSU2_TR(0x70583f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705840:{NFSU2_TR(0x705840);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705841:{NFSU2_TR(0x705841);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705844:{NFSU2_TR(0x705844);
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
B705846:{NFSU2_TR(0x705846);
__builtin_memmove((R+24),(R+0),4);
}
B705848:{NFSU2_TR(0x705848);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L705865;}}
}
B70584a:L70584a:{c.instructions+=3;NFSU2_TR(0x70584a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70584d:{NFSU2_TR(0x70584d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B70584f:{NFSU2_TR(0x70584f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705850:L705850:{c.instructions+=9;NFSU2_TR(0x705850);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B705854:{NFSU2_TR(0x705854);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+12,u32(r1(U+0)));
}
B705857:{NFSU2_TR(0x705857);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B70585b:{NFSU2_TR(0x70585b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+0))!=(u32(0x0ull))));
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B70585d:{NFSU2_TR(0x70585d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B70585e:{NFSU2_TR(0x70585e);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B705860:{NFSU2_TR(0x705860);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B705861:{NFSU2_TR(0x705861);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B705862:{NFSU2_TR(0x705862);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705850u);}goto L705850;}}
}
B705864:L705864:{c.instructions+=1;NFSU2_TR(0x705864);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B705865:L705865:{c.instructions+=4;NFSU2_TR(0x705865);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B705866:{NFSU2_TR(0x705866);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B705867:{NFSU2_TR(0x705867);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B705868:{NFSU2_TR(0x705868);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B705869:L705869:{c.instructions+=6;NFSU2_TR(0x705869);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70586a:{NFSU2_TR(0x70586a);
__builtin_memmove((R+20),(R+16),4);
}
B70586c:{NFSU2_TR(0x70586c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70586f:{NFSU2_TR(0x70586f);
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
B705871:{NFSU2_TR(0x705871);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705874:{NFSU2_TR(0x705874);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L705884;}}
}
B705876:L705876:{c.instructions+=1;NFSU2_TR(0x705876);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705877:L705877:{c.instructions+=6;NFSU2_TR(0x705877);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B705879:{NFSU2_TR(0x705879);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70587c:{NFSU2_TR(0x70587c);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70587f:{NFSU2_TR(0x70587f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B705880:{NFSU2_TR(0x705880);
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
B705881:{NFSU2_TR(0x705881);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705877u);}goto L705877;}}
}
B705883:L705883:{c.instructions+=1;NFSU2_TR(0x705883);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B705884:L705884:{c.instructions+=2;NFSU2_TR(0x705884);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B705885:{NFSU2_TR(0x705885);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B705886:L705886:{c.instructions+=21;NFSU2_TR(0x705886);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705887:{NFSU2_TR(0x705887);
__builtin_memmove((R+20),(R+16),4);
}
B705889:{NFSU2_TR(0x705889);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B70588c:{NFSU2_TR(0x70588c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70588f:{NFSU2_TR(0x70588f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B705891:{NFSU2_TR(0x705891);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B705894:{NFSU2_TR(0x705894);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705898:{NFSU2_TR(0x705898);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70589c:{NFSU2_TR(0x70589c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70589d:{NFSU2_TR(0x70589d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7058a0:{NFSU2_TR(0x7058a0);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
w8(U+8,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
}
B7058a4:{NFSU2_TR(0x7058a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7058a7:{NFSU2_TR(0x7058a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7058aa:{NFSU2_TR(0x7058aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7058ab:{NFSU2_TR(0x7058ab);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7058ad:{NFSU2_TR(0x7058ad);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7058af:{NFSU2_TR(0x7058af);
__builtin_memmove((R+28),(R+8),4);
}
B7058b1:{NFSU2_TR(0x7058b1);
w4(R+28,shr<u32>(r4(R+28),u64(u32(0x1ull))));
}
B7058b3:{NFSU2_TR(0x7058b3);
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
B7058b5:{NFSU2_TR(0x7058b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7058b8:{NFSU2_TR(0x7058b8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L705911;}}
}
B7058ba:L7058ba:{c.instructions+=1;NFSU2_TR(0x7058ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7058bb:L7058bb:{c.instructions+=17;NFSU2_TR(0x7058bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B7058bf:{NFSU2_TR(0x7058bf);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B7058c3:{NFSU2_TR(0x7058c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7058c7:{NFSU2_TR(0x7058c7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B7058ca:{NFSU2_TR(0x7058ca);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B7058cc:{NFSU2_TR(0x7058cc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B7058ce:{NFSU2_TR(0x7058ce);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7058d0:{NFSU2_TR(0x7058d0);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7058d0);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x7058d0);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B7058d3:{NFSU2_TR(0x7058d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7058d6:{NFSU2_TR(0x7058d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7058d9:{NFSU2_TR(0x7058d9);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7058dc:{NFSU2_TR(0x7058dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7058df:{NFSU2_TR(0x7058df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B7058e2:{NFSU2_TR(0x7058e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7058e5:{NFSU2_TR(0x7058e5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7058e7:{NFSU2_TR(0x7058e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7058ea:{NFSU2_TR(0x7058ea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L705903;}}
}
B7058ec:L7058ec:{c.instructions+=9;NFSU2_TR(0x7058ec);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7058ee:{NFSU2_TR(0x7058ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B7058f1:{NFSU2_TR(0x7058f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7058f4:{NFSU2_TR(0x7058f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7058f7:{NFSU2_TR(0x7058f7);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7058f9:{NFSU2_TR(0x7058f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7058fc:{NFSU2_TR(0x7058fc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7058fe:{NFSU2_TR(0x7058fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B705901:{NFSU2_TR(0x705901);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7058ecu);}goto L7058ec;}}
}
B705903:L705903:{c.instructions+=5;NFSU2_TR(0x705903);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B705906:{NFSU2_TR(0x705906);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B705909:{NFSU2_TR(0x705909);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B70590b:{NFSU2_TR(0x70590b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70590e:{NFSU2_TR(0x70590e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7058bbu);}goto L7058bb;}}
}
B705910:L705910:{c.instructions+=1;NFSU2_TR(0x705910);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B705911:L705911:{c.instructions+=4;NFSU2_TR(0x705911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B705912:{NFSU2_TR(0x705912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B705913:{NFSU2_TR(0x705913);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B705914:{NFSU2_TR(0x705914);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B705915:L705915:{c.instructions+=16;NFSU2_TR(0x705915);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705916:{NFSU2_TR(0x705916);
__builtin_memmove((R+20),(R+16),4);
}
B705918:{NFSU2_TR(0x705918);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70591b:{NFSU2_TR(0x70591b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B70591d:{NFSU2_TR(0x70591d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B705920:{NFSU2_TR(0x705920);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705921:{NFSU2_TR(0x705921);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705924:{NFSU2_TR(0x705924);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B705926:{NFSU2_TR(0x705926);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705929:{NFSU2_TR(0x705929);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70592a:{NFSU2_TR(0x70592a);
__builtin_memmove((R+28),(R+4),4);
}
B70592c:{NFSU2_TR(0x70592c);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B705930:{NFSU2_TR(0x705930);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+8))));
}
B705932:{NFSU2_TR(0x705932);
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
B705934:{NFSU2_TR(0x705934);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705937:{NFSU2_TR(0x705937);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L705977;}}
}
B705939:L705939:{c.instructions+=3;NFSU2_TR(0x705939);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70593c:{NFSU2_TR(0x70593c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70593f:{NFSU2_TR(0x70593f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705940:L705940:{c.instructions+=19;NFSU2_TR(0x705940);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705943:{NFSU2_TR(0x705943);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(r1(U+0)));
}
B705946:{NFSU2_TR(0x705946);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B705949:{NFSU2_TR(0x705949);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B70594c:{NFSU2_TR(0x70594c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+12,u32(r1(U+0)));
}
B70594f:{NFSU2_TR(0x70594f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B705951:{NFSU2_TR(0x705951);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B705954:{NFSU2_TR(0x705954);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+0,u32(r1(U+0)));
}
B705957:{NFSU2_TR(0x705957);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70595a:{NFSU2_TR(0x70595a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B70595e:{NFSU2_TR(0x70595e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705961:{NFSU2_TR(0x705961);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B705964:{NFSU2_TR(0x705964);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B705967:{NFSU2_TR(0x705967);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70596a:{NFSU2_TR(0x70596a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B70596d:{NFSU2_TR(0x70596d);
__builtin_memmove((R+4),(R+24),4);
}
B70596f:{NFSU2_TR(0x70596f);
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
B705971:{NFSU2_TR(0x705971);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705974:{NFSU2_TR(0x705974);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705940u);}goto L705940;}}
}
B705976:L705976:{c.instructions+=1;NFSU2_TR(0x705976);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B705977:L705977:{c.instructions+=4;NFSU2_TR(0x705977);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B705978:{NFSU2_TR(0x705978);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B705979:{NFSU2_TR(0x705979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70597a:{NFSU2_TR(0x70597a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70597b:L70597b:{c.instructions+=10;NFSU2_TR(0x70597b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70597c:{NFSU2_TR(0x70597c);
__builtin_memmove((R+20),(R+16),4);
}
B70597e:{NFSU2_TR(0x70597e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705981:{NFSU2_TR(0x705981);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B705985:{NFSU2_TR(0x705985);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705986:{NFSU2_TR(0x705986);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705989:{NFSU2_TR(0x705989);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+28))));
}
B70598b:{NFSU2_TR(0x70598b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B70598d:{NFSU2_TR(0x70598d);
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
B70598f:{NFSU2_TR(0x70598f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7059a9;}}
}
B705991:L705991:{c.instructions+=3;NFSU2_TR(0x705991);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705992:{NFSU2_TR(0x705992);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705993:{NFSU2_TR(0x705993);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705996:L705996:{c.instructions+=7;NFSU2_TR(0x705996);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B705998:{NFSU2_TR(0x705998);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70599b:{NFSU2_TR(0x70599b);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70599e:{NFSU2_TR(0x70599e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B7059a1:{NFSU2_TR(0x7059a1);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7059a3:{NFSU2_TR(0x7059a3);
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
B7059a5:{NFSU2_TR(0x7059a5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705996u);}goto L705996;}}
}
B7059a7:L7059a7:{c.instructions+=2;NFSU2_TR(0x7059a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7059a8:{NFSU2_TR(0x7059a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7059a9:L7059a9:{c.instructions+=3;NFSU2_TR(0x7059a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7059aa:{NFSU2_TR(0x7059aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7059ab:{NFSU2_TR(0x7059ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7059ac:L7059ac:{c.instructions+=9;NFSU2_TR(0x7059ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7059ad:{NFSU2_TR(0x7059ad);
__builtin_memmove((R+20),(R+16),4);
}
B7059af:{NFSU2_TR(0x7059af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B7059b2:{NFSU2_TR(0x7059b2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7059b6:{NFSU2_TR(0x7059b6);
w4(R+0,u32(0x705886ull));
}
B7059bb:{NFSU2_TR(0x7059bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7059be:{NFSU2_TR(0x7059be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7059c1:{NFSU2_TR(0x7059c1);
w4(R+0,u32(0x70597bull));
}
B7059c6:{NFSU2_TR(0x7059c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7059d1;}}
}
B7059c8:L7059c8:{c.instructions+=2;NFSU2_TR(0x7059c8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7059cc:{NFSU2_TR(0x7059cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7059d1;}}
}
B7059ce:L7059ce:{c.instructions+=1;NFSU2_TR(0x7059ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7059d1:L7059d1:{c.instructions+=2;NFSU2_TR(0x7059d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7059d5:{NFSU2_TR(0x7059d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7059ed;}}
}
B7059d7:L7059d7:{c.instructions+=2;NFSU2_TR(0x7059d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7059db:{NFSU2_TR(0x7059db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7059ed;}}
}
B7059dd:L7059dd:{c.instructions+=3;NFSU2_TR(0x7059dd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7059e1:{NFSU2_TR(0x7059e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7059e4:{NFSU2_TR(0x7059e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7059ed;}}
}
B7059e6:L7059e6:{c.instructions+=1;NFSU2_TR(0x7059e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x705915ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7059ed:L7059ed:{c.instructions+=6;NFSU2_TR(0x7059ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7059ee:{NFSU2_TR(0x7059ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7059f1:{NFSU2_TR(0x7059f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7059f4:{NFSU2_TR(0x7059f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7059f5:{NFSU2_TR(0x7059f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7059f6:{NFSU2_TR(0x7059f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L705a33;}}
}
B7059f8:L7059f8:{c.instructions+=2;NFSU2_TR(0x7059f8);
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
B7059fa:{NFSU2_TR(0x7059fa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L705bb1;}}
}
B705a00:L705a00:{c.instructions+=5;NFSU2_TR(0x705a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705a03:{NFSU2_TR(0x705a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705a06:{NFSU2_TR(0x705a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705a09:{NFSU2_TR(0x705a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B705a0c:{NFSU2_TR(0x705a0c);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B705a0d:L705a0d:{c.instructions+=9;NFSU2_TR(0x705a0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705a10:{NFSU2_TR(0x705a10);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705a13:{NFSU2_TR(0x705a13);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705a15:{NFSU2_TR(0x705a15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705a16:{NFSU2_TR(0x705a16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705a17:{NFSU2_TR(0x705a17);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705a1a:{NFSU2_TR(0x705a1a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705a1c:{NFSU2_TR(0x705a1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705a1d:{NFSU2_TR(0x705a1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x705a20ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B705a20:L705a20:{c.instructions+=5;NFSU2_TR(0x705a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B705a23:{NFSU2_TR(0x705a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B705a26:{NFSU2_TR(0x705a26);
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B705a29:{NFSU2_TR(0x705a29);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B705a2c:{NFSU2_TR(0x705a2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705a0du);}goto L705a0d;}}
}
B705a2e:L705a2e:{c.instructions+=1;NFSU2_TR(0x705a2e);
{goto L705bb1;}
}
B705a33:L705a33:{c.instructions+=1;NFSU2_TR(0x705a33);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L705a4c;}}
}
B705a35:L705a35:{c.instructions+=9;NFSU2_TR(0x705a35);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B705a39:{NFSU2_TR(0x705a39);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B705a3a:{NFSU2_TR(0x705a3a);
__builtin_memmove((R+0),(R+24),4);
}
B705a3c:{NFSU2_TR(0x705a3c);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B705a40:{NFSU2_TR(0x705a40);
w1(R+512,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B705a42:{NFSU2_TR(0x705a42);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x705a42);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x705a42);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B705a44:{NFSU2_TR(0x705a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705a47:{NFSU2_TR(0x705a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705a4a:{NFSU2_TR(0x705a4a);
{goto L705a62;}
}
B705a4c:L705a4c:{c.instructions+=8;NFSU2_TR(0x705a4c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B705a50:{NFSU2_TR(0x705a50);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B705a51:{NFSU2_TR(0x705a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705a54:{NFSU2_TR(0x705a54);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B705a58:{NFSU2_TR(0x705a58);
w1(R+512,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B705a5a:{NFSU2_TR(0x705a5a);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x705a5a);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x705a5a);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B705a5d:{NFSU2_TR(0x705a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705a60:{NFSU2_TR(0x705a60);
__builtin_memmove((R+24),(R+0),4);
}
B705a62:L705a62:{c.instructions+=13;NFSU2_TR(0x705a62);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705a65:{NFSU2_TR(0x705a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705a68:{NFSU2_TR(0x705a68);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705a6b:{NFSU2_TR(0x705a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705a6e:{NFSU2_TR(0x705a6e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705a70:{NFSU2_TR(0x705a70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705a71:{NFSU2_TR(0x705a71);
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
B705a72:{NFSU2_TR(0x705a72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705a73:{NFSU2_TR(0x705a73);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705a76:{NFSU2_TR(0x705a76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705a79:{NFSU2_TR(0x705a79);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705a7b:{NFSU2_TR(0x705a7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705a7e:{NFSU2_TR(0x705a7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x705a81ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B705a81:L705a81:{c.instructions+=6;NFSU2_TR(0x705a81);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B705a83:{NFSU2_TR(0x705a83);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B705a87:{NFSU2_TR(0x705a87);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x705a87);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x705a87);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B705a89:{NFSU2_TR(0x705a89);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B705a8c:{NFSU2_TR(0x705a8c);
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
B705a8e:{NFSU2_TR(0x705a8e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L705bb1;}}
}
B705a94:L705a94:{c.instructions+=21;NFSU2_TR(0x705a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705a97:{NFSU2_TR(0x705a97);
__builtin_memmove((R+8),(R+4),4);
}
B705a99:{NFSU2_TR(0x705a99);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B705a9d:{NFSU2_TR(0x705a9d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B705a9f:{NFSU2_TR(0x705a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705aa2:{NFSU2_TR(0x705aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B705aa5:{NFSU2_TR(0x705aa5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B705aa8:{NFSU2_TR(0x705aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B705aab:{NFSU2_TR(0x705aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705aae:{NFSU2_TR(0x705aae);
__builtin_memmove((R+4),(R+24),4);
}
B705ab0:{NFSU2_TR(0x705ab0);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B705ab4:{NFSU2_TR(0x705ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705ab7:{NFSU2_TR(0x705ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705aba:{NFSU2_TR(0x705aba);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B705abc:{NFSU2_TR(0x705abc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B705abe:{NFSU2_TR(0x705abe);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B705ac0:{NFSU2_TR(0x705ac0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B705ac1:{NFSU2_TR(0x705ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705ac4:{NFSU2_TR(0x705ac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705ac7:{NFSU2_TR(0x705ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705aca:{NFSU2_TR(0x705aca);
{goto L705ad2;}
}
B705acc:L705acc:{c.instructions+=2;NFSU2_TR(0x705acc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705acf:{NFSU2_TR(0x705acf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705ad2:L705ad2:{c.instructions+=4;NFSU2_TR(0x705ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705ad5:{NFSU2_TR(0x705ad5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B705ad6:{NFSU2_TR(0x705ad6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B705ad9:{NFSU2_TR(0x705ad9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L705b4a;}}
}
B705adb:L705adb:{c.instructions+=8;NFSU2_TR(0x705adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705ade:{NFSU2_TR(0x705ade);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B705ae1:{NFSU2_TR(0x705ae1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B705ae3:{NFSU2_TR(0x705ae3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B705ae4:{NFSU2_TR(0x705ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705ae7:{NFSU2_TR(0x705ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705aea:{NFSU2_TR(0x705aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705aed:{NFSU2_TR(0x705aed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705af0:L705af0:{c.instructions+=3;NFSU2_TR(0x705af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705af3:{NFSU2_TR(0x705af3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B705af6:{NFSU2_TR(0x705af6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L705b16;}}
}
B705af8:L705af8:{c.instructions+=9;NFSU2_TR(0x705af8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705afb:{NFSU2_TR(0x705afb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705afe:{NFSU2_TR(0x705afe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705b00:{NFSU2_TR(0x705b00);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705b03:{NFSU2_TR(0x705b03);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705b06:{NFSU2_TR(0x705b06);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705b09:{NFSU2_TR(0x705b09);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705b0b:{NFSU2_TR(0x705b0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705b0e:{NFSU2_TR(0x705b0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x705b11ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B705b11:L705b11:{c.instructions+=2;NFSU2_TR(0x705b11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B705b14:{NFSU2_TR(0x705b14);
{goto L705b33;}
}
B705b16:L705b16:{c.instructions+=5;NFSU2_TR(0x705b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705b19:{NFSU2_TR(0x705b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705b1c:{NFSU2_TR(0x705b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705b1f:{NFSU2_TR(0x705b1f);
__builtin_memmove((R+0),(R+4),4);
}
B705b21:{NFSU2_TR(0x705b21);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B705b24:L705b24:{c.instructions+=1;NFSU2_TR(0x705b24);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L705b26;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705b24u);}goto L705b24;}
}
B705b26:L705b26:{c.instructions+=2;NFSU2_TR(0x705b26);
__builtin_memmove((R+4),(R+0),4);
}
B705b28:{NFSU2_TR(0x705b28);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B705b2b:L705b2b:{c.instructions+=1;NFSU2_TR(0x705b2b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L705b2d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705b2bu);}goto L705b2b;}
}
B705b2d:L705b2d:{c.instructions+=2;NFSU2_TR(0x705b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705b30:{NFSU2_TR(0x705b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705b33:L705b33:{c.instructions+=8;NFSU2_TR(0x705b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705b36:{NFSU2_TR(0x705b36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B705b39:{NFSU2_TR(0x705b39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705b3c:{NFSU2_TR(0x705b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705b3f:{NFSU2_TR(0x705b3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B705b42:{NFSU2_TR(0x705b42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B705b45:{NFSU2_TR(0x705b45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B705b48:{NFSU2_TR(0x705b48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705af0u);}goto L705af0;}}
}
B705b4a:L705b4a:{c.instructions+=3;NFSU2_TR(0x705b4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705b4d:{NFSU2_TR(0x705b4d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B705b4f:{NFSU2_TR(0x705b4f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L705b7f;}}
}
B705b51:L705b51:{c.instructions+=2;NFSU2_TR(0x705b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705b54:{NFSU2_TR(0x705b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705b57:L705b57:{c.instructions+=13;NFSU2_TR(0x705b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705b5a:{NFSU2_TR(0x705b5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705b5b:{NFSU2_TR(0x705b5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705b5e:{NFSU2_TR(0x705b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B705b61:{NFSU2_TR(0x705b61);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705b64:{NFSU2_TR(0x705b64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705b65:{NFSU2_TR(0x705b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705b68:{NFSU2_TR(0x705b68);
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
B705b69:{NFSU2_TR(0x705b69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705b6a:{NFSU2_TR(0x705b6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705b6d:{NFSU2_TR(0x705b6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705b70:{NFSU2_TR(0x705b70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705b71:{NFSU2_TR(0x705b71);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x705b74ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B705b74:L705b74:{c.instructions+=4;NFSU2_TR(0x705b74);
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B705b77:{NFSU2_TR(0x705b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705b7a:{NFSU2_TR(0x705b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B705b7d:{NFSU2_TR(0x705b7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705b57u);}goto L705b57;}}
}
B705b7f:L705b7f:{c.instructions+=7;NFSU2_TR(0x705b7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705b82:{NFSU2_TR(0x705b82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705b85:{NFSU2_TR(0x705b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B705b88:{NFSU2_TR(0x705b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B705b8b:{NFSU2_TR(0x705b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B705b8e:{NFSU2_TR(0x705b8e);
__builtin_memmove((R+0),(R+4),4);
}
B705b90:{NFSU2_TR(0x705b90);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B705b93:L705b93:{c.instructions+=1;NFSU2_TR(0x705b93);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L705b95;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705b93u);}goto L705b93;}
}
B705b95:L705b95:{c.instructions+=2;NFSU2_TR(0x705b95);
__builtin_memmove((R+4),(R+0),4);
}
B705b97:{NFSU2_TR(0x705b97);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B705b9a:L705b9a:{c.instructions+=1;NFSU2_TR(0x705b9a);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L705b9c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705b9au);}goto L705b9a;}
}
B705b9c:L705b9c:{c.instructions+=6;NFSU2_TR(0x705b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705b9f:{NFSU2_TR(0x705b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B705ba2:{NFSU2_TR(0x705ba2);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
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
B705ba5:{NFSU2_TR(0x705ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705ba8:{NFSU2_TR(0x705ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705bab:{NFSU2_TR(0x705bab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705accu);}goto L705acc;}}
}
B705bb1:L705bb1:{c.instructions+=5;NFSU2_TR(0x705bb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B705bb2:{NFSU2_TR(0x705bb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B705bb3:{NFSU2_TR(0x705bb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B705bb4:{NFSU2_TR(0x705bb4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B705bb5:{NFSU2_TR(0x705bb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B705bb6:L705bb6:{c.instructions+=40;NFSU2_TR(0x705bb6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705bb7:{NFSU2_TR(0x705bb7);
__builtin_memmove((R+20),(R+16),4);
}
B705bb9:{NFSU2_TR(0x705bb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B705bbc:{NFSU2_TR(0x705bbc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705bbd:{NFSU2_TR(0x705bbd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705bbe:{NFSU2_TR(0x705bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705bc1:{NFSU2_TR(0x705bc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B705bc3:{NFSU2_TR(0x705bc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705bc4:{NFSU2_TR(0x705bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705bc7:{NFSU2_TR(0x705bc7);
__builtin_memmove((R+0),(R+4),4);
}
B705bc9:{NFSU2_TR(0x705bc9);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B705bcd:{NFSU2_TR(0x705bcd);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B705bd1:{NFSU2_TR(0x705bd1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B705bd3:{NFSU2_TR(0x705bd3);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x705bd3);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x705bd3);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B705bd5:{NFSU2_TR(0x705bd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705bd8:{NFSU2_TR(0x705bd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B705bdb:{NFSU2_TR(0x705bdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705bde:{NFSU2_TR(0x705bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B705be1:{NFSU2_TR(0x705be1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705be4:{NFSU2_TR(0x705be4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705be7:{NFSU2_TR(0x705be7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705bea:{NFSU2_TR(0x705bea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705bed:{NFSU2_TR(0x705bed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705bf0:{NFSU2_TR(0x705bf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705bf3:{NFSU2_TR(0x705bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705bf6:{NFSU2_TR(0x705bf6);
__builtin_memmove((R+0),(R+28),4);
}
B705bf8:{NFSU2_TR(0x705bf8);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B705bfc:{NFSU2_TR(0x705bfc);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B705c00:{NFSU2_TR(0x705c00);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B705c02:{NFSU2_TR(0x705c02);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x705c02);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x705c02);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B705c05:{NFSU2_TR(0x705c05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705c06:{NFSU2_TR(0x705c06);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705c09:{NFSU2_TR(0x705c09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705c0c:{NFSU2_TR(0x705c0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705c0f:{NFSU2_TR(0x705c0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705c12:{NFSU2_TR(0x705c12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705c13:{NFSU2_TR(0x705c13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705c14:{NFSU2_TR(0x705c14);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705c17:{NFSU2_TR(0x705c17);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705c1a:{NFSU2_TR(0x705c1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x705c1full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7059acu);}goto L7059ac;}
}
B705c1f:L705c1f:{c.instructions+=4;NFSU2_TR(0x705c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705c22:{NFSU2_TR(0x705c22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B705c25:{NFSU2_TR(0x705c25);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B705c27:{NFSU2_TR(0x705c27);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L705c7e;}}
}
B705c29:L705c29:{c.instructions+=3;NFSU2_TR(0x705c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705c2d:{NFSU2_TR(0x705c2d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B705c31:{NFSU2_TR(0x705c31);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L705c7e;}}
}
B705c33:L705c33:{c.instructions+=19;NFSU2_TR(0x705c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705c36:{NFSU2_TR(0x705c36);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B705c3a:{NFSU2_TR(0x705c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B705c3d:{NFSU2_TR(0x705c3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705c40:{NFSU2_TR(0x705c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B705c43:{NFSU2_TR(0x705c43);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B705c47:{NFSU2_TR(0x705c47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B705c49:{NFSU2_TR(0x705c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B705c4c:{NFSU2_TR(0x705c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705c4f:{NFSU2_TR(0x705c4f);
__builtin_memmove((R+12),(R+0),1);
}
B705c51:{NFSU2_TR(0x705c51);
__builtin_memmove((R+13),(R+12),1);
}
B705c53:{NFSU2_TR(0x705c53);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B705c54:{NFSU2_TR(0x705c54);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B705c57:{NFSU2_TR(0x705c57);
__builtin_memmove((R+8),(R+4),4);
}
B705c59:{NFSU2_TR(0x705c59);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B705c5c:{NFSU2_TR(0x705c5c);
__builtin_memmove((R+0),(R+12),4);
}
B705c5e:{NFSU2_TR(0x705c5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B705c61:{NFSU2_TR(0x705c61);
__builtin_memmove((R+0),(R+12),2);
}
B705c64:{NFSU2_TR(0x705c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B705c67:L705c67:{c.instructions+=1;NFSU2_TR(0x705c67);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L705c69;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705c67u);}goto L705c67;}
}
B705c69:L705c69:{c.instructions+=3;NFSU2_TR(0x705c69);
__builtin_memmove((R+4),(R+8),4);
}
B705c6b:{NFSU2_TR(0x705c6b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B705c6e:{NFSU2_TR(0x705c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705c71:L705c71:{c.instructions+=1;NFSU2_TR(0x705c71);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L705c73;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705c71u);}goto L705c71;}
}
B705c73:L705c73:{c.instructions+=3;NFSU2_TR(0x705c73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705c76:{NFSU2_TR(0x705c76);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B705c79:{NFSU2_TR(0x705c79);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705c33u);}goto L705c33;}}
}
B705c7b:L705c7b:{c.instructions+=1;NFSU2_TR(0x705c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705c7e:L705c7e:{c.instructions+=4;NFSU2_TR(0x705c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705c81:{NFSU2_TR(0x705c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B705c84:{NFSU2_TR(0x705c84);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B705c86:{NFSU2_TR(0x705c86);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L705cc2;}}
}
B705c88:L705c88:{c.instructions+=3;NFSU2_TR(0x705c88);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B705c8b:{NFSU2_TR(0x705c8b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B705c8d:{NFSU2_TR(0x705c8d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L705cc2;}}
}
B705c8f:L705c8f:{c.instructions+=2;NFSU2_TR(0x705c8f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
}
B705c92:{NFSU2_TR(0x705c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705c95:L705c95:{c.instructions+=11;NFSU2_TR(0x705c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705c98:{NFSU2_TR(0x705c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B705c9b:{NFSU2_TR(0x705c9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B705c9d:{NFSU2_TR(0x705c9d);
__builtin_memmove((R+24),(R+28),4);
}
B705c9f:{NFSU2_TR(0x705c9f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B705ca2:{NFSU2_TR(0x705ca2);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
}
B705ca6:{NFSU2_TR(0x705ca6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B705ca7:{NFSU2_TR(0x705ca7);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B705ca9:{NFSU2_TR(0x705ca9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B705cab:{NFSU2_TR(0x705cab);
__builtin_memmove((R+8),(R+4),4);
}
B705cad:{NFSU2_TR(0x705cad);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B705cb0:L705cb0:{c.instructions+=1;NFSU2_TR(0x705cb0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L705cb2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705cb0u);}goto L705cb0;}
}
B705cb2:L705cb2:{c.instructions+=3;NFSU2_TR(0x705cb2);
__builtin_memmove((R+4),(R+8),4);
}
B705cb4:{NFSU2_TR(0x705cb4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B705cb7:{NFSU2_TR(0x705cb7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B705cb8:L705cb8:{c.instructions+=1;NFSU2_TR(0x705cb8);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L705cba;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705cb8u);}goto L705cb8;}
}
B705cba:L705cba:{c.instructions+=2;NFSU2_TR(0x705cba);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B705cbd:{NFSU2_TR(0x705cbd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705c95u);}goto L705c95;}}
}
B705cbf:L705cbf:{c.instructions+=1;NFSU2_TR(0x705cbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705cc2:L705cc2:{c.instructions+=27;NFSU2_TR(0x705cc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705cc5:{NFSU2_TR(0x705cc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705cc8:{NFSU2_TR(0x705cc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705ccb:{NFSU2_TR(0x705ccb);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B705ccc:{NFSU2_TR(0x705ccc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705ccf:{NFSU2_TR(0x705ccf);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B705cd1:{NFSU2_TR(0x705cd1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705cd4:{NFSU2_TR(0x705cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705cd7:{NFSU2_TR(0x705cd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705cda:{NFSU2_TR(0x705cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705cdd:{NFSU2_TR(0x705cdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705ce0:{NFSU2_TR(0x705ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,sar<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705ce3:{NFSU2_TR(0x705ce3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705ce6:{NFSU2_TR(0x705ce6);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B705ce7:{NFSU2_TR(0x705ce7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705cea:{NFSU2_TR(0x705cea);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B705cec:{NFSU2_TR(0x705cec);
__builtin_memmove((R+28),(R+0),4);
}
B705cee:{NFSU2_TR(0x705cee);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B705cf0:{NFSU2_TR(0x705cf0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705cf1:{NFSU2_TR(0x705cf1);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705cf4:{NFSU2_TR(0x705cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705cf7:{NFSU2_TR(0x705cf7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705cfa:{NFSU2_TR(0x705cfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705cfd:{NFSU2_TR(0x705cfd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705d00:{NFSU2_TR(0x705d00);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705d03:{NFSU2_TR(0x705d03);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705d06:{NFSU2_TR(0x705d06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x705d0bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7059acu);}goto L7059ac;}
}
B705d0b:L705d0b:{c.instructions+=3;NFSU2_TR(0x705d0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B705d0e:{NFSU2_TR(0x705d0e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B705d11:{NFSU2_TR(0x705d11);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L705d68;}}
}
B705d13:L705d13:{c.instructions+=3;NFSU2_TR(0x705d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705d17:{NFSU2_TR(0x705d17);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B705d1b:{NFSU2_TR(0x705d1b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L705d68;}}
}
B705d1d:L705d1d:{c.instructions+=18;NFSU2_TR(0x705d1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705d20:{NFSU2_TR(0x705d20);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B705d24:{NFSU2_TR(0x705d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B705d27:{NFSU2_TR(0x705d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705d2a:{NFSU2_TR(0x705d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B705d2d:{NFSU2_TR(0x705d2d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B705d31:{NFSU2_TR(0x705d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705d34:{NFSU2_TR(0x705d34);
__builtin_memmove((R+12),(R+0),1);
}
B705d36:{NFSU2_TR(0x705d36);
__builtin_memmove((R+13),(R+12),1);
}
B705d38:{NFSU2_TR(0x705d38);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B705d3a:{NFSU2_TR(0x705d3a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B705d3b:{NFSU2_TR(0x705d3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B705d3e:{NFSU2_TR(0x705d3e);
__builtin_memmove((R+8),(R+4),4);
}
B705d40:{NFSU2_TR(0x705d40);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B705d43:{NFSU2_TR(0x705d43);
__builtin_memmove((R+0),(R+12),4);
}
B705d45:{NFSU2_TR(0x705d45);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B705d48:{NFSU2_TR(0x705d48);
__builtin_memmove((R+0),(R+12),2);
}
B705d4b:{NFSU2_TR(0x705d4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B705d4e:L705d4e:{c.instructions+=1;NFSU2_TR(0x705d4e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L705d50;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705d4eu);}goto L705d4e;}
}
B705d50:L705d50:{c.instructions+=3;NFSU2_TR(0x705d50);
__builtin_memmove((R+4),(R+8),4);
}
B705d52:{NFSU2_TR(0x705d52);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B705d55:{NFSU2_TR(0x705d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705d58:L705d58:{c.instructions+=1;NFSU2_TR(0x705d58);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L705d5a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705d58u);}goto L705d58;}
}
B705d5a:L705d5a:{c.instructions+=4;NFSU2_TR(0x705d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705d5d:{NFSU2_TR(0x705d5d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B705d60:{NFSU2_TR(0x705d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705d63:{NFSU2_TR(0x705d63);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705d1du);}goto L705d1d;}}
}
B705d65:L705d65:{c.instructions+=1;NFSU2_TR(0x705d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705d68:L705d68:{c.instructions+=3;NFSU2_TR(0x705d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705d6b:{NFSU2_TR(0x705d6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B705d6e:{NFSU2_TR(0x705d6e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L705dc6;}}
}
B705d70:L705d70:{c.instructions+=8;NFSU2_TR(0x705d70);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B705d73:{NFSU2_TR(0x705d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705d76:{NFSU2_TR(0x705d76);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705d79:{NFSU2_TR(0x705d79);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B705d7a:{NFSU2_TR(0x705d7a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B705d7c:{NFSU2_TR(0x705d7c);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B705d7e:{NFSU2_TR(0x705d7e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B705d81:{NFSU2_TR(0x705d81);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L705dc6;}}
}
B705d83:L705d83:{c.instructions+=12;NFSU2_TR(0x705d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705d86:{NFSU2_TR(0x705d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B705d89:{NFSU2_TR(0x705d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705d8c:{NFSU2_TR(0x705d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705d8f:{NFSU2_TR(0x705d8f);
__builtin_memmove((R+24),(R+28),4);
}
B705d91:{NFSU2_TR(0x705d91);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B705d95:{NFSU2_TR(0x705d95);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
}
B705d98:{NFSU2_TR(0x705d98);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B705d9b:{NFSU2_TR(0x705d9b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B705d9d:{NFSU2_TR(0x705d9d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B705d9f:{NFSU2_TR(0x705d9f);
__builtin_memmove((R+0),(R+4),4);
}
B705da1:{NFSU2_TR(0x705da1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B705da4:L705da4:{c.instructions+=1;NFSU2_TR(0x705da4);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L705da6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705da4u);}goto L705da4;}
}
B705da6:L705da6:{c.instructions+=3;NFSU2_TR(0x705da6);
__builtin_memmove((R+4),(R+0),4);
}
B705da8:{NFSU2_TR(0x705da8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B705dab:{NFSU2_TR(0x705dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705dae:L705dae:{c.instructions+=1;NFSU2_TR(0x705dae);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L705db0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705daeu);}goto L705dae;}
}
B705db0:L705db0:{c.instructions+=6;NFSU2_TR(0x705db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705db3:{NFSU2_TR(0x705db3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B705db4:{NFSU2_TR(0x705db4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B705db6:{NFSU2_TR(0x705db6);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B705db8:{NFSU2_TR(0x705db8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B705dbb:{NFSU2_TR(0x705dbb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705d83u);}goto L705d83;}}
}
B705dbd:L705dbd:{c.instructions+=3;NFSU2_TR(0x705dbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705dc0:{NFSU2_TR(0x705dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705dc3:{NFSU2_TR(0x705dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705dc6:L705dc6:{c.instructions+=16;NFSU2_TR(0x705dc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705dc9:{NFSU2_TR(0x705dc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705dcc:{NFSU2_TR(0x705dcc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705dcf:{NFSU2_TR(0x705dcf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705dd2:{NFSU2_TR(0x705dd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705dd5:{NFSU2_TR(0x705dd5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705dd8:{NFSU2_TR(0x705dd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705ddb:{NFSU2_TR(0x705ddb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705ddc:{NFSU2_TR(0x705ddc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705ddd:{NFSU2_TR(0x705ddd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705de0:{NFSU2_TR(0x705de0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705de3:{NFSU2_TR(0x705de3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705de6:{NFSU2_TR(0x705de6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705de9:{NFSU2_TR(0x705de9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705dec:{NFSU2_TR(0x705dec);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705def:{NFSU2_TR(0x705def);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x705df4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7059acu);}goto L7059ac;}
}
B705df4:L705df4:{c.instructions+=3;NFSU2_TR(0x705df4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B705df7:{NFSU2_TR(0x705df7);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B705dfa:{NFSU2_TR(0x705dfa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L705e50;}}
}
B705dfc:L705dfc:{c.instructions+=3;NFSU2_TR(0x705dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705e00:{NFSU2_TR(0x705e00);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B705e04:{NFSU2_TR(0x705e04);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L705e50;}}
}
B705e06:L705e06:{c.instructions+=1;NFSU2_TR(0x705e06);
{goto L705e0b;}
}
B705e08:L705e08:{c.instructions+=1;NFSU2_TR(0x705e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705e0b:L705e0b:{c.instructions+=18;NFSU2_TR(0x705e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705e0e:{NFSU2_TR(0x705e0e);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B705e12:{NFSU2_TR(0x705e12);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B705e15:{NFSU2_TR(0x705e15);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705e18:{NFSU2_TR(0x705e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B705e1b:{NFSU2_TR(0x705e1b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B705e1f:{NFSU2_TR(0x705e1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705e22:{NFSU2_TR(0x705e22);
__builtin_memmove((R+12),(R+0),1);
}
B705e24:{NFSU2_TR(0x705e24);
__builtin_memmove((R+13),(R+12),1);
}
B705e26:{NFSU2_TR(0x705e26);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B705e28:{NFSU2_TR(0x705e28);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B705e29:{NFSU2_TR(0x705e29);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B705e2c:{NFSU2_TR(0x705e2c);
__builtin_memmove((R+8),(R+4),4);
}
B705e2e:{NFSU2_TR(0x705e2e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B705e31:{NFSU2_TR(0x705e31);
__builtin_memmove((R+0),(R+12),4);
}
B705e33:{NFSU2_TR(0x705e33);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B705e36:{NFSU2_TR(0x705e36);
__builtin_memmove((R+0),(R+12),2);
}
B705e39:{NFSU2_TR(0x705e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B705e3c:L705e3c:{c.instructions+=1;NFSU2_TR(0x705e3c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L705e3e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705e3cu);}goto L705e3c;}
}
B705e3e:L705e3e:{c.instructions+=3;NFSU2_TR(0x705e3e);
__builtin_memmove((R+4),(R+8),4);
}
B705e40:{NFSU2_TR(0x705e40);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B705e43:{NFSU2_TR(0x705e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705e46:L705e46:{c.instructions+=1;NFSU2_TR(0x705e46);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L705e48;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705e46u);}goto L705e46;}
}
B705e48:L705e48:{c.instructions+=3;NFSU2_TR(0x705e48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705e4b:{NFSU2_TR(0x705e4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B705e4e:{NFSU2_TR(0x705e4e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705e08u);}goto L705e08;}}
}
B705e50:L705e50:{c.instructions+=3;NFSU2_TR(0x705e50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705e53:{NFSU2_TR(0x705e53);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
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
B705e56:{NFSU2_TR(0x705e56);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L705ea5;}}
}
B705e58:L705e58:{c.instructions+=8;NFSU2_TR(0x705e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705e5b:{NFSU2_TR(0x705e5b);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B705e5c:{NFSU2_TR(0x705e5c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B705e5e:{NFSU2_TR(0x705e5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B705e61:{NFSU2_TR(0x705e61);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B705e63:{NFSU2_TR(0x705e63);
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
B705e65:{NFSU2_TR(0x705e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705e68:{NFSU2_TR(0x705e68);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L705ea5;}}
}
B705e6a:L705e6a:{c.instructions+=2;NFSU2_TR(0x705e6a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
}
B705e6d:{NFSU2_TR(0x705e6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705e70:L705e70:{c.instructions+=10;NFSU2_TR(0x705e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705e73:{NFSU2_TR(0x705e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705e76:{NFSU2_TR(0x705e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705e79:{NFSU2_TR(0x705e79);
__builtin_memmove((R+24),(R+28),4);
}
B705e7b:{NFSU2_TR(0x705e7b);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B705e7f:{NFSU2_TR(0x705e7f);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
}
B705e83:{NFSU2_TR(0x705e83);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B705e85:{NFSU2_TR(0x705e85);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B705e87:{NFSU2_TR(0x705e87);
__builtin_memmove((R+0),(R+4),4);
}
B705e89:{NFSU2_TR(0x705e89);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B705e8c:L705e8c:{c.instructions+=1;NFSU2_TR(0x705e8c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L705e8e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705e8cu);}goto L705e8c;}
}
B705e8e:L705e8e:{c.instructions+=3;NFSU2_TR(0x705e8e);
__builtin_memmove((R+4),(R+0),4);
}
B705e90:{NFSU2_TR(0x705e90);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B705e93:{NFSU2_TR(0x705e93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705e96:L705e96:{c.instructions+=1;NFSU2_TR(0x705e96);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L705e98;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705e96u);}goto L705e96;}
}
B705e98:L705e98:{c.instructions+=6;NFSU2_TR(0x705e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705e9b:{NFSU2_TR(0x705e9b);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B705e9c:{NFSU2_TR(0x705e9c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B705e9e:{NFSU2_TR(0x705e9e);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B705ea0:{NFSU2_TR(0x705ea0);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B705ea3:{NFSU2_TR(0x705ea3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705e70u);}goto L705e70;}}
}
B705ea5:L705ea5:{c.instructions+=5;NFSU2_TR(0x705ea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B705ea6:{NFSU2_TR(0x705ea6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B705ea7:{NFSU2_TR(0x705ea7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B705ea8:{NFSU2_TR(0x705ea8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B705ea9:{NFSU2_TR(0x705ea9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B705eaa:L705eaa:{c.instructions+=29;NFSU2_TR(0x705eaa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705eab:{NFSU2_TR(0x705eab);
__builtin_memmove((R+20),(R+16),4);
}
B705ead:{NFSU2_TR(0x705ead);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705eae:{NFSU2_TR(0x705eae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705eaf:{NFSU2_TR(0x705eaf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705eb0:{NFSU2_TR(0x705eb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705eb1:{NFSU2_TR(0x705eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705eb4:{NFSU2_TR(0x705eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705eb7:{NFSU2_TR(0x705eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B705eba:{NFSU2_TR(0x705eba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705ebb:{NFSU2_TR(0x705ebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705ebe:{NFSU2_TR(0x705ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B705ec1:{NFSU2_TR(0x705ec1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B705ec3:{NFSU2_TR(0x705ec3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705ec4:{NFSU2_TR(0x705ec4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705ec5:{NFSU2_TR(0x705ec5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705ec6:{NFSU2_TR(0x705ec6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705ec9:{NFSU2_TR(0x705ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705ecc:{NFSU2_TR(0x705ecc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705ecd:{NFSU2_TR(0x705ecd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705ece:{NFSU2_TR(0x705ece);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B705ed1:{NFSU2_TR(0x705ed1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705ed2:{NFSU2_TR(0x705ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705ed5:{NFSU2_TR(0x705ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B705ed8:{NFSU2_TR(0x705ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705edb:{NFSU2_TR(0x705edb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705edc:{NFSU2_TR(0x705edc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705edd:{NFSU2_TR(0x705edd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705ee0:{NFSU2_TR(0x705ee0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x705ee5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705408u);}goto L705408;}
}
B705ee5:L705ee5:{c.instructions+=18;NFSU2_TR(0x705ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,sar<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705ee8:{NFSU2_TR(0x705ee8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705eeb:{NFSU2_TR(0x705eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,sar<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705eee:{NFSU2_TR(0x705eee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705ef1:{NFSU2_TR(0x705ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,sar<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705ef4:{NFSU2_TR(0x705ef4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705ef7:{NFSU2_TR(0x705ef7);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B705ef9:{NFSU2_TR(0x705ef9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705efc:{NFSU2_TR(0x705efc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B705eff:{NFSU2_TR(0x705eff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705f02:{NFSU2_TR(0x705f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705f05:{NFSU2_TR(0x705f05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f06:{NFSU2_TR(0x705f06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f07:{NFSU2_TR(0x705f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705f0a:{NFSU2_TR(0x705f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B705f0d:{NFSU2_TR(0x705f0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f0e:{NFSU2_TR(0x705f0e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f0f:{NFSU2_TR(0x705f0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x705f14ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705408u);}goto L705408;}
}
B705f14:L705f14:{c.instructions+=13;NFSU2_TR(0x705f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705f1a:{NFSU2_TR(0x705f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B705f1d:{NFSU2_TR(0x705f1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B705f20:{NFSU2_TR(0x705f20);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705f23:{NFSU2_TR(0x705f23);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705f26:{NFSU2_TR(0x705f26);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705f29:{NFSU2_TR(0x705f29);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705f2c:{NFSU2_TR(0x705f2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705f2f:{NFSU2_TR(0x705f2f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f30:{NFSU2_TR(0x705f30);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705f33:{NFSU2_TR(0x705f33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f34:{NFSU2_TR(0x705f34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f35:{NFSU2_TR(0x705f35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x705f3aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705408u);}goto L705408;}
}
B705f3a:L705f3a:{c.instructions+=6;NFSU2_TR(0x705f3a);
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
B705f3d:{NFSU2_TR(0x705f3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B705f3e:{NFSU2_TR(0x705f3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B705f3f:{NFSU2_TR(0x705f3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B705f40:{NFSU2_TR(0x705f40);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B705f41:{NFSU2_TR(0x705f41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B705f42:L705f42:{c.instructions+=29;NFSU2_TR(0x705f42);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f43:{NFSU2_TR(0x705f43);
__builtin_memmove((R+20),(R+16),4);
}
B705f45:{NFSU2_TR(0x705f45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f46:{NFSU2_TR(0x705f46);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f47:{NFSU2_TR(0x705f47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f48:{NFSU2_TR(0x705f48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f49:{NFSU2_TR(0x705f49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705f4c:{NFSU2_TR(0x705f4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705f4f:{NFSU2_TR(0x705f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B705f52:{NFSU2_TR(0x705f52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f53:{NFSU2_TR(0x705f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705f56:{NFSU2_TR(0x705f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B705f59:{NFSU2_TR(0x705f59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B705f5b:{NFSU2_TR(0x705f5b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f5c:{NFSU2_TR(0x705f5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f5d:{NFSU2_TR(0x705f5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f5e:{NFSU2_TR(0x705f5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705f61:{NFSU2_TR(0x705f61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705f64:{NFSU2_TR(0x705f64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f65:{NFSU2_TR(0x705f65);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f66:{NFSU2_TR(0x705f66);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B705f69:{NFSU2_TR(0x705f69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f6a:{NFSU2_TR(0x705f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705f6d:{NFSU2_TR(0x705f6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B705f70:{NFSU2_TR(0x705f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705f73:{NFSU2_TR(0x705f73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f74:{NFSU2_TR(0x705f74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f75:{NFSU2_TR(0x705f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705f78:{NFSU2_TR(0x705f78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x705f7dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705713u);}goto L705713;}
}
B705f7d:L705f7d:{c.instructions+=18;NFSU2_TR(0x705f7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,sar<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705f80:{NFSU2_TR(0x705f80);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705f83:{NFSU2_TR(0x705f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,sar<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705f86:{NFSU2_TR(0x705f86);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705f89:{NFSU2_TR(0x705f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,sar<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705f8c:{NFSU2_TR(0x705f8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705f8f:{NFSU2_TR(0x705f8f);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B705f91:{NFSU2_TR(0x705f91);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705f94:{NFSU2_TR(0x705f94);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B705f97:{NFSU2_TR(0x705f97);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705f9a:{NFSU2_TR(0x705f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B705f9d:{NFSU2_TR(0x705f9d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f9e:{NFSU2_TR(0x705f9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705f9f:{NFSU2_TR(0x705f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705fa2:{NFSU2_TR(0x705fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B705fa5:{NFSU2_TR(0x705fa5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705fa6:{NFSU2_TR(0x705fa6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705fa7:{NFSU2_TR(0x705fa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x705facull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705713u);}goto L705713;}
}
B705fac:L705fac:{c.instructions+=13;NFSU2_TR(0x705fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705fb2:{NFSU2_TR(0x705fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B705fb5:{NFSU2_TR(0x705fb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B705fb8:{NFSU2_TR(0x705fb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705fbb:{NFSU2_TR(0x705fbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705fbe:{NFSU2_TR(0x705fbe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705fc1:{NFSU2_TR(0x705fc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705fc4:{NFSU2_TR(0x705fc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705fc7:{NFSU2_TR(0x705fc7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705fc8:{NFSU2_TR(0x705fc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B705fcb:{NFSU2_TR(0x705fcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705fcc:{NFSU2_TR(0x705fcc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705fcd:{NFSU2_TR(0x705fcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x705fd2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x705713u);}goto L705713;}
}
B705fd2:L705fd2:{c.instructions+=6;NFSU2_TR(0x705fd2);
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
B705fd5:{NFSU2_TR(0x705fd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B705fd6:{NFSU2_TR(0x705fd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B705fd7:{NFSU2_TR(0x705fd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B705fd8:{NFSU2_TR(0x705fd8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B705fd9:{NFSU2_TR(0x705fd9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B705fda:L705fda:{c.instructions+=17;NFSU2_TR(0x705fda);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705fdb:{NFSU2_TR(0x705fdb);
__builtin_memmove((R+20),(R+16),4);
}
B705fdd:{NFSU2_TR(0x705fdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B705fe0:{NFSU2_TR(0x705fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B705fe3:{NFSU2_TR(0x705fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B705fe6:{NFSU2_TR(0x705fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B705fe9:{NFSU2_TR(0x705fe9);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B705feb:{NFSU2_TR(0x705feb);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B705fec:{NFSU2_TR(0x705fec);
u8 U[64];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x705fec);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x705fec);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B705fef:{NFSU2_TR(0x705fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B705ff3:{NFSU2_TR(0x705ff3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705ff4:{NFSU2_TR(0x705ff4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705ff5:{NFSU2_TR(0x705ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B705ff8:{NFSU2_TR(0x705ff8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B705ff9:{NFSU2_TR(0x705ff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B705ffc:{NFSU2_TR(0x705ffc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B705ffe:{NFSU2_TR(0x705ffe);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x706000u,706);
}
XIT:NFSU2_TR_EXIT(0x705,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
