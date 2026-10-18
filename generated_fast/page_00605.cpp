#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_436(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_5fc(u8* __restrict R,Cpu& c);
u32 body_5fd(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_602(u8* __restrict R,Cpu& c);
u32 body_606(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x605,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x605,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_605(u8* __restrict R,Cpu& c);
u32 page_605(Cpu& c){return body_605(c.regs.data(),c);}
__attribute__((noinline)) u32 body_605(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x605002:goto L605002;
case 0x605004:goto L605004;
case 0x605007:c.instructions+=2;goto B605007;
case 0x605009:c.instructions+=1;goto B605009;
case 0x60500b:goto L60500b;
case 0x605010:c.instructions+=4;goto B605010;
case 0x605016:c.instructions+=3;goto B605016;
case 0x60501b:c.instructions+=2;goto B60501b;
case 0x60501c:c.instructions+=1;goto B60501c;
case 0x605021:goto L605021;
case 0x605025:c.instructions+=4;goto B605025;
case 0x60502b:c.instructions+=3;goto B60502b;
case 0x60502d:c.instructions+=2;goto B60502d;
case 0x605030:c.instructions+=1;goto B605030;
case 0x605036:goto L605036;
case 0x60503c:c.instructions+=7;goto B60503c;
case 0x60503f:c.instructions+=6;goto B60503f;
case 0x605042:c.instructions+=5;goto B605042;
case 0x605044:c.instructions+=4;goto B605044;
case 0x605046:c.instructions+=3;goto B605046;
case 0x605048:c.instructions+=2;goto B605048;
case 0x60504c:c.instructions+=1;goto B60504c;
case 0x60504e:goto L60504e;
case 0x605052:c.instructions+=1;goto B605052;
case 0x605057:goto L605057;
case 0x60505b:c.instructions+=1;goto B60505b;
case 0x605060:goto L605060;
case 0x605064:c.instructions+=6;goto B605064;
case 0x605066:c.instructions+=5;goto B605066;
case 0x60506a:c.instructions+=4;goto B60506a;
case 0x60506b:c.instructions+=3;goto B60506b;
case 0x60506e:c.instructions+=2;goto B60506e;
case 0x60506f:c.instructions+=1;goto B60506f;
case 0x605074:goto L605074;
case 0x60507a:c.instructions+=4;goto B60507a;
case 0x60507d:c.instructions+=3;goto B60507d;
case 0x60507f:c.instructions+=2;goto B60507f;
case 0x605082:c.instructions+=1;goto B605082;
case 0x605084:goto L605084;
case 0x605088:goto L605088;
case 0x60508e:c.instructions+=6;goto B60508e;
case 0x605091:c.instructions+=5;goto B605091;
case 0x605094:c.instructions+=4;goto B605094;
case 0x605095:c.instructions+=3;goto B605095;
case 0x605097:c.instructions+=2;goto B605097;
case 0x605099:c.instructions+=1;goto B605099;
case 0x60509b:goto L60509b;
case 0x60509f:c.instructions+=2;goto B60509f;
case 0x6050a1:c.instructions+=1;goto B6050a1;
case 0x6050a3:goto L6050a3;
case 0x6050a7:c.instructions+=6;goto B6050a7;
case 0x6050ac:c.instructions+=5;goto B6050ac;
case 0x6050ad:c.instructions+=4;goto B6050ad;
case 0x6050b3:c.instructions+=3;goto B6050b3;
case 0x6050b9:c.instructions+=2;goto B6050b9;
case 0x6050bc:c.instructions+=1;goto B6050bc;
case 0x6050c1:goto L6050c1;
case 0x6050c5:goto L6050c5;
case 0x6050c9:c.instructions+=6;goto B6050c9;
case 0x6050ce:c.instructions+=5;goto B6050ce;
case 0x6050d4:c.instructions+=4;goto B6050d4;
case 0x6050d5:c.instructions+=3;goto B6050d5;
case 0x6050db:c.instructions+=2;goto B6050db;
case 0x6050de:c.instructions+=1;goto B6050de;
case 0x6050e3:goto L6050e3;
case 0x6050e7:c.instructions+=4;goto B6050e7;
case 0x6050ed:c.instructions+=3;goto B6050ed;
case 0x6050ef:c.instructions+=2;goto B6050ef;
case 0x6050f2:c.instructions+=1;goto B6050f2;
case 0x6050f8:goto L6050f8;
case 0x6050fb:c.instructions+=1;goto B6050fb;
case 0x605100:goto L605100;
case 0x605102:c.instructions+=4;goto B605102;
case 0x605108:c.instructions+=3;goto B605108;
case 0x60510a:c.instructions+=2;goto B60510a;
case 0x60510d:c.instructions+=1;goto B60510d;
case 0x60510f:goto L60510f;
case 0x605115:c.instructions+=4;goto B605115;
case 0x60511a:c.instructions+=3;goto B60511a;
case 0x60511b:c.instructions+=2;goto B60511b;
case 0x605121:c.instructions+=1;goto B605121;
case 0x605126:goto L605126;
case 0x605129:c.instructions+=2;goto B605129;
case 0x60512b:c.instructions+=1;goto B60512b;
case 0x605130:goto L605130;
case 0x605132:c.instructions+=2;goto B605132;
case 0x605134:c.instructions+=1;goto B605134;
case 0x60513a:goto L60513a;
case 0x60513c:c.instructions+=1;goto B60513c;
case 0x605141:goto L605141;
case 0x605143:c.instructions+=1;goto B605143;
case 0x605149:goto L605149;
case 0x60514c:c.instructions+=9;goto B60514c;
case 0x605152:c.instructions+=8;goto B605152;
case 0x605154:c.instructions+=7;goto B605154;
case 0x605158:c.instructions+=6;goto B605158;
case 0x60515c:c.instructions+=5;goto B60515c;
case 0x605162:c.instructions+=4;goto B605162;
case 0x605168:c.instructions+=3;goto B605168;
case 0x60516a:c.instructions+=2;goto B60516a;
case 0x60516d:c.instructions+=1;goto B60516d;
case 0x60516f:goto L60516f;
case 0x605171:c.instructions+=1;goto B605171;
case 0x605176:goto L605176;
case 0x605178:c.instructions+=1;goto B605178;
case 0x60517a:goto L60517a;
case 0x60517e:c.instructions+=4;goto B60517e;
case 0x605184:c.instructions+=3;goto B605184;
case 0x605186:c.instructions+=2;goto B605186;
case 0x605189:c.instructions+=1;goto B605189;
case 0x60518b:goto L60518b;
case 0x605190:c.instructions+=4;goto B605190;
case 0x605196:c.instructions+=3;goto B605196;
case 0x60519b:c.instructions+=2;goto B60519b;
case 0x60519c:c.instructions+=1;goto B60519c;
case 0x6051a1:goto L6051a1;
case 0x6051a5:c.instructions+=5;goto B6051a5;
case 0x6051a6:c.instructions+=4;goto B6051a6;
case 0x6051aa:c.instructions+=3;goto B6051aa;
case 0x6051ab:c.instructions+=2;goto B6051ab;
case 0x6051ad:c.instructions+=1;goto B6051ad;
case 0x6051b2:goto L6051b2;
case 0x6051b4:goto L6051b4;
case 0x6051b6:c.instructions+=1;goto B6051b6;
case 0x6051bb:goto L6051bb;
case 0x6051bd:c.instructions+=1;goto B6051bd;
case 0x6051bf:goto L6051bf;
case 0x6051c4:c.instructions+=4;goto B6051c4;
case 0x6051ca:c.instructions+=3;goto B6051ca;
case 0x6051cf:c.instructions+=2;goto B6051cf;
case 0x6051d0:c.instructions+=1;goto B6051d0;
case 0x6051d5:goto L6051d5;
case 0x6051db:c.instructions+=2;goto B6051db;
case 0x6051dd:c.instructions+=1;goto B6051dd;
case 0x6051df:goto L6051df;
case 0x6051e5:c.instructions+=2;goto B6051e5;
case 0x6051e8:c.instructions+=1;goto B6051e8;
case 0x6051ea:goto L6051ea;
case 0x6051ef:goto L6051ef;
case 0x6051f1:c.instructions+=1;goto B6051f1;
case 0x6051f3:goto L6051f3;
case 0x6051f6:c.instructions+=4;goto B6051f6;
case 0x6051fc:c.instructions+=3;goto B6051fc;
case 0x6051fe:c.instructions+=2;goto B6051fe;
case 0x605201:c.instructions+=1;goto B605201;
case 0x605203:goto L605203;
case 0x605204:c.instructions+=2;goto B605204;
case 0x605206:c.instructions+=1;goto B605206;
case 0x60520b:goto L60520b;
case 0x60520d:goto L60520d;
case 0x60520f:c.instructions+=1;goto B60520f;
case 0x605214:goto L605214;
case 0x605216:c.instructions+=1;goto B605216;
case 0x605218:goto L605218;
case 0x60521b:c.instructions+=3;goto B60521b;
case 0x60521d:c.instructions+=2;goto B60521d;
case 0x60521f:c.instructions+=1;goto B60521f;
case 0x605222:goto L605222;
case 0x605223:c.instructions+=3;goto B605223;
case 0x605225:c.instructions+=2;goto B605225;
case 0x605227:c.instructions+=1;goto B605227;
case 0x60522a:goto L60522a;
case 0x605230:c.instructions+=2;goto B605230;
case 0x605231:c.instructions+=1;goto B605231;
case 0x605236:goto L605236;
case 0x60523c:c.instructions+=2;goto B60523c;
case 0x60523d:c.instructions+=1;goto B60523d;
case 0x605242:goto L605242;
case 0x605243:c.instructions+=5;goto B605243;
case 0x605244:c.instructions+=4;goto B605244;
case 0x605245:c.instructions+=3;goto B605245;
case 0x605247:c.instructions+=2;goto B605247;
case 0x605248:c.instructions+=1;goto B605248;
case 0x605250:goto L605250;
case 0x605256:c.instructions+=8;goto B605256;
case 0x605258:c.instructions+=7;goto B605258;
case 0x60525d:c.instructions+=6;goto B60525d;
case 0x60525e:c.instructions+=5;goto B60525e;
case 0x605265:c.instructions+=4;goto B605265;
case 0x605266:c.instructions+=3;goto B605266;
case 0x605267:c.instructions+=2;goto B605267;
case 0x605269:c.instructions+=1;goto B605269;
case 0x60526e:goto L60526e;
case 0x605272:c.instructions+=3;goto B605272;
case 0x605273:c.instructions+=2;goto B605273;
case 0x605275:c.instructions+=1;goto B605275;
case 0x60527a:goto L60527a;
case 0x60527d:c.instructions+=4;goto B60527d;
case 0x605284:c.instructions+=3;goto B605284;
case 0x605287:c.instructions+=2;goto B605287;
case 0x60528a:c.instructions+=1;goto B60528a;
case 0x60528f:goto L60528f;
case 0x605294:c.instructions+=2;goto B605294;
case 0x605297:c.instructions+=1;goto B605297;
case 0x60529c:goto L60529c;
case 0x60529f:c.instructions+=4;goto B60529f;
case 0x6052a3:c.instructions+=3;goto B6052a3;
case 0x6052a5:c.instructions+=2;goto B6052a5;
case 0x6052ad:c.instructions+=1;goto B6052ad;
case 0x6052af:goto L6052af;
case 0x6052b0:c.instructions+=2;goto B6052b0;
case 0x6052b2:c.instructions+=1;goto B6052b2;
case 0x6052b7:goto L6052b7;
case 0x6052b9:goto L6052b9;
case 0x6052bb:goto L6052bb;
case 0x6052c1:c.instructions+=4;goto B6052c1;
case 0x6052c6:c.instructions+=3;goto B6052c6;
case 0x6052c8:c.instructions+=2;goto B6052c8;
case 0x6052d0:c.instructions+=1;goto B6052d0;
case 0x6052d2:goto L6052d2;
case 0x6052d7:c.instructions+=2;goto B6052d7;
case 0x6052d9:c.instructions+=1;goto B6052d9;
case 0x6052db:goto L6052db;
case 0x6052e0:c.instructions+=2;goto B6052e0;
case 0x6052e2:c.instructions+=1;goto B6052e2;
case 0x6052e4:goto L6052e4;
case 0x6052e9:c.instructions+=2;goto B6052e9;
case 0x6052eb:c.instructions+=1;goto B6052eb;
case 0x6052ed:goto L6052ed;
case 0x6052f2:c.instructions+=2;goto B6052f2;
case 0x6052f4:c.instructions+=1;goto B6052f4;
case 0x6052f6:goto L6052f6;
case 0x6052f8:c.instructions+=1;goto B6052f8;
case 0x6052fd:goto L6052fd;
case 0x605300:goto L605300;
case 0x605304:c.instructions+=5;goto B605304;
case 0x605305:c.instructions+=4;goto B605305;
case 0x60530c:c.instructions+=3;goto B60530c;
case 0x60530d:c.instructions+=2;goto B60530d;
case 0x605310:c.instructions+=1;goto B605310;
case 0x605320:goto L605320;
case 0x605321:c.instructions+=9;goto B605321;
case 0x605323:c.instructions+=8;goto B605323;
case 0x605324:c.instructions+=7;goto B605324;
case 0x605327:c.instructions+=6;goto B605327;
case 0x60532a:c.instructions+=5;goto B60532a;
case 0x60532d:c.instructions+=4;goto B60532d;
case 0x605330:c.instructions+=3;goto B605330;
case 0x605333:c.instructions+=2;goto B605333;
case 0x605335:c.instructions+=1;goto B605335;
case 0x605337:goto L605337;
case 0x605338:goto L605338;
case 0x60533a:c.instructions+=2;goto B60533a;
case 0x60533c:c.instructions+=1;goto B60533c;
case 0x60533e:goto L60533e;
case 0x605341:c.instructions+=1;goto B605341;
case 0x605343:goto L605343;
case 0x605345:goto L605345;
case 0x605347:c.instructions+=2;goto B605347;
case 0x605349:c.instructions+=1;goto B605349;
case 0x60534c:goto L60534c;
case 0x60534f:c.instructions+=1;goto B60534f;
case 0x605351:goto L605351;
case 0x605354:c.instructions+=3;goto B605354;
case 0x605357:c.instructions+=2;goto B605357;
case 0x605359:c.instructions+=1;goto B605359;
case 0x60535c:goto L60535c;
case 0x60535f:c.instructions+=2;goto B60535f;
case 0x605362:c.instructions+=1;goto B605362;
case 0x605364:goto L605364;
case 0x605367:c.instructions+=1;goto B605367;
case 0x60536c:goto L60536c;
case 0x60536f:c.instructions+=4;goto B60536f;
case 0x605371:c.instructions+=3;goto B605371;
case 0x605374:c.instructions+=2;goto B605374;
case 0x605377:c.instructions+=1;goto B605377;
case 0x605379:goto L605379;
case 0x60537b:c.instructions+=1;goto B60537b;
case 0x60537d:goto L60537d;
case 0x60537e:goto L60537e;
case 0x60537f:c.instructions+=2;goto B60537f;
case 0x605380:c.instructions+=1;goto B605380;
case 0x605390:goto L605390;
case 0x605391:c.instructions+=3;goto B605391;
case 0x605393:c.instructions+=2;goto B605393;
case 0x605399:c.instructions+=1;goto B605399;
case 0x60539f:goto L60539f;
case 0x6053a2:c.instructions+=2;goto B6053a2;
case 0x6053a4:c.instructions+=1;goto B6053a4;
case 0x6053a6:goto L6053a6;
case 0x6053a9:c.instructions+=3;goto B6053a9;
case 0x6053ac:c.instructions+=2;goto B6053ac;
case 0x6053ae:c.instructions+=1;goto B6053ae;
case 0x6053b1:goto L6053b1;
case 0x6053b4:c.instructions+=3;goto B6053b4;
case 0x6053b6:c.instructions+=2;goto B6053b6;
case 0x6053bd:c.instructions+=1;goto B6053bd;
case 0x6053bf:goto L6053bf;
case 0x6053c0:c.instructions+=2;goto B6053c0;
case 0x6053c3:c.instructions+=1;goto B6053c3;
case 0x6053c8:goto L6053c8;
case 0x6053cb:c.instructions+=5;goto B6053cb;
case 0x6053cd:c.instructions+=4;goto B6053cd;
case 0x6053d0:c.instructions+=3;goto B6053d0;
case 0x6053d3:c.instructions+=2;goto B6053d3;
case 0x6053d5:c.instructions+=1;goto B6053d5;
case 0x6053d6:goto L6053d6;
case 0x6053d9:c.instructions+=1;goto B6053d9;
case 0x6053de:goto L6053de;
case 0x6053df:c.instructions+=2;goto B6053df;
case 0x6053e1:c.instructions+=1;goto B6053e1;
case 0x6053e6:goto L6053e6;
case 0x6053e8:c.instructions+=1;goto B6053e8;
case 0x6053ea:goto L6053ea;
case 0x6053ef:goto L6053ef;
case 0x6053f1:c.instructions+=3;goto B6053f1;
case 0x6053f4:c.instructions+=2;goto B6053f4;
case 0x6053f6:c.instructions+=1;goto B6053f6;
case 0x6053f9:goto L6053f9;
case 0x6053fa:c.instructions+=1;goto B6053fa;
case 0x605400:goto L605400;
case 0x605406:c.instructions+=1;goto B605406;
case 0x605410:goto L605410;
case 0x605412:c.instructions+=12;goto B605412;
case 0x605414:c.instructions+=11;goto B605414;
case 0x605416:c.instructions+=10;goto B605416;
case 0x605419:c.instructions+=9;goto B605419;
case 0x60541c:c.instructions+=8;goto B60541c;
case 0x60541f:c.instructions+=7;goto B60541f;
case 0x605422:c.instructions+=6;goto B605422;
case 0x605424:c.instructions+=5;goto B605424;
case 0x605427:c.instructions+=4;goto B605427;
case 0x60542a:c.instructions+=3;goto B60542a;
case 0x60542c:c.instructions+=2;goto B60542c;
case 0x60542f:c.instructions+=1;goto B60542f;
case 0x605430:goto L605430;
case 0x605432:c.instructions+=11;goto B605432;
case 0x605437:c.instructions+=10;goto B605437;
case 0x60543d:c.instructions+=9;goto B60543d;
case 0x60543e:c.instructions+=8;goto B60543e;
case 0x605445:c.instructions+=7;goto B605445;
case 0x605446:c.instructions+=6;goto B605446;
case 0x605447:c.instructions+=5;goto B605447;
case 0x605449:c.instructions+=4;goto B605449;
case 0x60544a:c.instructions+=3;goto B60544a;
case 0x60544e:c.instructions+=2;goto B60544e;
case 0x605456:c.instructions+=1;goto B605456;
case 0x60545b:goto L60545b;
case 0x60545e:c.instructions+=2;goto B60545e;
case 0x60545f:c.instructions+=1;goto B60545f;
case 0x605464:goto L605464;
case 0x605467:c.instructions+=5;goto B605467;
case 0x60546a:c.instructions+=4;goto B60546a;
case 0x60546d:c.instructions+=3;goto B60546d;
case 0x60546f:c.instructions+=2;goto B60546f;
case 0x605474:c.instructions+=1;goto B605474;
case 0x605476:goto L605476;
case 0x605478:c.instructions+=5;goto B605478;
case 0x60547b:c.instructions+=4;goto B60547b;
case 0x60547d:c.instructions+=3;goto B60547d;
case 0x60547e:c.instructions+=2;goto B60547e;
case 0x605481:c.instructions+=1;goto B605481;
case 0x605486:goto L605486;
case 0x605488:c.instructions+=3;goto B605488;
case 0x60548b:c.instructions+=2;goto B60548b;
case 0x60548d:c.instructions+=1;goto B60548d;
case 0x60548f:goto L60548f;
case 0x605491:c.instructions+=2;goto B605491;
case 0x605499:c.instructions+=1;goto B605499;
case 0x60549e:goto L60549e;
case 0x6054a2:c.instructions+=5;goto B6054a2;
case 0x6054a3:c.instructions+=4;goto B6054a3;
case 0x6054a4:c.instructions+=3;goto B6054a4;
case 0x6054ab:c.instructions+=2;goto B6054ab;
case 0x6054ae:c.instructions+=1;goto B6054ae;
case 0x6054b0:goto L6054b0;
case 0x6054b1:c.instructions+=16;goto B6054b1;
case 0x6054b3:c.instructions+=15;goto B6054b3;
case 0x6054b6:c.instructions+=14;goto B6054b6;
case 0x6054b8:c.instructions+=13;goto B6054b8;
case 0x6054bd:c.instructions+=12;goto B6054bd;
case 0x6054c3:c.instructions+=11;goto B6054c3;
case 0x6054c4:c.instructions+=10;goto B6054c4;
case 0x6054cb:c.instructions+=9;goto B6054cb;
case 0x6054d1:c.instructions+=8;goto B6054d1;
case 0x6054d2:c.instructions+=7;goto B6054d2;
case 0x6054d4:c.instructions+=6;goto B6054d4;
case 0x6054d7:c.instructions+=5;goto B6054d7;
case 0x6054d8:c.instructions+=4;goto B6054d8;
case 0x6054db:c.instructions+=3;goto B6054db;
case 0x6054dc:c.instructions+=2;goto B6054dc;
case 0x6054e0:c.instructions+=1;goto B6054e0;
case 0x6054e2:goto L6054e2;
case 0x6054e7:c.instructions+=4;goto B6054e7;
case 0x6054ea:c.instructions+=3;goto B6054ea;
case 0x6054eb:c.instructions+=2;goto B6054eb;
case 0x6054ec:c.instructions+=1;goto B6054ec;
case 0x6054f1:goto L6054f1;
case 0x6054f4:c.instructions+=2;goto B6054f4;
case 0x6054f6:c.instructions+=1;goto B6054f6;
case 0x6054f8:goto L6054f8;
case 0x6054fa:c.instructions+=1;goto B6054fa;
case 0x6054ff:goto L6054ff;
case 0x605502:c.instructions+=1;goto B605502;
case 0x605508:goto L605508;
case 0x60550b:c.instructions+=3;goto B60550b;
case 0x60550e:c.instructions+=2;goto B60550e;
case 0x605510:c.instructions+=1;goto B605510;
case 0x605516:goto L605516;
case 0x605518:c.instructions+=14;goto B605518;
case 0x60551b:c.instructions+=13;goto B60551b;
case 0x60551e:c.instructions+=12;goto B60551e;
case 0x605522:c.instructions+=11;goto B605522;
case 0x605524:c.instructions+=10;goto B605524;
case 0x605526:c.instructions+=9;goto B605526;
case 0x60552a:c.instructions+=8;goto B60552a;
case 0x60552e:c.instructions+=7;goto B60552e;
case 0x605533:c.instructions+=6;goto B605533;
case 0x605537:c.instructions+=5;goto B605537;
case 0x60553b:c.instructions+=4;goto B60553b;
case 0x605541:c.instructions+=3;goto B605541;
case 0x605543:c.instructions+=2;goto B605543;
case 0x605546:c.instructions+=1;goto B605546;
case 0x605548:goto L605548;
case 0x60554c:c.instructions+=1;goto B60554c;
case 0x605551:goto L605551;
case 0x605555:c.instructions+=8;goto B605555;
case 0x605556:c.instructions+=7;goto B605556;
case 0x605558:c.instructions+=6;goto B605558;
case 0x60555a:c.instructions+=5;goto B60555a;
case 0x60555e:c.instructions+=4;goto B60555e;
case 0x60555f:c.instructions+=3;goto B60555f;
case 0x605566:c.instructions+=2;goto B605566;
case 0x605571:c.instructions+=1;goto B605571;
case 0x605576:goto L605576;
case 0x60557a:c.instructions+=3;goto B60557a;
case 0x60557e:c.instructions+=2;goto B60557e;
case 0x605589:c.instructions+=1;goto B605589;
case 0x60558e:goto L60558e;
case 0x605592:c.instructions+=2;goto B605592;
case 0x605594:c.instructions+=1;goto B605594;
case 0x605596:goto L605596;
case 0x605598:c.instructions+=8;goto B605598;
case 0x60559f:c.instructions+=7;goto B60559f;
case 0x6055a6:c.instructions+=6;goto B6055a6;
case 0x6055a7:c.instructions+=5;goto B6055a7;
case 0x6055a8:c.instructions+=4;goto B6055a8;
case 0x6055a9:c.instructions+=3;goto B6055a9;
case 0x6055ab:c.instructions+=2;goto B6055ab;
case 0x6055ac:c.instructions+=1;goto B6055ac;
case 0x6055af:goto L6055af;
case 0x6055b3:c.instructions+=2;goto B6055b3;
case 0x6055b4:c.instructions+=1;goto B6055b4;
case 0x6055b9:goto L6055b9;
case 0x6055bd:c.instructions+=11;goto B6055bd;
case 0x6055bf:c.instructions+=10;goto B6055bf;
case 0x6055c3:c.instructions+=9;goto B6055c3;
case 0x6055c7:c.instructions+=8;goto B6055c7;
case 0x6055cb:c.instructions+=7;goto B6055cb;
case 0x6055ce:c.instructions+=6;goto B6055ce;
case 0x6055d1:c.instructions+=5;goto B6055d1;
case 0x6055d3:c.instructions+=4;goto B6055d3;
case 0x6055d7:c.instructions+=3;goto B6055d7;
case 0x6055db:c.instructions+=2;goto B6055db;
case 0x6055e3:c.instructions+=1;goto B6055e3;
case 0x6055e5:goto L6055e5;
case 0x6055e8:goto L6055e8;
case 0x6055e9:c.instructions+=1;goto B6055e9;
case 0x6055ee:goto L6055ee;
case 0x6055f0:c.instructions+=6;goto B6055f0;
case 0x6055f4:c.instructions+=5;goto B6055f4;
case 0x6055f5:c.instructions+=4;goto B6055f5;
case 0x6055f8:c.instructions+=3;goto B6055f8;
case 0x6055f9:c.instructions+=2;goto B6055f9;
case 0x605600:c.instructions+=1;goto B605600;
case 0x605605:goto L605605;
case 0x605608:c.instructions+=3;goto B605608;
case 0x605609:c.instructions+=2;goto B605609;
case 0x60560e:c.instructions+=1;goto B60560e;
case 0x605613:goto L605613;
case 0x605618:goto L605618;
case 0x60561a:c.instructions+=1;goto B60561a;
case 0x60561c:goto L60561c;
case 0x60561f:c.instructions+=1;goto B60561f;
case 0x605621:goto L605621;
case 0x605623:goto L605623;
case 0x605625:c.instructions+=9;goto B605625;
case 0x605627:c.instructions+=8;goto B605627;
case 0x60562a:c.instructions+=7;goto B60562a;
case 0x60562d:c.instructions+=6;goto B60562d;
case 0x60562f:c.instructions+=5;goto B60562f;
case 0x605633:c.instructions+=4;goto B605633;
case 0x605635:c.instructions+=3;goto B605635;
case 0x605638:c.instructions+=2;goto B605638;
case 0x60563a:c.instructions+=1;goto B60563a;
case 0x60563c:goto L60563c;
case 0x605640:c.instructions+=1;goto B605640;
case 0x605643:goto L605643;
case 0x605646:c.instructions+=7;goto B605646;
case 0x605648:c.instructions+=6;goto B605648;
case 0x60564b:c.instructions+=5;goto B60564b;
case 0x60564e:c.instructions+=4;goto B60564e;
case 0x605650:c.instructions+=3;goto B605650;
case 0x605653:c.instructions+=2;goto B605653;
case 0x605656:c.instructions+=1;goto B605656;
case 0x60565c:goto L60565c;
case 0x605663:c.instructions+=8;goto B605663;
case 0x605664:c.instructions+=7;goto B605664;
case 0x605665:c.instructions+=6;goto B605665;
case 0x60566a:c.instructions+=5;goto B60566a;
case 0x605671:c.instructions+=4;goto B605671;
case 0x605672:c.instructions+=3;goto B605672;
case 0x605674:c.instructions+=2;goto B605674;
case 0x605675:c.instructions+=1;goto B605675;
case 0x605680:goto L605680;
case 0x605682:c.instructions+=10;goto B605682;
case 0x605687:c.instructions+=9;goto B605687;
case 0x60568d:c.instructions+=8;goto B60568d;
case 0x60568e:c.instructions+=7;goto B60568e;
case 0x605695:c.instructions+=6;goto B605695;
case 0x605696:c.instructions+=5;goto B605696;
case 0x60569b:c.instructions+=4;goto B60569b;
case 0x60569c:c.instructions+=3;goto B60569c;
case 0x60569e:c.instructions+=2;goto B60569e;
case 0x6056a0:c.instructions+=1;goto B6056a0;
case 0x6056a2:goto L6056a2;
case 0x6056a3:c.instructions+=3;goto B6056a3;
case 0x6056a4:c.instructions+=2;goto B6056a4;
case 0x6056a9:c.instructions+=1;goto B6056a9;
case 0x6056ae:goto L6056ae;
case 0x6056b1:c.instructions+=4;goto B6056b1;
case 0x6056b5:c.instructions+=3;goto B6056b5;
case 0x6056b7:c.instructions+=2;goto B6056b7;
case 0x6056bb:c.instructions+=1;goto B6056bb;
case 0x6056bd:goto L6056bd;
case 0x6056c2:c.instructions+=7;goto B6056c2;
case 0x6056c7:c.instructions+=6;goto B6056c7;
case 0x6056c9:c.instructions+=5;goto B6056c9;
case 0x6056cc:c.instructions+=4;goto B6056cc;
case 0x6056ce:c.instructions+=3;goto B6056ce;
case 0x6056cf:c.instructions+=2;goto B6056cf;
case 0x6056d5:c.instructions+=1;goto B6056d5;
case 0x6056da:goto L6056da;
case 0x6056dc:goto L6056dc;
case 0x6056de:goto L6056de;
case 0x6056e4:c.instructions+=2;goto B6056e4;
case 0x6056ec:c.instructions+=1;goto B6056ec;
case 0x6056f1:goto L6056f1;
case 0x6056f3:c.instructions+=4;goto B6056f3;
case 0x6056f9:c.instructions+=3;goto B6056f9;
case 0x6056fa:c.instructions+=2;goto B6056fa;
case 0x6056fd:c.instructions+=1;goto B6056fd;
case 0x605702:goto L605702;
case 0x605703:c.instructions+=3;goto B605703;
case 0x605706:c.instructions+=2;goto B605706;
case 0x605707:c.instructions+=1;goto B605707;
case 0x60570c:goto L60570c;
case 0x60570f:c.instructions+=4;goto B60570f;
case 0x605712:c.instructions+=3;goto B605712;
case 0x605715:c.instructions+=2;goto B605715;
case 0x60571b:c.instructions+=1;goto B60571b;
case 0x60571d:goto L60571d;
case 0x60571e:c.instructions+=1;goto B60571e;
case 0x60571f:goto L60571f;
case 0x605723:c.instructions+=5;goto B605723;
case 0x60572d:c.instructions+=4;goto B60572d;
case 0x60572e:c.instructions+=3;goto B60572e;
case 0x605735:c.instructions+=2;goto B605735;
case 0x605738:c.instructions+=1;goto B605738;
case 0x605740:goto L605740;
case 0x605745:c.instructions+=2;goto B605745;
case 0x605747:c.instructions+=1;goto B605747;
case 0x605749:goto L605749;
case 0x60574c:c.instructions+=7;goto B60574c;
case 0x60574d:c.instructions+=6;goto B60574d;
case 0x605750:c.instructions+=5;goto B605750;
case 0x605755:c.instructions+=4;goto B605755;
case 0x605756:c.instructions+=3;goto B605756;
case 0x605758:c.instructions+=2;goto B605758;
case 0x605759:c.instructions+=1;goto B605759;
case 0x60575e:goto L60575e;
case 0x60575f:c.instructions+=1;goto B60575f;
case 0x605764:goto L605764;
case 0x605767:c.instructions+=2;goto B605767;
case 0x605771:c.instructions+=1;goto B605771;
case 0x605772:goto L605772;
case 0x605780:goto L605780;
case 0x605781:c.instructions+=9;goto B605781;
case 0x605783:c.instructions+=8;goto B605783;
case 0x605786:c.instructions+=7;goto B605786;
case 0x605789:c.instructions+=6;goto B605789;
case 0x60578e:c.instructions+=5;goto B60578e;
case 0x605790:c.instructions+=4;goto B605790;
case 0x605791:c.instructions+=3;goto B605791;
case 0x605792:c.instructions+=2;goto B605792;
case 0x605793:c.instructions+=1;goto B605793;
case 0x605799:goto L605799;
case 0x60579e:c.instructions+=2;goto B60579e;
case 0x6057a0:c.instructions+=1;goto B6057a0;
case 0x6057a6:goto L6057a6;
case 0x6057ab:c.instructions+=2;goto B6057ab;
case 0x6057ad:c.instructions+=1;goto B6057ad;
case 0x6057af:goto L6057af;
case 0x6057b2:c.instructions+=1;goto B6057b2;
case 0x6057b8:goto L6057b8;
case 0x6057bd:c.instructions+=2;goto B6057bd;
case 0x6057bf:c.instructions+=1;goto B6057bf;
case 0x6057c5:goto L6057c5;
case 0x6057ca:c.instructions+=2;goto B6057ca;
case 0x6057ce:c.instructions+=1;goto B6057ce;
case 0x6057d4:goto L6057d4;
case 0x6057d7:c.instructions+=2;goto B6057d7;
case 0x6057d9:c.instructions+=1;goto B6057d9;
case 0x6057df:goto L6057df;
case 0x6057e2:c.instructions+=3;goto B6057e2;
case 0x6057e6:c.instructions+=2;goto B6057e6;
case 0x6057eb:c.instructions+=1;goto B6057eb;
case 0x6057f0:goto L6057f0;
case 0x6057f6:c.instructions+=3;goto B6057f6;
case 0x6057f9:c.instructions+=2;goto B6057f9;
case 0x6057fe:c.instructions+=1;goto B6057fe;
case 0x605800:goto L605800;
case 0x605802:c.instructions+=2;goto B605802;
case 0x605807:c.instructions+=1;goto B605807;
case 0x60580c:goto L60580c;
case 0x60580e:c.instructions+=2;goto B60580e;
case 0x605810:c.instructions+=1;goto B605810;
case 0x605812:goto L605812;
case 0x605814:c.instructions+=2;goto B605814;
case 0x605819:c.instructions+=1;goto B605819;
case 0x605820:goto L605820;
case 0x605823:c.instructions+=2;goto B605823;
case 0x605825:c.instructions+=1;goto B605825;
case 0x605827:goto L605827;
case 0x605829:c.instructions+=1;goto B605829;
case 0x60582e:goto L60582e;
case 0x605830:c.instructions+=1;goto B605830;
case 0x605832:goto L605832;
case 0x605835:c.instructions+=3;goto B605835;
case 0x605836:c.instructions+=2;goto B605836;
case 0x60583c:c.instructions+=1;goto B60583c;
case 0x60583e:goto L60583e;
case 0x605840:goto L605840;
case 0x605844:c.instructions+=5;goto B605844;
case 0x605846:c.instructions+=4;goto B605846;
case 0x605847:c.instructions+=3;goto B605847;
case 0x605848:c.instructions+=2;goto B605848;
case 0x605849:c.instructions+=1;goto B605849;
case 0x60584e:goto L60584e;
case 0x605851:goto L605851;
case 0x605852:c.instructions+=2;goto B605852;
case 0x605857:c.instructions+=1;goto B605857;
case 0x60585c:goto L60585c;
case 0x60585e:c.instructions+=2;goto B60585e;
case 0x605860:c.instructions+=1;goto B605860;
case 0x605862:goto L605862;
case 0x605866:goto L605866;
case 0x60586b:c.instructions+=2;goto B60586b;
case 0x60586d:c.instructions+=1;goto B60586d;
case 0x605871:goto L605871;
case 0x605874:c.instructions+=1;goto B605874;
case 0x605876:goto L605876;
case 0x60587b:c.instructions+=1;goto B60587b;
case 0x605880:goto L605880;
case 0x605886:c.instructions+=2;goto B605886;
case 0x605888:c.instructions+=1;goto B605888;
case 0x60588a:goto L60588a;
case 0x60588b:c.instructions+=3;goto B60588b;
case 0x60588c:c.instructions+=2;goto B60588c;
case 0x60588d:c.instructions+=1;goto B60588d;
case 0x605892:goto L605892;
case 0x605895:c.instructions+=3;goto B605895;
case 0x605898:c.instructions+=2;goto B605898;
case 0x60589e:c.instructions+=1;goto B60589e;
case 0x6058a0:goto L6058a0;
case 0x6058a4:c.instructions+=2;goto B6058a4;
case 0x6058a7:c.instructions+=1;goto B6058a7;
case 0x6058ad:goto L6058ad;
case 0x6058b2:goto L6058b2;
case 0x6058b8:c.instructions+=2;goto B6058b8;
case 0x6058ba:c.instructions+=1;goto B6058ba;
case 0x6058c0:goto L6058c0;
case 0x6058c3:c.instructions+=17;goto B6058c3;
case 0x6058c5:c.instructions+=16;goto B6058c5;
case 0x6058c8:c.instructions+=15;goto B6058c8;
case 0x6058cb:c.instructions+=14;goto B6058cb;
case 0x6058cd:c.instructions+=13;goto B6058cd;
case 0x6058cf:c.instructions+=12;goto B6058cf;
case 0x6058d1:c.instructions+=11;goto B6058d1;
case 0x6058d3:c.instructions+=10;goto B6058d3;
case 0x6058d5:c.instructions+=9;goto B6058d5;
case 0x6058d7:c.instructions+=8;goto B6058d7;
case 0x6058d9:c.instructions+=7;goto B6058d9;
case 0x6058df:c.instructions+=6;goto B6058df;
case 0x6058e5:c.instructions+=5;goto B6058e5;
case 0x6058e9:c.instructions+=4;goto B6058e9;
case 0x6058ed:c.instructions+=3;goto B6058ed;
case 0x6058ef:c.instructions+=2;goto B6058ef;
case 0x6058f2:c.instructions+=1;goto B6058f2;
case 0x6058f4:goto L6058f4;
case 0x6058fb:c.instructions+=2;goto B6058fb;
case 0x6058fd:c.instructions+=1;goto B6058fd;
case 0x6058ff:goto L6058ff;
case 0x605906:c.instructions+=3;goto B605906;
case 0x605908:c.instructions+=2;goto B605908;
case 0x60590b:c.instructions+=1;goto B60590b;
case 0x60590d:goto L60590d;
case 0x605914:c.instructions+=2;goto B605914;
case 0x60591b:c.instructions+=1;goto B60591b;
case 0x60591d:goto L60591d;
case 0x60591f:goto L60591f;
case 0x605925:c.instructions+=2;goto B605925;
case 0x605927:c.instructions+=1;goto B605927;
case 0x60592d:goto L60592d;
case 0x605930:c.instructions+=14;goto B605930;
case 0x605932:c.instructions+=13;goto B605932;
case 0x605935:c.instructions+=12;goto B605935;
case 0x605938:c.instructions+=11;goto B605938;
case 0x60593a:c.instructions+=10;goto B60593a;
case 0x60593c:c.instructions+=9;goto B60593c;
case 0x60593e:c.instructions+=8;goto B60593e;
case 0x605940:c.instructions+=7;goto B605940;
case 0x605942:c.instructions+=6;goto B605942;
case 0x605944:c.instructions+=5;goto B605944;
case 0x605946:c.instructions+=4;goto B605946;
case 0x60594a:c.instructions+=3;goto B60594a;
case 0x60594c:c.instructions+=2;goto B60594c;
case 0x60594f:c.instructions+=1;goto B60594f;
case 0x605951:goto L605951;
case 0x605958:c.instructions+=2;goto B605958;
case 0x60595a:c.instructions+=1;goto B60595a;
case 0x60595c:goto L60595c;
case 0x605963:c.instructions+=3;goto B605963;
case 0x605965:c.instructions+=2;goto B605965;
case 0x605968:c.instructions+=1;goto B605968;
case 0x60596a:goto L60596a;
case 0x605971:c.instructions+=2;goto B605971;
case 0x605978:c.instructions+=1;goto B605978;
case 0x60597a:goto L60597a;
case 0x60597c:goto L60597c;
case 0x605982:c.instructions+=2;goto B605982;
case 0x605984:c.instructions+=1;goto B605984;
case 0x60598a:goto L60598a;
case 0x60598d:c.instructions+=14;goto B60598d;
case 0x60598f:c.instructions+=13;goto B60598f;
case 0x605992:c.instructions+=12;goto B605992;
case 0x605995:c.instructions+=11;goto B605995;
case 0x605997:c.instructions+=10;goto B605997;
case 0x605999:c.instructions+=9;goto B605999;
case 0x60599b:c.instructions+=8;goto B60599b;
case 0x60599d:c.instructions+=7;goto B60599d;
case 0x60599f:c.instructions+=6;goto B60599f;
case 0x6059a1:c.instructions+=5;goto B6059a1;
case 0x6059a3:c.instructions+=4;goto B6059a3;
case 0x6059a7:c.instructions+=3;goto B6059a7;
case 0x6059a9:c.instructions+=2;goto B6059a9;
case 0x6059ac:c.instructions+=1;goto B6059ac;
case 0x6059ae:goto L6059ae;
case 0x6059b5:c.instructions+=2;goto B6059b5;
case 0x6059b7:c.instructions+=1;goto B6059b7;
case 0x6059b9:goto L6059b9;
case 0x6059c0:c.instructions+=3;goto B6059c0;
case 0x6059c2:c.instructions+=2;goto B6059c2;
case 0x6059c5:c.instructions+=1;goto B6059c5;
case 0x6059c7:goto L6059c7;
case 0x6059ce:c.instructions+=2;goto B6059ce;
case 0x6059d5:c.instructions+=1;goto B6059d5;
case 0x6059d7:goto L6059d7;
case 0x6059d9:goto L6059d9;
case 0x6059df:c.instructions+=2;goto B6059df;
case 0x6059e1:c.instructions+=1;goto B6059e1;
case 0x6059e7:goto L6059e7;
case 0x6059ea:c.instructions+=14;goto B6059ea;
case 0x6059ec:c.instructions+=13;goto B6059ec;
case 0x6059ef:c.instructions+=12;goto B6059ef;
case 0x6059f2:c.instructions+=11;goto B6059f2;
case 0x6059f4:c.instructions+=10;goto B6059f4;
case 0x6059f6:c.instructions+=9;goto B6059f6;
case 0x6059f8:c.instructions+=8;goto B6059f8;
case 0x6059fa:c.instructions+=7;goto B6059fa;
case 0x6059fc:c.instructions+=6;goto B6059fc;
case 0x6059fe:c.instructions+=5;goto B6059fe;
case 0x605a00:c.instructions+=4;goto B605a00;
case 0x605a04:c.instructions+=3;goto B605a04;
case 0x605a06:c.instructions+=2;goto B605a06;
case 0x605a09:c.instructions+=1;goto B605a09;
case 0x605a0b:goto L605a0b;
case 0x605a12:c.instructions+=2;goto B605a12;
case 0x605a14:c.instructions+=1;goto B605a14;
case 0x605a16:goto L605a16;
case 0x605a1d:c.instructions+=3;goto B605a1d;
case 0x605a1f:c.instructions+=2;goto B605a1f;
case 0x605a22:c.instructions+=1;goto B605a22;
case 0x605a24:goto L605a24;
case 0x605a2b:c.instructions+=2;goto B605a2b;
case 0x605a32:c.instructions+=1;goto B605a32;
case 0x605a34:goto L605a34;
case 0x605a36:goto L605a36;
case 0x605a3c:c.instructions+=2;goto B605a3c;
case 0x605a3e:c.instructions+=1;goto B605a3e;
case 0x605a44:goto L605a44;
case 0x605a47:c.instructions+=14;goto B605a47;
case 0x605a49:c.instructions+=13;goto B605a49;
case 0x605a4c:c.instructions+=12;goto B605a4c;
case 0x605a4f:c.instructions+=11;goto B605a4f;
case 0x605a51:c.instructions+=10;goto B605a51;
case 0x605a53:c.instructions+=9;goto B605a53;
case 0x605a55:c.instructions+=8;goto B605a55;
case 0x605a57:c.instructions+=7;goto B605a57;
case 0x605a59:c.instructions+=6;goto B605a59;
case 0x605a5b:c.instructions+=5;goto B605a5b;
case 0x605a5d:c.instructions+=4;goto B605a5d;
case 0x605a61:c.instructions+=3;goto B605a61;
case 0x605a63:c.instructions+=2;goto B605a63;
case 0x605a66:c.instructions+=1;goto B605a66;
case 0x605a68:goto L605a68;
case 0x605a6f:c.instructions+=2;goto B605a6f;
case 0x605a71:c.instructions+=1;goto B605a71;
case 0x605a73:goto L605a73;
case 0x605a7a:c.instructions+=3;goto B605a7a;
case 0x605a7c:c.instructions+=2;goto B605a7c;
case 0x605a7f:c.instructions+=1;goto B605a7f;
case 0x605a81:goto L605a81;
case 0x605a88:c.instructions+=2;goto B605a88;
case 0x605a8f:c.instructions+=1;goto B605a8f;
case 0x605a91:goto L605a91;
case 0x605a93:goto L605a93;
case 0x605a99:c.instructions+=2;goto B605a99;
case 0x605a9b:c.instructions+=1;goto B605a9b;
case 0x605aa1:goto L605aa1;
case 0x605aa4:c.instructions+=14;goto B605aa4;
case 0x605aa6:c.instructions+=13;goto B605aa6;
case 0x605aa9:c.instructions+=12;goto B605aa9;
case 0x605aac:c.instructions+=11;goto B605aac;
case 0x605aae:c.instructions+=10;goto B605aae;
case 0x605ab0:c.instructions+=9;goto B605ab0;
case 0x605ab2:c.instructions+=8;goto B605ab2;
case 0x605ab4:c.instructions+=7;goto B605ab4;
case 0x605ab6:c.instructions+=6;goto B605ab6;
case 0x605ab8:c.instructions+=5;goto B605ab8;
case 0x605aba:c.instructions+=4;goto B605aba;
case 0x605abe:c.instructions+=3;goto B605abe;
case 0x605ac0:c.instructions+=2;goto B605ac0;
case 0x605ac3:c.instructions+=1;goto B605ac3;
case 0x605ac5:goto L605ac5;
case 0x605acc:c.instructions+=2;goto B605acc;
case 0x605ace:c.instructions+=1;goto B605ace;
case 0x605ad0:goto L605ad0;
case 0x605ad7:c.instructions+=3;goto B605ad7;
case 0x605ad9:c.instructions+=2;goto B605ad9;
case 0x605adc:c.instructions+=1;goto B605adc;
case 0x605ade:goto L605ade;
case 0x605ae5:c.instructions+=2;goto B605ae5;
case 0x605aec:c.instructions+=1;goto B605aec;
case 0x605aee:goto L605aee;
case 0x605af0:goto L605af0;
case 0x605af6:c.instructions+=2;goto B605af6;
case 0x605af8:c.instructions+=1;goto B605af8;
case 0x605afe:goto L605afe;
case 0x605b01:c.instructions+=14;goto B605b01;
case 0x605b03:c.instructions+=13;goto B605b03;
case 0x605b06:c.instructions+=12;goto B605b06;
case 0x605b09:c.instructions+=11;goto B605b09;
case 0x605b0b:c.instructions+=10;goto B605b0b;
case 0x605b0d:c.instructions+=9;goto B605b0d;
case 0x605b0f:c.instructions+=8;goto B605b0f;
case 0x605b11:c.instructions+=7;goto B605b11;
case 0x605b13:c.instructions+=6;goto B605b13;
case 0x605b15:c.instructions+=5;goto B605b15;
case 0x605b17:c.instructions+=4;goto B605b17;
case 0x605b1b:c.instructions+=3;goto B605b1b;
case 0x605b1d:c.instructions+=2;goto B605b1d;
case 0x605b20:c.instructions+=1;goto B605b20;
case 0x605b22:goto L605b22;
case 0x605b29:c.instructions+=2;goto B605b29;
case 0x605b2b:c.instructions+=1;goto B605b2b;
case 0x605b2d:goto L605b2d;
case 0x605b34:c.instructions+=3;goto B605b34;
case 0x605b36:c.instructions+=2;goto B605b36;
case 0x605b39:c.instructions+=1;goto B605b39;
case 0x605b3b:goto L605b3b;
case 0x605b42:c.instructions+=2;goto B605b42;
case 0x605b49:c.instructions+=1;goto B605b49;
case 0x605b4b:goto L605b4b;
case 0x605b4d:goto L605b4d;
case 0x605b53:c.instructions+=2;goto B605b53;
case 0x605b55:c.instructions+=1;goto B605b55;
case 0x605b57:goto L605b57;
case 0x605b5a:c.instructions+=14;goto B605b5a;
case 0x605b5c:c.instructions+=13;goto B605b5c;
case 0x605b5f:c.instructions+=12;goto B605b5f;
case 0x605b62:c.instructions+=11;goto B605b62;
case 0x605b64:c.instructions+=10;goto B605b64;
case 0x605b66:c.instructions+=9;goto B605b66;
case 0x605b68:c.instructions+=8;goto B605b68;
case 0x605b6a:c.instructions+=7;goto B605b6a;
case 0x605b6c:c.instructions+=6;goto B605b6c;
case 0x605b6e:c.instructions+=5;goto B605b6e;
case 0x605b70:c.instructions+=4;goto B605b70;
case 0x605b74:c.instructions+=3;goto B605b74;
case 0x605b76:c.instructions+=2;goto B605b76;
case 0x605b79:c.instructions+=1;goto B605b79;
case 0x605b7b:goto L605b7b;
case 0x605b82:c.instructions+=2;goto B605b82;
case 0x605b84:c.instructions+=1;goto B605b84;
case 0x605b86:goto L605b86;
case 0x605b8d:c.instructions+=3;goto B605b8d;
case 0x605b8f:c.instructions+=2;goto B605b8f;
case 0x605b92:c.instructions+=1;goto B605b92;
case 0x605b94:goto L605b94;
case 0x605b9b:c.instructions+=2;goto B605b9b;
case 0x605ba2:c.instructions+=1;goto B605ba2;
case 0x605ba4:goto L605ba4;
case 0x605ba6:goto L605ba6;
case 0x605ba9:c.instructions+=2;goto B605ba9;
case 0x605baf:c.instructions+=1;goto B605baf;
case 0x605bb5:goto L605bb5;
case 0x605bb9:c.instructions+=5;goto B605bb9;
case 0x605bbc:c.instructions+=4;goto B605bbc;
case 0x605bbd:c.instructions+=3;goto B605bbd;
case 0x605bc2:c.instructions+=2;goto B605bc2;
case 0x605bc6:c.instructions+=1;goto B605bc6;
case 0x605bcc:goto L605bcc;
case 0x605bce:c.instructions+=1;goto B605bce;
case 0x605bd3:goto L605bd3;
case 0x605bd5:c.instructions+=2;goto B605bd5;
case 0x605bd7:c.instructions+=1;goto B605bd7;
case 0x605bd9:goto L605bd9;
case 0x605bdc:c.instructions+=10;goto B605bdc;
case 0x605bdf:c.instructions+=9;goto B605bdf;
case 0x605be3:c.instructions+=8;goto B605be3;
case 0x605be7:c.instructions+=7;goto B605be7;
case 0x605bea:c.instructions+=6;goto B605bea;
case 0x605bf0:c.instructions+=5;goto B605bf0;
case 0x605bf4:c.instructions+=4;goto B605bf4;
case 0x605bf5:c.instructions+=3;goto B605bf5;
case 0x605bf7:c.instructions+=2;goto B605bf7;
case 0x605bfb:c.instructions+=1;goto B605bfb;
case 0x605c00:goto L605c00;
case 0x605c02:c.instructions+=1;goto B605c02;
case 0x605c04:goto L605c04;
case 0x605c0a:c.instructions+=2;goto B605c0a;
case 0x605c0d:c.instructions+=1;goto B605c0d;
case 0x605c12:goto L605c12;
case 0x605c15:c.instructions+=3;goto B605c15;
case 0x605c18:c.instructions+=2;goto B605c18;
case 0x605c1e:c.instructions+=1;goto B605c1e;
case 0x605c20:goto L605c20;
case 0x605c21:c.instructions+=5;goto B605c21;
case 0x605c22:c.instructions+=4;goto B605c22;
case 0x605c23:c.instructions+=3;goto B605c23;
case 0x605c25:c.instructions+=2;goto B605c25;
case 0x605c26:c.instructions+=1;goto B605c26;
case 0x605c27:goto L605c27;
case 0x605c29:c.instructions+=1;goto B605c29;
case 0x605c30:goto L605c30;
case 0x605c35:c.instructions+=2;goto B605c35;
case 0x605c38:c.instructions+=1;goto B605c38;
case 0x605c3d:goto L605c3d;
case 0x605c40:c.instructions+=2;goto B605c40;
case 0x605c46:c.instructions+=1;goto B605c46;
case 0x605c48:goto L605c48;
case 0x605c49:c.instructions+=5;goto B605c49;
case 0x605c4a:c.instructions+=4;goto B605c4a;
case 0x605c4b:c.instructions+=3;goto B605c4b;
case 0x605c4d:c.instructions+=2;goto B605c4d;
case 0x605c4e:c.instructions+=1;goto B605c4e;
case 0x605c50:goto L605c50;
case 0x605c54:c.instructions+=7;goto B605c54;
case 0x605c58:c.instructions+=6;goto B605c58;
case 0x605c5c:c.instructions+=5;goto B605c5c;
case 0x605c5d:c.instructions+=4;goto B605c5d;
case 0x605c5e:c.instructions+=3;goto B605c5e;
case 0x605c62:c.instructions+=2;goto B605c62;
case 0x605c63:c.instructions+=1;goto B605c63;
case 0x605c68:goto L605c68;
case 0x605c70:goto L605c70;
case 0x605c71:c.instructions+=7;goto B605c71;
case 0x605c72:c.instructions+=6;goto B605c72;
case 0x605c74:c.instructions+=5;goto B605c74;
case 0x605c7a:c.instructions+=4;goto B605c7a;
case 0x605c7d:c.instructions+=3;goto B605c7d;
case 0x605c80:c.instructions+=2;goto B605c80;
case 0x605c85:c.instructions+=1;goto B605c85;
case 0x605c8b:goto L605c8b;
case 0x605c92:goto L605c92;
case 0x605c95:c.instructions+=3;goto B605c95;
case 0x605c9a:c.instructions+=2;goto B605c9a;
case 0x605c9b:c.instructions+=1;goto B605c9b;
case 0x605ca0:goto L605ca0;
case 0x605ca3:c.instructions+=2;goto B605ca3;
case 0x605ca5:c.instructions+=1;goto B605ca5;
case 0x605ca7:goto L605ca7;
case 0x605caa:c.instructions+=3;goto B605caa;
case 0x605caf:c.instructions+=2;goto B605caf;
case 0x605cb0:c.instructions+=1;goto B605cb0;
case 0x605cb5:goto L605cb5;
case 0x605cb8:goto L605cb8;
case 0x605cbb:c.instructions+=3;goto B605cbb;
case 0x605cc0:c.instructions+=2;goto B605cc0;
case 0x605cc1:c.instructions+=1;goto B605cc1;
case 0x605cc6:goto L605cc6;
case 0x605cc9:c.instructions+=2;goto B605cc9;
case 0x605ccb:c.instructions+=1;goto B605ccb;
case 0x605ccd:goto L605ccd;
case 0x605cd0:c.instructions+=3;goto B605cd0;
case 0x605cd5:c.instructions+=2;goto B605cd5;
case 0x605cd6:c.instructions+=1;goto B605cd6;
case 0x605cdb:goto L605cdb;
case 0x605cde:goto L605cde;
case 0x605ce1:c.instructions+=3;goto B605ce1;
case 0x605ce6:c.instructions+=2;goto B605ce6;
case 0x605ce7:c.instructions+=1;goto B605ce7;
case 0x605cec:goto L605cec;
case 0x605cef:c.instructions+=2;goto B605cef;
case 0x605cf1:c.instructions+=1;goto B605cf1;
case 0x605cf7:goto L605cf7;
case 0x605cfa:c.instructions+=3;goto B605cfa;
case 0x605cff:c.instructions+=2;goto B605cff;
case 0x605d00:c.instructions+=1;goto B605d00;
case 0x605d05:goto L605d05;
case 0x605d08:c.instructions+=1;goto B605d08;
case 0x605d0d:goto L605d0d;
case 0x605d10:c.instructions+=3;goto B605d10;
case 0x605d15:c.instructions+=2;goto B605d15;
case 0x605d16:c.instructions+=1;goto B605d16;
case 0x605d1b:goto L605d1b;
case 0x605d1e:c.instructions+=2;goto B605d1e;
case 0x605d20:c.instructions+=1;goto B605d20;
case 0x605d22:goto L605d22;
case 0x605d25:c.instructions+=3;goto B605d25;
case 0x605d2a:c.instructions+=2;goto B605d2a;
case 0x605d2b:c.instructions+=1;goto B605d2b;
case 0x605d30:goto L605d30;
case 0x605d33:goto L605d33;
case 0x605d36:c.instructions+=3;goto B605d36;
case 0x605d38:c.instructions+=2;goto B605d38;
case 0x605d39:c.instructions+=1;goto B605d39;
case 0x605d3e:goto L605d3e;
case 0x605d41:c.instructions+=2;goto B605d41;
case 0x605d43:c.instructions+=1;goto B605d43;
case 0x605d45:goto L605d45;
case 0x605d48:c.instructions+=3;goto B605d48;
case 0x605d4a:c.instructions+=2;goto B605d4a;
case 0x605d4b:c.instructions+=1;goto B605d4b;
case 0x605d50:goto L605d50;
case 0x605d53:goto L605d53;
case 0x605d56:c.instructions+=3;goto B605d56;
case 0x605d5b:c.instructions+=2;goto B605d5b;
case 0x605d5c:c.instructions+=1;goto B605d5c;
case 0x605d61:goto L605d61;
case 0x605d64:c.instructions+=2;goto B605d64;
case 0x605d66:c.instructions+=1;goto B605d66;
case 0x605d68:goto L605d68;
case 0x605d6b:c.instructions+=3;goto B605d6b;
case 0x605d70:c.instructions+=2;goto B605d70;
case 0x605d71:c.instructions+=1;goto B605d71;
case 0x605d76:goto L605d76;
case 0x605d79:goto L605d79;
case 0x605d7c:c.instructions+=3;goto B605d7c;
case 0x605d7e:c.instructions+=2;goto B605d7e;
case 0x605d7f:c.instructions+=1;goto B605d7f;
case 0x605d84:goto L605d84;
case 0x605d87:c.instructions+=2;goto B605d87;
case 0x605d89:c.instructions+=1;goto B605d89;
case 0x605d8b:goto L605d8b;
case 0x605d8e:c.instructions+=3;goto B605d8e;
case 0x605d90:c.instructions+=2;goto B605d90;
case 0x605d91:c.instructions+=1;goto B605d91;
case 0x605d96:goto L605d96;
case 0x605d99:goto L605d99;
case 0x605d9c:c.instructions+=3;goto B605d9c;
case 0x605da1:c.instructions+=2;goto B605da1;
case 0x605da2:c.instructions+=1;goto B605da2;
case 0x605da7:goto L605da7;
case 0x605daa:c.instructions+=2;goto B605daa;
case 0x605dac:c.instructions+=1;goto B605dac;
case 0x605dae:goto L605dae;
case 0x605db1:c.instructions+=3;goto B605db1;
case 0x605db6:c.instructions+=2;goto B605db6;
case 0x605db7:c.instructions+=1;goto B605db7;
case 0x605dbc:goto L605dbc;
case 0x605dbf:goto L605dbf;
case 0x605dc2:c.instructions+=3;goto B605dc2;
case 0x605dc7:c.instructions+=2;goto B605dc7;
case 0x605dc8:c.instructions+=1;goto B605dc8;
case 0x605dcd:goto L605dcd;
case 0x605dd0:c.instructions+=2;goto B605dd0;
case 0x605dd2:c.instructions+=1;goto B605dd2;
case 0x605dd4:goto L605dd4;
case 0x605dd7:c.instructions+=3;goto B605dd7;
case 0x605ddc:c.instructions+=2;goto B605ddc;
case 0x605ddd:c.instructions+=1;goto B605ddd;
case 0x605de2:goto L605de2;
case 0x605de5:goto L605de5;
case 0x605de8:c.instructions+=3;goto B605de8;
case 0x605ded:c.instructions+=2;goto B605ded;
case 0x605dee:c.instructions+=1;goto B605dee;
case 0x605df3:goto L605df3;
case 0x605df6:c.instructions+=2;goto B605df6;
case 0x605df8:c.instructions+=1;goto B605df8;
case 0x605dfa:goto L605dfa;
case 0x605dfd:c.instructions+=3;goto B605dfd;
case 0x605e02:c.instructions+=2;goto B605e02;
case 0x605e03:c.instructions+=1;goto B605e03;
case 0x605e08:goto L605e08;
case 0x605e0b:goto L605e0b;
case 0x605e0e:c.instructions+=3;goto B605e0e;
case 0x605e13:c.instructions+=2;goto B605e13;
case 0x605e14:c.instructions+=1;goto B605e14;
case 0x605e19:goto L605e19;
case 0x605e1c:c.instructions+=2;goto B605e1c;
case 0x605e1e:c.instructions+=1;goto B605e1e;
case 0x605e20:goto L605e20;
case 0x605e23:c.instructions+=3;goto B605e23;
case 0x605e28:c.instructions+=2;goto B605e28;
case 0x605e29:c.instructions+=1;goto B605e29;
case 0x605e2e:goto L605e2e;
case 0x605e31:goto L605e31;
case 0x605e34:c.instructions+=3;goto B605e34;
case 0x605e39:c.instructions+=2;goto B605e39;
case 0x605e3a:c.instructions+=1;goto B605e3a;
case 0x605e3f:goto L605e3f;
case 0x605e42:c.instructions+=2;goto B605e42;
case 0x605e44:c.instructions+=1;goto B605e44;
case 0x605e46:goto L605e46;
case 0x605e49:c.instructions+=3;goto B605e49;
case 0x605e4e:c.instructions+=2;goto B605e4e;
case 0x605e4f:c.instructions+=1;goto B605e4f;
case 0x605e54:goto L605e54;
case 0x605e57:goto L605e57;
case 0x605e5a:c.instructions+=3;goto B605e5a;
case 0x605e5f:c.instructions+=2;goto B605e5f;
case 0x605e60:c.instructions+=1;goto B605e60;
case 0x605e65:goto L605e65;
case 0x605e68:c.instructions+=2;goto B605e68;
case 0x605e6a:c.instructions+=1;goto B605e6a;
case 0x605e6c:goto L605e6c;
case 0x605e6f:c.instructions+=3;goto B605e6f;
case 0x605e74:c.instructions+=2;goto B605e74;
case 0x605e75:c.instructions+=1;goto B605e75;
case 0x605e7a:goto L605e7a;
case 0x605e7d:goto L605e7d;
case 0x605e83:c.instructions+=1;goto B605e83;
case 0x605e85:goto L605e85;
case 0x605e88:c.instructions+=3;goto B605e88;
case 0x605e8d:c.instructions+=2;goto B605e8d;
case 0x605e8e:c.instructions+=1;goto B605e8e;
case 0x605e93:goto L605e93;
case 0x605e96:c.instructions+=2;goto B605e96;
case 0x605e98:c.instructions+=1;goto B605e98;
case 0x605e9a:goto L605e9a;
case 0x605e9d:c.instructions+=3;goto B605e9d;
case 0x605ea2:c.instructions+=2;goto B605ea2;
case 0x605ea3:c.instructions+=1;goto B605ea3;
case 0x605ea8:goto L605ea8;
case 0x605eab:goto L605eab;
case 0x605eae:c.instructions+=3;goto B605eae;
case 0x605eb3:c.instructions+=2;goto B605eb3;
case 0x605eb4:c.instructions+=1;goto B605eb4;
case 0x605eb9:goto L605eb9;
case 0x605ebc:c.instructions+=2;goto B605ebc;
case 0x605ebe:c.instructions+=1;goto B605ebe;
case 0x605ec0:goto L605ec0;
case 0x605ec3:c.instructions+=3;goto B605ec3;
case 0x605ec8:c.instructions+=2;goto B605ec8;
case 0x605ec9:c.instructions+=1;goto B605ec9;
case 0x605ece:goto L605ece;
case 0x605ed1:goto L605ed1;
case 0x605ed4:c.instructions+=3;goto B605ed4;
case 0x605ed9:c.instructions+=2;goto B605ed9;
case 0x605eda:c.instructions+=1;goto B605eda;
case 0x605edf:goto L605edf;
case 0x605ee2:c.instructions+=3;goto B605ee2;
case 0x605ee7:c.instructions+=2;goto B605ee7;
case 0x605ee8:c.instructions+=1;goto B605ee8;
case 0x605eed:goto L605eed;
case 0x605ef0:c.instructions+=3;goto B605ef0;
case 0x605ef5:c.instructions+=2;goto B605ef5;
case 0x605ef6:c.instructions+=1;goto B605ef6;
case 0x605efb:goto L605efb;
case 0x605efe:c.instructions+=3;goto B605efe;
case 0x605f03:c.instructions+=2;goto B605f03;
case 0x605f04:c.instructions+=1;goto B605f04;
case 0x605f09:goto L605f09;
case 0x605f0c:c.instructions+=3;goto B605f0c;
case 0x605f0e:c.instructions+=2;goto B605f0e;
case 0x605f0f:c.instructions+=1;goto B605f0f;
case 0x605f14:goto L605f14;
case 0x605f17:c.instructions+=3;goto B605f17;
case 0x605f1c:c.instructions+=2;goto B605f1c;
case 0x605f1d:c.instructions+=1;goto B605f1d;
case 0x605f22:goto L605f22;
case 0x605f25:c.instructions+=3;goto B605f25;
case 0x605f2a:c.instructions+=2;goto B605f2a;
case 0x605f2b:c.instructions+=1;goto B605f2b;
case 0x605f30:goto L605f30;
case 0x605f33:c.instructions+=3;goto B605f33;
case 0x605f38:c.instructions+=2;goto B605f38;
case 0x605f39:c.instructions+=1;goto B605f39;
case 0x605f3e:goto L605f3e;
case 0x605f44:c.instructions+=3;goto B605f44;
case 0x605f47:c.instructions+=2;goto B605f47;
case 0x605f4a:c.instructions+=1;goto B605f4a;
case 0x605f4c:goto L605f4c;
case 0x605f4e:goto L605f4e;
case 0x605f51:c.instructions+=1;goto B605f51;
case 0x605f53:goto L605f53;
case 0x605f55:c.instructions+=1;goto B605f55;
case 0x605f5a:goto L605f5a;
case 0x605f5c:goto L605f5c;
case 0x605f5f:c.instructions+=2;goto B605f5f;
case 0x605f61:c.instructions+=1;goto B605f61;
case 0x605f63:goto L605f63;
case 0x605f66:c.instructions+=2;goto B605f66;
case 0x605f68:c.instructions+=1;goto B605f68;
case 0x605f6a:goto L605f6a;
case 0x605f6c:c.instructions+=2;goto B605f6c;
case 0x605f6e:c.instructions+=1;goto B605f6e;
case 0x605f71:goto L605f71;
case 0x605f73:goto L605f73;
case 0x605f76:c.instructions+=2;goto B605f76;
case 0x605f78:c.instructions+=1;goto B605f78;
case 0x605f7a:goto L605f7a;
case 0x605f7d:c.instructions+=1;goto B605f7d;
case 0x605f7f:goto L605f7f;
case 0x605f82:c.instructions+=3;goto B605f82;
case 0x605f84:c.instructions+=2;goto B605f84;
case 0x605f86:c.instructions+=1;goto B605f86;
case 0x605f89:goto L605f89;
case 0x605f8b:goto L605f8b;
case 0x605f8e:c.instructions+=3;goto B605f8e;
case 0x605f93:c.instructions+=2;goto B605f93;
case 0x605f94:c.instructions+=1;goto B605f94;
case 0x605f99:goto L605f99;
case 0x605f9c:c.instructions+=1;goto B605f9c;
case 0x605f9e:goto L605f9e;
case 0x605fa1:c.instructions+=3;goto B605fa1;
case 0x605fa6:c.instructions+=2;goto B605fa6;
case 0x605fa7:c.instructions+=1;goto B605fa7;
case 0x605fac:goto L605fac;
case 0x605faf:c.instructions+=3;goto B605faf;
case 0x605fb4:c.instructions+=2;goto B605fb4;
case 0x605fb5:c.instructions+=1;goto B605fb5;
case 0x605fba:goto L605fba;
case 0x605fbd:c.instructions+=3;goto B605fbd;
case 0x605fc2:c.instructions+=2;goto B605fc2;
case 0x605fc3:c.instructions+=1;goto B605fc3;
case 0x605fc8:goto L605fc8;
case 0x605fcb:goto L605fcb;
case 0x605fce:c.instructions+=2;goto B605fce;
case 0x605fd0:c.instructions+=1;goto B605fd0;
case 0x605fd2:goto L605fd2;
case 0x605fd4:c.instructions+=2;goto B605fd4;
case 0x605fd6:c.instructions+=1;goto B605fd6;
case 0x605fdb:goto L605fdb;
case 0x605fde:c.instructions+=2;goto B605fde;
case 0x605fe0:c.instructions+=1;goto B605fe0;
case 0x605fe2:goto L605fe2;
case 0x605fe4:c.instructions+=2;goto B605fe4;
case 0x605fe6:c.instructions+=1;goto B605fe6;
case 0x605feb:goto L605feb;
case 0x605fee:goto L605fee;
case 0x605ff2:c.instructions+=5;goto B605ff2;
case 0x605ff8:c.instructions+=4;goto B605ff8;
case 0x605ffb:c.instructions+=3;goto B605ffb;
case 0x605ffe:c.instructions+=2;goto B605ffe;
case 0x605fff:c.instructions+=1;goto B605fff;
default:missing_instruction(c.pc);}
B605002:L605002:{c.instructions+=1;NFSU2_TR(0x605002);
if(r1(R+514)){{goto L605021;}}
}
B605004:L605004:{c.instructions+=3;NFSU2_TR(0x605004);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605007:{NFSU2_TR(0x605007);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605009:{NFSU2_TR(0x605009);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L605021;}}
}
B60500b:L60500b:{c.instructions+=5;NFSU2_TR(0x60500b);
__builtin_memmove((R+0),gp(0x7a55e8),4);
}
B605010:{NFSU2_TR(0x605010);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B605016:{NFSU2_TR(0x605016);
u8 U[4];
w4(U+0,u32(0x7a64ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60501b:{NFSU2_TR(0x60501b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60501c:{NFSU2_TR(0x60501c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605021ull));
TAIL_STATIC(0x578e90u,578);
}
B605021:L605021:{c.instructions+=5;NFSU2_TR(0x605021);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B605025:{NFSU2_TR(0x605025);
{u32 ea_=u32(u32(7890136u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60502b:{NFSU2_TR(0x60502b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60502d:{NFSU2_TR(0x60502d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B605030:{NFSU2_TR(0x605030);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6050c5;}}
}
B605036:L605036:{c.instructions+=8;NFSU2_TR(0x605036);
__builtin_memmove((R+24),gp(0x890080),4);
}
B60503c:{NFSU2_TR(0x60503c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60503f:{NFSU2_TR(0x60503f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605042:{NFSU2_TR(0x605042);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B605044:{NFSU2_TR(0x605044);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B605046:{NFSU2_TR(0x605046);
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
B605048:{NFSU2_TR(0x605048);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60504c:{NFSU2_TR(0x60504c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6050c1;}}
}
B60504e:L60504e:{c.instructions+=2;NFSU2_TR(0x60504e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605052:{NFSU2_TR(0x605052);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605057ull));
TAIL_STATIC(0x401890u,401);
}
B605057:L605057:{c.instructions+=2;NFSU2_TR(0x605057);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60505b:{NFSU2_TR(0x60505b);
{goto L605060;}
}
B605060:L605060:{c.instructions+=7;NFSU2_TR(0x605060);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B605064:{NFSU2_TR(0x605064);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B605066:{NFSU2_TR(0x605066);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B60506a:{NFSU2_TR(0x60506a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60506b:{NFSU2_TR(0x60506b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x60ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60506e:{NFSU2_TR(0x60506e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60506f:{NFSU2_TR(0x60506f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605074ull));
TAIL_STATIC(0x43ce10u,43c);
}
B605074:L605074:{c.instructions+=5;NFSU2_TR(0x605074);
{u32 ea_=u32(u32(7890136u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60507a:{NFSU2_TR(0x60507a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B60507d:{NFSU2_TR(0x60507d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60507f:{NFSU2_TR(0x60507f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B605082:{NFSU2_TR(0x605082);
if(r1(R+514)){{goto L605088;}}
}
B605084:L605084:{c.instructions+=1;NFSU2_TR(0x605084);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B605088:L605088:{c.instructions+=7;NFSU2_TR(0x605088);
__builtin_memmove((R+24),gp(0x890080),4);
}
B60508e:{NFSU2_TR(0x60508e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B605091:{NFSU2_TR(0x605091);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605094:{NFSU2_TR(0x605094);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B605095:{NFSU2_TR(0x605095);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B605097:{NFSU2_TR(0x605097);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B605099:{NFSU2_TR(0x605099);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x605060u);}goto L605060;}}
}
B60509b:L60509b:{c.instructions+=3;NFSU2_TR(0x60509b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60509f:{NFSU2_TR(0x60509f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6050a1:{NFSU2_TR(0x6050a1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6050c1;}}
}
B6050a3:L6050a3:{c.instructions+=7;NFSU2_TR(0x6050a3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6050a7:{NFSU2_TR(0x6050a7);
u8 U[4];
w4(U+0,u32(0x7a64e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6050ac:{NFSU2_TR(0x6050ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6050ad:{NFSU2_TR(0x6050ad);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B6050b3:{NFSU2_TR(0x6050b3);
{u32 ea_=u32(u32(8017356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6050b9:{NFSU2_TR(0x6050b9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6050bc:{NFSU2_TR(0x6050bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6050c1ull));
TAIL_STATIC(0x578e90u,578);
}
B6050c1:L6050c1:{c.instructions+=1;NFSU2_TR(0x6050c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6050c5:L6050c5:{c.instructions+=7;NFSU2_TR(0x6050c5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6050c9:{NFSU2_TR(0x6050c9);
u8 U[4];
w4(U+0,u32(0x7881b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6050ce:{NFSU2_TR(0x6050ce);
{u32 ea_=u32(u32(8017392u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6050d4:{NFSU2_TR(0x6050d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6050d5:{NFSU2_TR(0x6050d5);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B6050db:{NFSU2_TR(0x6050db);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6050de:{NFSU2_TR(0x6050de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6050e3ull));
TAIL_STATIC(0x578e90u,578);
}
B6050e3:L6050e3:{c.instructions+=5;NFSU2_TR(0x6050e3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6050e7:{NFSU2_TR(0x6050e7);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6050ed:{NFSU2_TR(0x6050ed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6050ef:{NFSU2_TR(0x6050ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6050f2:{NFSU2_TR(0x6050f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6051d5;}}
}
B6050f8:L6050f8:{c.instructions+=2;NFSU2_TR(0x6050f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6050fb:{NFSU2_TR(0x6050fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605100ull));
TAIL_STATIC(0x59fa10u,59f);
}
B605100:L605100:{c.instructions+=5;NFSU2_TR(0x605100);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B605102:{NFSU2_TR(0x605102);
{u32 ea_=u32(u32(8021212u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B605108:{NFSU2_TR(0x605108);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60510a:{NFSU2_TR(0x60510a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60510d:{NFSU2_TR(0x60510d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L605126;}}
}
B60510f:L60510f:{c.instructions+=5;NFSU2_TR(0x60510f);
__builtin_memmove((R+4),gp(0x7a55d0),4);
}
B605115:{NFSU2_TR(0x605115);
u8 U[4];
w4(U+0,u32(0x7a64c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60511a:{NFSU2_TR(0x60511a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60511b:{NFSU2_TR(0x60511b);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B605121:{NFSU2_TR(0x605121);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605126ull));
TAIL_STATIC(0x578e90u,578);
}
B605126:L605126:{c.instructions+=3;NFSU2_TR(0x605126);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605129:{NFSU2_TR(0x605129);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60512b:{NFSU2_TR(0x60512b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605130ull));
TAIL_STATIC(0x5a0820u,5a0);
}
B605130:L605130:{c.instructions+=3;NFSU2_TR(0x605130);
__builtin_memmove((R+24),(R+0),4);
}
B605132:{NFSU2_TR(0x605132);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605134:{NFSU2_TR(0x605134);
if(r1(R+518)){{goto L6051d5;}}
}
B60513a:L60513a:{c.instructions+=2;NFSU2_TR(0x60513a);
__builtin_memmove((R+4),(R+24),4);
}
B60513c:{NFSU2_TR(0x60513c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605141ull));
TAIL_STATIC(0x592d00u,592);
}
B605141:L605141:{c.instructions+=2;NFSU2_TR(0x605141);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B605143:{NFSU2_TR(0x605143);
if(r1(R+518)){{goto L6051d5;}}
}
B605149:L605149:{c.instructions+=10;NFSU2_TR(0x605149);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60514c:{NFSU2_TR(0x60514c);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B605152:{NFSU2_TR(0x605152);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B605154:{NFSU2_TR(0x605154);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605158:{NFSU2_TR(0x605158);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B60515c:{NFSU2_TR(0x60515c);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B605162:{NFSU2_TR(0x605162);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B605168:{NFSU2_TR(0x605168);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60516a:{NFSU2_TR(0x60516a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60516d:{NFSU2_TR(0x60516d);
if(r1(R+514)){{goto L6051d5;}}
}
B60516f:L60516f:{c.instructions+=2;NFSU2_TR(0x60516f);
__builtin_memmove((R+4),(R+24),4);
}
B605171:{NFSU2_TR(0x605171);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605176ull));
TAIL_STATIC(0x592c60u,592);
}
B605176:L605176:{c.instructions+=2;NFSU2_TR(0x605176);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B605178:{NFSU2_TR(0x605178);
if(r1(R+518)){{goto L6051b4;}}
}
B60517a:L60517a:{c.instructions+=5;NFSU2_TR(0x60517a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60517e:{NFSU2_TR(0x60517e);
{u32 ea_=u32(u32(7890136u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B605184:{NFSU2_TR(0x605184);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B605186:{NFSU2_TR(0x605186);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B605189:{NFSU2_TR(0x605189);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6051b4;}}
}
B60518b:L60518b:{c.instructions+=5;NFSU2_TR(0x60518b);
__builtin_memmove((R+0),gp(0x7a55d4),4);
}
B605190:{NFSU2_TR(0x605190);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B605196:{NFSU2_TR(0x605196);
u8 U[4];
w4(U+0,u32(0x7a64b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60519b:{NFSU2_TR(0x60519b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60519c:{NFSU2_TR(0x60519c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6051a1ull));
TAIL_STATIC(0x578e90u,578);
}
B6051a1:L6051a1:{c.instructions+=6;NFSU2_TR(0x6051a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6051a5:{NFSU2_TR(0x6051a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6051a6:{NFSU2_TR(0x6051a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6051aa:{NFSU2_TR(0x6051aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6051ab:{NFSU2_TR(0x6051ab);
__builtin_memmove((R+4),(R+24),4);
}
B6051ad:{NFSU2_TR(0x6051ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6051b2ull));
TAIL_STATIC(0x592c90u,592);
}
B6051b2:L6051b2:{c.instructions+=1;NFSU2_TR(0x6051b2);
{goto L6051d5;}
}
B6051b4:L6051b4:{c.instructions+=2;NFSU2_TR(0x6051b4);
__builtin_memmove((R+4),(R+24),4);
}
B6051b6:{NFSU2_TR(0x6051b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6051bbull));
TAIL_STATIC(0x592d50u,592);
}
B6051bb:L6051bb:{c.instructions+=2;NFSU2_TR(0x6051bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6051bd:{NFSU2_TR(0x6051bd);
if(r1(R+518)){{goto L6051d5;}}
}
B6051bf:L6051bf:{c.instructions+=5;NFSU2_TR(0x6051bf);
__builtin_memmove((R+0),gp(0x7a55d8),4);
}
B6051c4:{NFSU2_TR(0x6051c4);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B6051ca:{NFSU2_TR(0x6051ca);
u8 U[4];
w4(U+0,u32(0x7a64a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6051cf:{NFSU2_TR(0x6051cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6051d0:{NFSU2_TR(0x6051d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6051d5ull));
TAIL_STATIC(0x578e90u,578);
}
B6051d5:L6051d5:{c.instructions+=3;NFSU2_TR(0x6051d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6051db:{NFSU2_TR(0x6051db);
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
B6051dd:{NFSU2_TR(0x6051dd);
if(r1(R+518)){{goto L605242;}}
}
B6051df:L6051df:{c.instructions+=3;NFSU2_TR(0x6051df);
__builtin_memmove((R+4),gp(0x890118),4);
}
B6051e5:{NFSU2_TR(0x6051e5);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6051e8:{NFSU2_TR(0x6051e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L605242;}}
}
B6051ea:L6051ea:{c.instructions+=1;NFSU2_TR(0x6051ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6051efull));
TAIL_STATIC(0x5f85b0u,5f8);
}
B6051ef:L6051ef:{c.instructions+=2;NFSU2_TR(0x6051ef);
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
B6051f1:{NFSU2_TR(0x6051f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L605242;}}
}
B6051f3:L6051f3:{c.instructions+=5;NFSU2_TR(0x6051f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6051f6:{NFSU2_TR(0x6051f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6051fc:{NFSU2_TR(0x6051fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6051fe:{NFSU2_TR(0x6051fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B605201:{NFSU2_TR(0x605201);
if(r1(R+518)){{goto L60520d;}}
}
B605203:L605203:{c.instructions+=3;NFSU2_TR(0x605203);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605204:{NFSU2_TR(0x605204);
__builtin_memmove((R+4),(R+24),4);
}
B605206:{NFSU2_TR(0x605206);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60520bull));
TAIL_STATIC(0x5f8d40u,5f8);
}
B60520b:L60520b:{c.instructions+=1;NFSU2_TR(0x60520b);
{goto L605236;}
}
B60520d:L60520d:{c.instructions+=2;NFSU2_TR(0x60520d);
__builtin_memmove((R+4),(R+28),4);
}
B60520f:{NFSU2_TR(0x60520f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605214ull));
TAIL_STATIC(0x431dd0u,431);
}
B605214:L605214:{c.instructions+=2;NFSU2_TR(0x605214);
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
B605216:{NFSU2_TR(0x605216);
if(r1(R+518)){{goto L605236;}}
}
B605218:L605218:{c.instructions+=4;NFSU2_TR(0x605218);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60521b:{NFSU2_TR(0x60521b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B60521d:{NFSU2_TR(0x60521d);
__builtin_memmove((R+4),(R+24),4);
}
B60521f:{NFSU2_TR(0x60521f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605222ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B605222:L605222:{c.instructions+=4;NFSU2_TR(0x605222);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605223:{NFSU2_TR(0x605223);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B605225:{NFSU2_TR(0x605225);
__builtin_memmove((R+4),(R+24),4);
}
B605227:{NFSU2_TR(0x605227);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60522aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B60522a:L60522a:{c.instructions+=3;NFSU2_TR(0x60522a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605230:{NFSU2_TR(0x605230);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605231:{NFSU2_TR(0x605231);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605236ull));
TAIL_STATIC(0x5ef5c0u,5ef);
}
B605236:L605236:{c.instructions+=3;NFSU2_TR(0x605236);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60523c:{NFSU2_TR(0x60523c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60523d:{NFSU2_TR(0x60523d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605242ull));
TAIL_STATIC(0x5fd940u,5fd);
}
B605242:L605242:{c.instructions+=6;NFSU2_TR(0x605242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B605243:{NFSU2_TR(0x605243);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B605244:{NFSU2_TR(0x605244);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B605245:{NFSU2_TR(0x605245);
__builtin_memmove((R+16),(R+20),4);
}
B605247:{NFSU2_TR(0x605247);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B605248:{NFSU2_TR(0x605248);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B605250:L605250:{c.instructions+=9;NFSU2_TR(0x605250);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605256:{NFSU2_TR(0x605256);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605258:{NFSU2_TR(0x605258);
u8 U[4];
w4(U+0,u32(0x779f94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60525d:{NFSU2_TR(0x60525d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60525e:{NFSU2_TR(0x60525e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605265:{NFSU2_TR(0x605265);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605266:{NFSU2_TR(0x605266);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605267:{NFSU2_TR(0x605267);
__builtin_memmove((R+24),(R+4),4);
}
B605269:{NFSU2_TR(0x605269);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60526eull));
TAIL_STATIC(0x601860u,601);
}
B60526e:L60526e:{c.instructions+=4;NFSU2_TR(0x60526e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605272:{NFSU2_TR(0x605272);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605273:{NFSU2_TR(0x605273);
__builtin_memmove((R+4),(R+24),4);
}
B605275:{NFSU2_TR(0x605275);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60527aull));
TAIL_STATIC(0x5fc900u,5fc);
}
B60527a:L60527a:{c.instructions+=5;NFSU2_TR(0x60527a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60527d:{NFSU2_TR(0x60527d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc30ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B605284:{NFSU2_TR(0x605284);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605287:{NFSU2_TR(0x605287);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60528a:{NFSU2_TR(0x60528a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60528full));
TAIL_STATIC(0x5b5330u,5b5);
}
B60528f:L60528f:{c.instructions+=3;NFSU2_TR(0x60528f);
u8 U[4];
w4(U+0,u32(0x804ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605294:{NFSU2_TR(0x605294);
w4(R+28,u32(s32(s8(r1(R+0)))));
}
B605297:{NFSU2_TR(0x605297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60529cull));
TAIL_STATIC(0x575620u,575);
}
B60529c:L60529c:{c.instructions+=5;NFSU2_TR(0x60529c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60529f:{NFSU2_TR(0x60529f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6052a3:{NFSU2_TR(0x6052a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6052a5:{NFSU2_TR(0x6052a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6052ad:{NFSU2_TR(0x6052ad);
if(r1(R+518)){{goto L6052b9;}}
}
B6052af:L6052af:{c.instructions+=3;NFSU2_TR(0x6052af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6052b0:{NFSU2_TR(0x6052b0);
__builtin_memmove((R+4),(R+0),4);
}
B6052b2:{NFSU2_TR(0x6052b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6052b7ull));
TAIL_STATIC(0x5f6e70u,5f6);
}
B6052b7:L6052b7:{c.instructions+=1;NFSU2_TR(0x6052b7);
{goto L6052bb;}
}
B6052b9:L6052b9:{c.instructions+=1;NFSU2_TR(0x6052b9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6052bb:L6052bb:{c.instructions+=5;NFSU2_TR(0x6052bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6052c1:{NFSU2_TR(0x6052c1);
__builtin_memmove((R+0),gp(0x89cf69),1);
}
B6052c6:{NFSU2_TR(0x6052c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6052c8:{NFSU2_TR(0x6052c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6052d0:{NFSU2_TR(0x6052d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L605300;}}
}
B6052d2:L6052d2:{c.instructions+=3;NFSU2_TR(0x6052d2);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B6052d7:{NFSU2_TR(0x6052d7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6052d9:{NFSU2_TR(0x6052d9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L605300;}}
}
B6052db:L6052db:{c.instructions+=3;NFSU2_TR(0x6052db);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B6052e0:{NFSU2_TR(0x6052e0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6052e2:{NFSU2_TR(0x6052e2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L605300;}}
}
B6052e4:L6052e4:{c.instructions+=3;NFSU2_TR(0x6052e4);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B6052e9:{NFSU2_TR(0x6052e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6052eb:{NFSU2_TR(0x6052eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6052f6;}}
}
B6052ed:L6052ed:{c.instructions+=3;NFSU2_TR(0x6052ed);
__builtin_memmove((R+0),gp(0x890104),4);
}
B6052f2:{NFSU2_TR(0x6052f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6052f4:{NFSU2_TR(0x6052f4);
if(r1(R+518)){{goto L605300;}}
}
B6052f6:L6052f6:{c.instructions+=2;NFSU2_TR(0x6052f6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6052f8:{NFSU2_TR(0x6052f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6052fdull));
TAIL_STATIC(0x56d850u,56d);
}
B6052fd:L6052fd:{c.instructions+=1;NFSU2_TR(0x6052fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B605300:L605300:{c.instructions+=6;NFSU2_TR(0x605300);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605304:{NFSU2_TR(0x605304);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B605305:{NFSU2_TR(0x605305);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60530c:{NFSU2_TR(0x60530c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60530d:{NFSU2_TR(0x60530d);
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
B605310:{NFSU2_TR(0x605310);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B605320:L605320:{c.instructions+=10;NFSU2_TR(0x605320);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605321:{NFSU2_TR(0x605321);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B605323:{NFSU2_TR(0x605323);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605324:{NFSU2_TR(0x605324);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B605327:{NFSU2_TR(0x605327);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60532a:{NFSU2_TR(0x60532a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60532d:{NFSU2_TR(0x60532d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605330:{NFSU2_TR(0x605330);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605333:{NFSU2_TR(0x605333);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B605335:{NFSU2_TR(0x605335);
if(r1(R+518)){{goto L60537e;}}
}
B605337:L605337:{c.instructions+=1;NFSU2_TR(0x605337);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605338:L605338:{c.instructions+=3;NFSU2_TR(0x605338);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60533a:{NFSU2_TR(0x60533a);
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
B60533c:{NFSU2_TR(0x60533c);
if(r1(R+518)){{goto L605343;}}
}
B60533e:L60533e:{c.instructions+=2;NFSU2_TR(0x60533e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B605341:{NFSU2_TR(0x605341);
{goto L605345;}
}
B605343:L605343:{c.instructions+=1;NFSU2_TR(0x605343);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B605345:L605345:{c.instructions+=3;NFSU2_TR(0x605345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B605347:{NFSU2_TR(0x605347);
__builtin_memmove((R+4),(R+24),4);
}
B605349:{NFSU2_TR(0x605349);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60534cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B60534c:L60534c:{c.instructions+=2;NFSU2_TR(0x60534c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60534f:{NFSU2_TR(0x60534f);
if(r1(R+518)){{goto L60535c;}}
}
B605351:L605351:{c.instructions+=4;NFSU2_TR(0x605351);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605354:{NFSU2_TR(0x605354);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605357:{NFSU2_TR(0x605357);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B605359:{NFSU2_TR(0x605359);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60535c:L60535c:{c.instructions+=3;NFSU2_TR(0x60535c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60535f:{NFSU2_TR(0x60535f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605362:{NFSU2_TR(0x605362);
if(r1(R+518)){{goto L605379;}}
}
B605364:L605364:{c.instructions+=2;NFSU2_TR(0x605364);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B605367:{NFSU2_TR(0x605367);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60536cull));
TAIL_STATIC(0x602130u,602);
}
B60536c:L60536c:{c.instructions+=5;NFSU2_TR(0x60536c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60536f:{NFSU2_TR(0x60536f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B605371:{NFSU2_TR(0x605371);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605374:{NFSU2_TR(0x605374);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605377:{NFSU2_TR(0x605377);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B605379:L605379:{c.instructions+=2;NFSU2_TR(0x605379);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B60537b:{NFSU2_TR(0x60537b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x605338u);}goto L605338;}}
}
B60537d:L60537d:{c.instructions+=1;NFSU2_TR(0x60537d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60537e:L60537e:{c.instructions+=3;NFSU2_TR(0x60537e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60537f:{NFSU2_TR(0x60537f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B605380:{NFSU2_TR(0x605380);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B605390:L605390:{c.instructions+=4;NFSU2_TR(0x605390);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605391:{NFSU2_TR(0x605391);
__builtin_memmove((R+24),(R+4),4);
}
B605393:{NFSU2_TR(0x605393);
u8 U[4];
w4(U+0,u32(0x7a6398ull));
s4(u32(r4(R+24)),r4(U+0));
}
B605399:{NFSU2_TR(0x605399);
u8 U[4];
__builtin_memmove((U+0),gp(0x7a63a0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60539full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B60539f:L60539f:{c.instructions+=3;NFSU2_TR(0x60539f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6053a2:{NFSU2_TR(0x6053a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6053a4:{NFSU2_TR(0x6053a4);
if(r1(R+518)){{goto L6053b1;}}
}
B6053a6:L6053a6:{c.instructions+=4;NFSU2_TR(0x6053a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6053a9:{NFSU2_TR(0x6053a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6053ac:{NFSU2_TR(0x6053ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6053ae:{NFSU2_TR(0x6053ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6053b1:L6053b1:{c.instructions+=4;NFSU2_TR(0x6053b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6053b4:{NFSU2_TR(0x6053b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6053b6:{NFSU2_TR(0x6053b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6053bd:{NFSU2_TR(0x6053bd);
if(r1(R+518)){{goto L6053d6;}}
}
B6053bf:L6053bf:{c.instructions+=3;NFSU2_TR(0x6053bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6053c0:{NFSU2_TR(0x6053c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6053c3:{NFSU2_TR(0x6053c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6053c8ull));
TAIL_STATIC(0x602130u,602);
}
B6053c8:L6053c8:{c.instructions+=6;NFSU2_TR(0x6053c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6053cb:{NFSU2_TR(0x6053cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6053cd:{NFSU2_TR(0x6053cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6053d0:{NFSU2_TR(0x6053d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6053d3:{NFSU2_TR(0x6053d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6053d5:{NFSU2_TR(0x6053d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6053d6:L6053d6:{c.instructions+=2;NFSU2_TR(0x6053d6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6053d9:{NFSU2_TR(0x6053d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6053deull));
TAIL_STATIC(0x602130u,602);
}
B6053de:L6053de:{c.instructions+=3;NFSU2_TR(0x6053de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6053df:{NFSU2_TR(0x6053df);
__builtin_memmove((R+4),(R+0),4);
}
B6053e1:{NFSU2_TR(0x6053e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6053e6ull));
TAIL_STATIC(0x43be80u,43b);
}
B6053e6:L6053e6:{c.instructions+=2;NFSU2_TR(0x6053e6);
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
B6053e8:{NFSU2_TR(0x6053e8);
if(r1(R+518)){{goto L6053f9;}}
}
B6053ea:L6053ea:{c.instructions+=1;NFSU2_TR(0x6053ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6053efull));
TAIL_STATIC(0x602130u,602);
}
B6053ef:L6053ef:{c.instructions+=4;NFSU2_TR(0x6053ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6053f1:{NFSU2_TR(0x6053f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6053f4:{NFSU2_TR(0x6053f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6053f6:{NFSU2_TR(0x6053f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6053f9:L6053f9:{c.instructions+=2;NFSU2_TR(0x6053f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6053fa:{NFSU2_TR(0x6053fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B605400:L605400:{c.instructions+=2;NFSU2_TR(0x605400);
u8 U[4];
w4(U+0,u32(0x7a6520ull));
s4(u32(r4(R+4)),r4(U+0));
}
B605406:{NFSU2_TR(0x605406);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x605390u);}goto L605390;}
}
B605410:L605410:{c.instructions+=13;NFSU2_TR(0x605410);
__builtin_memmove((R+0),(R+4),4);
}
B605412:{NFSU2_TR(0x605412);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B605414:{NFSU2_TR(0x605414);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B605416:{NFSU2_TR(0x605416);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605419:{NFSU2_TR(0x605419);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60541c:{NFSU2_TR(0x60541c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60541f:{NFSU2_TR(0x60541f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B605422:{NFSU2_TR(0x605422);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B605424:{NFSU2_TR(0x605424);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605427:{NFSU2_TR(0x605427);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60542a:{NFSU2_TR(0x60542a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60542c:{NFSU2_TR(0x60542c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60542f:{NFSU2_TR(0x60542f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B605430:L605430:{c.instructions+=12;NFSU2_TR(0x605430);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605432:{NFSU2_TR(0x605432);
u8 U[4];
w4(U+0,u32(0x779fb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605437:{NFSU2_TR(0x605437);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60543d:{NFSU2_TR(0x60543d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60543e:{NFSU2_TR(0x60543e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605445:{NFSU2_TR(0x605445);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605446:{NFSU2_TR(0x605446);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605447:{NFSU2_TR(0x605447);
__builtin_memmove((R+24),(R+4),4);
}
B605449:{NFSU2_TR(0x605449);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60544a:{NFSU2_TR(0x60544a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60544e:{NFSU2_TR(0x60544e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B605456:{NFSU2_TR(0x605456);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60545bull));
TAIL_STATIC(0x602220u,602);
}
B60545b:L60545b:{c.instructions+=3;NFSU2_TR(0x60545b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60545e:{NFSU2_TR(0x60545e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60545f:{NFSU2_TR(0x60545f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605464ull));
TAIL_STATIC(0x494610u,494);
}
B605464:L605464:{c.instructions+=6;NFSU2_TR(0x605464);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605467:{NFSU2_TR(0x605467);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x28ull))));
}
B60546a:{NFSU2_TR(0x60546a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60546d:{NFSU2_TR(0x60546d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60546f:{NFSU2_TR(0x60546f);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B605474:{NFSU2_TR(0x605474);
if(r1(R+518)){{goto L60548f;}}
}
B605476:L605476:{c.instructions+=6;NFSU2_TR(0x605476);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B605478:{NFSU2_TR(0x605478);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60547b:{NFSU2_TR(0x60547b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B60547d:{NFSU2_TR(0x60547d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60547e:{NFSU2_TR(0x60547e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605481:{NFSU2_TR(0x605481);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605486ull));
TAIL_STATIC(0x440ef0u,440);
}
B605486:L605486:{c.instructions+=4;NFSU2_TR(0x605486);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B605488:{NFSU2_TR(0x605488);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60548b:{NFSU2_TR(0x60548b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60548d:{NFSU2_TR(0x60548d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x605476u);}goto L605476;}}
}
B60548f:L60548f:{c.instructions+=3;NFSU2_TR(0x60548f);
__builtin_memmove((R+4),(R+28),4);
}
B605491:{NFSU2_TR(0x605491);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B605499:{NFSU2_TR(0x605499);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60549eull));
TAIL_STATIC(0x4367c0u,436);
}
B60549e:L60549e:{c.instructions+=6;NFSU2_TR(0x60549e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6054a2:{NFSU2_TR(0x6054a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6054a3:{NFSU2_TR(0x6054a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6054a4:{NFSU2_TR(0x6054a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6054ab:{NFSU2_TR(0x6054ab);
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
B6054ae:{NFSU2_TR(0x6054ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6054b0:L6054b0:{c.instructions+=17;NFSU2_TR(0x6054b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6054b1:{NFSU2_TR(0x6054b1);
__builtin_memmove((R+20),(R+16),4);
}
B6054b3:{NFSU2_TR(0x6054b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B6054b6:{NFSU2_TR(0x6054b6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6054b8:{NFSU2_TR(0x6054b8);
u8 U[4];
w4(U+0,u32(0x779fcbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6054bd:{NFSU2_TR(0x6054bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6054c3:{NFSU2_TR(0x6054c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6054c4:{NFSU2_TR(0x6054c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6054cb:{NFSU2_TR(0x6054cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x388ull))));
}
B6054d1:{NFSU2_TR(0x6054d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6054d2:{NFSU2_TR(0x6054d2);
__builtin_memmove((R+12),(R+4),4);
}
B6054d4:{NFSU2_TR(0x6054d4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6054d7:{NFSU2_TR(0x6054d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6054d8:{NFSU2_TR(0x6054d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6054db:{NFSU2_TR(0x6054db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6054dc:{NFSU2_TR(0x6054dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6054e0:{NFSU2_TR(0x6054e0);
if(r1(R+518)){{goto L605508;}}
}
B6054e2:L6054e2:{c.instructions+=5;NFSU2_TR(0x6054e2);
u8 U[4];
w4(U+0,u32(0x3a83126full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6054e7:{NFSU2_TR(0x6054e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6054ea:{NFSU2_TR(0x6054ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6054eb:{NFSU2_TR(0x6054eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6054ec:{NFSU2_TR(0x6054ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6054f1ull));
TAIL_STATIC(0x43d190u,43d);
}
B6054f1:L6054f1:{c.instructions+=3;NFSU2_TR(0x6054f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6054f4:{NFSU2_TR(0x6054f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6054f6:{NFSU2_TR(0x6054f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6054ff;}}
}
B6054f8:L6054f8:{c.instructions+=2;NFSU2_TR(0x6054f8);
__builtin_memmove((R+4),(R+12),4);
}
B6054fa:{NFSU2_TR(0x6054fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6054ffull));
TAIL_STATIC(0x602220u,602);
}
B6054ff:L6054ff:{c.instructions+=2;NFSU2_TR(0x6054ff);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
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
B605502:{NFSU2_TR(0x605502);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60565c;}}
}
B605508:L605508:{c.instructions+=4;NFSU2_TR(0x605508);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60550b:{NFSU2_TR(0x60550b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60550e:{NFSU2_TR(0x60550e);
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
B605510:{NFSU2_TR(0x605510);
if(r1(R+518)){{goto L605643;}}
}
B605516:L605516:{c.instructions+=15;NFSU2_TR(0x605516);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B605518:{NFSU2_TR(0x605518);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60551b:{NFSU2_TR(0x60551b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60551e:{NFSU2_TR(0x60551e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605522:{NFSU2_TR(0x605522);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B605524:{NFSU2_TR(0x605524);
__builtin_memmove((R+8),(R+4),4);
}
B605526:{NFSU2_TR(0x605526);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60552a:{NFSU2_TR(0x60552a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60552e:{NFSU2_TR(0x60552e);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B605533:{NFSU2_TR(0x605533);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B605537:{NFSU2_TR(0x605537);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60553b:{NFSU2_TR(0x60553b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B605541:{NFSU2_TR(0x605541);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B605543:{NFSU2_TR(0x605543);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B605546:{NFSU2_TR(0x605546);
if(r1(R+514)){{goto L6055af;}}
}
B605548:L605548:{c.instructions+=2;NFSU2_TR(0x605548);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60554c:{NFSU2_TR(0x60554c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605551ull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B605551:L605551:{c.instructions+=9;NFSU2_TR(0x605551);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B605555:{NFSU2_TR(0x605555);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605556:{NFSU2_TR(0x605556);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605558:{NFSU2_TR(0x605558);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60555a:{NFSU2_TR(0x60555a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60555e:{NFSU2_TR(0x60555e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60555f:{NFSU2_TR(0x60555f);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B605566:{NFSU2_TR(0x605566);
u8 U[8];
w4(U+0,u32(u32(u32(0x3acull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B605571:{NFSU2_TR(0x605571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605576ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B605576:L605576:{c.instructions+=4;NFSU2_TR(0x605576);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60557a:{NFSU2_TR(0x60557a);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60557e:{NFSU2_TR(0x60557e);
u8 U[8];
w4(U+0,u32(u32(u32(0x39cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B605589:{NFSU2_TR(0x605589);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60558eull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B60558e:L60558e:{c.instructions+=3;NFSU2_TR(0x60558e);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B605592:{NFSU2_TR(0x605592);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B605594:{NFSU2_TR(0x605594);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6055af;}}
}
B605596:L605596:{c.instructions+=9;NFSU2_TR(0x605596);
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
B605598:{NFSU2_TR(0x605598);
u8 U[8];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60559f:{NFSU2_TR(0x60559f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6055a6:{NFSU2_TR(0x6055a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6055a7:{NFSU2_TR(0x6055a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6055a8:{NFSU2_TR(0x6055a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6055a9:{NFSU2_TR(0x6055a9);
__builtin_memmove((R+16),(R+20),4);
}
B6055ab:{NFSU2_TR(0x6055ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6055ac:{NFSU2_TR(0x6055ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6055af:L6055af:{c.instructions+=3;NFSU2_TR(0x6055af);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6055b3:{NFSU2_TR(0x6055b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6055b4:{NFSU2_TR(0x6055b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6055b9ull));
TAIL_STATIC(0x43c780u,43c);
}
B6055b9:L6055b9:{c.instructions+=12;NFSU2_TR(0x6055b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6055bd:{NFSU2_TR(0x6055bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6055bf:{NFSU2_TR(0x6055bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6055c3:{NFSU2_TR(0x6055c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6055c7:{NFSU2_TR(0x6055c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6055cb:{NFSU2_TR(0x6055cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6055ce:{NFSU2_TR(0x6055ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6055d1:{NFSU2_TR(0x6055d1);
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
B6055d3:{NFSU2_TR(0x6055d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6055d7:{NFSU2_TR(0x6055d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6055db:{NFSU2_TR(0x6055db);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6055e3:{NFSU2_TR(0x6055e3);
if(r1(R+518)){{goto L605643;}}
}
B6055e5:L6055e5:{c.instructions+=1;NFSU2_TR(0x6055e5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x28ull))));
}
B6055e8:L6055e8:{c.instructions+=2;NFSU2_TR(0x6055e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6055e9:{NFSU2_TR(0x6055e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6055eeull));
TAIL_STATIC(0x48b830u,48b);
}
B6055ee:L6055ee:{c.instructions+=7;NFSU2_TR(0x6055ee);
__builtin_memmove((R+24),(R+0),4);
}
B6055f0:{NFSU2_TR(0x6055f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6055f4:{NFSU2_TR(0x6055f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6055f5:{NFSU2_TR(0x6055f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6055f8:{NFSU2_TR(0x6055f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6055f9:{NFSU2_TR(0x6055f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B605600:{NFSU2_TR(0x605600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605605ull));
TAIL_STATIC(0x4012b0u,401);
}
B605605:L605605:{c.instructions+=4;NFSU2_TR(0x605605);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B605608:{NFSU2_TR(0x605608);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605609:{NFSU2_TR(0x605609);
w4(R+4,u32(0x8357e0ull));
}
B60560e:{NFSU2_TR(0x60560e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605613ull));
TAIL_STATIC(0x48bc50u,48b);
}
B605613:L605613:{c.instructions+=1;NFSU2_TR(0x605613);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605618ull));
TAIL_STATIC(0x440ec0u,440);
}
B605618:L605618:{c.instructions+=2;NFSU2_TR(0x605618);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60561a:{NFSU2_TR(0x60561a);
if(r1(R+518)){{goto L605621;}}
}
B60561c:L60561c:{c.instructions+=2;NFSU2_TR(0x60561c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60561f:{NFSU2_TR(0x60561f);
{goto L605623;}
}
B605621:L605621:{c.instructions+=1;NFSU2_TR(0x605621);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B605623:L605623:{c.instructions+=10;NFSU2_TR(0x605623);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B605625:{NFSU2_TR(0x605625);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B605627:{NFSU2_TR(0x605627);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60562a:{NFSU2_TR(0x60562a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60562d:{NFSU2_TR(0x60562d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B60562f:{NFSU2_TR(0x60562f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605633:{NFSU2_TR(0x605633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B605635:{NFSU2_TR(0x605635);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B605638:{NFSU2_TR(0x605638);
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
B60563a:{NFSU2_TR(0x60563a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6055e8u);}goto L6055e8;}}
}
B60563c:L60563c:{c.instructions+=2;NFSU2_TR(0x60563c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B605640:{NFSU2_TR(0x605640);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B605643:L605643:{c.instructions+=8;NFSU2_TR(0x605643);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B605646:{NFSU2_TR(0x605646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B605648:{NFSU2_TR(0x605648);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60564b:{NFSU2_TR(0x60564b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60564e:{NFSU2_TR(0x60564e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B605650:{NFSU2_TR(0x605650);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B605653:{NFSU2_TR(0x605653);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B605656:{NFSU2_TR(0x605656);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+12)),r4(U+0));
}
B60565c:L60565c:{c.instructions+=9;NFSU2_TR(0x60565c);
u8 U[8];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605663:{NFSU2_TR(0x605663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B605664:{NFSU2_TR(0x605664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B605665:{NFSU2_TR(0x605665);
w4(R+0,u32(0x1ull));
}
B60566a:{NFSU2_TR(0x60566a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605671:{NFSU2_TR(0x605671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B605672:{NFSU2_TR(0x605672);
__builtin_memmove((R+16),(R+20),4);
}
B605674:{NFSU2_TR(0x605674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B605675:{NFSU2_TR(0x605675);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B605680:L605680:{c.instructions+=11;NFSU2_TR(0x605680);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605682:{NFSU2_TR(0x605682);
u8 U[4];
w4(U+0,u32(0x779ff4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605687:{NFSU2_TR(0x605687);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60568d:{NFSU2_TR(0x60568d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60568e:{NFSU2_TR(0x60568e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605695:{NFSU2_TR(0x605695);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605696:{NFSU2_TR(0x605696);
__builtin_memmove((R+0),gp(0x890130),4);
}
B60569b:{NFSU2_TR(0x60569b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60569c:{NFSU2_TR(0x60569c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B60569e:{NFSU2_TR(0x60569e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6056a0:{NFSU2_TR(0x6056a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60571f;}}
}
B6056a2:L6056a2:{c.instructions+=4;NFSU2_TR(0x6056a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6056a3:{NFSU2_TR(0x6056a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6056a4:{NFSU2_TR(0x6056a4);
u8 U[4];
w4(U+0,u32(0x250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6056a9:{NFSU2_TR(0x6056a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6056aeull));
TAIL_STATIC(0x575620u,575);
}
B6056ae:L6056ae:{c.instructions+=5;NFSU2_TR(0x6056ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6056b1:{NFSU2_TR(0x6056b1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6056b5:{NFSU2_TR(0x6056b5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6056b7:{NFSU2_TR(0x6056b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6056bb:{NFSU2_TR(0x6056bb);
if(r1(R+518)){{goto L6056dc;}}
}
B6056bd:L6056bd:{c.instructions+=8;NFSU2_TR(0x6056bd);
u8 U[4];
w4(U+0,u32(0x605430ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6056c2:{NFSU2_TR(0x6056c2);
u8 U[4];
w4(U+0,u32(0x605410ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6056c7:{NFSU2_TR(0x6056c7);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6056c9:{NFSU2_TR(0x6056c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6056cc:{NFSU2_TR(0x6056cc);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6056ce:{NFSU2_TR(0x6056ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6056cf:{NFSU2_TR(0x6056cf);
u8 U[4];
w4(U+0,u32(0xcull));
s4(u32(r4(R+0)),r4(U+0));
}
B6056d5:{NFSU2_TR(0x6056d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6056daull));
TAIL_STATIC(0x75c461u,75c);
}
B6056da:L6056da:{c.instructions+=1;NFSU2_TR(0x6056da);
{goto L6056de;}
}
B6056dc:L6056dc:{c.instructions+=1;NFSU2_TR(0x6056dc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6056de:L6056de:{c.instructions+=3;NFSU2_TR(0x6056de);
__builtin_memmove(gp(0x890130),(R+24),4);
}
B6056e4:{NFSU2_TR(0x6056e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6056ec:{NFSU2_TR(0x6056ec);
w4(R+24,u32(0x802308ull));
}
B6056f1:L6056f1:{c.instructions+=5;NFSU2_TR(0x6056f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6056f3:{NFSU2_TR(0x6056f3);
__builtin_memmove((R+4),gp(0x890130),4);
}
B6056f9:{NFSU2_TR(0x6056f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6056fa:{NFSU2_TR(0x6056fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6056fd:{NFSU2_TR(0x6056fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605702ull));
TAIL_STATIC(0x43db50u,43d);
}
B605702:L605702:{c.instructions+=4;NFSU2_TR(0x605702);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605703:{NFSU2_TR(0x605703);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B605706:{NFSU2_TR(0x605706);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605707:{NFSU2_TR(0x605707);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60570cull));
TAIL_STATIC(0x48b8b0u,48b);
}
B60570c:L60570c:{c.instructions+=5;NFSU2_TR(0x60570c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B60570f:{NFSU2_TR(0x60570f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B605712:{NFSU2_TR(0x605712);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B605715:{NFSU2_TR(0x605715);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x802398ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x802398ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60571b:{NFSU2_TR(0x60571b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6056f1u);}goto L6056f1;}}
}
B60571d:L60571d:{c.instructions+=2;NFSU2_TR(0x60571d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60571e:{NFSU2_TR(0x60571e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60571f:L60571f:{c.instructions+=6;NFSU2_TR(0x60571f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605723:{NFSU2_TR(0x605723);
s4(0x8022f8,u32(0x1ull));
}
B60572d:{NFSU2_TR(0x60572d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60572e:{NFSU2_TR(0x60572e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605735:{NFSU2_TR(0x605735);
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
B605738:{NFSU2_TR(0x605738);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B605740:L605740:{c.instructions+=3;NFSU2_TR(0x605740);
__builtin_memmove((R+0),gp(0x890130),4);
}
B605745:{NFSU2_TR(0x605745);
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
B605747:{NFSU2_TR(0x605747);
if(r1(R+518)){{goto L605772;}}
}
B605749:L605749:{c.instructions+=8;NFSU2_TR(0x605749);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60574c:{NFSU2_TR(0x60574c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60574d:{NFSU2_TR(0x60574d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B605750:{NFSU2_TR(0x605750);
u8 U[4];
w4(U+0,u32(0x605430ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605755:{NFSU2_TR(0x605755);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605756:{NFSU2_TR(0x605756);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605758:{NFSU2_TR(0x605758);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605759:{NFSU2_TR(0x605759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60575eull));
TAIL_STATIC(0x75c401u,75c);
}
B60575e:L60575e:{c.instructions+=2;NFSU2_TR(0x60575e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60575f:{NFSU2_TR(0x60575f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605764ull));
TAIL_STATIC(0x575630u,575);
}
B605764:L605764:{c.instructions+=3;NFSU2_TR(0x605764);
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
B605767:{NFSU2_TR(0x605767);
s4(0x890130,u32(0x0ull));
}
B605771:{NFSU2_TR(0x605771);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B605772:L605772:{c.instructions+=1;NFSU2_TR(0x605772);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B605780:L605780:{c.instructions+=10;NFSU2_TR(0x605780);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605781:{NFSU2_TR(0x605781);
__builtin_memmove((R+20),(R+16),4);
}
B605783:{NFSU2_TR(0x605783);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B605786:{NFSU2_TR(0x605786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B605789:{NFSU2_TR(0x605789);
__builtin_memmove((R+0),gp(0x890130),4);
}
B60578e:{NFSU2_TR(0x60578e);
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
B605790:{NFSU2_TR(0x605790);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605791:{NFSU2_TR(0x605791);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605792:{NFSU2_TR(0x605792);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605793:{NFSU2_TR(0x605793);
if(r1(R+518)){{goto L605c48;}}
}
B605799:L605799:{c.instructions+=3;NFSU2_TR(0x605799);
__builtin_memmove((R+0),gp(0x8022f8),4);
}
B60579e:{NFSU2_TR(0x60579e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6057a0:{NFSU2_TR(0x6057a0);
if(r1(R+518)){{goto L605c27;}}
}
B6057a6:L6057a6:{c.instructions+=3;NFSU2_TR(0x6057a6);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B6057ab:{NFSU2_TR(0x6057ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6057ad:{NFSU2_TR(0x6057ad);
if(r1(R+518)){{goto L6057c5;}}
}
B6057af:L6057af:{c.instructions+=2;NFSU2_TR(0x6057af);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6057b2:{NFSU2_TR(0x6057b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L605c27;}}
}
B6057b8:L6057b8:{c.instructions+=3;NFSU2_TR(0x6057b8);
__builtin_memmove((R+0),gp(0x89e7bc),4);
}
B6057bd:{NFSU2_TR(0x6057bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6057bf:{NFSU2_TR(0x6057bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L605c27;}}
}
B6057c5:L6057c5:{c.instructions+=3;NFSU2_TR(0x6057c5);
__builtin_memmove((R+0),gp(0x890080),4);
}
B6057ca:{NFSU2_TR(0x6057ca);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6057ce:{NFSU2_TR(0x6057ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L605c27;}}
}
B6057d4:L6057d4:{c.instructions+=3;NFSU2_TR(0x6057d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6057d7:{NFSU2_TR(0x6057d7);
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
B6057d9:{NFSU2_TR(0x6057d9);
if(r1(R+518)){{goto L605c48;}}
}
B6057df:L6057df:{c.instructions+=4;NFSU2_TR(0x6057df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6057e2:{NFSU2_TR(0x6057e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6057e6:{NFSU2_TR(0x6057e6);
w4(R+0,u32(0x890020ull));
}
B6057eb:{NFSU2_TR(0x6057eb);
{goto L6057f0;}
}
B6057f0:L6057f0:{c.instructions+=4;NFSU2_TR(0x6057f0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6057f6:{NFSU2_TR(0x6057f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6057f9:{NFSU2_TR(0x6057f9);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x890080ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x890080ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6057fe:{NFSU2_TR(0x6057fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6057f0u);}goto L6057f0;}}
}
B605800:L605800:{c.instructions+=3;NFSU2_TR(0x605800);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605802:{NFSU2_TR(0x605802);
w4(R+4,u32(0x85ad40ull));
}
B605807:{NFSU2_TR(0x605807);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60580cull));
TAIL_STATIC(0x500ee0u,500);
}
B60580c:L60580c:{c.instructions+=3;NFSU2_TR(0x60580c);
__builtin_memmove((R+28),(R+0),4);
}
B60580e:{NFSU2_TR(0x60580e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605810:{NFSU2_TR(0x605810);
if(r1(R+518)){{goto L605866;}}
}
B605812:L605812:{c.instructions+=3;NFSU2_TR(0x605812);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B605814:{NFSU2_TR(0x605814);
w4(R+24,u32(0x802304ull));
}
B605819:{NFSU2_TR(0x605819);
__builtin_memmove((R+16),(R+16),4);
}
B605820:L605820:{c.instructions+=3;NFSU2_TR(0x605820);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605823:{NFSU2_TR(0x605823);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605825:{NFSU2_TR(0x605825);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L605832;}}
}
B605827:L605827:{c.instructions+=2;NFSU2_TR(0x605827);
__builtin_memmove((R+4),(R+28),4);
}
B605829:{NFSU2_TR(0x605829);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60582eull));
TAIL_STATIC(0x500de0u,500);
}
B60582e:L60582e:{c.instructions+=2;NFSU2_TR(0x60582e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B605830:{NFSU2_TR(0x605830);
if(r1(R+518)){{goto L605840;}}
}
B605832:L605832:{c.instructions+=4;NFSU2_TR(0x605832);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B605835:{NFSU2_TR(0x605835);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B605836:{NFSU2_TR(0x605836);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x802394ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x802394ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60583c:{NFSU2_TR(0x60583c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x605820u);}goto L605820;}}
}
B60583e:L60583e:{c.instructions+=1;NFSU2_TR(0x60583e);
{goto L605851;}
}
B605840:L605840:{c.instructions+=6;NFSU2_TR(0x605840);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605844:{NFSU2_TR(0x605844);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B605846:{NFSU2_TR(0x605846);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605847:{NFSU2_TR(0x605847);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605848:{NFSU2_TR(0x605848);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605849:{NFSU2_TR(0x605849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60584eull));
TAIL_STATIC(0x5f0c90u,5f0);
}
B60584e:L60584e:{c.instructions+=1;NFSU2_TR(0x60584e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B605851:L605851:{c.instructions+=3;NFSU2_TR(0x605851);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605852:{NFSU2_TR(0x605852);
w4(R+4,u32(0x85ad40ull));
}
B605857:{NFSU2_TR(0x605857);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60585cull));
TAIL_STATIC(0x500ee0u,500);
}
B60585c:L60585c:{c.instructions+=3;NFSU2_TR(0x60585c);
__builtin_memmove((R+28),(R+0),4);
}
B60585e:{NFSU2_TR(0x60585e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605860:{NFSU2_TR(0x605860);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x605812u);}goto L605812;}}
}
B605862:L605862:{c.instructions+=1;NFSU2_TR(0x605862);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B605866:L605866:{c.instructions+=3;NFSU2_TR(0x605866);
w4(R+0,u32(0x802300ull));
}
B60586b:{NFSU2_TR(0x60586b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B60586d:{NFSU2_TR(0x60586d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605871:L605871:{c.instructions+=2;NFSU2_TR(0x605871);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B605874:{NFSU2_TR(0x605874);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6058a0;}}
}
B605876:L605876:{c.instructions+=2;NFSU2_TR(0x605876);
w4(R+28,u32(0x600ull));
}
B60587b:{NFSU2_TR(0x60587b);
{goto L605880;}
}
B605880:L605880:{c.instructions+=3;NFSU2_TR(0x605880);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x85ad40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605886:{NFSU2_TR(0x605886);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605888:{NFSU2_TR(0x605888);
if(r1(R+518)){{goto L6058a0;}}
}
B60588a:L60588a:{c.instructions+=4;NFSU2_TR(0x60588a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60588b:{NFSU2_TR(0x60588b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60588c:{NFSU2_TR(0x60588c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60588d:{NFSU2_TR(0x60588d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605892ull));
TAIL_STATIC(0x5f0c90u,5f0);
}
B605892:L605892:{c.instructions+=4;NFSU2_TR(0x605892);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B605895:{NFSU2_TR(0x605895);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B605898:{NFSU2_TR(0x605898);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x800ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x800ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60589e:{NFSU2_TR(0x60589e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x605880u);}goto L605880;}}
}
B6058a0:L6058a0:{c.instructions+=3;NFSU2_TR(0x6058a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6058a4:{NFSU2_TR(0x6058a4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6058a7:{NFSU2_TR(0x6058a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L605bb5;}}
}
B6058ad:L6058ad:{c.instructions+=1;NFSU2_TR(0x6058ad);
w4(R+8,u32(0x804ull));
}
B6058b2:L6058b2:{c.instructions+=3;NFSU2_TR(0x6058b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x85ad3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6058b8:{NFSU2_TR(0x6058b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6058ba:{NFSU2_TR(0x6058ba);
if(r1(R+518)){{goto L605bb5;}}
}
B6058c0:L6058c0:{c.instructions+=18;NFSU2_TR(0x6058c0);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6058c3:{NFSU2_TR(0x6058c3);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6058c5:{NFSU2_TR(0x6058c5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6058c8:{NFSU2_TR(0x6058c8);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6058cb:{NFSU2_TR(0x6058cb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6058cd:{NFSU2_TR(0x6058cd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6058cf:{NFSU2_TR(0x6058cf);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B6058d1:{NFSU2_TR(0x6058d1);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B6058d3:{NFSU2_TR(0x6058d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6058d5:{NFSU2_TR(0x6058d5);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B6058d7:{NFSU2_TR(0x6058d7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6058d9:{NFSU2_TR(0x6058d9);
{u32 ea_=u32(u32(8017716u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6058df:{NFSU2_TR(0x6058df);
{u32 ea_=u32(u32(8017716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6058e5:{NFSU2_TR(0x6058e5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6058e9:{NFSU2_TR(0x6058e9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6058ed:{NFSU2_TR(0x6058ed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6058ef:{NFSU2_TR(0x6058ef);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6058f2:{NFSU2_TR(0x6058f2);
if(r1(R+514)){{goto L60591d;}}
}
B6058f4:L6058f4:{c.instructions+=3;NFSU2_TR(0x6058f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x890020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6058fb:{NFSU2_TR(0x6058fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6058fd:{NFSU2_TR(0x6058fd);
if(r1(R+518)){{goto L60590d;}}
}
B6058ff:L6058ff:{c.instructions+=4;NFSU2_TR(0x6058ff);
{u32 ea_=u32((r4(R+24)*8u)+u32(8978468u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B605906:{NFSU2_TR(0x605906);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B605908:{NFSU2_TR(0x605908);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60590b:{NFSU2_TR(0x60590b);
if(r1(R+514)){{goto L60591d;}}
}
B60590d:L60590d:{c.instructions+=3;NFSU2_TR(0x60590d);
{u32 ea_=u32((r4(R+24)*8u)+u32(8978468u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B605914:{NFSU2_TR(0x605914);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x890020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B60591b:{NFSU2_TR(0x60591b);
{goto L60591f;}
}
B60591d:L60591d:{c.instructions+=1;NFSU2_TR(0x60591d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60591f:L60591f:{c.instructions+=3;NFSU2_TR(0x60591f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x85ad40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605925:{NFSU2_TR(0x605925);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605927:{NFSU2_TR(0x605927);
if(r1(R+518)){{goto L605bb5;}}
}
B60592d:L60592d:{c.instructions+=15;NFSU2_TR(0x60592d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B605930:{NFSU2_TR(0x605930);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B605932:{NFSU2_TR(0x605932);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B605935:{NFSU2_TR(0x605935);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B605938:{NFSU2_TR(0x605938);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B60593a:{NFSU2_TR(0x60593a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B60593c:{NFSU2_TR(0x60593c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B60593e:{NFSU2_TR(0x60593e);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B605940:{NFSU2_TR(0x605940);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B605942:{NFSU2_TR(0x605942);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B605944:{NFSU2_TR(0x605944);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B605946:{NFSU2_TR(0x605946);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B60594a:{NFSU2_TR(0x60594a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60594c:{NFSU2_TR(0x60594c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60594f:{NFSU2_TR(0x60594f);
if(r1(R+514)){{goto L60597a;}}
}
B605951:L605951:{c.instructions+=3;NFSU2_TR(0x605951);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x890020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B605958:{NFSU2_TR(0x605958);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60595a:{NFSU2_TR(0x60595a);
if(r1(R+518)){{goto L60596a;}}
}
B60595c:L60595c:{c.instructions+=4;NFSU2_TR(0x60595c);
{u32 ea_=u32((r4(R+24)*8u)+u32(8978468u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B605963:{NFSU2_TR(0x605963);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B605965:{NFSU2_TR(0x605965);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B605968:{NFSU2_TR(0x605968);
if(r1(R+514)){{goto L60597a;}}
}
B60596a:L60596a:{c.instructions+=3;NFSU2_TR(0x60596a);
{u32 ea_=u32((r4(R+24)*8u)+u32(8978468u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B605971:{NFSU2_TR(0x605971);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x890020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B605978:{NFSU2_TR(0x605978);
{goto L60597c;}
}
B60597a:L60597a:{c.instructions+=1;NFSU2_TR(0x60597a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60597c:L60597c:{c.instructions+=3;NFSU2_TR(0x60597c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x85ad44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605982:{NFSU2_TR(0x605982);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605984:{NFSU2_TR(0x605984);
if(r1(R+518)){{goto L605bb5;}}
}
B60598a:L60598a:{c.instructions+=15;NFSU2_TR(0x60598a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60598d:{NFSU2_TR(0x60598d);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60598f:{NFSU2_TR(0x60598f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B605992:{NFSU2_TR(0x605992);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B605995:{NFSU2_TR(0x605995);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B605997:{NFSU2_TR(0x605997);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B605999:{NFSU2_TR(0x605999);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B60599b:{NFSU2_TR(0x60599b);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B60599d:{NFSU2_TR(0x60599d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60599f:{NFSU2_TR(0x60599f);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B6059a1:{NFSU2_TR(0x6059a1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6059a3:{NFSU2_TR(0x6059a3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6059a7:{NFSU2_TR(0x6059a7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6059a9:{NFSU2_TR(0x6059a9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6059ac:{NFSU2_TR(0x6059ac);
if(r1(R+514)){{goto L6059d7;}}
}
B6059ae:L6059ae:{c.instructions+=3;NFSU2_TR(0x6059ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x890020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6059b5:{NFSU2_TR(0x6059b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6059b7:{NFSU2_TR(0x6059b7);
if(r1(R+518)){{goto L6059c7;}}
}
B6059b9:L6059b9:{c.instructions+=4;NFSU2_TR(0x6059b9);
{u32 ea_=u32((r4(R+24)*8u)+u32(8978468u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6059c0:{NFSU2_TR(0x6059c0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6059c2:{NFSU2_TR(0x6059c2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6059c5:{NFSU2_TR(0x6059c5);
if(r1(R+514)){{goto L6059d7;}}
}
B6059c7:L6059c7:{c.instructions+=3;NFSU2_TR(0x6059c7);
{u32 ea_=u32((r4(R+24)*8u)+u32(8978468u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6059ce:{NFSU2_TR(0x6059ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x890020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6059d5:{NFSU2_TR(0x6059d5);
{goto L6059d9;}
}
B6059d7:L6059d7:{c.instructions+=1;NFSU2_TR(0x6059d7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6059d9:L6059d9:{c.instructions+=3;NFSU2_TR(0x6059d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x85ad48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6059df:{NFSU2_TR(0x6059df);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6059e1:{NFSU2_TR(0x6059e1);
if(r1(R+518)){{goto L605bb5;}}
}
B6059e7:L6059e7:{c.instructions+=15;NFSU2_TR(0x6059e7);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6059ea:{NFSU2_TR(0x6059ea);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6059ec:{NFSU2_TR(0x6059ec);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6059ef:{NFSU2_TR(0x6059ef);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6059f2:{NFSU2_TR(0x6059f2);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6059f4:{NFSU2_TR(0x6059f4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6059f6:{NFSU2_TR(0x6059f6);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B6059f8:{NFSU2_TR(0x6059f8);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B6059fa:{NFSU2_TR(0x6059fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6059fc:{NFSU2_TR(0x6059fc);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B6059fe:{NFSU2_TR(0x6059fe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B605a00:{NFSU2_TR(0x605a00);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B605a04:{NFSU2_TR(0x605a04);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B605a06:{NFSU2_TR(0x605a06);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B605a09:{NFSU2_TR(0x605a09);
if(r1(R+514)){{goto L605a34;}}
}
B605a0b:L605a0b:{c.instructions+=3;NFSU2_TR(0x605a0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x890020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B605a12:{NFSU2_TR(0x605a12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605a14:{NFSU2_TR(0x605a14);
if(r1(R+518)){{goto L605a24;}}
}
B605a16:L605a16:{c.instructions+=4;NFSU2_TR(0x605a16);
{u32 ea_=u32((r4(R+24)*8u)+u32(8978468u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B605a1d:{NFSU2_TR(0x605a1d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B605a1f:{NFSU2_TR(0x605a1f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B605a22:{NFSU2_TR(0x605a22);
if(r1(R+514)){{goto L605a34;}}
}
B605a24:L605a24:{c.instructions+=3;NFSU2_TR(0x605a24);
{u32 ea_=u32((r4(R+24)*8u)+u32(8978468u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B605a2b:{NFSU2_TR(0x605a2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x890020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B605a32:{NFSU2_TR(0x605a32);
{goto L605a36;}
}
B605a34:L605a34:{c.instructions+=1;NFSU2_TR(0x605a34);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B605a36:L605a36:{c.instructions+=3;NFSU2_TR(0x605a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x85ad4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605a3c:{NFSU2_TR(0x605a3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605a3e:{NFSU2_TR(0x605a3e);
if(r1(R+518)){{goto L605bb5;}}
}
B605a44:L605a44:{c.instructions+=15;NFSU2_TR(0x605a44);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B605a47:{NFSU2_TR(0x605a47);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B605a49:{NFSU2_TR(0x605a49);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B605a4c:{NFSU2_TR(0x605a4c);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B605a4f:{NFSU2_TR(0x605a4f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B605a51:{NFSU2_TR(0x605a51);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B605a53:{NFSU2_TR(0x605a53);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B605a55:{NFSU2_TR(0x605a55);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B605a57:{NFSU2_TR(0x605a57);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B605a59:{NFSU2_TR(0x605a59);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B605a5b:{NFSU2_TR(0x605a5b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B605a5d:{NFSU2_TR(0x605a5d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B605a61:{NFSU2_TR(0x605a61);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B605a63:{NFSU2_TR(0x605a63);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B605a66:{NFSU2_TR(0x605a66);
if(r1(R+514)){{goto L605a91;}}
}
B605a68:L605a68:{c.instructions+=3;NFSU2_TR(0x605a68);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x890020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B605a6f:{NFSU2_TR(0x605a6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605a71:{NFSU2_TR(0x605a71);
if(r1(R+518)){{goto L605a81;}}
}
B605a73:L605a73:{c.instructions+=4;NFSU2_TR(0x605a73);
{u32 ea_=u32((r4(R+24)*8u)+u32(8978468u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B605a7a:{NFSU2_TR(0x605a7a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B605a7c:{NFSU2_TR(0x605a7c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B605a7f:{NFSU2_TR(0x605a7f);
if(r1(R+514)){{goto L605a91;}}
}
B605a81:L605a81:{c.instructions+=3;NFSU2_TR(0x605a81);
{u32 ea_=u32((r4(R+24)*8u)+u32(8978468u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B605a88:{NFSU2_TR(0x605a88);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x890020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B605a8f:{NFSU2_TR(0x605a8f);
{goto L605a93;}
}
B605a91:L605a91:{c.instructions+=1;NFSU2_TR(0x605a91);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B605a93:L605a93:{c.instructions+=3;NFSU2_TR(0x605a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x85ad50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605a99:{NFSU2_TR(0x605a99);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605a9b:{NFSU2_TR(0x605a9b);
if(r1(R+518)){{goto L605bb5;}}
}
B605aa1:L605aa1:{c.instructions+=15;NFSU2_TR(0x605aa1);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B605aa4:{NFSU2_TR(0x605aa4);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B605aa6:{NFSU2_TR(0x605aa6);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B605aa9:{NFSU2_TR(0x605aa9);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B605aac:{NFSU2_TR(0x605aac);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B605aae:{NFSU2_TR(0x605aae);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B605ab0:{NFSU2_TR(0x605ab0);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B605ab2:{NFSU2_TR(0x605ab2);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B605ab4:{NFSU2_TR(0x605ab4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B605ab6:{NFSU2_TR(0x605ab6);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B605ab8:{NFSU2_TR(0x605ab8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B605aba:{NFSU2_TR(0x605aba);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B605abe:{NFSU2_TR(0x605abe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B605ac0:{NFSU2_TR(0x605ac0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B605ac3:{NFSU2_TR(0x605ac3);
if(r1(R+514)){{goto L605aee;}}
}
B605ac5:L605ac5:{c.instructions+=3;NFSU2_TR(0x605ac5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x890020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B605acc:{NFSU2_TR(0x605acc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605ace:{NFSU2_TR(0x605ace);
if(r1(R+518)){{goto L605ade;}}
}
B605ad0:L605ad0:{c.instructions+=4;NFSU2_TR(0x605ad0);
{u32 ea_=u32((r4(R+24)*8u)+u32(8978468u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B605ad7:{NFSU2_TR(0x605ad7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B605ad9:{NFSU2_TR(0x605ad9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B605adc:{NFSU2_TR(0x605adc);
if(r1(R+514)){{goto L605aee;}}
}
B605ade:L605ade:{c.instructions+=3;NFSU2_TR(0x605ade);
{u32 ea_=u32((r4(R+24)*8u)+u32(8978468u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B605ae5:{NFSU2_TR(0x605ae5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x890020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B605aec:{NFSU2_TR(0x605aec);
{goto L605af0;}
}
B605aee:L605aee:{c.instructions+=1;NFSU2_TR(0x605aee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B605af0:L605af0:{c.instructions+=3;NFSU2_TR(0x605af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x85ad54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605af6:{NFSU2_TR(0x605af6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605af8:{NFSU2_TR(0x605af8);
if(r1(R+518)){{goto L605bb5;}}
}
B605afe:L605afe:{c.instructions+=15;NFSU2_TR(0x605afe);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B605b01:{NFSU2_TR(0x605b01);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B605b03:{NFSU2_TR(0x605b03);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B605b06:{NFSU2_TR(0x605b06);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B605b09:{NFSU2_TR(0x605b09);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B605b0b:{NFSU2_TR(0x605b0b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B605b0d:{NFSU2_TR(0x605b0d);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B605b0f:{NFSU2_TR(0x605b0f);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B605b11:{NFSU2_TR(0x605b11);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B605b13:{NFSU2_TR(0x605b13);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B605b15:{NFSU2_TR(0x605b15);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B605b17:{NFSU2_TR(0x605b17);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B605b1b:{NFSU2_TR(0x605b1b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B605b1d:{NFSU2_TR(0x605b1d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B605b20:{NFSU2_TR(0x605b20);
if(r1(R+514)){{goto L605b4b;}}
}
B605b22:L605b22:{c.instructions+=3;NFSU2_TR(0x605b22);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x890020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B605b29:{NFSU2_TR(0x605b29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605b2b:{NFSU2_TR(0x605b2b);
if(r1(R+518)){{goto L605b3b;}}
}
B605b2d:L605b2d:{c.instructions+=4;NFSU2_TR(0x605b2d);
{u32 ea_=u32((r4(R+24)*8u)+u32(8978468u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B605b34:{NFSU2_TR(0x605b34);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B605b36:{NFSU2_TR(0x605b36);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B605b39:{NFSU2_TR(0x605b39);
if(r1(R+514)){{goto L605b4b;}}
}
B605b3b:L605b3b:{c.instructions+=3;NFSU2_TR(0x605b3b);
{u32 ea_=u32((r4(R+24)*8u)+u32(8978468u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B605b42:{NFSU2_TR(0x605b42);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x890020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B605b49:{NFSU2_TR(0x605b49);
{goto L605b4d;}
}
B605b4b:L605b4b:{c.instructions+=1;NFSU2_TR(0x605b4b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B605b4d:L605b4d:{c.instructions+=3;NFSU2_TR(0x605b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x85ad58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605b53:{NFSU2_TR(0x605b53);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605b55:{NFSU2_TR(0x605b55);
if(r1(R+518)){{goto L605bb5;}}
}
B605b57:L605b57:{c.instructions+=15;NFSU2_TR(0x605b57);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B605b5a:{NFSU2_TR(0x605b5a);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B605b5c:{NFSU2_TR(0x605b5c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B605b5f:{NFSU2_TR(0x605b5f);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B605b62:{NFSU2_TR(0x605b62);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B605b64:{NFSU2_TR(0x605b64);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B605b66:{NFSU2_TR(0x605b66);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B605b68:{NFSU2_TR(0x605b68);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B605b6a:{NFSU2_TR(0x605b6a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B605b6c:{NFSU2_TR(0x605b6c);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B605b6e:{NFSU2_TR(0x605b6e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B605b70:{NFSU2_TR(0x605b70);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B605b74:{NFSU2_TR(0x605b74);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B605b76:{NFSU2_TR(0x605b76);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B605b79:{NFSU2_TR(0x605b79);
if(r1(R+514)){{goto L605ba4;}}
}
B605b7b:L605b7b:{c.instructions+=3;NFSU2_TR(0x605b7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x890020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B605b82:{NFSU2_TR(0x605b82);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605b84:{NFSU2_TR(0x605b84);
if(r1(R+518)){{goto L605b94;}}
}
B605b86:L605b86:{c.instructions+=4;NFSU2_TR(0x605b86);
{u32 ea_=u32((r4(R+24)*8u)+u32(8978468u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B605b8d:{NFSU2_TR(0x605b8d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B605b8f:{NFSU2_TR(0x605b8f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B605b92:{NFSU2_TR(0x605b92);
if(r1(R+514)){{goto L605ba4;}}
}
B605b94:L605b94:{c.instructions+=3;NFSU2_TR(0x605b94);
{u32 ea_=u32((r4(R+24)*8u)+u32(8978468u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B605b9b:{NFSU2_TR(0x605b9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x890020ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B605ba2:{NFSU2_TR(0x605ba2);
{goto L605ba6;}
}
B605ba4:L605ba4:{c.instructions+=1;NFSU2_TR(0x605ba4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B605ba6:L605ba6:{c.instructions+=3;NFSU2_TR(0x605ba6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B605ba9:{NFSU2_TR(0x605ba9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xc04ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc04ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B605baf:{NFSU2_TR(0x605baf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6058b2u);}goto L6058b2;}}
}
B605bb5:L605bb5:{c.instructions+=6;NFSU2_TR(0x605bb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605bb9:{NFSU2_TR(0x605bb9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B605bbc:{NFSU2_TR(0x605bbc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B605bbd:{NFSU2_TR(0x605bbd);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x802390ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x802390ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B605bc2:{NFSU2_TR(0x605bc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605bc6:{NFSU2_TR(0x605bc6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x605871u);}goto L605871;}}
}
B605bcc:L605bcc:{c.instructions+=2;NFSU2_TR(0x605bcc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B605bce:{NFSU2_TR(0x605bce);
w4(R+24,u32(0x890020ull));
}
B605bd3:L605bd3:{c.instructions+=3;NFSU2_TR(0x605bd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B605bd5:{NFSU2_TR(0x605bd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605bd7:{NFSU2_TR(0x605bd7);
if(r1(R+518)){{goto L605c04;}}
}
B605bd9:L605bd9:{c.instructions+=11;NFSU2_TR(0x605bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605bdc:{NFSU2_TR(0x605bdc);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B605bdf:{NFSU2_TR(0x605bdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605be3:{NFSU2_TR(0x605be3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B605be7:{NFSU2_TR(0x605be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B605bea:{NFSU2_TR(0x605bea);
__builtin_memmove((R+4),gp(0x890130),4);
}
B605bf0:{NFSU2_TR(0x605bf0);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B605bf4:{NFSU2_TR(0x605bf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605bf5:{NFSU2_TR(0x605bf5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B605bf7:{NFSU2_TR(0x605bf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605bfb:{NFSU2_TR(0x605bfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605c00ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6054b0u);}goto L6054b0;}
}
B605c00:L605c00:{c.instructions+=2;NFSU2_TR(0x605c00);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605c02:{NFSU2_TR(0x605c02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L605c12;}}
}
B605c04:L605c04:{c.instructions+=3;NFSU2_TR(0x605c04);
__builtin_memmove((R+8),gp(0x890130),4);
}
B605c0a:{NFSU2_TR(0x605c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B605c0d:{NFSU2_TR(0x605c0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605c12ull));
TAIL_STATIC(0x602220u,602);
}
B605c12:L605c12:{c.instructions+=4;NFSU2_TR(0x605c12);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B605c15:{NFSU2_TR(0x605c15);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B605c18:{NFSU2_TR(0x605c18);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x890080ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x890080ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x890080ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B605c1e:{NFSU2_TR(0x605c1e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x605bd3u);}goto L605bd3;}}
}
B605c20:L605c20:{c.instructions+=6;NFSU2_TR(0x605c20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B605c21:{NFSU2_TR(0x605c21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B605c22:{NFSU2_TR(0x605c22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B605c23:{NFSU2_TR(0x605c23);
__builtin_memmove((R+16),(R+20),4);
}
B605c25:{NFSU2_TR(0x605c25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B605c26:{NFSU2_TR(0x605c26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B605c27:L605c27:{c.instructions+=2;NFSU2_TR(0x605c27);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B605c29:{NFSU2_TR(0x605c29);
__builtin_memmove((R+16),(R+16),4);
}
B605c30:L605c30:{c.instructions+=3;NFSU2_TR(0x605c30);
__builtin_memmove((R+0),gp(0x890130),4);
}
B605c35:{NFSU2_TR(0x605c35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B605c38:{NFSU2_TR(0x605c38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605c3dull));
TAIL_STATIC(0x602220u,602);
}
B605c3d:L605c3d:{c.instructions+=3;NFSU2_TR(0x605c3d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B605c40:{NFSU2_TR(0x605c40);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x240ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x240ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x240ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B605c46:{NFSU2_TR(0x605c46);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x605c30u);}goto L605c30;}}
}
B605c48:L605c48:{c.instructions+=6;NFSU2_TR(0x605c48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B605c49:{NFSU2_TR(0x605c49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B605c4a:{NFSU2_TR(0x605c4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B605c4b:{NFSU2_TR(0x605c4b);
__builtin_memmove((R+16),(R+20),4);
}
B605c4d:{NFSU2_TR(0x605c4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B605c4e:{NFSU2_TR(0x605c4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B605c50:L605c50:{c.instructions+=8;NFSU2_TR(0x605c50);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605c54:{NFSU2_TR(0x605c54);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605c58:{NFSU2_TR(0x605c58);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B605c5c:{NFSU2_TR(0x605c5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605c5d:{NFSU2_TR(0x605c5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605c5e:{NFSU2_TR(0x605c5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605c62:{NFSU2_TR(0x605c62);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605c63:{NFSU2_TR(0x605c63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605c68ull));
TAIL_STATIC(0x602bd0u,602);
}
B605c68:L605c68:{c.instructions+=1;NFSU2_TR(0x605c68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B605c70:L605c70:{c.instructions+=8;NFSU2_TR(0x605c70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605c71:{NFSU2_TR(0x605c71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605c72:{NFSU2_TR(0x605c72);
__builtin_memmove((R+24),(R+4),4);
}
B605c74:{NFSU2_TR(0x605c74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605c7a:{NFSU2_TR(0x605c7a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B605c7d:{NFSU2_TR(0x605c7d);
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
B605c80:{NFSU2_TR(0x605c80);
w4(R+12,u32(0x2ull));
}
B605c85:{NFSU2_TR(0x605c85);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L605fcb;}}
}
B605c8b:L605c8b:{c.instructions+=1;NFSU2_TR(0x605c8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x606350ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B605c92:L605c92:{c.instructions+=4;NFSU2_TR(0x605c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605c95:{NFSU2_TR(0x605c95);
u8 U[4];
w4(U+0,u32(0xbeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605c9a:{NFSU2_TR(0x605c9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605c9b:{NFSU2_TR(0x605c9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605ca0ull));
TAIL_STATIC(0x5794e0u,579);
}
B605ca0:L605ca0:{c.instructions+=3;NFSU2_TR(0x605ca0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605ca3:{NFSU2_TR(0x605ca3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605ca5:{NFSU2_TR(0x605ca5);
if(r1(R+518)){{goto L605cb8;}}
}
B605ca7:L605ca7:{c.instructions+=4;NFSU2_TR(0x605ca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605caa:{NFSU2_TR(0x605caa);
u8 U[4];
w4(U+0,u32(0xbeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605caf:{NFSU2_TR(0x605caf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605cb0:{NFSU2_TR(0x605cb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605cb5ull));
TAIL_STATIC(0x57c330u,57c);
}
B605cb5:L605cb5:{c.instructions+=1;NFSU2_TR(0x605cb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605cb8:L605cb8:{c.instructions+=4;NFSU2_TR(0x605cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B605cbb:{NFSU2_TR(0x605cbb);
u8 U[4];
w4(U+0,u32(0xbdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605cc0:{NFSU2_TR(0x605cc0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605cc1:{NFSU2_TR(0x605cc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605cc6ull));
TAIL_STATIC(0x5794e0u,579);
}
B605cc6:L605cc6:{c.instructions+=3;NFSU2_TR(0x605cc6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605cc9:{NFSU2_TR(0x605cc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605ccb:{NFSU2_TR(0x605ccb);
if(r1(R+518)){{goto L605cde;}}
}
B605ccd:L605ccd:{c.instructions+=4;NFSU2_TR(0x605ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605cd0:{NFSU2_TR(0x605cd0);
u8 U[4];
w4(U+0,u32(0xbdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605cd5:{NFSU2_TR(0x605cd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605cd6:{NFSU2_TR(0x605cd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605cdbull));
TAIL_STATIC(0x57c330u,57c);
}
B605cdb:L605cdb:{c.instructions+=1;NFSU2_TR(0x605cdb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605cde:L605cde:{c.instructions+=4;NFSU2_TR(0x605cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605ce1:{NFSU2_TR(0x605ce1);
u8 U[4];
w4(U+0,u32(0xc2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605ce6:{NFSU2_TR(0x605ce6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605ce7:{NFSU2_TR(0x605ce7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605cecull));
TAIL_STATIC(0x5794e0u,579);
}
B605cec:L605cec:{c.instructions+=3;NFSU2_TR(0x605cec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605cef:{NFSU2_TR(0x605cef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605cf1:{NFSU2_TR(0x605cf1);
if(r1(R+518)){{goto L605fcb;}}
}
B605cf7:L605cf7:{c.instructions+=4;NFSU2_TR(0x605cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B605cfa:{NFSU2_TR(0x605cfa);
u8 U[4];
w4(U+0,u32(0xc2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605cff:{NFSU2_TR(0x605cff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605d00:{NFSU2_TR(0x605d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605d05ull));
TAIL_STATIC(0x57c330u,57c);
}
B605d05:L605d05:{c.instructions+=2;NFSU2_TR(0x605d05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605d08:{NFSU2_TR(0x605d08);
{goto L605fcb;}
}
B605d0d:L605d0d:{c.instructions+=4;NFSU2_TR(0x605d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605d10:{NFSU2_TR(0x605d10);
u8 U[4];
w4(U+0,u32(0xbdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605d15:{NFSU2_TR(0x605d15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605d16:{NFSU2_TR(0x605d16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605d1bull));
TAIL_STATIC(0x5794e0u,579);
}
B605d1b:L605d1b:{c.instructions+=3;NFSU2_TR(0x605d1b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605d1e:{NFSU2_TR(0x605d1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605d20:{NFSU2_TR(0x605d20);
if(r1(R+518)){{goto L605d33;}}
}
B605d22:L605d22:{c.instructions+=4;NFSU2_TR(0x605d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605d25:{NFSU2_TR(0x605d25);
u8 U[4];
w4(U+0,u32(0xbdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605d2a:{NFSU2_TR(0x605d2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605d2b:{NFSU2_TR(0x605d2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605d30ull));
TAIL_STATIC(0x57c330u,57c);
}
B605d30:L605d30:{c.instructions+=1;NFSU2_TR(0x605d30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605d33:L605d33:{c.instructions+=4;NFSU2_TR(0x605d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B605d36:{NFSU2_TR(0x605d36);
u8 U[4];
w4(U+0,u32(0x7dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605d38:{NFSU2_TR(0x605d38);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605d39:{NFSU2_TR(0x605d39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605d3eull));
TAIL_STATIC(0x5794e0u,579);
}
B605d3e:L605d3e:{c.instructions+=3;NFSU2_TR(0x605d3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605d41:{NFSU2_TR(0x605d41);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605d43:{NFSU2_TR(0x605d43);
if(r1(R+518)){{goto L605d53;}}
}
B605d45:L605d45:{c.instructions+=4;NFSU2_TR(0x605d45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605d48:{NFSU2_TR(0x605d48);
u8 U[4];
w4(U+0,u32(0x7dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605d4a:{NFSU2_TR(0x605d4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605d4b:{NFSU2_TR(0x605d4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605d50ull));
TAIL_STATIC(0x57c330u,57c);
}
B605d50:L605d50:{c.instructions+=1;NFSU2_TR(0x605d50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605d53:L605d53:{c.instructions+=4;NFSU2_TR(0x605d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605d56:{NFSU2_TR(0x605d56);
u8 U[4];
w4(U+0,u32(0xbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605d5b:{NFSU2_TR(0x605d5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605d5c:{NFSU2_TR(0x605d5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605d61ull));
TAIL_STATIC(0x5794e0u,579);
}
B605d61:L605d61:{c.instructions+=3;NFSU2_TR(0x605d61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605d64:{NFSU2_TR(0x605d64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605d66:{NFSU2_TR(0x605d66);
if(r1(R+518)){{goto L605d79;}}
}
B605d68:L605d68:{c.instructions+=4;NFSU2_TR(0x605d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B605d6b:{NFSU2_TR(0x605d6b);
u8 U[4];
w4(U+0,u32(0xbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605d70:{NFSU2_TR(0x605d70);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605d71:{NFSU2_TR(0x605d71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605d76ull));
TAIL_STATIC(0x57c330u,57c);
}
B605d76:L605d76:{c.instructions+=1;NFSU2_TR(0x605d76);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605d79:L605d79:{c.instructions+=4;NFSU2_TR(0x605d79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605d7c:{NFSU2_TR(0x605d7c);
u8 U[4];
w4(U+0,u32(0x7eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605d7e:{NFSU2_TR(0x605d7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605d7f:{NFSU2_TR(0x605d7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605d84ull));
TAIL_STATIC(0x5794e0u,579);
}
B605d84:L605d84:{c.instructions+=3;NFSU2_TR(0x605d84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605d87:{NFSU2_TR(0x605d87);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605d89:{NFSU2_TR(0x605d89);
if(r1(R+518)){{goto L605d99;}}
}
B605d8b:L605d8b:{c.instructions+=4;NFSU2_TR(0x605d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605d8e:{NFSU2_TR(0x605d8e);
u8 U[4];
w4(U+0,u32(0x7eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605d90:{NFSU2_TR(0x605d90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605d91:{NFSU2_TR(0x605d91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605d96ull));
TAIL_STATIC(0x57c330u,57c);
}
B605d96:L605d96:{c.instructions+=1;NFSU2_TR(0x605d96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605d99:L605d99:{c.instructions+=4;NFSU2_TR(0x605d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B605d9c:{NFSU2_TR(0x605d9c);
u8 U[4];
w4(U+0,u32(0xb5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605da1:{NFSU2_TR(0x605da1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605da2:{NFSU2_TR(0x605da2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605da7ull));
TAIL_STATIC(0x5794e0u,579);
}
B605da7:L605da7:{c.instructions+=3;NFSU2_TR(0x605da7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605daa:{NFSU2_TR(0x605daa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605dac:{NFSU2_TR(0x605dac);
if(r1(R+518)){{goto L605dbf;}}
}
B605dae:L605dae:{c.instructions+=4;NFSU2_TR(0x605dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605db1:{NFSU2_TR(0x605db1);
u8 U[4];
w4(U+0,u32(0xb5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605db6:{NFSU2_TR(0x605db6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605db7:{NFSU2_TR(0x605db7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605dbcull));
TAIL_STATIC(0x57c330u,57c);
}
B605dbc:L605dbc:{c.instructions+=1;NFSU2_TR(0x605dbc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605dbf:L605dbf:{c.instructions+=4;NFSU2_TR(0x605dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605dc2:{NFSU2_TR(0x605dc2);
u8 U[4];
w4(U+0,u32(0xb2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605dc7:{NFSU2_TR(0x605dc7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605dc8:{NFSU2_TR(0x605dc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605dcdull));
TAIL_STATIC(0x5794e0u,579);
}
B605dcd:L605dcd:{c.instructions+=3;NFSU2_TR(0x605dcd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605dd0:{NFSU2_TR(0x605dd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605dd2:{NFSU2_TR(0x605dd2);
if(r1(R+518)){{goto L605de5;}}
}
B605dd4:L605dd4:{c.instructions+=4;NFSU2_TR(0x605dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B605dd7:{NFSU2_TR(0x605dd7);
u8 U[4];
w4(U+0,u32(0xb2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605ddc:{NFSU2_TR(0x605ddc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605ddd:{NFSU2_TR(0x605ddd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605de2ull));
TAIL_STATIC(0x57c330u,57c);
}
B605de2:L605de2:{c.instructions+=1;NFSU2_TR(0x605de2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605de5:L605de5:{c.instructions+=4;NFSU2_TR(0x605de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605de8:{NFSU2_TR(0x605de8);
u8 U[4];
w4(U+0,u32(0xb3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605ded:{NFSU2_TR(0x605ded);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605dee:{NFSU2_TR(0x605dee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605df3ull));
TAIL_STATIC(0x5794e0u,579);
}
B605df3:L605df3:{c.instructions+=3;NFSU2_TR(0x605df3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605df6:{NFSU2_TR(0x605df6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605df8:{NFSU2_TR(0x605df8);
if(r1(R+518)){{goto L605e0b;}}
}
B605dfa:L605dfa:{c.instructions+=4;NFSU2_TR(0x605dfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605dfd:{NFSU2_TR(0x605dfd);
u8 U[4];
w4(U+0,u32(0xb3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605e02:{NFSU2_TR(0x605e02);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605e03:{NFSU2_TR(0x605e03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605e08ull));
TAIL_STATIC(0x57c330u,57c);
}
B605e08:L605e08:{c.instructions+=1;NFSU2_TR(0x605e08);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605e0b:L605e0b:{c.instructions+=4;NFSU2_TR(0x605e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B605e0e:{NFSU2_TR(0x605e0e);
u8 U[4];
w4(U+0,u32(0xb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605e13:{NFSU2_TR(0x605e13);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605e14:{NFSU2_TR(0x605e14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605e19ull));
TAIL_STATIC(0x5794e0u,579);
}
B605e19:L605e19:{c.instructions+=3;NFSU2_TR(0x605e19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605e1c:{NFSU2_TR(0x605e1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605e1e:{NFSU2_TR(0x605e1e);
if(r1(R+518)){{goto L605e31;}}
}
B605e20:L605e20:{c.instructions+=4;NFSU2_TR(0x605e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605e23:{NFSU2_TR(0x605e23);
u8 U[4];
w4(U+0,u32(0xb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605e28:{NFSU2_TR(0x605e28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605e29:{NFSU2_TR(0x605e29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605e2eull));
TAIL_STATIC(0x57c330u,57c);
}
B605e2e:L605e2e:{c.instructions+=1;NFSU2_TR(0x605e2e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605e31:L605e31:{c.instructions+=4;NFSU2_TR(0x605e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605e34:{NFSU2_TR(0x605e34);
u8 U[4];
w4(U+0,u32(0xc2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605e39:{NFSU2_TR(0x605e39);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605e3a:{NFSU2_TR(0x605e3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605e3full));
TAIL_STATIC(0x5794e0u,579);
}
B605e3f:L605e3f:{c.instructions+=3;NFSU2_TR(0x605e3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605e42:{NFSU2_TR(0x605e42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605e44:{NFSU2_TR(0x605e44);
if(r1(R+518)){{goto L605e57;}}
}
B605e46:L605e46:{c.instructions+=4;NFSU2_TR(0x605e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B605e49:{NFSU2_TR(0x605e49);
u8 U[4];
w4(U+0,u32(0xc2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605e4e:{NFSU2_TR(0x605e4e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605e4f:{NFSU2_TR(0x605e4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605e54ull));
TAIL_STATIC(0x57c330u,57c);
}
B605e54:L605e54:{c.instructions+=1;NFSU2_TR(0x605e54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605e57:L605e57:{c.instructions+=4;NFSU2_TR(0x605e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605e5a:{NFSU2_TR(0x605e5a);
u8 U[4];
w4(U+0,u32(0xbfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605e5f:{NFSU2_TR(0x605e5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605e60:{NFSU2_TR(0x605e60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605e65ull));
TAIL_STATIC(0x5794e0u,579);
}
B605e65:L605e65:{c.instructions+=3;NFSU2_TR(0x605e65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605e68:{NFSU2_TR(0x605e68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605e6a:{NFSU2_TR(0x605e6a);
if(r1(R+518)){{goto L605e7d;}}
}
B605e6c:L605e6c:{c.instructions+=4;NFSU2_TR(0x605e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605e6f:{NFSU2_TR(0x605e6f);
u8 U[4];
w4(U+0,u32(0xbfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605e74:{NFSU2_TR(0x605e74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605e75:{NFSU2_TR(0x605e75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605e7aull));
TAIL_STATIC(0x57c330u,57c);
}
B605e7a:L605e7a:{c.instructions+=1;NFSU2_TR(0x605e7a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605e7d:L605e7d:{c.instructions+=2;NFSU2_TR(0x605e7d);
u8 U[8];
__builtin_memmove((U+0),gp(0x8500d0),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B605e83:{NFSU2_TR(0x605e83);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L605ed1;}}
}
B605e85:L605e85:{c.instructions+=4;NFSU2_TR(0x605e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B605e88:{NFSU2_TR(0x605e88);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605e8d:{NFSU2_TR(0x605e8d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605e8e:{NFSU2_TR(0x605e8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605e93ull));
TAIL_STATIC(0x5794e0u,579);
}
B605e93:L605e93:{c.instructions+=3;NFSU2_TR(0x605e93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605e96:{NFSU2_TR(0x605e96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605e98:{NFSU2_TR(0x605e98);
if(r1(R+518)){{goto L605eab;}}
}
B605e9a:L605e9a:{c.instructions+=4;NFSU2_TR(0x605e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605e9d:{NFSU2_TR(0x605e9d);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605ea2:{NFSU2_TR(0x605ea2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605ea3:{NFSU2_TR(0x605ea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605ea8ull));
TAIL_STATIC(0x57c330u,57c);
}
B605ea8:L605ea8:{c.instructions+=1;NFSU2_TR(0x605ea8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605eab:L605eab:{c.instructions+=4;NFSU2_TR(0x605eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605eae:{NFSU2_TR(0x605eae);
u8 U[4];
w4(U+0,u32(0xc1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605eb3:{NFSU2_TR(0x605eb3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605eb4:{NFSU2_TR(0x605eb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605eb9ull));
TAIL_STATIC(0x5794e0u,579);
}
B605eb9:L605eb9:{c.instructions+=3;NFSU2_TR(0x605eb9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605ebc:{NFSU2_TR(0x605ebc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605ebe:{NFSU2_TR(0x605ebe);
if(r1(R+518)){{goto L605ed1;}}
}
B605ec0:L605ec0:{c.instructions+=4;NFSU2_TR(0x605ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B605ec3:{NFSU2_TR(0x605ec3);
u8 U[4];
w4(U+0,u32(0xc1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605ec8:{NFSU2_TR(0x605ec8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605ec9:{NFSU2_TR(0x605ec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605eceull));
TAIL_STATIC(0x57c330u,57c);
}
B605ece:L605ece:{c.instructions+=1;NFSU2_TR(0x605ece);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605ed1:L605ed1:{c.instructions+=4;NFSU2_TR(0x605ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605ed4:{NFSU2_TR(0x605ed4);
u8 U[4];
w4(U+0,u32(0xa2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605ed9:{NFSU2_TR(0x605ed9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605eda:{NFSU2_TR(0x605eda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605edfull));
TAIL_STATIC(0x57c330u,57c);
}
B605edf:L605edf:{c.instructions+=4;NFSU2_TR(0x605edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605ee2:{NFSU2_TR(0x605ee2);
u8 U[4];
w4(U+0,u32(0xa1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605ee7:{NFSU2_TR(0x605ee7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605ee8:{NFSU2_TR(0x605ee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605eedull));
TAIL_STATIC(0x57c330u,57c);
}
B605eed:L605eed:{c.instructions+=4;NFSU2_TR(0x605eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B605ef0:{NFSU2_TR(0x605ef0);
u8 U[4];
w4(U+0,u32(0xa3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605ef5:{NFSU2_TR(0x605ef5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605ef6:{NFSU2_TR(0x605ef6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605efbull));
TAIL_STATIC(0x57c330u,57c);
}
B605efb:L605efb:{c.instructions+=4;NFSU2_TR(0x605efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605efe:{NFSU2_TR(0x605efe);
u8 U[4];
w4(U+0,u32(0xa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605f03:{NFSU2_TR(0x605f03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605f04:{NFSU2_TR(0x605f04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605f09ull));
TAIL_STATIC(0x57c330u,57c);
}
B605f09:L605f09:{c.instructions+=4;NFSU2_TR(0x605f09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605f0c:{NFSU2_TR(0x605f0c);
u8 U[4];
w4(U+0,u32(0x7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605f0e:{NFSU2_TR(0x605f0e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605f0f:{NFSU2_TR(0x605f0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605f14ull));
TAIL_STATIC(0x57c330u,57c);
}
B605f14:L605f14:{c.instructions+=4;NFSU2_TR(0x605f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B605f17:{NFSU2_TR(0x605f17);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605f1c:{NFSU2_TR(0x605f1c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605f1d:{NFSU2_TR(0x605f1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605f22ull));
TAIL_STATIC(0x57c330u,57c);
}
B605f22:L605f22:{c.instructions+=4;NFSU2_TR(0x605f22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605f25:{NFSU2_TR(0x605f25);
u8 U[4];
w4(U+0,u32(0x81ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605f2a:{NFSU2_TR(0x605f2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605f2b:{NFSU2_TR(0x605f2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605f30ull));
TAIL_STATIC(0x57c330u,57c);
}
B605f30:L605f30:{c.instructions+=4;NFSU2_TR(0x605f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605f33:{NFSU2_TR(0x605f33);
u8 U[4];
w4(U+0,u32(0x82ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605f38:{NFSU2_TR(0x605f38);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605f39:{NFSU2_TR(0x605f39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605f3eull));
TAIL_STATIC(0x57c330u,57c);
}
B605f3e:L605f3e:{c.instructions+=4;NFSU2_TR(0x605f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605f44:{NFSU2_TR(0x605f44);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B605f47:{NFSU2_TR(0x605f47);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B605f4a:{NFSU2_TR(0x605f4a);
if(r1(R+518)){{goto L605f73;}}
}
B605f4c:L605f4c:{c.instructions+=1;NFSU2_TR(0x605f4c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L605f5c;}}
}
B605f4e:L605f4e:{c.instructions+=2;NFSU2_TR(0x605f4e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B605f51:{NFSU2_TR(0x605f51);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L605f5c;}}
}
B605f53:L605f53:{c.instructions+=2;NFSU2_TR(0x605f53);
__builtin_memmove((R+4),(R+24),4);
}
B605f55:{NFSU2_TR(0x605f55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605f5aull));
TAIL_STATIC(0x5faf10u,5fa);
}
B605f5a:L605f5a:{c.instructions+=1;NFSU2_TR(0x605f5a);
{goto L605fcb;}
}
B605f5c:L605f5c:{c.instructions+=3;NFSU2_TR(0x605f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605f5f:{NFSU2_TR(0x605f5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605f61:{NFSU2_TR(0x605f61);
if(r1(R+518)){{goto L605fcb;}}
}
B605f63:L605f63:{c.instructions+=3;NFSU2_TR(0x605f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605f66:{NFSU2_TR(0x605f66);
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
B605f68:{NFSU2_TR(0x605f68);
if(r1(R+518)){{goto L605fcb;}}
}
B605f6a:L605f6a:{c.instructions+=3;NFSU2_TR(0x605f6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B605f6c:{NFSU2_TR(0x605f6c);
__builtin_memmove((R+4),(R+0),4);
}
B605f6e:{NFSU2_TR(0x605f6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605f71ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B605f71:L605f71:{c.instructions+=1;NFSU2_TR(0x605f71);
{goto L605fcb;}
}
B605f73:L605f73:{c.instructions+=3;NFSU2_TR(0x605f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605f76:{NFSU2_TR(0x605f76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605f78:{NFSU2_TR(0x605f78);
if(r1(R+518)){{goto L605fcb;}}
}
B605f7a:L605f7a:{c.instructions+=2;NFSU2_TR(0x605f7a);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
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
B605f7d:{NFSU2_TR(0x605f7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L605fcb;}}
}
B605f7f:L605f7f:{c.instructions+=4;NFSU2_TR(0x605f7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605f82:{NFSU2_TR(0x605f82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B605f84:{NFSU2_TR(0x605f84);
__builtin_memmove((R+4),(R+0),4);
}
B605f86:{NFSU2_TR(0x605f86);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605f89ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B605f89:L605f89:{c.instructions+=1;NFSU2_TR(0x605f89);
{goto L605fcb;}
}
B605f8b:L605f8b:{c.instructions+=4;NFSU2_TR(0x605f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605f8e:{NFSU2_TR(0x605f8e);
u8 U[4];
w4(U+0,u32(0xbdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605f93:{NFSU2_TR(0x605f93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605f94:{NFSU2_TR(0x605f94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605f99ull));
TAIL_STATIC(0x57c330u,57c);
}
B605f99:L605f99:{c.instructions+=2;NFSU2_TR(0x605f99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605f9c:{NFSU2_TR(0x605f9c);
{goto L605fcb;}
}
B605f9e:L605f9e:{c.instructions+=4;NFSU2_TR(0x605f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B605fa1:{NFSU2_TR(0x605fa1);
u8 U[4];
w4(U+0,u32(0xbfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605fa6:{NFSU2_TR(0x605fa6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605fa7:{NFSU2_TR(0x605fa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605facull));
TAIL_STATIC(0x57c330u,57c);
}
B605fac:L605fac:{c.instructions+=4;NFSU2_TR(0x605fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B605faf:{NFSU2_TR(0x605faf);
u8 U[4];
w4(U+0,u32(0xbeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605fb4:{NFSU2_TR(0x605fb4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605fb5:{NFSU2_TR(0x605fb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605fbaull));
TAIL_STATIC(0x57c330u,57c);
}
B605fba:L605fba:{c.instructions+=4;NFSU2_TR(0x605fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605fbd:{NFSU2_TR(0x605fbd);
u8 U[4];
w4(U+0,u32(0xbdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605fc2:{NFSU2_TR(0x605fc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605fc3:{NFSU2_TR(0x605fc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605fc8ull));
TAIL_STATIC(0x57c330u,57c);
}
B605fc8:L605fc8:{c.instructions+=1;NFSU2_TR(0x605fc8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B605fcb:L605fcb:{c.instructions+=3;NFSU2_TR(0x605fcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605fce:{NFSU2_TR(0x605fce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605fd0:{NFSU2_TR(0x605fd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L605fee;}}
}
B605fd2:L605fd2:{c.instructions+=3;NFSU2_TR(0x605fd2);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605fd4:{NFSU2_TR(0x605fd4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605fd6:{NFSU2_TR(0x605fd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605fdbull));
TAIL_STATIC(0x5794e0u,579);
}
B605fdb:L605fdb:{c.instructions+=3;NFSU2_TR(0x605fdb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605fde:{NFSU2_TR(0x605fde);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B605fe0:{NFSU2_TR(0x605fe0);
if(r1(R+518)){{goto L605fee;}}
}
B605fe2:L605fe2:{c.instructions+=3;NFSU2_TR(0x605fe2);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605fe4:{NFSU2_TR(0x605fe4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605fe6:{NFSU2_TR(0x605fe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x605febull));
TAIL_STATIC(0x57c330u,57c);
}
B605feb:L605feb:{c.instructions+=1;NFSU2_TR(0x605feb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B605fee:L605fee:{c.instructions+=6;NFSU2_TR(0x605fee);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B605ff2:{NFSU2_TR(0x605ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B605ff8:{NFSU2_TR(0x605ff8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B605ffb:{NFSU2_TR(0x605ffb);
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
B605ffe:{NFSU2_TR(0x605ffe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B605fff:{NFSU2_TR(0x605fff);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x606307u,606);}
TAIL_STATIC(0x606005u,606);
}
XIT:NFSU2_TR_EXIT(0x605,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
