#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_744(u8* __restrict R,Cpu& c);
u32 body_74a(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_74f(u8* __restrict R,Cpu& c);
u32 body_750(u8* __restrict R,Cpu& c);
u32 body_751(u8* __restrict R,Cpu& c);
u32 body_752(u8* __restrict R,Cpu& c);
u32 body_754(u8* __restrict R,Cpu& c);
u32 body_755(u8* __restrict R,Cpu& c);
u32 body_757(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x743,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x743,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_743(u8* __restrict R,Cpu& c);
u32 page_743(Cpu& c){return body_743(c.regs.data(),c);}
__attribute__((noinline)) u32 body_743(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x743000:goto L743000;
case 0x743002:c.instructions+=8;goto B743002;
case 0x743004:c.instructions+=7;goto B743004;
case 0x743006:c.instructions+=6;goto B743006;
case 0x743007:c.instructions+=5;goto B743007;
case 0x74300a:c.instructions+=4;goto B74300a;
case 0x74300e:c.instructions+=3;goto B74300e;
case 0x74300f:c.instructions+=2;goto B74300f;
case 0x743012:c.instructions+=1;goto B743012;
case 0x743014:goto L743014;
case 0x743015:c.instructions+=13;goto B743015;
case 0x74301a:c.instructions+=12;goto B74301a;
case 0x74301c:c.instructions+=11;goto B74301c;
case 0x743021:c.instructions+=10;goto B743021;
case 0x743023:c.instructions+=9;goto B743023;
case 0x743025:c.instructions+=8;goto B743025;
case 0x743027:c.instructions+=7;goto B743027;
case 0x743028:c.instructions+=6;goto B743028;
case 0x74302a:c.instructions+=5;goto B74302a;
case 0x74302b:c.instructions+=4;goto B74302b;
case 0x74302d:c.instructions+=3;goto B74302d;
case 0x74302f:c.instructions+=2;goto B74302f;
case 0x743030:c.instructions+=1;goto B743030;
case 0x743032:goto L743032;
case 0x743035:c.instructions+=1;goto B743035;
case 0x743037:goto L743037;
case 0x743038:c.instructions+=6;goto B743038;
case 0x74303d:c.instructions+=5;goto B74303d;
case 0x74303f:c.instructions+=4;goto B74303f;
case 0x743041:c.instructions+=3;goto B743041;
case 0x743043:c.instructions+=2;goto B743043;
case 0x743044:c.instructions+=1;goto B743044;
case 0x743046:goto L743046;
case 0x743048:c.instructions+=7;goto B743048;
case 0x74304a:c.instructions+=6;goto B74304a;
case 0x74304b:c.instructions+=5;goto B74304b;
case 0x74304e:c.instructions+=4;goto B74304e;
case 0x743052:c.instructions+=3;goto B743052;
case 0x743053:c.instructions+=2;goto B743053;
case 0x743056:c.instructions+=1;goto B743056;
case 0x743058:goto L743058;
case 0x743059:c.instructions+=13;goto B743059;
case 0x74305e:c.instructions+=12;goto B74305e;
case 0x743060:c.instructions+=11;goto B743060;
case 0x743065:c.instructions+=10;goto B743065;
case 0x743067:c.instructions+=9;goto B743067;
case 0x743069:c.instructions+=8;goto B743069;
case 0x74306b:c.instructions+=7;goto B74306b;
case 0x74306c:c.instructions+=6;goto B74306c;
case 0x74306e:c.instructions+=5;goto B74306e;
case 0x74306f:c.instructions+=4;goto B74306f;
case 0x743071:c.instructions+=3;goto B743071;
case 0x743073:c.instructions+=2;goto B743073;
case 0x743074:c.instructions+=1;goto B743074;
case 0x743076:goto L743076;
case 0x743079:c.instructions+=1;goto B743079;
case 0x74307b:goto L74307b;
case 0x74307c:c.instructions+=6;goto B74307c;
case 0x743081:c.instructions+=5;goto B743081;
case 0x743083:c.instructions+=4;goto B743083;
case 0x743085:c.instructions+=3;goto B743085;
case 0x743087:c.instructions+=2;goto B743087;
case 0x743088:c.instructions+=1;goto B743088;
case 0x74308a:goto L74308a;
case 0x74308c:c.instructions+=7;goto B74308c;
case 0x74308d:c.instructions+=6;goto B74308d;
case 0x74308f:c.instructions+=5;goto B74308f;
case 0x743090:c.instructions+=4;goto B743090;
case 0x743092:c.instructions+=3;goto B743092;
case 0x743096:c.instructions+=2;goto B743096;
case 0x743097:c.instructions+=1;goto B743097;
case 0x7430a0:goto L7430a0;
case 0x7430a5:c.instructions+=6;goto B7430a5;
case 0x7430a7:c.instructions+=5;goto B7430a7;
case 0x7430a9:c.instructions+=4;goto B7430a9;
case 0x7430ac:c.instructions+=3;goto B7430ac;
case 0x7430ae:c.instructions+=2;goto B7430ae;
case 0x7430b1:c.instructions+=1;goto B7430b1;
case 0x7430c0:goto L7430c0;
case 0x7430c4:c.instructions+=14;goto B7430c4;
case 0x7430c6:c.instructions+=13;goto B7430c6;
case 0x7430c8:c.instructions+=12;goto B7430c8;
case 0x7430cb:c.instructions+=11;goto B7430cb;
case 0x7430ce:c.instructions+=10;goto B7430ce;
case 0x7430d1:c.instructions+=9;goto B7430d1;
case 0x7430d3:c.instructions+=8;goto B7430d3;
case 0x7430d7:c.instructions+=7;goto B7430d7;
case 0x7430da:c.instructions+=6;goto B7430da;
case 0x7430dc:c.instructions+=5;goto B7430dc;
case 0x7430df:c.instructions+=4;goto B7430df;
case 0x7430e2:c.instructions+=3;goto B7430e2;
case 0x7430e4:c.instructions+=2;goto B7430e4;
case 0x7430e6:c.instructions+=1;goto B7430e6;
case 0x7430f0:goto L7430f0;
case 0x7430f5:c.instructions+=4;goto B7430f5;
case 0x7430f9:c.instructions+=3;goto B7430f9;
case 0x7430fd:c.instructions+=2;goto B7430fd;
case 0x743102:c.instructions+=1;goto B743102;
case 0x743110:goto L743110;
case 0x743114:c.instructions+=9;goto B743114;
case 0x743118:c.instructions+=8;goto B743118;
case 0x74311b:c.instructions+=7;goto B74311b;
case 0x74311f:c.instructions+=6;goto B74311f;
case 0x743122:c.instructions+=5;goto B743122;
case 0x743126:c.instructions+=4;goto B743126;
case 0x743129:c.instructions+=3;goto B743129;
case 0x74312d:c.instructions+=2;goto B74312d;
case 0x743131:c.instructions+=1;goto B743131;
case 0x743140:goto L743140;
case 0x743143:c.instructions+=15;goto B743143;
case 0x743148:c.instructions+=14;goto B743148;
case 0x74314c:c.instructions+=13;goto B74314c;
case 0x743150:c.instructions+=12;goto B743150;
case 0x743154:c.instructions+=11;goto B743154;
case 0x743157:c.instructions+=10;goto B743157;
case 0x74315b:c.instructions+=9;goto B74315b;
case 0x74315e:c.instructions+=8;goto B74315e;
case 0x743162:c.instructions+=7;goto B743162;
case 0x743165:c.instructions+=6;goto B743165;
case 0x743167:c.instructions+=5;goto B743167;
case 0x74316b:c.instructions+=4;goto B74316b;
case 0x74316f:c.instructions+=3;goto B74316f;
case 0x743174:c.instructions+=2;goto B743174;
case 0x743175:c.instructions+=1;goto B743175;
case 0x74317a:goto L74317a;
case 0x74317e:c.instructions+=2;goto B74317e;
case 0x743183:c.instructions+=1;goto B743183;
case 0x743188:goto L743188;
case 0x74318b:c.instructions+=1;goto B74318b;
case 0x743190:goto L743190;
case 0x743193:c.instructions+=7;goto B743193;
case 0x743198:c.instructions+=6;goto B743198;
case 0x74319c:c.instructions+=5;goto B74319c;
case 0x7431a0:c.instructions+=4;goto B7431a0;
case 0x7431a1:c.instructions+=3;goto B7431a1;
case 0x7431a5:c.instructions+=2;goto B7431a5;
case 0x7431a6:c.instructions+=1;goto B7431a6;
case 0x7431ab:goto L7431ab;
case 0x7431b0:c.instructions+=11;goto B7431b0;
case 0x7431b5:c.instructions+=10;goto B7431b5;
case 0x7431ba:c.instructions+=9;goto B7431ba;
case 0x7431bd:c.instructions+=8;goto B7431bd;
case 0x7431bf:c.instructions+=7;goto B7431bf;
case 0x7431c4:c.instructions+=6;goto B7431c4;
case 0x7431c7:c.instructions+=5;goto B7431c7;
case 0x7431c9:c.instructions+=4;goto B7431c9;
case 0x7431cd:c.instructions+=3;goto B7431cd;
case 0x7431d0:c.instructions+=2;goto B7431d0;
case 0x7431d2:c.instructions+=1;goto B7431d2;
case 0x7431d7:goto L7431d7;
case 0x7431da:c.instructions+=1;goto B7431da;
case 0x7431e0:goto L7431e0;
case 0x7431e4:c.instructions+=4;goto B7431e4;
case 0x7431e6:c.instructions+=3;goto B7431e6;
case 0x7431e8:c.instructions+=2;goto B7431e8;
case 0x7431ea:c.instructions+=1;goto B7431ea;
case 0x7431ec:goto L7431ec;
case 0x7431f0:goto L7431f0;
case 0x7431f3:c.instructions+=1;goto B7431f3;
case 0x7431f5:goto L7431f5;
case 0x7431f8:c.instructions+=3;goto B7431f8;
case 0x7431f9:c.instructions+=2;goto B7431f9;
case 0x7431fb:c.instructions+=1;goto B7431fb;
case 0x7431fd:goto L7431fd;
case 0x7431fe:c.instructions+=2;goto B7431fe;
case 0x7431ff:c.instructions+=1;goto B7431ff;
case 0x743201:goto L743201;
case 0x743203:c.instructions+=2;goto B743203;
case 0x743206:c.instructions+=1;goto B743206;
case 0x743208:goto L743208;
case 0x74320b:c.instructions+=1;goto B74320b;
case 0x74320d:goto L74320d;
case 0x743210:c.instructions+=1;goto B743210;
case 0x743212:goto L743212;
case 0x743215:c.instructions+=2;goto B743215;
case 0x743216:c.instructions+=1;goto B743216;
case 0x743218:goto L743218;
case 0x74321b:c.instructions+=1;goto B74321b;
case 0x74321d:goto L74321d;
case 0x74321f:c.instructions+=7;goto B74321f;
case 0x743225:c.instructions+=6;goto B743225;
case 0x743228:c.instructions+=5;goto B743228;
case 0x74322b:c.instructions+=4;goto B74322b;
case 0x74322d:c.instructions+=3;goto B74322d;
case 0x74322f:c.instructions+=2;goto B74322f;
case 0x743230:c.instructions+=1;goto B743230;
case 0x743232:goto L743232;
case 0x743234:c.instructions+=3;goto B743234;
case 0x743238:c.instructions+=2;goto B743238;
case 0x74323a:c.instructions+=1;goto B74323a;
case 0x74323c:goto L74323c;
case 0x743241:goto L743241;
case 0x743243:c.instructions+=2;goto B743243;
case 0x743246:c.instructions+=1;goto B743246;
case 0x743248:goto L743248;
case 0x74324a:c.instructions+=1;goto B74324a;
case 0x74324c:goto L74324c;
case 0x74324f:c.instructions+=3;goto B74324f;
case 0x743250:c.instructions+=2;goto B743250;
case 0x743253:c.instructions+=1;goto B743253;
case 0x743255:goto L743255;
case 0x743257:c.instructions+=3;goto B743257;
case 0x743259:c.instructions+=2;goto B743259;
case 0x74325c:c.instructions+=1;goto B74325c;
case 0x74325e:goto L74325e;
case 0x74325f:c.instructions+=4;goto B74325f;
case 0x743261:c.instructions+=3;goto B743261;
case 0x743263:c.instructions+=2;goto B743263;
case 0x743266:c.instructions+=1;goto B743266;
case 0x743268:goto L743268;
case 0x74326b:c.instructions+=1;goto B74326b;
case 0x74326d:goto L74326d;
case 0x743270:c.instructions+=6;goto B743270;
case 0x743273:c.instructions+=5;goto B743273;
case 0x743274:c.instructions+=4;goto B743274;
case 0x743277:c.instructions+=3;goto B743277;
case 0x743279:c.instructions+=2;goto B743279;
case 0x74327c:c.instructions+=1;goto B74327c;
case 0x74327e:goto L74327e;
case 0x743281:goto L743281;
case 0x743285:c.instructions+=4;goto B743285;
case 0x743287:c.instructions+=3;goto B743287;
case 0x74328b:c.instructions+=2;goto B74328b;
case 0x74328d:c.instructions+=1;goto B74328d;
case 0x74328f:goto L74328f;
case 0x743291:c.instructions+=3;goto B743291;
case 0x743293:c.instructions+=2;goto B743293;
case 0x743296:c.instructions+=1;goto B743296;
case 0x743298:goto L743298;
case 0x743299:c.instructions+=4;goto B743299;
case 0x74329b:c.instructions+=3;goto B74329b;
case 0x74329d:c.instructions+=2;goto B74329d;
case 0x7432a0:c.instructions+=1;goto B7432a0;
case 0x7432a2:goto L7432a2;
case 0x7432a5:c.instructions+=1;goto B7432a5;
case 0x7432a7:goto L7432a7;
case 0x7432aa:c.instructions+=6;goto B7432aa;
case 0x7432ad:c.instructions+=5;goto B7432ad;
case 0x7432ae:c.instructions+=4;goto B7432ae;
case 0x7432b1:c.instructions+=3;goto B7432b1;
case 0x7432b3:c.instructions+=2;goto B7432b3;
case 0x7432b6:c.instructions+=1;goto B7432b6;
case 0x7432b8:goto L7432b8;
case 0x7432bb:goto L7432bb;
case 0x7432bd:goto L7432bd;
case 0x7432be:c.instructions+=2;goto B7432be;
case 0x7432bf:c.instructions+=1;goto B7432bf;
case 0x7432c0:goto L7432c0;
case 0x7432c1:c.instructions+=16;goto B7432c1;
case 0x7432c5:c.instructions+=15;goto B7432c5;
case 0x7432c6:c.instructions+=14;goto B7432c6;
case 0x7432ca:c.instructions+=13;goto B7432ca;
case 0x7432cc:c.instructions+=12;goto B7432cc;
case 0x7432cd:c.instructions+=11;goto B7432cd;
case 0x7432ce:c.instructions+=10;goto B7432ce;
case 0x7432d2:c.instructions+=9;goto B7432d2;
case 0x7432d6:c.instructions+=8;goto B7432d6;
case 0x7432d9:c.instructions+=7;goto B7432d9;
case 0x7432dc:c.instructions+=6;goto B7432dc;
case 0x7432df:c.instructions+=5;goto B7432df;
case 0x7432e0:c.instructions+=4;goto B7432e0;
case 0x7432e4:c.instructions+=3;goto B7432e4;
case 0x7432e5:c.instructions+=2;goto B7432e5;
case 0x7432ea:c.instructions+=1;goto B7432ea;
case 0x7432ef:goto L7432ef;
case 0x7432f3:c.instructions+=16;goto B7432f3;
case 0x7432f6:c.instructions+=15;goto B7432f6;
case 0x7432f9:c.instructions+=14;goto B7432f9;
case 0x7432fc:c.instructions+=13;goto B7432fc;
case 0x7432ff:c.instructions+=12;goto B7432ff;
case 0x743302:c.instructions+=11;goto B743302;
case 0x743305:c.instructions+=10;goto B743305;
case 0x743308:c.instructions+=9;goto B743308;
case 0x74330c:c.instructions+=8;goto B74330c;
case 0x74330f:c.instructions+=7;goto B74330f;
case 0x743311:c.instructions+=6;goto B743311;
case 0x743314:c.instructions+=5;goto B743314;
case 0x743317:c.instructions+=4;goto B743317;
case 0x74331a:c.instructions+=3;goto B74331a;
case 0x74331b:c.instructions+=2;goto B74331b;
case 0x74331c:c.instructions+=1;goto B74331c;
case 0x743320:goto L743320;
case 0x743322:c.instructions+=2;goto B743322;
case 0x743324:c.instructions+=1;goto B743324;
case 0x743326:goto L743326;
case 0x74332a:c.instructions+=3;goto B74332a;
case 0x74332d:c.instructions+=2;goto B74332d;
case 0x743332:c.instructions+=1;goto B743332;
case 0x743333:goto L743333;
case 0x743335:c.instructions+=3;goto B743335;
case 0x743338:c.instructions+=2;goto B743338;
case 0x74333b:c.instructions+=1;goto B74333b;
case 0x74333d:goto L74333d;
case 0x743342:c.instructions+=8;goto B743342;
case 0x743346:c.instructions+=7;goto B743346;
case 0x74334b:c.instructions+=6;goto B74334b;
case 0x743351:c.instructions+=5;goto B743351;
case 0x743357:c.instructions+=4;goto B743357;
case 0x74335a:c.instructions+=3;goto B74335a;
case 0x74335c:c.instructions+=2;goto B74335c;
case 0x74335f:c.instructions+=1;goto B74335f;
case 0x743360:goto L743360;
case 0x743362:c.instructions+=3;goto B743362;
case 0x743365:c.instructions+=2;goto B743365;
case 0x743368:c.instructions+=1;goto B743368;
case 0x74336a:goto L74336a;
case 0x74336f:c.instructions+=11;goto B74336f;
case 0x743374:c.instructions+=10;goto B743374;
case 0x743378:c.instructions+=9;goto B743378;
case 0x74337e:c.instructions+=8;goto B74337e;
case 0x743381:c.instructions+=7;goto B743381;
case 0x743384:c.instructions+=6;goto B743384;
case 0x743386:c.instructions+=5;goto B743386;
case 0x74338b:c.instructions+=4;goto B74338b;
case 0x74338d:c.instructions+=3;goto B74338d;
case 0x743390:c.instructions+=2;goto B743390;
case 0x743395:c.instructions+=1;goto B743395;
case 0x743396:goto L743396;
case 0x74339b:c.instructions+=1;goto B74339b;
case 0x7433a0:goto L7433a0;
case 0x7433a1:c.instructions+=7;goto B7433a1;
case 0x7433a5:c.instructions+=6;goto B7433a5;
case 0x7433a7:c.instructions+=5;goto B7433a7;
case 0x7433a8:c.instructions+=4;goto B7433a8;
case 0x7433aa:c.instructions+=3;goto B7433aa;
case 0x7433ac:c.instructions+=2;goto B7433ac;
case 0x7433ae:c.instructions+=1;goto B7433ae;
case 0x7433b0:goto L7433b0;
case 0x7433b3:c.instructions+=2;goto B7433b3;
case 0x7433b5:c.instructions+=1;goto B7433b5;
case 0x7433b7:goto L7433b7;
case 0x7433b9:c.instructions+=3;goto B7433b9;
case 0x7433bb:c.instructions+=2;goto B7433bb;
case 0x7433bd:c.instructions+=1;goto B7433bd;
case 0x7433bf:goto L7433bf;
case 0x7433c4:c.instructions+=2;goto B7433c4;
case 0x7433c6:c.instructions+=1;goto B7433c6;
case 0x7433c8:goto L7433c8;
case 0x7433cb:c.instructions+=7;goto B7433cb;
case 0x7433cd:c.instructions+=6;goto B7433cd;
case 0x7433d0:c.instructions+=5;goto B7433d0;
case 0x7433d3:c.instructions+=4;goto B7433d3;
case 0x7433d6:c.instructions+=3;goto B7433d6;
case 0x7433d8:c.instructions+=2;goto B7433d8;
case 0x7433da:c.instructions+=1;goto B7433da;
case 0x7433dc:goto L7433dc;
case 0x7433dd:goto L7433dd;
case 0x7433e0:c.instructions+=3;goto B7433e0;
case 0x7433e1:c.instructions+=2;goto B7433e1;
case 0x7433e3:c.instructions+=1;goto B7433e3;
case 0x7433e5:goto L7433e5;
case 0x7433e7:c.instructions+=3;goto B7433e7;
case 0x7433e8:c.instructions+=2;goto B7433e8;
case 0x7433e9:c.instructions+=1;goto B7433e9;
case 0x7433f0:goto L7433f0;
case 0x7433f4:c.instructions+=11;goto B7433f4;
case 0x7433f5:c.instructions+=10;goto B7433f5;
case 0x7433f9:c.instructions+=9;goto B7433f9;
case 0x7433fb:c.instructions+=8;goto B7433fb;
case 0x7433fc:c.instructions+=7;goto B7433fc;
case 0x7433fd:c.instructions+=6;goto B7433fd;
case 0x7433fe:c.instructions+=5;goto B7433fe;
case 0x743400:c.instructions+=4;goto B743400;
case 0x743402:c.instructions+=3;goto B743402;
case 0x743404:c.instructions+=2;goto B743404;
case 0x743408:c.instructions+=1;goto B743408;
case 0x74340a:goto L74340a;
case 0x74340b:c.instructions+=2;goto B74340b;
case 0x74340f:c.instructions+=1;goto B74340f;
case 0x743410:goto L743410;
case 0x743414:c.instructions+=1;goto B743414;
case 0x743416:goto L743416;
case 0x743419:c.instructions+=1;goto B743419;
case 0x74341e:goto L74341e;
case 0x743421:c.instructions+=1;goto B743421;
case 0x743423:goto L743423;
case 0x743424:c.instructions+=1;goto B743424;
case 0x743427:goto L743427;
case 0x743429:c.instructions+=2;goto B743429;
case 0x74342d:c.instructions+=1;goto B74342d;
case 0x74342f:goto L74342f;
case 0x743430:goto L743430;
case 0x743434:c.instructions+=6;goto B743434;
case 0x74343a:c.instructions+=5;goto B74343a;
case 0x74343b:c.instructions+=4;goto B74343b;
case 0x74343e:c.instructions+=3;goto B74343e;
case 0x74343f:c.instructions+=2;goto B74343f;
case 0x743440:c.instructions+=1;goto B743440;
case 0x743450:goto L743450;
case 0x743454:c.instructions+=9;goto B743454;
case 0x743455:c.instructions+=8;goto B743455;
case 0x743459:c.instructions+=7;goto B743459;
case 0x74345a:c.instructions+=6;goto B74345a;
case 0x74345e:c.instructions+=5;goto B74345e;
case 0x743460:c.instructions+=4;goto B743460;
case 0x743463:c.instructions+=3;goto B743463;
case 0x743465:c.instructions+=2;goto B743465;
case 0x743467:c.instructions+=1;goto B743467;
case 0x743469:goto L743469;
case 0x74346a:c.instructions+=3;goto B74346a;
case 0x74346e:c.instructions+=2;goto B74346e;
case 0x74346f:c.instructions+=1;goto B74346f;
case 0x743470:goto L743470;
case 0x743472:c.instructions+=1;goto B743472;
case 0x743474:goto L743474;
case 0x743477:c.instructions+=3;goto B743477;
case 0x74347c:c.instructions+=2;goto B74347c;
case 0x743480:c.instructions+=1;goto B743480;
case 0x743482:goto L743482;
case 0x743485:c.instructions+=2;goto B743485;
case 0x74348a:c.instructions+=1;goto B74348a;
case 0x74348c:goto L74348c;
case 0x743490:c.instructions+=1;goto B743490;
case 0x743492:goto L743492;
case 0x743494:c.instructions+=8;goto B743494;
case 0x743497:c.instructions+=7;goto B743497;
case 0x743499:c.instructions+=6;goto B743499;
case 0x74349c:c.instructions+=5;goto B74349c;
case 0x74349e:c.instructions+=4;goto B74349e;
case 0x7434a2:c.instructions+=3;goto B7434a2;
case 0x7434a5:c.instructions+=2;goto B7434a5;
case 0x7434aa:c.instructions+=1;goto B7434aa;
case 0x7434ac:goto L7434ac;
case 0x7434af:c.instructions+=12;goto B7434af;
case 0x7434b3:c.instructions+=11;goto B7434b3;
case 0x7434b6:c.instructions+=10;goto B7434b6;
case 0x7434b9:c.instructions+=9;goto B7434b9;
case 0x7434bb:c.instructions+=8;goto B7434bb;
case 0x7434be:c.instructions+=7;goto B7434be;
case 0x7434c1:c.instructions+=6;goto B7434c1;
case 0x7434c3:c.instructions+=5;goto B7434c3;
case 0x7434c6:c.instructions+=4;goto B7434c6;
case 0x7434c8:c.instructions+=3;goto B7434c8;
case 0x7434cc:c.instructions+=2;goto B7434cc;
case 0x7434d0:c.instructions+=1;goto B7434d0;
case 0x7434d5:goto L7434d5;
case 0x7434d7:c.instructions+=4;goto B7434d7;
case 0x7434da:c.instructions+=3;goto B7434da;
case 0x7434db:c.instructions+=2;goto B7434db;
case 0x7434dd:c.instructions+=1;goto B7434dd;
case 0x7434df:goto L7434df;
case 0x7434e0:c.instructions+=1;goto B7434e0;
case 0x7434e1:goto L7434e1;
case 0x7434e2:c.instructions+=4;goto B7434e2;
case 0x7434e6:c.instructions+=3;goto B7434e6;
case 0x7434e9:c.instructions+=2;goto B7434e9;
case 0x7434ea:c.instructions+=1;goto B7434ea;
case 0x7434f0:goto L7434f0;
case 0x7434f4:c.instructions+=11;goto B7434f4;
case 0x7434f8:c.instructions+=10;goto B7434f8;
case 0x7434fa:c.instructions+=9;goto B7434fa;
case 0x7434fd:c.instructions+=8;goto B7434fd;
case 0x7434fe:c.instructions+=7;goto B7434fe;
case 0x7434ff:c.instructions+=6;goto B7434ff;
case 0x743500:c.instructions+=5;goto B743500;
case 0x743502:c.instructions+=4;goto B743502;
case 0x743504:c.instructions+=3;goto B743504;
case 0x743506:c.instructions+=2;goto B743506;
case 0x74350a:c.instructions+=1;goto B74350a;
case 0x74350c:goto L74350c;
case 0x74350d:c.instructions+=2;goto B74350d;
case 0x743511:c.instructions+=1;goto B743511;
case 0x743512:goto L743512;
case 0x743516:c.instructions+=1;goto B743516;
case 0x743518:goto L743518;
case 0x74351c:c.instructions+=3;goto B74351c;
case 0x74351e:c.instructions+=2;goto B74351e;
case 0x743522:c.instructions+=1;goto B743522;
case 0x743527:goto L743527;
case 0x74352b:c.instructions+=9;goto B74352b;
case 0x74352e:c.instructions+=8;goto B74352e;
case 0x743530:c.instructions+=7;goto B743530;
case 0x743534:c.instructions+=6;goto B743534;
case 0x743536:c.instructions+=5;goto B743536;
case 0x743539:c.instructions+=4;goto B743539;
case 0x74353b:c.instructions+=3;goto B74353b;
case 0x74353d:c.instructions+=2;goto B74353d;
case 0x743541:c.instructions+=1;goto B743541;
case 0x743543:goto L743543;
case 0x743548:c.instructions+=2;goto B743548;
case 0x74354b:c.instructions+=1;goto B74354b;
case 0x743550:goto L743550;
case 0x743552:c.instructions+=1;goto B743552;
case 0x743554:goto L743554;
case 0x743556:c.instructions+=1;goto B743556;
case 0x743558:goto L743558;
case 0x74355b:c.instructions+=3;goto B74355b;
case 0x74355f:c.instructions+=2;goto B74355f;
case 0x743562:c.instructions+=1;goto B743562;
case 0x743564:goto L743564;
case 0x743568:goto L743568;
case 0x74356a:c.instructions+=1;goto B74356a;
case 0x74356c:goto L74356c;
case 0x74356e:goto L74356e;
case 0x74356f:goto L74356f;
case 0x743573:c.instructions+=4;goto B743573;
case 0x743575:c.instructions+=3;goto B743575;
case 0x743579:c.instructions+=2;goto B743579;
case 0x74357d:c.instructions+=1;goto B74357d;
case 0x74357f:goto L74357f;
case 0x743580:c.instructions+=1;goto B743580;
case 0x743581:goto L743581;
case 0x743585:c.instructions+=6;goto B743585;
case 0x743586:c.instructions+=5;goto B743586;
case 0x74358a:c.instructions+=4;goto B74358a;
case 0x74358d:c.instructions+=3;goto B74358d;
case 0x74358e:c.instructions+=2;goto B74358e;
case 0x743591:c.instructions+=1;goto B743591;
case 0x743592:goto L743592;
case 0x743595:c.instructions+=6;goto B743595;
case 0x743598:c.instructions+=5;goto B743598;
case 0x74359c:c.instructions+=4;goto B74359c;
case 0x74359f:c.instructions+=3;goto B74359f;
case 0x7435a2:c.instructions+=2;goto B7435a2;
case 0x7435a5:c.instructions+=1;goto B7435a5;
case 0x7435a7:goto L7435a7;
case 0x7435a9:c.instructions+=1;goto B7435a9;
case 0x7435ab:goto L7435ab;
case 0x7435ad:c.instructions+=1;goto B7435ad;
case 0x7435b0:goto L7435b0;
case 0x7435b1:c.instructions+=7;goto B7435b1;
case 0x7435b2:c.instructions+=6;goto B7435b2;
case 0x7435b3:c.instructions+=5;goto B7435b3;
case 0x7435b4:c.instructions+=4;goto B7435b4;
case 0x7435b8:c.instructions+=3;goto B7435b8;
case 0x7435be:c.instructions+=2;goto B7435be;
case 0x7435c3:c.instructions+=1;goto B7435c3;
case 0x7435c5:goto L7435c5;
case 0x7435c7:c.instructions+=2;goto B7435c7;
case 0x7435c9:c.instructions+=1;goto B7435c9;
case 0x7435cb:goto L7435cb;
case 0x7435cc:c.instructions+=1;goto B7435cc;
case 0x7435cf:goto L7435cf;
case 0x7435d2:goto L7435d2;
case 0x7435d4:c.instructions+=3;goto B7435d4;
case 0x7435d7:c.instructions+=2;goto B7435d7;
case 0x7435d8:c.instructions+=1;goto B7435d8;
case 0x7435da:goto L7435da;
case 0x7435dd:c.instructions+=2;goto B7435dd;
case 0x7435df:c.instructions+=1;goto B7435df;
case 0x7435e1:goto L7435e1;
case 0x7435e2:c.instructions+=1;goto B7435e2;
case 0x7435e7:goto L7435e7;
case 0x7435ea:c.instructions+=1;goto B7435ea;
case 0x7435ed:goto L7435ed;
case 0x7435f0:c.instructions+=2;goto B7435f0;
case 0x7435f2:c.instructions+=1;goto B7435f2;
case 0x7435f4:goto L7435f4;
case 0x7435f5:c.instructions+=1;goto B7435f5;
case 0x7435fa:goto L7435fa;
case 0x7435fd:c.instructions+=1;goto B7435fd;
case 0x743600:goto L743600;
case 0x743603:c.instructions+=5;goto B743603;
case 0x743604:c.instructions+=4;goto B743604;
case 0x743605:c.instructions+=3;goto B743605;
case 0x743606:c.instructions+=2;goto B743606;
case 0x743607:c.instructions+=1;goto B743607;
case 0x743610:goto L743610;
case 0x743614:c.instructions+=2;goto B743614;
case 0x743619:c.instructions+=1;goto B743619;
case 0x74361b:goto L74361b;
case 0x74361f:c.instructions+=2;goto B74361f;
case 0x743624:c.instructions+=1;goto B743624;
case 0x743626:goto L743626;
case 0x74362a:c.instructions+=3;goto B74362a;
case 0x74362d:c.instructions+=2;goto B74362d;
case 0x743630:c.instructions+=1;goto B743630;
case 0x743631:goto L743631;
case 0x743636:c.instructions+=1;goto B743636;
case 0x743638:goto L743638;
case 0x74363c:c.instructions+=3;goto B74363c;
case 0x743640:c.instructions+=2;goto B743640;
case 0x743646:c.instructions+=1;goto B743646;
case 0x743647:goto L743647;
case 0x74364c:c.instructions+=1;goto B74364c;
case 0x74364e:goto L74364e;
case 0x743652:c.instructions+=3;goto B743652;
case 0x743656:c.instructions+=2;goto B743656;
case 0x74365c:c.instructions+=1;goto B74365c;
case 0x74365d:goto L74365d;
case 0x743662:c.instructions+=1;goto B743662;
case 0x743664:goto L743664;
case 0x743668:c.instructions+=2;goto B743668;
case 0x74366c:c.instructions+=1;goto B74366c;
case 0x743672:goto L743672;
case 0x743680:goto L743680;
case 0x743681:c.instructions+=6;goto B743681;
case 0x743682:c.instructions+=5;goto B743682;
case 0x743686:c.instructions+=4;goto B743686;
case 0x743688:c.instructions+=3;goto B743688;
case 0x74368b:c.instructions+=2;goto B74368b;
case 0x74368f:c.instructions+=1;goto B74368f;
case 0x743695:goto L743695;
case 0x74369b:c.instructions+=1;goto B74369b;
case 0x7436a1:goto L7436a1;
case 0x7436a5:c.instructions+=5;goto B7436a5;
case 0x7436a6:c.instructions+=4;goto B7436a6;
case 0x7436aa:c.instructions+=3;goto B7436aa;
case 0x7436ac:c.instructions+=2;goto B7436ac;
case 0x7436ae:c.instructions+=1;goto B7436ae;
case 0x7436b1:goto L7436b1;
case 0x7436b3:c.instructions+=4;goto B7436b3;
case 0x7436b6:c.instructions+=3;goto B7436b6;
case 0x7436b7:c.instructions+=2;goto B7436b7;
case 0x7436b9:c.instructions+=1;goto B7436b9;
case 0x7436bb:goto L7436bb;
case 0x7436bd:c.instructions+=11;goto B7436bd;
case 0x7436bf:c.instructions+=10;goto B7436bf;
case 0x7436c2:c.instructions+=9;goto B7436c2;
case 0x7436c3:c.instructions+=8;goto B7436c3;
case 0x7436c6:c.instructions+=7;goto B7436c6;
case 0x7436cc:c.instructions+=6;goto B7436cc;
case 0x7436cd:c.instructions+=5;goto B7436cd;
case 0x7436d0:c.instructions+=4;goto B7436d0;
case 0x7436d3:c.instructions+=3;goto B7436d3;
case 0x7436d5:c.instructions+=2;goto B7436d5;
case 0x7436da:c.instructions+=1;goto B7436da;
case 0x7436e0:goto L7436e0;
case 0x7436e2:c.instructions+=2;goto B7436e2;
case 0x7436e4:c.instructions+=1;goto B7436e4;
case 0x7436e6:goto L7436e6;
case 0x7436e7:c.instructions+=1;goto B7436e7;
case 0x7436ea:goto L7436ea;
case 0x7436ed:goto L7436ed;
case 0x7436f3:c.instructions+=4;goto B7436f3;
case 0x7436fa:c.instructions+=3;goto B7436fa;
case 0x7436fd:c.instructions+=2;goto B7436fd;
case 0x7436fe:c.instructions+=1;goto B7436fe;
case 0x743700:goto L743700;
case 0x743705:c.instructions+=1;goto B743705;
case 0x743707:goto L743707;
case 0x74370a:c.instructions+=2;goto B74370a;
case 0x74370c:c.instructions+=1;goto B74370c;
case 0x74370e:goto L74370e;
case 0x743710:c.instructions+=1;goto B743710;
case 0x743715:goto L743715;
case 0x743716:c.instructions+=2;goto B743716;
case 0x743719:c.instructions+=1;goto B743719;
case 0x74371e:goto L74371e;
case 0x743721:goto L743721;
case 0x743725:c.instructions+=8;goto B743725;
case 0x743728:c.instructions+=7;goto B743728;
case 0x74372a:c.instructions+=6;goto B74372a;
case 0x74372f:c.instructions+=5;goto B74372f;
case 0x743734:c.instructions+=4;goto B743734;
case 0x743735:c.instructions+=3;goto B743735;
case 0x74373a:c.instructions+=2;goto B74373a;
case 0x74373b:c.instructions+=1;goto B74373b;
case 0x743740:goto L743740;
case 0x743743:c.instructions+=7;goto B743743;
case 0x743744:c.instructions+=6;goto B743744;
case 0x743745:c.instructions+=5;goto B743745;
case 0x743746:c.instructions+=4;goto B743746;
case 0x743748:c.instructions+=3;goto B743748;
case 0x743749:c.instructions+=2;goto B743749;
case 0x74374a:c.instructions+=1;goto B74374a;
case 0x74374b:goto L74374b;
case 0x74374f:c.instructions+=2;goto B74374f;
case 0x743752:c.instructions+=1;goto B743752;
case 0x743754:goto L743754;
case 0x74375a:c.instructions+=6;goto B74375a;
case 0x743760:c.instructions+=5;goto B743760;
case 0x743763:c.instructions+=4;goto B743763;
case 0x743764:c.instructions+=3;goto B743764;
case 0x743765:c.instructions+=2;goto B743765;
case 0x743766:c.instructions+=1;goto B743766;
case 0x74376b:goto L74376b;
case 0x74376e:c.instructions+=2;goto B74376e;
case 0x743770:c.instructions+=1;goto B743770;
case 0x74377a:goto L74377a;
case 0x74377e:c.instructions+=2;goto B74377e;
case 0x743781:c.instructions+=1;goto B743781;
case 0x743783:goto L743783;
case 0x743789:c.instructions+=6;goto B743789;
case 0x74378f:c.instructions+=5;goto B74378f;
case 0x743792:c.instructions+=4;goto B743792;
case 0x743793:c.instructions+=3;goto B743793;
case 0x743794:c.instructions+=2;goto B743794;
case 0x743795:c.instructions+=1;goto B743795;
case 0x74379a:goto L74379a;
case 0x74379d:c.instructions+=2;goto B74379d;
case 0x7437a3:c.instructions+=1;goto B7437a3;
case 0x7437ad:goto L7437ad;
case 0x7437b1:c.instructions+=2;goto B7437b1;
case 0x7437b4:c.instructions+=1;goto B7437b4;
case 0x7437b6:goto L7437b6;
case 0x7437bc:c.instructions+=6;goto B7437bc;
case 0x7437c2:c.instructions+=5;goto B7437c2;
case 0x7437c5:c.instructions+=4;goto B7437c5;
case 0x7437c6:c.instructions+=3;goto B7437c6;
case 0x7437c7:c.instructions+=2;goto B7437c7;
case 0x7437c8:c.instructions+=1;goto B7437c8;
case 0x7437cd:goto L7437cd;
case 0x7437d3:c.instructions+=4;goto B7437d3;
case 0x7437d5:c.instructions+=3;goto B7437d5;
case 0x7437d8:c.instructions+=2;goto B7437d8;
case 0x7437da:c.instructions+=1;goto B7437da;
case 0x7437dc:goto L7437dc;
case 0x7437e2:c.instructions+=2;goto B7437e2;
case 0x7437e4:c.instructions+=1;goto B7437e4;
case 0x7437e6:goto L7437e6;
case 0x7437e8:c.instructions+=1;goto B7437e8;
case 0x7437ea:goto L7437ea;
case 0x7437ef:goto L7437ef;
case 0x7437f5:goto L7437f5;
case 0x7437f9:c.instructions+=2;goto B7437f9;
case 0x7437fc:c.instructions+=1;goto B7437fc;
case 0x7437fe:goto L7437fe;
case 0x743804:c.instructions+=6;goto B743804;
case 0x74380a:c.instructions+=5;goto B74380a;
case 0x74380d:c.instructions+=4;goto B74380d;
case 0x74380e:c.instructions+=3;goto B74380e;
case 0x74380f:c.instructions+=2;goto B74380f;
case 0x743810:c.instructions+=1;goto B743810;
case 0x743815:goto L743815;
case 0x743818:c.instructions+=2;goto B743818;
case 0x74381e:c.instructions+=1;goto B74381e;
case 0x743828:goto L743828;
case 0x74382a:c.instructions+=2;goto B74382a;
case 0x74382f:c.instructions+=1;goto B74382f;
case 0x743830:goto L743830;
case 0x743833:c.instructions+=1;goto B743833;
case 0x743835:goto L743835;
case 0x743839:c.instructions+=2;goto B743839;
case 0x74383b:c.instructions+=1;goto B74383b;
case 0x74383d:goto L74383d;
case 0x743841:c.instructions+=4;goto B743841;
case 0x743843:c.instructions+=3;goto B743843;
case 0x743844:c.instructions+=2;goto B743844;
case 0x743845:c.instructions+=1;goto B743845;
case 0x743848:goto L743848;
case 0x74384a:goto L74384a;
case 0x74384c:c.instructions+=1;goto B74384c;
case 0x74384e:goto L74384e;
case 0x743852:c.instructions+=4;goto B743852;
case 0x743854:c.instructions+=3;goto B743854;
case 0x743855:c.instructions+=2;goto B743855;
case 0x743856:c.instructions+=1;goto B743856;
case 0x743859:goto L743859;
case 0x74385c:goto L74385c;
case 0x74385f:c.instructions+=2;goto B74385f;
case 0x743860:c.instructions+=1;goto B743860;
case 0x743862:goto L743862;
case 0x743863:c.instructions+=6;goto B743863;
case 0x743864:c.instructions+=5;goto B743864;
case 0x743865:c.instructions+=4;goto B743865;
case 0x743867:c.instructions+=3;goto B743867;
case 0x743868:c.instructions+=2;goto B743868;
case 0x743869:c.instructions+=1;goto B743869;
case 0x74386a:goto L74386a;
case 0x74386d:c.instructions+=3;goto B74386d;
case 0x74386e:c.instructions+=2;goto B74386e;
case 0x74386f:c.instructions+=1;goto B74386f;
case 0x743870:goto L743870;
case 0x743876:c.instructions+=11;goto B743876;
case 0x74387b:c.instructions+=10;goto B74387b;
case 0x74387c:c.instructions+=9;goto B74387c;
case 0x74387d:c.instructions+=8;goto B74387d;
case 0x74387e:c.instructions+=7;goto B74387e;
case 0x743885:c.instructions+=6;goto B743885;
case 0x743888:c.instructions+=5;goto B743888;
case 0x74388a:c.instructions+=4;goto B74388a;
case 0x74388c:c.instructions+=3;goto B74388c;
case 0x743893:c.instructions+=2;goto B743893;
case 0x743894:c.instructions+=1;goto B743894;
case 0x74389a:goto L74389a;
case 0x74389c:c.instructions+=1;goto B74389c;
case 0x7438a2:goto L7438a2;
case 0x7438a5:c.instructions+=1;goto B7438a5;
case 0x7438a7:goto L7438a7;
case 0x7438a8:c.instructions+=3;goto B7438a8;
case 0x7438ab:c.instructions+=2;goto B7438ab;
case 0x7438ae:c.instructions+=1;goto B7438ae;
case 0x7438b0:goto L7438b0;
case 0x7438b3:c.instructions+=1;goto B7438b3;
case 0x7438b9:goto L7438b9;
case 0x7438bb:c.instructions+=7;goto B7438bb;
case 0x7438bf:c.instructions+=6;goto B7438bf;
case 0x7438c0:c.instructions+=5;goto B7438c0;
case 0x7438c3:c.instructions+=4;goto B7438c3;
case 0x7438c4:c.instructions+=3;goto B7438c4;
case 0x7438c9:c.instructions+=2;goto B7438c9;
case 0x7438ca:c.instructions+=1;goto B7438ca;
case 0x7438cf:goto L7438cf;
case 0x7438d2:c.instructions+=2;goto B7438d2;
case 0x7438d4:c.instructions+=1;goto B7438d4;
case 0x7438d6:goto L7438d6;
case 0x7438da:c.instructions+=3;goto B7438da;
case 0x7438dc:c.instructions+=2;goto B7438dc;
case 0x7438dd:c.instructions+=1;goto B7438dd;
case 0x7438df:goto L7438df;
case 0x7438e2:c.instructions+=17;goto B7438e2;
case 0x7438e5:c.instructions+=16;goto B7438e5;
case 0x7438e6:c.instructions+=15;goto B7438e6;
case 0x7438e8:c.instructions+=14;goto B7438e8;
case 0x7438eb:c.instructions+=13;goto B7438eb;
case 0x7438ee:c.instructions+=12;goto B7438ee;
case 0x7438ef:c.instructions+=11;goto B7438ef;
case 0x7438f1:c.instructions+=10;goto B7438f1;
case 0x7438f4:c.instructions+=9;goto B7438f4;
case 0x7438f7:c.instructions+=8;goto B7438f7;
case 0x7438f8:c.instructions+=7;goto B7438f8;
case 0x7438fb:c.instructions+=6;goto B7438fb;
case 0x7438fe:c.instructions+=5;goto B7438fe;
case 0x7438ff:c.instructions+=4;goto B7438ff;
case 0x743903:c.instructions+=3;goto B743903;
case 0x743908:c.instructions+=2;goto B743908;
case 0x743909:c.instructions+=1;goto B743909;
case 0x74390e:goto L74390e;
case 0x743911:c.instructions+=6;goto B743911;
case 0x743915:c.instructions+=5;goto B743915;
case 0x743916:c.instructions+=4;goto B743916;
case 0x743919:c.instructions+=3;goto B743919;
case 0x74391a:c.instructions+=2;goto B74391a;
case 0x74391b:c.instructions+=1;goto B74391b;
case 0x743920:goto L743920;
case 0x743923:c.instructions+=1;goto B743923;
case 0x743925:goto L743925;
case 0x743929:c.instructions+=5;goto B743929;
case 0x74392e:c.instructions+=4;goto B74392e;
case 0x74392f:c.instructions+=3;goto B74392f;
case 0x743932:c.instructions+=2;goto B743932;
case 0x743935:c.instructions+=1;goto B743935;
case 0x74393a:goto L74393a;
case 0x74393d:c.instructions+=6;goto B74393d;
case 0x743941:c.instructions+=5;goto B743941;
case 0x743942:c.instructions+=4;goto B743942;
case 0x743945:c.instructions+=3;goto B743945;
case 0x743946:c.instructions+=2;goto B743946;
case 0x743947:c.instructions+=1;goto B743947;
case 0x74394c:goto L74394c;
case 0x74394f:goto L74394f;
case 0x743951:c.instructions+=1;goto B743951;
case 0x743957:goto L743957;
case 0x743959:c.instructions+=2;goto B743959;
case 0x74395b:c.instructions+=1;goto B74395b;
case 0x74395d:goto L74395d;
case 0x74395f:c.instructions+=1;goto B74395f;
case 0x743961:goto L743961;
case 0x743962:c.instructions+=1;goto B743962;
case 0x743965:goto L743965;
case 0x743968:c.instructions+=1;goto B743968;
case 0x74396a:goto L74396a;
case 0x74396c:c.instructions+=2;goto B74396c;
case 0x74396d:c.instructions+=1;goto B74396d;
case 0x743970:goto L743970;
case 0x743973:c.instructions+=2;goto B743973;
case 0x743976:c.instructions+=1;goto B743976;
case 0x743978:goto L743978;
case 0x74397b:c.instructions+=2;goto B74397b;
case 0x74397d:c.instructions+=1;goto B74397d;
case 0x74397f:goto L74397f;
case 0x743982:goto L743982;
case 0x743985:c.instructions+=3;goto B743985;
case 0x743988:c.instructions+=2;goto B743988;
case 0x74398a:c.instructions+=1;goto B74398a;
case 0x74398c:goto L74398c;
case 0x74398d:c.instructions+=3;goto B74398d;
case 0x743990:c.instructions+=2;goto B743990;
case 0x743993:c.instructions+=1;goto B743993;
case 0x743995:goto L743995;
case 0x743996:c.instructions+=6;goto B743996;
case 0x743997:c.instructions+=5;goto B743997;
case 0x743998:c.instructions+=4;goto B743998;
case 0x74399a:c.instructions+=3;goto B74399a;
case 0x74399b:c.instructions+=2;goto B74399b;
case 0x7439a2:c.instructions+=1;goto B7439a2;
case 0x7439a7:goto L7439a7;
case 0x7439ad:c.instructions+=1;goto B7439ad;
case 0x7439ae:goto L7439ae;
case 0x7439b1:c.instructions+=10;goto B7439b1;
case 0x7439b4:c.instructions+=9;goto B7439b4;
case 0x7439b6:c.instructions+=8;goto B7439b6;
case 0x7439bd:c.instructions+=7;goto B7439bd;
case 0x7439c0:c.instructions+=6;goto B7439c0;
case 0x7439c3:c.instructions+=5;goto B7439c3;
case 0x7439ca:c.instructions+=4;goto B7439ca;
case 0x7439cd:c.instructions+=3;goto B7439cd;
case 0x7439d1:c.instructions+=2;goto B7439d1;
case 0x7439d4:c.instructions+=1;goto B7439d4;
case 0x7439d6:goto L7439d6;
case 0x7439d8:c.instructions+=2;goto B7439d8;
case 0x7439de:c.instructions+=1;goto B7439de;
case 0x7439e0:goto L7439e0;
case 0x7439e4:c.instructions+=1;goto B7439e4;
case 0x7439e6:goto L7439e6;
case 0x7439e8:c.instructions+=2;goto B7439e8;
case 0x7439ea:c.instructions+=1;goto B7439ea;
case 0x7439ec:goto L7439ec;
case 0x7439ed:c.instructions+=1;goto B7439ed;
case 0x7439f0:goto L7439f0;
case 0x7439f3:c.instructions+=1;goto B7439f3;
case 0x7439f9:goto L7439f9;
case 0x7439fa:c.instructions+=3;goto B7439fa;
case 0x7439fd:c.instructions+=2;goto B7439fd;
case 0x743a00:c.instructions+=1;goto B743a00;
case 0x743a02:goto L743a02;
case 0x743a05:c.instructions+=2;goto B743a05;
case 0x743a07:c.instructions+=1;goto B743a07;
case 0x743a09:goto L743a09;
case 0x743a0a:c.instructions+=1;goto B743a0a;
case 0x743a0f:goto L743a0f;
case 0x743a12:c.instructions+=1;goto B743a12;
case 0x743a19:goto L743a19;
case 0x743a1c:c.instructions+=2;goto B743a1c;
case 0x743a1e:c.instructions+=1;goto B743a1e;
case 0x743a20:goto L743a20;
case 0x743a21:c.instructions+=1;goto B743a21;
case 0x743a26:goto L743a26;
case 0x743a29:c.instructions+=1;goto B743a29;
case 0x743a30:goto L743a30;
case 0x743a37:c.instructions+=6;goto B743a37;
case 0x743a3e:c.instructions+=5;goto B743a3e;
case 0x743a3f:c.instructions+=4;goto B743a3f;
case 0x743a40:c.instructions+=3;goto B743a40;
case 0x743a41:c.instructions+=2;goto B743a41;
case 0x743a42:c.instructions+=1;goto B743a42;
case 0x743a47:goto L743a47;
case 0x743a4d:c.instructions+=1;goto B743a4d;
case 0x743a50:goto L743a50;
case 0x743a51:c.instructions+=4;goto B743a51;
case 0x743a55:c.instructions+=3;goto B743a55;
case 0x743a58:c.instructions+=2;goto B743a58;
case 0x743a5a:c.instructions+=1;goto B743a5a;
case 0x743a5c:goto L743a5c;
case 0x743a5e:c.instructions+=1;goto B743a5e;
case 0x743a63:goto L743a63;
case 0x743a66:c.instructions+=1;goto B743a66;
case 0x743a69:goto L743a69;
case 0x743a6d:c.instructions+=2;goto B743a6d;
case 0x743a6f:c.instructions+=1;goto B743a6f;
case 0x743a71:goto L743a71;
case 0x743a74:goto L743a74;
case 0x743a77:c.instructions+=3;goto B743a77;
case 0x743a79:c.instructions+=2;goto B743a79;
case 0x743a7a:c.instructions+=1;goto B743a7a;
case 0x743a7c:goto L743a7c;
case 0x743a7d:goto L743a7d;
case 0x743a81:c.instructions+=6;goto B743a81;
case 0x743a83:c.instructions+=5;goto B743a83;
case 0x743a85:c.instructions+=4;goto B743a85;
case 0x743a86:c.instructions+=3;goto B743a86;
case 0x743a87:c.instructions+=2;goto B743a87;
case 0x743a88:c.instructions+=1;goto B743a88;
case 0x743a8d:goto L743a8d;
case 0x743a90:c.instructions+=1;goto B743a90;
case 0x743aa0:goto L743aa0;
case 0x743aa1:c.instructions+=4;goto B743aa1;
case 0x743aa5:c.instructions+=3;goto B743aa5;
case 0x743aa8:c.instructions+=2;goto B743aa8;
case 0x743aaa:c.instructions+=1;goto B743aaa;
case 0x743aac:goto L743aac;
case 0x743aae:c.instructions+=1;goto B743aae;
case 0x743ab3:goto L743ab3;
case 0x743ab6:c.instructions+=1;goto B743ab6;
case 0x743ab9:goto L743ab9;
case 0x743abd:c.instructions+=2;goto B743abd;
case 0x743abf:c.instructions+=1;goto B743abf;
case 0x743ac1:goto L743ac1;
case 0x743ac4:goto L743ac4;
case 0x743ac7:c.instructions+=3;goto B743ac7;
case 0x743ac9:c.instructions+=2;goto B743ac9;
case 0x743aca:c.instructions+=1;goto B743aca;
case 0x743acc:goto L743acc;
case 0x743acd:goto L743acd;
case 0x743ad1:c.instructions+=8;goto B743ad1;
case 0x743ad3:c.instructions+=7;goto B743ad3;
case 0x743ad4:c.instructions+=6;goto B743ad4;
case 0x743ad8:c.instructions+=5;goto B743ad8;
case 0x743ad9:c.instructions+=4;goto B743ad9;
case 0x743ade:c.instructions+=3;goto B743ade;
case 0x743adf:c.instructions+=2;goto B743adf;
case 0x743ae0:c.instructions+=1;goto B743ae0;
case 0x743ae5:goto L743ae5;
case 0x743ae8:c.instructions+=1;goto B743ae8;
case 0x743af0:goto L743af0;
case 0x743af5:c.instructions+=1;goto B743af5;
case 0x743afa:goto L743afa;
case 0x743afc:c.instructions+=3;goto B743afc;
case 0x743aff:c.instructions+=2;goto B743aff;
case 0x743b01:c.instructions+=1;goto B743b01;
case 0x743b03:goto L743b03;
case 0x743b04:c.instructions+=3;goto B743b04;
case 0x743b09:c.instructions+=2;goto B743b09;
case 0x743b0b:c.instructions+=1;goto B743b0b;
case 0x743b0d:goto L743b0d;
case 0x743b0f:goto L743b0f;
case 0x743b10:goto L743b10;
case 0x743b15:c.instructions+=5;goto B743b15;
case 0x743b1b:c.instructions+=4;goto B743b1b;
case 0x743b21:c.instructions+=3;goto B743b21;
case 0x743b28:c.instructions+=2;goto B743b28;
case 0x743b2a:c.instructions+=1;goto B743b2a;
case 0x743b30:goto L743b30;
case 0x743b31:c.instructions+=3;goto B743b31;
case 0x743b35:c.instructions+=2;goto B743b35;
case 0x743b36:c.instructions+=1;goto B743b36;
case 0x743b3b:goto L743b3b;
case 0x743b3c:c.instructions+=1;goto B743b3c;
case 0x743b41:goto L743b41;
case 0x743b44:c.instructions+=2;goto B743b44;
case 0x743b45:c.instructions+=1;goto B743b45;
case 0x743b50:goto L743b50;
case 0x743b51:c.instructions+=2;goto B743b51;
case 0x743b53:c.instructions+=1;goto B743b53;
case 0x743b58:goto L743b58;
case 0x743b5a:c.instructions+=3;goto B743b5a;
case 0x743b5d:c.instructions+=2;goto B743b5d;
case 0x743b5f:c.instructions+=1;goto B743b5f;
case 0x743b61:goto L743b61;
case 0x743b65:c.instructions+=4;goto B743b65;
case 0x743b67:c.instructions+=3;goto B743b67;
case 0x743b68:c.instructions+=2;goto B743b68;
case 0x743b6d:c.instructions+=1;goto B743b6d;
case 0x743b6f:goto L743b6f;
case 0x743b71:goto L743b71;
case 0x743b75:c.instructions+=14;goto B743b75;
case 0x743b79:c.instructions+=13;goto B743b79;
case 0x743b7c:c.instructions+=12;goto B743b7c;
case 0x743b7f:c.instructions+=11;goto B743b7f;
case 0x743b82:c.instructions+=10;goto B743b82;
case 0x743b88:c.instructions+=9;goto B743b88;
case 0x743b8b:c.instructions+=8;goto B743b8b;
case 0x743b91:c.instructions+=7;goto B743b91;
case 0x743b92:c.instructions+=6;goto B743b92;
case 0x743b98:c.instructions+=5;goto B743b98;
case 0x743b9e:c.instructions+=4;goto B743b9e;
case 0x743ba4:c.instructions+=3;goto B743ba4;
case 0x743ba6:c.instructions+=2;goto B743ba6;
case 0x743bac:c.instructions+=1;goto B743bac;
case 0x743bae:goto L743bae;
case 0x743bb3:goto L743bb3;
case 0x743bb6:c.instructions+=1;goto B743bb6;
case 0x743bb8:goto L743bb8;
case 0x743bbb:c.instructions+=3;goto B743bbb;
case 0x743bbd:c.instructions+=2;goto B743bbd;
case 0x743bbf:c.instructions+=1;goto B743bbf;
case 0x743bc1:goto L743bc1;
case 0x743bc3:c.instructions+=5;goto B743bc3;
case 0x743bc5:c.instructions+=4;goto B743bc5;
case 0x743bc8:c.instructions+=3;goto B743bc8;
case 0x743bca:c.instructions+=2;goto B743bca;
case 0x743bcb:c.instructions+=1;goto B743bcb;
case 0x743bd0:goto L743bd0;
case 0x743bd3:c.instructions+=2;goto B743bd3;
case 0x743bd6:c.instructions+=1;goto B743bd6;
case 0x743bd7:goto L743bd7;
case 0x743bd9:c.instructions+=2;goto B743bd9;
case 0x743bda:c.instructions+=1;goto B743bda;
case 0x743be0:goto L743be0;
case 0x743be1:c.instructions+=5;goto B743be1;
case 0x743be2:c.instructions+=4;goto B743be2;
case 0x743be4:c.instructions+=3;goto B743be4;
case 0x743be6:c.instructions+=2;goto B743be6;
case 0x743beb:c.instructions+=1;goto B743beb;
case 0x743bed:goto L743bed;
case 0x743bef:goto L743bef;
case 0x743bf5:c.instructions+=2;goto B743bf5;
case 0x743bf7:c.instructions+=1;goto B743bf7;
case 0x743bf9:goto L743bf9;
case 0x743bfc:c.instructions+=1;goto B743bfc;
case 0x743bfe:goto L743bfe;
case 0x743c04:c.instructions+=1;goto B743c04;
case 0x743c06:goto L743c06;
case 0x743c09:c.instructions+=5;goto B743c09;
case 0x743c0f:c.instructions+=4;goto B743c0f;
case 0x743c11:c.instructions+=3;goto B743c11;
case 0x743c13:c.instructions+=2;goto B743c13;
case 0x743c18:c.instructions+=1;goto B743c18;
case 0x743c19:goto L743c19;
case 0x743c1b:goto L743c1b;
case 0x743c20:goto L743c20;
case 0x743c23:goto L743c23;
case 0x743c29:c.instructions+=6;goto B743c29;
case 0x743c2b:c.instructions+=5;goto B743c2b;
case 0x743c2d:c.instructions+=4;goto B743c2d;
case 0x743c2e:c.instructions+=3;goto B743c2e;
case 0x743c31:c.instructions+=2;goto B743c31;
case 0x743c32:c.instructions+=1;goto B743c32;
case 0x743c40:goto L743c40;
case 0x743c44:c.instructions+=7;goto B743c44;
case 0x743c4a:c.instructions+=6;goto B743c4a;
case 0x743c50:c.instructions+=5;goto B743c50;
case 0x743c52:c.instructions+=4;goto B743c52;
case 0x743c53:c.instructions+=3;goto B743c53;
case 0x743c54:c.instructions+=2;goto B743c54;
case 0x743c55:c.instructions+=1;goto B743c55;
case 0x743c57:goto L743c57;
case 0x743c60:goto L743c60;
case 0x743c62:c.instructions+=2;goto B743c62;
case 0x743c69:c.instructions+=1;goto B743c69;
case 0x743c6b:goto L743c6b;
case 0x743c6e:c.instructions+=1;goto B743c6e;
case 0x743c70:goto L743c70;
case 0x743c75:c.instructions+=3;goto B743c75;
case 0x743c77:c.instructions+=2;goto B743c77;
case 0x743c79:c.instructions+=1;goto B743c79;
case 0x743c7b:goto L743c7b;
case 0x743c7d:goto L743c7d;
case 0x743c7f:goto L743c7f;
case 0x743c82:c.instructions+=5;goto B743c82;
case 0x743c86:c.instructions+=4;goto B743c86;
case 0x743c88:c.instructions+=3;goto B743c88;
case 0x743c8a:c.instructions+=2;goto B743c8a;
case 0x743c8f:c.instructions+=1;goto B743c8f;
case 0x743c90:goto L743c90;
case 0x743c92:goto L743c92;
case 0x743c97:goto L743c97;
case 0x743c9b:c.instructions+=9;goto B743c9b;
case 0x743ca1:c.instructions+=8;goto B743ca1;
case 0x743ca4:c.instructions+=7;goto B743ca4;
case 0x743ca5:c.instructions+=6;goto B743ca5;
case 0x743ca6:c.instructions+=5;goto B743ca6;
case 0x743ca7:c.instructions+=4;goto B743ca7;
case 0x743cad:c.instructions+=3;goto B743cad;
case 0x743cb2:c.instructions+=2;goto B743cb2;
case 0x743cb3:c.instructions+=1;goto B743cb3;
case 0x743cb4:goto L743cb4;
case 0x743cb8:c.instructions+=2;goto B743cb8;
case 0x743cbb:c.instructions+=1;goto B743cbb;
case 0x743cbd:goto L743cbd;
case 0x743cc0:c.instructions+=2;goto B743cc0;
case 0x743cc3:c.instructions+=1;goto B743cc3;
case 0x743cc5:goto L743cc5;
case 0x743cc6:c.instructions+=4;goto B743cc6;
case 0x743cc7:c.instructions+=3;goto B743cc7;
case 0x743cc9:c.instructions+=2;goto B743cc9;
case 0x743cca:c.instructions+=1;goto B743cca;
case 0x743cd0:goto L743cd0;
case 0x743cd1:c.instructions+=3;goto B743cd1;
case 0x743cd6:c.instructions+=2;goto B743cd6;
case 0x743cd9:c.instructions+=1;goto B743cd9;
case 0x743ce0:goto L743ce0;
case 0x743ce6:c.instructions+=2;goto B743ce6;
case 0x743ce8:c.instructions+=1;goto B743ce8;
case 0x743cea:goto L743cea;
case 0x743ced:c.instructions+=3;goto B743ced;
case 0x743cee:c.instructions+=2;goto B743cee;
case 0x743cf4:c.instructions+=1;goto B743cf4;
case 0x743cf9:goto L743cf9;
case 0x743cff:c.instructions+=3;goto B743cff;
case 0x743d02:c.instructions+=2;goto B743d02;
case 0x743d04:c.instructions+=1;goto B743d04;
case 0x743d06:goto L743d06;
case 0x743d09:c.instructions+=2;goto B743d09;
case 0x743d0c:c.instructions+=1;goto B743d0c;
case 0x743d20:goto L743d20;
case 0x743d26:c.instructions+=4;goto B743d26;
case 0x743d28:c.instructions+=3;goto B743d28;
case 0x743d29:c.instructions+=2;goto B743d29;
case 0x743d2d:c.instructions+=1;goto B743d2d;
case 0x743d2f:goto L743d2f;
case 0x743d30:c.instructions+=3;goto B743d30;
case 0x743d31:c.instructions+=2;goto B743d31;
case 0x743d32:c.instructions+=1;goto B743d32;
case 0x743d37:goto L743d37;
case 0x743d39:c.instructions+=3;goto B743d39;
case 0x743d3c:c.instructions+=2;goto B743d3c;
case 0x743d3e:c.instructions+=1;goto B743d3e;
case 0x743d40:goto L743d40;
case 0x743d46:c.instructions+=4;goto B743d46;
case 0x743d47:c.instructions+=3;goto B743d47;
case 0x743d48:c.instructions+=2;goto B743d48;
case 0x743d49:c.instructions+=1;goto B743d49;
case 0x743d4e:goto L743d4e;
case 0x743d50:c.instructions+=3;goto B743d50;
case 0x743d53:c.instructions+=2;goto B743d53;
case 0x743d55:c.instructions+=1;goto B743d55;
case 0x743d57:goto L743d57;
case 0x743d5a:c.instructions+=1;goto B743d5a;
case 0x743d5c:goto L743d5c;
case 0x743d5d:c.instructions+=5;goto B743d5d;
case 0x743d60:c.instructions+=4;goto B743d60;
case 0x743d65:c.instructions+=3;goto B743d65;
case 0x743d66:c.instructions+=2;goto B743d66;
case 0x743d69:c.instructions+=1;goto B743d69;
case 0x743d6e:goto L743d6e;
case 0x743d74:c.instructions+=4;goto B743d74;
case 0x743d75:c.instructions+=3;goto B743d75;
case 0x743d76:c.instructions+=2;goto B743d76;
case 0x743d77:c.instructions+=1;goto B743d77;
case 0x743d7c:goto L743d7c;
case 0x743d7f:goto L743d7f;
case 0x743d80:goto L743d80;
case 0x743d81:goto L743d81;
case 0x743d82:c.instructions+=1;goto B743d82;
case 0x743d90:goto L743d90;
case 0x743d93:c.instructions+=4;goto B743d93;
case 0x743d95:c.instructions+=3;goto B743d95;
case 0x743d96:c.instructions+=2;goto B743d96;
case 0x743d9a:c.instructions+=1;goto B743d9a;
case 0x743d9c:goto L743d9c;
case 0x743d9f:c.instructions+=1;goto B743d9f;
case 0x743da1:goto L743da1;
case 0x743da2:c.instructions+=4;goto B743da2;
case 0x743da3:c.instructions+=3;goto B743da3;
case 0x743da9:c.instructions+=2;goto B743da9;
case 0x743dae:c.instructions+=1;goto B743dae;
case 0x743db0:goto L743db0;
case 0x743db3:c.instructions+=2;goto B743db3;
case 0x743db6:c.instructions+=1;goto B743db6;
case 0x743db8:goto L743db8;
case 0x743dbb:c.instructions+=4;goto B743dbb;
case 0x743dbc:c.instructions+=3;goto B743dbc;
case 0x743dbd:c.instructions+=2;goto B743dbd;
case 0x743dbe:c.instructions+=1;goto B743dbe;
case 0x743dc0:goto L743dc0;
case 0x743dc3:goto L743dc3;
case 0x743dc6:c.instructions+=2;goto B743dc6;
case 0x743dc7:c.instructions+=1;goto B743dc7;
case 0x743dc9:goto L743dc9;
case 0x743dca:c.instructions+=1;goto B743dca;
case 0x743dcb:goto L743dcb;
case 0x743dcc:c.instructions+=1;goto B743dcc;
case 0x743dd0:goto L743dd0;
case 0x743dd3:c.instructions+=6;goto B743dd3;
case 0x743dd4:c.instructions+=5;goto B743dd4;
case 0x743dd5:c.instructions+=4;goto B743dd5;
case 0x743dd6:c.instructions+=3;goto B743dd6;
case 0x743dd8:c.instructions+=2;goto B743dd8;
case 0x743dda:c.instructions+=1;goto B743dda;
case 0x743de0:goto L743de0;
case 0x743de3:c.instructions+=1;goto B743de3;
case 0x743de5:goto L743de5;
case 0x743de7:c.instructions+=1;goto B743de7;
case 0x743de9:goto L743de9;
case 0x743dec:c.instructions+=2;goto B743dec;
case 0x743ded:c.instructions+=1;goto B743ded;
case 0x743df2:goto L743df2;
case 0x743df5:c.instructions+=2;goto B743df5;
case 0x743df7:c.instructions+=1;goto B743df7;
case 0x743df9:goto L743df9;
case 0x743dfc:c.instructions+=11;goto B743dfc;
case 0x743dff:c.instructions+=10;goto B743dff;
case 0x743e00:c.instructions+=9;goto B743e00;
case 0x743e04:c.instructions+=8;goto B743e04;
case 0x743e05:c.instructions+=7;goto B743e05;
case 0x743e06:c.instructions+=6;goto B743e06;
case 0x743e0a:c.instructions+=5;goto B743e0a;
case 0x743e12:c.instructions+=4;goto B743e12;
case 0x743e16:c.instructions+=3;goto B743e16;
case 0x743e1a:c.instructions+=2;goto B743e1a;
case 0x743e1e:c.instructions+=1;goto B743e1e;
case 0x743e20:goto L743e20;
case 0x743e23:goto L743e23;
case 0x743e24:c.instructions+=3;goto B743e24;
case 0x743e27:c.instructions+=2;goto B743e27;
case 0x743e2a:c.instructions+=1;goto B743e2a;
case 0x743e2c:goto L743e2c;
case 0x743e2d:c.instructions+=4;goto B743e2d;
case 0x743e2e:c.instructions+=3;goto B743e2e;
case 0x743e2f:c.instructions+=2;goto B743e2f;
case 0x743e32:c.instructions+=1;goto B743e32;
case 0x743e40:goto L743e40;
case 0x743e46:c.instructions+=8;goto B743e46;
case 0x743e4b:c.instructions+=7;goto B743e4b;
case 0x743e4c:c.instructions+=6;goto B743e4c;
case 0x743e4d:c.instructions+=5;goto B743e4d;
case 0x743e54:c.instructions+=4;goto B743e54;
case 0x743e57:c.instructions+=3;goto B743e57;
case 0x743e58:c.instructions+=2;goto B743e58;
case 0x743e59:c.instructions+=1;goto B743e59;
case 0x743e5e:goto L743e5e;
case 0x743e60:c.instructions+=2;goto B743e60;
case 0x743e61:c.instructions+=1;goto B743e61;
case 0x743e66:goto L743e66;
case 0x743e68:c.instructions+=6;goto B743e68;
case 0x743e69:c.instructions+=5;goto B743e69;
case 0x743e6d:c.instructions+=4;goto B743e6d;
case 0x743e6e:c.instructions+=3;goto B743e6e;
case 0x743e6f:c.instructions+=2;goto B743e6f;
case 0x743e72:c.instructions+=1;goto B743e72;
case 0x743e77:goto L743e77;
case 0x743e7a:c.instructions+=2;goto B743e7a;
case 0x743e7c:c.instructions+=1;goto B743e7c;
case 0x743e82:goto L743e82;
case 0x743e87:goto L743e87;
case 0x743e8b:c.instructions+=3;goto B743e8b;
case 0x743e8d:c.instructions+=2;goto B743e8d;
case 0x743e8f:c.instructions+=1;goto B743e8f;
case 0x743e95:goto L743e95;
case 0x743e99:c.instructions+=14;goto B743e99;
case 0x743e9d:c.instructions+=13;goto B743e9d;
case 0x743e9e:c.instructions+=12;goto B743e9e;
case 0x743ea5:c.instructions+=11;goto B743ea5;
case 0x743eaa:c.instructions+=10;goto B743eaa;
case 0x743eae:c.instructions+=9;goto B743eae;
case 0x743eb0:c.instructions+=8;goto B743eb0;
case 0x743eb5:c.instructions+=7;goto B743eb5;
case 0x743eb6:c.instructions+=6;goto B743eb6;
case 0x743eba:c.instructions+=5;goto B743eba;
case 0x743ebe:c.instructions+=4;goto B743ebe;
case 0x743ec6:c.instructions+=3;goto B743ec6;
case 0x743eca:c.instructions+=2;goto B743eca;
case 0x743ed1:c.instructions+=1;goto B743ed1;
case 0x743ed6:goto L743ed6;
case 0x743eda:c.instructions+=6;goto B743eda;
case 0x743edb:c.instructions+=5;goto B743edb;
case 0x743ee0:c.instructions+=4;goto B743ee0;
case 0x743ee7:c.instructions+=3;goto B743ee7;
case 0x743eec:c.instructions+=2;goto B743eec;
case 0x743eed:c.instructions+=1;goto B743eed;
case 0x743ef2:goto L743ef2;
case 0x743ef3:c.instructions+=5;goto B743ef3;
case 0x743ef8:c.instructions+=4;goto B743ef8;
case 0x743eff:c.instructions+=3;goto B743eff;
case 0x743f04:c.instructions+=2;goto B743f04;
case 0x743f05:c.instructions+=1;goto B743f05;
case 0x743f0a:goto L743f0a;
case 0x743f11:c.instructions+=5;goto B743f11;
case 0x743f12:c.instructions+=4;goto B743f12;
case 0x743f16:c.instructions+=3;goto B743f16;
case 0x743f17:c.instructions+=2;goto B743f17;
case 0x743f18:c.instructions+=1;goto B743f18;
case 0x743f1f:goto L743f1f;
case 0x743f22:goto L743f22;
case 0x743f23:c.instructions+=5;goto B743f23;
case 0x743f27:c.instructions+=4;goto B743f27;
case 0x743f28:c.instructions+=3;goto B743f28;
case 0x743f29:c.instructions+=2;goto B743f29;
case 0x743f2c:c.instructions+=1;goto B743f2c;
case 0x743f31:goto L743f31;
case 0x743f34:c.instructions+=2;goto B743f34;
case 0x743f36:c.instructions+=1;goto B743f36;
case 0x743f3c:goto L743f3c;
case 0x743f42:c.instructions+=2;goto B743f42;
case 0x743f44:c.instructions+=1;goto B743f44;
case 0x743f4a:goto L743f4a;
case 0x743f4d:c.instructions+=4;goto B743f4d;
case 0x743f53:c.instructions+=3;goto B743f53;
case 0x743f54:c.instructions+=2;goto B743f54;
case 0x743f55:c.instructions+=1;goto B743f55;
case 0x743f5a:goto L743f5a;
case 0x743f5c:c.instructions+=3;goto B743f5c;
case 0x743f5f:c.instructions+=2;goto B743f5f;
case 0x743f61:c.instructions+=1;goto B743f61;
case 0x743f63:goto L743f63;
case 0x743f64:c.instructions+=4;goto B743f64;
case 0x743f67:c.instructions+=3;goto B743f67;
case 0x743f6d:c.instructions+=2;goto B743f6d;
case 0x743f6e:c.instructions+=1;goto B743f6e;
case 0x743f73:goto L743f73;
case 0x743f75:c.instructions+=3;goto B743f75;
case 0x743f78:c.instructions+=2;goto B743f78;
case 0x743f7a:c.instructions+=1;goto B743f7a;
case 0x743f80:goto L743f80;
case 0x743f83:c.instructions+=6;goto B743f83;
case 0x743f85:c.instructions+=5;goto B743f85;
case 0x743f87:c.instructions+=4;goto B743f87;
case 0x743f8d:c.instructions+=3;goto B743f8d;
case 0x743f8e:c.instructions+=2;goto B743f8e;
case 0x743f8f:c.instructions+=1;goto B743f8f;
case 0x743f94:goto L743f94;
case 0x743f97:c.instructions+=2;goto B743f97;
case 0x743f99:c.instructions+=1;goto B743f99;
case 0x743f9b:goto L743f9b;
case 0x743f9c:c.instructions+=4;goto B743f9c;
case 0x743fa0:c.instructions+=3;goto B743fa0;
case 0x743fa5:c.instructions+=2;goto B743fa5;
case 0x743fa6:c.instructions+=1;goto B743fa6;
case 0x743fab:goto L743fab;
case 0x743fae:c.instructions+=3;goto B743fae;
case 0x743fb1:c.instructions+=2;goto B743fb1;
case 0x743fb5:c.instructions+=1;goto B743fb5;
case 0x743fb7:goto L743fb7;
case 0x743fb9:c.instructions+=4;goto B743fb9;
case 0x743fbb:c.instructions+=3;goto B743fbb;
case 0x743fbd:c.instructions+=2;goto B743fbd;
case 0x743fbf:c.instructions+=1;goto B743fbf;
case 0x743fc1:goto L743fc1;
case 0x743fc3:c.instructions+=1;goto B743fc3;
case 0x743fc5:goto L743fc5;
case 0x743fc8:c.instructions+=4;goto B743fc8;
case 0x743fcb:c.instructions+=3;goto B743fcb;
case 0x743fcd:c.instructions+=2;goto B743fcd;
case 0x743fcf:c.instructions+=1;goto B743fcf;
case 0x743fd1:goto L743fd1;
case 0x743fd4:c.instructions+=3;goto B743fd4;
case 0x743fd7:c.instructions+=2;goto B743fd7;
case 0x743fd9:c.instructions+=1;goto B743fd9;
case 0x743fdb:goto L743fdb;
case 0x743fdd:c.instructions+=1;goto B743fdd;
case 0x743fdf:goto L743fdf;
case 0x743fe1:c.instructions+=1;goto B743fe1;
case 0x743fe4:goto L743fe4;
case 0x743fe6:c.instructions+=1;goto B743fe6;
case 0x743fe8:goto L743fe8;
case 0x743fec:c.instructions+=3;goto B743fec;
case 0x743fee:c.instructions+=2;goto B743fee;
case 0x743ff0:c.instructions+=1;goto B743ff0;
case 0x743ff2:goto L743ff2;
case 0x743ff4:c.instructions+=4;goto B743ff4;
case 0x743ff7:c.instructions+=3;goto B743ff7;
case 0x743ff8:c.instructions+=2;goto B743ff8;
case 0x743ffa:c.instructions+=1;goto B743ffa;
case 0x743ffc:goto L743ffc;
default:missing_instruction(c.pc);}
B743000:L743000:{c.instructions+=9;NFSU2_TR(0x743000);
__builtin_memmove((R+0),(R+8),4);
}
B743002:{NFSU2_TR(0x743002);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B743004:{NFSU2_TR(0x743004);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B743006:{NFSU2_TR(0x743006);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B743007:{NFSU2_TR(0x743007);
u8 U[1];
w1(U+0,u8(0x2eull));
s1(u32(r4(R+4)),r1(U+0));
}
B74300a:{NFSU2_TR(0x74300a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B74300e:{NFSU2_TR(0x74300e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74300f:{NFSU2_TR(0x74300f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x63ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x63ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B743012:{NFSU2_TR(0x743012);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L743032;}}
}
B743014:L743014:{c.instructions+=14;NFSU2_TR(0x743014);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B743015:{NFSU2_TR(0x743015);
w4(R+12,u32(0x64ull));
}
B74301a:{NFSU2_TR(0x74301a);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74301a);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74301a);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B74301c:{NFSU2_TR(0x74301c);
w4(R+12,u32(0xaull));
}
B743021:{NFSU2_TR(0x743021);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B743023:{NFSU2_TR(0x743023);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B743025:{NFSU2_TR(0x743025);
__builtin_memmove((R+0),(R+8),4);
}
B743027:{NFSU2_TR(0x743027);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B743028:{NFSU2_TR(0x743028);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x743028);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x743028);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B74302a:{NFSU2_TR(0x74302a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74302b:{NFSU2_TR(0x74302b);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B74302d:{NFSU2_TR(0x74302d);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B74302f:{NFSU2_TR(0x74302f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B743030:{NFSU2_TR(0x743030);
__builtin_memmove((R+0),(R+8),4);
}
B743032:L743032:{c.instructions+=2;NFSU2_TR(0x743032);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B743035:{NFSU2_TR(0x743035);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L743046;}}
}
B743037:L743037:{c.instructions+=7;NFSU2_TR(0x743037);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B743038:{NFSU2_TR(0x743038);
w4(R+12,u32(0xaull));
}
B74303d:{NFSU2_TR(0x74303d);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74303d);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74303d);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B74303f:{NFSU2_TR(0x74303f);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B743041:{NFSU2_TR(0x743041);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B743043:{NFSU2_TR(0x743043);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B743044:{NFSU2_TR(0x743044);
__builtin_memmove((R+0),(R+8),4);
}
B743046:L743046:{c.instructions+=8;NFSU2_TR(0x743046);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B743048:{NFSU2_TR(0x743048);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B74304a:{NFSU2_TR(0x74304a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74304b:{NFSU2_TR(0x74304b);
u8 U[1];
w1(U+0,u8(0x2eull));
s1(u32(r4(R+4)),r1(U+0));
}
B74304e:{NFSU2_TR(0x74304e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B743052:{NFSU2_TR(0x743052);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B743053:{NFSU2_TR(0x743053);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x63ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x63ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B743056:{NFSU2_TR(0x743056);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L743076;}}
}
B743058:L743058:{c.instructions+=14;NFSU2_TR(0x743058);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B743059:{NFSU2_TR(0x743059);
w4(R+24,u32(0x64ull));
}
B74305e:{NFSU2_TR(0x74305e);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74305e);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74305e);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B743060:{NFSU2_TR(0x743060);
w4(R+24,u32(0xaull));
}
B743065:{NFSU2_TR(0x743065);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B743067:{NFSU2_TR(0x743067);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B743069:{NFSU2_TR(0x743069);
__builtin_memmove((R+0),(R+8),4);
}
B74306b:{NFSU2_TR(0x74306b);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B74306c:{NFSU2_TR(0x74306c);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74306c);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x74306c);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B74306e:{NFSU2_TR(0x74306e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74306f:{NFSU2_TR(0x74306f);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B743071:{NFSU2_TR(0x743071);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B743073:{NFSU2_TR(0x743073);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B743074:{NFSU2_TR(0x743074);
__builtin_memmove((R+0),(R+8),4);
}
B743076:L743076:{c.instructions+=2;NFSU2_TR(0x743076);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B743079:{NFSU2_TR(0x743079);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74308a;}}
}
B74307b:L74307b:{c.instructions+=7;NFSU2_TR(0x74307b);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B74307c:{NFSU2_TR(0x74307c);
w4(R+24,u32(0xaull));
}
B743081:{NFSU2_TR(0x743081);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x743081);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x743081);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B743083:{NFSU2_TR(0x743083);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B743085:{NFSU2_TR(0x743085);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B743087:{NFSU2_TR(0x743087);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B743088:{NFSU2_TR(0x743088);
__builtin_memmove((R+0),(R+8),4);
}
B74308a:L74308a:{c.instructions+=8;NFSU2_TR(0x74308a);
u8 U[3];
w1(R+512,carry<u8>(r1(R+0),u8(0x30ull)));
w1(R+523,scarry<u8>(r1(R+0),u8(0x30ull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B74308c:{NFSU2_TR(0x74308c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74308d:{NFSU2_TR(0x74308d);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B74308f:{NFSU2_TR(0x74308f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B743090:{NFSU2_TR(0x743090);
__builtin_memmove((R+0),(R+28),4);
}
B743092:{NFSU2_TR(0x743092);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B743096:{NFSU2_TR(0x743096);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B743097:{NFSU2_TR(0x743097);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7430a0:L7430a0:{c.instructions+=7;NFSU2_TR(0x7430a0);
u8 U[6];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B7430a5:{NFSU2_TR(0x7430a5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7430a7:{NFSU2_TR(0x7430a7);
__builtin_memmove((R+5),(R+0),1);
}
B7430a9:{NFSU2_TR(0x7430a9);
w4(R+8,u32(r1(R+1)));
}
B7430ac:{NFSU2_TR(0x7430ac);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7430ae:{NFSU2_TR(0x7430ae);
__builtin_memmove((R+0),(R+4),2);
}
B7430b1:{NFSU2_TR(0x7430b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7430c0:L7430c0:{c.instructions+=15;NFSU2_TR(0x7430c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7430c4:{NFSU2_TR(0x7430c4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7430c6:{NFSU2_TR(0x7430c6);
__builtin_memmove((R+5),(R+0),1);
}
B7430c8:{NFSU2_TR(0x7430c8);
w4(R+8,u32(r1(R+1)));
}
B7430cb:{NFSU2_TR(0x7430cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B7430ce:{NFSU2_TR(0x7430ce);
w4(R+0,u32(r1(R+0)));
}
B7430d1:{NFSU2_TR(0x7430d1);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B7430d3:{NFSU2_TR(0x7430d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7430d7:{NFSU2_TR(0x7430d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7430da:{NFSU2_TR(0x7430da);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B7430dc:{NFSU2_TR(0x7430dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7430df:{NFSU2_TR(0x7430df);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B7430e2:{NFSU2_TR(0x7430e2);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7430e4:{NFSU2_TR(0x7430e4);
__builtin_memmove((R+0),(R+4),4);
}
B7430e6:{NFSU2_TR(0x7430e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7430f0:L7430f0:{c.instructions+=5;NFSU2_TR(0x7430f0);
u8 U[6];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B7430f5:{NFSU2_TR(0x7430f5);
u8 U[5];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7430f9:{NFSU2_TR(0x7430f9);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+1),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7430fd:{NFSU2_TR(0x7430fd);
u8 U[6];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B743102:{NFSU2_TR(0x743102);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743110:L743110:{c.instructions+=10;NFSU2_TR(0x743110);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743114:{NFSU2_TR(0x743114);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B743118:{NFSU2_TR(0x743118);
u8 U[46];
w4(U+38,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+38))));
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
B74311b:{NFSU2_TR(0x74311b);
u8 U[5];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74311f:{NFSU2_TR(0x74311f);
u8 U[46];
w4(U+38,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+38))));
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
B743122:{NFSU2_TR(0x743122);
u8 U[5];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B743126:{NFSU2_TR(0x743126);
u8 U[48];
w4(U+40,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B743129:{NFSU2_TR(0x743129);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74312d:{NFSU2_TR(0x74312d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743131:{NFSU2_TR(0x743131);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743140:L743140:{c.instructions+=16;NFSU2_TR(0x743140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B743143:{NFSU2_TR(0x743143);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B743148:{NFSU2_TR(0x743148);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74314c:{NFSU2_TR(0x74314c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743150:{NFSU2_TR(0x743150);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B743154:{NFSU2_TR(0x743154);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B743157:{NFSU2_TR(0x743157);
u8 U[5];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74315b:{NFSU2_TR(0x74315b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B74315e:{NFSU2_TR(0x74315e);
u8 U[5];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B743162:{NFSU2_TR(0x743162);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B743165:{NFSU2_TR(0x743165);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743167:{NFSU2_TR(0x743167);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74316b:{NFSU2_TR(0x74316b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74316f:{NFSU2_TR(0x74316f);
u8 U[4];
w4(U+0,u32(0x8b7c84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743174:{NFSU2_TR(0x743174);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743175:{NFSU2_TR(0x743175);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74317aull));
TAIL_STATIC(0x742f60u,742);
}
B74317a:L74317a:{c.instructions+=3;NFSU2_TR(0x74317a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74317e:{NFSU2_TR(0x74317e);
w4(R+0,u32(0x8b7c84ull));
}
B743183:{NFSU2_TR(0x743183);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743188ull));
TAIL_STATIC(0x76115eu,761);
}
B743188:L743188:{c.instructions+=2;NFSU2_TR(0x743188);
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
B74318b:{NFSU2_TR(0x74318b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743190:L743190:{c.instructions+=8;NFSU2_TR(0x743190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B743193:{NFSU2_TR(0x743193);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B743198:{NFSU2_TR(0x743198);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74319c:{NFSU2_TR(0x74319c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7431a0:{NFSU2_TR(0x7431a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7431a1:{NFSU2_TR(0x7431a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7431a5:{NFSU2_TR(0x7431a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7431a6:{NFSU2_TR(0x7431a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7431abull));
TAIL_STATIC(0x742ee0u,742);
}
B7431ab:L7431ab:{c.instructions+=12;NFSU2_TR(0x7431ab);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7431b0:{NFSU2_TR(0x7431b0);
u8 U[5];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7431b5:{NFSU2_TR(0x7431b5);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B7431ba:{NFSU2_TR(0x7431ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7431bd:{NFSU2_TR(0x7431bd);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B7431bf:{NFSU2_TR(0x7431bf);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7431c4:{NFSU2_TR(0x7431c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7431c7:{NFSU2_TR(0x7431c7);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B7431c9:{NFSU2_TR(0x7431c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7431cd:{NFSU2_TR(0x7431cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7431d0:{NFSU2_TR(0x7431d0);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B7431d2:{NFSU2_TR(0x7431d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7431d7ull));
TAIL_STATIC(0x76115eu,761);
}
B7431d7:L7431d7:{c.instructions+=2;NFSU2_TR(0x7431d7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7431da:{NFSU2_TR(0x7431da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7431e0:L7431e0:{c.instructions+=5;NFSU2_TR(0x7431e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7431e4:{NFSU2_TR(0x7431e4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B7431e6:{NFSU2_TR(0x7431e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7431e8:{NFSU2_TR(0x7431e8);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7431ea:{NFSU2_TR(0x7431ea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7431fd;}}
}
B7431ec:L7431ec:{c.instructions+=1;NFSU2_TR(0x7431ec);
__builtin_memmove((R+16),(R+16),4);
}
B7431f0:L7431f0:{c.instructions+=2;NFSU2_TR(0x7431f0);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7431f3:{NFSU2_TR(0x7431f3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7431fd;}}
}
B7431f5:L7431f5:{c.instructions+=4;NFSU2_TR(0x7431f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7431f8:{NFSU2_TR(0x7431f8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7431f9:{NFSU2_TR(0x7431f9);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7431fb:{NFSU2_TR(0x7431fb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7431f0u);}goto L7431f0;}}
}
B7431fd:L7431fd:{c.instructions+=3;NFSU2_TR(0x7431fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7431fe:{NFSU2_TR(0x7431fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7431ff:{NFSU2_TR(0x7431ff);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B743201:L743201:{c.instructions+=3;NFSU2_TR(0x743201);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B743203:{NFSU2_TR(0x743203);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B743206:{NFSU2_TR(0x743206);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74320d;}}
}
B743208:L743208:{c.instructions+=2;NFSU2_TR(0x743208);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74320b:{NFSU2_TR(0x74320b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L743218;}}
}
B74320d:L74320d:{c.instructions+=2;NFSU2_TR(0x74320d);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B743210:{NFSU2_TR(0x743210);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743232;}}
}
B743212:L743212:{c.instructions+=3;NFSU2_TR(0x743212);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B743215:{NFSU2_TR(0x743215);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B743216:{NFSU2_TR(0x743216);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743201u);}goto L743201;}
}
B743218:L743218:{c.instructions+=2;NFSU2_TR(0x743218);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74321b:{NFSU2_TR(0x74321b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743212u);}goto L743212;}}
}
B74321d:L74321d:{c.instructions+=8;NFSU2_TR(0x74321d);
__builtin_memmove((R+24),(R+28),4);
}
B74321f:{NFSU2_TR(0x74321f);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffull))));
}
B743225:{NFSU2_TR(0x743225);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B743228:{NFSU2_TR(0x743228);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B74322b:{NFSU2_TR(0x74322b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B74322d:{NFSU2_TR(0x74322d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B74322f:{NFSU2_TR(0x74322f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B743230:{NFSU2_TR(0x743230);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743201u);}goto L743201;}
}
B743232:L743232:{c.instructions+=4;NFSU2_TR(0x743232);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743234:{NFSU2_TR(0x743234);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B743238:{NFSU2_TR(0x743238);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B74323a:{NFSU2_TR(0x74323a);
if(r1(R+518)){{goto L743241;}}
}
B74323c:L74323c:{c.instructions+=1;NFSU2_TR(0x74323c);
w4(R+0,u32(0x1ull));
}
B743241:L743241:{c.instructions+=3;NFSU2_TR(0x743241);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B743243:{NFSU2_TR(0x743243);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3aull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B743246:{NFSU2_TR(0x743246);
if(r1(R+518)){{goto L743255;}}
}
B743248:L743248:{c.instructions+=2;NFSU2_TR(0x743248);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74324a:{NFSU2_TR(0x74324a);
if(r1(R+518)){{goto L743255;}}
}
B74324c:L74324c:{c.instructions+=4;NFSU2_TR(0x74324c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B74324f:{NFSU2_TR(0x74324f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B743250:{NFSU2_TR(0x743250);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3aull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B743253:{NFSU2_TR(0x743253);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743248u);}goto L743248;}}
}
B743255:L743255:{c.instructions+=4;NFSU2_TR(0x743255);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B743257:{NFSU2_TR(0x743257);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B743259:{NFSU2_TR(0x743259);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3aull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74325c:{NFSU2_TR(0x74325c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743281;}}
}
B74325e:L74325e:{c.instructions+=5;NFSU2_TR(0x74325e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74325f:{NFSU2_TR(0x74325f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B743261:{NFSU2_TR(0x743261);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B743263:{NFSU2_TR(0x743263);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B743266:{NFSU2_TR(0x743266);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74327e;}}
}
B743268:L743268:{c.instructions+=2;NFSU2_TR(0x743268);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74326b:{NFSU2_TR(0x74326b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74327e;}}
}
B74326d:L74326d:{c.instructions+=7;NFSU2_TR(0x74326d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B743270:{NFSU2_TR(0x743270);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B743273:{NFSU2_TR(0x743273);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B743274:{NFSU2_TR(0x743274);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B743277:{NFSU2_TR(0x743277);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B743279:{NFSU2_TR(0x743279);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B74327c:{NFSU2_TR(0x74327c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743268u);}goto L743268;}}
}
B74327e:L74327e:{c.instructions+=1;NFSU2_TR(0x74327e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
}
B743281:L743281:{c.instructions+=5;NFSU2_TR(0x743281);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B743285:{NFSU2_TR(0x743285);
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
B743287:{NFSU2_TR(0x743287);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74328b:{NFSU2_TR(0x74328b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B74328d:{NFSU2_TR(0x74328d);
if(r1(R+518)){{goto L7432bd;}}
}
B74328f:L74328f:{c.instructions+=4;NFSU2_TR(0x74328f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B743291:{NFSU2_TR(0x743291);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B743293:{NFSU2_TR(0x743293);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x3aull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x3aull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x3aull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B743296:{NFSU2_TR(0x743296);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7432bb;}}
}
B743298:L743298:{c.instructions+=5;NFSU2_TR(0x743298);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B743299:{NFSU2_TR(0x743299);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B74329b:{NFSU2_TR(0x74329b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B74329d:{NFSU2_TR(0x74329d);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B7432a0:{NFSU2_TR(0x7432a0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7432b8;}}
}
B7432a2:L7432a2:{c.instructions+=2;NFSU2_TR(0x7432a2);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7432a5:{NFSU2_TR(0x7432a5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7432b8;}}
}
B7432a7:L7432a7:{c.instructions+=7;NFSU2_TR(0x7432a7);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B7432aa:{NFSU2_TR(0x7432aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7432ad:{NFSU2_TR(0x7432ad);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7432ae:{NFSU2_TR(0x7432ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7432b1:{NFSU2_TR(0x7432b1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B7432b3:{NFSU2_TR(0x7432b3);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B7432b6:{NFSU2_TR(0x7432b6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7432a2u);}goto L7432a2;}}
}
B7432b8:L7432b8:{c.instructions+=1;NFSU2_TR(0x7432b8);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7432bb:L7432bb:{c.instructions+=1;NFSU2_TR(0x7432bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B7432bd:L7432bd:{c.instructions+=3;NFSU2_TR(0x7432bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7432be:{NFSU2_TR(0x7432be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7432bf:{NFSU2_TR(0x7432bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7432c0:L7432c0:{c.instructions+=17;NFSU2_TR(0x7432c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7432c1:{NFSU2_TR(0x7432c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7432c5:{NFSU2_TR(0x7432c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7432c6:{NFSU2_TR(0x7432c6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7432ca:{NFSU2_TR(0x7432ca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7432cc:{NFSU2_TR(0x7432cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7432cd:{NFSU2_TR(0x7432cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7432ce:{NFSU2_TR(0x7432ce);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7432d2:{NFSU2_TR(0x7432d2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7432d6:{NFSU2_TR(0x7432d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7432d9:{NFSU2_TR(0x7432d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7432dc:{NFSU2_TR(0x7432dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7432df:{NFSU2_TR(0x7432df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7432e0:{NFSU2_TR(0x7432e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7432e4:{NFSU2_TR(0x7432e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7432e5:{NFSU2_TR(0x7432e5);
u8 U[2];
w2(U+0,u16(0x2ull));
s2(u32(r4(R+24)),r2(U+0));
}
B7432ea:{NFSU2_TR(0x7432ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7432efull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7431e0u);}goto L7431e0;}
}
B7432ef:L7432ef:{c.instructions+=17;NFSU2_TR(0x7432ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7432f3:{NFSU2_TR(0x7432f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7432f6:{NFSU2_TR(0x7432f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7432f9:{NFSU2_TR(0x7432f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7432fc:{NFSU2_TR(0x7432fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7432ff:{NFSU2_TR(0x7432ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B743302:{NFSU2_TR(0x743302);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B743305:{NFSU2_TR(0x743305);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B743308:{NFSU2_TR(0x743308);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74330c:{NFSU2_TR(0x74330c);
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
B74330f:{NFSU2_TR(0x74330f);
__builtin_memmove((R+8),(R+4),4);
}
B743311:{NFSU2_TR(0x743311);
u8 U[47];
w4(U+39,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+8),4);
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B743314:{NFSU2_TR(0x743314);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B743317:{NFSU2_TR(0x743317);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74331a:{NFSU2_TR(0x74331a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74331b:{NFSU2_TR(0x74331b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74331c:{NFSU2_TR(0x74331c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743320:L743320:{c.instructions+=3;NFSU2_TR(0x743320);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B743322:{NFSU2_TR(0x743322);
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
B743324:{NFSU2_TR(0x743324);
if(r1(R+519)){{goto L743333;}}
}
B743326:L743326:{c.instructions+=4;NFSU2_TR(0x743326);
w2(R+0,u16(r1(R+0)));
}
B74332a:{NFSU2_TR(0x74332a);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+24)),r2(U+0));
}
B74332d:{NFSU2_TR(0x74332d);
w4(R+0,u32(0x1ull));
}
B743332:{NFSU2_TR(0x743332);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743333:L743333:{c.instructions+=4;NFSU2_TR(0x743333);
__builtin_memmove((R+8),(R+0),1);
}
B743335:{NFSU2_TR(0x743335);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xe0ull))));
}
B743338:{NFSU2_TR(0x743338);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xc0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74333b:{NFSU2_TR(0x74333b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743360;}}
}
B74333d:L74333d:{c.instructions+=9;NFSU2_TR(0x74333d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+4,u16(r1(U+4)));
}
B743342:{NFSU2_TR(0x743342);
w2(R+8,u16(r1(R+0)));
}
B743346:{NFSU2_TR(0x743346);
w4(R+0,u32(0x2ull));
}
B74334b:{NFSU2_TR(0x74334b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xff3full))));
}
B743351:{NFSU2_TR(0x743351);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xff1full))));
}
B743357:{NFSU2_TR(0x743357);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B74335a:{NFSU2_TR(0x74335a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74335c:{NFSU2_TR(0x74335c);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+24)),r2(U+0));
}
B74335f:{NFSU2_TR(0x74335f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743360:L743360:{c.instructions+=4;NFSU2_TR(0x743360);
__builtin_memmove((R+8),(R+0),1);
}
B743362:{NFSU2_TR(0x743362);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xf0ull))));
}
B743365:{NFSU2_TR(0x743365);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0xe0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0xe0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0xe0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B743368:{NFSU2_TR(0x743368);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743396;}}
}
B74336a:L74336a:{c.instructions+=12;NFSU2_TR(0x74336a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+8,u16(r1(U+4)));
}
B74336f:{NFSU2_TR(0x74336f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+4,u16(r1(U+4)));
}
B743374:{NFSU2_TR(0x743374);
w2(R+0,u16(r1(R+0)));
}
B743378:{NFSU2_TR(0x743378);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xff3full))));
}
B74337e:{NFSU2_TR(0x74337e);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B743381:{NFSU2_TR(0x743381);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B743384:{NFSU2_TR(0x743384);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B743386:{NFSU2_TR(0x743386);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xff3full))));
}
B74338b:{NFSU2_TR(0x74338b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74338d:{NFSU2_TR(0x74338d);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+24)),r2(U+0));
}
B743390:{NFSU2_TR(0x743390);
w4(R+0,u32(0x3ull));
}
B743395:{NFSU2_TR(0x743395);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743396:L743396:{c.instructions+=2;NFSU2_TR(0x743396);
w4(R+0,u32(0x4ull));
}
B74339b:{NFSU2_TR(0x74339b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7433a0:L7433a0:{c.instructions+=8;NFSU2_TR(0x7433a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7433a1:{NFSU2_TR(0x7433a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7433a5:{NFSU2_TR(0x7433a5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7433a7:{NFSU2_TR(0x7433a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7433a8:{NFSU2_TR(0x7433a8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7433aa:{NFSU2_TR(0x7433aa);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7433ac:{NFSU2_TR(0x7433ac);
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
B7433ae:{NFSU2_TR(0x7433ae);
if(r1(R+518)){{goto L7433e5;}}
}
B7433b0:L7433b0:{c.instructions+=3;NFSU2_TR(0x7433b0);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B7433b3:{NFSU2_TR(0x7433b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B7433b5:{NFSU2_TR(0x7433b5);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L7433dc;}}
}
B7433b7:L7433b7:{c.instructions+=4;NFSU2_TR(0x7433b7);
__builtin_memmove((R+0),(R+4),1);
}
B7433b9:{NFSU2_TR(0x7433b9);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xe0ull))));
}
B7433bb:{NFSU2_TR(0x7433bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xc0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7433bd:{NFSU2_TR(0x7433bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7433c8;}}
}
B7433bf:L7433bf:{c.instructions+=3;NFSU2_TR(0x7433bf);
w4(R+4,u32(0x2ull));
}
B7433c4:{NFSU2_TR(0x7433c4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B7433c6:{NFSU2_TR(0x7433c6);
{goto L7433dd;}
}
B7433c8:L7433c8:{c.instructions+=8;NFSU2_TR(0x7433c8);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xf0ull))));
}
B7433cb:{NFSU2_TR(0x7433cb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7433cd:{NFSU2_TR(0x7433cd);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xe0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7433d0:{NFSU2_TR(0x7433d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B7433d3:{NFSU2_TR(0x7433d3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B7433d6:{NFSU2_TR(0x7433d6);
__builtin_memmove((R+4),(R+0),4);
}
B7433d8:{NFSU2_TR(0x7433d8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B7433da:{NFSU2_TR(0x7433da);
{goto L7433dd;}
}
B7433dc:L7433dc:{c.instructions+=1;NFSU2_TR(0x7433dc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B7433dd:L7433dd:{c.instructions+=4;NFSU2_TR(0x7433dd);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B7433e0:{NFSU2_TR(0x7433e0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7433e1:{NFSU2_TR(0x7433e1);
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
B7433e3:{NFSU2_TR(0x7433e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7433b0u);}goto L7433b0;}}
}
B7433e5:L7433e5:{c.instructions+=4;NFSU2_TR(0x7433e5);
__builtin_memmove((R+0),(R+28),4);
}
B7433e7:{NFSU2_TR(0x7433e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7433e8:{NFSU2_TR(0x7433e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7433e9:{NFSU2_TR(0x7433e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7433f0:L7433f0:{c.instructions+=12;NFSU2_TR(0x7433f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7433f4:{NFSU2_TR(0x7433f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7433f5:{NFSU2_TR(0x7433f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7433f9:{NFSU2_TR(0x7433f9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7433fb:{NFSU2_TR(0x7433fb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7433fc:{NFSU2_TR(0x7433fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7433fd:{NFSU2_TR(0x7433fd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7433fe:{NFSU2_TR(0x7433fe);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B743400:{NFSU2_TR(0x743400);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B743402:{NFSU2_TR(0x743402);
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
B743404:{NFSU2_TR(0x743404);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743408:{NFSU2_TR(0x743408);
if(r1(R+518)){{goto L743430;}}
}
B74340a:L74340a:{c.instructions+=3;NFSU2_TR(0x74340a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74340b:{NFSU2_TR(0x74340b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74340f:{NFSU2_TR(0x74340f);
}
B743410:L743410:{c.instructions+=2;NFSU2_TR(0x743410);
u8 U[22];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+14)));
w4(U+18,u32(u32(r4(R+20))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B743414:{NFSU2_TR(0x743414);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74342f;}}
}
B743416:L743416:{c.instructions+=2;NFSU2_TR(0x743416);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B743419:{NFSU2_TR(0x743419);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74341eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743320u);}goto L743320;}
}
B74341e:L74341e:{c.instructions+=2;NFSU2_TR(0x74341e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B743421:{NFSU2_TR(0x743421);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L743427;}}
}
B743423:L743423:{c.instructions+=2;NFSU2_TR(0x743423);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B743424:{NFSU2_TR(0x743424);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B743427:L743427:{c.instructions+=3;NFSU2_TR(0x743427);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B743429:{NFSU2_TR(0x743429);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+12),(U+8),1);
w1(R+512,u8((r1(U+12))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+12),u8(0x0ull)));
w1(U+13,u8(u32(r1(U+12))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+13))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
w1(U+9,u8(u32(r1(U+13))&u32(u8(0xffull))));
w1(U+10,u8(__builtin_popcountll(u64(r1(U+9)))));
w1(U+11,u8(u32(r1(U+10))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+11))==(u8(0x0ull))));
}
B74342d:{NFSU2_TR(0x74342d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743410u);}goto L743410;}}
}
B74342f:L74342f:{c.instructions+=1;NFSU2_TR(0x74342f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B743430:L743430:{c.instructions+=7;NFSU2_TR(0x743430);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743434:{NFSU2_TR(0x743434);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w2(U+8,u16(0x0ull));
s2(u32(r4(U+4)),r2(U+8));
}
B74343a:{NFSU2_TR(0x74343a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74343b:{NFSU2_TR(0x74343b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74343e:{NFSU2_TR(0x74343e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74343f:{NFSU2_TR(0x74343f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B743440:{NFSU2_TR(0x743440);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743450:L743450:{c.instructions+=10;NFSU2_TR(0x743450);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B743454:{NFSU2_TR(0x743454);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743455:{NFSU2_TR(0x743455);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B743459:{NFSU2_TR(0x743459);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74345a:{NFSU2_TR(0x74345a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74345e:{NFSU2_TR(0x74345e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B743460:{NFSU2_TR(0x743460);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
}
B743463:{NFSU2_TR(0x743463);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B743465:{NFSU2_TR(0x743465);
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
B743467:{NFSU2_TR(0x743467);
if(r1(R+518)){{goto L7434e1;}}
}
B743469:L743469:{c.instructions+=4;NFSU2_TR(0x743469);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74346a:{NFSU2_TR(0x74346a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74346e:{NFSU2_TR(0x74346e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74346f:{NFSU2_TR(0x74346f);
}
B743470:L743470:{c.instructions+=2;NFSU2_TR(0x743470);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B743472:{NFSU2_TR(0x743472);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7434df;}}
}
B743474:L743474:{c.instructions+=4;NFSU2_TR(0x743474);
w4(R+0,u32(r1(R+0)));
}
B743477:{NFSU2_TR(0x743477);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+0),(U+8),2);
}
B74347c:{NFSU2_TR(0x74347c);
w1(R+512,u8((r2(R+0))<(u16(0x80ull))));
}
B743480:{NFSU2_TR(0x743480);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L74348c;}}
}
B743482:L743482:{c.instructions+=3;NFSU2_TR(0x743482);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B743485:{NFSU2_TR(0x743485);
w4(R+0,u32(0x1ull));
}
B74348a:{NFSU2_TR(0x74348a);
{goto L7434d5;}
}
B74348c:L74348c:{c.instructions+=2;NFSU2_TR(0x74348c);
w1(R+512,u8((r2(R+0))<(u16(0x800ull))));
}
B743490:{NFSU2_TR(0x743490);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7434ac;}}
}
B743492:L743492:{c.instructions+=9;NFSU2_TR(0x743492);
__builtin_memmove((R+12),(R+0),4);
}
B743494:{NFSU2_TR(0x743494);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B743497:{NFSU2_TR(0x743497);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x3full))));
}
B743499:{NFSU2_TR(0x743499);
w1(R+12,u8(u32(r1(R+12))|u32(u8(0xc0ull))));
}
B74349c:{NFSU2_TR(0x74349c);
w1(R+0,u8(u32(r1(R+0))|u32(u8(0x80ull))));
}
B74349e:{NFSU2_TR(0x74349e);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B7434a2:{NFSU2_TR(0x7434a2);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7434a5:{NFSU2_TR(0x7434a5);
w4(R+0,u32(0x2ull));
}
B7434aa:{NFSU2_TR(0x7434aa);
{goto L7434d5;}
}
B7434ac:L7434ac:{c.instructions+=13;NFSU2_TR(0x7434ac);
__builtin_memmove((R+12),(R+0),2);
}
B7434af:{NFSU2_TR(0x7434af);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w2(R+12,shr<u16>(r2(R+12),u64(r4(U+0))));
}
B7434b3:{NFSU2_TR(0x7434b3);
w1(R+12,u8(u32(r1(R+12))|u32(u8(0xe0ull))));
}
B7434b6:{NFSU2_TR(0x7434b6);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7434b9:{NFSU2_TR(0x7434b9);
__builtin_memmove((R+12),(R+0),4);
}
B7434bb:{NFSU2_TR(0x7434bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B7434be:{NFSU2_TR(0x7434be);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x3full))));
}
B7434c1:{NFSU2_TR(0x7434c1);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x3full))));
}
B7434c3:{NFSU2_TR(0x7434c3);
w1(R+12,u8(u32(r1(R+12))|u32(u8(0x80ull))));
}
B7434c6:{NFSU2_TR(0x7434c6);
w1(R+0,u8(u32(r1(R+0))|u32(u8(0x80ull))));
}
B7434c8:{NFSU2_TR(0x7434c8);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B7434cc:{NFSU2_TR(0x7434cc);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B7434d0:{NFSU2_TR(0x7434d0);
w4(R+0,u32(0x3ull));
}
B7434d5:L7434d5:{c.instructions+=5;NFSU2_TR(0x7434d5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7434d7:{NFSU2_TR(0x7434d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7434da:{NFSU2_TR(0x7434da);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7434db:{NFSU2_TR(0x7434db);
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
B7434dd:{NFSU2_TR(0x7434dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743470u);}goto L743470;}}
}
B7434df:L7434df:{c.instructions+=2;NFSU2_TR(0x7434df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7434e0:{NFSU2_TR(0x7434e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7434e1:L7434e1:{c.instructions+=5;NFSU2_TR(0x7434e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7434e2:{NFSU2_TR(0x7434e2);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B7434e6:{NFSU2_TR(0x7434e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7434e9:{NFSU2_TR(0x7434e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7434ea:{NFSU2_TR(0x7434ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7434f0:L7434f0:{c.instructions+=12;NFSU2_TR(0x7434f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7434f4:{NFSU2_TR(0x7434f4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7434f8:{NFSU2_TR(0x7434f8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7434fa:{NFSU2_TR(0x7434fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B7434fd:{NFSU2_TR(0x7434fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7434fe:{NFSU2_TR(0x7434fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7434ff:{NFSU2_TR(0x7434ff);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B743500:{NFSU2_TR(0x743500);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B743502:{NFSU2_TR(0x743502);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B743504:{NFSU2_TR(0x743504);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B743506:{NFSU2_TR(0x743506);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74350a:{NFSU2_TR(0x74350a);
if(r1(R+518)){{goto L743581;}}
}
B74350c:L74350c:{c.instructions+=3;NFSU2_TR(0x74350c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74350d:{NFSU2_TR(0x74350d);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B743511:{NFSU2_TR(0x743511);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743512:L743512:{c.instructions+=2;NFSU2_TR(0x743512);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B743516:{NFSU2_TR(0x743516);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74357f;}}
}
B743518:L743518:{c.instructions+=4;NFSU2_TR(0x743518);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74351c:{NFSU2_TR(0x74351c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B74351e:{NFSU2_TR(0x74351e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B743522:{NFSU2_TR(0x743522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743527ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743320u);}goto L743320;}
}
B743527:L743527:{c.instructions+=10;NFSU2_TR(0x743527);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74352b:{NFSU2_TR(0x74352b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74352e:{NFSU2_TR(0x74352e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B743530:{NFSU2_TR(0x743530);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743534:{NFSU2_TR(0x743534);
__builtin_memmove((R+8),(R+4),4);
}
B743536:{NFSU2_TR(0x743536);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B743539:{NFSU2_TR(0x743539);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B74353b:{NFSU2_TR(0x74353b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74353d:{NFSU2_TR(0x74353d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743541:{NFSU2_TR(0x743541);
if(r1(R+518)){{goto L743568;}}
}
B743543:L743543:{c.instructions+=3;NFSU2_TR(0x743543);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B743548:{NFSU2_TR(0x743548);
w4(R+12,u32(r2(R+24)));
}
B74354b:{NFSU2_TR(0x74354b);
{goto L743550;}
}
B743550:L743550:{c.instructions+=2;NFSU2_TR(0x743550);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+4))));
}
B743552:{NFSU2_TR(0x743552);
if(r1(R+512)){{goto L743558;}}
}
B743554:L743554:{c.instructions+=2;NFSU2_TR(0x743554);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+4))));
w4(U+8,u32(u32(r4(R+12))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B743556:{NFSU2_TR(0x743556);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L743592;}}
}
B743558:L743558:{c.instructions+=4;NFSU2_TR(0x743558);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B74355b:{NFSU2_TR(0x74355b);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74355f:{NFSU2_TR(0x74355f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B743562:{NFSU2_TR(0x743562);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743550u);}goto L743550;}}
}
B743564:L743564:{c.instructions+=1;NFSU2_TR(0x743564);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B743568:L743568:{c.instructions+=2;NFSU2_TR(0x743568);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74356a:{NFSU2_TR(0x74356a);
if(r1(R+518)){{goto L74356f;}}
}
B74356c:L74356c:{c.instructions+=1;NFSU2_TR(0x74356c);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B74356e:L74356e:{c.instructions+=1;NFSU2_TR(0x74356e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74356f:L74356f:{c.instructions+=5;NFSU2_TR(0x74356f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B743573:{NFSU2_TR(0x743573);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B743575:{NFSU2_TR(0x743575);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743579:{NFSU2_TR(0x743579);
u8 U[11];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B74357d:{NFSU2_TR(0x74357d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743512u);}goto L743512;}}
}
B74357f:L74357f:{c.instructions+=2;NFSU2_TR(0x74357f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B743580:{NFSU2_TR(0x743580);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B743581:L743581:{c.instructions+=7;NFSU2_TR(0x743581);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743585:{NFSU2_TR(0x743585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B743586:{NFSU2_TR(0x743586);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B74358a:{NFSU2_TR(0x74358a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74358d:{NFSU2_TR(0x74358d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74358e:{NFSU2_TR(0x74358e);
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
B743591:{NFSU2_TR(0x743591);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743592:L743592:{c.instructions+=7;NFSU2_TR(0x743592);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w2(R+24,u16(u32(r2(R+24))-u32(r2(U+0))));
}
B743595:{NFSU2_TR(0x743595);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B743598:{NFSU2_TR(0x743598);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B74359c:{NFSU2_TR(0x74359c);
w4(R+4,u32(r2(R+24)));
}
B74359f:{NFSU2_TR(0x74359f);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B7435a2:{NFSU2_TR(0x7435a2);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7435a5:{NFSU2_TR(0x7435a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7435ab;}}
}
B7435a7:L7435a7:{c.instructions+=2;NFSU2_TR(0x7435a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7435a9:{NFSU2_TR(0x7435a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74356cu);}goto L74356c;}}
}
B7435ab:L7435ab:{c.instructions+=2;NFSU2_TR(0x7435ab);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B7435ad:{NFSU2_TR(0x7435ad);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74356eu);}goto L74356e;}
}
B7435b0:L7435b0:{c.instructions+=8;NFSU2_TR(0x7435b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7435b1:{NFSU2_TR(0x7435b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7435b2:{NFSU2_TR(0x7435b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7435b3:{NFSU2_TR(0x7435b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7435b4:{NFSU2_TR(0x7435b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7435b8:{NFSU2_TR(0x7435b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((R+24),(U+0),4);
}
B7435be:{NFSU2_TR(0x7435be);
w4(R+12,u32(0x4ull));
}
B7435c3:{NFSU2_TR(0x7435c3);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B7435c5:L7435c5:{c.instructions+=3;NFSU2_TR(0x7435c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7435c7:{NFSU2_TR(0x7435c7);
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
B7435c9:{NFSU2_TR(0x7435c9);
if(r1(R+518)){{goto L7435d2;}}
}
B7435cb:L7435cb:{c.instructions+=2;NFSU2_TR(0x7435cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7435cc:{NFSU2_TR(0x7435cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7435cfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7435cf:L7435cf:{c.instructions+=1;NFSU2_TR(0x7435cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7435d2:L7435d2:{c.instructions+=4;NFSU2_TR(0x7435d2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B7435d4:{NFSU2_TR(0x7435d4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B7435d7:{NFSU2_TR(0x7435d7);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B7435d8:{NFSU2_TR(0x7435d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7435c5u);}goto L7435c5;}}
}
B7435da:L7435da:{c.instructions+=3;NFSU2_TR(0x7435da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7435dd:{NFSU2_TR(0x7435dd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7435df:{NFSU2_TR(0x7435df);
if(r1(R+518)){{goto L7435ed;}}
}
B7435e1:L7435e1:{c.instructions+=2;NFSU2_TR(0x7435e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7435e2:{NFSU2_TR(0x7435e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7435e7ull));
TAIL_STATIC(0x7502f0u,750);
}
B7435e7:L7435e7:{c.instructions+=2;NFSU2_TR(0x7435e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7435ea:{NFSU2_TR(0x7435ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7435ed:L7435ed:{c.instructions+=3;NFSU2_TR(0x7435ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7435f0:{NFSU2_TR(0x7435f0);
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
B7435f2:{NFSU2_TR(0x7435f2);
if(r1(R+518)){{goto L743600;}}
}
B7435f4:L7435f4:{c.instructions+=2;NFSU2_TR(0x7435f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7435f5:{NFSU2_TR(0x7435f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7435faull));
TAIL_STATIC(0x7502f0u,750);
}
B7435fa:L7435fa:{c.instructions+=2;NFSU2_TR(0x7435fa);
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
B7435fd:{NFSU2_TR(0x7435fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743600:L743600:{c.instructions+=6;NFSU2_TR(0x743600);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743603:{NFSU2_TR(0x743603);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B743604:{NFSU2_TR(0x743604);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B743605:{NFSU2_TR(0x743605);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B743606:{NFSU2_TR(0x743606);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B743607:{NFSU2_TR(0x743607);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743610:L743610:{c.instructions+=3;NFSU2_TR(0x743610);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743614:{NFSU2_TR(0x743614);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6d776964ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743619:{NFSU2_TR(0x743619);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743631;}}
}
B74361b:L74361b:{c.instructions+=3;NFSU2_TR(0x74361b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74361f:{NFSU2_TR(0x74361f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x200ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B743624:{NFSU2_TR(0x743624);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L743672;}}
}
B743626:L743626:{c.instructions+=4;NFSU2_TR(0x743626);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74362a:{NFSU2_TR(0x74362a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xeull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xeull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74362d:{NFSU2_TR(0x74362d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743630:{NFSU2_TR(0x743630);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743631:L743631:{c.instructions+=2;NFSU2_TR(0x743631);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x6d696e70ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6d696e70ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x6d696e70ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B743636:{NFSU2_TR(0x743636);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743647;}}
}
B743638:L743638:{c.instructions+=4;NFSU2_TR(0x743638);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74363c:{NFSU2_TR(0x74363c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743640:{NFSU2_TR(0x743640);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743646:{NFSU2_TR(0x743646);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743647:L743647:{c.instructions+=2;NFSU2_TR(0x743647);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x6d6f7574ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6d6f7574ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x6d6f7574ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74364c:{NFSU2_TR(0x74364c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74365d;}}
}
B74364e:L74364e:{c.instructions+=4;NFSU2_TR(0x74364e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743652:{NFSU2_TR(0x743652);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B743656:{NFSU2_TR(0x743656);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74365c:{NFSU2_TR(0x74365c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74365d:L74365d:{c.instructions+=2;NFSU2_TR(0x74365d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x61647666ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x61647666ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x61647666ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B743662:{NFSU2_TR(0x743662);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743672;}}
}
B743664:L743664:{c.instructions+=3;NFSU2_TR(0x743664);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743668:{NFSU2_TR(0x743668);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74366c:{NFSU2_TR(0x74366c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743672:L743672:{c.instructions+=1;NFSU2_TR(0x743672);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743680:L743680:{c.instructions+=7;NFSU2_TR(0x743680);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743681:{NFSU2_TR(0x743681);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743682:{NFSU2_TR(0x743682);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B743686:{NFSU2_TR(0x743686);
__builtin_memmove((R+0),(R+28),4);
}
B743688:{NFSU2_TR(0x743688);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B74368b:{NFSU2_TR(0x74368b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74368f:{NFSU2_TR(0x74368f);
if(r1(R+518)){{goto L74386a;}}
}
B743695:L743695:{c.instructions+=2;NFSU2_TR(0x743695);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xf00ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74369b:{NFSU2_TR(0x74369b);
if(r1(R+518)){{goto L74386a;}}
}
B7436a1:L7436a1:{c.instructions+=6;NFSU2_TR(0x7436a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7436a5:{NFSU2_TR(0x7436a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7436a6:{NFSU2_TR(0x7436a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7436aa:{NFSU2_TR(0x7436aa);
__builtin_memmove((R+4),(R+24),4);
}
B7436ac:{NFSU2_TR(0x7436ac);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B7436ae:{NFSU2_TR(0x7436ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7436b1:L7436b1:{c.instructions+=5;NFSU2_TR(0x7436b1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7436b3:{NFSU2_TR(0x7436b3);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7436b6:{NFSU2_TR(0x7436b6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7436b7:{NFSU2_TR(0x7436b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7436b9:{NFSU2_TR(0x7436b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7436b1u);}goto L7436b1;}}
}
B7436bb:L7436bb:{c.instructions+=12;NFSU2_TR(0x7436bb);
__builtin_memmove((R+8),(R+28),4);
}
B7436bd:{NFSU2_TR(0x7436bd);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B7436bf:{NFSU2_TR(0x7436bf);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ull))));
}
B7436c2:{NFSU2_TR(0x7436c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7436c3:{NFSU2_TR(0x7436c3);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffffcull))));
}
B7436c6:{NFSU2_TR(0x7436c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+12),(U+0),4);
}
B7436cc:{NFSU2_TR(0x7436cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7436cd:{NFSU2_TR(0x7436cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7436d0:{NFSU2_TR(0x7436d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7436d3:{NFSU2_TR(0x7436d3);
__builtin_memmove((R+28),(R+12),4);
}
B7436d5:{NFSU2_TR(0x7436d5);
w4(R+20,u32(0x4ull));
}
B7436da:{NFSU2_TR(0x7436da);
__builtin_memmove((R+12),(R+12),4);
}
B7436e0:L7436e0:{c.instructions+=3;NFSU2_TR(0x7436e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7436e2:{NFSU2_TR(0x7436e2);
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
B7436e4:{NFSU2_TR(0x7436e4);
if(r1(R+518)){{goto L7436ed;}}
}
B7436e6:L7436e6:{c.instructions+=2;NFSU2_TR(0x7436e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7436e7:{NFSU2_TR(0x7436e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7436eaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7436ea:L7436ea:{c.instructions+=1;NFSU2_TR(0x7436ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7436ed:L7436ed:{c.instructions+=5;NFSU2_TR(0x7436ed);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B7436f3:{NFSU2_TR(0x7436f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7436fa:{NFSU2_TR(0x7436fa);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B7436fd:{NFSU2_TR(0x7436fd);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B7436fe:{NFSU2_TR(0x7436fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7436e0u);}goto L7436e0;}}
}
B743700:L743700:{c.instructions+=2;NFSU2_TR(0x743700);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B743705:{NFSU2_TR(0x743705);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74374b;}}
}
B743707:L743707:{c.instructions+=3;NFSU2_TR(0x743707);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74370a:{NFSU2_TR(0x74370a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74370c:{NFSU2_TR(0x74370c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743721;}}
}
B74370e:L74370e:{c.instructions+=2;NFSU2_TR(0x74370e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743710:{NFSU2_TR(0x743710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743715ull));
TAIL_STATIC(0x750160u,750);
}
B743715:L743715:{c.instructions+=3;NFSU2_TR(0x743715);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743716:{NFSU2_TR(0x743716);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743719:{NFSU2_TR(0x743719);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74371eull));
TAIL_STATIC(0x757900u,757);
}
B74371e:L74371e:{c.instructions+=1;NFSU2_TR(0x74371e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B743721:L743721:{c.instructions+=9;NFSU2_TR(0x743721);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743725:{NFSU2_TR(0x743725);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743728:{NFSU2_TR(0x743728);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74372a:{NFSU2_TR(0x74372a);
u8 U[4];
w4(U+0,u32(0x7d28b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74372f:{NFSU2_TR(0x74372f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743734:{NFSU2_TR(0x743734);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743735:{NFSU2_TR(0x743735);
u8 U[4];
w4(U+0,u32(0x7d28acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74373a:{NFSU2_TR(0x74373a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74373b:{NFSU2_TR(0x74373b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743740ull));
TAIL_STATIC(0x74faa0u,74f);
}
B743740:L743740:{c.instructions+=8;NFSU2_TR(0x743740);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B743743:{NFSU2_TR(0x743743);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B743744:{NFSU2_TR(0x743744);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B743745:{NFSU2_TR(0x743745);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B743746:{NFSU2_TR(0x743746);
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
B743748:{NFSU2_TR(0x743748);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B743749:{NFSU2_TR(0x743749);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74374a:{NFSU2_TR(0x74374a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74374b:L74374b:{c.instructions+=3;NFSU2_TR(0x74374b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74374f:{NFSU2_TR(0x74374f);
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
B743752:{NFSU2_TR(0x743752);
if(r1(R+518)){{goto L74377a;}}
}
B743754:L743754:{c.instructions+=7;NFSU2_TR(0x743754);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74375a:{NFSU2_TR(0x74375a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743760:{NFSU2_TR(0x743760);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743763:{NFSU2_TR(0x743763);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743764:{NFSU2_TR(0x743764);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743765:{NFSU2_TR(0x743765);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743766:{NFSU2_TR(0x743766);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74376bull));
TAIL_STATIC(0x754000u,754);
}
B74376b:L74376b:{c.instructions+=3;NFSU2_TR(0x74376b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74376e:{NFSU2_TR(0x74376e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B743770:{NFSU2_TR(0x743770);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74377a:L74377a:{c.instructions+=3;NFSU2_TR(0x74377a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74377e:{NFSU2_TR(0x74377e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B743781:{NFSU2_TR(0x743781);
if(r1(R+518)){{goto L7437ad;}}
}
B743783:L743783:{c.instructions+=7;NFSU2_TR(0x743783);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B743789:{NFSU2_TR(0x743789);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74378f:{NFSU2_TR(0x74378f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743792:{NFSU2_TR(0x743792);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743793:{NFSU2_TR(0x743793);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743794:{NFSU2_TR(0x743794);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743795:{NFSU2_TR(0x743795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74379aull));
TAIL_STATIC(0x752780u,752);
}
B74379a:L74379a:{c.instructions+=3;NFSU2_TR(0x74379a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74379d:{NFSU2_TR(0x74379d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7437a3:{NFSU2_TR(0x7437a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7437ad:L7437ad:{c.instructions+=3;NFSU2_TR(0x7437ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7437b1:{NFSU2_TR(0x7437b1);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7437b4:{NFSU2_TR(0x7437b4);
if(r1(R+518)){{goto L7437f5;}}
}
B7437b6:L7437b6:{c.instructions+=7;NFSU2_TR(0x7437b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7437bc:{NFSU2_TR(0x7437bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7437c2:{NFSU2_TR(0x7437c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7437c5:{NFSU2_TR(0x7437c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7437c6:{NFSU2_TR(0x7437c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7437c7:{NFSU2_TR(0x7437c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7437c8:{NFSU2_TR(0x7437c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7437cdull));
TAIL_STATIC(0x751940u,751);
}
B7437cd:L7437cd:{c.instructions+=5;NFSU2_TR(0x7437cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7437d3:{NFSU2_TR(0x7437d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7437d5:{NFSU2_TR(0x7437d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7437d8:{NFSU2_TR(0x7437d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7437da:{NFSU2_TR(0x7437da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7437ea;}}
}
B7437dc:L7437dc:{c.instructions+=3;NFSU2_TR(0x7437dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7437e2:{NFSU2_TR(0x7437e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7437e4:{NFSU2_TR(0x7437e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7437ea;}}
}
B7437e6:L7437e6:{c.instructions+=2;NFSU2_TR(0x7437e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7437e8:{NFSU2_TR(0x7437e8);
{goto L7437ef;}
}
B7437ea:L7437ea:{c.instructions+=1;NFSU2_TR(0x7437ea);
w4(R+0,u32(0x1388ull));
}
B7437ef:L7437ef:{c.instructions+=1;NFSU2_TR(0x7437ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7437f5:L7437f5:{c.instructions+=3;NFSU2_TR(0x7437f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7437f9:{NFSU2_TR(0x7437f9);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7437fc:{NFSU2_TR(0x7437fc);
if(r1(R+518)){{goto L743828;}}
}
B7437fe:L7437fe:{c.instructions+=7;NFSU2_TR(0x7437fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B743804:{NFSU2_TR(0x743804);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74380a:{NFSU2_TR(0x74380a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74380d:{NFSU2_TR(0x74380d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74380e:{NFSU2_TR(0x74380e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74380f:{NFSU2_TR(0x74380f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743810:{NFSU2_TR(0x743810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743815ull));
TAIL_STATIC(0x750e70u,750);
}
B743815:L743815:{c.instructions+=3;NFSU2_TR(0x743815);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B743818:{NFSU2_TR(0x743818);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74381e:{NFSU2_TR(0x74381e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B743828:L743828:{c.instructions+=3;NFSU2_TR(0x743828);
__builtin_memmove((R+24),(R+12),4);
}
B74382a:{NFSU2_TR(0x74382a);
w4(R+28,u32(0x4ull));
}
B74382f:{NFSU2_TR(0x74382f);
}
B743830:L743830:{c.instructions+=2;NFSU2_TR(0x743830);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B743833:{NFSU2_TR(0x743833);
if(r1(R+518)){{goto L74385c;}}
}
B743835:L743835:{c.instructions+=3;NFSU2_TR(0x743835);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B743839:{NFSU2_TR(0x743839);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B74383b:{NFSU2_TR(0x74383b);
if(r1(R+518)){{goto L74384a;}}
}
B74383d:L74383d:{c.instructions+=5;NFSU2_TR(0x74383d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B743841:{NFSU2_TR(0x743841);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B743843:{NFSU2_TR(0x743843);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743844:{NFSU2_TR(0x743844);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743845:{NFSU2_TR(0x743845);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743848ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B743848:L743848:{c.instructions+=1;NFSU2_TR(0x743848);
{goto L743859;}
}
B74384a:L74384a:{c.instructions+=2;NFSU2_TR(0x74384a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B74384c:{NFSU2_TR(0x74384c);
if(r1(R+518)){{goto L74385c;}}
}
B74384e:L74384e:{c.instructions+=5;NFSU2_TR(0x74384e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743852:{NFSU2_TR(0x743852);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B743854:{NFSU2_TR(0x743854);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743855:{NFSU2_TR(0x743855);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743856:{NFSU2_TR(0x743856);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743859ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B743859:L743859:{c.instructions+=1;NFSU2_TR(0x743859);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74385c:L74385c:{c.instructions+=3;NFSU2_TR(0x74385c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B74385f:{NFSU2_TR(0x74385f);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B743860:{NFSU2_TR(0x743860);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743830u);}goto L743830;}}
}
B743862:L743862:{c.instructions+=7;NFSU2_TR(0x743862);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B743863:{NFSU2_TR(0x743863);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B743864:{NFSU2_TR(0x743864);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B743865:{NFSU2_TR(0x743865);
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
B743867:{NFSU2_TR(0x743867);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B743868:{NFSU2_TR(0x743868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B743869:{NFSU2_TR(0x743869);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74386a:L74386a:{c.instructions+=4;NFSU2_TR(0x74386a);
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
B74386d:{NFSU2_TR(0x74386d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74386e:{NFSU2_TR(0x74386e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74386f:{NFSU2_TR(0x74386f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743870:L743870:{c.instructions+=12;NFSU2_TR(0x743870);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x108ull))));
}
B743876:{NFSU2_TR(0x743876);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74387b:{NFSU2_TR(0x74387b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74387c:{NFSU2_TR(0x74387c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74387d:{NFSU2_TR(0x74387d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74387e:{NFSU2_TR(0x74387e);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B743885:{NFSU2_TR(0x743885);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B743888:{NFSU2_TR(0x743888);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B74388a:{NFSU2_TR(0x74388a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74388c:{NFSU2_TR(0x74388c);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743893:{NFSU2_TR(0x743893);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743894:{NFSU2_TR(0x743894);
if(r1(R+518)){{goto L74394f;}}
}
B74389a:L74389a:{c.instructions+=2;NFSU2_TR(0x74389a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74389c:{NFSU2_TR(0x74389c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+4),(U+0),4);
}
B7438a2:L7438a2:{c.instructions+=2;NFSU2_TR(0x7438a2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B7438a5:{NFSU2_TR(0x7438a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7438b0;}}
}
B7438a7:L7438a7:{c.instructions+=4;NFSU2_TR(0x7438a7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7438a8:{NFSU2_TR(0x7438a8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B7438ab:{NFSU2_TR(0x7438ab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7438ae:{NFSU2_TR(0x7438ae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7438a2u);}goto L7438a2;}}
}
B7438b0:L7438b0:{c.instructions+=2;NFSU2_TR(0x7438b0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7438b3:{NFSU2_TR(0x7438b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74394f;}}
}
B7438b9:L7438b9:{c.instructions+=8;NFSU2_TR(0x7438b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7438bb:{NFSU2_TR(0x7438bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7438bf:{NFSU2_TR(0x7438bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7438c0:{NFSU2_TR(0x7438c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7438c3:{NFSU2_TR(0x7438c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7438c4:{NFSU2_TR(0x7438c4);
u8 U[4];
w4(U+0,u32(0x7d28acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7438c9:{NFSU2_TR(0x7438c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7438ca:{NFSU2_TR(0x7438ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7438cfull));
TAIL_STATIC(0x7500a0u,750);
}
B7438cf:L7438cf:{c.instructions+=3;NFSU2_TR(0x7438cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B7438d2:{NFSU2_TR(0x7438d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7438d4:{NFSU2_TR(0x7438d4);
if(r1(R+518)){{goto L74394f;}}
}
B7438d6:L7438d6:{c.instructions+=4;NFSU2_TR(0x7438d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7438da:{NFSU2_TR(0x7438da);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7438dc:{NFSU2_TR(0x7438dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7438dd:{NFSU2_TR(0x7438dd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L743925;}}
}
B7438df:L7438df:{c.instructions+=18;NFSU2_TR(0x7438df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7438e2:{NFSU2_TR(0x7438e2);
w4(R+4,u32(r1(R+0)));
}
B7438e5:{NFSU2_TR(0x7438e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7438e6:{NFSU2_TR(0x7438e6);
__builtin_memmove((R+8),(R+0),4);
}
B7438e8:{NFSU2_TR(0x7438e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B7438eb:{NFSU2_TR(0x7438eb);
w4(R+4,u32(r1(R+8)));
}
B7438ee:{NFSU2_TR(0x7438ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7438ef:{NFSU2_TR(0x7438ef);
__builtin_memmove((R+8),(R+0),4);
}
B7438f1:{NFSU2_TR(0x7438f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B7438f4:{NFSU2_TR(0x7438f4);
w4(R+4,u32(r1(R+8)));
}
B7438f7:{NFSU2_TR(0x7438f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7438f8:{NFSU2_TR(0x7438f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7438fb:{NFSU2_TR(0x7438fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B7438fe:{NFSU2_TR(0x7438fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7438ff:{NFSU2_TR(0x7438ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B743903:{NFSU2_TR(0x743903);
u8 U[4];
w4(U+0,u32(0x7d28ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743908:{NFSU2_TR(0x743908);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743909:{NFSU2_TR(0x743909);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74390eull));
TAIL_STATIC(0x75c784u,75c);
}
B74390e:L74390e:{c.instructions+=7;NFSU2_TR(0x74390e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743911:{NFSU2_TR(0x743911);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B743915:{NFSU2_TR(0x743915);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743916:{NFSU2_TR(0x743916);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x2ull))));
}
B743919:{NFSU2_TR(0x743919);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74391a:{NFSU2_TR(0x74391a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74391b:{NFSU2_TR(0x74391b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743920ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743680u);}goto L743680;}
}
B743920:L743920:{c.instructions+=2;NFSU2_TR(0x743920);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B743923:{NFSU2_TR(0x743923);
{goto L74394f;}
}
B743925:L743925:{c.instructions+=6;NFSU2_TR(0x743925);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B743929:{NFSU2_TR(0x743929);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74392e:{NFSU2_TR(0x74392e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74392f:{NFSU2_TR(0x74392f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743932:{NFSU2_TR(0x743932);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743935:{NFSU2_TR(0x743935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74393aull));
TAIL_STATIC(0x75c784u,75c);
}
B74393a:L74393a:{c.instructions+=7;NFSU2_TR(0x74393a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74393d:{NFSU2_TR(0x74393d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B743941:{NFSU2_TR(0x743941);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743942:{NFSU2_TR(0x743942);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1ull))));
}
B743945:{NFSU2_TR(0x743945);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743946:{NFSU2_TR(0x743946);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743947:{NFSU2_TR(0x743947);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74394cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743680u);}goto L743680;}
}
B74394c:L74394c:{c.instructions+=1;NFSU2_TR(0x74394c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74394f:L74394f:{c.instructions+=2;NFSU2_TR(0x74394f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B743951:{NFSU2_TR(0x743951);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+28),(U+0),4);
}
B743957:L743957:{c.instructions+=3;NFSU2_TR(0x743957);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B743959:{NFSU2_TR(0x743959);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74395b:{NFSU2_TR(0x74395b);
if(r1(R+518)){{goto L74398c;}}
}
B74395d:L74395d:{c.instructions+=2;NFSU2_TR(0x74395d);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74395f:{NFSU2_TR(0x74395f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74396a;}}
}
B743961:L743961:{c.instructions+=2;NFSU2_TR(0x743961);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743962:{NFSU2_TR(0x743962);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743965ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B743965:L743965:{c.instructions+=2;NFSU2_TR(0x743965);
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
B743968:{NFSU2_TR(0x743968);
__builtin_memmove((R+20),(R+0),4);
}
B74396a:L74396a:{c.instructions+=3;NFSU2_TR(0x74396a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B74396c:{NFSU2_TR(0x74396c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74396d:{NFSU2_TR(0x74396d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743970ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B743970:L743970:{c.instructions+=3;NFSU2_TR(0x743970);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B743973:{NFSU2_TR(0x743973);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B743976:{NFSU2_TR(0x743976);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74398c;}}
}
B743978:L743978:{c.instructions+=3;NFSU2_TR(0x743978);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74397b:{NFSU2_TR(0x74397b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74397d:{NFSU2_TR(0x74397d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743982;}}
}
B74397f:L74397f:{c.instructions+=1;NFSU2_TR(0x74397f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743982:L743982:{c.instructions+=4;NFSU2_TR(0x743982);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B743985:{NFSU2_TR(0x743985);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B743988:{NFSU2_TR(0x743988);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
}
B74398a:{NFSU2_TR(0x74398a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7439ae;}}
}
B74398c:L74398c:{c.instructions+=4;NFSU2_TR(0x74398c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B74398d:{NFSU2_TR(0x74398d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B743990:{NFSU2_TR(0x743990);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B743993:{NFSU2_TR(0x743993);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743957u);}goto L743957;}}
}
B743995:L743995:{c.instructions+=7;NFSU2_TR(0x743995);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B743996:{NFSU2_TR(0x743996);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B743997:{NFSU2_TR(0x743997);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B743998:{NFSU2_TR(0x743998);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74399a:{NFSU2_TR(0x74399a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74399b:{NFSU2_TR(0x74399b);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7439a2:{NFSU2_TR(0x7439a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7439a7ull));
TAIL_STATIC(0x76115eu,761);
}
B7439a7:L7439a7:{c.instructions+=2;NFSU2_TR(0x7439a7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x108ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x108ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x108ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7439ad:{NFSU2_TR(0x7439ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7439ae:L7439ae:{c.instructions+=11;NFSU2_TR(0x7439ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B7439b1:{NFSU2_TR(0x7439b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B7439b4:{NFSU2_TR(0x7439b4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7439b6:{NFSU2_TR(0x7439b6);
u8 U[16];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B7439bd:{NFSU2_TR(0x7439bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7439c0:{NFSU2_TR(0x7439c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7439c3:{NFSU2_TR(0x7439c3);
u8 U[16];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B7439ca:{NFSU2_TR(0x7439ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7439cd:{NFSU2_TR(0x7439cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7439d1:{NFSU2_TR(0x7439d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7439d4:{NFSU2_TR(0x7439d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743995u);}goto L743995;}}
}
B7439d6:L7439d6:{c.instructions+=3;NFSU2_TR(0x7439d6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7439d8:{NFSU2_TR(0x7439d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+28),(U+0),4);
}
B7439de:{NFSU2_TR(0x7439de);
__builtin_memmove((R+28),(R+28),4);
}
B7439e0:L7439e0:{c.instructions+=2;NFSU2_TR(0x7439e0);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7439e4:{NFSU2_TR(0x7439e4);
if(r1(R+518)){{goto L7439f9;}}
}
B7439e6:L7439e6:{c.instructions+=3;NFSU2_TR(0x7439e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7439e8:{NFSU2_TR(0x7439e8);
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
B7439ea:{NFSU2_TR(0x7439ea);
if(r1(R+518)){{goto L7439f9;}}
}
B7439ec:L7439ec:{c.instructions+=2;NFSU2_TR(0x7439ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7439ed:{NFSU2_TR(0x7439ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7439f0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7439f0:L7439f0:{c.instructions+=2;NFSU2_TR(0x7439f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7439f3:{NFSU2_TR(0x7439f3);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B7439f9:L7439f9:{c.instructions+=4;NFSU2_TR(0x7439f9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7439fa:{NFSU2_TR(0x7439fa);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B7439fd:{NFSU2_TR(0x7439fd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B743a00:{NFSU2_TR(0x743a00);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7439e0u);}goto L7439e0;}}
}
B743a02:L743a02:{c.instructions+=3;NFSU2_TR(0x743a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743a05:{NFSU2_TR(0x743a05);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743a07:{NFSU2_TR(0x743a07);
if(r1(R+518)){{goto L743a19;}}
}
B743a09:L743a09:{c.instructions+=2;NFSU2_TR(0x743a09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743a0a:{NFSU2_TR(0x743a0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743a0full));
TAIL_STATIC(0x7502f0u,750);
}
B743a0f:L743a0f:{c.instructions+=2;NFSU2_TR(0x743a0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B743a12:{NFSU2_TR(0x743a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B743a19:L743a19:{c.instructions+=3;NFSU2_TR(0x743a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743a1c:{NFSU2_TR(0x743a1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743a1e:{NFSU2_TR(0x743a1e);
if(r1(R+518)){{goto L743a30;}}
}
B743a20:L743a20:{c.instructions+=2;NFSU2_TR(0x743a20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743a21:{NFSU2_TR(0x743a21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743a26ull));
TAIL_STATIC(0x7502f0u,750);
}
B743a26:L743a26:{c.instructions+=2;NFSU2_TR(0x743a26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B743a29:{NFSU2_TR(0x743a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B743a30:L743a30:{c.instructions+=7;NFSU2_TR(0x743a30);
u8 U[16];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B743a37:{NFSU2_TR(0x743a37);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743a3e:{NFSU2_TR(0x743a3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B743a3f:{NFSU2_TR(0x743a3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B743a40:{NFSU2_TR(0x743a40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B743a41:{NFSU2_TR(0x743a41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B743a42:{NFSU2_TR(0x743a42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743a47ull));
TAIL_STATIC(0x76115eu,761);
}
B743a47:L743a47:{c.instructions+=2;NFSU2_TR(0x743a47);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x108ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x108ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x108ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B743a4d:{NFSU2_TR(0x743a4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743a50:L743a50:{c.instructions+=5;NFSU2_TR(0x743a50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743a51:{NFSU2_TR(0x743a51);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B743a55:{NFSU2_TR(0x743a55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743a58:{NFSU2_TR(0x743a58);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743a5a:{NFSU2_TR(0x743a5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743a69;}}
}
B743a5c:L743a5c:{c.instructions+=2;NFSU2_TR(0x743a5c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743a5e:{NFSU2_TR(0x743a5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743a63ull));
TAIL_STATIC(0x750160u,750);
}
B743a63:L743a63:{c.instructions+=2;NFSU2_TR(0x743a63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B743a66:{NFSU2_TR(0x743a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743a69:L743a69:{c.instructions+=3;NFSU2_TR(0x743a69);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743a6d:{NFSU2_TR(0x743a6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743a6f:{NFSU2_TR(0x743a6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743a74;}}
}
B743a71:L743a71:{c.instructions+=1;NFSU2_TR(0x743a71);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B743a74:L743a74:{c.instructions+=4;NFSU2_TR(0x743a74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743a77:{NFSU2_TR(0x743a77);
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
B743a79:{NFSU2_TR(0x743a79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B743a7a:{NFSU2_TR(0x743a7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743a7d;}}
}
B743a7c:L743a7c:{c.instructions+=1;NFSU2_TR(0x743a7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743a7d:L743a7d:{c.instructions+=7;NFSU2_TR(0x743a7d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B743a81:{NFSU2_TR(0x743a81);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743a83:{NFSU2_TR(0x743a83);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743a85:{NFSU2_TR(0x743a85);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743a86:{NFSU2_TR(0x743a86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743a87:{NFSU2_TR(0x743a87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743a88:{NFSU2_TR(0x743a88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743a8dull));
TAIL_STATIC(0x7500a0u,750);
}
B743a8d:L743a8d:{c.instructions+=2;NFSU2_TR(0x743a8d);
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
B743a90:{NFSU2_TR(0x743a90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743aa0:L743aa0:{c.instructions+=5;NFSU2_TR(0x743aa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743aa1:{NFSU2_TR(0x743aa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B743aa5:{NFSU2_TR(0x743aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743aa8:{NFSU2_TR(0x743aa8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743aaa:{NFSU2_TR(0x743aaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743ab9;}}
}
B743aac:L743aac:{c.instructions+=2;NFSU2_TR(0x743aac);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743aae:{NFSU2_TR(0x743aae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743ab3ull));
TAIL_STATIC(0x750160u,750);
}
B743ab3:L743ab3:{c.instructions+=2;NFSU2_TR(0x743ab3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B743ab6:{NFSU2_TR(0x743ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743ab9:L743ab9:{c.instructions+=3;NFSU2_TR(0x743ab9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743abd:{NFSU2_TR(0x743abd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743abf:{NFSU2_TR(0x743abf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743ac4;}}
}
B743ac1:L743ac1:{c.instructions+=1;NFSU2_TR(0x743ac1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B743ac4:L743ac4:{c.instructions+=4;NFSU2_TR(0x743ac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743ac7:{NFSU2_TR(0x743ac7);
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
B743ac9:{NFSU2_TR(0x743ac9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B743aca:{NFSU2_TR(0x743aca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743acd;}}
}
B743acc:L743acc:{c.instructions+=1;NFSU2_TR(0x743acc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743acd:L743acd:{c.instructions+=9;NFSU2_TR(0x743acd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B743ad1:{NFSU2_TR(0x743ad1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743ad3:{NFSU2_TR(0x743ad3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743ad4:{NFSU2_TR(0x743ad4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B743ad8:{NFSU2_TR(0x743ad8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743ad9:{NFSU2_TR(0x743ad9);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743ade:{NFSU2_TR(0x743ade);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743adf:{NFSU2_TR(0x743adf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743ae0:{NFSU2_TR(0x743ae0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743ae5ull));
TAIL_STATIC(0x74fd90u,74f);
}
B743ae5:L743ae5:{c.instructions+=2;NFSU2_TR(0x743ae5);
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
B743ae8:{NFSU2_TR(0x743ae8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743af0:L743af0:{c.instructions+=2;NFSU2_TR(0x743af0);
u8 U[4];
w4(U+0,u32(0xbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743af5:{NFSU2_TR(0x743af5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743afaull));
TAIL_STATIC(0x5832f0u,583);
}
B743afa:L743afa:{c.instructions+=4;NFSU2_TR(0x743afa);
__builtin_memmove((R+8),(R+0),4);
}
B743afc:{NFSU2_TR(0x743afc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B743aff:{NFSU2_TR(0x743aff);
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
B743b01:{NFSU2_TR(0x743b01);
if(r1(R+518)){{goto L743b10;}}
}
B743b03:L743b03:{c.instructions+=4;NFSU2_TR(0x743b03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743b04:{NFSU2_TR(0x743b04);
w4(R+4,u32(0x2full));
}
B743b09:{NFSU2_TR(0x743b09);
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
B743b0b:{NFSU2_TR(0x743b0b);
__builtin_memmove((R+28),(R+8),4);
}
B743b0d:L743b0d:{c.instructions+=1;NFSU2_TR(0x743b0d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L743b0f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743b0du);}goto L743b0d;}
}
B743b0f:L743b0f:{c.instructions+=1;NFSU2_TR(0x743b0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B743b10:L743b10:{c.instructions+=6;NFSU2_TR(0x743b10);
w4(R+0,u32(0x20ull));
}
B743b15:{NFSU2_TR(0x743b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743b1b:{NFSU2_TR(0x743b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743b21:{NFSU2_TR(0x743b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
w4(U+4,u32(0xfeull));
s4(u32(r4(U+0)),r4(U+4));
}
B743b28:{NFSU2_TR(0x743b28);
__builtin_memmove((R+0),(R+8),4);
}
B743b2a:{NFSU2_TR(0x743b2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743b30:L743b30:{c.instructions+=4;NFSU2_TR(0x743b30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743b31:{NFSU2_TR(0x743b31);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B743b35:{NFSU2_TR(0x743b35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743b36:{NFSU2_TR(0x743b36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743b3bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7435b0u);}goto L7435b0;}
}
B743b3b:L743b3b:{c.instructions+=2;NFSU2_TR(0x743b3b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743b3c:{NFSU2_TR(0x743b3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743b41ull));
TAIL_STATIC(0x598ec0u,598);
}
B743b41:L743b41:{c.instructions+=3;NFSU2_TR(0x743b41);
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
B743b44:{NFSU2_TR(0x743b44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B743b45:{NFSU2_TR(0x743b45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743b50:L743b50:{c.instructions+=3;NFSU2_TR(0x743b50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743b51:{NFSU2_TR(0x743b51);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743b53:{NFSU2_TR(0x743b53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743b58ull));
TAIL_STATIC(0x5836d0u,583);
}
B743b58:L743b58:{c.instructions+=4;NFSU2_TR(0x743b58);
__builtin_memmove((R+24),(R+0),4);
}
B743b5a:{NFSU2_TR(0x743b5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B743b5d:{NFSU2_TR(0x743b5d);
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
B743b5f:{NFSU2_TR(0x743b5f);
if(r1(R+518)){{goto L743bd7;}}
}
B743b61:L743b61:{c.instructions+=5;NFSU2_TR(0x743b61);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B743b65:{NFSU2_TR(0x743b65);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B743b67:{NFSU2_TR(0x743b67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743b68:{NFSU2_TR(0x743b68);
w4(R+4,u32(0x17ull));
}
B743b6d:{NFSU2_TR(0x743b6d);
__builtin_memmove((R+28),(R+24),4);
}
B743b6f:L743b6f:{c.instructions+=1;NFSU2_TR(0x743b6f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L743b71;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743b6fu);}goto L743b6f;}
}
B743b71:L743b71:{c.instructions+=15;NFSU2_TR(0x743b71);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743b75:{NFSU2_TR(0x743b75);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743b79:{NFSU2_TR(0x743b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743b7c:{NFSU2_TR(0x743b7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743b7f:{NFSU2_TR(0x743b7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743b82:{NFSU2_TR(0x743b82);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1628ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743b88:{NFSU2_TR(0x743b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743b8b:{NFSU2_TR(0x743b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1628ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743b91:{NFSU2_TR(0x743b91);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B743b92:{NFSU2_TR(0x743b92);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffffffull))));
}
B743b98:{NFSU2_TR(0x743b98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1628ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743b9e:{NFSU2_TR(0x743b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743ba4:{NFSU2_TR(0x743ba4);
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
B743ba6:{NFSU2_TR(0x743ba6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1618ull))));
__builtin_memmove((R+4),(U+0),4);
}
B743bac:{NFSU2_TR(0x743bac);
if(r1(R+518)){{goto L743bc1;}}
}
B743bae:L743bae:{c.instructions+=1;NFSU2_TR(0x743bae);
w4(R+8,u32(0x70696e67ull));
}
B743bb3:L743bb3:{c.instructions+=2;NFSU2_TR(0x743bb3);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B743bb6:{NFSU2_TR(0x743bb6);
if(r1(R+518)){{goto L743bc1;}}
}
B743bb8:L743bb8:{c.instructions+=4;NFSU2_TR(0x743bb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B743bbb:{NFSU2_TR(0x743bbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B743bbd:{NFSU2_TR(0x743bbd);
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
B743bbf:{NFSU2_TR(0x743bbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743bb3u);}goto L743bb3;}}
}
B743bc1:L743bc1:{c.instructions+=6;NFSU2_TR(0x743bc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B743bc3:{NFSU2_TR(0x743bc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B743bc5:{NFSU2_TR(0x743bc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743bc8:{NFSU2_TR(0x743bc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B743bca:{NFSU2_TR(0x743bca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743bcb:{NFSU2_TR(0x743bcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743bd0ull));
TAIL_STATIC(0x754c40u,754);
}
B743bd0:L743bd0:{c.instructions+=3;NFSU2_TR(0x743bd0);
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
B743bd3:{NFSU2_TR(0x743bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743bd6:{NFSU2_TR(0x743bd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B743bd7:L743bd7:{c.instructions+=3;NFSU2_TR(0x743bd7);
__builtin_memmove((R+0),(R+24),4);
}
B743bd9:{NFSU2_TR(0x743bd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B743bda:{NFSU2_TR(0x743bda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743be0:L743be0:{c.instructions+=6;NFSU2_TR(0x743be0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743be1:{NFSU2_TR(0x743be1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743be2:{NFSU2_TR(0x743be2);
__builtin_memmove((R+24),(R+0),4);
}
B743be4:{NFSU2_TR(0x743be4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B743be6:{NFSU2_TR(0x743be6);
w4(R+4,u32(0x17ull));
}
B743beb:{NFSU2_TR(0x743beb);
__builtin_memmove((R+28),(R+8),4);
}
B743bed:L743bed:{c.instructions+=1;NFSU2_TR(0x743bed);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L743bef;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743bedu);}goto L743bed;}
}
B743bef:L743bef:{c.instructions+=3;NFSU2_TR(0x743bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743bf5:{NFSU2_TR(0x743bf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743bf7:{NFSU2_TR(0x743bf7);
if(r1(R+518)){{goto L743c23;}}
}
B743bf9:L743bf9:{c.instructions+=2;NFSU2_TR(0x743bf9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B743bfc:{NFSU2_TR(0x743bfc);
if(r1(R+518)){{goto L743c06;}}
}
B743bfe:L743bfe:{c.instructions+=2;NFSU2_TR(0x743bfe);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44515545ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B743c04:{NFSU2_TR(0x743c04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743c23;}}
}
B743c06:L743c06:{c.instructions+=6;NFSU2_TR(0x743c06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743c09:{NFSU2_TR(0x743c09);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1618ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743c0f:{NFSU2_TR(0x743c0f);
__builtin_memmove((R+24),(R+0),4);
}
B743c11:{NFSU2_TR(0x743c11);
__builtin_memmove((R+28),(R+8),4);
}
B743c13:{NFSU2_TR(0x743c13);
w4(R+4,u32(0x17ull));
}
B743c18:{NFSU2_TR(0x743c18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743c19:L743c19:{c.instructions+=1;NFSU2_TR(0x743c19);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L743c1b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743c19u);}goto L743c19;}
}
B743c1b:L743c1b:{c.instructions+=1;NFSU2_TR(0x743c1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743c20ull));
TAIL_STATIC(0x598ec0u,598);
}
B743c20:L743c20:{c.instructions+=1;NFSU2_TR(0x743c20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B743c23:L743c23:{c.instructions+=7;NFSU2_TR(0x743c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743c29:{NFSU2_TR(0x743c29);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B743c2b:{NFSU2_TR(0x743c2b);
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
B743c2d:{NFSU2_TR(0x743c2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B743c2e:{NFSU2_TR(0x743c2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B743c31:{NFSU2_TR(0x743c31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B743c32:{NFSU2_TR(0x743c32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743c40:L743c40:{c.instructions+=8;NFSU2_TR(0x743c40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B743c44:{NFSU2_TR(0x743c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743c4a:{NFSU2_TR(0x743c4a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1618ull))));
}
B743c50:{NFSU2_TR(0x743c50);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743c52:{NFSU2_TR(0x743c52);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743c53:{NFSU2_TR(0x743c53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743c54:{NFSU2_TR(0x743c54);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743c55:{NFSU2_TR(0x743c55);
if(r1(R+518)){{goto L743cc5;}}
}
B743c57:L743c57:{c.instructions+=1;NFSU2_TR(0x743c57);
{goto L743c60;}
}
B743c60:L743c60:{c.instructions+=3;NFSU2_TR(0x743c60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B743c62:{NFSU2_TR(0x743c62);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x70696e67ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B743c69:{NFSU2_TR(0x743c69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743cbd;}}
}
B743c6b:L743c6b:{c.instructions+=2;NFSU2_TR(0x743c6b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B743c6e:{NFSU2_TR(0x743c6e);
if(r1(R+518)){{goto L743cb4;}}
}
B743c70:L743c70:{c.instructions+=4;NFSU2_TR(0x743c70);
w4(R+4,u32(0x5ull));
}
B743c75:{NFSU2_TR(0x743c75);
__builtin_memmove((R+28),(R+12),4);
}
B743c77:{NFSU2_TR(0x743c77);
__builtin_memmove((R+24),(R+0),4);
}
B743c79:{NFSU2_TR(0x743c79);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B743c7b:L743c7b:{c.instructions+=1;NFSU2_TR(0x743c7b);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L743c7d;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743c7bu);}goto L743c7b;}}
}
B743c7d:L743c7d:{c.instructions+=1;NFSU2_TR(0x743c7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743cbd;}}
}
B743c7f:L743c7f:{c.instructions+=6;NFSU2_TR(0x743c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743c82:{NFSU2_TR(0x743c82);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B743c86:{NFSU2_TR(0x743c86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B743c88:{NFSU2_TR(0x743c88);
__builtin_memmove((R+24),(R+0),4);
}
B743c8a:{NFSU2_TR(0x743c8a);
w4(R+4,u32(0x17ull));
}
B743c8f:{NFSU2_TR(0x743c8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743c90:L743c90:{c.instructions+=1;NFSU2_TR(0x743c90);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L743c92;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743c90u);}goto L743c90;}
}
B743c92:L743c92:{c.instructions+=1;NFSU2_TR(0x743c92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743c97ull));
TAIL_STATIC(0x598ec0u,598);
}
B743c97:L743c97:{c.instructions+=10;NFSU2_TR(0x743c97);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743c9b:{NFSU2_TR(0x743c9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x161cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743ca1:{NFSU2_TR(0x743ca1);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B743ca4:{NFSU2_TR(0x743ca4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B743ca5:{NFSU2_TR(0x743ca5);
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
B743ca6:{NFSU2_TR(0x743ca6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B743ca7:{NFSU2_TR(0x743ca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x161cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743cad:{NFSU2_TR(0x743cad);
w4(R+0,u32(0x1ull));
}
B743cb2:{NFSU2_TR(0x743cb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B743cb3:{NFSU2_TR(0x743cb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743cb4:L743cb4:{c.instructions+=3;NFSU2_TR(0x743cb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743cb8:{NFSU2_TR(0x743cb8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B743cbb:{NFSU2_TR(0x743cbb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743c7fu);}goto L743c7f;}}
}
B743cbd:L743cbd:{c.instructions+=3;NFSU2_TR(0x743cbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((R+8),(U+0),4);
}
B743cc0:{NFSU2_TR(0x743cc0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B743cc3:{NFSU2_TR(0x743cc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743c60u);}goto L743c60;}}
}
B743cc5:L743cc5:{c.instructions+=5;NFSU2_TR(0x743cc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B743cc6:{NFSU2_TR(0x743cc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B743cc7:{NFSU2_TR(0x743cc7);
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
B743cc9:{NFSU2_TR(0x743cc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B743cca:{NFSU2_TR(0x743cca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743cd0:L743cd0:{c.instructions+=4;NFSU2_TR(0x743cd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743cd1:{NFSU2_TR(0x743cd1);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B743cd6:{NFSU2_TR(0x743cd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B743cd9:{NFSU2_TR(0x743cd9);
__builtin_memmove((R+16),(R+16),4);
}
B743ce0:L743ce0:{c.instructions+=3;NFSU2_TR(0x743ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743ce6:{NFSU2_TR(0x743ce6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743ce8:{NFSU2_TR(0x743ce8);
if(r1(R+518)){{goto L743d06;}}
}
B743cea:L743cea:{c.instructions+=4;NFSU2_TR(0x743cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743ced:{NFSU2_TR(0x743ced);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743cee:{NFSU2_TR(0x743cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1618ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743cf4:{NFSU2_TR(0x743cf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743cf9ull));
TAIL_STATIC(0x598ec0u,598);
}
B743cf9:L743cf9:{c.instructions+=4;NFSU2_TR(0x743cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743cff:{NFSU2_TR(0x743cff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B743d02:{NFSU2_TR(0x743d02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743d04:{NFSU2_TR(0x743d04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743ce0u);}goto L743ce0;}}
}
B743d06:L743d06:{c.instructions+=3;NFSU2_TR(0x743d06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B743d09:{NFSU2_TR(0x743d09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B743d0c:{NFSU2_TR(0x743d0c);
TAIL_STATIC(0x76115eu,761);
}
B743d20:L743d20:{c.instructions+=5;NFSU2_TR(0x743d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743d26:{NFSU2_TR(0x743d26);
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
B743d28:{NFSU2_TR(0x743d28);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743d29:{NFSU2_TR(0x743d29);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B743d2d:{NFSU2_TR(0x743d2d);
if(r1(R+518)){{goto L743d81;}}
}
B743d2f:L743d2f:{c.instructions+=4;NFSU2_TR(0x743d2f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743d30:{NFSU2_TR(0x743d30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743d31:{NFSU2_TR(0x743d31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743d32:{NFSU2_TR(0x743d32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743d37ull));
TAIL_STATIC(0x755090u,755);
}
B743d37:L743d37:{c.instructions+=4;NFSU2_TR(0x743d37);
__builtin_memmove((R+28),(R+0),4);
}
B743d39:{NFSU2_TR(0x743d39);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B743d3c:{NFSU2_TR(0x743d3c);
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
B743d3e:{NFSU2_TR(0x743d3e);
if(r1(R+518)){{goto L743d80;}}
}
B743d40:L743d40:{c.instructions+=5;NFSU2_TR(0x743d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B743d46:{NFSU2_TR(0x743d46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743d47:{NFSU2_TR(0x743d47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743d48:{NFSU2_TR(0x743d48);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743d49:{NFSU2_TR(0x743d49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743d4eull));
TAIL_STATIC(0x73d810u,73d);
}
B743d4e:L743d4e:{c.instructions+=4;NFSU2_TR(0x743d4e);
__builtin_memmove((R+24),(R+0),4);
}
B743d50:{NFSU2_TR(0x743d50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B743d53:{NFSU2_TR(0x743d53);
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
B743d55:{NFSU2_TR(0x743d55);
if(r1(R+518)){{goto L743d7f;}}
}
B743d57:L743d57:{c.instructions+=2;NFSU2_TR(0x743d57);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+14)));
w4(U+18,u32(u32(r4(R+20))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B743d5a:{NFSU2_TR(0x743d5a);
if(r1(R+518)){{goto L743d7f;}}
}
B743d5c:L743d5c:{c.instructions+=6;NFSU2_TR(0x743d5c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743d5d:{NFSU2_TR(0x743d5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B743d60:{NFSU2_TR(0x743d60);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743d65:{NFSU2_TR(0x743d65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743d66:{NFSU2_TR(0x743d66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743d69:{NFSU2_TR(0x743d69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743d6eull));
TAIL_STATIC(0x75c784u,75c);
}
B743d6e:L743d6e:{c.instructions+=5;NFSU2_TR(0x743d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743d74:{NFSU2_TR(0x743d74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743d75:{NFSU2_TR(0x743d75);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743d76:{NFSU2_TR(0x743d76);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743d77:{NFSU2_TR(0x743d77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743d7cull));
TAIL_STATIC(0x73d7c0u,73d);
}
B743d7c:L743d7c:{c.instructions+=1;NFSU2_TR(0x743d7c);
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
B743d7f:L743d7f:{c.instructions+=1;NFSU2_TR(0x743d7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B743d80:L743d80:{c.instructions+=1;NFSU2_TR(0x743d80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B743d81:L743d81:{c.instructions+=2;NFSU2_TR(0x743d81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B743d82:{NFSU2_TR(0x743d82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743d90:L743d90:{c.instructions+=5;NFSU2_TR(0x743d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743d93:{NFSU2_TR(0x743d93);
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
B743d95:{NFSU2_TR(0x743d95);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743d96:{NFSU2_TR(0x743d96);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B743d9a:{NFSU2_TR(0x743d9a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L743dcb;}}
}
B743d9c:L743d9c:{c.instructions+=2;NFSU2_TR(0x743d9c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B743d9f:{NFSU2_TR(0x743d9f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L743dcb;}}
}
B743da1:L743da1:{c.instructions+=5;NFSU2_TR(0x743da1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743da2:{NFSU2_TR(0x743da2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743da3:{NFSU2_TR(0x743da3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x149cull))));
__builtin_memmove((R+24),(U+0),4);
}
B743da9:{NFSU2_TR(0x743da9);
w4(R+12,u32(0x20ull));
}
B743dae:{NFSU2_TR(0x743dae);
__builtin_memmove((R+28),(R+28),4);
}
B743db0:L743db0:{c.instructions+=3;NFSU2_TR(0x743db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743db3:{NFSU2_TR(0x743db3);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
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
B743db6:{NFSU2_TR(0x743db6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743dc3;}}
}
B743db8:L743db8:{c.instructions+=5;NFSU2_TR(0x743db8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743dbb:{NFSU2_TR(0x743dbb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743dbc:{NFSU2_TR(0x743dbc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743dbd:{NFSU2_TR(0x743dbd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743dbe:{NFSU2_TR(0x743dbe);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743dc0ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B743dc0:L743dc0:{c.instructions+=1;NFSU2_TR(0x743dc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B743dc3:L743dc3:{c.instructions+=3;NFSU2_TR(0x743dc3);
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B743dc6:{NFSU2_TR(0x743dc6);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B743dc7:{NFSU2_TR(0x743dc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743db0u);}goto L743db0;}}
}
B743dc9:L743dc9:{c.instructions+=2;NFSU2_TR(0x743dc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B743dca:{NFSU2_TR(0x743dca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B743dcb:L743dcb:{c.instructions+=2;NFSU2_TR(0x743dcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B743dcc:{NFSU2_TR(0x743dcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743dd0:L743dd0:{c.instructions+=7;NFSU2_TR(0x743dd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B743dd3:{NFSU2_TR(0x743dd3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743dd4:{NFSU2_TR(0x743dd4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743dd5:{NFSU2_TR(0x743dd5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743dd6:{NFSU2_TR(0x743dd6);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B743dd8:{NFSU2_TR(0x743dd8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B743dda:{NFSU2_TR(0x743dda);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1168ull))));
__builtin_memmove((R+24),(U+0),4);
}
B743de0:L743de0:{c.instructions+=2;NFSU2_TR(0x743de0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B743de3:{NFSU2_TR(0x743de3);
if(r1(R+518)){{goto L743e23;}}
}
B743de5:L743de5:{c.instructions+=2;NFSU2_TR(0x743de5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B743de7:{NFSU2_TR(0x743de7);
if(r1(R+518)){{goto L743e23;}}
}
B743de9:L743de9:{c.instructions+=3;NFSU2_TR(0x743de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743dec:{NFSU2_TR(0x743dec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743ded:{NFSU2_TR(0x743ded);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743df2ull));
TAIL_STATIC(0x73d9b0u,73d);
}
B743df2:L743df2:{c.instructions+=3;NFSU2_TR(0x743df2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B743df5:{NFSU2_TR(0x743df5);
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
B743df7:{NFSU2_TR(0x743df7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L743e23;}}
}
B743df9:L743df9:{c.instructions+=12;NFSU2_TR(0x743df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B743dfc:{NFSU2_TR(0x743dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743dff:{NFSU2_TR(0x743dff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743e00:{NFSU2_TR(0x743e00);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B743e04:{NFSU2_TR(0x743e04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743e05:{NFSU2_TR(0x743e05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743e06:{NFSU2_TR(0x743e06);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743e0a:{NFSU2_TR(0x743e0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B743e12:{NFSU2_TR(0x743e12);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743e16:{NFSU2_TR(0x743e16);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743e1a:{NFSU2_TR(0x743e1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743e1e:{NFSU2_TR(0x743e1e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743e20ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B743e20:L743e20:{c.instructions+=1;NFSU2_TR(0x743e20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B743e23:L743e23:{c.instructions+=4;NFSU2_TR(0x743e23);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B743e24:{NFSU2_TR(0x743e24);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B743e27:{NFSU2_TR(0x743e27);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x24ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B743e2a:{NFSU2_TR(0x743e2a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743de0u);}goto L743de0;}}
}
B743e2c:L743e2c:{c.instructions+=5;NFSU2_TR(0x743e2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B743e2d:{NFSU2_TR(0x743e2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B743e2e:{NFSU2_TR(0x743e2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B743e2f:{NFSU2_TR(0x743e2f);
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
B743e32:{NFSU2_TR(0x743e32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B743e40:L743e40:{c.instructions+=9;NFSU2_TR(0x743e40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x280ull))));
}
B743e46:{NFSU2_TR(0x743e46);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B743e4b:{NFSU2_TR(0x743e4b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743e4c:{NFSU2_TR(0x743e4c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743e4d:{NFSU2_TR(0x743e4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x284ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743e54:{NFSU2_TR(0x743e54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743e57:{NFSU2_TR(0x743e57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743e58:{NFSU2_TR(0x743e58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743e59:{NFSU2_TR(0x743e59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743e5eull));
TAIL_STATIC(0x74af10u,74a);
}
B743e5e:L743e5e:{c.instructions+=3;NFSU2_TR(0x743e5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B743e60:{NFSU2_TR(0x743e60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743e61:{NFSU2_TR(0x743e61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743e66ull));
TAIL_STATIC(0x754c40u,754);
}
B743e66:L743e66:{c.instructions+=7;NFSU2_TR(0x743e66);
__builtin_memmove((R+20),(R+0),4);
}
B743e68:{NFSU2_TR(0x743e68);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743e69:{NFSU2_TR(0x743e69);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B743e6d:{NFSU2_TR(0x743e6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743e6e:{NFSU2_TR(0x743e6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743e6f:{NFSU2_TR(0x743e6f);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B743e72:{NFSU2_TR(0x743e72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743e77ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743c40u);}goto L743c40;}
}
B743e77:L743e77:{c.instructions+=3;NFSU2_TR(0x743e77);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B743e7a:{NFSU2_TR(0x743e7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743e7c:{NFSU2_TR(0x743e7c);
if(r1(R+518)){{goto L743f3c;}}
}
B743e82:L743e82:{c.instructions+=1;NFSU2_TR(0x743e82);
w4(R+28,u32(0x70696e67ull));
}
B743e87:L743e87:{c.instructions+=4;NFSU2_TR(0x743e87);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743e8b:{NFSU2_TR(0x743e8b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B743e8d:{NFSU2_TR(0x743e8d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B743e8f:{NFSU2_TR(0x743e8f);
if(r1(R+518)){{goto L743f22;}}
}
B743e95:L743e95:{c.instructions+=15;NFSU2_TR(0x743e95);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743e99:{NFSU2_TR(0x743e99);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B743e9d:{NFSU2_TR(0x743e9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743e9e:{NFSU2_TR(0x743e9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B743ea5:{NFSU2_TR(0x743ea5);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743eaa:{NFSU2_TR(0x743eaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743eae:{NFSU2_TR(0x743eae);
__builtin_memmove((R+0),(R+4),4);
}
B743eb0:{NFSU2_TR(0x743eb0);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743eb5:{NFSU2_TR(0x743eb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743eb6:{NFSU2_TR(0x743eb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743eba:{NFSU2_TR(0x743eba);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743ebe:{NFSU2_TR(0x743ebe);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B743ec6:{NFSU2_TR(0x743ec6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743eca:{NFSU2_TR(0x743eca);
u8 U[5];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B743ed1:{NFSU2_TR(0x743ed1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743ed6ull));
TAIL_STATIC(0x741a50u,741);
}
B743ed6:L743ed6:{c.instructions+=7;NFSU2_TR(0x743ed6);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B743eda:{NFSU2_TR(0x743eda);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743edb:{NFSU2_TR(0x743edb);
u8 U[4];
w4(U+0,u32(0x7a12ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743ee0:{NFSU2_TR(0x743ee0);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B743ee7:{NFSU2_TR(0x743ee7);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743eec:{NFSU2_TR(0x743eec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743eed:{NFSU2_TR(0x743eed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743ef2ull));
TAIL_STATIC(0x741a50u,741);
}
B743ef2:L743ef2:{c.instructions+=6;NFSU2_TR(0x743ef2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743ef3:{NFSU2_TR(0x743ef3);
u8 U[4];
w4(U+0,u32(0x7d28dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743ef8:{NFSU2_TR(0x743ef8);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B743eff:{NFSU2_TR(0x743eff);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743f04:{NFSU2_TR(0x743f04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743f05:{NFSU2_TR(0x743f05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743f0aull));
TAIL_STATIC(0x741690u,741);
}
B743f0a:L743f0a:{c.instructions+=6;NFSU2_TR(0x743f0a);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743f11:{NFSU2_TR(0x743f11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743f12:{NFSU2_TR(0x743f12);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B743f16:{NFSU2_TR(0x743f16);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743f17:{NFSU2_TR(0x743f17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743f18:{NFSU2_TR(0x743f18);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743f1full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B743f1f:L743f1f:{c.instructions+=1;NFSU2_TR(0x743f1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B743f22:L743f22:{c.instructions+=6;NFSU2_TR(0x743f22);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743f23:{NFSU2_TR(0x743f23);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B743f27:{NFSU2_TR(0x743f27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743f28:{NFSU2_TR(0x743f28);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743f29:{NFSU2_TR(0x743f29);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B743f2c:{NFSU2_TR(0x743f2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743f31ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743c40u);}goto L743c40;}
}
B743f31:L743f31:{c.instructions+=3;NFSU2_TR(0x743f31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B743f34:{NFSU2_TR(0x743f34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743f36:{NFSU2_TR(0x743f36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743e87u);}goto L743e87;}}
}
B743f3c:L743f3c:{c.instructions+=3;NFSU2_TR(0x743f3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743f42:{NFSU2_TR(0x743f42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743f44:{NFSU2_TR(0x743f44);
if(r1(R+518)){TAIL_STATIC(0x744010u,744);}
}
B743f4a:L743f4a:{c.instructions+=5;NFSU2_TR(0x743f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B743f4d:{NFSU2_TR(0x743f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B743f53:{NFSU2_TR(0x743f53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743f54:{NFSU2_TR(0x743f54);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743f55:{NFSU2_TR(0x743f55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743f5aull));
TAIL_STATIC(0x73d8e0u,73d);
}
B743f5a:L743f5a:{c.instructions+=4;NFSU2_TR(0x743f5a);
__builtin_memmove((R+28),(R+0),4);
}
B743f5c:{NFSU2_TR(0x743f5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B743f5f:{NFSU2_TR(0x743f5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743f61:{NFSU2_TR(0x743f61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743f80;}}
}
B743f63:L743f63:{c.instructions+=5;NFSU2_TR(0x743f63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743f64:{NFSU2_TR(0x743f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B743f67:{NFSU2_TR(0x743f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B743f6d:{NFSU2_TR(0x743f6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743f6e:{NFSU2_TR(0x743f6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743f73ull));
TAIL_STATIC(0x73d8e0u,73d);
}
B743f73:L743f73:{c.instructions+=4;NFSU2_TR(0x743f73);
__builtin_memmove((R+28),(R+0),4);
}
B743f75:{NFSU2_TR(0x743f75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B743f78:{NFSU2_TR(0x743f78);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743f7a:{NFSU2_TR(0x743f7a);
if(r1(R+518)){TAIL_STATIC(0x744010u,744);}
}
B743f80:L743f80:{c.instructions+=7;NFSU2_TR(0x743f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B743f83:{NFSU2_TR(0x743f83);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743f85:{NFSU2_TR(0x743f85);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743f87:{NFSU2_TR(0x743f87);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x398ull))));
__builtin_memmove((R+4),(U+0),4);
}
B743f8d:{NFSU2_TR(0x743f8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743f8e:{NFSU2_TR(0x743f8e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743f8f:{NFSU2_TR(0x743f8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743f94ull));
TAIL_STATIC(0x74b1f0u,74b);
}
B743f94:L743f94:{c.instructions+=3;NFSU2_TR(0x743f94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B743f97:{NFSU2_TR(0x743f97);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743f99:{NFSU2_TR(0x743f99);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x74400du,744);}
}
B743f9b:L743f9b:{c.instructions+=5;NFSU2_TR(0x743f9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743f9c:{NFSU2_TR(0x743f9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B743fa0:{NFSU2_TR(0x743fa0);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743fa5:{NFSU2_TR(0x743fa5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B743fa6:{NFSU2_TR(0x743fa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x743fabull));
TAIL_STATIC(0x75c784u,75c);
}
B743fab:L743fab:{c.instructions+=4;NFSU2_TR(0x743fab);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+20),(U+0),4);
}
B743fae:{NFSU2_TR(0x743fae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B743fb1:{NFSU2_TR(0x743fb1);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B743fb5:{NFSU2_TR(0x743fb5);
__builtin_memmove((R+0),(R+20),4);
}
B743fb7:L743fb7:{c.instructions+=5;NFSU2_TR(0x743fb7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B743fb9:{NFSU2_TR(0x743fb9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B743fbb:{NFSU2_TR(0x743fbb);
__builtin_memmove((R+4),(R+8),1);
}
B743fbd:{NFSU2_TR(0x743fbd);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(R+8))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B743fbf:{NFSU2_TR(0x743fbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743fdf;}}
}
B743fc1:L743fc1:{c.instructions+=2;NFSU2_TR(0x743fc1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B743fc3:{NFSU2_TR(0x743fc3);
if(r1(R+518)){{goto L743fdb;}}
}
B743fc5:L743fc5:{c.instructions+=5;NFSU2_TR(0x743fc5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B743fc8:{NFSU2_TR(0x743fc8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B743fcb:{NFSU2_TR(0x743fcb);
__builtin_memmove((R+4),(R+8),1);
}
B743fcd:{NFSU2_TR(0x743fcd);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(R+8))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B743fcf:{NFSU2_TR(0x743fcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L743fdf;}}
}
B743fd1:L743fd1:{c.instructions+=4;NFSU2_TR(0x743fd1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B743fd4:{NFSU2_TR(0x743fd4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B743fd7:{NFSU2_TR(0x743fd7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B743fd9:{NFSU2_TR(0x743fd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743fb7u);}goto L743fb7;}}
}
B743fdb:L743fdb:{c.instructions+=2;NFSU2_TR(0x743fdb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B743fdd:{NFSU2_TR(0x743fdd);
{goto L743fe4;}
}
B743fdf:L743fdf:{c.instructions+=2;NFSU2_TR(0x743fdf);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B743fe1:{NFSU2_TR(0x743fe1);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B743fe4:L743fe4:{c.instructions+=2;NFSU2_TR(0x743fe4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B743fe6:{NFSU2_TR(0x743fe6);
if(r1(R+518)){TAIL_STATIC(0x74400du,744);}
}
B743fe8:L743fe8:{c.instructions+=4;NFSU2_TR(0x743fe8);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B743fec:{NFSU2_TR(0x743fec);
__builtin_memmove((R+8),(R+20),4);
}
B743fee:{NFSU2_TR(0x743fee);
__builtin_memmove((R+4),(R+0),4);
}
B743ff0:{NFSU2_TR(0x743ff0);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B743ff2:L743ff2:{c.instructions+=5;NFSU2_TR(0x743ff2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B743ff4:{NFSU2_TR(0x743ff4);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B743ff7:{NFSU2_TR(0x743ff7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B743ff8:{NFSU2_TR(0x743ff8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B743ffa:{NFSU2_TR(0x743ffa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x743ff2u);}goto L743ff2;}}
}
B743ffc:L743ffc:{c.instructions+=1;NFSU2_TR(0x743ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
TAIL_STATIC(0x744002u,744);
}
XIT:NFSU2_TR_EXIT(0x743,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
